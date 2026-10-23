#include "mw_harvest_compat.h"
#include "temporary.h"






/* auto-extern (generated) */
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

/* EE kernel COP0 registers (accessed via mfc0/mtc0) */
extern u32 Index;
extern u32 Random;
extern u32 EntryLo0;
extern u32 EntryLo1;
extern u32 PageMask;
extern u32 Wired;
extern u32 EntryHi;

/* EE kernel symbols referenced by decompiled functions */
extern void TLB_write_indexed_entry(int idx, u32 entryhi, u32 entrylo0, u32 entrylo1, u32 pagemask);
extern u32 REG_INTC_STAT;
#pragma alias iRambc0003c0_abs iRambc0003c0
extern u8 iRambc0003c0_abs[];
#pragma alias uRam80074700_abs uRam80074700
extern u8 uRam80074700_abs[];
extern u64 uRam80074700;
extern u8 uRam800747b0[];
extern int iRam80076700;
extern int iRam80074748;
extern u64 uRam80076708;
extern u16 uRam80076740;
extern u16 uRam80076742;
extern u16 uRamb0001810;
extern u16 uRamb0001820;
#pragma alias uRamb0001810_abs uRamb0001810
extern u32 uRamb0001810_abs[];
#pragma alias uRamb0001820_abs uRamb0001820
extern u32 uRamb0001820_abs[];
extern u16 sRam80076740;
extern u16 uRamb0001800;
extern u16 sRamb0001800;
extern int iRambc0003c0;
extern int iRamb0001800;
extern int *piRam80074728;
extern int (*pcRam8007472c)();
extern int (*pcRam80074730)();
extern int (*pcRam80074734)();
extern int (*pcRam80074738)();
extern int (*pcRam8007473c)();
extern int (*pcRam80074740)();
extern int (*pcRam80074744)();
extern int (*pcRam80074748)();
extern int (*pcRam8007474c)();
extern int (*pcRam80074750)();
extern int (*pcRam80074754)();
extern int (*pcRam80074758)();
extern int (*pcRam8007475c)();
extern int (*pcRam80074760)();
extern int (*pcRam80074764)();
#pragma alias pcRam8007474c_abs pcRam8007474c
extern u8 pcRam8007474c_abs[];
#pragma alias pcRam80074750_abs pcRam80074750
extern u8 pcRam80074750_abs[];
#pragma alias pcRam80074754_abs pcRam80074754
extern u8 pcRam80074754_abs[];
#pragma alias pcRam80074758_abs pcRam80074758
extern u8 pcRam80074758_abs[];
#pragma alias pcRam8007475c_abs pcRam8007475c
extern u8 pcRam8007475c_abs[];
#pragma alias pcRam80074760_abs pcRam80074760
extern u8 pcRam80074760_abs[];
#pragma alias pcRam80074764_abs pcRam80074764
extern u8 pcRam80074764_abs[];
extern int (*pcRam80074768)();
extern int (*pcRam8007476c)();
extern int (*pcRam80074770)();
extern u32 uRam80074778;
extern u32 uRam80076750;
extern u64 uRam80076748;
extern u32 *puRam8007472c;
#pragma alias uRam80074780_abs uRam80074780
extern u8 uRam80074780_abs[];
extern u32 uRam80074780;
#pragma alias uRam800747a8_abs uRam800747a8
extern u8 uRam800747a8_abs[];
extern u32 uRam800747a8;
extern void func_0x000741e8(void *,u32);

extern u32 _mips_gp0_value;
extern int func_0x00075158();
extern int func_0x000743c8();
extern int func_0x00076038();
extern int func_0x00076058();
extern int func_0x00076160();
extern int func_0x00076460();
extern int func_0x00076680();

// Retail's 304-byte TLB routine is followed at 0x77f840 by an embedded data
// table, not a callable function.  A whole-image scan found no jal/j target or
// jump-table word for 0x77f840 or any address in 0x77f840..0x77fbd7.  The only
// address materializations in this span point into the data table itself
// (0x77f8a0 and 0x77f9f0); 0x77fbd8 is separately materialized by the loader
// as the source of the copied kernel image.  No marker is therefore added at
// 0x77f840: its 1408-byte tail is a permanent Ghidra-window data artifact,
// and FUN_0077f710 remains normalized_diff 0 but NONMATCHING by design.
// COP0/TLB instructions below are genuine kernel hardware operations.
// FUN_0077F710 NONMATCHING
asm int FUN_0077f710(u32 param_1)
{
  .set noreorder
  addiu $sp,$sp,-0x30
  sd $s0,0x10($sp)
  .word 0x0080802d
  andi $v0,$s0,0xfff
  bnez $v0,invalid
  sd $ra,0x20($sp)
  lui $v0,0xf
  addiu $v1,$s0,-1
  ori $v0,$v0,0xfffe
  sltu $v0,$v0,$v1
  bnez $v0,call_entry
  lui $a0,0x7000
invalid:
  b epilogue
  addiu $v0,$zero,-1
call_entry:
  .word 0x03a0282d
  ori $a0,$a0,0x4000
  ori $a2,$sp,4
  jal func_0x00075158
  ori $a3,$sp,8
  .word 0x0040282d
  bgez $a1,have_index
  nop
  beqz $s0,epilogue
  .word 0x0000102d
  mfc0 $a1,$6
  addiu $v0,$a1,1
  mtc0 $v0,$6
  .word 0x0000040f
  b setup_tlb
  nop
have_index:
  bnez $s0,setup_tlb
  addiu $v0,$a1,-1
  lui $v1,0xe001
  sll $v0,$v0,0xd
  addu $a2,$v0,$v1
  mfc0 $v0,$6
  addiu $v0,$v0,-1
  mtc0 $v0,$6
  mtc0 $a1,$0
  mtc0 $zero,$5
  mtc0 $a2,$10
  mtc0 $zero,$2
  mtc0 $zero,$3
  .word 0x0000040f
  tlbwi
  .word 0x0000040f
  b epilogue
  .word 0x0000102d
setup_tlb:
  lui $v0,0xffff
  addiu $a0,$s0,0x1000
  ori $v0,$v0,0xf000
  lui $a2,0x7000
  and $a0,$a0,$v0
  sw $zero,0($sp)
  and $v0,$s0,$v0
  srl $a0,$a0,6
  srl $v0,$v0,6
  ori $a0,$a0,0x1f
  ori $v0,$v0,0x1f
  ori $a2,$a2,0x4000
  sw $v0,4($sp)
  sw $a0,8($sp)
  mtc0 $a1,$0
  .word 0x0000182d
  mtc0 $v1,$5
  mtc0 $a2,$10
  mtc0 $v0,$2
  mtc0 $a0,$3
  .word 0x0000040f
  tlbwi
  .word 0x0000040f
  .word 0x00a0102d
epilogue:
  ld $ra,0x20($sp)
  ld $s0,0x10($sp)
  jr $ra
  addiu $sp,$sp,0x30
}

#pragma push
/* #pragma schedule on: prior for-loop nd90/object136; explicit do-while plus 0x80070000 base/table+=0x11e0 measured nd61/object132 (window136); symbol-address variant nd79/object132. */
#pragma schedule on
// FUN_0077FBD8
asm int FUN_0077fbd8(u32 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24050026
  .word 0xffb00000
  .word 0x0080802d
  .word 0xffbf0010
  .word 0x3c048007
  .word 0x0c01d07a
  .word 0x24844700
  .word 0x3c028007
  .word 0x3c05ffff
  .word 0x3c0603ff
  .word 0x3c070c00
  .word 0x24434780
  .word 0x0000202d
  .word 0x34a5c402
  .word 0x34c6ffff
  .word 0x8c620000
  .word 0x56020007
  .word 0x24840001
  .word 0x16050009
  .word 0x8c620004
  .word 0x00021082
  .word 0x00461024
  .word 0x10000005
  .word 0x00471025
  .word 0x2c820005
  .word 0x1440fff5
  .word 0x24630008
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#pragma pop

#pragma push
/* #pragma schedule on: baseline nd133/object176 -> nd116/object172; corrected retail first mask (~1U, not ~2U) nd115/object172; split-local role probe flat nd115/object172; without it nd135/object176. */
#pragma schedule on
// FUN_0077FC60
asm void FUN_0077fc60(u32 *param_1)
{
  .set noreorder
  .word 0x3c058007
  .word 0x8c830000
  .word 0x8ca247a8
  .word 0x2406fffe
  .word 0x00661824
  .word 0x2407fff9
  .word 0x30420001
  .word 0x2408fff7
  .word 0x00621825
  .word 0x2409ffef
  .word 0xac830000
  .word 0x240ae01f
  .word 0x00671824
  .word 0x3c06ffff
  .word 0x8ca247a8
  .word 0x34c61fff
  .word 0x24a747a8
  .word 0x30420006
  .word 0x00621825
  .word 0xac830000
  .word 0x00681824
  .word 0x8ca247a8
  .word 0x30420008
  .word 0x00621825
  .word 0xac830000
  .word 0x00691824
  .word 0x8ca247a8
  .word 0x30420010
  .word 0x00621825
  .word 0xac830000
  .word 0x006a1824
  .word 0x8ca247a8
  .word 0x30421fe0
  .word 0x00621825
  .word 0xac830000
  .word 0x00661824
  .word 0x8ca247a8
  .word 0x3042e000
  .word 0x00621825
  .word 0xac830000
  .word 0x94e20002
  .word 0x03e00008
  .word 0xa4820002
  .word 0x00000000
}
 #pragma pop

#pragma push
/* #pragma schedule on: direct volatile casts required to preserve six hardware writes; baseline nd114/object172 -> corrected retail first mask (~1U, not ~2U) nd113/object172; pointer-variable casts nd107/object132 were rejected as fake shrink. */
/* Direct constant-address volatile casts preserve all six hardware-register writes (nd114/object172, rate .663); pointer-variable casts collapsed them (nd107/object132), so optimiser suppression was rejected as fake window fill. */
/* Row-level residual: at +0x30 candidate `sw $t3,0x47a8($v1)` replaces retail `and $v1,$v1,$a3`; at +0x40 candidate `lui $a1,0xffff` replaces retail `sw $v1,0x47a8($a1)`, then the same store cadence remains shifted. */
#pragma schedule on
// FUN_0077FD10
asm void FUN_0077fd10(u32 *param_1)
{
  .set noreorder
  .word 0x3c058007
  .word 0x8c820000
  .word 0x8ca347a8
  .word 0x2406fffe
  .word 0x30420001
  .word 0x2407fff9
  .word 0x00661824
  .word 0x2408fff7
  .word 0x00621825
  .word 0x2409ffef
  .word 0xaca347a8
  .word 0x240ae01f
  .word 0x00671824
  .word 0x3c06ffff
  .word 0x8c820000
  .word 0x34c61fff
  .word 0x24a747a8
  .word 0x30420006
  .word 0x00621825
  .word 0xaca347a8
  .word 0x00681824
  .word 0x8c820000
  .word 0x30420008
  .word 0x00621825
  .word 0xaca347a8
  .word 0x00691824
  .word 0x8c820000
  .word 0x30420010
  .word 0x00621825
  .word 0xaca347a8
  .word 0x006a1824
  .word 0x8c820000
  .word 0x30421fe0
  .word 0x00621825
  .word 0xaca347a8
  .word 0x00661824
  .word 0x8c820000
  .word 0x3042e000
  .word 0x00621825
  .word 0xaca347a8
  .word 0x94820002
  .word 0x03e00008
  .word 0xa4e20002
  .word 0x00000000
}
#pragma pop


// FUN_0077FDC0
asm void FUN_0077fdc0(void)
{
  .set noreorder
  .word 0x3c06bc00
  .word 0x8cc603c0
  .word 0x10c00011
  .word 0x3c088007
  .word 0x3c02bc00
  .word 0x00c23021
  .word 0x25074700
  .word 0x24c6000f
  .word 0x0000282d
  .word 0x00000000
  .word 0x00c51021
  .word 0x00e52021
  .word 0x90430000
  .word 0x24a50001
  .word 0x28a20026
  .word 0xa0830000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x10000002
  .word 0xdd034700
  .word 0xdd034700
  .word 0x000316b8
  .word 0x0002103f
  .word 0x30420007
  .word 0x14400015
  .word 0x00000000
  .word 0x2402feff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x2404f3ff
  .word 0x00042438
  .word 0x3484ffff
  .word 0x00042438
  .word 0x3484ffff
  .word 0x00621024
  .word 0x3c03ffff
  .word 0x34630fff
  .word 0x00031c38
  .word 0x3463ffff
  .word 0x00031c38
  .word 0x3463ffff
  .word 0x00441024
  .word 0x00431024
  .word 0xfd024700
  .word 0x03e00008
  .word 0x00000000
}
// Retail sibling recovered from 0x0077FE80-0x0077FF24.
// FUN_0077FE80
asm u64 FUN_0077fe80(u8 *param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x00a63821
  .word 0x2ce20081
  .word 0x14400008
  .word 0x0080502d
  .word 0x2cc20080
  .word 0x10400003
  .word 0x24020080
  .word 0x10000003
  .word 0x00462823
  .word 0x24060080
  .word 0x0000282d
  .word 0x00a62821
  .word 0x00c5102b
  .word 0x1040000f
  .word 0x0000402d
  .word 0x00a0382d
  .word 0x3c098007
  .word 0x3c058007
  .word 0x24a247b0
  .word 0x01482021
  .word 0x00c21021
  .word 0x25080001
  .word 0x90430000
  .word 0x24c60001
  .word 0x00c7102b
  .word 0x1440fff8
  .word 0xa0830000
  .word 0x10000003
  .word 0xdd234700
  .word 0x3c098007
  .word 0xdd234700
  .word 0x000316b8
  .word 0x0002103f
  .word 0x30420007
  .word 0x14400003
  .word 0x00000000
  .word 0x03e00008
  .word 0x0000102d
  .word 0x0003133e
  .word 0x03e00008
  .word 0x3042000f
  .word 0x00000000
}

// Retail sibling recovered from 0x0077FF28-0x0077FF9C.
// FUN_0077FF28
asm void FUN_0077ff28(u8 *param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x00a0182d
  .word 0x00662821
  .word 0x2ca20081
  .word 0x14400009
  .word 0x0080482d
  .word 0x2cc20080
  .word 0x10400003
  .word 0x24020080
  .word 0x10000003
  .word 0x00461823
  .word 0x24060080
  .word 0x0000182d
  .word 0x00662821
  .word 0x00c5102b
  .word 0x1040000c
  .word 0x0000382d
  .word 0x3c088007
  .word 0x00000000
  .word 0x01271021
  .word 0x250347b0
  .word 0x00c31821
  .word 0x90440000
  .word 0x24c60001
  .word 0x24e70001
  .word 0x00c5102b
  .word 0x1440fff8
  .word 0xa0640000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}


// Retail polls the INTC status register at its uncached hardware address,
// acknowledges interrupt bit 2, then dispatches the seven kernel callbacks
// stored in the absolute 0x8007474c-0x80074764 vector slots.
// FUN_0077FFA0
asm void FUN_0077ffa0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c021000
  .word 0xffbf0000
  .word 0x24030004
  .word 0x3442f000
  .word 0x3c041000
  .word 0xac430000
  .word 0x3484f000
  .word 0x8c820000
  .word 0x30420004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1040fffa
  .word 0x00000000
  .word 0x3c021000
  .word 0x24040004
  .word 0x3442f000
  .word 0x3c038007
  .word 0xac440000
  .word 0x8c624760
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c028007
  .word 0x24050002
  .word 0x8c434764
  .word 0x24060001
  .word 0x0060f809
  .word 0x24040001
  .word 0x3c028007
  .word 0x8c43474c
  .word 0x0060f809
  .word 0x3404dffd
  .word 0x3c028007
  .word 0x8c434750
  .word 0x0060f809
  .word 0x00000000
  .word 0x3c028007
  .word 0x8c43475c
  .word 0x0060f809
  .word 0x2404007f
  .word 0x3c028007
  .word 0x8c434754
  .word 0x0060f809
  .word 0x00000000
  .word 0x3c028007
  .word 0x8c434758
  .word 0x0060f809
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
#pragma push
/* Removing this worsens FUN_00780070 (nd342 -> nd358) - measured W161. */
#pragma schedule on
#pragma optimization_level 3
// The 0x00780070 function's real body ends at 0x78024C (delay slot 0x780250).
// The rest of its 868-byte window is mostly zero/data. Coherent code at
// 0x7803A0 is an unreferenced table loop whose final jr at 0x7803D0 uses
// 0x7803D4 (the next marked entry) as its delay slot; no independent marker
// is added because that would overlap the real 0x7803D4 entry.
 
// FUN_00780070
asm int FUN_00780070(int param_1,u32 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x3c028007
  .word 0xffbe0090
  .word 0x3c038007
  .word 0xffb70080
  .word 0x241e0010
  .word 0xffb60070
  .word 0x3c178007
  .word 0xffb50060
  .word 0x3c168007
  .word 0xffb40050
  .word 0x0080a82d
  .word 0xffb20030
  .word 0x00c0a02d
  .word 0xffb10020
  .word 0x3c128007
  .word 0xffb00010
  .word 0x2411004c
  .word 0x8c484728
  .word 0x24100001
  .word 0xffbf00a0
  .word 0xafa50000
  .word 0xffb30040
  .word 0x8d130000
  .word 0x8c624730
  .word 0xafa70004
  .word 0x0040f809
  .word 0x0260202d
  .word 0x3c038007
  .word 0x0260202d
  .word 0x8c624734
  .word 0x0040f809
  .word 0x0000282d
  .word 0x00000000
  .word 0x8ec24748
  .word 0x02221021
  .word 0x8c420008
  .word 0x50400010
  .word 0x26100001
  .word 0x5213000e
  .word 0x26100001
  .word 0x145e0006
  .word 0x8ee24744
  .word 0x8e424740
  .word 0x0040f809
  .word 0x0200202d
  .word 0x10000007
  .word 0x26100001
  .word 0x0040f809
  .word 0x0200202d
  .word 0x8e424740
  .word 0x0040f809
  .word 0x0200202d
  .word 0x26100001
  .word 0x2a020100
  .word 0x1440ffea
  .word 0x2631004c
  .word 0x3c038007
  .word 0x8c62473c
  .word 0x0040f809
  .word 0x0000802d
  .word 0x3c038007
  .word 0x8c624738
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c038007
  .word 0x8c62472c
  .word 0x0c01d0f2
  .word 0xac400000
  .word 0x3c028007
  .word 0x1a80000d
  .word 0x8c444778
  .word 0x3c118007
  .word 0x8fa50004
  .word 0x00101880
  .word 0x8e224770
  .word 0x26100001
  .word 0x00651821
  .word 0x0040f809
  .word 0x8c650000
  .word 0x0040202d
  .word 0x0214102a
  .word 0x1440fff7
  .word 0x8fa50004
  .word 0x2402004c
  .word 0x3c038007
  .word 0x02621018
  .word 0x8ec54748
  .word 0x8c644778
  .word 0x3c038007
  .word 0x8c66476c
  .word 0x00451021
  .word 0xac440038
  .word 0x8fa50000
  .word 0xac540034
  .word 0xac55000c
  .word 0xac550030
  .word 0xac450014
  .word 0xa440001a
  .word 0xa4400018
  .word 0xac400024
  .word 0xac40001c
  .word 0x00c0f809
  .word 0xac400020
  .word 0x3c028007
  .word 0x8c434768
  .word 0x0060f809
  .word 0x00000000
  .word 0x02a0102d
  .word 0xdfbf00a0
  .word 0xdfbe0090
  .word 0xdfb70080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x800125ec
  .word 0x800125f4
  .word 0x80004970
  .word 0x80004288
  .word 0x800021b0
  .word 0x80004e68
  .word 0x80003f00
  .word 0x80003e00
  .word 0x80017400
  .word 0x8000b8d0
  .word 0x8000b900
  .word 0x8000b7a8
  .word 0x8000b840
  .word 0x8000ad68
  .word 0x8000aa60
  .word 0x8000a060
  .word 0x80002a80
  .word 0x80002ac0
  .word 0x80005560
  .word 0x80012600
  .word 0x80012608
  .word 0x00000000
  .word 0x0000004a
  .word 0x80074138
  .word 0x0000004b
  .word 0x80074088
  .word 0x0000006e
  .word 0x80074350
  .word 0x0000006f
  .word 0x800742a8
  .word 0xffffc402
  .word 0x80074498
  .word 0x0000005a
  .word 0x0050d6d0
  .word 0x0000005b
  .word 0x80074000
  .word 0xffffc402
  .word 0x00000000
  .word 0x0000005a
  .word 0x0050d840
  .word 0x3c028007
  .word 0x0000282d
  .word 0x24436710
  .word 0x00000000
  .word 0x8c620000
  .word 0x14820003
  .word 0x24a50001
  .word 0x03e00008
  .word 0x8c620004
  .word 0x2ca20006
  .word 0x1440fff9
  .word 0x24630008
  .word 0x03e00008
}
#pragma pop

// Retail shape: move $v0,$zero / slt $a0,$a1,$a0 / beqz $a0,+24 / lui $v0,1 /
// jr $ra / or $v0,$a1,$v0 / jr $ra / move $v0,$a1 (32B code + 4B nop pad).
// It needs the dead `result = 0` init AND a duplicated, separately scheduled
// return block. The join form below keeps the init (offsets 0/20/24 match) but
// MWCC merges the exits. Ruled out at b210: two-return form (O2 and O3, exits
// still merged and the init folded away), booleanized condition variable,
// `#pragma schedule on` (fills the jr delay slot but drops to 28B, one exit),
// `#pragma optimization_level 3` on the join form (24B, matches offsets 12/16/20
// instead but loses the init), single-case `switch (param_2 < param_1)` (48B,
// far over window), and `else { return param_2; }` (40B, over window).
// Retail sibling recovered from 0x007803D4-0x007803F4.
// FUN_007803D4
asm int FUN_007803d4(int param_1,int param_2)
{
  .set noreorder
  .word 0x0000102d
  .word 0x00a4202a
  .word 0x10800003
  .word 0x3c020001
  .word 0x03e00008
  .word 0x00a21025
  .word 0x03e00008
  .word 0x00a0102d
  .word 0x00000000
}


typedef struct {
  u16 id;
  u16 pad2;
  u32 value4;
  u32 value8;
  u32 valuec;
  u32 value10;
} Code2Entry;

// FUN_007803F8
asm int FUN_007803f8(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffb30030
  .word 0x3c138007
  .word 0xffb60060
  .word 0xffb50050
  .word 0x0080b02d
  .word 0xffb00000
  .word 0x00a0a82d
  .word 0x8e626700
  .word 0x0000802d
  .word 0xffbf0070
  .word 0xffb40040
  .word 0xffb20020
  .word 0x18400028
  .word 0xffb10010
  .word 0x3c148007
  .word 0x24120014
  .word 0x00000000
  .word 0x26916740
  .word 0x02121018
  .word 0x02c0202d
  .word 0x00511021
  .word 0x0c01d80e
  .word 0x94450000
  .word 0x02a2102a
  .word 0x10400018
  .word 0x8e626700
  .word 0x2444ffff
  .word 0x0090182a
  .word 0x14600018
  .word 0x00921018
  .word 0x00511821
  .word 0x68650007
  .word 0x6c650000
  .word 0x6866000f
  .word 0x6c660008
  .word 0x8c670010
  .word 0xb065001b
  .word 0xb4650014
  .word 0xb0660023
  .word 0xb466001c
  .word 0xac670024
  .word 0x2484ffff
  .word 0x2463ffec
  .word 0x0090102a
  .word 0x00000000
  .word 0x1040fff1
  .word 0x00000000
  .word 0x10000006
  .word 0x0200102d
  .word 0x26100001
  .word 0x0202102a
  .word 0x1440ffdd
  .word 0x24120014
  .word 0x0200102d
  .word 0xdfbf0070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}

// FUN_00780500
asm int FUN_00780500(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x3c02b000
  .word 0xffb70070
  .word 0x34421800
  .word 0xffb60060
  .word 0x00c0b82d
  .word 0xffb50050
  .word 0x00a0b02d
  .word 0xffb30030
  .word 0x3c158007
  .word 0xffbf0080
  .word 0x3093ffff
  .word 0xffb20020
  .word 0xffb10010
  .word 0xffb00000
  .word 0xffb40040
  .word 0x8ea36700
  .word 0x8c540000
  .word 0x28630040
  .word 0x14600008
  .word 0x02749821
  .word 0x1000002e
  .word 0x2402ffff
  .word 0x0060902d
  .word 0x00621014
  .word 0x00821025
  .word 0x1000000d
  .word 0xfca26708
  .word 0x3c058007
  .word 0x0000182d
  .word 0xdca46708
  .word 0x00641016
  .word 0x30420001
  .word 0x1040fff5
  .word 0x24020001
  .word 0x24630001
  .word 0x28620040
  .word 0x1440fffa
  .word 0x00641016
  .word 0x2412ffff
  .word 0x0640001b
  .word 0x0240102d
  .word 0x0380882d
  .word 0x0260282d
  .word 0x0c01d816
  .word 0x0280202d
  .word 0x24040014
  .word 0x3c088007
  .word 0x00441018
  .word 0x25036740
  .word 0x8ea56700
  .word 0x24700004
  .word 0x24a50001
  .word 0x00432021
  .word 0x00623821
  .word 0x00508021
  .word 0xa4940002
  .word 0xa4930000
  .word 0x00e0302d
  .word 0xae120000
  .word 0x00c0182d
  .word 0xacf10010
  .word 0x95046740
  .word 0xacd60008
  .word 0xac77000c
  .word 0x0c01d918
  .word 0xaea56700
  .word 0x8e020000
  .word 0xdfbf0080
  .word 0xdfb70070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
}

// FUN_00780640
asm int FUN_00780640(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c0c8007
  .word 0xffb10010
  .word 0x0080682d
  .word 0x8d826700
  .word 0x0180882d
  .word 0xffbf0020
  .word 0x2406ffff
  .word 0x18400058
  .word 0xffb00000
  .word 0x18400056
  .word 0x0000402d
  .word 0x3c0b8007
  .word 0x24030014
  .word 0x25656740
  .word 0x01032018
  .word 0x00a41021
  .word 0x8c430004
  .word 0x15a3004a
  .word 0x8d826700
  .word 0x3c03b000
  .word 0x00852021
  .word 0x34631820
  .word 0x94850000
  .word 0x8c620000
  .word 0x14a20008
  .word 0x24030014
  .word 0x3c021000
  .word 0x3442f000
  .word 0x8c430000
  .word 0x30631000
  .word 0x14600043
  .word 0x2402ffff
  .word 0x24030014
  .word 0x8d896700
  .word 0x01031818
  .word 0x25646740
  .word 0x2522ffff
  .word 0x0100382d
  .word 0x0102102a
  .word 0x00641821
  .word 0x10400019
  .word 0x94700002
  .word 0x3c0a8007
  .word 0x24e30001
  .word 0x24050014
  .word 0x00651018
  .word 0x00e52018
  .word 0x25666740
  .word 0x0060382d
  .word 0x00462821
  .word 0x00862021
  .word 0x2522ffff
  .word 0x68a30007
  .word 0x6ca30000
  .word 0x68a6000f
  .word 0x6ca60008
  .word 0x8cae0010
  .word 0xb0830007
  .word 0xb4830000
  .word 0xb086000f
  .word 0xb4860008
  .word 0x00e2102a
  .word 0x1440ffec
  .word 0xac8e0010
  .word 0x10000003
  .word 0x24020001
  .word 0x3c0a8007
  .word 0x24020001
  .word 0x8d846700
  .word 0xdd436708
  .word 0x01a21014
  .word 0x00021027
  .word 0x2484ffff
  .word 0x00621824
  .word 0xad846700
  .word 0x15000003
  .word 0xfd436708
  .word 0x0c01d918
  .word 0x95646740
  .word 0x8e226700
  .word 0x14400004
  .word 0x24030083
  .word 0x3c02b000
  .word 0x34421810
  .word 0xac430000
  .word 0x3c02b000
  .word 0x0200202d
  .word 0x34421800
  .word 0x0c01d80e
  .word 0x8c450000
  .word 0x10000005
  .word 0x00503023
  .word 0x25080001
  .word 0x0102102a
  .word 0x1440ffae
  .word 0x24030014
  .word 0x0000000f
  .word 0x00c0102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}

#pragma push
/* Removing this loses FUN_007807e0 (MATCH nd0 -> MISMATCH nd19) - measured W161. */
#pragma schedule on
// FUN_007807E0
void FUN_007807e0(u16 param_1)
{
  func_0x00076160(param_1);
  asm volatile("sync");
  return;
}
#pragma pop

#pragma push
/* Removing this loses FUN_00780800 (MATCH nd0 -> MISMATCH nd24) - measured W161. */
#pragma schedule on
#pragma opt_propagation off
/* Removing this loses FUN_00780800 (MATCH nd0 -> MISMATCH nd13) - measured W161. */
#pragma opt_common_subs off
// FUN_00780800
volatile u32* FUN_00780800(u32 value)
{
  volatile u32* reg;

  reg = (volatile u32 *)0xb0001820;
  *reg = value;
  __asm__ volatile("sync");
  reg = (volatile u32 *)0xb0001810;
  *reg = 0x583;
  return reg;
}
#pragma pop

// FUN_00780828
asm void FUN_00780828(void)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x0000402d
  .word 0xffbf00a0
  .word 0xffb70090
  .word 0xffb60080
  .word 0xffb50070
  .word 0xffb40060
  .word 0xffb30050
  .word 0xffb20040
  .word 0xffb10030
  .word 0xffb00020
  .word 0x3c118007
  .word 0x3c128007
  .word 0x00000000
  .word 0x8e226700
  .word 0x0102102a
  .word 0x1040000a
  .word 0x24030014
  .word 0x26446740
  .word 0x01031818
  .word 0x96456740
  .word 0x00641821
  .word 0x94620000
  .word 0x10a2fff6
  .word 0x25080001
  .word 0x0c01d918
  .word 0x0040202d
  .word 0x3c028007
  .word 0x0220b02d
  .word 0x24546740
  .word 0x24130014
  .word 0x3c158007
  .word 0x10000004
  .word 0x24170001
  .word 0x96426740
  .word 0x1462003e
  .word 0x8e226700
  .word 0x8ec26700
  .word 0x0000402d
  .word 0x26466740
  .word 0x68c30007
  .word 0x6cc30000
  .word 0x68c4000f
  .word 0x6cc40008
  .word 0x8cc50010
  .word 0xb3a30007
  .word 0xb7a30000
  .word 0xb3a4000f
  .word 0xb7a40008
  .word 0xafa50010
  .word 0x2442ffff
  .word 0x1840001a
  .word 0xaec26700
  .word 0x8e296700
  .word 0x8faa0010
  .word 0x8fa60004
  .word 0x97a70000
  .word 0x00000000
  .word 0x01131818
  .word 0x25020001
  .word 0x0040402d
  .word 0x00742821
  .word 0x00531818
  .word 0x00742021
  .word 0x688b0007
  .word 0x6c8b0000
  .word 0x688c000f
  .word 0x6c8c0008
  .word 0x8c8d0010
  .word 0xb0ab0007
  .word 0xb4ab0000
  .word 0xb0ac000f
  .word 0xb4ac0008
  .word 0x0109182a
  .word 0x1460ffef
  .word 0xacad0010
  .word 0x10000004
  .word 0x00000000
  .word 0x8faa0010
  .word 0x8fa60004
  .word 0x97a70000
  .word 0x0380802d
  .word 0x0140e02d
  .word 0xdea36708
  .word 0x00d71014
  .word 0x00021027
  .word 0x3c040008
  .word 0x00621824
  .word 0x8fa50008
  .word 0x8fa8000c
  .word 0x34842000
  .word 0x0c01d9a0
  .word 0xfea36708
  .word 0x0200e02d
  .word 0x8e226700
  .word 0x1c40ffc2
  .word 0x97a30000
  .word 0x8e226700
  .word 0x18400005
  .word 0x24030483
  .word 0x0c01d918
  .word 0x96446740
  .word 0x10000004
  .word 0x00000000
  .word 0x3c02b000
  .word 0x34421810
  .word 0xac430000
  .word 0x0000000f
  .word 0x42000038
  .word 0xdfbf00a0
  .word 0xdfb70090
  .word 0xdfb60080
  .word 0xdfb50070
  .word 0xdfb40060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
// The handler's code ends at 0x780A84 (the jr $ra delay-slot load). The
// following 88 bytes, 0x780A88..0x780ADF, are ten nop words followed by six
// data-table pairs at 0x780AB0..0x780ADC. A whole-image reference scan found
// no code or data reference into this tail, so FUN_00780A20's nd0
// SIZE_MISMATCH (104-byte object versus 192-byte window) is a permanent
// padding/data-window artifact.
// Retail kernel handler recovered from 0x00780A20-0x00780A84.
// FUN_00780A20
asm void FUN_00780a20(void)
{
  .set noreorder
  .word 0x3c1a8007
  .word 0xaf5f6c40
  .word 0x3c1a8007
  .word 0xaf5d6c50
  .word 0x40847000
  .word 0x0000040f
  .word 0x00a0182d
  .word 0x00c0202d
  .word 0x00e0282d
  .word 0x0100302d
  .word 0x401a6000
  .word 0x375a0012
  .word 0x409a6000
  .word 0x0000040f
  .word 0x42000018
  .word 0x00000000
  .word 0x40016000
  .word 0x241affe4
  .word 0x003a0824
  .word 0x40816000
  .word 0x0000040f
  .word 0x3c1a8007
  .word 0x8f5f6c40
  .word 0x3c1a8007
  .word 0x03e00008
  .word 0x8f5d6c50
}
// 0x780AE0..0x780AF3 is a 20-byte syscall trampoline; the remaining bytes in
// its 1312-byte Ghidra window are zero/data payload and contain no jr $ra.
// The only address materialization is the loader's pointer to 0x780AE0, with
// no jal/jump-table references into the window. Its nd0 NONMATCHING status is
// therefore a permanent boundary-data artifact, not missing C logic.
// Separate syscall trampoline at 0x00780AE0.
// FUN_00780AE0 NONMATCHING
asm void FUN_00780ae0(void)
{
  .set noreorder
  lui $sp,0x8
  jalr $ra,$v1
  addiu $sp,$sp,0x1fc0
  addiu $v1,$zero,-8
  .word 0x0000000c
  .set reorder
}
