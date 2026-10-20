"""frame_census.py - which functions compile to the wrong stack frame size?

The first instruction of a mwcc-compiled function is

    addiu $sp, $sp, -N

and N is the frame size, which is a function of the locals in the C source.  If
our N differs from retail's N then every sp-relative offset later in the
function is wrong as well, which is what the "50-100% diff ratio" population
and the "first difference at byte offset 0" population really are.

Measured over the whole repository (2026-10-20):

  * 1299 first-party NONMATCHING functions
  *  920 already have the right frame size
  *  326 have a different frame size, and 186 of those are off by exactly
     +/-16 bytes - the signature of ONE local whose declared width is wrong
  * 350 functions have their first difference at byte offset 0, and 326 of
     those are this case

So a wrong frame is a *fingerprint* of a wrong local layout, not a bug in its
own right: forcing the frame to the right size by adding a local does not fix
the function (measured - the diff got worse in both cases tried), because the
individual locals are in the wrong places, not merely the wrong total.

Usage:
    python tools/frame_census.py [--csv]
"""
import os, sys, json, subprocess, tempfile, collections, argparse
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from verify import (REPO, TOOLS, ObjectFile, RetailElf, load_config,
                     mask_bytes, scan_markers, window_for)

CFG = load_config()
SIZES = json.loads((TOOLS / "slus21621_functions.json").read_text())
RETAIL = RetailElf(CFG["retail_elf"], expect_sha1=SIZES.get("sha1"))
BOUNDS = {int(a, 16) for a in SIZES["windows"]}
for c in sorted((REPO / "src").rglob("*.c")):
    if c.name.endswith(".match.c") or c.name.startswith(".permute_"):
        continue
    for m in scan_markers(c):
        BOUNDS.add(m["addr"])
BOUNDS = sorted(BOUNDS)

ADDIU_SP = 0x27BD0000
THIRD_PARTY_PREFIXES = ("rw/", "cri/", "sce/")


def frame(word):
    """Stack frame size from an `addiu $sp,$sp,-N` word, else None."""
    if (word & 0xFFFF0000) != ADDIU_SP:
        return None
    imm = word & 0xFFFF
    if imm & 0x8000:
        imm -= 0x10000
    return -imm if imm < 0 else None


def is_third_party(path):
    n = path.replace("\\", "/").replace("src/", "")
    return n in ("crt0.c", "libc_core.c", "libcdvd.c") or n.startswith(THIRD_PARTY_PREFIXES)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--csv", action="store_true", help="also write build/frame_census.csv")
    ap.add_argument("--all", action="store_true", help="include third-party functions")
    args = ap.parse_args()

    report = REPO / "build" / "verify-report.json"
    if not report.is_file():
        print("no build/verify-report.json - run tools/verify.py first")
        return 1
    rep = json.loads(report.read_text())
    targets = [x for x in rep["results"]
               if x.get("status") == "NONMATCHING" and x.get("addr") and x.get("name")
               and (args.all or not is_third_party(x["file"]))]
    byfile = collections.defaultdict(list)
    for x in targets:
        byfile[x["file"].replace("\\", "/")].append(x)
    print("scanning %d NONMATCHING functions in %d files" % (len(targets), len(byfile)))

    same = diff = unknown = 0
    deltas = collections.Counter()
    rows = []
    for path, xs in sorted(byfile.items()):
        with tempfile.TemporaryDirectory(prefix="framecensus_") as td:
            op = Path(td) / "out.o"
            p = subprocess.run([CFG["mwcc"], "-O2", "-Iinclude", "-c",
                                str(REPO / path), "-o", str(op)],
                               cwd=str(REPO), stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT, text=True)
            if p.returncode or not op.is_file():
                print("COMPILE FAIL", path)
                continue
            obj = ObjectFile(op)
            for x in xs:
                addr = int(x["addr"], 16)
                try:
                    body, rels = obj.function(x["name"])
                except KeyError:
                    unknown += 1
                    continue
                if len(body) < 4:
                    unknown += 1
                    continue
                ours = int.from_bytes(body[0:4], "little")
                theirs = int.from_bytes(RETAIL.bytes_at(addr, 8)[0:4], "little")
                fo, ft = frame(ours), frame(theirs)
                if fo is None or ft is None:
                    unknown += 1
                    continue
                if fo == ft:
                    same += 1
                else:
                    diff += 1
                    deltas[ft - fo] += 1
                    rows.append(dict(file=path, name=x["name"], addr=x["addr"],
                                     ours=fo, retail=ft, delta=ft - fo,
                                     normalized_diff=x.get("normalized_diff"),
                                     object_size=x.get("object_size")))
    print()
    print("  same frame size      : %d" % same)
    print("  DIFFERENT frame size : %d" % diff)
    print("  could not measure    : %d" % unknown)
    print()
    print("frame delta (retail - ours):")
    for k, v in sorted(deltas.items(), key=lambda kv: -kv[1])[:20]:
        print("   %+6d : %d" % (k, v))

    out = REPO / "build" / "frame_census.json"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(rows, indent=1))
    print("\nwritten to %s" % out.relative_to(REPO))
    if args.csv:
        csv = REPO / "build" / "frame_census.csv"
        with csv.open("w") as f:
            f.write("file,name,addr,ours,retail,delta,normalized_diff,object_size\n")
            for r in rows:
                f.write("%s,%s,%s,%d,%d,%d,%s,%s\n" % (
                    r["file"], r["name"], r["addr"], r["ours"], r["retail"],
                    r["delta"], r["normalized_diff"], r["object_size"]))
        print("written to %s" % csv.relative_to(REPO))
    return 0


if __name__ == "__main__":
    sys.exit(main())
