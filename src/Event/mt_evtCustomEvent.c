#include "temporary.h"
#include "Event/mt_evtCustomEvent.h"
typedef int (*code)(...);
typedef u32 undefined3;
typedef u32 int3;
#define CONCAT13(a,b) ((((u32)(a) & 0xffu) << 24) | ((u32)(b) & 0x00ffffffu))

extern u32 DAT_006a11d0;
#pragma alias DAT_006a11d0_98530_abs DAT_006a11d0
#pragma alias DAT_006a11d4_98530_abs DAT_006a11d4
extern u8 DAT_006a11d0_98530_abs[];
extern u8 DAT_006a11d4_98530_abs[];
extern char D_006A1200[];
extern char DAT_006a12b0[];
extern char DAT_006a12d0[];
extern char DAT_006a1380[];
extern char DAT_006a13a0[];
extern char DAT_006a1500[];
extern char DAT_006a1520[];
extern char DAT_006a15e0[];
extern char DAT_006a1600[];
extern char DAT_006a15a0[];
extern char DAT_006a15c0[];
#pragma alias FUN_0016df30_u64 FUN_0016df30
extern u64 FUN_0016df30_u64(short);
extern char DAT_006a1400[];
extern char DAT_006a1420[];
extern char DAT_006a1620[];
extern char DAT_006a1640[];
extern u32 DAT_006a11d4;
extern u32 DAT_007cd488;
#pragma alias DAT_007cd488_f32 DAT_007cd488
extern f32 DAT_007cd488_f32;
extern u32 DAT_007ce420;
extern u32 DAT_007ce618;
extern u32 DAT_007e0952;
#pragma alias DAT_007e0952_d550_abs DAT_007e0952
extern u16 DAT_007e0952_d550_abs[];
extern code DAT_00960178;
extern code DAT_0096017c;
extern u32 LAB_00398d80;
extern u32 LAB_00399518;
extern u8 * PTR_s_;
extern u8 * PTR_s_Academics_006a1320[];
extern u32 iGpffffb730;
extern u8 *PTR_s_It_seems_further_power_lies_hi_007cd6f4;
extern u8 *PTR_s_No_further_power_is_available__007cd6f0;
#pragma alias PTR_s_It_seems_further_power_lies_hi_007cd6f4_abs PTR_s_It_seems_further_power_lies_hi_007cd6f4
extern u8 *PTR_s_It_seems_further_power_lies_hi_007cd6f4_abs;
#pragma alias PTR_s_No_further_power_is_available__007cd6f0_abs PTR_s_No_further_power_is_available__007cd6f0
extern u8 *PTR_s_No_further_power_is_available__007cd6f0_abs;
 
#pragma alias DAT_00960178_abs DAT_00960178
extern code DAT_00960178_abs[];
#pragma alias DAT_0096017c_abs DAT_0096017c
extern code DAT_0096017c_abs[];
#pragma alias FUN_003c77a0_b830 FUN_003c77a0
extern void FUN_003c77a0_b830(void);
#pragma alias FUN_00100ec0_b830 FUN_00100ec0
extern void FUN_00100ec0_b830(void);
#pragma alias FUN_0039ee80_b830 FUN_0039ee80
extern void FUN_0039ee80_b830(void *);
#pragma alias FUN_00521408_b8b0 FUN_00521408
extern void FUN_00521408_b8b0(void *,int,int);
#pragma alias FUN_00194b20_b8b0 FUN_00194b20
extern void FUN_00194b20_b8b0(u64,const char *,u32,u64 (*)(int),void *,void *);
/* W419 typed-return probe: FUN_0039e1b0 nd 736 -> 317, object 1332 -> 1336. */
#pragma alias FUN_00194b20_ret_b8b0 FUN_00194b20
extern u32 FUN_00194b20_ret_b8b0(u64 task,const char *path,u32 size,
                                  u64 (*callback)(int),void *arg1,void *arg2);
extern char DAT_006a1430[];
#pragma alias FUN_00100ec0_b830_arg FUN_00100ec0
extern void FUN_00100ec0_b830_arg(void *);
#pragma alias FUN_0039a8a0_b8b0 FUN_0039a8a0
extern u64 FUN_0039a8a0_b8b0(int);
#pragma alias FUN_0039b830_b8b0 FUN_0039b830
extern void FUN_0039b830_b8b0(int);
#pragma alias FUN_0039ea20_e820 FUN_0039ea20
extern void FUN_0039ea20_e820(u64,u32);
#pragma alias FUN_003196f0_ea20 FUN_003196f0
extern void FUN_003196f0_ea20(int,u32);
#pragma alias FUN_005225a8_eaa0 FUN_005225a8
extern void FUN_005225a8_eaa0(const char *,...);
extern void FUN_00388000(float param_1,float param_2,float *param_3,float *param_4,float *param_5,float *param_6,u32 *param_7,RwRGBA *param_8,u32 param_9);
#pragma alias FUN_003b91c0_a5c0 FUN_003b91c0
extern u64 FUN_003b91c0_a5c0(float,u16,u32,u32,u32,u32,u32);
#pragma alias FUN_003b89f0_evt_f32 FUN_003b89f0
extern u32 FUN_003b89f0_evt_f32(f32 param_1,u16 param_2,char *param_3,u32 param_4);

extern char DAT_006a1820[];
#pragma alias FUN_003b5d10_eb90 FUN_003b5d10
extern u32 FUN_003b5d10_eb90(u32);
#pragma alias FUN_003b7090_eb90 FUN_003b7090
extern void FUN_003b7090_eb90(u32);
#pragma alias FUN_0016dd40_d010 FUN_0016dd40
extern s16 FUN_0016dd40_d010(void);
#pragma alias FUN_0016dce0_d010 FUN_0016dce0
extern u32 FUN_0016dce0_d010(s16);
#pragma alias FUN_003a2090_d010 FUN_003a2090
extern u32 FUN_003a2090_d010(u32,int,s8,u16);
#pragma alias kwlnTaskExists_d010 kwlnTaskExists
extern u32 kwlnTaskExists_d010(u32);

#ifndef CONCAT44
#define CONCAT44(hi,lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif

extern u32 FUN_00318d10(u8 *param_1,u32 param_2,u32 *param_3);
extern u32 FUN_00316910(u16 param_1,u16 param_2,u16 param_3);
extern void FUN_00319390(int param_1,u32 param_2,u16 param_3,u16 param_4,u32 param_5,u32 param_6,u32 param_7);
extern void FUN_00319490(int param_1,u32 param_2,u16 param_3,u16 param_4,u32 param_5);
extern void FUN_003196d0(u32 param_1,u16 param_2,int param_3);
/* Region 0x390000-0x3CFFFF recovered prototypes */
int FUN_003983e0(int param_1,int param_2);
#pragma alias FUN_003983e0_call FUN_003983e0
extern int FUN_003983e0_call(int param_1,int param_2);
u32 FUN_00398530(int param_1);
void FUN_00399830(int param_1);
u32 FUN_003998b0(int param_1);
void FUN_00399be0(int param_1);
u32 FUN_00399c40(int param_1);
void FUN_0039a560(int param_1);
u32 FUN_0039a5c0(int param_1);
void FUN_0039a840(int param_1);
u32 FUN_0039a8a0(int param_1);
void FUN_0039b830(int param_1);
void FUN_0039b8b0(u64 param_1,u16 param_2);
u32 FUN_0039b950(int param_1);
void FUN_0039c090(int param_1);
u32 FUN_0039c0f0(int param_1);
void FUN_0039c3e0(int param_1);
u32 FUN_0039c440(int param_1);
void FUN_0039cd60(int param_1);
u32 FUN_0039cdc0(int param_1);
void FUN_0039cfb0(int param_1);
u32 FUN_0039d010(int param_1);
void FUN_0039d190(int param_1);
void FUN_0039d1c0(int param_1);
#pragma alias FUN_0039d1c0_d550 FUN_0039d1c0
extern void FUN_0039d1c0_d550(int);
u32 FUN_0039d550(int param_1);
void FUN_0039d880(int param_1);
u32 FUN_0039d8e0(int param_1);
void FUN_0039db00(int param_1);
u32 FUN_0039db60(int param_1);
void FUN_0039dd30(int param_1);
u32 FUN_0039dd90(int param_1);
void FUN_0039e130(int param_1);
u32 FUN_0039e1b0(int param_1,int param_2);
u32 FUN_0039e6f0(void);
void FUN_0039e700(u8 *param_1);
void FUN_0039e7c0(void);
void FUN_0039e820(u64 param_1);
u32 FUN_0039e880(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0039ea20(int param_1,int param_2);
void FUN_0039eaa0(int param_1);
void FUN_0039eb90(void);
u32 FUN_0039ec10(int param_1,int param_2,u32 *param_3,u32 *param_4);
int FUN_0039ec60(int param_1);


/* Region call-cast macros */
#define FUN_003983e0(...) FUN_003983e0(__VA_ARGS__)
#define FUN_00398530(...) FUN_00398530(__VA_ARGS__)
#define FUN_00399830(...) FUN_00399830(__VA_ARGS__)
#define FUN_003998b0(...) FUN_003998b0(__VA_ARGS__)
#define FUN_00399be0(...) FUN_00399be0(__VA_ARGS__)
#define FUN_00399c40(...) FUN_00399c40(__VA_ARGS__)
#define FUN_0039a560(...) FUN_0039a560(__VA_ARGS__)
#define FUN_0039a5c0(...) FUN_0039a5c0(__VA_ARGS__)
#define FUN_0039a840(...) FUN_0039a840(__VA_ARGS__)
#define FUN_0039a8a0(...) FUN_0039a8a0(__VA_ARGS__)
#define FUN_0039b830(...) FUN_0039b830(__VA_ARGS__)
#define FUN_0039b8b0(...) FUN_0039b8b0(__VA_ARGS__)
#define FUN_0039b950(...) FUN_0039b950(__VA_ARGS__)
#define FUN_0039c090(...) FUN_0039c090(__VA_ARGS__)
#define FUN_0039c0f0(...) FUN_0039c0f0(__VA_ARGS__)
#define FUN_0039c3e0(...) FUN_0039c3e0(__VA_ARGS__)
#define FUN_0039c440(...) FUN_0039c440(__VA_ARGS__)
#define FUN_0039cd60(...) FUN_0039cd60(__VA_ARGS__)
#define FUN_0039cdc0(...) FUN_0039cdc0(__VA_ARGS__)
#define FUN_0039cfb0(...) FUN_0039cfb0(__VA_ARGS__)
#define FUN_0039d010(...) FUN_0039d010(__VA_ARGS__)
#define FUN_0039d190(...) FUN_0039d190(__VA_ARGS__)
#define FUN_0039d1c0(...) FUN_0039d1c0(__VA_ARGS__)
#define FUN_0039d550(...) FUN_0039d550(__VA_ARGS__)
#define FUN_0039d880(...) FUN_0039d880(__VA_ARGS__)
#define FUN_0039d8e0(...) FUN_0039d8e0(__VA_ARGS__)
#define FUN_0039db00(...) FUN_0039db00(__VA_ARGS__)
#define FUN_0039db60(...) FUN_0039db60(__VA_ARGS__)
#define FUN_0039dd30(...) FUN_0039dd30(__VA_ARGS__)
#define FUN_0039dd90(...) FUN_0039dd90(__VA_ARGS__)
#define FUN_0039e130(...) FUN_0039e130(__VA_ARGS__)
#define FUN_0039e1b0(...) FUN_0039e1b0(__VA_ARGS__)
#define FUN_0039e6f0(...) FUN_0039e6f0(__VA_ARGS__)
#define FUN_0039e700(...) FUN_0039e700(__VA_ARGS__)
#define FUN_0039e7c0(...) FUN_0039e7c0(__VA_ARGS__)
#define FUN_0039e820(...) FUN_0039e820(__VA_ARGS__)
#define FUN_0039e880(...) FUN_0039e880(__VA_ARGS__)
#define FUN_0039ea20(...) FUN_0039ea20(__VA_ARGS__)
#define FUN_0039eaa0(...) FUN_0039eaa0(__VA_ARGS__)
#define FUN_0039eb90(...) FUN_0039eb90(__VA_ARGS__)
#define FUN_0039ec10(...) FUN_0039ec10(__VA_ARGS__)
#define FUN_0039ec60(...) FUN_0039ec60(__VA_ARGS__)

#undef FUN_003983e0
// FUN_003983E0


int FUN_003983e0(int param_1,int param_2)
{
  int iVar1;
  int iVar2;

  iVar1 = 0;
  iVar2 = 0;
  if (FUN_00172160(param_2) == 1) {
    iVar1 = 2;
  }
  else {
    if (FUN_001717c0(param_2) == 1) {
      iVar1 = 1;
    }
  }
  switch (param_1) {
  case 0:
    iVar2 = iVar1 + param_2 * 0xc;
    break;
  case 1:
    iVar2 = iVar1 + ((param_2 * 0xc) + 3);
    break;
  case 2:
    iVar2 = iVar1 + ((param_2 * 0xc) + 6);
    break;
  case 3:
    iVar2 = iVar1 + ((param_2 * 0xc) + 9);
    break;
  }
  if ((iVar2 + 5 >= 0x16d) || (iVar2 + 5 < 0)) {
    FUN_0019d3f0(D_006A1200,0x110);
  }
  return iVar2 + 5;
}
#define FUN_003983e0(...) FUN_003983e0(__VA_ARGS__)
#undef FUN_00398530
/* opt_propagation off: default nd3002/4864B -> nd2999/4864B; retained. */
#pragma push
#pragma opt_propagation off
// FUN_00398530


#ifndef PC_BUILD
asm u32 FUN_00398530(int param_1)
{
  .set noreorder
  .word 0x27bdfe60
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8c93003c
  .word 0x26700058
  .word 0x8e620000
  .word 0x2c41002a
  .word 0x102004a4
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463ad30
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e620048
  .word 0x8c420004
  .word 0x30420008
  .word 0x14400022
  .word 0x00000000
  .word 0x0c05ca24
  .word 0x00000000
  .word 0x2404000b
  .word 0x0c05b7ec
  .word 0x00000000
  .word 0x24040008
  .word 0x0c05b7ec
  .word 0x00000000
  .word 0x2404000b
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00028e3c
  .word 0x00118e3f
  .word 0x26250001
  .word 0x2404000b
  .word 0x24060001
  .word 0x0c05c8e8
  .word 0x00000000
  .word 0x26250001
  .word 0x24040008
  .word 0x24060001
  .word 0x0c05c8e8
  .word 0x00000000
  .word 0x0c05cb90
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c05cb90
  .word 0x00000000
  .word 0x8c460018
  .word 0x24040001
  .word 0x0220282d
  .word 0x0c0f098c
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000005
  .word 0x00000000
  .word 0x262409b0
  .word 0x0c0e5468
  .word 0x00000000
  .word 0x26310001
  .word 0x2a22001e
  .word 0x00000000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x0c0f09dc
  .word 0x00000000
  .word 0xae620050
  .word 0x8e62004c
  .word 0x84420014
  .word 0xa6620008
  .word 0xae600080
  .word 0xae600004
  .word 0x24020001
  .word 0xae620000
  .word 0x10000460
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841220
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae620054
  .word 0x24020002
  .word 0xae620000
  .word 0x10000456
  .word 0x00000000
  .word 0x8e640054
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x14430450
  .word 0x00000000
  .word 0x24020003
  .word 0xae620000
  .word 0x3c04006a
  .word 0x24841240
  .word 0x27a5019c
  .word 0x0c040870
  .word 0x00000000
  .word 0xae620078
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x10000442
  .word 0x00000000
  .word 0x8e640050
  .word 0x8e720004
  .word 0x8c820000
  .word 0x0242082a
  .word 0x10200005
  .word 0x00000000
  .word 0x8e630080
  .word 0x24020001
  .word 0x14620005
  .word 0x00000000
  .word 0x24020028
  .word 0xae620000
  .word 0x10000434
  .word 0x00000000
  .word 0x001210c0
  .word 0x00521023
  .word 0x000288c0
  .word 0x02241021
  .word 0x90420004
  .word 0xa2620010
  .word 0x92640010
  .word 0x0c05b738
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x2405018f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x92620010
  .word 0x244409b0
  .word 0x0c0e545c
  .word 0x00000000
  .word 0x8e620048
  .word 0x8c420004
  .word 0x30420008
  .word 0x10400005
  .word 0x00000000
  .word 0x92620010
  .word 0x24440990
  .word 0x0c0e545c
  .word 0x00000000
  .word 0x92640010
  .word 0x0c0f09e0
  .word 0x00000000
  .word 0xae620084
  .word 0x001210c0
  .word 0x00521023
  .word 0x000230c0
  .word 0x8e620050
  .word 0x00c21021
  .word 0x8c420008
  .word 0xae620014
  .word 0x8e620050
  .word 0x00c21021
  .word 0x90420006
  .word 0xa2620012
  .word 0x0000382d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00071040
  .word 0x00471021
  .word 0x00021840
  .word 0x8e620050
  .word 0x00c21021
  .word 0x00431021
  .word 0x02632821
  .word 0x84440022
  .word 0x84430024
  .word 0x84420026
  .word 0xa4a4002e
  .word 0xa4a30030
  .word 0xa4a20032
  .word 0x24e70001
  .word 0x8e620014
  .word 0x00e2102a
  .word 0x1440ffef
  .word 0x00000000
  .word 0x8e620050
  .word 0x02221021
  .word 0x90420022
  .word 0x2841002a
  .word 0x10200009
  .word 0x00000000
  .word 0x304400ff
  .word 0x0c0f0fd0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0xae60000c
  .word 0x24020004
  .word 0xae620000
  .word 0x100003e0
  .word 0x00000000
  .word 0x92640010
  .word 0x0c0f103c
  .word 0x00000000
  .word 0x24030002
  .word 0x10430013
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000c
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x100003d3
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x240501b4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x100003cc
  .word 0x00000000
  .word 0x24020016
  .word 0xae620000
  .word 0x100003c8
  .word 0x00000000
  .word 0x92640010
  .word 0x0c0f1044
  .word 0x00000000
  .word 0x3045ffff
  .word 0x24040005
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0xae620098
  .word 0x24020005
  .word 0xae620000
  .word 0x100003bb
  .word 0x00000000
  .word 0x8e640098
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x24030001
  .word 0x144303b5
  .word 0x00000000
  .word 0x24040389
  .word 0x24050003
  .word 0x8e660098
  .word 0x0c0ed89c
  .word 0x00000000
  .word 0xa6620094
  .word 0x8e62004c
  .word 0x8c440040
  .word 0x27a50060
  .word 0x0000302d
  .word 0x0c0e3610
  .word 0x00000000
  .word 0x24040005
  .word 0x0c0e2a40
  .word 0x00000000
  .word 0x46000506
  .word 0x27a40060
  .word 0x0c0ef23c
  .word 0x00000000
  .word 0x00021843
  .word 0x04410003
  .word 0x00000000
  .word 0x24420001
  .word 0x00021843
  .word 0x24650001
  .word 0x27a40060
  .word 0x0c0ef1cc
  .word 0x00000000
  .word 0xe6600090
  .word 0x46000306
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841260
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x83a20060
  .word 0x1840001a
  .word 0x00000000
  .word 0x96640094
  .word 0x24050001
  .word 0x00a0302d
  .word 0x2407000d
  .word 0x24080006
  .word 0x0c0eec74
  .word 0x00000000
  .word 0x96640094
  .word 0x27a50060
  .word 0x4600a306
  .word 0x0000302d
  .word 0x0c0ee27c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x24060001
  .word 0x0000382d
  .word 0x00c0402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x240501df
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96640094
  .word 0x24050001
  .word 0x0c0ee554
  .word 0x00000000
  .word 0x24020006
  .word 0xae620000
  .word 0x10000367
  .word 0x00000000
  .word 0x96640094
  .word 0x0c0ed744
  .word 0x00000000
  .word 0xc441005c
  .word 0xc6600090
  .word 0x46000834
  .word 0x4501035f
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841278
  .word 0x0c14896a
  .word 0x00000000
  .word 0x96640094
  .word 0x24050001
  .word 0x0c0ee0c4
  .word 0x00000000
  .word 0x24020007
  .word 0xae620000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x10000349
  .word 0x00000000
  .word 0x8e620084
  .word 0x94450004
  .word 0x94460006
  .word 0x0200202d
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020008
  .word 0xae620000
  .word 0x1000033e
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430338
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae62007c
  .word 0x24020009
  .word 0xae620000
  .word 0x10000330
  .word 0x00000000
  .word 0x8e62007c
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e620084
  .word 0x94450008
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8e620084
  .word 0x9445000a
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000a
  .word 0xae620000
  .word 0x10000319
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430313
  .word 0x00000000
  .word 0x24020013
  .word 0xae620000
  .word 0x1000030f
  .word 0x00000000
  .word 0x92650010
  .word 0x0000202d
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x0200202d
  .word 0x0220282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x24060003
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x2402000c
  .word 0xae620000
  .word 0x100002ec
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144302e6
  .word 0x00000000
  .word 0x2402000d
  .word 0xae620000
  .word 0x100002e2
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x10620007
  .word 0x00000000
  .word 0x24050004
  .word 0x10650004
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7df0
  .word 0x00000000
  .word 0x2402000e
  .word 0xae620000
  .word 0x100002cb
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144302c5
  .word 0x00000000
  .word 0x92710010
  .word 0x0220202d
  .word 0x0c05c858
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000001f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05c5f0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000016
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c03006a
  .word 0x246311d0
  .word 0x1000000d
  .word 0x00000000
  .word 0x000520c0
  .word 0x00641021
  .word 0x8c420000
  .word 0x16220007
  .word 0x00000000
  .word 0x3c02006a
  .word 0x244211d4
  .word 0x00441021
  .word 0x8c510000
  .word 0x10000006
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a20005
  .word 0x1440fff2
  .word 0x00000000
  .word 0x2411000a
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae62007c
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e548c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0xae63000c
  .word 0x2402000f
  .word 0xae620000
  .word 0x10000289
  .word 0x00000000
  .word 0x8e63007c
  .word 0x24020002
  .word 0x10620066
  .word 0x00000000
  .word 0x24040001
  .word 0x10640034
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000008c
  .word 0x00000000
  .word 0xae640080
  .word 0x92650010
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x24060007
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x24060007
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x92650010
  .word 0x0040202d
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x24060005
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x92650010
  .word 0x24040003
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x24060005
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x24060006
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0220282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020010
  .word 0xae620000
  .word 0x100001e9
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144301e3
  .word 0x00000000
  .word 0x8e62000c
  .word 0x14430005
  .word 0x00000000
  .word 0x24020011
  .word 0xae620000
  .word 0x100001dc
  .word 0x00000000
  .word 0x24020013
  .word 0xae620000
  .word 0x100001d8
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020012
  .word 0xae620000
  .word 0x100001ce
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144301c8
  .word 0x00000000
  .word 0x24020013
  .word 0xae620000
  .word 0x100001c4
  .word 0x00000000
  .word 0x96640094
  .word 0x0000282d
  .word 0x0c0ee0c4
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640094
  .word 0x0000282d
  .word 0x24060001
  .word 0x0000382d
  .word 0x00c0402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x24020014
  .word 0xae620000
  .word 0x100001b2
  .word 0x00000000
  .word 0x96640094
  .word 0x0c0ee568
  .word 0x00000000
  .word 0x144001ad
  .word 0x00000000
  .word 0x24020015
  .word 0xae620000
  .word 0x100001a9
  .word 0x00000000
  .word 0x24020003
  .word 0xae620000
  .word 0x96640094
  .word 0x0c0edc24
  .word 0x00000000
  .word 0xa6600094
  .word 0x8e620004
  .word 0x24420001
  .word 0xae620004
  .word 0x1000019e
  .word 0x00000000
  .word 0x96640008
  .word 0x24050011
  .word 0x0c0eec04
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050065
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x24020017
  .word 0xae620000
  .word 0xae600088
  .word 0x2402003c
  .word 0xae62008c
  .word 0x1000018e
  .word 0x00000000
  .word 0x8e630088
  .word 0x8e62008c
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x24620001
  .word 0xae620088
  .word 0x0000102d
  .word 0x10400181
  .word 0x00000000
  .word 0x24020018
  .word 0xae620000
  .word 0x1000017d
  .word 0x00000000
  .word 0x8e620084
  .word 0x94450004
  .word 0x94460006
  .word 0x0200202d
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020019
  .word 0xae620000
  .word 0x10000172
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443016c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae62007c
  .word 0x2402001a
  .word 0xae620000
  .word 0x10000164
  .word 0x00000000
  .word 0x8e62007c
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e620084
  .word 0x94450008
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8e620084
  .word 0x9445000a
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000a
  .word 0xae620000
  .word 0x1000014d
  .word 0x00000000
  .word 0x2402001c
  .word 0xae620000
  .word 0x10000149
  .word 0x00000000
  .word 0x2402001d
  .word 0xae620000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x2406000e
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x2406000d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x96640008
  .word 0x24050011
  .word 0x0c0eec04
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050065
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0x10000128
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402001e
  .word 0xae620000
  .word 0x1000011e
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430118
  .word 0x00000000
  .word 0x2402001f
  .word 0xae620000
  .word 0x10000114
  .word 0x00000000
  .word 0x92650010
  .word 0x0000202d
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0040282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020020
  .word 0xae620000
  .word 0x10000106
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430100
  .word 0x00000000
  .word 0x24020021
  .word 0xae620000
  .word 0x100000fc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x10620007
  .word 0x00000000
  .word 0x24050004
  .word 0x10650004
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7df0
  .word 0x00000000
  .word 0x24020022
  .word 0xae620000
  .word 0x100000e5
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144300df
  .word 0x00000000
  .word 0x92710010
  .word 0x0220202d
  .word 0x0c05c858
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000001f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05c5f0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000016
  .word 0x00000000
  .word 0x0000282d
  .word 0x3c03006a
  .word 0x246311d0
  .word 0x1000000d
  .word 0x00000000
  .word 0x000520c0
  .word 0x00641021
  .word 0x8c420000
  .word 0x16220007
  .word 0x00000000
  .word 0x3c02006a
  .word 0x244211d4
  .word 0x00441021
  .word 0x8c510000
  .word 0x10000006
  .word 0x00000000
  .word 0x24a50001
  .word 0x28a20005
  .word 0x1440fff2
  .word 0x00000000
  .word 0x2411000a
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae62007c
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0e548c
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0xae63000c
  .word 0x24020023
  .word 0xae620000
  .word 0x100000a3
  .word 0x00000000
  .word 0x8e63007c
  .word 0x24020002
  .word 0x1062003e
  .word 0x00000000
  .word 0x24040001
  .word 0x10640020
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000050
  .word 0x00000000
  .word 0xae640080
  .word 0x92650010
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x24060007
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x2406000d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x92650010
  .word 0x0040202d
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x24060005
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x2406000d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x92650010
  .word 0x24040003
  .word 0x0c0e60f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x24060005
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96640008
  .word 0x0000282d
  .word 0x2406000d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0220282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020024
  .word 0xae620000
  .word 0x1000003f
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430039
  .word 0x00000000
  .word 0x8e62000c
  .word 0x10400005
  .word 0x00000000
  .word 0x24020025
  .word 0xae620000
  .word 0x10000032
  .word 0x00000000
  .word 0x24020027
  .word 0xae620000
  .word 0x1000002e
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020026
  .word 0xae620000
  .word 0x10000024
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443001e
  .word 0x00000000
  .word 0x24020027
  .word 0xae620000
  .word 0x1000001a
  .word 0x00000000
  .word 0x24020003
  .word 0xae620000
  .word 0x8e620004
  .word 0x24420001
  .word 0xae620004
  .word 0x10000013
  .word 0x00000000
  .word 0x8e630080
  .word 0x24020001
  .word 0x14620008
  .word 0x00000000
  .word 0x26640010
  .word 0x0c05ca34
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841290
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020029
  .word 0xae620000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd01a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#define FUN_00398530(...) FUN_00398530(__VA_ARGS__)
#undef FUN_00399830
// FUN_00399830


void FUN_00399830(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(void **)(iVar1 + 0x54) != (void *)0) {

    FUN_00100ec0(*(void **)(iVar1 + 0x54));

    *(u32 *)(iVar1 + 0x54) = 0;

  }

  FUN_0039ee80(iVar1 + 0x58);

  if (*(u16 *)(iVar1 + 0x94) != 0) {

    FUN_003b7090(*(u16 *)(iVar1 + 0x94));

    *(u16 *)(iVar1 + 0x94) = 0;

  }

  FUN_00386b70(iVar1,2,0x9c);

  return;

}
#define FUN_00399830(...) FUN_00399830(__VA_ARGS__)
#undef FUN_003998b0
// FUN_003998B0


u32 FUN_003998b0(int param_1)



{

  u32 *puVar1;

  u8 cVar2;

  int sVar3;

  u32 uVar4;

  u32 uVar5;

  int lVar6;

  u32 *puVar7;

  u8 auStack_4 [4];

  

  puVar1 = *(u32 **)(param_1 + 0x3c);

  puVar7 = puVar1 + 4;

  switch(*puVar1) {

  case 0:

    if ((*(u32 *)(puVar1[1] + 4) & 8) != 0) {

      lVar6 = FUN_001729a0();

      if (lVar6 == 0) {

        return 0xffffffff;

      }

      cVar2 = FUN_00172a10();

      if (cVar2 != '\0') {

        return 0xffffffff;

      }

      lVar6 = FUN_001729d0(puVar1 + 0xe);

      if (lVar6 == 0) {

        return 0xffffffff;

      }

    }

    uVar4 = FUN_00100d80(DAT_006a12b0,1);

    puVar1[3] = uVar4;

    *puVar1 = 1;

    break;

  case 1:

    lVar6 = FUN_001016b0(puVar1[3]);

    if (lVar6 == 1) {

      uVar5 = FUN_001021c0(DAT_006a12d0,auStack_4);

      puVar1[0xc] = (int)uVar5;

      FUN_0039ec70(puVar7,uVar5);

      if ((int)puVar1[0xe] < 0x2a) {

        uVar5 = FUN_003c3f40(puVar1[0xe] & 0xff);

        FUN_0039ef30(puVar7,0,uVar5);

      }

      *puVar1 = 2;

    }

    break;

  case 2:

    if ((*(u32 *)(puVar1[1] + 4) & 8) != 0) {

      FUN_0039f210(puVar7,1,-1,-1);

    }

    else {

      FUN_0039f210(puVar7,0,-1,-1);

    }

    *puVar1 = 3;

    break;

  case 3:

    lVar6 = FUN_0039f6e0(puVar7);

    if (lVar6 == 1) {

      *puVar1 = 4;

    }

    break;

  case 4:

    FUN_0039f210(puVar7,2,3,-1);

    *puVar1 = 5;

    break;

  case 5:

    lVar6 = FUN_0039f6e0(puVar7);

    if (lVar6 == 1) {

      uVar4 = FUN_0039f800(puVar7);

      puVar1[0xd] = uVar4;

      *puVar1 = 6;

    }

    break;

  case 6:

    sVar3 = FUN_0016dd40_d010();

    if (puVar1[0xd] == 0) {

      FUN_00172a20(1);

      FUN_0039f210(puVar7,sVar3 * 2 + 5,-1,-1);

    }

    else {

      FUN_00172a20(0);

      FUN_0039f210(puVar7,sVar3 * 2 + 6,-1,-1);

    }

    *puVar1 = 7;

    break;

  case 7:

    lVar6 = FUN_0039f6e0(puVar7);

    if (lVar6 == 1) {

      *puVar1 = 8;

    }

    break;

  case 8:

    return 0xffffffff;

  }

  FUN_0039f410(puVar7);

  return 0;

}
#define FUN_003998b0(...) FUN_003998b0(__VA_ARGS__)
#undef FUN_00399be0
// FUN_00399BE0


void FUN_00399be0(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x10);

  FUN_00386b70(iVar1,2,0x3c);

  return;

}
#define FUN_00399be0(...) FUN_00399be0(__VA_ARGS__)
#undef FUN_00399c40
/* opt_propagation off: default nd1399/2280B -> nd1392/2280B; retained. */
#pragma push
#pragma opt_propagation off
// FUN_00399C40


#ifndef PC_BUILD
asm u32 FUN_00399c40(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c92003c
  .word 0x26530010
  .word 0x8e420000
  .word 0x2c410009
  .word 0x1020022f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463ae50
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0e5480
  .word 0x00000000
  .word 0x28410028
  .word 0x10200004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000e
  .word 0x00000000
  .word 0x28410046
  .word 0x10200004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000008
  .word 0x00000000
  .word 0x2841005a
  .word 0x10200004
  .word 0x00000000
  .word 0x24030002
  .word 0x10000002
  .word 0x00000000
  .word 0x24030003
  .word 0x8e420008
  .word 0x00621021
  .word 0x80420018
  .word 0xae42003c
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000020d
  .word 0x00000000
  .word 0x8e420008
  .word 0x80420014
  .word 0xae420038
  .word 0x8e420008
  .word 0x80420015
  .word 0xae420034
  .word 0x00021880
  .word 0x3c02006a
  .word 0x24421320
  .word 0x00431021
  .word 0x8c420000
  .word 0xae420050
  .word 0x8e420008
  .word 0x8442001c
  .word 0xa642004c
  .word 0x8e430038
  .word 0x24020001
  .word 0x14620016
  .word 0x00000000
  .word 0x8e430034
  .word 0x24020007
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020006
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020005
  .word 0x10620009
  .word 0x00000000
  .word 0x24020004
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100001e5
  .word 0x00000000
  .word 0x8e420034
  .word 0x2c410008
  .word 0x1020000e
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463ae30
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e42003c
  .word 0xae420040
  .word 0x10000003
  .word 0x00000000
  .word 0x8e42003c
  .word 0xae420040
  .word 0x8e420038
  .word 0x14400012
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b248
  .word 0x00000000
  .word 0xc6400040
  .word 0x46800020
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae420040
  .word 0x1c400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100001c3
  .word 0x00000000
  .word 0x2404098b
  .word 0x0c0e545c
  .word 0x00000000
  .word 0x8e430034
  .word 0x24020002
  .word 0x10620042
  .word 0x00000000
  .word 0x24040001
  .word 0x10640022
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x0c05b1bc
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x0200202d
  .word 0x0c05dca0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae420044
  .word 0x8e420040
  .word 0x02021021
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05dca0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae420048
  .word 0x86440044
  .word 0x0c046a04
  .word 0x00000000
  .word 0xae420054
  .word 0x86440048
  .word 0x0c046a04
  .word 0x00000000
  .word 0xae420058
  .word 0x1000003e
  .word 0x00000000
  .word 0x0c05b1d0
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x0200202d
  .word 0x0c05dcbc
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae420044
  .word 0x8e420040
  .word 0x02021021
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05dcbc
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae420048
  .word 0x86440044
  .word 0x0c046a10
  .word 0x00000000
  .word 0xae420054
  .word 0x86440048
  .word 0x0c046a10
  .word 0x00000000
  .word 0xae420058
  .word 0x10000021
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1e4
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x0200202d
  .word 0x0c05dcd8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae420044
  .word 0x8e420040
  .word 0x02021021
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05dcd8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae420048
  .word 0x86440044
  .word 0x0c046a1c
  .word 0x00000000
  .word 0xae420054
  .word 0x86440048
  .word 0x0c046a1c
  .word 0x00000000
  .word 0xae420058
  .word 0x10000003
  .word 0x00000000
  .word 0xae400044
  .word 0xae400048
  .word 0x8e420004
  .word 0x8c420004
  .word 0x30420008
  .word 0x1040007e
  .word 0x00000000
  .word 0x8e510034
  .word 0x2e210008
  .word 0x1020007a
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463ae10
  .word 0x00111080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1bc
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8e420040
  .word 0x00431021
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x28a103e8
  .word 0x14200002
  .word 0x00000000
  .word 0x240503e7
  .word 0x24040001
  .word 0x0c05b3f8
  .word 0x00000000
  .word 0x10000061
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1d0
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8e420040
  .word 0x00431021
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x28a103e8
  .word 0x14200002
  .word 0x00000000
  .word 0x240503e7
  .word 0x24040001
  .word 0x0c05b424
  .word 0x00000000
  .word 0x1000004f
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b1e4
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8e420040
  .word 0x00431021
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x28a103e8
  .word 0x14200002
  .word 0x00000000
  .word 0x240503e7
  .word 0x24040001
  .word 0x0c05b458
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x8e500040
  .word 0x0c05d4d8
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x24020007
  .word 0x1222002f
  .word 0x00000000
  .word 0x24020006
  .word 0x12220024
  .word 0x00000000
  .word 0x24020005
  .word 0x12220019
  .word 0x00000000
  .word 0x24020004
  .word 0x1222000e
  .word 0x00000000
  .word 0x24020003
  .word 0x12220003
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x3064ffff
  .word 0x0010363c
  .word 0x0006363f
  .word 0x0000282d
  .word 0x0c05d1c4
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3064ffff
  .word 0x0010363c
  .word 0x0006363f
  .word 0x24050001
  .word 0x0c05d1c4
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x3064ffff
  .word 0x0010363c
  .word 0x0006363f
  .word 0x24050002
  .word 0x0c05d1c4
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x3064ffff
  .word 0x0010363c
  .word 0x0006363f
  .word 0x24050003
  .word 0x0c05d1c4
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3064ffff
  .word 0x0010363c
  .word 0x0006363f
  .word 0x24050004
  .word 0x0c05d1c4
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841340
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae42000c
  .word 0x24020001
  .word 0xae420000
  .word 0x100000cb
  .word 0x00000000
  .word 0x8e44000c
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x144300c5
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841360
  .word 0x27a5005c
  .word 0x0c040870
  .word 0x00000000
  .word 0xae420030
  .word 0x0260202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x8e460050
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050001
  .word 0x8e460040
  .word 0x0c0e7bbc
  .word 0x00000000
  .word 0x24020002
  .word 0xae420000
  .word 0x100000ad
  .word 0x00000000
  .word 0x8e420038
  .word 0x14400009
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050001
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24060004
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x9644004c
  .word 0x24050007
  .word 0x0c0eec04
  .word 0x00000000
  .word 0x24020003
  .word 0xae420000
  .word 0x1000008e
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430088
  .word 0x00000000
  .word 0x24020004
  .word 0xae420000
  .word 0x10000084
  .word 0x00000000
  .word 0x8e430044
  .word 0x8e420048
  .word 0x14620005
  .word 0x00000000
  .word 0x24020008
  .word 0xae420000
  .word 0x1000007c
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050001
  .word 0x8e460054
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050002
  .word 0x8e460058
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050002
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020005
  .word 0xae420000
  .word 0x10000068
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430062
  .word 0x00000000
  .word 0x24020008
  .word 0xae420000
  .word 0x1000005e
  .word 0x00000000
  .word 0x8e430034
  .word 0x24020001
  .word 0x10620018
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050003
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050004
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x0000802d
  .word 0x2404121a
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x2404121b
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0060802d
  .word 0x1000001a
  .word 0x00000000
  .word 0x2404121c
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x24100002
  .word 0x10000011
  .word 0x00000000
  .word 0x2404121d
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x24100003
  .word 0x10000008
  .word 0x00000000
  .word 0x2404121e
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x24100004
  .word 0x26050005
  .word 0x0260202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020007
  .word 0xae420000
  .word 0x1000000e
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x24020008
  .word 0xae420000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#define FUN_00399c40(...) FUN_00399c40(__VA_ARGS__)
#undef FUN_0039a560
// FUN_0039A560


void FUN_0039a560(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x10);

  FUN_00386b70(iVar1,2,0x5c);

  return;

}
#define FUN_0039a560(...) FUN_0039a560(__VA_ARGS__)
#undef FUN_0039a5c0
// FUN_0039A5C0


u32 FUN_0039a5c0(int param_1)



{

  u32 uVar1;

  u32 *puVar2;

  int iVar3;

  u32 uVar4;

  u32 uVar5;
 
  int lVar6;

  u32 *puVar7;

  u8 auStack_4 [4];

  

  puVar2 = *(u32 **)(param_1 + 0x3c);

  puVar7 = puVar2 + 4;

  iVar3 = puVar2[1];

  switch(*puVar2) {

  case 0:

    if ((*(u32 *)(iVar3 + 4) & 8) != 0) {

      lVar6 = FUN_00172c50(puVar2 + 0xd);

      if (lVar6 == 0) {

        *puVar2 = 6;

        break;

      }

      lVar6 = FUN_001717c0(*(s16 *)(puVar2 + 0xd));

      if ((lVar6 == 0) && (lVar6 = FUN_00172160(*(s16 *)(puVar2 + 0xd)), lVar6 == 0)) {

        *puVar2 = 6;

        break;

      }

    }

    else {

      *(u16 *)(puVar2 + 0xd) = 0;

    }

    uVar1 = *(u16 *)(puVar2[2] + 0x14);

    FUN_003b91c0_a5c0(1.0f,uVar1,0,3,0,0,0);

    FUN_003bb010(uVar1,0x11);

    FUN_003952d0(0,0x65,3);

    uVar4 = FUN_00100d80(DAT_006a1380,1);

    puVar2[3] = uVar4;

    *puVar2 = 1;

    break;

  case 1:

    lVar6 = FUN_001016b0(puVar2[3]);

    if (lVar6 == 1) {

      uVar5 = FUN_001021c0(DAT_006a13a0,auStack_4);

      puVar2[0xc] = (int)uVar5;

      FUN_0039ec70(puVar7,uVar5);

      *puVar2 = 2;

    }

    break;

  case 2:

    FUN_0039f210(puVar7,0,-1,-1);

    *puVar2 = 3;

    break;

  case 3:

    lVar6 = FUN_0039f6e0(puVar7);

    if (lVar6 == 1) {

      *puVar2 = 4;

    }

    break;

  case 4:

    FUN_0039f210(puVar7,*(short *)(puVar2 + 0xd) + 3,-1,-1);

    *puVar2 = 5;

    break;

  case 5:

    lVar6 = FUN_0039f6e0(puVar7);

    if (lVar6 == 1) {

      if ((*(u32 *)(iVar3 + 4) & 8) != 0) {

        FUN_00172b20();

      }

      *puVar2 = 6;

    }

    break;

  case 6:

    return 0xffffffff;

  }

  FUN_0039f410(puVar7);

  return 0;

}
#define FUN_0039a5c0(...) FUN_0039a5c0(__VA_ARGS__)
#undef FUN_0039a840
// FUN_0039A840


void FUN_0039a840(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x10);

  FUN_00386b70(iVar1,2,0x38);

  return;

}
#define FUN_0039a840(...) FUN_0039a840(__VA_ARGS__)
#undef FUN_0039a8a0
/* opt_lifetimes on: default nd2555/3908B -> nd2512/3908B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_0039A8A0


#ifndef PC_BUILD
asm u32 FUN_0039a8a0(int param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c91003c
  .word 0x2630089c
  .word 0x8e220000
  .word 0x2c410022
  .word 0x102003cd
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463aea0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x26240010
  .word 0x0c0efb28
  .word 0x00000000
  .word 0xae220008
  .word 0x14400005
  .word 0x00000000
  .word 0x24020021
  .word 0xae220000
  .word 0x100003bc
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248413c0
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae220898
  .word 0x24020001
  .word 0xae220000
  .word 0xae200088
  .word 0x100003b1
  .word 0x00000000
  .word 0x8e240898
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x144303ab
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248413e0
  .word 0x27a5008c
  .word 0x0c040870
  .word 0x00000000
  .word 0xae2208bc
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841400
  .word 0x27a5008c
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f2538
  .word 0x00000000
  .word 0x24020001
  .word 0xae2208d8
  .word 0x24020002
  .word 0xae220000
  .word 0x10000393
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x1000038f
  .word 0x00000000
  .word 0x8e23000c
  .word 0x8e220008
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0x24020021
  .word 0xae220000
  .word 0x10000386
  .word 0x00000000
  .word 0x8e230890
  .word 0x8e220894
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x24620001
  .word 0xae220890
  .word 0x0000102d
  .word 0x10400379
  .word 0x00000000
  .word 0x8e22000c
  .word 0x00021080
  .word 0x00511021
  .word 0x8c420010
  .word 0xae2208c0
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05ba48
  .word 0x00000000
  .word 0x8e2408c0
  .word 0x0c0efadc
  .word 0x00000000
  .word 0x8e2408c0
  .word 0x0c0f0bb8
  .word 0x00000000
  .word 0x0040902d
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x240506b7
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x8e2608c0
  .word 0x0c0e7bdc
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x8e2608c0
  .word 0x0c0e7bf4
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x8e2608c0
  .word 0x0c0e7c14
  .word 0x00000000
  .word 0x8e440004
  .word 0x8e450008
  .word 0x0c0f109c
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x9246002a
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c0e7c30
  .word 0x00000000
  .word 0x862408c0
  .word 0x27a50088
  .word 0x0c05b6f0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430009
  .word 0x00000000
  .word 0x97a40088
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x96240004
  .word 0x24050011
  .word 0x0c0eec04
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050065
  .word 0x24060003
  .word 0x0c0e54b4
  .word 0x00000000
  .word 0xae200890
  .word 0x24020032
  .word 0xae220894
  .word 0x24020004
  .word 0xae220000
  .word 0x10000326
  .word 0x00000000
  .word 0x8e230890
  .word 0x8e220894
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000004
  .word 0x00000000
  .word 0x24620001
  .word 0xae220890
  .word 0x0000102d
  .word 0x10400319
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x24060016
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x24060017
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x8e2308c0
  .word 0x000310c0
  .word 0x00431021
  .word 0x2445000c
  .word 0x2446000d
  .word 0x0200202d
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x100002f8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144302f2
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae2208c8
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x24020006
  .word 0xae220000
  .word 0x100002e7
  .word 0x00000000
  .word 0x862408c0
  .word 0x27a50084
  .word 0x0c05b6f0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x2402000a
  .word 0xae220000
  .word 0x100002dc
  .word 0x00000000
  .word 0x24020008
  .word 0xae220000
  .word 0x100002d8
  .word 0x00000000
  .word 0x8e2308c0
  .word 0x000310c0
  .word 0x00431021
  .word 0x2445000e
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020007
  .word 0xae220000
  .word 0x100002cb
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144302c5
  .word 0x00000000
  .word 0x8e22000c
  .word 0x24420001
  .word 0xae22000c
  .word 0xae200890
  .word 0x2402003c
  .word 0xae220894
  .word 0x24020003
  .word 0xae220000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x24060018
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x100002a7
  .word 0x00000000
  .word 0x8e2308c0
  .word 0x000310c0
  .word 0x00431021
  .word 0x2445000f
  .word 0x24460010
  .word 0x0200202d
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020009
  .word 0xae220000
  .word 0x1000029a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430294
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae2208c8
  .word 0x24030001
  .word 0x10430010
  .word 0x00000000
  .word 0x24030002
  .word 0x10430009
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000286
  .word 0x00000000
  .word 0x2402000c
  .word 0xae220000
  .word 0x10000282
  .word 0x00000000
  .word 0x2402000d
  .word 0xae220000
  .word 0x1000027e
  .word 0x00000000
  .word 0x2402000f
  .word 0xae220000
  .word 0x1000027a
  .word 0x00000000
  .word 0x8e2308c0
  .word 0x000310c0
  .word 0x00431021
  .word 0x2445000f
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220000
  .word 0x1000026d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430267
  .word 0x00000000
  .word 0x8e2308c0
  .word 0x000310c0
  .word 0x00431021
  .word 0x24460010
  .word 0x0200202d
  .word 0x24050005
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020009
  .word 0xae220000
  .word 0x1000025a
  .word 0x00000000
  .word 0x2624088c
  .word 0x0c05cb14
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x24020017
  .word 0xae220000
  .word 0x10000251
  .word 0x00000000
  .word 0x2402001f
  .word 0xae220000
  .word 0x1000024d
  .word 0x00000000
  .word 0x8e2308c0
  .word 0x000310c0
  .word 0x00431021
  .word 0x24450011
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000e
  .word 0xae220000
  .word 0x10000240
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443023a
  .word 0x00000000
  .word 0x8e22000c
  .word 0x24420001
  .word 0xae22000c
  .word 0xae200890
  .word 0x2402003c
  .word 0xae220894
  .word 0x24020003
  .word 0xae220000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x24060018
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x1000021c
  .word 0x00000000
  .word 0x8e2408c0
  .word 0x0c0f0fe0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x862408c0
  .word 0x0c05b7cc
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x304400ff
  .word 0x0c0c2eec
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x862408c0
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x0002363c
  .word 0x0006363f
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0e7bbc
  .word 0x00000000
  .word 0x8e2208c0
  .word 0x2445011a
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020010
  .word 0xae220000
  .word 0x100001f3
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144301ed
  .word 0x00000000
  .word 0xae2008d0
  .word 0x8e2408c0
  .word 0x262508cc
  .word 0x0c0efba0
  .word 0x00000000
  .word 0xae2208d4
  .word 0x24020013
  .word 0xae220000
  .word 0x100001e3
  .word 0x00000000
  .word 0x862408c0
  .word 0x0c05b7cc
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x304400ff
  .word 0x0c0c2eec
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x24060007
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020012
  .word 0xae220000
  .word 0x100001cc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144301c6
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0xae2008d0
  .word 0x8e2408c0
  .word 0x262508cc
  .word 0x0c0efba0
  .word 0x00000000
  .word 0xae2208d4
  .word 0x24020013
  .word 0xae220000
  .word 0x100001b7
  .word 0x00000000
  .word 0x24020008
  .word 0xae220000
  .word 0x100001b3
  .word 0x00000000
  .word 0x8e2308d0
  .word 0x8e2208cc
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0x24020015
  .word 0xae220000
  .word 0x100001aa
  .word 0x00000000
  .word 0x00031840
  .word 0x8e2208d4
  .word 0x00431021
  .word 0x94530000
  .word 0x8f83b730
  .word 0x001310c0
  .word 0x00531023
  .word 0x00021040
  .word 0x00431021
  .word 0x90450003
  .word 0x0000202d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x3264ffff
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000008
  .word 0x00000000
  .word 0x0c0f10fc
  .word 0x00000000
  .word 0x26440002
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x3264ffff
  .word 0x27a50060
  .word 0x27a60080
  .word 0x0c05dbec
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00121040
  .word 0x005d1021
  .word 0x94440060
  .word 0x0c0c2ed0
  .word 0x00000000
  .word 0x26440002
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x26520001
  .word 0x8fa20080
  .word 0x0242102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841420
  .word 0x0260282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f25e4
  .word 0x00000000
  .word 0x24020014
  .word 0xae220000
  .word 0x10000166
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x8e2208d0
  .word 0x24420001
  .word 0xae2208d0
  .word 0x24020013
  .word 0xae220000
  .word 0x0c0f1ee4
  .word 0x00000000
  .word 0x10000157
  .word 0x00000000
  .word 0x862408c0
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x2402000a
  .word 0x14620005
  .word 0x00000000
  .word 0x3c02007d
  .word 0x8c46d6f0
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02007d
  .word 0x8c46d6f4
  .word 0x0200202d
  .word 0x24050005
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050008
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020016
  .word 0xae220000
  .word 0x1000013b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430135
  .word 0x00000000
  .word 0x24020008
  .word 0xae220000
  .word 0x10000131
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x24060002
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020018
  .word 0xae220000
  .word 0x10000127
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430121
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae2208c8
  .word 0x24030001
  .word 0x1043001c
  .word 0x00000000
  .word 0x24030002
  .word 0x10430015
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000113
  .word 0x00000000
  .word 0x8624088c
  .word 0x0c05cb30
  .word 0x00000000
  .word 0x0c05cac8
  .word 0x00000000
  .word 0x0c0ef6ec
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x8624088c
  .word 0x0c05c658
  .word 0x00000000
  .word 0x2402001f
  .word 0xae220000
  .word 0x10000103
  .word 0x00000000
  .word 0x2402000d
  .word 0xae220000
  .word 0x100000ff
  .word 0x00000000
  .word 0x24020019
  .word 0xae220000
  .word 0x100000fb
  .word 0x00000000
  .word 0x8632088c
  .word 0x0240202d
  .word 0x0c0f0fe0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05b7cc
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x304400ff
  .word 0x0c0c2eec
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x0002363c
  .word 0x0006363f
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0e7bbc
  .word 0x00000000
  .word 0x2645011a
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402001c
  .word 0xae220000
  .word 0x100000d0
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144300ca
  .word 0x00000000
  .word 0xae2008d0
  .word 0x8624088c
  .word 0x262508cc
  .word 0x0c0efba0
  .word 0x00000000
  .word 0xae2208d4
  .word 0x2402001a
  .word 0xae220000
  .word 0x100000c0
  .word 0x00000000
  .word 0x8e2308d0
  .word 0x8e2208cc
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0x2402001d
  .word 0xae220000
  .word 0x100000b7
  .word 0x00000000
  .word 0x00031840
  .word 0x8e2208d4
  .word 0x00431021
  .word 0x94530000
  .word 0x8f83b730
  .word 0x001310c0
  .word 0x00531023
  .word 0x00021040
  .word 0x00431021
  .word 0x90450003
  .word 0x0000202d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x3264ffff
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000008
  .word 0x00000000
  .word 0x0c0f10fc
  .word 0x00000000
  .word 0x26440002
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x3264ffff
  .word 0x27a50050
  .word 0x27a6007c
  .word 0x0c05dbec
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00121040
  .word 0x005d1021
  .word 0x94440050
  .word 0x0c0c2ed0
  .word 0x00000000
  .word 0x26440002
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x26520001
  .word 0x8fa2007c
  .word 0x0242102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841420
  .word 0x0260282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f25e4
  .word 0x00000000
  .word 0x2402001b
  .word 0xae220000
  .word 0x10000073
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x8e2208d0
  .word 0x24420001
  .word 0xae2208d0
  .word 0x2402001a
  .word 0xae220000
  .word 0x0c0f1ee4
  .word 0x00000000
  .word 0x10000064
  .word 0x00000000
  .word 0x8624088c
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x2402000a
  .word 0x14620005
  .word 0x00000000
  .word 0x3c02007d
  .word 0x8c46d6f0
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02007d
  .word 0x8c46d6f4
  .word 0x0200202d
  .word 0x24050005
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050008
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402001e
  .word 0xae220000
  .word 0x10000048
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430042
  .word 0x00000000
  .word 0x24020017
  .word 0xae220000
  .word 0x1000003e
  .word 0x00000000
  .word 0x0c0f0c2c
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050896
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e2308c0
  .word 0x000310c0
  .word 0x00431021
  .word 0x24450012
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020020
  .word 0xae220000
  .word 0x10000028
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430022
  .word 0x00000000
  .word 0x8e22000c
  .word 0x24420001
  .word 0xae22000c
  .word 0xae200890
  .word 0x2402003c
  .word 0xae220894
  .word 0x24020003
  .word 0xae220000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x24060018
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240004
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#define FUN_0039a8a0(...) FUN_0039a8a0(__VA_ARGS__)
#undef FUN_0039b830
// FUN_0039B830


void FUN_0039b830(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0x8d8) != 0) {

    FUN_003c77a0_b830();

    *(u32 *)(iVar1 + 0x8d8) = 0;

  }

  if (*(int *)(iVar1 + 0x898) != 0) {


    FUN_00100ec0_b830_arg((void *)(*(int *)(iVar1 + 0x898)));
    *(u32 *)(iVar1 + 0x898) = 0;

  }

  FUN_0039ee80_b830((void *)(iVar1 + 0x89c));

  (*DAT_0096017c_abs)(iVar1);

  return;

}
#define FUN_0039b830(...) FUN_0039b830(__VA_ARGS__)
#undef FUN_0039b8b0
// FUN_0039B8B0


void FUN_0039b8b0(u64 param_1,u16 param_2)



{

  u32 uVar1;

  

  uVar1 = (*DAT_00960178_abs)(0x8dc,0x40000);

  FUN_00521408_b8b0((void *)(u32)uVar1,0,0x8dc);

  *(u16 *)((int)uVar1 + 4) = param_2;

  FUN_00194b20_b8b0(param_1,DAT_006a1430,0x10,FUN_0039a8a0_b8b0,FUN_0039b830_b8b0,(void *)(u32)uVar1);

  return;

}
#define FUN_0039b8b0(...) FUN_0039b8b0(__VA_ARGS__)
#undef FUN_0039b950
#undef FUN_003b91c0
#undef FUN_003b9320
// FUN_0039B950


#ifndef PC_BUILD
asm u32 FUN_0039b950(int param_1)
{
  .set noreorder
  .word 0x27bdfd40
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8c91003c
  .word 0x26320010
  .word 0x8e300004
  .word 0x8e220000
  .word 0x2c410010
  .word 0x102001b6
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463af30
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x2624003c
  .word 0x0000282d
  .word 0x24060018
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e020004
  .word 0x30420008
  .word 0x10400017
  .word 0x00000000
  .word 0x0c05cb90
  .word 0x00000000
  .word 0x8c460018
  .word 0xae260038
  .word 0x0000382d
  .word 0x10000007
  .word 0x00000000
  .word 0x00072880
  .word 0x00451821
  .word 0x8c640000
  .word 0x02251821
  .word 0xac64003c
  .word 0x24e70001
  .word 0x00e6182a
  .word 0x1460fff8
  .word 0x00000000
  .word 0x8c43001c
  .word 0xae230054
  .word 0x8c420020
  .word 0xae220058
  .word 0x1000001a
  .word 0x00000000
  .word 0x24020003
  .word 0xae220038
  .word 0x24020006
  .word 0xae22003c
  .word 0x24020007
  .word 0xae220040
  .word 0x2402000b
  .word 0xae220044
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x00101080
  .word 0x02221021
  .word 0x8444003c
  .word 0x0c05b7ec
  .word 0x00000000
  .word 0x26100001
  .word 0x8e220038
  .word 0x0202102a
  .word 0x1440fff7
  .word 0x00000000
  .word 0x24020008
  .word 0xae220054
  .word 0x24020028
  .word 0xae220058
  .word 0x8e220038
  .word 0x14400005
  .word 0x00000000
  .word 0x2402000f
  .word 0xae220000
  .word 0x10000170
  .word 0x00000000
  .word 0xae200034
  .word 0x8e220008
  .word 0x84420014
  .word 0xa6220066
  .word 0x3c04006a
  .word 0x24841440
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae22000c
  .word 0x24020001
  .word 0xae220000
  .word 0x10000162
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x1443015c
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841460
  .word 0x27a502bc
  .word 0x0c040870
  .word 0x00000000
  .word 0xae220030
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x8e240058
  .word 0x0c05f670
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bbc
  .word 0x00000000
  .word 0x24020002
  .word 0xae220000
  .word 0x10000146
  .word 0x00000000
  .word 0x8e230034
  .word 0x8e220038
  .word 0x0062082a
  .word 0x10200021
  .word 0x00000000
  .word 0x24040a18
  .word 0x0c0e5468
  .word 0x00000000
  .word 0x8e220034
  .word 0x00021080
  .word 0x00511021
  .word 0x8c44003c
  .word 0xae24005c
  .word 0x0c0f1044
  .word 0x00000000
  .word 0x3045ffff
  .word 0x24040005
  .word 0x0000302d
  .word 0x0c0c5b80
  .word 0x00000000
  .word 0xae220060
  .word 0x8e220034
  .word 0x24420001
  .word 0xae220034
  .word 0x8e240054
  .word 0x8e25005c
  .word 0x0c0f1010
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x10000121
  .word 0x00000000
  .word 0x2402000f
  .word 0xae220000
  .word 0x1000011d
  .word 0x00000000
  .word 0x8e240060
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x24030001
  .word 0x14430117
  .word 0x00000000
  .word 0x2404038a
  .word 0x24050003
  .word 0x8e260060
  .word 0x0c0ed89c
  .word 0x00000000
  .word 0xa6220064
  .word 0x8e220008
  .word 0x8c440040
  .word 0x27a50180
  .word 0x0000302d
  .word 0x0c0e3610
  .word 0x00000000
  .word 0x24040005
  .word 0x0c0e2a40
  .word 0x00000000
  .word 0x46000506
  .word 0x83a20180
  .word 0x1840001a
  .word 0x00000000
  .word 0x96240064
  .word 0x24050001
  .word 0x00a0302d
  .word 0x2407000d
  .word 0x24080006
  .word 0x0c0eec74
  .word 0x00000000
  .word 0x96240064
  .word 0x27a50180
  .word 0x4600a306
  .word 0x0000302d
  .word 0x0c0ee27c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240064
  .word 0x0000282d
  .word 0x24060001
  .word 0x0000382d
  .word 0x00c0402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050991
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96240064
  .word 0x24050001
  .word 0x0c0ee554
  .word 0x00000000
  .word 0x24020004
  .word 0xae220000
  .word 0x100000de
  .word 0x00000000
  .word 0x96240064
  .word 0x0c0ee568
  .word 0x00000000
  .word 0x144000d9
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240064
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x100000c9
  .word 0x00000000
  .word 0x24040003
  .word 0x0c0e5480
  .word 0x00000000
  .word 0x8e23005c
  .word 0x2464fffa
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00621021
  .word 0x24450003
  .word 0x0240202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020006
  .word 0xae220000
  .word 0x100000b6
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144300b0
  .word 0x00000000
  .word 0x24020007
  .word 0xae220000
  .word 0x100000ac
  .word 0x00000000
  .word 0x8e22005c
  .word 0x2443fffa
  .word 0x00031080
  .word 0x00431021
  .word 0x00021080
  .word 0x24460006
  .word 0x0240202d
  .word 0x0000282d
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020008
  .word 0xae220000
  .word 0x1000009d
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430097
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240066
  .word 0x0000282d
  .word 0x24060003
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240066
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x24020009
  .word 0xae220000
  .word 0x1000007f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0x00021080
  .word 0x24500004
  .word 0x24040004
  .word 0x0c0e5480
  .word 0x00000000
  .word 0x02022021
  .word 0x8e22005c
  .word 0x2443fffa
  .word 0x00031080
  .word 0x00431021
  .word 0x00021080
  .word 0x00821021
  .word 0x24450003
  .word 0x0240202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x2402000a
  .word 0xae220000
  .word 0x10000066
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430060
  .word 0x00000000
  .word 0x24040a18
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24030001
  .word 0x14430005
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220000
  .word 0x10000056
  .word 0x00000000
  .word 0x2402000d
  .word 0xae220000
  .word 0x10000052
  .word 0x00000000
  .word 0x8e25005c
  .word 0x24060002
  .word 0x96270066
  .word 0x0c0e8824
  .word 0x00000000
  .word 0xae220068
  .word 0x2402000c
  .word 0xae220000
  .word 0x10000048
  .word 0x00000000
  .word 0x8e240068
  .word 0x0c065518
  .word 0x00000000
  .word 0x14400043
  .word 0x00000000
  .word 0x2402000d
  .word 0xae220000
  .word 0x1000003f
  .word 0x00000000
  .word 0x8e220008
  .word 0x8c440040
  .word 0x27a50050
  .word 0x24060001
  .word 0x0c0e3610
  .word 0x00000000
  .word 0x2404000a
  .word 0x0c0e2a40
  .word 0x00000000
  .word 0x46000506
  .word 0x96240064
  .word 0x24050001
  .word 0x00a0302d
  .word 0x2407000c
  .word 0x24080006
  .word 0x0c0eec74
  .word 0x00000000
  .word 0x96240064
  .word 0x27a50050
  .word 0x4600a306
  .word 0x0000302d
  .word 0x0c0ee27c
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240064
  .word 0x0000282d
  .word 0x24060001
  .word 0x0000382d
  .word 0x00c0402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x2402000e
  .word 0xae220000
  .word 0x1000001a
  .word 0x00000000
  .word 0x96240064
  .word 0x0c0ee568
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x24040a18
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x24050001
  .word 0x14450004
  .word 0x00000000
  .word 0x8e24005c
  .word 0x0c05c7d4
  .word 0x00000000
  .word 0x96240064
  .word 0x0c0edc24
  .word 0x00000000
  .word 0xa6200064
  .word 0x24020002
  .word 0xae220000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd02c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039b950(...) FUN_0039b950(__VA_ARGS__)
#undef FUN_0039c090
// FUN_0039C090


void FUN_0039c090(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x10);

  FUN_00386b70(iVar1,2,0x6c);

  return;

}
#define FUN_0039c090(...) FUN_0039c090(__VA_ARGS__)
#undef FUN_0039c0f0
/* opt_propagation off: default nd434/732B -> nd429/732B; retained. */
#pragma push
#pragma opt_propagation off
// FUN_0039C0F0


#ifndef PC_BUILD
asm u32 FUN_0039c0f0(int param_1)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c91003c
  .word 0x26300010
  .word 0x8e370004
  .word 0x8e220000
  .word 0x2c410006
  .word 0x1020009c
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463af70
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x10000091
  .word 0x00000000
  .word 0x0000a02d
  .word 0x2413ffff
  .word 0x0000b02d
  .word 0x0000a82d
  .word 0x10000020
  .word 0x00000000
  .word 0x00151840
  .word 0x8e220040
  .word 0x00431021
  .word 0x94520014
  .word 0x12400019
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05ebf4
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05eb94
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x00141040
  .word 0x005d1021
  .word 0xa45200b0
  .word 0x00141080
  .word 0x005d1021
  .word 0xac550090
  .word 0x26940001
  .word 0x10000005
  .word 0x00000000
  .word 0x02a0982d
  .word 0x3256ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa20005
  .word 0x1440ffdf
  .word 0x00000000
  .word 0x2402ffff
  .word 0x16620019
  .word 0x00000000
  .word 0x1680000a
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x8e220008
  .word 0x84450014
  .word 0x02e0202d
  .word 0x0c0d8414
  .word 0x00000000
  .word 0x1000005b
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0e5480
  .word 0x00000000
  .word 0x00021880
  .word 0x007d1821
  .word 0x8c630090
  .word 0xae230034
  .word 0x00021040
  .word 0x005d1021
  .word 0x944200b0
  .word 0xa6220038
  .word 0x10000003
  .word 0x00000000
  .word 0xae330034
  .word 0xa6360038
  .word 0x3c04006a
  .word 0x24841480
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae22000c
  .word 0x24020002
  .word 0xae220000
  .word 0x10000042
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x1443003c
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248414a0
  .word 0x27a500bc
  .word 0x0c040870
  .word 0x00000000
  .word 0xae220030
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x1000002e
  .word 0x00000000
  .word 0x96240038
  .word 0x0c05ec40
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x8e23003c
  .word 0x00031080
  .word 0x00431021
  .word 0x24430003
  .word 0x8e220034
  .word 0x00432821
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020004
  .word 0xae220000
  .word 0x10000017
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430011
  .word 0x00000000
  .word 0x96240038
  .word 0x0c05ebc8
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8ee20004
  .word 0x30420008
  .word 0x14400003
  .word 0x00000000
  .word 0x0c05cab8
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#define FUN_0039c0f0(...) FUN_0039c0f0(__VA_ARGS__)
#undef FUN_0039c3e0
// FUN_0039C3E0


void FUN_0039c3e0(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x10);

  FUN_00386b70(iVar1,2,0x44);

  return;

}
#define FUN_0039c3e0(...) FUN_0039c3e0(__VA_ARGS__)
#undef FUN_003b91c0
#undef FUN_003b9320
#undef FUN_0039c440
// FUN_0039C440


#ifndef PC_BUILD
asm u32 FUN_0039c440(int param_1)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c91003c
  .word 0x26300010
  .word 0x8e330004
  .word 0x8e320008
  .word 0x8e220000
  .word 0x2c41000d
  .word 0x10200223
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463af90
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae22005c
  .word 0x8642001c
  .word 0xa6220068
  .word 0x8624005c
  .word 0x0c05b738
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050b69
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0000a82d
  .word 0x1000002a
  .word 0x00000000
  .word 0x0000902d
  .word 0x0c0ef61c
  .word 0x00000000
  .word 0x8c56067c
  .word 0x2aa20004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050b1f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000982d
  .word 0x001510c0
  .word 0x02c2b821
  .word 0x0015f080
  .word 0x10000013
  .word 0x00000000
  .word 0x00131040
  .word 0x02e2b021
  .word 0x96c40000
  .word 0x0c05eb94
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x96c30000
  .word 0x00121040
  .word 0x02221021
  .word 0xa443003c
  .word 0x027e1821
  .word 0x00121080
  .word 0x02221021
  .word 0xac430044
  .word 0x26520001
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440ffec
  .word 0x00000000
  .word 0x0292a021
  .word 0x26b50001
  .word 0x2aa20004
  .word 0x1440ffd5
  .word 0x00000000
  .word 0x12800006
  .word 0x00000000
  .word 0x8624005c
  .word 0x0c05ca94
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0xae200060
  .word 0x2402000c
  .word 0xae220000
  .word 0x100001cf
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248414c0
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae22000c
  .word 0x24020001
  .word 0xae220000
  .word 0x100001c5
  .word 0x00000000
  .word 0x8e24000c
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x144301bf
  .word 0x00000000
  .word 0x3c04006a
  .word 0x248414e0
  .word 0x27a500ac
  .word 0x0c040870
  .word 0x00000000
  .word 0xae220030
  .word 0x0200202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x8e24005c
  .word 0x0c0f0ff8
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x24020002
  .word 0xae220000
  .word 0x100001a9
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x1000019f
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430199
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae220034
  .word 0x14400005
  .word 0x00000000
  .word 0x24020004
  .word 0xae220000
  .word 0x1000018f
  .word 0x00000000
  .word 0xae200060
  .word 0x2402000c
  .word 0xae220000
  .word 0x1000018a
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x24060003
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020005
  .word 0xae220000
  .word 0x10000180
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443017a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae220034
  .word 0x24020006
  .word 0xae220000
  .word 0x10000172
  .word 0x00000000
  .word 0x8e320034
  .word 0x0000a02d
  .word 0x0c0ef61c
  .word 0x00000000
  .word 0x8c53067c
  .word 0x2a420004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050b1f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a82d
  .word 0x001210c0
  .word 0x02629821
  .word 0x0012b080
  .word 0x10000013
  .word 0x00000000
  .word 0x00151040
  .word 0x02629021
  .word 0x96440000
  .word 0x0c05eb94
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000a
  .word 0x00000000
  .word 0x96430000
  .word 0x00141040
  .word 0x02221021
  .word 0xa443003c
  .word 0x02b61821
  .word 0x00141080
  .word 0x02221021
  .word 0xac430044
  .word 0x26940001
  .word 0x26b50001
  .word 0x2aa20004
  .word 0x1440ffec
  .word 0x00000000
  .word 0xae340064
  .word 0x16800005
  .word 0x00000000
  .word 0x24020008
  .word 0xae220000
  .word 0x10000143
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x24060006
  .word 0x2407ffff
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020007
  .word 0xae220000
  .word 0x0000282d
  .word 0x8e240064
  .word 0x24030001
  .word 0x10000004
  .word 0x00000000
  .word 0x00831004
  .word 0x00a22825
  .word 0x24840001
  .word 0x28820004
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x34a50010
  .word 0x8e040008
  .word 0x0c0e8ee8
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00121040
  .word 0x02221021
  .word 0x9444003c
  .word 0x0c05ec40
  .word 0x00000000
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0040302d
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x26520001
  .word 0x8e220064
  .word 0x0242102a
  .word 0x1440fff2
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050005
  .word 0x24060004
  .word 0x0c0e929c
  .word 0x00000000
  .word 0x10000112
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443010c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7e00
  .word 0x00000000
  .word 0xae220034
  .word 0x24030004
  .word 0x14430004
  .word 0x00000000
  .word 0xae230000
  .word 0x10000102
  .word 0x00000000
  .word 0x00021080
  .word 0x00511021
  .word 0x8c520044
  .word 0x0c0ef61c
  .word 0x00000000
  .word 0x00121883
  .word 0x06410003
  .word 0x00000000
  .word 0x26430003
  .word 0x00031883
  .word 0x000318c0
  .word 0x8c42067c
  .word 0x00431821
  .word 0x32420003
  .word 0x06410004
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffc
  .word 0x00021040
  .word 0x00621021
  .word 0x94530000
  .word 0x8e34005c
  .word 0x0c0ef61c
  .word 0x00000000
  .word 0x00141900
  .word 0x8c420648
  .word 0x00431021
  .word 0x00521021
  .word 0x90420000
  .word 0xae220054
  .word 0x0260202d
  .word 0x0c05ec1c
  .word 0x00000000
  .word 0x0c0ef6e8
  .word 0x00000000
  .word 0x8e240054
  .word 0x90430000
  .word 0x0064082a
  .word 0x14200005
  .word 0x00000000
  .word 0x24020001
  .word 0xae220060
  .word 0x1000000b
  .word 0x00000000
  .word 0x90420001
  .word 0x0044082a
  .word 0x14200005
  .word 0x00000000
  .word 0x24020002
  .word 0xae220060
  .word 0x10000003
  .word 0x00000000
  .word 0x24020003
  .word 0xae220060
  .word 0x2402000a
  .word 0xae220000
  .word 0x100000c7
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020009
  .word 0xae220000
  .word 0x100000bd
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x144300b7
  .word 0x00000000
  .word 0x24020004
  .word 0xae220000
  .word 0x100000b3
  .word 0x00000000
  .word 0x82420024
  .word 0x14400035
  .word 0x00000000
  .word 0x8e230060
  .word 0x24020003
  .word 0x1062001f
  .word 0x00000000
  .word 0x24020002
  .word 0x10620011
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e23005c
  .word 0x00031040
  .word 0x00431021
  .word 0x24450007
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000050
  .word 0x00000000
  .word 0x8e23005c
  .word 0x00031040
  .word 0x00431021
  .word 0x24450008
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000045
  .word 0x00000000
  .word 0x8e23005c
  .word 0x00031040
  .word 0x00431021
  .word 0x24450009
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050bfe
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x8e230060
  .word 0x24020003
  .word 0x1062001f
  .word 0x00000000
  .word 0x24020002
  .word 0x10620011
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e23005c
  .word 0x00031040
  .word 0x00431021
  .word 0x24450061
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x8e23005c
  .word 0x00031040
  .word 0x00431021
  .word 0x24450062
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x8e23005c
  .word 0x00031040
  .word 0x00431021
  .word 0x24450063
  .word 0x0200202d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050c0e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8646001e
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240068
  .word 0x0000282d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0ee470
  .word 0x00000000
  .word 0x86460020
  .word 0x3c023f80
  .word 0x44826000
  .word 0x96240068
  .word 0x0000282d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x0c0ee4c8
  .word 0x00000000
  .word 0x2402000b
  .word 0xae220000
  .word 0x10000032
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x1443002c
  .word 0x00000000
  .word 0x2402000c
  .word 0xae220000
  .word 0x10000028
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e230060
  .word 0x24020003
  .word 0x10620014
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x86500014
  .word 0x1000000f
  .word 0x00000000
  .word 0x86500016
  .word 0x1000000c
  .word 0x00000000
  .word 0x86500018
  .word 0x10000009
  .word 0x00000000
  .word 0x8650001a
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x24050c2f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0200282d
  .word 0x0c0d8414
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0090
  .word 0x7bbe0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039c440(...) FUN_0039c440(__VA_ARGS__)
#undef FUN_0039cd60
// FUN_0039CD60


void FUN_0039cd60(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x10);

  FUN_00386b70(iVar1,2,0x6c);

  return;

}
#define FUN_0039cd60(...) FUN_0039cd60(__VA_ARGS__)
#undef FUN_0039cdc0
// FUN_0039CDC0


u32 FUN_0039cdc0(int param_1)
{
  int *state;
  int *work;
  int resourceId;
  u32 fieldHandle;
  u32 areaHandle;
  u32 resourceHandle;
  u32 unitHandle;
  int result;
  u8 pathScratch[4];

  state = *(int **)(param_1 + 0x3c);
  work = state + 4;
  resourceId = state[1];

  switch (state[0]) {
  case 0:
    fieldHandle = FUN_0017d920();
    areaHandle = FUN_0017da40();
    resourceHandle = FUN_00386e10(resourceId);
    unitHandle = FUN_00386e30(resourceId);
    result = FUN_003bda60(fieldHandle,areaHandle,resourceHandle,unitHandle);
    state[0xd] = result;
    if (result == -1) {
      *state = 4;
    }
    else {
      state[3] = FUN_00100d80(DAT_006a1500,1);
      *state = 1;
    }
    break;

  case 1:
    if (FUN_001016b0(state[3]) == 1) {
      result = FUN_001021c0(DAT_006a1520,pathScratch);
      state[0xc] = result;
      FUN_0039ec70(work,result);
      *state = 2;
    }
    break;

  case 2:
    FUN_0039f210(work,state[0xd],-1,-1);
    *state = 3;
    break;

  case 3:
    if (FUN_0039f6e0(work) == 1) {
      *state = 4;
    }
    break;

  case 4:
    return 0xffffffff;
  }

  FUN_0039f410(work);
  return 0;
}
#define FUN_0039cdc0(...) FUN_0039cdc0(__VA_ARGS__)
#undef FUN_0039cfb0
// FUN_0039CFB0


void FUN_0039cfb0(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x10);

  FUN_00386b70(iVar1,2,0x38);

  return;

}
#define FUN_0039cfb0(...) FUN_0039cfb0(__VA_ARGS__)
#undef FUN_0039d010
// FUN_0039D010


u32 FUN_0039d010(int param_1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  s8 cVar4;
  int sVar5;
  u16 uVar6;

  piVar1 = *(int **)(param_1 + 0x3c);
  piVar2 = (int *)piVar1[1];
  iVar3 = piVar1[2];
  switch (piVar1[0]) {
  case 0:
    cVar4 = *(s8 *)(iVar3 + 0x14);
    sVar5 = *(s8 *)(iVar3 + 0x18);
    uVar6 = *(u16 *)(iVar3 + 0x16);
    switch (cVar4) {
    case 0:
      break;
    case 1:
    case 2:
    case 3:
      sVar5 = FUN_0016dd40_d010();
      break;
    }
    if (FUN_0016dce0_d010((s16)sVar5) == 0) {
      if ((piVar2[1] & 8) != 0) {
        FUN_0019d3f0(D_006A1200,0xd88);
        return 0xffffffff;
      }
      sVar5 = 0;
    }
    piVar1[3] = FUN_003a2090_d010(param_1,sVar5,cVar4,uVar6);
    piVar1[0] = 1;
    break;
  case 1:
    if (kwlnTaskExists_d010(piVar1[3]) == 0) {
      piVar1[0] = 2;
    }
    break;
  case 2:
    return 0xffffffff;
  }
  return 0;
}
#define FUN_0039d010(...) FUN_0039d010(__VA_ARGS__)
#undef FUN_0039d190
// FUN_0039d190


void FUN_0039d190(int param_1)



{

  FUN_00386b70(*(u32 *)(param_1 + 0x3c),2,0x10);

  return;

}
#define FUN_0039d190(...) FUN_0039d190(__VA_ARGS__)
#undef FUN_0039d1c0
// FUN_0039D1C0


#ifndef PC_BUILD
asm void FUN_0039d1c0(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0xc780a798
  .word 0xe7a0004c
  .word 0x8c830018
  .word 0x186000d7
  .word 0x00000000
  .word 0xa3a3004f
  .word 0x3c0242fe
  .word 0xafa20040
  .word 0x3c024337
  .word 0x44820800
  .word 0xafa20044
  .word 0x8e03001c
  .word 0x24020001
  .word 0x14620006
  .word 0x00000000
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00044
  .word 0x3c024120
  .word 0xafa20038
  .word 0x3c0241e8
  .word 0xafa2003c
  .word 0x3c023ef4
  .word 0xafa20030
  .word 0x3c023edc
  .word 0xafa20034
  .word 0x3c023f04
  .word 0xafa20028
  .word 0x3c023f28
  .word 0xafa2002c
  .word 0x3c0240a0
  .word 0x44826000
  .word 0x44806800
  .word 0x27a40040
  .word 0x27a50038
  .word 0x27a60030
  .word 0x27a70028
  .word 0x8e080014
  .word 0x27a9004c
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x3c024309
  .word 0xafa20040
  .word 0x2402016f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00038
  .word 0x3c0241e8
  .word 0xafa2003c
  .word 0x3c023f03
  .word 0xafa20030
  .word 0x3c023edc
  .word 0xafa20034
  .word 0x3c023f04
  .word 0xafa20028
  .word 0x3c023f28
  .word 0xafa2002c
  .word 0x3c0240a0
  .word 0x44826000
  .word 0x44806800
  .word 0x27a40040
  .word 0x27a50038
  .word 0x27a60030
  .word 0x27a70028
  .word 0x8e080014
  .word 0x27a9004c
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x3c0243fc
  .word 0xafa20040
  .word 0x3c024120
  .word 0xafa20038
  .word 0x3c0241e8
  .word 0xafa2003c
  .word 0x3c023f0a
  .word 0xafa20030
  .word 0x3c023edc
  .word 0xafa20034
  .word 0x3c023f14
  .word 0xafa20028
  .word 0x3c023f28
  .word 0xafa2002c
  .word 0x3c0240a0
  .word 0x44826000
  .word 0x44806800
  .word 0x27a40040
  .word 0x27a50038
  .word 0x27a60030
  .word 0x27a70028
  .word 0x8e080014
  .word 0x27a9004c
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x8e02001c
  .word 0x1440000a
  .word 0x00000000
  .word 0xa3a0004d
  .word 0xa3a0004e
  .word 0xa3a0004c
  .word 0x3c024357
  .word 0xafa20040
  .word 0x3c024338
  .word 0xafa20044
  .word 0x10000007
  .word 0x00000000
  .word 0x240200b6
  .word 0xa3a2004c
  .word 0x240200de
  .word 0xa3a2004d
  .word 0x240200ff
  .word 0xa3a2004e
  .word 0x3c024357
  .word 0xafa20040
  .word 0x3c024338
  .word 0xafa20044
  .word 0x3c024358
  .word 0xafa20038
  .word 0x3c0241d0
  .word 0xafa2003c
  .word 0x3c023b80
  .word 0xafa20030
  .word 0x3c023c00
  .word 0xafa20034
  .word 0x3c023f55
  .word 0xafa20028
  .word 0x3c023e58
  .word 0xafa2002c
  .word 0x3c024080
  .word 0x44826000
  .word 0x44806800
  .word 0x27a40040
  .word 0x27a50038
  .word 0x27a60030
  .word 0x27a70028
  .word 0x8e080014
  .word 0x27a9004c
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x8e03001c
  .word 0x24020001
  .word 0x14620006
  .word 0x00000000
  .word 0xa3a0004d
  .word 0xa3a0004e
  .word 0xa3a0004c
  .word 0x10000007
  .word 0x00000000
  .word 0x240200b6
  .word 0xa3a2004c
  .word 0x240200de
  .word 0xa3a2004d
  .word 0x240200ff
  .word 0xa3a2004e
  .word 0x3c024338
  .word 0xafa20040
  .word 0x3c024356
  .word 0xafa20044
  .word 0x3c02431f
  .word 0xafa20038
  .word 0x3c0241d0
  .word 0xafa2003c
  .word 0x3c023b80
  .word 0xafa20030
  .word 0x3c023e60
  .word 0xafa20034
  .word 0x3c023f20
  .word 0xafa20028
  .word 0x3c023ed8
  .word 0xafa2002c
  .word 0x3c024080
  .word 0x44826000
  .word 0x44806800
  .word 0x27a40040
  .word 0x27a50038
  .word 0x27a60030
  .word 0x27a70028
  .word 0x8e080014
  .word 0x27a9004c
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0x24020155
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00040
  .word 0x3c024356
  .word 0xafa20044
  .word 0x3c0242ec
  .word 0xafa20038
  .word 0x3c0241d0
  .word 0xafa2003c
  .word 0x3c023b80
  .word 0xafa20030
  .word 0x3c023edc
  .word 0xafa20034
  .word 0x3c023eee
  .word 0xafa20028
  .word 0x3c023f22
  .word 0xafa2002c
  .word 0x3c024080
  .word 0x44826000
  .word 0x44806800
  .word 0x27a40040
  .word 0x27a50038
  .word 0x27a60030
  .word 0x27a70028
  .word 0x8e080014
  .word 0x27a9004c
  .word 0x0000502d
  .word 0x0c0e2000
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039d1c0(...) FUN_0039d1c0(__VA_ARGS__)
#undef FUN_0039d550
// FUN_0039D550


u32 FUN_0039d550(int param_1)



{

  u32 *puVar1;

  int iVar2;
  int config;

  u32 uVar3;

  u32 uVar4;

  int lVar5;

  u32 *puVar6;

  u8 auStack_4 [4];

  int iStack_8;

  

  puVar1 = *(u32 **)(param_1 + 0x3c);
  config = puVar1[1];

  puVar6 = puVar1 + 8;

  switch(*puVar1) {

  case 0:

    if (((*(u32 *)(config + 4) & 8) != 0) && (lVar5 = FUN_00188660(), lVar5 == 0)) {

      FUN_003951a0(0x1413);

      return 0xffffffff;

    }

    uVar3 = FUN_00100d80(DAT_006a1400 + 0x140,1);

    puVar1[3] = uVar3;

    *puVar1 = 1;

    break;

  case 1:

    lVar5 = FUN_001016b0(puVar1[3]);

    if (lVar5 == 1) {

      uVar4 = FUN_001021c0(DAT_006a1400 + 0x160,auStack_4);

      FUN_0039ec70(puVar6,uVar4);

      uVar3 = FUN_0010c1a0(0,DAT_006a1400 + 0x180,0,0,0,0,0,0,0,0,D_006A1200,0xe90);

      puVar1[4] = uVar3;

      *puVar1 = 2;

    }

    break;

  case 2:

    uVar3 = FUN_0010c3a0(puVar1[4],&iStack_8,0);

    if (iStack_8 == 1) {

      puVar1[5] = uVar3;

      puVar1[4] = 0;

      puVar1[6] = 0;

      *puVar1 = 3;

    }

    break;

  case 3:

    iVar2 = puVar1[6];

    puVar1[6] = iVar2 + 8;

    if (0xff < iVar2 + 8) {

      puVar1[6] = 0xff;

      *puVar1 = 4;

    }

    break;

  case 4:

    if (((DAT_007e0952_d550_abs[0] & 0x1000) != 0) || ((DAT_007e0952_d550_abs[0] & 0x4000) != 0)) {
      puVar1[7] = (u32)(puVar1[7] == 0);
    }
    else if ((DAT_007e0952_d550_abs[0] & 0x40) != 0) {
      *puVar1 = 5;
    }

    break;

  case 5:

    if ((int)puVar1[6] < 9) {

      puVar1[6] = 0;

      if (puVar1[7] == 0) {

        FUN_003951a0(0x1413);

      }

      else {

        FUN_00395170(0x1413);

      }

      *puVar1 = 8;

    }

    else {

      puVar1[6] = puVar1[6] + -8;

    }

    break;

  case 6:

    FUN_0039f210(puVar6,0,1,-1);

    *puVar1 = 7;

    break;

  case 7:

    lVar5 = FUN_0039f6e0(puVar6);

    if (lVar5 == 1) {

      lVar5 = FUN_0039f800(puVar6);

      if (lVar5 == 0) {

        FUN_003951a0(0x1413);

      }

      else {

        FUN_00395170(0x1413);

      }

      *puVar1 = 8;

    }

    break;

  case 8:

    return 0xffffffff;

  }

  FUN_0039d1c0_d550((int)puVar1);

  FUN_0039f410(puVar6);

  return 0;

}
#define FUN_0039d550(...) FUN_0039d550(__VA_ARGS__)
#undef FUN_0039d880
// FUN_0039D880


void FUN_0039d880(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0xc) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0xc));

    *(u32 *)(iVar1 + 0xc) = 0;

  }

  FUN_0039ee80(iVar1 + 0x20);

  FUN_00386b70(iVar1,2,0x40);

  return;

}
#define FUN_0039d880(...) FUN_0039d880(__VA_ARGS__)
#undef FUN_0039d8e0
// FUN_0039D8E0


u32 FUN_0039d8e0(int param_1)
{
  u32 *config;
  int *piVar1;
  s8 uVar2;
  short sVar3;
  int iVar4;
  u32 uVar5;
  int lVar6;
  u32 uVar7;
  int *piVar8;
  u8 auStack_4[4];

  piVar1 = *(int **)(param_1 + 0x3c);
  config = (u32 *)piVar1[1];
  piVar8 = piVar1 + 5;
  uVar5 = 0;
  switch (*piVar1) {
  case 0:
    if ((config[1] & 8) != 0) {
      sVar3 = FUN_0016dd40();
      piVar1[3] = (int)sVar3;
      lVar6 = FUN_0016dce0(sVar3);
      if (lVar6 == 0) {
        FUN_0019d3f0("mt_evtCustomEvent.c",0xf23);
      }
      lVar6 = FUN_0016dbc0((short)piVar1[3],piVar1 + 0xd);
      if (lVar6 == 0) {
        return 0xffffffff;
      }
    } else {
      piVar1[3] = 0;
      piVar1[0xd] = 1;
    }
    iVar4 = FUN_00100d80(DAT_006a15a0,1);
    piVar1[4] = iVar4;
    *piVar1 = 1;
    break;
  case 1:
    lVar6 = FUN_001016b0(piVar1[4]);
    if (lVar6 == 1) {
      uVar7 = FUN_001021c0(DAT_006a15c0,auStack_4);
      FUN_0039ec70(piVar8,uVar7);
      *piVar1 = 2;
    }
    break;
  case 2:
    uVar2 = FUN_0016df30_u64((short)piVar1[3]);
    uVar7 = FUN_0030bbb0((u8)uVar2);
    FUN_0039ef30(piVar8,0,uVar7);
    uVar7 = FUN_00173220((u16)piVar1[0xd]);
    FUN_0039ef30(piVar8,1,uVar7);
    FUN_0039f210(piVar8,0,-1,-1);
    *piVar1 = 3;
    break;
  case 3:
    lVar6 = FUN_0039f6e0(piVar8);
    if (lVar6 == 1) {
      *piVar1 = 4;
    }
    break;
  case 4:
    return 0xffffffff;
  }
  FUN_0039f410(piVar8);
  return uVar5;
}
#define FUN_0039d8e0(...) FUN_0039d8e0(__VA_ARGS__)
#undef FUN_0039db00
// FUN_0039DB00


void FUN_0039db00(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0x10) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0x10));

    *(u32 *)(iVar1 + 0x10) = 0;

  }

  FUN_0039ee80(iVar1 + 0x14);

  FUN_00386b70(iVar1,2,0x38);

  return;

}
#define FUN_0039db00(...) FUN_0039db00(__VA_ARGS__)
#undef FUN_0039db60
// An explicit s16 result local confirms the contract but leaves the same four-word
// W295: the a0-sext was FUN_00172660's hidden short argument (sVar2), not an
// allocation floor; passing it explicitly matched.
// FUN_0039DB60


u32 FUN_0039db60(int param_1)
{
  int *piVar1;
  u32 *config;
  int iVar3;
  int lVar5;
  short sVar2;
  u32 uVar6;
  int *piVar7;
  u8 auStack_4[4];

  piVar1 = *(int **)(param_1 + 0x3c);
  config = (u32 *)piVar1[1];
  piVar7 = piVar1 + 5;
  switch (*piVar1) {
  case 0:
    if ((config[1] & 8) == 0) {
      FUN_0016e920(6);
      FUN_0016dfb0(6);
      FUN_001723a0(6,2,1);
    }
    sVar2 = (short)FUN_0016dd40();
    piVar1[3] = sVar2;
    lVar5 = FUN_00172660(sVar2);
    if (lVar5 == 0) {
      return 0xffffffff;
    }
    iVar3 = FUN_00100d80(DAT_006a15e0,1);
    piVar1[4] = iVar3;
    *piVar1 = 1;
    break;
  case 1:
    lVar5 = FUN_001016b0(piVar1[4]);
    if (lVar5 == 1) {
      uVar6 = FUN_001021c0(DAT_006a1600,auStack_4);
      FUN_0039ec70(piVar7,uVar6);
      *piVar1 = 2;
    }
    break;
  case 2:
    FUN_0039f210(piVar7,0,-1,-1);
    *piVar1 = 3;
    break;
  case 3:
    lVar5 = FUN_0039f6e0(piVar7);
    if (lVar5 == 1) {
      *piVar1 = 4;
    }
    break;
  case 4:
    return 0xffffffff;
  }
  FUN_0039f410(piVar7);
  return 0;
}
#define FUN_0039db60(...) FUN_0039db60(__VA_ARGS__)
#undef FUN_0039dd30
// FUN_0039DD30


void FUN_0039dd30(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0x10) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0x10));

    *(u32 *)(iVar1 + 0x10) = 0;

  }

  FUN_0039ee80(iVar1 + 0x14);

  FUN_00386b70(iVar1,2,0x34);

  return;

}
#define FUN_0039dd30(...) FUN_0039dd30(__VA_ARGS__)
#undef FUN_0039dd90
/* opt_lifetimes on: default nd350/912B -> nd349/912B; retained. */
#pragma push
#pragma opt_lifetimes on
// FUN_0039DD90


#ifndef PC_BUILD
asm u32 FUN_0039dd90(int param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c90003c
  .word 0x8e040004
  .word 0x26130014
  .word 0x8e020000
  .word 0x2c410007
  .word 0x102000cf
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b000
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8c820004
  .word 0x30420008
  .word 0x14400007
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05ba48
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05b7ec
  .word 0x00000000
  .word 0x0c05b750
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae02000c
  .word 0xae000038
  .word 0x8e04000c
  .word 0x26050034
  .word 0x0c0efba0
  .word 0x00000000
  .word 0xae02003c
  .word 0x8e020034
  .word 0x1c400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100000b1
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841620
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020010
  .word 0x24020001
  .word 0xae020000
  .word 0x100000a3
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x24030001
  .word 0x1443009d
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841640
  .word 0x27a5006c
  .word 0x0c040870
  .word 0x00000000
  .word 0x0260202d
  .word 0x0040282d
  .word 0x0c0e7b1c
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841400
  .word 0x27a5006c
  .word 0x0c040870
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f2538
  .word 0x00000000
  .word 0x24020001
  .word 0xae020040
  .word 0x24020002
  .word 0xae020000
  .word 0x10000086
  .word 0x00000000
  .word 0x8e030038
  .word 0x8e020034
  .word 0x0062102a
  .word 0x14400005
  .word 0x00000000
  .word 0x24020004
  .word 0xae020000
  .word 0x1000007d
  .word 0x00000000
  .word 0x00031840
  .word 0x8e02003c
  .word 0x00431021
  .word 0x94520000
  .word 0x8f83b730
  .word 0x001210c0
  .word 0x00521023
  .word 0x00021040
  .word 0x00431021
  .word 0x90450003
  .word 0x0000202d
  .word 0x0000302d
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x3244ffff
  .word 0x0c05cc88
  .word 0x00000000
  .word 0x24040001
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000008
  .word 0x00000000
  .word 0x0c0f10fc
  .word 0x00000000
  .word 0x26240002
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440fff7
  .word 0x00000000
  .word 0x3244ffff
  .word 0x27a50050
  .word 0x27a60068
  .word 0x0c05dbec
  .word 0x00000000
  .word 0x0000882d
  .word 0x1000000b
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0x94440050
  .word 0x0c0c2ed0
  .word 0x00000000
  .word 0x26240002
  .word 0x0040282d
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x26310001
  .word 0x8fa20068
  .word 0x0222102a
  .word 0x1440fff3
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841420
  .word 0x0240282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f25e4
  .word 0x00000000
  .word 0x24020003
  .word 0xae020000
  .word 0x10000039
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x8e020038
  .word 0x24420001
  .word 0xae020038
  .word 0x24020002
  .word 0xae020000
  .word 0x0c0f1ee4
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x8604000c
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x2402000a
  .word 0x14620005
  .word 0x00000000
  .word 0x3c02007d
  .word 0x8c46d6f0
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02007d
  .word 0x8c46d6f4
  .word 0x0260202d
  .word 0x24050005
  .word 0x0c0e7bcc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x2406ffff
  .word 0x00c0382d
  .word 0x0c0e7c84
  .word 0x00000000
  .word 0x24020005
  .word 0xae020000
  .word 0x1000000e
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0e7db8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430008
  .word 0x00000000
  .word 0x24020006
  .word 0xae020000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0e7d04
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#define FUN_0039dd90(...) FUN_0039dd90(__VA_ARGS__)
#undef FUN_0039e130
// FUN_0039E130


void FUN_0039e130(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(param_1 + 0x3c);

  if (*(int *)(iVar1 + 0x40) != 0) {

    FUN_003c77a0();

    *(u32 *)(iVar1 + 0x40) = 0;

  }

  if (*(int *)(iVar1 + 0x10) != 0) {

    FUN_00100ec0(*(int *)(iVar1 + 0x10));

    *(u32 *)(iVar1 + 0x10) = 0;

  }

  FUN_0039ee80(iVar1 + 0x14);

  FUN_00386b70(iVar1,2,0x44);

  return;

}
#define FUN_0039e130(...) FUN_0039e130(__VA_ARGS__)
#undef FUN_0039e1b0
// FUN_0039E1B0


#ifndef PC_BUILD
asm u32 FUN_0039e1b0(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x8c840938
  .word 0x10800004
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xae200938
  .word 0x82020010
  .word 0x2c41000e
  .word 0x10200128
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b020
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x2404009c
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510048
  .word 0xac50004c
  .word 0xa4400094
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a51660
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e78530
  .word 0x3c08003a
  .word 0x25089830
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x1000010c
  .word 0x00000000
  .word 0x2404003c
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a51680
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e798b0
  .word 0x3c08003a
  .word 0x25089be0
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x100000f8
  .word 0x00000000
  .word 0x2404005c
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a516a0
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e79c40
  .word 0x3c08003a
  .word 0x2508a560
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x100000e4
  .word 0x00000000
  .word 0x24040038
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a516c0
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7a5c0
  .word 0x3c08003a
  .word 0x2508a840
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x100000d0
  .word 0x00000000
  .word 0x96100014
  .word 0x8e33092c
  .word 0x240408dc
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x0240202d
  .word 0x0000282d
  .word 0x240608dc
  .word 0x0c148502
  .word 0x00000000
  .word 0xa6500004
  .word 0x0260202d
  .word 0x3c05006a
  .word 0x24a51430
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7a8a0
  .word 0x3c08003a
  .word 0x2508b830
  .word 0x0240482d
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x100000b3
  .word 0x00000000
  .word 0x2404006c
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a516e0
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7b950
  .word 0x3c08003a
  .word 0x2508c090
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x1000009f
  .word 0x00000000
  .word 0x24040044
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a51700
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7c0f0
  .word 0x3c08003a
  .word 0x2508c3e0
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x1000008b
  .word 0x00000000
  .word 0x2404006c
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a51720
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7c440
  .word 0x3c08003a
  .word 0x2508cd60
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x10000077
  .word 0x00000000
  .word 0x24040038
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a51740
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7cdc0
  .word 0x3c08003a
  .word 0x2508cfb0
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x10000063
  .word 0x00000000
  .word 0x24040010
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a51760
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7d010
  .word 0x3c08003a
  .word 0x2508d190
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x1000004f
  .word 0x00000000
  .word 0x24040040
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a51780
  .word 0x240618c0
  .word 0x3c07003a
  .word 0x24e7d550
  .word 0x3c08003a
  .word 0x2508d880
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x1000003b
  .word 0x00000000
  .word 0x24040038
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a517a0
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7d8e0
  .word 0x3c08003a
  .word 0x2508db00
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x10000027
  .word 0x00000000
  .word 0x24040034
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a517c0
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7db60
  .word 0x3c08003a
  .word 0x2508dd30
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x10000013
  .word 0x00000000
  .word 0x24040044
  .word 0x24050002
  .word 0x0c0e1ab8
  .word 0x00000000
  .word 0x0040482d
  .word 0xac510004
  .word 0xac500008
  .word 0x8e24092c
  .word 0x3c05006a
  .word 0x24a517e0
  .word 0x24060010
  .word 0x3c07003a
  .word 0x24e7dd90
  .word 0x3c08003a
  .word 0x2508e130
  .word 0x0c0652c8
  .word 0x00000000
  .word 0xae220938
  .word 0x8e220938
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841200
  .word 0x240511b8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e230004
  .word 0x3c020002
  .word 0x00621025
  .word 0xae220004
  .word 0x24020001
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039e1b0(...) FUN_0039e1b0(__VA_ARGS__)
#undef FUN_0039e6f0
// FUN_0039e6f0


u32 FUN_0039e6f0(void)



{

  return DAT_007ce618;

}
#define FUN_0039e6f0(...) FUN_0039e6f0(__VA_ARGS__)
#undef FUN_0039e700
// W414 direct iVar1->entries[i] loop probes raised FUN_0039e700 nd17 -> nd37; retained cached entries form.
// FUN_0039E700


#ifndef PC_BUILD
asm void FUN_0039e700(u8 *param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0080502d
  .word 0xac80078c
  .word 0x8c880008
  .word 0x0000482d
  .word 0x24070001
  .word 0x1000001b
  .word 0x00000000
  .word 0x8d030034
  .word 0x00091140
  .word 0x00622021
  .word 0x8c820018
  .word 0x14470014
  .word 0x00000000
  .word 0x8d46078c
  .word 0x28c1000a
  .word 0x10200015
  .word 0x00000000
  .word 0x8d030010
  .word 0x8c820010
  .word 0x00622821
  .word 0x8c840014
  .word 0x24c37530
  .word 0x00061040
  .word 0x01421021
  .word 0xa44307b8
  .word 0x00061080
  .word 0x01421021
  .word 0xac450790
  .word 0xac4407cc
  .word 0x8d42078c
  .word 0x24420001
  .word 0xad42078c
  .word 0x25290001
  .word 0x8d020038
  .word 0x0122102a
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841800
  .word 0x8d45078c
  .word 0x0c14896a
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039e700(...) FUN_0039e700(__VA_ARGS__)
#undef FUN_0039e7c0
#undef FUN_0039e820
// FUN_0039E7C0


void FUN_0039e7c0(void)



{

  int iVar1;

  

  for (iVar1 = FUN_003b5d50(3); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xf8)) {

    FUN_0039e820(*(int *)(iVar1 + 0x128));

  }

  return;

}
#define FUN_0039e7c0(...) FUN_0039e7c0(__VA_ARGS__)
#undef FUN_0039e820
// FUN_0039E820


void FUN_0039e820(u64 param_1)



{

  int iVar1;

  

  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {

    FUN_0039ea20_e820(param_1,iVar1);

  }

  return;

}
#define FUN_0039e820(...) FUN_0039e820(__VA_ARGS__)
#undef FUN_0039e880
static inline int mtEvtAddOffsetFirst(int offset, int base) { return offset + base; }
/* opt_common_subs off: default nd123/408B -> nd44/408B; retained. */
#pragma push
#pragma opt_common_subs off
// FUN_0039E880


u32 FUN_0039e880(int param_1,int param_2,int param_3,int param_4,int param_5)



{
  int bVar1;
  u32 uVar2;
  int lVar3;
  int iVar4;
  u16 *puVar5;
  u8 auStack_40 [64];
  

  if (*(int *)(param_1 + 0x78c) <= param_4) {

    uVar2 = 0;

  }

  else {

    if (param_3 >= 3) {

      uVar2 = 0;

    }

    else {

      bVar1 = 0;

      iVar4 = mtEvtAddOffsetFirst((int)param_3 * 0xc,(int)param_2);

      if (((*(u8 *)(iVar4 + 0x3b4) & 1) != 0) && (*(int *)(iVar4 + 0x3b8) != 0)) {

        bVar1 = 1;

      }

      if (bVar1 == 1) {

        FUN_003196f0(param_2,param_3 & 0xffff);

      }

      lVar3 = FUN_00318d10((u8 *)param_2,param_5,(u32 *)auStack_40);

      if (lVar3 == 0) {

        uVar2 = 0;

      }

      else {

        iVar4 = mtEvtAddOffsetFirst(param_4 * 2,param_1);

        puVar5 = (u16 *)(iVar4 + 0x7b8);

        lVar3 = FUN_00316910(5,*puVar5,0);

        if (lVar3 == 0) {
          iVar4 = param_4 * 4;
          lVar3 = param_3 & 0xffff;
          iVar4 = iVar4 + param_1;
          FUN_00319390(param_2,lVar3,5,*puVar5,*(u32 *)(iVar4 + 0x790),
                       *(u32 *)(iVar4 + 0x7cc),1);
        }
        else {
          FUN_00319490(param_2,param_3 & 0xffff,5,*puVar5,0);
        }

        FUN_003196d0(param_2,param_3 & 0xffff,param_5);

        uVar2 = 1;

      }

    }

  }

  return uVar2;

}
#pragma pop
#define FUN_0039e880(...) FUN_0039e880(__VA_ARGS__)
#undef FUN_0039ea20
// FUN_0039EA20


void FUN_0039ea20(int param_1,int param_2)



{

  int iVar1;

  int bVar2;

  

  if ((param_2 < 3) && (param_2 >= 0) && (param_1 != 0)) {
    bVar2 = 0;

    iVar1 = (int)param_2 * 0xc;
    iVar1 = iVar1 + param_1;

    if (((*(u8 *)(iVar1 + 0x3b4) & 1) != 0) && (*(int *)(iVar1 + 0x3b8) != 0)) {

      bVar2 = 1;

    }

    if (bVar2 != 1) goto done;
    FUN_003196f0_ea20((int)param_1,param_2 & 0xffff);

  }
done:

  return;

}
#define FUN_0039ea20(...) FUN_0039ea20(__VA_ARGS__)
#undef FUN_0039eaa0
static inline int mtEvtAddBaseFirst(int base, int offset) { return base + offset; }
// W414 direct base->entries[index] loop probe raised FUN_0039eaa0 nd19 -> nd32; retained cached entries form.
// FUN_0039EAA0


#ifndef PC_BUILD
asm void FUN_0039eaa0(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x263007f4
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060038
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e280008
  .word 0x0000482d
  .word 0x24070002
  .word 0x1000001b
  .word 0x00000000
  .word 0x8d030034
  .word 0x00091140
  .word 0x00622021
  .word 0x8c820018
  .word 0x14470014
  .word 0x00000000
  .word 0x8e060000
  .word 0x28c10005
  .word 0x10200015
  .word 0x00000000
  .word 0x8d030010
  .word 0x8c820010
  .word 0x00622821
  .word 0x8c840014
  .word 0x24c37918
  .word 0x00061040
  .word 0x02021021
  .word 0xa4430018
  .word 0x00061080
  .word 0x02021021
  .word 0xac450004
  .word 0xac440024
  .word 0x8e020000
  .word 0x24420001
  .word 0xae020000
  .word 0x25290001
  .word 0x8d020038
  .word 0x0122102a
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24841820
  .word 0x8e050000
  .word 0x0c14896a
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#define FUN_0039eaa0(...) FUN_0039eaa0(__VA_ARGS__)
#undef FUN_0039eb90
// FUN_0039EB90


void FUN_0039eb90(void)



{

  int iVar3;

  u32 uVar1;

  u32 lVar2;

  

  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {

    uVar1 = iVar3 + 0x38eU & 0x3ff | 0xc00;

    lVar2 = FUN_003b5d10_eb90((u16)uVar1);

    if (lVar2 != 0) {

      FUN_003b7090_eb90((u16)uVar1);

    }

  }

  return;

}
#define FUN_0039eb90(...) FUN_0039eb90(__VA_ARGS__)
#undef FUN_0039ec10
// FUN_0039EC10


u32 FUN_0039ec10(int param_1,int param_2,u32 *param_3,u32 *param_4)
{
  int offset;
  int halfOffset;

  if ((param_2 >= 5) || (param_2 < 0)) {
    return 0;
  }

  offset = param_2 * 4;
  offset += param_1;
  *param_3 = *(u32 *)(offset + 0x818);

  halfOffset = param_2 * 2;
  halfOffset += param_1;
  *param_4 = *(u16 *)(halfOffset + 0x80c);

  return *(u32 *)(offset + 0x7f8);
}

#define FUN_0039ec10(...) FUN_0039ec10(__VA_ARGS__)
#undef FUN_0039ec60
// FUN_0039ec60


int FUN_0039ec60(int param_1)



{

  return param_1 + 0x38e;

}
#define FUN_0039ec60(...) FUN_0039ec60(__VA_ARGS__)
