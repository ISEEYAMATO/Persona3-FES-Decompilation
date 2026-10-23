#include "Main/Battle/Result/br_friend.h"




// TODO


#include "Main/Social/sfl_res.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/g_data.h"
#include "Main/Social/sfl_psel.h"

#pragma alias func_0020c500_y2 func_0020c500
#pragma alias func_0020c400_y2 func_0020c400
#pragma alias sflResSetSpriteScale_y2 sflResSetSpriteScale
#pragma alias sflResSetSpriteRotation_y2 sflResSetSpriteRotation
#pragma alias sflResult001f99f0_y2 sflResult001f99f0
#pragma alias sflResult001f9100_y2 sflResult001f9100
#pragma alias sflResSetSpritePosition_y2 sflResSetSpritePosition
#pragma alias func_00175ce0_y2 func_00175ce0_y2
#pragma alias func_001761b0_y2 func_001761b0_y2
#pragma alias func_00176100_y2 func_00176100_y2
#pragma alias func_001fbdf0_y2 func_001fbdf0_y2
#pragma alias func_001fbfa0_y2 func_001fbfa0_y2
#pragma alias func_001fb4b0_y2 func_001fb4b0_y2
#pragma alias DAT_007ce430_y2 DAT_007ce430_y2
#pragma alias sflResult001f9770_y2 sflResult001f9770_y2
#pragma alias sflResult001f9800_y2 sflResult001f9800_y2
#pragma alias sflResult001f9890_y2 sflResult001f9890_y2
#pragma alias sflResult001f9630_y2 sflResult001f9630_y2
#pragma alias func_00209d00_y2 func_00209d00_y2
#pragma alias func_004bdde0_y2 func_004bdde0_y2
#pragma alias datGetMaxHp_y2 datGetMaxHp_y2


static u32* sSflResult; // iGpffffb5f0 / puGpffffb5f0

extern void brRoot001f1df0(u16* members, s32* count);
extern u16 datGetHp(s16 pcId);
extern u16 datGetMaxHp(s16 pcId);
extern u16 datGetSp(s16 pcId);
extern u16 func_0016c670(s16 pcId);
extern void FUN_001f6e80(void);







extern u8* func_00209d00(void);
extern void func_0021a670(u32, u32);
extern void func_0021a760(u16);
extern u32 func_0020c500_y2(float, void*);
extern void func_0020c400_y2(u32, void*, const float*, float*);
extern void func_004bdde0(float, float*, const float*, u32);
extern void func_001f6630(void);
extern void func_001f7210(void);
extern void func_0034ff90(u32, const u8*);
extern void func_0034ff70(u32, float);
extern void func_0034fdf0(u32, const float*);
extern void func_0034fe30(float, u32, float, float);
extern void func_0034fd30(u32);
extern void func_0034fd70(u32, u32);
extern void datSetFlag(s32, u8);
extern u32 func_001761b0(DatPersonaWork*);
extern void func_00175ce0(DatPersonaWork*, u8*);
extern void func_00176100(DatPersonaWork*, u8*);
extern void func_001fb4b0(void*, s32, s32, s32, s32*, s32*);
extern u32 func_001fba70(u16);
extern void func_00176840(DatPersonaWork*, u16);
extern void func_001768e0(DatPersonaWork*, u16);
extern u8* iGpffffb740;

extern u8* iGpffffb730;
void func_001fa0d0(void);
void func_001fa450(void);
void func_001fa4f0(u32 param_1);
u32 func_001faea0(void);
void func_001fb130(u64 param_1,u64 param_2);
void func_001fb1b0(u64 param_1,u64 param_2);
void func_001fb1f0(DatPersonaWork* persona, u16* output, s32* outputCount);
void func_001fb3f0(int param_1,int param_2,int param_3,int *param_4,int *param_5);
u16 func_001fb560(u32 param_1);
u32 func_001fba70(u16 param_1);
int func_001fbca0(u16 param_1);
u8 * func_001fbd50(u16 param_1,int param_2);
int func_001fbdf0(s32 start, s32 end, s32 amount, s32 category, s32 scaleMode);
int func_001fbfa0(int param_1,int param_2,int param_3,short param_4,int param_5,long param_6);
void func_001fc1f0(void);
u8 func_001fc230(DatPersonaWork* persona);
u32 func_001fc3c0(DatPersonaWork* persona);
u32 func_001fc590(u8* event, void* target);
u32 func_001fc720(u8* persona);
int func_001fc870(u8* event, void* target);
void func_001fc980(u8* event, u16* result, s32* count);
void func_001fcb30(u8* event, u32* result, s32* count);
void func_001fccc0(u8* src, u8* dst, u32 skill);
void func_001fce20(u8* persona, u16* skills, s32 count);
void func_001fd350(u8* persona, u32* skills, s32 count);
extern s16 FUN_001706c0(s16 pcId, s16 index);
extern u8* pbGpffffb758;
extern u16* puGpffffb74c;
extern u16* puGpffffb730;
extern u16* puGpffffb750;
extern u16* psGpffffb754;
extern char gp0xffff9700[];
extern char gp0xffff9708[];
extern char gp0xffff9710[];
extern u8* DAT_007ce420;
extern u8* DAT_007ce428;
extern u8* DAT_007ce430;

extern u8* iGpffffb738;
extern int iGpffffb75c;
extern int iGpffffb760;
#pragma alias sflResultMsgC28_abs DAT_00684c28
#pragma alias sflResultMsgC40_abs DAT_00684c40
#pragma alias sflResultMsgC60_abs DAT_00684c60
#pragma alias sflResultMsgC70_abs DAT_00684c70
#pragma alias sflResultMsgC80_abs DAT_00684c80
#pragma alias sflResultMsgC90_abs DAT_00684c90
#pragma alias sflResultMsgCA0_abs DAT_00684ca0
#pragma alias sflResultMsgCD0_abs DAT_00684cd0
#pragma alias sflResultMsgCE0_abs DAT_00684ce0
#pragma alias sflResultMsgCF8_abs DAT_00684cf8
#pragma alias sflResultMsgD08_abs DAT_00684d08
#pragma alias sflResultMsgD20_abs DAT_00684d20
#pragma alias sflResultMsgD30_abs DAT_00684d30
#pragma alias sflResultMsgD40_abs DAT_00684d40
extern const char sflResultMsgC28_abs[];
extern const char sflResultMsgC40_abs[];
extern const char sflResultMsgC60_abs[];
extern const char sflResultMsgC70_abs[];
extern const char sflResultMsgC80_abs[];
extern const char sflResultMsgC90_abs[];
extern const char sflResultMsgCA0_abs[];
extern const char sflResultMsgCD0_abs[];
extern const char sflResultMsgCE0_abs[];
extern const char sflResultMsgCF8_abs[];
extern const char sflResultMsgD08_abs[];
extern const char sflResultMsgD20_abs[];
extern const char sflResultMsgD30_abs[];
extern const char sflResultMsgD40_abs[];
#pragma alias sflResultAssertBA8_abs DAT_00684ba8
extern const char sflResultAssertBA8_abs[];
extern int iGpffffb764;
extern int iGpffffb768;
extern int iGpffffb76c;
extern int iGpffffb770;
extern int iGpffffb774;
extern int iGpffffb778;
extern u8* iGpffffb7ac;
extern u8* iGpffffb7b8;
extern f32 fGpffff8070;
extern f32 fGpffff83b0;
extern f32 fGpffff83b4;
extern u8* pcGpffffb75c;
extern u8* pcGpffffb760;
extern u8* pcGpffffb764;
extern u8* pcGpffffb768;
extern u8* pcGpffffb76c;
extern u8* pcGpffffb770;
extern u8* pcGpffffb774;
extern u8* pcGpffffb778;
extern u8 DAT_00684d70[];
#pragma alias DAT_00684d60 DAT_00684d70
extern u8 DAT_00684d60[];
#pragma alias FUN_00182c50_typed FUN_00182c50
extern void FUN_00182c50_typed(s16 skill, u8* dst);
extern void FUN_001831e0_typed(s16 slot, u32 index, u8* dst);

#pragma alias FUN_0016da50_typed FUN_0016da50
extern void FUN_0016da50_typed(s16 slot, s16 type, s16 index);


/* W389 measured sflResult001f9170 opt_lifetimes on: nd 471 -> 465; object 1212/1216 -> 1212/1216. */

/* Removing this loses FUN_001f9680 (MATCH nd0 -> MISMATCH nd57) - measured W161. */



// FUN_001f9d70
void sflResult001f9d70(u16 index)
{
    switch (index) {
    case 2: datSetFlag(0x1211, 1); break;
    case 3: datSetFlag(0x1212, 1); break;
    case 4: datSetFlag(0x1213, 1); break;
    case 5: datSetFlag(0x1214, 1); break;
    case 7: datSetFlag(0x1216, 1); break;
    case 8: datSetFlag(0x1217, 1); break;
    case 9: datSetFlag(0x1218, 1); break;
    case 10: datSetFlag(0x1219, 1); break;
    default: K_ASSERT(false, 0x49); break;
    }
}

/* W389 measured sflResult001f9e90 opt_propagation off: nd 318 -> 317; object 572/576 -> 572/576. */
#pragma push
#pragma opt_propagation off
// FUN_001f9e90
asm void sflResult001f9e90(u16 owner, s32 exp)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x06210006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x2405005e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3250ffff
  .word 0x3c040068
  .word 0x24844bb8
  .word 0x0200282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2e01000b
  .word 0x10200008
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637110
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x2405006f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x305300ff
  .word 0x0240202d
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040a02d
  .word 0x16800006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x24050075
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0220282d
  .word 0x0c05d92c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05d86c
  .word 0x00000000
  .word 0x10400047
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50060
  .word 0x0c05d738
  .word 0x00000000
  .word 0x96820002
  .word 0x2443ff40
  .word 0x2402026e
  .word 0x00621818
  .word 0x8f82b740
  .word 0x00438821
  .word 0x92860004
  .word 0x93a70060
  .word 0x26240004
  .word 0x24050020
  .word 0x27a8008c
  .word 0x27a90088
  .word 0x0c07ed2c
  .word 0x00000000
  .word 0x8fa2008c
  .word 0x00021080
  .word 0x02221021
  .word 0x24510004
  .word 0x0280202d
  .word 0x27a50060
  .word 0x0c05d840
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000020
  .word 0x00000000
  .word 0x82230001
  .word 0x24020002
  .word 0x10620011
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x96250002
  .word 0x3c040068
  .word 0x24844bc8
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0280202d
  .word 0x96250002
  .word 0x0c05da10
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x96250002
  .word 0x3c040068
  .word 0x24844be0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x0280202d
  .word 0x96250002
  .word 0x0c05da38
  .word 0x00000000
  .word 0x26520001
  .word 0x26310004
  .word 0x8fa20088
  .word 0x0242102a
  .word 0x1440ffde
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844bf8
  .word 0x0200282d
  .word 0x0260302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_propagation reset
#pragma pop
#define FUN_00182c50 FUN_00182c50_typed
#define FUN_001831e0 FUN_001831e0_typed
#define FUN_0016da50 FUN_0016da50_typed
// FUN_001FA0D0


void func_001fa0d0(void)
{
    u32 uVar3;
    u8* pcVar2;
    u8 auStack_20[32];

    for (uVar3 = 0; (int)uVar3 < 0xb; uVar3 = uVar3 + 1) {
        switch (uVar3) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 9:
        case 10:
            switch (uVar3 & 0xffff) {
            case 2:
                pcVar2 = pcGpffffb75c;
                break;
            case 3:
                pcVar2 = pcGpffffb760;
                break;
            case 4:
                pcVar2 = pcGpffffb764;
                break;
            case 5:
                pcVar2 = pcGpffffb768;
                break;
            case 7:
                pcVar2 = pcGpffffb76c;
                break;
            case 8:
                pcVar2 = pcGpffffb770;
                break;
            case 9:
                pcVar2 = pcGpffffb774;
                break;
            case 10:
                pcVar2 = pcGpffffb778;
                break;
            default:
                FUN_0019d3f0(sflResultAssertBA8_abs, 0x35);
                pcVar2 = (u8*)0;
                break;
            }
            if (*pcVar2 != '\0') {
                FUN_0019d3f0(sflResultAssertBA8_abs, 200);
            }
            if (*(u16*)(pcVar2 + 2) != 0) {
                FUN_00182c50((s16)*(u16*)(pcVar2 + 2), auStack_20);
                FUN_001831e0((s16)uVar3, 0, auStack_20);
                FUN_0016da50((s16)uVar3, 0, 0);
            }
            if (*(u16*)(pcVar2 + 4) != 0) {
                FUN_00182c50((s16)*(u16*)(pcVar2 + 4), auStack_20);
                FUN_001831e0((s16)uVar3, 1, auStack_20);
                FUN_0016da50((s16)uVar3, 1, 1);
            }
            if (*(u16*)(pcVar2 + 6) != 0) {
                FUN_00182c50((s16)*(u16*)(pcVar2 + 6), auStack_20);
                FUN_001831e0((s16)uVar3, 2, auStack_20);
                FUN_0016da50((s16)uVar3, 2, 2);
            }
            if (*(u16*)(pcVar2 + 8) != 0) {
                FUN_00182c50((s16)*(u16*)(pcVar2 + 8), auStack_20);
                FUN_001831e0((s16)uVar3, 3, auStack_20);
                FUN_0016da50((s16)uVar3, 3, 3);
            }
            break;
        case 6:
            FUN_00182c50(0xfe, auStack_20);
            FUN_001831e0((s16)uVar3, 0, auStack_20);
            FUN_0016da50((s16)uVar3, 0, 0);
            FUN_00182c50(0x43f, auStack_20);
            FUN_001831e0((s16)uVar3, 1, auStack_20);
            FUN_0016da50((s16)uVar3, 1, 1);
            FUN_00182c50(0x821, auStack_20);
            FUN_001831e0((s16)uVar3, 2, auStack_20);
            FUN_0016da50((s16)uVar3, 2, 2);
            FUN_00182c50(0xc47, auStack_20);
            FUN_001831e0((s16)uVar3, 3, auStack_20);
            FUN_0016da50((s16)uVar3, 3, 3);
        }
    }
}
#undef FUN_00182c50
#undef FUN_001831e0
#undef FUN_0016da50


// FUN_001fa450
void func_001fa450(void)



{

  int lVar1;

  

  lVar1 = FUN_0017d800();

  if (lVar1 == 0) {

    FUN_005225a8("brfUpdateFriendEquip\n");

    func_001fa4f0(2);

    func_001fa4f0(3);

    func_001fa4f0(4);

    func_001fa4f0(5);

    func_001fa4f0(7);

    func_001fa4f0(8);

    func_001fa4f0(9);

    func_001fa4f0(10);

  }

  return;

}
// FUN_001FA4F0


asm void func_001fa4f0(u32 param_1)
{
  .set noreorder
  .word 0x27bdfec0
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
  .word 0x0080b02d
  .word 0x32d1ffff
  .word 0x2e21000b
  .word 0x10200008
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246371d0
  .word 0x00111080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x24050136
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0016843c
  .word 0x0010843f
  .word 0x0200202d
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0xafa20100
  .word 0x0220202d
  .word 0x0c05df44
  .word 0x00000000
  .word 0x0040982d
  .word 0x8fa30100
  .word 0x0263082a
  .word 0x10200234
  .word 0x00000000
  .word 0x2e21000b
  .word 0x10200020
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246371a0
  .word 0x00111080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8f92b75c
  .word 0x1000001c
  .word 0x00000000
  .word 0x8f92b760
  .word 0x10000019
  .word 0x00000000
  .word 0x8f92b764
  .word 0x10000016
  .word 0x00000000
  .word 0x8f92b768
  .word 0x10000013
  .word 0x00000000
  .word 0x8f92b76c
  .word 0x10000010
  .word 0x00000000
  .word 0x8f92b770
  .word 0x1000000d
  .word 0x00000000
  .word 0x8f92b774
  .word 0x1000000a
  .word 0x00000000
  .word 0x8f92b778
  .word 0x10000007
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x24050035
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000902d
  .word 0x8fa20100
  .word 0x00533023
  .word 0x0240202d
  .word 0x0260282d
  .word 0x27a7013c
  .word 0x27a80138
  .word 0x0c07ecfc
  .word 0x00000000
  .word 0x8fa3013c
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x0242a821
  .word 0x0000982d
  .word 0x0000902d
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x2402ffff
  .word 0x10a2000c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3057ffff
  .word 0x0017243c
  .word 0x0004243f
  .word 0x0c05c358
  .word 0x00000000
  .word 0x94420020
  .word 0xafa200d0
  .word 0x36730001
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x2402ffff
  .word 0x10a2000c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x305effff
  .word 0x001e243c
  .word 0x0004243f
  .word 0x0c05c368
  .word 0x00000000
  .word 0x94420016
  .word 0xafa200c0
  .word 0x36730002
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x2402ffff
  .word 0x10a2000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0xa7a200f0
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0040202d
  .word 0x0c05c37c
  .word 0x00000000
  .word 0x94420016
  .word 0xafa200b0
  .word 0x36730004
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x2402ffff
  .word 0x10a2000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0xa7a200e0
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0040202d
  .word 0x0c05c390
  .word 0x00000000
  .word 0x94420014
  .word 0xafa200a0
  .word 0x36730008
  .word 0x0260a02d
  .word 0xafa00110
  .word 0x10000069
  .word 0x00000000
  .word 0x96a20002
  .word 0x18400016
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c358
  .word 0x00000000
  .word 0x94430020
  .word 0x32820001
  .word 0x1040000a
  .word 0x00000000
  .word 0x8fa200d0
  .word 0x0043082a
  .word 0x1020000a
  .word 0x00000000
  .word 0x96b70002
  .word 0xafa300d0
  .word 0x36520001
  .word 0x10000005
  .word 0x00000000
  .word 0x96b70002
  .word 0xafa300d0
  .word 0x36940001
  .word 0x36520001
  .word 0x96a20004
  .word 0x18400016
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c368
  .word 0x00000000
  .word 0x94430016
  .word 0x32820002
  .word 0x1040000a
  .word 0x00000000
  .word 0x8fa200c0
  .word 0x0043082a
  .word 0x1020000a
  .word 0x00000000
  .word 0x96be0004
  .word 0xafa300c0
  .word 0x36520002
  .word 0x10000005
  .word 0x00000000
  .word 0x96be0004
  .word 0xafa300c0
  .word 0x36940002
  .word 0x36520002
  .word 0x96a20006
  .word 0x18400018
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c37c
  .word 0x00000000
  .word 0x94430016
  .word 0x32820004
  .word 0x1040000b
  .word 0x00000000
  .word 0x8fa200b0
  .word 0x0043082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x96a20006
  .word 0xa7a200f0
  .word 0xafa300b0
  .word 0x36520004
  .word 0x10000006
  .word 0x00000000
  .word 0x96a20006
  .word 0xa7a200f0
  .word 0xafa300b0
  .word 0x36940004
  .word 0x36520004
  .word 0x96a20008
  .word 0x18400018
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c390
  .word 0x00000000
  .word 0x94430014
  .word 0x32820008
  .word 0x1040000b
  .word 0x00000000
  .word 0x8fa200a0
  .word 0x0043082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x96a20008
  .word 0xa7a200e0
  .word 0xafa300a0
  .word 0x36520008
  .word 0x10000006
  .word 0x00000000
  .word 0x96a20008
  .word 0xa7a200e0
  .word 0xafa300a0
  .word 0x36940008
  .word 0x36520008
  .word 0x8fa20110
  .word 0x24420001
  .word 0xafa20110
  .word 0x26b5000a
  .word 0x8fa30138
  .word 0x8fa20110
  .word 0x0043102a
  .word 0x1440ff94
  .word 0x00000000
  .word 0x32420001
  .word 0x1040004a
  .word 0x00000000
  .word 0x0017243c
  .word 0x0004243f
  .word 0x27a50120
  .word 0x0c060b14
  .word 0x00000000
  .word 0x32620001
  .word 0x1040001e
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c05df28
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0000282d
  .word 0x0280302d
  .word 0x0c05dee4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c05df14
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x10620006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x240501df
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0010ac3c
  .word 0x0015ac3f
  .word 0x10000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820004
  .word 0x1440fff6
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x32420002
  .word 0x1040004a
  .word 0x00000000
  .word 0x001e243c
  .word 0x0004243f
  .word 0x27a50120
  .word 0x0c060b14
  .word 0x00000000
  .word 0x32620002
  .word 0x1040001e
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c05df28
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24050001
  .word 0x0280302d
  .word 0x0c05dee4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c05df14
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x10620006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x240501f7
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0010ac3c
  .word 0x0015ac3f
  .word 0x10000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820004
  .word 0x1440fff6
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x32420004
  .word 0x1040004a
  .word 0x00000000
  .word 0x87a200f0
  .word 0x0040202d
  .word 0x27a50120
  .word 0x0c060b14
  .word 0x00000000
  .word 0x32620004
  .word 0x1040001e
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c05df28
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24050002
  .word 0x0280302d
  .word 0x0c05dee4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c05df14
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x10620006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x24050210
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a02d
  .word 0x0010ac3c
  .word 0x0015ac3f
  .word 0x10000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820004
  .word 0x1440fff6
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x32420008
  .word 0x1040004a
  .word 0x00000000
  .word 0x87a200e0
  .word 0x0040202d
  .word 0x27a50120
  .word 0x0c060b14
  .word 0x00000000
  .word 0x32620008
  .word 0x1040001e
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00029c3c
  .word 0x00139c3f
  .word 0x0220202d
  .word 0x24050003
  .word 0x0c05df28
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x02c0202d
  .word 0x24050003
  .word 0x0260302d
  .word 0x0c05dee4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0260282d
  .word 0x0c05df14
  .word 0x00000000
  .word 0x00132c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x10620006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x24050229
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000982d
  .word 0x0010a43c
  .word 0x0014a43f
  .word 0x10000009
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440fff6
  .word 0x00000000
  .word 0x00132c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x27a60120
  .word 0x0c060c78
  .word 0x00000000
  .word 0x12400004
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0c07e75c
  .word 0x00000000
  .word 0x0220202d
  .word 0x8fa50100
  .word 0x0c05df38
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
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
/* W389 measured func_001faea0 opt_common_subs off: nd 325 -> 303; object 652/656 -> 656/656. */
#pragma push
#pragma opt_common_subs off
// FUN_001FAEA0


asm u32 func_001faea0(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000202d
  .word 0x0c0d7b48
  .word 0x00000000
  .word 0x3051ffff
  .word 0x0220202d
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x1200000e
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000008
  .word 0x00000000
  .word 0x3245ffff
  .word 0x0200202d
  .word 0x0c05cec0
  .word 0x00000000
  .word 0x025d1821
  .word 0xa0620048
  .word 0x26520001
  .word 0x2a420005
  .word 0x1440fff7
  .word 0x00000000
  .word 0x3222ffff
  .word 0x2c410009
  .word 0x10200061
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637200
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040005b
  .word 0x00000000
  .word 0x96030002
  .word 0x240200c3
  .word 0x14620057
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d388
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05d44c
  .word 0x00000000
  .word 0x96040002
  .word 0x0c05d2d0
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x96030002
  .word 0x240200c0
  .word 0x14620048
  .word 0x00000000
  .word 0x0220202d
  .word 0x240500c1
  .word 0x0c07ec4c
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x96030002
  .word 0x240200c2
  .word 0x1462003e
  .word 0x00000000
  .word 0x0220202d
  .word 0x240500c3
  .word 0x0c07ec4c
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x96030002
  .word 0x240200c4
  .word 0x14620034
  .word 0x00000000
  .word 0x0220202d
  .word 0x240500c5
  .word 0x0c07ec4c
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x96030002
  .word 0x240200c6
  .word 0x1462002a
  .word 0x00000000
  .word 0x0220202d
  .word 0x240500c7
  .word 0x0c07ec4c
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x96030002
  .word 0x240200c8
  .word 0x14620020
  .word 0x00000000
  .word 0x0220202d
  .word 0x240500c9
  .word 0x0c07ec4c
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x96030002
  .word 0x240200ca
  .word 0x14620016
  .word 0x00000000
  .word 0x0220202d
  .word 0x240500cb
  .word 0x0c07ec4c
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x96030002
  .word 0x240200cc
  .word 0x1462000c
  .word 0x00000000
  .word 0x0220202d
  .word 0x240500cd
  .word 0x0c07ec4c
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844ba8
  .word 0x240502ca
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400010
  .word 0x00000000
  .word 0x1200000e
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000008
  .word 0x00000000
  .word 0x3205ffff
  .word 0x021d1021
  .word 0x90460048
  .word 0x0220202d
  .word 0x0c05ced8
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020005
  .word 0x1440fff7
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_common_subs reset
#pragma pop


// FUN_001fb130
void func_001fb130(u64 param_1,u64 param_2)



{

  u16 uVar1;

  u32 uVar2;

  int iVar3;

  

  iVar3 = FUN_00174800();

  uVar1 = *(u8 *)(iVar3 + 4);

  FUN_00175820(param_1,param_2);

  uVar2 = FUN_00174800(param_1);

  uVar2 = func_00176210(uVar2,uVar1);

  FUN_001f9e90(param_1,uVar2);

  return;

}
// FUN_001FB1B0


void func_001fb1b0(u64 param_1,u64 param_2)



{

  int iVar1;

  

  iVar1 = FUN_00174800();

  FUN_001770d0(*(u16 *)(iVar1 + 2),param_2);

  return;

}




// W389 residual nd2: the sole differing instruction is commutative mul.s operand order (retail f0*f1 vs. ours f1*f0); this is a documented compiler floor.
/* W389 measured func_001fbfa0 opt_dead_assignments off: nd 260 -> 219; object 580/592 -> 584/592. */





#include "Main/Battle/Result/br_panel.h"
#include "Main/Battle/Result/br_res.h"
#include "Main/Social/sfl_script.h"
#include "h_fade.h"
#include "rw/rwcore.h"
#include "rw/rprandom.h"
#pragma alias sflResGetTutorialFileUnchecked FUN_0020ea00
extern void* sflResGetTutorialFileUnchecked();


/*
 * Battle-result tasks deliberately use byte offsets.  The retail work areas
 * are private to the result system and are shared by several child tasks;
 * keeping the offsets here avoids inventing public layouts for those areas.
 */
#define BR_U32(p, o) (*(u32 *)((u8 *)(p) + (o)))
#define BR_S32(p, o) (*(s32 *)((u8 *)(p) + (o)))
#define BR_U16(p, o) (*(u16 *)((u8 *)(p) + (o)))
#define BR_S16(p, o) (*(s16 *)((u8 *)(p) + (o)))
#define BR_U8(p, o)  (*(u8 *)((u8 *)(p) + (o)))
#define BR_TASK_WORK(t) ((u8 *)((t)->workData))
#define BR_ROOT_TASK_WORK(t) BR_TASK_WORK(t)
#define BR_SET_STATE(p, s) (BR_U32((p), 0x0c) = (u32)(s))
#define BR_ALLOC2(n, f) (*(void *(**)(u32, u32))jtbl_00960178_abs)((n), (f))
#define BR_FREE(p) (*(void (**)(void *))jtbl_0096017C)((p))

static u8 *sBrRoot;       /* GP-relative -0x4a18 */
static u8 *sBrCard;       /* GP-relative -0x4a14 */
static u8 *sBrReward;     /* GP-relative -0x4a10 */

extern u32 jtbl_00960178[];
#pragma alias jtbl_00960178_abs jtbl_00960178
extern u8 jtbl_00960178_abs[];
extern u32 jtbl_0096017C[];

/* Result-resource and data helpers not yet described by public headers. */
extern s32 printf(const char *, ...);
extern const char D_006845c0[];
extern const char D_006845d0[];
extern const char D_006845f0[];
 
extern void func_002350f0(void);
extern void func_00278550(void);
extern void func_00275cb0(void);
extern void func_003c77a0(void);
extern void brPersonaShutdown(void);
extern void brPersonaDestroy(void);
extern void brHero00262730(void);
extern void brHero002630e0(void);
extern void func_00234960(void);
extern void func_00233e70(void);
extern void func_00272380(void);
extern void func_00275a80(void);
extern void func_00276920(void);
extern void func_00276d30(void);
extern void func_002362e0(void);
extern void func_00262790(void);
extern void func_00275a90(void);
extern void func_0010a370(s32, const char *);
extern void func_00171390(u32);
extern void func_00174e20(u16);
extern u32 dat00171360(u16);
extern s32 func_0016d280(s32);
extern u32 func_0016f380(u32);
extern void func_0016f3e0(u32, u32);
extern u32 func_00173220(u16);
extern u32 func_00174b40(u16);
extern u32 func_001756f0(void);
extern u32 func_00175410(void);
extern u32 func_00175ce0_y2(DatPersonaWork *, u16 *);
extern u32 func_001761b0_y2(DatPersonaWork *);
extern u32 func_00176100_y2(DatPersonaWork *, u16 *);
extern u32 func_001fbdf0_y2(u32, u32, u32, u32, u32);
extern u32 func_001fbfa0_y2(u32, u32, u32, u32, u32, u32);
extern u32 func_001f9e90(u16, u32);
extern void func_001fb4b0_y2(void *, s32, s32, s32, s32 *, s32 *);
extern u8 *DAT_007ce430_y2;
extern u32 func_001f9680(s32 *);
extern void func_001f9c60(void);
extern u32 func_001f9a80(void);
extern void func_001f98d0(void);
extern void sflResult001f9770_y2(u16 *, s32 *);
extern void sflResult001f9800_y2(u16 *, s32 *);
extern u32 sflResult001f9890_y2(void);
extern void sflResult001f9630_y2(void);
extern void *func_001ef500(void *);

extern void func_00219c90(void *);
extern void func_00239170(void *);
extern void func_0023d7a0(void *);
extern void func_0023d7f0(void);
extern void func_0024da00(void *);
extern void sflCamera0024d110(void *);
extern void func_002534d0(void *);
extern void sflScript00259610(void *);
extern void sflCursor0025a110(void *);
extern void func_00260970(void *);
extern void sflCount0025b4a0(void *);
extern void sflPersonaInit(void *);
extern u32 sflGround0023c350(void);
extern void func_00219d90(void);
extern void func_00215fc0(void);
extern u32 func_00254f20(void);
extern u32 func_00254f70(void);
extern void func_003c72d0(void *);
extern void func_0023d130(void);
extern void func_0023ee50(void);
extern void sflCard00259250(void);
extern u32 sflGround0023d1f0(void);
extern u32 sflCard002592c0(void);
extern u32 sflCard002582b0(void);
extern void sflScript00259640(void);
extern u32 func_00259740(void);
extern u32 sflScript002596f0(void);
extern u32 sflCard00258af0(void);
extern u32 sflCount0025b640(void);
extern void sflCount0025b5f0(void);
extern void sflCursor0025aa70(void);
extern void sflCard00258490(void);
extern u8 *func_00256030(void);
extern void sflCard00258090(void);
extern void sflCard002580e0(void);
extern void func_0023f1d0(void);
extern void func_0023cda0(void);
extern void func_003c74e0(void);
extern u32 sflPanel0023f390(void);
extern u32 sflGround0023d0e0(void);
extern void func_00255fe0(void);
extern void func_002550b0(void);
extern void func_00258300(void);
extern u32 func_003c7610(void);
extern void func_003c7990(s32);
extern u32 func_003c7850(void);
extern u32 func_003c7650(s32);
extern u32 func_003c78d0(void);
extern void func_002594c0(void);
extern u32 sflCard002595c0(void);
extern void func_003c94e0(void *);
extern void func_003c9790(s32);
extern void func_0025b690(void);
extern void func_0025a130(void);
extern void func_0023d8f0(void);
extern void func_0024db90(void);
extern void func_0024dc10(void);
extern void sflCamera0024d1c0(void);
extern void func_00253a40(void);
extern void func_002392d0(void);
extern void sflPersonaUpdate(void);

extern void func_0023b990(void);
extern void func_00254b90(void);
extern void func_0025bbf0(void);
extern void func_0025a440(void);
extern void func_001f64c0(void);
extern void func_002168f0(void);
extern void func_0023e970(void);
extern void sflPersonaShutdown(void *);
extern void sflCount0025b4b0(void);
extern void func_00215aa0(void);
extern void sflPsel00260a10(void);
extern void func_0025a120(void);
extern void func_00259630(void);
extern void sflCard00253560(void);
extern void sflCamera0024d160(void);
extern void func_0024da20(void);
extern void sflPanel0023d870(void);
extern void func_0023d7b0(void);
extern void sflGround00239280(void);
extern void func_0021a1b0(void);

extern void func_004c9d70(void *, float);
extern void func_0021a840(void);
extern void func_0024fd10(void *);
extern void func_0024f9f0(void *, const float *);
extern void func_0024da60(void *);
extern void func_0024f090(void *);
extern void func_0024d8d0(void *);
extern void sflCamera0024d2e0(s32, void *);
extern void sflCamera0024d940(void *, void *);
extern void sflCamera0024d9a0(void *, void *);
extern void sflCamera0024d280(void *);
extern void func_0024d4c0(s32);
extern void func_0023c280(void);
extern u8 *func_00209e10(void);
extern u8 *func_00209e20(void);
extern u8 *func_00209e60(void);
extern u8 *func_00209e70(void);
extern u8 *func_00209dc0(void);
extern u8 *func_00209dd0(void);
extern u8 *func_00209d00_y2(void);
extern u8 *func_00209c40(void);
extern u8 *func_00209c80(void);
extern u8 *func_00209cc0(void);
extern u8 *func_00209d40(u8 *);
extern char *func_00209e80(void);
extern char *func_00209e90(void);
extern u32 func_00255130(void);
extern void func_00254e10(void);
extern void *sflCard002537f0(u16);
extern u32 sflCard002536b0(u32, u32);
extern void sflCard00255170(void *);
extern void sflCard00255190(void *);
extern void func_002551b0(void *);
extern void sflCard00253920(void);
extern void sflScript00259690(void *, u32);
extern void sflScript00259b00(u16);
extern void sflScript00259b60(u16);
extern void sflScript00259c10(void);
extern void sflScript00259bc0(void);
extern void sflScript00259c60(u16);
extern void sflScript00259cc0(void);
extern void sflScriptQueueEndCommand(void);
extern void sflScriptQueueWaitCommand(u16 frames);
extern void sflScriptQueueOpenCommand(u16 card);
extern void sflScriptQueueWaitForActionsCommand(void);
extern void sflScriptQueueStartActionsCommand(void);
extern void sflScriptQueueSetCardValueCommand(u16 value);
extern void sflScriptQueueShuffleCommand(void);
extern void func_002595c0(void);
extern void func_002508c0(void *, const float *, s32);
extern void func_0020b250(void *);
extern void func_00209f00(void *);
extern void func_0020c590(void *, u16);
extern void func_0020a800(void *);
extern void func_0020c5f0(void *, u32, u32);
extern void func_0024fd80(void *);
extern f32 func_0020c500(void *, f32);
extern void func_0020c400(void *, const float *, float, float *);
extern void func_0020cc80(void *, const u8 *);
extern void gcPose0024f960(void *, const float *);
extern void sflResSetSpriteScale(void *, const f32 *);
extern void sflResSetSpriteRotation(void *, const f32 *);
extern void func_004bdde0_y2(f32, f32 *, const f32 *, u32);
extern void func_0020ac90(void *);
extern void *sflResGetBaseSpriteData(void);
extern u32 func_0035c250(u32);
extern u32 sflResult001f99f0(void);
extern u32 func_001831e0(s16, s16, const void *);
extern u32 scrForceTraceCode(void *);
extern void K_Fldrc_DestroyArchives(void);
extern void func_00217590(u16);
extern void func_00215b00(void);
extern void scrReleaseScript(void *);
extern void *scrStartScriptFirstPrcd(void *header);
extern void func_0021ab80(u16 id);
extern void func_0021a920(u32 majorId, u32 minorId);
extern char D_00684850[];
extern char D_00684620[];
extern char D_006846CE[];
extern char D_006846DE[];
extern char D_00684718[];
extern char D_00684730[];
extern char D_00684750[];
extern char D_00684770[];
extern char D_00684788[];
extern char D_006847A0[];
extern char D_006847D0[];
extern char D_006847E0[];
extern char D_006847F0[];
extern char D_00684800[];
extern char D_00684810[];
extern char D_00684820[];
extern char D_00684830[];
extern char D_00684840[];
extern char D_00696950[];
extern char D_00696948[];
extern char D_00696964[];
extern char D_00696960[];
extern char D_00696958[];
extern u32 func_00255130(void);
extern void func_00257f10(void);
extern void func_002599c0(u32, u32);
extern void func_00259a60(u32, s32);
extern void sflScript00259970(void);
extern f32 func_00530da0(f32);
extern u32 datGetScenarioMode(void);
extern void sflResRequestBaseArchive(void);
extern u32 func_001f9170(s32);
extern void func_00173660(DatPersonaWork *, s32);
extern u32 func_0021a120(void);
extern void func_00258300(void);
extern void func_002550b0(void);
extern void *func_0034fcd0(void *);
extern u16 datGetMaxHp_y2(s16);
extern void *sflResGetBaseDataFile(s32);
extern u16 func_00170760(s16, s16);
extern void func_00170860(s16, s16, u16);
extern void datSetMoney(u32);
extern void func_001828d0(s16, void *, void *);
#pragma alias func_001828d0_2arg func_001828d0
extern void func_001828d0_2arg(s16, void *);
extern void func_00182d90(s16, s16, u32, void *);
extern void func_00521250(void *, const void *, u32);
extern u32 func_003c7bc0(s32, u32);
extern u32 func_003c7c20(s32, u32, u32);
extern void func_003c7430(s32);
extern void func_0010a4e0(s32, s32, s32, s32);
extern const char *h_camp_getAcademicLevelString(s16);
extern const char *h_camp_getCharmLevelString(s16);
extern const char *h_camp_getCourageLevelString(s16);
extern void func_0021eac0(void *, float);
extern void func_0023f010(void);
extern void func_0023ca10(void);
extern void *kwlnGetMainCamera(void);
extern void func_00255f80(void);
extern void func_0025a7d0(void);
extern void func_0025b4f0(void);
extern void sflPanel0023f3e0(void);
extern void sflCard00259310(void);
extern u32 sflCard002561c0(void *);
extern u32 sflCard002561d0(void *);
extern u32 sflCard00259380(void);
extern void sflResult001f9100(void);
extern void sflResSetSpritePosition(void *, const float *);
extern void func_0034fcf0(void *);
extern u32 D_00684610[];
extern u32 func_001775a0(u32, ...);
extern u32 func_0016c6f0(u32);
extern u32 func_00177280(u32);
extern u32 func_0011a810(u32);
extern u32 func_0016c740(u32);
extern u32 func_001772f0(u32);
extern u32 func_0011a840(u32);
extern u32 func_0016c790(u32);
extern u32 func_00177360(u32);
extern u32 func_0011a870(u32);
extern u32 func_0016c4f0(u32);
extern u32 func_0016c5f0(u32);
extern u32 func_0016c570(u32);
extern u32 func_0016c970(u32);
extern u32 func_0016c920(u32);
extern void func_0016cf40(u32, u32);
extern void func_0016cf90(u32, u32);
extern void func_0016d8b0(u32, u32);
extern void func_0016d6b0(u32, u32);
extern u32 func_00488f30(void);
extern void sflResRequestTutorialArchive(void);
extern u32 func_0016f190(u32);
extern void func_0023f430(void);
extern u32 func_002561c0(void *);
extern u32 func_002561d0(void *);
extern void func_005225a8(const char *, s32, s32);
extern void func_00174800(u32);
extern void func_00174650(u32, u32, u32);
extern void func_0016cfe0(u32, u32);
extern void func_0016d090(u32, u32);
extern void func_0016d160(u32, u32);


void func_001f0990(KwlnTask *);
void func_001f0f40(KwlnTask *);
void func_001f0ff0(void);
u8 *brRoot001f1c50(void);
void func_001f1140(KwlnTask *);
void func_001f13b0(KwlnTask *);
void brRoot001f1e90(KwlnTask *);
void func_001f30d0(KwlnTask *);
void func_001f30f0(KwlnTask *);
void func_001f3270(KwlnTask *);
void func_001f4650(KwlnTask *, const u8 *);
void func_001f4750(KwlnTask *);
u32 func_001f4990(void);
void func_001f4a00(void);
void func_001f53a0(void);
void func_001f54a0(void);
void func_001f5510(void);
void func_001f55e0(void);
void func_001f5650(void);
void func_001f56b0(void);
u32 func_001f5760(u16);
u32 func_001f5810(KwlnTask *);
void func_001f58f0(u8 *);
void func_001f5950(void);
void func_001f59b0(void);
void *func_001f5b20(void);
void func_001f64c0(void);
u32 func_001f65e0(void);
void brRewardAdvanceState(void);
void brRewardAnimateCurrentEntry(void);
void brRewardRegisterEntry(const f32 *);
void func_001f7030(void);
void func_001f70d0(void);
void func_001f7170(void);
#pragma alias func_001f2300_update func_001f2300
extern void *func_001f2300_update(KwlnTask *);
#pragma alias func_001f2fd0_destroy func_001f2fd0
extern void func_001f2fd0_destroy(KwlnTask *);
void *func_001f2f50(KwlnTask *);
void *func_001f2f80(KwlnTask *);
void func_001f2fd0(KwlnTask *);
void func_001f2ff0(KwlnTask *);
u32 func_001f30b0(KwlnTask *);
void *func_001f2300(KwlnTask *);

static void brCopyWords(u8 *dst, const u8 *src, u32 count)
{
    u32 i;
    for (i = 0; i < count; i++) {
        dst[i] = src[i];
    }
}

static u32 brRootFlags(void)
{
    return sBrRoot != NULL ? BR_U32(sBrRoot, 0) : 0;
}

static u32 brCardFlags(void)
{
    return sBrCard != NULL ? BR_U32(sBrCard, 4) : 0;
}

static u32 brRewardFlags(void)
{
    return sBrReward != NULL ? BR_U32(sBrReward, 0) : 0;
}








typedef struct BrRootSetupParams {
    u32 flags;
    struct {
        u16 id;
        u16 pad;
        u32 value;
    } entries[3];
    u32 entryCount;
    u32 field20;
    u16 partyIds[4];
    u32 partyCount;
    u32 field30;
    u32 field34;
    u32 field38;
    u32 field3c;
    u32 field40;
} BrRootSetupParams;













/* Retail 0x1f13f0-0x1f1a64: level-up propagation, hero/party EXP, and
 * newly learned-skill collection. */










#pragma opt_propagation reset












/* Retail 0x1f3270-0x1f4648: reconstructed result-card selection and reward dispatch. */






















/* Retail reconstruction spans 0x001f6630-0x001f6a5c: reward reset, card setup, and two indexed animation passes. */

#pragma alias brRewardAdvanceState func_001f6a60

#pragma alias brRewardRegisterEntry func_001f6d20

#pragma alias brRewardAnimateCurrentEntry func_001f6e80
