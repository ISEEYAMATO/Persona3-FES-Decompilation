#include "Event/Fcl/fclCombineTypes.h"
#include "Kosaka/k_assert.h"

extern const char DAT_006a5f70[];
extern u8 DAT_006a5410[];
extern u8 DAT_006a5414[];
extern u8 DAT_006a5416[];
extern u8 DAT_006a53d0[];
extern int DAT_006a5fe0[];
extern u32 DAT_006a6000[];
extern char DAT_007cd790[];
extern u32 DAT_007ce3f4;
extern u16 *PTR_DAT_006a5f40[];
extern float DAT_007caf9c;
extern float DAT_007cb000;
extern float DAT_007cb004;
extern u16 _DAT_007cd788;
extern u16 _DAT_007cd78a;
extern u16 u_NDEFGHIJKLM_006a53b0[];
extern void *(*DAT_00960178)();
extern void (*PTR_LAB_007bb7a0[])();
extern void (*PTR_LAB_007bb820[])();
extern void (*DAT_0096017c)();
extern int func_0016deb0(int);
extern int func_0016dba0(int);
extern s8 datGetSocialLinkLevel(int);
#pragma alias datGetSocialLinkLevel_s16 datGetSocialLinkLevel
extern s8 datGetSocialLinkLevel_s16(s16);
extern u8 (*gp0xffffb730)[1];
extern int datSocialLinkLevelIsNotZero(int);
/* FUSION_PROTOS */
#pragma alias memcpy_003d6e60 memcpy
extern void *memcpy_003d6e60(void *dest,const void *src,u32 size);
#pragma alias datPersonaFindSkillIdx_003d6e60 datPersonaFindSkillIdx
extern s32 datPersonaFindSkillIdx_003d6e60(s32 param_1,u16 param_2);
#pragma alias datPersonaFindSkillIdx_003d6e60_ptr datPersonaFindSkillIdx
extern s32 datPersonaFindSkillIdx_003d6e60_ptr(u8 *param_1,u16 param_2);
#pragma alias datPersonaSetSkill_003d6e60 datPersonaSetSkill
extern void datPersonaSetSkill_003d6e60(s32 param_1,u16 param_2);
#pragma alias datPersonaSetSkill_003d6e60_ptr datPersonaSetSkill
extern void datPersonaSetSkill_003d6e60_ptr(u8 *param_1,u16 param_2);
#pragma alias fclCombineMisc003d7a30_u32 fclCombineMisc003d7a30
extern s32 fclCombineMisc003d7a30_u32(u32 *param_1, int *param_2, u32 param_3);
u32 FUN_003d5510(u32 *param_1,u16 *param_2,int param_3,u32 *param_4);
#pragma alias FUN_003d5510_i FUN_003d5510
extern s16 FUN_003d5510_i(u32 *param_1,u16 *param_2,int param_3,u32 *param_4);
s16 FUN_003d5730(void *param_1,int param_2,int param_3,u32 *param_4);
#pragma alias FUN_003d5730_i FUN_003d5730
extern int FUN_003d5730_i(void *param_1,int param_2,int param_3,u32 *param_4);
int FUN_003d58c0(int param_1,int param_2);
s16 FUN_003d5dc0(u32 param_1);
u64 FUN_003d5bb0(u32 param_1);
s32 FUN_003d5cd0(u32 *param_1);
u8 FUN_003d5e60(void *param_1,void *param_2,void *param_3);
u8 FUN_003d6200(void *param_1,int param_2,u16 *param_3,int param_4);
u32 FUN_003d64a0(void *param_1,u16 param_2,u16 param_3);
u32 FUN_003d6740(void *param_1,void *param_2,void *param_3,void *param_4);
u8 FUN_003d6910(void *param_1,int param_2,int *param_3);
u8 FUN_003d6ae0(void *param_1,int param_2,int *param_3);
u32 FUN_003d6c90(int param_1);
s32 FUN_003d6e60(int param_1,int param_2);
u32 FUN_003d6f80(int param_1,int param_2,void *param_3);
u32 FUN_003d71d0(u32 *param_1,u8 *param_2,u16 *param_3);
u32 FUN_003d72f0(u16 *param_1);
void FUN_003d74f0(int param_1,int param_2,int param_3);
#pragma alias FUN_003d74f0_i FUN_003d74f0
extern void FUN_003d74f0_i(int param_1, int param_2, int param_3);
u32 FUN_003d7ac0(u8 param_1,u8 param_2,u16 *param_3);
#pragma alias FUN_003d7ac0_u8 FUN_003d7ac0
extern u32 FUN_003d7ac0_u8(u8 param_1,u8 param_2,u16 *param_3);
u32 FUN_003d7da0(u8 param_1,u8 param_2,u16 *param_3);
u32 FUN_003d8080(int param_1,int param_2,int param_3);
u32 FUN_003d8260(int param_1,u32 param_2);
u32 FUN_003d8370(int param_1,u32 param_2,u32 param_3);
u32 FUN_003d84c0(u64 param_1,int param_2);
u32 FUN_003d8630(int param_1,int param_2);
u16 FUN_001752b0(void);
void FUN_003d8850();
typedef struct Fcm982Node Fcm982Node;
typedef struct Fcm982Item Fcm982Item;
typedef struct Fcm982Thing Fcm982Thing;
typedef struct Fcm982Chain Fcm982Chain;
typedef struct Fcm982Ctx Fcm982Ctx;
typedef struct Fcm982Root Fcm982Root;
typedef struct Fcm982Result Fcm982Result;
struct Fcm982Thing {
  u8 pad0[0x8]; void *unk8; u8 padc[0x14]; void *unk1c;
  u8 pad20[0x40]; void *unk60;
};
struct Fcm982Node {
  u8 pad0[0x10]; Fcm982Node *unk10; Fcm982Item *unk14;
};
struct Fcm982Item {
  u8 pad0[0x1c]; Fcm982Thing *unk1c;
};
struct Fcm982Chain {
  u8 pad0[0xc]; int unkc; u8 pad10[0x1c]; Fcm982Node *unk2c;
};
struct Fcm982Ctx {
  u8 pad0[4]; Fcm982Node *unk4; u8 pad8[4]; Fcm982Node *unkc;
  u8 pad10[0x14]; Fcm982Chain *unk24;
};
struct Fcm982Root {
  u8 pad0[8]; void *unk8; Fcm982Ctx *unkc;
};
struct Fcm982Result {
  u8 pad0[0x1a]; s16 unk1a; u8 pad1c[2]; s16 unk1e;
  u8 pad20[0xa]; s16 unk2a; u8 pad2c[8]; void *unk34;
};
typedef struct FcmDispatchWork FcmDispatchWork;
typedef struct FcmDispatchOwner FcmDispatchOwner;
typedef struct FcmDispatchLink FcmDispatchLink;
typedef struct FcmDispatchMeta FcmDispatchMeta;
typedef struct FcmDispatchNode FcmDispatchNode;
typedef struct FcmDispatchResult FcmDispatchResult;
struct FcmDispatchWork {
  u32 flags;
  s32 mode;
  u8 pad8[4];
  s32 capacity;
  s32 used;
  FcmDispatchOwner *owners;
  void **values;
  u8 pad1c[0x190];
  void *result;
};
struct FcmDispatchOwner {
  u8 pad0[4];
  FcmDispatchLink *links;
  u8 pad8[4];
  FcmDispatchLink *root;
};
struct FcmDispatchLink {
  u8 pad0[0x10];
  FcmDispatchLink *next;
  FcmDispatchMeta *payload;
};
struct FcmDispatchMeta {
  u8 pad0[0x1c];
  FcmDispatchNode *data;
};
struct FcmDispatchNode {
  u8 pad0[0x60];
  void *callback_target;
};
struct FcmDispatchResult {
  u8 pad0[0x34];
  void *payload;
};
extern FcmDispatchResult *FUN_003e0260();
extern Fcm982Result *FUN_003e0330(void *param_1,int param_2,int param_3,int param_4);
void FUN_003d9820(Fcm982Root *arg0,u32 arg1,u32 arg2);
void FUN_003d9cc0(int param_1);
void FUN_003d9ea0(int param_1);
typedef int (*code)(); /* PC: unnamed varargs */
extern void fclCombineList003db5e0(void);
extern void fclCombineList003dc210(void);
extern void fclCombineList003dd800(void);
extern void fclCombineList003deb80(void);
extern void fclCombineList003dec00(void);

u32 FUN_003c3f80();
u32 FUN_0017d800();
u32 FUN_00488f30();
u32 FUN_001749a0(u32 param_1);
void FUN_003dff00(s32 param_1);
s8 FUN_0016dba0(s32 param_1);
extern s32 DAT_006a5fc0[];
extern char DAT_006a4ba0[];
extern char DAT_006a4e10[];
extern char DAT_006a5630[];
extern char DAT_006a5f44[];
extern s8 D_006A48D0[];
extern s8 D_006A48D1[];
extern s16 D_006A48F0[];
extern u32 DAT_007ce420;

// W416 measured negative: retail offset 436 has a 0x10 extension, while ours already has matching 0x10 pairs nearby at 416/420 and 428/432; layout, not width.
// W418 negative: explicit s16 casts at index/count/loop sites measured nd213/532 -> nd297/548 (window 544); rejected.
// FUN_003D5510


#ifndef PC_BUILD
asm u32 FUN_003d5510(u32 *param_1,u16 *param_2,int param_3,u32 *param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x00e0802d
  .word 0x12600005
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050028
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96420000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000063
  .word 0x00000000
  .word 0x0000682d
  .word 0x0000482d
  .word 0x26480004
  .word 0x0000602d
  .word 0x24030001
  .word 0x1000004b
  .word 0x00000000
  .word 0x000e1040
  .word 0x01021021
  .word 0x24470004
  .word 0x84420004
  .word 0x000235bc
  .word 0x000635bf
  .word 0x10c00040
  .word 0x00000000
  .word 0x0000502d
  .word 0x0000582d
  .word 0x8f85b730
  .word 0x1000002a
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x02021021
  .word 0x8c440004
  .word 0x10800020
  .word 0x00000000
  .word 0x000b143c
  .word 0x0002143f
  .word 0x94920002
  .word 0x00431004
  .word 0x01227824
  .word 0x15e00019
  .word 0x00000000
  .word 0x80ef0001
  .word 0x000f7e7c
  .word 0x000f7fff
  .word 0x11e00007
  .word 0x00000000
  .word 0x3252ffff
  .word 0x001278c0
  .word 0x01f27823
  .word 0x000f7840
  .word 0x00af7821
  .word 0x91f20002
  .word 0x324fffff
  .word 0x15e6000b
  .word 0x00000000
  .word 0x000e2880
  .word 0x02652821
  .word 0xaca40008
  .word 0x01224825
  .word 0x25a20001
  .word 0x00026c3c
  .word 0x000d6c3f
  .word 0x0060502d
  .word 0x10000009
  .word 0x00000000
  .word 0x25620001
  .word 0x00025c3c
  .word 0x000b5c3f
  .word 0x000b243c
  .word 0x0004243f
  .word 0x2882000c
  .word 0x1440ffd3
  .word 0x00000000
  .word 0x80e20001
  .word 0x0002163c
  .word 0x000217ff
  .word 0x10400008
  .word 0x00000000
  .word 0x000a143c
  .word 0x0002143f
  .word 0x14400004
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420001
  .word 0xae620000
  .word 0x25820001
  .word 0x0002643c
  .word 0x000c643f
  .word 0x000c743c
  .word 0x000e743f
  .word 0x29c20008
  .word 0x1440ffb2
  .word 0x00000000
  .word 0x000d143c
  .word 0x0002143f
  .word 0x0051102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420001
  .word 0xae620000
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003D5730


s16 FUN_003d5730(void *param_1,int param_2,int param_3,u32 *param_4)
{
    s16 uVar1;
    s32 count;
    u16 *psVar3;

    if (param_1 == 0) {
        K_Assert("fclCombineMisc.c",0x58);
    }
    count = *(int *)(DAT_006a5f44 + param_2 * 8);
    if (count > param_3) {
        goto valid_index;
    }
    return 0;
valid_index:
    psVar3 = (u16 *)((u8 *)((PTR_DAT_006a5f40)[param_2 * 2]) + param_3 * 0x20);
    if (FUN_003d5bb0(*psVar3) == 0) {
        return 0;
    }
    if (*psVar3 == 0) {
        return 0;
    }
    memset(param_1,0,0x28);
    *(u16 **)((u8 *)param_1 + 4) = psVar3;
    uVar1 = FUN_003d5510_i(param_1,psVar3,param_2 + 2,param_4);
    return uVar1;
}

// FUN_003d5850
s32 fclCombineMisc003d5850(s32 param_1)
{
    s32 local[8];
    s32* src;
    s32* dst;
    s32 count;
    s32 temp;

    src = DAT_006a5fc0;
    dst = local;
    count = 5;
    do {
        temp = *src;
        src++;
        count--;
        *dst = temp;
        dst++;
    } while (count > 0);
    return local[param_1];
}


// FUN_003d58a0
void fclCombineMisc003d58a0(void)
{
    FUN_003c3f80();
}

// FUN_003D58C0


int FUN_003d58c0(int param_1,int param_2)
{
  return (int)((((float)param_2 + ((float)datGetSocialLinkLevel_s16(param_1) / 2.5f + 1.0f)) *
                ((float)param_2 + ((float)datGetSocialLinkLevel_s16(param_1) / 2.5f + 1.0f)) *
                ((float)param_2 + ((float)datGetSocialLinkLevel_s16(param_1) / 2.5f + 1.0f)) -
                (float)(param_2 * param_2 * param_2)) *
               DAT_007caf9c *
               ((DAT_007cb004 + 0.0f) - DAT_007cb000 * (float)param_2) +
               15.0f);
}
#pragma opt_common_subs off
// W416 measured negative: retail offset 128's dsra32 0x1f is sign extraction; ours has the equivalent dsll32 0x19 plus sign branch, not a width defect.
// Focused arithmetic sign-mask rewrite measured nd219/328 -> nd246/332; rejected.
// W418 negative: broad s16 casts at loop/index/count sites measured nd219/328 -> nd321/408 (window 368); over-window and rejected.
// FUN_003D5A40


#ifndef PC_BUILD
asm u32 FUN_003d5a40(u16 *param_1,u16 param_2,u16 *param_3,short param_4,void *param_5)
{
  .set noreorder
  .word 0x94820000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000054
  .word 0x00000000
  .word 0x0000782d
  .word 0x0000102d
  .word 0x248b0004
  .word 0x0000702d
  .word 0x8f8ab730
  .word 0x24040001
  .word 0x10000044
  .word 0x00000000
  .word 0x00051840
  .word 0x01631821
  .word 0x24690004
  .word 0x84630004
  .word 0x00032dbc
  .word 0x00052dbf
  .word 0x10a00039
  .word 0x00000000
  .word 0x0000602d
  .word 0x0000682d
  .word 0x10000024
  .word 0x00000000
  .word 0x03041804
  .word 0x0043c824
  .word 0x1720001d
  .word 0x00000000
  .word 0x81390001
  .word 0x0019ce7c
  .word 0x0019cfff
  .word 0x1320000b
  .word 0x00000000
  .word 0x0018c040
  .word 0x00d8c021
  .word 0x97190000
  .word 0x0019c0c0
  .word 0x0319c023
  .word 0x0018c040
  .word 0x0158c021
  .word 0x93180002
  .word 0x10000004
  .word 0x00000000
  .word 0x0018c040
  .word 0x00d8c021
  .word 0x97180000
  .word 0x3318ffff
  .word 0x17050008
  .word 0x00000000
  .word 0x00431025
  .word 0x25e30001
  .word 0x00037c3c
  .word 0x000f7c3f
  .word 0x0080602d
  .word 0x10000009
  .word 0x00000000
  .word 0x25a30001
  .word 0x00036c3c
  .word 0x000d6c3f
  .word 0x000dc43c
  .word 0x0018c43f
  .word 0x0307182a
  .word 0x1460ffd9
  .word 0x00000000
  .word 0x81230001
  .word 0x00031e3c
  .word 0x00031fff
  .word 0x10600008
  .word 0x00000000
  .word 0x000c1c3c
  .word 0x00031c3f
  .word 0x14600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000c
  .word 0x00000000
  .word 0x25c30001
  .word 0x0003743c
  .word 0x000e743f
  .word 0x000e2c3c
  .word 0x00052c3f
  .word 0x28a30008
  .word 0x1460ffb9
  .word 0x00000000
  .word 0x11000002
  .word 0x00000000
  .word 0xa50f0000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_common_subs reset


// FUN_003D5BB0


u64 FUN_003d5bb0(u32 param_1)



{

  u32 lVar1;
  int iVar2;
  u32 uVar3;
  u32 uVar4;
  u64 uVar5;
  u8 *puVar6;
  s16 uVar7;
  uVar5 = 1;
  uVar3 = 0;
  uVar4 = param_1 & 0xffff;
  while (uVar3 < 0x43) {
    iVar2 = uVar3 * 8;
    puVar6 = DAT_006a5410 + iVar2;
    if (uVar4 == *(s16 *)(puVar6 + 4)) {
      uVar7 = *(s16 *)(puVar6 + 6);
      if ((uVar7 & 1) != 0) {
        lVar1 = datGetFlag(*(u32 *)puVar6);
        if (lVar1 == 0) {
          return 0;
        }
      } else if ((uVar7 & 2) != 0) {
        uVar5 = 0;
        lVar1 = datGetFlag(*(u32 *)puVar6);
        if (lVar1 == 1) {
          return 1;
        }
      }
    }
    uVar3 = uVar3 + 1;
  }
  return uVar5;
}

// FUN_003d5c90
char* fclCombineMisc003d5c90(void)
{
    if (FUN_0017d800() != 0) {
        return DAT_006a4e10;
    }
    return DAT_006a4ba0;
}

// FUN_003D5CD0
// W389 hand tests: s16 loop/count widened nd10/obj236 -> nd143/obj244 (window 240); typed s16/u32 callee aliases gave nd132; both reverted.


s32 FUN_003d5cd0(u32 *param_1)
{
  int lVar1;
  u32 uVar2;
  u32 *puVar3;
  s32 sVar5;
  s32 sVar4;
  s64 temp;

  sVar4 = 0;
  memset(param_1,0,0x90);
  for (sVar5 = 0; (s64)(s16)sVar5 < (s64)((uVar2 = FUN_00175410()) & 0xffff); sVar5 = (s64)(s16)(sVar5 + 1)) {
    lVar1 = datPersonaGetHeroPersona(sVar5);
    if (lVar1 != 0) {
      temp = (s64)(s16)sVar4;
      puVar3 = (u32 *)((int)param_1 + (int)temp * 0xc);
      *puVar3 = 0;
      puVar3[1] = (int)lVar1;
      puVar3[2] = DAT_007ce420 + (u32)*(u16 *)((int)lVar1 + 2) * 0xe;
      sVar4 = (s64)(s16)(sVar4 + 1);
    }
  }
  return (s64)(s16)sVar4;
}

// HARVESTED 3D-42FF

// FUN_003D5DC0


s16 FUN_003d5dc0(u32 param_1)
{
    s32 iVar5;
    s32 iVar4;
    int link;

    iVar4 = 0;
    iVar5 = (param_1 & 0xffff) * 0xe;
    link = func_0016deb0(*(u8 *)(iVar5 + DAT_007ce420 + 2));
    if (datSocialLinkLevelIsNotZero(link) != 0) {
        link = func_0016deb0(*(u8 *)(iVar5 + DAT_007ce420 + 2));
        iVar4 = (s32)datGetSocialLinkLevel(link);
    }
    return u_NDEFGHIJKLM_006a53b0[iVar4];
}

// FUN_003D5E60
#pragma opt_lifetimes on


#ifndef PC_BUILD
asm u8 FUN_003d5e60(void *param_1,void *param_2,void *param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x27a30040
  .word 0x24020010
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0xafa40040
  .word 0xafa50044
  .word 0xafa60048
  .word 0x2789aaa0
  .word 0x27a80058
  .word 0x24070003
  .word 0x81230000
  .word 0x81220001
  .word 0x25290002
  .word 0x24e7ffff
  .word 0xa1030000
  .word 0xa1020001
  .word 0x25080002
  .word 0x1ce0fff8
  .word 0x00000000
  .word 0x10800005
  .word 0x00000000
  .word 0x10a00003
  .word 0x00000000
  .word 0x14c00006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050131
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000202d
  .word 0x8f83b730
  .word 0x1000003b
  .word 0x00000000
  .word 0x0004143c
  .word 0x0002143f
  .word 0x00021040
  .word 0x005d1021
  .word 0x24450058
  .word 0x80a20001
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420040
  .word 0x8c480000
  .word 0x91070004
  .word 0x80a20000
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420040
  .word 0x8c420000
  .word 0x90460004
  .word 0x00c7282a
  .word 0x14a00012
  .word 0x00000000
  .word 0x14c70022
  .word 0x00000000
  .word 0x94460002
  .word 0x000628c0
  .word 0x00a62823
  .word 0x00052840
  .word 0x00652821
  .word 0x90a70002
  .word 0x95060002
  .word 0x000628c0
  .word 0x00a62823
  .word 0x00052840
  .word 0x00652821
  .word 0x90a50002
  .word 0x00a7082a
  .word 0x10200013
  .word 0x00000000
  .word 0x00042c3c
  .word 0x00052c3f
  .word 0x00052840
  .word 0x00bd2821
  .word 0x24a70058
  .word 0x80e50000
  .word 0x00052880
  .word 0x00bd2821
  .word 0x24a60040
  .word 0xafa2004c
  .word 0x80e20001
  .word 0x00021080
  .word 0x005d1021
  .word 0x24450040
  .word 0x8ca20000
  .word 0xacc20000
  .word 0x8fa2004c
  .word 0xaca20000
  .word 0x24820001
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0004143c
  .word 0x0002143f
  .word 0x28420003
  .word 0x1440ffc2
  .word 0x00000000
  .word 0x8f82b730
  .word 0x24440002
  .word 0x8fa20040
  .word 0x94430002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00821021
  .word 0x90520000
  .word 0x8fa20044
  .word 0x94430002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00821021
  .word 0x90500000
  .word 0x8fa20048
  .word 0x94430002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00821021
  .word 0x90510000
  .word 0x12400007
  .word 0x00000000
  .word 0x320200ff
  .word 0x10400004
  .word 0x00000000
  .word 0x322200ff
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050142
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x321000ff
  .word 0x12000004
  .word 0x00000000
  .word 0x322200ff
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050080
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x322400ff
  .word 0x0204082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x00021040
  .word 0x00501021
  .word 0x00021840
  .word 0x3c02006a
  .word 0x244258e9
  .word 0x00431021
  .word 0x00821021
  .word 0x90420000
  .word 0x1000000b
  .word 0x00000000
  .word 0x00041080
  .word 0x00441021
  .word 0x00021040
  .word 0x00441021
  .word 0x00021840
  .word 0x3c02006a
  .word 0x244258e9
  .word 0x00431021
  .word 0x02021021
  .word 0x90420000
  .word 0x305000ff
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000023
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050080
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0250082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x00121080
  .word 0x00521021
  .word 0x00021040
  .word 0x00521021
  .word 0x00021840
  .word 0x3c02006a
  .word 0x24425ad9
  .word 0x00431021
  .word 0x02021021
  .word 0x90420000
  .word 0x1000000b
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x00021040
  .word 0x00501021
  .word 0x00021840
  .word 0x3c02006a
  .word 0x24425ad9
  .word 0x00431021
  .word 0x02421021
  .word 0x90420000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule reset
#pragma opt_lifetimes reset

// FUN_003D6200


#ifndef PC_BUILD
asm u8 FUN_003d6200(void *param_1,int param_2,u16 *param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff30
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0a82d
  .word 0x00e0b82d
  .word 0x12800006
  .word 0x00000000
  .word 0x12a00004
  .word 0x00000000
  .word 0x2a620005
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x2405014f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x001318c0
  .word 0x3c02006a
  .word 0x24425f40
  .word 0x00431021
  .word 0x8c510000
  .word 0x3c02006a
  .word 0x24425f44
  .word 0x00431021
  .word 0x8c5e0000
  .word 0x0000902d
  .word 0x26620002
  .word 0x0002143c
  .word 0x0002143f
  .word 0x7fa200b0
  .word 0x1000006a
  .word 0x00000000
  .word 0xa7a000ce
  .word 0x26620002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0220202d
  .word 0x02a0302d
  .word 0x02e0382d
  .word 0x27a800ce
  .word 0x0c0f5690
  .word 0x00000000
  .word 0x87a400ce
  .word 0x7ba300b0
  .word 0x0083182a
  .word 0x14600003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x10400054
  .word 0x00000000
  .word 0x96220000
  .word 0x7fa200a0
  .word 0x24160001
  .word 0x0000802d
  .word 0x10000022
  .word 0x00000000
  .word 0x001018c0
  .word 0x3c02006a
  .word 0x24425410
  .word 0x00432021
  .word 0x84830004
  .word 0x7ba200a0
  .word 0x14430019
  .word 0x00000000
  .word 0x84830006
  .word 0x30620001
  .word 0x10400009
  .word 0x00000000
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000012
  .word 0x00000000
  .word 0x30620002
  .word 0x1040000a
  .word 0x00000000
  .word 0x0000b02d
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020043
  .word 0x1440ffdd
  .word 0x00000000
  .word 0x02c0182d
  .word 0x10600027
  .word 0x00000000
  .word 0x0280202d
  .word 0x96250000
  .word 0x0c05d9a0
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000014
  .word 0x00000000
  .word 0x00101040
  .word 0x02221021
  .word 0x24520018
  .word 0x94450018
  .word 0x10a0000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05da64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430007
  .word 0x00000000
  .word 0x0280202d
  .word 0x96450000
  .word 0x0c05da10
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020004
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x96830002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00621021
  .word 0x90420002
  .word 0x10000007
  .word 0x00000000
  .word 0x26310020
  .word 0x26520001
  .word 0x025e102a
  .word 0x1440ff95
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
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W327 sweep: opt_common_subs off improves FUN_003d5a40 from nd231/obj324 to nd219/obj328 (window 368); retained. */
// FUN_003D64A0






#ifndef PC_BUILD
asm u32 FUN_003d64a0(void *param_1,u16 param_2,u16 param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0xa7b3008c
  .word 0xa7b2008e
  .word 0x12800007
  .word 0x00000000
  .word 0x3262ffff
  .word 0x10400004
  .word 0x00000000
  .word 0x3242ffff
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050175
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x27a6008c
  .word 0x24070002
  .word 0x0c0f5880
  .word 0x00000000
  .word 0x304200ff
  .word 0x10400004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000078
  .word 0x00000000
  .word 0x3243ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00028840
  .word 0x8f82b730
  .word 0x24440002
  .word 0x00911021
  .word 0x90550000
  .word 0x3263ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00821021
  .word 0x90500000
  .word 0x12000004
  .word 0x00000000
  .word 0x32a200ff
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050080
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x32a400ff
  .word 0x0204082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x00021040
  .word 0x00501021
  .word 0x00021840
  .word 0x3c02006a
  .word 0x244256b9
  .word 0x00431021
  .word 0x00821021
  .word 0x90420000
  .word 0x1000000b
  .word 0x00000000
  .word 0x00041080
  .word 0x00441021
  .word 0x00021040
  .word 0x00441021
  .word 0x00021840
  .word 0x3c02006a
  .word 0x244256b9
  .word 0x00431021
  .word 0x02021021
  .word 0x90420000
  .word 0x305000ff
  .word 0x16000009
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x24060034
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003b
  .word 0x00000000
  .word 0x27a40070
  .word 0x0000282d
  .word 0x24060018
  .word 0x0c148502
  .word 0x00000000
  .word 0xa7b30070
  .word 0xa7b20072
  .word 0x8f86b730
  .word 0x24c50003
  .word 0x3263ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00022040
  .word 0x00a41021
  .word 0x90430000
  .word 0x00b11021
  .word 0x90420000
  .word 0x00621821
  .word 0x00031043
  .word 0x04610003
  .word 0x00000000
  .word 0x24620001
  .word 0x00021043
  .word 0x24420001
  .word 0x304500ff
  .word 0x24c30002
  .word 0x00641021
  .word 0x90420000
  .word 0x1602000f
  .word 0x00000000
  .word 0x00711021
  .word 0x90420000
  .word 0x1602000b
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a60070
  .word 0x0c0f5f68
  .word 0x00000000
  .word 0x3045ffff
  .word 0x14a0000e
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a60070
  .word 0x0c0f5eb0
  .word 0x00000000
  .word 0x3045ffff
  .word 0x14a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05d9a0
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs off
#pragma push
/* W389 sweep: opt_propagation off measured nd283/obj448 -> nd281/obj448 (window 464). */
#pragma opt_propagation off
// FUN_003D6740


#ifndef PC_BUILD
asm u32 FUN_003d6740(void *param_1,void *param_2,void *param_3,void *param_4)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x94a20002
  .word 0xa7a20078
  .word 0x94c20002
  .word 0xa7a2007a
  .word 0x94e20002
  .word 0xa7a2007c
  .word 0x12800007
  .word 0x00000000
  .word 0x12600005
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x240501a0
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050001
  .word 0x27a60078
  .word 0x24070003
  .word 0x0c0f5880
  .word 0x00000000
  .word 0x304200ff
  .word 0x10400004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000042
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0f5798
  .word 0x00000000
  .word 0x305000ff
  .word 0x16000009
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x24060034
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000032
  .word 0x00000000
  .word 0x27a40060
  .word 0x0000282d
  .word 0x24060018
  .word 0x0c148502
  .word 0x00000000
  .word 0x96630002
  .word 0xa7a30060
  .word 0x96460002
  .word 0xa7a60062
  .word 0x96250002
  .word 0xa7a50064
  .word 0x8f82b730
  .word 0x24440003
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00821021
  .word 0x90430000
  .word 0x000610c0
  .word 0x00461023
  .word 0x00021040
  .word 0x00821021
  .word 0x90420000
  .word 0x00621821
  .word 0x000510c0
  .word 0x00451023
  .word 0x00021040
  .word 0x00821021
  .word 0x90420000
  .word 0x00431821
  .word 0x24020003
  .word 0x0062001a
  .word 0x00001012
  .word 0x24420005
  .word 0x304500ff
  .word 0x0200202d
  .word 0x27a60060
  .word 0x0c0f5eb0
  .word 0x00000000
  .word 0x3045ffff
  .word 0x14a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05d9a0
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset
#pragma pop
#pragma opt_common_subs reset

// FUN_003D6910


u8 FUN_003d6910(void *param_1,int param_2,int *param_3)
{
  int cVar1;
  int iVar2;
  int *piVar5;
  int *piVar3;
  int iVar4;
  int iVar6;
  u16 auStack_10 [8];
  int aiStack_30 [8];

  piVar5 = DAT_006a5fe0;
  piVar3 = aiStack_30;
  iVar6 = 5;
  do {
    iVar4 = *piVar5;
    piVar5 = piVar5 + 1;
    iVar6 = iVar6 + -1;
    *piVar3 = iVar4;
    piVar3 = piVar3 + 1;
  } while (0 < iVar6);
  if (!((param_3 != 0) && (param_2 < 5))) {
    K_Assert("fclCombineMisc.c",0x1c2);
  }
  memset(param_1,0,0x34);
  iVar2 = aiStack_30[(int)param_2];
  piVar3 = (int *)param_3;
  switch (param_2) {
  case 0:
    cVar1 = FUN_003d64a0(param_1,*(u16 *)(*piVar3 + 2),*(u16 *)(piVar3[1] + 2)) & 0xff;
    if (cVar1 == 0) {
      return 0;
    }
    break;
  case 1:
    cVar1 = FUN_003d6740(param_1,(void *)*piVar3,(void *)piVar3[1],(void *)piVar3[2]) & 0xff;
    if (cVar1 == 0) {
      return 0;
    }
    break;
  default:
    iVar4 = 0;
    while (iVar4 < iVar2) {
      if (piVar3[iVar4] != 0) {
        auStack_10[iVar4] = *(u16 *)(piVar3[iVar4] + 2);
      }
      iVar4 = iVar4 + 1;
    }
    cVar1 = FUN_003d6200(param_1,param_2,auStack_10,iVar2) & 0xff;
    if (cVar1 == 0) {
      return 0;
    }
    cVar1 = 2;
    break;
  }
  FUN_00176ac0(param_1,param_3,iVar2);
  return cVar1 & 0xff;
}
// FUN_003D6AE0


u8 FUN_003d6ae0(void *param_1,int param_2,int *param_3)



{

  u16 sVar1;

  u32 uVar2;

  int uVar3;

  u8 cVar4;

  u8 bVar5;

  int iVar6;
  int iVar7;


  u32 *puVar9;
  u32 *puVar8;
  int copyCount;
  u32 *puVar10;

  u32 auStack_20 [8];

  struct {
    u8 prefix[12];
    u16 values[8];
    u8 deltas[24];
  } scratch;

  

  puVar9 = DAT_006a6000;

  puVar8 = auStack_20;

  copyCount = 5;

  do {

    uVar2 = *puVar9;

    puVar9 = puVar9 + 1;

    copyCount = copyCount + -1;

    *puVar8 = uVar2;

    puVar8 = puVar8 + 1;

  } while (0 < copyCount);

  memset(param_1,0,0x54);

  memset(&scratch,0,0x34);

  puVar10 = (u32 *)param_1;

  cVar4 = FUN_003d6910(puVar10 + 1,param_2,param_3);

  if (cVar4 == '\x02') {

    *puVar10 = *puVar10 | 4;

  }

  memcpy(&scratch,puVar10 + 1,0x34);

  fclCombineMisc003d7a30_u32(puVar10 + 1,param_3,auStack_20[(int)param_2]);

  uVar3 = *(u8 *)(puVar10 + 2);

  bVar5 = datGetLevel(1);

  if (bVar5 < uVar3) {

    *puVar10 = *puVar10 | 2;

  }

  for (iVar7 = 0; iVar7 < 5; iVar7 = iVar7 + 1) {

    *(u8 *)((int)puVar10 + iVar7 + 0x38) =

         *(u8 *)((int)puVar10 + iVar7 + 0x20) - scratch.deltas[iVar7];

  }

  for (iVar7 = 0; iVar7 < 8; iVar7 = iVar7 + 1) {

    iVar6 = iVar7 * 2;

    sVar1 = *(u16 *)((int)puVar10 + iVar6 + 0x10);

    if (sVar1 != scratch.values[iVar7]) {

      *(u16 *)((int)puVar10 + iVar6 + 0x3e) = sVar1;

    }

    else {

      *(u16 *)((int)puVar10 + iVar6 + 0x3e) = 0;

    }

  }

  return cVar4;

}

// FUN_003D6C90








#ifndef PC_BUILD
asm u32 FUN_003d6c90(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x24040bdd
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400034
  .word 0x00000000
  .word 0x24020002
  .word 0x12020027
  .word 0x00000000
  .word 0x24020001
  .word 0x12020015
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3404ffff
  .word 0x0044001b
  .word 0x00001810
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021080
  .word 0x0044001b
  .word 0x00001012
  .word 0x28410006
  .word 0x1020004d
  .word 0x00000000
  .word 0x24020001
  .word 0x1000004b
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3404ffff
  .word 0x0044001b
  .word 0x00001810
  .word 0x000310c0
  .word 0x00431021
  .word 0x0044001b
  .word 0x00001012
  .word 0x28410003
  .word 0x1020003e
  .word 0x00000000
  .word 0x24020001
  .word 0x1000003c
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3402ffff
  .word 0x0002001b
  .word 0x00001012
  .word 0x04410034
  .word 0x00000000
  .word 0x24020001
  .word 0x10000032
  .word 0x00000000
  .word 0x24020002
  .word 0x12020024
  .word 0x00000000
  .word 0x24020001
  .word 0x12020013
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3403ffff
  .word 0x0043001b
  .word 0x00001010
  .word 0x00021300
  .word 0x0043001b
  .word 0x00001012
  .word 0x28410040
  .word 0x1020001c
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001a
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3403ffff
  .word 0x0043001b
  .word 0x00001010
  .word 0x00021280
  .word 0x0043001b
  .word 0x00001012
  .word 0x28410020
  .word 0x1020000e
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000c
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3402ffff
  .word 0x0002001b
  .word 0x00001012
  .word 0x04410004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003D6E60
s32 FUN_003d6e60(s32 param_1,s32 param_2)
{
  u8 sp50[0x34];
  s32 temp_2;
  s32 var_16;
  s32 var_5;
  u32 temp_19;
  u16 temp_3;
  u8 *temp_4;
  void *dest;

  dest = sp50;
  /* Removing this barrier leaves the 288B frame but changes memcpy argument order (nd0 -> nd2) - measured W302. */
  asm ("" : "+r"(dest));
  memcpy_003d6e60(dest,(void *)(param_1 + 4),0x34);
  var_16 = 0;
  goto outer_check;
outer_body:
  temp_2 = var_16 * 2;
  temp_19 = *(u16 *)(param_2 + temp_2 + 0x3e);
  if (temp_19 != 0) {
    if (datPersonaCountValidSkills(param_1 + 4) >= 8) {
      return 0;
    }
    if (datPersonaFindSkillIdx_003d6e60_ptr((u8 *)(uintptr_t)param_1 + 4,temp_19) == -1) {
      /* Removing this barrier grows FUN_003d6e60 from 288B to 300B - measured W302. */
      asm ("" : "+r"(param_1));
      datPersonaSetSkill_003d6e60_ptr((u8 *)(uintptr_t)param_1 + 4,temp_19);
    }
  }
outer_increment:
  var_16 += 1;
outer_check:
  if (var_16 < 8) {
    goto outer_body;
  }
  var_5 = 0;
  goto inner_check;
inner_body:
  temp_2 = var_5 * 2;
  temp_4 = (u8 *)(param_1 + temp_2);
  temp_3 = *(u16 *)(temp_4 + 0x10);
  if (temp_3 != *(u16 *)(sp50 + temp_2 + 0xc)) {
    *(u16 *)(temp_4 + 0x3e) = temp_3;
  }
  else {
    *(u16 *)(temp_4 + 0x3e) = 0U;
  }
inner_increment:
  var_5 += 1;
inner_check:
  if (var_5 < 8) {
    goto inner_body;
  }
  return 0;
}

// FUN_003D6F80


#ifndef PC_BUILD
asm u32 FUN_003d6f80(int param_1,int param_2,void *param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x12400003
  .word 0x00000000
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x240502b8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x24060054
  .word 0x0c148502
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3404ffff
  .word 0x0044001b
  .word 0x00001810
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x0044001b
  .word 0x00001012
  .word 0x24500002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3404ffff
  .word 0x0044001b
  .word 0x00001810
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x0044001b
  .word 0x0000a012
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0x00541021
  .word 0x2442fff6
  .word 0x1c400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x28410064
  .word 0x14200002
  .word 0x00000000
  .word 0x24020063
  .word 0x320400ff
  .word 0x304500ff
  .word 0x0220302d
  .word 0x0c0f5eb0
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0200202d
  .word 0x0c05d268
  .word 0x00000000
  .word 0x1440ffd1
  .word 0x00000000
  .word 0x3203ffff
  .word 0x96420006
  .word 0x1043ffcd
  .word 0x00000000
  .word 0x14600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000024
  .word 0x00000000
  .word 0x26640004
  .word 0x0200282d
  .word 0x0c05d9a0
  .word 0x00000000
  .word 0x92700008
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304300ff
  .word 0x2462fff6
  .word 0x0202082a
  .word 0x14200008
  .word 0x00000000
  .word 0x24620001
  .word 0x0050102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c0f5b98
  .word 0x00000000
  .word 0x26640004
  .word 0x26450004
  .word 0x0c05db20
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W327 sweep: opt_common_subs off improves FUN_003d6740 from nd294/obj448 to nd283/obj448 (window 464); retained. */
// FUN_003d7180
u32 fclCombineMisc003d7180(void)
{
    return (s32)(((FUN_00488f30() % 0xffff) * 1000) / 0xffff) < 500;
}

// W212: restoring helper-failure early returns measured nd168 -> nd193 (396 -> 456 bytes); rejected.
// FUN_003D71D0


u32 FUN_003d71d0(u32 *param_1,u8 *param_2,u16 *param_3)
{
  u16 sVar2;
  u8 cVar1;
  u32 uVar3;

  if ((param_2 == 0) || (param_1 == 0)) {
    K_Assert(DAT_006a5f70,0x2e5);
  }
  memset(param_1,0,0x54);
  cVar1 = datGetLevel(1);
  sVar2 = FUN_003d7da0(1,cVar1 + 3,param_3);
  if (sVar2 == 0) {
    return 0;
  }
  if (FUN_001749a0(sVar2) != 0) {
    goto inner_failure;
  }
  if (*(u16 *)(param_2 + 6) != sVar2) {
    goto success;
  }
inner_failure:
  return 0;
success:
  FUN_00176680(param_1 + 1,sVar2);
  FUN_003d6e60((int)param_1,(int)param_2);
  FUN_00176c80(param_1 + 1,param_2 + 4);
  return 1;
}

// FUN_003D72F0
#ifndef PC_BUILD
asm u32 FUN_003d72f0(u16 *param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x94830002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00621021
  .word 0x90440002
  .word 0x0c05b7ac
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0x2841000a
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000050
  .word 0x00000000
  .word 0x0c0606c4
  .word 0x00000000
  .word 0x304200ff
  .word 0x00021840
  .word 0x3c02006a
  .word 0x244253d0
  .word 0x00431021
  .word 0x84440000
  .word 0x96230002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00621021
  .word 0x9042000c
  .word 0x00441818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00008012
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3404ffff
  .word 0x0044001b
  .word 0x00001810
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021080
  .word 0x0044001b
  .word 0x00001012
  .word 0x0050082b
  .word 0x1020002d
  .word 0x00000000
  .word 0x0000302d
  .word 0x2783aa98
  .word 0x1000000d
  .word 0x00000000
  .word 0x00062880
  .word 0x96240002
  .word 0x00651021
  .word 0x84420000
  .word 0x14820006
  .word 0x00000000
  .word 0x2782aa9a
  .word 0x00451021
  .word 0x84500000
  .word 0x10000005
  .word 0x00000000
  .word 0x24c60001
  .word 0x10c0fff3
  .word 0x00000000
  .word 0x2410ffff
  .word 0x2402ffff
  .word 0x16020002
  .word 0x00000000
  .word 0x0000802d
  .word 0x96220000
  .word 0x34420004
  .word 0xa6220000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3404ffff
  .word 0x0044001b
  .word 0x00001810
  .word 0x00031140
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000210c0
  .word 0x0044001b
  .word 0x00001012
  .word 0x0050102b
  .word 0x14400004
  .word 0x00000000
  .word 0x96220000
  .word 0x34420008
  .word 0xa6220000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003d74b0
s32 fclCombineMisc003d74b0(u32 param_1)
{
    u8* base;

    base = (u8*)DAT_007ce420;
    return *(s32*)(DAT_006a5630 + (u32)base[(param_1 & 0xffff) * 0xe + 0xd] * 4);
}
#pragma push
/* W389 sweep: opt_lifetimes on measured nd796/obj1344 -> nd788/obj1344 (window 1344). */
#pragma opt_lifetimes on
// FUN_003D74F0


#ifndef PC_BUILD
asm void FUN_003d74f0(int param_1,int param_2,int param_3)
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
  .word 0x0080a02d
  .word 0x00a0b02d
  .word 0x00c0b82d
  .word 0x12800005
  .word 0x00000000
  .word 0x12c00003
  .word 0x00000000
  .word 0x1ee00006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x240503a6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0f1134
  .word 0x00000000
  .word 0x0040882d
  .word 0x0000982d
  .word 0x10000063
  .word 0x00000000
  .word 0x0000a82d
  .word 0x00131080
  .word 0x02c21021
  .word 0x7fa200a0
  .word 0x10000059
  .word 0x00000000
  .word 0x00151840
  .word 0x7ba200a0
  .word 0x8c420000
  .word 0x00431021
  .word 0x9450000c
  .word 0x12000051
  .word 0x00000000
  .word 0x26520001
  .word 0x0280202d
  .word 0x0200282d
  .word 0x0c05da64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430049
  .word 0x00000000
  .word 0x0220202d
  .word 0x26250004
  .word 0x0200302d
  .word 0x0c0f12fc
  .word 0x00000000
  .word 0x14400042
  .word 0x00000000
  .word 0x16800006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050387
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x00101840
  .word 0x8f82b704
  .word 0x00431021
  .word 0x80420000
  .word 0x2403ffff
  .word 0x14430002
  .word 0x00000000
  .word 0x24020012
  .word 0x96840002
  .word 0x000418c0
  .word 0x00641823
  .word 0x00032040
  .word 0x8f83b730
  .word 0x00641821
  .word 0x9464000a
  .word 0x000418c0
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00032040
  .word 0x3c03006a
  .word 0x246348f0
  .word 0x00641821
  .word 0x00021040
  .word 0x00431021
  .word 0x845e0000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x3c02006a
  .word 0x24424e10
  .word 0x00501021
  .word 0x80430000
  .word 0x10000005
  .word 0x00000000
  .word 0x3c02006a
  .word 0x24424ba0
  .word 0x00501021
  .word 0x80430000
  .word 0x14600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000006
  .word 0x00000000
  .word 0x001e1080
  .word 0x005e1021
  .word 0x00021040
  .word 0x0043001a
  .word 0x00001012
  .word 0x10400007
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0f1244
  .word 0x00000000
  .word 0xac500004
  .word 0x26b50001
  .word 0x2aa20008
  .word 0x1440ffa6
  .word 0x00000000
  .word 0x26730001
  .word 0x0277102a
  .word 0x1440ff9c
  .word 0x00000000
  .word 0x12400004
  .word 0x00000000
  .word 0x96220010
  .word 0x14400006
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0f117c
  .word 0x00000000
  .word 0x100000b1
  .word 0x00000000
  .word 0x24050008
  .word 0x3c03006a
  .word 0x246348d0
  .word 0x1000000e
  .word 0x00000000
  .word 0x00052040
  .word 0x00641021
  .word 0x80420000
  .word 0x0242082a
  .word 0x14200007
  .word 0x00000000
  .word 0x3c02006a
  .word 0x244248d1
  .word 0x00441021
  .word 0x80500000
  .word 0x10000005
  .word 0x00000000
  .word 0x24a5ffff
  .word 0x04a1fff2
  .word 0x00000000
  .word 0x0000802d
  .word 0x0280202d
  .word 0x0c05da8c
  .word 0x00000000
  .word 0x24030008
  .word 0x00621023
  .word 0x14400006
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0f117c
  .word 0x00000000
  .word 0x10000090
  .word 0x00000000
  .word 0x0050082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040802d
  .word 0x00122080
  .word 0x3c050004
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040b82d
  .word 0x10000079
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000b02d
  .word 0x8e320004
  .word 0x12400076
  .word 0x00000000
  .word 0x1000004a
  .word 0x00000000
  .word 0x96550004
  .word 0x16800006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x24050387
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x32b5ffff
  .word 0x00151840
  .word 0x8f82b704
  .word 0x00431021
  .word 0x80420000
  .word 0x2403ffff
  .word 0x14430002
  .word 0x00000000
  .word 0x24020012
  .word 0x96840002
  .word 0x000418c0
  .word 0x00641823
  .word 0x00032040
  .word 0x8f83b730
  .word 0x00641821
  .word 0x9464000a
  .word 0x000418c0
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00032040
  .word 0x3c03006a
  .word 0x246348f0
  .word 0x00641821
  .word 0x00021040
  .word 0x00431021
  .word 0x845e0000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x3c02006a
  .word 0x24424e10
  .word 0x00551021
  .word 0x80430000
  .word 0x10000005
  .word 0x00000000
  .word 0x3c02006a
  .word 0x24424ba0
  .word 0x00551021
  .word 0x80430000
  .word 0x14600004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000006
  .word 0x00000000
  .word 0x001e1080
  .word 0x005e1021
  .word 0x00021040
  .word 0x0043001a
  .word 0x00001812
  .word 0x00131080
  .word 0x02e2a821
  .word 0xaea30000
  .word 0x14600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x240503e2
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8ea20000
  .word 0x02c2b021
  .word 0x26730001
  .word 0x8e520010
  .word 0x1640ffb6
  .word 0x00000000
  .word 0x0000a82d
  .word 0x0000982d
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x3403ffff
  .word 0x0043001b
  .word 0x00001010
  .word 0x02c21018
  .word 0x0043001b
  .word 0x00000000
  .word 0x00000000
  .word 0x00001812
  .word 0x8e320004
  .word 0x10000016
  .word 0x00000000
  .word 0x00151080
  .word 0x02e21021
  .word 0x8c420000
  .word 0x02629821
  .word 0x96450004
  .word 0x0073082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05da10
  .word 0x00000000
  .word 0x2610ffff
  .word 0x0220202d
  .word 0x26250004
  .word 0x0240302d
  .word 0x0c0f1278
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x26b50001
  .word 0x8e520010
  .word 0x1640ffea
  .word 0x00000000
  .word 0x1600ff87
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0f117c
  .word 0x00000000
  .word 0x02e0202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
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
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma pop

// FUN_003d7a30
s32 fclCombineMisc003d7a30(u32 *param_1, void *param_2, s32 param_3)
{
    s32 idx;
    s32 link;

    idx = (u32)*(u16 *)((u8 *)param_1 + 2) * 0xe;
    link = func_0016deb0((*gp0xffffb730)[idx + 2]);
    func_0016dba0(link);
    FUN_003d74f0_i((int)param_1, (int)param_2, param_3);
    return 0;
}

#pragma push
/* W389 sweep: opt_lifetimes on measured nd341/obj720 -> nd338/obj720 (window 736). */
#pragma opt_lifetimes on
// FUN_003D7AC0


#ifndef PC_BUILD
asm u32 FUN_003d7ac0(u8 param_1,u8 param_2,u16 *param_3)
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
  .word 0x00c0f02d
  .word 0x0000982d
  .word 0x0000902d
  .word 0x0000a02d
  .word 0x308200ff
  .word 0x7fa200a0
  .word 0x30b700ff
  .word 0x1000007b
  .word 0x00000000
  .word 0x8f84b730
  .word 0x3283ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x0002a840
  .word 0x00952021
  .word 0x90830002
  .word 0x7ba200a0
  .word 0x1443006f
  .word 0x00000000
  .word 0x94830000
  .word 0x30620001
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x1040005f
  .word 0x00000000
  .word 0x24160001
  .word 0x0000882d
  .word 0x10000021
  .word 0x00000000
  .word 0x001118c0
  .word 0x3c02006a
  .word 0x24425410
  .word 0x00432021
  .word 0x84820004
  .word 0x16020019
  .word 0x00000000
  .word 0x84830006
  .word 0x30620001
  .word 0x10400009
  .word 0x00000000
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000012
  .word 0x00000000
  .word 0x30620002
  .word 0x1040000a
  .word 0x00000000
  .word 0x0000b02d
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x26310001
  .word 0x2e220043
  .word 0x1440ffde
  .word 0x00000000
  .word 0x02c0182d
  .word 0x10600035
  .word 0x00000000
  .word 0x3243ffff
  .word 0x1060000c
  .word 0x00000000
  .word 0x8f84b730
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00821021
  .word 0x90430003
  .word 0x00951021
  .word 0x90420003
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0x3292ffff
  .word 0x8f82b730
  .word 0x00551021
  .word 0x90450003
  .word 0x00b7102a
  .word 0x14400020
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031040
  .word 0x03c21021
  .word 0x94420000
  .word 0x16020004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x24630001
  .word 0x2862000c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000102d
  .word 0x1440000e
  .word 0x00000000
  .word 0x3264ffff
  .word 0x1080000a
  .word 0x00000000
  .word 0x8f83b730
  .word 0x000410c0
  .word 0x00441023
  .word 0x00021040
  .word 0x00621021
  .word 0x90420003
  .word 0x00a2082a
  .word 0x10200002
  .word 0x00000000
  .word 0x3293ffff
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3290ffff
  .word 0x2a0200c0
  .word 0x1440ff83
  .word 0x00000000
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x2405045b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3262ffff
  .word 0x1440000c
  .word 0x00000000
  .word 0x8f84b730
  .word 0x3243ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00441021
  .word 0x90420003
  .word 0x0057082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0060982d
  .word 0x0260102d
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma pop
#pragma push
/* W389 sweep: opt_lifetimes on measured nd341/obj720 -> nd338/obj720 (window 736). */
#pragma opt_lifetimes on
// FUN_003D7DA0


#ifndef PC_BUILD
asm u32 FUN_003d7da0(u8 param_1,u8 param_2,u16 *param_3)
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
  .word 0x00c0f02d
  .word 0x0000982d
  .word 0x0000902d
  .word 0x0000a02d
  .word 0x308200ff
  .word 0x7fa200a0
  .word 0x30b700ff
  .word 0x1000007b
  .word 0x00000000
  .word 0x8f84b730
  .word 0x3283ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x0002a840
  .word 0x00952021
  .word 0x90830002
  .word 0x7ba200a0
  .word 0x1443006f
  .word 0x00000000
  .word 0x94830000
  .word 0x30620001
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0x30620002
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x1040005f
  .word 0x00000000
  .word 0x24160001
  .word 0x0000882d
  .word 0x10000021
  .word 0x00000000
  .word 0x001118c0
  .word 0x3c02006a
  .word 0x24425410
  .word 0x00432021
  .word 0x84820004
  .word 0x16020019
  .word 0x00000000
  .word 0x84830006
  .word 0x30620001
  .word 0x10400009
  .word 0x00000000
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000012
  .word 0x00000000
  .word 0x30620002
  .word 0x1040000a
  .word 0x00000000
  .word 0x0000b02d
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x26310001
  .word 0x2e220043
  .word 0x1440ffde
  .word 0x00000000
  .word 0x02c0182d
  .word 0x10600035
  .word 0x00000000
  .word 0x3243ffff
  .word 0x1060000c
  .word 0x00000000
  .word 0x8f84b730
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00821021
  .word 0x90430003
  .word 0x00951021
  .word 0x90420003
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0x3292ffff
  .word 0x8f82b730
  .word 0x00551021
  .word 0x90450003
  .word 0x02e5082a
  .word 0x14200020
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031040
  .word 0x03c21021
  .word 0x94420000
  .word 0x16020004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x24630001
  .word 0x2862000c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000102d
  .word 0x1440000e
  .word 0x00000000
  .word 0x3264ffff
  .word 0x1080000a
  .word 0x00000000
  .word 0x8f83b730
  .word 0x000410c0
  .word 0x00441023
  .word 0x00021040
  .word 0x00621021
  .word 0x90420003
  .word 0x0045082a
  .word 0x10200002
  .word 0x00000000
  .word 0x3293ffff
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3290ffff
  .word 0x2a0200c0
  .word 0x1440ff83
  .word 0x00000000
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24845f70
  .word 0x2405047c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3262ffff
  .word 0x1440000c
  .word 0x00000000
  .word 0x8f84b730
  .word 0x3243ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00441021
  .word 0x90420003
  .word 0x0057082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0060982d
  .word 0x0260102d
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma pop

// FUN_003D8080


u32 FUN_003d8080(int param_1,int param_2,int param_3)



{

  u32 uVar1;


  u32 bVar3;

  u32 uVar4;

  u32 uVar5;

s32 lVar6;

  int iVar7;
  int iVar8;

  u32 auStack_20 [8];
  u32 target;
  void *result;

  

  uVar4 = FUN_001752b0();

  uVar4 = uVar4 & 0xffff;
  target = uVar4;

  bVar3 = 0;

  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {

    K_Assert(DAT_006a5f70,0x48d);

  }

  for (iVar7 = 0; iVar7 < param_3; iVar7 = iVar7 + 1) {

    auStack_20[iVar7] = (u32)*(u16 *)(*(int *)((int)param_2 + iVar7 * 4) + 2);

  }

  for (iVar8 = 0; iVar8 < param_3; iVar8 = iVar8 + 1) {

    if (target != auStack_20[iVar8]) {
      lVar6 = FUN_00174b40(auStack_20[iVar8] & 0xffff);
      if (lVar6 == 0) {
        K_Assert(DAT_006a5f70,0x494);
      }
    }
    else {
      bVar3 = 1;
    }

  }

  iVar7 = (int)param_1;
  if ((result = (void *)FUN_00174e20(*(u16 *)(iVar7 + 6))) == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(u16 *)result;
    uVar1 = uVar1 | *(u16 *)((u8 *)param_1 + 4);
    memcpy(result,(void *)((u8 *)iVar7 + 4),0x34);
    *(u16 *)result = uVar1;
    if (bVar3) {
      FUN_00175130(*(u16 *)(iVar7 + 6));
      FUN_00174b40(target);
    }
    else {
      FUN_00175130(target);
    }
    uVar5 = 1;
  }

  return uVar5;

}

// FUN_003d8230
u32 fclCombineMisc003d8230(s32 param_1)
{
    return FUN_001749a0(*(u16*)(param_1 + 6)) != 0;
}

// FUN_003D8260
u32 FUN_003d8260(int param_1,u32 param_2)



{

  u16 sVar1;

  int iVar2;

s32 lVar3;

  int target;
  s32 uVar4;

  s32 uVar5;

  u8 auStack_40 [64];

  

  uVar5 = 0;

  if (((param_1 == 0) || ((int)param_2 < 0)) || ((int)param_2 >= 0xc)) {

    K_Assert(DAT_006a5f70,0x4ca);

  }

  uVar4 = 0;

  target = (int)param_1 + (int)param_2 * 0xc;

  for (; (int)uVar4 < 0xc; uVar4 = uVar4 + 1) {

    iVar2 = *(int *)((int)param_1 + uVar4 * 0xc + 4);

    if (((iVar2 != 0) && (sVar1 = *(short *)(iVar2 + 2), sVar1 != 0)) &&

       ((uVar4 != param_2 &&

        (lVar3 = FUN_003d64a0(auStack_40,sVar1,

                              *(u16 *)(*(int *)(target + 4) + 2)),
        lVar3 != 0)))) {

      uVar5 = uVar5 | 1 << uVar4;


    }

  }

  return uVar5;

}

// FUN_003D8370
u32 FUN_003d8370(int param_1,u32 param_2,u32 param_3)



{

  int iVar1;

s32 lVar2;
  int target2;
  int target3;
  u32 uVar4;

  u32 uVar3;


  int iVar5;

  u8 auStack_40 [64];

  

  uVar3 = 0;

  if ((((param_1 == 0) || ((int)param_2 < 0)) || ((int)param_2 >= 0xc)) ||
     (((int)param_3 < 0 || ((int)param_3 >= 0xc)))) {

    K_Assert(DAT_006a5f70,0x4dc);

  }


  iVar5 = (int)param_1;

  uVar4 = 0;

  target2 = iVar5 + (int)param_3 * 0xc;
  target3 = iVar5 + (int)param_2 * 0xc;

  for (; (int)uVar4 < 0xc; uVar4 = uVar4 + 1) {

    iVar1 = *(int *)(iVar5 + uVar4 * 0xc + 4);

    if (((iVar1 != 0) && (*(u16 *)(iVar1 + 2) != 0)) &&

       ((uVar4 != param_2 &&

        ((uVar4 != param_3 &&

         (lVar2 = FUN_003d6740(auStack_40,(void *)iVar1,
                                (void *)*(u32 *)(target3 + 4),
                                (void *)*(u32 *)(target2 + 4)), lVar2 != 0)))))) {

      uVar3 = uVar3 | 1 << uVar4;

    }

  }

  return uVar3;

}



#pragma push
/* W389 pair sweep: opt_loop_invariants on + opt_common_subs off measured nd217/obj356 -> nd187/obj368 (window 368). */
#pragma opt_loop_invariants on
#pragma opt_common_subs off
// FUN_003D84C0


#ifndef PC_BUILD
asm u32 FUN_003d84c0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000182d
  .word 0x10000002
  .word 0x00000000
  .word 0x24630001
  .word 0x2862000c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x000518c0
  .word 0x3c02006a
  .word 0x24425f40
  .word 0x00431021
  .word 0x8c550000
  .word 0x3c02006a
  .word 0x24425f44
  .word 0x00431021
  .word 0x8c510000
  .word 0x0000902d
  .word 0x10000031
  .word 0x00000000
  .word 0x96b00000
  .word 0x24130001
  .word 0x0000a02d
  .word 0x10000021
  .word 0x00000000
  .word 0x001418c0
  .word 0x3c02006a
  .word 0x24425410
  .word 0x00432021
  .word 0x84820004
  .word 0x16020019
  .word 0x00000000
  .word 0x84830006
  .word 0x30620001
  .word 0x10400009
  .word 0x00000000
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000012
  .word 0x00000000
  .word 0x30620002
  .word 0x1040000a
  .word 0x00000000
  .word 0x0000982d
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x26940001
  .word 0x2e820043
  .word 0x1440ffde
  .word 0x00000000
  .word 0x0260182d
  .word 0x10600004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000007
  .word 0x00000000
  .word 0x26b50020
  .word 0x26520001
  .word 0x0251102a
  .word 0x1440ffce
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_common_subs reset
#pragma opt_loop_invariants reset
#pragma pop



#pragma opt_loop_invariants on
// W416 measured negative: retail offset 180 has a 0x10 extension, while ours already has matching 0x10 pairs nearby at 148/152 and 160/164; layout, not width.
// FUN_003D8630


#ifndef PC_BUILD
asm u32 FUN_003d8630(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0a82d
  .word 0x0000302d
  .word 0x1000000c
  .word 0x00000000
  .word 0x00062840
  .word 0x00a61021
  .word 0x00021080
  .word 0x00821021
  .word 0x8c420004
  .word 0x10400004
  .word 0x00000000
  .word 0x94430002
  .word 0x00bd1021
  .word 0xa4430090
  .word 0x24c60001
  .word 0x28c2000c
  .word 0x1440fff3
  .word 0x00000000
  .word 0x001518c0
  .word 0x3c02006a
  .word 0x24425f40
  .word 0x00431021
  .word 0x8c540000
  .word 0x3c02006a
  .word 0x24425f44
  .word 0x00431021
  .word 0x8c500000
  .word 0x0000882d
  .word 0x26a20002
  .word 0x0002b43c
  .word 0x0016b43f
  .word 0x10000044
  .word 0x00000000
  .word 0xa7a000ae
  .word 0x26a20002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0280202d
  .word 0x27a60090
  .word 0x2407000c
  .word 0x27a800ae
  .word 0x0c0f5690
  .word 0x00000000
  .word 0x87a300ae
  .word 0x0076182a
  .word 0x14600003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x1040002f
  .word 0x00000000
  .word 0x96970000
  .word 0x24120001
  .word 0x0000982d
  .word 0x10000021
  .word 0x00000000
  .word 0x001318c0
  .word 0x3c02006a
  .word 0x24425410
  .word 0x00432021
  .word 0x84820004
  .word 0x16e20019
  .word 0x00000000
  .word 0x84830006
  .word 0x30620001
  .word 0x10400009
  .word 0x00000000
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000012
  .word 0x00000000
  .word 0x30620002
  .word 0x1040000a
  .word 0x00000000
  .word 0x0000902d
  .word 0x8c840000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x26730001
  .word 0x2e620043
  .word 0x1440ffde
  .word 0x00000000
  .word 0x0240182d
  .word 0x10600004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000007
  .word 0x00000000
  .word 0x26940020
  .word 0x26310001
  .word 0x0230102a
  .word 0x1440ffbb
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

// FUN_003d8830
s32 fclCombineMisc003d8830(s32 param_1)
{
    return *(s32*)(DAT_006a5f44 + param_1 * 8);
}

/* W327 sweep: opt_loop_invariants on improves FUN_003d8630 from nd338/obj500 to nd331/obj500 (window 512); retained. */
// FUN_003D8850
void FUN_003d8850(FcmDispatchWork *work,u32 command,u32 mode)
{
  int index;
  FcmDispatchLink *link;
  FcmDispatchResult *result;

  index = 0;
  link = work->owners->links;
  switch (command) {
  case 0:
    if (mode == 0) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,0,0,
          index - (index >> 2));
        link = link->next;
        index += 1;
      }
    } else if (mode == 1) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,0,1,0);
        link = link->next;
        index += 1;
      }
    }
    break;
  case 1:
    if (mode == 0) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,1,0,
          index - (index >> 2));
        link = link->next;
        index += 1;
      }
    } else if (mode == 1) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,1,1,0);
        link = link->next;
        index += 1;
      }
    }
    break;
  case 2:
    if (mode == 0) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,2,0,index * 3);
        link = link->next;
        index += 1;
      }
    } else if (mode == 1) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,2,1,0);
        link = link->next;
        index += 1;
      }
    }
    break;
  case 3:
    if (mode == 0) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,3,0,0);
        link = link->next;
        index += 1;
      }
    } else if (mode == 1) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,3,1,0);
        link = link->next;
        index += 1;
      }
    }
    break;
  case 4:
    if (mode == 0) {
      FUN_003e0260(work->result,4,0,0);
    } else if (mode == 1) {
      FUN_003e0260(work->result,4,1,0);
    }
    break;
  case 5:
    if (mode == 0) {
      FUN_003e0260(work->result,5,0,0);
    } else if (mode == 1) {
      FUN_003e0260(work->result,5,1,0);
    }
    break;
  case 6:
    if (mode == 0) {
      FUN_003e0260(work->result,6,0,0);
    } else if (mode == 1) {
      FUN_003e0260(work->result,6,1,0);
    }
    break;
  case 7:
    if (mode == 0) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,7,0,
          index - (index >> 2));
        link = link->next;
        index += 1;
      }
    } else if (mode == 1) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,7,1,0);
        link = link->next;
        index += 1;
      }
    }
    break;
  case 8:
    if (mode == 0) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,8,0,0);
        link = link->next;
      }
    } else if (mode == 1) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,8,1,0);
        link = link->next;
      }
    }
    break;
  case 9:
    if (mode == 0) {
      FUN_003e0260(work->result,9,0,0);
    } else if (mode == 1) {
      FUN_003e0260(work->result,9,1,0);
    }
    break;
  case 10:
    if (mode == 0) {
      FUN_003e0260(work->result,10,0,0);
    } else if (mode == 1) {
      FUN_003e0260(work->result,10,1,0);
    }
    break;
  case 11:
    if (mode == 0) {
      while (link != 0) {
        FUN_003e0260(link->payload->data->callback_target,11,0,0);
        link = link->next;
      }
    } else if (mode == 1) {
      FUN_003e0260(work->owners->root->payload->data->callback_target,11,1,0);
    }
    break;
  case 12:
    if (mode == 0) {
      FUN_003e0260(work->result,12,0,0);
    } else if (mode == 1) {
      FUN_003e0260(work->result,12,1,0);
    }
    break;
  case 13:
    if (work->capacity == 3) {
      if (mode == 0) {
        FUN_003e0260(work->result,13,0,0);
        FUN_003e0260(work->result,14,1,0);
      } else if (mode == 1) {
        FUN_003e0260(work->result,13,1,0);
      }
    }
    break;
  case 14:
    break;
  case 15:
    if (mode == 0) {
      FUN_003e0260(work->result,15,0,0);
    } else if (mode == 1) {
      FUN_003e0260(work->result,15,1,0);
    }
    break;
  case 16:
  case 17:
  case 18:
  case 19:
  case 20:
  case 21:
    break;
  case 22:
    if (mode == 0) {
      if (work->mode >= 2) {
        FUN_003e0260(work->result,19,0,0);
      } else {
        switch (work->used) {
        case 0:
          FUN_003e0260(work->result,16,0,0);
          break;
        case 1:
          FUN_003e0260(work->result,17,0,0);
          break;
        case 2:
          FUN_003e0260(work->result,18,0,0);
          break;
        default:
          break;
        }
      }
    } else if (mode == 1) {
      if (work->mode >= 2) {
        FUN_003e0260(work->result,19,1,0);
      } else {
        switch (work->used) {
        case 0:
          FUN_003e0260(work->result,16,1,0);
          break;
        case 1:
          FUN_003e0260(work->result,17,1,0);
          break;
        case 2:
          FUN_003e0260(work->result,18,1,0);
          break;
        default:
          break;
        }
      }
    }
    break;
  case 23:
    if (mode == 0) {
      switch (work->used) {
      case 0:
        break;
      case 1:
        FUN_003e0260(work->result,16,0,0);
        break;
      case 2:
        FUN_003e0260(work->result,17,0,0);
        break;
      case 3:
        FUN_003e0260(work->result,18,0,0);
        break;
      default:
        FUN_003e0260(work->result,19,0,0);
        break;
      }
    } else if (mode == 1) {
      switch (work->used) {
      case 0:
        break;
      case 1:
        FUN_003e0260(work->result,16,1,0);
        break;
      case 2:
        FUN_003e0260(work->result,17,1,0);
        break;
      case 3:
        FUN_003e0260(work->result,18,1,0);
        break;
      default:
        FUN_003e0260(work->result,19,1,0);
        break;
      }
    }
    break;
  case 24:
    if (mode == 0) {
      switch (work->used) {
      case 0:
        FUN_003e0260(work->result,17,0,0);
        break;
      case 1:
        FUN_003e0260(work->result,18,0,0);
        break;
      case 2:
        break;
      default:
        FUN_003e0260(work->result,19,0,0);
        break;
      }
    } else if (mode == 1) {
      switch (work->used) {
      case 0:
        FUN_003e0260(work->result,17,1,0);
        break;
      case 1:
        FUN_003e0260(work->result,18,1,0);
        break;
      case 2:
        break;
      default:
        FUN_003e0260(work->result,19,1,0);
        break;
      }
    }
    break;
  case 25:
    if (mode == 0) {
      switch (work->used) {
      case 1:
        result = FUN_003e0260(work->result,20,0,0);
        if (work->values[0] != 0) {
          memcpy(result->payload,work->values[0],0x34);
        }
        break;
      case 2:
        result = FUN_003e0260(work->result,21,0,0);
        if (work->values[1] != 0) {
          memcpy(result->payload,work->values[1],0x34);
        }
        break;
      default:
        break;
      }
    } else if (mode == 1) {
      switch (work->used) {
      case 1:
        FUN_003e0260(work->result,20,1,0);
        break;
      case 2:
        FUN_003e0260(work->result,21,1,0);
        break;
      default:
        break;
      }
    }
    break;
  case 27:
    if (mode == 0) {
      switch (work->used) {
      case 0:
        FUN_003e0260(work->result,20,0,0);
        break;
      case 1:
        FUN_003e0260(work->result,21,0,0);
        break;
      default:
        break;
      }
    } else if (mode == 1) {
      switch (work->used) {
      case 0:
        FUN_003e0260(work->result,20,1,0);
        break;
      case 1:
        FUN_003e0260(work->result,21,1,0);
        break;
      default:
        break;
      }
    }
    break;
  case 26:
    if (mode == 0) {
      switch (work->used) {
      case 2:
        FUN_003e0260(work->result,20,0,0);
        break;
      case 3:
        FUN_003e0260(work->result,21,0,0);
        break;
      default:
        break;
      }
    } else if (mode == 1) {
      switch (work->used) {
      case 2:
        FUN_003e0260(work->result,20,1,0);
        break;
      case 3:
        FUN_003e0260(work->result,21,1,0);
        break;
      default:
        break;
      }
    }
    break;
  case 28:
    if (mode == 0) {
      switch (work->used) {
      case 1:
        result = FUN_003e0260(work->result,20,0,0);
        if (work->values[0] != 0) {
          memcpy(result->payload,work->values[0],0x34);
        }
        break;
      case 2:
      case 3:
        if (work->values[0] != 0) {
          result = FUN_003e0260(work->result,20,0,0);
          memcpy(result->payload,work->values[0],0x34);
        }
        if (work->values[1] != 0) {
          result = FUN_003e0260(work->result,21,0,5);
          memcpy(result->payload,work->values[1],0x34);
        }
        break;
      default:
        break;
      }
    } else if (mode == 1) {
      switch (work->used) {
      case 1:
        FUN_003e0260(work->result,20,1,0);
        break;
      case 2:
      case 3:
        if (work->values[0] != 0) {
          FUN_003e0260(work->result,20,1,0);
        }
        if (work->values[1] != 0) {
          FUN_003e0260(work->result,21,1,0);
        }
        break;
      default:
        break;
      }
    }
    break;
  default:
    break;
  }
}

// FUN_003D9820
void FUN_003d9820(Fcm982Root *arg0,u32 arg1,u32 arg2)
{
  int var_16;
  Fcm982Result *temp_2;
  Fcm982Ctx *temp_7;
  Fcm982Node *var_18;
  Fcm982Node *var_18_2;
  Fcm982Node *var_18_3;
  Fcm982Node *var_18_4;

  var_16 = 0;
  temp_7 = arg0->unkc;
  var_18 = temp_7->unk4;
  switch (arg1) {
  case 0:
    if (arg2 == 0) {
      var_18_2 = temp_7->unk24->unk2c;
      while (var_18_2 != 0) {
        temp_2 = FUN_003e0330(var_18_2->unk14->unk1c->unk8,0,0,
          var_16 - (var_16 >> 2));
        temp_2->unk1a =
          (s16)(var_16 * -arg0->unkc->unk24->unkc);
        var_18_2 = var_18_2->unk10;
        var_16 += 1;
      }
      goto done;
    }
    // fallthrough (arg1==1, unreachable via dispatch - part of case0's chain)
    if (arg2 == 1) {
      var_18_3 = temp_7->unk24->unk2c;
      while (var_18_3 != 0) {
        temp_2 = FUN_003e0330(var_18_3->unk14->unk1c->unk8,0,1,0);
        temp_2->unk1e =
          (s16)(var_16 * -arg0->unkc->unk24->unkc);
        var_18_3 = var_18_3->unk10;
        var_16 += 1;
      }
      goto done;
    }
    // fallthrough (arg1==2, unreachable via dispatch - part of case0's chain)
    if (arg2 == 3) {
      var_18_4 = temp_7->unk24->unk2c;
      while (var_18_4 != 0) {
        temp_2 = FUN_003e0330(var_18_4->unk14->unk1c->unk8,0,1,0);
        temp_2->unk1e = (s16)(var_16 * -arg0->unkc->unk24->unkc);
        if (var_18_4 == arg0->unkc->unkc) {
          temp_2->unk2a = 0xff;
        }
        var_18_4 = var_18_4->unk10;
        var_16 += 1;
      }
      goto done;
    }
  default:
    goto done;
  case 1:
    if (arg2 == 0) {
      while (var_18 != 0) {
        FUN_003e0330(var_18->unk14->unk1c->unk8,1,0,0);
        var_18 = var_18->unk10;
        var_16 += 1;
      }
      goto done;
    }
    // fallthrough (arg1==4, unreachable via dispatch - part of this chain)
    if (arg2 == 1) {
      FUN_003e0330(temp_7->unkc->unk14->unk1c->unk8,1,1,0);
      goto done;
    }
    if (arg2 == 3) {
      FUN_003e0330(temp_7->unkc->unk14->unk1c->unk8,1,1,0);
      goto done;
    }
    goto done;
  case 2:
    if (arg2 == 0) {
      FUN_003e0330(arg0->unk8,2,0,0);
      goto done;
    }
    if (arg2 == 1) {
      FUN_003e0330(arg0->unk8,2,1,0);
      goto done;
    }
    goto done;
  case 3:
    if (arg2 == 0) {
      FUN_003e0330(arg0->unk8,3,0,0);
      goto done;
    }
    if (arg2 == 1) {
      FUN_003e0330(arg0->unk8,3,1,0);
      goto done;
    }
    goto done;
  case 4:
    if (arg2 == 0) {
      FUN_003e0330(arg0->unk8,4,0,0);
      goto done;
    }
    if (arg2 == 1) {
      FUN_003e0330(arg0->unk8,4,1,0);
    }
    goto done;
  case 5:
    if (arg2 == 0) {
      FUN_003e0330(arg0->unk8,5,0,0);
      goto done;
    }
    if (arg2 == 1) {
      FUN_003e0330(arg0->unk8,5,1,0);
      goto done;
    }
    goto done;
  case 6:
    if (arg2 == 0) {
      FUN_003e0330(arg0->unk8,6,0,0);
      goto done;
    }
    if (arg2 == 1) {
      FUN_003e0330(arg0->unk8,6,1,0);
      goto done;
    }
    goto done;
  case 7:
    if (arg2 == 0) {
      FUN_003e0330(arg0->unk8,7,0,0);
      goto done;
    }
    if (arg2 == 1) {
      FUN_003e0330(arg0->unk8,7,1,0);
      goto done;
    }
    goto done;
  }
done:
  ;
}

// FUN_003d9c90
void fclCombineMisc003d9c90(s32 param_1, s32 param_2)
{
    FUN_003dff00(*(s32*)(*(s32*)(*(s32*)(param_2 + 0x14) + 0x1c) + 0x60));
}
// FUN_003D9CC0


void FUN_003d9cc0(int param_1)



{

  int entry_base;

  int iVar2;

  u32 uVar3;

  u32 uVar4;

  int iVar1;

  int lVar6;

  int unaff_s1_lo;

  int iVar7;

  int iVar8;

  int iVar5;

  

  iVar7 = (int)param_1;
  entry_base = iVar7 + 0x11c;
  iVar1 = *(int *)(iVar7 + 0x14);
  for (iVar5 = 0; iVar5 < 0xc; iVar5 = iVar5 + 1) {
    iVar8 = entry_base + iVar5 * 0xc;

    lVar6 = 0;

    iVar2 = *(int *)(iVar8 + 4);

    if ((iVar2 != 0) && (*(u16 *)(iVar2 + 2) != 0)) {
      lVar6 = FUN_003c5a40(iVar1,*(u16 *)(iVar1 + 0x10) + 1,0x8c,0);
      unaff_s1_lo = *(int *)(*(int *)((int)lVar6 + 0x14) + 0x1c);
      if (*(int *)(iVar7 + 4) == 0) {
        uVar3 = FUN_003d8260(entry_base,iVar5);
        *(u32 *)(unaff_s1_lo + 4) = uVar3;
      }
      *(u32 *)(unaff_s1_lo + 8) = *(u32 *)(iVar8 + 4);
    } else {
      uVar4 = FUN_00175410();
      if (iVar5 < (int)(uVar4 & 0xffff)) {
        lVar6 = FUN_003c5a40(iVar1,*(u16 *)(iVar1 + 0x10) + 1,0x8c,0);
        unaff_s1_lo = *(int *)(*(int *)((int)lVar6 + 0x14) + 0x1c);
        *(u32 *)(unaff_s1_lo + 4) = 0;
        *(u32 *)(unaff_s1_lo + 8) = 0;
      }
    }

    if (lVar6 != 0) {

      uVar3 = FUN_003dfeb0(param_1);

      *(u32 *)(unaff_s1_lo + 0x60) = uVar3;

    }

  }

  FUN_003c5e80(iVar1,fclCombineList003db5e0);

  FUN_003c5e20(iVar1,fclCombineList003dc210);

  FUN_003c5ee0(iVar1,fclCombineList003dd800);

  FUN_003c5f40(iVar1,fclCombineMisc003d9c90);

  FUN_003c6d40(iVar1,0,0);

  FUN_003c6ee0(iVar1);

  *(u16 *)(iVar7 + 8) = 3;

  return;

}

// FUN_003D9EA0


void FUN_003d9ea0(int param_1)



{

  int iVar1;

  int iVar8;

  u32 uVar2;

  u32 uVar3;

  int iVar4;

  int lVar5;

  int iVar6;

  int iVar0;

  int iVar7;

  int iVar9;

  int iVar10;

  int aiStack_20 [8];

  struct {
    u32 flags;
    u16 *entry;
    int personas[8];
  } scratch;

  

  iVar9 = (int)param_1;

  iVar10 = iVar9 + 0x11c;

  iVar1 = *(int *)(iVar9 + 0x14);

  uVar2 = *(u32 *)(iVar9 + 4);

  for (iVar0 = 0; iVar0 < 0xc; iVar0 = iVar0 + 1) {

  }

  for (iVar7 = 0; iVar4 = fclCombineMisc003d8830(uVar2), iVar7 <= iVar4; iVar7 = iVar7 + 1) {

    lVar5 = FUN_003d5730_i(&scratch,uVar2,iVar7,(u32 *)iVar10);

    if (lVar5 != 0) {

      iVar4 = FUN_003c5a40(iVar1,*(u16 *)(iVar1 + 0x10) + 1,0x8c,0);

      iVar4 = *(int *)(*(int *)(iVar4 + 0x14) + 0x1c);

      *(u32 *)(iVar4 + 4) = 0;

      memcpy(iVar4 + 100,&scratch,0x28);

      iVar8 = 0;

      if ((scratch.flags & 1) != 0) {

        memset(aiStack_20,0,4);

        for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {

          if (((int *)&scratch)[iVar6 + 2] != 0) {

            aiStack_20[iVar8] = ((int *)&scratch)[iVar6 + 2];

            iVar8 = iVar8 + 1;

          }

        }

        FUN_003d6910((void *)(iVar4 + 0x10),uVar2,aiStack_20);

        *(int *)(iVar4 + 8) = iVar4 + 0x10;

      }

      uVar3 = FUN_003dfeb0(param_1);

      *(u32 *)(iVar4 + 0x60) = uVar3;

    }

  }

  FUN_003c5e80(iVar1,fclCombineList003db5e0);

  FUN_003c5e20(iVar1,fclCombineList003deb80);

  FUN_003c5ee0(iVar1,fclCombineList003dec00);

  FUN_003c5f40(iVar1,fclCombineMisc003d9c90);

  FUN_003c6d40(iVar1,0,0);

  FUN_003c6ee0(iVar1);

  *(u16 *)(iVar9 + 8) = 3;

  return;

}
