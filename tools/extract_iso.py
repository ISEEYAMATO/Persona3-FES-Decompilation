"""Extract SLUS_216.21 from the retail ISO into the project root."""
import sys
from pathlib import Path

import pycdlib

root = Path(__file__).resolve().parents[1]
iso_path = root / "Shin Megami Tensei - Persona 3 FES (USA).iso"
out_path = root / "SLUS_216.21"

iso = pycdlib.PyCdlib()
iso.open(str(iso_path))
try:
    children = []
    for child in iso.list_children(iso_path="/"):
        name = child.file_identifier().decode("ascii", "replace")
        if not child.is_dir() and "SLUS" in name.upper():
            children.append((name, child))
    if not children:
        print("SLUS file not found at ISO root; listing root entries:")
        for child in iso.list_children(iso_path="/"):
            print(" ", child.file_identifier().decode("ascii", "replace"))
        sys.exit(1)
    name, child = children[0]
    print("found:", name, "size:", child.get_data_length())
    with open(out_path, "wb") as out:
        iso.get_file_from_iso_fp(out, iso_path="/" + name)
finally:
    iso.close()

print("wrote:", out_path, out_path.stat().st_size, "bytes")
