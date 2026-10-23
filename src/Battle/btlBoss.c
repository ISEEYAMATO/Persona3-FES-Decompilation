#include "Battle/btlBoss.h"
#include "Battle/btlAction.h"
#include "Battle/btlUnit.h"
#include "Battle/btlVoice.h"
#include "Battle/btlCamera.h"
#include "Kosaka/k_assert.h"
#include "Battle/battle.h"
#include "h_cdvd.h"
#include "Script/scrScriptProcess.h"
#include "rw/rwcore.h"


/* Recovered battle-misc support prelude */
typedef int (*code)(); /* PC: unnamed varargs */
#pragma alias scrCreateTaskFromHeader_2 scrCreateTaskFromHeader
extern KwlnTask* scrCreateTaskFromHeader_2(u32 priority, ScrHeader* header);
extern void FUN_0035c1a0(KwlnTask* task, s32 value);
extern void* FUN_0035ae10(KwlnTask* task);
extern void FUN_003a4220(s32 handle, s32 arg_2, u32 value);
extern u32 FUN_001778b0(u32 value);
extern void FUN_00195550(KwlnTask* parent, KwlnTask* child);
u32 FUN_002fcaa0(int param_1,u32 *param_2);
u32 FUN_002fcf50(int param_1);
u32 FUN_002fd060(BtlAction* action);
u32 FUN_002fd160(BtlAction* action);
u32 FUN_002fd2e0(int param_1,u16 param_2);
u32 FUN_002fd4a0(void);
u8 FUN_002fd500(void);
void FUN_002fd520(int param_1);
u32 FUN_002fd660(void);
u32 FUN_002fd7c0(void);
void FUN_002fd820(void);
u32 FUN_00289860(BtlAction* action);
void FUN_002fd8a0(BtlAction* action);
u32 FUN_002fdb70(void);
u32 FUN_002fdb90(void);
s32 FUN_002fdbb0(BtlAction* param_1,BtlUnit* param_2);
u8 FUN_002fdcb0(int param_1);
u32 FUN_002fdcf0(int param_1,int param_2);
code FUN_002fded0(s16 param_1);
u8 FUN_002fdfa0(void);
u32 FUN_002fdfe0(int param_1);
void FUN_002fe0b0(float param_1,u8 *param_2,u64 param_3,u64 param_4,  u64 param_5);
void FUN_002fe780(float param_1,u8 *param_2,u8 *param_3,u64 param_4,u64 param_5);
u32 FUN_002fed10(int param_1);
u8 FUN_00301750(int datUnit, u32 flag);
u32 FUN_002d6370(s16 commandId);
u32 FUN_003088b0(u16 commandId);
s32 FUN_002d6290(void);
s32 FUN_002d63b0(BtlUnit* unit, s32 commandId, s32 param_3);
/* Single-precision. Left implicitly declared these promoted their float
   argument to double, emitting fptodp calls retail does not make. */
extern f32 FUN_0052e6d8(f32 x);
extern f32 FUN_0052e878(f32 x);
extern f32 sqrtf(f32 value);
/* Retail DATA table loads span 0x002fb8e4-0x002fc3ec; keep each table as a
   separate symbol so every lookup retains its retail HI/LO address pair. */
/* Retail keeps each animation-byte table as a distinct external DATA object. */
extern u8 DAT_00699BF0[];
extern u8 DAT_00699C20[];
extern u8 DAT_00699C3A[];
extern u8 DAT_00699C90[];
extern u8 DAT_00699CE0[];
extern u8 DAT_00699D30[];
extern u8 DAT_00699D4A[];
extern u8 DAT_00699D64[];
extern u8 DAT_00699DD0[];
extern u8 DAT_00699E20[];
extern u8 DAT_00699E3A[];
extern u8 DAT_0069A020[];
extern u8 DAT_0069A03A[];
extern u8 DAT_0069A080[];
extern u8 DAT_0069A09A[];
extern u8 DAT_0069A0B4[];
extern u8 DAT_0069A0CE[];
extern u8 DAT_0069A130[];
extern u8 DAT_0069A170[];
extern u8 DAT_0069A1B0[];
extern u8 DAT_0069A230[];
extern u8 DAT_0069A380[];
extern u8 DAT_0069A490[];
extern u8 DAT_0069A4D0[];
extern u8 DAT_0069A510[];
extern u8 DAT_0069A530[];
extern u8 DAT_0069A570[];
extern u8 DAT_0069A58A[];

/* Absolute vtable aliases preserve the retail address materialization. */
#pragma alias DAT_00960090_abs DAT_00960090
extern u8 DAT_00960090_abs[];
#pragma alias DAT_009600a0_abs DAT_009600a0
extern u8 DAT_009600a0_abs[];
#pragma alias DAT_0096008c_abs DAT_0096008c
extern u8 DAT_0096008c_abs[];
extern f32 DAT_007caee4;
extern f32 DAT_007caf58;
extern f32 DAT_007caf5c;
extern f32 DAT_007caf60;
extern f32 DAT_007caf64;
extern f32 DAT_007ca4e4;
extern f32 DAT_007ca564;
extern u32 DAT_007cc970;
extern u8* DAT_007ce3ec;
extern u8* DAT_007ce3f4;
extern u8* iGpffffb6fc;
extern u8* DAT_007ce42c;
extern u8* DAT_007ce4b4;
extern u32 DAT_007ce508;
extern u32 DAT_007ce50a;
extern u32 DAT_007ce50c;
extern u32 DAT_007ce4d0;
extern u32 DAT_0069aa50[];
#pragma alias DAT_0069aa50_ptr DAT_0069aa50
extern ScrHeader* DAT_0069aa50_ptr;
/* W442: func_002fd2e0 indexes the battle work block through its own extern
 * declaration of the same object; that separate declaration is what reproduces
 * retail's relocation there. Measured nd 200 -> 62 at 448/448B. */
#pragma alias gBtlWork gBtl
extern Battle* gBtlWork;
extern f32 DAT_0096008c;
extern void (*DAT_00960090)();
extern void (*DAT_00960094)();
extern void (*DAT_009600a0)();
extern void* kwlnGetMainCamera(void);
extern void* FUN_004e3630(void);

extern const BtlCameraStateEntry gBtlBossCameraStateEntries[][BTLCAMERA_STATE_MAX];

extern void* func_002b8f90(s32 param_1);
extern void func_002b96e0(void* object, void* archiveEntry);
extern void* func_002f87e0(u16 index);
extern void func_00100ec0(void* resource);
extern void* H_Cdvd_ArchiveGetFile(HCdvd* cdvd, s32 fileIdx, u32* fileSize);
extern void func_002b9030(void* resource);
extern u32 func_002ecac0(void);
extern s32 func_002d6370(s32 id);
extern void func_0029a2c0(void);
extern s32 FUN_00195460(s32 task);


extern void func_002e4a30(void);
extern void func_002e4a40(u64 param_1);
extern void func_002e4f50(BtlCamera* camera);
extern void func_002e5040(void);
extern void func_002e5060(u64 param_1);
extern void func_002e58a0(u64 param_1);
extern void func_002e70b0(BtlCamera* camera);
extern void func_002e71c0(int param_1);
extern void func_002e7210(BtlCamera* camera);
extern void func_002e7320(void);
extern void func_002e7330(u64 param_1);
extern void func_002e7680(void);
extern void func_002e76a0(BtlCamera* camera);
extern void func_002e7710(BtlCamera* camera);
extern void func_002e77c0(BtlCamera* camera);
extern void func_002e7810(int param_1);
extern void func_002e7880(void);
extern void func_002e7890(u64 param_1);
extern void func_002e82b0(u64 param_1);
extern void func_002e87b0(BtlCamera* camera);
extern void func_002e8820(BtlCamera *camera);
extern void func_002e8a40(BtlCamera* camera);
extern void func_002e8c80(void);
extern void func_002e8c90(int param_1);
extern void func_002e8d20(void);
extern void func_002e8d40(void);
extern void func_002e8d70(void *param_1);
extern void func_002e8e20(void);
extern void func_002e8f40(void);
extern void func_002e9060(void);
const BtlCameraStateEntry gBtlBossCameraStateEntries[3][BTLCAMERA_STATE_MAX] =
{
    {
        {NULL, NULL, 0, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e8d20, (void(*)(BtlCamera*))func_002e8d40, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e4a40, NULL, 1, 0, NULL},
        {func_002e70b0, (void(*)(BtlCamera*))func_002e71c0, 1, 1, NULL},
        {func_002e7210, (void(*)(BtlCamera*))func_002e7320, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e7330, (void(*)(BtlCamera*))func_002e7680, 1, 1, NULL},
        {func_002e76a0, func_002e7710, 1, 1, NULL},
        {func_002e77c0, (void(*)(BtlCamera*))func_002e7810, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {func_002e4f50, (void(*)(BtlCamera*))func_002e5040, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e5060, NULL, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e58a0, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e58a0, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e7880, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e7890, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e82b0, func_002e87b0, 1, 1, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 0, 1, NULL},
        {func_002e8a40, (void(*)(BtlCamera*))func_002e8c80, 0, 1, NULL},
        {(void(*)(BtlCamera*))func_002e8c90, NULL, 0, 1, NULL},
        {(void(*)(BtlCamera*))func_002e8c90, NULL, 0, 1, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e8d70, NULL, 1, 1, NULL},
        {NULL, NULL, 0, 1, NULL},
        {NULL, NULL, 0, 1, NULL},
        {(void(*)(BtlCamera*))func_002e8e20, NULL, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e8f40, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
    },
    {
        {NULL, NULL, 0, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e5060, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e7890, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e82b0, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 0, 1, NULL},
        {func_002e8a40, (void(*)(BtlCamera*))func_002e8c80, 0, 1, NULL},
        {(void(*)(BtlCamera*))func_002e8c90, NULL, 0, 1, NULL},
        {(void(*)(BtlCamera*))func_002e8c90, NULL, 0, 1, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e8d70, NULL, 1, 1, NULL},
        {NULL, NULL, 0, 1, NULL},
        {NULL, NULL, 0, 1, NULL},
        {(void(*)(BtlCamera*))func_002e8e20, NULL, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e8f40, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
    },
    {
        {NULL, NULL, 0, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e9060, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e9060, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e9060, NULL, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e9060, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e9060, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e9060, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e4a30, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e4a30, NULL, 1, 1, NULL},
        {(void(*)(BtlCamera*))func_002e4a30, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {NULL, NULL, 1, 1, NULL},
        {func_002e8820, NULL, 0, 1, NULL},
        {func_002e8a40, (void(*)(BtlCamera*))func_002e8c80, 0, 1, NULL},
        {func_002e8820, NULL, 0, 1, NULL},
        {func_002e8820, NULL, 0, 1, NULL},
        {NULL, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
        {(void(*)(BtlCamera*))func_002e8d70, NULL, 1, 1, NULL},
        {NULL, NULL, 0, 1, NULL},
        {NULL, NULL, 0, 1, NULL},
        {func_002e8820, NULL, 1, 0, NULL},
        {func_002e8820, NULL, 1, 0, NULL},
        {NULL, NULL, 1, 0, NULL},
    },
};
extern void func_002e9c20(BtlAction* action);
extern u32 func_002e9f10(BtlAction* action);
extern void func_002eabf0(void);
extern u32 func_002eb250(BtlAction* action);
extern void func_002eba50(BtlAction* action);
extern u32 func_002ebec0(BtlAction* action);
extern void func_002ee640(BtlAction* action);
extern u32 func_002eea10(BtlAction* action);
extern void func_002ef000(BtlAction* action);
extern u32 func_002ef250(BtlAction* action);
extern void func_002f0ea0(u64* param_1);
extern u32 func_002f14a0(BtlAction* action);
extern void func_002f3320(BtlAction* action);
extern u32 func_002f3520(BtlAction* action);
extern void func_002f2b90(BtlAction* action);
extern u32 func_002f3190(BtlAction* action);
extern void func_002f5660(BtlAction* action);
extern u32 func_002f5870(BtlAction* action);
extern void func_002f6840(BtlAction* action);
extern u32 func_002f6ab0(BtlAction* action);
extern void func_00288f80(BtlUnit* unit, s32 value);
extern void func_002f4490(BtlAction* action);
extern void func_002f5330(int param_1);
extern void func_002f5980(BtlAction* action);
extern void func_002e4220(u32 begin, u32 end, void* action);
extern s32 func_002e4250(void);
extern void func_002d3fe0(BtlUnit* unit);
extern void func_002831c0(BtlUnit* unit, s32 value);
extern void func_00282d40(f32 value, BtlUnit* unit, s16 value2, s32 value3, s8 value4);
extern void func_00282d40_reordered(BtlUnit* unit, s16 value2, s32 value3, s8 value4, f32 value);
extern void func_00287510(BtlUnit* unit);
extern void func_0027f650(BtlUnit* unit, u32 value);
extern void func_0027f650_ptr(BtlUnit* unit, void* value);
extern u8 DAT_00957180_boss[];
extern void func_002eaa40(void);
extern void func_0029a690(s32 value);
extern void func_0029a470(void* value);
extern void func_002b90d0(void* object, void* archiveEntry);
extern void* func_002baf90(void* object, u32 value1, u32 value2, s32 value3, u32 value4);
extern void func_0027ed20(void* object, s32 value);
extern void func_002ef670(void);
extern void func_002ec790(void);
extern void func_002e9ac0(void);
extern void func_002e9450(void);
extern s32 func_00300580(u32 persona, s32 value);
extern s32 func_00301750(u32 persona, s32 value);
extern s32 func_0030b5e0(u32 persona);
typedef struct BtlBossAnimRecord
{
    u16 unk_0;
    BtlUnitAnimBounds bounds;
} BtlBossAnimRecord;
extern BtlUnitAnimBounds DAT_0069A0E8;
extern BtlUnitAnimBounds DAT_0069A5A8;
extern BtlBossAnimRecord* D_007CE4C0;

static inline u16 btlBossGetEncounterId()
{
    return *(u16*)(*(u8**)((u8*)gBtl + 0xbbc) + 8);
}
static u16 btlBossGetEncounterIdCall()
{
    return *(u16*)(*(u8**)((u8*)gBtl + 0xbbc) + 8);
}
static inline BtlUnit* btlBossGetEnemyHead()
{
    return *(BtlUnit**)((u8*)gBtl + 0x158);
}
static inline u32 btlBossCreateModePacket(u16 archiveIndex)
{
    void* object;
    void* file;
    void* work;
    void* generated;
    u32 fileSize;
    u32 mode;

    object = func_002b8f90(0);
    file = H_Cdvd_ArchiveGetFile(gBtl->bossPakCdvd, archiveIndex, &fileSize);
    func_002b90d0(object, file);
    work = *(void**)((u8*)gBtl + 0x148);
    mode = *(u32*)((u8*)work + 0x30);
    generated = func_002baf90(object, mode, mode, 0, 0x200);
    func_0027ed20(generated, 2);
    func_002b9030(object);
    return 1;
}
static inline BtlUnitAnimBounds* btlBossGetSpecialAnim1A8(BtlUnit* unit)
{
    if (unit->genus != 1)
    {
        return NULL;
    }
    if (unit->charId != 0x10d)
    {
        return NULL;
    }
    if (*(u32*)((u8*)gBtl + 0xb54) == 1)
    {
        return &DAT_0069A0E8;
    }
    return NULL;
}
static inline BtlUnitAnimBounds* btlBossGetSpecialAnim1B4(BtlUnit* unit)
{
    u32 resource;

    if (unit->genus != 1)
    {
        return NULL;
    }
    if (unit->charId != 0xf1)
    {
        return NULL;
    }
    resource = btlBossGetEncounterId() == 0x1b4
        ? *(u32*)((u8*)gBtl + 0xb48)
        : 0;
    if (resource == 1)
    {
        return &DAT_0069A5A8;
    }
    return NULL;
}

// FUN_002f7dc0
void btlBossInitEncounterResources()
{
    switch (gBtl->startInfo.enmUnits->encountId)
    {
        case 0x1a7:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(5));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(6));
            break;

        case 0x1a8:
            *(s16*)((u8*)gBtl + 0xb50) = 0;
            *(u32*)((u8*)gBtl + 0xb54) = 0;
            break;

        case 0x1a9:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(3));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(5));
            break;

        case 0x1aa:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(3));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(5));
            break;

        case 0x1ab:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(3));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(5));
            break;

        case 0x1ac:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(2));
            break;

        case 0x1ad:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(2));
            break;

        case 0x1ae:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(3));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(5));
            *(void**)((u8*)gBtl + 0xb50) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb50), func_002f87e0(6));
            break;

        case 0x1af:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(3));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(5));
            break;

        case 0x1b0:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(3));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(5));
            *(void**)((u8*)gBtl + 0xb50) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb50), func_002f87e0(6));
            break;

        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(4));
            *(void**)((u8*)gBtl + 0xb48) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb48), func_002f87e0(5));
            *(void**)((u8*)gBtl + 0xb4c) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb4c), func_002f87e0(6));
            break;

        case 0x1b4:
            *(void**)((u8*)gBtl + 0xb44) = func_002b8f90(2);
            func_002b96e0(*(void**)((u8*)gBtl + 0xb44), func_002f87e0(5));
            break;

        default:
            break;
    }
}

// FUN_002f8460
void func_002f8460()
{
    u16 encounterId;

    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
        case 0x1a7:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            break;
        case 0x1a9:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            break;
        case 0x1aa:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            break;
        case 0x1ab:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            break;
        case 0x1ac:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            break;
        case 0x1ad:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            break;
        case 0x1ae:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb50));
            *(void**)(DAT_007ce3ec + 0xb50) = NULL;
            break;
        case 0x1af:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            break;
        case 0x1b0:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb50));
            *(void**)(DAT_007ce3ec + 0xb50) = NULL;
            break;
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb48));
            *(void**)(DAT_007ce3ec + 0xb48) = NULL;
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb4c));
            *(void**)(DAT_007ce3ec + 0xb4c) = NULL;
            break;
        case 0x1b4:
            func_002b9030(*(void**)(DAT_007ce3ec + 0xb44));
            *(void**)(DAT_007ce3ec + 0xb44) = NULL;
            break;
        default:
            break;
    }
}



// FUN_002f8790
void func_002f8790()
{
    if (gBtl->bossPakCdvd != NULL)
    {
        func_002f8460();
        func_00100ec0(gBtl->bossPakCdvd);
        gBtl->bossPakCdvd = NULL;
    }
}

// FUN_002f87e0
void* func_002f87e0(u16 index)
{
    u32 fileSize;

    return H_Cdvd_ArchiveGetFile(gBtl->bossPakCdvd, index, &fileSize);
}

// FUN_002f8810
void* func_002f8810()
{
    u32 fileSize;

    return H_Cdvd_ArchiveGetFile(gBtl->bossPakCdvd, 0, &fileSize);
}




// FUN_002f8840
const BtlCameraStateEntry* btlBossGetCameraStateEntry(u16 cameraState)
{
    const BtlCameraStateEntry* entry;
    s16 bossCameraSet;

    if (!(gBtl->unk_10 & 0x10))
    {
        return NULL;
    }

    bossCameraSet = *(s16*)((u8*)gBtl + 0xb84);
    entry = &gBtlBossCameraStateEntries[bossCameraSet][cameraState];

    if (entry->init == NULL && entry->update == NULL)
    {
        return NULL;
    }

    return entry;
}

#pragma opt_loop_invariants on

/* W414/W421 floor: baseline verify nd2 at 376/384 (rate 0.005319).
 * The only residuals are +136 and +276: ours addiu $v0,$zero,1 versus
 * retail daddiu $v0,$zero,1.  This is literal-width code generation, not
 * operand order; the remaining 8 bytes are tail padding.
 * DUMMYDUMB session 2026-10-20 re-confirmed the floor and swept the constant
 * width: (u64)1, 1u, 1UL, unsigned long long / s64 / u32 result types, a
 * u64 temp assignment, returning the constant directly (return 1 / (u64)1 /
 * 1u / 1UL / 1+0) instead of assigning then jumping to the case label - all
 * byte-neutral (still addiu, 2 real words). The daddiu form needs a genuinely
 * 64-bit literal context, which this source does not have. Same wall family as
 * FUN_002b17a0's literal-width floor. */
// FUN_002f88c0
#ifndef PC_BUILD
asm u64 func_002f88c0()
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8f84b6fc
  .word 0x8c820bbc
  .word 0x94430008
  .word 0x240201a8
  .word 0x1062004d
  .word 0x00000000
  .word 0x240201a6
  .word 0x10620044
  .word 0x00000000
  .word 0x240201a4
  .word 0x1062001e
  .word 0x00000000
  .word 0x240201a0
  .word 0x10620003
  .word 0x00000000
  .word 0x10000047
  .word 0x00000000
  .word 0x8c860158
  .word 0x24040114
  .word 0x24030113
  .word 0x24020100
  .word 0x1000000e
  .word 0x00000000
  .word 0x94c500a4
  .word 0x10a40007
  .word 0x00000000
  .word 0x10a30005
  .word 0x00000000
  .word 0x10a20006
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x64020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8cc60a34
  .word 0x14c0fff2
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000030
  .word 0x00000000
  .word 0x8c860158
  .word 0x24030115
  .word 0x24040105
  .word 0x24050106
  .word 0x10000019
  .word 0x00000000
  .word 0x94c200a4
  .word 0x1045000e
  .word 0x00000000
  .word 0x1044000c
  .word 0x00000000
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8cc2009c
  .word 0x30420008
  .word 0x1040000b
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000c
  .word 0x00000000
  .word 0x8cc2009c
  .word 0x30420008
  .word 0x10400004
  .word 0x00000000
  .word 0x64020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8cc60a34
  .word 0x14c0ffe7
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000d
  .word 0x00000000
  .word 0x0c0bb2b0
  .word 0x00000000
  .word 0x38420001
  .word 0x0002102b
  .word 0x10000007
  .word 0x00000000
  .word 0x8c820b54
  .word 0x38420001
  .word 0x2c420001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* DUMMYDUMB session 2026-10-21: 2 bytes away.  Both differences are the same
 * word form: ours "li v0,1" (the 32-bit addiu) where retail has
 * "daddiu v0,zero,1" (the 64-bit add-immediate).  The "result = 0" paths
 * match on both sides (a plain "move v0,zero"), so only the value 1 is
 * materialised as a 64-bit value in retail.
 * Probed: u64 / unsigned long long / long long / s64 / u32 / int declarations
 * of result; a u32 or int return type; result = 1 written as (u64)1, 1LL,
 * 1ULL or 1UL; result = 1 replaced by return 1; result initialised to 0 and
 * then incremented; result = 0; result += 1 - none of them produce daddiu.
 * A micro-test shows mwcc only emits daddiu for a 64-bit ADD (g64 += 1 gives
 * "daddiu v1,v1,1") and uses li for a 64-bit constant store, so retail must
 * reach the 1 by 64-bit arithmetic in a way this decompilation does not
 * express.  Confirmed wall: addiu vs daddiu. */

// FUN_002f8a40
u32 func_002f8a40(BtlUnit* unit)
{
    u16 encounterId;
    u32 result;

    encounterId = btlBossGetEncounterId();
    switch (encounterId)
    {
        case 0x1c8:
            goto block_1c8;
        case 0x1a0:
            goto block_1a0;
        case 0x1a1:
            goto block_1a1;
        case 0x1a2:
            goto block_1a2;
        case 0x1a3:
            goto block_1a3;
        case 0x1a4:
            goto block_1a4;
        case 0x1a5:
            goto block_1a5;
        case 0x1a6:
            goto block_1a6;
        case 0x1a7:
            goto block_zero_1a7;
        case 0x1a8:
            goto block_1a8;
        case 0x1a9:
            goto block_zero_1a9;
        case 0x1aa:
            goto block_zero_1aa;
        case 0x1ab:
            goto block_zero_1ab;
        case 0x1ac:
            goto block_1ac;
        case 0x1ad:
            goto block_1ad;
        case 0x1ae:
            goto block_zero_1ae;
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
            goto block_zero_1af;
        case 0x1b4:
            goto block_1b4;
        default:
            goto block_default;
    }

block_1c8:
    return 0;

block_1a0:
    switch (unit->genus)
    {
        case 1:
            goto block_1a0_genus1;
    }
    result = 0;
    goto block_1a0_done;

block_1a0_genus1:
    switch (unit->charId)
    {
        case 0x100:
            result = 1;
            goto block_1a0_done;
    }
    result = 0;

block_1a0_done:
    return result;

block_1a1:
    switch (unit->genus)
    {
        case 1:
            goto block_1a1_genus1;
    }
    result = 0;
    goto block_1a1_done;

block_1a1_genus1:
    switch (unit->charId)
    {
        case 0x101:
        case 0x102:
            result = 1;
            goto block_1a1_done;
    }
    result = 0;

block_1a1_done:
    return result;

block_1a2:
    switch (unit->genus)
    {
        case 1:
            goto block_1a2_genus1;
    }
    result = 0;
    goto block_1a2_done;

block_1a2_genus1:
    switch (unit->charId)
    {
        case 0x103:
            result = 1;
            goto block_1a2_done;
    }
    result = 0;

block_1a2_done:
    return result;

block_1a3:
    switch (unit->genus)
    {
        case 1:
            goto block_1a3_genus1;
    }
    result = 0;
    goto block_1a3_done;

block_1a3_genus1:
    switch (unit->charId)
    {
        case 0x104:
            result = 1;
            goto block_1a3_done;
    }
    result = 0;

block_1a3_done:
    return result;

block_1a4:
    switch (unit->genus)
    {
        case 1:
            goto block_1a4_genus1;
    }
    result = 0;
    goto block_1a4_done;

block_1a4_genus1:
    switch (unit->charId)
    {
        case 0x115:
        case 0x105:
        case 0x106:
            result = 1;
            goto block_1a4_done;
    }
    result = 0;

block_1a4_done:
    return result;

block_1a5:
    switch (unit->genus)
    {
        case 1:
            goto block_1a5_genus1;
    }
    result = 0;
    goto block_1a5_done;

block_1a5_genus1:
    switch (unit->charId)
    {
        case 0x107:
            result = 1;
            goto block_1a5_done;
    }
    result = 0;

block_1a5_done:
    return result;

block_1a6:
    switch (unit->genus)
    {
        case 1:
            goto block_1a6_genus1;
    }
    result = 0;
    goto block_1a6_done;

block_1a6_genus1:
    switch (unit->charId)
    {
        case 0x10a:
            result = 1;
            goto block_1a6_done;
    }
    result = 0;

block_1a6_done:
    return result;

block_zero_1a7:
    return 0;

block_1a8:
    switch (unit->genus)
    {
        case 1:
            goto block_1a8_genus1;
    }
    result = 0;
    goto block_1a8_done;

block_1a8_genus1:
    switch (unit->charId)
    {
        case 0x10d:
            result = 1;
            goto block_1a8_done;
    }
    result = 0;

block_1a8_done:
    return result;

block_zero_1a9:
    return 0;

block_zero_1aa:
    return 0;

block_zero_1ab:
    return 0;

block_1ac:
    return unit->genus == 1;

block_1ad:
    switch (unit->genus)
    {
        case 1:
            goto block_1ad_genus1;
    }
    result = 0;
    goto block_1ad_done;

block_1ad_genus1:
    switch (unit->charId)
    {
        case 0x112:
            result = 1;
            goto block_1ad_done;
    }
    result = 0;

block_1ad_done:
    return result;

block_zero_1ae:
    return 0;

block_zero_1af:
    return 0;

block_1b4:
    return unit->genus == 1;

block_default:
    return 0;
}

// FUN_002f8ea0
u32 func_002f8ea0(BtlUnit* unit, RwV3d* target)
{
    (void)unit;
    (void)target;
    return 0;
}

/* Removing this worsens FUN_002f88c0 (nd2 -> nd85) - measured W161. */
// FUN_002f8eb0
s16 func_002f8eb0(BtlUnit* unit, s16 index)
{
    s8 value;
    u16 result;

    switch (btlBossGetEncounterId())
    {
        case 0x1ae:
            if (unit->genus == 1)
            {
                goto check_character;
            }
            result = -1;
            goto return_result;

check_character:
            if (unit->charId == 0x126)
            {
                goto read_value;
            }
            result = -1;
            goto return_result;

read_value:
            K_ASSERT(index < 0x1d0, 417);
            value = DAT_007ce3f4[index * 2];
            switch (value)
            {
                case 0:
                    result = 4;
                    break;
                case 1:
                    result = 5;
                    break;
                case 2:
                    result = 6;
                    break;
                default:
                    result = -1;
                    break;
            }
return_result:
            return result;
        default:
            return -1;
    }
}

#pragma opt_loop_invariants reset
#pragma opt_loop_invariants on
/* W414 switch probes: nested genus switches plus id/character variants regressed; retain the measured 823/1248 shape. */
// FUN_002f8fd0
#ifndef PC_BUILD
asm s16 func_002f8fd0(BtlUnit* unit, s16 id)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8f86b6fc
  .word 0x8cc20bbc
  .word 0x94430008
  .word 0x240201b4
  .word 0x106200ec
  .word 0x00000000
  .word 0x240201a8
  .word 0x106200c7
  .word 0x00000000
  .word 0x240201a6
  .word 0x10620090
  .word 0x00000000
  .word 0x240201a5
  .word 0x1062006b
  .word 0x00000000
  .word 0x240201a3
  .word 0x1062004c
  .word 0x00000000
  .word 0x240201a2
  .word 0x10620029
  .word 0x00000000
  .word 0x240201a1
  .word 0x10620003
  .word 0x00000000
  .word 0x10000101
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x10000018
  .word 0x00000000
  .word 0x00051c3c
  .word 0x00031c3f
  .word 0x24020170
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x1000000f
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020102
  .word 0x10620006
  .word 0x00000000
  .word 0x24020101
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x64020017
  .word 0x10000003
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000120
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x10000015
  .word 0x00000000
  .word 0x00051c3c
  .word 0x00031c3f
  .word 0x24020163
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020103
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x64020017
  .word 0x10000003
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000100
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020104
  .word 0x10620003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x00a0202d
  .word 0x0c0b58dc
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x64020018
  .word 0x10000003
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x100000e4
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x10000017
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020107
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x00051c3c
  .word 0x00031c3f
  .word 0x2402016b
  .word 0x14620004
  .word 0x00000000
  .word 0x64020017
  .word 0x10000009
  .word 0x00000000
  .word 0x2402016c
  .word 0x14620004
  .word 0x00000000
  .word 0x64020019
  .word 0x10000003
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x100000c2
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x10000029
  .word 0x00000000
  .word 0x948300a4
  .word 0x2402010a
  .word 0x14620023
  .word 0x00000000
  .word 0x00051c3c
  .word 0x00031c3f
  .word 0x24020090
  .word 0x1062001b
  .word 0x00000000
  .word 0x2402008e
  .word 0x10620018
  .word 0x00000000
  .word 0x2402008d
  .word 0x10620015
  .word 0x00000000
  .word 0x24020083
  .word 0x10620012
  .word 0x00000000
  .word 0x24020080
  .word 0x1062000f
  .word 0x00000000
  .word 0x2402007f
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020077
  .word 0x10620009
  .word 0x00000000
  .word 0x24020075
  .word 0x10620006
  .word 0x00000000
  .word 0x24020073
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x64020018
  .word 0x10000003
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000008e
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x10000017
  .word 0x00000000
  .word 0x948300a4
  .word 0x2402010d
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x00051c3c
  .word 0x00031c3f
  .word 0x24020134
  .word 0x1462000a
  .word 0x00000000
  .word 0x8cc20b54
  .word 0x14400004
  .word 0x00000000
  .word 0x64020007
  .word 0x10000006
  .word 0x00000000
  .word 0x64020015
  .word 0x10000003
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000006c
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x1000001e
  .word 0x00000000
  .word 0x948300a4
  .word 0x240200f1
  .word 0x10620005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x10000016
  .word 0x00000000
  .word 0x00051c3c
  .word 0x00031c3f
  .word 0x24020126
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020128
  .word 0x10620009
  .word 0x00000000
  .word 0x24020127
  .word 0x10620006
  .word 0x00000000
  .word 0x24020125
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000003
  .word 0x00000000
  .word 0x3402ffff
  .word 0x3042ffff
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000043
  .word 0x00000000
  .word 0x908300a2
  .word 0x24020001
  .word 0x1462003e
  .word 0x00000000
  .word 0x948600a4
  .word 0x24c3ff6b
  .word 0x2c610008
  .word 0x10200039
  .word 0x00000000
  .word 0x3c04007c
  .word 0x24848c90
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24c3ff6b
  .word 0x3063ffff
  .word 0x0000482d
  .word 0x000320c0
  .word 0x8f83b7b4
  .word 0x00644021
  .word 0x00053c3c
  .word 0x00073c3f
  .word 0x24060003
  .word 0x24050002
  .word 0x1000001f
  .word 0x00000000
  .word 0x3123ffff
  .word 0x00031840
  .word 0x01031821
  .word 0x94630000
  .word 0x14e30017
  .word 0x00000000
  .word 0x10860012
  .word 0x00000000
  .word 0x1085000d
  .word 0x00000000
  .word 0x10820008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x24020004
  .word 0x10000014
  .word 0x00000000
  .word 0x24020007
  .word 0x10000011
  .word 0x00000000
  .word 0x24020017
  .word 0x1000000e
  .word 0x00000000
  .word 0x24020018
  .word 0x1000000b
  .word 0x00000000
  .word 0x25230001
  .word 0x3069ffff
  .word 0x3124ffff
  .word 0x28830004
  .word 0x1460ffdf
  .word 0x00000000
  .word 0x24020007
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

// FUN_002f9560
s16 func_002f9560(BtlUnit* unit, u16* flags)
{
    s16 result;
    u16 encounterId;
    void* resource;

    encounterId = btlBossGetEncounterId();
    switch (encounterId)
    {
        case 0x1a5:
            goto encounter_1a5;
        case 0x1a8:
            goto encounter_1a8;
        default:
            goto return_default;
    }

encounter_1a5:
    if (unit->genus == 1)
    {
        goto encounter_1a5_char;
    }
    result = -1;
    goto return_1a5;

encounter_1a5_char:
    if (unit->charId == 0x107)
    {
        goto encounter_1a5_flags;
    }
    result = -1;
    goto return_1a5;

encounter_1a5_flags:
    if (flags[1] != 0x17)
    {
        goto encounter_1a5_resource;
    }
    result = 0;
    goto return_1a5;

encounter_1a5_resource:
    resource = encounterId == 0x1a5
        ? *(void**)((u8*)gBtl + 0xb44)
        : NULL;
    if (resource != NULL)
    {
        result = 0xc;
    }
    else
    {
        result = -1;
    }
    goto return_1a5;

return_1a5:
    goto return_1a5_common;

return_1a5_common:
    return result;

encounter_1a8:
    if (unit->genus == 1)
    {
        goto encounter_1a8_char;
    }
    result = -1;
    goto return_1a8;

encounter_1a8_char:
    if (unit->charId == 0x10d)
    {
        goto encounter_1a8_flags;
    }
    result = -1;
    goto return_1a8;

encounter_1a8_flags:
    if (flags[1] == 0x19)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    goto return_1a8;

return_1a8:
    goto return_1a8_common;

return_1a8_common:
    return result;

return_default:
    return -1;
}

// FUN_002f9690
s16 func_002f9690(BtlUnit* unit)
{
    u16 encounterId;

    encounterId = btlBossGetEncounterId();
    switch (encounterId)
    {
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
            break;
        default:
            goto return_minus_one;
    }
    if (unit->genus != 1)
    {
        goto return_minus_one;
    }
    return 0;

return_minus_one:
    return -1;
}

/* W373 pragma sweep nd/obj: base 879/1300; singles LI=874/1296 LT=879/1300 CS=938/1428(over) PR=884/1300 SR=879/1300 DA=884/1308; retain LI on. */
// FUN_002f9710
void btlBossInitLoadPakPacket(void* work)
{
    u16 encountId;

    encountId = gBtl->startInfo.enmUnits->encountId;

    if (encountId == 0x1b4)
    {
        goto encount_1b4;
    }

    if (encountId == 0x1b3)
    {
        goto encount_1b3;
    }

    if (encountId == 0x1b2)
    {
        goto encount_1b2;
    }

    if (encountId == 0x1b1)
    {
        goto encount_1b1;
    }

    if (encountId == 0x1b0)
    {
        goto encount_1b0;
    }

    if (encountId == 0x1af)
    {
        goto encount_1af;
    }

    if (encountId == 0x1ae)
    {
        goto encount_1ae;
    }

    if (encountId == 0x1ad)
    {
        goto encount_1ad;
    }

    if (encountId == 0x1ac)
    {
        goto encount_1ac;
    }

    if (encountId == 0x1ab)
    {
        goto encount_1ab;
    }

    if (encountId == 0x1aa)
    {
        goto encount_1aa;
    }

    if (encountId == 0x1a9)
    {
        goto encount_1a9;
    }

    if (encountId == 0x1a8)
    {
        goto encount_1a8;
    }

    if (encountId == 0x1a7)
    {
        goto encount_1a7;
    }

    if (encountId == 0x1a6)
    {
        goto encount_1a6;
    }

    if (encountId == 0x1a5)
    {
        goto encount_1a5;
    }

    if (encountId == 0x1a4)
    {
        goto encount_1a4;
    }

    if (encountId == 0x1a3)
    {
        goto encount_1a3;
    }

    if (encountId == 0x1a2)
    {
        goto encount_1a2;
    }

    if (encountId == 0x1a1)
    {
        goto encount_1a1;
    }

    if (encountId == 0x1a0)
    {
        goto encount_1a0;
    }

    switch (encountId)
    {
        case 0x1c8:
            goto encount_1c8;

        default:
            goto done;
    }

encount_1c8:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1C8.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a0:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A0.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a1:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A1.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a2:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A2.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a3:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A3.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a4:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A4.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a5:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A5.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a6:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A6.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a7:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A7.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a8:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A8.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1a9:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1A9.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1aa:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1AA.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1ab:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1AB.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1ac:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1AC.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1ad:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1AD.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1ae:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1AE.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1af:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1AF.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1b0:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1B0.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1b1:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1B1.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1b2:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1B2.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1b3:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1B3.pak", HCDVD_FILEARCHIVE);
    goto done;

encount_1b4:
    gBtl->bossPakCdvd = H_Cdvd_Request("snd_benc/boss/e1B4.pak", HCDVD_FILEARCHIVE);

done:
    return;
}

// FUN_002f9b60
u32 btlBossUpdateLoadPakPacket(void* work)
{
    if (gBtl->bossPakCdvd == NULL)
    {
        return 1;
    }

    if (H_Cdvd_IsFileLoaded(gBtl->bossPakCdvd))
    {
        btlBossInitEncounterResources();

        return 1;
    }

    return 0;
}

// FUN_002f9bc0
BtlPacket* btlBossCreateLoadPakPacket()
{
    BtlPacket* packet;

    packet = btlPacketCreate(BTLBOSS_PACKET_LOADPAK, 0);

    packet->unk_47 &= ~(1 << 0);
    packet->initFunc = btlBossInitLoadPakPacket;
    packet->updateFunc = btlBossUpdateLoadPakPacket;

    return packet;
}

#pragma alias func_00282d40_reordered func_00282d40
#pragma alias func_0027f650_ptr func_0027f650
#pragma alias DAT_00957180_boss DAT_00957180

/* W414 negatives: per-case local copies worsened nd1022->1059 (1504B); direct field expansion exceeded the 1584B window (1644B). */
// FUN_002f9c10
#ifndef PC_BUILD
asm u32 func_002f9c10(BtlAction* action)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8f82b6fc
  .word 0x8c420bbc
  .word 0x94420008
  .word 0x2442fe60
  .word 0x2c410015
  .word 0x1020017f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638cb0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x9482001a
  .word 0x30420001
  .word 0x10400013
  .word 0x00000000
  .word 0x8c840030
  .word 0x908300a2
  .word 0x24020001
  .word 0x1462000e
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020100
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8c82009c
  .word 0x34420100
  .word 0xac82009c
  .word 0x34420040
  .word 0xac82009c
  .word 0x34420400
  .word 0xac82009c
  .word 0x24020001
  .word 0x10000160
  .word 0x00000000
  .word 0x9482001a
  .word 0x30420001
  .word 0x10400016
  .word 0x00000000
  .word 0x8c840030
  .word 0x908300a2
  .word 0x24020001
  .word 0x14620011
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020102
  .word 0x10620006
  .word 0x00000000
  .word 0x24020101
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8c830a2c
  .word 0x94620000
  .word 0x34420040
  .word 0xa4620000
  .word 0x8c82009c
  .word 0x34420100
  .word 0xac82009c
  .word 0x24020001
  .word 0x10000144
  .word 0x00000000
  .word 0x9482001a
  .word 0x30420001
  .word 0x10400013
  .word 0x00000000
  .word 0x8c840030
  .word 0x908300a2
  .word 0x24020001
  .word 0x1462000e
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020103
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8c82009c
  .word 0x34420100
  .word 0xac82009c
  .word 0x34420040
  .word 0xac82009c
  .word 0x34420400
  .word 0xac82009c
  .word 0x24020001
  .word 0x1000012b
  .word 0x00000000
  .word 0x9482001a
  .word 0x30420001
  .word 0x10400013
  .word 0x00000000
  .word 0x8c840030
  .word 0x908300a2
  .word 0x24020001
  .word 0x1462000e
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020104
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8c82009c
  .word 0x34420100
  .word 0xac82009c
  .word 0x34420040
  .word 0xac82009c
  .word 0x34420400
  .word 0xac82009c
  .word 0x24020001
  .word 0x10000112
  .word 0x00000000
  .word 0x0c0ba9e0
  .word 0x00000000
  .word 0x24020001
  .word 0x1000010d
  .word 0x00000000
  .word 0x9482001a
  .word 0x30420001
  .word 0x10400013
  .word 0x00000000
  .word 0x8c840030
  .word 0x908300a2
  .word 0x24020001
  .word 0x1462000e
  .word 0x00000000
  .word 0x948300a4
  .word 0x24020107
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8c82009c
  .word 0x34420100
  .word 0xac82009c
  .word 0x34420040
  .word 0xac82009c
  .word 0x34420400
  .word 0xac82009c
  .word 0x24020001
  .word 0x100000f4
  .word 0x00000000
  .word 0x9482001a
  .word 0x30420001
  .word 0x10400016
  .word 0x00000000
  .word 0x8c840030
  .word 0x908300a2
  .word 0x24020001
  .word 0x14620011
  .word 0x00000000
  .word 0x948300a4
  .word 0x2402010a
  .word 0x10620006
  .word 0x00000000
  .word 0x24020109
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8c830a2c
  .word 0x94620000
  .word 0x34420040
  .word 0xa4620000
  .word 0x8c82009c
  .word 0x34420100
  .word 0xac82009c
  .word 0x24020001
  .word 0x100000d8
  .word 0x00000000
  .word 0x0c0bbadc
  .word 0x00000000
  .word 0x24020001
  .word 0x100000d3
  .word 0x00000000
  .word 0x9486001a
  .word 0x30c20001
  .word 0x10400027
  .word 0x00000000
  .word 0x8c850030
  .word 0x90a300a2
  .word 0x24020001
  .word 0x14620022
  .word 0x00000000
  .word 0x94a300a4
  .word 0x24020118
  .word 0x10620017
  .word 0x00000000
  .word 0x24020117
  .word 0x10620014
  .word 0x00000000
  .word 0x24020116
  .word 0x10620011
  .word 0x00000000
  .word 0x2402010d
  .word 0x10620003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x30c2fff7
  .word 0xa482001a
  .word 0x8ca2009c
  .word 0x34420100
  .word 0xaca2009c
  .word 0x34420040
  .word 0xaca2009c
  .word 0x34420400
  .word 0xaca2009c
  .word 0x10000008
  .word 0x00000000
  .word 0x8ca30a2c
  .word 0x94620000
  .word 0x34420040
  .word 0xa4620000
  .word 0x8ca2009c
  .word 0x34420100
  .word 0xaca2009c
  .word 0x24020001
  .word 0x100000a6
  .word 0x00000000
  .word 0x9485001a
  .word 0x30a20001
  .word 0x104000a1
  .word 0x00000000
  .word 0x8c860030
  .word 0x90c300a2
  .word 0x24020001
  .word 0x1462009c
  .word 0x00000000
  .word 0x94c300a4
  .word 0x24020108
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x34a20010
  .word 0xa482001a
  .word 0x8cc2009c
  .word 0x34420100
  .word 0xacc2009c
  .word 0x34420040
  .word 0xacc2009c
  .word 0x34420080
  .word 0xacc2009c
  .word 0x94c300a4
  .word 0x24020108
  .word 0x10620003
  .word 0x00000000
  .word 0x10000087
  .word 0x00000000
  .word 0x00c0202d
  .word 0x240500d2
  .word 0x0c0a23e0
  .word 0x00000000
  .word 0x10000081
  .word 0x00000000
  .word 0x9485001a
  .word 0x30a20001
  .word 0x1040007d
  .word 0x00000000
  .word 0x8c860030
  .word 0x90c300a2
  .word 0x24020001
  .word 0x14620078
  .word 0x00000000
  .word 0x94c300a4
  .word 0x2402010f
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x34a20010
  .word 0xa482001a
  .word 0x8cc2009c
  .word 0x34420100
  .word 0xacc2009c
  .word 0x34420040
  .word 0xacc2009c
  .word 0x34420080
  .word 0xacc2009c
  .word 0x94c300a4
  .word 0x2402010f
  .word 0x10620003
  .word 0x00000000
  .word 0x10000063
  .word 0x00000000
  .word 0x00c0202d
  .word 0x240500d1
  .word 0x0c0a23e0
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x9485001a
  .word 0x30a20001
  .word 0x10400059
  .word 0x00000000
  .word 0x8c860030
  .word 0x90c300a2
  .word 0x24020001
  .word 0x14620054
  .word 0x00000000
  .word 0x94c300a4
  .word 0x24020110
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x34a20010
  .word 0xa482001a
  .word 0x8cc2009c
  .word 0x34420100
  .word 0xacc2009c
  .word 0x34420040
  .word 0xacc2009c
  .word 0x34420080
  .word 0xacc2009c
  .word 0x94c300a4
  .word 0x24020110
  .word 0x10620003
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x00c0202d
  .word 0x240500d0
  .word 0x0c0a23e0
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x9482001a
  .word 0x30420001
  .word 0x1040001a
  .word 0x00000000
  .word 0x8c850030
  .word 0x90a300a2
  .word 0x24020001
  .word 0x14620015
  .word 0x00000000
  .word 0x94a300a4
  .word 0x24020111
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8ca2009c
  .word 0x34420100
  .word 0xaca2009c
  .word 0x34420040
  .word 0xaca2009c
  .word 0x8ca30a2c
  .word 0x94620000
  .word 0x34420040
  .word 0xa4620000
  .word 0x8ca2009c
  .word 0x34420400
  .word 0xaca2009c
  .word 0x0c0a68b0
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001a
  .word 0x00000000
  .word 0x0c0bcd9c
  .word 0x00000000
  .word 0x24020001
  .word 0x10000015
  .word 0x00000000
  .word 0x0c0bd124
  .word 0x00000000
  .word 0x24020001
  .word 0x10000010
  .word 0x00000000
  .word 0x0c0bd224
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0c0bd300
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0c0bd4cc
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c0bd660
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002fa240
u32 func_002fa240(void)
{
    switch (btlBossGetEncounterId())
    {
        case 0x1c8: func_002e9170(); return 1;
        case 0x1a0: func_002e92c0(); return 1;
        case 0x1a1: func_002e9950(); return 1;
        case 0x1a2: func_002ea060(); return 1;
        case 0x1a3: func_002ea400(); return 1;
        case 0x1a4: func_002ea860(); return 1;
        case 0x1a5: func_002ec000(); return 1;
        case 0x1a6: func_002ec5c0(); return 1;
        case 0x1a7: func_002eec60(); return 1;
        case 0x1a8: func_002ef360(); return 1;
        case 0x1a9: func_002f1680(); return 1;
        case 0x1aa: func_002f19d0(); return 1;
        case 0x1ab: func_002f1f00(); return 1;
        case 0x1ac: func_002f2250(); return 1;
        case 0x1ad: func_002f3760(); return 1;
        case 0x1ae: func_002f4540(); return 1;
        case 0x1af: func_002f4950(); return 1;
        case 0x1b0: func_002f4ce0(); return 1;
        case 0x1b1:
        case 0x1b2:
        case 0x1b3: func_002f5490(); return 1;
        case 0x1b4: func_002f5a70(); return 1;
        default: return 0;
    }
}

/* W373 pragma sweep nd/obj: base 904/1228; singles LI=904/1228 CS=871/1304 LT=904/1228 PR=904/1228 SR=904/1228 DA=904/1228; retain CS off. */
#pragma opt_common_subs off
/* W414 negative: removing eager charId worsened nd871->943 (1300B); retain the baseline local. */
// FUN_002fa510
#ifndef PC_BUILD
asm void func_002fa510(BtlAction* action, s32 mode)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8f83b6fc
  .word 0x8c630bbc
  .word 0x94640008
  .word 0x240301b4
  .word 0x10830124
  .word 0x00000000
  .word 0x240301b3
  .word 0x108300fd
  .word 0x00000000
  .word 0x240301b2
  .word 0x108300fa
  .word 0x00000000
  .word 0x240301b1
  .word 0x108300f7
  .word 0x00000000
  .word 0x240301ac
  .word 0x108300cc
  .word 0x00000000
  .word 0x240301a8
  .word 0x108300a0
  .word 0x00000000
  .word 0x240301a7
  .word 0x1083007c
  .word 0x00000000
  .word 0x240301a6
  .word 0x10830057
  .word 0x00000000
  .word 0x240301a4
  .word 0x10830024
  .word 0x00000000
  .word 0x240301a1
  .word 0x10830003
  .word 0x00000000
  .word 0x10000125
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x10600121
  .word 0x00000000
  .word 0x8e060030
  .word 0x90c400a2
  .word 0x24030001
  .word 0x1483011c
  .word 0x00000000
  .word 0x94c400a4
  .word 0x24030102
  .word 0x10830006
  .word 0x00000000
  .word 0x24030101
  .word 0x10830003
  .word 0x00000000
  .word 0x10000113
  .word 0x00000000
  .word 0x24030001
  .word 0x14a30110
  .word 0x00000000
  .word 0x3c04002f
  .word 0x24849c20
  .word 0x3c05002f
  .word 0x24a59f10
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x10000107
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x10600103
  .word 0x00000000
  .word 0x8e040030
  .word 0x908300a2
  .word 0x24060001
  .word 0x146600fe
  .word 0x00000000
  .word 0x948400a4
  .word 0x24030106
  .word 0x10830014
  .word 0x00000000
  .word 0x24030105
  .word 0x10830011
  .word 0x00000000
  .word 0x24030115
  .word 0x10830003
  .word 0x00000000
  .word 0x100000f2
  .word 0x00000000
  .word 0x14a600f0
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484abf0
  .word 0x3c05002f
  .word 0x24a5b250
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x100000e7
  .word 0x00000000
  .word 0x14a000e5
  .word 0x00000000
  .word 0x0c0b9094
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x3c04002f
  .word 0x2484ba50
  .word 0x3c05002f
  .word 0x24a5bec0
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x100000d7
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x106000d3
  .word 0x00000000
  .word 0x8e060030
  .word 0x90c400a2
  .word 0x24030001
  .word 0x148300ce
  .word 0x00000000
  .word 0x94c400a4
  .word 0x2403010a
  .word 0x10830006
  .word 0x00000000
  .word 0x24030109
  .word 0x10830003
  .word 0x00000000
  .word 0x100000c5
  .word 0x00000000
  .word 0x24030001
  .word 0x14a300c2
  .word 0x00000000
  .word 0x0c0b9094
  .word 0x00000000
  .word 0x144000be
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484e640
  .word 0x3c05002f
  .word 0x24a5ea10
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x100000b5
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x106000b1
  .word 0x00000000
  .word 0x8e060030
  .word 0x90c400a2
  .word 0x24030001
  .word 0x148300ac
  .word 0x00000000
  .word 0x94c400a4
  .word 0x2403010c
  .word 0x10830006
  .word 0x00000000
  .word 0x2403010b
  .word 0x10830003
  .word 0x00000000
  .word 0x100000a3
  .word 0x00000000
  .word 0x10a000a1
  .word 0x00000000
  .word 0x0c0b9094
  .word 0x00000000
  .word 0x1440009d
  .word 0x00000000
  .word 0x3c04002f
  .word 0x2484f000
  .word 0x3c05002f
  .word 0x24a5f250
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x10000094
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x10600090
  .word 0x00000000
  .word 0x8e060030
  .word 0x90c400a2
  .word 0x24030001
  .word 0x1483008b
  .word 0x00000000
  .word 0x94c400a4
  .word 0x24030118
  .word 0x10830009
  .word 0x00000000
  .word 0x24030117
  .word 0x10830006
  .word 0x00000000
  .word 0x24030116
  .word 0x10830003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x24030001
  .word 0x14a3007c
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x94830b50
  .word 0x00031080
  .word 0x00441021
  .word 0xac500b44
  .word 0x24630001
  .word 0x8f82b6fc
  .word 0xa4430b50
  .word 0x3c04002f
  .word 0x24840ea0
  .word 0x3c05002f
  .word 0x24a514a0
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x1000006b
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x10600067
  .word 0x00000000
  .word 0x8e030030
  .word 0x906400a2
  .word 0x24030001
  .word 0x14830062
  .word 0x00000000
  .word 0x0c0b9094
  .word 0x00000000
  .word 0x1440005e
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x94420b48
  .word 0x00021880
  .word 0x3c02006a
  .word 0x2442a1d0
  .word 0x00431021
  .word 0x94420000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c04002f
  .word 0x24843320
  .word 0x3c05002f
  .word 0x24a53520
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x3c04002f
  .word 0x24842b90
  .word 0x3c05002f
  .word 0x24a53190
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x1060003f
  .word 0x00000000
  .word 0x8e060030
  .word 0x90c400a2
  .word 0x24030001
  .word 0x1483003a
  .word 0x00000000
  .word 0x94c300a4
  .word 0x2463ff15
  .word 0x2c610006
  .word 0x10200035
  .word 0x00000000
  .word 0x3c04007c
  .word 0x24848d10
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x10a0002c
  .word 0x00000000
  .word 0x0c0b9094
  .word 0x00000000
  .word 0x14400028
  .word 0x00000000
  .word 0x3c04002f
  .word 0x24845660
  .word 0x3c05002f
  .word 0x24a55870
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x9603001a
  .word 0x30630001
  .word 0x1060001b
  .word 0x00000000
  .word 0x8e060030
  .word 0x90c400a2
  .word 0x24030001
  .word 0x14830016
  .word 0x00000000
  .word 0x94c400a4
  .word 0x240300f1
  .word 0x10830003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x10a0000e
  .word 0x00000000
  .word 0x0c0b9094
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0xac400b4c
  .word 0x3c04002f
  .word 0x24846840
  .word 0x3c05002f
  .word 0x24a56ab0
  .word 0x0200302d
  .word 0x0c0b9088
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_common_subs reset


// FUN_002faa50
void func_002faa50(BtlAction* source, BtlAction* target, BtlTargetResult* result)
{
    switch (btlBossGetEncounterId())
    {
        case 0x1a5:
            func_002ec190(source, target, result);
            break;

        case 0x1b4:
            func_002f5bf0(source, target, result);
            break;
    }
}
/* Measured W306: opt_loop_invariants off leaves faab0 at nd49; on enables the retail loop shape and final nd0. */
#pragma opt_loop_invariants on
// FUN_002faab0
void func_002faab0()
{
    switch (btlBossGetEncounterId())
    {
    case 0x1a4:
        func_002eaa40();
        break;
    case 0x1a5:
    {
        BtlUnit* unit = btlBossGetEnemyHead();
        u16 expectedCharId = 0x107;
        while (unit != NULL)
        {
            switch (unit->charId)
            {
            case 0x107:
                ((u8*)unit->mdl)[0x388] |= 8;
                *(u32*)((u8*)gBtl + 0xb4c) = 0;
                ((u8*)unit->mdl)[0x41d] = 0;
                break;
            }
            unit = unit->next;
        }
        break;
    }
    case 0x1a8:
        func_002ef5a0();
        break;
    case 0x1ac:
    {
        BtlUnit* unit = btlBossGetEnemyHead();
        u16 expectedCharId = 0x111;
        while (unit != NULL)
        {
            switch (unit->charId)
            {
            case 0x111:
                ((u8*)unit->mdl)[0x388] |= 8;
                *(u32*)((u8*)gBtl + 0xb50) = 0;
                ((u8*)unit->mdl)[0x41d] = 0;
                break;
            }
            unit = unit->next;
        }
        break;
    }
    case 0x1b4:
    {
        BtlUnit* unit;
        s8 unk_9e8;
        for (unit = btlBossGetEnemyHead(); unit != NULL; unit = unit->next)
        {
            switch (unit->charId)
            {
            case 0xf2:
                func_002d3fe0(unit);
                func_002831c0(unit, 0);
                unk_9e8 = *(volatile s8*)((u8*)unit + 0x9e8);
                func_00282d40_reordered(unit, unit->unk_9e0, 0, unk_9e8, unit->unk_9e4);
                func_00287510(unit);
                func_0027f650_ptr(unit, DAT_00957180_boss);
                break;
            }
        }
        break;
    }
    default:
        break;
    }
}
#pragma opt_loop_invariants reset





// FUN_002fac80
void func_002fac80()
{
    func_0029a690(0);
    func_0029a470(*(void**)((u8*)gBtl + 0x148));
}

// FUN_002facc0
u32 func_002facc0()
{
    switch (btlBossGetEncounterId())
    {
        case 0x1c8:
            return btlBossCreateModePacket(0);
        case 0x1a0:
            func_002e9450();
            return 1;
        case 0x1a1:
            func_002e9ac0();
            return 1;
        case 0x1a2:
            return btlBossCreateModePacket(1);
        case 0x1a3:
            return btlBossCreateModePacket(1);
        case 0x1a4:
            return btlBossCreateModePacket(1);
        case 0x1a5:
            return btlBossCreateModePacket(1);
        case 0x1a6:
            func_002ec790();
            return 1;
        case 0x1a7:
            return btlBossCreateModePacket(1);
        case 0x1a8:
            func_002ef670();
            return 1;
        case 0x1a9:
            btlBossCreateModePacket(1);
            goto btlBossReturnZero;
        case 0x1aa:
            btlBossCreateModePacket(1);
            goto btlBossReturnZero;
        case 0x1ab:
            btlBossCreateModePacket(1);
            goto btlBossReturnZero;
        case 0x1ac:
            return btlBossCreateModePacket(1);
        case 0x1ad:
            return btlBossCreateModePacket(1);
        case 0x1ae:
            return btlBossCreateModePacket(1);
        case 0x1af:
            return btlBossCreateModePacket(1);
        case 0x1b0:
            return btlBossCreateModePacket(1);
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
            return btlBossCreateModePacket(1);
        case 0x1b4:
            return btlBossCreateModePacket(1);
        default:
        btlBossReturnZero:
            return 0;
    }
}

// FUN_002fb690
u32 func_002fb690()
{
    u16 encounterId = btlBossGetEncounterId();

    if (encounterId == 0x1b4) goto encounter_1b4;
    if (encounterId == 0x1b0) goto encounter_1b0;
    if (encounterId == 0x1af) goto encounter_1af;
    if (encounterId == 0x1ae) goto encounter_1ae;
    if (encounterId == 0x1ad) goto encounter_1ad;
    if (encounterId == 0x1ab) goto encounter_1ab;
    if (encounterId == 0x1aa) goto encounter_1aa;
    if (encounterId == 0x1a9) goto encounter_1a9;
    if (encounterId == 0x1a8) goto encounter_1a8;
    if (encounterId == 0x1a5) goto encounter_1a5;
    if (encounterId == 0x1a3) goto encounter_1a3;
    if (encounterId == 0x1a2) goto encounter_1a2;
    switch (encounterId)
    {
        case 0x1a0:
            goto encounter_1a0;
        default:
            goto encounter_default;
    }

encounter_1a0:
    func_002e95f0();
    return 1;
encounter_1a2:
    func_002ea210();
    return 1;
encounter_1a3:
    func_002ea590();
    return 1;
encounter_1a5:
    func_002ec2c0();
    return 1;
encounter_1a8:
    func_002ef7e0();
    return 1;
encounter_1a9:
    func_002f1810();
    return 1;
encounter_1aa:
    func_002f1d40();
    return 1;
encounter_1ab:
    func_002f2090();
    return 1;
encounter_1ad:
    func_002f3840();
    return 1;
encounter_1ae:
    func_002f46d0();
    return 1;
encounter_1af:
    func_002f4a40();
    return 1;
encounter_1b0:
    func_002f4e70();
    return 1;
encounter_1b4:
    func_002f6120();
    return 1;
encounter_default:
    return 0;
}

/* Retail algorithm: genus-gated encounter jump table returns 16-bit values from per-character tables; implemented 2980/2992 bytes (99%); remaining 12-byte tail/layout gap. */
// FUN_002fb860
#ifndef PC_BUILD
asm s16 func_002fb860(BtlUnit* unit, u16 index)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x8f82b6fc
  .word 0x8c430bbc
  .word 0x94650008
  .word 0x24a3fe60
  .word 0x2c610015
  .word 0x102002d9
  .word 0x00000000
  .word 0x3c04007c
  .word 0x24848d50
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020100
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429bf0
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100002ba
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020103
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429c90
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100002a1
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020102
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020101
  .word 0x10620003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429c20
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000000b
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429c3a
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000027c
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000000f
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020104
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000008
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429ce0
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000265
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000029
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020115
  .word 0x1062001b
  .word 0x00000000
  .word 0x24020106
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020105
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429d30
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000014
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429d4a
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000000b
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429d64
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000234
  .word 0x00000000
  .word 0x922400a2
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000032
  .word 0x00000000
  .word 0x962400a4
  .word 0x24030107
  .word 0x10830004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000002b
  .word 0x00000000
  .word 0x3204ffff
  .word 0x24030011
  .word 0x10830008
  .word 0x00000000
  .word 0x24030003
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x240301a5
  .word 0x14a30004
  .word 0x00000000
  .word 0x8c430b44
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x10600006
  .word 0x00000000
  .word 0x24030001
  .word 0xac430b4c
  .word 0x2402000f
  .word 0x10000012
  .word 0x00000000
  .word 0x240301a5
  .word 0x14a30004
  .word 0x00000000
  .word 0x8c430b44
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x14600002
  .word 0x00000000
  .word 0xac400b4c
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429dd0
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x100001fa
  .word 0x00000000
  .word 0x922400a2
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000004a
  .word 0x00000000
  .word 0x962400a4
  .word 0x240300e8
  .word 0x10830042
  .word 0x00000000
  .word 0x240300e7
  .word 0x1083003f
  .word 0x00000000
  .word 0x240300e6
  .word 0x1083003c
  .word 0x00000000
  .word 0x240300e5
  .word 0x10830039
  .word 0x00000000
  .word 0x240300e4
  .word 0x10830036
  .word 0x00000000
  .word 0x240300e3
  .word 0x10830033
  .word 0x00000000
  .word 0x240300e2
  .word 0x10830030
  .word 0x00000000
  .word 0x2403010a
  .word 0x10830024
  .word 0x00000000
  .word 0x24030109
  .word 0x10830003
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x3204ffff
  .word 0x24030009
  .word 0x1083000b
  .word 0x00000000
  .word 0x24030011
  .word 0x10830008
  .word 0x00000000
  .word 0x24030003
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8c430b50
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x24020006
  .word 0x10000017
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429e20
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000000e
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x24429e3a
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000005
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100001a8
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x962300a4
  .word 0x2402010c
  .word 0x1062000f
  .word 0x00000000
  .word 0x2402010b
  .word 0x10620003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a020
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000000b
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a03a
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000183
  .word 0x00000000
  .word 0x922400a2
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000004b
  .word 0x00000000
  .word 0x962400a4
  .word 0x24030127
  .word 0x10830030
  .word 0x00000000
  .word 0x24030119
  .word 0x1083002d
  .word 0x00000000
  .word 0x24030118
  .word 0x10830021
  .word 0x00000000
  .word 0x24030117
  .word 0x1083001e
  .word 0x00000000
  .word 0x24030116
  .word 0x1083001b
  .word 0x00000000
  .word 0x2403010d
  .word 0x10830003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x8c420b54
  .word 0x1440000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a080
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000002a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a09a
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000021
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a0b4
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000018
  .word 0x00000000
  .word 0x3203ffff
  .word 0x24020003
  .word 0x1462000a
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x24050400
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2402000f
  .word 0x1000000b
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a0ce
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000130
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000029
  .word 0x00000000
  .word 0x3203ffff
  .word 0x24020011
  .word 0x10620008
  .word 0x00000000
  .word 0x24020003
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x2405000b
  .word 0x0c0c05d4
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400007
  .word 0x00000000
  .word 0x24030001
  .word 0x8f82b6fc
  .word 0xac430b50
  .word 0x2402000f
  .word 0x10000010
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x2405000b
  .word 0x0c0c05d4
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0xac400b50
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a230
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x100000ff
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000000f
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020112
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000008
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a380
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x100000e8
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020108
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a130
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100000cf
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x2402010f
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a170
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x100000b6
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020110
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a1b0
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000009d
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020126
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a490
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000084
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x240200e9
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a4d0
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000006b
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x962300a4
  .word 0x240200ea
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a510
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000052
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000017
  .word 0x00000000
  .word 0x962200a4
  .word 0x2442ff15
  .word 0x2c410006
  .word 0x10200011
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638d30
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a530
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000033
  .word 0x00000000
  .word 0x922400a2
  .word 0x24030001
  .word 0x10830004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000029
  .word 0x00000000
  .word 0x962400a4
  .word 0x240300f1
  .word 0x10830003
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8c420b48
  .word 0x14400016
  .word 0x00000000
  .word 0x3203ffff
  .word 0x24020002
  .word 0x14620009
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x0c0c2d78
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020006
  .word 0x10000014
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a570
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1000000b
  .word 0x00000000
  .word 0x3203ffff
  .word 0x3c02006a
  .word 0x2442a58a
  .word 0x00431021
  .word 0x90420000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */



// FUN_002fc410
BtlUnitAnimBounds* func_002fc410(BtlUnit* unit)
{
    switch (btlBossGetEncounterId())
    {
    case 0x1a8:
        return btlBossGetSpecialAnim1A8(unit);
    case 0x1b4:
        return btlBossGetSpecialAnim1B4(unit);
    default:
        return NULL;
    }
}

// FUN_002fc520
BtlUnitAnimBounds* func_002fc520(BtlUnit* unit)
{
    s16 animation;

    if (unit->genus != 1)
    {
        return NULL;
    }
    animation = func_002f6c50(unit->charId);
    if (animation == -1)
    {
        return NULL;
    }
    switch (animation)
    {
    case 0x14:
    case 0x15:
        return NULL;
    default:
        return &D_007CE4C0[animation].bounds;
    }
}

// FUN_002fc5d0
#ifndef PC_BUILD
asm f32 func_002fc5d0(BtlUnit* unit, BtlUnit* target, s32 animation)
{
  .set noreorder
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x3c020020
  .word 0x00621024
  .word 0x14400005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x10000128
  .word 0x00000000
  .word 0x90a300a2
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x10000120
  .word 0x00000000
  .word 0x908200a2
  .word 0x24040002
  .word 0x1444001a
  .word 0x00000000
  .word 0x94a300a4
  .word 0x240200f1
  .word 0x10620003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x30c2ffff
  .word 0x10440007
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x1000010d
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c0243fa
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000103
  .word 0x00000000
  .word 0x30c3ffff
  .word 0x2402000b
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020006
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020005
  .word 0x10620008
  .word 0x00000000
  .word 0x24020004
  .word 0x10620005
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x100000f2
  .word 0x00000000
  .word 0x94a200a4
  .word 0x240300f1
  .word 0x104300de
  .word 0x00000000
  .word 0x240301af
  .word 0x104300e9
  .word 0x00000000
  .word 0x24030126
  .word 0x104300e6
  .word 0x00000000
  .word 0x24030112
  .word 0x104300e3
  .word 0x00000000
  .word 0x24030128
  .word 0x104300c6
  .word 0x00000000
  .word 0x24030125
  .word 0x104300c3
  .word 0x00000000
  .word 0x24030124
  .word 0x104300c0
  .word 0x00000000
  .word 0x24030123
  .word 0x104300bd
  .word 0x00000000
  .word 0x24030122
  .word 0x104300ba
  .word 0x00000000
  .word 0x24030121
  .word 0x104300b7
  .word 0x00000000
  .word 0x24030120
  .word 0x104300b4
  .word 0x00000000
  .word 0x2403011f
  .word 0x104300b1
  .word 0x00000000
  .word 0x2403011e
  .word 0x104300ae
  .word 0x00000000
  .word 0x2403011d
  .word 0x104300ab
  .word 0x00000000
  .word 0x2403011c
  .word 0x104300a8
  .word 0x00000000
  .word 0x2403011b
  .word 0x104300a5
  .word 0x00000000
  .word 0x2403011a
  .word 0x104300a2
  .word 0x00000000
  .word 0x24030111
  .word 0x1043009f
  .word 0x00000000
  .word 0x24030110
  .word 0x104300b6
  .word 0x00000000
  .word 0x2403010f
  .word 0x104300b3
  .word 0x00000000
  .word 0x2403010d
  .word 0x1043008c
  .word 0x00000000
  .word 0x2403010c
  .word 0x104300ad
  .word 0x00000000
  .word 0x2403010b
  .word 0x104300aa
  .word 0x00000000
  .word 0x2403010a
  .word 0x10430079
  .word 0x00000000
  .word 0x24030109
  .word 0x10430071
  .word 0x00000000
  .word 0x24030108
  .word 0x104300a1
  .word 0x00000000
  .word 0x24030107
  .word 0x10430061
  .word 0x00000000
  .word 0x24030115
  .word 0x10430054
  .word 0x00000000
  .word 0x24030106
  .word 0x10430047
  .word 0x00000000
  .word 0x24030105
  .word 0x1043003a
  .word 0x00000000
  .word 0x24030104
  .word 0x1043002d
  .word 0x00000000
  .word 0x24030103
  .word 0x10430020
  .word 0x00000000
  .word 0x24030102
  .word 0x10430013
  .word 0x00000000
  .word 0x24030101
  .word 0x10430010
  .word 0x00000000
  .word 0x24030100
  .word 0x10430003
  .word 0x00000000
  .word 0x10000084
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c024316
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x1000007c
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000072
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000068
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c024316
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x1000005e
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c024316
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000054
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c02432f
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x1000004a
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c024248
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000040
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c0242fa
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000036
  .word 0x00000000
  .word 0xc4a10090
  .word 0xc4a0002c
  .word 0x46000802
  .word 0x10000031
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c024348
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000027
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x1000001d
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x24020177
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602181c
  .word 0x10000011
  .word 0x00000000
  .word 0xc4a30090
  .word 0xc4a2002c
  .word 0x3c0243e1
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602185c
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* Recovered battle-misc harvest: 0x002FCAA0-0x002FED10 */
// FUN_002FCAA0


u32 FUN_002fcaa0(int param_1, u32* param_2)
{
    u16 encounterId;
    u32 result;
    u32 caseResult;

    encounterId = *(u16*)(*(int*)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1a7:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0x10b:
                case 0x10c:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1a9:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0x108:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1aa:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0x10f:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1ab:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0x110:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1ae:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0x126:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1af:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0xe9:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1b0:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0xea:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1b1:
    case 0x1b2:
    case 0x1b3:
        if ((*(u16*)(param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(int*)(param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(int*)(param_1 + 0x30) + 0xa4))
                {
                case 0xeb:
                case 0xec:
                case 0xed:
                case 0xee:
                case 0xef:
                case 0xf0:
                    *param_2 = *(u32*)(DAT_007ce3ec + 0xb44);
                    param_2[1] = *(u32*)(DAT_007ce3ec + 0xb48);
                    param_2[2] = *(u32*)(DAT_007ce3ec + 0xb4c);
                    caseResult = 1;
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

// FUN_002FCF50


u32 FUN_002fcf50(int param_1)
{
    u16 encounterId;
    u32 result;
    u32 caseResult;

    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1ae:
        if ((*(u16*)((u8*)param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(u8**)((u8*)param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(u8**)((u8*)param_1 + 0x30) + 0xa4))
                {
                case 0x126:
                    caseResult = *(u32*)(DAT_007ce3ec + 0xb50);
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    case 0x1b0:
        if ((*(u16*)((u8*)param_1 + 0x1a) & 1) == 0)
            caseResult = 0;
        else
        {
            if (*(u8*)(*(u8**)((u8*)param_1 + 0x30) + 0xa2) != 1)
                caseResult = 0;
            else
            {
                switch (*(u16*)(*(u8**)((u8*)param_1 + 0x30) + 0xa4))
                {
                case 0xea:
                    caseResult = *(u32*)(DAT_007ce3ec + 0xb50);
                    break;
                default:
                    caseResult = 0;
                    break;
                }
            }
        }
        result = caseResult;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
// FUN_002FD060


u32 FUN_002fd060(BtlAction* action)
{
    u16 encounterId;
    u32 result;
    u32 caseResult;

    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1ad:
        if ((action->unk_1a & 1) == 0)
            caseResult = 0;
        else
        {
            if (action->unit->genus != UNIT_GENUS_EC)
                caseResult = 0;
            else
            {
                if (action->unit->charId == 0x112)
                    caseResult = *(u32*)(DAT_007ce3ec + 0xb44);
                else
                    caseResult = 0;
            }
        }
        result = caseResult;
        break;
    case 0x1b4:
        if ((action->unk_1a & 1) == 0)
            caseResult = 0;
        else
        {
            if (action->unit->genus != UNIT_GENUS_EC)
                caseResult = 0;
            else
            {
                if (action->unit->charId == 0xf1)
                    caseResult = *(u32*)(DAT_007ce3ec + 0xb44);
                else
                    caseResult = 0;
            }
        }
        result = caseResult;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

// FUN_002FD160


u32 FUN_002fd160(BtlAction* action)
{
    s8 helperResult;
    u32 result;
    u32 caseResult;
    u16 encounterId;

    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1ac:
        if ((action->unk_1a & 1) == 0)
            caseResult = 0;
        else
        {
            if (action->unit->genus != UNIT_GENUS_EC)
                caseResult = 0;
            else
            {
                helperResult = (s8)FUN_00301750((int)action->unit->datUnit, 0xb);
                if (helperResult > 0)
                    caseResult = *(u32*)(DAT_007ce3ec + 0xb44);
                else
                    caseResult = 0;
            }
        }
        result = caseResult;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

// FUN_002FD220


u32 FUN_002fd220(BtlAction* action, BtlAction* target)
{
    u32 encounterResult;
    u32 result;
    int bossState;
    int helperResult;

    switch (*(u16*)(*(int*)(DAT_007ce3ec + 0xbbc) + 8))
    {
    case 0x1a5:
        helperResult = FUN_0030af00(
            *(u32*)(*(int*)((int)action + 0x30) + 0xa2c),
            *(u32*)(*(int*)((int)target + 0x30) + 0xa2c));
        if (helperResult == 0)
        {
            encounterResult = 0;
        }
        else
        {
            if (*(u16*)(*(int*)(DAT_007ce3ec + 0xbbc) + 8) == 0x1a5)
            {
                bossState = *(int*)(DAT_007ce3ec + 0xb44);
            }
            else
            {
                bossState = 0;
            }
            if (bossState == 0)
            {
                encounterResult = 0;
            }
            else
            {
                encounterResult = *(int*)(DAT_007ce3ec + 0xb48) == 0;
            }
        }
        result = encounterResult;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

// FUN_002FD2E0
#ifndef PC_BUILD
asm u32 FUN_002fd2e0(int param_1, u16 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x3222ffff
  .word 0x00021080
  .word 0x8f87b6fc
  .word 0x00472821
  .word 0x8ca30b2c
  .word 0x8c820008
  .word 0x14620008
  .word 0x00000000
  .word 0x8ca30b38
  .word 0x8e420020
  .word 0x14620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000052
  .word 0x00000000
  .word 0x3223ffff
  .word 0x24020002
  .word 0x1062001a
  .word 0x00000000
  .word 0x24020001
  .word 0x1062000e
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8ce60b1c
  .word 0x2402ffff
  .word 0x14c20004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000040
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x8ce60b20
  .word 0x2402ffff
  .word 0x14c20004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000037
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x8ce60b24
  .word 0x2402ffff
  .word 0x14c20004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002e
  .word 0x00000000
  .word 0x8ce20d18
  .word 0x8c420020
  .word 0x2444ffff
  .word 0x8f85b7e0
  .word 0x0c0d6ed0
  .word 0x00000000
  .word 0x0040802d
  .word 0x8f82b6fc
  .word 0x0200202d
  .word 0x8c450148
  .word 0x0c0d7068
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0d6b84
  .word 0x00000000
  .word 0x0040982d
  .word 0x8c4200cc
  .word 0x04400009
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05de2c
  .word 0x00000000
  .word 0x8e6400cc
  .word 0x0000282d
  .word 0x0040302d
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c440d18
  .word 0x0200282d
  .word 0x0c065554
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0xac500b28
  .word 0x3222ffff
  .word 0x00022080
  .word 0x8e430008
  .word 0x8f82b6fc
  .word 0x00821021
  .word 0xac430b2c
  .word 0x8e430020
  .word 0x8f82b6fc
  .word 0x00821021
  .word 0xac430b38
  .word 0x24020001
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002FD4A0


u32 FUN_002fd4a0(void)
{
    s32 task;

    task = *(s32*)(DAT_007ce3ec + 0xb28);
    if (task == 0)
    {
        return 0;
    }
    if (FUN_00195460(task) == 0)
    {
        *(u32*)(DAT_007ce3ec + 0xb28) = 0;
        return 0;
    }
    return 1;
}

// FUN_002FD500


u8 FUN_002fd500(void)



{

  return *(int *)(DAT_007ce3ec + 0xb28) != 0;

}

// FUN_002FD520


void FUN_002fd520(int param_1)
{
    BtlUnit* unit;
    u16 encounterId;
    u8* text;
    u8 value;

    unit = (BtlUnit*)param_1;
    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1a5:
        FUN_002ec4b0();
        break;
    case 0x1a6:
        FUN_002ec990();
        break;
    case 0x1a8:
        func_002efb40(unit);
        break;
    case 0x1ac:
        if (unit->genus == 1 && (unit->flags2 & 2) != 0)
        {
            if (*(u32*)(DAT_007ce3ec + 0xb50) != 0)
            {
                text = (u8*)unit->mdl + 0x41d;
                value = *text;
                if (value < 0xdf)
                {
                    *text = value + 0x20;
                }
                else
                {
                    *text = 0xff;
                }
            }
            else
            {
                text = (u8*)unit->mdl + 0x41d;
                if (*text > 0x20)
                {
                    *text -= 0x20;
                }
                else
                {
                    *text = 0;
                }
            }
        }
        break;
    case 0x1b4:
        FUN_002f5d80();
        break;
    default:
        break;
    }
}

// FUN_002FD660


u32 FUN_002fd660(void)
{
    BtlUnit* unit;
    u16 encounterId;
    u32 result;

    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1a0:
        result = FUN_002e97e0();
        break;
    case 0x1a4:
        for (unit = *(BtlUnit**)(DAT_007ce3ec + 0x158);
             unit != NULL; unit = unit->next)
        {
            switch (unit->charId)
            {
            case 0x105:
            case 0x106:
                if (FUN_0030b5a0(unit->datUnit, 0) == 0)
                {
                    result = 0;
                    goto fd660_1a4_done;
                }
                break;
            default:
                break;
            }
        }
        result = 1;
fd660_1a4_done:
        return result;
    case 0x1a8:
        result = FUN_002ef9d0();
        break;
    case 0x1b4:
        for (unit = *(BtlUnit**)(DAT_007ce3ec + 0x158);
             unit != NULL; unit = unit->next)
        {
            switch (unit->charId)
            {
            case 0xf1:
                if (FUN_0030b5a0(unit->datUnit, 0) == 0)
                {
                    result = 0;
                    goto fd660_1b4_done;
                }
                break;
            default:
                break;
            }
        }
        result = 1;
fd660_1b4_done:
        return result;
    default:
        result = 0;
        break;
    }
    return result;
}

// FUN_002FD7C0


u32 FUN_002fd7c0(void)
{
    void* encounter;
    u16 encounterId;

    encounter = *(void**)(DAT_007ce3ec + 0xbbc);
    if (encounter == NULL) {
        return 0;
    }
    encounterId = *(u16*)((u8*)encounter + 8);
    switch (encounterId) {
    case 0x1c8:
    case 0x1ad:
        return 0;
    default:
        break;
    }
    return 1;
}

// FUN_002FD820
void FUN_002fd820(void)
{
    u8* work;
    u16 encounterId;

    work = DAT_007ce3ec;
    encounterId = *(u16*)(*(u8**)(work + 0xbbc) + 8);
    switch (encounterId) {
    case 0x1ad:
        if (3 < *(u16*)(work + 0xb48)) {
            FUN_001fece0();
            FUN_001fee20();
        }
        FUN_001fed60();
        FUN_001feda0();
        FUN_001fee60();
        FUN_001fede0();
        break;
    default:
        break;
    }
}

/* BtlCore2 W419 negative: fd8a0 direct action->unit expressions held nd43 at 716/720B; retain cached data local. */
// FUN_002FD8A0
void FUN_002fd8a0(BtlAction* action)
{
    BtlUnit* data;

    switch (*(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8))
    {
    case 0x1a7:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0x10b:
                case 0x10c:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    case 0x1a9:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0x108:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    case 0x1aa:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0x10f:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    case 0x1ab:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0x110:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    case 0x1ae:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0x126:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    case 0x1af:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0xe9:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    case 0x1b0:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0xea:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    case 0x1b1:
    case 0x1b2:
    case 0x1b3:
        if ((action->unk_1a & 1) != 0)
        {
            data = action->unit;
            if (data->genus == 1)
            {
                switch (data->charId)
                {
                case 0xeb:
                case 0xec:
                case 0xed:
                case 0xee:
                case 0xef:
                case 0xf0:
                    FUN_00289860(action);
                    break;
                default:
                    break;
                }
            }
        }
        break;
    default:
        break;
    }
}

// FUN_002FDB70


u32 FUN_002fdb70(void)



{

  return ((*(u32 *)(DAT_007ce3ec + 0xc) & 0x200000) != 0) ^ 1;

}

// FUN_002FDB90


u32 FUN_002fdb90(void)



{

  return ((*(u32 *)(DAT_007ce3ec + 0xc) & 0x200000) != 0) ^ 1;

}

// FUN_002FDBB0
s32 FUN_002fdbb0(BtlAction* action, BtlUnit* unit)
{
    if ((*(u32*)(DAT_007ce3ec + 0xc) & 0x200000) != 0)
    {
        if ((*(u16*)(DAT_007ce42c + (u32)unit->charId * 0x58) & 1) != 0)
        {
            return !FUN_002d63b0(unit, ((s16*)&action->target)[27],
                                 FUN_002d6290());
        }
        if (FUN_002d6290() == 0 &&
            (*(u16*)(DAT_007ce42c + (u32)unit->charId * 0x58) & 0x20) != 0)
        {
            return 1;
        }
    }
    return 0;
}

// FUN_002FDCB0


u8 FUN_002fdcb0(int param_1)



{

  u8 bVar1;

  

  if ((*(u32 *)(DAT_007ce3ec + 0xc) & 0x200000) == 0) {

    bVar1 = 0;

  }

  else {

    bVar1 = *(u8 *)(param_1 + 0xa2) == '\x01';

  }

  return bVar1;

}

// FUN_002FDCF0


u32 FUN_002fdcf0(int param_1, int param_2)
{
    u8 value;

    if ((*(u32*)(DAT_007ce3ec + 0xc) & 0x200000) != 0)
    {
        value = *(u8*)(param_1 + 0xa2);
        if (value == 1 && value == *(u8*)(param_2 + 0xa2))
        {
            return 0;
        }
    }
    return 1;
}

// FUN_002FDD40


u8 FUN_002fdd40(BtlUnit* first, BtlUnit* second)
{
    if ((*(u32*)(DAT_007ce3ec + 0xc) & 0x200000) == 0)
    {
        return 0;
    }
    if (first->genus == UNIT_GENUS_EC)
    {
        return 0;
    }
    if (first == second)
    {
        return 0;
    }
    return first->genus == second->genus;
}

// FUN_002FDDB0


void FUN_002fddb0(BtlUnit* unit, RwV3d* position)
{
    position->x = (f32)(unit->unk_94 * 25 - 0x6d6);
    position->y = unit->pos.y;
    position->z = (f32)(unit->unk_96 * 25 - 0x6d6);
    position->z = unit->sphereRadius * unit->scale + 200.0f + position->z;
}

// FUN_002FDE40
u32 FUN_002fde40(BtlAction* action, f32* position)
{
    u16 encounterId;

    if ((*(u32*)(DAT_007ce3ec + 0xc) & 0x200000) == 0)
    {
        return 0;
    }
    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1a7:
        return func_002eee20(action, position);
    case 0x1aa:
        return func_002f1b60(action, position);
    default:
        return 0;
    }
}

// FUN_002FDED0


code FUN_002fded0(s16 param_1)
{
    code result;
    code caseResult;
    u16 encounterId;

    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1b4:
        /* Source case order is intentional: MWCC emits the retail reverse order. */
        switch (param_1)
        {
        case 0x125:
        case 0x127:
        case 0x128:
        case 0x126:
            *(s32*)(DAT_007ce3ec + 0xb5c) = param_1;
            break;
        default:
            *(s32*)(DAT_007ce3ec + 0xb5c) = -1;
            break;
        }
        switch (param_1)
        {
        case 0x125:
        case 0x127:
        case 0x128:
            caseResult = (code)func_002f6bc0;
            break;
        default:
            caseResult = 0;
            break;
        }
        result = caseResult;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

// FUN_002FDFA0


u8 FUN_002fdfa0(void)
{
    u16 encounterId;

    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
        case 0x1b4:
            return 0;
        default:
            return 1;
    }
}

// FUN_002FDFE0


u32 FUN_002fdfe0(int param_1)
{
    BtlCamera* camera;
    BtlAction* action;
    BtlAction* targetAction;
    u16 encounterId;

    camera = (BtlCamera*)(uintptr_t)param_1;
    encounterId = *(u16*)(*(u8**)(DAT_007ce3ec + 0xbbc) + 8);
    switch (encounterId)
    {
    case 0x1b4:
        action = camera->action;
        targetAction = action->target.targetedActions[0];
        if (targetAction != NULL &&
            action->target.targetedCount == 1 &&
            FUN_002d6370((s16)action->target.specificId) == 1 &&
            FUN_003088b0(camera->action->target.specificId) == 0 &&
            targetAction->unit->genus == UNIT_GENUS_EC &&
            targetAction->unit->charId == 0xf1)
            return 1;
        break;
    default:
        break;
    }
    return 0;
}



































// FUN_002FE0B0
#ifndef PC_BUILD
asm void FUN_002fe0b0(float param_1, u8* param_2, u64 param_3, u64 param_4,
                  u64 param_5)
{
  .set noreorder
  .word 0x27bdfe60
  .word 0xffbf0090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x46006686
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0c138d8c
  .word 0x00000000
  .word 0x0040802d
  .word 0xc440000c
  .word 0x46800020
  .word 0x3c034420
  .word 0x4483a800
  .word 0x00000000
  .word 0x4600ae43
  .word 0xc4400010
  .word 0x46800020
  .word 0x3c0243e0
  .word 0x4482a000
  .word 0x00000000
  .word 0x4600a603
  .word 0x00000000
  .word 0x44802800
  .word 0x00000000
  .word 0x461a2832
  .word 0x45000005
  .word 0x00000000
  .word 0x46002dc6
  .word 0x46002d86
  .word 0x10000013
  .word 0x00000000
  .word 0x3c0243a0
  .word 0x44822000
  .word 0x00000000
  .word 0x46002007
  .word 0xc783826c
  .word 0x46032818
  .word 0x461a05dc
  .word 0x3c024360
  .word 0x44821000
  .word 0x00000000
  .word 0x46001047
  .word 0xc7808270
  .word 0x46002818
  .word 0x461a0d9c
  .word 0x46032818
  .word 0x461a255c
  .word 0x46002818
  .word 0x461a151c
  .word 0x3c150096
  .word 0x26b50090
  .word 0x24040007
  .word 0x24050002
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050001
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x0220282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0200282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x0260282d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x0240282d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c020096
  .word 0xc441008c
  .word 0x3c023f80
  .word 0x44821000
  .word 0xc6c00084
  .word 0x46001003
  .word 0xe7b700a0
  .word 0xe7b600a4
  .word 0xe7a100a8
  .word 0x92820000
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a200c0
  .word 0x92820001
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a200c4
  .word 0x92820002
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a200c8
  .word 0x92820003
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a200cc
  .word 0xe7a000b8
  .word 0xafa000b0
  .word 0xafa000b4
  .word 0xe7b700e0
  .word 0xe7b400e4
  .word 0xe7a100e8
  .word 0x92820000
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a20100
  .word 0x92820001
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a20104
  .word 0x92820002
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a20108
  .word 0x92820003
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a2010c
  .word 0xe7a000f8
  .word 0xafa000f0
  .word 0xe7b800f4
  .word 0xe7b50120
  .word 0xe7b60124
  .word 0xe7a10128
  .word 0x92820000
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a20140
  .word 0x92820001
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a20144
  .word 0x92820002
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a20148
  .word 0x92820003
  .word 0x04400006
  .word 0x00000000
  .word 0x44821000
  .word 0x00000000
  .word 0x468010a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44831000
  .word 0x00000000
  .word 0x468010a0
  .word 0x46021080
  .word 0xe7a2014c
  .word 0xe7a00138
  .word 0xe7b90130
  .word 0xafa00134
  .word 0xe7b50160
  .word 0xe7b40164
  .word 0xe7a10168
  .word 0x92820000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0xe7a10180
  .word 0x92820001
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0xe7a10184
  .word 0x92820002
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0xe7a10188
  .word 0x92820003
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x46800860
  .word 0x46010840
  .word 0xe7a1018c
  .word 0xe7a00178
  .word 0xe7b90170
  .word 0xe7b80174
  .word 0x24040004
  .word 0x27a500a0
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */






























/* Retail reconstruction: state setup 0x2fe7d4-0x2fe880, vertex setup
   0x2fe888-0x2fe9cc, 40-iteration strip 0x2fe9e0-0x2feb60, and final
   vertex/draw path 0x2feb70-0x2fecbc. */
// FUN_002FE780
#ifndef PC_BUILD
asm void FUN_002fe780(float param_1, u8* param_2, u8* param_3,
                  u64 param_4, u64 param_5)
{
  .set noreorder
  .word 0x27bdf4f0
  .word 0xffbf0080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x46006586
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040a82d
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x0240282d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x0220282d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c020096
  .word 0xc455008c
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc6a00084
  .word 0x46000d03
  .word 0x3c024815
  .word 0x44820000
  .word 0x00000000
  .word 0x46000004
  .word 0x4600b582
  .word 0x4480b800
  .word 0x3c0243a0
  .word 0xafa20090
  .word 0x3c024360
  .word 0xafa20094
  .word 0xe7b50098
  .word 0xe7b400a8
  .word 0x92820000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000b0
  .word 0x92820001
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000b4
  .word 0x92820002
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000b8
  .word 0x92820003
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000bc
  .word 0x64100001
  .word 0x0000882d
  .word 0x10000061
  .word 0x00000000
  .word 0x4600bb06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c0243a0
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600b61c
  .word 0x4600bb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c024360
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600b01c
  .word 0x3202ffff
  .word 0x00021180
  .word 0x005d1021
  .word 0x24440090
  .word 0xe4980000
  .word 0xe4800004
  .word 0xe4950008
  .word 0xe4940018
  .word 0x92620000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4800020
  .word 0x92620001
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4800024
  .word 0x92620002
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4800028
  .word 0x92620003
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe480002c
  .word 0x26020001
  .word 0x3050ffff
  .word 0xc7808268
  .word 0x4600bdc0
  .word 0x26220001
  .word 0x3051ffff
  .word 0x3222ffff
  .word 0x28420028
  .word 0x1440ff9d
  .word 0x00000000
  .word 0x3202ffff
  .word 0x00022180
  .word 0xc7a000d0
  .word 0x009d1821
  .word 0xe4600090
  .word 0xc7a000d4
  .word 0xe4600094
  .word 0x24620098
  .word 0xc7a000d8
  .word 0xe4400000
  .word 0xe4550000
  .word 0xe47400a8
  .word 0x92620000
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x009d1021
  .word 0xe44000b0
  .word 0x92620001
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x009d1021
  .word 0xe44000b4
  .word 0x92620002
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x009d1021
  .word 0xe44000b8
  .word 0x92620003
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x009d1021
  .word 0xe44000bc
  .word 0x24040005
  .word 0x27a50090
  .word 0x2406002a
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0b10
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W373 pragma sweep nd/obj: base 889/1356; singles LI=889/1356 CS=982/1444(over) LT=889/1356 PR=837/1348 SR=889/1356 DA=887/1356. */
/* Pair nd/obj: LI+CS=982/1444 LI+LT=889/1356 LI+PR=837/1348 LI+SR=889/1356 LI+DA=887/1356 CS+LT=982/1444 CS+PR=982/1444 CS+SR=982/1444 CS+DA=982/1444 LT+PR=837/1348 LT+SR=889/1356 LT+DA=887/1356 PR+SR=837/1348 PR+DA=837/1348 SR+DA=887/1356; retain PR off. */
#pragma opt_propagation off
/* W414 negative: replacing the state-2 render-state pair with FUN_002fe780 worsened nd837->852 (1352B); retain baseline. */
// FUN_002FED10
#ifndef PC_BUILD
asm u32 FUN_002fed10(int param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x0000902d
  .word 0x0000802d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00102080
  .word 0x3c02006a
  .word 0x2442aa50
  .word 0x00441821
  .word 0x009d1021
  .word 0x8c640000
  .word 0x24450050
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020007
  .word 0x1440fff2
  .word 0x00000000
  .word 0x8e31003c
  .word 0x92230000
  .word 0x24020003
  .word 0x10620102
  .word 0x00000000
  .word 0x24020002
  .word 0x106200cd
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600102
  .word 0x00000000
  .word 0x10000100
  .word 0x00000000
  .word 0x9782b81c
  .word 0x144000c1
  .word 0x00000000
  .word 0x9782b81a
  .word 0x24420001
  .word 0xa782b81a
  .word 0x9782b81a
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0c0ca534
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
  .word 0x4615ad02
  .word 0x4614a802
  .word 0x4600a802
  .word 0x4600a882
  .word 0x3c023f80
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602a85d
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3007f
  .word 0x27a4007c
  .word 0x0000282d
  .word 0x0c0d6118
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a20078
  .word 0xa3a20079
  .word 0xa3a2007a
  .word 0x3c024320
  .word 0x44820800
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140001
  .word 0x46000842
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0xa3a3007b
  .word 0x240200ff
  .word 0xa3a20074
  .word 0xa3a20075
  .word 0xa3a20076
  .word 0x93a2007f
  .word 0xa3a20077
  .word 0x9782b81a
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x27a40078
  .word 0x27a50074
  .word 0x24060044
  .word 0x3c020003
  .word 0x34471801
  .word 0x0c0bf9e0
  .word 0x00000000
  .word 0x0c0ca554
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x27849c80
  .word 0x24050054
  .word 0x3c020003
  .word 0x34461801
  .word 0x24070001
  .word 0x0c0bf82c
  .word 0x00000000
  .word 0x9782b81a
  .word 0x28420014
  .word 0x14400041
  .word 0x00000000
  .word 0x24020003
  .word 0xa2220000
  .word 0x1000003d
  .word 0x00000000
  .word 0x2442ffff
  .word 0xa782b81c
  .word 0x3c023f80
  .word 0x44826000
  .word 0x27849c80
  .word 0x24050044
  .word 0x3c020003
  .word 0x34461801
  .word 0x24070001
  .word 0x0c0bf82c
  .word 0x00000000
  .word 0x96230006
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0xc79481f4
  .word 0x10000002
  .word 0x00000000
  .word 0xc7948274
  .word 0x240200ff
  .word 0xa3a2007c
  .word 0xa3a2007d
  .word 0xa3a2007e
  .word 0x96230006
  .word 0x24020001
  .word 0x14620004
  .word 0x00000000
  .word 0x24020010
  .word 0x10000002
  .word 0x00000000
  .word 0x24020018
  .word 0xa3a2007f
  .word 0x4600a306
  .word 0x27a4007c
  .word 0x24050044
  .word 0x3c020003
  .word 0x34461801
  .word 0x24070002
  .word 0x0c0bf82c
  .word 0x00000000
  .word 0x24020005
  .word 0xa3a2007f
  .word 0x4600a306
  .word 0x27a4007c
  .word 0x24050048
  .word 0x3c020003
  .word 0x34461801
  .word 0x24070002
  .word 0x0c0bf82c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0c0421c4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x0c042170
  .word 0x00000000
  .word 0xa380b818
  .word 0x2412ffff
  .word 0x0000802d
  .word 0x1000000d
  .word 0x00000000
  .word 0x00102080
  .word 0x3c02006a
  .word 0x2442aa50
  .word 0x00441821
  .word 0x009d1021
  .word 0x8c640000
  .word 0x8c450050
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x26100001
  .word 0x2e020007
  .word 0x1440fff2
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050044
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x344517fb
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset
