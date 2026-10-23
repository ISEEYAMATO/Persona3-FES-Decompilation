#include "Battle/btlCamera.h"
#include "Battle/battle.h"
#include "Battle/btlUnit.h"
#include "Battle/btlBoss.h"
#include "Kosaka/k_view.h"
#include "Kernel/Kwln/kwln.h"
#include "Main/Battle/Data/datUnit.h"
#include "Graphics/primitive.h"
#include "Battle/btlAction.h"
#include "libm.h"

/* Recovered battle-misc support prelude */
typedef int (*code)(...);
typedef union Local128 { u64 d[2]; u32 w[4]; } Local128;
typedef struct LocalCameraPacket {
  Local128 flag80;
  Local128 flag20;
  Local128 flag8;
  Local128 flag2;
  Local128 flag1;
  f32 f100;
  f32 f104;
  f32 f108;
  f32 f10c;
  f32 f110;
  f32 f114;
  f32 f118;
  f32 f11c;
  RwV3d center;
} LocalCameraPacket;
#pragma alias FUN_002b0280_legacy FUN_002b0280
extern void FUN_002b0280_legacy(float param_1,u64 param_2,long param_3,long param_4);
u32 FUN_002a32f0(int param_1);
u32 FUN_002a3380(u8* camera);
u32 FUN_002a3420(int param_1);
u8 FUN_002a3520(int param_1);
u64 FUN_002a3550(u8* camera);
u32 FUN_002a3590(float *param_1, float *param_2);
s32 FUN_002a3750(BtlCamera* camera,u32 unit);
extern s16 btlUnit00282c30(BtlUnit* unit);
extern s16 func_002835e0(BtlUnit* unit,u16 id,f32 scale);
extern s16 btlUnitGetAnimFrame(BtlUnit* unit);
u8 FUN_002a3820(int param_1);
#pragma alias FUN_002a3820_u32 FUN_002a3820
extern u32 FUN_002a3820_u32(int param_1);
extern void FUN_004c31b0_typed(RwMatrix *matrix, const RwV3d *axis, f32 angle, s32 mode);
#pragma alias FUN_004c31b0_typed FUN_004c31b0
u32 FUN_002a3850(int param_1);
u16 FUN_002a3a80(void);
void FUN_002a3a90(int param_1);
void FUN_002a3e80(u8* param_2,u8* param_3,u8* param_4,u32 param_5,float param_1);
 #pragma alias FUN_002a3e80_ab330 FUN_002a3e80
 extern void FUN_002a3e80_ab330(BtlAction* action, RwV3d* unitPos,
                                 f32* targetPos, s32 mode, f32 distance);
#pragma alias FUN_002a3e80_side FUN_002a3e80
extern void FUN_002a3e80_side(BtlAction* action, RwV3d* unitPos,
                              f32* targetPos, f32 distance, s32 mode);
extern u64 FUN_00280050();
#pragma alias FUN_00280050_typed FUN_00280050
extern void FUN_00280050_typed(BtlUnit* unit, RwV3d* out);
extern f32 gp0xffff80e0;
u64 FUN_0027ffb0();
#pragma alias FUN_002a3520_result FUN_002a3520
u32 FUN_002a3520_result(int param_1);
#pragma alias FUN_002fdbb0_result FUN_002fdbb0
extern u32 FUN_002fdbb0_result(BtlAction* action, BtlUnit* persona);
extern f32 fGpffff8090;
#pragma alias FUN_002a3520_s32 FUN_002a3520
extern s32 FUN_002a3520_s32(void);
#pragma alias FUN_002a3550_s32 FUN_002a3550
extern s32 FUN_002a3550_s32(u8* camera);
/* Target-local ABI aliases for FUN_002b3980. */
#pragma alias FUN_002a3e80_action FUN_002a3e80
extern void FUN_002a3e80_action(void* action, u32 arg_1, u32 arg_2, u32 arg_3, u32 arg_4);
extern u8* DAT_007ce3ec;
void FUN_002a42a0(void);
void FUN_002a4470(f32 *param_1, f32 *param_2);
void FUN_002a44b0(f32 *param_1, f32 *param_2);
void FUN_002a44f0(f32 *param_1, f32 *param_2);
void FUN_002a4530(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_002a4690(void* out, const void* first, const void* second, const void* config);
void FUN_002a4a70(void);
void FUN_002a4c20(void);
extern f32 DAT_007cae38;
extern f32 DAT_007caf3c;
extern f32 DAT_007caf40;
extern f32 DAT_007caf44;
extern f32 DAT_007caf48;
extern f32 DAT_007caf4c;
extern f32 DAT_007caf50;
extern f32 DAT_007caf54;
extern code DAT_0096017c[];
extern int iGpffffb710;
extern u16 (*gp0xffffb710)[14];
extern u8* iGpffffb6fc;
extern u8 DAT_006941d4[];
extern u8 DAT_00694c90[];
extern u8* DAT_007ce3ec;
void FUN_002a42a0(void);
void FUN_002a4470(f32 *param_1, f32 *param_2);
void FUN_002a44b0(f32 *param_1, f32 *param_2);
void FUN_002a44f0(f32 *param_1, f32 *param_2);
void FUN_002a4530(float *param_1,float *param_2,float *param_3,float *param_4);
void FUN_002a4690(void* out, const void* first, const void* second, const void* config);
/* b6070 exact call signatures */
#pragma alias FUN_00300580_b6070 FUN_00300580
extern u32 FUN_00300580_b6070(void* unitData, u32 flags);
#pragma alias FUN_00280130_b6070 FUN_00280130
extern void FUN_00280130_b6070(BtlUnit* unit, RwV3d* out);
#pragma alias FUN_004be1e0_b6070 FUN_004be1e0
extern void FUN_004be1e0_b6070(RwV3d* out, const RwV3d* basis, s32 count, const void* source);
#pragma alias FUN_004c31b0_b6070 FUN_004c31b0
extern void FUN_004c31b0_b6070(RwMatrix* matrix, const RwV3d* axis, f32 angle, s32 mode);
#pragma alias FUN_004c69f0_b6070 FUN_004c69f0
extern f32 FUN_004c69f0_b6070(RwV3d* out, const RwV3d* in);
#pragma alias FUN_004c6c60_b6070 FUN_004c6c60
extern void FUN_004c6c60_b6070(RwV3d* out, const RwV3d* in, const RwMatrix* matrix);
#pragma alias FUN_002a4690_b6070 FUN_002a4690
extern void FUN_002a4690_b6070(void* out, const void* first, const void* second, const void* config);
#pragma alias FUN_002a2290_b6070 FUN_002a2290
extern void FUN_002a2290_b6070(BtlCamera* camera, const RwV3d* start, const RwV3d* end, s32 mode);
#pragma alias FUN_002a3110_b6070 FUN_002a3110
extern void FUN_002a3110_b6070(BtlCamera* camera, f32 step);
#pragma alias FUN_002a3160_typed FUN_002a3160
extern void FUN_002a3160_typed(BtlCamera* camera, f32 step);
void FUN_002a4a70(void);
void FUN_002a4c20(void);
extern f32 DAT_007cae38;
extern f32 DAT_007caf3c;
extern f32 DAT_007caf40;
extern f32 DAT_007caf44;
extern f32 DAT_007caf48;
extern f32 DAT_007caf4c;
extern f32 DAT_007caf50;
extern f32 DAT_007caf54;
extern code DAT_00960178[];
extern code DAT_0096017c[];
extern int iGpffffb710;
extern u16 (*gp0xffffb710)[14];
extern u8* iGpffffb6fc;
extern u8 DAT_006941d4[];
extern u8 DAT_00694c90[];
void FUN_002a4a70(void);
void FUN_002a4c20(void);
extern f32 DAT_007cae38;
extern f32 DAT_007caf3c;
extern f32 DAT_007caf40;
extern f32 DAT_007caf44;
extern f32 DAT_007caf48;
extern f32 DAT_007caf4c;
extern f32 DAT_007caf50;
extern f32 DAT_007caf54;
extern code DAT_00960178[];
extern code DAT_0096017c[];
extern int iGpffffb710;
extern u16 (*gp0xffffb710)[14];
extern u8* iGpffffb6fc;
extern u8 DAT_006941d4[];
extern u8 DAT_00694c90[];

extern f32 FUN_002d21e0(f32 target, f32* motion);
extern f32 fGpffff807c;
extern f32 fGpffff80e8;
extern u64 FUN_004c6c60(RwV3d* out, RwV3d* in, RwMatrix* matrix);
extern u64 FUN_002d1de0();
extern f32 fGpffff83cc;
extern void FUN_002a3010(BtlCamera* camera, f32 step);
extern u32 FUN_002a2ed0(u8* param_1,f32* param_2,f32* param_3);
extern RwV3d D_00697880;
extern RwV3d D_006978A0;
typedef struct F32Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} F32Vec4;
extern RwV3d D_00697870;
extern f32 FUN_002d1fd0(f32* from, f32* to, f32* eye, f32* out);
#pragma alias FUN_002d1f30_b21f0v2 FUN_002d1f30
extern f32 FUN_002d1f30_b21f0v2(RtQuat *first, RtQuat *second);
#pragma alias FUN_00280130_b21f0v2 FUN_00280130
extern void FUN_00280130_b21f0v2(BtlUnit *unit, RwV3d *out);
#pragma alias FUN_004c69f0_b21f0v2 FUN_004c69f0
extern f32 FUN_004c69f0_b21f0v2(RwV3d *out, RwV3d *in);
#pragma alias FUN_004c6b20_b21f0v2 FUN_004c6b20
extern void FUN_004c6b20_b21f0v2(RwV3d *out, RwV3d *in);
extern void func_002af960(BtlCamera* camera);
extern f32 fGpffff8060;
extern f32 fGpffff8030;
extern f32 fGpffff8134;
extern u8* iGpffffb73c;
extern f32 fGpffff80c0;
extern u32 effMiscRand(void* state);
extern int FUN_00198590();
extern void FUN_004c9d70(int handle, f32 value);
extern void FUN_001a4580(int handle, f32 value);
extern u32 FUN_0048dab0(int, int, u32);
extern f32 fGpffff8064;
extern f32 fGpffff8078;
extern f32 fGpffff8080;
extern f32 fGpffff8084;
extern f32 fGpffff8088;
extern f32 fGpffff80c4;
extern f32 fGpffff811c;
extern void btlUnit002880e0(BtlUnit* unit, u16 param_2);
extern RwV3d D_00697890;
extern u8 D_00697898[];
extern float gp0xffff8070;
extern f32 gp0xffff8030;
extern f32 gp0xffff8094;
extern f32 fGpffff82c8;
extern f32 fGpffff805c;
extern u32 FUN_002a2050(u16* camera, f32* pos, f32* rot);
extern void FUN_002a1e00(f32* out, f32* start, f32* end, f32 t);
extern f32 FUN_00280870(u32 param_1, u32 param_2, void* param_3, void* param_4, void* param_5, u32 param_6);
extern f32 tanf(f32 angle);
extern f32 fGpffff8098;
#pragma alias func_00280870_ae740 func_00280870
extern f32 func_00280870_ae740(u32 mode, u32 enabled,
                                f32* start, f32* end, f32* extra,
                                u32 include);
#pragma alias FUN_002c0880_ae740 FUN_002c0880
extern void *FUN_002c0880_ae740(u8* data);
#pragma alias FUN_002a3850_ae740 FUN_002a3850
extern u32 FUN_002a3850_ae740(BtlCamera* camera);
#pragma alias FUN_004be310_ae740 FUN_004be310
extern void FUN_004be310_ae740(const RtQuat* first, const RtQuat* second, RwV3d* out);
#pragma alias FUN_004c6b20_ae740 FUN_004c6b20
extern void FUN_004c6b20_ae740(f32* out, f32* in);
#pragma alias FUN_004be1e0_ae740 FUN_004be1e0
extern void FUN_004be1e0_ae740(RwV3d* out, const RwV3d* basis, u32 mode, const void* source);
#pragma alias FUN_004c69f0_ae740 FUN_004c69f0
extern f32 FUN_004c69f0_ae740(RwV3d* out, RwV3d* in);
#pragma alias FUN_00280050_ae740 FUN_00280050
extern void FUN_00280050_ae740(BtlUnit* unit, RwV3d* out);
#pragma alias FUN_002a2170_ae740 FUN_002a2170
extern void FUN_002a2170_ae740(BtlCamera* camera, void* out);
#pragma alias FUN_004be1e0_typed FUN_004be1e0
extern void FUN_004be1e0_typed(RwV3d *out, const RwV3d *basis, s32 mode, const void *source);
#pragma alias FUN_004be310_typed FUN_004be310
extern void FUN_004be310_typed(const void *first, const void *second, void *out);
#pragma alias FUN_004c6b20_typed FUN_004c6b20
extern void FUN_004c6b20_typed(f32 *out, f32 *in);
extern u8 DAT_006978A0[];
extern u8 DAT_006978A0_arr[];
extern u8 DAT_00697880_arr[];
extern f32 FUN_002d1f30_typed(const f32 *first, const f32 *second);
#pragma alias FUN_002d1f30_typed FUN_002d1f30



extern void FUN_002a5430(BtlCamera* camera);
extern void FUN_002a5460(BtlCamera* camera);
extern void btlCameraFrameActionDefault(BtlCamera* camera);
extern void btlCameraFrameActionClose(BtlCamera* camera);
extern void btlCameraFrameActionPair(BtlCamera* camera);
extern void btlCameraFrameActionQuarter(BtlCamera* camera);
extern void btlCameraFrameActionDuel(BtlCamera* camera);
extern void FUN_002a6ed0(void);
extern void btlCameraFrameActionSide(BtlCamera* camera);
extern void func_002a7380(void);
extern void btlCameraFrameActionTarget(BtlCamera* camera);
extern void func_002a7820(void);
extern void func_002ac540(BtlCamera* camera);
extern void func_002ac6e0(BtlCamera* camera);
extern void func_002ad680(BtlCamera* camera);
extern void func_002ad770(BtlCamera* camera);
extern void func_002adc30(BtlCamera* camera);
extern void btlCameraNoop002adc70(void);
extern void func_002adc80(BtlCamera* camera);
extern void btlCameraNoop002adcc0(void);
extern void func_002adcd0(BtlCamera* camera);
extern void func_002ADD00(void);
extern void func_002ae150(BtlCamera* camera);
extern void func_002ae250(void);
extern void func_002ae260(BtlCamera* camera);
extern void func_002ae4c0(void);
extern void func_002ae4d0(BtlCamera* camera);
extern void func_002ae730(void);
extern void func_002af7f0(BtlCamera* camera);
extern void func_002af850(BtlCamera* camera);
extern void func_002af960(BtlCamera* camera);
extern void FUN_002b0210(int param_1);
extern void FUN_002b1020(u64 param_1);
extern void btlCameraNoOp(void);
extern void FUN_002b1bc0(int param_1);
extern void FUN_002b1cf0(int param_1);
extern void FUN_002b1e00(int param_1);
extern void FUN_002b2060(int param_1);
extern void FUN_002b2800(BtlCamera *camera);
extern void FUN_002b2880(int param_1);
extern void FUN_002b2940(void *arg0);
extern void FUN_002b2ea0(void);
extern void FUN_002b32c0(u16* camera);
extern void func_002b3330(void);
extern void FUN_002b3340(BtlCamera* camera);
extern void FUN_002b3680(void);
extern void FUN_002b3690(BtlCamera* camera);
extern void FUN_002b3980(BtlCamera* camera);
extern void FUN_002b3c60(BtlCamera* camera);
extern void FUN_002b3f80(BtlCamera* camera);
extern void FUN_002b41e0(BtlCamera* camera);
extern void FUN_002b4720(int param_1);
extern void FUN_002b47b0(BtlCamera* camera);
extern void FUN_002b4bc0(int param_1);
extern void FUN_002b4c00(int param_1);
extern void FUN_002b4f40(int param_1);
extern void FUN_002b4fd0(void);
extern void FUN_002b5000(int param_1);
extern void FUN_002b5240(BtlCamera* camera);
extern void FUN_002b55d0(void);
extern void FUN_002b5600(void* param_1);
extern void FUN_002b5650(int param_1);
extern void FUN_002b56e0(u8* param_1);
extern void FUN_002b58f0(BtlCamera* param_1);
extern void FUN_002b5cd0(BtlCamera* camera);
void FUN_002b6db0(int param_1);
extern void FUN_002b6460(BtlCamera* camera);

static const BtlCameraStateEntry sCameraStateEntries[] =
{
    {NULL, NULL, 0, 0, NULL}, // BTLCAMERA_STATE_NULL
    {NULL, NULL, 1, 0, "NOP"}, // NOP
    {FUN_002b3690, NULL, 1, 1, "ENCOUNT"}, // ENCOUNT
    {FUN_002b47b0, NULL, 1, 1, "ANALYZE"}, // ANALYZE
    {(void(*)(BtlCamera*))FUN_002b4bc0, (void(*)(BtlCamera*))FUN_002b4c00, 1, 1, "ASSIST"}, // ASSIST
    {FUN_002b41e0, (void(*)(BtlCamera*))FUN_002b4720, 1, 1, "REINFORCE"}, // REINFORCE
    {(void(*)(BtlCamera*))FUN_002b4f40, (void(*)(BtlCamera*))FUN_002b4fd0, 1, 1, "ROUNDUP"}, // ROUNDUP
    {(void(*)(BtlCamera*))FUN_002b5000, NULL, 1, 1, "ESCAPE"}, // ESCAPE
    {FUN_002b5240, NULL, 1, 1, "ESCAPE_MES"}, // ESCAPE_MES
    {FUN_002a5430, FUN_002a5460, 1, 1, "OWN"}, // OWN
    {func_002af960, (void(*)(BtlCamera*))FUN_002b0210, 1, 1, "ATTACK_SHORT"}, // ATTACK_SHORT
    {(void(*)(BtlCamera*))FUN_002b1020, (void(*)(BtlCamera*))btlCameraNoOp, 1, 1, "ATTACK_LONG"}, // ATTACK_LONG
    {(void(*)(BtlCamera*))FUN_002b1e00, (void(*)(BtlCamera*))FUN_002b2060, 1, 1, "ATTACK_DOWN_P"}, // ATTACK_DOWN_P
    {FUN_002b2800, (void(*)(BtlCamera*))FUN_002b2880, 1, 1, "ATTACK_DOWN_E"}, // ATTACK_DOWN_E
    {(void(*)(BtlCamera*))FUN_002b2940, (void(*)(BtlCamera*))FUN_002b2ea0, 1, 1, "ATTACK_SLIP"}, // ATTACK_SLIP
    {(void(*)(BtlCamera*))FUN_002b1bc0, (void(*)(BtlCamera*))FUN_002b1cf0, 1, 1, "ATTACK_COMB"}, // ATTACK_COMB
    {btlCameraFrameActionDefault, btlCameraFrameActionClose, 1, 1, "SKILL_RECITE_P"}, // SKILL_RECITE_P
    {btlCameraFrameActionPair, btlCameraFrameActionQuarter, 1, 1, "SKILL_RECITE_E"}, // SKILL_RECITE_E
    {btlCameraFrameActionDuel, (void(*)(BtlCamera*))FUN_002a6ed0, 1, 1, "MOVE_TARGET"}, // MOVE_TARGET
    {btlCameraFrameActionSide, (void(*)(BtlCamera*))func_002a7380, 1, 1, "MOVE_TARGET_A"}, // MOVE_TARGET_A
    {btlCameraFrameActionTarget, (void(*)(BtlCamera*))func_002a7820, 1, 1, "MOVE_HOME"}, // MOVE_HOME
    {func_002ac540, func_002ac6e0, 1, 1, "SKILL_EXEC_PC"}, // SKILL_EXEC_PC
    {func_002ad680, func_002ad770, 1, 1, "SKILL_EXEC_EC"}, // SKILL_EXEC_EC
    {func_002adc30, (void(*)(BtlCamera*))btlCameraNoop002adc70, 1, 0, "SKILL_EXEC_ONE"}, // SKILL_EXEC_ONE
    {func_002adc80, (void(*)(BtlCamera*))btlCameraNoop002adcc0, 1, 0, "SKILL_EXEC_REC"}, // SKILL_EXEC_REC
    {func_002adcd0, (void(*)(BtlCamera*))func_002ADD00, 1, 1, "SKILL_EXEC_PS"}, // SKILL_EXEC_PS
    {func_002ae260, (void(*)(BtlCamera*))func_002ae4c0, 1, 1, "PERSONA"}, // PERSONA
    {func_002ae4d0, (void(*)(BtlCamera*))func_002ae730, 1, 1, "OVERLIMIT"}, // OVERLIMIT
    {func_002ae150, (void(*)(BtlCamera*))func_002ae250, 0, 1, "COMMAND"}, // COMMAND
    {func_002af7f0, func_002af850, 0, 1, "TARGET"}, // TARGET
    {(void(*)(BtlCamera*))FUN_002b32c0, (void(*)(BtlCamera*))func_002b3330, 0, 1, "FREE"}, // FREE
    {FUN_002b3340, (void(*)(BtlCamera*))FUN_002b3680, 0, 1, "RESET"}, // RESET
    {FUN_002b3980, NULL, 1, 0, "WIN"}, // WIN
    {FUN_002b3c60, NULL, 1, 0, "CONDITION"}, // CONDITION
    {FUN_002b3f80, NULL, 1, 1, "ORDER"}, // ORDER
    {(void(*)(BtlCamera*))FUN_002b55d0, (void(*)(BtlCamera*))FUN_002b5600, 0, 1, "CHANGE FORM"}, // CHANGE FORM
    {(void(*)(BtlCamera*))FUN_002b5650, (void(*)(BtlCamera*))FUN_002b56e0, 0, 1, "NYX FEATHER"}, // NYX FEATHER
    {FUN_002b58f0, NULL, 1, 0, "ALL"}, // ALL
    {FUN_002b5cd0, NULL, 1, 0, "ENEMY_ALL"}, // ENEMY_ALL
    {FUN_002b6460, NULL, 1, 0, "TARGET_ONLY"}, // TARGET_ONLY
};

// FUN_002a31b0
void btlCameraUpdate(BtlCamera* camera)
{
    f32 step;
    f32 t;
    u16 flags;
    u8* g;

    flags = *(u16*)camera;
    if ((flags & 2) != 0)
    {
        step = FUN_002d21e0(1.0f, (f32*)((u8*)camera + 0x84)) - *(f32*)((u8*)camera + 0x80);
    }
    else if ((flags & 4) != 0)
    {
        t = *(f32*)((u8*)camera + 0x94);
        if (t < fGpffff83cc)
        {
            t = t + 1.0f / *(f32*)((u8*)camera + 0x84);
            *(f32*)((int)camera + 0x94) = t;
            step = 0.0f + -1.0f + (-2.0f * t) * t + 4.0f * t;
            step = (step - 0.5f) * 2.0f;
            step -= *(f32*)((u8*)camera + 0x80);
        }
        else
        {
            step = 0.0f;
        }
    }
    else
    {
        step = 1.0f / *(f32*)((u8*)camera + 0x84);
    }
    *(f32*)((u8*)camera + 0x80) += step;
    FUN_002a3010(camera, step);
    g = iGpffffb6fc;
    FUN_002a2ed0(g + 0x20, (f32*)(g + 0xbc), (f32*)(g + 0xc8));
}

// FUN_002A32F0


u32 FUN_002a32f0(int param_1)
{
    extern u64 FUN_00300580();
    int unit;

    unit = *(int*)(param_1 + 0xe0);
    if (unit == 0)
        return 0;
    if (FUN_002fdfe0(param_1) != 0)
        return 1;
    if (FUN_00300580(*(u32*)(*(int*)(unit + 0x30) + 0xa2c), 0x80) != 0)
        return 1;
    return FUN_002d5f50(unit) != 0;
}

// FUN_002A3380



u32 FUN_002a3380(u8* param_1)
{
  int action;
  int x;
  u16 id;
  u16 n;

  action = *(int *)(param_1 + 0xe0);
  x = *(int *)(*(int *)(action + 0x30) + 0xa00);
  id = *(u16 *)(action + 0x6e);
  if (x != 0) {
    n = *(u16 *)(x + 0xa4);
    if ((*(u16 *)(iGpffffb73c + ((u32)n * 10 + (u32)n) * 8) & 1) != 0) {
      return 0;
    }
  }
  if ((gp0xffffb710[id][1] & 0x10) != 0) {
    return 0;
  }
  return 1;
}


// FUN_002A3420


u32 FUN_002a3420(int param_1)
{
  int action;
  int x;
  u16 id;
  u16 n;
  u32 flag;

  if ((*(u32 *)(iGpffffb6fc + 0xc) & 0x200000) != 0) {
    return 1;
  }
  action = *(int *)(param_1 + 0xe0);
  id = *(u16 *)(action + 0x6e);
  x = *(int *)(*(int *)(action + 0x30) + 0xa00);
  if ((x != 0) && (n = *(u16 *)(x + 0xa4),
      (*(u16 *)(iGpffffb73c + ((u32)n * 10 + (u32)n) * 8) & 1) != 0)) {
    flag = 0;
  }
  else if ((gp0xffffb710[id][1] & 0x10) != 0) {
    flag = 0;
  }
  else {
    flag = 1;
  }
  if (flag != 0) {
    if ((gp0xffffb710[id][1] & 0x20) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUN_002A3520
u8 FUN_002a3520(int param_1)



{

  u8 bVar1;

  

  if (*(int *)(param_1 + 0xe0) == 0) {

    bVar1 = 0;

  }

  else {

    bVar1 = *(u16 *)(*(int *)(param_1 + 0xe0) + 0x6c) == 3;

  }

  return bVar1;

}

// FUN_002A3550


u64 FUN_002a3550(u8* param_1)



{
  extern u64 FUN_00308a50(u16 param_1);

  u64 uVar1;

  

  if (*(int *)(param_1 + 0xe0) == 0) {

    uVar1 = 0;

  }

  else {

    uVar1 = FUN_00308a50(*(u16 *)(*(int *)(param_1 + 0xe0) + 0x72));

  }

  return uVar1;

}

// FUN_002A3590


u32 FUN_002a3590(float *param_1,float *param_2)
{
  f32 tmp[3];
  f32 t;
  f32 a;
  u32 ret;

  ret = 0;
  a = fabsf(param_1[0]);
  if (a > 1500) {
    if (param_2 != 0) {
      t = a - 1500;
      RtQuatTransformVectors((RwV3d*)tmp,&D_00697890,1,(RtQuat*)(param_1 + 3));
      if (tmp[0] != 0.0f) {
        a = fabsf(tmp[0]);
        t = t / a;
        tmp[0] = tmp[0] * t;
        tmp[1] = tmp[1] * t;
        tmp[2] = tmp[2] * t;
        param_2[0] = param_1[0] + tmp[0];
        param_2[1] = param_1[1] + tmp[1];
        param_2[2] = param_1[2] + tmp[2];
      }
    }
    ret = 1;
  }
  a = fabsf(param_1[2]);
  if (a > 1500) {
    if (param_2 != 0) {
      t = a - 1500;
      RtQuatTransformVectors((RwV3d*)tmp,&D_00697890,1,(RtQuat*)(param_1 + 3));
      if (tmp[2] != 0.0f) {
        a = fabsf(tmp[2]);
        t = t / a;
        tmp[0] = tmp[0] * t;
        tmp[1] = tmp[1] * t;
        tmp[2] = tmp[2] * t;
        param_2[0] = param_1[0] + tmp[0];
        param_2[1] = param_1[1] + tmp[1];
        param_2[2] = param_1[2] + tmp[2];
      }
    }
    ret = 1;
  }
  return ret;
}

// FUN_002A3750


s32 FUN_002a3750(BtlCamera* camera,u32 unit)
{
  BtlUnit *unitPtr;
  s32 result;
  s16 frameCount;
  s16 animFrame;
  
  unitPtr = (BtlUnit *)(uintptr_t)unit;
  if (unitPtr == 0) {
    result = 0;
  }
  else if (((u8 *)unitPtr)[0x33] == '\0') {
    result = 0;
  }
  else if ((*(u32 *)((u8 *)unitPtr + 0x98) & 2) == 0) {
    result = 0;
  }
  else {
    frameCount = func_002835e0(
      unitPtr, (u16)(s32)btlUnit00282c30(unitPtr), 1.0f);
    animFrame = btlUnitGetAnimFrame(unitPtr);
    result = animFrame < frameCount;
    result = result ^ 1;
  }
  return result;
}

// FUN_002A3820


u8 FUN_002a3820(int param_1)



{
  u32 offset;

  offset = (u32)*(u16 *)(*(int *)(param_1 + 0xe0) + 0x6e) * 0x1c;
  offset += iGpffffb710;

  return (*(u16 *)(offset + 2) &

         0x4000) != 0;

}

// FUN_002A3850


u32 FUN_002a3850(int param_1)
{
  extern u64 FUN_0030b5a0();
  s32 index;
  s32 owner;
  s32 object;
  s32 work;

  work = *(s32 *)(param_1 + 0xe0);
  index = 0;
  for (; (index & 0xffff) < *(u16 *)(work + 0x6a);
       index = (u16)(index + 1)) {
    owner = *(s32 *)(work + (u16)index * 4 + 0x38);
    if (owner != 0) {
      object = *(s32 *)(owner + 0x30);
      if (object != 0 &&
          FUN_0030b5a0(*(u32 *)(object + 0xa2c), 0) != 0) {
        return 1;
      }
    }
  }
  return 0;
}
/* W419 negative: narrowed btlCameraSetState loop variable var_7 from u64 to u32; nd36 -> 184 at object 388/400. */
// FUN_002a38f0
#ifndef PC_BUILD
asm void btlCameraSetState(u16 state, BtlAction* action, u32 param_3)
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
  .word 0x0c0be210
  .word 0x00000000
  .word 0x0040802d
  .word 0x14400008
  .word 0x00000000
  .word 0x3264ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x3c030069
  .word 0x246339f0
  .word 0x00648021
  .word 0x3266ffff
  .word 0x8f83b6fc
  .word 0x946300f0
  .word 0x14660004
  .word 0x00000000
  .word 0x8e030008
  .word 0x1060003f
  .word 0x00000000
  .word 0x64070002
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x00031840
  .word 0x00a31821
  .word 0x94640102
  .word 0x30e3ffff
  .word 0x00031840
  .word 0x00a31821
  .word 0xa4640104
  .word 0x24e3ffff
  .word 0x3067ffff
  .word 0x30e3ffff
  .word 0x1060fff4
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x948300f0
  .word 0xa4830104
  .word 0x8f84b6fc
  .word 0x948300f0
  .word 0x14660006
  .word 0x00000000
  .word 0x9483010a
  .word 0x24630001
  .word 0xa483010a
  .word 0x10000002
  .word 0x00000000
  .word 0xa480010a
  .word 0x8f83b6fc
  .word 0xa47300f0
  .word 0x8f83b6fc
  .word 0xac6000f8
  .word 0x8f83b6fc
  .word 0xac6000fc
  .word 0x8f83b6fc
  .word 0xac720100
  .word 0x8e03000c
  .word 0x10600007
  .word 0x00000000
  .word 0x8f84b6fc
  .word 0x8c8300f4
  .word 0x34630002
  .word 0xac8300f4
  .word 0x10000006
  .word 0x00000000
  .word 0x8f85b6fc
  .word 0x8ca400f4
  .word 0x2403fffd
  .word 0x00831824
  .word 0xaca300f4
  .word 0x12200003
  .word 0x00000000
  .word 0x0c0a90a8
  .word 0x00000000
  .word 0x8e030000
  .word 0x10600005
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x24440020
  .word 0x0060f809
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002A3A80


u16 FUN_002a3a80(void)



{

  return *(u16 *)(iGpffffb6fc + 0xf0);

}

// FUN_002A3A90


void FUN_002a3a90(int param_1)



{

  if (*(int *)(iGpffffb6fc + 0x100) != 0) {

    if (*(int *)(*(int *)(iGpffffb6fc + 0x100) + 8) == *(int *)(param_1 + 8)) {

      *(u32 *)(iGpffffb6fc + 0x100) = 0;

    }

    switch (*(u16 *)(iGpffffb6fc + 0xf0)) {
      case 0xc:
        if ((*(int *)(iGpffffb6fc + 0x120) != 0) &&
            (*(int *)(*(int *)(iGpffffb6fc + 0x120) + 8) == *(int *)(param_1 + 8))) {
          *(u32 *)(iGpffffb6fc + 0x120) = 0;
        }
        break;
      default:
        break;
    }

  }

  return;

}
// FUN_002a3b00
u32 btlCameraUpdateSetStatePacket(void* work)
{
    BtlCameraPacketSetState* packet;

    packet = (BtlCameraPacketSetState*)work;

    btlCameraSetState(packet->state, packet->action, 1);

    return 1;
}

// FUN_002a3b40
BtlPacket* btlCameraCreateSetStatePacket(BtlAction* action, u16 state)
{
    BtlPacket* packet;
    BtlCameraPacketSetState* work;

    packet = btlPacketCreate(BTLCAMERA_PACKET_SETSTATE, sizeof(BtlCameraPacketSetState));

    packet->updateFunc = btlCameraUpdateSetStatePacket;

    work = (BtlCameraPacketSetState*)packet->workData;

    work->action = action;
    work->state = state;

    return packet;
}

// FUN_002a3ba0
u32 btlCameraUpdateMoveToPacket(void* work)
{
    BtlCameraPacketMoveTo* packet;
    struct
    {
        BtlCameraKeyFrame current;
        u32 pad;
        BtlCameraKeyFrame start;
        BtlCameraKeyFrame end;
    } frames;
    u16* cameraData;
    u8* battleBytes;

    packet = (BtlCameraPacketMoveTo*)work;

    btlCameraSetState(BTLCAMERA_STATE_NOP, packet->action, 1);

    if (packet->currPosAsStart != 0)
    {
        FUN_002a4470((f32*)&frames.start,
                     (f32*)((u8*)gBtl + 0xbc));
    }
    else
    {
        FUN_002a4690(&frames.start.rot, &packet->startPos,
                     &packet->startTarget, &D_00697880);
        frames.start.pos = packet->startPos;
    }

    FUN_002a4690(&frames.end.rot, &packet->endPos, &packet->endTarget,
                 &D_00697880);
    frames.end.pos = packet->endPos;

    cameraData = (u16*)((u8*)gBtl + 0x20);
    cameraData[0] = 1;
    cameraData[0x3a] = 0;
    cameraData[0x3b] = 0;
    cameraData[0x3c] = 0;
    *(u32*)((u8*)cameraData + 0x80) = 0;
    *(u32*)((u8*)cameraData + 0x7c) = 0;

    FUN_002a2050(cameraData, (f32*)&frames.start.pos,
                 (f32*)&frames.start.rot);
    FUN_002a1e00((f32*)&frames.current, (f32*)&frames.start,
                 (f32*)&frames.end, fGpffff82c8);
    FUN_002a2050(cameraData, (f32*)&frames.current.pos,
                 (f32*)&frames.current.rot);
    FUN_002a1e00((f32*)&frames.current, (f32*)&frames.start,
                 (f32*)&frames.end, fGpffff805c);
    FUN_002a2050(cameraData, (f32*)&frames.current.pos,
                 (f32*)&frames.current.rot);
    FUN_002a2050(cameraData, (f32*)&frames.end.pos,
                 (f32*)&frames.end.rot);

    battleBytes = (u8*)gBtl;
    *(f32*)(battleBytes + 0xa4) =
        (60.0f * (2.0f * packet->duration)) / 2.0f;
    *(f32*)(battleBytes + 0xb4) = 0.5f;
    *(u16*)(battleBytes + 0x20) =
        (u16)(*(u16*)(battleBytes + 0x20) & 0xfffd);
    *(u16*)(battleBytes + 0x20) =
        (u16)(*(u16*)(battleBytes + 0x20) | 4);

    return 1;
}

// FUN_002a3d70
BtlPacket* btlCameraCreateMoveToPacket(BtlAction* action, 
                                       const RwV3d* startPos,
                                       const RwV3d* startTarget,
                                       const RwV3d* endPos,
                                       const RwV3d* endTarget,
                                       f32 duration)
{
    BtlPacket* packet;
    BtlCameraPacketMoveTo* work;

    packet = btlPacketCreate(BTLCAMERA_PACKET_MOVETO, sizeof(BtlCameraPacketMoveTo));

    packet->updateFunc = btlCameraUpdateMoveToPacket;

    work = (BtlCameraPacketMoveTo*)packet->workData;

    work->action = action;
    work->duration = duration;

    if (startPos != NULL && startTarget != NULL)
    {
        work->startPos = *startPos;
        work->startTarget = *startTarget;

        work->currPosAsStart = 0;
    }
    else
    {
        work->currPosAsStart = 1;
    }

    work->endPos = *endPos;
    work->endTarget = *endTarget;

    return packet;
}

/* W367 measured: opt_loop_invariants on nd279 -> 211, object 1052/1056; baseline object 1052/1056. */
#pragma opt_loop_invariants on
// FUN_002A3E80


#ifndef PC_BUILD
asm void FUN_002a3e80(u8* param_2,u8* param_3,u8* param_4,u32 param_5,float param_1)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0a82d
  .word 0x46006506
  .word 0x8f84b6fc
  .word 0x8c830010
  .word 0x30630004
  .word 0x146000e5
  .word 0x00000000
  .word 0x1260000d
  .word 0x00000000
  .word 0x12a0000b
  .word 0x00000000
  .word 0xc6600000
  .word 0xe7a00100
  .word 0xc6600008
  .word 0xe7a00104
  .word 0xc6a00000
  .word 0xe7a00108
  .word 0xc6a00008
  .word 0xe7a0010c
  .word 0x10000002
  .word 0x00000000
  .word 0x4480a000
  .word 0x8c92014c
  .word 0x30e4ffff
  .word 0x30970040
  .word 0x30900010
  .word 0x309e0004
  .word 0x30830001
  .word 0x7fa300f0
  .word 0x30830002
  .word 0x7fa300e0
  .word 0x30830008
  .word 0x7fa300d0
  .word 0x30830020
  .word 0x7fa300c0
  .word 0x30830080
  .word 0x7fa300b0
  .word 0x100000c3
  .word 0x00000000
  .word 0x9643001a
  .word 0x30630001
  .word 0x106000be
  .word 0x00000000
  .word 0x8e510030
  .word 0x8e23009c
  .word 0x30630008
  .word 0x106000b9
  .word 0x00000000
  .word 0x12e0000b
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fde4
  .word 0x00000000
  .word 0x160000b1
  .word 0x00000000
  .word 0x240300ff
  .word 0xa2230037
  .word 0x100000ad
  .word 0x00000000
  .word 0x8f83b6fc
  .word 0x8c630148
  .word 0x16430011
  .word 0x00000000
  .word 0x13c0000f
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fde4
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050004
  .word 0x0c09fddc
  .word 0x00000000
  .word 0x1600009d
  .word 0x00000000
  .word 0x240300ff
  .word 0xa2230037
  .word 0x10000099
  .word 0x00000000
  .word 0x1280004a
  .word 0x00000000
  .word 0x16540012
  .word 0x00000000
  .word 0x7ba300f0
  .word 0x1060000f
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fde4
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050004
  .word 0x0c09fddc
  .word 0x00000000
  .word 0x16000088
  .word 0x00000000
  .word 0x240300ff
  .word 0xa2230037
  .word 0x10000084
  .word 0x00000000
  .word 0x7ba300e0
  .word 0x10600022
  .word 0x00000000
  .word 0x0000282d
  .word 0x9684006a
  .word 0x10000017
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x00031880
  .word 0x02831821
  .word 0x8c630038
  .word 0x1643000f
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fde4
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050004
  .word 0x0c09fddc
  .word 0x00000000
  .word 0x1600000b
  .word 0x00000000
  .word 0x240300ff
  .word 0xa2230037
  .word 0x10000007
  .word 0x00000000
  .word 0x24a30001
  .word 0x3065ffff
  .word 0x30b6ffff
  .word 0x02c4182a
  .word 0x1460ffe7
  .word 0x00000000
  .word 0x9683006a
  .word 0x16c30060
  .word 0x00000000
  .word 0x922400a2
  .word 0x8e830030
  .word 0x906300a2
  .word 0x1483000e
  .word 0x00000000
  .word 0x7ba300d0
  .word 0x1060000b
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fde4
  .word 0x00000000
  .word 0x16000052
  .word 0x00000000
  .word 0x240300ff
  .word 0xa2230037
  .word 0x1000004e
  .word 0x00000000
  .word 0x12600039
  .word 0x00000000
  .word 0x12a00037
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50120
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc7a00120
  .word 0xe7a00110
  .word 0xc7a00128
  .word 0xe7a00114
  .word 0x27a40100
  .word 0x27a50108
  .word 0x27a60110
  .word 0x27a70118
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6230090
  .word 0xc622002c
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x460218dd
  .word 0xc7a20118
  .word 0xc7a10100
  .word 0x46020834
  .word 0x45010005
  .word 0x00000000
  .word 0xc7a00108
  .word 0x46020036
  .word 0x45010008
  .word 0x00000000
  .word 0x46020836
  .word 0x4500002a
  .word 0x00000000
  .word 0xc7a00108
  .word 0x46020034
  .word 0x45010026
  .word 0x00000000
  .word 0xc7a2011c
  .word 0xc7a10104
  .word 0x46020834
  .word 0x45010005
  .word 0x00000000
  .word 0xc7a0010c
  .word 0x46020036
  .word 0x4501000b
  .word 0x00000000
  .word 0x46020836
  .word 0x4500001a
  .word 0x00000000
  .word 0xc7a0010c
  .word 0x46020034
  .word 0x45000004
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x44801800
  .word 0x46141836
  .word 0x45000010
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c09fddc
  .word 0x00000000
  .word 0x7ba300c0
  .word 0x14600002
  .word 0x00000000
  .word 0xa2200037
  .word 0x7ba300b0
  .word 0x10600005
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050004
  .word 0x0c09fde4
  .word 0x00000000
  .word 0x8e5204a8
  .word 0x1640ff3d
  .word 0x00000000
  .word 0xdfbf00a0
  .word 0x7bbe0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma alias FUN_002a3e80_call FUN_002a3e80
extern void FUN_002a3e80_call(float param_1,u8* param_2,u8* param_3,u8* param_4,u32 param_5);

#pragma opt_loop_invariants reset
// FUN_002A42A0


void FUN_002a42a0(void)
{
  s32 node;
  s32 index;

  index = 0;
  for (; (index & 0xffff) < 2; index = (u16)(index + 1)) {
    node = *(s32 *)(DAT_007ce3ec + (u16)index * 8 + 0x150);
    while (node != 0) {
      FUN_0027f790(node, 7);
      node = *(s32 *)(node + 0xa34);
    }
  }
}
// FUN_002a4330
void btlCameraCheckUnitFade()
{
    RwFrame* cameraFrame;
    RwMatrix* cameraMat;
    BtlUnitList* currUnitList;
    BtlUnit* currUnit;
    u16 i;
    RwV3d sphereCenter;
    RwV3d diff;

    cameraFrame = (RwFrame*)kwlnGetMainCamera()->object.object.parent;
    cameraMat = &cameraFrame->modelling;

    // PC and EC
    for (i = 0; i < UNIT_GENUS_PS; i++)
    {
        currUnitList = &gBtl->unitLists[i];
        currUnit = currUnitList->head;

        while (currUnit != NULL)
        {
            if (currUnit->flags3 & BTLUNIT_FLAG3_UNK08)
            {
                btlUnitGetSphereWorldCenter(currUnit, (RwV3d*)&sphereCenter);

                diff.x = cameraMat->pos.x - sphereCenter.x;
                diff.y = cameraMat->pos.y - sphereCenter.y;
                diff.z = cameraMat->pos.z - sphereCenter.z;

                if (RwV3dLength(&diff) <= (currUnit->sphereRadius * currUnit->scale) + 200.0f)
                {
                    btlUnitSetFlags(currUnit, BTLUNIT_FLAG_FADE);
                }
                else
                {
                    btlUnitClearFlags(currUnit, BTLUNIT_FLAG_FADE);
                }
            }

            currUnit = currUnit->next;
        }
    }
}

#pragma opt_loop_invariants on
// FUN_002A4470


void FUN_002a4470(f32* dst, f32* src)
{
  *(RwV3d*)dst = *(RwV3d*)src;
  *(RtQuat*)(dst + 3) = *(RtQuat*)(src + 3);
}

// FUN_002A44B0


void FUN_002a44b0(f32* dst, f32* src)
{
  *(RwV3d*)dst = *(RwV3d*)src;
  *(RtQuat*)(dst + 3) = *(RtQuat*)(src + 3);
}

// FUN_002A44F0


#pragma opt_loop_invariants reset
void FUN_002a44f0(f32* dst, f32* src)
{
  *(RwV3d*)dst = *(RwV3d*)src;
  *(RtQuat*)(dst + 3) = *(RtQuat*)(src + 3);
}
// FUN_002A4530


void FUN_002a4530(float *param_1,float *param_2,float *param_3,float *param_4)
{
  extern float FUN_004c69f0();
  RwV3d diff;
  RwV3d cross1;
  RwV3d cross2;

  *(RwV3d*)(param_1 + 0xc) = *(RwV3d*)param_3;
  diff.x = *param_2 - *param_3;
  diff.y = param_2[1] - param_3[1];
  diff.z = param_2[2] - param_3[2];
  FUN_004c69f0(&diff,&diff);
  *(RwV3d*)(param_1 + 8) = diff;
  cross1.x = param_4[1] * diff.z - param_4[2] * diff.y;
  cross1.y = param_4[2] * diff.x - *param_4 * diff.z;
  cross1.z = *param_4 * diff.y - param_4[1] * diff.x;
  FUN_004c69f0(&cross1,&cross1);
  *(RwV3d*)param_1 = cross1;
  cross2.x = diff.y * cross1.z - diff.z * cross1.y;
  cross2.y = diff.z * cross1.x - diff.x * cross1.z;
  cross2.z = diff.x * cross1.y - diff.y * cross1.x;
  *(RwV3d*)(param_1 + 4) = cross2;
  return;
}
// FUN_002A4690


void FUN_002a4690(void* out, const void* first, const void* second, const void* config)
{
  u8 auStack_40[64];

  FUN_002a4530((float*)auStack_40, (float*)second, (float*)first,
               (float*)config);
  FUN_004bdcb0(out, auStack_40);
}
// FUN_002a46e0
void btlCameraMain()
{
    const BtlCameraStateEntry* entry;
    u16 state;
    RwMatrix mat;

    if (!(gBtl->camera.flags & BTLCAMERA_FLAG_FREEZE))
    {
        if (gBtl->camera.framesUntilUpdate <= 0)
        {
            state = gBtl->camera.state;
            entry = btlBossGetCameraStateEntry(state);
            if (entry == NULL)
            {
                entry = &sCameraStateEntries[state];
            }

            if (entry->update != NULL)
            {
                entry->update(&gBtl->camera);
            }

            btlCameraUpdate(&gBtl->camera);

            gBtl->camera.updateCounter++;
        }
        else
        {
            gBtl->camera.framesUntilUpdate--;
        }

        RtQuatConvertToMatrix(&gBtl->camera.rot, &mat);
        mat.pos = gBtl->camera.pos;

        RwFrameTransform((RwFrame*)kwlnGetMainCamera()->object.object.parent,
                         &mat,
                         rwCOMBINEREPLACE);
        K_View_SetFov(kwlnGetMainCamera(), gRadToDegFactor2 * gBtl->camera.fovRad);
    }

    if (gBtl->camera.flags & BTLCAMERA_FLAG_UNK02)
    {
        btlCameraCheckUnitFade();
    }
}

// FUN_002a48f0
void btlCameraDebugDraw()
{
    RwMatrix axisMat;
    RwRGBA quadCol;

    if (!(gBtl->flags & BTL_FLAG_UNK04) &&
        !(gBtl->flags2 & BTL_FLAG2_UNK04) &&
         (gBtl->flags2 & BTL_FLAG2_UNK08))
    {
        quadCol.r = 255;
        quadCol.g = 255;
        quadCol.b = 0;
        quadCol.a = 255;

        RtQuatConvertToMatrix(&gBtl->camera.rot, &axisMat);
        axisMat.pos = gBtl->camera.pos;

        primQuad3D(&gBtl->camera.pos, &quadCol, 6.0f, 1);
        primAxisLine3D(&axisMat, 150.0f, 1);
    }
}

// FUN_002A4A70


void FUN_002a4a70(void)
{
  extern u64 FUN_00521408();
  u8 *gp;
  u8 *cam;
  u32 work;
  u32 uVar4;
  u16 idx;

  FUN_004c9d70(FUN_00198590(),35.0f);
  FUN_001a4580(FUN_00198590(),40.0f);
  gp = iGpffffb6fc;
  cam = gp + 0x20;
  *(u16 *)(gp + 0x20) = 1;
  *(u16 *)(gp + 0x94) = 0;
  *(u16 *)(gp + 0x96) = 0;
  *(u16 *)(gp + 0x98) = 0;
  *(u32 *)(gp + 0xa0) = 0;
  *(u32 *)(gp + 0x9c) = 0;
  work = (*DAT_00960178)(0x30,0x40000);
  FUN_00521408(work,0,0x30);
  *(u32 *)(cam + 0x98) = FUN_0048dab0(4,1,work);
  (*DAT_0096017c)(work);
  FUN_00198590();
  *(f32 *)(iGpffffb6fc + 0xd4) = DAT_007caf3c;
  *(f32 *)(iGpffffb6fc + 0xc8) = DAT_007caf40;
  *(f32 *)(iGpffffb6fc + 0xcc) = DAT_007caf44;
  *(f32 *)(iGpffffb6fc + 0xd0) = DAT_007caf48;
  *(f32 *)(iGpffffb6fc + 0xbc) = DAT_007caf4c;
  *(f32 *)(iGpffffb6fc + 0xc0) = DAT_007caf50;
  *(f32 *)(iGpffffb6fc + 0xc4) = DAT_007caf54;
  *(f32 *)(iGpffffb6fc + 0xd8) = DAT_007cae38;
  *(u16 *)(iGpffffb6fc + 0xf0) = 0;
  *(u16 *)(iGpffffb6fc + 0x10a) = 0;
  for (uVar4 = 0; (u16)uVar4 < 3; uVar4 = (u16)(uVar4 + 1)) {
    idx = uVar4 & 0xffff;
    *(u16 *)(iGpffffb6fc + idx * 2 + 0x104) = 0;
  }
  *(u32 *)(iGpffffb6fc + 0xf4) = *(u32 *)(iGpffffb6fc + 0xf4) | 2;
  FUN_002b6db0((int)(uintptr_t)(iGpffffb6fc + 0x10c));
  return;
}

// FUN_002A4C20


void FUN_002a4c20(void)



{

  if (*(int *)(DAT_007ce3ec + 0xb8) != 0) {

    FUN_0048da30(*(int *)(DAT_007ce3ec + 0xb8));

  }

  return;

}
// FUN_002a4c50
void btlCameraFreeze()
{
    gBtl->camera.flags |= BTLCAMERA_FLAG_FREEZE;
}
extern void FUN_002a2290(u16* camera, RwV3d* first, RwV3d* second, int mode);
extern void FUN_002a3110(u16* camera, f32 param_1);
extern f32 FUN_002d1f30(f32* left, f32* right);
extern u32 FUN_00351bb0(u16 param_1);
extern u64 FUN_004be310();
extern float FUN_004c6b20(float *param_1,float *param_2);
extern f32 FUN_0052e930(f32 x);
/* This no-argument declaration is caller-specific; the state-table callback uses a camera pointer. */
extern void FUN_002b6460();

extern f32 fGpffff812c;
typedef struct BtlCameraQuatBlend
{
    RtQuat first;
    RtQuat second;
    f32 scalar;
    s32 flag;
} BtlCameraQuatBlend;

extern void FUN_0027f7c0(BtlUnit* unit, RwV3d* out, void* p3, void* p4);
extern RwV3d D_00697880;
extern float fGpffff8094;
extern float fGpffff8070;
extern void FUN_004bdde0(f32* quat, const f32* axis, f32 angle, s32 mode);
extern RwV3d D_006978A0;
extern f32 fGpffff80f0;
extern f32 fGpffff80f4;
extern f32 fGpffff80f8;
extern f32 fGpffff8138;
extern f32 fGpffff8130;
extern f32 fGpffff8048;
extern f32 fGpffff8118;
extern f32 fGpffff8050;
extern f32 fGpffff8054;
extern f32 fGpffff8058;
extern u16 FUN_002d1600(int);
extern u32 FUN_002d6290(int);
extern u32 FUN_002d62d0(int);
extern u32 FUN_002d6370(s16);
extern u32 FUN_002d63b0(int, s16, int);

/* W419 negative: moved FUN_002a4c70 radius before the other f32 locals; nd63 -> 73 at object 1972/1984 (rate .031947 -> .037018). */
// FUN_002a4c70
#ifndef PC_BUILD
asm void FUN_002a4c70(BtlCamera* camera, f32 param_1, f32 param_2)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x46006646
  .word 0x46006e06
  .word 0x8c8200e0
  .word 0x8c500030
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000d02
  .word 0x27a40050
  .word 0x2625009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500e0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a034
  .word 0x4500001b
  .word 0x00000000
  .word 0xc601008c
  .word 0xc600002c
  .word 0x460008c2
  .word 0xc7828094
  .word 0xc7a100e4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a000e4
  .word 0x3c023f00
  .word 0x4482a800
  .word 0xc62000b8
  .word 0x4600ab02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820800
  .word 0x00000000
  .word 0x46140842
  .word 0x46000d83
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0xc601008c
  .word 0xc600002c
  .word 0x460008c2
  .word 0x3c023e80
  .word 0x44821000
  .word 0xc7a100e4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a000e4
  .word 0x3c023f00
  .word 0x4482a800
  .word 0xc62000b8
  .word 0x4600ab02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c024020
  .word 0x44820800
  .word 0x00000000
  .word 0x46140842
  .word 0x46000d83
  .word 0xc7a10050
  .word 0xc7a000e0
  .word 0x46000801
  .word 0xe7a00100
  .word 0xc7a10054
  .word 0xc7a000e4
  .word 0x46000801
  .word 0xe7a00104
  .word 0xc7a10058
  .word 0xc7a000e8
  .word 0x46000801
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x461505c2
  .word 0x4617b036
  .word 0x45010002
  .word 0x00000000
  .word 0x4600bd86
  .word 0x27a40100
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
  .word 0xc7a50100
  .word 0x46012802
  .word 0xe7a00110
  .word 0xc7a40104
  .word 0x46012082
  .word 0xe7a20114
  .word 0xc7a30108
  .word 0x46011842
  .word 0xe7a10118
  .word 0xc7a800e0
  .word 0x46004000
  .word 0xe7a000f0
  .word 0xc7a700e4
  .word 0x46023800
  .word 0xe7a000f4
  .word 0xc7a600e8
  .word 0x46013000
  .word 0xe7a000f8
  .word 0x46162882
  .word 0xe7a20110
  .word 0x46162042
  .word 0xe7a10114
  .word 0x46161802
  .word 0xe7a00118
  .word 0x46081140
  .word 0xe7a50110
  .word 0x46070900
  .word 0xe7a40114
  .word 0x460600c0
  .word 0xe7a30118
  .word 0xc601008c
  .word 0xc600002c
  .word 0x46000882
  .word 0xc7818098
  .word 0x44800000
  .word 0x00000000
  .word 0x46040018
  .word 0x4602085c
  .word 0xe7a10114
  .word 0x46082801
  .word 0xe7a00100
  .word 0x46070801
  .word 0xe7a00104
  .word 0x46061801
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00100
  .word 0x461600c2
  .word 0xe7a30110
  .word 0xc7a00104
  .word 0x46160082
  .word 0xe7a20114
  .word 0xc7a00108
  .word 0x46160042
  .word 0xe7a10118
  .word 0xc7a000f0
  .word 0x46001800
  .word 0xe7a00110
  .word 0xc7a000f4
  .word 0x46001000
  .word 0xe7a00114
  .word 0xc7a000f8
  .word 0x46000800
  .word 0xe7a00118
  .word 0x27a40078
  .word 0x27a50110
  .word 0x27a600f0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a4005c
  .word 0x27a50078
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0xc781812c
  .word 0x46190d02
  .word 0x46140036
  .word 0x450100a3
  .word 0x00000000
  .word 0x46180842
  .word 0x46010036
  .word 0x45010019
  .word 0x00000000
  .word 0x962300e4
  .word 0x24020002
  .word 0x10620015
  .word 0x00000000
  .word 0x24020023
  .word 0x10620012
  .word 0x00000000
  .word 0x2402001f
  .word 0x1062000f
  .word 0x00000000
  .word 0x2402001d
  .word 0x1062000c
  .word 0x00000000
  .word 0x2402001c
  .word 0x10620009
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0ad918
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0x10000104
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a583
  .word 0x27a4005c
  .word 0x27a50078
  .word 0x27a60090
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0x44805800
  .word 0x00000000
  .word 0x460bb036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a3005c
  .word 0xc7a20060
  .word 0xc7a10064
  .word 0xc7a00068
  .word 0xe7a300c0
  .word 0xe7a200c4
  .word 0xe7a100c8
  .word 0xe7a000cc
  .word 0x10000056
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46160036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a30078
  .word 0xc7a2007c
  .word 0xc7a10080
  .word 0xc7a00084
  .word 0xe7a300c0
  .word 0xe7a200c4
  .word 0xe7a100c8
  .word 0xe7a000cc
  .word 0x10000046
  .word 0x00000000
  .word 0x46160001
  .word 0x8fa200b4
  .word 0x14400026
  .word 0x00000000
  .word 0xc7aa00b0
  .word 0x460a0102
  .word 0x460420c2
  .word 0xc7898130
  .word 0xc7888048
  .word 0x46085818
  .word 0x4603481c
  .word 0xc7878118
  .word 0x46075818
  .word 0x4600181c
  .word 0xc7868050
  .word 0x46065818
  .word 0x4600181c
  .word 0xc7858054
  .word 0x46055818
  .word 0x4600181c
  .word 0xc7828058
  .word 0x46025818
  .word 0x4600185c
  .word 0x46041802
  .word 0x46045818
  .word 0x4601001c
  .word 0x460ab102
  .word 0x460420c2
  .word 0x46085818
  .word 0x4603485c
  .word 0x46075818
  .word 0x4601185c
  .word 0x46065818
  .word 0x4601185c
  .word 0x46055818
  .word 0x4601185c
  .word 0x46025818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46045818
  .word 0x46020d9c
  .word 0xc7a10090
  .word 0x46000942
  .word 0xe7a500c0
  .word 0xc7a10094
  .word 0x46000902
  .word 0xe7a400c4
  .word 0xc7a10098
  .word 0x460008c2
  .word 0xe7a300c8
  .word 0xc7a100a0
  .word 0x44801000
  .word 0x00000000
  .word 0x46051018
  .word 0x4616085c
  .word 0xe7a100c0
  .word 0xc7a100a4
  .word 0x46041018
  .word 0x4616085c
  .word 0xe7a100c4
  .word 0xc7a100a8
  .word 0x46031018
  .word 0x4616085c
  .word 0xe7a100c8
  .word 0xc7a2009c
  .word 0xc7a100ac
  .word 0x4616081a
  .word 0x4600101c
  .word 0xe7a000cc
  .word 0x27a40100
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700c0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a100f0
  .word 0xc7a00100
  .word 0x46000800
  .word 0xe7a00110
  .word 0xc7a100f4
  .word 0xc7a00104
  .word 0x46000800
  .word 0xe7a00114
  .word 0xc7a100f8
  .word 0xc7a00108
  .word 0x46000800
  .word 0xe7a00118
  .word 0x27a40078
  .word 0x27a50110
  .word 0x27a600f0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c024416
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b834
  .word 0x45000002
  .word 0x00000000
  .word 0x460005c6
  .word 0x27a40100
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70078
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00100
  .word 0x46170002
  .word 0xe7a00100
  .word 0xc7a00104
  .word 0x46170002
  .word 0xe7a00104
  .word 0xc7a00108
  .word 0x46170002
  .word 0xe7a00108
  .word 0xc62000b8
  .word 0x4600a842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600b842
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d42
  .word 0xc7a00100
  .word 0xe7a000d8
  .word 0xc7a00108
  .word 0xe7a000dc
  .word 0x27a400d8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a100dc
  .word 0xc7a000f0
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x461508dc
  .word 0xe7a300f0
  .word 0xc7a100d8
  .word 0xc7a000f8
  .word 0x46001018
  .word 0x4615089d
  .word 0xe7a200f8
  .word 0xc7a00100
  .word 0x46001800
  .word 0xe7a0006c
  .word 0xc7a100f4
  .word 0xc7a00104
  .word 0x46000800
  .word 0xe7a00070
  .word 0xc7a00108
  .word 0x46001000
  .word 0xe7a00074
  .word 0xc7a10054
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00054
  .word 0xc7a10070
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00070
  .word 0x27a4005c
  .word 0x27a50078
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x3c024000
  .word 0x4482a800
  .word 0x44800800
  .word 0x00000000
  .word 0x46010036
  .word 0x45010019
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a043
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010007
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d42
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x4482a800
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a836
  .word 0x45010002
  .word 0x00000000
  .word 0x46000546
  .word 0x0220202d
  .word 0x27a50050
  .word 0x27a6006c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0220202d
  .word 0x4600ab06
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002A5430
void FUN_002a5430(BtlCamera* camera)
{
    FUN_002a4c70(camera, 45.0f, 200.0f);
}

// FUN_002a5460
void FUN_002a5460(BtlCamera* camera)
{
    BtlAction* action;
    BtlUnit* unit;
    RwV3d center;

    action = camera->action;
    if (action != NULL &&
        (*(u16*)((u8*)action + 0x1a) & 1) != 0)
    {
        unit = *(BtlUnit**)((u8*)action + 0x30);
        btlUnitGetSphereWorldCenter(unit, &center);
        FUN_002a3e80_call(unit->sphereRadius * unit->scale * 0.5f,
                     (u8*)camera->action,
                     (u8*)((u8*)camera + 0x9c),
                     (u8*)&center,
                     0x31);
    }
}

/* Retail camera callbacks for the 0x2A4C70-0x2A95D0 window.  The original
 * routines share the same unit framing and look-at path; the callbacks keep
 * that state typed while remaining NONMATCHING until instruction scheduling
 * is tuned against the retail object. */
static BtlUnit* btlCameraRangeUnit(BtlCamera* camera)
{
    if (camera == NULL || camera->action == NULL)
    {
        return NULL;
    }
    return camera->action->unit;
}

static BtlUnit* btlCameraRangeTarget(BtlCamera* camera)
{
    BtlAction* target;
    if (camera == NULL || camera->action == NULL)
    {
        return NULL;
    }
    target = camera->action->target.targetedActions[0];
    return target != NULL ? target->unit : NULL;
}

static void btlCameraRangeCross(RwV3d* out, const RwV3d* a, const RwV3d* b)
{
    out->x = a->y * b->z - a->z * b->y;
    out->y = a->z * b->x - a->x * b->z;
    out->z = a->x * b->y - a->y * b->x;
}

static void btlCameraRangeLookAt(BtlCamera* camera, const RwV3d* eye,
                                 const RwV3d* target)
{
    RwV3d at;
    RwV3d upAxis;
    RwV3d right;
    RwV3d up;
    RwMatrix matrix;

    at.x = target->x - eye->x;
    at.y = target->y - eye->y;
    at.z = target->z - eye->z;
    if (RwV3dNormalize(&at, &at) <= 0.0001f)
    {
        at.x = 0.0f;
        at.y = 0.0f;
        at.z = 1.0f;
    }
    upAxis.x = 0.0f;
    upAxis.y = 1.0f;
    upAxis.z = 0.0f;
    btlCameraRangeCross(&right, &upAxis, &at);
    if (RwV3dNormalize(&right, &right) <= 0.0001f)
    {
        upAxis.x = 0.0f;
        upAxis.y = 0.0f;
        upAxis.z = 1.0f;
        btlCameraRangeCross(&right, &upAxis, &at);
        RwV3dNormalize(&right, &right);
    }
    btlCameraRangeCross(&up, &at, &right);
    RwV3dNormalize(&up, &up);
    matrix.right = right;
    matrix.up = up;
    matrix.at = at;
    matrix.pos = *eye;
    matrix.pad1 = matrix.pad2 = matrix.pad3 = 0;
    rwMatrixSetFlags(&matrix, rwMATRIXTYPEORTHONORMAL);
    camera->pos = *eye;
    RtQuatConvertFromMatrix(&camera->rot, &matrix);
}

static void btlCameraRangeFrame(BtlCamera* camera, const RwV3d* first,
                                const RwV3d* second, f32 margin, f32 minimum)
{
    RwV3d center;
    RwV3d delta;
    RwV3d direction;
    RwV3d eye;
    f32 radius;
    f32 distance;

    if (camera == NULL || first == NULL)
    {
        return;
    }
    if (second != NULL)
    {
        center.x = (first->x + second->x) * 0.5f;
        center.y = (first->y + second->y) * 0.5f;
        center.z = (first->z + second->z) * 0.5f;
        delta.x = second->x - first->x;
        delta.y = second->y - first->y;
        delta.z = second->z - first->z;
        radius = RwV3dLength(&delta) * 0.5f;
    }
    else
    {
        center = *first;
        radius = 0.0f;
    }
    radius += 100.0f;
    distance = radius * (margin < 1.0f ? 1.0f : margin);
    if (distance < minimum)
    {
        distance = minimum;
    }
    direction.x = camera->pos.x - center.x;
    direction.y = camera->pos.y - center.y;
    direction.z = camera->pos.z - center.z;
    if (RwV3dNormalize(&direction, &direction) <= 0.0001f)
    {
        direction.x = 0.0f;
        direction.y = 0.25f;
        direction.z = 1.0f;
        RwV3dNormalize(&direction, &direction);
    }
    eye.x = center.x + direction.x * distance;
    eye.y = center.y + direction.y * distance;
    eye.z = center.z + direction.z * distance;
    btlCameraRangeLookAt(camera, &eye, &center);
    camera->keyFrameIdx = 0;
    camera->keyFrames[0].pos = eye;
    camera->keyFrames[0].rot = camera->rot;
    camera->framesUntilUpdate = 0;
    if (camera->fovRad <= 0.01f)
    {
        camera->fovRad = 0.7853982f;
    }
}

static void btlCameraRangeActionFrame(BtlCamera* camera, f32 margin,
                                      f32 minimum, u32 includeTarget)
{
    BtlUnit* unit;
    BtlUnit* target;
    RwV3d first;
    RwV3d second;

    unit = btlCameraRangeUnit(camera);
    if (unit == NULL)
    {
        return;
    }
    btlUnitGetSphereWorldCenter(unit, (RwV3d*)&first);
    target = includeTarget != 0 ? btlCameraRangeTarget(camera) : NULL;
    if (target != NULL && target != unit)
    {
        btlUnitGetSphereWorldCenter(target, (RwV3d*)&second);
        btlCameraRangeFrame(camera, &first, &second, margin, minimum);
    }
    else
    {
        btlCameraRangeFrame(camera, &first, NULL, margin, minimum);
    }
}


// FUN_002a54f0
void btlCameraFrameAction(BtlCamera* camera, u32 closeView, s32 nearScale, s32 farScale)
{
    f32 maxY;
    RwV3d scaled;
    RwV3d forward;
    RwV3d sphereCenter;
    RwV3d rotated;
    RwV3d center;
    RwV3d candidate;
    RwV3d targetCenter;
    RwMatrix rotation;
    RtQuat blendedRot;
    RtQuat quaternion;
    BtlCameraQuatBlend blend;
    BtlCameraKeyFrame frames[2];
    f32 distance;
    f32 fovDistance;
    f32 nearDistance;
    f32 radius;
    f32 half;
    f32 angle;
    f32 nearAngle;
    f32 ratio;
    f32 firstWeight;
    f32 x;
    f32 xSquared;
    f32 r;
    f32 r2;
    f32 factor;
    BtlUnit* unit;
    BtlAction* targetAction;
    unit = camera->action->unit;
    if (closeView == 0)
    {
        FUN_002a4470((f32*)&frames[0], (f32*)((u8*)camera + 0x9c));
        distance = unit->sphereRadius * unit->scale;
        btlUnitGetSphereWorldCenter(unit, &sphereCenter);
        RtQuatTransformVectors(&forward, &D_00697890, 1, &unit->rot);
        half = 0.5f * distance;
        scaled.x = forward.x * half;
        scaled.y = forward.y * half;
        scaled.z = forward.z * half;
        candidate.x = sphereCenter.x + scaled.x;
        candidate.y = sphereCenter.y + scaled.y;
        candidate.z = sphereCenter.z + scaled.z;
        candidate.y += 0.25f * (unit->unk_8c * unit->scale);
        FUN_00280870(3, 0, 0, &maxY, 0, 1);
        scaled = frames[0].pos;
        if (maxY < scaled.y)
        {
            scaled.y = maxY;
        }
        else
        {
            half = unit->unk_8c * (*(volatile /* Removing this qualifier loses btlCameraFrameAction (MATCH nd0 -> MISMATCH nd4, size 2540 -> 2540) - measured W170. */ f32*)&unit->scale);
            if (half > scaled.y)
            {
                scaled.y = half;
            }
        }
        FUN_002a4690(&frames[1].rot, &scaled, &candidate, &D_00697880);
        angle = FUN_002d1f30((f32*)&frames[0].rot, (f32*)&frames[1].rot);
        x = (f32)nearScale;
        nearDistance = fGpffff80e8 * x;
        if (angle > nearDistance)
        {
            if (angle <= fGpffff80e8 * (f32)farScale)
            {
                radius = nearDistance / angle;
                FUN_004be310((f32*)&frames[0].rot, (f32*)&frames[1].rot,
                             (f32*)&blend);
                if (radius <= 0.0f)
                {
                    blendedRot = frames[0].rot;
                }
                else if (1.0f <= radius)
                {
                    blendedRot = frames[1].rot;
                }
                else
                {
                    firstWeight = 1.0f - radius;
                    if (blend.flag == 0)
                    {
                        x = firstWeight * blend.scalar;
                        xSquared = x * x;
                        r = fGpffff8048 + fGpffff8130 * xSquared;
                        r = fGpffff8118 + xSquared * r;
                        r = fGpffff8050 + xSquared * r;
                        r = fGpffff8054 + xSquared * r;
                        r2 = fGpffff8058 + xSquared * r;
                        r = xSquared * x;
                        firstWeight = r * r2 + x;
                        x = radius * blend.scalar;
                        xSquared = x * x;
                        r = fGpffff8048 + fGpffff8130 * xSquared;
                        r = fGpffff8118 + xSquared * r;
                        r = fGpffff8050 + xSquared * r;
                        r = fGpffff8054 + xSquared * r;
                        r2 = fGpffff8058 + xSquared * r;
                        r = xSquared * x;
                        radius = r * r2 + x;
                    }
                    blendedRot.imag.x = blend.first.imag.x * firstWeight;
                    blendedRot.imag.y = blend.first.imag.y * firstWeight;
                    blendedRot.imag.z = blend.first.imag.z * firstWeight;
                    blendedRot.imag.x = 0.0f + blendedRot.imag.x +
                                        blend.second.imag.x * radius;
                    blendedRot.imag.y = 0.0f + blendedRot.imag.y +
                                        blend.second.imag.y * radius;
                    blendedRot.imag.z = 0.0f + blendedRot.imag.z +
                                        blend.second.imag.z * radius;
                    blendedRot.real = blend.first.real * firstWeight +
                                      blend.second.real * radius;
                }
                RtQuatTransformVectors(&forward, &D_006978A0, 1,
                                        &blendedRot);
                scaled.x = center.x + forward.x;
                scaled.y = center.y + forward.y;
                scaled.z = center.z + forward.z;
                FUN_002a4690(&frames[1].rot, &scaled, &center,
                             &D_00697880);
            }
            else
            {
                goto close_frame;
            }
        }
        forward.x = frames[0].pos.x - candidate.x;
        forward.y = frames[0].pos.y - candidate.y;
        forward.z = frames[0].pos.z - candidate.z;
        radius = RwV3dNormalize(&forward, &forward);
        radius = radius * fGpffff80c4;
        half = 0.5f * camera->fovRad;
        fovDistance = 1.5f * distance / tanf(half);
        if (!(fovDistance <= radius))
        {
            radius = fovDistance;
        }
        if (radius < (f32)0x226)
        {
            radius = (f32)0x226;
        }
        RtQuatTransformVectors(&forward, &D_006978A0, 1, &frames[1].rot);
        scaled.x = forward.x * radius;
        scaled.y = forward.y * radius;
        scaled.z = forward.z * radius;
        frames[1].pos.x = candidate.x + scaled.x;
        frames[1].pos.y = candidate.y + scaled.y;
        frames[1].pos.z = candidate.z + scaled.z;
        if (frames[0].pos.y < 25.0f)
        {
            frames[0].pos.y = 25.0f;
        }
        if (frames[1].pos.y < 25.0f)
        {
            frames[1].pos.y = 25.0f;
        }
        angle = FUN_002d1f30((f32*)&frames[0].rot,
                             (f32*)&frames[1].rot);
        radius = 2.0f;
        if (angle > 0.0f)
        {
            ratio = nearDistance / angle;
            radius = 1.0f;
            factor = ratio;
            if (factor > radius)
            {
                factor = ratio * radius;
                radius = factor;
            }
            ratio = 2.0f;
            if (radius <= ratio)
            {
                goto radius_clamped;
            }
            radius = ratio;
        }
    radius_clamped:
        FUN_002a2290((u16*)camera, &frames[0].pos, &frames[1].pos, 1);
        FUN_002a3110((u16*)camera, radius);
        return;
    }

close_frame:
    targetAction = (BtlAction*)FUN_002d6290((int)camera->action);
    btlUnitGetSphereWorldCenter(unit, &candidate);
    candidate.y += 0.25f * (unit->unk_8c * unit->scale);
    if (camera->action->target.targetedCount == 1 &&
        unit == camera->action->target.targetedActions[0]->unit)
    {
        RtQuatTransformVectors(&rotated, &D_00697890, 1, &unit->rot);
    }
    else
    {
        if (targetAction != NULL)
        {
            btlUnitGetSphereWorldCenter(
                (*(BtlAction**)((u8*)camera->action + 0x38))->unit,
                &targetCenter);
        }
        else
        {
            FUN_00280870((s32)FUN_002d1600((int)((u8*)camera->action + 0x38)) & 0xffff,
                         1, &targetCenter, 0, 0, 1);
        }
        FUN_002d1de0(&quaternion, &candidate, &targetCenter);
        RtQuatTransformVectors(&rotated, &D_00697890, 1, &quaternion);
    }
    nearAngle = 4.0f * (unit->sphereRadius * unit->scale);
    half = 2.5f * (unit->sphereRadius * unit->scale);
    switch (datCalcRand(3))
    {
    case 0:
        radius = 30.0f;
        break;
    case 1:
        radius = -30.0f;
        break;
    default:
        radius = 0.0f;
        break;
    }
    switch (datCalcRand(3))
    {
    case 0:
        angle = 15.0f;
        break;
    case 1:
        angle = -15.0f;
        break;
    default:
        angle = 0.0f;
        break;
    }
    RwMatrixRotate(&rotation, &D_00697870, angle, 0);
    RwMatrixRotate(&rotation, &D_00697880, radius, 2);
    FUN_004c6c60(&forward, &rotated, &rotation);
    distance = nearAngle / tanf(fGpffff8070 * (0.5f * camera->fovRad));
    forward.x *= distance;
    forward.y *= distance;
    forward.z *= distance;
    center.x = candidate.x;
    center.y = candidate.y;
    center.z = candidate.z;
    frames[0].pos.x = center.x + forward.x;
    frames[0].pos.y = center.y + forward.y;
    frames[0].pos.z = center.z + forward.z;
    FUN_002a4690(&frames[0].rot, &frames[0].pos, &center,
                 &D_00697880);
    distance = half / tanf(fGpffff8070 * (0.5f * camera->fovRad));
    forward.x = rotated.x * distance;
    forward.y = rotated.y * distance;
    forward.z = rotated.z * distance;
    center.x = candidate.x;
    center.y = candidate.y;
    center.z = candidate.z;
    frames[1].pos.x = center.x + forward.x;
    frames[1].pos.y = center.y + forward.y;
    frames[1].pos.z = center.z + forward.z;
    FUN_002a4690(&frames[1].rot, &frames[1].pos, &center,
                 &D_00697880);
    FUN_002a3e80_call(0.0f, (u8*)camera->action, NULL, NULL, 1);
    if (frames[0].pos.y < 25.0f)
    {
        frames[0].pos.y = 25.0f;
    }
    if (frames[1].pos.y < 25.0f)
    {
        frames[1].pos.y = 25.0f;
    }
    FUN_002a2290((u16*)camera, &frames[0].pos, &frames[1].pos, 1);
    FUN_002a3110((u16*)camera, 3.0f);
}

// FUN_002a5ee0
void btlCameraFrameActionDefault(BtlCamera* camera)
{
    u32 closeView;

    switch (*(u16 *)(DAT_007ce3ec + 0x104))
    {
    case 0x1d:
        closeView = 1;
        break;
    default:
        closeView = 0;
        break;
    }
    btlCameraFrameAction(camera, closeView, 40, 70);
}

// FUN_002a5f40
void btlCameraFrameActionClose(BtlCamera* camera)
{
    int cameraAddress;
    int actionAddress;
    BtlUnit* unit;
    RwV3d center;

    cameraAddress = (int)camera;
    actionAddress = *(int *)(cameraAddress + 0xe0);
    if (actionAddress != 0 && (*(u16 *)(actionAddress + 0x1a) & 1) != 0)
    {
        unit = *(BtlUnit **)(actionAddress + 0x30);
        FUN_0027ffb0(unit, &center);
        FUN_002a3e80_call(unit->sphereRadius * unit->scale * 0.25f,
                     (u8 *)(uintptr_t)*(u32 *)(cameraAddress + 0xe0),
                     (u8 *)(uintptr_t)(cameraAddress + 0x9c), (u8 *)&center, 0x31);
    }
}

// FUN_002a5fd0
void btlCameraFrameActionPair(BtlCamera* camera)
{
    RwV3d secondPos;
    RwV3d dir;
    RwV3d firstPos;
    RwV3d center1;
    RwV3d center2;
    RtQuat blended;
    BtlCameraQuatBlend blend;
    BtlCameraKeyFrame frames[2];
    f32 hs[4];
    BtlAction* action;
    BtlUnit* unit;
    BtlUnit* unit2;
    f32 len2;
    f32 ratio;
    f32 w1;
    f32 x;
    f32 x2;
    f32 r;
    f32 r2;
    f32 dot;
    f32 angle;

    action = camera->action;
    unit = action->unit;
    unit2 = *(BtlUnit**)(*(int*)((u8*)action + 0x38) + 0x30);
    FUN_002a4470((f32*)&frames[0], (f32*)((u8*)camera + 0x9c));
    btlUnitGetSphereWorldCenter(unit, &center1);
    btlUnitGetSphereWorldCenter(unit2, &center2);
    center1.y = 0.0f + center1.y + fGpffff8094 * (unit->unk_8c * unit->scale);
    if (center1.y < 100.0f)
    {
        center1.y = 100.0f;
    }
    dir.x = frames[0].pos.x - center1.x;
    dir.y = frames[0].pos.y - center1.y;
    dir.z = frames[0].pos.z - center1.z;
    len2 = RwV3dLength(&dir);
    len2 = len2 * fGpffff8060;
    hs[2] = dir.x;
    hs[3] = dir.z;
    FUN_004c6b20(hs + 2, hs + 2);
    center2.y = center1.y;
    dir.x = center2.x - center1.x;
    dir.y = center2.y - center1.y;
    dir.z = center2.z - center1.z;
    RwV3dNormalize(&dir, &dir);
    hs[0] = dir.x;
    hs[1] = dir.z;
    dot = dir.x * hs[2] + dir.z * hs[3];
    if (dot < 0.0f)
    {
        dir.x = -dir.x;
        dir.y = -dir.y;
        dir.z = -dir.z;
    }
    secondPos.x = dir.x * (unit2->sphereRadius * unit2->scale);
    secondPos.y = dir.y * (unit2->sphereRadius * unit2->scale);
    secondPos.z = dir.z * (unit2->sphereRadius * unit2->scale);
    firstPos.x = center1.x + secondPos.x;
    firstPos.y = center1.y + secondPos.y;
    firstPos.z = center1.z + secondPos.z;
    dir.x = dir.x * (5.0f * (unit->sphereRadius * unit->scale));
    dir.y = dir.y * (5.0f * (unit->sphereRadius * unit->scale));
    dir.z = dir.z * (5.0f * (unit->sphereRadius * unit->scale));
    secondPos.x = center1.x + dir.x;
    secondPos.y = center1.y + dir.y;
    secondPos.z = center1.z + dir.z;
    secondPos.y = 0.0f + center2.y + 0.5f * (unit2->unk_8c * unit2->scale);
    dir.x = secondPos.x - center1.x;
    dir.y = secondPos.y - center1.y;
    dir.z = secondPos.z - center1.z;
    RwV3dNormalize(&dir, &dir);
    FUN_002a4690(&frames[1].rot, &secondPos, &firstPos, &D_00697880);
    angle = FUN_002d1f30((f32*)&frames[0].rot, (f32*)&frames[1].rot);
    if (angle > fGpffff8134)
    {
        ratio = fGpffff8134 / angle;
        FUN_004be310((f32*)&frames[0].rot, (f32*)&frames[1].rot, (f32*)&blend);
        if (ratio <= 0.0f)
        {
            blended = frames[0].rot;
        }
        else if (1.0f <= ratio)
        {
            blended = frames[1].rot;
        }
        else
        {
            w1 = 1.0f - ratio;
            if (blend.flag == 0)
            {
                x = w1 * blend.scalar;
                x2 = x * x;
                r = fGpffff8048 + fGpffff8130 * x2;
                r = fGpffff8118 + x2 * r;
                r = fGpffff8050 + x2 * r;
                r = fGpffff8054 + x2 * r;
                r2 = fGpffff8058 + x2 * r;
                r = x2 * x;
                w1 = x + r * r2;
                x = ratio * blend.scalar;
                x2 = x * x;
                r = fGpffff8048 + fGpffff8130 * x2;
                r = fGpffff8118 + x2 * r;
                r = fGpffff8050 + x2 * r;
                r = fGpffff8054 + x2 * r;
                r2 = fGpffff8058 + x2 * r;
                r = x2 * x;
                ratio = x + r * r2;
            }
            blended.imag.x = blend.first.imag.x * w1;
            blended.imag.y = blend.first.imag.y * w1;
            blended.imag.z = blend.first.imag.z * w1;
            blended.imag.x = 0.0f + blended.imag.x +
                             blend.second.imag.x * ratio;
            blended.imag.y = 0.0f + blended.imag.y +
                             blend.second.imag.y * ratio;
            blended.imag.z = 0.0f + blended.imag.z +
                             blend.second.imag.z * ratio;
            blended.real = blend.first.real * w1 +
                           blend.second.real * ratio;
        }
        RtQuatTransformVectors(&dir, &D_006978A0, 1, &blended);
        secondPos.x = firstPos.x + dir.x;
        secondPos.y = firstPos.y + dir.y;
        secondPos.z = firstPos.z + dir.z;
        FUN_002a4690(&frames[1].rot, &secondPos, &firstPos, &D_00697880);
    }
    if (len2 < 600.0f)
    {
        len2 = 600.0f;
    }
    dir.x = dir.x * len2;
    dir.y = dir.y * len2;
    dir.z = dir.z * len2;
    frames[1].pos.x = firstPos.x + dir.x;
    frames[1].pos.y = firstPos.y + dir.y;
    frames[1].pos.z = firstPos.z + dir.z;
    FUN_002a2290((u16*)camera, &frames[0].pos, &frames[1].pos, 1);
    FUN_002a3110((u16*)camera, 1.0f);
}

// FUN_002a6560
void btlCameraFrameActionQuarter(BtlCamera* camera)
{
    int cameraAddress;
    int actionAddress;
    BtlUnit* unit;
    RwV3d center;

    cameraAddress = (int)camera;
    actionAddress = *(int *)(cameraAddress + 0xe0);
    if (actionAddress != 0 && (*(u16 *)(actionAddress + 0x1a) & 1) != 0)
    {
        unit = *(BtlUnit **)(actionAddress + 0x30);
        FUN_0027ffb0(unit, &center);
        FUN_002a3e80_call(unit->sphereRadius * unit->scale * 0.25f,
                     (u8 *)(uintptr_t)*(u32 *)(cameraAddress + 0xe0),
                     (u8 *)(uintptr_t)(cameraAddress + 0x9c), (u8 *)&center, 0x33);
    }
}

// FUN_002a65f0
void btlCameraFrameActionDuel(BtlCamera* camera)
{
    f32 horiz[2];
    RwV3d candidate;
    RwV3d eyeAdj;
    RwV3d direction;
    RwV3d sideDirection;
    RwV3d center;
    RwV3d selectedCenter;
    RwV3d unitPoint;
    RwV3d targetCenter;
    RtQuat blended;
    RtQuat rots[2];
    BtlCameraQuatBlend blend;
    BtlCameraKeyFrame frames[2];
    BtlUnit* unit;
    BtlUnit* target;
    f32 radius;
    f32 sideOffset;
    f32 height;
    f32 angle;
    f32 ratio;
    f32 w1;
    f32 x;
    f32 x2;
    f32 r;
    f32 r2;
    f32 dist;
    f32 selectedRadius;
    f32 dot;
    f32 sideLength;
    unit = camera->action->unit;
    target = camera->action->target.targetedActions[0]->unit;
    FUN_002a4470((f32*)&frames[0], (f32*)((u8*)camera + 0x9c));
    unitPoint.x = unit->unk_dc.x;
    unitPoint.y = unit->sphereCenter.y * unit->scale;
    unitPoint.z = unit->unk_dc.z;
    FUN_0027ffb0(target, &targetCenter);
    {
        f32 targetHeight;
    height = unit->unk_8c * unit->scale;
    height = unitPoint.y + fGpffff8094 * height;
    ratio = target->unk_8c * target->scale;
    targetHeight = targetCenter.y + fGpffff8094 * ratio;
    height = height + targetHeight;
    radius = *(f32*)((u8*)unit + 0xe8);
    radius += unit->sphereRadius * unit->scale;
    radius += target->sphereRadius * target->scale;
    targetCenter.y = 0.0f;
    unitPoint.y = 0.0f;
    direction.x = unit->unk_dc.x - targetCenter.x;
    direction.y = *(f32*)((u8*)unit + 0xe0) - unitPoint.y;
    direction.z = unit->unk_dc.z - targetCenter.z;
    RwV3dNormalize(&direction, &direction);
    targetHeight = 0.25f * radius;
    center.x = direction.x * targetHeight;
    center.y = direction.y * targetHeight;
    center.z = direction.z * targetHeight;
    center.x = targetCenter.x + center.x;
    center.y = targetCenter.y + center.y;
    center.z = targetCenter.z + center.z;
    {
        f32 halfHeight;
    halfHeight = 0.5f * height;
    center.y = halfHeight;
    eyeAdj = frames[0].pos;
    eyeAdj.y = height;
    *(f32*)((int)(uintptr_t)camera + 0x10c) =
        0.5f * *(f32*)((int)(uintptr_t)unit + 0xe8);
    *(RwV3d*)((u8*)camera + 0x100) = center;
    FUN_002a4690(&frames[1].rot, &eyeAdj, &center, &D_00697880);
    height = radius;
    height += unit->sphereRadius * unit->scale;
    height += target->sphereRadius * target->scale;
    angle = FUN_002d1f30((f32*)&frames[0].rot, (f32*)&frames[1].rot);
    if (angle > fGpffff80f0)
    {
        ratio = fGpffff80f0 / angle;
        FUN_004be310((f32*)&frames[0].rot, (f32*)&frames[1].rot, (f32*)&blend);
        if (ratio <= 0.0f)
        {
            blended = frames[0].rot;
        }
        else if (1.0f <= ratio)
        {
            blended = frames[1].rot;
        }
        else
        {
            w1 = 1.0f - ratio;
            if (blend.flag == 0)
            {
                x = w1 * blend.scalar;
                x2 = x * x;
                r = fGpffff8048 + fGpffff8130 * x2;
                r = fGpffff8118 + x2 * r;
                r = fGpffff8050 + x2 * r;
                r = fGpffff8054 + x2 * r;
                r2 = fGpffff8058 + x2 * r;
                r = x2 * x;
                w1 = x + r * r2;
                x = ratio * blend.scalar;
                x2 = x * x;
                r = fGpffff8048 + fGpffff8130 * x2;
                r = fGpffff8118 + x2 * r;
                r = fGpffff8050 + x2 * r;
                r = fGpffff8054 + x2 * r;
                r2 = fGpffff8058 + x2 * r;
                r = x2 * x;
                ratio = x + r * r2;
            }
            blended.imag.x = blend.first.imag.x * w1;
            blended.imag.y = blend.first.imag.y * w1;
            blended.imag.z = blend.first.imag.z * w1;
            blended.imag.x = 0.0f + blended.imag.x + blend.second.imag.x * ratio;
            blended.imag.y = 0.0f + blended.imag.y + blend.second.imag.y * ratio;
            blended.imag.z = 0.0f + blended.imag.z + blend.second.imag.z * ratio;
            blended.real = blend.first.real * w1 + blend.second.real * ratio;
        }
        RtQuatTransformVectors(&eyeAdj, &D_006978A0, 1, &blended);
        eyeAdj.x = eyeAdj.x + center.x;
        eyeAdj.y = eyeAdj.y + center.y;
        eyeAdj.z = eyeAdj.z + center.z;
        FUN_002a4690(&frames[1].rot, &eyeAdj, &center, &D_00697880);
    }
    else if (angle < fGpffff80f4)
    {
        FUN_004bdde0((f32*)&frames[1].rot, (const f32*)&D_00697880, fGpffff80f8, 2);
    }
    if (height < 675.0f)
    {
        height = 675.0f;
    }
    dist = (1.5f * (0.5f * height)) /
           FUN_0052e930(fGpffff8070 * (0.5f * camera->fovRad));
    RtQuatTransformVectors(&eyeAdj, &D_006978A0, 1, &frames[1].rot);
    direction.y = eyeAdj.y;
    RwV3dNormalize(&direction, &direction);
    angle = eyeAdj.x * direction.x +
            eyeAdj.y * direction.y +
            eyeAdj.z * direction.z;
    if (angle >= 0.0f)
    {
        selectedRadius = unit->sphereRadius * unit->scale;
        selectedCenter = unitPoint;
    }
    else
    {
        selectedRadius = target->sphereRadius * target->scale;
        selectedCenter = targetCenter;
    }
    candidate.x = targetCenter.x + direction.z * selectedRadius;
    candidate.y = center.y;
    candidate.z = targetCenter.z - direction.x * selectedRadius;
    sideDirection.x = candidate.x - center.x;
    sideDirection.y = candidate.y - center.y;
    sideDirection.z = candidate.z - center.z;
    RwV3dNormalize(&sideDirection, &sideDirection);
    dot = 0.0f +
          sideDirection.x * direction.x +
          sideDirection.y * direction.y +
          sideDirection.z * direction.z;
    if (fabsf(angle) > fabsf(dot) &&
        dot != 0.0f && angle != 0.0f)
    {
        horiz[0] = center.x - selectedCenter.x;
        horiz[1] = center.z - selectedCenter.z;
        sideLength = RwV2dLength((RwV2d*)horiz);
        candidate.y = center.y + halfHeight * sideLength / dist;
        candidate.x = selectedCenter.x + direction.z * selectedRadius;
        candidate.z = selectedCenter.z - direction.x * selectedRadius;
        FUN_002a4690(&rots[0], &candidate, &center, &D_00697880);
        angle = FUN_002d1f30((f32*)&frames[0].rot, (f32*)&rots[0]);
        candidate.x = selectedCenter.x - direction.z * selectedRadius;
        candidate.z = selectedCenter.z + direction.x * selectedRadius;
        FUN_002a4690(&rots[1], &candidate, &center, &D_00697880);
        ratio = FUN_002d1f30((f32*)&frames[0].rot, (f32*)&rots[1]);
        if (angle < ratio)
        {
            frames[1].rot = rots[0];
        }
        else
        {
            frames[1].rot = rots[1];
        }
        RtQuatTransformVectors(&eyeAdj, &D_006978A0, 1, &frames[1].rot);
    }
    eyeAdj.x = eyeAdj.x * dist;
    eyeAdj.y = eyeAdj.y * dist;
    eyeAdj.z = eyeAdj.z * dist;
    sideOffset = dist * FUN_0052e930(fGpffff8070 * (0.5f * camera->fovRad));
    sideOffset = sideOffset * 0.21875f;
    horiz[0] = eyeAdj.x;
    horiz[1] = eyeAdj.z;
    FUN_004c6b20(horiz, horiz);
    center.x = 0.0f + center.x + horiz[1] * sideOffset;
    center.z = 0.0f + center.z - horiz[0] * sideOffset;
    frames[1].pos.x = center.x + eyeAdj.x;
    frames[1].pos.y = center.y + eyeAdj.y;
    frames[1].pos.z = center.z + eyeAdj.z;
    FUN_002a3590((f32*)&frames[0].pos, (f32*)&frames[0].pos);
    FUN_002a3590((f32*)&frames[1].pos, (f32*)&frames[1].pos);
    FUN_002a2290((u16*)camera, &frames[0].pos, &frames[1].pos, 1);
    FUN_002a3110((u16*)camera, 2.0f);
    }
    }
}

// FUN_002a6ed0
void FUN_002a6ed0(void)
{
}

// FUN_002a6ee0
#ifndef PC_BUILD
asm void btlCameraFrameActionSide(BtlCamera* camera)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf0050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x8c8200e0
  .word 0x8c500030
  .word 0x8c420038
  .word 0x8c520030
  .word 0x0200202d
  .word 0x27a50100
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a500f0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000dc2
  .word 0xc6410090
  .word 0xc640002c
  .word 0x46000d82
  .word 0xc7a10100
  .word 0xc7a000f0
  .word 0x46000801
  .word 0xe7a000c0
  .word 0xc7a10104
  .word 0xc7a000f4
  .word 0x46000801
  .word 0xe7a000c4
  .word 0xc7a10108
  .word 0xc7a000f8
  .word 0x46000801
  .word 0xe7a000c8
  .word 0x27a400c0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000646
  .word 0xc621009c
  .word 0xc7a00100
  .word 0x46000801
  .word 0xe7a00088
  .word 0xc62100a4
  .word 0xc7a00108
  .word 0x46000801
  .word 0xe7a0008c
  .word 0x27a40088
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7808060
  .word 0x46190082
  .word 0xc7a100c0
  .word 0x46020942
  .word 0xe7a500d0
  .word 0xc7a000c4
  .word 0x46020102
  .word 0xe7a400d4
  .word 0xc7a000c8
  .word 0x460200c2
  .word 0xe7a300d8
  .word 0xc7a200f0
  .word 0x46022880
  .word 0xe7a200d0
  .word 0xc7a200f4
  .word 0x46022080
  .word 0xe7a200d4
  .word 0xc7a200f8
  .word 0x46021880
  .word 0xe7a200d8
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0xc7a30088
  .word 0xc7a2008c
  .word 0x4602001a
  .word 0x44801000
  .word 0x00000000
  .word 0x460308dc
  .word 0x46021834
  .word 0x45010018
  .word 0x00000000
  .word 0xdfa20100
  .word 0xc7a20108
  .word 0xffa200e0
  .word 0xe7a200e8
  .word 0xc6030090
  .word 0xc602002c
  .word 0x460218c2
  .word 0x3c024020
  .word 0x44821000
  .word 0x00000000
  .word 0x46031182
  .word 0x3c024010
  .word 0x4482c000
  .word 0xc7a300e4
  .word 0x3c0242fa
  .word 0x44821000
  .word 0x00000000
  .word 0x46021834
  .word 0x45000012
  .word 0x00000000
  .word 0xe7a200e4
  .word 0x1000000f
  .word 0x00000000
  .word 0x0240802d
  .word 0xdfa200f0
  .word 0xc7a200f8
  .word 0xffa200e0
  .word 0xe7a200e8
  .word 0xc6430090
  .word 0xc642002c
  .word 0x460218c2
  .word 0x3c024020
  .word 0x44821000
  .word 0x00000000
  .word 0x46031182
  .word 0x3c024010
  .word 0x4482c000
  .word 0xe7a00080
  .word 0x46000947
  .word 0xe7a50084
  .word 0xc7b400e4
  .word 0xc603008c
  .word 0xc602002c
  .word 0x460218c2
  .word 0xc7828030
  .word 0x44802000
  .word 0x00000000
  .word 0x46142018
  .word 0x4603109c
  .word 0xe7a200b4
  .word 0xc7a30088
  .word 0xc7a2008c
  .word 0x4602281a
  .word 0x4603009c
  .word 0x46041034
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a200e0
  .word 0x46022018
  .word 0x4606001c
  .word 0xe7a000b0
  .word 0xc7b500e8
  .word 0x46152018
  .word 0x4606081d
  .word 0xe7a000b8
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a200e0
  .word 0x46022018
  .word 0x4606001d
  .word 0xe7a000b0
  .word 0xc7b500e8
  .word 0x46152018
  .word 0x4606081c
  .word 0xe7a000b8
  .word 0x27a4006c
  .word 0x27a500b0
  .word 0x27a600d0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a7006c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a000d0
  .word 0xe7a00090
  .word 0xc7a000d8
  .word 0xe7a00094
  .word 0xc7a000b0
  .word 0xe7a00098
  .word 0xc7a000b8
  .word 0xe7a0009c
  .word 0xc7a000e0
  .word 0xe7a000a8
  .word 0xe7b500ac
  .word 0x27a40090
  .word 0x27a50098
  .word 0x27a600a8
  .word 0x27a700a0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6020090
  .word 0xc601002c
  .word 0x46011082
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602c55c
  .word 0xc7a000a0
  .word 0xe7a000b0
  .word 0xe7b400b4
  .word 0xc7a000a4
  .word 0xe7a000b8
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc62000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a883
  .word 0x3c0243fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000086
  .word 0xc7a000c0
  .word 0x460200c2
  .word 0xe7a300c0
  .word 0xc7a000c4
  .word 0x46020042
  .word 0xe7a100c4
  .word 0xc7a000c8
  .word 0x46020082
  .word 0xe7a200c8
  .word 0xc7a000b0
  .word 0x46030000
  .word 0xe7a00060
  .word 0xc7a000b4
  .word 0x46010040
  .word 0xe7a10064
  .word 0xc7a000b8
  .word 0x46020000
  .word 0xe7a00068
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00064
  .word 0x2624009c
  .word 0x27a50060
  .word 0x0c0a912c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0abe58
  .word 0x00000000
  .word 0x4617c800
  .word 0x4600b040
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010302
  .word 0x8e2400e0
  .word 0x2625009c
  .word 0x26260100
  .word 0x24070003
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x4616b836
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600b5c6
  .word 0x8e2400e0
  .word 0x27a50100
  .word 0x27a600f0
  .word 0x4600bb06
  .word 0x24070003
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0110
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002a7378
void FUN_002a7378(void)
{
}

// FUN_002a7380
void func_002a7380(void)
{
}

// FUN_002a7390
void btlCameraFrameActionTarget(BtlCamera* camera)
{
    f32 horiz[2];
    RwV3d eyeAdj;
    RwV3d center;
    RtQuat blended;
    BtlCameraQuatBlend blend;
    BtlCameraKeyFrame frames[2];
    BtlUnit* unit;
    f32 height;
    f32 angle;
    f32 ratio;
    f32 w1;
    f32 x;
    f32 x2;
    f32 r;
    f32 r2;
    f32 dist;
    f32 sideOffset;

    unit = camera->action->unit;
    FUN_002a4470((f32*)&frames[0], (f32*)((u8*)camera + 0x9c));
    FUN_0027f7c0(unit, &center, 0, 0);
    height = unit->sphereCenter.y * unit->scale;
    height += fGpffff8094 * (unit->unk_8c * unit->scale);
    center.y = height;
    eyeAdj = frames[0].pos;
    eyeAdj.y = height;
    FUN_002a4690(&frames[1].rot, &eyeAdj, &center, &D_00697880);
    angle = FUN_002d1f30((f32*)&frames[0].rot, (f32*)&frames[1].rot);
    if (angle > fGpffff80f0)
    {
        ratio = fGpffff80f0 / angle;
        FUN_004be310((f32*)&frames[0].rot, (f32*)&frames[1].rot, (f32*)&blend);
        if (ratio <= 0.0f)
        {
            blended = frames[0].rot;
        }
        else if (1.0f <= ratio)
        {
            blended = frames[1].rot;
        }
        else
        {
            w1 = 1.0f - ratio;
            if (blend.flag == 0)
            {
                x = w1 * blend.scalar;
                x2 = x * x;
                r = fGpffff8048 + fGpffff8130 * x2;
                r = fGpffff8118 + x2 * r;
                r = fGpffff8050 + x2 * r;
                r = fGpffff8054 + x2 * r;
                r2 = fGpffff8058 + x2 * r;
                r = x2 * x;
                w1 = x + r * r2;
                x = ratio * blend.scalar;
                x2 = x * x;
                r = fGpffff8048 + fGpffff8130 * x2;
                r = fGpffff8118 + x2 * r;
                r = fGpffff8050 + x2 * r;
                r = fGpffff8054 + x2 * r;
                r2 = fGpffff8058 + x2 * r;
                r = x2 * x;
                ratio = x + r * r2;
            }
            blended.imag.x = blend.first.imag.x * w1;
            blended.imag.y = blend.first.imag.y * w1;
            blended.imag.z = blend.first.imag.z * w1;
            blended.imag.x = 0.0f + blended.imag.x + blend.second.imag.x * ratio;
            blended.imag.y = 0.0f + blended.imag.y + blend.second.imag.y * ratio;
            blended.imag.z = 0.0f + blended.imag.z + blend.second.imag.z * ratio;
            blended.real = blend.first.real * w1 + blend.second.real * ratio;
        }
        RtQuatTransformVectors(&eyeAdj, &D_006978A0, 1, &blended);
        eyeAdj.x = eyeAdj.x + center.x;
        eyeAdj.y = eyeAdj.y + center.y;
        eyeAdj.z = eyeAdj.z + center.z;
        FUN_002a4690(&frames[1].rot, &eyeAdj, &center, &D_00697880);
    }
    else if (angle < fGpffff80f4)
    {
        FUN_004bdde0((f32*)&frames[1].rot, (const f32*)&D_00697880, fGpffff80f8, 2);
    }
    RtQuatTransformVectors(&eyeAdj, &D_006978A0, 1, &frames[1].rot);
    dist = 375 / FUN_0052e930(fGpffff8070 * (0.5f * camera->fovRad));
    eyeAdj.x = eyeAdj.x * dist;
    eyeAdj.y = eyeAdj.y * dist;
    eyeAdj.z = eyeAdj.z * dist;
    sideOffset = dist * FUN_0052e930(fGpffff8070 * (0.5f * camera->fovRad));
    sideOffset = sideOffset * 0.21875f;
    horiz[0] = eyeAdj.x;
    horiz[1] = eyeAdj.z;
    FUN_004c6b20(horiz, horiz);
    center.x = 0.0f + center.x + horiz[1] * sideOffset;
    center.z = 0.0f + center.z - horiz[0] * sideOffset;
    frames[1].pos.x = center.x + eyeAdj.x;
    frames[1].pos.y = center.y + eyeAdj.y;
    frames[1].pos.z = center.z + eyeAdj.z;
    if (frames[1].pos.y < 25.0f)
    {
        frames[1].pos.y = 25.0f;
    }
    FUN_002a2290((u16*)camera, &frames[0].pos, &frames[1].pos, 1);
    FUN_002a3110((u16*)camera, fGpffff8138);
}

// FUN_002a7820
void func_002a7820(void)
{
}

// FUN_002a7830
u32 btlCameraSelectMode(BtlCamera* camera)
{
    s16 commandId;
    u16 targetMask;

    commandId = *(s16 *)((u8 *)camera->action + 0x6e);
    if (FUN_002d6290((int)camera->action) != 0)
    {
        if (*(BtlAction **)((u8 *)camera->action + 0x38) == camera->action)
        {
            return 1;
        }
        if (FUN_002a32f0((int)camera) != 0)
        {
            return 2;
        }
        if (FUN_002d6370(commandId) == 0)
        {
            return 2;
        }
        if (camera->action->unit->genus == 0 &&
            FUN_002d63b0((int)camera->action->unit->personaUnit,
                        commandId, 1) == 0)
        {
            return 2;
        }
        return 4;
    }

    targetMask = FUN_002d1600((int)((u8 *)camera->action + 0x38));
    if ((targetMask & 3) == 3)
    {
        return 6;
    }
    if (camera->action->unit->genus == 0 && (targetMask & 1) != 0)
    {
        if (FUN_002d62d0((int)camera->action) != 0)
        {
            return 6;
        }
        if (*(BtlAction **)((u8 *)camera->action + 0x38) == camera->action)
        {
            return 1;
        }
        if (FUN_002d6370(commandId) != 0)
        {
            return 4;
        }
        return 2;
    }
    if (FUN_002d6370(commandId) == 0)
    {
        return 3;
    }
    return 5;
}

typedef struct BtlCameraTargetingWork
{
    BtlCameraKeyFrame first;
    RwV3d secondPos;
    RtQuat secondRot;
    u8 pad_38[8];
    RwMatrix matrix;
    u8 pad_7c[4];
    u8 pad_80[4];
    struct
    {
        u64 xy;
        f32 y;
        f32 z;
    } targetPos;
    f32 horiz[2];
    RwV3d candidate;
    u8 pad_9c[4];
    RwV3d sidePoint;
    u8 pad_ac[4];
    RwV3d diff;
    u8 pad_bc[4];
    RwV3d direction;
    u8 pad_cc[4];
    RwV3d desired;
    u8 pad_dc[4];
    RwV3d generated;
    u8 pad_ec[4];
    RwV3d sphereCenter;
    f32 radius;
} BtlCameraTargetingWork;


// FUN_002a79f0
#ifndef PC_BUILD
asm void btlCameraFrameActionTargeting(BtlCamera* camera)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x27a40040
  .word 0x2605009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x8e0200e0
  .word 0x8c510030
  .word 0x0220202d
  .word 0x27a50140
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x24040003
  .word 0x24050001
  .word 0x27a60130
  .word 0x27a7014c
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x460005c6
  .word 0x0200202d
  .word 0x0c0a8d08
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a8ce0
  .word 0x00000000
  .word 0x1040005c
  .word 0x00000000
  .word 0x8e240a00
  .word 0x10800008
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0a2038
  .word 0x00000000
  .word 0x8e220a00
  .word 0xae020120
  .word 0x24020001
  .word 0xa6020124
  .word 0x3c023f40
  .word 0x44820800
  .word 0xc7a0014c
  .word 0x46000802
  .word 0xe7a00134
  .word 0xe7a00144
  .word 0x3c023f00
  .word 0x4482a800
  .word 0xc7948070
  .word 0xc60000b8
  .word 0x4600a802
  .word 0x4600a302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600bd83
  .word 0x3c02447a
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000586
  .word 0xc7a30140
  .word 0xc7a20130
  .word 0x46031032
  .word 0x4500000e
  .word 0x00000000
  .word 0xc7a10138
  .word 0xc7a00148
  .word 0x46000832
  .word 0x45000009
  .word 0x00000000
  .word 0x3c020069
  .word 0xdc437890
  .word 0x3c020069
  .word 0xc4407898
  .word 0xffa30110
  .word 0xe7a00118
  .word 0x1000000f
  .word 0x00000000
  .word 0x46031001
  .word 0xe7a00110
  .word 0xc7a10134
  .word 0xc7a00144
  .word 0x46000801
  .word 0xe7a00114
  .word 0xc7a10138
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00118
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00110
  .word 0x461700c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46170082
  .word 0xe7a20114
  .word 0xc7a00118
  .word 0x46170042
  .word 0xe7a10118
  .word 0xc7a40130
  .word 0x46032000
  .word 0xe7a00120
  .word 0xc7a00134
  .word 0x46020000
  .word 0xe7a00124
  .word 0xc7a20138
  .word 0x46011000
  .word 0xe7a00128
  .word 0x3c023fa0
  .word 0x44820800
  .word 0xc7a0014c
  .word 0x46000802
  .word 0xe7a00124
  .word 0x10000086
  .word 0x00000000
  .word 0x8e240a00
  .word 0x10800008
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0a2038
  .word 0x00000000
  .word 0x8e220a00
  .word 0xae020120
  .word 0x24020001
  .word 0xa6020124
  .word 0x3c023f40
  .word 0x44820800
  .word 0xc7a0014c
  .word 0x46000802
  .word 0xe7a00134
  .word 0xe7a00144
  .word 0x3c023f00
  .word 0x4482a800
  .word 0xc7948070
  .word 0xc60000b8
  .word 0x4600a802
  .word 0x4600a302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600bd83
  .word 0x3c024496
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000586
  .word 0xc7a30140
  .word 0xc7a20130
  .word 0x46031032
  .word 0x4500000e
  .word 0x00000000
  .word 0xc7a10138
  .word 0xc7a00148
  .word 0x46000832
  .word 0x45000009
  .word 0x00000000
  .word 0x3c020069
  .word 0xdc437890
  .word 0x3c020069
  .word 0xc4407898
  .word 0xffa30110
  .word 0xe7a00118
  .word 0x1000000f
  .word 0x00000000
  .word 0x46031001
  .word 0xe7a00110
  .word 0xc7a10134
  .word 0xc7a00144
  .word 0x46000801
  .word 0xe7a00114
  .word 0xc7a10138
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00118
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00110
  .word 0x461700c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46170082
  .word 0xe7a20114
  .word 0xc7a00118
  .word 0x46170042
  .word 0xe7a10118
  .word 0xc7a40130
  .word 0x46032000
  .word 0xe7a00120
  .word 0xc7a00134
  .word 0x46020000
  .word 0xe7a00124
  .word 0xc7a20138
  .word 0x46011000
  .word 0xe7a00128
  .word 0xc78180c0
  .word 0xc7a0014c
  .word 0x46000842
  .word 0xe7a10124
  .word 0x3c024348
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe7a00124
  .word 0xdfa20120
  .word 0xc7a00128
  .word 0xffa200e0
  .word 0xe7a000e8
  .word 0xc7a10134
  .word 0xe7a100e4
  .word 0xc7a000e0
  .word 0x46040001
  .word 0xe7a00100
  .word 0x46010801
  .word 0xe7a00104
  .word 0xc7a000e8
  .word 0x46020001
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a00100
  .word 0x460100c2
  .word 0xe7a300f0
  .word 0xc7a00104
  .word 0x46010082
  .word 0xe7a200f4
  .word 0xc7a00108
  .word 0x46010042
  .word 0xe7a100f8
  .word 0xc7a40130
  .word 0x46041800
  .word 0xe7a000f0
  .word 0xc7a00134
  .word 0x46001000
  .word 0xe7a000f4
  .word 0xc7a20138
  .word 0x46020800
  .word 0xe7a000f8
  .word 0xdfa20120
  .word 0xc7a00128
  .word 0xffa200c8
  .word 0xe7a000d0
  .word 0xc7a10134
  .word 0xe7a100cc
  .word 0xc7a000c8
  .word 0x46040001
  .word 0xe7a00100
  .word 0x46010801
  .word 0xe7a00104
  .word 0xc7a000d0
  .word 0x46020001
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a00100
  .word 0x460100c2
  .word 0xe7a300f0
  .word 0xc7a00104
  .word 0x46010082
  .word 0xe7a200f4
  .word 0xc7a00108
  .word 0x46010042
  .word 0xe7a100f8
  .word 0xc7a00130
  .word 0x46001800
  .word 0xe7a000f0
  .word 0xc7a00134
  .word 0x46001000
  .word 0xe7a000f4
  .word 0xc7a00138
  .word 0x46000800
  .word 0xe7a000f8
  .word 0x27a40068
  .word 0x27a50120
  .word 0x27a600f0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc7a10120
  .word 0xc7a000f0
  .word 0x46000801
  .word 0xe7a00110
  .word 0xc7a10124
  .word 0xc7a000f4
  .word 0x46000801
  .word 0xe7a00114
  .word 0xc7a10128
  .word 0xc7a000f8
  .word 0x46000801
  .word 0xe7a00118
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc60000b8
  .word 0x4600a802
  .word 0x4600a302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600b042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00110
  .word 0xe7a000d8
  .word 0xc7a00118
  .word 0xe7a000dc
  .word 0x27a400d8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a100dc
  .word 0xc7a000f0
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614095c
  .word 0xe7a500f0
  .word 0xc7a100d8
  .word 0xc7a000f8
  .word 0x46001018
  .word 0x4614091d
  .word 0xe7a400f8
  .word 0xc7a00110
  .word 0x461600c2
  .word 0xe7a30100
  .word 0xc7a00114
  .word 0x46160082
  .word 0xe7a20104
  .word 0xc7a00118
  .word 0x46160042
  .word 0xe7a10108
  .word 0x46032800
  .word 0xe7a0005c
  .word 0xc7a000f4
  .word 0x46020000
  .word 0xe7a00060
  .word 0x46012000
  .word 0xe7a00064
  .word 0x0000202d
  .word 0x0c0d5ff4
  .word 0x00000000
  .word 0x30420001
  .word 0x1040000b
  .word 0x00000000
  .word 0x3c02c1f0
  .word 0x44826000
  .word 0x27a40080
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x3c0241f0
  .word 0x44826000
  .word 0x27a40080
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40100
  .word 0x27a50110
  .word 0x27a60080
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc7a00100
  .word 0x461600c2
  .word 0xe7a30100
  .word 0xc7a00104
  .word 0x46160082
  .word 0xe7a20104
  .word 0xc7a00108
  .word 0x46160042
  .word 0xe7a10108
  .word 0xc7a000f0
  .word 0x46030000
  .word 0xe7a00040
  .word 0xc7a000f4
  .word 0x46020000
  .word 0xe7a00044
  .word 0xc7a000f8
  .word 0x46010000
  .word 0xe7a00048
  .word 0x27a4004c
  .word 0x27a50040
  .word 0x27a600f0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0x27a40040
  .word 0x0080282d
  .word 0x0c0a8d64
  .word 0x00000000
  .word 0x27a4005c
  .word 0x0080282d
  .word 0x0c0a8d64
  .word 0x00000000
  .word 0xc7a10044
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00044
  .word 0xc7a10060
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00060
  .word 0x0200202d
  .word 0x27a50040
  .word 0x27a6005c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c024120
  .word 0x44826000
  .word 0x0200202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002a8150
#ifndef PC_BUILD
asm void btlCameraFrameActionPersona(BtlCamera* camera, u32 suppressEffects,
                                 u32 useCurrentTarget)
{
  .set noreorder
  .word 0x27bdfe40
  .word 0xffbf0080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0a82d
  .word 0x0c0a8d48
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8d54
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x8e8200e0
  .word 0x8c500030
  .word 0x8e120a00
  .word 0x0200202d
  .word 0x27a501a0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50190
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc605002c
  .word 0xc600008c
  .word 0x46050042
  .word 0x3c023f00
  .word 0x44822000
  .word 0xc7a001a4
  .word 0x44801800
  .word 0x00000000
  .word 0x46001818
  .word 0x4601265c
  .word 0xc642002c
  .word 0xc640008c
  .word 0x46020042
  .word 0xc7a00194
  .word 0x46001818
  .word 0x4601261c
  .word 0xc6000090
  .word 0x46050582
  .word 0xc6400090
  .word 0x46020682
  .word 0x1620000d
  .word 0x00000000
  .word 0x964300a4
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b73c
  .word 0x00431021
  .word 0x94420000
  .word 0x30420001
  .word 0x144001ac
  .word 0x00000000
  .word 0x16200072
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xc7a701a0
  .word 0xc7a00190
  .word 0x46003980
  .word 0xe7a601b0
  .word 0xc7a501a4
  .word 0xc7a00194
  .word 0x46002900
  .word 0xe7a401b4
  .word 0xc7a301a8
  .word 0xc7a00198
  .word 0x46001880
  .word 0xe7a201b8
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46013002
  .word 0xe7a001b0
  .word 0x46012542
  .word 0xe7b501b4
  .word 0x46011502
  .word 0xe7b401b8
  .word 0x46003801
  .word 0xe7a00170
  .word 0x46152801
  .word 0xe7a00174
  .word 0x46141801
  .word 0xe7a00178
  .word 0x27a40170
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x461605c0
  .word 0xdfa201a0
  .word 0xc7a001a8
  .word 0xffa20180
  .word 0xe7a00188
  .word 0xe7b90184
  .word 0xc7a10180
  .word 0xc7a001b0
  .word 0x46000801
  .word 0xe7a00170
  .word 0x4615c801
  .word 0xe7a00174
  .word 0xc7a00188
  .word 0x46140001
  .word 0xe7a00178
  .word 0x27a40170
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x4600b836
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x460005c6
  .word 0xc7a10190
  .word 0xc7a001b0
  .word 0x46000801
  .word 0xe7a00170
  .word 0xc7b601b4
  .word 0xc7a00194
  .word 0x46160001
  .word 0xe7a00174
  .word 0xc7b501b8
  .word 0xc7a00198
  .word 0x46150001
  .word 0xe7a00178
  .word 0x27a40170
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x461a0500
  .word 0xdfa20190
  .word 0xc7a00198
  .word 0xffa20180
  .word 0xe7a00188
  .word 0xe7b80184
  .word 0xc7a10180
  .word 0xc7a001b0
  .word 0x46000801
  .word 0xe7a00170
  .word 0x4616c001
  .word 0xe7a00174
  .word 0xc7a00188
  .word 0x46150001
  .word 0xe7a00178
  .word 0x27a40170
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46000506
  .word 0xdfa201b0
  .word 0xc7a001b8
  .word 0xffa20150
  .word 0xe7a00158
  .word 0x4614b836
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600a5c6
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bec2
  .word 0x10000013
  .word 0x00000000
  .word 0xdfa201a0
  .word 0xc7a001a8
  .word 0xffa20138
  .word 0xe7a00140
  .word 0xdfa20138
  .word 0xc7a00140
  .word 0xffa201b0
  .word 0xe7a001b8
  .word 0xffa20150
  .word 0xe7a00158
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46190600
  .word 0x3c0240b0
  .word 0x44820000
  .word 0x00000000
  .word 0x461606c2
  .word 0xc681009c
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00118
  .word 0xc68100a4
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a0011c
  .word 0x27a40118
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x27a40160
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00168
  .word 0xe7a00110
  .word 0xc7a00160
  .word 0x46000007
  .word 0xe7a00114
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a30110
  .word 0xc7a20118
  .word 0xc7a10114
  .word 0xc7a0011c
  .word 0x4600081a
  .word 0x44800000
  .word 0x46021d9c
  .word 0x4600b034
  .word 0x4501000b
  .word 0x00000000
  .word 0x3c024216
  .word 0x44826000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x3c02c216
  .word 0x44826000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40170
  .word 0x27a50160
  .word 0x27a600d0
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc7a00170
  .word 0x461b00c2
  .word 0xe7a30170
  .word 0xc7a00174
  .word 0x461b0082
  .word 0xe7a20174
  .word 0xc7a00178
  .word 0x461b0042
  .word 0xe7a10178
  .word 0xc7a001b0
  .word 0x46001800
  .word 0xe7a00180
  .word 0xc7b501b4
  .word 0x46151000
  .word 0xe7a00184
  .word 0xc7b401b8
  .word 0x46140800
  .word 0xe7a00188
  .word 0x4618c834
  .word 0x45000004
  .word 0x00000000
  .word 0xc780807c
  .word 0x46180002
  .word 0xe7a00184
  .word 0xc7a10180
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00170
  .word 0xc7a10184
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a00174
  .word 0xc7a10188
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a00178
  .word 0x27a40170
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a400b8
  .word 0x27a50180
  .word 0x27a60150
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600de83
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600d042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000dc2
  .word 0xc7a00170
  .word 0xe7a00148
  .word 0xc7a00178
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1014c
  .word 0xc7a00150
  .word 0x44802800
  .word 0x00000000
  .word 0x46002818
  .word 0x4617099c
  .word 0xe7a60150
  .word 0xc7a10148
  .word 0xc7a00158
  .word 0x46002818
  .word 0x4617091d
  .word 0xe7a40158
  .word 0xc7a00170
  .word 0x461a00c2
  .word 0xe7a30180
  .word 0xc7a00174
  .word 0x461a0082
  .word 0xe7a20184
  .word 0xc7a00178
  .word 0x461a0042
  .word 0xe7a10188
  .word 0x46033000
  .word 0xe7a000ac
  .word 0xc7a00154
  .word 0x46020000
  .word 0xe7a000b0
  .word 0x46012000
  .word 0xe7a000b4
  .word 0x4605b034
  .word 0x4501000b
  .word 0x00000000
  .word 0x3c02428c
  .word 0x44826000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x3c02c28c
  .word 0x44826000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40170
  .word 0x27a50160
  .word 0x27a600d0
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc7a00170
  .word 0x461b00c2
  .word 0xe7a30170
  .word 0xc7a00174
  .word 0x461b0082
  .word 0xe7a20174
  .word 0xc7a00178
  .word 0x461b0042
  .word 0xe7a10178
  .word 0xc7a001b0
  .word 0x46001800
  .word 0xe7a00180
  .word 0x46151000
  .word 0xe7a00184
  .word 0x46140800
  .word 0xe7a00188
  .word 0x4618c834
  .word 0x45000004
  .word 0x00000000
  .word 0xc780807c
  .word 0x46180002
  .word 0xe7a00184
  .word 0xc7a10180
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00170
  .word 0xc7a10184
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a00174
  .word 0xc7a10188
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a00178
  .word 0x27a40170
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a60150
  .word 0xdfa201b0
  .word 0xc7a001b8
  .word 0xffa20150
  .word 0xe7a00158
  .word 0x27a4009c
  .word 0x27a50180
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600d042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00170
  .word 0xe7a00148
  .word 0xc7a00178
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1014c
  .word 0xc7a00150
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614095c
  .word 0xe7a50150
  .word 0xc7a10148
  .word 0xc7a00158
  .word 0x46001018
  .word 0x4614091d
  .word 0xe7a40158
  .word 0xc7a00170
  .word 0x461a00c2
  .word 0xe7a30180
  .word 0xc7a00174
  .word 0x461a0082
  .word 0xe7a20184
  .word 0xc7a00178
  .word 0x461a0042
  .word 0xe7a10188
  .word 0x46032800
  .word 0xe7a00090
  .word 0xc7a00154
  .word 0x46020000
  .word 0xe7a00094
  .word 0x46012000
  .word 0xe7a00098
  .word 0x100000b3
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xdfa20190
  .word 0xc7a00198
  .word 0xffa20128
  .word 0xe7a00130
  .word 0xdfa30128
  .word 0xc7a10130
  .word 0xffa301b0
  .word 0xe7a101b8
  .word 0x3c023e80
  .word 0x44820000
  .word 0x00000000
  .word 0x46180002
  .word 0xe7a001b4
  .word 0xffa30150
  .word 0xe7a10158
  .word 0xc7808080
  .word 0x46180002
  .word 0xe7a00154
  .word 0x27a40160
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00160
  .word 0x461a0042
  .word 0xe7a10170
  .word 0xc7a00164
  .word 0x461a0102
  .word 0xe7a40174
  .word 0xc7a00168
  .word 0x461a0082
  .word 0xe7a20178
  .word 0xc7a001b0
  .word 0x460008c0
  .word 0xe7a30180
  .word 0xc7a101b4
  .word 0x46012000
  .word 0xe7a00184
  .word 0xc7a001b8
  .word 0x46001080
  .word 0xe7a20188
  .word 0xc7808084
  .word 0x46010042
  .word 0xe7a10184
  .word 0xc7a00150
  .word 0x46001801
  .word 0xe7a00170
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a00174
  .word 0xc7a00158
  .word 0x46001001
  .word 0xe7a00178
  .word 0x27a40170
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x27a400b8
  .word 0x27a50180
  .word 0x27a60150
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46180d02
  .word 0x4614d036
  .word 0x45010011
  .word 0x00000000
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820800
  .word 0x00000000
  .word 0x461a0842
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0xc68000b8
  .word 0x46000b02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820800
  .word 0x00000000
  .word 0x46140842
  .word 0x46000d03
  .word 0x461aa041
  .word 0x24020177
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0x461a0500
  .word 0xc7a00170
  .word 0x461400c2
  .word 0xe7a30180
  .word 0xc7a00174
  .word 0x46140082
  .word 0xe7a20184
  .word 0xc7a00178
  .word 0x46140042
  .word 0xe7a10188
  .word 0xc7a00150
  .word 0x46030000
  .word 0xe7a000ac
  .word 0xc7a00154
  .word 0x46020000
  .word 0xe7a000b0
  .word 0xc7a00158
  .word 0x46010000
  .word 0xe7a000b4
  .word 0x27a60150
  .word 0xdfa201a0
  .word 0xc7a001a8
  .word 0xffa20150
  .word 0xe7a00158
  .word 0xe7b90154
  .word 0xc7a00160
  .word 0x461a00c2
  .word 0xe7a30170
  .word 0xc7a00164
  .word 0x461a0082
  .word 0xe7a20174
  .word 0xc7a00168
  .word 0x461a0042
  .word 0xe7a10178
  .word 0xc7a00150
  .word 0x46001800
  .word 0xe7a00180
  .word 0x46191000
  .word 0xe7a00184
  .word 0xc7a00158
  .word 0x46000800
  .word 0xe7a00188
  .word 0x27a4009c
  .word 0x27a50180
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc7808088
  .word 0x46140042
  .word 0xc7a00160
  .word 0x460100c2
  .word 0xe7a30180
  .word 0xc7a00164
  .word 0x46010082
  .word 0xe7a20184
  .word 0xc7a00168
  .word 0x46010042
  .word 0xe7a10188
  .word 0xc7a00150
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00154
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a00158
  .word 0x46010000
  .word 0xe7a00098
  .word 0xc7a10094
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00094
  .word 0xc7a100b0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000b0
  .word 0x16a0000f
  .word 0x00000000
  .word 0xc7a200ac
  .word 0xc7a100b0
  .word 0xc7a000b4
  .word 0xe7a20090
  .word 0xe7a10094
  .word 0xe7a00098
  .word 0xc7a300b8
  .word 0xc7a200bc
  .word 0xc7a100c0
  .word 0xc7a000c4
  .word 0xe7a3009c
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0x44806000
  .word 0x8e8400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50090
  .word 0x27a600ac
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c024020
  .word 0x44826000
  .word 0x0280202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x12600004
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7bb001c
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002a8d20
void btlCameraFrameActionAll(BtlCamera* camera, u32 suppressEffects)
{
    RwV3d midpoint;
    RwV3d center1;
    RwV3d center2;
    RwV3d candidate;
    RwV3d direction;
    RwV3d transformed;
    RwV3d base;
    RwV3d aux;
    f32 work[14];
    BtlUnit* unit;
    BtlUnit* persona;
    f32 radius1;
    f32 radius2;
    f32 height1;
    f32 height2;
    f32 distance1;
    f32 distance2;
    f32 halfHeight;
    f32 scale;
    f32 f;

    unit = camera->action->unit;
    persona = unit->personaUnit;
    btlUnitGetSphereWorldCenter(unit, &center1);
    btlUnitGetSphereWorldCenter(persona, &center2);
    height1 = unit->unk_8c * unit->scale;
    height1 = center1.y + 0.5f * height1;
    height2 = persona->unk_8c * persona->scale;
    height2 = center2.y + 0.5f * height2;
    radius1 = unit->sphereRadius * unit->scale;
    radius2 = persona->sphereRadius * persona->scale;
    if ((*(u16*)(iGpffffb73c + (persona->charId * 0x58)) & 1) == 0)
    {
        btlUnit002880e0(persona, 0);
        midpoint.x = center1.x + center2.x;
        midpoint.y = center1.y + center2.y;
        midpoint.z = center1.z + center2.z;
        midpoint.x = midpoint.x * 0.5f;
        midpoint.y = midpoint.y * 0.5f;
        midpoint.z = midpoint.z * 0.5f;
        direction.x = center1.x - midpoint.x;
        direction.y = center1.y - midpoint.y;
        direction.z = center1.z - midpoint.z;
        f = RwV3dLength(&direction);
        distance1 = f + radius1;
        candidate = center1;
        candidate.y = height1;
        direction.x = candidate.x - midpoint.x;
        direction.y = candidate.y - midpoint.y;
        direction.z = candidate.z - midpoint.z;
        f = RwV3dLength(&direction);
        distance1 = (distance1 > f) ? distance1 : f;
        direction.x = center2.x - midpoint.x;
        direction.y = center2.y - midpoint.y;
        direction.z = center2.z - midpoint.z;
        f = RwV3dLength(&direction);
        distance2 = f + radius2;
        candidate = center2;
        candidate.y = height2;
        direction.x = candidate.x - midpoint.x;
        direction.y = candidate.y - midpoint.y;
        direction.z = candidate.z - midpoint.z;
        f = RwV3dLength(&direction);
        distance2 = (distance2 > f) ? distance2 : f;
        base = midpoint;
        if (height1 < height2) halfHeight = fGpffff8084 * height2;
        else halfHeight = fGpffff8084 * height1;
        base.y = halfHeight;
        distance1 = (distance1 > distance2) ? distance1 : distance2;
        scale = distance1 * fGpffff811c;
        RtQuatTransformVectors(&transformed, &D_00697890, 1, &unit->rot);
        direction.x = transformed.x * scale;
        direction.y = transformed.y * scale;
        direction.z = transformed.z * scale;
        candidate.x = direction.x + midpoint.x;
        candidate.y = direction.y + midpoint.y;
        candidate.z = direction.z + midpoint.z;
        if (height1 < height2) halfHeight = 0.5f * height2;
        else halfHeight = 0.5f * height1;
        candidate.y = halfHeight;
        direction.x = candidate.x - base.x;
        direction.y = candidate.y - base.y;
        direction.z = candidate.z - base.z;
        RwV3dNormalize(&direction, &direction);
        FUN_002a4690((RtQuat*)(work + 10), &candidate, &base, &D_00697880);
        radius1 = scale / FUN_0052e930(fGpffff8070 * (0.5f * camera->fovRad));
        candidate.x = direction.x * radius1;
        candidate.y = direction.y * radius1;
        candidate.z = direction.z * radius1;
        work[7] = base.x + candidate.x;
        work[8] = base.y + candidate.y;
        work[9] = base.z + candidate.z;
        base = center1;
        f = 0.75f * height1;
        base.y = f;
        direction.x = transformed.x * radius2;
        direction.y = transformed.y * radius2;
        direction.z = transformed.z * radius2;
        candidate.x = direction.x + base.x;
        candidate.y = direction.y + base.y;
        candidate.z = direction.z + base.z;
        FUN_002a4690((RtQuat*)(work + 3), &candidate, &base, &D_00697880);
        f = 0.75f * radius1;
        candidate.x = transformed.x * f;
        candidate.y = transformed.y * f;
        candidate.z = transformed.z * f;
        work[0] = base.x + candidate.x;
        work[1] = base.y + candidate.y;
        work[2] = base.z + candidate.z;
    }
    else
    {
        btlUnit002880e0(persona, 1);
        aux = center2;
        midpoint = center2;
        midpoint.y = fGpffff8088 * height2;
        base = center2;
        base.y = fGpffff8064 * height2;
        RtQuatTransformVectors(&transformed, &D_00697890, 1, &unit->rot);
        direction.x = transformed.x * radius2;
        direction.y = transformed.y * radius2;
        direction.z = transformed.z * radius2;
        candidate.x = direction.x + midpoint.x;
        candidate.y = direction.y + midpoint.y;
        candidate.z = direction.z + midpoint.z;
        candidate.y = fGpffff8084 * midpoint.y;
        direction.x = candidate.x - base.x;
        direction.y = candidate.y - base.y;
        direction.z = candidate.z - base.z;
        RwV3dNormalize(&direction, &direction);
        FUN_002a4690((RtQuat*)(work + 10), &candidate, &base, &D_00697880);
        halfHeight = 0.5f * height2;
        if (radius2 > halfHeight)
            radius1 = (1.25f * radius2) /
                      FUN_0052e930(fGpffff8070 * (0.5f * camera->fovRad));
        else
            radius1 = (1.25f * halfHeight) /
                      FUN_0052e930(0.5f * camera->fovRad);
        if (radius1 - radius2 < 350.0f) radius1 = 350.0f + radius2;
        candidate.x = direction.x * radius1;
        candidate.y = direction.y * radius1;
        candidate.z = direction.z * radius1;
        work[7] = base.x + candidate.x;
        work[8] = base.y + candidate.y;
        work[9] = base.z + candidate.z;
        base = center1;
        base.y = height1;
        direction.x = transformed.x * radius2;
        direction.y = transformed.y * radius2;
        direction.z = transformed.z * radius2;
        candidate.x = direction.x + base.x;
        candidate.y = direction.y + base.y;
        candidate.z = direction.z + base.z;
        FUN_002a4690((RtQuat*)(work + 3), &candidate, &base, &D_00697880);
        f = fGpffff80c4 * radius1;
        candidate.x = transformed.x * f;
        candidate.y = transformed.y * f;
        candidate.z = transformed.z * f;
        work[0] = base.x + candidate.x;
        work[1] = base.y + candidate.y;
        work[2] = base.z + candidate.z;
    }
    if (work[1] < 25.0f) work[1] = 25.0f;
    if (work[8] < 25.0f) work[8] = 25.0f;
    FUN_002a3e80_call(0.0f, (u8*)camera->action, 0, 0, 1);
    FUN_002a2290((u16*)camera, (RwV3d*)work, (RwV3d*)(work + 7), 1);
    FUN_002a3110((u16*)camera, 2.0f);
    if (suppressEffects != 0) FUN_00351bb0(0xc);
}

// The near-window candidate still differs in saved-register layout and long-lived
// temporary coloring; declaration and access-order probes were codegen-neutral.
// Keep this marker NONMATCHING until those register lifetimes are reconstructed.
/* W367 measured: opt_dead_assignments off + opt_lifetimes on nd2376 -> 2221, object 3276/3296; baseline object 3288/3296. */
#pragma opt_dead_assignments off
#pragma opt_lifetimes on
// FUN_002a95d0
#ifndef PC_BUILD
asm void btlCameraFrameActionResult(BtlCamera* camera, u32 suppressEffects,
                                u32 useCurrentTarget)
{
  .set noreorder
  .word 0x27bdfe50
  .word 0xffbf00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0b02d
  .word 0x00c0b82d
  .word 0x8c8400e0
  .word 0x8c910030
  .word 0x8c820038
  .word 0x8c530030
  .word 0x8e320a00
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x0240282d
  .word 0x0c0bf6ec
  .word 0x00000000
  .word 0x0002a82b
  .word 0x0280202d
  .word 0x0c0a8d48
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8d54
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0220202d
  .word 0x27a501a0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50180
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc621008c
  .word 0xc620002c
  .word 0x46000842
  .word 0x3c023f00
  .word 0x44821800
  .word 0xc7a001a4
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x46011ddc
  .word 0xc641008c
  .word 0xc640002c
  .word 0x46000842
  .word 0xc7a00184
  .word 0x46001018
  .word 0x46011d5c
  .word 0x16a0000d
  .word 0x00000000
  .word 0x4615b834
  .word 0x4500000a
  .word 0x00000000
  .word 0x16000008
  .word 0x00000000
  .word 0x4615b840
  .word 0x3c023e80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a001a4
  .word 0x4600adc6
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000e02
  .word 0xc6410090
  .word 0xc640002c
  .word 0x46000802
  .word 0x16a00007
  .word 0x00000000
  .word 0x4600c034
  .word 0x45000004
  .word 0x00000000
  .word 0x16000002
  .word 0x00000000
  .word 0x46000606
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000606
  .word 0x0260202d
  .word 0x27a50190
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc661002c
  .word 0xc660008c
  .word 0x46010102
  .word 0x3c023f00
  .word 0x44820000
  .word 0xc7a30194
  .word 0x44801000
  .word 0x00000000
  .word 0x46031018
  .word 0x4604059c
  .word 0x3c0243e1
  .word 0x44820800
  .word 0x00000000
  .word 0x4601b034
  .word 0x45010006
  .word 0x00000000
  .word 0xc780808c
  .word 0x46031018
  .word 0x4604001d
  .word 0xe7a00194
  .word 0x46000d86
  .word 0x0280202d
  .word 0x0c0a8d08
  .word 0x00000000
  .word 0x0040a82d
  .word 0x16000023
  .word 0x00000000
  .word 0x16a00021
  .word 0x00000000
  .word 0x964300a4
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b73c
  .word 0x00431021
  .word 0x94420000
  .word 0x30420001
  .word 0x10400015
  .word 0x00000000
  .word 0x240202ee
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a834
  .word 0x45000006
  .word 0x00000000
  .word 0xc7808060
  .word 0x46150002
  .word 0xe7a001a4
  .word 0x10000004
  .word 0x00000000
  .word 0xc7808090
  .word 0x46150002
  .word 0xe7a001a4
  .word 0xc7808094
  .word 0x46160002
  .word 0xe7a00194
  .word 0x3c023fc0
  .word 0x4482a000
  .word 0xc7a101a0
  .word 0xc7a00190
  .word 0x46000801
  .word 0xe7a00150
  .word 0xc7a101a4
  .word 0xc7a00194
  .word 0x46000801
  .word 0xe7a00154
  .word 0xc7a101a8
  .word 0xc7a00198
  .word 0x46000801
  .word 0xe7a00158
  .word 0x27a40150
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000646
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a00150
  .word 0x46010082
  .word 0xe7a20160
  .word 0xc7a00154
  .word 0x460100c2
  .word 0xe7a30164
  .word 0xc7a00158
  .word 0x46010042
  .word 0xe7a10168
  .word 0xc7a00190
  .word 0x46001080
  .word 0xe7a20160
  .word 0xc7a00194
  .word 0x46001800
  .word 0xe7a00164
  .word 0xc7a00198
  .word 0x46000840
  .word 0xe7a10168
  .word 0xc680009c
  .word 0x46020001
  .word 0xe7a000f8
  .word 0xc68000a4
  .word 0x46010001
  .word 0xe7a000fc
  .word 0x27a400f8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x16a0000c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d5ff4
  .word 0x00000000
  .word 0x30420001
  .word 0x10400107
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8ce0
  .word 0x00000000
  .word 0x10400102
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xae920120
  .word 0xa6800124
  .word 0x0260882d
  .word 0xdfa201a0
  .word 0xc7a001a8
  .word 0xffa20170
  .word 0xe7a00178
  .word 0x3c024010
  .word 0x44820000
  .word 0x00000000
  .word 0x46180182
  .word 0xc780809c
  .word 0x46140502
  .word 0xc7a40158
  .word 0xe7a400f0
  .word 0xc7a30150
  .word 0x46001887
  .word 0xe7a200f4
  .word 0xc7a100f8
  .word 0xc7a000fc
  .word 0x4600101a
  .word 0x44801000
  .word 0x4601255c
  .word 0x4616b834
  .word 0x45000008
  .word 0x00000000
  .word 0xc7808030
  .word 0xc7a10174
  .word 0x46011018
  .word 0x4617005c
  .word 0xe7a10144
  .word 0x10000006
  .word 0x00000000
  .word 0xc7808030
  .word 0xc7a10174
  .word 0x46011018
  .word 0x4617005d
  .word 0xe7a10144
  .word 0x44801000
  .word 0x00000000
  .word 0x4602a834
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a10170
  .word 0x46011018
  .word 0x4606205c
  .word 0xe7a10140
  .word 0xc7a10178
  .word 0x46011018
  .word 0x4606185d
  .word 0xe7a10148
  .word 0x1000001f
  .word 0x00000000
  .word 0xc7a50158
  .word 0xc7a10170
  .word 0x46011018
  .word 0x4606285d
  .word 0xe7a10140
  .word 0xc7a30150
  .word 0xc7a10178
  .word 0x46011018
  .word 0x4606185c
  .word 0xe7a10148
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46190882
  .word 0x46021902
  .word 0xe7a40160
  .word 0xc7a10154
  .word 0x460208c2
  .word 0xe7a30164
  .word 0x46022882
  .word 0xe7a20168
  .word 0xc7a10190
  .word 0x46012040
  .word 0xe7a10160
  .word 0xc7a10194
  .word 0x46011840
  .word 0xe7a10164
  .word 0xc7a10198
  .word 0x46011040
  .word 0xe7a10168
  .word 0xc662008c
  .word 0xc661002c
  .word 0x460110c2
  .word 0xc7a20164
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4603001c
  .word 0xe7a00164
  .word 0x27a400bc
  .word 0x27a50140
  .word 0x27a60160
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40150
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700bc
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00160
  .word 0xe7a00100
  .word 0xc7a00168
  .word 0xe7a00104
  .word 0xc7a00140
  .word 0xe7a00108
  .word 0xc7a00148
  .word 0xe7a0010c
  .word 0xc7a00170
  .word 0xe7a00128
  .word 0xc7a00178
  .word 0xe7a0012c
  .word 0x27a40100
  .word 0x27a50108
  .word 0x27a60128
  .word 0x27a70120
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614c51c
  .word 0xc7a00120
  .word 0xe7a00140
  .word 0x3c023e80
  .word 0x44820800
  .word 0xc7a00174
  .word 0x46001018
  .word 0x4617081c
  .word 0xe7a00144
  .word 0xc7a00124
  .word 0xe7a00148
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a503
  .word 0xc7a00150
  .word 0x46140002
  .word 0xe7a00150
  .word 0xc7a00154
  .word 0x46140002
  .word 0xe7a00154
  .word 0xc7a00158
  .word 0x46140002
  .word 0xe7a00158
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45000026
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00150
  .word 0xe7a00118
  .word 0xc7a00158
  .word 0xe7a0011c
  .word 0x27a40118
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1011c
  .word 0xc7a00140
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00140
  .word 0xc7a10118
  .word 0xc7a00148
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a00148
  .word 0xc7a300bc
  .word 0xc7a200c0
  .word 0xc7a100c4
  .word 0xc7a000c8
  .word 0xe7a300d8
  .word 0xe7a200dc
  .word 0xe7a100e0
  .word 0xe7a000e4
  .word 0xc7a50150
  .word 0xc7a00140
  .word 0x46050000
  .word 0xe7a000cc
  .word 0xc7a40154
  .word 0xc7a00144
  .word 0x46040040
  .word 0xe7a100d0
  .word 0xc7a30158
  .word 0xc7a00148
  .word 0x46030000
  .word 0xe7a000d4
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000d0
  .word 0xc7828094
  .word 0xc7a10144
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4617105d
  .word 0xe7a10144
  .word 0xc7a00140
  .word 0x46050000
  .word 0xe7a000b0
  .word 0x46040840
  .word 0xe7a100b4
  .word 0xc7a00148
  .word 0x46030000
  .word 0xe7a000b8
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000b4
  .word 0x3c024040
  .word 0x4482a000
  .word 0x1000011b
  .word 0x00000000
  .word 0x964300a4
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b73c
  .word 0x00431021
  .word 0x94420000
  .word 0x30420001
  .word 0x14400007
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0a2038
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xae920120
  .word 0x24020001
  .word 0xa6820124
  .word 0xdfa20190
  .word 0xc7a00198
  .word 0xffa20170
  .word 0xe7a00178
  .word 0xc6610090
  .word 0xc660002c
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010142
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x46140542
  .word 0xc7a10174
  .word 0x3c0242fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00174
  .word 0xc7a40158
  .word 0xe7a400f0
  .word 0xc7a30150
  .word 0x46001847
  .word 0xe7a100f4
  .word 0xc7a200f8
  .word 0xc7a000fc
  .word 0x4600081a
  .word 0x44800800
  .word 0x4602251c
  .word 0xc7a00174
  .word 0xe7a00144
  .word 0x4601a034
  .word 0x4501000f
  .word 0x00000000
  .word 0xc7a00170
  .word 0x46000818
  .word 0x4605201c
  .word 0xe7a00140
  .word 0xc7a00178
  .word 0x46000818
  .word 0x4605181d
  .word 0xe7a00148
  .word 0xdfa20150
  .word 0xc7a00158
  .word 0xffa20130
  .word 0xe7a00138
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a00170
  .word 0x46000818
  .word 0x4605201d
  .word 0xe7a00140
  .word 0xc7a00178
  .word 0x46000818
  .word 0x4605181c
  .word 0xe7a00148
  .word 0x27a400bc
  .word 0x27a50140
  .word 0x27a60160
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40150
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700bc
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00160
  .word 0xe7a00100
  .word 0xc7a00168
  .word 0xe7a00104
  .word 0xc7a00140
  .word 0xe7a00108
  .word 0xc7a00148
  .word 0xe7a0010c
  .word 0xc7a00170
  .word 0xe7a00128
  .word 0xc7a00178
  .word 0xe7a0012c
  .word 0x27a40100
  .word 0x27a50108
  .word 0x27a60128
  .word 0x27a70120
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6620090
  .word 0xc661002c
  .word 0x46011082
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602ad5c
  .word 0xc7a00120
  .word 0xe7a00140
  .word 0xc7a00174
  .word 0xe7a00144
  .word 0xc7a00124
  .word 0xe7a00148
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a843
  .word 0x24020226
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000046
  .word 0xc7a00150
  .word 0x46010002
  .word 0xe7a00150
  .word 0xc7a00154
  .word 0x46010002
  .word 0xe7a00154
  .word 0xc7a00158
  .word 0x46010002
  .word 0xe7a00158
  .word 0x44801800
  .word 0x00000000
  .word 0x4603a034
  .word 0x45010012
  .word 0x00000000
  .word 0xc6610090
  .word 0xc660002c
  .word 0x46000842
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010082
  .word 0xc7a10138
  .word 0xc7a00140
  .word 0x46001818
  .word 0x4602081d
  .word 0xe7a00140
  .word 0xc7a10130
  .word 0xc7a00148
  .word 0x46001818
  .word 0x4602081c
  .word 0xe7a00148
  .word 0xc7a10140
  .word 0xc7a00150
  .word 0x46000800
  .word 0xe7a000b0
  .word 0xc7a10144
  .word 0xc7a00154
  .word 0x46000800
  .word 0xe7a000b4
  .word 0xc7a10148
  .word 0xc7a00158
  .word 0x46000800
  .word 0xe7a000b8
  .word 0xc7a300bc
  .word 0xc7a200c0
  .word 0xc7a100c4
  .word 0xc7a000c8
  .word 0xe7a300d8
  .word 0xe7a200dc
  .word 0xe7a100e0
  .word 0xe7a000e4
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe7a200cc
  .word 0xe7a100d0
  .word 0xe7a000d4
  .word 0xc7a101a0
  .word 0xc7a000cc
  .word 0x46000801
  .word 0xe7a00150
  .word 0xc7a101a4
  .word 0xc7a000d0
  .word 0x46000801
  .word 0xe7a00154
  .word 0xc7a101a8
  .word 0xc7a000d4
  .word 0x46000801
  .word 0xe7a00158
  .word 0x27a40150
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0x0220202d
  .word 0x27a50170
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc621008c
  .word 0xc620002c
  .word 0x460008c2
  .word 0x3c023e80
  .word 0x44821000
  .word 0xc7a10174
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00174
  .word 0x27a400bc
  .word 0x27a500cc
  .word 0x27a60170
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc7808088
  .word 0x46140082
  .word 0xc7a00150
  .word 0x460200c2
  .word 0xe7a30150
  .word 0xc7a00154
  .word 0x46020042
  .word 0xe7a10154
  .word 0xc7a00158
  .word 0x46020082
  .word 0xe7a20158
  .word 0xc7a000cc
  .word 0x46030000
  .word 0xe7a000b0
  .word 0xc7a000d0
  .word 0x46010040
  .word 0xe7a100b4
  .word 0xc7a000d4
  .word 0x46020000
  .word 0xe7a000b8
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000b4
  .word 0xc7a100d0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000d0
  .word 0x3c024010
  .word 0x4482a000
  .word 0x16e0000f
  .word 0x00000000
  .word 0xc7a200cc
  .word 0xc7a100d0
  .word 0xc7a000d4
  .word 0xe7a200b0
  .word 0xe7a100b4
  .word 0xe7a000b8
  .word 0xc7a300d8
  .word 0xc7a200dc
  .word 0xc7a100e0
  .word 0xc7a000e4
  .word 0xe7a300bc
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0x3c024248
  .word 0x44826000
  .word 0x8e8400e0
  .word 0x26250004
  .word 0x27a600b0
  .word 0x24070003
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500b0
  .word 0x27a600cc
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0280202d
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x12c00004
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0xdfbf00a0
  .word 0x7bb70090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01b0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */



/* Retail camera recovery for the 0x2b02xx-0x2b8cxx slice.  The bodies below
 * retain the complete branch/data flow recovered from the executable; all
 * entries remain NONMATCHING until instruction scheduling is cleaned up. */
typedef u8 undefined1;
typedef u16 undefined2;
typedef u32 undefined4;
typedef u64 undefined8;
typedef void undefined;

#ifndef CONCAT44
#define CONCAT44(hi, lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif
extern u64 FUN_0019d400();
extern u32 FUN_0027ec10();
extern u64 FUN_0027f650();
extern u64 FUN_0027f680();
extern u64 FUN_0027f940();
extern u64 FUN_00280050();
extern u64 FUN_00280130();
extern u64 FUN_00280200();
extern u64 FUN_002802d0();
extern u64 FUN_00280390();
extern u64 FUN_00281270();
extern u64 FUN_00281290();
extern u64 FUN_002812b0();
extern s16 FUN_002835e0(BtlUnit* unit, u16 id, f32 scale);
extern s16 FUN_00284040();
extern void FUN_00288110(BtlUnit* unit);
extern int FUN_00288da0(int param_1, short param_2);
extern u64 FUN_0029a1d0();
extern u64 FUN_002a2170();
extern void FUN_002a2660(BtlCamera* camera, BtlCameraKeyFrame* first,
                         BtlCameraKeyFrame* second, BtlCameraKeyFrame* third,
                         BtlCameraKeyFrame* fourth, int mode);
extern u64 FUN_002add10();
extern u64 FUN_002d1de0();
extern f32 FUN_002d1f30(f32* left, f32* right);
extern void FUN_002d2280(s16* outX, s16* outZ, f32* position);
extern u32 FUN_002d4040(BtlUnit* unit);
extern u16 FUN_002d4e10(u16 mask, u32 badStatus);
extern int FUN_002d5bf0();
extern s16 FUN_002f8eb0(BtlUnit* unit, s16 index);
extern u64 FUN_002fa240();
extern u32 FUN_002fdcf0(int param_1, int param_2);
extern u32 FUN_002ffbc0();
extern u64 FUN_00300580();
extern u8 FUN_00308c60();
extern u64 FUN_00308a50(u16 param_1);
extern u8 FUN_003093a0();
extern u64 FUN_0030b5a0();
extern u64 FUN_0030c3a0();
/* Broad K&R declarations preserve this function's retail call ABI; typed callers below narrow them locally. */
extern u64 FUN_004be1e0();
extern u64 FUN_004c31b0();
extern float FUN_004c69f0();
extern float FUN_004c6ac0();
extern float FUN_004c6af0(float *param_1);
extern u64 FUN_004c6c60();
extern u64 FUN_00521250();
extern u64 FUN_00521408();
extern u64 FUN_00523ac8();
extern u32 DAT_007ce404;
extern u8* iGpffffb6fc;
extern void LAB_002b8970(u32 *work);
extern void LAB_002b8b50(u32 *work);
extern u8 DAT_006944b0[];
extern u8 DAT_006945b0[];
extern u8 DAT_006946a4[];
extern u8 DAT_00694798[];
extern u8 DAT_00694890[];
extern u8 DAT_00694990[];
extern u8 DAT_00694a90[];
extern u8 DAT_00694b90[];
extern u8 DAT_00694c90[];
extern u8 DAT_00694d90[];
extern RwV3d D_00694E90;
extern f32 D_00694E9C[3];
extern RwV3d D_00694EA0;
extern RwV3d D_00694EA4;
extern RwV3d D_00694ED0;
extern RwV3d D_00694ED4;
extern RwV3d D_00694ED8;
extern RwV3d D_00694EDC;
extern RwV3d D_00694EE0;
extern RwV3d D_00694EE4;
extern u8 DAT_00694fe8;
extern u8 D_00694F10[];
extern u8 D_00696410[];
extern u8 D_00696430[];
extern u8 DAT_00694fea;
extern u8 DAT_00694fec;
extern u32 DAT_00697880;
#pragma alias DAT_00697888_abs DAT_00697888
extern u8 DAT_00697888_abs[];
extern f32 DAT_00697888;
extern float DAT_007cad20;
extern float DAT_007cad38;
extern float DAT_007cad40;
extern float DAT_007cad44;
extern float DAT_007cad48;
extern float DAT_007cad5c;
extern float DAT_007cad60;
extern float DAT_007cad64;
extern float DAT_007cad68;
extern float DAT_007cad6c;
extern float DAT_007cad74;
extern float DAT_007cad7c;
extern float DAT_007cad84;
extern float DAT_007cad88;
extern float DAT_007cad94;
extern float DAT_007cada4;
extern float DAT_007cadb4;
extern float DAT_007cadc4;
extern float DAT_007cadd0;
extern float DAT_007cadf0;
extern float DAT_007cadf4;
extern float DAT_007cae08;
extern float DAT_007cae20;
extern float DAT_007cae2c;
extern float fGpffff8048;
extern float fGpffff8050;
extern float fGpffff8054;
extern float fGpffff8058;
extern float fGpffff806c;
extern float fGpffff8070;
extern float fGpffff8088;
extern float fGpffff8094;
extern float fGpffff8098;
extern float fGpffff809c;
extern float fGpffff80b4;
extern float fGpffff80c4;
extern float fGpffff80d4;
extern f32 fGpffff80b4;
extern float fGpffff8114;
extern float fGpffff8118;
extern f32 uGpffff808c;
extern f32 uGpffff80fc;
extern f32 uGpffff8100;
extern u32 uGpffff8140;
extern f32 fGpffff80e0;
extern f32 fGpffff813c;
extern u8 D_00694EB0[];
extern u8 D_00694EBC[];
extern u8 D_00694EF0[];
extern u8 D_00694EFC[];
extern u32 FUN_002b64d0(BtlCamera* camera, struct B64CameraWork* work);
extern u32 FUN_002b6bd0(int param_1);
extern void FUN_002b6bf0(undefined4 *param_1, undefined4 param_2, undefined4 param_3, u32 param_4, u16 param_5);
extern u8* FUN_002b6cd0(int param_1);
extern void FUN_002b6de0(unsigned short *param_1);





/* Removing this loses FUN_002b7060 (MATCH nd0 -> MISMATCH nd81) - measured W161. */






#pragma opt_dead_assignments reset
#pragma opt_lifetimes reset
/* W367 measured: opt_propagation off nd2117 -> 2094, object 3236/3248; baseline object 3248/3248. */



#pragma opt_propagation reset




/* Camera-state work records use the retail 64-bit pair layout. */
#ifndef BTLCAMERA_GHIDRA_PAIR
#define BTLCAMERA_GHIDRA_PAIR
typedef u8 u8;
typedef u8 byte;
typedef unsigned short ushort;
typedef union BtlCameraGhidraPair
{
    struct { f32 _0_4_; f32 _4_4_; } f;
    u64 raw;
} BtlCameraGhidraPair;
#define GhidraPair BtlCameraGhidraPair
#define PAIR44(hi, lo) ((GhidraPair){{(lo), (hi)}})
#endif

extern f32 DAT_007cad3c;
extern f32 DAT_007cad54;
extern f32 DAT_007cad98;
extern f32 DAT_007cadb0;
extern f32 DAT_007caddc;
extern f32 DAT_007cade0;
extern f32 DAT_007cade4;
extern f32 DAT_007cade8;
extern f32 DAT_007cadfc;
extern f32 DAT_007cae00;
extern f32 DAT_007cae04;
extern f32 DAT_007cae0c;
extern f32 DAT_007cae10;
extern f32 DAT_007cae14;
extern f32 DAT_007cae18;
extern f32 DAT_007cae24;
extern f32 fGpffff8030;
extern f32 fGpffff807c;
extern f32 fGpffff80a0;
extern f32 fGpffff80a4;
extern f32 fGpffff80a8;
extern f32 fGpffff80b0;
extern f32 fGpffff80b8;
extern f32 fGpffff80bc;
extern u32 uGpffff8074;
extern u32 uGpffff809c;
extern u32 uGpffff80ac;
extern u64 func_00280050();
extern u64 func_00280870();
extern u64 func_002d1de0();
extern u8* iGpffffb6fc;
extern u8* iGpffffb73c;

// Restored five retail camera-frame quaternion calls omitted by the raw decompilation.
// These calls update the frame orientation in each camera-state path before final setup.
// The surrounding scalar temporaries remain structurally incomplete and are retained.
// The resulting object is intentionally still NONMATCHING while this reconstruction continues.
//
/* Recovered battle-misc harvest: 0x002A32F0-0x002A4690 */
/* Recovered battle-misc harvest: 0x002A3A80-0x002A4C20 */







// FUN_002AA2B0

#ifndef PC_BUILD
asm void func_002aa2b0(BtlCamera* camera, int param_2, int param_3)
{
  .set noreorder
  .word 0x27bdfe20
  .word 0xffbf00b0
  .word 0x7fbe00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0b82d
  .word 0x8c8200e0
  .word 0x8c500030
  .word 0x8e120a00
  .word 0x0c0a8d48
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8d54
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24150001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000a82d
  .word 0x0000882d
  .word 0x0200202d
  .word 0x27a501b0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50190
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc601008c
  .word 0xc600002c
  .word 0x46000842
  .word 0x3c023f00
  .word 0x44821800
  .word 0xc7a001b4
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x46011d1c
  .word 0xc641008c
  .word 0xc640002c
  .word 0x46000842
  .word 0xc7a00194
  .word 0x46001018
  .word 0x4601189c
  .word 0x4602a034
  .word 0x4500000a
  .word 0x00000000
  .word 0x16a00008
  .word 0x00000000
  .word 0x4602a040
  .word 0x3c023e80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a001b4
  .word 0x46001506
  .word 0xc6410090
  .word 0xc640002c
  .word 0x46000882
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010602
  .word 0x4602c034
  .word 0x45000004
  .word 0x00000000
  .word 0x16a00002
  .word 0x00000000
  .word 0x46001606
  .word 0x24020113
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a034
  .word 0x45000004
  .word 0x00000000
  .word 0x46000506
  .word 0xc78080a0
  .word 0xe7a001b4
  .word 0x24040002
  .word 0x0000282d
  .word 0x27a601a0
  .word 0x27a701dc
  .word 0x0000402d
  .word 0x24090001
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x46000646
  .word 0x27a401d0
  .word 0x3c050069
  .word 0x24a57870
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc7a001dc
  .word 0x46000882
  .word 0xe7a201a4
  .word 0xc7a101b0
  .word 0xc7a001a0
  .word 0x46000801
  .word 0xe7a001c0
  .word 0xc7a001b4
  .word 0x46020001
  .word 0xe7a001c4
  .word 0xc7a101b8
  .word 0xc7a001a8
  .word 0x46000801
  .word 0xe7a001c8
  .word 0x27a401c0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a001c0
  .word 0x46010082
  .word 0xe7a20180
  .word 0xc7a001c4
  .word 0x460100c2
  .word 0xe7a30184
  .word 0xc7a001c8
  .word 0x46010042
  .word 0xe7a10188
  .word 0xc7a001a0
  .word 0x46001080
  .word 0xe7a20180
  .word 0xc7a001a4
  .word 0x46001800
  .word 0xe7a00184
  .word 0xc7a001a8
  .word 0x46000840
  .word 0xe7a10188
  .word 0xdfa20180
  .word 0xc7a00188
  .word 0xffa20170
  .word 0xe7a00178
  .word 0xc680009c
  .word 0x46020001
  .word 0xe7a000c8
  .word 0xc68000a4
  .word 0x46010001
  .word 0xe7a000cc
  .word 0x27a400c8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a301c8
  .word 0xe7a300c0
  .word 0xc7a001c0
  .word 0x46000087
  .word 0xe7a200c4
  .word 0xc7a100c8
  .word 0xc7a000cc
  .word 0x4600101a
  .word 0x46011d9c
  .word 0x0280202d
  .word 0x0c0a8d08
  .word 0x00000000
  .word 0x0040f02d
  .word 0x0280202d
  .word 0x0c0a8e08
  .word 0x00000000
  .word 0x0040b02d
  .word 0x24020001
  .word 0x12a2000d
  .word 0x00000000
  .word 0x964300a4
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b73c
  .word 0x00431021
  .word 0x94420000
  .word 0x30420020
  .word 0x14400008
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d5ff4
  .word 0x00000000
  .word 0x30420001
  .word 0x0002182b
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x17c0000b
  .word 0x00000000
  .word 0x24020001
  .word 0x14620147
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8ce0
  .word 0x00000000
  .word 0x10400142
  .word 0x00000000
  .word 0x16c00140
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xae920120
  .word 0xa6800124
  .word 0x44800000
  .word 0x00000000
  .word 0x4600b034
  .word 0x4501000c
  .word 0x00000000
  .word 0xc7a001d0
  .word 0x46180002
  .word 0xe7a001d0
  .word 0xc7a001d4
  .word 0x46180002
  .word 0xe7a001d4
  .word 0xc7a001d8
  .word 0x46180002
  .word 0xe7a001d8
  .word 0x1000000b
  .word 0x00000000
  .word 0x4600c047
  .word 0xc7a001d0
  .word 0x46010002
  .word 0xe7a001d0
  .word 0xc7a001d4
  .word 0x46010002
  .word 0xe7a001d4
  .word 0xc7a001d8
  .word 0x46010002
  .word 0xe7a001d8
  .word 0xc7a101b0
  .word 0xc7a001d0
  .word 0x46000880
  .word 0xe7a20160
  .word 0xc7a101b4
  .word 0xc7a001d4
  .word 0x46000800
  .word 0xe7a00164
  .word 0xc7a101b8
  .word 0xc7a001d8
  .word 0x46000840
  .word 0xe7a10168
  .word 0xc78080a4
  .word 0x46140502
  .word 0xe7b40164
  .word 0xc7a00180
  .word 0x46001001
  .word 0xe7a001d0
  .word 0xc7a00184
  .word 0x4600a001
  .word 0xe7a001d4
  .word 0xc7a00188
  .word 0x46000801
  .word 0xe7a001d8
  .word 0x27a401d0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000546
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x460105c2
  .word 0x4600bb06
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c603
  .word 0x00000000
  .word 0x00000000
  .word 0x4600bb06
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a003
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c036
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46000606
  .word 0x4618ad40
  .word 0x4600bb06
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c803
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a836
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46000546
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a842
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a001d0
  .word 0xe7a00148
  .word 0xc7a001d8
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1014c
  .word 0xc7a00180
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614095c
  .word 0xe7a50180
  .word 0xc7a10148
  .word 0xc7a00188
  .word 0x46001018
  .word 0x4614091d
  .word 0xe7a40188
  .word 0xc7a001d0
  .word 0x461500c2
  .word 0xc7a001d4
  .word 0x46150082
  .word 0xc7a001d8
  .word 0x46150042
  .word 0x46032800
  .word 0xe7a0012c
  .word 0xc7a00184
  .word 0x46020000
  .word 0xe7a00130
  .word 0x46012000
  .word 0xe7a00134
  .word 0x27a40138
  .word 0x27a5012c
  .word 0x27a60180
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a501b0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc600008c
  .word 0xc604002c
  .word 0x460400c2
  .word 0xc7828094
  .word 0xc7a101b4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a001b4
  .word 0xc6000090
  .word 0x46040042
  .word 0x3c024020
  .word 0x44820000
  .word 0x00000000
  .word 0x46010502
  .word 0x27a401d0
  .word 0x3c050069
  .word 0x24a57870
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x4600b034
  .word 0x4501000d
  .word 0x00000000
  .word 0x4600a047
  .word 0xc7a001d0
  .word 0x46010002
  .word 0xe7a001d0
  .word 0xc7a001d4
  .word 0x46010002
  .word 0xe7a001d4
  .word 0xc7a001d8
  .word 0x46010002
  .word 0xe7a001d8
  .word 0x1000000a
  .word 0x00000000
  .word 0xc7a001d0
  .word 0x46140002
  .word 0xe7a001d0
  .word 0xc7a001d4
  .word 0x46140002
  .word 0xe7a001d4
  .word 0xc7a001d8
  .word 0x46140002
  .word 0xe7a001d8
  .word 0xc7a101b0
  .word 0xc7a001d0
  .word 0x46000800
  .word 0xe7a00150
  .word 0xc7a101b4
  .word 0xc7a001d4
  .word 0x46000800
  .word 0xe7a00154
  .word 0xc7a101b8
  .word 0xc7a001d8
  .word 0x46000800
  .word 0xe7a00158
  .word 0x27a4011c
  .word 0x27a50150
  .word 0x27a60170
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000842
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46010542
  .word 0xc7a10150
  .word 0xc7a00170
  .word 0x46000801
  .word 0xe7a001d0
  .word 0xc7a10154
  .word 0xc7a00174
  .word 0x46000801
  .word 0xe7a001d4
  .word 0xc7a10158
  .word 0xc7a00178
  .word 0x46000801
  .word 0xe7a001d8
  .word 0x27a401d0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0x4600bb06
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a803
  .word 0x4600a500
  .word 0x27a401d0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a7011c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d42
  .word 0xc7a001d0
  .word 0xe7a00148
  .word 0xc7a001d8
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1014c
  .word 0xc7a00170
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615095c
  .word 0xe7a50170
  .word 0xc7a10148
  .word 0xc7a00178
  .word 0x46001018
  .word 0x4615091d
  .word 0xe7a40178
  .word 0xc7a001d0
  .word 0x461400c2
  .word 0xe7a301d0
  .word 0xc7a001d4
  .word 0x46140082
  .word 0xe7a201d4
  .word 0xc7a001d8
  .word 0x46140042
  .word 0xe7a101d8
  .word 0x46032800
  .word 0xe7a00110
  .word 0xc7a00174
  .word 0x46020000
  .word 0xe7a00114
  .word 0x46012000
  .word 0xe7a00118
  .word 0xc7948074
  .word 0x1000017e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xae920120
  .word 0x24040001
  .word 0xa6840124
  .word 0xdfa201a0
  .word 0xc7a001a8
  .word 0xffa20160
  .word 0xe7a00168
  .word 0xc78180a8
  .word 0xc7a001dc
  .word 0x46000802
  .word 0xe7a00164
  .word 0x8e8300e0
  .word 0x9462006a
  .word 0x1444002f
  .word 0x00000000
  .word 0x8c620038
  .word 0x8c420030
  .word 0x44800000
  .word 0x00000000
  .word 0x4600b034
  .word 0x4501000f
  .word 0x00000000
  .word 0xc4410090
  .word 0xc440002c
  .word 0x46000842
  .word 0xc7a001d0
  .word 0x46010002
  .word 0xe7a001d0
  .word 0xc7a001d4
  .word 0x46010002
  .word 0xe7a001d4
  .word 0xc7a001d8
  .word 0x46010002
  .word 0xe7a001d8
  .word 0x1000000e
  .word 0x00000000
  .word 0xc4410090
  .word 0xc440002c
  .word 0x46000802
  .word 0x46000047
  .word 0xc7a001d0
  .word 0x46010002
  .word 0xe7a001d0
  .word 0xc7a001d4
  .word 0x46010002
  .word 0xe7a001d4
  .word 0xc7a001d8
  .word 0x46010002
  .word 0xe7a001d8
  .word 0xc7a10160
  .word 0xc7a001d0
  .word 0x46000800
  .word 0xe7a00160
  .word 0xc7a10164
  .word 0xc7a001d4
  .word 0x46000800
  .word 0xe7a00164
  .word 0xc7a10168
  .word 0xc7a001d8
  .word 0x46000800
  .word 0xe7a00168
  .word 0xc7a10164
  .word 0x3c0242fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00164
  .word 0xc7a10160
  .word 0xc7a00180
  .word 0x46000801
  .word 0xe7a001d0
  .word 0xc7a10164
  .word 0xc7a00184
  .word 0x46000801
  .word 0xe7a001d4
  .word 0xc7a10168
  .word 0xc7a00188
  .word 0x46000801
  .word 0xe7a001d8
  .word 0x27a401d0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0x3c024396
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000646
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000b02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600c803
  .word 0x4600a500
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d42
  .word 0xc7a001d0
  .word 0xe7a00148
  .word 0xc7a001d8
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1014c
  .word 0xc7a00180
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615095c
  .word 0xe7a50180
  .word 0xc7a10148
  .word 0xc7a00188
  .word 0x46001018
  .word 0x4615091d
  .word 0xe7a40188
  .word 0xc7a001d0
  .word 0x461400c2
  .word 0xc7a001d4
  .word 0x46140082
  .word 0xc7a001d8
  .word 0x46140042
  .word 0x46032800
  .word 0xe7a0012c
  .word 0xc7a00184
  .word 0x46020000
  .word 0xe7a00130
  .word 0x46012000
  .word 0xe7a00134
  .word 0x27a40138
  .word 0x27a5012c
  .word 0x27a60180
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x16c00086
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x4600b034
  .word 0x4501000b
  .word 0x00000000
  .word 0x3c02c1dc
  .word 0x44826000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x3c0241dc
  .word 0x44826000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a401c0
  .word 0x27a501d0
  .word 0x27a600d0
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc780807c
  .word 0x4600a502
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d42
  .word 0xc7a001c0
  .word 0xe7a00148
  .word 0xc7a001c8
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1014c
  .word 0xc7a00180
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615095c
  .word 0xe7a50180
  .word 0xc7a10148
  .word 0xc7a00188
  .word 0x46001018
  .word 0x4615091d
  .word 0xe7a40188
  .word 0xc7a001c0
  .word 0x461400c2
  .word 0xc7a001c4
  .word 0x46140082
  .word 0xc7a001c8
  .word 0x46140042
  .word 0x46032800
  .word 0xe7a00110
  .word 0xc7a00184
  .word 0x46020000
  .word 0xe7a00114
  .word 0x46012000
  .word 0xe7a00118
  .word 0xc78180a4
  .word 0xc7a001dc
  .word 0x46000802
  .word 0xe7a00114
  .word 0xc7a101b0
  .word 0xc7a001a0
  .word 0x46000801
  .word 0xe7a001c0
  .word 0xc7a101b4
  .word 0xc7a001a4
  .word 0x46000801
  .word 0xe7a001c4
  .word 0xc7a101b8
  .word 0xc7a001a8
  .word 0x46000801
  .word 0xe7a001c8
  .word 0x27a401c0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023e80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0xc7a001c0
  .word 0x460100c2
  .word 0xe7a30180
  .word 0xc7a001c4
  .word 0x46010082
  .word 0xe7a20184
  .word 0xc7a001c8
  .word 0x46010042
  .word 0xe7a10188
  .word 0xc7a001a0
  .word 0x46001800
  .word 0xe7a00180
  .word 0xc7a001a4
  .word 0x46001000
  .word 0xe7a00184
  .word 0xc7a001a8
  .word 0x46000800
  .word 0xe7a00188
  .word 0x27a4011c
  .word 0x27a50110
  .word 0x27a60180
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c024070
  .word 0x4482a000
  .word 0x10000053
  .word 0x00000000
  .word 0x8e8200e0
  .word 0x9443006e
  .word 0x24020038
  .word 0x1062002f
  .word 0x00000000
  .word 0x2402002c
  .word 0x10620020
  .word 0x00000000
  .word 0x24020027
  .word 0x10620012
  .word 0x00000000
  .word 0x24020026
  .word 0x10620003
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0x3c0243fa
  .word 0xafa20184
  .word 0x3c024348
  .word 0xafa20114
  .word 0x3c023fa0
  .word 0x4482a000
  .word 0x24110001
  .word 0x0000982d
  .word 0x2402000c
  .word 0xae8200dc
  .word 0x1000002c
  .word 0x00000000
  .word 0x3c024416
  .word 0xafa20184
  .word 0x3c024348
  .word 0xafa20114
  .word 0xc79480ac
  .word 0x0000882d
  .word 0x0000982d
  .word 0x24020008
  .word 0xae8200dc
  .word 0x10000021
  .word 0x00000000
  .word 0x3c024448
  .word 0xafa20184
  .word 0x3c0243fa
  .word 0xafa20114
  .word 0x3c024000
  .word 0x4482a000
  .word 0x24110001
  .word 0x0000982d
  .word 0x2402000c
  .word 0xae8200dc
  .word 0x10000015
  .word 0x00000000
  .word 0x3c02447a
  .word 0xafa20184
  .word 0x3c0243fa
  .word 0xafa20114
  .word 0x3c023fc0
  .word 0x4482a000
  .word 0x0000882d
  .word 0x0000982d
  .word 0x24020004
  .word 0xae8200dc
  .word 0x10000009
  .word 0x00000000
  .word 0x3c0243fa
  .word 0xafa20184
  .word 0x3c024348
  .word 0xafa20114
  .word 0xc794809c
  .word 0x24110001
  .word 0x0000982d
  .word 0xae8000dc
  .word 0xc7a0012c
  .word 0xe7a00110
  .word 0xc7a00134
  .word 0xe7a00118
  .word 0x27a4011c
  .word 0x27a50110
  .word 0x27a60180
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x16e00026
  .word 0x00000000
  .word 0x16c00024
  .word 0x00000000
  .word 0x27a7011c
  .word 0xc7a30138
  .word 0xc7a2013c
  .word 0xc7a10140
  .word 0xc7a00144
  .word 0xe7a3011c
  .word 0xe7a20120
  .word 0xe7a10124
  .word 0xe7a00128
  .word 0x27a401d0
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44820800
  .word 0xc7a001d0
  .word 0x460100c2
  .word 0xe7a301d0
  .word 0xc7a001d4
  .word 0x46010082
  .word 0xe7a201d4
  .word 0xc7a001d8
  .word 0x46010042
  .word 0xe7a101d8
  .word 0xc7a0012c
  .word 0x46030000
  .word 0xe7a00110
  .word 0xc7a00130
  .word 0x46020000
  .word 0xe7a00114
  .word 0xc7a00134
  .word 0x46010000
  .word 0xe7a00118
  .word 0x8e8200dc
  .word 0x18400008
  .word 0x00000000
  .word 0x44806000
  .word 0x8e8400e0
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c0a8d64
  .word 0x00000000
  .word 0x27a4012c
  .word 0x0080282d
  .word 0x0c0a8d64
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50110
  .word 0x27a6012c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x16200007
  .word 0x00000000
  .word 0x0280202d
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x4600a306
  .word 0x0c0a8c58
  .word 0x00000000
  .word 0x12600004
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0xdfbf00b0
  .word 0x7bbe00a0
  .word 0x7bb70090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01e0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002AB2A0

void func_002ab2a0(BtlCamera* camera)
{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)camera;
  iVar1 = *(int *)(iVar3 + 0xe0);
  if ((iVar1 != 0) && ((*(ushort *)(iVar1 + 0x1a) & 1) != 0)) {
    if (*(int *)(iVar3 + 0xdc) == 0) {
      FUN_002a3e80_call(0.0f,(u8 *)(uintptr_t)iVar1,0,0,3);
    }
    if (FUN_002a3750(camera,*(undefined4 *)(iVar3 + 0x120)) != 0) {
      btlUnit002880e0((BtlUnit*)(uintptr_t)(*(undefined4 *)(iVar3 + 0x120)),*(undefined2 *)(iVar3 + 0x124));
    }
  }
  return;
}

/* W367 measured: opt_lifetimes on + opt_propagation off nd3478 -> 3394, object 4308/4624; baseline object 4464/4624. */
#pragma opt_lifetimes on
#pragma opt_propagation off
// FUN_002AB330

#ifndef PC_BUILD
asm void func_002ab330(BtlCamera* camera, int param_2, int param_3)
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
  .word 0x0080a02d
  .word 0x00a0a82d
  .word 0x00c0b02d
  .word 0x8c8200e0
  .word 0x8c510030
  .word 0x8c420038
  .word 0x8c530030
  .word 0x8e320a00
  .word 0x0220202d
  .word 0x27a50190
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50180
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50170
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc625002c
  .word 0xc620008c
  .word 0x46050042
  .word 0x3c023f00
  .word 0x44822000
  .word 0xc7a00194
  .word 0x44801800
  .word 0x00000000
  .word 0x46001818
  .word 0x4601261c
  .word 0xc661008c
  .word 0xc660002c
  .word 0x46000842
  .word 0xc7a00184
  .word 0x46001818
  .word 0x460125dc
  .word 0xc642002c
  .word 0xc640008c
  .word 0x46020042
  .word 0xc7a00174
  .word 0x46001818
  .word 0x4601259c
  .word 0xc6200090
  .word 0x46050642
  .word 0xc6400090
  .word 0x46020502
  .word 0xc7a20180
  .word 0xc7a10184
  .word 0xc7a00188
  .word 0xe6820104
  .word 0xe6810108
  .word 0xe680010c
  .word 0x8e8200e0
  .word 0x8c420038
  .word 0xae820100
  .word 0x3c024307
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b034
  .word 0x45000004
  .word 0x00000000
  .word 0x46000586
  .word 0x3c024287
  .word 0xafa20174
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x3c020020
  .word 0x00621024
  .word 0x10400004
  .word 0x00000000
  .word 0x24100001
  .word 0x1000001c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8d08
  .word 0x00000000
  .word 0x4617b041
  .word 0x3c0342fa
  .word 0x44830000
  .word 0x00000000
  .word 0x46000834
  .word 0x45010004
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x0002802b
  .word 0x1600000c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0d5ff4
  .word 0x00000000
  .word 0x30420001
  .word 0x0002802b
  .word 0x12000005
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8ce0
  .word 0x00000000
  .word 0x0002802b
  .word 0x1200001f
  .word 0x00000000
  .word 0xc7a10170
  .word 0xc7a00180
  .word 0x46000801
  .word 0xe7a00140
  .word 0xc7a10174
  .word 0xc7a00184
  .word 0x46000801
  .word 0xe7a00144
  .word 0xc7a10178
  .word 0xc7a00188
  .word 0x46000801
  .word 0xe7a00148
  .word 0x27a40140
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000546
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a00140
  .word 0x46010002
  .word 0xe7a00150
  .word 0xc7a00144
  .word 0x46010002
  .word 0xe7a00154
  .word 0xc7a00148
  .word 0x46010002
  .word 0xe7a00158
  .word 0x1000002f
  .word 0x00000000
  .word 0xc7a10170
  .word 0xc7a00190
  .word 0x460008c0
  .word 0xe7a30160
  .word 0xc7a10174
  .word 0xc7a00194
  .word 0x46000880
  .word 0xe7a20164
  .word 0xc7a10178
  .word 0xc7a00198
  .word 0x46000840
  .word 0xe7a10168
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x460018c2
  .word 0xe7a30160
  .word 0x46001082
  .word 0xe7a20164
  .word 0x46000842
  .word 0xe7a10168
  .word 0xc7a00180
  .word 0x46001801
  .word 0xe7a00140
  .word 0xc7a00184
  .word 0x46001001
  .word 0xe7a00144
  .word 0xc7a00188
  .word 0x46000801
  .word 0xe7a00148
  .word 0x27a40140
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000546
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a00140
  .word 0x46010002
  .word 0xe7a00150
  .word 0xc7a00144
  .word 0x46010002
  .word 0xe7a00154
  .word 0xc7a00148
  .word 0x46010002
  .word 0xe7a00158
  .word 0xc7a10150
  .word 0xc7a00180
  .word 0x46000880
  .word 0xe7a20150
  .word 0xc7a10154
  .word 0xc7a00184
  .word 0x46000800
  .word 0xe7a00154
  .word 0xc7a10158
  .word 0xc7a00188
  .word 0x46000840
  .word 0xe7a10158
  .word 0xc680009c
  .word 0x46020001
  .word 0xe7a000e8
  .word 0xc68000a4
  .word 0x46010001
  .word 0xe7a000ec
  .word 0x27a400e8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x12000238
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xae920120
  .word 0xa6800124
  .word 0x0260882d
  .word 0xdfa20170
  .word 0xc7a00178
  .word 0xffa20160
  .word 0xe7a00168
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x46140142
  .word 0xc7a40148
  .word 0xe7a400e0
  .word 0xc7a30140
  .word 0x46001847
  .word 0xe7a100e4
  .word 0xc7a200e8
  .word 0xc7a000ec
  .word 0x4600081a
  .word 0x44800800
  .word 0x4602269c
  .word 0x4601d034
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a00160
  .word 0x46000818
  .word 0x4605201c
  .word 0xe7a00130
  .word 0xc7a00168
  .word 0x46000818
  .word 0x4605181d
  .word 0xe7a00138
  .word 0x1000001d
  .word 0x00000000
  .word 0xc7a00160
  .word 0x46000818
  .word 0x4605201d
  .word 0xe7a00130
  .word 0xc7a00168
  .word 0x46000818
  .word 0x4605181c
  .word 0xe7a00138
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
  .word 0x460118c2
  .word 0xe7a30150
  .word 0xc7a00144
  .word 0x46010082
  .word 0xe7a20154
  .word 0x46012042
  .word 0xe7a10158
  .word 0xc7a00180
  .word 0x46001800
  .word 0xe7a00150
  .word 0xc7a00184
  .word 0x46001000
  .word 0xe7a00154
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7a00158
  .word 0x4617b034
  .word 0x4501001b
  .word 0x00000000
  .word 0xc661008c
  .word 0xc660002c
  .word 0x460008c2
  .word 0xc7818094
  .word 0xc7a00154
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x460308dc
  .word 0xe7a30154
  .word 0x4603b036
  .word 0x4501000a
  .word 0x00000000
  .word 0xc641008c
  .word 0xc640002c
  .word 0x46000842
  .word 0xc7808030
  .word 0x46031018
  .word 0x4601001c
  .word 0xe7a00134
  .word 0x10000033
  .word 0x00000000
  .word 0xc7a00164
  .word 0xe7a00134
  .word 0x1000002f
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x3c020020
  .word 0x00621024
  .word 0x10400019
  .word 0x00000000
  .word 0x3c0243fa
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b834
  .word 0x45010013
  .word 0x00000000
  .word 0xc661008c
  .word 0xc660002c
  .word 0x460008c2
  .word 0xc7818030
  .word 0xc7a00154
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4603081c
  .word 0xe7a00154
  .word 0x3c023e80
  .word 0x44820800
  .word 0xc7a00164
  .word 0x46001018
  .word 0x4616081c
  .word 0xe7a00134
  .word 0x10000011
  .word 0x00000000
  .word 0xc661008c
  .word 0xc660002c
  .word 0x460008c2
  .word 0xc78180b0
  .word 0xc7a00154
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4603081d
  .word 0xe7a00154
  .word 0x3c023e80
  .word 0x44820800
  .word 0xc7a00164
  .word 0x46001018
  .word 0x4616081c
  .word 0xe7a00134
  .word 0x27a400c8
  .word 0x27a50130
  .word 0x27a60150
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40140
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700c8
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00150
  .word 0xe7a000f0
  .word 0xc7a00158
  .word 0xe7a000f4
  .word 0xc7a00130
  .word 0xe7a000f8
  .word 0xc7a00138
  .word 0xe7a000fc
  .word 0xc7a00160
  .word 0xe7a00118
  .word 0xc7a00168
  .word 0xe7a0011c
  .word 0x27a400f0
  .word 0x27a500f8
  .word 0x27a60118
  .word 0x27a70110
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc782809c
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602a51c
  .word 0x24020113
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000506
  .word 0xc7a00110
  .word 0xe7a00130
  .word 0x4617b034
  .word 0x4501001d
  .word 0x00000000
  .word 0xc7a30154
  .word 0x4603b036
  .word 0x4501000c
  .word 0x00000000
  .word 0xc641008c
  .word 0xc640002c
  .word 0x46000882
  .word 0xc78180b4
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4602081c
  .word 0xe7a00134
  .word 0x10000016
  .word 0x00000000
  .word 0xc641008c
  .word 0xc640002c
  .word 0x460008c2
  .word 0x3c023e80
  .word 0x44821000
  .word 0xc7a10164
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00134
  .word 0x10000009
  .word 0x00000000
  .word 0x3c023e80
  .word 0x44821000
  .word 0xc7a10164
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4616101c
  .word 0xe7a00134
  .word 0xc7a00114
  .word 0xe7a00138
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a503
  .word 0xc7a00140
  .word 0x46140002
  .word 0xe7a00140
  .word 0xc7a00144
  .word 0x46140002
  .word 0xe7a00144
  .word 0xc7a00148
  .word 0x46140002
  .word 0xe7a00148
  .word 0x44800000
  .word 0x00000000
  .word 0x4600d034
  .word 0x45000026
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00140
  .word 0xe7a00108
  .word 0xc7a00148
  .word 0xe7a0010c
  .word 0x27a40108
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1010c
  .word 0xc7a00130
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00130
  .word 0xc7a10108
  .word 0xc7a00138
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a00138
  .word 0xc7a10130
  .word 0xc7a00140
  .word 0x46000800
  .word 0xe7a000bc
  .word 0xc7a10134
  .word 0xc7a00144
  .word 0x46000880
  .word 0xe7a200c0
  .word 0xc7a10138
  .word 0xc7a00148
  .word 0x46000800
  .word 0xe7a000c4
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000c0
  .word 0xc7a10190
  .word 0xc7a00180
  .word 0x46000801
  .word 0xe7a00140
  .word 0xc7a10194
  .word 0xc7a00184
  .word 0x46000801
  .word 0xe7a00144
  .word 0xc7a10198
  .word 0xc7a00188
  .word 0x46000801
  .word 0xe7a00148
  .word 0x27a40140
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000546
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a00140
  .word 0x460100c2
  .word 0xe7a30150
  .word 0xc7a00144
  .word 0x46010082
  .word 0xe7a20154
  .word 0xc7a00148
  .word 0x46010042
  .word 0xe7a10158
  .word 0xc7a00180
  .word 0x46001800
  .word 0xe7a00150
  .word 0xc7a00184
  .word 0x46001000
  .word 0xe7a00154
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7a00158
  .word 0xdfa20190
  .word 0xc7a00198
  .word 0xffa20160
  .word 0xe7a00168
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46190502
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400010
  .word 0x00000000
  .word 0xc7a10184
  .word 0x3c0243e1
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010009
  .word 0x00000000
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a500
  .word 0x3c0243af
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c600
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc7a00164
  .word 0x44801800
  .word 0x00000000
  .word 0x46001818
  .word 0x4618081c
  .word 0xe7a00134
  .word 0x4603d034
  .word 0x4501000d
  .word 0x00000000
  .word 0xc7a10148
  .word 0xc7a00160
  .word 0x46001818
  .word 0x4614081c
  .word 0xe7a00130
  .word 0xc7a10140
  .word 0xc7a00168
  .word 0x46001818
  .word 0x4614081d
  .word 0xe7a00138
  .word 0x1000001c
  .word 0x00000000
  .word 0xc7a40148
  .word 0xc7a00160
  .word 0x46001818
  .word 0x4614201d
  .word 0xe7a00130
  .word 0xc7a20140
  .word 0xc7a00168
  .word 0x46001818
  .word 0x4614101c
  .word 0xe7a00138
  .word 0x46150842
  .word 0x460110c2
  .word 0xe7a30150
  .word 0xc7a00144
  .word 0x46010082
  .word 0xe7a20154
  .word 0x46012042
  .word 0xe7a10158
  .word 0xc7a00180
  .word 0x46001800
  .word 0xe7a00150
  .word 0xc7a00184
  .word 0x46001000
  .word 0xe7a00154
  .word 0xc7a00188
  .word 0x46000800
  .word 0xe7a00158
  .word 0xc661008c
  .word 0xc660002c
  .word 0x460008c2
  .word 0xc7828030
  .word 0xc7a10154
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00154
  .word 0x27a400ac
  .word 0x27a50130
  .word 0x27a60150
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40140
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700ac
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00150
  .word 0xe7a000f0
  .word 0xc7a00158
  .word 0xe7a000f4
  .word 0xc7a00130
  .word 0xe7a000f8
  .word 0xc7a00138
  .word 0xe7a000fc
  .word 0xc7a00160
  .word 0xe7a00118
  .word 0xc7a00168
  .word 0xe7a0011c
  .word 0x27a400f0
  .word 0x27a500f8
  .word 0x27a60118
  .word 0x27a70110
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0x3c024040
  .word 0x44820800
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4601cd1c
  .word 0xc7a00110
  .word 0xe7a00130
  .word 0x3c023e80
  .word 0x44820800
  .word 0xc7a00164
  .word 0x46001018
  .word 0x4618081c
  .word 0xe7a00134
  .word 0xc7a00114
  .word 0xe7a00138
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a503
  .word 0xc7a00140
  .word 0x46140002
  .word 0xe7a00140
  .word 0xc7a00144
  .word 0x46140002
  .word 0xe7a00144
  .word 0xc7a00148
  .word 0x46140002
  .word 0xe7a00148
  .word 0x44800000
  .word 0x00000000
  .word 0x4600d034
  .word 0x45000026
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00140
  .word 0xe7a00108
  .word 0xc7a00148
  .word 0xe7a0010c
  .word 0x27a40108
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1010c
  .word 0xc7a00130
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00130
  .word 0xc7a10108
  .word 0xc7a00138
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a00138
  .word 0xc7a10130
  .word 0xc7a00140
  .word 0x46000800
  .word 0xe7a000a0
  .word 0xc7a10134
  .word 0xc7a00144
  .word 0x46000880
  .word 0xe7a200a4
  .word 0xc7a10138
  .word 0xc7a00148
  .word 0x46000800
  .word 0xe7a000a8
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000a4
  .word 0x3c024020
  .word 0x4482a000
  .word 0x10000139
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0a2038
  .word 0x00000000
  .word 0xae920120
  .word 0x24020001
  .word 0xa6820124
  .word 0xdfa20180
  .word 0xc7a00188
  .word 0xffa20160
  .word 0xe7a00168
  .word 0xc6610090
  .word 0xc660002c
  .word 0x46000842
  .word 0xc78080b8
  .word 0x46010142
  .word 0x3c023f40
  .word 0x44820000
  .word 0x00000000
  .word 0x46140002
  .word 0x46050036
  .word 0x45010002
  .word 0x00000000
  .word 0x46000146
  .word 0xc7a10164
  .word 0x3c0242fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00164
  .word 0xc7a40148
  .word 0xe7a400e0
  .word 0xc7a30140
  .word 0x46001847
  .word 0xe7a100e4
  .word 0xc7a200e8
  .word 0xc7a000ec
  .word 0x4600081a
  .word 0x44800800
  .word 0x4602255c
  .word 0xc7a00164
  .word 0xe7a00134
  .word 0x4601a834
  .word 0x4501000f
  .word 0x00000000
  .word 0xc7a00160
  .word 0x46000818
  .word 0x4605201c
  .word 0xe7a00130
  .word 0xc7a00168
  .word 0x46000818
  .word 0x4605181d
  .word 0xe7a00138
  .word 0xdfa20140
  .word 0xc7a00148
  .word 0xffa20120
  .word 0xe7a00128
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a00160
  .word 0x46000818
  .word 0x4605201d
  .word 0xe7a00130
  .word 0xc7a00168
  .word 0x46000818
  .word 0x4605181c
  .word 0xe7a00138
  .word 0x4617b034
  .word 0x4501000d
  .word 0x00000000
  .word 0xc641008c
  .word 0xc640002c
  .word 0x460008c2
  .word 0xc7828030
  .word 0xc7a10154
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00154
  .word 0x1000000b
  .word 0x00000000
  .word 0xc641008c
  .word 0xc640002c
  .word 0x460008c2
  .word 0xc78280bc
  .word 0xc7a10154
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00154
  .word 0x27a400ac
  .word 0x27a50130
  .word 0x27a60150
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40140
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700ac
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00150
  .word 0xe7a000f0
  .word 0xc7a00158
  .word 0xe7a000f4
  .word 0xc7a00130
  .word 0xe7a000f8
  .word 0xc7a00138
  .word 0xe7a000fc
  .word 0xc7a00160
  .word 0xe7a00118
  .word 0xc7a00168
  .word 0xe7a0011c
  .word 0x27a400f0
  .word 0x27a500f8
  .word 0x27a60118
  .word 0x27a70110
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6620090
  .word 0xc661002c
  .word 0x460110c2
  .word 0x3c023fc0
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4603151c
  .word 0xc7a00110
  .word 0xe7a00130
  .word 0xc7a00164
  .word 0xe7a00134
  .word 0xc7a00114
  .word 0xe7a00138
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a503
  .word 0x24020226
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000506
  .word 0xc7a00140
  .word 0x46140002
  .word 0xe7a00140
  .word 0xc7a00144
  .word 0x46140002
  .word 0xe7a00144
  .word 0xc7a00148
  .word 0x46140002
  .word 0xe7a00148
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45010026
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00120
  .word 0xe7a00108
  .word 0xc7a00128
  .word 0xe7a0010c
  .word 0x27a40108
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1010c
  .word 0xc7a00130
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a00130
  .word 0xc7a10108
  .word 0xc7a00138
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00138
  .word 0xc7a10130
  .word 0xc7a00140
  .word 0x46000800
  .word 0xe7a000a0
  .word 0xc7a10134
  .word 0xc7a00144
  .word 0x46000800
  .word 0xe7a000a4
  .word 0xc7a10138
  .word 0xc7a00148
  .word 0x46000800
  .word 0xe7a000a8
  .word 0xc7a300ac
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe7a300c8
  .word 0xe7a200cc
  .word 0xe7a100d0
  .word 0xe7a000d4
  .word 0xc7a200a0
  .word 0xc7a100a4
  .word 0xc7a000a8
  .word 0xe7a200bc
  .word 0xe7a100c0
  .word 0xe7a000c4
  .word 0xc7a10190
  .word 0xc7a000bc
  .word 0x46000801
  .word 0xe7a00140
  .word 0xc7a10194
  .word 0xc7a000c0
  .word 0x46000801
  .word 0xe7a00144
  .word 0xc7a10198
  .word 0xc7a000c4
  .word 0x46000801
  .word 0xe7a00148
  .word 0x27a40140
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0x0220202d
  .word 0x27a50160
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc621008c
  .word 0xc620002c
  .word 0x460008c2
  .word 0xc7828030
  .word 0xc7a10164
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00164
  .word 0x27a400ac
  .word 0x27a500bc
  .word 0x27a60160
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc7808098
  .word 0x46140082
  .word 0xc7a00140
  .word 0x460200c2
  .word 0xe7a30140
  .word 0xc7a00144
  .word 0x46020042
  .word 0xe7a10144
  .word 0xc7a00148
  .word 0x46020082
  .word 0xe7a20148
  .word 0xc7a000bc
  .word 0x46030000
  .word 0xe7a000a0
  .word 0xc7a000c0
  .word 0x46010040
  .word 0xe7a100a4
  .word 0xc7a000c4
  .word 0x46020000
  .word 0xe7a000a8
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000a4
  .word 0xc7a100c0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000c0
  .word 0x3c024010
  .word 0x4482a000
  .word 0x16c0000f
  .word 0x00000000
  .word 0xc7a200bc
  .word 0xc7a100c0
  .word 0xc7a000c4
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0xc7a300c8
  .word 0xc7a200cc
  .word 0xc7a100d0
  .word 0xc7a000d4
  .word 0xe7a300ac
  .word 0xe7a200b0
  .word 0xe7a100b4
  .word 0xe7a000b8
  .word 0x3c024248
  .word 0x44826000
  .word 0x8e8400e0
  .word 0x26250004
  .word 0x27a600a0
  .word 0x24070003
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500a0
  .word 0x27a600bc
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0280202d
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x12a00004
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0d46ec
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
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002AC540

void func_002ac540(BtlCamera* camera)
{
  int iVar2;
  u32 flag1;
  u32 flag2;
  u32 lVar4;
  int iVar5;

  iVar5 = (int)camera;
  iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + 0xe0) + 0x30) + 0xa00);
  flag1 = 1;
  flag2 = flag1;
  *(undefined2 *)(iVar5 + 0x110) = FUN_002a7830(camera);
  if (*(u16 *)(iVar5 + 0xe4) == 0x19) {
    flag1 = 0;
    flag2 = 0;
  }
  if ((iVar2 != 0) && (lVar4 = FUN_002fdbb0(*(undefined4 *)(iVar5 + 0xe0),iVar2), lVar4 != 0)) {
    *(undefined4 *)(iVar5 + 0x114) = 1;
  }
  else {
    *(undefined4 *)(iVar5 + 0x114) = 0;
  }
  switch(*(undefined2 *)(iVar5 + 0x110)) {
  case 1:
    FUN_002a8150(camera,flag1,flag2);
    break;
  case 2:
    FUN_002a95d0(camera,flag1,flag2);
    break;
  case 3:
    func_002aa2b0(camera,flag1,flag2);
    break;
  case 4:
    if (*(int *)(iVar5 + 0x114) == 0) {
      func_002ab330(camera,flag1,flag2);
    }
    else {
      FUN_002a95d0(camera,flag1,flag2);
    }
    break;
  case 5:
    func_002aa2b0(camera,flag1,flag2);
    break;
  case 6:
    FUN_002a79f0(camera,1);
  }
  return;
}

// FUN_002AC6E0

void func_002ac6e0(BtlCamera* camera)
{
    u8* cameraBytes;
    BtlAction* action;
    u16 state;

    cameraBytes = (u8*)camera;
    state = *(u16*)(cameraBytes + 0x110);

    switch (state)
    {
    case 0:
    case 1:
        break;
    case 2:
        action = *(BtlAction**)(cameraBytes + 0xe0);
        if (action != NULL && (action->unk_1a & 1) != 0)
        {
            if (FUN_002a3750(camera, *(u32*)(cameraBytes + 0x120)) != 0)
            {
                btlUnit002880e0((BtlUnit*)(uintptr_t)*(u32*)(cameraBytes + 0x120),
                                *(u16*)(cameraBytes + 0x124));
            }
        }
        break;
    case 3:
        action = *(BtlAction**)(cameraBytes + 0xe0);
        if (action != NULL && (action->unk_1a & 1) != 0)
        {
            if (*(s32*)(cameraBytes + 0xdc) == 0)
            {
                FUN_002a3e80_call(0.0f, (u8*)action, (u8*)0, (u8*)0, 3);
            }
            if (FUN_002a3750(camera, *(u32*)(cameraBytes + 0x120)) != 0)
            {
                btlUnit002880e0((BtlUnit*)(uintptr_t)*(u32*)(cameraBytes + 0x120),
                                *(u16*)(cameraBytes + 0x124));
            }
        }
        break;
    case 4:
        if (*(s32*)(cameraBytes + 0x114) == 0)
        {
            int actionAddress;

            actionAddress = *(int*)(cameraBytes + 0xe0);
            if (((actionAddress != 0) &&
                 (*(u16*)((u8*)actionAddress + 0x6a) == 1)) &&
                (*(s32*)(cameraBytes + 0x100) == *(s32*)((u8*)actionAddress + 0x38) &&
                 ((*(u16*)((u8*)actionAddress + 0x1a) & 1) != 0)))
            {
                if (FUN_002a3750(camera, *(u32*)(cameraBytes + 0x120)) != 0)
                {
                    btlUnit002880e0((BtlUnit*)(uintptr_t)*(u32*)(cameraBytes + 0x120),
                                    *(u16*)(cameraBytes + 0x124));
                }
                FUN_002a3e80_call(10.0f, *(u8**)(cameraBytes + 0xe0),
                             cameraBytes + 0x9c, cameraBytes + 0x104, 0x33);
            }
        }
        else
        {
            action = *(BtlAction**)(cameraBytes + 0xe0);
            if (action != NULL && (action->unk_1a & 1) != 0)
            {
                if (FUN_002a3750(camera, *(u32*)(cameraBytes + 0x120)) != 0)
                {
                    btlUnit002880e0((BtlUnit*)(uintptr_t)*(u32*)(cameraBytes + 0x120),
                                    *(u16*)(cameraBytes + 0x124));
                }
            }
        }
        break;
    case 5:
        func_002ab2a0(camera);
        break;
    case 6:
        action = *(BtlAction**)(cameraBytes + 0xe0);
        if (action != NULL && (action->unk_1a & 1) != 0)
        {
            if (FUN_002a3750(camera, *(u32*)(cameraBytes + 0x120)) != 0)
            {
                btlUnit002880e0((BtlUnit*)(uintptr_t)*(u32*)(cameraBytes + 0x120),
                                *(u16*)(cameraBytes + 0x124));
            }
        }
        break;
    }
}

/* Retail 0x2AC920 recovery: frame slots 0x20-0x158 hold the camera/target
 * poses, six world vectors, four 2-D helper pairs, and scalar intermediates.
 * Restored retail calls are at 0x4d8, 0x514, 0x52c, 0x604, 0x61c, and 0x62c. */
typedef struct BtlCameraC920Pose
{
    RwV3d pos;
    RtQuat rot;
} BtlCameraC920Pose;

typedef struct BtlCameraC920Pair
{
    f32 first;
    f32 second;
} BtlCameraC920Pair;

typedef struct BtlCameraC920Work
{
    BtlCameraC920Pose cameraPose;
    BtlCameraC920Pose desiredPose;
    RwV3d sourceCenter;
    RwV3d targetCenter;
    RwV3d direction;
    RwV3d firstPoint;
    RwV3d secondPoint;
    RwV3d basePoint;
    BtlCameraC920Pair cameraHorizontal;
    BtlCameraC920Pair projectionFrom;
    BtlCameraC920Pair projectionTo;
    BtlCameraC920Pair projectionOutput;
    f32 f2;
    f32 f7;
    f32 f8;
    f32 f9;
    f32 f11;
    f32 f12;
    f32 f13;
    f32 projectionDistance;
    f32 step;
} BtlCameraC920Work;

#pragma alias FUN_002a4470_c920 FUN_002a4470
extern void FUN_002a4470_c920(BtlCameraC920Pose* dst,
                               const BtlCameraC920Pose* src);
#pragma alias FUN_002a44f0_c920 FUN_002a44f0
extern void FUN_002a44f0_c920(BtlCameraC920Pose* dst,
                               const BtlCameraC920Pose* src);
#pragma alias FUN_002a2290_c920 FUN_002a2290
extern void FUN_002a2290_c920(BtlCamera* camera, const RwV3d* start,
                               const RwV3d* end, s32 mode);
#pragma alias FUN_002a3110_c920 FUN_002a3110
extern void FUN_002a3110_c920(BtlCamera* camera, f32 step);

#pragma opt_propagation reset
#pragma opt_lifetimes reset
/* W367 measured: opt_propagation off nd1247 -> 1240, object 1632/1648; baseline object 1648/1648. */
#pragma opt_propagation off
// FUN_002AC920

#ifndef PC_BUILD
asm void func_002ac920(BtlCamera* camera, long unused)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0xffbf0070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x8c8200e0
  .word 0x8c540030
  .word 0x8c420038
  .word 0x8c530030
  .word 0x0280202d
  .word 0x27a50150
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50140
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc7a10150
  .word 0xc7a00140
  .word 0x46000801
  .word 0xe7a00110
  .word 0xc7a10154
  .word 0xc7a00144
  .word 0x46000801
  .word 0xe7a00114
  .word 0xc7a10158
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00118
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0xc601009c
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a000c8
  .word 0xc60100a4
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a000cc
  .word 0x27a400c8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7808098
  .word 0x46140082
  .word 0xc7a10110
  .word 0x46020942
  .word 0xe7a50120
  .word 0xc7a00114
  .word 0x46020102
  .word 0xe7a40124
  .word 0xc7a00118
  .word 0x460200c2
  .word 0xe7a30128
  .word 0xc7a20140
  .word 0x46022880
  .word 0xe7a20120
  .word 0xc7a20144
  .word 0x46022080
  .word 0xe7a20124
  .word 0xc7a20148
  .word 0x46021880
  .word 0xe7a20128
  .word 0xe7a100c0
  .word 0xe7a000c4
  .word 0xc7a300c8
  .word 0xc7a200cc
  .word 0x4602001a
  .word 0x44802800
  .word 0x46030e1c
  .word 0x4605c034
  .word 0x45010019
  .word 0x00000000
  .word 0x0280882d
  .word 0x0260902d
  .word 0xdfa20150
  .word 0xc7a20158
  .word 0xffa20130
  .word 0xe7a20138
  .word 0xc6830090
  .word 0xc682002c
  .word 0x46021882
  .word 0x3c023fc0
  .word 0x4482b800
  .word 0x00000000
  .word 0x4602b982
  .word 0xc7968094
  .word 0xc7a30134
  .word 0x3c0242fa
  .word 0x44821000
  .word 0x00000000
  .word 0x46021834
  .word 0x45000025
  .word 0x00000000
  .word 0xe7a20134
  .word 0x10000022
  .word 0x00000000
  .word 0x0260882d
  .word 0x0280902d
  .word 0xdfa20140
  .word 0xc7a20148
  .word 0xffa20130
  .word 0xe7a20138
  .word 0x926200a2
  .word 0x1440000c
  .word 0x00000000
  .word 0xc6630090
  .word 0xc662002c
  .word 0x460218c2
  .word 0x3c023fc0
  .word 0x44821000
  .word 0x00000000
  .word 0x46031182
  .word 0x3c024060
  .word 0x4482b800
  .word 0x1000000a
  .word 0x00000000
  .word 0xc6630090
  .word 0xc662002c
  .word 0x460218c2
  .word 0x3c023fa0
  .word 0x44821000
  .word 0x00000000
  .word 0x46031182
  .word 0x3c023fe0
  .word 0x4482b800
  .word 0x3c023e80
  .word 0x4482b000
  .word 0x00000000
  .word 0x4600b146
  .word 0xe7a000c0
  .word 0x46000907
  .word 0xe7a400c4
  .word 0xc7a300c8
  .word 0xc7a200cc
  .word 0x4602201a
  .word 0x44802000
  .word 0x4603065c
  .word 0xc7b40134
  .word 0xc623008c
  .word 0xc622002c
  .word 0x46021882
  .word 0x46142018
  .word 0x4602289c
  .word 0xe7a20104
  .word 0x4604c834
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a20130
  .word 0x46022018
  .word 0x4606001c
  .word 0xe7a00100
  .word 0xc7b50138
  .word 0x46152018
  .word 0x4606081d
  .word 0xe7a00108
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a20130
  .word 0x46022018
  .word 0x4606001d
  .word 0xe7a00100
  .word 0xc7b50138
  .word 0x46152018
  .word 0x4606081c
  .word 0xe7a00108
  .word 0xdfa20110
  .word 0xc7a00118
  .word 0xffa200f0
  .word 0xe7a000f8
  .word 0x27a400a8
  .word 0x27a50100
  .word 0x27a60120
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40110
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700a8
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00120
  .word 0xe7a000d0
  .word 0xc7a00128
  .word 0xe7a000d4
  .word 0xc7a00100
  .word 0xe7a000d8
  .word 0xc7a00108
  .word 0xe7a000dc
  .word 0xc7a00130
  .word 0xe7a000e8
  .word 0xe7b500ec
  .word 0x27a400d0
  .word 0x27a500d8
  .word 0x27a600e8
  .word 0x27a700e0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6220090
  .word 0xc621002c
  .word 0x46011082
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602bd5c
  .word 0xc7a000e0
  .word 0xe7a00100
  .word 0xe7b40104
  .word 0xc7a000e4
  .word 0xe7a00108
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc60000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a843
  .word 0x3c0243fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000046
  .word 0xc7a00110
  .word 0x46010002
  .word 0xe7a00110
  .word 0xc7a00114
  .word 0x46010002
  .word 0xe7a00114
  .word 0xc7a00118
  .word 0x46010002
  .word 0xe7a00118
  .word 0x44801800
  .word 0x00000000
  .word 0x4603c034
  .word 0x45010013
  .word 0x00000000
  .word 0x4603c834
  .word 0x45000020
  .word 0x00000000
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000882
  .word 0xc7a100f8
  .word 0xc7a00100
  .word 0x46001818
  .word 0x4602081c
  .word 0xe7a00100
  .word 0xc7a100f0
  .word 0xc7a00108
  .word 0x46001818
  .word 0x4602081d
  .word 0xe7a00108
  .word 0x10000011
  .word 0x00000000
  .word 0x4603c834
  .word 0x4501000e
  .word 0x00000000
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000882
  .word 0xc7a100f8
  .word 0xc7a00100
  .word 0x46001818
  .word 0x4602081d
  .word 0xe7a00100
  .word 0xc7a100f0
  .word 0xc7a00108
  .word 0x46001818
  .word 0x4602081c
  .word 0xe7a00108
  .word 0xc621008c
  .word 0xc620002c
  .word 0x46000842
  .word 0x44800000
  .word 0x00000000
  .word 0x46140018
  .word 0x4601b09c
  .word 0xe7a20104
  .word 0xc7a10100
  .word 0xc7a00110
  .word 0x46000800
  .word 0xe7a0009c
  .word 0xc7a00114
  .word 0x46001000
  .word 0xe7a000a0
  .word 0xc7a10108
  .word 0xc7a00118
  .word 0x46000800
  .word 0xe7a000a4
  .word 0x27a40080
  .word 0x2605009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x27a4008c
  .word 0x27a500a8
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0xc7818134
  .word 0x46010036
  .word 0x45010028
  .word 0x00000000
  .word 0x27a40080
  .word 0x27a5009c
  .word 0x0c0a913c
  .word 0x00000000
  .word 0x27a40110
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a7008c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c024316
  .word 0x44820800
  .word 0xc7a00110
  .word 0x460100c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46010082
  .word 0xe7a20114
  .word 0xc7a00118
  .word 0x46010042
  .word 0xe7a10118
  .word 0xc7a0009c
  .word 0x46030000
  .word 0xe7a0009c
  .word 0xc7a000a0
  .word 0x46020000
  .word 0xe7a000a0
  .word 0xc7a000a4
  .word 0x46010000
  .word 0xe7a000a4
  .word 0x64110003
  .word 0x2404000c
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x4482a000
  .word 0x10000003
  .word 0x00000000
  .word 0x64110033
  .word 0xc79480a8
  .word 0xc7a10084
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00084
  .word 0xc7a100a0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000a0
  .word 0x3c024248
  .word 0x44826000
  .word 0x8e0400e0
  .word 0x26450004
  .word 0x27a6009c
  .word 0x0220382d
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50080
  .word 0x27a6009c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0200202d
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W331: removing the immediately overwritten local store and disabling dead-assignment folding measured 1780B/nd889 baseline; 1772B/nd965 without the pragma; 1768B/nd551 with it (window 1776B). */
#pragma opt_dead_assignments off
#pragma opt_propagation reset
// FUN_002ACF90

#ifndef PC_BUILD
asm void func_002acf90(BtlCamera* camera, long unused)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x0c0a8e08
  .word 0x00000000
  .word 0x0040802d
  .word 0x27a40050
  .word 0x2645009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x8e4300e0
  .word 0x9462006a
  .word 0x28410002
  .word 0x14200006
  .word 0x00000000
  .word 0x24640038
  .word 0x0c0b4580
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x24020003
  .word 0x3051ffff
  .word 0x0220202d
  .word 0x24050001
  .word 0x27a60140
  .word 0x27a7014c
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x46000546
  .word 0x3c023f40
  .word 0x44820800
  .word 0xc7a0014c
  .word 0x46000802
  .word 0xe7a00144
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600adc3
  .word 0x3c02447a
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b834
  .word 0x45000002
  .word 0x00000000
  .word 0x460005c6
  .word 0x0220202d
  .word 0x24050001
  .word 0x27a60130
  .word 0x0000382d
  .word 0x0000402d
  .word 0x00a0482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x4480a000
  .word 0x0000882d
  .word 0x10000026
  .word 0x00000000
  .word 0x3222ffff
  .word 0x00021080
  .word 0x00821021
  .word 0x8c430038
  .word 0x9462001a
  .word 0x30420001
  .word 0x1040001c
  .word 0x00000000
  .word 0x8c640030
  .word 0x27a500f0
  .word 0x0c0a0014
  .word 0x00000000
  .word 0xc7a10130
  .word 0xc7a000f0
  .word 0x46000801
  .word 0xe7a00120
  .word 0xc7a10134
  .word 0xc7a000f4
  .word 0x46000801
  .word 0xe7a00124
  .word 0xc7a10138
  .word 0xc7a000f8
  .word 0x46000801
  .word 0xe7a00128
  .word 0x27a40120
  .word 0x0c131ab0
  .word 0x00000000
  .word 0x46140036
  .word 0x45010006
  .word 0x00000000
  .word 0xdfa200f0
  .word 0xc7a100f8
  .word 0xffa200e0
  .word 0xe7a100e8
  .word 0x46000506
  .word 0x26220001
  .word 0x3051ffff
  .word 0x8e4400e0
  .word 0x3223ffff
  .word 0x9482006a
  .word 0x0062102a
  .word 0x1440ffd6
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x46140032
  .word 0x45000007
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c420148
  .word 0x8c440030
  .word 0x27a500e0
  .word 0x0c0a0014
  .word 0x00000000
  .word 0xc7a20144
  .word 0xe7a200e4
  .word 0xc7a100e0
  .word 0xc7a00140
  .word 0x46000801
  .word 0xe7a00120
  .word 0x46021001
  .word 0xe7a00124
  .word 0xc7a100e8
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00128
  .word 0x27a40120
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00120
  .word 0x46150042
  .word 0xe7a10120
  .word 0xc7a00124
  .word 0x46150002
  .word 0xe7a00124
  .word 0xc7a00128
  .word 0x46150002
  .word 0xe7a00128
  .word 0xc7a30140
  .word 0x46011d80
  .word 0xc7a20148
  .word 0x46001500
  .word 0x3c023fc0
  .word 0x44820800
  .word 0xc7a0014c
  .word 0x46000d42
  .word 0x4603b001
  .word 0xe7a00110
  .word 0x4602a001
  .word 0xe7a00118
  .word 0xafa00114
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7818094
  .word 0x46000882
  .word 0xc7a00110
  .word 0x46020042
  .word 0xe7a10110
  .word 0xc7a00114
  .word 0x460200c2
  .word 0xe7a30114
  .word 0xc7a00118
  .word 0x46020082
  .word 0xe7a20118
  .word 0xc7a00140
  .word 0x46010000
  .word 0xe7a00100
  .word 0xc7a10144
  .word 0x46030800
  .word 0xe7a00104
  .word 0xc7a00148
  .word 0x46020000
  .word 0xe7a00108
  .word 0xe7a10104
  .word 0x3c02437a
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000546
  .word 0xc7a00100
  .word 0x4600b001
  .word 0xe7a00120
  .word 0xc7a00104
  .word 0x4600a801
  .word 0xe7a00124
  .word 0xc7a00108
  .word 0x4600a001
  .word 0xe7a00128
  .word 0x27a40120
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600b842
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00120
  .word 0xe7a000d8
  .word 0xc7a00128
  .word 0xe7a000dc
  .word 0x27a400d8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a100dc
  .word 0xc7a00100
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00100
  .word 0xc7a100d8
  .word 0xc7a00108
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a00108
  .word 0x0000202d
  .word 0x0c0d5ff4
  .word 0x00000000
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x3c0240f0
  .word 0x4482a000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02c0f0
  .word 0x4482a000
  .word 0x27a40090
  .word 0x3c050069
  .word 0x24a57880
  .word 0x4600a306
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40110
  .word 0x27a50120
  .word 0x27a60090
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc7a00110
  .word 0x461700c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46170082
  .word 0xe7a20114
  .word 0xc7a00118
  .word 0x46170042
  .word 0xe7a10118
  .word 0xc7a00100
  .word 0x46030000
  .word 0xe7a0006c
  .word 0xc7a00104
  .word 0x46020000
  .word 0xe7a00070
  .word 0xc7a00108
  .word 0x46010000
  .word 0xe7a00074
  .word 0x27a40078
  .word 0x27a5006c
  .word 0x27a60100
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x1600002d
  .word 0x00000000
  .word 0x4600a307
  .word 0x27a40090
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40110
  .word 0x27a50120
  .word 0x27a60090
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc7a00110
  .word 0x461700c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46170082
  .word 0xe7a20114
  .word 0xc7a00118
  .word 0x46170042
  .word 0xe7a10118
  .word 0xc7a00100
  .word 0x46030000
  .word 0xe7a00050
  .word 0xc7a00104
  .word 0x46020000
  .word 0xe7a00054
  .word 0xc7a00108
  .word 0x46010000
  .word 0xe7a00058
  .word 0x27a4005c
  .word 0x27a50050
  .word 0x27a60100
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0x3c024100
  .word 0x4482a000
  .word 0x1000004d
  .word 0x00000000
  .word 0xc7a2006c
  .word 0xc7a10070
  .word 0xc7a00074
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0x8e4200e0
  .word 0x9443006e
  .word 0x24020038
  .word 0x10620027
  .word 0x00000000
  .word 0x2402002c
  .word 0x1062001c
  .word 0x00000000
  .word 0x24020027
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020026
  .word 0x10620003
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x3c0243fa
  .word 0xafa20054
  .word 0x3c0243e1
  .word 0xafa20104
  .word 0x3c024030
  .word 0x4482a000
  .word 0x10000025
  .word 0x00000000
  .word 0x3c024416
  .word 0xafa20054
  .word 0x24020226
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00104
  .word 0x3c024040
  .word 0x4482a000
  .word 0x1000001a
  .word 0x00000000
  .word 0x3c024448
  .word 0xafa20054
  .word 0x3c02442f
  .word 0xafa20104
  .word 0x3c024070
  .word 0x4482a000
  .word 0x10000012
  .word 0x00000000
  .word 0x3c02447a
  .word 0xafa20054
  .word 0x240202ee
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00104
  .word 0x3c024020
  .word 0x4482a000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c0243fa
  .word 0xafa20054
  .word 0x3c0243e1
  .word 0xafa20104
  .word 0x3c024030
  .word 0x4482a000
  .word 0x27a4005c
  .word 0x27a50050
  .word 0x27a60100
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x2404000c
  .word 0x0c0d46ec
  .word 0x00000000
  .word 0x27a40050
  .word 0x0080282d
  .word 0x0c0a8d64
  .word 0x00000000
  .word 0x27a4006c
  .word 0x0080282d
  .word 0x0c0a8d64
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50050
  .word 0x27a6006c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0240202d
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0150
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_dead_assignments reset

// FUN_002AD680

void func_002ad680(BtlCamera* camera)
{
  undefined2 uVar1;
  
  uVar1 = btlCameraSelectMode(camera);
  *(undefined2 *)((int)camera + 0x110) = uVar1;
  switch(*(undefined2 *)((int)camera + 0x110)) {
  case 1:
    FUN_002a4c70(camera, 45.0f, 200.0f);
    break;
  case 2:
    func_002ac920(camera,1);
    break;
  case 3:
    func_002acf90(camera,1);
    break;
  case 4:
    func_002ac920(camera,1);
    break;
  case 5:
    func_002acf90(camera,1);
    break;
  case 6:
    FUN_002a79f0(camera,1);
  }
  return;
}

// FUN_002AD770

void func_002ad770(BtlCamera* camera)
{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_10 [16];
  
  iVar3 = (int)camera;
  switch(*(undefined2 *)(iVar3 + 0x110)) {
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  case 1:
    iVar1 = *(int *)(iVar3 + 0xe0);
    if ((iVar1 != 0) && ((*(ushort *)(iVar1 + 0x1a) & 1) != 0)) {
      iVar1 = *(int *)(iVar1 + 0x30);
      btlUnitGetSphereWorldCenter((BtlUnit*)(uintptr_t)(iVar1), (RwV3d*)auStack_10);
      FUN_002a3e80_call(*(float *)(iVar1 + 0x90) * *(float *)(iVar1 + 0x2c) * 0.5f,
                   (u8*)(uintptr_t)*(undefined4 *)(iVar3 + 0xe0),(u8*)(uintptr_t)(iVar3 + 0x9c),
                   (u8*)auStack_10,0x31);
    }
    break;
  case 6:
    if (((*(int *)(iVar3 + 0xe0) != 0) && ((*(ushort *)(*(int *)(iVar3 + 0xe0) + 0x1a) & 1) != 0))
       && (FUN_002a3750(camera,*(undefined4 *)(iVar3 + 0x120)) != 0)) {
      btlUnit002880e0((BtlUnit*)(uintptr_t)(*(undefined4 *)(iVar3 + 0x120)),*(undefined2 *)(iVar3 + 0x124));
    }
  }
  return;
}


// FUN_002ad880
void func_002ad880(BtlCamera *camera, float angle, float distanceScale, float heightScale, float minimumDistance)
{
  /* Caller-specific typed ABIs retain the orbit transform arguments used by this path. */
  extern void FUN_004c31b0(RwMatrix *matrix, const RwV3d *axis, f32 angle, s32 mode);
  extern void FUN_004be1e0(RwV3d *out, const RwV3d *basis, s32 mode, void *source);
  extern RwV3d D_00697890;
  typedef struct CameraVectorSlot {
    RwV3d value;
    u32 padding;
  } CameraVectorSlot;
  struct CameraOrbitScratch {
    RwMatrix rotation;
    RwV3d firstPosition;
    u8 firstView[16];
    RwV3d secondPosition;
    u8 secondView[24];
    CameraVectorSlot scaledOffset;
    CameraVectorSlot candidate;
    CameraVectorSlot direction;
    CameraVectorSlot forward;
    CameraVectorSlot center;
    CameraVectorSlot sphereCenter;
  } scratch;
  u8 *unitBytes;
  int cameraAddress;
  float radius;
  float halfHeight;
  float requiredDistance;
  u64 centerXY;
  float centerZ;

  cameraAddress = (int)camera;
  unitBytes = (u8 *)(uintptr_t)*(int *)(*(int *)(cameraAddress + 0xe0) + 0x30);
  btlUnitGetSphereWorldCenter((BtlUnit *)unitBytes, &scratch.sphereCenter.value);
  radius = *(float *)(unitBytes + 0x90) * *(float *)(unitBytes + 0x2c);
  halfHeight = *(float *)(unitBytes + 0x8c) * *(float *)(unitBytes + 0x2c) * 0.5f;
  centerXY = *(volatile /* Removing this function's qualifier batch loses func_002ad880 (MATCH nd0 -> MISMATCH nd6, size 936 -> 936) - measured W170. */ u64 *)&scratch.sphereCenter.value;
  centerZ = *(volatile /* Removing this function's qualifier batch loses func_002ad880 (MATCH nd0 -> MISMATCH nd6, size 936 -> 936) - measured W170. */ f32 *)&scratch.sphereCenter.value.z;
  *(u64 *)&scratch.center.value = centerXY;
  scratch.center.value.z = centerZ;
  scratch.center.value.y = halfHeight * heightScale + scratch.center.value.y;
  if (radius > halfHeight) {
    requiredDistance = (radius * distanceScale) /
      FUN_0052e930(DAT_007cad60 * (*(float *)(cameraAddress + 0xb8) * 0.5f));
  } else {
    requiredDistance = (halfHeight * distanceScale) /
      FUN_0052e930(*(float *)(cameraAddress + 0xb8) * 0.5f);
  }
  if (requiredDistance < minimumDistance) {
    requiredDistance = minimumDistance;
  }
  FUN_004be1e0(&scratch.forward.value, &D_00697890, 1, (void *)(unitBytes + 0x1c));
  scratch.scaledOffset.value.x = scratch.forward.value.x * radius;
  scratch.scaledOffset.value.y = scratch.forward.value.y * radius;
  scratch.scaledOffset.value.z = scratch.forward.value.z * radius;
  scratch.candidate.value.x = scratch.center.value.x + scratch.scaledOffset.value.x;
  scratch.candidate.value.y = scratch.center.value.y + scratch.scaledOffset.value.y;
  scratch.candidate.value.z = scratch.center.value.z + scratch.scaledOffset.value.z;
  scratch.candidate.value.y = DAT_007cada4 * halfHeight + scratch.candidate.value.y;
  scratch.direction.value.x = scratch.candidate.value.x - scratch.center.value.x;
  scratch.direction.value.y = scratch.candidate.value.y - scratch.center.value.y;
  scratch.direction.value.z = scratch.candidate.value.z - scratch.center.value.z;
  FUN_004c69f0(&scratch.direction.value, &scratch.direction.value);
  scratch.scaledOffset.value.x = scratch.direction.value.x * requiredDistance;
  scratch.scaledOffset.value.y = scratch.direction.value.y * requiredDistance;
  scratch.scaledOffset.value.z = scratch.direction.value.z * requiredDistance;
  FUN_004c31b0(&scratch.rotation, &D_00697880, angle, 0);
  FUN_004c6c60(&scratch.direction.value, &scratch.scaledOffset.value, &scratch.rotation);
  scratch.candidate.value.x = scratch.center.value.x + scratch.direction.value.x;
  scratch.candidate.value.y = scratch.center.value.y + scratch.direction.value.y;
  scratch.candidate.value.z = scratch.center.value.z + scratch.direction.value.z;
  FUN_002a4690(scratch.firstView, &scratch.candidate.value, &scratch.center.value, &D_00697880);
  scratch.firstPosition.x = scratch.center.value.x + scratch.direction.value.x;
  scratch.firstPosition.y = scratch.center.value.y + scratch.direction.value.y;
  scratch.firstPosition.z = scratch.center.value.z + scratch.direction.value.z;
  FUN_004c31b0(&scratch.rotation, &D_00697880, -angle, 0);
  FUN_004c6c60(&scratch.direction.value, &scratch.scaledOffset.value, &scratch.rotation);
  scratch.candidate.value.x = scratch.center.value.x + scratch.direction.value.x;
  scratch.candidate.value.y = scratch.center.value.y + scratch.direction.value.y;
  scratch.candidate.value.z = scratch.center.value.z + scratch.direction.value.z;
  FUN_002a4690(scratch.secondView, &scratch.candidate.value, &scratch.center.value, &D_00697880);
  scratch.secondPosition.x = scratch.center.value.x + scratch.direction.value.x;
  scratch.secondPosition.y = scratch.center.value.y + scratch.direction.value.y;
  scratch.secondPosition.z = scratch.center.value.z + scratch.direction.value.z;
  FUN_002a3e80_call(0.0f, *(u8 **)(cameraAddress + 0xe0), NULL, NULL, 1);
  FUN_002a2290((u16 *)camera, &scratch.firstPosition, &scratch.secondPosition, 1);
  FUN_002a3110((u16 *)camera, 3.5f);
}

// FUN_002ADC30

void func_002adc30(BtlCamera* camera)
{
  func_002ad880(camera,10.0f,2.0f,0.0f,250.0f);
  return;
}

// FUN_002ADC70
void btlCameraNoop002adc70(void)
{
}

// FUN_002ADC80
void func_002adc80(BtlCamera* camera)

{
  func_002ad880(camera,15.0f,2.0f,0.25f,400.0f);
  return;
}

// FUN_002ADCC0
void btlCameraNoop002adcc0(void)
{
}

// FUN_002ADCD0

void func_002adcd0(BtlCamera* camera)
{
  FUN_002a8d20(camera,1);
  return;
}

// FUN_002ADD00

void func_002ADD00(void)
{
  return;
}

/* W367 measured: opt_propagation off nd797 -> 635, object 1044/1088; baseline object 1068/1088. */
#pragma opt_propagation off
// FUN_002ADD10

#ifndef PC_BUILD
asm u32 func_002add10(BtlCamera* camera, u32 param_2, float* param_3, float* param_4)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x27a40080
  .word 0x2685009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x24040002
  .word 0x0000282d
  .word 0x27a600c0
  .word 0x27a7010c
  .word 0x0000402d
  .word 0x24090001
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x46000546
  .word 0xc78180c4
  .word 0xc7a0010c
  .word 0x46000802
  .word 0xe7a000c4
  .word 0x8e8200e0
  .word 0x8c500030
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000842
  .word 0xc780810c
  .word 0x46000d02
  .word 0x0200202d
  .word 0x27a500d0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x27a40070
  .word 0x27a500d0
  .word 0x27a600c0
  .word 0x0c0b4778
  .word 0x00000000
  .word 0xc601008c
  .word 0xc600002c
  .word 0x460008c2
  .word 0xc7828064
  .word 0xc7a100d4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a000d4
  .word 0x27a40100
  .word 0x3c050069
  .word 0x24a57870
  .word 0x24060001
  .word 0x27a70070
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00100
  .word 0x461400c2
  .word 0xe7a30100
  .word 0xc7a00104
  .word 0x46140082
  .word 0xe7a20104
  .word 0xc7a00108
  .word 0x46140042
  .word 0xe7a10108
  .word 0xc7a000d0
  .word 0x460300c0
  .word 0xe7a300d0
  .word 0xc7a000d4
  .word 0x46020080
  .word 0xe7a200d4
  .word 0xc7a000d8
  .word 0x46010040
  .word 0xe7a100d8
  .word 0xc7a000c0
  .word 0x46001801
  .word 0xe7a000f0
  .word 0xc7a000c4
  .word 0x46001001
  .word 0xe7a000f4
  .word 0xc7a000c8
  .word 0x46000801
  .word 0xe7a000f8
  .word 0x27a400f0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0xc7818084
  .word 0x46000842
  .word 0xc7a000f0
  .word 0x460100c2
  .word 0xe7a300e0
  .word 0xc7a000f4
  .word 0x46010082
  .word 0xe7a200e4
  .word 0xc7a000f8
  .word 0x46010042
  .word 0xe7a100e8
  .word 0xc7a000c0
  .word 0x46001800
  .word 0xe7a000e0
  .word 0xc7a000c4
  .word 0x46001000
  .word 0xe7a000e4
  .word 0xc7a000c8
  .word 0x46000800
  .word 0xe7a000e8
  .word 0x27a50100
  .word 0xdfa200d0
  .word 0xc7a000d8
  .word 0xffa20100
  .word 0xe7a00108
  .word 0x27a400a8
  .word 0x27a600e0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a4008c
  .word 0x27a500a8
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0xc7818110
  .word 0x46010036
  .word 0x45010002
  .word 0x00000000
  .word 0x24130001
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000b02
  .word 0xc601008c
  .word 0xc600002c
  .word 0x46000d82
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600b003
  .word 0x46140500
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000b02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c023f60
  .word 0x44820800
  .word 0x00000000
  .word 0x46150842
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46000506
  .word 0x27a40100
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700a8
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023de0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c2
  .word 0xc7a60108
  .word 0xc7a000c0
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4603315c
  .word 0xe7a500c0
  .word 0xc7a10100
  .word 0xc7a000c8
  .word 0x46001018
  .word 0x4603091d
  .word 0xe7a400c8
  .word 0x461408c2
  .word 0xe7a30100
  .word 0xc7a00104
  .word 0x46140082
  .word 0xe7a20104
  .word 0x46143042
  .word 0xe7a10108
  .word 0x46032800
  .word 0xe7a0009c
  .word 0xc7a000c4
  .word 0x46020000
  .word 0xe7a000a0
  .word 0x46012000
  .word 0xe7a000a4
  .word 0xc7a10084
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00084
  .word 0xc7a100a0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000a0
  .word 0x1240000a
  .word 0x00000000
  .word 0x27a40080
  .word 0x24030007
  .word 0x8c820000
  .word 0x24840004
  .word 0x2463ffff
  .word 0xae420000
  .word 0x26520004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x1220000a
  .word 0x00000000
  .word 0x27a4009c
  .word 0x24030007
  .word 0x8c820000
  .word 0x24840004
  .word 0x2463ffff
  .word 0xae220000
  .word 0x26310004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x0260102d
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

// FUN_002AE150

void func_002ae150(BtlCamera* camera)
{
  u16 st;
  int flag;
  f32 buf[16];

  st = *(u16 *)(iGpffffb6fc + 0x104);
  switch (st) {
  case 0x1d:
  case 0x22:
  case 2:
  case 0x23:
    flag = 0;
    break;
  default:
    flag = 1;
    break;
  }
  if (func_002add10(camera, flag, buf, buf + 7) != 0) {
    FUN_00351bb0(8);
    FUN_002a3e80_call(0.0f, *(u8 **)((u8 *)camera + 0xe0), 0, 0, 0x40);
    FUN_002a2170(camera, buf + 7);
  }
  else {
    FUN_002a2290((u16 *)camera, (RwV3d *)buf, (RwV3d *)(buf + 7), 1);
    FUN_002a3110((u16 *)camera, 1.25f);
  }
}

// FUN_002ae250
void func_002ae250(void)
{
}

// FUN_002AE260

void func_002ae260(BtlCamera* camera)
{
  BtlUnit* unit;
  f32 buf[28];
  f32 fVar0;
  f32 fVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  f32 fVar9;
  f32 fVar20;
  f32 fVar23;
  f32 fVar22;
  f32 fVar21;

  unit = camera->action->unit;
  btlUnitGetSphereWorldCenter(unit, (RwV3d *)(buf + 24));
  fVar20 = unit->sphereRadius * unit->scale;
  fVar21 = unit->unk_8c * unit->scale * 0.5f;
  buf[25] = fVar21 * 0.25f + buf[25];
  if (fVar20 > fVar21) {
    fVar20 = (1.25f * fVar20) /
      FUN_0052e930(gp0xffff8070 * (camera->fovRad * 0.5f));
  }
  else {
    fVar20 = (1.25f * fVar21) /
      FUN_0052e930(camera->fovRad * 0.5f);
  }
  FUN_004be1e0((RwV3d *)(buf + 20), &D_00697890, 1, &unit->rot);
  fVar4 = fVar20 + 125.0f;
  fVar23 = buf[20] * fVar4;
  fVar22 = buf[21] * fVar4;
  fVar21 = buf[22] * fVar4;
  buf[16] = buf[24] + fVar23;
  buf[17] = buf[25] + fVar22;
  buf[18] = buf[26] + fVar21;
  FUN_002a4690(&buf[3], &buf[16], (RwV3d *)(buf + 24), &D_00697880);
  fVar9 = buf[24];
  buf[0] = fVar9 + fVar23;
  fVar8 = buf[25];
  buf[1] = fVar8 + fVar22;
  fVar7 = buf[26];
  buf[2] = fVar7 + fVar21;
  *(F32Vec4 *)(buf + 10) = *(F32Vec4 *)(buf + 3);
  buf[7] = buf[20] * fVar20 + fVar9;
  buf[8] = buf[21] * fVar20 + fVar8;
  buf[9] = buf[22] * fVar20 + fVar7;
  FUN_002a3e80_call(0.0f, (u8 *)camera->action, 0, 0, 1);
  FUN_002a2290((u16 *)camera, (RwV3d *)buf, (RwV3d *)(buf + 7), 1);
  FUN_002a3110((u16 *)camera, 2.5f);
}

// FUN_002AE4C0
void func_002ae4c0(void)
{
}
// FUN_002AE4D0

void func_002ae4d0(BtlCamera* camera)
{
  BtlUnit* unit;
  f32 buf[28];
  f32 fVar0;
  f32 fVar1;
  f32 fVar2;
  f32 fVar3;
  f32 fVar4;
  f32 fVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  f32 fVar9;
  f32 fVar20;
  f32 fVar23;
  f32 fVar22;
  f32 fVar21;

  unit = camera->action->unit;
  btlUnitGetSphereWorldCenter(unit, (RwV3d *)(buf + 24));
  fVar20 = unit->sphereRadius * unit->scale;
  fVar21 = unit->unk_8c * unit->scale * 0.5f;
  buf[25] = fVar21 * 0.25f + buf[25];
  if (fVar20 > fVar21) {
    fVar20 = (1.5f * fVar20) /
      FUN_0052e930(gp0xffff8070 * (camera->fovRad * 0.5f));
  }
  else {
    fVar20 = (1.5f * fVar21) /
      FUN_0052e930(camera->fovRad * 0.5f);
  }
  FUN_004be1e0((RwV3d *)(buf + 20), &D_00697890, 1, &unit->rot);
  fVar4 = fVar20 + 125.0f;
  fVar23 = buf[20] * fVar4;
  fVar22 = buf[21] * fVar4;
  fVar21 = buf[22] * fVar4;
  buf[16] = buf[24] + fVar23;
  buf[17] = buf[25] + fVar22;
  buf[18] = buf[26] + fVar21;
  FUN_002a4690(&buf[3], &buf[16], (RwV3d *)(buf + 24), &D_00697880);
  fVar9 = buf[24];
  buf[0] = fVar9 + fVar23;
  fVar8 = buf[25];
  buf[1] = fVar8 + fVar22;
  fVar7 = buf[26];
  buf[2] = fVar7 + fVar21;
  *(F32Vec4 *)(buf + 10) = *(F32Vec4 *)(buf + 3);
  buf[7] = buf[20] * fVar20 + fVar9;
  buf[8] = buf[21] * fVar20 + fVar8;
  buf[9] = buf[22] * fVar20 + fVar7;
  FUN_002a3e80_call(0.0f, (u8 *)camera->action, 0, 0, 1);
  FUN_002a2290((u16 *)camera, (RwV3d *)(buf + 7), (RwV3d *)buf, 1);
  FUN_002a3110((u16 *)camera, 2.5f);
}


// FUN_002AE730
void func_002ae730(void)
{
}

/* W367 measured: opt_lifetimes on nd849 -> 848, object 2108/2112; baseline object 2108/2112. */
#pragma opt_lifetimes on
// FUN_002AE740

#ifndef PC_BUILD
asm void func_002ae740(BtlCamera* camera, int param_2)
{
  .set noreorder
  .word 0x27bdfe80
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x8c9100e0
  .word 0x8e320030
  .word 0x26240088
  .word 0x0c0b0220
  .word 0x00000000
  .word 0x0040802d
  .word 0x27a400e0
  .word 0x2685009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8e14
  .word 0x00000000
  .word 0x0002102b
  .word 0x38450001
  .word 0x24040003
  .word 0x27a60150
  .word 0x27a7017c
  .word 0x27a80178
  .word 0x24090001
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x46000506
  .word 0xc7a30178
  .word 0xc7a0017c
  .word 0x46030081
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4602081c
  .word 0xe7a00154
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0xc7818128
  .word 0x46140842
  .word 0x46000d03
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50120
  .word 0x0c0a0014
  .word 0x00000000
  .word 0xc7a30120
  .word 0xe7a30140
  .word 0xc7a20154
  .word 0xe7a20144
  .word 0xc7a10128
  .word 0xe7a10148
  .word 0xc7a00150
  .word 0x46001801
  .word 0xe7a00130
  .word 0x46021001
  .word 0xe7a00134
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a00138
  .word 0x27a40130
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0xc7a00130
  .word 0x460100c2
  .word 0xe7a30130
  .word 0xc7a00134
  .word 0x46010082
  .word 0xe7a20134
  .word 0xc7a00138
  .word 0x46010042
  .word 0xe7a10138
  .word 0xc7a00150
  .word 0x46030000
  .word 0xe7a00160
  .word 0xc7a00154
  .word 0x46020000
  .word 0xe7a00164
  .word 0xc7a00158
  .word 0x46010000
  .word 0xe7a00168
  .word 0xc7a00120
  .word 0xe7a00140
  .word 0x3c024000
  .word 0x44820800
  .word 0xc7a0017c
  .word 0x46000802
  .word 0xe7a00144
  .word 0xc7a00128
  .word 0xe7a00148
  .word 0x27a400ac
  .word 0x27a50140
  .word 0x27a60160
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40130
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700ac
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00130
  .word 0x46140002
  .word 0xe7a00130
  .word 0xc7a00134
  .word 0x46140002
  .word 0xe7a00134
  .word 0xc7a00138
  .word 0x46140002
  .word 0xe7a00138
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d42
  .word 0xc7a00130
  .word 0xe7a00170
  .word 0xc7a00138
  .word 0xe7a00174
  .word 0x27a40170
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a10174
  .word 0xc7a00160
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x461508dc
  .word 0xe7a30160
  .word 0xc7a10170
  .word 0xc7a00168
  .word 0x46001018
  .word 0x4615089d
  .word 0xe7a20168
  .word 0xc7a00130
  .word 0x46001800
  .word 0xe7a000a0
  .word 0xc7a10164
  .word 0xc7a00134
  .word 0x46000800
  .word 0xe7a000a4
  .word 0xc7a00138
  .word 0x46001000
  .word 0xe7a000a8
  .word 0x16300089
  .word 0x00000000
  .word 0x96820106
  .word 0x14400080
  .word 0x00000000
  .word 0xc7a30120
  .word 0xe7a30140
  .word 0xc7a20154
  .word 0xe7a20144
  .word 0xc7a10128
  .word 0xe7a10148
  .word 0xc7a00150
  .word 0x46001801
  .word 0xe7a00130
  .word 0x46021001
  .word 0xe7a00134
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a00138
  .word 0x27a40130
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7818128
  .word 0x46000842
  .word 0xc7a70130
  .word 0x46013982
  .word 0xe7a60140
  .word 0xc7a50134
  .word 0x46012902
  .word 0xe7a40144
  .word 0xc7a30138
  .word 0x46011882
  .word 0xe7a20148
  .word 0xc7a10150
  .word 0x46060840
  .word 0xe7a10160
  .word 0xc7a10154
  .word 0x46040840
  .word 0xe7a10164
  .word 0xc7a10158
  .word 0x46020840
  .word 0xe7a10168
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46000882
  .word 0x46023842
  .word 0xe7a10140
  .word 0x46022802
  .word 0xe7a00144
  .word 0x46021882
  .word 0xe7a20148
  .word 0xc7a00120
  .word 0x46000800
  .word 0xe7a00140
  .word 0x3c023fc0
  .word 0x44820800
  .word 0xc7a0017c
  .word 0x46000802
  .word 0xe7a00144
  .word 0xc7a00128
  .word 0x46001000
  .word 0xe7a00148
  .word 0x27a40108
  .word 0x27a50140
  .word 0x27a60160
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40130
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70108
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00130
  .word 0x46140002
  .word 0xe7a00130
  .word 0xc7a00134
  .word 0x46140002
  .word 0xe7a00134
  .word 0xc7a00138
  .word 0x46140002
  .word 0xe7a00138
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00130
  .word 0xe7a00170
  .word 0xc7a00138
  .word 0xe7a00174
  .word 0x27a40170
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a10174
  .word 0xc7a00160
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x461408dc
  .word 0xe7a30160
  .word 0xc7a10170
  .word 0xc7a00168
  .word 0x46001018
  .word 0x4614089d
  .word 0xe7a20168
  .word 0xc7a00130
  .word 0x46001800
  .word 0xe7a000fc
  .word 0xc7a10164
  .word 0xc7a00134
  .word 0x46000800
  .word 0xe7a00100
  .word 0xc7a00138
  .word 0x46001000
  .word 0xe7a00104
  .word 0x100000bd
  .word 0x00000000
  .word 0x27a400fc
  .word 0x27a500a0
  .word 0x0c0a913c
  .word 0x00000000
  .word 0x100000b7
  .word 0x00000000
  .word 0x8e040030
  .word 0x27a50160
  .word 0x0c0a0014
  .word 0x00000000
  .word 0x27a400c8
  .word 0x27a50140
  .word 0x27a60160
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40130
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700c8
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00130
  .word 0x46140002
  .word 0xe7a00130
  .word 0xc7a00134
  .word 0x46140002
  .word 0xe7a00134
  .word 0xc7a00138
  .word 0x46140002
  .word 0xe7a00138
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00130
  .word 0xe7a00170
  .word 0xc7a00138
  .word 0xe7a00174
  .word 0x27a40170
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a10174
  .word 0xc7a00160
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x461408dc
  .word 0xe7a30160
  .word 0xc7a10170
  .word 0xc7a00168
  .word 0x46001018
  .word 0x4614089d
  .word 0xe7a20168
  .word 0xc7a00130
  .word 0x46001800
  .word 0xe7a000bc
  .word 0xc7a10164
  .word 0xc7a00134
  .word 0x46000800
  .word 0xe7a000c0
  .word 0xc7a00138
  .word 0x46001000
  .word 0xe7a000c4
  .word 0x96820106
  .word 0x1440006a
  .word 0x00000000
  .word 0x27a400ac
  .word 0x27a500c8
  .word 0x27a60070
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0xc78180a4
  .word 0xc7808094
  .word 0x8fa20094
  .word 0x14400028
  .word 0x00000000
  .word 0xc7ac0090
  .word 0x460c0902
  .word 0x460420c2
  .word 0xc78b8114
  .word 0xc78a8048
  .word 0x44804800
  .word 0x00000000
  .word 0x460a4818
  .word 0x4603585c
  .word 0xc7888118
  .word 0x46084818
  .word 0x4601185c
  .word 0xc7878050
  .word 0x46074818
  .word 0x4601185c
  .word 0xc7868054
  .word 0x46064818
  .word 0x4601185c
  .word 0xc7858058
  .word 0x46054818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46044818
  .word 0x4602085c
  .word 0x460c0102
  .word 0x460420c2
  .word 0x460a4818
  .word 0x4603581c
  .word 0x46084818
  .word 0x4600181c
  .word 0x46074818
  .word 0x4600181c
  .word 0x46064818
  .word 0x4600181c
  .word 0x46054818
  .word 0x4600189c
  .word 0x46041802
  .word 0x46044818
  .word 0x4602001c
  .word 0xc7a20070
  .word 0x46011182
  .word 0xe7a60108
  .word 0xc7a20074
  .word 0x46011142
  .word 0xe7a5010c
  .word 0xc7a20078
  .word 0x46011102
  .word 0xe7a40110
  .word 0xc7a20080
  .word 0x44801800
  .word 0x00000000
  .word 0x46061818
  .word 0x4600109c
  .word 0xe7a20108
  .word 0xc7a20084
  .word 0x46051818
  .word 0x4600109c
  .word 0xe7a2010c
  .word 0xc7a20088
  .word 0x46041818
  .word 0x4600109c
  .word 0xe7a20110
  .word 0xc7a3007c
  .word 0xc7a2008c
  .word 0x4600101a
  .word 0x4601181c
  .word 0xe7a00114
  .word 0xc7a000a0
  .word 0xc78180a4
  .word 0x46010182
  .word 0xe7a600a0
  .word 0xc7a000a4
  .word 0x46010142
  .word 0xe7a500a4
  .word 0xc7a000a8
  .word 0x46010102
  .word 0xe7a400a8
  .word 0xc7a000bc
  .word 0xc7818094
  .word 0x460100c2
  .word 0xe7a300bc
  .word 0xc7a000c0
  .word 0x46010082
  .word 0xe7a200c0
  .word 0xc7a000c4
  .word 0x46010042
  .word 0xe7a100c4
  .word 0x46033000
  .word 0xe7a000fc
  .word 0x46022800
  .word 0xe7a00100
  .word 0x46012000
  .word 0xe7a00104
  .word 0x10000005
  .word 0x00000000
  .word 0x27a400fc
  .word 0x27a500a0
  .word 0x0c0a913c
  .word 0x00000000
  .word 0x27a400fc
  .word 0x0080282d
  .word 0x0c0a8d64
  .word 0x00000000
  .word 0x12600007
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500fc
  .word 0x0c0a885c
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a500e0
  .word 0x27a600fc
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c023f40
  .word 0x44826000
  .word 0x0280202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0180
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* Retail 0x2AEF80-0x2AF7E0: retain the measured framing frame slots as real aggregates. */
typedef struct BtlCameraFramingPoseLocal {
  RwV3d pos;
  RtQuat rot;
} BtlCameraFramingPoseLocal;

typedef struct BtlCameraFramingWork {
  f32 fStack_140;
  f32 fStack_13c;
  f32 fStack_138;
  f32 fStack_134;
  f32 fStack_130;
  f32 fStack_12c;
  f32 fStack_128;
  f32 fStack_124;
  f32 fStack_120;
  int iStack_11c;
  f32 fStack_110;
  f32 fStack_10c;
  f32 fStack_108;
  Local128 auStack_104;
  f32 fStack_f4;
  f32 fStack_f0;
  f32 fStack_ec;
  struct {
    Local128 quat;
    f32 aux0;
    f32 aux1;
  } auStack_e8;
  BtlCameraFramingPoseLocal auStack_d0;
  f32 fStack_b4;
  f32 fStack_b0;
  f32 fStack_ac;
  f32 fStack_a8;
  f32 fStack_a4;
  f32 fStack_a0;
  f32 fStack_9c;
  f32 fStack_90;
  f32 fStack_8c;
  f32 fStack_88;
  f32 fStack_80;
  f32 fStack_7c;
  f32 fStack_78;
  f32 fStack_70;
  f32 fStack_6c;
  f32 fStack_68;
  f32 fStack_64;
  f32 fStack_60;
  f32 fStack_58;
  f32 fStack_54;
  f32 fStack_50;
  f32 fStack_48;
  f32 fStack_44;
  f32 fStack_40;
  f32 fStack_38;
  f32 fStack_34;
  f32 fStack_30;
  f32 fStack_28;
  f32 fStack_24;
  f32 fStack_20;
  f32 fStack_18;
  f32 fStack_14;
  f32 fStack_10;
  f32 auStack_8;
  f32 fStack_4;
} BtlCameraFramingWork;
#pragma opt_lifetimes reset
/* W367 measured: opt_lifetimes on + opt_propagation off nd1499 -> 1485, object 2060/2160; baseline object 2100/2160. */
#pragma opt_lifetimes on
#pragma opt_propagation off
/* W417 negative: moving FUN_002a4470 after the initial scalar helpers left nd1485 unchanged at object 2060/2160; retained order. */
// FUN_002AEF80

#ifndef PC_BUILD
asm void func_002aef80(BtlCamera* camera, int param_2)
{
  .set noreorder
  .word 0x27bdfe60
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x8c9100e0
  .word 0x26240088
  .word 0x0c0b0220
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e310030
  .word 0x27a400d0
  .word 0x2665009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x8e020030
  .word 0x904200a2
  .word 0x24050001
  .word 0x00451004
  .word 0x3044ffff
  .word 0x27a60188
  .word 0x27a7019c
  .word 0x27a80198
  .word 0x00a0482d
  .word 0x0c0a021c
  .word 0x00000000
  .word 0x460005c6
  .word 0x0220202d
  .word 0x27a50148
  .word 0x0c0a0014
  .word 0x00000000
  .word 0xc621002c
  .word 0xc620008c
  .word 0x46010502
  .word 0xc6200090
  .word 0x46010582
  .word 0x8e040030
  .word 0x27a50138
  .word 0x0c0a0014
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44821000
  .word 0x00000000
  .word 0x46141042
  .word 0xc7a0014c
  .word 0x46010040
  .word 0xc7a0018c
  .word 0x46010034
  .word 0x45000003
  .word 0x00000000
  .word 0x46011002
  .word 0xe7a0018c
  .word 0xc7a0019c
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a1019c
  .word 0xdfa20148
  .word 0xc7a00150
  .word 0xffa20178
  .word 0xe7a00180
  .word 0xc7a2018c
  .word 0xe7a2017c
  .word 0xc7a10178
  .word 0xc7a00188
  .word 0x46000801
  .word 0xe7a00168
  .word 0x46021001
  .word 0xe7a0016c
  .word 0xc7a10180
  .word 0xc7a00190
  .word 0x46000801
  .word 0xe7a00170
  .word 0x27a40168
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc780808c
  .word 0x46170042
  .word 0xc7a00168
  .word 0x46010082
  .word 0xe7a20168
  .word 0xc7a0016c
  .word 0x460100c2
  .word 0xe7a3016c
  .word 0xc7a00170
  .word 0x46010042
  .word 0xe7a10170
  .word 0xc7a00188
  .word 0x46020080
  .word 0xe7a20188
  .word 0xc7a0018c
  .word 0x46030540
  .word 0xe7b5018c
  .word 0xc7a00190
  .word 0x46010040
  .word 0xe7a10190
  .word 0xdfa20148
  .word 0xc7a00150
  .word 0xffa20110
  .word 0xe7a00118
  .word 0xe7b50114
  .word 0xc7a00110
  .word 0x46020001
  .word 0xe7a00168
  .word 0x4615a801
  .word 0xe7a0016c
  .word 0xc7b40118
  .word 0x4601a001
  .word 0xe7a00170
  .word 0x27a40168
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc66000b8
  .word 0x46000b02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0xc7a1018c
  .word 0x00000000
  .word 0x46000803
  .word 0x4600b040
  .word 0xc7a00168
  .word 0x460100c2
  .word 0xe7a30168
  .word 0xc7a0016c
  .word 0x46010082
  .word 0xe7a2016c
  .word 0xc7a00170
  .word 0x46010042
  .word 0xe7a10170
  .word 0xc7a00110
  .word 0x46030000
  .word 0xe7a00158
  .word 0x4602a800
  .word 0xe7a0015c
  .word 0x4601a000
  .word 0xe7a00160
  .word 0xc781811c
  .word 0xc7a0019c
  .word 0x46000802
  .word 0xe7a0015c
  .word 0x27a4009c
  .word 0x27a50158
  .word 0x27a60188
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40158
  .word 0x27a50188
  .word 0x0c0b479c
  .word 0x00000000
  .word 0x46000506
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc66000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0xc7818100
  .word 0x46170842
  .word 0x46000d43
  .word 0x27a40168
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a7009c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x4615a036
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600ad06
  .word 0x2402044c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000506
  .word 0xc7a00168
  .word 0x46140002
  .word 0xe7a00168
  .word 0xc7a0016c
  .word 0x46140002
  .word 0xe7a0016c
  .word 0xc7a00170
  .word 0x46140002
  .word 0xe7a00170
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc66000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00168
  .word 0xe7a00130
  .word 0xc7a00170
  .word 0xe7a00134
  .word 0x27a40130
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a10134
  .word 0xc7a00188
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x461408dc
  .word 0xe7a30188
  .word 0xc7a10130
  .word 0xc7a00190
  .word 0x46001018
  .word 0x4614085d
  .word 0xe7a10190
  .word 0xc7a00168
  .word 0x46001800
  .word 0xe7a00090
  .word 0xc7b5018c
  .word 0xc7a0016c
  .word 0x4600a800
  .word 0xe7a00094
  .word 0xc7a00170
  .word 0x46000800
  .word 0xe7a00098
  .word 0xdfa20148
  .word 0xc7a00150
  .word 0xffa20120
  .word 0xe7a00128
  .word 0xe7b50124
  .word 0xc7a10120
  .word 0xc7a00138
  .word 0x46000801
  .word 0xe7a00168
  .word 0xc7a0013c
  .word 0x4600a801
  .word 0xe7a0016c
  .word 0xc7b40128
  .word 0xc7a00140
  .word 0x4600a001
  .word 0xe7a00170
  .word 0x27a40168
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc66000b8
  .word 0x46000b02
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0xc7a1018c
  .word 0x00000000
  .word 0x46000803
  .word 0x4600b040
  .word 0xc7a00168
  .word 0x460100c2
  .word 0xe7a30168
  .word 0xc7a0016c
  .word 0x46010082
  .word 0xe7a2016c
  .word 0xc7a00170
  .word 0x46010042
  .word 0xe7a10170
  .word 0xc7a00120
  .word 0x46030000
  .word 0xe7a00158
  .word 0x4602a800
  .word 0xe7a0015c
  .word 0x4601a000
  .word 0xe7a00160
  .word 0xc781811c
  .word 0xc7a0019c
  .word 0x46000802
  .word 0xe7a0015c
  .word 0x27a400b8
  .word 0x27a50158
  .word 0x27a60138
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40158
  .word 0x27a50138
  .word 0x0c0b479c
  .word 0x00000000
  .word 0x46000506
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc66000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0xc78180c0
  .word 0x46170842
  .word 0x46000d43
  .word 0x27a40168
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700b8
  .word 0x0c12f878
  .word 0x00000000
  .word 0x4615a036
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600ad06
  .word 0x2402044c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x4600a034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000506
  .word 0xc7a00168
  .word 0x46140002
  .word 0xe7a00168
  .word 0xc7a0016c
  .word 0x46140002
  .word 0xe7a0016c
  .word 0xc7a00170
  .word 0x46140002
  .word 0xe7a00170
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc66000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600a042
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00168
  .word 0xe7a00130
  .word 0xc7a00170
  .word 0xe7a00134
  .word 0x27a40130
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a10134
  .word 0xc7a00188
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614081c
  .word 0xe7a00188
  .word 0xc7a10130
  .word 0xc7a00190
  .word 0x46001018
  .word 0x4614081d
  .word 0xe7a00190
  .word 0xc7a10138
  .word 0xc7a00168
  .word 0x46000800
  .word 0xe7a000ac
  .word 0xc7a1013c
  .word 0xc7a0016c
  .word 0x46000800
  .word 0xe7a000b0
  .word 0xc7a10140
  .word 0xc7a00170
  .word 0x46000800
  .word 0xe7a000b4
  .word 0x96620106
  .word 0x1440006a
  .word 0x00000000
  .word 0x27a4009c
  .word 0x27a500b8
  .word 0x27a60060
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0xc7818120
  .word 0xc7808124
  .word 0x8fa20084
  .word 0x14400028
  .word 0x00000000
  .word 0xc7ac0080
  .word 0x460c0902
  .word 0x460420c2
  .word 0xc78b8114
  .word 0xc78a8048
  .word 0x44804800
  .word 0x00000000
  .word 0x460a4818
  .word 0x4603585c
  .word 0xc7888118
  .word 0x46084818
  .word 0x4601185c
  .word 0xc7878050
  .word 0x46074818
  .word 0x4601185c
  .word 0xc7868054
  .word 0x46064818
  .word 0x4601185c
  .word 0xc7858058
  .word 0x46054818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46044818
  .word 0x4602085c
  .word 0x460c0102
  .word 0x460420c2
  .word 0x460a4818
  .word 0x4603581c
  .word 0x46084818
  .word 0x4600181c
  .word 0x46074818
  .word 0x4600181c
  .word 0x46064818
  .word 0x4600181c
  .word 0x46054818
  .word 0x4600189c
  .word 0x46041802
  .word 0x46044818
  .word 0x4602001c
  .word 0xc7a20060
  .word 0x46011182
  .word 0xe7a600f8
  .word 0xc7a20064
  .word 0x46011142
  .word 0xe7a500fc
  .word 0xc7a20068
  .word 0x46011102
  .word 0xe7a40100
  .word 0xc7a20070
  .word 0x44801800
  .word 0x00000000
  .word 0x46061818
  .word 0x4600109c
  .word 0xe7a200f8
  .word 0xc7a20074
  .word 0x46051818
  .word 0x4600109c
  .word 0xe7a200fc
  .word 0xc7a20078
  .word 0x46041818
  .word 0x4600109c
  .word 0xe7a20100
  .word 0xc7a3006c
  .word 0xc7a2007c
  .word 0x4600101a
  .word 0x4601181c
  .word 0xe7a00104
  .word 0xc7a00090
  .word 0xc7818120
  .word 0x46010182
  .word 0xe7a60090
  .word 0xc7a00094
  .word 0x46010142
  .word 0xe7a50094
  .word 0xc7a00098
  .word 0x46010102
  .word 0xe7a40098
  .word 0xc7a000ac
  .word 0xc7818124
  .word 0x460100c2
  .word 0xe7a300ac
  .word 0xc7a000b0
  .word 0x46010082
  .word 0xe7a200b0
  .word 0xc7a000b4
  .word 0x46010042
  .word 0xe7a100b4
  .word 0x46033000
  .word 0xe7a000ec
  .word 0x46022800
  .word 0xe7a000f0
  .word 0x46012000
  .word 0xe7a000f4
  .word 0x10000005
  .word 0x00000000
  .word 0x27a400ec
  .word 0x27a50090
  .word 0x0c0a913c
  .word 0x00000000
  .word 0x12400007
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a500ec
  .word 0x0c0a885c
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a500d0
  .word 0x27a600ec
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c023f40
  .word 0x44826000
  .word 0x0260202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset
#pragma opt_lifetimes reset

extern u16 FUN_002bff60(int action, int target, u16 commandId, u32 param_4);
extern u16 FUN_002c09f0(int target);

// FUN_002AF7F0

void func_002af7f0(BtlCamera* camera)
{
  int iVar1;
  u16 id;
  undefined2 uVar2;

  iVar1 = *(int *)((u8 *)camera + 0xe0);
  id = *(u16 *)(iVar1 + 0x6e);
  uVar2 = FUN_002bff60(iVar1,0,id,0);
  *(undefined2 *)((u8 *)camera + 0x106) = uVar2;
  uVar2 = FUN_002c09f0(iVar1 + 0x88);
  *(undefined2 *)((u8 *)camera + 0x104) = uVar2;
  *(undefined4 *)((u8 *)camera + 0x100) = 0;
  return;
}

// FUN_002AF850

void func_002af850(BtlCamera* camera)
{
  int iVar2;
  int iVar3;
  int a1;

  iVar3 = FUN_002c0880(*(int *)((u8 *)camera + 0xe0) + 0x88);
  if (iVar3 == 0) {
    goto no_update;
  }
  iVar2 = *(int *)((int)camera + 0x100);
  if (iVar2 == iVar3) {
    goto no_update;
  }
  if (iVar2 == 0) {
    goto update;
  }
  if (*(u16 *)((u8 *)camera + 0x106) == 0) {
    goto update;
  }

no_update:
  return;

update:
  if (iVar2 == 0) {
    switch (*(u16 *)(iGpffffb6fc + 0x104)) {
    case 0x1c:
    case 0x22:
    case 2:
    case 0x23:
      a1 = 0;
      break;
    default:
      a1 = 1;
      break;
    }
  }
  else {
    a1 = 0;
  }
  *(int *)((u8 *)camera + 0x100) = iVar3;
  switch (*(u16 *)((u8 *)camera + 0x104)) {
  case 2:
    func_002aef80(camera, a1);
    break;
  case 1:
  default:
    func_002ae740(camera, a1);
    break;
  }
}


#pragma opt_propagation reset
#pragma opt_dead_assignments off
// FUN_002AF960

#ifndef PC_BUILD
asm void func_002af960(BtlCamera* camera)
{
  .set noreorder
  .word 0x27bdfe80
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x8c8200e0
  .word 0x8c510030
  .word 0x8c420038
  .word 0x8c500030
  .word 0xac820118
  .word 0x27a40050
  .word 0x2645009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0xc62000dc
  .word 0xe7a00108
  .word 0xc6210084
  .word 0xc620002c
  .word 0x46000802
  .word 0xe7a0010c
  .word 0xc62000e4
  .word 0xe7a00110
  .word 0x0200202d
  .word 0x0220282d
  .word 0x27a600f8
  .word 0x0c0a00b4
  .word 0x00000000
  .word 0xc626002c
  .word 0xc620008c
  .word 0x46060042
  .word 0xc7858094
  .word 0xc7a0010c
  .word 0x44801800
  .word 0x00000000
  .word 0x46001818
  .word 0x4601291c
  .word 0xc602002c
  .word 0xc600008c
  .word 0x46020042
  .word 0xc7a000fc
  .word 0x46001818
  .word 0x4601281c
  .word 0x46002580
  .word 0xc62100e8
  .word 0xc6200090
  .word 0x46011818
  .word 0x4606001e
  .word 0xc6000090
  .word 0x4602051c
  .word 0xafa000fc
  .word 0xafa0010c
  .word 0xc62100dc
  .word 0xc7a000f8
  .word 0x46000801
  .word 0xe7a00148
  .word 0xc62000e0
  .word 0x46030001
  .word 0xe7a0014c
  .word 0xc62100e4
  .word 0xc7a00100
  .word 0x46000801
  .word 0xe7a00150
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023e80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
  .word 0xc7a00148
  .word 0x460100c2
  .word 0xe7a30128
  .word 0xc7a0014c
  .word 0x46010082
  .word 0xe7a2012c
  .word 0xc7a00150
  .word 0x46010042
  .word 0xe7a10130
  .word 0xc7a000f8
  .word 0x46001800
  .word 0xe7a00128
  .word 0xc7a000fc
  .word 0x46001000
  .word 0xe7a0012c
  .word 0xc7a00100
  .word 0x46000800
  .word 0xe7a00130
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46160d42
  .word 0xe7b5012c
  .word 0x27a50158
  .word 0xdfa20050
  .word 0xc7a00058
  .word 0xffa20158
  .word 0xe7a00160
  .word 0xe7b6015c
  .word 0xc62000e8
  .word 0x46000802
  .word 0xe640010c
  .word 0x27a60128
  .word 0xc7a20128
  .word 0xc7a1012c
  .word 0xc7a00130
  .word 0xe6420100
  .word 0xe6410104
  .word 0xe6400108
  .word 0x27a40078
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc6220090
  .word 0xc621002c
  .word 0x44800000
  .word 0x00000000
  .word 0x46140018
  .word 0x4601101e
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000d9c
  .word 0x27a4005c
  .word 0x27a50078
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0xc78180f0
  .word 0x46010036
  .word 0x45010089
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000d03
  .word 0x27a4005c
  .word 0x27a50078
  .word 0x27a60090
  .word 0x0c12f8c4
  .word 0x00000000
  .word 0x44805800
  .word 0x00000000
  .word 0x460ba036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a3005c
  .word 0xc7a20060
  .word 0xc7a10064
  .word 0xc7a00068
  .word 0xe7a300e0
  .word 0xe7a200e4
  .word 0xe7a100e8
  .word 0xe7a000ec
  .word 0x10000056
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a30078
  .word 0xc7a2007c
  .word 0xc7a10080
  .word 0xc7a00084
  .word 0xe7a300e0
  .word 0xe7a200e4
  .word 0xe7a100e8
  .word 0xe7a000ec
  .word 0x10000046
  .word 0x00000000
  .word 0x46140001
  .word 0x8fa200b4
  .word 0x14400026
  .word 0x00000000
  .word 0xc7aa00b0
  .word 0x460a0102
  .word 0x460420c2
  .word 0xc78980ec
  .word 0xc7888048
  .word 0x46085818
  .word 0x4603481c
  .word 0xc787804c
  .word 0x46075818
  .word 0x4600181c
  .word 0xc7868050
  .word 0x46065818
  .word 0x4600181c
  .word 0xc7858054
  .word 0x46055818
  .word 0x4600181c
  .word 0xc7828058
  .word 0x46025818
  .word 0x4600185c
  .word 0x46041802
  .word 0x46045818
  .word 0x4601001c
  .word 0x460aa102
  .word 0x460420c2
  .word 0x46085818
  .word 0x4603485c
  .word 0x46075818
  .word 0x4601185c
  .word 0x46065818
  .word 0x4601185c
  .word 0x46055818
  .word 0x4601185c
  .word 0x46025818
  .word 0x4601189c
  .word 0x46041842
  .word 0x46045818
  .word 0x46020d1c
  .word 0xc7a10090
  .word 0x46000942
  .word 0xe7a500e0
  .word 0xc7a10094
  .word 0x46000902
  .word 0xe7a400e4
  .word 0xc7a10098
  .word 0x460008c2
  .word 0xe7a300e8
  .word 0xc7a100a0
  .word 0x44801000
  .word 0x00000000
  .word 0x46051018
  .word 0x4614085c
  .word 0xe7a100e0
  .word 0xc7a100a4
  .word 0x46041018
  .word 0x4614085c
  .word 0xe7a100e4
  .word 0xc7a100a8
  .word 0x46031018
  .word 0x4614085c
  .word 0xe7a100e8
  .word 0xc7a2009c
  .word 0xc7a100ac
  .word 0x4614081a
  .word 0x4600101c
  .word 0xe7a000ec
  .word 0x27a40158
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700e0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a10158
  .word 0xc7a00128
  .word 0x46000800
  .word 0xe7a00158
  .word 0xc7a1015c
  .word 0xc7a0012c
  .word 0x46000800
  .word 0xe7a0015c
  .word 0xc7a10160
  .word 0xc7a00130
  .word 0x46000800
  .word 0xe7a00160
  .word 0x27a40078
  .word 0x27a50158
  .word 0x27a60128
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0xc78180f4
  .word 0x46010034
  .word 0x45000008
  .word 0x00000000
  .word 0x27a40078
  .word 0x3c050069
  .word 0x24a57880
  .word 0xc78c80f8
  .word 0x24060002
  .word 0x0c12f778
  .word 0x00000000
  .word 0x3c0243e1
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000586
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46160842
  .word 0x46000dc3
  .word 0x27a40158
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70078
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a0015c
  .word 0xe7a0014c
  .word 0x27a40148
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a40148
  .word 0xc7a50150
  .word 0xc7a30160
  .word 0xc7a20158
  .word 0xc7a1015c
  .word 0xc7a0014c
  .word 0x4600081a
  .word 0x44800000
  .word 0x4604101e
  .word 0x46051d1c
  .word 0x4600a034
  .word 0x4501000a
  .word 0x00000000
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000d82
  .word 0xdfa20108
  .word 0xc7a00110
  .word 0xffa20118
  .word 0xe7a00120
  .word 0x10000008
  .word 0x00000000
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000d82
  .word 0xdfa200f8
  .word 0xc7a00100
  .word 0xffa20118
  .word 0xe7a00120
  .word 0xc7a000f8
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x461628dc
  .word 0xe7a30168
  .word 0xc7a2012c
  .word 0xe7a2016c
  .word 0xc7a00100
  .word 0x46000818
  .word 0x4616205d
  .word 0xe7a10170
  .word 0xc7a00128
  .word 0x46001801
  .word 0xe7a00138
  .word 0x46021001
  .word 0xe7a0013c
  .word 0xc7a00130
  .word 0x46000801
  .word 0xe7a00140
  .word 0x27a40138
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a60140
  .word 0xc7a50150
  .word 0xc7a40138
  .word 0xc7a20148
  .word 0xc7a1013c
  .word 0xc7a0014c
  .word 0x4600081a
  .word 0x44801800
  .word 0x00000000
  .word 0x4602201e
  .word 0x4605309c
  .word 0x4600a045
  .word 0x46001005
  .word 0x46000836
  .word 0x45010061
  .word 0x00000000
  .word 0x46021832
  .word 0x4501005e
  .word 0x00000000
  .word 0x46141832
  .word 0x4501005b
  .word 0x00000000
  .word 0xc7a10128
  .word 0xc7a00118
  .word 0x46000801
  .word 0xe7a00178
  .word 0xc7b40120
  .word 0xc7a00130
  .word 0x46140001
  .word 0xe7a0017c
  .word 0x27a40178
  .word 0x0c131abc
  .word 0x00000000
  .word 0x4600a802
  .word 0x00000000
  .word 0x46170043
  .word 0xc7a0012c
  .word 0x46010000
  .word 0xe7a0016c
  .word 0xc7a20150
  .word 0xc7a00118
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4616101c
  .word 0xe7a00168
  .word 0xc7a00148
  .word 0x46140818
  .word 0x4616001d
  .word 0xe7a00170
  .word 0x27a400c0
  .word 0x27a50168
  .word 0x27a60128
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a4005c
  .word 0x27a500c0
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x46000546
  .word 0xc7a20150
  .word 0xc7a00118
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4616101d
  .word 0xe7a00168
  .word 0xc7a00148
  .word 0x46140818
  .word 0x4616001c
  .word 0xe7a00170
  .word 0x27a400d0
  .word 0x27a50168
  .word 0x27a60128
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a4005c
  .word 0x27a500d0
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x4600a834
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a300c0
  .word 0xc7a200c4
  .word 0xc7a100c8
  .word 0xc7a000cc
  .word 0xe7a30078
  .word 0xe7a2007c
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a300d0
  .word 0xc7a200d4
  .word 0xc7a100d8
  .word 0xc7a000dc
  .word 0xe7a30078
  .word 0xe7a2007c
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0x27a40158
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70078
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00158
  .word 0x46170002
  .word 0xe7a00158
  .word 0xc7a0015c
  .word 0x46170002
  .word 0xe7a0015c
  .word 0xc7a00160
  .word 0x46170002
  .word 0xe7a00160
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600b842
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00158
  .word 0xe7a00178
  .word 0xc7a00160
  .word 0xe7a0017c
  .word 0x27a40178
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1017c
  .word 0xc7a00128
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x461408dc
  .word 0xe7a30128
  .word 0xc7a10178
  .word 0xc7a00130
  .word 0x46001018
  .word 0x4614089d
  .word 0xe7a20130
  .word 0xc7a00158
  .word 0x46001800
  .word 0xe7a0006c
  .word 0xc7a1012c
  .word 0xc7a0015c
  .word 0x46000800
  .word 0xe7a00070
  .word 0xc7a00160
  .word 0x46001000
  .word 0xe7a00074
  .word 0x0240202d
  .word 0x27a50050
  .word 0x27a6006c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0240202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0180
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_dead_assignments reset
#pragma opt_dead_assignments off
#pragma opt_lifetimes on
// FUN_002B0210
void FUN_002b0210(int param_1)
{
  int iVar1;
  
  iVar1 = param_1;
  param_1 = *(int *)(param_1 + 0xe0);
  if ((((param_1 != 0) && (*(u16 *)(param_1 + 0x6a) == 1)) &&
      (*(int *)(iVar1 + 0x118) == *(int *)(param_1 + 0x38))) &&
     ((*(u16 *)(param_1 + 0x1a) & 1) != 0)) {
    FUN_002a3e80_call(*(float *)(iVar1 + 0x10c), (u8 *)(uintptr_t)param_1,
                 (u8 *)(uintptr_t)(iVar1 + 0x9c),
                 (u8 *)(uintptr_t)(iVar1 + 0x100), 0x33);
  }
  return;
}

typedef struct BtlCameraPoseLocal {
  RwV3d pos;
  RtQuat rot;
} BtlCameraPoseLocal;
#pragma alias FUN_002a4470_b280 FUN_002a4470
extern void FUN_002a4470_b280(BtlCameraPoseLocal* dst,
                              const BtlCameraPoseLocal* src);
#pragma alias FUN_0027ffb0_b280 FUN_0027ffb0
extern void FUN_0027ffb0_b280(BtlUnit* unit, RwV3d* dst);
#pragma alias FUN_002a4690_b280 FUN_002a4690
extern void FUN_002a4690_b280(RtQuat* out, const RwV3d* first,
                              const RwV3d* second, const RwV3d* config);
#pragma alias FUN_004be1e0_b280 FUN_004be1e0
extern void FUN_004be1e0_b280(RwV3d* out, const RwV3d* basis,
                              s32 count, const RtQuat* source);
#pragma alias FUN_004c69f0_b280 FUN_004c69f0
extern f32 FUN_004c69f0_b280(RwV3d* out, const RwV3d* in);
#pragma alias FUN_004c6b20_b280 FUN_004c6b20
extern void FUN_004c6b20_b280(f32* out, const f32* in);
#pragma alias FUN_002d1fd0_b280 FUN_002d1fd0
extern f32 FUN_002d1fd0_b280(f32* from, f32* to, f32* point, f32* projected);
#pragma alias FUN_002d1f30_b280 FUN_002d1f30
extern f32 FUN_002d1f30_b280(RtQuat* first, RtQuat* second);
#pragma alias FUN_002a2170_b280 FUN_002a2170
extern void FUN_002a2170_b280(BtlCamera* camera, RwV3d* out);
#pragma alias FUN_002a2290_b280 FUN_002a2290
extern void FUN_002a2290_b280(BtlCamera* camera, RwV3d* start,
                              RwV3d* end, s32 mode);
#pragma alias FUN_002a3110_b280 FUN_002a3110
extern void FUN_002a3110_b280(BtlCamera* camera, f32 step);
#pragma alias FUN_002a3e80_b280 FUN_002a3e80
extern void FUN_002a3e80_b280(f32 distance, u8* scene, u8* unit,
                              u8* center, u32 mode);
#pragma alias FUN_002d5bf0_b280 FUN_002d5bf0
extern s32 FUN_002d5bf0_b280(BtlUnit* unit);
#pragma alias FUN_003093a0_b280 FUN_003093a0
extern s32 FUN_003093a0_b280(u32 data);
#pragma alias FUN_0052e930_b280 FUN_0052e930
extern f32 FUN_0052e930_b280(f32 angle);

#pragma opt_lifetimes reset
#pragma opt_dead_assignments reset
/* W367 measured: opt_propagation off nd2626 -> 2579, object 3264/3488; baseline object 3364/3488. */
#pragma opt_propagation off
// FUN_002b0280

#ifndef PC_BUILD
asm void FUN_002b0280(BtlCamera* param_2,long param_3,long param_4,float param_1)
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0080
  .word 0x7fb40070
  .word 0x7fb30060
  .word 0x7fb20050
  .word 0x7fb10040
  .word 0x7fb00030
  .word 0xe7bc0020
  .word 0xe7bb001c
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x46006686
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x27a40090
  .word 0x2605009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x8e0200e0
  .word 0x8c540030
  .word 0x8c420038
  .word 0x8c530030
  .word 0x0280202d
  .word 0x27a50160
  .word 0x0c09ffec
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a50150
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc7a30154
  .word 0xc661008c
  .word 0xc660002c
  .word 0x46000882
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x46020d1c
  .word 0x3c0242fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46001834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00154
  .word 0xc6810090
  .word 0xc680002c
  .word 0x46000e02
  .word 0xc6610090
  .word 0xc660002c
  .word 0x46000dc2
  .word 0xc7a10160
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00120
  .word 0xc7a10164
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a00124
  .word 0xc7a10168
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a00128
  .word 0x27a40120
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000546
  .word 0xc7818098
  .word 0x46000842
  .word 0xc7a00120
  .word 0x46010082
  .word 0xe7a20130
  .word 0xc7a00124
  .word 0x460100c2
  .word 0xe7a30134
  .word 0xc7a00128
  .word 0x46010042
  .word 0xe7a10138
  .word 0xc7a00150
  .word 0x46001080
  .word 0xe7a20130
  .word 0xc7a00154
  .word 0x46001800
  .word 0xe7a00134
  .word 0xc7a00158
  .word 0x46000840
  .word 0xe7a10138
  .word 0xc600009c
  .word 0x46020001
  .word 0xe7a000d8
  .word 0xc60000a4
  .word 0x46010001
  .word 0xe7a000dc
  .word 0x27a400d8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a10120
  .word 0xe7a100d0
  .word 0xc7a00128
  .word 0xe7a000d4
  .word 0xc7a300d8
  .word 0xc7a200dc
  .word 0x4602001a
  .word 0x44801000
  .word 0x00000000
  .word 0x46030d9c
  .word 0x4602b034
  .word 0x45000004
  .word 0x00000000
  .word 0x24020001
  .word 0x162200e1
  .word 0x00000000
  .word 0x164000df
  .word 0x00000000
  .word 0x0280882d
  .word 0x0260902d
  .word 0xdfa20160
  .word 0xc7a00168
  .word 0xffa20140
  .word 0xe7a00148
  .word 0xc6810090
  .word 0xc680002c
  .word 0x46000842
  .word 0x3c024020
  .word 0x44820000
  .word 0x00000000
  .word 0x460106c2
  .word 0x928200a2
  .word 0x1440001a
  .word 0x00000000
  .word 0x968300a4
  .word 0x24020003
  .word 0x10620006
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b56fc
  .word 0x00000000
  .word 0x10400011
  .word 0x00000000
  .word 0x8e840a2c
  .word 0x0c0c24e8
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020002
  .word 0x1462000a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0a8cbc
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x3c0242aa
  .word 0x44822800
  .word 0x10000002
  .word 0x00000000
  .word 0x44802800
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4500000d
  .word 0x00000000
  .word 0xc661008c
  .word 0xc660002c
  .word 0x460008c2
  .word 0xc782808c
  .word 0xc7a10134
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00134
  .word 0x1000000b
  .word 0x00000000
  .word 0xc661008c
  .word 0xc660002c
  .word 0x460008c2
  .word 0xc782806c
  .word 0xc7a10134
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a00134
  .word 0xc7a40128
  .word 0xe7a400d0
  .word 0xc7a30120
  .word 0x46001887
  .word 0xe7a200d4
  .word 0xc7a100d8
  .word 0xc7a000dc
  .word 0x4600101a
  .word 0x44801000
  .word 0x4601265c
  .word 0xc7b40144
  .word 0x46142f00
  .word 0xc681008c
  .word 0xc680002c
  .word 0x46000842
  .word 0x3c023f00
  .word 0x44820000
  .word 0x461c1018
  .word 0x4601001c
  .word 0xe7a00114
  .word 0x4602c834
  .word 0x4501000b
  .word 0x00000000
  .word 0xc7a00140
  .word 0x46001018
  .word 0x461b201c
  .word 0xe7a00110
  .word 0xc7b50148
  .word 0x46151018
  .word 0x461b181d
  .word 0xe7a00118
  .word 0x1000000d
  .word 0x00000000
  .word 0xc7a00140
  .word 0x46001018
  .word 0x461b201d
  .word 0xe7a00110
  .word 0xc7b50148
  .word 0x46151018
  .word 0x461b181c
  .word 0xe7a00118
  .word 0xdfa20120
  .word 0xc7a00128
  .word 0xffa20100
  .word 0xe7a00108
  .word 0x27a400b8
  .word 0x27a50110
  .word 0x27a60130
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40120
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700b8
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00130
  .word 0xe7a000e0
  .word 0xc7a00138
  .word 0xe7a000e4
  .word 0xc7a00110
  .word 0xe7a000e8
  .word 0xc7a00118
  .word 0xe7a000ec
  .word 0xc7a00140
  .word 0xe7a000f8
  .word 0xe7b500fc
  .word 0x27a400e0
  .word 0x27a500e8
  .word 0x27a600f8
  .word 0x27a700f0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6810090
  .word 0xc684002c
  .word 0x460408c2
  .word 0x3c024000
  .word 0x44820800
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x46030edc
  .word 0xc7a000f0
  .word 0xe7a00110
  .word 0xc680008c
  .word 0x46040042
  .word 0x3c023e80
  .word 0x44820000
  .word 0x461c1018
  .word 0x4601001c
  .word 0xe7a00114
  .word 0xc7a000f4
  .word 0xe7a00118
  .word 0xc79c8070
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc60000b8
  .word 0x46000802
  .word 0x4600e302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600d843
  .word 0xc7a00120
  .word 0x46010002
  .word 0xe7a00120
  .word 0xc7a00124
  .word 0x46010002
  .word 0xe7a00124
  .word 0xc7a00128
  .word 0x46010002
  .word 0xe7a00128
  .word 0x44801800
  .word 0x00000000
  .word 0x4603c834
  .word 0x45000012
  .word 0x00000000
  .word 0xc6810090
  .word 0xc680002c
  .word 0x46000842
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010082
  .word 0xc7a10108
  .word 0xc7a00110
  .word 0x46001818
  .word 0x4602081c
  .word 0xe7a00110
  .word 0xc7a10100
  .word 0xc7a00118
  .word 0x46001818
  .word 0x4602081d
  .word 0xe7a00118
  .word 0xc7a10110
  .word 0xc7a00120
  .word 0x46000800
  .word 0xe7a000ac
  .word 0xc7a10114
  .word 0xc7a00124
  .word 0x46000800
  .word 0xe7a000b0
  .word 0xc7a10118
  .word 0xc7a00128
  .word 0x46000800
  .word 0xe7a000b4
  .word 0x100000b8
  .word 0x00000000
  .word 0x0260882d
  .word 0x0280902d
  .word 0x3c023f00
  .word 0x44821000
  .word 0x00000000
  .word 0x461510c2
  .word 0xc7a70120
  .word 0x46033982
  .word 0xe7a60130
  .word 0xc7a20124
  .word 0x46031102
  .word 0xe7a40134
  .word 0xc7a50128
  .word 0x460328c2
  .word 0xe7a30138
  .word 0xc7a20150
  .word 0x46023080
  .word 0xe7a20130
  .word 0xc7a20154
  .word 0x46022080
  .word 0xe7a20134
  .word 0xc7a20158
  .word 0x46021880
  .word 0xe7a20138
  .word 0xdfa20150
  .word 0xc7a20158
  .word 0xffa20140
  .word 0xe7a20148
  .word 0xc6630090
  .word 0xc662002c
  .word 0x460218c2
  .word 0x3c023fa0
  .word 0x44821000
  .word 0x00000000
  .word 0x46031182
  .word 0xe7a500d0
  .word 0x46003907
  .word 0xe7a400d4
  .word 0xc7a300d8
  .word 0xc7a200dc
  .word 0x4602201a
  .word 0x46032e5c
  .word 0xc7b40144
  .word 0xe7b40114
  .word 0xc7a20164
  .word 0x4602a034
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a20114
  .word 0x44801800
  .word 0x00000000
  .word 0x4603c834
  .word 0x4501000f
  .word 0x00000000
  .word 0xc7a20140
  .word 0x46021818
  .word 0x4606001c
  .word 0xe7a00110
  .word 0xc7b50148
  .word 0x46151818
  .word 0x4606081d
  .word 0xe7a00118
  .word 0xdfa20120
  .word 0xc7a00128
  .word 0xffa20100
  .word 0xe7a00108
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a20140
  .word 0x46021818
  .word 0x4606001d
  .word 0xe7a00110
  .word 0xc7b50148
  .word 0x46151818
  .word 0x4606081c
  .word 0xe7a00118
  .word 0x27a400b8
  .word 0x27a50110
  .word 0x27a60130
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40120
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700b8
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00130
  .word 0xe7a000e0
  .word 0xc7a00138
  .word 0xe7a000e4
  .word 0xc7a00110
  .word 0xe7a000e8
  .word 0xc7a00118
  .word 0xe7a000ec
  .word 0xc7a00140
  .word 0xe7a000f8
  .word 0xe7b500fc
  .word 0x27a400e0
  .word 0x27a500e8
  .word 0x27a600f8
  .word 0x27a700f0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6620090
  .word 0xc661002c
  .word 0x460110c2
  .word 0x3c023fc0
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x460316dc
  .word 0xc7a000f0
  .word 0xe7a00110
  .word 0xe7b40114
  .word 0xc7a000f4
  .word 0xe7a00118
  .word 0xc79c8070
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc60000b8
  .word 0x46000802
  .word 0x4600e302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600d843
  .word 0x24020226
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000046
  .word 0xc7a00120
  .word 0x46010002
  .word 0xe7a00120
  .word 0xc7a00124
  .word 0x46010002
  .word 0xe7a00124
  .word 0xc7a00128
  .word 0x46010002
  .word 0xe7a00128
  .word 0x44801800
  .word 0x00000000
  .word 0x4603c834
  .word 0x45010012
  .word 0x00000000
  .word 0xc6610090
  .word 0xc660002c
  .word 0x46000842
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010082
  .word 0xc7a10108
  .word 0xc7a00110
  .word 0x46001818
  .word 0x4602081d
  .word 0xe7a00110
  .word 0xc7a10100
  .word 0xc7a00118
  .word 0x46001818
  .word 0x4602081c
  .word 0xe7a00118
  .word 0xc7a10110
  .word 0xc7a00120
  .word 0x46000800
  .word 0xe7a000ac
  .word 0xc7a10114
  .word 0xc7a00124
  .word 0x46000800
  .word 0xe7a000b0
  .word 0xc7a10118
  .word 0xc7a00128
  .word 0x46000800
  .word 0xe7a000b4
  .word 0x27a4009c
  .word 0x27a500b8
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x44800800
  .word 0x00000000
  .word 0x4601d036
  .word 0x45010006
  .word 0x00000000
  .word 0xc7818104
  .word 0x461a0e82
  .word 0x461a0036
  .word 0x450100f1
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x4600b034
  .word 0x45000044
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500ac
  .word 0x0c0a885c
  .word 0x00000000
  .word 0x27a40120
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700b8
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c024348
  .word 0x44820800
  .word 0xc7a00120
  .word 0x460100c2
  .word 0xe7a30120
  .word 0xc7a00124
  .word 0x46010082
  .word 0xe7a20124
  .word 0xc7a00128
  .word 0x46010042
  .word 0xe7a10128
  .word 0xc7a000ac
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a000b0
  .word 0x46020000
  .word 0xe7a00094
  .word 0xc7a000b4
  .word 0x46010000
  .word 0xe7a00098
  .word 0xc7a300b8
  .word 0xc7a200bc
  .word 0xc7a100c0
  .word 0xc7a000c4
  .word 0xe7a3009c
  .word 0xe7a200a0
  .word 0xe7a100a4
  .word 0xe7a000a8
  .word 0xc7a10094
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00094
  .word 0xc7a100b0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000b0
  .word 0x0200202d
  .word 0x27a50090
  .word 0x27a600ac
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0200202d
  .word 0xc78c8100
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x1000009a
  .word 0x00000000
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000d82
  .word 0xc7a10160
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00120
  .word 0xc7a10164
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a00124
  .word 0xc7a10168
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a00128
  .word 0x27a40120
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc621008c
  .word 0xc620002c
  .word 0x46000842
  .word 0xc78080c4
  .word 0x44801000
  .word 0x00000000
  .word 0x46141018
  .word 0x4601001c
  .word 0xe7a00114
  .word 0x4602c834
  .word 0x4501000c
  .word 0x00000000
  .word 0xc7a10128
  .word 0xc7a00140
  .word 0x46001018
  .word 0x4616081d
  .word 0xe7a00110
  .word 0xc7a00120
  .word 0x46151018
  .word 0x4616001c
  .word 0xe7a00118
  .word 0x1000000a
  .word 0x00000000
  .word 0xc7a10128
  .word 0xc7a00140
  .word 0x46001018
  .word 0x4616081c
  .word 0xe7a00110
  .word 0xc7a00120
  .word 0x46151018
  .word 0x4616001d
  .word 0xe7a00118
  .word 0x27a4009c
  .word 0x27a50110
  .word 0x27a60130
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40120
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a7009c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00130
  .word 0xe7a000e0
  .word 0xc7a00138
  .word 0xe7a000e4
  .word 0xc7a00110
  .word 0xe7a000e8
  .word 0xc7a00118
  .word 0xe7a000ec
  .word 0xc7a00140
  .word 0xe7a000f8
  .word 0xe7b500fc
  .word 0x27a400e0
  .word 0x27a500e8
  .word 0x27a600f8
  .word 0x27a700f0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc7a000f0
  .word 0xe7a00110
  .word 0xc621008c
  .word 0xc620002c
  .word 0x46000882
  .word 0xc78180c4
  .word 0x44800000
  .word 0x00000000
  .word 0x46140018
  .word 0x4602081c
  .word 0xe7a00114
  .word 0xc7a000f4
  .word 0xe7a00118
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc60000b8
  .word 0x46000802
  .word 0x4600e302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0xc6220090
  .word 0xc621002c
  .word 0x46011082
  .word 0x3c024080
  .word 0x44820800
  .word 0x00000000
  .word 0x46020842
  .word 0x46000883
  .word 0xc7a00120
  .word 0x460200c2
  .word 0xe7a30120
  .word 0xc7a00124
  .word 0x46020042
  .word 0xe7a10124
  .word 0xc7a00128
  .word 0x46020082
  .word 0xe7a20128
  .word 0xc7a00110
  .word 0x46030000
  .word 0xe7a00090
  .word 0xc7a00114
  .word 0x46010040
  .word 0xe7a10094
  .word 0xc7a00118
  .word 0x46020000
  .word 0xe7a00098
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00094
  .word 0xc7a100b0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000b0
  .word 0x0200202d
  .word 0x27a50090
  .word 0x27a600ac
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0200202d
  .word 0xc78c8100
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x4617c036
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600be06
  .word 0x8e0400e0
  .word 0x26450004
  .word 0x27a600ac
  .word 0x4600c306
  .word 0x24070003
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x10000048
  .word 0x00000000
  .word 0x4617c036
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x4600be06
  .word 0x8e0400e0
  .word 0x26450004
  .word 0x27a600ac
  .word 0x4600c306
  .word 0x24070033
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0xc7a10094
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00094
  .word 0xc7a100b0
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000b0
  .word 0x27a4009c
  .word 0x27a500b8
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x4482a000
  .word 0x44800800
  .word 0x00000000
  .word 0x46010036
  .word 0x45010016
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600d043
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010005
  .word 0x00000000
  .word 0xc78080a4
  .word 0x46000d02
  .word 0x10000002
  .word 0x00000000
  .word 0xc79480a4
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a036
  .word 0x45010002
  .word 0x00000000
  .word 0x46000506
  .word 0x0200202d
  .word 0x27a50090
  .word 0x27a600ac
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0200202d
  .word 0x4600a306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb40070
  .word 0x7bb30060
  .word 0x7bb20050
  .word 0x7bb10040
  .word 0x7bb00030
  .word 0xc7bc0020
  .word 0xc7bb001c
  .word 0xc7ba0018
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002b1020

void FUN_002b1020(undefined8 param_1)

{
  FUN_002b0280_legacy(50.0f,param_1,0,0);
  return;
}

// FUN_002b1050
void btlCameraNoOp(void)
{
}

#pragma opt_dead_assignments off
#pragma opt_propagation reset
// FUN_002b1060

#ifndef PC_BUILD
asm void FUN_002b1060(BtlCamera* camera, f32 param_1, f32 param_2)
{
  .set noreorder
  .word 0x27bdfe60
  .word 0xffbf0050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x460065c6
  .word 0x46006e06
  .word 0x8c8200e0
  .word 0x8c500030
  .word 0x8c420038
  .word 0x8c510030
  .word 0x27a40060
  .word 0x2645009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0xc60000dc
  .word 0xe7a00128
  .word 0xc6010084
  .word 0xc600002c
  .word 0x46000802
  .word 0xe7a0012c
  .word 0xc60000e4
  .word 0xe7a00130
  .word 0x0220202d
  .word 0x27a50118
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc606002c
  .word 0xc600008c
  .word 0x46060042
  .word 0xc7858094
  .word 0xc7a0012c
  .word 0x44801800
  .word 0x00000000
  .word 0x46001818
  .word 0x4601291c
  .word 0xc622002c
  .word 0xc620008c
  .word 0x46020042
  .word 0xc7a0011c
  .word 0x46001818
  .word 0x4601281c
  .word 0x46002500
  .word 0xc60100e8
  .word 0xc6000090
  .word 0x46011818
  .word 0x4606001e
  .word 0xc6200090
  .word 0x4602059c
  .word 0xafa0011c
  .word 0xafa0012c
  .word 0xc60100dc
  .word 0xc7a00118
  .word 0x46000801
  .word 0xe7a00168
  .word 0xc60000e0
  .word 0x46030001
  .word 0xe7a0016c
  .word 0xc60100e4
  .word 0xc7a00120
  .word 0x46000801
  .word 0xe7a00170
  .word 0x27a40168
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023e80
  .word 0x44820000
  .word 0x00000000
  .word 0x46160042
  .word 0xc7a00168
  .word 0x460100c2
  .word 0xe7a30148
  .word 0xc7a0016c
  .word 0x46010082
  .word 0xe7a2014c
  .word 0xc7a00170
  .word 0x46010042
  .word 0xe7a10150
  .word 0xc7a00118
  .word 0x46001800
  .word 0xe7a00148
  .word 0xc7a0011c
  .word 0x46001000
  .word 0xe7a0014c
  .word 0xc7a00120
  .word 0x46000800
  .word 0xe7a00150
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46140d42
  .word 0xe7b5014c
  .word 0xc60000e8
  .word 0x46000802
  .word 0xe640010c
  .word 0xc7a20148
  .word 0xc7a1014c
  .word 0xc7a00150
  .word 0xe6420100
  .word 0xe6410104
  .word 0xe6400108
  .word 0xc7a00170
  .word 0xe7a00100
  .word 0xc7a00168
  .word 0x46000007
  .word 0xe7a00104
  .word 0xc7a10060
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00108
  .word 0xc7a10068
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a0010c
  .word 0x27a40100
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x27a40108
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a10060
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00178
  .word 0xc7a10064
  .word 0xc7a0014c
  .word 0x46000801
  .word 0xe7a0017c
  .word 0xc7a10068
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00180
  .word 0xc7a30100
  .word 0xc7a20108
  .word 0xc7a10104
  .word 0xc7a0010c
  .word 0x4600081a
  .word 0x44800000
  .word 0x4602185c
  .word 0x46000834
  .word 0x4501000a
  .word 0x00000000
  .word 0x27a400a0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x4600bb06
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x4600bb07
  .word 0x27a400a0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40178
  .word 0x0080282d
  .word 0x27a600a0
  .word 0x0c131b18
  .word 0x00000000
  .word 0xc7a10178
  .word 0xc7a00148
  .word 0x46000800
  .word 0xe7a00178
  .word 0xc7a1017c
  .word 0xc7a0014c
  .word 0x46000800
  .word 0xe7a0017c
  .word 0xc7a10180
  .word 0xc7a00150
  .word 0x46000800
  .word 0xe7a00180
  .word 0x27a40088
  .word 0x27a50178
  .word 0x27a60148
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820000
  .word 0x00000000
  .word 0x4600b034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000586
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x00000000
  .word 0x46160842
  .word 0x46000dc3
  .word 0x27a40178
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70088
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a0017c
  .word 0xe7a0016c
  .word 0x27a40168
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a40168
  .word 0xc7a50170
  .word 0xc7a30180
  .word 0xc7a20178
  .word 0xc7a1017c
  .word 0xc7a0016c
  .word 0x4600081a
  .word 0x44800000
  .word 0x4604101e
  .word 0x46051d1c
  .word 0x4600a034
  .word 0x4501000a
  .word 0x00000000
  .word 0xc6010090
  .word 0xc600002c
  .word 0x46000d82
  .word 0xdfa20128
  .word 0xc7a00130
  .word 0xffa20138
  .word 0xe7a00140
  .word 0x10000008
  .word 0x00000000
  .word 0xc6210090
  .word 0xc620002c
  .word 0x46000d82
  .word 0xdfa20118
  .word 0xc7a00120
  .word 0xffa20138
  .word 0xe7a00140
  .word 0xc7a00118
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x461628dc
  .word 0xe7a30188
  .word 0xc7a2014c
  .word 0xe7a2018c
  .word 0xc7a00120
  .word 0x46000818
  .word 0x4616205d
  .word 0xe7a10190
  .word 0xc7a00148
  .word 0x46001801
  .word 0xe7a00158
  .word 0x46021001
  .word 0xe7a0015c
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00160
  .word 0x27a40158
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a60160
  .word 0xc7a50170
  .word 0xc7a40158
  .word 0xc7a20168
  .word 0xc7a1015c
  .word 0xc7a0016c
  .word 0x4600081a
  .word 0x44801800
  .word 0x00000000
  .word 0x4602201e
  .word 0x4605309c
  .word 0x4600a045
  .word 0x46001005
  .word 0x46000836
  .word 0x45010061
  .word 0x00000000
  .word 0x46021832
  .word 0x4501005e
  .word 0x00000000
  .word 0x46141832
  .word 0x4501005b
  .word 0x00000000
  .word 0xc7a10148
  .word 0xc7a00138
  .word 0x46000801
  .word 0xe7a00198
  .word 0xc7b40140
  .word 0xc7a00150
  .word 0x46140001
  .word 0xe7a0019c
  .word 0x27a40198
  .word 0x0c131abc
  .word 0x00000000
  .word 0x4600a802
  .word 0x00000000
  .word 0x46170043
  .word 0xc7a0014c
  .word 0x46010000
  .word 0xe7a0018c
  .word 0xc7a20170
  .word 0xc7a00138
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4616101c
  .word 0xe7a00188
  .word 0xc7a00168
  .word 0x46140818
  .word 0x4616001d
  .word 0xe7a00190
  .word 0x27a400e0
  .word 0x27a50188
  .word 0x27a60148
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a4006c
  .word 0x27a500e0
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x46000546
  .word 0xc7a20170
  .word 0xc7a00138
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4616101d
  .word 0xe7a00188
  .word 0xc7a00168
  .word 0x46140818
  .word 0x4616001c
  .word 0xe7a00190
  .word 0x27a400f0
  .word 0x27a50188
  .word 0x27a60148
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a4006c
  .word 0x27a500f0
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0x4600a834
  .word 0x4500000b
  .word 0x00000000
  .word 0xc7a300e0
  .word 0xc7a200e4
  .word 0xc7a100e8
  .word 0xc7a000ec
  .word 0xe7a30088
  .word 0xe7a2008c
  .word 0xe7a10090
  .word 0xe7a00094
  .word 0x10000009
  .word 0x00000000
  .word 0xc7a300f0
  .word 0xc7a200f4
  .word 0xc7a100f8
  .word 0xc7a000fc
  .word 0xe7a30088
  .word 0xe7a2008c
  .word 0xe7a10090
  .word 0xe7a00094
  .word 0x27a40178
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a70088
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00178
  .word 0x46170002
  .word 0xe7a00178
  .word 0xc7a0017c
  .word 0x46170002
  .word 0xe7a0017c
  .word 0xc7a00180
  .word 0x46170002
  .word 0xe7a00180
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc64000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x4600b842
  .word 0x3c023e60
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d02
  .word 0xc7a00178
  .word 0xe7a00198
  .word 0xc7a00180
  .word 0xe7a0019c
  .word 0x27a40198
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a1019c
  .word 0xc7a00148
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x461408dc
  .word 0xe7a30148
  .word 0xc7a10198
  .word 0xc7a00150
  .word 0x46001018
  .word 0x4614089d
  .word 0xe7a20150
  .word 0xc7a00178
  .word 0x46001800
  .word 0xe7a0007c
  .word 0xc7a1014c
  .word 0xc7a0017c
  .word 0x46000800
  .word 0xe7a00080
  .word 0xc7a00180
  .word 0x46001000
  .word 0xe7a00084
  .word 0x0240202d
  .word 0x27a50060
  .word 0x27a6007c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0240202d
  .word 0x4600c306
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_dead_assignments reset
/* W414/W421 classification: baseline verify nd3 at 1052/1056 (rate
 * 0.002852).  The +508 residual is the commutative swap
 * (ours mul.s $f1,$f20,$f0; retail mul.s $f1,$f0,$f20).  The +716
 * residual is the literal-width floor (ours addiu $s0,$zero,1; retail
 * daddiu $s0,$zero,1).  Direct spelling was byte-neutral; static-inline
 * helper probes that were not inlined measured nd805 at 1044/1056
 * (rate 0.771073), so retain the baseline source. */
/* W422 three static-inline scalar helper directions at +508 all measured nd805 at 1044/1056; reverted. */
// FUN_002b17a0

#ifndef PC_BUILD
asm void FUN_002b17a0(BtlCamera* camera, f32 param_1, f32 param_2)
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x46006606
  .word 0x46006dc6
  .word 0x8c8200e0
  .word 0x8c500030
  .word 0x8c420038
  .word 0x8c520030
  .word 0x27a40060
  .word 0x2625009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0xc6010084
  .word 0xc600002c
  .word 0x46000d02
  .word 0x0240202d
  .word 0x27a50120
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc601008c
  .word 0xc600002c
  .word 0x46000802
  .word 0xc7848094
  .word 0x44801000
  .word 0x00000000
  .word 0x46141018
  .word 0x460020dc
  .word 0xc641008c
  .word 0xc640002c
  .word 0x46000842
  .word 0xc7a00124
  .word 0x46001018
  .word 0x4601201c
  .word 0x46001d40
  .word 0xafa00124
  .word 0xc60100dc
  .word 0xc7a00120
  .word 0x46000801
  .word 0xe7a00160
  .word 0xc60000e0
  .word 0x46020001
  .word 0xe7a00164
  .word 0xc60100e4
  .word 0xc7a00128
  .word 0x46000801
  .word 0xe7a00168
  .word 0x27a40160
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0x3c023f00
  .word 0x44823000
  .word 0x00000000
  .word 0x46143042
  .word 0xc7a50160
  .word 0x46012882
  .word 0xe7a20150
  .word 0xc7a00164
  .word 0x46010102
  .word 0xe7a40154
  .word 0xc7a30168
  .word 0x46011842
  .word 0xe7a10158
  .word 0xc7a00120
  .word 0x46001080
  .word 0xe7a20150
  .word 0xc7a00124
  .word 0x46002000
  .word 0xe7a00154
  .word 0xc7a00128
  .word 0x46000840
  .word 0xe7a10158
  .word 0x46153542
  .word 0xe7b50154
  .word 0xe7a30110
  .word 0x46002807
  .word 0xe7a00114
  .word 0xc7a00060
  .word 0x46020001
  .word 0xe7a00118
  .word 0xc7a00068
  .word 0x46010001
  .word 0xe7a0011c
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x27a40118
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a30110
  .word 0xc7a20118
  .word 0xc7a10114
  .word 0xc7a0011c
  .word 0x4600081a
  .word 0x44800000
  .word 0x46021d9c
  .word 0x4600b034
  .word 0x4501000e
  .word 0x00000000
  .word 0xc7808094
  .word 0x46140042
  .word 0xc7a00160
  .word 0x46010002
  .word 0xe7a00150
  .word 0xc7a00164
  .word 0x46010002
  .word 0xe7a00154
  .word 0xc7a00168
  .word 0x46010002
  .word 0xe7a00158
  .word 0x1000000e
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
  .word 0xc7a00160
  .word 0x46010002
  .word 0xe7a00150
  .word 0xc7a00164
  .word 0x46010002
  .word 0xe7a00154
  .word 0xc7a00168
  .word 0x46010002
  .word 0xe7a00158
  .word 0xc7a10150
  .word 0xc7a00120
  .word 0x46000800
  .word 0xe7a00150
  .word 0xc7a10154
  .word 0xc7a00124
  .word 0x46000800
  .word 0xe7a00154
  .word 0xc7a10158
  .word 0xc7a00128
  .word 0x46000800
  .word 0xe7a00158
  .word 0xe7b50154
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc60000e8
  .word 0x46000802
  .word 0xe620010c
  .word 0xc7a20150
  .word 0xc7a10154
  .word 0xc7a00158
  .word 0xe6220100
  .word 0xe6210104
  .word 0xe6200108
  .word 0xc7a10060
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a00130
  .word 0xc7a10064
  .word 0xc7a00154
  .word 0x46000801
  .word 0xe7a00134
  .word 0xc7a10068
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a00138
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x4600c543
  .word 0x00000000
  .word 0x4600ad06
  .word 0x64100001
  .word 0x10000036
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x4600b034
  .word 0x4501000a
  .word 0x00000000
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x4600ab06
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x4600ab07
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40140
  .word 0x27a50130
  .word 0x27a600d0
  .word 0x0c131b18
  .word 0x00000000
  .word 0x3203ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x005d1021
  .word 0x24450060
  .word 0xc7a10140
  .word 0xc7a00150
  .word 0x46000800
  .word 0xe4a00000
  .word 0xc7a10144
  .word 0xc7a00154
  .word 0x46000800
  .word 0xe4a00004
  .word 0xc7a10148
  .word 0xc7a00158
  .word 0x46000800
  .word 0xe4a00008
  .word 0x24a4000c
  .word 0x27a60150
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x4614ad40
  .word 0x26020001
  .word 0x3050ffff
  .word 0x3202ffff
  .word 0x28420004
  .word 0x1440ffc8
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50060
  .word 0x27a6007c
  .word 0x27a70098
  .word 0x27a800b4
  .word 0x24090001
  .word 0x0c0a8998
  .word 0x00000000
  .word 0x0220202d
  .word 0x4600bb06
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0170
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002b1bc0

void FUN_002b1bc0(int param_1)
{
  u32 fl;
  u8 *work;

  if (*(u8 *)(*(int *)(*(int *)(param_1 + 0xe0) + 0x30) + 0xa2) == 0) {
    work = iGpffffb6fc;
    fl = *(u32 *)(work + 0xc);
    if ((fl & 0x200000) == 0 || *(u16 *)(*(int *)(work + 0xbbc) + 8) != 0x1b4) {
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x38);
      work = iGpffffb6fc;
      fl = *(u32 *)(work + 0xc);
      if ((fl & 0x200000) == 0) {
        switch (*(u16 *)(work + 0x10a)) {
        case 0:
          FUN_002b1060((BtlCamera*)param_1, 40.0f, 2.0f);
          break;
        case 1:
          FUN_002b17a0((BtlCamera*)param_1, 100.0f, 3.0f);
          break;
        }
      }
      else {
        switch (*(u16 *)(work + 0x10a)) {
        case 0:
          FUN_002b1060((BtlCamera*)param_1, 20.0f, 2.0f);
          break;
        case 1:
          FUN_002b17a0((BtlCamera*)param_1, 50.0f, 3.0f);
          break;
        }
      }
    }
  }
}


// FUN_002B1CF0
void FUN_002b1cf0(int param_1)
{
  u16 uVar1;
  u16 uVar2;
  int iVar3;

  iVar3 = param_1;
  param_1 = *(int *)(param_1 + 0xe0);
  if (((param_1 != 0) && (*(u16 *)(param_1 + 0x6a) == 1)) &&
     (*(int *)(iVar3 + 0x11c) == *(int *)(param_1 + 0x38))) {
    uVar1 = *(u16 *)(param_1 + 0x1a);
    if ((((uVar1 & 1) != 0) && (*(u8 *)(*(int *)(param_1 + 0x30) + 0xa2) == 0)) &&
       (((*(u32 *)(iGpffffb6fc + 0xc) & 0x200000) == 0 ||
        (*(u16 *)(*(int *)(iGpffffb6fc + 0xbbc) + 8) != 0x1b4)))) {
      uVar2 = *(u16 *)(iGpffffb6fc + 0x10a);
      if (uVar2 == 1) {
        goto nonzero;
      }
      switch (uVar2) {
      case 0:
        goto zero;
      default:
        goto nonzero;
      }
zero:
      if ((param_1 != 0) && ((uVar1 & 1) != 0)) {
        FUN_002a3e80_call(*(float *)(iVar3 + 0x10c), (u8 *)(uintptr_t)param_1,
                     (u8 *)(uintptr_t)(iVar3 + 0x9c),
                     (u8 *)(uintptr_t)(iVar3 + 0x100), 0x33);
      }
      goto end;
nonzero:
      if ((param_1 != 0) && ((uVar1 & 1) != 0)) {
        FUN_002a3e80_call(*(float *)(iVar3 + 0x10c), (u8 *)(uintptr_t)param_1,
                     (u8 *)(uintptr_t)(iVar3 + 0x9c),
                     (u8 *)(uintptr_t)(iVar3 + 0x100), 0x33);
      }
    }
  }
end:
  return;
}

extern u8 DAT_00693d10[];

// FUN_002b1e00

void FUN_002b1e00(int param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  u32 uVar4;
  long lVar5;
  int unaff_s1_lo;
  u8 *pVar;
  
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x38);
  iVar1 = *(int *)(*(int *)(param_1 + 0xe0) + 0x30);
  if (*(u8 *)(iVar1 + 0xa2) == '\0') {
    uVar3 = FUN_002d5bf0(iVar1) ? 3 : *(u16 *)(iVar1 + 0xa4);
    switch(uVar3) {
    case 1:
      uVar4 = FUN_00308c60(*(undefined4 *)(iVar1 + 0xa2c));
      unaff_s1_lo = (int)&DAT_00693d10[(uVar4 & 0xff) * 0xf4];
      break;
    case 2:
      unaff_s1_lo = (u32)(uintptr_t)&DAT_006944b0;
      break;
    case 3:
      switch (FUN_003093a0(*(undefined4 *)(iVar1 + 0xa2c))) {
      case 1:
        unaff_s1_lo = (u32)(uintptr_t)&DAT_006945b0;
        break;
      case 2:
        unaff_s1_lo = (u32)(uintptr_t)&DAT_006946a4;
        break;
      case 3:
        unaff_s1_lo = (u32)(uintptr_t)&DAT_00694798;
        break;
      }
      break;
    case 4:
      unaff_s1_lo = (u32)(uintptr_t)&DAT_00694890;
      break;
    case 5:
      unaff_s1_lo = (u32)(uintptr_t)&DAT_00694990;
      break;
    case 7:
      unaff_s1_lo = (u32)(uintptr_t)&DAT_00694a90;
      break;
    case 8:
      unaff_s1_lo = (u32)(uintptr_t)&DAT_00694b90;
      break;
    case 9:
      unaff_s1_lo = (u32)(uintptr_t)&DAT_00694c90;
      break;
    case 10:
      unaff_s1_lo = (u32)(uintptr_t)&DAT_00694d90;
    }
    FUN_002b6bf0((undefined4*)(uintptr_t)(param_1 + 0xec),*(int *)(param_1 + 0xe0),
                 *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x38),unaff_s1_lo,3);
    pVar = FUN_002b6cd0(param_1 + 0xec);
    if (pVar != 0) {
      if (*(u16 *)(pVar + 0x1c) == 1) {
        FUN_002a3e80_call(0.0f,*(u8 **)(param_1 + 0xe0),(u8 *)0,(u8 *)0,1);
        FUN_002a3e80_call(0.0f,*(u8 **)(param_1 + 0xe0),(u8 *)0,(u8 *)0,8);
        *(undefined4 *)(param_1 + 0x110) = 1;
      }
      else {
        FUN_002a3e80_call(0.0f,*(u8 **)(param_1 + 0xe0),(u8 *)0,(u8 *)0,0xa);
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  return;
}

// FUN_002b2060

void FUN_002b2060(int param_1)
{
  int iVar1;
  u16 uVar2;
  int iVar4;
  u8 *pVar;
  u32 uVarMode;
  int iVar5;
  u8 *pCenter;

  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0xe0);
  if ((((iVar1 != 0) && (*(u16 *)(iVar1 + 0x6a) == 1)) && (*(int *)(iVar4 + 0x100) != 0)) &&
     ((*(int *)(iVar4 + 0x100) == *(int *)(iVar1 + 0x38) && ((*(u16 *)(iVar1 + 0x1a) & 1) != 0)))
     ) {
    if (FUN_002b6bd0(iVar4 + 0xec) != 0) {
      FUN_002b64d0((BtlCamera*)iVar4,
                   (struct B64CameraWork*)((u8*)(uintptr_t)iVar4 + 0xec));
    }
    pVar = FUN_002b6cd0(iVar4 + 0xec);
    if (pVar != 0) {
      if (*(u16 *)(pVar + 0x1c) == 1) {
        if (*(int *)(iVar4 + 0x114) != 0) {
          FUN_002a3e80_call(0.0f,(u8*)(uintptr_t)*(undefined4 *)(iVar4 + 0xe0),
                       (u8*)0,(u8*)0,0x81);
        }
        *(undefined4 *)(iVar4 + 0x110) = 1;
      }
      else {
        if (*(int *)(iVar4 + 0x110) == 1) {
          uVar2 = 3;
        }
        else {
          uVar2 = 0x33;
        }
        uVarMode = uVar2;
        if (*(int *)(iVar4 + 0x114) == 0) {
          if (FUN_0030b5a0(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x100) + 0x30) + 0xa2c),0) == 0) {
            {
              int tmp100, tmp30;
              tmp100 = *(volatile int *)(iVar4 + 0x100);
              tmp30 = *(volatile int *)(tmp100 + 0x30);
              pCenter = (u8 *)tmp30 + 4;
              FUN_002a3e80_call(50.0f,(u8*)(uintptr_t)*(undefined4 *)(iVar4 + 0xe0),
                           (u8*)(uintptr_t)(iVar4 + 0x9c),pCenter,uVarMode);
            }
          }
        }
        else {
          FUN_002a3e80_call(0.0f,(u8*)(uintptr_t)*(undefined4 *)(iVar4 + 0xe0),
                       (u8*)0,(u8*)0,uVarMode);
        }
        *(undefined4 *)(iVar4 + 0x110) = 0;
      }
    }
  }
  return;
}

#pragma push
#pragma opt_common_subs on
/* W367 measured: opt_dead_assignments off nd1096 -> 946, object 1536/1552; baseline object 1540/1552. */
#pragma opt_dead_assignments off
// FUN_002b21f0
#pragma push
#pragma opt_lifetimes on

#ifndef PC_BUILD
asm void FUN_002b21f0(BtlCamera *camera, f32 param_1, int param_2)
{
  .set noreorder
  .word 0x27bdfea0
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
  .word 0x0080a02d
  .word 0x46006606
  .word 0x00a0982d
  .word 0x8c8200e0
  .word 0x8c520030
  .word 0x8c420038
  .word 0x8c510030
  .word 0x0240202d
  .word 0x27a50150
  .word 0x0c0a004c
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50140
  .word 0x0c0a004c
  .word 0x00000000
  .word 0xc7a10150
  .word 0xc7a00140
  .word 0x46000801
  .word 0xe7a00110
  .word 0xc7a10154
  .word 0xc7a00144
  .word 0x46000801
  .word 0xe7a00114
  .word 0xc7a10158
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00118
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x46000506
  .word 0xc681009c
  .word 0xc7a00150
  .word 0x46000801
  .word 0xe7a000d8
  .word 0xc68100a4
  .word 0xc7a00158
  .word 0x46000801
  .word 0xe7a000dc
  .word 0x27a400d8
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0xc7a30110
  .word 0xe7a300d0
  .word 0xc7a20118
  .word 0xe7a200d4
  .word 0xc7a100d8
  .word 0xc7a000dc
  .word 0x4600101a
  .word 0x44800000
  .word 0x00000000
  .word 0x4601185c
  .word 0x12600010
  .word 0x00000000
  .word 0x8f82b6fc
  .word 0x8c43000c
  .word 0x3c020020
  .word 0x00621024
  .word 0x10400004
  .word 0x00000000
  .word 0xae800104
  .word 0x10000007
  .word 0x00000000
  .word 0x46000834
  .word 0x24020001
  .word 0x45000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xae820104
  .word 0x8e830104
  .word 0x24020001
  .word 0x14620026
  .word 0x00000000
  .word 0x0240802d
  .word 0x0220a82d
  .word 0xdfa20150
  .word 0xc7a00158
  .word 0xffa20130
  .word 0xe7a00138
  .word 0xc6410090
  .word 0xc640002c
  .word 0x46000842
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c2
  .word 0xc796809c
  .word 0xc7808098
  .word 0x46140042
  .word 0xc7a20110
  .word 0x46011002
  .word 0xe7a00120
  .word 0xc7a00114
  .word 0x46010002
  .word 0xe7a00124
  .word 0xc7a30118
  .word 0x46011802
  .word 0xe7a00128
  .word 0xc7a10134
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00134
  .word 0xc7b40134
  .word 0xe7b40104
  .word 0x1000003e
  .word 0x00000000
  .word 0x0220802d
  .word 0x0240a82d
  .word 0xdfa20140
  .word 0xc7a00148
  .word 0xffa20130
  .word 0xe7a00138
  .word 0xc622002c
  .word 0xc6200090
  .word 0x46020042
  .word 0xc7808098
  .word 0x460105c2
  .word 0x3c024020
  .word 0x4482b000
  .word 0xc620008c
  .word 0x460200c2
  .word 0x3c023e80
  .word 0x44821000
  .word 0xc7a10154
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603105d
  .word 0xe7a10154
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00154
  .word 0xc7a10150
  .word 0xc7a00140
  .word 0x46000801
  .word 0xe7a00110
  .word 0xc7a10154
  .word 0xc7a00144
  .word 0x46000801
  .word 0xe7a00114
  .word 0xc7a10158
  .word 0xc7a00148
  .word 0x46000801
  .word 0xe7a00118
  .word 0x27a40110
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0x3c023e80
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0xc7a20110
  .word 0x46011002
  .word 0xe7a00120
  .word 0xc7a00114
  .word 0x46010002
  .word 0xe7a00124
  .word 0xc7a30118
  .word 0x46011802
  .word 0xe7a00128
  .word 0xc7b40134
  .word 0xe7b40104
  .word 0xc7a10120
  .word 0xc7a00140
  .word 0x46000800
  .word 0xe7a00120
  .word 0xc7a10124
  .word 0xc7a00144
  .word 0x46000800
  .word 0xe7a00124
  .word 0xc7a10128
  .word 0xc7a00148
  .word 0x46000800
  .word 0xe7a00128
  .word 0xe7a300d0
  .word 0x46001087
  .word 0xe7a200d4
  .word 0xc7a100d8
  .word 0xc7a000dc
  .word 0x4600101a
  .word 0x44800000
  .word 0x00000000
  .word 0x4601185c
  .word 0x12600007
  .word 0x00000000
  .word 0x46000834
  .word 0x24020001
  .word 0x45000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xae820108
  .word 0x8e830108
  .word 0x24020001
  .word 0x1462000f
  .word 0x00000000
  .word 0xc7a20118
  .word 0xc7a00130
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4617101c
  .word 0xe7a00100
  .word 0xc7b50138
  .word 0xc7a00110
  .word 0x46150818
  .word 0x4617001d
  .word 0xe7a00108
  .word 0x1000000d
  .word 0x00000000
  .word 0xc7a20118
  .word 0xc7a00130
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4617101d
  .word 0xe7a00100
  .word 0xc7b50138
  .word 0xc7a00110
  .word 0x46150818
  .word 0x4617001c
  .word 0xe7a00108
  .word 0x27a400b8
  .word 0x27a50100
  .word 0x27a60120
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x27a40110
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700b8
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a00120
  .word 0xe7a000e0
  .word 0xc7a00128
  .word 0xe7a000e4
  .word 0xc7a00100
  .word 0xe7a000e8
  .word 0xc7a00108
  .word 0xe7a000ec
  .word 0xc7a00130
  .word 0xe7a000f8
  .word 0xe7b500fc
  .word 0x27a400e0
  .word 0x27a500e8
  .word 0x27a600f8
  .word 0x27a700f0
  .word 0x0c0b47f4
  .word 0x00000000
  .word 0xc6020090
  .word 0xc601002c
  .word 0x46011082
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602b55c
  .word 0xc7a000f0
  .word 0xe7a00100
  .word 0xe7b40104
  .word 0xc7a000f4
  .word 0xe7a00108
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc68000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a883
  .word 0x3c0243fa
  .word 0x44820000
  .word 0x00000000
  .word 0x46001034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000086
  .word 0xc7a00110
  .word 0x460200c2
  .word 0xe7a30110
  .word 0xc7a00114
  .word 0x46020042
  .word 0xe7a10114
  .word 0xc7a00118
  .word 0x46020082
  .word 0xe7a20118
  .word 0xc7a00100
  .word 0x46030000
  .word 0xe7a000ac
  .word 0xc7a00104
  .word 0x46010040
  .word 0xe7a100b0
  .word 0xc7a00108
  .word 0x46020000
  .word 0xe7a000b4
  .word 0x3c024148
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a000b0
  .word 0x27a40090
  .word 0x2685009c
  .word 0x0c0a911c
  .word 0x00000000
  .word 0x12600018
  .word 0x00000000
  .word 0x27a4009c
  .word 0x27a500b8
  .word 0x0c0b47cc
  .word 0x00000000
  .word 0xc78180d4
  .word 0x46010036
  .word 0x45010008
  .word 0x00000000
  .word 0x27a40090
  .word 0x27a500ac
  .word 0x0c0a913c
  .word 0x00000000
  .word 0x64070003
  .word 0x10000002
  .word 0x00000000
  .word 0x64070023
  .word 0x3c024248
  .word 0x44826000
  .word 0x8e8400e0
  .word 0x26a50004
  .word 0x27a600ac
  .word 0x0c0a8fa0
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50090
  .word 0x27a600ac
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x0280202d
  .word 0x4600c306
  .word 0x0c0a8c44
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
  .word 0x27bd0160
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_dead_assignments reset
#pragma pop

// FUN_002b2800
void FUN_002b2800(BtlCamera *camera)
{
  s64 lVar1;
  undefined2 uVar2;
  BtlAction *action;
  s16 targetId;

  action = camera->action;
  targetId = *(volatile /* Removing this qualifier loses FUN_002b2800 (MATCH nd0 -> MISMATCH nd6, size 128 -> 128) - measured W170. */ s16 *)&action->target.specificId;
  lVar1 = FUN_002f8eb0(action->unit, targetId);
  if (lVar1 == -1) {
    lVar1 = 4;
  }
  uVar2 = FUN_002835e0(camera->action->unit, lVar1 & 0xffff, 1.0f);
  *(undefined2 *)((u8 *)camera + 0x10e) = uVar2;
  *(undefined4 *)((u8 *)camera + 0x100) =
      *(undefined4 *)((u8 *)camera->action + 0x38);
  *(undefined2 *)((u8 *)camera + 0x10c) = 0;
  return;
}
// FUN_002b2880
void FUN_002b2880(int param_1)
{
  int iVar1;
  f32 speed;

  iVar1 = *(int *)(param_1 + 0xe0);
  if ((((iVar1 != 0) && (*(u16 *)(iVar1 + 0x6a) == 1)) &&
      (*(int *)(param_1 + 0x100) == *(int *)(iVar1 + 0x38))) && ((*(u16 *)(iVar1 + 0x1a) & 1) != 0)
     ) {
    if (*(u16 *)(param_1 + 0x10e) <= *(u16 *)(param_1 + 0x10c)) {
      speed = (*(int *)(param_1 + 0x108) != 0) ? uGpffff80fc : uGpffff808c;
    }
    else {
      speed = uGpffff8100;
    }
    FUN_002b21f0((BtlCamera*)param_1, speed, *(u16 *)(param_1 + 0x10c) == 0);
    *(short *)(param_1 + 0x10c) = *(u16 *)(param_1 + 0x10c) + 1;
  }
  return;
}

/* W414: this is a genuine adjacent stack-load order residual, not independent
 * call-argument scheduling: retail reads targetCenter.x/y/z (sp+0xf0/f4/f8)
 * before sourceCenter.x/y/z (sp+0xe0/e4/e8).  Staging each target component
 * through the existing targetHeight local before the corresponding source
 * read produces 1372/1376 and normalized_diff 0.  Volatile-cast staging was
 * also tested (1384/1376, normalized_diff 653) and is over-window; do not
 * reintroduce it. */
// FUN_002b2940

void FUN_002b2940(void *arg0)
{
    struct
    {
        RwV3d output;
        RtQuat transform;
        u8 pad_1c[4];
        f32 fromX;
        f32 fromZ;
        f32 toX;
        f32 toZ;
        f32 eyeX;
        f32 eyeZ;
        f32 normX;
        f32 normZ;
        u8 pad_40[8];
        f32 eye2X;
        f32 eye2Z;
        RwV3d direction;
        u8 pad_bc[4];
        RwV3d center;
        u8 pad_cc[4];
        RwV3d endpoint;
        u8 pad_dc[4];
        RwV3d sourceCenter;
        u8 pad_ec[4];
        RwV3d targetCenter;
        u8 pad_fc[4];
    } scratch;
    BtlCamera *camera;
    BtlAction *action;
    BtlUnit *unit;
    BtlUnit *target;
    u16 genus;
    f32 radius;
    f32 distance;
    f32 facing;
    f32 targetHeight;
    camera = (BtlCamera*)arg0;
    action = camera->action;
    unit = action->unit;
    genus = *(u8*)((u8*)unit + 0xa2);
    target = action->target.targetedActions[0]->unit;
    radius = target->sphereRadius * target->scale;
    btlUnitGetSphereWorldCenter(target, &scratch.targetCenter);
    btlUnitGetSphereWorldCenter(unit, &scratch.sourceCenter);
    if (!(scratch.targetCenter.y <= scratch.sourceCenter.y))
    {
        targetHeight = target->unk_8c * target->scale;
        scratch.targetCenter.y =
            scratch.targetCenter.y - fGpffff8094 * targetHeight;
        scratch.sourceCenter.y =
            (scratch.sourceCenter.y) +
            fGpffff806c * (unit->unk_8c * unit->scale);
    }
    else
    {
        targetHeight = target->unk_8c * target->scale;
        scratch.targetCenter.y =
            scratch.targetCenter.y + fGpffff8094 * targetHeight;
        scratch.sourceCenter.y =
            (scratch.sourceCenter.y) -
            fGpffff8094 * (unit->unk_8c * unit->scale);
    }
    if (scratch.targetCenter.y < 65.0f)
    {
        scratch.targetCenter.y = 65.0f;
    }
    targetHeight = scratch.targetCenter.x;
    scratch.direction.x = scratch.sourceCenter.x - targetHeight;
    targetHeight = scratch.targetCenter.y;
    scratch.direction.y = scratch.sourceCenter.y - targetHeight;
    targetHeight = scratch.targetCenter.z;
    scratch.direction.z = scratch.sourceCenter.z - targetHeight;
    scratch.direction.x = scratch.direction.x * fGpffff8088;
    scratch.direction.y = scratch.direction.y * fGpffff8088;
    scratch.direction.z = scratch.direction.z * fGpffff8088;
    scratch.center.x = scratch.targetCenter.x + scratch.direction.x;
    scratch.center.y = scratch.targetCenter.y + scratch.direction.y;
    scratch.center.z = scratch.targetCenter.z + scratch.direction.z;

    scratch.direction.x = scratch.targetCenter.x - camera->pos.x;
    scratch.direction.y = scratch.targetCenter.y - camera->pos.y;
    scratch.direction.z = scratch.targetCenter.z - camera->pos.z;
    scratch.normX = scratch.direction.x;
    scratch.normZ = scratch.direction.z;
    FUN_004c6b20(&scratch.normX, &scratch.normX);
    FUN_004be1e0(&scratch.direction, &D_00697870, 1,
                 (u8*)target + 0x1c);
    scratch.eyeX = scratch.direction.x;
    scratch.eyeZ = scratch.direction.z;
    FUN_004c6b20(&scratch.eyeX, &scratch.eyeX);
    facing = scratch.eyeX * scratch.normX +
             scratch.eyeZ * scratch.normZ;

    if (genus == 0)
    {
        scratch.direction.x = scratch.direction.x * (radius * 0.5f);
        scratch.direction.y = scratch.direction.y * (radius * 0.5f);
        scratch.direction.z = scratch.direction.z * (radius * 0.5f);
        scratch.endpoint.x = scratch.targetCenter.x - scratch.direction.x;
        scratch.endpoint.y = scratch.targetCenter.y - scratch.direction.y;
        scratch.endpoint.z = scratch.targetCenter.z - scratch.direction.z;
    }
    else
    {
        scratch.direction.x = scratch.direction.x * (radius * 1.5f);
        scratch.direction.y = scratch.direction.y * (radius * 1.5f);
        scratch.direction.z = scratch.direction.z * (radius * 1.5f);
        if (facing < 0.0f)
        {
            scratch.endpoint.x = scratch.targetCenter.x + scratch.direction.x;
            scratch.endpoint.y = scratch.targetCenter.y + scratch.direction.y;
            scratch.endpoint.z = scratch.targetCenter.z + scratch.direction.z;
        }
        else
        {
            scratch.endpoint.x = scratch.targetCenter.x - scratch.direction.x;
            scratch.endpoint.y = scratch.targetCenter.y - scratch.direction.y;
            scratch.endpoint.z = scratch.targetCenter.z - scratch.direction.z;
        }
    }

    FUN_002a4690(&scratch.transform, &scratch.endpoint, &scratch.center,
                 &D_00697880);
    scratch.fromX = scratch.center.x;
    scratch.fromZ = scratch.center.z;
    scratch.toX = scratch.endpoint.x;
    scratch.toZ = scratch.endpoint.z;
    scratch.eye2X = scratch.targetCenter.x;
    scratch.eye2Z = scratch.targetCenter.z;
    distance = FUN_002d1fd0(&scratch.fromX, &scratch.toX,
                            &scratch.eye2X, NULL);
    if (genus == 0)
    {
        radius = (radius > 100.0f) ? radius : 100.0f;
        distance = distance + radius;
    }
    else
    {
        radius = (radius > 125.0f) ? radius : 125.0f;
        distance = distance + radius;
    }
    if (distance < 160.0f)
    {
        distance = 160.0f;
    }
    scratch.direction.x = scratch.center.x - scratch.endpoint.x;
    scratch.direction.y = scratch.center.y - scratch.endpoint.y;
    scratch.direction.z = scratch.center.z - scratch.endpoint.z;
    radius = RwV3dLength(&scratch.direction);
    distance = radius +
               distance / FUN_0052e930(fGpffff8070 * (0.5f * camera->fovRad));
    distance = (distance > 0.0f) ? distance : 0.0f;
    FUN_004be1e0(&scratch.direction, &D_006978A0, 1,
                 (u8*)&scratch.transform);
    scratch.direction.x = scratch.direction.x * distance;
    scratch.direction.y = scratch.direction.y * distance;
    scratch.direction.z = scratch.direction.z * distance;
    scratch.output.x = scratch.center.x + scratch.direction.x;
    scratch.output.y = scratch.center.y + scratch.direction.y;
    scratch.output.z = scratch.center.z + scratch.direction.z;
    if (scratch.output.y < 25.0f)
    {
        scratch.output.y = 25.0f;
    }
    FUN_002a3e80_call(400.0f, (u8*)camera->action, (u8*)&scratch.output,
                 (u8*)&scratch.center, 3);
    FUN_002a2170(camera, (f32*)&scratch.output);
}

// FUN_002b2ea0
void FUN_002b2ea0(void)
{
}

// FUN_002b2eb0

void FUN_002b2eb0(int param_1, float *param_2)
{
  struct {
    f32 values[9];
    s32 flag;
    f32 extra[2];
    RtQuat blend;
    f32 scale[2];
    RwV3d helper;
    f32 pad94;
    RwV3d transformed;
    f32 padA4;
    f32 output[3];
    f32 padb4;
    f32 unkB8;
    f32 result;
  } work;
  f32 initial;
  f32 ratio;
  f32 angle;
  f32 factor;
  f32 inverse;
  f32 curve;
  f32 poly;
  f32 product;
  ratio = FUN_00280870(3, 1, &work.helper, &work.result, &work.unkB8, 1);
  initial = ratio / FUN_0052e930(fGpffff8070 * (0.5f * *(f32 *)(param_1 + 0xb8)));
  work.output[0] = 0.0f;
  work.output[1] = work.result;
  work.output[2] = -ratio;
  FUN_002a4690(param_2 + 3, work.output, &work.helper, (const void *)DAT_00697880_arr);
  angle = FUN_002d1f30_typed((f32 *)(param_1 + 0xa8), param_2 + 3);
  if (!(angle <= fGpffff80d4)) {
    factor = fGpffff80d4 / angle;
    FUN_004be310_typed((void *)(param_1 + 0xa8), param_2 + 3, work.values);
    if (factor <= 0.0f) {
      work.blend = *(RtQuat *)(param_1 + 0xa8);
    } else if (1.0f <= factor) {
      work.blend = *(RtQuat *)((u8 *)param_2 + 0xc);
    } else {
      inverse = 1.0f - factor;
      if (work.flag == 0) {
        inverse = inverse * work.values[8];
        curve = inverse * inverse;
        poly = fGpffff8114 * curve + fGpffff8048;
        poly = curve * poly + fGpffff8118;
        poly = curve * poly + fGpffff8050;
        poly = curve * poly + fGpffff8054;
        poly = curve * poly + fGpffff8058;
        product = curve * inverse;
        inverse = product * poly + inverse;
        factor = factor * work.values[8];
        curve = factor * factor;
        poly = fGpffff8114 * curve + fGpffff8048;
        poly = curve * poly + fGpffff8118;
        poly = curve * poly + fGpffff8050;
        poly = curve * poly + fGpffff8054;
        poly = curve * poly + fGpffff8058;
        product = curve * factor;
        factor = product * poly + factor;
      }
      work.blend.imag.x = work.values[0] * inverse;
      work.blend.imag.y = work.values[1] * inverse;
      work.blend.imag.z = work.values[2] * inverse;
      work.blend.imag.x = work.blend.imag.x + work.values[4] * factor;
      work.blend.imag.y = work.blend.imag.y + work.values[5] * factor;
      work.blend.imag.z = work.blend.imag.z + work.values[6] * factor;
      work.blend.real = work.values[3] * inverse + work.values[7] * factor;
    }
    FUN_004be1e0_typed(&work.transformed, (const RwV3d *)DAT_006978A0_arr, 1, &work.blend);
    work.output[0] = work.helper.x + work.transformed.x;
    work.output[1] = work.helper.y + work.transformed.y;
    work.output[2] = work.helper.z + work.transformed.z;
    FUN_002a4690(param_2 + 3, work.output, &work.helper, (const void *)DAT_00697880_arr);
  }
  if (initial < 700.0f) {
    initial = 700.0f;
  }
  FUN_004be1e0_typed(&work.transformed, (const RwV3d *)DAT_006978A0_arr, 1, param_2 + 3);
  work.transformed.x = work.transformed.x * initial;
  work.transformed.y = work.transformed.y * initial;
  work.transformed.z = work.transformed.z * initial;
  factor = initial * FUN_0052e930(fGpffff8070 * (0.5f * *(f32 *)(param_1 + 0xb8)));
  factor = factor * 0.21875f;
  work.scale[0] = work.transformed.x;
  work.scale[1] = work.transformed.z;
  FUN_004c6b20_typed(work.scale, work.scale);
  work.helper.x = work.helper.x + work.scale[1] * factor;
  work.helper.z = work.helper.z - work.scale[0] * factor;
  param_2[0] = work.helper.x + work.transformed.x;
  param_2[1] = work.helper.y + work.transformed.y;
  param_2[2] = work.helper.z + work.transformed.z;
}

// FUN_002b32c0

void FUN_002b32c0(u16* camera)

{
  struct {
    undefined1 first[28];
    undefined1 second[36];
  } scratch;

  FUN_002a4470((f32*)scratch.first, (f32*)((u8*)camera + 0x9c));
  FUN_002b2eb0((int)camera, (float*)scratch.second);
  FUN_002a2290(camera, (RwV3d*)scratch.first, (RwV3d*)scratch.second, 1);
  FUN_002a3110(camera, 10.0f);
  return;
}

// FUN_002b3330
void func_002b3330(void)
{
}

// FUN_002b3340

void FUN_002b3340(BtlCamera* camera)
{
    int iVar1;
    int iVar2;
    f32 distance;
    f32 minDistance;
    f32 norm;
    f32 height;
    f32 candidate;
    struct {
        RwV3d out;
        RtQuat unk;
        f32 pad0;
        RwV3d diff;
        f32 pad1;
        RwV3d pos;
        f32 posPad;
        RwV3d target;
    } scratch;

    iVar2 = (int)camera;
    iVar1 = *(int*)(iVar2 + 0xe0);
    if (iVar1 != 0)
    {
        iVar1 = *(int*)(iVar1 + 0x30);
    }
    else
    {
        iVar1 = *(int*)(*(int*)(iGpffffb6fc + 0x148) + 0x30);
    }
    distance = FUN_00280870(3, 1, &scratch.target, &height, 0, 1);
    FUN_00280050(iVar1, &scratch.pos);
    scratch.target.y = 0.0f;
    scratch.pos.y = 0.0f;
    if ((scratch.pos.x == scratch.target.x) &&
        (scratch.pos.z == scratch.target.z))
    {
        FUN_00280050(*(int*)(*(int*)(iGpffffb6fc + 0x148) + 0x30),
                     &scratch.pos);
        scratch.pos.y = 0.0f;
    }
    scratch.diff.x = scratch.pos.x - scratch.target.x;
    scratch.diff.y = scratch.pos.y - scratch.target.y;
    scratch.diff.z = scratch.pos.z - scratch.target.z;
    FUN_004c69f0(&scratch.diff.x, &scratch.diff.x);
    scratch.diff.x = scratch.diff.x * distance;
    scratch.diff.y = scratch.diff.y * distance;
    scratch.diff.z = scratch.diff.z * distance;
    scratch.pos.x = scratch.target.x + scratch.diff.x;
    scratch.pos.y = scratch.target.y + scratch.diff.y;
    scratch.pos.z = scratch.target.z + scratch.diff.z;
    minDistance = 0.75f *
                  (*(f32*)(iVar1 + 0x8c) *
                   *(f32*)(iVar1 + 0x2c));
    norm = fGpffff80c4 * height;
    norm = (!(norm > minDistance)) ? minDistance : norm;
    scratch.pos.y = norm;
    FUN_002a4690(&scratch.unk, &scratch.pos, &scratch.target, &D_00697880);
    minDistance = (0.75f * distance) /
                  FUN_0052e930(gp0xffff8070 *
                               (0.5f * *(f32*)(iVar2 + 0xb8)));
    scratch.diff.x = scratch.pos.x - scratch.target.x;
    scratch.diff.y = scratch.pos.y - scratch.target.y;
    scratch.diff.z = scratch.pos.z - scratch.target.z;
    norm = FUN_004c69f0(&scratch.diff.x, &scratch.diff.x);
    distance = FUN_0052e930(gp0xffff8070 *
                            (0.5f * *(f32*)(iVar2 + 0xb8)));
    candidate = norm +
                (*(f32*)(iVar1 + 0x90) *
                 *(f32*)(iVar1 + 0x2c) * 2.0f) /
                distance;
    if (!(minDistance <= candidate))
    {
        minDistance = minDistance;
    }
    else
    {
        minDistance = candidate;
    }
    scratch.diff.x = scratch.diff.x * minDistance;
    scratch.diff.y = scratch.diff.y * minDistance;
    scratch.diff.z = scratch.diff.z * minDistance;
    scratch.out.x = scratch.diff.x + scratch.target.x;
    scratch.out.y = scratch.diff.y + scratch.target.y;
    scratch.out.z = scratch.diff.z + scratch.target.z;
    FUN_002a3590((f32*)&scratch.out, (f32*)&scratch.out);
    FUN_002a3e80_call(0.0f, (u8*)0, (u8*)0, (u8*)0, 0x40);
    FUN_002a2170((BtlCamera*)(uintptr_t)iVar2, (f32*)&scratch.out);
    FUN_002a44b0((f32*)(iVar2 + 0x9c), (f32*)&scratch.out);
}

// FUN_002b3680
void FUN_002b3680(void)
{
}

// FUN_002b3690

void FUN_002b3690(BtlCamera* camera)
{
    BtlUnit* unit;
    f32 firstScale;
    f32 secondScale;
    struct
    {
        RwV3d firstPos;
        RtQuat firstRot;
        RwV3d secondPos;
        RtQuat secondRot;
        u8 pad_38[8];
        RwV3d direction;
        u8 pad_4c[4];
        RwV3d base;
        u8 pad_5c[4];
        RwV3d center;
        f32 scalar;
    } work;

    unit = *(BtlUnit**)(*(u8**)(iGpffffb6fc + 0x148) + 0x30);
    firstScale = FUN_00280870(3, 0, 0, &work.scalar, 0, 1);
    FUN_00280870(2, 0, &work.base, 0, 0, 1);
    work.base.y = 0.5f * work.scalar;
    FUN_00280050_typed(unit, &work.center);
    work.center.y = work.center.y + 0.75f * (unit->unk_8c * unit->scale);
    FUN_002a4690(&work.firstRot, &work.center, &work.base, &D_00697880);
    work.secondRot = work.firstRot;
    secondScale = 250.0f / tanf(0.5f * camera->fovRad);
    if (*(u8*)(iGpffffb6fc + 0xba4) <= 1)
        goto rotation_done;
    FUN_004bdde0((f32*)&work.firstRot, (const f32*)&D_00697880,
                 30.0f, 2);
rotation_done:
    RtQuatTransformVectors(&work.direction, &D_006978A0, 1,
                           &work.firstRot);
    work.direction.x = work.direction.x * secondScale;
    work.direction.y = work.direction.y * secondScale;
    work.direction.z = work.direction.z * secondScale;
    work.firstPos.x = work.base.x + work.direction.x;
    work.firstPos.y = work.base.y + work.direction.y;
    work.firstPos.z = work.base.z + work.direction.z;
    firstScale = (0.875f * firstScale) /
                 tanf(gp0xffff8070 * (0.5f * camera->fovRad));
    if (*(u8*)(iGpffffb6fc + 0xba4) == 1)
    {
        firstScale +=
            (0.5f * (unit->unk_8c * unit->scale)) /
            tanf(0.5f * camera->fovRad);
    }
    RtQuatTransformVectors(&work.direction, &D_006978A0, 1,
                           &work.secondRot);
    work.direction.x = work.direction.x * firstScale;
    work.direction.y = work.direction.y * firstScale;
    work.direction.z = work.direction.z * firstScale;
    work.secondPos.x = work.base.x + work.direction.x;
    work.secondPos.y = work.base.y + work.direction.y;
    work.secondPos.z = work.base.z + work.direction.z;
    FUN_002a2290((u16*)camera, &work.firstPos, &work.secondPos, 1);
    FUN_002a3110((u16*)camera, gp0xffff80e0);
}

// FUN_002b3980

void FUN_002b3980(BtlCamera* camera)
{
    struct B3980Scratch {
        u8 records[4][28];
        RwMatrix matrix;
        RwV3d view;
        u32 viewPad;
        RwV3d transformed;
        u32 transformedPad;
        RwV3d center;
        u32 centerPad;
        f32 output[3];
    };
    f32 temp_f1;
    f32 var_f25;
    f32 var_f24;
    f32 var_f23;
    f32 temp_f22;
    f32 temp_f21_2;
    f32 temp_f20_2;
    f32 temp_f20;
    f32 temp_f21;
    s32 var_17;
    BtlUnit* temp_16;
    struct B3980Scratch scratch;
    temp_16 = camera->action->unit;
    FUN_0027ffb0(temp_16, &scratch.center);
    temp_f1 = temp_16->scale;
    temp_f20 = temp_16->sphereRadius * temp_f1;
    temp_f21 = 0.5f * (temp_16->unk_8c * temp_f1);
    scratch.center.y = fGpffff80b4 * temp_f21 + scratch.center.y;
    if (!(temp_f20 <= temp_f21)) {
        var_f25 = (1.25f * temp_f20) /
                  FUN_0052e930(fGpffff8070 * (camera->fovRad * 0.5f));
    } else {
        var_f25 = (1.25f * temp_f21) /
                  FUN_0052e930(camera->fovRad * 0.5f);
    }
    if (FUN_002ffbc0(100) > 0x32) {
        var_f24 = 60.0f;
        var_f23 = -30.0f;
    } else {
        var_f24 = -60.0f;
        var_f23 = 30.0f;
    }
    var_17 = 0;
    while ((var_17 & 0xffff) < 4) {
        FUN_004c31b0_typed(&scratch.matrix, &D_00697880, var_f24, 0);
        FUN_004c6c60(&scratch.view, &D_00697890, &scratch.matrix);
        FUN_004be1e0(&scratch.transformed, &scratch.view, 1, &temp_16->rot);
        temp_f22 = scratch.transformed.x * var_f25;
        temp_f21_2 = scratch.transformed.y * var_f25;
        temp_f20_2 = scratch.transformed.z * var_f25;
        scratch.output[0] = scratch.center.x + temp_f22;
        scratch.output[1] = scratch.center.y + temp_f21_2;
        scratch.output[2] = scratch.center.z + temp_f20_2;
        FUN_002a4690(scratch.records[(u16)var_17] + 0xc,
                     scratch.output, &scratch.center, &D_00697880);
        *(f32 *)(scratch.records[(u16)var_17] + 0x00) = scratch.center.x + temp_f22;
        *(f32 *)(scratch.records[(u16)var_17] + 0x04) = scratch.center.y + temp_f21_2;
        *(f32 *)(scratch.records[(u16)var_17] + 0x08) = scratch.center.z + temp_f20_2;
        var_f24 = var_f24 + var_f23;
        var_f25 = var_f25 + 37.5f;
        var_17 = (var_17 + 1) & 0xffff;
    }
    FUN_002a3e80_call(0.0f, (u8*)camera->action, 0, 0, 1);
    FUN_002a2660(camera, (BtlCameraKeyFrame*)&scratch.records[0],
                 (BtlCameraKeyFrame*)&scratch.records[1],
                 (BtlCameraKeyFrame*)&scratch.records[2],
                 (BtlCameraKeyFrame*)&scratch.records[3], 1);
    FUN_002a3110((u16*)camera, 6.0f);
}

// FUN_002b3c60

void FUN_002b3c60(BtlCamera* camera)
{
  RwV3d center;
  RwV3d transformed;
  struct {
    u8 frameBytes[0x70];
    RwMatrix matrix;
    f32 directionX;
    f32 directionY;
    f32 directionZ;
  } scratch;
  BtlUnit* unit;
  f32 radius;
  f32 halfHeight;
  f32 distance;
  f32 angle;
  s32 i;

  unit = camera->action->unit;
  btlUnitGetSphereWorldCenter(unit, &center);
  radius = unit->sphereRadius * unit->scale;
  halfHeight = 0.5f * (unit->unk_8c * unit->scale);
  center.y = 0.0f + center.y + fGpffff80b4 * halfHeight;
  RtQuatTransformVectors(&transformed, &D_00697890, 1, &unit->rot);
  scratch.directionX = 350.0f * transformed.x;
  scratch.directionY = 350.0f * transformed.y;
  scratch.directionZ = 350.0f * transformed.z;
  distance = (center.y + scratch.directionY) - 35.0f;
  transformed.x = (center.x + scratch.directionX) - center.x;
  transformed.y = distance - center.y;
  transformed.z = (center.z + scratch.directionZ) - center.z;
  RwV3dNormalize(&transformed, &transformed);
  if (!(radius < halfHeight))
  {
    distance = 1.75f * radius /
               tanf(fGpffff8070 * (0.5f * camera->fovRad));
  }
  else
  {
    distance = fGpffff8070 * halfHeight /
               tanf(0.5f * camera->fovRad);
  }
  angle = 65.0f;
  i = 0;
  while ((i & 0xffff) < 4)
  {
    RwMatrixRotate(&scratch.matrix, &D_00697880, angle,
                   rwCOMBINEREPLACE);
    FUN_004c6c60((RwV3d*)&scratch.directionX, &transformed,
                 &scratch.matrix);
    ((BtlCameraKeyFrame*)scratch.frameBytes)[(u16)i].pos.x =
        0.0f + center.x + scratch.directionX * distance;
    ((BtlCameraKeyFrame*)scratch.frameBytes)[(u16)i].pos.y =
        0.0f + center.y + scratch.directionY * distance;
    ((BtlCameraKeyFrame*)scratch.frameBytes)[(u16)i].pos.z =
        0.0f + center.z + scratch.directionZ * distance;
    if (((BtlCameraKeyFrame*)scratch.frameBytes)[(u16)i].pos.y < 5.0f)
    {
      ((BtlCameraKeyFrame*)scratch.frameBytes)[(u16)i].pos.y = 5.0f;
    }
    FUN_002a4690(&((BtlCameraKeyFrame*)scratch.frameBytes)[(u16)i].rot,
                 &((BtlCameraKeyFrame*)scratch.frameBytes)[(u16)i].pos,
                 &center, &D_00697880);
    angle = angle + -25.0f;
    distance = distance + 25.0f;
    i = (i + 1) & 0xffff;
  }
  FUN_002a3e80_call(0.0f, (u8*)camera->action, 0, 0, 1);
  FUN_002a2660(camera, (BtlCameraKeyFrame*)&scratch.frameBytes[0],
               (BtlCameraKeyFrame*)&scratch.frameBytes[0x1c],
               (BtlCameraKeyFrame*)&scratch.frameBytes[0x38],
               (BtlCameraKeyFrame*)&scratch.frameBytes[0x54], 1);
  FUN_002a3110((u16*)camera, 10.0f);
}

// FUN_002b3f80

void FUN_002b3f80(BtlCamera* camera)
{
  struct Scratch {
    RwV3d matrix;
    u8 gap_0c[16];
    RwV3d transformed;
    RwV3d view;
    u8 gap_30[4];
    RwV3d center;
    u8 gap_40[4];
    RwV3d direction;
    u8 gap_50[4];
    RwV3d target;
    u8 gap_60[4];
    RwV3d endpoint;
    u8 gap_70[4];
    RwV3d candidate;
    u8 gap_80[4];
    f32 halfA;
    f32 halfB;
  } scratch;
  BtlUnit* unit;
  f32 scale;
  f32 length;
  f32 factor;
  f32 midpoint;

  unit = *(BtlUnit**)(*(int*)((u8*)camera + 0xe0) + 0x30);
  FUN_002a4470((f32*)&scratch.matrix, (f32*)((u8*)camera + 0x9c));
  scale = FUN_00280870(3, 1, &scratch.endpoint, &scratch.halfB, &scratch.halfA, 1);
  midpoint = scratch.halfB - scratch.halfA;
  scratch.endpoint.y = midpoint * 0.5f + scratch.halfA;
  scale = scale / tanf(fGpffff8070 * (*(f32*)((u8*)camera + 0xb8) * 0.5f));
  FUN_00280050(unit, &scratch.center);
  scratch.target.x = scratch.center.x;
  scratch.target.y = scratch.endpoint.y;
  scratch.target.z = scratch.center.z;
  scratch.direction.x = scratch.center.x - scratch.endpoint.x;
  scratch.direction.y = scratch.target.y - scratch.target.y;
  scratch.direction.z = scratch.center.z - scratch.endpoint.z;
  length = FUN_004c69f0(&scratch.direction, &scratch.direction);
  factor = fGpffff8098;
  factor = factor * length;
  length = factor;
  scratch.direction.x = scratch.direction.x * length;
  scratch.direction.y = scratch.direction.y * length;
  scratch.direction.z = scratch.direction.z * length;
  scratch.candidate.x = scratch.endpoint.x + scratch.direction.x;
  scratch.candidate.y = scratch.endpoint.y + scratch.direction.y;
  scratch.candidate.z = scratch.endpoint.z + scratch.direction.z;
  scratch.target.x = scratch.center.x;
  scratch.target.y = scratch.halfB * 2.5f;
  scratch.target.z = scratch.center.z;
  FUN_002a4690(&scratch.view, &scratch.target, &scratch.candidate, &D_00697880);
  FUN_004be1e0(&scratch.direction, &D_006978A0, 1, &scratch.view);
  scratch.direction.x = scratch.direction.x * scale;
  scratch.direction.y = scratch.direction.y * scale;
  scratch.direction.z = scratch.direction.z * scale;
  scratch.transformed.x = scratch.candidate.x + scratch.direction.x;
  scratch.transformed.y = scratch.candidate.y + scratch.direction.y;
  scratch.transformed.z = scratch.candidate.z + scratch.direction.z;
  FUN_002a3590((f32*)&scratch.matrix, (f32*)&scratch.matrix);
  FUN_002a3590((f32*)&scratch.transformed, (f32*)&scratch.transformed);
  FUN_002a2290((u16*)camera, &scratch.matrix, &scratch.transformed, 1);
  FUN_002a3110((u16*)camera, 0.75f);
}

// FUN_002b41e0
void FUN_002b41e0(BtlCamera* camera)
{
    struct B41Work
    {
        BtlCameraKeyFrame current;
        RwV3d target;
        RtQuat targetRot;
        u8 pad_38[8];
        BtlCameraQuatBlend blend;
        u8 pad_68[8];
        RtQuat blendedRot;
        u8 pad_80[8];
        RwV2d horizontal;
        RwV3d center;
        u8 pad_9c[4];
        RwV3d pointNear;
        u8 pad_ac[4];
        RwV3d delta;
        u8 pad_bc[4];
        RwV3d candidate;
        u8 pad_cc[4];
    } work;
    BtlUnit* unit;
    f32 halfDistance;
    f32 desiredDistance;
    f32 radius;
    f32 angle;
    f32 ratio;
    f32 sideOffset;
    f32 x;
    f32 xSquared;
    f32 cube;

    unit = *(BtlUnit**)((u8*)camera->action + 0x30);
    radius = unit->sphereRadius * unit->scale;
    FUN_002a4470((f32*)&work.current, (f32*)((u8*)camera + 0x9c));
    FUN_00280050(unit, &work.center);

    work.delta.x = work.current.pos.x - work.center.x;
    work.delta.y = work.current.pos.y - work.center.y;
    work.delta.z = work.current.pos.z - work.center.z;
    halfDistance = RwV3dLength(&work.delta);
    halfDistance = halfDistance * 0.5f;
    desiredDistance = (1.5f * radius) /
                      FUN_0052e930(0.5f * camera->fovRad);

    RtQuatTransformVectors(&work.delta, &D_00697890, 1, &unit->rot);
    x = 0.5f * radius;
    work.candidate.x = work.delta.x * x;
    work.candidate.y = work.delta.y * x;
    work.candidate.z = work.delta.z * x;
    work.pointNear.x = work.center.x + work.candidate.x;
    work.pointNear.y = work.center.y + work.candidate.y;
    work.pointNear.z = work.center.z + work.candidate.z;

    work.candidate.x = work.delta.x * desiredDistance;
    work.candidate.y = work.delta.y * desiredDistance;
    work.candidate.z = work.delta.z * desiredDistance;
    work.candidate.x = work.candidate.x + work.pointNear.x;
    work.candidate.y = work.candidate.y + work.pointNear.y;
    work.candidate.z = work.candidate.z + work.pointNear.z;
    work.candidate.y = work.candidate.y +
        fGpffff8084 * (unit->unk_8c * unit->scale);

    FUN_002a4690(&work.targetRot, &work.candidate,
                 &work.pointNear, &D_00697880);
    angle = FUN_002d1f30((f32*)&work.current.rot,
                         (f32*)&work.targetRot);
    if (angle > fGpffff80d4)
    {
        ratio = fGpffff80d4 / angle;
        FUN_004be310((f32*)&work.current.rot,
                     (f32*)&work.targetRot,
                     (f32*)&work.blend);
        if (ratio <= 0.0f)
        {
            work.blendedRot = work.current.rot;
        }
        else if (1.0f <= ratio)
        {
            work.blendedRot = work.targetRot;
        }
        else
        {
            f32 firstWeight;

            firstWeight = 1.0f - ratio;
            if (work.blend.flag == 0)
            {
                x = firstWeight * work.blend.scalar;
                xSquared = x * x;
                cube = xSquared * x;
                firstWeight = fGpffff8130 * xSquared + fGpffff8048;
                firstWeight = xSquared * firstWeight + fGpffff8118;
                firstWeight = xSquared * firstWeight + fGpffff8050;
                firstWeight = xSquared * firstWeight + fGpffff8054;
                firstWeight = xSquared * firstWeight + fGpffff8058;
                firstWeight = cube * firstWeight + x;

                x = ratio * work.blend.scalar;
                xSquared = x * x;
                ratio =
                    xSquared * x *
                    (xSquared *
                     (xSquared *
                      (xSquared *
                       (xSquared *
                        (fGpffff8130 * xSquared +
                         fGpffff8048) +
                        fGpffff8118) +
                       fGpffff8050) +
                      fGpffff8054) +
                     fGpffff8058) +
                    x;
            }

            work.blendedRot.imag.x =
                work.blend.first.imag.x * firstWeight;
            work.blendedRot.imag.y =
                work.blend.first.imag.y * firstWeight;
            work.blendedRot.imag.z =
                work.blend.first.imag.z * firstWeight;
            work.blendedRot.imag.x = work.blendedRot.imag.x +
                work.blend.second.imag.x * ratio;
            work.blendedRot.imag.y = work.blendedRot.imag.y +
                work.blend.second.imag.y * ratio;
            work.blendedRot.imag.z = work.blendedRot.imag.z +
                work.blend.second.imag.z * ratio;
            work.blendedRot.real =
                work.blend.first.real * firstWeight +
                work.blend.second.real * ratio;
        }

        RtQuatTransformVectors(&work.delta, &D_006978A0, 1,
                               &work.blendedRot);
        work.candidate.x = work.pointNear.x + work.delta.x;
        work.candidate.y = work.pointNear.y + work.delta.y;
        work.candidate.z = work.pointNear.z + work.delta.z;
        FUN_002a4690(&work.targetRot, &work.candidate,
                     &work.pointNear, &D_00697880);
    }

    if (halfDistance < 600.0f)
    {
        halfDistance = 600.0f;
    }
    RtQuatTransformVectors(&work.delta, &D_006978A0, 1,
                           &work.targetRot);
    work.delta.x *= halfDistance;
    work.delta.y *= halfDistance;
    work.delta.z *= halfDistance;

    sideOffset = halfDistance *
                 FUN_0052e930(gp0xffff8070 *
                              (0.5f * camera->fovRad));
    sideOffset = sideOffset * 0.21875f;
    work.horizontal.x = work.delta.x;
    work.horizontal.y = work.delta.z;
    FUN_004c6b20((f32*)&work.horizontal,
                 (f32*)&work.horizontal);
    work.pointNear.x += work.horizontal.y * sideOffset;
    work.pointNear.z -= work.horizontal.x * sideOffset;

    work.target.x = work.pointNear.x + work.delta.x;
    work.target.y = work.pointNear.y + work.delta.y;
    work.target.z = work.pointNear.z + work.delta.z;
    FUN_002a2290((u16*)camera, &work.current.pos, &work.target, 1);
    FUN_002a3110((u16*)camera, 1.25f);
}

// FUN_002b4720

void FUN_002b4720(int param_1)

{
  int iVar1;
  undefined1 auStack_10 [16];
  
  iVar1 = *(int *)(param_1 + 0xe0);
  if ((iVar1 != 0) && ((*(u16 *)(iVar1 + 0x1a) & 1) != 0)) {
    iVar1 = *(int *)(iVar1 + 0x30);
    FUN_0027ffb0(iVar1,auStack_10);
    FUN_002a3e80_call(*(float *)(iVar1 + 0x90) * *(float *)(iVar1 + 0x2c) * 0.5f,
                 (u8*)(uintptr_t)*(undefined4 *)(param_1 + 0xe0),
                 (u8*)(uintptr_t)(param_1 + 0x9c),(u8*)auStack_10,0x31);
  }
  return;
}

// FUN_002b47b0
void FUN_002b47b0(BtlCamera* camera)
{
  typedef struct B47Scratch {
    f32 finalPos[3];
    f32 quatCopy[4];
    f32 worldBase[3];
    f32 quat[4];
    u8 pad0[8];
    f32 transformed[3];
    u8 pad1[4];
    f32 worldSecond[3];
    u8 pad2[4];
    f32 worldFirst[3];
    u8 pad3[4];
    f32 sourceSecond[3];
    u8 pad4[4];
    f32 sourceFirst[3];
    u8 pad5[4];
  } B47Scratch;
  BtlAction* action;
  BtlUnit* unit;
  s16 state;
  B47Scratch scratch;
  extern u8 (*gp0xffffb714)[0x4c];
  /* Caller-specific typed ABI: this path supplies the vector and mode arguments explicitly. */
  extern void FUN_004be1e0(RwV3d*, const RwV3d*, int, void*);

  action = camera->action;
  if ((action->unk_1a & 1) == 0) {
    return;
  }
  unit = action->unit;
  if (unit->genus != 1) {
    return;
  }

  state = unit->unk_9e0;
  switch (state) {
  case 3:
    *(RwV3d*)scratch.sourceFirst = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 0x1c);
    *(RwV3d*)scratch.sourceSecond = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 0x28);
    break;
  case 9:
    *(RwV3d*)scratch.sourceFirst = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 0x34);
    *(RwV3d*)scratch.sourceSecond = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 0x40);
    break;
  case 0x11:
    if (FUN_0030c3a0(unit->datUnit) != 0) {
      *(RwV3d*)scratch.sourceFirst = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 0x1c);
      *(RwV3d*)scratch.sourceSecond = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 0x28);
      break;
    }
  default:
    *(RwV3d*)scratch.sourceFirst = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 4);
    *(RwV3d*)scratch.sourceSecond = *(RwV3d*)((u8*)(unit->charId * 0x4c) + (int)gp0xffffb714 + 0x10);
    break;
  }

  FUN_004be1e0((RwV3d*)scratch.sourceFirst,
               (RwV3d*)scratch.sourceFirst, 1, (u8*)unit + 0x1c);
  FUN_004be1e0((RwV3d*)scratch.sourceSecond,
               (RwV3d*)scratch.sourceSecond, 1,
               (void*)((u8*)&unit->pos + 0x18));
  scratch.worldFirst[0] = unit->pos.x + scratch.sourceFirst[0];
  scratch.worldFirst[1] = unit->pos.y + scratch.sourceFirst[1];
  scratch.worldFirst[2] = unit->pos.z + scratch.sourceFirst[2];
  scratch.worldSecond[0] = unit->pos.x + scratch.sourceSecond[0];
  scratch.worldSecond[1] = unit->pos.y + scratch.sourceSecond[1];
  scratch.worldSecond[2] = unit->pos.z + scratch.sourceSecond[2];

  FUN_002a4690(scratch.quat, scratch.worldFirst, scratch.worldSecond,
               &D_00697880);
  *(RwV3d*)scratch.worldBase = *(RwV3d*)scratch.worldFirst;
  *(RtQuat*)scratch.quatCopy = *(RtQuat*)scratch.quat;
  FUN_004be1e0((RwV3d*)scratch.transformed, &D_006978A0, 1,
               scratch.quat);
  scratch.transformed[0] = scratch.transformed[0] * 100.0f;
  scratch.transformed[1] = scratch.transformed[1] * 100.0f;
  scratch.transformed[2] = scratch.transformed[2] * 100.0f;
  scratch.finalPos[0] = scratch.worldBase[0] + scratch.transformed[0];
  scratch.finalPos[1] = scratch.worldBase[1] + scratch.transformed[1];
  scratch.finalPos[2] = scratch.worldBase[2] + scratch.transformed[2];
  if (scratch.finalPos[1] < 25.0f) {
    scratch.finalPos[1] = 25.0f;
  }
  FUN_002a3e80_call(0.0f, (u8*)camera->action, 0, 0, 1);
  FUN_002a2290((u16*)camera, (RwV3d*)scratch.finalPos,
               (RwV3d*)scratch.worldBase, 1);
  FUN_002a3110((u16*)camera, 2.0f);
}

// FUN_002b4bc0

void FUN_002b4bc0(int param_1)
{
  FUN_002a3e80_call(0.0f, (u8 *)(uintptr_t)*(int *)(param_1 + 0xe0), 0, 0, 0);
}


// FUN_002B4C00
void FUN_002b4c00(int param_1)
{
  struct {
    RwV3d first;
    u8 firstTransform[16];
    RwV3d second;
    u8 secondTransform[16];
  } scratch;
  u16* cameraData;

  if (*(int *)(param_1 + 0xd8) == 0) {
    FUN_002a4690(scratch.firstTransform, &D_00694E90, D_00694EB0, &D_00697880);
    scratch.first = D_00694E90;
    FUN_002a4690(scratch.secondTransform, &D_00694ED0, D_00694EF0, &D_00697880);
    scratch.second = D_00694ED0;
    FUN_002a2290((u16 *)(iGpffffb6fc + 0x20), &scratch.first, &scratch.second, 1);
    cameraData = (u16 *)(iGpffffb6fc + 0x20);
    FUN_002a3110(cameraData, fGpffff813c);
  } else if (*(int *)(param_1 + 0xd8) == 0x25) {
    FUN_002a4690(scratch.firstTransform, D_00694E9C, D_00694EBC, &D_00697880);
    scratch.first = *(RwV3d*)D_00694E9C;
    FUN_002a4690(scratch.secondTransform, &D_00694EDC, D_00694EFC, &D_00697880);
    scratch.second = D_00694EDC;
    FUN_002a2290((u16 *)(iGpffffb6fc + 0x20), &scratch.first, &scratch.second, 1);
    cameraData = (u16 *)(iGpffffb6fc + 0x20);
    FUN_002a3110(cameraData, fGpffff80e0);
  }
}

// FUN_002b4db0

void FUN_002b4db0(int param_2,float param_1)
{
  /* Caller-specific typed ABIs retain float arguments that the broad declarations do not describe. */
  extern void FUN_004c31b0(void *,void *,f32,int);
  extern f32 FUN_0052e930(f32);
  int iVar1;
  float fVar2;
  float fVar3;
  u8 auStack_90[0x80];
  iVar1 = param_2;

  fVar2 = (float)FUN_00280870(3,0,auStack_90 + 0x70,0,0,1);
  *(u32 *)(auStack_90 + 0x74) = 0;
  FUN_004c31b0(auStack_90,&D_00697870,-17.5f,0);
  FUN_004c31b0(auStack_90,&D_00697880,*(f32 *)(iVar1 + 0x100),2);
  FUN_004c6c60((f32 *)(auStack_90 + 0x60),&D_00697890,auStack_90);
  fVar3 = FUN_0052e930(fGpffff8070 * (0.5f * *(float *)(iVar1 + 0xb8)));
  fVar3 = (fVar2 * param_1) / fVar3;
  *(f32 *)(auStack_90 + 0x40) = *(f32 *)(auStack_90 + 0x60) * fVar3;
  *(f32 *)(auStack_90 + 0x44) = *(f32 *)(auStack_90 + 0x64) * fVar3;
  *(f32 *)(auStack_90 + 0x48) = *(f32 *)(auStack_90 + 0x68) * fVar3;
  FUN_002a4690(auStack_90 + 0x4c,auStack_90 + 0x40,auStack_90 + 0x70,&D_00697880);
  if (*(f32 *)(auStack_90 + 0x44) < 25.0f) {
    *(f32 *)(auStack_90 + 0x44) = 25.0f;
  }
  *(float *)(iVar1 + 0x100) = *(float *)(iVar1 + 0x100) + 0.25f;
  if ((*(u32 *)(iGpffffb6fc + 0xc) & 0x200000) == 0) {
    FUN_002a3590((float *)(auStack_90 + 0x40),(float *)(auStack_90 + 0x40));
  }
  FUN_002a2170(iVar1,(f32 *)(auStack_90 + 0x40));
}

// FUN_002b4f40

void FUN_002b4f40(int param_1)

{
  *(float *)(param_1 + 0x100) = (float)FUN_002ffbc0(0x168);
  FUN_002a3e80_call(0.0f, (u8 *)(uintptr_t)*(int *)(param_1 + 0xe0), 0, 0, 0x40);
}

#pragma alias FUN_002b4db0_float FUN_002b4db0
extern void FUN_002b4db0_float(float);

// FUN_002b4fd0
void FUN_002b4fd0(void)

{
  FUN_002b4db0_float(DAT_007cad94);
  return;
}

// FUN_002b5000

void FUN_002b5000(int param_1)

{
  int iVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  RwV3d mat;
  RwV3d pos;
  RwV3d diff;
  struct {
    u8 out [28];
    f32 end [3];
    RtQuat unk;
  } pkt;

  iVar1 = *(int *)(*(int *)(param_1 + 0xe0) + 0x30);
  FUN_002a4470((f32 *)pkt.out,(f32 *)((u8 *)param_1 + 0x9c));
  fVar3 = FUN_00280870(3,1,&mat,0,0,1);
  mat.y = 0.0f;
  FUN_00280050(iVar1,&pos);
  pos.y = pos.y + DAT_007cad74 * (*(float *)(iVar1 + 0x8c) * *(float *)(iVar1 + 0x2c));
  FUN_002a4690(&pkt.unk,&pos,&mat,&D_00697880);
  fVar4 = FUN_0052e930(DAT_007cad60 * (0.5f * *(float *)(param_1 + 0xb8)));
  fVar3 = fVar3 / fVar4;
  diff.x = pos.x - mat.x;
  diff.y = pos.y - mat.y;
  diff.z = pos.z - mat.z;
  fVar5 = FUN_004c69f0(&diff,&diff);
  fVar4 = FUN_0052e930(DAT_007cad60 * (0.5f * *(float *)(param_1 + 0xb8)));
  fVar5 = fVar5 + (5.0f * (*(float *)(iVar1 + 0x90) * *(float *)(iVar1 + 0x2c))) / fVar4;
  if (!(fVar3 <= fVar5)) {
    fVar3 = fVar3;
  }
  else {
    fVar3 = fVar5;
  }
  diff.x = diff.x * fVar3;
  diff.y = diff.y * fVar3;
  diff.z = diff.z * fVar3;
  pkt.end[0] = diff.x + mat.x;
  pkt.end[1] = diff.y + mat.y;
  pkt.end[2] = diff.z + mat.z;
  if ((*(u32 *)(DAT_007ce3ec + 0xc) & 0x200000) == 0) {
    FUN_002a3590(pkt.end,pkt.end);
  }
  FUN_002a2290((u16 *)param_1,(RwV3d *)pkt.out,(RwV3d *)pkt.end,1);
  FUN_002a3110((u16 *)param_1,1.0f);
  return;
}

// FUN_002b5240

void FUN_002b5240(BtlCamera* camera)
{
    BtlCamera* cam;
    BtlUnit* unit;
    BtlUnit* unit2;
    struct {
        f32 outX;
        f32 outY;
        f32 outZ;
        u8 quat[16];
        u8 pad[0xc];
        f32 sx;
        f32 sz;
        f32 px;
        f32 py;
        f32 pz;
        u8 padPoint[4];
        f32 vx;
        f32 vy;
        f32 vz;
        u8 padView[4];
        f32 d2x;
        f32 d2y;
        f32 d2z;
        u8 padD2[4];
        f32 dx;
        f32 dy;
        f32 dz;
        u8 padDelta[4];
        RwV3d center2;
        u8 padCenter[4];
        RwV3d center1;
    } w;
    f32 factor;
    f32 radiusFactor;
    f32 radius;
    f32 scale;
    f32 length;
    f32 horizFactor;
    f32 pzTemp;
    u64 xyTemp;
    f32 dxTemp;
    f32 sumX;
    f32 sumY;
    f32 sumZ;

    cam = camera;
    unit = cam->action->unit;
    unit2 = *(BtlUnit**)(*(u8**)(DAT_007ce3ec + 0x148) + 0x30);
    btlUnitGetSphereWorldCenter(unit, &w.center1);
    radius = unit->sphereRadius * unit->scale;
    btlUnitGetSphereWorldCenter(unit2, &w.center2);

    w.dx = w.center1.x - w.center2.x;
    w.dy = w.center1.y - w.center2.y;
    w.dz = w.center1.z - w.center2.z;
    factor = gp0xffff8030 * FUN_004c69f0(&w.dx, &w.dx);
    w.vx = w.dx * factor;
    w.vy = w.dy * factor;
    w.vz = w.dz * factor;
    w.vx = w.vx + w.center2.x;
    w.vy = w.vy + w.center2.y;
    w.vz = w.vz + w.center2.z;

    xyTemp = *(volatile /* Removing this function's qualifier batch loses FUN_002b5240 (MATCH nd0 -> MISMATCH nd512, size 912 -> 908) - measured W170. */ u64*)&w.center1;
    pzTemp = *(volatile /* Removing this function's qualifier batch loses FUN_002b5240 (MATCH nd0 -> MISMATCH nd512, size 912 -> 908) - measured W170. */ f32*)&w.center1.z;
    *(u64*)&w.px = xyTemp;
    w.pz = pzTemp;
    w.py = w.center2.y;
    w.d2x = w.px - w.center2.x;
    w.d2y = w.py - w.py;
    w.d2z = *(volatile /* Removing this function's qualifier batch loses FUN_002b5240 (MATCH nd0 -> MISMATCH nd512, size 912 -> 908) - measured W170. */ f32*)&w.pz - w.center2.z;
    FUN_004c69f0(&w.d2x, &w.d2x);
    factor = 1.5f * radius;
    w.px = w.px - w.d2z * factor;
    w.pz = w.d2x * factor + w.pz;
    w.py = w.center1.y + (unit->unk_8c * unit->scale) * gp0xffff8094;
    FUN_002a4690(w.quat, &w.px, &w.vx, &D_00697880);

    scale = 0.5f * cam->fovRad;
    radiusFactor = 5.0f * radius / tanf(gp0xffff8070 * scale);
    dxTemp = w.dx;
    w.dx = dxTemp * radiusFactor;
    w.dy = w.dy * radiusFactor;
    w.dz = w.dz * radiusFactor;
    sumY = w.py + w.dy;
    sumZ = w.pz + w.dz;
    sumX = w.px + w.dx;
    w.dx = sumX - w.vx;
    w.dy = sumY - w.vy;
    w.dz = sumZ - w.vz;
    length = FUN_004c69f0(&w.dx, &w.dx);
    w.dx = w.dx * length;
    w.dy = w.dy * length;
    w.dz = w.dz * length;

    scale = 0.5f * cam->fovRad;
    factor = length * tanf(gp0xffff8070 * scale);
    horizFactor = factor;
    horizFactor = horizFactor * 0.1328125f;
    w.sx = w.dx;
    w.sz = w.dz;
    FUN_004c6b20(&w.sx, &w.sx);
    w.vx = w.vx - w.sz * horizFactor;
    w.vz = w.sx * horizFactor + w.vz;

    w.outX = w.vx + w.dx;
    w.outY = w.vy + w.dy;
    w.outZ = w.vz + w.dz;
    if (w.outY < 25.0f) {
        w.outY = 25.0f;
    }
    FUN_002a2170(cam, &w.outX);
    FUN_002a3e80_call(50.0f, (u8*)cam->action, (u8*)&w.center1,
                 (u8*)&w.center2, 5);
}

// FUN_002b55d0

void FUN_002b55d0(void)

{
  FUN_00351bb0(8);
  return;
}


// FUN_002b5600
void FUN_002b5600(void* param_1)

{
  u8 auStack_20[32];

  FUN_002add10(param_1,0,0,auStack_20);
  FUN_002a2170((u16*)param_1,auStack_20);
  return;
}

// FUN_002b5650

void FUN_002b5650(int param_1)

{
  *(float *)(param_1 + 0x100) = (float)FUN_002ffbc0(0x168);
  FUN_002a3e80_call(0.0f, (u8 *)(uintptr_t)*(int *)(param_1 + 0xe0), 0, 0, 0x40);
}

// FUN_002b56e0

void FUN_002b56e0(u8* param_1)
{
  BtlUnit* unit;
  RwV3d spB0;
  RwV3d spA0;
  RwV3d sp90;
  struct {
    f32 outX;
    f32 outY;
    f32 outZ;
    u8 quat[16];
  } scratch;
  RwMatrix sp30;

  f32 scale;
  unit = *(BtlUnit **)(*(int *)(iGpffffb6fc + 0x148) + 0x30);
  FUN_0027ffb0(unit, &spB0);
  spB0.y = 0.0f;
  RtQuatTransformVectors(&sp90, &D_00697890, 1, &unit->rot);
  RwMatrixRotate(&sp30, &D_00697880, -52.5f, rwCOMBINEREPLACE);
  FUN_004c6c60(&spA0, &sp90, &sp30);
  spA0.x = spA0.x * 80.0f;
  spA0.y = spA0.y * 80.0f;
  spA0.z = spA0.z * 80.0f;
  spB0.x = spB0.x + spA0.x;
  spB0.y = spB0.y + spA0.y;
  spB0.z = spB0.z + spA0.z;
  RwMatrixRotate(&sp30, &D_00697870, -30.0f, rwCOMBINEREPLACE);
  RwMatrixRotate(&sp30, &D_00697880, *(f32 *)(param_1 + 0x100), rwCOMBINEPOSTCONCAT);
  FUN_004c6c60(&spA0, &D_00697890, &sp30);
  scale = 400.0f;
  scratch.outX = spB0.x + spA0.x * scale;
  scratch.outY = spB0.y + spA0.y * scale;
  scratch.outZ = spB0.z + spA0.z * scale;
  FUN_002a4690(scratch.quat, &scratch.outX, &spB0, &D_00697880);
  if (scratch.outY < 25.0f) {
    scratch.outY = 25.0f;
  }
  *(f32 *)(param_1 + 0x100) = *(f32 *)(param_1 + 0x100) + 0.25f;
  FUN_002a3e80_call(0.0f, 0, 0, 0, 4);
  FUN_002a2170(param_1, &scratch.outX);
}

// FUN_002b58f0

void FUN_002b58f0(BtlCamera* param_1)
{
    int iVar1;
    f32 fVar2;
    f32 fVar3;
    f32 fVar4;
    f32 quatW;
    f32 quatZ;
    f32 quatY;
    f32 quatX;
    struct {
        f32 fStack_40;
        f32 fStack_44;
        f32 fStack_48;
        f32 qSlot4c;
        f32 qSlot50;
        f32 qSlot54;
        f32 qSlot58;
        f32 fStack_5c;
        f32 fStack_60;
        f32 fStack_64;
        RtQuat quat;
        u8 pad_38[8];
        RwMatrix matrix;
        u8 pad_80[8];
        f32 fStack_c8;
        f32 fStack_cc;
        f32 fStack_d0;
        f32 fStack_d4;
        f32 fStack_d8;
        u8 pad_9c[4];
        f32 fStack_e0;
        f32 fStack_e4;
        f32 fStack_e8;
        u8 pad_ac[4];
        f32 fStack_f0;
        f32 fStack_f4;
        f32 fStack_f8;
        u8 pad_bc[4];
        f32 fStack_100;
        f32 fStack_104;
        f32 fStack_108;
        u8 pad_cc[4];
        f32 fStack_110;
        f32 fStack_114;
        f32 fStack_118;
    } work;
    #define fStack_40 work.fStack_40
    #define fStack_44 work.fStack_44
    #define fStack_48 work.fStack_48
    #define fStack_5c work.fStack_5c
    #define fStack_4c work.qSlot4c
    #define fStack_50 work.qSlot50
    #define fStack_54 work.qSlot54
    #define fStack_58 work.qSlot58
    #define fStack_60 work.fStack_60
    #define fStack_64 work.fStack_64
    #define fStack_c8 work.fStack_c8
    #define fStack_cc work.fStack_cc
    #define fStack_d0 work.fStack_d0
    #define fStack_d4 work.fStack_d4
    #define fStack_d8 work.fStack_d8
    #define fStack_e0 work.fStack_e0
    #define fStack_e4 work.fStack_e4
    #define fStack_e8 work.fStack_e8
    #define fStack_f0 work.fStack_f0
    #define fStack_f4 work.fStack_f4
    #define fStack_f8 work.fStack_f8
    #define fStack_100 work.fStack_100
    #define fStack_104 work.fStack_104
    #define fStack_108 work.fStack_108
    #define fStack_110 work.fStack_110
    #define fStack_114 work.fStack_114
    #define fStack_118 work.fStack_118
    #define matrix work.matrix
    #define quat work.quat
    /* Caller-specific typed ABIs retain the matrix/vector arguments used by this camera path. */
    extern void FUN_004c31b0(RwMatrix* mat, const RwV3d* axis, f32 angle, s32 mode);
    extern void FUN_004be1e0(RwV3d* out, const RwV3d* basis, s32 mode, void* source);

    iVar1 = *(int *)(*(int *)(iGpffffb6fc + 0x148) + 0x30);
    fVar2 = FUN_00280870(3, 1, &fStack_d0, 0, 0, 1);
    fVar3 = 550.0f;
    if (fVar2 < fVar3)
    {
        fVar2 = fVar3;
    }
    FUN_00280050(iVar1, &fStack_110);
    fStack_100 = fStack_110 - fStack_d0;
    fStack_104 = fStack_114 - fStack_d4;
    fStack_108 = fStack_118 - fStack_d8;
    fVar3 = FUN_004c69f0(&fStack_100, &fStack_100);
    fVar4 = 0.25f * fVar3;
    fVar3 = fVar4;
    fStack_f0 = fStack_100 * fVar3;
    fStack_f4 = fStack_104 * fVar3;
    fStack_f8 = fStack_108 * fVar3;
    fStack_e0 = fStack_d0 + fStack_f0;
    fStack_e4 = fStack_d4 + fStack_f4;
    fStack_e8 = fStack_d8 + fStack_f8;
    fVar2 = fVar2 * fGpffff807c;
    fVar3 = FUN_0052e930(gp0xffff8070 * (0.5f * param_1->fovRad));
    fVar3 = fVar2 / fVar3;
    FUN_004c31b0(&matrix, &D_00697870, 32.5f, 0);
    FUN_004c6c60((RwV3d*)&fStack_f0, &D_006978A0, &matrix);
    FUN_004be1e0((RwV3d*)&fStack_100, (const RwV3d*)&fStack_f0, 1,
                 (u8*)iVar1 + 0x1c);
    fStack_110 = fStack_100 * fVar2;
    fStack_114 = fStack_104 * fVar2;
    fStack_118 = fStack_108 * fVar2;
    fStack_110 = fStack_110 + fStack_d0;
    fStack_114 = fStack_114 + fStack_d4;
    fStack_118 = fStack_118 + fStack_d8;
    FUN_002a4690(&quat, &fStack_110, &fStack_e0, &D_00697880);
    FUN_004be1e0((RwV3d*)&fStack_f0, &D_006978A0, 1, &quat);
    fStack_100 = fStack_f0 * fVar3;
    fStack_104 = fStack_f4 * fVar3;
    fStack_108 = fStack_f8 * fVar3;
    fVar2 = fVar3 * FUN_0052e930(gp0xffff8070 * (0.5f * param_1->fovRad));
    fVar2 = fVar2 * 0.21875f;
    fVar2 = fVar2 * fGpffff807c;
    fStack_c8 = fStack_100;
    fStack_cc = fStack_108;
    FUN_004c6b20(&fStack_c8, &fStack_c8);
    fStack_e0 = fStack_e0 + fStack_cc * fVar2;
    fStack_e8 = fStack_e8 - fStack_c8 * fVar2;
    fStack_5c = fStack_e0 + fStack_100;
    fStack_60 = fStack_e4 + fStack_104;
    fStack_64 = fStack_e8 + fStack_108;
    quatX = quat.imag.x;
    quatY = quat.imag.y;
    quatZ = quat.imag.z;
    quatW = quat.real;
    quatX = quatX;
    quatY = quatY;
    quatZ = quatZ;
    quatW = quatW;
    fStack_4c = quatX;
    fStack_50 = quatY;
    fStack_54 = quatZ;
    fStack_58 = quatW;
    fVar3 = fVar3 - 100.0f;
    fStack_100 = fStack_f0 * fVar3;
    fStack_104 = fStack_f4 * fVar3;
    fStack_108 = fStack_f8 * fVar3;
    fStack_40 = fStack_e0 + fStack_100;
    fStack_44 = fStack_e4 + fStack_104;
    fStack_48 = fStack_e8 + fStack_108;
    FUN_002a3e80_call(0.0f, 0, 0, 0, 0x40);
    FUN_002a3590(&fStack_40, &fStack_40);
    FUN_002a3590(&fStack_5c, &fStack_5c);
    FUN_002a2290((u16*)param_1, (RwV3d*)&fStack_40, (RwV3d*)&fStack_5c, 1);
    FUN_002a3110((u16*)param_1, 3.0f);
    #undef fStack_40
    #undef fStack_44
    #undef fStack_48
    #undef fStack_4c
    #undef fStack_50
    #undef fStack_54
    #undef fStack_58
    #undef fStack_5c
    #undef fStack_60
    #undef fStack_64
    #undef fStack_c8
    #undef fStack_cc
    #undef fStack_d0
    #undef fStack_d4
    #undef fStack_d8
    #undef fStack_e0
    #undef fStack_e4
    #undef fStack_e8
    #undef fStack_f0
    #undef fStack_f4
    #undef fStack_f8
    #undef fStack_100
    #undef fStack_104
    #undef fStack_108
    #undef fStack_110
    #undef fStack_114
    #undef fStack_118
    #undef matrix
    #undef quat
}

// FUN_002b5cd0
void FUN_002b5cd0(BtlCamera* camera)
{
    struct {
        f32 sp40;
        f32 sp44;
        f32 sp48;
        f32 sp4C;
        f32 sp50;
        f32 sp54;
        f32 sp58;
        f32 sp5C;
        f32 sp60;
        f32 sp64;
        RtQuat sp68;
        u8 pad_to_80[8];
        RwMatrix sp80;
        u8 pad_to_C8[8];
        f32 spC8;
        f32 spCC;
        f32 spD0;
        f32 spD4;
        f32 spD8;
        f32 pad_to_E0_2[1];
        f32 spE0;
        f32 spE4;
        f32 spE8;
        f32 pad_to_F0[1];
        f32 spF0;
        f32 spF4;
        f32 spF8;
        f32 pad_to_100[1];
        f32 sp100;
        f32 sp104;
        f32 sp108;
        f32 pad_to_110[1];
        f32 sp110;
        f32 sp114;
        f32 sp118;
        f32 pad_tail;
    } stack;
#define sp40 stack.sp40
#define sp44 stack.sp44
#define sp48 stack.sp48
#define sp4C stack.sp4C
#define sp50 stack.sp50
#define sp54 stack.sp54
#define sp58 stack.sp58
#define sp5C stack.sp5C
#define sp60 stack.sp60
#define sp64 stack.sp64
#define sp68 stack.sp68
#define sp80 stack.sp80
#define spC8 stack.spC8
#define spCC stack.spCC
#define spD0 stack.spD0
#define spD4 stack.spD4
#define spD8 stack.spD8
#define spE0 stack.spE0
#define spE4 stack.spE4
#define spE8 stack.spE8
#define spF0 stack.spF0
#define spF4 stack.spF4
#define spF8 stack.spF8
#define sp100 stack.sp100
#define sp104 stack.sp104
#define sp108 stack.sp108
#define sp110 stack.sp110
#define sp114 stack.sp114
#define sp118 stack.sp118
    f32 var_f21;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    f32 temp_f6;
    BtlUnit* work;
    f32 temp_e4;

    work = *(BtlUnit**)(*(int *)(DAT_007ce3ec + 0x148) + 0x30);
    var_f21 = FUN_00280870(2, 1, &spD0, 0, 0, 1);
    FUN_00280050(work, &sp110);
    sp100 = sp110 - spD0;
    sp104 = sp114 - spD4;
    sp108 = sp118 - spD8;
    temp_f1 = DAT_007cada4 * RwV3dNormalize((RwV3d*)&sp100, (RwV3d*)&sp100);
    temp_f3 = sp100 * temp_f1;
    spF0 = temp_f3;
    temp_f2 = sp104 * temp_f1;
    spF4 = temp_f2;
    temp_f1_2 = sp108 * temp_f1;
    spF8 = temp_f1_2;
    spE0 = spD0 + temp_f3;
    spE4 = spD4 + temp_f2;
    spE8 = spD8 + temp_f1_2;
    if (var_f21 < 450.0f)
    {
        var_f21 = 450.0f;
    }
    temp_f20 = var_f21 / tanf(DAT_007cad60 * (0.5f * camera->fovRad));
    RwMatrixRotate(&sp80, &D_00697870, 35.0f, rwCOMBINEREPLACE);
    FUN_004c6c60((RwV3d*)&spF0, &D_006978A0, &sp80);
    RtQuatTransformVectors((RwV3d*)&sp100, (RwV3d*)&spF0, 1,
                           &work->rot);
    sp110 = sp100 * var_f21;
    sp114 = sp104 * var_f21;
    sp118 = sp108 * var_f21;
    FUN_002a4690(&sp68, &sp110, &spE0, &D_00697880);
    RtQuatTransformVectors((RwV3d*)&spF0, &D_006978A0, 1, &sp68);
    temp_f1_3 = 50.0f + temp_f20;
    temp_f0 = spF0 * temp_f1_3;
    sp100 = temp_f0;
    sp104 = spF4 * temp_f1_3;
    temp_f0_2 = spF8 * temp_f1_3;
    sp108 = temp_f0_2;
    temp_f1_4 = temp_f20 * tanf(DAT_007cad60 * (0.5f * camera->fovRad));
    temp_f1_4 *= 0.21875f;
    temp_f1_4 *= DAT_007cad6c;
    spC8 = sp100;
    spCC = sp108;
    FUN_004c6b20(&spC8, &spC8);
    temp_f6 = (spE0) + spCC * temp_f1_4;
    spE0 = temp_f6;
    temp_f5 = (spE8) - spC8 * temp_f1_4;
    spE8 = temp_f5;
    sp5C = temp_f6 + sp100;
    temp_e4 = spE4;
    sp60 = temp_e4 + sp104;
    sp64 = temp_f5 + sp108;
    *(RtQuat*)&sp4C = sp68;
    temp_f1_5 = temp_f20 - 50.0f;
    temp_f3_2 = spF0 * temp_f1_5;
    sp100 = temp_f3_2;
    temp_f2_2 = spF4 * temp_f1_5;
    sp104 = temp_f2_2;
    temp_f0_2 = spF8 * temp_f1_5;
    sp108 = temp_f0_2;
    sp40 = temp_f6 + temp_f3_2;
    sp44 = temp_e4 + temp_f2_2;
    sp48 = temp_f5 + temp_f0_2;
    FUN_002a3e80_call(0.0f, 0, 0, 0, 0x40);
    FUN_002a2290((u16*)camera, (RwV3d*)&sp40, (RwV3d*)&sp5C, 1);
    FUN_002a3110((u16*)camera, 3.5f);
}
#undef sp40
#undef sp44
#undef sp48
#undef sp4C
#undef sp50
#undef sp54
#undef sp58
#undef sp5C
#undef sp60
#undef sp64
#undef sp68
#undef sp80
#undef spC8
#undef spCC
#undef spD0
#undef spD4
#undef spD8
#undef spE0
#undef spE4
#undef spE8
#undef spF0
#undef spF4
#undef spF8
#undef sp100
#undef sp104
#undef sp108
#undef sp110
#undef sp114
#undef sp118
// FUN_002b6070

#ifndef PC_BUILD
asm void FUN_002b6070(BtlCamera* camera, f32 param_1, f32 param_2)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080802d
  .word 0x46006546
  .word 0x46006d06
  .word 0x8c8200e0
  .word 0x8c520030
  .word 0x8e440a2c
  .word 0x3c050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x0040882d
  .word 0x0240202d
  .word 0x27a500d0
  .word 0x0c0a004c
  .word 0x00000000
  .word 0x1620000d
  .word 0x00000000
  .word 0xc641008c
  .word 0xc640002c
  .word 0x460008c2
  .word 0xc782806c
  .word 0xc7a100d4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101c
  .word 0xe7a000d4
  .word 0x1000000b
  .word 0x00000000
  .word 0xc641008c
  .word 0xc640002c
  .word 0x460008c2
  .word 0xc782806c
  .word 0xc7a100d4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101d
  .word 0xe7a000d4
  .word 0x27a400e0
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x2647001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c024348
  .word 0x44821000
  .word 0xc7a000e0
  .word 0x46001142
  .word 0xe7a500f0
  .word 0xc7a000e4
  .word 0x46001042
  .word 0xe7a100f4
  .word 0xc7a000e8
  .word 0x46001102
  .word 0xe7a400f8
  .word 0xc7a300d4
  .word 0x46011840
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x46000880
  .word 0xc7a100d0
  .word 0x46050800
  .word 0x46010001
  .word 0xe7a000e0
  .word 0x46031001
  .word 0xe7a000e4
  .word 0xc7a100d8
  .word 0x46040800
  .word 0x46010001
  .word 0xe7a000e8
  .word 0x27a400e0
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc6410090
  .word 0xc640002c
  .word 0x46000842
  .word 0x3c024296
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0x46000046
  .word 0x46150d82
  .word 0x46140d42
  .word 0x24040002
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x24030001
  .word 0x10430009
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x3c0241f0
  .word 0x4482a000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c02c1f0
  .word 0x4482a000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x4600a007
  .word 0x46000b02
  .word 0x27a40090
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400f0
  .word 0x27a500e0
  .word 0x27a60090
  .word 0x0c131b18
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc60000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600b043
  .word 0xc7a000f0
  .word 0x460100c2
  .word 0xe7a300f0
  .word 0xc7a000f4
  .word 0x46010082
  .word 0xe7a200f4
  .word 0xc7a000f8
  .word 0x46010042
  .word 0xe7a100f8
  .word 0xc7a000d0
  .word 0x46030000
  .word 0xe7a00050
  .word 0xc7a000d4
  .word 0x46020000
  .word 0xe7a00054
  .word 0xc7a000d8
  .word 0x46010000
  .word 0xe7a00058
  .word 0x27a4005c
  .word 0x27a50050
  .word 0x27a600d0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140302
  .word 0x27a40090
  .word 0x3c050069
  .word 0x24a57880
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a400f0
  .word 0x27a500e0
  .word 0x27a60090
  .word 0x0c131b18
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0xc60000b8
  .word 0x46000842
  .word 0xc7808070
  .word 0x46010302
  .word 0x0c14ba4c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600a843
  .word 0xc7a000f0
  .word 0x460100c2
  .word 0xe7a300f0
  .word 0xc7a000f4
  .word 0x46010082
  .word 0xe7a200f4
  .word 0xc7a000f8
  .word 0x46010042
  .word 0xe7a100f8
  .word 0xc7a000d0
  .word 0x46030000
  .word 0xe7a0006c
  .word 0xc7a000d4
  .word 0x46020000
  .word 0xe7a00070
  .word 0xc7a000d8
  .word 0x46010000
  .word 0xe7a00074
  .word 0x27a40078
  .word 0x27a5006c
  .word 0x27a600d0
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc7a10054
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00054
  .word 0xc7a10070
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000002
  .word 0x00000000
  .word 0xe7a00070
  .word 0x0200202d
  .word 0x27a50050
  .word 0x27a6006c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x3c024040
  .word 0x44826000
  .word 0x0200202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002b6460

void FUN_002b6460(BtlCamera* camera)
{
  FUN_002b6070(camera, DAT_007cad64, DAT_007cad68);
  return;
}

// FUN_002b6490

void FUN_002b6490(void)

{
  FUN_00521250(DAT_00694c90,DAT_006941d4,0xf4);
  return;
}

typedef struct B64CameraWork {
  BtlAction *firstAction;
  BtlAction *secondAction;
  u16 unk_08;
  s16 index;
  u16 frame;
  u16 flags;
  u16 *entries;
} B64CameraWork;

typedef struct B64CameraEntry {
  s16 duration;
  u16 mode;
  f32 firstX;
  f32 firstY;
  f32 firstZ;
  f32 firstX2;
  f32 firstY2;
  f32 firstZ2;
  u16 targetMode;
  u16 pad_1e;
  f32 secondX;
  f32 secondY;
  f32 secondZ;
  f32 secondX2;
  f32 secondY2;
  f32 secondZ2;
  f32 angle;
} B64CameraEntry;

typedef struct B64CameraScratch {
  RwV3d firstOut;
  RwV3d secondOut;
  u8 pad_18[8];
  RwV3d rotatedFirst;
  RwV3d rotatedSecond;
  u8 pad_38[8];
  RtQuat rotation;
  RwMatrix matrix;
  RwV3d firstPos;
  u8 firstResult[16];
  RwV3d secondPos;
  u8 secondResult[24];
  RwV3d relativeSecond;
  u8 pad_dc[4];
  RwV3d relativeFirst;
  u8 pad_ec[4];
  u64 matrixLow;
  f32 matrixHigh;
  u8 pad_fc[4];
  RwV3d firstVector;
  u8 pad_10c[4];
  RwV3d secondVector;
  u8 pad_11c[4];
  RwV3d sphereBase;
  u8 pad_12c[4];
  RwV3d sphereVector;
  u8 pad_13c[4];
} B64CameraScratch;

#pragma alias FUN_002d1de0_b64d0 FUN_002d1de0
extern void FUN_002d1de0_b64d0(RtQuat *out, const RwV3d *from, const RwV3d *to);
#pragma alias FUN_002802d0_b64d0 FUN_002802d0
extern void FUN_002802d0_b64d0(BtlUnit *first, BtlUnit *second, RwV3d *out);
#pragma alias FUN_004be1e0_b64d0 FUN_004be1e0
extern void FUN_004be1e0_b64d0(RwV3d *out, const RwV3d *in, s32 count, const RtQuat *rotation);
#pragma alias FUN_00280130_b64d0 FUN_00280130
extern void FUN_00280130_b64d0(BtlUnit *unit, RwV3d *out);
#pragma alias FUN_00280200_b64d0 FUN_00280200
extern void FUN_00280200_b64d0(BtlUnit *unit, BtlUnitAnimBounds *bounds, RwV3d *out);
#pragma alias FUN_004c6c60_b64d0 FUN_004c6c60
extern void FUN_004c6c60_b64d0(void *out, const RwV3d *in, const RwMatrix *matrix);
extern BtlUnitAnimBounds *func_002fc520(BtlUnit *unit);
#pragma alias FUN_002b6bd0_b64d0 FUN_002b6bd0
extern u32 FUN_002b6bd0_b64d0(struct B64CameraWork* work);
#pragma alias FUN_002a2290_b64d0 FUN_002a2290
extern void FUN_002a2290_b64d0(BtlCamera* camera, RwV3d* first,
                                RwV3d* second, s32 mode);
#pragma alias FUN_002a3110_b64d0 FUN_002a3110
extern void FUN_002a3110_b64d0(BtlCamera* camera, f32 step);

/* W419: DAT_00697888_abs restores retail absolute addressing; nd417 -> 326, object 1776 -> 1780/1792, rate .234797 -> .183146. */
// FUN_002b64d0
#ifndef PC_BUILD
asm u32 FUN_002b64d0(BtlCamera* camera, B64CameraWork* work)
{
  .set noreorder
  .word 0x27bdfe50
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x0260202d
  .word 0x0c0adaf4
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100001a3
  .word 0x00000000
  .word 0x8e720010
  .word 0x8662000a
  .word 0x16400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000019c
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x2a220004
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000194
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1222000a
  .word 0x00000000
  .word 0x9663000c
  .word 0x00111100
  .word 0x00511023
  .word 0x00021080
  .word 0x00521021
  .word 0x84420004
  .word 0x0062102a
  .word 0x14400182
  .word 0x00000000
  .word 0x26220001
  .word 0x0002843c
  .word 0x0010843f
  .word 0x96420000
  .word 0x0202082a
  .word 0x10200176
  .word 0x00000000
  .word 0x8e620000
  .word 0x10400173
  .word 0x00000000
  .word 0x8c440030
  .word 0x0c0a6874
  .word 0x00000000
  .word 0x1040016e
  .word 0x00000000
  .word 0x8e620004
  .word 0x1040016b
  .word 0x00000000
  .word 0x8c440030
  .word 0x0c0a6874
  .word 0x00000000
  .word 0x10400166
  .word 0x00000000
  .word 0x00101100
  .word 0x00501023
  .word 0x00021080
  .word 0x02421021
  .word 0x24500004
  .word 0x9662000e
  .word 0x30420010
  .word 0x1440000c
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c430030
  .word 0x8e620004
  .word 0x8c420030
  .word 0x27a400b0
  .word 0x24650004
  .word 0x24460004
  .word 0x0c0b4778
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x8e630000
  .word 0x8e620004
  .word 0x8c640030
  .word 0x8c450030
  .word 0x27a60150
  .word 0x0c0a00b4
  .word 0x00000000
  .word 0x8e630004
  .word 0x8e620000
  .word 0x8c640030
  .word 0x8c450030
  .word 0x27a60140
  .word 0x0c0a00b4
  .word 0x00000000
  .word 0x27a400b0
  .word 0x27a50150
  .word 0x27a60140
  .word 0x0c0b4778
  .word 0x00000000
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe7a20180
  .word 0xe7a10184
  .word 0xe7a00188
  .word 0xc6020010
  .word 0xc6010014
  .word 0xc6000018
  .word 0xe7a20170
  .word 0xe7a10174
  .word 0xe7a00178
  .word 0x9662000e
  .word 0x30420002
  .word 0x10400009
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a00180
  .word 0x46010002
  .word 0xe7a00180
  .word 0xc7a00170
  .word 0x46010002
  .word 0xe7a00170
  .word 0x96020002
  .word 0x24060001
  .word 0x10460003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c520030
  .word 0x27a40090
  .word 0x27a50180
  .word 0x27a700b0
  .word 0x0c12f878
  .word 0x00000000
  .word 0x27a4009c
  .word 0x27a50170
  .word 0x24060001
  .word 0x27a700b0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6430004
  .word 0xc7a00090
  .word 0x46001800
  .word 0xe7a00100
  .word 0xc6420008
  .word 0xc7a00094
  .word 0x46001000
  .word 0xe7a00104
  .word 0xc641000c
  .word 0xc7a00098
  .word 0x46000800
  .word 0xe7a00108
  .word 0xc7a0009c
  .word 0x46001800
  .word 0xe7a0011c
  .word 0xc7a000a0
  .word 0x46001000
  .word 0xe7a00120
  .word 0xc7a000a4
  .word 0x46000800
  .word 0xe7a00124
  .word 0xc6020020
  .word 0xc6010024
  .word 0xc6000028
  .word 0xe7a20180
  .word 0xe7a10184
  .word 0xe7a00188
  .word 0xc602002c
  .word 0xc6010030
  .word 0xc6000034
  .word 0xe7a20170
  .word 0xe7a10174
  .word 0xe7a00178
  .word 0x9662000e
  .word 0x30420002
  .word 0x10400009
  .word 0x00000000
  .word 0x3c02bf80
  .word 0x44820800
  .word 0xc7a00180
  .word 0x46010002
  .word 0xe7a00180
  .word 0xc7a00170
  .word 0x46010002
  .word 0xe7a00170
  .word 0x9603001c
  .word 0x24020002
  .word 0x1062002a
  .word 0x00000000
  .word 0x24060001
  .word 0x10660003
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c520030
  .word 0x27a40090
  .word 0x27a50180
  .word 0x27a700b0
  .word 0x0c12f878
  .word 0x00000000
  .word 0x27a4009c
  .word 0x27a50170
  .word 0x24060001
  .word 0x27a700b0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6430004
  .word 0xc7a00090
  .word 0x46001800
  .word 0xe7a00070
  .word 0xc6420008
  .word 0xc7a00094
  .word 0x46001000
  .word 0xe7a00074
  .word 0xc641000c
  .word 0xc7a00098
  .word 0x46000800
  .word 0xe7a00078
  .word 0xc7a0009c
  .word 0x46001800
  .word 0xe7a0007c
  .word 0xc7a000a0
  .word 0x46001000
  .word 0xe7a00080
  .word 0xc7a000a4
  .word 0x46000800
  .word 0xe7a00084
  .word 0x1000007b
  .word 0x00000000
  .word 0x8e620004
  .word 0x8c520030
  .word 0x0240202d
  .word 0x0c0bf148
  .word 0x00000000
  .word 0x0040a82d
  .word 0x14400020
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50190
  .word 0x0c0a004c
  .word 0x00000000
  .word 0x27a401a0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700b0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc641002c
  .word 0xc6400090
  .word 0x46010042
  .word 0xc7a001a0
  .word 0x460100c2
  .word 0xc7a001a4
  .word 0x46010082
  .word 0xc7a001a8
  .word 0x46010042
  .word 0xc7a00190
  .word 0x46030000
  .word 0xe7a00070
  .word 0xc7a00194
  .word 0x46020000
  .word 0xe7a00074
  .word 0xc7a00198
  .word 0x46010000
  .word 0xe7a00078
  .word 0x1000002d
  .word 0x00000000
  .word 0x0240202d
  .word 0x02a0282d
  .word 0x27a60190
  .word 0x0c0a0080
  .word 0x00000000
  .word 0x27a401a0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700b0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc641002c
  .word 0x96a20008
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
  .word 0x46010042
  .word 0xc7a001a0
  .word 0x460100c2
  .word 0xc7a001a4
  .word 0x46010082
  .word 0xc7a001a8
  .word 0x46010042
  .word 0xc7a00190
  .word 0x46030000
  .word 0xe7a00070
  .word 0xc7a00194
  .word 0x46020000
  .word 0xe7a00074
  .word 0xc7a00198
  .word 0x46010000
  .word 0xe7a00078
  .word 0xc7a10074
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000834
  .word 0x45000004
  .word 0x00000000
  .word 0xe7a00074
  .word 0x10000018
  .word 0x00000000
  .word 0x9663000e
  .word 0x30620008
  .word 0x1040000a
  .word 0x00000000
  .word 0x3c02437a
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x4501000e
  .word 0x00000000
  .word 0xe7a00074
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400008
  .word 0x00000000
  .word 0x3c024316
  .word 0x44820000
  .word 0x00000000
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe7a00074
  .word 0xc7a20070
  .word 0xc7a10074
  .word 0xc7a00078
  .word 0xe7a2007c
  .word 0xe7a10080
  .word 0xe7a00084
  .word 0x27a4010c
  .word 0x27a50100
  .word 0x27a60070
  .word 0x3c070069
  .word 0x24e77880
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0xc60c0038
  .word 0x44800000
  .word 0x00000000
  .word 0x460c0032
  .word 0x4501000f
  .word 0x00000000
  .word 0x27a400c0
  .word 0x3c050069
  .word 0x24a57890
  .word 0x0000302d
  .word 0x0c130c6c
  .word 0x00000000
  .word 0x27a40160
  .word 0x3c050069
  .word 0x24a57880
  .word 0x27a600c0
  .word 0x0c131b18
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x3c020069
  .word 0xdc437880
  .word 0x3c020069
  .word 0xc4407888
  .word 0xffa30160
  .word 0xe7a00168
  .word 0x27a40128
  .word 0x27a5011c
  .word 0x27a6007c
  .word 0x27a70160
  .word 0x0c0a91a4
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50100
  .word 0x27a6011c
  .word 0x24070001
  .word 0x0c0a88a4
  .word 0x00000000
  .word 0x86020000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a8c44
  .word 0x00000000
  .word 0x26220001
  .word 0xa662000a
  .word 0xa660000c
  .word 0x10000008
  .word 0x00000000
  .word 0x9662000e
  .word 0x3042fffe
  .word 0xa662000e
  .word 0x10000003
  .word 0x00000000
  .word 0x24620001
  .word 0xa662000c
  .word 0x96620008
  .word 0x24420001
  .word 0xa6620008
  .word 0x24020001
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd01b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002b6bd0

u32 FUN_002b6bd0(int param_1)

{
  return (*(u16 *)(param_1 + 0xe) & 1) != 0;
}

// FUN_002b6bf0

void FUN_002b6bf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,u32 param_4,
                 u16 param_5)

{
  u32 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[4] = param_4;
  *(undefined2 *)(param_1 + 2) = 0;
  *(short *)((int)param_1 + 10) = -1;
  *(undefined2 *)(param_1 + 3) = 0;
  *(u16 *)((int)param_1 + 0xe) = *(u16 *)((int)param_1 + 0xe) | 1;
  *(u16 *)((int)param_1 + 0xe) = *(u16 *)((int)param_1 + 0xe) & 0xfffd;
  if (((param_5 & 1) != 0) && !(FUN_002ffbc0(100) < 0x32)) {
    *(u16 *)((int)param_1 + 0xe) = *(u16 *)((int)param_1 + 0xe) | 2;
  }
  if ((param_5 & 2) != 0) {
    *(u16 *)((int)param_1 + 0xe) = *(u16 *)((int)param_1 + 0xe) | 4;
  }
  if ((param_5 & 4) != 0) {
    *(u16 *)((int)param_1 + 0xe) = *(u16 *)((int)param_1 + 0xe) | 8;
  }
  if ((param_5 & 8) != 0) {
    *(u16 *)((int)param_1 + 0xe) = *(u16 *)((int)param_1 + 0xe) | 0x10;
  }
  return;
}

// FUN_002b6cd0
u8* FUN_002b6cd0(int param_1)
{
  u16 *puVar1;
  short sVar2;
  u16 counter;
  short frame;

  if ((*(u16 *)(param_1 + 0xe) & 1) == 0) {
    puVar1 = (u16 *)0x0;
  }
  else {
    puVar1 = *(u16 **)(param_1 + 0x10);
    sVar2 = *(short *)(param_1 + 10);
    if (puVar1 == (u16 *)0x0) {
      puVar1 = (u16 *)0x0;
    }
    else {
      if (sVar2 == -1) {
        goto increment_index;
      }
      counter = *(u16 *)(param_1 + 0xc);
      frame = puVar1[sVar2 * 0x1e + 2];
      if (counter < frame) {
        goto after_increment;
      }
increment_index:
      sVar2++;
after_increment:
      if (*puVar1 > sVar2) {
        goto check_index;
      }
      puVar1 = (u16 *)0x0;
      goto done;
check_index:
      if (sVar2 < 4) {
        goto make_pointer;
      }
      puVar1 = (u16 *)0x0;
      goto done;
make_pointer:
      puVar1 = puVar1 + sVar2 * 0x1e + 2;
done:
      ;
    }
  }
  return (u8*)puVar1;
}

// FUN_002b6db0

void FUN_002b6db0(int param_1)

{
  FUN_00521408(param_1,0,0x14);
  return;
}

// FUN_002b6de0

void FUN_002b6de0(unsigned short *param_1)
{
  int iVar1;
  float fVar2;
  float fVar3;

  FUN_00521408(param_1,0,8);
  for (iVar1 = *(int *)(iGpffffb6fc + 0x15c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xa30)) {
    if (FUN_0030b5a0(*(undefined4 *)(iVar1 + 0xa2c),0) != 0) {
      continue;
    }
    fVar3 = *(float *)(iVar1 + 0x90) * *(float *)(iVar1 + 0x2c);
    fVar2 = *(float *)(iVar1 + 0x8c) * *(float *)(iVar1 + 0x2c);
    if (fVar2 <= 200.0f) {
      if (fVar3 <= 75.0f) {
        param_1[0] = param_1[0] + 1;
      }
      else if (fVar3 <= 125.0f) {
        param_1[1] = param_1[1] + 1;
      }
      else if (fVar3 <= 200.0f) {
        param_1[2] = param_1[2] + 1;
      }
    }
    else if (fVar2 <= 300.0f) {
      if (fVar3 <= 125.0f) {
        param_1[1] = param_1[1] + 1;
      }
      else if (fVar3 <= 200.0f) {
        param_1[2] = param_1[2] + 1;
      }
    }
    else {
      param_1[2] = param_1[2] + 1;
    }
    param_1[3] = param_1[3] + 1;
  }
}

// FUN_002b6f70

u32 FUN_002b6f70(u16 *param_1)
{
  u8 *base;
  u8 *entry;
  u32 i;

  i = 0;
  base = D_00694F10;
  for (; (i & 0xffff) < 0x18U; i = (u16)(i + 1)) {
    entry = base + (u16)i * 0xe0;
    if (param_1[0] > *(u16 *)(entry + 0xd8)) continue;
    if (param_1[1] > *(u16 *)(entry + 0xda)) continue;
    if (param_1[2] > *(u16 *)(entry + 0xdc)) continue;
    return i;
  }
  return 0x17;
}
// FUN_002b7000
void FUN_002b7000(int param_1,u32 param_2,undefined4 param_3)
{
  u8 mode = *(u8 *)(param_1 + 0xa2);
  volatile /* Removing this function's qualifier batch loses FUN_002b7000 (MATCH nd0 -> MISMATCH nd22, size 88 -> 88) - measured W170. */ u8 *table;
  switch (mode) {
  case 0:
    table = DAT_007ce3ec;
    *(undefined4 *)((volatile /* Removing this function's qualifier batch loses FUN_002b7000 (MATCH nd0 -> MISMATCH nd22, size 88 -> 88) - measured W170. */ u8 *)(uintptr_t)((param_2 & 0xffff) * 4) +
                    (uintptr_t)table + 0xa3c) = param_3;
    break;
  case 1:
    table = DAT_007ce3ec;
    *(undefined4 *)((volatile /* Removing this function's qualifier batch loses FUN_002b7000 (MATCH nd0 -> MISMATCH nd22, size 88 -> 88) - measured W170. */ u8 *)(uintptr_t)((param_2 & 0xffff) * 4) +
                    (uintptr_t)table + 0xa4c) = param_3;
    break;
  }
}

