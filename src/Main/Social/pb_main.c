#include "Main/Social/sfl_res.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kosaka/k_assert.h"
#include "Main/Battle/Data/datPersona.h"
#include "Main/g_data.h"
#include "Main/Social/sfl_psel.h"

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
extern u32 func_0020c500(float, void*);
extern void func_0020c400(u32, void*, const float*, float*);
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
#pragma alias FUN_005225a8_pb FUN_005225a8
extern void FUN_005225a8_pb(const char* format, ...);
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
#pragma alias pbResultMsgDD0_abs DAT_00684d70
extern const char pbResultMsgDD0_abs[];
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



/* Removing this loses FUN_001f9680 (MATCH nd0 -> MISMATCH nd57) - measured W161. */





#define FUN_00182c50 FUN_00182c50_typed
#define FUN_001831e0 FUN_001831e0_typed
#define FUN_0016da50 FUN_0016da50_typed
#undef FUN_00182c50
#undef FUN_001831e0
#undef FUN_0016da50




/* Removing this loses FUN_001fb4b0 (MATCH nd0 -> MISMATCH nd118) - measured W161. */




/* Removing this loses FUN_001fc230 (MATCH nd0 -> MISMATCH nd78) - measured W161. */

// Retail uses separate 12-entry effect/skill result arrays and passes their counts to the selected dispatcher.
// FUN_001FC720


u32 func_001fc720(u8* event)
{
    s32 in_v1;
    s32 in_s0;
    u32 result;
    u16 effectResults[12];
    u32 skillResults[12];
    s32 effectCount;
    s32 skillCount;

    if (in_v1 / 3 < in_v1)
        return 0;

    if ((~*(u16*)event & 4) == 0)
        FUN_0019d3f0((u32)DAT_00684d60, 0xaa);

    func_001fc980(event, effectResults, &effectCount);
    func_001fcb30(event, skillResults, &skillCount);
    if (in_s0 <= in_s0 * 30 / 100 && skillCount != 0)
    {
        func_001fd350(event, skillResults, skillCount);
        result = 1;
    }
    else if (effectCount != 0)
    {
        func_001fce20(event, effectResults, effectCount);
        result = 1;
    }
    else if (in_s0 >= in_s0 * 30 / 100 && skillCount != 0)
    {
        func_001fd350(event, skillResults, skillCount);
        result = 1;
    }
    else
    {
        result = 0;
    }

    return result;
}
// FUN_001FC870

int func_001fc870(u8* event, void* target)
{
    s32 raw;
    s32 delta;
    s32 level;
    s32 half;
    f32 amount;

    raw = FUN_0030bc50(target);
    amount = (f32)(u32)raw;

    level = FUN_00173300(*(u16*)(event + 2)) & 0xff;
    delta = *(u8*)((u8*)target + 6) - level;
    if (delta < -10)
        delta = -10;
    if (delta > 10)
        delta = 10;

    amount *= *(f32*)(DAT_00684d70 + (delta + 10) * 4);
    if (amount < 1.0f)
        amount = 1.0f;
    FUN_001f9e90(*(u16*)(event + 2), (s32)amount);
    return (s32)amount;
}
// FUN_001FC980


asm void func_001fc980(u8* event, u16* result, s32* count)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x94840002
  .word 0x0c05d200
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200202d
  .word 0x0c05ccdc
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0200202d
  .word 0x0c05da8c
  .word 0x00000000
  .word 0x0040b82d
  .word 0x0000882d
  .word 0x0000802d
  .word 0x1000003a
  .word 0x00000000
  .word 0x00101040
  .word 0x02c21021
  .word 0x94520000
  .word 0x0240202d
  .word 0x0c0c02bc
  .word 0x00000000
  .word 0x10400031
  .word 0x00000000
  .word 0x86a40002
  .word 0x0240282d
  .word 0x0c05ed98
  .word 0x00000000
  .word 0x1440002b
  .word 0x00000000
  .word 0x3243ffff
  .word 0x240200c2
  .word 0x10620009
  .word 0x00000000
  .word 0x240200c1
  .word 0x10620006
  .word 0x00000000
  .word 0x240200c0
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0000382d
  .word 0x27a8009c
  .word 0x27a90098
  .word 0x27aa0094
  .word 0x0c05ef84
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844dd0
  .word 0x8fa5009c
  .word 0x8fa60098
  .word 0x8fa70094
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8fa2009c
  .word 0x1840000b
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05eed0
  .word 0x00000000
  .word 0x3042ffff
  .word 0x14400005
  .word 0x00000000
  .word 0x00111040
  .word 0x02821021
  .word 0xa4520000
  .word 0x26310001
  .word 0x26100001
  .word 0x0217102a
  .word 0x1440ffc5
  .word 0x00000000
  .word 0xae710000
  .word 0x3c040068
  .word 0x24844df0
  .word 0x0220282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
// FUN_001FCB30
asm void func_001fcb30(u8* event, u32* result, s32* count)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x0000882d
  .word 0x0000902d
  .word 0x10000041
  .word 0x00000000
  .word 0x86a40002
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x0c05c1b0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10400037
  .word 0x00000000
  .word 0x86a40002
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x0c05c19c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05c3a4
  .word 0x00000000
  .word 0x0040b02d
  .word 0x94440008
  .word 0x0c05ed38
  .word 0x00000000
  .word 0x10400027
  .word 0x00000000
  .word 0x86a20002
  .word 0x0040202d
  .word 0x96c60008
  .word 0x0080282d
  .word 0x24070001
  .word 0x27a8008c
  .word 0x27a90088
  .word 0x27aa0084
  .word 0x0c05ef84
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844dd0
  .word 0x8fa5008c
  .word 0x8fa60088
  .word 0x8fa70084
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8fa2008c
  .word 0x18400013
  .word 0x00000000
  .word 0x24020fa2
  .word 0x12020006
  .word 0x00000000
  .word 0x24020fa1
  .word 0x12020003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x86a40002
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x0c05c19c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x00111080
  .word 0x02821021
  .word 0xac430000
  .word 0x26310001
  .word 0x26520001
  .word 0x2a42000c
  .word 0x1440ffbe
  .word 0x00000000
  .word 0xae710000
  .word 0x3c040068
  .word 0x24844e00
  .word 0x0220282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}


// FUN_001FCCC0
void func_001fccc0(u8* src, u8* dst, u32 skillId)
{
    u16 skill;
    u32 entry;
    s32 event_id;
    s32 i;
    s16 currentSkill;

    entry = FUN_00170e90((s16)skillId);
    skill = *(u16*)(entry + 8);
    if (FUN_0017b4e0(skill) == 0)
        FUN_0019d3f0((u32)(DAT_00684d60 - 0x10), 0x23a);

    FUN_0017b860(*(s16*)(dst + 2), *(s16*)(src + 2), skill, 1);
    for (i = 0; i < 0xc; i++) {
        event_id = *(s16*)(src + 2);
        currentSkill = FUN_001706c0(event_id, (s16)i);
        if (currentSkill != 0) {
            event_id = *(s16*)(src + 2);
            if (skillId == (FUN_00170670(event_id, (s16)i) & 0xffff))
                break;
        }
    }
    if (i >= 0xc)
        FUN_0019d3f0((u32)(DAT_00684d60 - 0x10), 0x249);
    event_id = *(s16*)(src + 2);
    currentSkill = FUN_001706c0(event_id, (s16)i);
    event_id = *(s16*)(src + 2);
    FUN_00170710(event_id, (s16)i, (s16)(currentSkill - 1));
}
// FUN_001FCE20


asm void func_001fce20(u8* param_1,u16 *param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff10
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
  .word 0x0080a82d
  .word 0x00a0b82d
  .word 0x00c0a02d
  .word 0x16800006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844d60
  .word 0x2405029b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020001
  .word 0x1682003e
  .word 0x00000000
  .word 0x96f10000
  .word 0x86a40002
  .word 0x0220282d
  .word 0x0c05ed98
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844d60
  .word 0x24050215
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x86a40002
  .word 0x0220282d
  .word 0x0c05ed6c
  .word 0x00000000
  .word 0x0040802d
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x0220302d
  .word 0x0000382d
  .word 0x0c05ee18
  .word 0x00000000
  .word 0x86a40002
  .word 0x0220282d
  .word 0x0c05ed40
  .word 0x00000000
  .word 0x3044ffff
  .word 0x24030002
  .word 0x10830012
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x86a40002
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00501023
  .word 0x86a40002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x86a40002
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00501023
  .word 0x86a40002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3e4
  .word 0x00000000
  .word 0x100000ea
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x305effff
  .word 0x02a0202d
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0000902d
  .word 0x0000882d
  .word 0x0000982d
  .word 0x10000014
  .word 0x00000000
  .word 0x00131040
  .word 0x02e21021
  .word 0x94560000
  .word 0x02c0202d
  .word 0x0c05f01c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x00111040
  .word 0x005d1021
  .word 0xa45600a0
  .word 0x26310001
  .word 0x10000005
  .word 0x00000000
  .word 0x00121040
  .word 0x005d1021
  .word 0xa45600b0
  .word 0x26520001
  .word 0x26730001
  .word 0x0274102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000014
  .word 0x00000000
  .word 0x00131040
  .word 0x005d1021
  .word 0x944600b0
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x0000382d
  .word 0x27a800ec
  .word 0x27a900e8
  .word 0x27aa00e4
  .word 0x0c05ef84
  .word 0x00000000
  .word 0x8fa200ec
  .word 0x03c21021
  .word 0x00501823
  .word 0x00131080
  .word 0x005d1021
  .word 0xac4300c0
  .word 0x26730001
  .word 0x0272102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x8fa400c0
  .word 0x0c147838
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0000a02d
  .word 0x24130001
  .word 0x10000011
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0x244200c0
  .word 0x8c570000
  .word 0x02e0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x0056082a
  .word 0x10200006
  .word 0x00000000
  .word 0x0260a02d
  .word 0x02e0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x0040b02d
  .word 0x26730001
  .word 0x0272102a
  .word 0x1440ffee
  .word 0x00000000
  .word 0x00141040
  .word 0x005d1021
  .word 0x244200b0
  .word 0x94520000
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0000382d
  .word 0x27a800ec
  .word 0x27a900e8
  .word 0x27aa00e4
  .word 0x0c05ef84
  .word 0x00000000
  .word 0x8fa200ec
  .word 0x005e2021
  .word 0xafa400ec
  .word 0x00101080
  .word 0x00501021
  .word 0x00021900
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x0044082a
  .word 0x1420003f
  .word 0x00000000
  .word 0x1220003d
  .word 0x00000000
  .word 0x86a40002
  .word 0x97a500a0
  .word 0x0c05ed98
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844d60
  .word 0x24050215
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x86a40002
  .word 0x97a500a0
  .word 0x0c05ed6c
  .word 0x00000000
  .word 0x0040802d
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x97a600a0
  .word 0x0000382d
  .word 0x0c05ee18
  .word 0x00000000
  .word 0x86a40002
  .word 0x97a500a0
  .word 0x0c05ed40
  .word 0x00000000
  .word 0x3044ffff
  .word 0x24030002
  .word 0x10830012
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000053
  .word 0x00000000
  .word 0x86a40002
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00501023
  .word 0x86a40002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x10000047
  .word 0x00000000
  .word 0x86a40002
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00501023
  .word 0x86a40002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3e4
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x86a40002
  .word 0x0240282d
  .word 0x0c05ed98
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844d60
  .word 0x24050215
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x86a40002
  .word 0x0240282d
  .word 0x0c05ed6c
  .word 0x00000000
  .word 0x0040802d
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x0240302d
  .word 0x0000382d
  .word 0x0c05ee18
  .word 0x00000000
  .word 0x86a40002
  .word 0x0240282d
  .word 0x0c05ed40
  .word 0x00000000
  .word 0x3044ffff
  .word 0x24030002
  .word 0x10830012
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x86a40002
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00501023
  .word 0x86a40002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x86a40002
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00501023
  .word 0x86a40002
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0c05b3e4
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
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
// FUN_001FD350


asm void func_001fd350(u8* param_1,u32 *param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfee0
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
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x16600006
  .word 0x00000000
  .word 0x3c040068
  .word 0x24844d60
  .word 0x240502fa
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020001
  .word 0x16620008
  .word 0x00000000
  .word 0x02a0202d
  .word 0x02a0282d
  .word 0x8e860000
  .word 0x0c07f330
  .word 0x00000000
  .word 0x1000008b
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c0bff5c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x7fa200a0
  .word 0x02a0202d
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3056ffff
  .word 0x0000882d
  .word 0x0000802d
  .word 0x0000902d
  .word 0x10000018
  .word 0x00000000
  .word 0x00121080
  .word 0x02821021
  .word 0x8c570000
  .word 0x0017243c
  .word 0x0004243f
  .word 0x0c05c3a4
  .word 0x00000000
  .word 0x94440008
  .word 0x0c05f01c
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0xac5700b0
  .word 0x26100001
  .word 0x10000005
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0xac5700d0
  .word 0x26310001
  .word 0x26520001
  .word 0x0253102a
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000017
  .word 0x00000000
  .word 0x00129880
  .word 0x02931021
  .word 0x84440000
  .word 0x0c05c3a4
  .word 0x00000000
  .word 0x94460008
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x24070001
  .word 0x27a8011c
  .word 0x27a90118
  .word 0x27aa0114
  .word 0x0c05ef84
  .word 0x00000000
  .word 0x8fa3011c
  .word 0x7ba200a0
  .word 0x00431021
  .word 0x00561823
  .word 0x027d1021
  .word 0xac4300f0
  .word 0x26520001
  .word 0x0251102a
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x8fa400f0
  .word 0x0c147838
  .word 0x00000000
  .word 0x0040b82d
  .word 0x0000982d
  .word 0x24120001
  .word 0x10000011
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x244200f0
  .word 0x8c5e0000
  .word 0x03c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x0057082a
  .word 0x10200006
  .word 0x00000000
  .word 0x0240982d
  .word 0x03c0202d
  .word 0x0c147838
  .word 0x00000000
  .word 0x0040b82d
  .word 0x26520001
  .word 0x0251102a
  .word 0x1440ffee
  .word 0x00000000
  .word 0x00138880
  .word 0x02911021
  .word 0x84440000
  .word 0x0c05c3a4
  .word 0x00000000
  .word 0x94460008
  .word 0x86a20002
  .word 0x0040202d
  .word 0x0080282d
  .word 0x24070001
  .word 0x27a8011c
  .word 0x27a90118
  .word 0x27aa0114
  .word 0x0c05ef84
  .word 0x00000000
  .word 0x8fa3011c
  .word 0x7ba200a0
  .word 0x00622021
  .word 0xafa4011c
  .word 0x00161080
  .word 0x00561021
  .word 0x00021900
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x0044082a
  .word 0x1420000a
  .word 0x00000000
  .word 0x12000008
  .word 0x00000000
  .word 0x02a0202d
  .word 0x02a0282d
  .word 0x8fa600b0
  .word 0x0c07f330
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x023d1021
  .word 0x02a0202d
  .word 0x02a0282d
  .word 0x8c4600d0
  .word 0x0c07f330
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
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
