#include "Main/Battle/Data/datCalc.h"
#include "Main/g_data.h"
#include "Kosaka/k_assert.h"
#include "Graphics/Effect/effMisc.h"

extern f32 sqrtf(f32);
extern u32 FUN_0016c5f0();
extern u32 FUN_0016c670();
extern u32 FUN_0016c920();
extern u32 FUN_0016cb80();
extern u32 FUN_0016ccb0();
extern u32 FUN_0016cf40();
extern u32 FUN_0016cf90();
extern u32 FUN_0016d9d0();
extern u32 FUN_0016f190();
extern u32 FUN_0016f630();
extern u32 FUN_0016f900();
extern u32 FUN_0016f9f0();
extern u32 FUN_0016f9f0_datcalc(s16 pcId, s32 equipmentIdx);
extern u32 FUN_0016fae0();
extern u32 FUN_0016fae0_datcalc(s16 pcId, s32 equipmentIdx);
extern u32 FUN_0016fbd0();
extern u32 FUN_0016fcc0();
extern u32 FUN_00170760();
extern u32 FUN_00170d60();
extern u32 FUN_00170e40();
extern u32 FUN_00170e90();
extern u32 FUN_00173380();
extern u32 FUN_00173460(u16 pcId, s32 skillIdx);
extern u8 FUN_00173510(u16 pcId, u16 statId);
extern u8 FUN_00173510_u16(u16, u32);
extern u8 FUN_001738d0(u16 pcId, u32 statId);
extern u32 FUN_00174960();
extern u32 FUN_00174a90();
extern u32 FUN_001752b0();
extern u32 FUN_00175410();
/* W419 scenario prototype probe: FUN_0017d800(void) changed FUN_00306e80
 * nd2428/object4584 to nd2780/object4584; retained old-style declaration. */
extern u32 FUN_0017d800();
extern u32 FUN_00181b10();
extern u32 FUN_0019d3f0();
extern u32 FUN_002ffbc0();
extern u32 FUN_002ffcc0();
extern u32 FUN_002ffd70();
extern u32 FUN_002ffdf0();
extern u32 FUN_003004f0();
extern u32 FUN_003004F0();
extern u32 FUN_00300530();
extern u32 FUN_00300550();
extern u32 FUN_00300560();
extern u32 FUN_00300580();
extern u32 FUN_003005E0();
extern u32 FUN_003005e0();
extern u32 FUN_00300870();
extern u32 FUN_003009a0();
extern u32 FUN_003009A0();
extern u32 FUN_00300D80();
extern u32 FUN_00300d80();
extern u32 FUN_00308ba0();
extern u32 FUN_00308BA0();
extern u32 FUN_00308C60();
extern u32 FUN_00308c60();
extern u32 FUN_0030B5A0();
extern u32 FUN_0030b5a0();
extern u32 FUN_0030b5e0();
extern u32 FUN_0030B5E0();
extern u32 FUN_00311190(int);
extern void FUN_00311190_typed(u32);
extern u32 FUN_003111f0();
extern u32 FUN_00311250();
extern void FUN_0035f080(float);
extern u32 FUN_003951d0();
u32 datCalcGetMaxSp(DatUnit* unit);
s32 FUN_00300410(DatUnit *unit,s32 hpDelta);
s32 FUN_00300480(DatUnit *unit,s32 spDelta);
u32 FUN_003005a0(u16* param);
u8 FUN_00300700(u16 *param_1,s16 param_2);
s32 FUN_00300750(u16 param_1,u16 param_2);
s32 FUN_00300af0(s32 param_1);
u8 FUN_00300b60(u16 *param_1,u32 param_2);
u8 FUN_00300c90(u32 param_1,u32 param_2);
u32 FUN_00300e90(u32 param_1);
s8 FUN_00300f60(int param_1,u32 param_2);
void FUN_00301030(int param_1,u8 param_2,s8 param_3);
void FUN_00301150(int param_1,u8 param_2,s8 param_3);
u8 FUN_00301230(int param_1,u32 param_2,char param_3);
extern u8 FUN_00301230_narrow(u8 *param_1,u8 param_2,s8 param_3);
void FUN_00301540(int param_1,u32 param_2);
void FUN_00301690(u32 param_1);
s8 FUN_00301750(int param_1,u32 param_2);
void FUN_00301870(int param_1);
float FUN_00301880(u32 param_1,u32 param_2,u32 param_3);
u8 FUN_00301ca0(u32 param_1,u32 param_2);
void FUN_00302380(u32 param_1,u32 param_2,u32 param_3);
void FUN_00302c50(u32 param_1);
void FUN_00302d40(u32 param_1);
u8 FUN_00302f50(u32 param_1);
u32 FUN_00303130(u32 param_1,u32 param_2,u32 param_3,u16 param_4,short param_5,
                 short param_6,u32 param_7,u8 param_8);
u32 FUN_00305970(u32 param_1,u32 param_2,u32 param_3);
u32 FUN_00306020(u32 param_1,u32 param_2,u32 param_3,u16 param_4,
                 u16 param_5,u16 param_6);
u32 FUN_00306510(u32 param_1,u32 param_2,u32 param_3,u16 param_4);
u32 FUN_00306610(u32 param_1,s32 param_2,s32 param_3,u32 param_4);
u32 FUN_003068d0(u32 param_1,s32 param_2,s32 param_3,u32 param_4);
u32
FUN_00306bc0(u32 param_1,s32 param_2,s32 param_3,u32 param_4,s32 param_5,s32 param_6,
            s32 param_7);
u32 FUN_00306d90(u16 param_1,u32 param_2);
u32 FUN_00306e80(s32 param_1,s32 param_2);
int FUN_003080c0(short param_1);
short FUN_00308120(short param_1,int param_2);
s32 FUN_003082f0(s32 param_1,u32 param_2);
extern s32 FUN_003082f0_u16(s32 param_1,u16 param_2);
extern s32 FUN_003082f0_one(s32 param_1);
u32 FUN_003083f0(u32 param_1,u32 param_2);
u8 FUN_003086c0(void *param_1,u32 param_2);
u32 FUN_003086f0(u32 param_1,u32 param_2);
u32 FUN_00308860(u16 param_1);
u8 FUN_003088b0(u16 param_1);
u16 FUN_00308930(u16 *param_1);
u8 FUN_00308a50(u16 param_1);
u16 FUN_00308a80(u32 param_1);
int FUN_00308bb0(u16 *param_1);
u16 FUN_00308ed0(u16 *param_1);
u8 FUN_00308f80(u16 *param_1);
u8 FUN_00308fd0(u16 *param_1,u16 param_2);
u32 FUN_00309080(u16 *param_1,u8 param_2);
u32 FUN_00309250(u16 *param_1,u8 param_2);
u8 FUN_003093a0(u16 *param_1);
u32 FUN_00309490(s32 param_1,u32 param_2,u16 param_3,u32 param_4);
u32 FUN_0030a740(s32 param_1,u32 param_2,u32 param_3,short param_4);
u32 FUN_0030af00(s32 param_1,u16 *param_2,u32 param_3,u32 param_4,u32 param_5);
u32
FUN_0030b130(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5);
u32 FUN_0030b210(u32 param_1,int param_2,u16 param_3,short param_4);
u32 FUN_0030b4b0(u32 param_1,u32 param_2);
u32 FUN_0030b640(s32 param_1,s32 param_2);
u32 FUN_0030b9a0(u16 *param_1,u16 param_2,u16 param_3);
int FUN_0030bb40(u16 param_1);
int FUN_0030bbb0(u8 param_1);
u16 FUN_0030bc20(s16 param_1);
extern short FUN_0030bde0_narrow(u16 *param_1,s32 *param_2);
u32 FUN_0030bc50(int param_1);
short FUN_0030bde0(u16 *param_1,s32 param_2);
int FUN_0030c0c0(void);
s32 FUN_0030c220(s32 param_1);
u8 FUN_0030c2a0(u32 param_1);
u32 FUN_0030c3a0(u16 *param_1);
void FUN_0030c440(void);
void FUN_0030c490(u16 param_1);
void FUN_0030c520(void);
void FUN_0030c930(void);
void FUN_0030cb90(void);
void FUN_0030cc40(void);
void FUN_0030cdb0(void);
void FUN_0030cec0(void);
void FUN_0030cf00(void);
void FUN_0030d000(void);
void FUN_0030d0e0(void);
void FUN_0030d1c0(void);
void FUN_0030d2a0(void);
void FUN_0030d380(void);
void FUN_0030d460(void);
void FUN_0030d4a0(void);
void FUN_0030d4e0(void);
void FUN_0030d610(void);
void FUN_0030d760(void);
void FUN_0030db80(void);
void FUN_0030ddf0(void);
void FUN_0030dec0(void);
void FUN_0030e030(void);
void FUN_0030e140(void);
void FUN_0030e180(void);
void FUN_0030e280(void);
void FUN_0030e360(void);
void FUN_0030e440(void);
void FUN_0030e520(void);
void FUN_0030e600(void);
void FUN_0030e6e0(void);
void FUN_0030e720(void);
void FUN_0030e760(void);
void FUN_0030e8a0(void);
void FUN_0030ea00(void);
void FUN_0030ee10(void);
void FUN_0030f070(void);
void FUN_0030f120(void);
void FUN_0030f290(void);
void FUN_0030f3a0(void);
void FUN_0030f3e0(void);
void FUN_0030f4e0(void);
void FUN_0030f5c0(void);
void FUN_0030f6a0(void);
void FUN_0030f780(void);
void FUN_0030f860(void);
void FUN_0030f940(void);
void FUN_0030f980(void);
void FUN_0030f9c0(void);
void FUN_0030faf0(void);
u32
FUN_0030fc40(u32 param_1,u32 param_2,u32 param_3,u16 param_4,
            u32 param_5);
u32 FUN_0030fdc0(void);
float FUN_0030fdf0(int param_1,u32 param_2);
extern f32 DAT_007cad74;
extern f32 DAT_007cad8c;
extern f32 DAT_007cadb4;
extern f32 DAT_007cae84;
extern f32 DAT_007caf8c;
extern u32 DAT_007ce3ec;
extern u32 DAT_007ce3f4;
extern u32 DAT_007ce3f8;
extern u32 DAT_007ce3fc;
extern u32 DAT_007ce410;
extern u32 DAT_007ce414;
extern u32 DAT_007ce46c;
extern u32 DAT_007ce470;
extern u32 DAT_007ce478;
extern u32 DAT_007ce47c;
extern u32 DAT_00957190;
extern u32 DAT_00957194;
extern u32 DAT_00957198;
extern u32 DAT_0095719c;
extern u32 DAT_009571a0;
extern u8 DAT_00957190_abs[];
extern u8 DAT_00957194_abs[];
extern u8 DAT_00957198_abs[];
extern u8 DAT_0095719c_abs[];
extern u8 DAT_009571a0_abs[];
extern u32 DAT_009571a4;
extern u8 DAT_009571a4_abs[];
extern void (*PTR_LAB_0069aa90[])(void);
extern void (*PTR_LAB_0069aae0[])(void);
extern void (*PTR_LAB_0069ab30[])(void);
extern f32 fGpffff8070;
extern f32 fGpffff8084;
extern f32 fGpffff8088;
extern f32 fGpffff80a4;
extern f32 fGpffff80c4;
extern f32 fGpffff80e0;
extern f32 fGpffff8194;
extern f32 fGpffff8278;
extern f32 fGpffff829c;
extern f32 fGpffff82a0;
extern f32 fGpffff82a4;
extern f32 fGpffff82a8;
extern f32 fGpffff82ac;
extern u32 gp0xffff9d08;
extern u32 iGpffffb704;
extern u32 iGpffffb708;
extern u32 iGpffffb720;
extern u32 iGpffffb790;
extern u32 iGpffffb79c;
extern u32 iGpffffb7a4;
extern u32 iGpffffb7a8;
extern u32 iGpffffb7fc;
extern u32 iGpffffb800;

typedef struct DatCalcEnemy
{
    u8 unk_00[4];
    u16 hp;
    u16 sp;
    u8 unk_08[6];
    u16 skills[8];
    u8 unk_1e[0x20];
} DatCalcEnemy;

typedef struct DatCalcEquipmentEffect
{
    u8 unk_00[0x1c];
    u32 skillId;
    u8 unk_20[4];
} DatCalcEquipmentEffect;

typedef struct DatCalcWeapon
{
    u8 unk_00[4];
    u32 category;
    u8 unk_08[0x20];
} DatCalcWeapon;

extern DatCalcEnemy* D_007CE410;
extern u16 func_0016cc00(s16 pcId);
extern DatCalcWeapon* func_00170d60(s16 weaponId);
extern DatCalcEquipmentEffect* func_00170e40(s16 equipmentId);
extern const char D_0069aa80[];
#pragma alias D_0069aa80_abs D_0069aa80
extern u8 D_0069aa80_abs[];
u32 datCalc00308ba0(void);
u16* func_00308bb0(DatUnit* unit);

static u32 sPrevPercentRand; // 007ce510

// FUN_002ffbc0
u32 datCalcRand(u32 max)
{
    u32 rand;

    K_ASSERT(max != 0, 26);

    if (max == DATCALC_RAND_PERCENT)
    {
        rand = (((effMiscRand(NULL) % 4096) + (effMiscRand(NULL) % 4096)) % 4096) / 41;
        
        if (sPrevPercentRand >= rand - 3 && 
            sPrevPercentRand <= rand + 3)
        {
            rand = (((effMiscRand(NULL) % 4096) + (effMiscRand(NULL) % 4096)) % 4096) / 41;
        }

        sPrevPercentRand = rand;
    }
    else
    {
        rand = effMiscRand(NULL) % max;
    }

    return rand;
}

// FUN_002ffcc0
u8 datCalcGetLevel(DatUnit* unit){
    u8 level;
    DatPersonaWork* persona;

    if (unit->flags & UNIT_FLAG_ENEMY || IS_HERO(unit->id))
    {
        level = unit->level;
    }
    else
    {
        persona = datPersonaGetByPcId(unit->id);
        K_ASSERT(persona != NULL, 66);

        level = datPersonaGetLevel(persona);
    }

    K_ASSERT(level > 0, 70);

    return level;
}

// FUN_002ffd70
u16 datCalcGetHp(DatUnit* unit)
{
    return unit->hp;
}

// FUN_002ffd80
u16 datCalcGetSp(DatUnit* unit)
{
    return unit->sp;
}

// FUN_002ffd90
void datCalcSetHp(DatUnit* unit, u16 hp)
{
    if (hp > 999 && !(unit->flags & UNIT_FLAG_ENEMY))
    {
        hp = 999;
    }

    unit->hp = hp;
}

// FUN_002ffdc0
void datCalcSetSp(DatUnit* unit, u16 sp)
{
    if (sp > 999 && !(unit->flags & UNIT_FLAG_ENEMY))
    {
        sp = 999;
    }

    unit->sp = sp;
}

// FUN_002ffdf0
u16 datCalcGetMaxHp(DatUnit* unit)
{
    s32 hp;
    s32 result;
    s32 baseHp;
    u16 rawBaseHp;
    u16 pcId;
    hp = 0;
    pcId = unit->id;

    if (unit->flags & UNIT_FLAG_ENEMY)
    {
        K_ASSERT(pcId < 0x150, 169);
        rawBaseHp = D_007CE410[pcId].hp;
    }
    else
    {
        K_ASSERT(pcId < PC_MAX, 172);
        rawBaseHp = func_0016cc00((s16)pcId);
    }
    baseHp = rawBaseHp;

    if (datCalcHasSkill(unit, 0x219))
    {
        hp += (baseHp * 10) / 100;
    }
    if (datCalcHasSkill(unit, 0x21a))
    {
        hp += (baseHp * 20) / 100;
    }
    if (datCalcHasSkill(unit, 0x21b))
    {
        hp += (baseHp * 30) / 100;
    }
    if (datCalcHasSkill(unit, 0x26c))
    {
        hp += (baseHp * 50) / 100;
    }
    if (datCalcHasSkill(unit, 0x237))
    {
        hp += baseHp;
    }
    if (datCalcHasSkill(unit, 0x238))
    {
        hp -= (baseHp * 50) / 100;
    }

    hp += (u16)datCalcCountEquipmentWithEffect(unit, 0x1a) * 10;
    hp += (u16)datCalcCountEquipmentWithEffect(unit, 0x1b) * 20;
    hp += (u16)datCalcCountEquipmentWithEffect(unit, 0x1c) * 30;
    hp += (u16)datCalcCountEquipmentWithEffect(unit, 0x1d) * 40;
    hp += (u16)datCalcCountEquipmentWithEffect(unit, 0x1e) * 50;
    hp += (u16)datCalcCountEquipmentWithEffect(unit, 0x8e) * 100;
    result = baseHp + hp;

    if (!(unit->flags & UNIT_FLAG_ENEMY))
    {
        if (999 < result)
        {
            result = 999;
        }
    }

    return (u16)result;
}

// FUN_00300100
#ifndef PC_BUILD
asm u32 datCalcGetMaxSp(DatUnit* unit)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0000902d
  .word 0x94900002
  .word 0x94820000
  .word 0x30420004
  .word 0x10400013
  .word 0x00000000
  .word 0x3202ffff
  .word 0x28420150
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240500c3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f84b720
  .word 0x3203ffff
  .word 0x00031140
  .word 0x00431023
  .word 0x00021040
  .word 0x00441021
  .word 0x94420006
  .word 0x1000000f
  .word 0x00000000
  .word 0x3202ffff
  .word 0x2842000b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240500c6
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05b32c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x3050ffff
  .word 0x0220202d
  .word 0x2405021c
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x00021840
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02429021
  .word 0x0220202d
  .word 0x2405021d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x00021880
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02429021
  .word 0x0220202d
  .word 0x2405021e
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x00101100
  .word 0x00501023
  .word 0x00021840
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02429021
  .word 0x0220202d
  .word 0x2405026d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x00101080
  .word 0x00501821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021840
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02429021
  .word 0x0220202d
  .word 0x24050237
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040000a
  .word 0x00000000
  .word 0x00101080
  .word 0x00501821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021840
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0x02429023
  .word 0x0220202d
  .word 0x24050238
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x02509021
  .word 0x0220202d
  .word 0x2405001f
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x3043ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x02429021
  .word 0x0220202d
  .word 0x24050020
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x3043ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021080
  .word 0x02429021
  .word 0x0220202d
  .word 0x24050021
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x3043ffff
  .word 0x00031100
  .word 0x00431023
  .word 0x00021040
  .word 0x02429021
  .word 0x0220202d
  .word 0x24050022
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x3043ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x000210c0
  .word 0x02429021
  .word 0x0220202d
  .word 0x24050023
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x3043ffff
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021040
  .word 0x02429021
  .word 0x0220202d
  .word 0x2405008f
  .word 0x0c0c0268
  .word 0x00000000
  .word 0x3043ffff
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021080
  .word 0x02421021
  .word 0x02021821
  .word 0x96220000
  .word 0x30420004
  .word 0x14400005
  .word 0x00000000
  .word 0x286103e8
  .word 0x14200002
  .word 0x00000000
  .word 0x240303e7
  .word 0x3062ffff
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00300410
s32 FUN_00300410(DatUnit *unit,s32 hpDelta)

{
  s32 maxHp;
  s32 newHp;

  newHp = unit->hp + hpDelta;
  if (newHp < 0) {
    newHp = 0;
  }
  maxHp = datCalcGetMaxHp(unit) & 0xFFFF;
  if (maxHp < newHp) {
    newHp = maxHp;
  }
  unit->hp = (u16)newHp;
  return newHp & 0xFFFF;
}

// FUN_00300480
s32 FUN_00300480(DatUnit *unit,s32 spDelta)

{
  s32 maxSp;
  s32 newSp;

  newSp = unit->sp + spDelta;
  if (newSp < 0) {
    newSp = 0;
  }
  maxSp = datCalcGetMaxSp(unit) & 0xFFFF;
  if (maxSp < newSp) {
    newSp = maxSp;
  }
  unit->sp = (u16)newSp;
  return newSp & 0xFFFF;
}

// FUN_003004f0
u32 datCalcSetBadStatus(DatUnit* unit, u32 badStatus)
{
    u32 low;

    low = badStatus & 0x000FFFFF;

    if (low != 0)
    {
        unit->bad = (unit->bad & 0xFFF00000) | low;
    }

    return unit->bad |= (badStatus & 0xFFF00000);
}

// FUN_00300530
u32 datCalcGetBadStatusNoDown(DatUnit* unit)
{
    return unit->bad & 0x000FFFFF;
}

/* W323 measured: opt_loop_invariants on nd116 -> 93, object 280/288; reset nd116, object 284/288. */
// FUN_00300550
u32 datCalcGetBadStatus(DatUnit* unit)
{
    return unit->bad;
}
// FUN_00300560
u32 datCalcClearBadStatus(DatUnit* unit, u32 badStatus)
{
    return unit->bad &= ~badStatus;
}

// FUN_00300580
u32 datCalcChkBadStatus(DatUnit* unit, u32 badStatus)
{
    return (unit->bad & badStatus) != 0;
}

// FUN_003005a0
u32 FUN_003005a0(u16* param)
{
    if ((*param & 4) != 0)
    {
        return 0;
    }

    return FUN_0016c920(((s16*)param)[1]);
}

#pragma opt_loop_invariants on
// W415 census recheck: datCalcHasSkill direct call sequence matches retail; no call-census defect.
// FUN_003005e0
#ifndef PC_BUILD
asm u32 datCalcHasSkill(DatUnit* unit, u16 skillId)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c0c22e8
  .word 0x00000000
  .word 0x3052ffff
  .word 0x0220202d
  .word 0x0c0c22ec
  .word 0x00000000
  .word 0x0000282d
  .word 0x3210ffff
  .word 0x3244ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x00031840
  .word 0x00431821
  .word 0x94630000
  .word 0x16030004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000026
  .word 0x00000000
  .word 0x24a30001
  .word 0x3065ffff
  .word 0x30a3ffff
  .word 0x0064182a
  .word 0x1460fff2
  .word 0x00000000
  .word 0x96220000
  .word 0x30420004
  .word 0x1440001b
  .word 0x00000000
  .word 0x86220002
  .word 0x0040882d
  .word 0x0220202d
  .word 0x24050003
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x04a00011
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c390
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8c42001c
  .word 0x14500004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00300700
u8 FUN_00300700(u16 *param_1,s16 param_2)

{
  s32 found;
  
  if ((*param_1 & 4) != 0) {
    return 0;
  }
  found = (u16)FUN_00170760(*(s16 *)(param_1 + 1),param_2);
  return found > 0;
}

// FUN_00300750
s32 FUN_00300750(u16 param_1,u16 param_2)
{
  s32 pcId;
  s16 uVar2;
  u16 uVar3;
  u32 target;
  
  if ((param_1 < 11) == false) {
    FUN_0019d3f0((u32)D_0069aa80, 0x259);
  }
  pcId = (s16)param_1;
  target = param_2 & 0xffff;
  uVar2 = FUN_0016cb80(pcId,0);
  uVar3 = FUN_0016f900(pcId,uVar2);
  if (target == (uVar3 & 0xff)) {
    return true;
  }
  uVar2 = FUN_0016cb80(pcId,1);
  uVar3 = FUN_0016f900(pcId,uVar2);
  if (target == (uVar3 & 0xff)) {
    return true;
  }
  uVar2 = FUN_0016cb80((s16)param_1,2);
  uVar3 = FUN_0016f900((s16)param_1,uVar2);
  return target == (uVar3 & 0xff);
}

#pragma opt_loop_invariants off

// FUN_00300870
u16 datCalcCountEquipmentWithEffectById(u16 pcId, u16 effect)
{
    u16 count;
    s16 equipmentIdx;
    u8 equipmentEffect;
    u32 effectId;
    s16 firstPcId;

    K_ASSERT(pcId < PC_MAX, 646);

    count = 0;
    firstPcId = (s16)pcId;
    effectId = effect;

    equipmentIdx = datGetEquipmentIdx(firstPcId, EQUIPMENT_TYPE_WEAPON);
    equipmentEffect = datGetEquipmentEffect(firstPcId, equipmentIdx);
    if (effectId == equipmentEffect)
    {
        count++;
    }

    equipmentIdx = datGetEquipmentIdx((s16)pcId, EQUIPMENT_TYPE_ARMOR);
    equipmentEffect = datGetEquipmentEffect((s16)pcId, equipmentIdx);
    if (effectId == equipmentEffect)
    {
        count++;
    }

    equipmentIdx = datGetEquipmentIdx((s16)pcId, EQUIPMENT_TYPE_BOOTS);
    equipmentEffect = datGetEquipmentEffect((s16)pcId, equipmentIdx);
    if (effectId == equipmentEffect)
    {
        count++;
    }

    return count;
}

#pragma alias FUN_0016f9f0_datcalc FUN_0016f9f0
#pragma alias FUN_0016fae0_datcalc FUN_0016fae0
#pragma alias FUN_00173510_u16 FUN_00173510
#pragma alias FUN_00311190_typed FUN_00311190
#pragma alias datCalcGetMaxSp FUN_00300100
#pragma alias FUN_00301230_narrow FUN_00301230




#pragma alias FUN_003082f0_u16 FUN_003082f0
#pragma alias FUN_003082f0_one FUN_003082f0

#pragma alias FUN_0030bde0_narrow FUN_0030bde0

#pragma alias DAT_00957190_abs DAT_00957190
#pragma alias DAT_00957194_abs DAT_00957194
#pragma alias DAT_00957198_abs DAT_00957198
#pragma alias DAT_0095719c_abs DAT_0095719c
#pragma alias DAT_009571a0_abs DAT_009571a0

#pragma alias DAT_009571a4_abs DAT_009571a4

// FUN_003009a0
u16 datCalcCountEquipmentWithEffect(DatUnit* unit, u16 effect)
{
    u16 pcId;
    u16 count;
    s16 equipmentIdx;
    u8 equipmentEffect;
    u32 effectId;
    s16 firstPcId;

    if (unit->flags & UNIT_FLAG_ENEMY)
    {
        return 0;
    }

    pcId = unit->id;
    K_ASSERT(pcId < PC_MAX, 646);

    count = 0;
    firstPcId = (s16)pcId;
    effectId = effect;

    equipmentIdx = datGetEquipmentIdx(firstPcId, EQUIPMENT_TYPE_WEAPON);
    equipmentEffect = datGetEquipmentEffect(firstPcId, equipmentIdx);
    if (effectId == equipmentEffect)
    {
        count++;
    }

    equipmentIdx = datGetEquipmentIdx((s16)pcId, EQUIPMENT_TYPE_ARMOR);
    equipmentEffect = datGetEquipmentEffect((s16)pcId, equipmentIdx);
    if (effectId == equipmentEffect)
    {
        count++;
    }

    equipmentIdx = datGetEquipmentIdx((s16)pcId, EQUIPMENT_TYPE_BOOTS);
    equipmentEffect = datGetEquipmentEffect((s16)pcId, equipmentIdx);
    if (effectId == equipmentEffect)
    {
        count++;
    }

    return count;
}





// FUN_00300af0
s32 FUN_00300af0(s32 param_1)

{
  s32 index;
  u8 *record;

  index = param_1 & 0xFFFF;
  if (index >= 0x1D0) {
    return 0;
  }
  record = (u8 *)iGpffffb708 + index * 0x2C;
  if (*record & 2) {
    return 0;
  }
  return (record[1] & 1) != 0;
}





// FUN_00300b60
u8 FUN_00300b60(u16 *param_1,u32 param_2)
{
  u16 uVar1;
  u8 bVar2;
  u32 check;
  u32 index;
  u8 *base;
  if ((s32)(param_2 & 0xffff) < 0 || (s32)(param_2 & 0xffff) >= 5) {
    FUN_0019d3f0((u32)D_0069aa80, 0x2e1);
  }
  uVar1 = param_1[1];
  if ((*param_1 & 4) != 0) {
    if (uVar1 >= 0x150) {
      FUN_0019d3f0((u32)D_0069aa80, 0x2e8);
    }
    base = (u8 *)iGpffffb720;
    index = (u32)uVar1 * 0x3e;
    base = (u8 *)(index + (u32)base);
    base = (u8 *)(((u32)param_2 & 0xffff) + (u32)base);
    bVar2 = *(u8 *)(base + 8);
  }
  else {
    check = uVar1;
    if ((s32)check >= 0xb) {
      FUN_0019d3f0((u32)D_0069aa80, 0x2eb);
    }
    bVar2 = FUN_00173510_u16(uVar1, param_2);
  }
  if ((s32)bVar2 > 0) {
    goto clamp_bvar2;
  }
  bVar2 = 1;
  goto done_bvar2;
clamp_bvar2:
  if (99 < bVar2) {
    bVar2 = 99;
  }
done_bvar2:
  return bVar2;
}





// FUN_00300c90
u8 FUN_00300c90(u32 param_1,u32 param_2)
{
  u8 bVar1;
  u16 *puVar2;
  
  if ((s32)(param_2 & 0xffff) < 0 || (s32)(param_2 & 0xffff) >= 5) {
    FUN_0019d3f0((u32)D_0069aa80, 0x304);
  }
  puVar2 = (u16 *)param_1;
  if ((*puVar2 & 4) != 0) {
    bVar1 = FUN_00300b60((u16*)param_1,param_2);
  }
  else {
    if (puVar2[1] >= 11) {
      FUN_0019d3f0((u32)D_0069aa80, 0x30b);
    }
    bVar1 = FUN_001738d0(puVar2[1],param_2);
  }
  if ((s32)bVar1 <= 0) {
    bVar1 = 1;
  }
  else if (99 < bVar1) {
    bVar1 = 99;
  }
  return bVar1;
}





// FUN_00300d80
u32 datCalcGetPassiveSkillFlags(DatUnit* unit)
{
    u32 flags;

    flags = 0;

    if (datCalcHasSkill(unit, SKILL_REGENERATE1))
    {
        flags |= PASSIVESKILL_FLAG_REGENERATE1;
    }
    if (datCalcHasSkill(unit, SKILL_REGENERATE2))
    {
        flags |= PASSIVESKILL_FLAG_REGENERATE2;
    }
    if (datCalcHasSkill(unit, SKILL_REGENERATE3))
    {
        flags |= PASSIVESKILL_FLAG_REGENERATE3;
    }

    if (datCalcHasSkill(unit, SKILL_INVIGORATE1))
    {
        flags |= PASSIVESKILL_FLAG_INVIGORATE1;
    }
    if (datCalcHasSkill(unit, SKILL_INVIGORATE2))
    {
        flags |= PASSIVESKILL_FLAG_INVIGORATE2;
    }
    if (datCalcHasSkill(unit, SKILL_INVIGORATE3))
    {
        flags |= PASSIVESKILL_FLAG_INVIGORATE3;
    }

    if (datCalcHasSkill(unit, SKILL_SPRINGOFLIFE1))
    {
        flags |= PASSIVESKILL_FLAG_SPRINGOFLIFE1;
    }
    if (datCalcHasSkill(unit, SKILL_SPRINGOFLIFE2))
    {
        flags |= PASSIVESKILL_FLAG_SPRINGOFLIFE2;
    }

    return flags;
}





// FUN_00300e90
u32 FUN_00300e90(u32 param_1)
{
  char cVar1;
  s16 uVar2;
  u32 uVar3;
  
  uVar2 = FUN_003082f0_one(0);
  uVar3 = FUN_003080c0(uVar2);
  if ((uVar3 & 0xe0001) == 0) {
    if ((uVar3 & 0xe) != 0) {
      cVar1 = FUN_00301750(param_1,0x11);
      if ('\0' < cVar1) {
        return 1;
      }
    }
    else if ((uVar3 & 0x100) == 0) {
      cVar1 = FUN_00301750(param_1,0x12);
      if ('\0' < cVar1) {
        return 1;
      }
    }
  }
  return 0;
}




// FUN_00300f60
s8 FUN_00300f60(int param_1,u32 param_2)
{
  s8 value;
  u8 index;
  u16 offset;

  if ((s32)(param_2 & 0xff) >= 0x15) {
    FUN_0019d3f0((u32)D_0069aa80,0x406);
  }
  index = param_2;
  offset = index >> 1;
  if (index & 1) {
    value = *(u8 *)(offset + param_1 + 0x1c) >> 4;
  }
  else {
    value = *(u8 *)(offset + param_1 + 0x1c) & 0xf;
  }
  if (7 < value) {
    value = (s8)(value - 0xf);
  }
  return value;
}





// FUN_00301030
void FUN_00301030(int param_1, u8 param_2, s8 param_3)
{
  u8 index;
  u16 offset;
  u8 value;

  index = param_2;
  if (!(index < 0x15)) {
    FUN_0019d3f0((u32)D_0069aa80, 0x438);
  }
  if (('\a' < param_3) || (param_3 < -7)) {
    FUN_0019d3f0((u32)D_0069aa80, 0x439);
  }
  offset = index >> 1;
  if (param_3 < 0) {
    param_3 = (s8)(param_3 + 0xf);
  }
  if (index & 1) {
    value = *(u8 *)(offset + param_1 + 0x1c);
    *(u8 *)(offset + param_1 + 0x1c) = value & 0xf | (param_3 & 0xf) << 4;
  }
  else {
    value = *(u8 *)(offset + param_1 + 0x1c);
    *(u8 *)(offset + param_1 + 0x1c) = value & 0xf0 | param_3 & 0xf;
  }
}





// FUN_00301150
void FUN_00301150(int param_1,u8 param_2,s8 param_3)
{
  u8 index;
  u16 offset;
  u8 value;
  
  index = param_2;
  if ((s32)index >= 0x15) {
    FUN_0019d3f0((u32)D_0069aa80, 0x455);
  }
  if ((char)param_3 < '\0') {
    FUN_0019d3f0((u32)D_0069aa80, 0x456);
  }
  offset = index >> 1;
  if (index & 1) {
    value = *(u8 *)(offset + param_1 + 0x29);
    *(u8 *)(offset + param_1 + 0x29) = value & 0xf | (param_3 & 0xf) << 4;
  }
  else {
    value = *(u8 *)(offset + param_1 + 0x29);
    *(u8 *)(offset + param_1 + 0x29) = value & 0xf0 | param_3 & 0xf;
  }
  return;
}






// FUN_00301230
#ifndef PC_BUILD
asm u8 FUN_00301230_narrow(u8 *param_1,u8 param_2,s8 param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x323200ff
  .word 0x2a420015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405046d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a02d
  .word 0x2a410011
  .word 0x1020009a
  .word 0x00000000
  .word 0x2a420015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050406
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x322300ff
  .word 0x00038843
  .word 0x3222ffff
  .word 0x30760001
  .word 0x12c00009
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00551021
  .word 0x9042001c
  .word 0x00021103
  .word 0x0002163c
  .word 0x0002163f
  .word 0x10000007
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00551021
  .word 0x9042001c
  .word 0x3042000f
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002163c
  .word 0x0002163f
  .word 0x28410008
  .word 0x14200004
  .word 0x00000000
  .word 0x2442fff1
  .word 0x0002163c
  .word 0x0002163f
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x0010163c
  .word 0x0002163f
  .word 0x14400005
  .word 0x00000000
  .word 0x0003163c
  .word 0x0002163f
  .word 0x10000073
  .word 0x00000000
  .word 0x00621021
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x2a810002
  .word 0x14200004
  .word 0x00000000
  .word 0x24140001
  .word 0x10000005
  .word 0x00000000
  .word 0x2a81ffff
  .word 0x10200002
  .word 0x00000000
  .word 0x2414ffff
  .word 0x00149e3c
  .word 0x00139e3f
  .word 0x2a420015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050438
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0013863c
  .word 0x0010863f
  .word 0x2a010008
  .word 0x10200004
  .word 0x00000000
  .word 0x2a01fff9
  .word 0x10200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050439
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3223ffff
  .word 0x06010004
  .word 0x00000000
  .word 0x2602000f
  .word 0x00029e3c
  .word 0x00139e3f
  .word 0x12c0000d
  .word 0x00000000
  .word 0x3062ffff
  .word 0x00552021
  .word 0x9082001c
  .word 0x3043000f
  .word 0x0013163c
  .word 0x0002163f
  .word 0x3042000f
  .word 0x00021100
  .word 0x00621025
  .word 0xa082001c
  .word 0x1000000a
  .word 0x00000000
  .word 0x3062ffff
  .word 0x00552021
  .word 0x9082001c
  .word 0x304300f0
  .word 0x0013163c
  .word 0x0002163f
  .word 0x3042000f
  .word 0x00621025
  .word 0xa082001c
  .word 0x0014143c
  .word 0x0002143f
  .word 0x14400009
  .word 0x00000000
  .word 0x24020001
  .word 0x02421004
  .word 0x00401827
  .word 0x8ea20014
  .word 0x00431024
  .word 0xaea20014
  .word 0x10000006
  .word 0x00000000
  .word 0x24020001
  .word 0x02421804
  .word 0x8ea20014
  .word 0x00431025
  .word 0xaea20014
  .word 0x2a420015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050455
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3222ffff
  .word 0x12c00008
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00551821
  .word 0x90620029
  .word 0x3042000f
  .word 0xa0620029
  .word 0x1000000d
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00551821
  .word 0x90620029
  .word 0x304200f0
  .word 0xa0620029
  .word 0x10000006
  .word 0x00000000
  .word 0x24020001
  .word 0x02421804
  .word 0x8ea20014
  .word 0x00431025
  .word 0xaea20014
  .word 0x0014163c
  .word 0x0002163f
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
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





// FUN_00301540
void FUN_00301540(int param_1,u32 param_2)

{
  u16 offset;
  s32 check;
  s32 uVar2;
  
  check = param_2 & 0xff;
  if (!(check < 0x15)) {
    FUN_0019d3f0((u32)D_0069aa80, 0x499);
  }
  if (check < 0x11) {
    if (!(check < 0x15)) {
      FUN_0019d3f0((u32)D_0069aa80, 0x438);
    }
    offset = (int)check >> 1;
    uVar2 = check;
    if ((uVar2 & 1) != 0) {
      *(u8 *)(offset + param_1 + 0x1c) = *(u8 *)(offset + param_1 + 0x1c) & 0xf;
    }
    else {
      *(u8 *)(offset + param_1 + 0x1c) = *(u8 *)(offset + param_1 + 0x1c) & 0xf0;
    }
    if (!(check < 0x15)) {
      FUN_0019d3f0((u32)D_0069aa80, 0x455);
    }
    offset = (int)check >> 1;
    if ((uVar2 & 1) != 0) {
      *(u8 *)(offset + param_1 + 0x29) = *(u8 *)(offset + param_1 + 0x29) & 0xf;
    }
    else {
      *(u8 *)(offset + param_1 + 0x29) = *(u8 *)(offset + param_1 + 0x29) & 0xf0;
    }
  }
  else {
    uVar2 = check;
  }
  *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) & ~(1 << uVar2);
  return;
}

// FUN_00301690
void FUN_00301690(u32 param_1)

{
  u32 uVar1;
  
  for (uVar1 = 0; uVar1 < 0x15; uVar1 = uVar1 + 1) {
    if ((s32)(uVar1 & 0xff) < 0x15) {
    }
    else {
      FUN_0019d3f0((u32)D_0069aa80,0x499);
    }
    if ((s32)(uVar1 & 0xff) < 0x11) {
      FUN_00301030(param_1,(u8)uVar1,0);
      FUN_00301150(param_1,(u8)uVar1,0);
    }
    *(u32 *)((int)param_1 + 0x14) = *(u32 *)((int)param_1 + 0x14) & ~(1 << (uVar1 & 0xff));
  }
  return;
}





// FUN_00301750
s8 FUN_00301750(int param_1,u32 param_2)

{
  s8 nibble;
  u8 result;
  u8 index;
  u16 offset;
  s32 uVar3;

  uVar3 = param_2 & 0xff;
  if (uVar3 >= 0x15) {
    FUN_0019d3f0((u32)D_0069aa80,0x4b8);
  }
  if (uVar3 < 0x11) {
    if (uVar3 >= 0x15) {
      FUN_0019d3f0((u32)D_0069aa80,0x406);
    }
    index = param_2;
    offset = index >> 1;
    if (index & 1) {
      nibble = *(u8 *)(offset + param_1 + 0x1c) >> 4;
    }
    else {
      nibble = *(u8 *)(offset + param_1 + 0x1c) & 0xf;
    }
    if (7 < nibble) {
      nibble = (s8)(nibble - 0xf);
    }
    return nibble;
  }
  result = (*(u32 *)(param_1 + 0x14) & 1 << uVar3) != 0;
  return result;
}





#pragma alias FUN_00301230_narrow FUN_00301230
// FUN_00301870
void FUN_00301870(int param_1)

{
  *(u32 *)(param_1 + 0x18) = 0;
  return;
}





/* W389 classification: register-colouring floor; baseline nd18/object324/336. Six singles and all 15 knob pairs were neutral; declaration-order swap stayed nd18. */
// FUN_00301880

#ifndef PC_BUILD
asm float FUN_00301880(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0802d
  .word 0x321100ff
  .word 0x2a220015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240504e8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a220015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240504b8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a210011
  .word 0x10200007
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24020001
  .word 0x02221804
  .word 0x8e420014
  .word 0x00431024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002863c
  .word 0x0010863f
  .word 0x2a02ffff
  .word 0x14400004
  .word 0x00000000
  .word 0x2a010002
  .word 0x14200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240504ec
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x0002102b
  .word 0x3043ffff
  .word 0x3c023f80
  .word 0x44820000
  .word 0x24020014
  .word 0x122200bf
  .word 0x00000000
  .word 0x24020013
  .word 0x122200b7
  .word 0x00000000
  .word 0x24020004
  .word 0x12220096
  .word 0x00000000
  .word 0x24020003
  .word 0x12220074
  .word 0x00000000
  .word 0x24020002
  .word 0x12220052
  .word 0x00000000
  .word 0x24020001
  .word 0x1222002a
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x100000af
  .word 0x00000000
  .word 0x8f84b790
  .word 0x3063ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00441021
  .word 0x02021021
  .word 0x90420001
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x8e430014
  .word 0x3c020008
  .word 0x00621024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840008e
  .word 0x00000000
  .word 0xc78182a0
  .word 0x46010002
  .word 0x1000008a
  .word 0x00000000
  .word 0x8f84b790
  .word 0x3063ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00441021
  .word 0x02021021
  .word 0x90420001
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x8e430014
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400069
  .word 0x00000000
  .word 0xc78182a0
  .word 0x46010002
  .word 0x10000065
  .word 0x00000000
  .word 0x8f84b790
  .word 0x3063ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00441021
  .word 0x24420007
  .word 0x00501023
  .word 0x90420000
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000046
  .word 0x00000000
  .word 0x8f84b790
  .word 0x3063ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00441021
  .word 0x24420001
  .word 0x00501023
  .word 0x90420000
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x8f84b790
  .word 0x3063ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00441021
  .word 0x02021021
  .word 0x90420007
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x1a000007
  .word 0x00000000
  .word 0xc78082a0
  .word 0x10000004
  .word 0x00000000
  .word 0x1a000002
  .word 0x00000000
  .word 0xc78082a0
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





// FUN_00301ca0
#ifndef PC_BUILD
asm u8 FUN_00301ca0(u32 param_1, u32 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x14a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100001a9
  .word 0x00000000
  .word 0x30a20001
  .word 0x10400009
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102a
  .word 0x1000019e
  .word 0x00000000
  .word 0x30a20002
  .word 0x10400009
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0040102a
  .word 0x10000193
  .word 0x00000000
  .word 0x30a20004
  .word 0x10400009
  .word 0x00000000
  .word 0x24050001
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102a
  .word 0x10000188
  .word 0x00000000
  .word 0x30a20008
  .word 0x10400009
  .word 0x00000000
  .word 0x24050001
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0040102a
  .word 0x1000017d
  .word 0x00000000
  .word 0x30a20010
  .word 0x10400009
  .word 0x00000000
  .word 0x24050002
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102a
  .word 0x10000172
  .word 0x00000000
  .word 0x30a20020
  .word 0x10400009
  .word 0x00000000
  .word 0x24050002
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0040102a
  .word 0x10000167
  .word 0x00000000
  .word 0x30a20040
  .word 0x10400009
  .word 0x00000000
  .word 0x24050003
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102a
  .word 0x1000015c
  .word 0x00000000
  .word 0x30a20080
  .word 0x10400009
  .word 0x00000000
  .word 0x24050003
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0040102a
  .word 0x10000151
  .word 0x00000000
  .word 0x30a20100
  .word 0x10400009
  .word 0x00000000
  .word 0x24050004
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102a
  .word 0x10000146
  .word 0x00000000
  .word 0x30a20200
  .word 0x10400009
  .word 0x00000000
  .word 0x24050004
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0040102a
  .word 0x1000013b
  .word 0x00000000
  .word 0x30a20400
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030014
  .word 0x3c020008
  .word 0x00621024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x1000012f
  .word 0x00000000
  .word 0x30a20800
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030014
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x10000123
  .word 0x00000000
  .word 0x30a24000
  .word 0x10400009
  .word 0x00000000
  .word 0x24050005
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x10000118
  .word 0x00000000
  .word 0x30a28000
  .word 0x10400009
  .word 0x00000000
  .word 0x24050006
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x1000010d
  .word 0x00000000
  .word 0x3c020001
  .word 0x00a21024
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030014
  .word 0x3c020002
  .word 0x00621024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x10000100
  .word 0x00000000
  .word 0x3c020002
  .word 0x00a21024
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e030014
  .word 0x3c020004
  .word 0x00621024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x100000f3
  .word 0x00000000
  .word 0x3c020004
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x2405000d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x100000e7
  .word 0x00000000
  .word 0x3c020008
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x2405000e
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x100000db
  .word 0x00000000
  .word 0x3c020010
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x2405000f
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x100000cf
  .word 0x00000000
  .word 0x3c020020
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x24050010
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x100000c3
  .word 0x00000000
  .word 0x3c020040
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x24050007
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x100000b7
  .word 0x00000000
  .word 0x3c020080
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x24050008
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x100000ab
  .word 0x00000000
  .word 0x3c020100
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x24050009
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x1000009f
  .word 0x00000000
  .word 0x3c020200
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x2405000a
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x10000093
  .word 0x00000000
  .word 0x3c020400
  .word 0x00a21024
  .word 0x10400009
  .word 0x00000000
  .word 0x2405000b
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002102b
  .word 0x10000087
  .word 0x00000000
  .word 0x30a21000
  .word 0x1040002e
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400021
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400019
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400011
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400009
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000005a
  .word 0x00000000
  .word 0x24020001
  .word 0x10000057
  .word 0x00000000
  .word 0x30a22000
  .word 0x1040004e
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04400041
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04400039
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04400031
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04400029
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x04400021
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400019
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000e
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400011
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000f
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1c400009
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050010
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10000007
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240505a2
  .word 0x0c0674fc
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





#pragma opt_common_subs off
// W415 negative probe: adding FUN_00301230 calls for masks 0x2000000 and 0x4000000 grew this function to 2332 bytes (retail window 2256) and raised nd 1489->1569; not retained.
// FUN_00302380
#ifndef PC_BUILD
asm void FUN_00302380(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x12200222
  .word 0x00000000
  .word 0x32230001
  .word 0x10600004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230002
  .word 0x1060000a
  .word 0x00000000
  .word 0x0010163c
  .word 0x0002163f
  .word 0x00021023
  .word 0x0002363c
  .word 0x0006363f
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230004
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230008
  .word 0x1060000a
  .word 0x00000000
  .word 0x0010163c
  .word 0x0002163f
  .word 0x00021023
  .word 0x0002363c
  .word 0x0006363f
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230010
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050002
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230020
  .word 0x1060000a
  .word 0x00000000
  .word 0x0010163c
  .word 0x0002163f
  .word 0x00021023
  .word 0x0002363c
  .word 0x0006363f
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230040
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050003
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230080
  .word 0x1060000a
  .word 0x00000000
  .word 0x0010163c
  .word 0x0002163f
  .word 0x00021023
  .word 0x0002363c
  .word 0x0006363f
  .word 0x0240202d
  .word 0x24050003
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230100
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230200
  .word 0x1060000a
  .word 0x00000000
  .word 0x0010163c
  .word 0x0002163f
  .word 0x00021023
  .word 0x0002363c
  .word 0x0006363f
  .word 0x0240202d
  .word 0x24050004
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230400
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050013
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32230800
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050014
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32231000
  .word 0x1060006f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050003
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050004
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x1860000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e440014
  .word 0x2403ffef
  .word 0x00831824
  .word 0xae430014
  .word 0x32232000
  .word 0x106000c9
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0441000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0441000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050002
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0441000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050003
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0441000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050004
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0441000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x2405000d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000d
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000d
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402dfff
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x2405000e
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x1840000f
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000e
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000e
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x2402bfff
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x2405000f
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400010
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e430014
  .word 0x3c02ffff
  .word 0x34427fff
  .word 0x00621024
  .word 0xae420014
  .word 0x0240202d
  .word 0x24050010
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x18600010
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050010
  .word 0x0000302d
  .word 0x0c0c040c
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050010
  .word 0x0000302d
  .word 0x0c0c0454
  .word 0x00000000
  .word 0x8e440014
  .word 0x3c03fffe
  .word 0x3463ffff
  .word 0x00831824
  .word 0xae430014
  .word 0x32234000
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050005
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x32238000
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050006
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030001
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050011
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030002
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050012
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030004
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000d
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030008
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000e
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030010
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000f
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030020
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050010
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030040
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050007
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030080
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050008
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030100
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050009
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030200
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0x3c030400
  .word 0x02231824
  .word 0x10600006
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000b
  .word 0x0200302d
  .word 0x0c0c048c
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */




#pragma opt_common_subs on





// FUN_00302c50
void FUN_00302c50(u32 param_1)
{
    u32 i;
    u32 mask;

    mask = *(u32*)(param_1 + 0x18);
    if (mask != 0)
    {
        for (i = 0; i < 0x15; i++)
        {
            if ((mask & (1 << i)) != 0)
            {
                if ((s32)(i & 0xff) >= 0x15)
                {
                    FUN_0019d3f0((u32)D_0069aa80, 0x499);
                }
                if ((s32)(i & 0xff) < 0x11)
                {
                    FUN_00301030(param_1, (u8)i, 0);
                    FUN_00301150(param_1, (u8)i, 0);
                }
                *(u32*)(param_1 + 0x14) &= ~(1 << (i & 0xff));
            }
        }
        *(u32*)(param_1 + 0x18) = 0;
    }
}





// FUN_00302d40

#ifndef PC_BUILD
asm void FUN_00302d40(u32 param_1)
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
  .word 0x0080a02d
  .word 0x0000982d
  .word 0x1000006b
  .word 0x00000000
  .word 0x327200ff
  .word 0x2a430015
  .word 0x14600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240504b8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a410011
  .word 0x10200008
  .word 0x00000000
  .word 0x326500ff
  .word 0x0280202d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0040182d
  .word 0x10000008
  .word 0x00000000
  .word 0x24030001
  .word 0x02432004
  .word 0x8e830014
  .word 0x00641824
  .word 0x0003182b
  .word 0x00031e3c
  .word 0x00031e3f
  .word 0x0003ae3c
  .word 0x0015ae3f
  .word 0x2a430015
  .word 0x14600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050421
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x326400ff
  .word 0x00048843
  .word 0x3223ffff
  .word 0x30900001
  .word 0x12000009
  .word 0x00000000
  .word 0x3063ffff
  .word 0x02831821
  .word 0x90630029
  .word 0x00031903
  .word 0x00031e3c
  .word 0x00031e3f
  .word 0x10000007
  .word 0x00000000
  .word 0x3063ffff
  .word 0x02831821
  .word 0x90630029
  .word 0x3063000f
  .word 0x00031e3c
  .word 0x00031e3f
  .word 0x0003263c
  .word 0x0004263f
  .word 0x00151e3c
  .word 0x00031e3f
  .word 0x1060002c
  .word 0x00000000
  .word 0x0004ae3c
  .word 0x0015ae3f
  .word 0x2aa1000f
  .word 0x10200027
  .word 0x00000000
  .word 0x2a430015
  .word 0x14600006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050455
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26a30001
  .word 0x0003963c
  .word 0x0012963f
  .word 0x06410006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050456
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3223ffff
  .word 0x1200000b
  .word 0x00000000
  .word 0x3063ffff
  .word 0x02832821
  .word 0x90a30029
  .word 0x3064000f
  .word 0x3243000f
  .word 0x00031900
  .word 0x00831825
  .word 0xa0a30029
  .word 0x10000008
  .word 0x00000000
  .word 0x3063ffff
  .word 0x02832821
  .word 0x90a30029
  .word 0x306400f0
  .word 0x3243000f
  .word 0x00831825
  .word 0xa0a30029
  .word 0x26730001
  .word 0x2e630011
  .word 0x1460ff94
  .word 0x00000000
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





// FUN_00302f50
#ifndef PC_BUILD
asm u8 FUN_00302f50(u32 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x0000902d
  .word 0x10000063
  .word 0x00000000
  .word 0x325100ff
  .word 0x2a220015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240504b8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a210011
  .word 0x10200007
  .word 0x00000000
  .word 0x324500ff
  .word 0x0260202d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24020001
  .word 0x02221804
  .word 0x8e620014
  .word 0x00431024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x0002863c
  .word 0x0010863f
  .word 0x2a220015
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050421
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x324400ff
  .word 0x00041043
  .word 0x3043ffff
  .word 0x30820001
  .word 0x10400009
  .word 0x00000000
  .word 0x3062ffff
  .word 0x02621021
  .word 0x90420029
  .word 0x00021103
  .word 0x0002163c
  .word 0x0002163f
  .word 0x10000007
  .word 0x00000000
  .word 0x3062ffff
  .word 0x02621021
  .word 0x90420029
  .word 0x3042000f
  .word 0x0002163c
  .word 0x0002163f
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x0010163c
  .word 0x0002163f
  .word 0x10400025
  .word 0x00000000
  .word 0x2402000b
  .word 0x12420022
  .word 0x00000000
  .word 0x24020009
  .word 0x1242000e
  .word 0x00000000
  .word 0x24020008
  .word 0x12420003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0003163c
  .word 0x0002163f
  .word 0x18400016
  .word 0x00000000
  .word 0x0012163c
  .word 0x0002163f
  .word 0x10000017
  .word 0x00000000
  .word 0x0003163c
  .word 0x0002163f
  .word 0x1840000e
  .word 0x00000000
  .word 0x0012163c
  .word 0x0002163f
  .word 0x1000000f
  .word 0x00000000
  .word 0x0003163c
  .word 0x0002163f
  .word 0x28420003
  .word 0x14400005
  .word 0x00000000
  .word 0x0012163c
  .word 0x0002163f
  .word 0x10000006
  .word 0x00000000
  .word 0x26520001
  .word 0x2e420011
  .word 0x1440ff9c
  .word 0x00000000
  .word 0x2402ffff
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





/* W323 measured: opt_common_subs off nd1570 -> 1489, object 2252/2256; reset nd1570. */
#pragma opt_lifetimes on
// FUN_00303130

#ifndef PC_BUILD
asm u32 FUN_00303130(u32 param_1,u32 param_2,u32 param_3,u16 param_4,short param_5,
                 short param_6,u32 param_7,u8 param_8)
{
  .set noreorder
  .word 0x27bdfef0
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
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0xa7a7010e
  .word 0xa7a8010c
  .word 0xa7a9010a
  .word 0xafaa0104
  .word 0xa3ab0103
  .word 0x3290ffff
  .word 0x06000004
  .word 0x00000000
  .word 0x2a020270
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240506c3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a0201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240506c4
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b800
  .word 0x00000000
  .word 0x4600bd86
  .word 0x4600bd46
  .word 0x4600bd06
  .word 0x0000882d
  .word 0x0000802d
  .word 0x0000f02d
  .word 0xa7a000e0
  .word 0x24170001
  .word 0x93a20103
  .word 0x0040182d
  .word 0x24020002
  .word 0x10620018
  .word 0x00000000
  .word 0x10770003
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00621021
  .word 0x84560012
  .word 0x90420011
  .word 0xa7a200f0
  .word 0x0000a82d
  .word 0x965e0008
  .word 0x0240202d
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0xa7a200e0
  .word 0x10000019
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00621021
  .word 0x84560016
  .word 0x90420014
  .word 0xa7a200f0
  .word 0x0000a82d
  .word 0x965e000a
  .word 0x0240202d
  .word 0x0c0c0040
  .word 0x00000000
  .word 0xa7a200e0
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240506e3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x97a200f0
  .word 0x0040102d
  .word 0x7fa200d0
  .word 0x2c410011
  .word 0x1020011b
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638f20
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x00161c3c
  .word 0x00031c3f
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628821
  .word 0x10000112
  .word 0x00000000
  .word 0x0016243c
  .word 0x0004243f
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00151c3c
  .word 0x00031c3f
  .word 0x00438821
  .word 0x10000109
  .word 0x00000000
  .word 0x33c3ffff
  .word 0x0016143c
  .word 0x0002143f
  .word 0x00621818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001812
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628821
  .word 0x1e2000fd
  .word 0x00000000
  .word 0x24110001
  .word 0x100000fa
  .word 0x00000000
  .word 0x97a200e0
  .word 0x0040182d
  .word 0x0016143c
  .word 0x0002143f
  .word 0x00621818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001812
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628821
  .word 0x1e2000ed
  .word 0x00000000
  .word 0x24110001
  .word 0x100000ea
  .word 0x00000000
  .word 0x8f84b708
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00441021
  .word 0x90430002
  .word 0x24020002
  .word 0x10620010
  .word 0x00000000
  .word 0x24040001
  .word 0x10640003
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x93a20103
  .word 0x0040402d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0280382d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000011
  .word 0x00000000
  .word 0x93a20103
  .word 0x0040402d
  .word 0x24040003
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0280382d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050710
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0015143c
  .word 0x0002143f
  .word 0x02228821
  .word 0x1e200002
  .word 0x00000000
  .word 0x24110001
  .word 0x0000b82d
  .word 0x100000b6
  .word 0x00000000
  .word 0x24030032
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628821
  .word 0x1e200002
  .word 0x00000000
  .word 0x24110001
  .word 0x0000b82d
  .word 0x100000ac
  .word 0x00000000
  .word 0x00161c3c
  .word 0x00031c3f
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628021
  .word 0x2403000d
  .word 0x7ba200d0
  .word 0x144300a3
  .word 0x00000000
  .word 0x33c2ffff
  .word 0x0050082a
  .word 0x1020009f
  .word 0x00000000
  .word 0x0040802d
  .word 0x1000009c
  .word 0x00000000
  .word 0x0016243c
  .word 0x0004243f
  .word 0x33c2ffff
  .word 0x00441818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001812
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628021
  .word 0x1e000090
  .word 0x00000000
  .word 0x1880008e
  .word 0x00000000
  .word 0x24100001
  .word 0x1000008b
  .word 0x00000000
  .word 0x0016243c
  .word 0x0004243f
  .word 0x97a200e0
  .word 0x0040102d
  .word 0x00441818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001812
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628021
  .word 0x1e00007e
  .word 0x00000000
  .word 0x1880007c
  .word 0x00000000
  .word 0x24100001
  .word 0x10000079
  .word 0x00000000
  .word 0x8f84b708
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00441021
  .word 0x90420002
  .word 0x24040002
  .word 0x10440010
  .word 0x00000000
  .word 0x24040001
  .word 0x10440003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x93a20103
  .word 0x0040402d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0280382d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000010
  .word 0x00000000
  .word 0x93a20103
  .word 0x0040402d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0280382d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050759
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0015143c
  .word 0x0002143f
  .word 0x02028021
  .word 0x2403000d
  .word 0x7ba200d0
  .word 0x10430006
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x33c2ffff
  .word 0x0050082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040802d
  .word 0x2403000e
  .word 0x7ba200d0
  .word 0x14430008
  .word 0x00000000
  .word 0x97a2010e
  .word 0x0040102d
  .word 0x28410002
  .word 0x14200003
  .word 0x00000000
  .word 0x0202001a
  .word 0x00008012
  .word 0x1e000002
  .word 0x00000000
  .word 0x24100001
  .word 0x0000b82d
  .word 0x1000002d
  .word 0x00000000
  .word 0x24030032
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00628021
  .word 0x1e000002
  .word 0x00000000
  .word 0x24100001
  .word 0x0000b82d
  .word 0x10000023
  .word 0x00000000
  .word 0x00151c3c
  .word 0x00031c3f
  .word 0x0016143c
  .word 0x0002143f
  .word 0x00431821
  .word 0x33c2ffff
  .word 0x0062082a
  .word 0x1020001a
  .word 0x00000000
  .word 0x00438023
  .word 0x10000017
  .word 0x00000000
  .word 0x93a20103
  .word 0x0040402d
  .word 0x2404000f
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0280382d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x00151c3c
  .word 0x00031c3f
  .word 0x00438021
  .word 0x1e000002
  .word 0x00000000
  .word 0x24100001
  .word 0x0000b82d
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050790
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16e00806
  .word 0x00000000
  .word 0x1a000804
  .word 0x00000000
  .word 0x8fa20104
  .word 0x30420001
  .word 0x14400800
  .word 0x00000000
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x0002b080
  .word 0x8f82b708
  .word 0x02c21021
  .word 0x90430002
  .word 0x24020002
  .word 0x10620018
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0280302d
  .word 0x0c0c0620
  .word 0x00000000
  .word 0x460005c6
  .word 0x0240202d
  .word 0x24050003
  .word 0x0280302d
  .word 0x0c0c0620
  .word 0x00000000
  .word 0x46000586
  .word 0x8e630018
  .word 0x3c020008
  .word 0x00621025
  .word 0xae620018
  .word 0x10000018
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050001
  .word 0x0280302d
  .word 0x0c0c0620
  .word 0x00000000
  .word 0x460005c6
  .word 0x0240202d
  .word 0x24050003
  .word 0x0280302d
  .word 0x0c0c0620
  .word 0x00000000
  .word 0x46000586
  .word 0x8e630018
  .word 0x3c020010
  .word 0x00621025
  .word 0xae620018
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240507a8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0015ac3c
  .word 0x0015ac3f
  .word 0x24020006
  .word 0x12a20078
  .word 0x00000000
  .word 0x24020005
  .word 0x12a20051
  .word 0x00000000
  .word 0x24020004
  .word 0x12a2002a
  .word 0x00000000
  .word 0x24020003
  .word 0x12a20003
  .word 0x00000000
  .word 0x1000008f
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050210
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500ad
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0260202d
  .word 0x24050211
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400071
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1000006b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050212
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500ae
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0260202d
  .word 0x24050213
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040004d
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000047
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050214
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500af
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0260202d
  .word 0x24050215
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400029
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000023
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050216
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500b0
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0260202d
  .word 0x24050217
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x8e62000c
  .word 0x30420010
  .word 0x0002102b
  .word 0x1040000d
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405021f
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x2402121f
  .word 0xa6620038
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0280202d
  .word 0x0c0c222c
  .word 0x00000000
  .word 0x10400059
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x14400055
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304200ff
  .word 0x2c410008
  .word 0x1020004e
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638f00
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050248
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400041
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1000003b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050249
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400035
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1000002f
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405023d
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400029
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000023
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405024a
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040001d
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000017
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050246
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400011
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1000000b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050247
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0280202d
  .word 0x0c0c222c
  .word 0x00000000
  .word 0x14400029
  .word 0x00000000
  .word 0x8f82b708
  .word 0x02c21021
  .word 0x90430002
  .word 0x24020002
  .word 0x10620012
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405023f
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000012
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405023e
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040000c
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050817
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050234
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x8e62000c
  .word 0x30420100
  .word 0x0002102b
  .word 0x10400007
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x97a2010a
  .word 0x0040f02d
  .word 0x24020002
  .word 0x17c20018
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x14400008
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0xc78082a4
  .word 0x4600bdc2
  .word 0x1000000d
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400004
  .word 0x00000000
  .word 0xc78082a4
  .word 0x10000002
  .word 0x00000000
  .word 0xc78082a8
  .word 0x4600bdc2
  .word 0x24020008
  .word 0x17c20008
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x8e62000c
  .word 0x30420010
  .word 0x0002102b
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x8e43000c
  .word 0x30620010
  .word 0x0002102b
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x30620002
  .word 0x0002102b
  .word 0x1040000e
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400004
  .word 0x00000000
  .word 0xc7808070
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x4600ad42
  .word 0x8e43000c
  .word 0x30620200
  .word 0x0002102b
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x1040000d
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400004
  .word 0x00000000
  .word 0xc7808070
  .word 0x10000002
  .word 0x00000000
  .word 0xc78082ac
  .word 0x4600ad42
  .word 0x8e42000c
  .word 0x30420100
  .word 0x0002102b
  .word 0x10400007
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x96620000
  .word 0x30420004
  .word 0x10400018
  .word 0x00000000
  .word 0x96620002
  .word 0x28420150
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050853
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96630002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00431021
  .word 0x94420000
  .word 0x30420020
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023f40
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020003
  .word 0x1462000f
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400004
  .word 0x00000000
  .word 0xc7808084
  .word 0x10000002
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600ad42
  .word 0x1000001c
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x1462000e
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400004
  .word 0x00000000
  .word 0xc7808084
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x4600ad42
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86440002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020003
  .word 0x14620010
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0xc78082a4
  .word 0x4600ad42
  .word 0x1000001d
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86440002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x1462000f
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x4600ad42
  .word 0x8f82b708
  .word 0x02c21021
  .word 0x90420024
  .word 0x2c410009
  .word 0x102000b0
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638ed0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0c0606c4
  .word 0x00000000
  .word 0x304200ff
  .word 0x7fa200c0
  .word 0x2842001e
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405086e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x7ba200c0
  .word 0x3042ffff
  .word 0x00021840
  .word 0x8f82b7a4
  .word 0x00431021
  .word 0x94420000
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000080
  .word 0x00000000
  .word 0x0c0606c4
  .word 0x00000000
  .word 0x304200ff
  .word 0x7fa200b0
  .word 0x2842001e
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050873
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x3042ffff
  .word 0x00021840
  .word 0x8f82b7a8
  .word 0x00431021
  .word 0x94420000
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000057
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020001
  .word 0x14620007
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000043
  .word 0x00000000
  .word 0x24020002
  .word 0x14620040
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x1000003a
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020003
  .word 0x14620007
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000026
  .word 0x00000000
  .word 0x24020004
  .word 0x14620007
  .word 0x00000000
  .word 0x3c023ff0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x1000001d
  .word 0x00000000
  .word 0x24020005
  .word 0x1462001a
  .word 0x00000000
  .word 0xc78082a8
  .word 0x4600bdc2
  .word 0x10000016
  .word 0x00000000
  .word 0x8e42000c
  .word 0x30420001
  .word 0x0002102b
  .word 0x10400011
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x0280202d
  .word 0x0c0c222c
  .word 0x00000000
  .word 0x104002d2
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x104002ce
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x144002ca
  .word 0x00000000
  .word 0x96420002
  .word 0x28420150
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405089b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96430002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00621021
  .word 0x90420002
  .word 0x2c41000f
  .word 0x102002b7
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638e90
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050024
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050090
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050091
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400281
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x1000027b
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050025
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050092
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050093
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040024c
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000246
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050026
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050094
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050095
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400217
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000211
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050027
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050096
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050097
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104001e2
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x100001dc
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050028
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050098
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050099
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104001ad
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x100001a7
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050029
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405009a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405009b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400178
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000172
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405002a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405009c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405009d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400143
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x1000013d
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405002b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405009e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405009f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040010e
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000108
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405002c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a0
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a1
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104000d9
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x100000d3
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405002d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a2
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a3
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104000a4
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x1000009e
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405002e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a4
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a5
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040006f
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000069
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405002f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a6
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a7
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040003a
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x10000034
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050030
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a8
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500a9
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fe0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30430004
  .word 0x146001c2
  .word 0x00000000
  .word 0x24020002
  .word 0x12a20008
  .word 0x00000000
  .word 0x24020001
  .word 0x12a20005
  .word 0x00000000
  .word 0x12a00003
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x10600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050052
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050053
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050054
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x24020006
  .word 0x12a2000c
  .word 0x00000000
  .word 0x24020005
  .word 0x12a20009
  .word 0x00000000
  .word 0x24020004
  .word 0x12a20006
  .word 0x00000000
  .word 0x24020003
  .word 0x12a20003
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050061
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050062
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050063
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x2ea10007
  .word 0x1020014f
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638e70
  .word 0x00151080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405004c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405004d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405004e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040011d
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x10000119
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050049
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405004a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405004b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104000ee
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x100000ea
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405004f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050050
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050051
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104000bf
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x100000bb
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050055
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050056
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050057
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400090
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x1000008c
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050058
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050059
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405005a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400061
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x1000005d
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405005e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405005f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x24050060
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400032
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x1000002e
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405005b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405005c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc7808084
  .word 0x4600bdc2
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96440002
  .word 0x2405005d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600bdc2
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46170002
  .word 0x4600b002
  .word 0x4600a802
  .word 0x4600a002
  .word 0x46000024
  .word 0x44100000
  .word 0x24020010
  .word 0x17c20004
  .word 0x00000000
  .word 0x241001f4
  .word 0x10000017
  .word 0x00000000
  .word 0x2a017919
  .word 0x14200004
  .word 0x00000000
  .word 0x24107918
  .word 0x10000009
  .word 0x00000000
  .word 0x8f82b708
  .word 0x24420028
  .word 0x00561021
  .word 0x94420000
  .word 0x0202082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040802d
  .word 0x2404000b
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2442005f
  .word 0x02021818
  .word 0x24020064
  .word 0x0062001b
  .word 0x00008012
  .word 0x1e000002
  .word 0x00000000
  .word 0x24100001
  .word 0x16e0004f
  .word 0x00000000
  .word 0x1a20004d
  .word 0x00000000
  .word 0x8fa20104
  .word 0x30420001
  .word 0x14400049
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86440002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x14620008
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x0260202d
  .word 0x2405023a
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46170002
  .word 0x4600b002
  .word 0x4600a802
  .word 0x4600a002
  .word 0x46000024
  .word 0x44110000
  .word 0x00000000
  .word 0x2a217919
  .word 0x14200004
  .word 0x00000000
  .word 0x24117918
  .word 0x1000000f
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x24420028
  .word 0x00431021
  .word 0x94420000
  .word 0x0222082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040882d
  .word 0x2404000b
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2442005f
  .word 0x02221818
  .word 0x24020064
  .word 0x0062001b
  .word 0x00008812
  .word 0x1e200002
  .word 0x00000000
  .word 0x24110001
  .word 0x97a2010c
  .word 0x0040182d
  .word 0x24020400
  .word 0x14620005
  .word 0x00000000
  .word 0x1a000003
  .word 0x00000000
  .word 0x0200882d
  .word 0x0000802d
  .word 0x24020004
  .word 0x10620009
  .word 0x00000000
  .word 0x24020002
  .word 0x10620006
  .word 0x00000000
  .word 0x24020100
  .word 0x10620003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0000882d
  .word 0x0000802d
  .word 0x1a000002
  .word 0x00000000
  .word 0x00108823
  .word 0x0220102d
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
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset
#pragma opt_lifetimes on
// FUN_00305970

#ifndef PC_BUILD
asm u32 FUN_00305970(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0090
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
  .word 0x00c0902d
  .word 0x3282ffff
  .word 0x28420270
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050ac9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x0000b02d
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x0002a880
  .word 0x8f82b708
  .word 0x02a21821
  .word 0x8c62001c
  .word 0x0002823c
  .word 0x0010823e
  .word 0x90630018
  .word 0x24020003
  .word 0x1462001e
  .word 0x00000000
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24040001
  .word 0x1000000d
  .word 0x00000000
  .word 0x00641004
  .word 0x02021024
  .word 0x10400007
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x00021040
  .word 0x005d1021
  .word 0xa44600a0
  .word 0x24a20001
  .word 0x3045ffff
  .word 0x24c20001
  .word 0x3046ffff
  .word 0x30c3ffff
  .word 0x28620018
  .word 0x1440fff1
  .word 0x00000000
  .word 0x30a4ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00021040
  .word 0x005d1021
  .word 0x944300a0
  .word 0x24020001
  .word 0x00628004
  .word 0x12000125
  .word 0x00000000
  .word 0x8f84b708
  .word 0x24820018
  .word 0x00551021
  .word 0x90430000
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x24020003
  .word 0x1462011b
  .word 0x00000000
  .word 0x02a41021
  .word 0x90430024
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x8e42000c
  .word 0x30420008
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x0200102d
  .word 0x1000013e
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0200282d
  .word 0x0c0c2048
  .word 0x00000000
  .word 0x0002bc3c
  .word 0x0017bc3f
  .word 0x0240202d
  .word 0x02e0282d
  .word 0x0c0c1ba0
  .word 0x00000000
  .word 0x0040882d
  .word 0x00171c3c
  .word 0x00031c3f
  .word 0x24020005
  .word 0x10620010
  .word 0x00000000
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x0240202d
  .word 0x240501f7
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040000d
  .word 0x00000000
  .word 0x3c020100
  .word 0x02228825
  .word 0x10000009
  .word 0x00000000
  .word 0x0240202d
  .word 0x240501f8
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02228825
  .word 0x3c022700
  .word 0x02221024
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000010f
  .word 0x00000000
  .word 0x3c030010
  .word 0x02031024
  .word 0x10400010
  .word 0x00000000
  .word 0x8e42000c
  .word 0x00431024
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000103
  .word 0x00000000
  .word 0x96420000
  .word 0x30420010
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000fc
  .word 0x00000000
  .word 0x3222ffff
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
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x4600a502
  .word 0x3c020008
  .word 0x02028824
  .word 0x16200037
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86440002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x1062000f
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86440002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020004
  .word 0x1462000f
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c024020
  .word 0x44820000
  .word 0x4600a502
  .word 0x0240202d
  .word 0x24050007
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400005
  .word 0x00000000
  .word 0x3c023fc0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0c0c20bc
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2442fff8
  .word 0x2c410008
  .word 0x10200066
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638f70
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050250
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400059
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000053
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050251
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040004d
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000047
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050252
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400041
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1000003b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050253
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400035
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1000002f
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050254
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400029
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000023
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050255
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040001d
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x10000017
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050257
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400011
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1000000b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050258
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x1620000b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050256
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023fa0
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002e
  .word 0x00000000
  .word 0x8f82b708
  .word 0x02a21021
  .word 0x90420019
  .word 0x28420064
  .word 0x14400004
  .word 0x00000000
  .word 0x24160001
  .word 0x1000001f
  .word 0x00000000
  .word 0x24040010
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0280382d
  .word 0x0200402d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140002
  .word 0x46000024
  .word 0x44110000
  .word 0x00000000
  .word 0x2a210064
  .word 0x14200004
  .word 0x00000000
  .word 0x24110063
  .word 0x10000004
  .word 0x00000000
  .word 0x06210002
  .word 0x00000000
  .word 0x0000882d
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x0051082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24160001
  .word 0x12c00003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0200102d
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_lifetimes reset





#pragma opt_lifetimes on
// FUN_00306020
#ifndef PC_BUILD
asm u32 FUN_00306020(u32 param_1,u32 param_2,u32 param_3,u16 param_4,
                 u16 param_5,u16 param_6)
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
  .word 0x3262ffff
  .word 0x284201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050b95
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3202ffff
  .word 0x24050001
  .word 0x10450004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000119
  .word 0x00000000
  .word 0x8f84b708
  .word 0x3263ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00441021
  .word 0x90430018
  .word 0x106500ff
  .word 0x00000000
  .word 0x24020003
  .word 0x106200fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0c222c
  .word 0x00000000
  .word 0x104000f4
  .word 0x00000000
  .word 0x8e22000c
  .word 0x0002133c
  .word 0x0002133e
  .word 0x144000ef
  .word 0x00000000
  .word 0x96420000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000014
  .word 0x00000000
  .word 0x86500002
  .word 0x2a02000b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240502b9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0200202d
  .word 0x0c05be40
  .word 0x00000000
  .word 0x304200ff
  .word 0x3042ffff
  .word 0x240600ac
  .word 0x104600ca
  .word 0x00000000
  .word 0x240500ab
  .word 0x104500c0
  .word 0x00000000
  .word 0x240400aa
  .word 0x104400b6
  .word 0x00000000
  .word 0x24030042
  .word 0x104300ac
  .word 0x00000000
  .word 0x24030041
  .word 0x104300a2
  .word 0x00000000
  .word 0x24030040
  .word 0x10430098
  .word 0x00000000
  .word 0x2403003f
  .word 0x1043008e
  .word 0x00000000
  .word 0x2403003e
  .word 0x10430084
  .word 0x00000000
  .word 0x2403003d
  .word 0x1043007a
  .word 0x00000000
  .word 0x2403003c
  .word 0x10430070
  .word 0x00000000
  .word 0x2403003b
  .word 0x10430067
  .word 0x00000000
  .word 0x2403003a
  .word 0x1043005d
  .word 0x00000000
  .word 0x24030039
  .word 0x10430053
  .word 0x00000000
  .word 0x24030038
  .word 0x10430049
  .word 0x00000000
  .word 0x24030037
  .word 0x1043003f
  .word 0x00000000
  .word 0x24030036
  .word 0x10430035
  .word 0x00000000
  .word 0x24030035
  .word 0x1043002b
  .word 0x00000000
  .word 0x24030034
  .word 0x10430021
  .word 0x00000000
  .word 0x24030033
  .word 0x10430017
  .word 0x00000000
  .word 0x24030032
  .word 0x1043000d
  .word 0x00000000
  .word 0x24030031
  .word 0x10430003
  .word 0x00000000
  .word 0x10000093
  .word 0x00000000
  .word 0x240400a0
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000009e
  .word 0x00000000
  .word 0x240400a1
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000097
  .word 0x00000000
  .word 0x240400a2
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000090
  .word 0x00000000
  .word 0x240400a3
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000089
  .word 0x00000000
  .word 0x240400a4
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000082
  .word 0x00000000
  .word 0x240400a5
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x240400a6
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000074
  .word 0x00000000
  .word 0x240400a7
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000006d
  .word 0x00000000
  .word 0x240400a8
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000066
  .word 0x00000000
  .word 0x240400a9
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x00a0202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000052
  .word 0x00000000
  .word 0x00c0202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x240400ad
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000044
  .word 0x00000000
  .word 0x240400ae
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x240400af
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000036
  .word 0x00000000
  .word 0x240400b0
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x240400b1
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x240400b2
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x240400b3
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x240400b4
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x8e23000c
  .word 0x00031b3c
  .word 0x00031b3e
  .word 0x10600006
  .word 0x00000000
  .word 0x3c030018
  .word 0x00431824
  .word 0x14600002
  .word 0x00000000
  .word 0x0000102d
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





// FUN_00306510
u32 FUN_00306510(u32 param_1,u32 param_2,u32 param_3,u16 param_4)

{
  u32 uVar1;
  int iVar2;
  
  if ((s32)(param_1 & 0xffff) < 0x1d0) {
  }
  else {
    FUN_0019d3f0((u32)D_0069aa80,0xbfa);
  }
  if (param_4 != 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = ((u32)param_1 & 0xffff) * 0x2c;
    iVar2 += DAT_007ce3f8;
    if (*(u8 *)(iVar2 + 0x18) != '\x02') {
      uVar1 = 0;
    }
    else {
      if (*(u8 *)(iVar2 + 0x19) < 100) {
        FUN_0019d3f0((u32)D_0069aa80,0xc05);
      }
      uVar1 = FUN_00305970(param_1,param_2,param_3);
    }
  }
  return uVar1;
}





/* W367 measured: opt_lifetimes on nd6788 -> 6786, object 10264/10304; baseline object 10264/10304. */
// FUN_00306610
#ifndef PC_BUILD
asm u32 FUN_00306610(u32 param_1,s32 param_2,s32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0802d
  .word 0x3296ffff
  .word 0x2ac201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050c22
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x1260008c
  .word 0x00000000
  .word 0x1240008a
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x24070001
  .word 0x00e0402d
  .word 0x00e0482d
  .word 0x0200502d
  .word 0x00e0582d
  .word 0x0c0c0c4c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x24070001
  .word 0x00e0402d
  .word 0x00e0482d
  .word 0x0200502d
  .word 0x240b0002
  .word 0x0c0c0c4c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0000482d
  .word 0x0c0c1808
  .word 0x00000000
  .word 0x0040a82d
  .word 0x2ac201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050bfa
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00622021
  .word 0x90830018
  .word 0x24020002
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x90820019
  .word 0x28410064
  .word 0x10200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050c05
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0x1620000a
  .word 0x00000000
  .word 0x16000008
  .word 0x00000000
  .word 0x16a00006
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003c
  .word 0x00000000
  .word 0x00152b3c
  .word 0x00052b3e
  .word 0x10a00006
  .word 0x00000000
  .word 0x8e44000c
  .word 0x3c03fff0
  .word 0x00831824
  .word 0x00651825
  .word 0xae43000c
  .word 0x3c03fff0
  .word 0x02a32024
  .word 0x8e43000c
  .word 0x00641825
  .word 0xae43000c
  .word 0x00401027
  .word 0x00621024
  .word 0xae42000c
  .word 0x1200000f
  .word 0x00000000
  .word 0x9642000a
  .word 0x00508021
  .word 0x06010002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0240202d
  .word 0x0c0c0040
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0050082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040802d
  .word 0xa650000a
  .word 0x12200018
  .word 0x00000000
  .word 0x96420008
  .word 0x00518021
  .word 0x06010002
  .word 0x00000000
  .word 0x0000802d
  .word 0x0240202d
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0050082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040802d
  .word 0xa6500008
  .word 0x96420008
  .word 0x14400007
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c02fff0
  .word 0x00621824
  .word 0x3c020008
  .word 0x00621025
  .word 0xae42000c
  .word 0x24020001
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





#pragma opt_lifetimes reset
/* W367 measured: opt_lifetimes on nd1103 -> 1066, object 1708/1712; baseline object 1712/1712. */
// FUN_003068d0
#ifndef PC_BUILD
asm u32 FUN_003068d0(u32 param_1,s32 param_2,s32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x00e0982d
  .word 0x3255ffff
  .word 0x2aa201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050c67
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000a02d
  .word 0x12200093
  .word 0x00000000
  .word 0x12000091
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x24070001
  .word 0x00e0402d
  .word 0x00e0482d
  .word 0x0260502d
  .word 0x00e0582d
  .word 0x0c0c0c4c
  .word 0x00000000
  .word 0x0040b02d
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x24070001
  .word 0x00e0402d
  .word 0x00e0482d
  .word 0x0260502d
  .word 0x240b0002
  .word 0x0c0c0c4c
  .word 0x00000000
  .word 0x0040982d
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x24070001
  .word 0x00e0402d
  .word 0x0000482d
  .word 0x0c0c1808
  .word 0x00000000
  .word 0x0040b82d
  .word 0x2aa201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050bfa
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00622021
  .word 0x90830018
  .word 0x24020002
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x90820019
  .word 0x28410064
  .word 0x10200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050c05
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c0c165c
  .word 0x00000000
  .word 0xae200018
  .word 0xae000018
  .word 0x8e05000c
  .word 0x3c030008
  .word 0x00a31824
  .word 0x0003202b
  .word 0x16c00008
  .word 0x00000000
  .word 0x16600006
  .word 0x00000000
  .word 0x16e00004
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x3694ffff
  .word 0x10400015
  .word 0x00000000
  .word 0x00a21824
  .word 0x0003182b
  .word 0x14600004
  .word 0x00000000
  .word 0x36940004
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000033
  .word 0x00000000
  .word 0x3c030008
  .word 0x00431024
  .word 0x10400007
  .word 0x00000000
  .word 0x32820004
  .word 0x10400004
  .word 0x00000000
  .word 0x0280102d
  .word 0x10000029
  .word 0x00000000
  .word 0x14800023
  .word 0x00000000
  .word 0x1a600010
  .word 0x00000000
  .word 0x9611000a
  .word 0x0200202d
  .word 0x0c0c0040
  .word 0x00000000
  .word 0x3043ffff
  .word 0x3222ffff
  .word 0x0043082a
  .word 0x14200004
  .word 0x00000000
  .word 0x36940002
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000016
  .word 0x00000000
  .word 0x1ac00013
  .word 0x00000000
  .word 0x96110008
  .word 0x0200202d
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3043ffff
  .word 0x3222ffff
  .word 0x0043082a
  .word 0x14200004
  .word 0x00000000
  .word 0x36940001
  .word 0x10000007
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x3402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0280102d
  .word 0xdfbf0080
  .word 0x7bb70070
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
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





#pragma opt_lifetimes reset
static inline u32 datCalcAddIndexBase(u32 index, u32 base)
{
  return index + base;
}
/* W367 measured: opt_lifetimes on nd1919 -> 1916, object 4928/5008; baseline object 4928/5008. */
// FUN_00306bc0
u32
FUN_00306bc0(u32 param_1,s32 param_2,s32 param_3,u32 param_4,s32 param_5,s32 param_6,
            s32 param_7)

{
  u32 uVar1;
  int iVar2;
  
  if (!((s32)(param_1 & 0xffff) < 0x1d0)) {
    FUN_0019d3f0((u32)D_0069aa80, 0xcc5);
  }
  if (param_2 == 0) {
    goto datCalc_00306bc0_zero;
  }
  if (param_3 == 0) {
    goto datCalc_00306bc0_zero;
  }
  if (param_5 != 0) {
    uVar1 = FUN_00303130(param_1,param_2,param_3,1,1,1,param_4,1);
    *(u32 *)param_5 = uVar1;
  }
  if (param_6 != 0) {
    uVar1 = FUN_00303130(param_1,param_2,param_3,1,1,1,param_4,2);
    *(u32 *)param_6 = uVar1;
  }
  if (param_7 != 0) {
    if (!((s32)(param_1 & 0xffff) < 0x1d0)) {
      FUN_0019d3f0((u32)D_0069aa80, 0xbfa);
    }
    iVar2 = datCalcAddIndexBase(((u32)param_1 & 0xffff) * 0x2c, DAT_007ce3f8);
    if (*(u8 *)(iVar2 + 0x18) == 2) {
      goto datCalc_00306bc0_body;
    }
    uVar1 = 0;
    goto datCalc_00306bc0_store;
datCalc_00306bc0_body:
    if (*(u8 *)(iVar2 + 0x19) < 100) {
      FUN_0019d3f0((u32)D_0069aa80, 0xc05);
    }
    uVar1 = FUN_00305970(param_1,param_2,param_3);
datCalc_00306bc0_store:
    *(u32 *)param_7 = uVar1;
  }
  *(u32 *)((int)param_2 + 0x18) = 0;
  *(u32 *)((int)param_3 + 0x18) = 0;
  uVar1 = 1;
  goto datCalc_00306bc0_return;
datCalc_00306bc0_zero:
  uVar1 = 0;
datCalc_00306bc0_return:
  return uVar1;
}





// FUN_00306d90
u32 FUN_00306d90(u16 param_1,u32 param_2)
{
  u32 uVar1;
  s32 lVar2;
  u32 uVar3;
  u32 uVar4;

  uVar3 = param_2 & 0xffff;
  uVar1 = (uVar3 & 0xff00) << 0x10;
  uVar3 = (uVar3 & 0xffff00ff) * 5;
  uVar4 = uVar1 | uVar3;
  if ((uVar4 & 0xffff) == 0) {
    if ((uVar4 & 0x8000000) != 0) {
      lVar2 = FUN_0016f190(0x1319);
      if (lVar2 == 0) {
        uVar4 = uVar4 | 0x7d;
      }
      else {
        if (param_1 == 0) {
          uVar1 = 0x7d;
        }
        else {
          uVar1 = 0x96;
        }
        uVar4 = uVar4 | uVar1;
      }
    }
    else if ((uVar4 & 0x27000000) != 0) {
      uVar4 = uVar4 | 100;
    }
    else if ((uVar4 & 0x10000000) != 0) {
      uVar4 = uVar4 | 0x32;
    }
  }
  return uVar4;
}





// FUN_00306e80
#ifndef PC_BUILD
asm u32 FUN_00306e80(s32 param_1,s32 param_2)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x0000902d
  .word 0x0000a82d
  .word 0x0000882d
  .word 0x0013843c
  .word 0x0010843f
  .word 0x24020012
  .word 0x1202000f
  .word 0x00000000
  .word 0x24020011
  .word 0x1202000c
  .word 0x00000000
  .word 0x24020010
  .word 0x12020009
  .word 0x00000000
  .word 0x2402ffff
  .word 0x12020003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000465
  .word 0x00000000
  .word 0x24020064
  .word 0x10000462
  .word 0x00000000
  .word 0x16800006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050d2b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x2a010013
  .word 0x10200003
  .word 0x00000000
  .word 0x06010006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050d2c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x14400008
  .word 0x00000000
  .word 0x3265ffff
  .word 0x96840002
  .word 0x0c05cd18
  .word 0x00000000
  .word 0x0040982d
  .word 0x10000037
  .word 0x00000000
  .word 0x96820004
  .word 0x28420150
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050d37
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96820004
  .word 0x00021940
  .word 0x8f82b724
  .word 0x00431821
  .word 0x00101040
  .word 0x00621021
  .word 0x94430000
  .word 0x3062ff00
  .word 0x00022400
  .word 0x3c02ffff
  .word 0x344200ff
  .word 0x00621824
  .word 0x00031080
  .word 0x00431021
  .word 0x00829825
  .word 0x3262ffff
  .word 0x1440001c
  .word 0x00000000
  .word 0x3c020800
  .word 0x02621024
  .word 0x1040000c
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x3673007d
  .word 0x10000010
  .word 0x00000000
  .word 0x36730096
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c022700
  .word 0x02621024
  .word 0x10400004
  .word 0x00000000
  .word 0x36730064
  .word 0x10000006
  .word 0x00000000
  .word 0x3c021000
  .word 0x02621024
  .word 0x10400002
  .word 0x00000000
  .word 0x36730032
  .word 0x24020002
  .word 0x12020008
  .word 0x00000000
  .word 0x24020001
  .word 0x12020005
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050052
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050053
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050054
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24110001
  .word 0x24020006
  .word 0x1202000c
  .word 0x00000000
  .word 0x24020005
  .word 0x12020009
  .word 0x00000000
  .word 0x24020004
  .word 0x12020006
  .word 0x00000000
  .word 0x24020003
  .word 0x12020003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050061
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050062
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050063
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24110001
  .word 0x2e010010
  .word 0x1020034c
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24638f90
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501d0
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501d1
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501d2
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501d3
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020400
  .word 0x02429025
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405004c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405004d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405004e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104002fe
  .word 0x00000000
  .word 0x24110001
  .word 0x100002fb
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501d4
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501d5
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501d6
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501d7
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020400
  .word 0x02429025
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050049
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405004a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405004b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104002b4
  .word 0x00000000
  .word 0x24110001
  .word 0x100002b1
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501d8
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501d9
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501da
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501db
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020400
  .word 0x02429025
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405004f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050050
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050051
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040026a
  .word 0x00000000
  .word 0x24110001
  .word 0x10000267
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501dc
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501dd
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501de
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501df
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020400
  .word 0x02429025
  .word 0x0280202d
  .word 0x2405000d
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400002
  .word 0x00000000
  .word 0x24150001
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050055
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050056
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050057
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400217
  .word 0x00000000
  .word 0x24110001
  .word 0x10000214
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501e0
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501e1
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501e2
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501e3
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020400
  .word 0x02429025
  .word 0x0280202d
  .word 0x2405000e
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400002
  .word 0x00000000
  .word 0x24150001
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050058
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050059
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405005a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104001c4
  .word 0x00000000
  .word 0x24110001
  .word 0x100001c1
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501e4
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501e5
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501e6
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501e7
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020400
  .word 0x02429025
  .word 0x0280202d
  .word 0x24050010
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400002
  .word 0x00000000
  .word 0x24150001
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405005e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405005f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050060
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400171
  .word 0x00000000
  .word 0x24110001
  .word 0x1000016e
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501e8
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501e9
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501ea
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501eb
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020400
  .word 0x02429025
  .word 0x0280202d
  .word 0x2405000f
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400002
  .word 0x00000000
  .word 0x24150001
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405005b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440001b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405005c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x2405005d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040011e
  .word 0x00000000
  .word 0x24110001
  .word 0x1000011b
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501ec
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501ed
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501ee
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400105
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x10000101
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501ef
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f0
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f1
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x104000eb
  .word 0x00000000
  .word 0x3c020200
  .word 0x02429025
  .word 0x100000e7
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050264
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x240500b7
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f2
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501fa
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x104000c3
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x100000bf
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405026b
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x240500bc
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f9
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x104000a3
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x1000009f
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050265
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x240500b8
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f3
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501fa
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040007b
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x10000077
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050266
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x240500b9
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f4
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501fa
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400053
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x1000004f
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050267
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x240500ba
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f5
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501fa
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040002b
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x10000027
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050268
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x240500bb
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501f6
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x0280202d
  .word 0x240501fa
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x24020007
  .word 0x12020009
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501fb
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x3c020100
  .word 0x02429025
  .word 0x24020001
  .word 0x16220008
  .word 0x00000000
  .word 0x3c020800
  .word 0x02621024
  .word 0x10400004
  .word 0x00000000
  .word 0x3c02f7ff
  .word 0x02621024
  .word 0x34530064
  .word 0x12400039
  .word 0x00000000
  .word 0x3c031000
  .word 0x02431024
  .word 0x1040000c
  .word 0x00000000
  .word 0x3c020700
  .word 0x02621024
  .word 0x14400008
  .word 0x00000000
  .word 0x3c02f7ff
  .word 0x3442ffff
  .word 0x02621024
  .word 0x00431825
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x34530032
  .word 0x3c030100
  .word 0x02431024
  .word 0x1040000c
  .word 0x00000000
  .word 0x3c020600
  .word 0x02621024
  .word 0x14400008
  .word 0x00000000
  .word 0x3c02e7ff
  .word 0x3442ffff
  .word 0x02621024
  .word 0x00431825
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x34530064
  .word 0x3c030200
  .word 0x02431024
  .word 0x1040000c
  .word 0x00000000
  .word 0x3c020400
  .word 0x02621024
  .word 0x14400008
  .word 0x00000000
  .word 0x3c02e6ff
  .word 0x3442ffff
  .word 0x02621024
  .word 0x00431825
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x34530064
  .word 0x3c030400
  .word 0x02431024
  .word 0x10400008
  .word 0x00000000
  .word 0x3c02e4ff
  .word 0x3442ffff
  .word 0x02621024
  .word 0x00431825
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x34530064
  .word 0x12a00008
  .word 0x00000000
  .word 0x3c021700
  .word 0x02621024
  .word 0x10400004
  .word 0x00000000
  .word 0x3c02e8ff
  .word 0x02621024
  .word 0x34530064
  .word 0x0260102d
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
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





// FUN_003080c0
int FUN_003080c0(short param_1)

{
  if (param_1 < 0x13) {
  }
  else {
    FUN_0019d3f0((u32)D_0069aa80,0xea8);
  }
  return 1 << ((int)param_1 + 1U);
}





// FUN_00308120
short FUN_00308120(short param_1,int param_2)

{
  short unaff_s0_lo;
  
  if ((param_1 != -1) && (unaff_s0_lo = FUN_003082f0_u16(0,param_1), unaff_s0_lo == 8)) {
    return 8;
  }
  switch (param_2) {
  case 1:
    unaff_s0_lo = 10;
    break;
  case 2:
    unaff_s0_lo = 0xc;
    break;
  case 4:
    unaff_s0_lo = 0xd;
    break;
  case 8:
    unaff_s0_lo = 0xe;
    break;
  case 0x10:
    unaff_s0_lo = 0xf;
    break;
  case 0x20:
    unaff_s0_lo = 4;
    break;
  case 0x40:
    unaff_s0_lo = 5;
    break;
  case 0x80:
    unaff_s0_lo = 0xb;
    break;
  case 0x100:
    unaff_s0_lo = 7;
    break;
  case 0x200:
    unaff_s0_lo = 7;
    break;
  case 0x400:
    unaff_s0_lo = 7;
    break;
  case 0x80000:
    unaff_s0_lo = 9;
    break;
  case 0x100000:
    unaff_s0_lo = 7;
    break;
  default:
    FUN_0019d3f0((u32)D_0069aa80, 0xee9);
    break;
  }
  return unaff_s0_lo;
}





// FUN_003082f0
s32 FUN_003082f0(s32 param_1,u32 param_2)
{
  s16 sVar1;
  u16 uVar1;
  s32 index;
  u16 *puVar3;

  index = (u16)param_2;
  if (((param_1 != 0) && (index < 0x1d0)) &&
      ((*(u8 *)(DAT_007ce3f8 + index * 0x2c) & 2) != 0)) {
    puVar3 = (u16 *)param_1;
    if ((*puVar3 & 4) != 0) {
      index = *(u16 *)((u8 *)(uintptr_t)((u32)puVar3[1] * 0x3e) +
                       (uintptr_t)DAT_007ce410 + 0x3c);
    }
    else {
      sVar1 = FUN_0016cb80((s16)puVar3[1],0);
      uVar1 = FUN_0016f630((s16)puVar3[1],sVar1);
      index = FUN_00170d60((s16)uVar1);
      return (s32)*(short *)(index + 0x1e);
    }
  }
  return (s32)*(char *)(DAT_007ce3f4 + ((u32)index & 0xffff) * 2);
}





// FUN_003083f0
#ifndef PC_BUILD
asm u32 FUN_003083f0_narrow(u16 *param_1,u16 param_2)
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
  .word 0x3242ffff
  .word 0x284201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050f27
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000882d
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e62000c
  .word 0x30420100
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000008d
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00028080
  .word 0x8f82b708
  .word 0x02021021
  .word 0x90430003
  .word 0x24020002
  .word 0x10620035
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x1040000d
  .word 0x00000000
  .word 0x96620002
  .word 0x28420150
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050f38
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000006c
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0bff7c
  .word 0x00000000
  .word 0x3045ffff
  .word 0x3243ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00622021
  .word 0x94820004
  .word 0x00a21818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001812
  .word 0x94820006
  .word 0x00628821
  .word 0x0260202d
  .word 0x24050236
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x00118842
  .word 0x1620004f
  .word 0x00000000
  .word 0x24110001
  .word 0x1000004c
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400017
  .word 0x00000000
  .word 0x96620002
  .word 0x28420150
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050f51
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96630002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00431021
  .word 0x94420000
  .word 0x30420002
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000033
  .word 0x00000000
  .word 0x8f84b708
  .word 0x00901021
  .word 0x90420000
  .word 0x30420010
  .word 0x1440000d
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021080
  .word 0x00441021
  .word 0x94430004
  .word 0x94420006
  .word 0x00628821
  .word 0x10000014
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0c0040
  .word 0x00000000
  .word 0x3045ffff
  .word 0x3243ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00622021
  .word 0x94820004
  .word 0x00a21818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001812
  .word 0x94820006
  .word 0x00628821
  .word 0x1220000b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050235
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x00118842
  .word 0x16200002
  .word 0x00000000
  .word 0x24110001
  .word 0x0220102d
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





// FUN_003086c0
u8 FUN_003086c0(void *param_1,u32 param_2)

{
  u8 *table;

  table = (u8 *)DAT_007ce3f8;
  return table[(param_2 & 0xffff) * 0x2c + 3];
}





// FUN_003086f0
u32 FUN_003086f0(u32 param_1,u32 param_2)
{
  u8 cVar1;
  u32 uVar2;
  s32 lVar3;
  int iVar4;
  u32 uVar5;
  int iVar6;
  
  uVar5 = 0;
  if ((s32)(param_2 & 0xffff) >= 0x270) {
    FUN_0019d3f0((u32)D_0069aa80, 0xf93);
  }
  uVar2 = FUN_003083f0(param_1,param_2);
  iVar4 = ((u32)param_2 & 0xffff) * 0x2c;
  cVar1 = *(char *)(iVar4 + DAT_007ce3f8 + 3);
  iVar6 = (int)param_1;
  if (cVar1 == '\x02') {
    goto case2;
  }
  switch (cVar1) {
  case '\x01':
    goto case1;
  default:
    goto done;
  }
case1:
  lVar3 = FUN_003005e0(param_1,0x242);
  if (lVar3 != 0) {
    uVar5 = 3;
    goto done;
  }
  if ((*(u8 *)(DAT_007ce3f8 + iVar4) & 1) == 0) {
    if (*(u16 *)(iVar6 + 8) <= uVar2) {
      uVar5 = 1;
    }
  }
  else if (*(u16 *)(iVar6 + 8) < uVar2) {
    uVar5 = 1;
  }
  goto done;
case2:
  lVar3 = FUN_003005e0(param_1,0x241);
  if (lVar3 != 0) {
    uVar5 = 3;
    goto done;
  }
  if (*(u16 *)(iVar6 + 10) < uVar2) {
    uVar5 = 2;
  }
done:
  return uVar5;
}





// FUN_00308860
u32 FUN_00308860(u16 param_1)

{
  u32 uVar1;
  
  switch(param_1) {
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
    uVar1 = 1;
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}





#pragma alias FUN_003083f0_narrow FUN_003083f0
// FUN_003088b0
u8 FUN_003088b0(u16 param_1)

{
  if (param_1 < 0x1d0) {
  }
  else {
    FUN_0019d3f0((u32)D_0069aa80,0xfdb);
  }
  return (*(u8 *)(iGpffffb708 + (u32)param_1 * 0x2c) & 2) != 0;
}





// FUN_00308930
u16 FUN_00308930(u16 *param_1)
{
  s16 sVar1;
  u16 uVar1;
  int iVar2;
  
  if ((*param_1 & 4) != 0) {
    return *(u16 *)((u8 *)(uintptr_t)((u32)param_1[1] * 0x3e) +
                    (uintptr_t)iGpffffb720 + 0x3c);
  }
  sVar1 = FUN_0016cb80((s16)param_1[1],0);
  uVar1 = FUN_0016f630((s16)param_1[1],sVar1);
  iVar2 = FUN_00170d60((s16)uVar1);
  switch(*(u16 *)(iVar2 + 0x1e)) {
  case 0:
    return 0;
  case 1:
    return 0x15f;
  case 2:
    return 0x15e;
  case 3:
    return 0x15d;
  case 5:
    return 0x15c;
  case 6:
    return 0x15b;
  case 4:
    return 0x15a;
  default:
    return 0;
  }
}





// FUN_00308a50
u8 FUN_00308a50(u16 param_1)

{
  u32 uVar1 = 0;

  if (param_1 < 0x110) {
    goto done;
  }
  if (param_1 >= 0x131) {
    goto done;
  }
  uVar1 = 1;
done:
  return uVar1 != 0;
}





#pragma push
#pragma opt_loop_invariants on
#pragma opt_common_subs off
// FUN_00308a80
#ifndef PC_BUILD
asm u16 FUN_00308a80(u32 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0c0c22e8
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0220202d
  .word 0x0c0c22ec
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000182d
  .word 0x3209ffff
  .word 0x3c07007c
  .word 0x24e79010
  .word 0x24060001
  .word 0x1000001c
  .word 0x00000000
  .word 0x3065ffff
  .word 0x00052840
  .word 0x00452821
  .word 0x94a80000
  .word 0x2505ff40
  .word 0x2ca10006
  .word 0x10200009
  .word 0x00000000
  .word 0x00052880
  .word 0x00a72821
  .word 0x8ca50000
  .word 0x00a00008
  .word 0x00000000
  .word 0x00c0282d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000282d
  .word 0x10a00007
  .word 0x00000000
  .word 0x3085ffff
  .word 0x00052840
  .word 0x00bd2821
  .word 0xa4a80030
  .word 0x24840001
  .word 0x3084ffff
  .word 0x24630001
  .word 0x3063ffff
  .word 0x3065ffff
  .word 0x00a9082a
  .word 0x10200005
  .word 0x00000000
  .word 0x3085ffff
  .word 0x2ca50010
  .word 0x14a0ffde
  .word 0x00000000
  .word 0x3084ffff
  .word 0x14800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000006
  .word 0x00000000
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00021040
  .word 0x005d1021
  .word 0x94420030
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_common_subs on
#pragma pop





// FUN_00308ba0
u32 datCalc00308ba0(void)
{
    return 8;
}





// FUN_00308bb0
int FUN_00308bb0(u16 *param_1)

{
  int iVar1;
  
  if ((*param_1 & 4) == 0) {
    if (param_1[1] >= 0xb) {
      FUN_0019d3f0((u32)D_0069aa80,0x1051);
    }
    iVar1 = (int)FUN_00173380(param_1[1]);
  }
  else {
    if (param_1[1] >= 0x150) {
      FUN_0019d3f0((u32)D_0069aa80,0x1054);
    }
    iVar1 = iGpffffb720 + (u32)param_1[1] * 0x3e + 0xe;
  }
  return iVar1;
}





// FUN_00308c60
u32 datCalcGetHeldWeaponType(DatUnit* unit)
{
    s16 weaponIdx;
    u16 weaponId;
    DatCalcWeapon* weapon;
    u32 category;

    if (unit->flags & UNIT_FLAG_ENEMY)
    {
        return WEAPON_TYPE_1H_SWORD;
    }

    switch (unit->id)
    {
        case PC_HERO:
            weaponIdx = datGetEquipmentIdx(PC_HERO, EQUIPMENT_TYPE_WEAPON);
            weaponId = datGetEquipmentId(PC_HERO, weaponIdx);
            weapon = func_00170d60((s16)weaponId);
            category = weapon->category;

            switch (category)
            {
                case 0x1:
                case 0x100:
                    return WEAPON_TYPE_2H_SWORD;
                case 0x2:
                case 0x200:
                    return WEAPON_TYPE_1H_SWORD;
                case 0x4:
                case 0x400:
                    return WEAPON_TYPE_BOW;
                case 0x8:
                case 0x800:
                    return WEAPON_TYPE_SPEAR;
                case 0x10:
                case 0x1000:
                    return WEAPON_TYPE_AXE;
                case 0x20:
                case 0x2000:
                    return WEAPON_TYPE_FIST;
                case 0x40:
                case 0x4000:
                    return WEAPON_TYPE_GUN;
                case 0x80:
                case 0x8000:
                    return WEAPON_TYPE_KNIFE;
                default:
                    K_ASSERT(false, 4237);
                    goto default_weapon_type;
            }
        case PC_YUKARI:
            return WEAPON_TYPE_BOW;
        case PC_AIGIS:
            return WEAPON_TYPE_GUN;
        case PC_MITSURU:
            return WEAPON_TYPE_1H_SWORD;
        case PC_JUNPEI:
            return WEAPON_TYPE_2H_SWORD;
        case PC_FUUKA:
            return WEAPON_TYPE_1H_SWORD;
        case PC_AKIHIKO:
            return WEAPON_TYPE_FIST;
        case PC_KEN:
            return WEAPON_TYPE_SPEAR;
        case PC_SHINJIRO_OR_METIS:
            return WEAPON_TYPE_AXE;
        case PC_KOROMARU:
            return WEAPON_TYPE_KNIFE;
        default:
            K_ASSERT(false, 4259);
default_weapon_type:
            return WEAPON_TYPE_1H_SWORD;
    }
}





/* W323 measured: opt_common_subs off nd152 -> 147, object 236/288; reset nd152. */
// FUN_00308ed0
u16 FUN_00308ed0(u16 *param_1)
{
    u16 result;

    if ((*param_1 & 4) != 0)
    {
        return 0;
    }

    if (param_1[1] >= 0xb)
    {
        FUN_0019d3f0((u32)D_0069aa80, 0x10b8);
    }

    result = FUN_0016f630(
        (s16)param_1[1],
        (s16)FUN_0016cb80((s16)param_1[1], 0));

    if (result >= 0xff)
    {
        FUN_0019d3f0((u32)D_0069aa80, 0x10bd);
    }

    return result;
}





// FUN_00308f80
u8 FUN_00308f80(u16 *param_1)

{
  u32 uVar2;

  if ((*param_1 & 4) != 0) {
    return 1;
  }
  uVar2 = FUN_00308c60();
  return ((u8*)&gp0xffff9d08)[uVar2 & 0xff];
}





// FUN_00308fd0
u8 FUN_00308fd0(u16 *param_1,u16 param_2)
{
  u8 mode;

  if ((*param_1 & 4) != 0) {
    mode = 1;
  }
  else {
    u32 index = FUN_00308c60();
    mode = ((u8 *)&gp0xffff9d08)[index & 0xff];
  }
  if (mode == 1) {
    return 1;
  }
  if ((param_2 & 6) != 0) {
    return mode;
  }
  if (param_2 == 8) {
    return 2;
  }
  return 1;
}





// FUN_00309080
u32 FUN_00309080(u16 *param_1,u8 param_2)

{
  u16 uVar1;
  s32 uVar2;
  u32 uVar3;
  int iVar4;
  
  if ((*param_1 & 4) != 0) {
    uVar1 = param_1[1];
    if (!(uVar1 < 0x150)) {
      FUN_0019d3f0((u32)D_0069aa80, 0x1106);
    }
    iVar4 = (u32)uVar1 * 0x3e;
    uVar1 = *(u16 *)(iVar4 + iGpffffb720 + 0x3c);
    if ((*(u8 *)(iGpffffb708 + ((u32)uVar1 * 10 + (u32)uVar1) * 4) & 2) == 0) {
      FUN_0019d3f0((u32)D_0069aa80, 0x1108);
    }
    switch (param_2) {
    case 0:
      return (u32)*(u16 *)(iVar4 + iGpffffb720 + 0x3a);
    case 1:
      return (u32)*(u8 *)(iVar4 + iGpffffb720 + 0x38);
    default:
      FUN_0019d3f0((u32)D_0069aa80, 0x1112);
    }
  }
  else {
    uVar1 = param_1[1];
    if (uVar1 < 11) {
    }
    else {
      FUN_0019d3f0((u32)D_0069aa80, 0x1116);
    }
    uVar2 = (s16)FUN_0016cb80((s16)uVar1,0);
    switch (param_2) {
    case 0:
      uVar3 = FUN_0016f9f0_datcalc((s16)uVar1,uVar2);
      return uVar3;
    case 1:
      uVar3 = FUN_0016fae0_datcalc((s16)uVar1,uVar2);
      return uVar3;
    default:
      FUN_0019d3f0((u32)D_0069aa80, 0x111f);
    }
  }
  return 0;
}





// FUN_00309250
u32 FUN_00309250(u16 *param_1,u8 param_2)
{
  u16 uVar1;
  s16 uVar2;
  u32 uVar3;

  if ((*param_1 & 4) == 0) {
    goto normal;
  }
  if (param_2 == '\x01') {
    goto return_one;
  }
  switch (param_2) {
  case '\0':
    goto return_zero;
  default:
    goto assert_113d;
  }

return_zero:
  return 10;

return_one:
  return 10;

assert_113d:
  FUN_0019d3f0((u32)D_0069aa80, 0x113d);
  goto done;

normal:
  uVar1 = param_1[1];
  if (uVar1 < 0xb) {
    goto normal_dispatch;
  }
assert_1141:
  FUN_0019d3f0((u32)D_0069aa80, 0x1141);

normal_dispatch:
  if (param_2 == '\x01') {
    goto calc_one;
  }
  switch (param_2) {
  case '\0':
    goto calc_zero;
  default:
    goto assert_114b;
  }
calc_zero:
  uVar2 = FUN_0016cb80((s16)uVar1, 2);
  uVar3 = FUN_0016fcc0((s16)uVar1, (s16)uVar2);
  return uVar3;
calc_one:
  uVar2 = FUN_0016cb80((s16)uVar1, 1);
  uVar3 = FUN_0016fbd0((s16)uVar1, (s16)uVar2);
  return uVar3;

assert_114b:
  FUN_0019d3f0((u32)D_0069aa80, 0x114b);

done:
  return 0;
}





// FUN_003093a0
u8 FUN_003093a0(u16 *param_1)

{
  s16 uVar1;
  u16 result;
  u32 uVar2;
  
  if ((*param_1 & 4) != 0) {
    uVar2 = 0;
  }
  else {
    if (param_1[1] >= 0xb) {
      FUN_0019d3f0((u32)D_0069aa80, 0x10b8);
    }
    uVar1 = FUN_0016cb80((s16)param_1[1],0);
    result = FUN_0016f630((s16)param_1[1],uVar1);
    if (result >= 0xff) {
      FUN_0019d3f0((u32)D_0069aa80, 0x10bd);
    }
    uVar2 = result;
  }
  result = uVar2;
  if ((result < 0xc0) || (result >= 0xe0)) {
    FUN_0019d3f0((u32)D_0069aa80, 0x115f);
  }
  return *(u8 *)(result + iGpffffb79c + -0xc0);
}





// FUN_00309490
#ifndef PC_BUILD
asm u32 FUN_00309490(s32 param_1,u32 param_2,u16 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff40
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
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0a82d
  .word 0xafa700bc
  .word 0x32b0ffff
  .word 0x2a0201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24051175
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x32a5ffff
  .word 0x00051080
  .word 0x00451021
  .word 0x00021040
  .word 0x00451021
  .word 0x0002f080
  .word 0x8f82b708
  .word 0x03c22021
  .word 0x90830024
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e63000c
  .word 0x30630008
  .word 0x0003182b
  .word 0x10600003
  .word 0x00000000
  .word 0x1000046b
  .word 0x00000000
  .word 0x24020004
  .word 0x10000468
  .word 0x00000000
  .word 0x12800026
  .word 0x00000000
  .word 0x2a0101d0
  .word 0x10200023
  .word 0x00000000
  .word 0x90820000
  .word 0x30420002
  .word 0x1040001f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x1040000a
  .word 0x00000000
  .word 0x96830002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00621021
  .word 0x9445003c
  .word 0x10000012
  .word 0x00000000
  .word 0x86840002
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x86840002
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c358
  .word 0x00000000
  .word 0x8457001e
  .word 0x10000006
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x00021840
  .word 0x8f82b704
  .word 0x00431021
  .word 0x80570000
  .word 0x0017843c
  .word 0x0010843f
  .word 0x2a020013
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050ea8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26030001
  .word 0x24020001
  .word 0x0062b004
  .word 0x3c02000e
  .word 0x34420001
  .word 0x02c21024
  .word 0x144000b6
  .word 0x00000000
  .word 0x32c2000e
  .word 0x10400068
  .word 0x00000000
  .word 0x8e620014
  .word 0x3c030002
  .word 0x00431024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400007
  .word 0x00000000
  .word 0x8e620018
  .word 0x00431025
  .word 0xae620018
  .word 0x24020200
  .word 0x10000419
  .word 0x00000000
  .word 0x8fa200bc
  .word 0x30420002
  .word 0x14400067
  .word 0x00000000
  .word 0x0000902d
  .word 0x0260202d
  .word 0x24050222
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500b3
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x24120014
  .word 0x24111222
  .word 0x1000002f
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050221
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500b2
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400005
  .word 0x00000000
  .word 0x2412000f
  .word 0x24111221
  .word 0x10000017
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050220
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1440000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x240500b1
  .word 0x0c0c021c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x2412000a
  .word 0x24111220
  .word 0x0012943c
  .word 0x0012943f
  .word 0x1240001c
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x0052082a
  .word 0x10200016
  .word 0x00000000
  .word 0xa6710038
  .word 0x24020200
  .word 0x100003c0
  .word 0x00000000
  .word 0x32c20100
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e620014
  .word 0x3c030004
  .word 0x00431024
  .word 0x0002102b
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400007
  .word 0x00000000
  .word 0x8e620018
  .word 0x00431025
  .word 0xae620018
  .word 0x24020200
  .word 0x100003af
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405000b
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400004
  .word 0x00000000
  .word 0x24020200
  .word 0x100003a4
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050008
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400004
  .word 0x00000000
  .word 0x24020100
  .word 0x10000399
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050009
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400004
  .word 0x00000000
  .word 0x24020100
  .word 0x1000038e
  .word 0x00000000
  .word 0x0260202d
  .word 0x02e0282d
  .word 0x0c0c2d2c
  .word 0x00000000
  .word 0x3c030200
  .word 0x00431824
  .word 0x10600004
  .word 0x00000000
  .word 0x24020200
  .word 0x10000383
  .word 0x00000000
  .word 0x3c030400
  .word 0x00431824
  .word 0x10600004
  .word 0x00000000
  .word 0x24020400
  .word 0x1000037c
  .word 0x00000000
  .word 0x3c030100
  .word 0x00431024
  .word 0x10400004
  .word 0x00000000
  .word 0x24020100
  .word 0x10000375
  .word 0x00000000
  .word 0x8f82b708
  .word 0x2442000e
  .word 0x005e1021
  .word 0x90440000
  .word 0x14800004
  .word 0x00000000
  .word 0x24020004
  .word 0x1000036c
  .word 0x00000000
  .word 0x8e63000c
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000363
  .word 0x00000000
  .word 0x28820064
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000035d
  .word 0x00000000
  .word 0x96620000
  .word 0x30420080
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000356
  .word 0x00000000
  .word 0x00031b3c
  .word 0x00031b3e
  .word 0x24020200
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24020040
  .word 0x10620006
  .word 0x00000000
  .word 0x24020020
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000343
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050004
  .word 0x02a0302d
  .word 0x0c0c0620
  .word 0x00000000
  .word 0x46000586
  .word 0x0260202d
  .word 0x24050002
  .word 0x02a0302d
  .word 0x0c0c0620
  .word 0x00000000
  .word 0x460005c6
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x00000000
  .word 0x4600ad06
  .word 0x0000902d
  .word 0x0000882d
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86840002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x1062000f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86840002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020004
  .word 0x1462000e
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0xc7808088
  .word 0x4600ad42
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020005
  .word 0x1062000f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020004
  .word 0x14620010
  .word 0x00000000
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x10000002
  .word 0x00000000
  .word 0xc78082a8
  .word 0x4600ad42
  .word 0x1000001f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020001
  .word 0x10620011
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86640002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020002
  .word 0x14620003
  .word 0x00000000
  .word 0xc780829c
  .word 0x4600ad42
  .word 0x8fa200bc
  .word 0x30420002
  .word 0x144000e9
  .word 0x00000000
  .word 0x2e010007
  .word 0x102000a0
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24639080
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0260202d
  .word 0x240501fd
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0xc78080c4
  .word 0x4600a502
  .word 0x241111fd
  .word 0x1000008e
  .word 0x00000000
  .word 0x0260202d
  .word 0x240501fc
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400088
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x241111fc
  .word 0x10000083
  .word 0x00000000
  .word 0x0260202d
  .word 0x240501ff
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0xc78080c4
  .word 0x4600a502
  .word 0x241111ff
  .word 0x10000078
  .word 0x00000000
  .word 0x0260202d
  .word 0x240501fe
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400072
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x241111fe
  .word 0x1000006d
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050201
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0xc78080c4
  .word 0x4600a502
  .word 0x24111201
  .word 0x10000062
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050200
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040005c
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x24111200
  .word 0x10000057
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050203
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0xc78080c4
  .word 0x4600a502
  .word 0x24111203
  .word 0x1000004c
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050202
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400046
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x24111202
  .word 0x10000041
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050205
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0xc78080c4
  .word 0x4600a502
  .word 0x24111205
  .word 0x10000036
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050204
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400030
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x24111204
  .word 0x1000002b
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050207
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0xc78080c4
  .word 0x4600a502
  .word 0x24111207
  .word 0x10000020
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050206
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x1040001a
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x24111206
  .word 0x10000015
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050209
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0xc78080c4
  .word 0x4600a502
  .word 0x24111209
  .word 0x1000000a
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050208
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x24111208
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140032
  .word 0x45000019
  .word 0x00000000
  .word 0x32c2000e
  .word 0x1040000a
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405020e
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x2411120e
  .word 0x32c206f0
  .word 0x1040000a
  .word 0x00000000
  .word 0x0260202d
  .word 0x2405020f
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0xc78080a4
  .word 0x4600a502
  .word 0x2411120f
  .word 0x0260202d
  .word 0x24050234
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100001f2
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050233
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0260202d
  .word 0x2405000a
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400003
  .word 0x00000000
  .word 0xc78080e0
  .word 0x4600a502
  .word 0x8e62000c
  .word 0x30420100
  .word 0x0002102b
  .word 0x10400007
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad42
  .word 0x24040004
  .word 0x0280282d
  .word 0x0260302d
  .word 0x02a0382d
  .word 0x0000402d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x0040a02d
  .word 0x96620000
  .word 0x30430004
  .word 0x146001a7
  .word 0x00000000
  .word 0x24020002
  .word 0x12020008
  .word 0x00000000
  .word 0x24020001
  .word 0x12020005
  .word 0x00000000
  .word 0x12000003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x10600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050070
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050071
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050072
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000f
  .word 0x24020006
  .word 0x1202000c
  .word 0x00000000
  .word 0x24020005
  .word 0x12020009
  .word 0x00000000
  .word 0x24020004
  .word 0x12020006
  .word 0x00000000
  .word 0x24020003
  .word 0x12020003
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405007f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050080
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050081
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000f
  .word 0x2e010007
  .word 0x1020013a
  .word 0x00000000
  .word 0x3c03007c
  .word 0x24639060
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405006a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405006b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405006c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040010a
  .word 0x00000000
  .word 0x2652000f
  .word 0x10000107
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050067
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050068
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050069
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104000de
  .word 0x00000000
  .word 0x2652000f
  .word 0x100000db
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405006d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405006e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405006f
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x104000b2
  .word 0x00000000
  .word 0x2652000f
  .word 0x100000af
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050073
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050074
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050075
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400086
  .word 0x00000000
  .word 0x2652000f
  .word 0x10000083
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050076
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050077
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050078
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040005a
  .word 0x00000000
  .word 0x2652000f
  .word 0x10000057
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405007c
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405007d
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405007e
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x1040002e
  .word 0x00000000
  .word 0x2652000f
  .word 0x1000002b
  .word 0x00000000
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050079
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26520005
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405007a
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000a
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x2405007b
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652000f
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x46160002
  .word 0x4600b802
  .word 0x4600a802
  .word 0x4600a002
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00528023
  .word 0x2a010064
  .word 0x14200004
  .word 0x00000000
  .word 0x24100063
  .word 0x10000005
  .word 0x00000000
  .word 0x2a010032
  .word 0x10200002
  .word 0x00000000
  .word 0x24100032
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x0050102a
  .word 0x14400005
  .word 0x00000000
  .word 0xa6710038
  .word 0x24020004
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
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
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





// FUN_0030a740
#ifndef PC_BUILD
asm u32 FUN_0030a740(s32 param_1,u32 param_2,u32 param_3,short param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
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
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x3250ffff
  .word 0x2a0201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405139b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3223ffff
  .word 0x24020004
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020100
  .word 0x10620009
  .word 0x00000000
  .word 0x24020400
  .word 0x10620006
  .word 0x00000000
  .word 0x24020200
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24020001
  .word 0x100001b9
  .word 0x00000000
  .word 0x3244ffff
  .word 0x1280002d
  .word 0x00000000
  .word 0x2a0101d0
  .word 0x1020002a
  .word 0x00000000
  .word 0x00041080
  .word 0x00441021
  .word 0x00021040
  .word 0x00441021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00431021
  .word 0x90420000
  .word 0x30420002
  .word 0x1040001f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x1040000a
  .word 0x00000000
  .word 0x96830002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00621021
  .word 0x9444003c
  .word 0x10000012
  .word 0x00000000
  .word 0x86840002
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x86840002
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c358
  .word 0x00000000
  .word 0x8451001e
  .word 0x10000006
  .word 0x00000000
  .word 0x3082ffff
  .word 0x00021840
  .word 0x8f82b704
  .word 0x00431021
  .word 0x80510000
  .word 0x0011ac3c
  .word 0x0015ac3f
  .word 0x2aa20013
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050ea8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26a30001
  .word 0x24020001
  .word 0x0062a804
  .word 0x3c03000e
  .word 0x34630001
  .word 0x02a31824
  .word 0x10600003
  .word 0x00000000
  .word 0x10000171
  .word 0x00000000
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0c0c2d2c
  .word 0x00000000
  .word 0x32a3000e
  .word 0x1460001a
  .word 0x00000000
  .word 0x32a30100
  .word 0x1060000d
  .word 0x00000000
  .word 0x8f85b708
  .word 0x3244ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0x90640002
  .word 0x24030001
  .word 0x1083000b
  .word 0x00000000
  .word 0x3c030800
  .word 0x00431024
  .word 0x10400004
  .word 0x00000000
  .word 0x24020004
  .word 0x10000154
  .word 0x00000000
  .word 0x24020001
  .word 0x10000151
  .word 0x00000000
  .word 0x3244ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00641821
  .word 0x0003a880
  .word 0x8f85b708
  .word 0x24a30025
  .word 0x00751821
  .word 0x90640000
  .word 0x1480000b
  .word 0x00000000
  .word 0x3c030800
  .word 0x00431024
  .word 0x10400004
  .word 0x00000000
  .word 0x24020004
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x1000013b
  .word 0x00000000
  .word 0x96630000
  .word 0x30630100
  .word 0x1060000b
  .word 0x00000000
  .word 0x3c030800
  .word 0x00431024
  .word 0x10400004
  .word 0x00000000
  .word 0x24020004
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x1000012d
  .word 0x00000000
  .word 0x3c030800
  .word 0x00431024
  .word 0x10400004
  .word 0x00000000
  .word 0x24020004
  .word 0x10000126
  .word 0x00000000
  .word 0x0000882d
  .word 0x0000b02d
  .word 0x3c023f80
  .word 0x4482a000
  .word 0x24020064
  .word 0x14820003
  .word 0x00000000
  .word 0x0040882d
  .word 0x0040b02d
  .word 0x02a51021
  .word 0x90430002
  .word 0x24020002
  .word 0x10620117
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000010d
  .word 0x00000000
  .word 0x16200009
  .word 0x00000000
  .word 0x24040005
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0000402d
  .word 0x0c0c3f10
  .word 0x00000000
  .word 0x0040882d
  .word 0x0260202d
  .word 0x24050231
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x0280202d
  .word 0x24050232
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x4600a502
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46140002
  .word 0x46000024
  .word 0x44120000
  .word 0x0000882d
  .word 0x8e62000c
  .word 0x00021b3c
  .word 0x00031b3e
  .word 0x24020040
  .word 0x10620015
  .word 0x00000000
  .word 0x24020008
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020004
  .word 0x10620009
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x26310032
  .word 0x10000008
  .word 0x00000000
  .word 0x26310028
  .word 0x10000005
  .word 0x00000000
  .word 0x26310064
  .word 0x10000002
  .word 0x00000000
  .word 0x26310064
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86840002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020001
  .word 0x10620010
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x86840002
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3043ffff
  .word 0x24020002
  .word 0x14620002
  .word 0x00000000
  .word 0x2631000f
  .word 0x2a0201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050fdb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f82b708
  .word 0x00551021
  .word 0x90420000
  .word 0x30420002
  .word 0x0002102b
  .word 0x1040002b
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050043
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x26310005
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050044
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2631000a
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96840002
  .word 0x24050045
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2631000f
  .word 0x0280202d
  .word 0x24050005
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400002
  .word 0x00000000
  .word 0x26310007
  .word 0x0280202d
  .word 0x24050006
  .word 0x0c0c03d8
  .word 0x00000000
  .word 0x0002163c
  .word 0x0002163f
  .word 0x18400002
  .word 0x00000000
  .word 0x2631000f
  .word 0x02518821
  .word 0x2a210065
  .word 0x14200004
  .word 0x00000000
  .word 0x24110064
  .word 0x10000004
  .word 0x00000000
  .word 0x06210002
  .word 0x00000000
  .word 0x0000882d
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x0056082a
  .word 0x10200004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000058
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x04410004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000050
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x0051082a
  .word 0x10200004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000047
  .word 0x00000000
  .word 0x2a0201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050fdb
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8f82b708
  .word 0x00551021
  .word 0x90420000
  .word 0x30420002
  .word 0x0002102b
  .word 0x10400037
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x64020001
  .word 0x10000008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0x27829d08
  .word 0x00431021
  .word 0x90420000
  .word 0x304200ff
  .word 0x28420002
  .word 0x14400025
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x14400021
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44100000
  .word 0x00000000
  .word 0x2a010033
  .word 0x14200004
  .word 0x00000000
  .word 0x24100032
  .word 0x10000004
  .word 0x00000000
  .word 0x06010002
  .word 0x00000000
  .word 0x0000802d
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x0050082a
  .word 0x10200009
  .word 0x00000000
  .word 0x24020008
  .word 0x10000007
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405147e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





// FUN_0030af00
#ifndef PC_BUILD
asm u32 FUN_0030af00_narrow(u16 *param_1, u16 *param_2, u16 param_3,
                          u16 param_4, u32 param_5)
{
  .set noreorder
  .word 0x27bdffa0
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
  .word 0x3250ffff
  .word 0x2a0201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24051494
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e63000c
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000066
  .word 0x00000000
  .word 0x3222ffff
  .word 0x24060001
  .word 0x10460004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000005f
  .word 0x00000000
  .word 0x96620000
  .word 0x30420010
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000058
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00022880
  .word 0x8f84b708
  .word 0x00a41821
  .word 0x90620011
  .word 0x1440000c
  .word 0x00000000
  .word 0x90620018
  .word 0x14460006
  .word 0x00000000
  .word 0x8c63001c
  .word 0x3c020008
  .word 0x00621024
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000042
  .word 0x00000000
  .word 0x3243ffff
  .word 0x12800027
  .word 0x00000000
  .word 0x2a0101d0
  .word 0x10200024
  .word 0x00000000
  .word 0x00851021
  .word 0x90420000
  .word 0x30420002
  .word 0x1040001f
  .word 0x00000000
  .word 0x96820000
  .word 0x30420004
  .word 0x1040000a
  .word 0x00000000
  .word 0x96830002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00621021
  .word 0x9443003c
  .word 0x10000012
  .word 0x00000000
  .word 0x86840002
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x86840002
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c358
  .word 0x00000000
  .word 0x8442001e
  .word 0x10000006
  .word 0x00000000
  .word 0x3062ffff
  .word 0x00021840
  .word 0x8f82b704
  .word 0x00431021
  .word 0x80420000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x2a020013
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24050ea8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26030001
  .word 0x24020001
  .word 0x00622004
  .word 0x3c03000e
  .word 0x34630001
  .word 0x00831824
  .word 0x10600002
  .word 0x00000000
  .word 0x0000102d
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
}
#endif /* PC_BUILD: asm function omitted */





// FUN_0030b130
u32
FUN_0030b130(u32 param_1,u32 param_2,u32 param_3,u32 param_4,u32 param_5)

{
  u32 uVar1;
  s32 lVar2;
  
  if ((s32)(param_3 & 0xffff) >= 0x1d0) {
    FUN_0019d3f0((u32)D_0069aa80,0x14c2);
  }
  lVar2 = FUN_0030af00(param_1,(u16*)param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else if (((param_5 & 0xffff) == 2) || ((param_5 & 0xffff) == 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}





#pragma alias FUN_0030af00_narrow FUN_0030af00
// FUN_0030b210
#ifndef PC_BUILD
asm u32 FUN_0030b210(u32 param_1,int param_2,u16 param_3,short param_4)
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
  .word 0x3222ffff
  .word 0x284201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x240514f5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3223ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00431021
  .word 0x90420000
  .word 0x30420002
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000007f
  .word 0x00000000
  .word 0x8e43000c
  .word 0x3c020010
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000076
  .word 0x00000000
  .word 0x96630000
  .word 0x30620020
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000006f
  .word 0x00000000
  .word 0x30620004
  .word 0x14400026
  .word 0x00000000
  .word 0x96620002
  .word 0x2842000b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24051506
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96630002
  .word 0x24020003
  .word 0x10620016
  .word 0x00000000
  .word 0x24020002
  .word 0x10620013
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020006
  .word 0x10620004
  .word 0x00000000
  .word 0x24020007
  .word 0x14620007
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000004a
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000047
  .word 0x00000000
  .word 0x3203ffff
  .word 0x24020004
  .word 0x10620007
  .word 0x00000000
  .word 0x24020002
  .word 0x10620004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003d
  .word 0x00000000
  .word 0x96620000
  .word 0x30430004
  .word 0x10600004
  .word 0x00000000
  .word 0x24020064
  .word 0x10000002
  .word 0x00000000
  .word 0x24020046
  .word 0x3050ffff
  .word 0x10600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050064
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x64100050
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050065
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x64100032
  .word 0x96620000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x96640002
  .word 0x24050066
  .word 0x0c0c01d4
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3203ffff
  .word 0x0043082a
  .word 0x10200004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
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





// FUN_0030b4b0
u32 FUN_0030b4b0(u32 param_1,u32 param_2)

{
  u32 uVar1;
  u32 uVar2;
  short sVar3;
  
  sVar3 = (short)param_2;
  if (sVar3 == -1) {
    uVar1 = 0;
  }
  else {
    if (sVar3 >= 0x13) {
      FUN_0019d3f0((u32)D_0069aa80,0x154b);
    }
    if (sVar3 >= 0x13) {
      FUN_0019d3f0((u32)D_0069aa80,0xea8);
    }
    uVar2 = 1 << ((int)sVar3 + 1);
    if ((uVar2 & 1) != 0) {
      uVar1 = 0;
    }
    else if ((uVar2 & 0xe0000) != 0) {
      uVar1 = 100;
    }
    else {
      {
        extern u32 FUN_00306e80(s32 param_1,u32 param_2);
        uVar1 = FUN_00306e80(param_1,param_2);
      }
    }
  }
  return uVar1;
}





// FUN_0030b5a0
u32 datCalcIsDead(const DatUnit* unit, s32 hpDelta)
{
    if (unit->bad & UNIT_BADSTATUS_DEAD ? 1 : 0)
    {
        return true;
    }

    return (unit->hp + hpDelta) <= 0;
}





// FUN_0030b5e0
u32 datCalcIsLowHp(DatUnit* unit)
{
    u16 hp;

    hp = unit->hp;

    return ((hp * 100) / datCalcGetMaxHp(unit)) < 26; // is hp below 26%
}





// FUN_0030b640
#ifndef PC_BUILD
asm u32 FUN_0030b640(s32 param_1,s32 param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x2410ffff
  .word 0x94840000
  .word 0x30820040
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000c5
  .word 0x00000000
  .word 0x30a5ffff
  .word 0x1220002c
  .word 0x00000000
  .word 0x28a101d0
  .word 0x10200029
  .word 0x00000000
  .word 0x00051080
  .word 0x00451021
  .word 0x00021040
  .word 0x00451021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00431021
  .word 0x90420000
  .word 0x30420002
  .word 0x1040001e
  .word 0x00000000
  .word 0x30820004
  .word 0x1040000a
  .word 0x00000000
  .word 0x96230002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00621021
  .word 0x9445003c
  .word 0x10000012
  .word 0x00000000
  .word 0x86240002
  .word 0x0000282d
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x86240002
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c358
  .word 0x00000000
  .word 0x8442001e
  .word 0x10000006
  .word 0x00000000
  .word 0x30a2ffff
  .word 0x00021840
  .word 0x8f82b704
  .word 0x00431021
  .word 0x80420000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x24020008
  .word 0x14620034
  .word 0x00000000
  .word 0x96220000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000007
  .word 0x00000000
  .word 0x86240002
  .word 0x24050fc7
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002102a
  .word 0x10400002
  .word 0x00000000
  .word 0x241001b6
  .word 0x0220202d
  .word 0x24050244
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2841000a
  .word 0x10200002
  .word 0x00000000
  .word 0x24100244
  .word 0x0220202d
  .word 0x2405024b
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x28410032
  .word 0x10200002
  .word 0x00000000
  .word 0x2410024b
  .word 0x0220202d
  .word 0x24050259
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400038
  .word 0x00000000
  .word 0x24100259
  .word 0x10000035
  .word 0x00000000
  .word 0x24020009
  .word 0x14620032
  .word 0x00000000
  .word 0x96220000
  .word 0x30420004
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000007
  .word 0x00000000
  .word 0x86240002
  .word 0x24050fc7
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002102a
  .word 0x10400002
  .word 0x00000000
  .word 0x241001b6
  .word 0x0220202d
  .word 0x24050245
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x2841000a
  .word 0x10200002
  .word 0x00000000
  .word 0x24100245
  .word 0x0220202d
  .word 0x2405024c
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x28410032
  .word 0x10200002
  .word 0x00000000
  .word 0x2410024c
  .word 0x0220202d
  .word 0x2405025a
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410025a
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x14620019
  .word 0x00000000
  .word 0x96220000
  .word 0x30420400
  .word 0x1440000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405023c
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2410023c
  .word 0x1000000c
  .word 0x00000000
  .word 0x96220000
  .word 0x30420008
  .word 0x14400008
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405023b
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2410023b
  .word 0x0220202d
  .word 0x24050261
  .word 0x0c0c0178
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24100261
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





/* W323 measured: opt_common_subs off nd166 -> 139, object 392/416; reset nd166. */
#pragma opt_common_subs off
// FUN_0030b9a0
#ifndef PC_BUILD
asm u32 FUN_0030b9a0(u16 *param_1,u16 param_2,u16 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0902d
  .word 0x00c0802d
  .word 0x3242ffff
  .word 0x284201d0
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405160b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x3243ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x00021880
  .word 0x8f82b708
  .word 0x00431821
  .word 0x90620000
  .word 0x30420002
  .word 0x1040002a
  .word 0x00000000
  .word 0x96220000
  .word 0x30420004
  .word 0x14400023
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x64020001
  .word 0x10000008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0x27829d08
  .word 0x00431021
  .word 0x90420000
  .word 0x304200ff
  .word 0x24050001
  .word 0x14450004
  .word 0x00000000
  .word 0x30a200ff
  .word 0x1000000e
  .word 0x00000000
  .word 0x3204ffff
  .word 0x30830006
  .word 0x10600003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x24020008
  .word 0x14820004
  .word 0x00000000
  .word 0x64020002
  .word 0x10000002
  .word 0x00000000
  .word 0x30a200ff
  .word 0x1000001d
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001a
  .word 0x00000000
  .word 0x9071000f
  .word 0x90700010
  .word 0x1a200004
  .word 0x00000000
  .word 0x320200ff
  .word 0x1c400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x24051619
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x320300ff
  .word 0x0223102a
  .word 0x14400004
  .word 0x00000000
  .word 0x0220102d
  .word 0x10000007
  .word 0x00000000
  .word 0x323000ff
  .word 0x00702023
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x02021021
  .word 0x304200ff
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_common_subs reset





// FUN_0030bb40
int FUN_0030bb40(u16 param_1)

{
  if (param_1 < 0x270) {
  }
  else {
    FUN_0019d3f0((u32)D_0069aa80,0x162a);
  }
  return iGpffffb7fc + (u32)param_1 * 0x13;
}





// FUN_0030bbb0
int FUN_0030bbb0(u8 param_1)

{
  if (param_1 < 0x20) {
  }
  else {
    FUN_0019d3f0((u32)D_0069aa80,0x1638);
  }
  return iGpffffb800 + (u32)param_1 * 0x15;
}





// FUN_0030bc20
u16 FUN_0030bc20(s16 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00170e90(param_1);
  return *(u16 *)(iVar1 + 8);
}





// FUN_0030bc50

u32 FUN_0030bc50(int param_1)

{
  s32 lVar1;
  u32 uVar2;
  
  if (*(u16 *)(param_1 + 2) >= 0x150) {
    FUN_0019d3f0((u32)D_0069aa80, 0x165b);
  }
  uVar2 = (u32)*(u16 *)(iGpffffb720 + (u32)*(u16 *)(param_1 + 2) * 0x3e + 0x20);
  lVar1 = FUN_0016f190(0xbd0);
  if (lVar1 == 1) {
    uVar2 = (u32)(fGpffff8194 * (float)uVar2);
  }
  lVar1 = FUN_0016f190(0x1311);
  if (lVar1 == 1) {
    uVar2 = (u32)(fGpffff8070 * (float)uVar2);
  }
  return uVar2;
}





#pragma alias FUN_0030bde0_narrow FUN_0030bde0
/* W323 measured: opt_loop_invariants on nd407 -> 404, object 716/736; reset nd407. */
#pragma opt_loop_invariants on
// FUN_0030bde0
#ifndef PC_BUILD
asm short FUN_0030bde0_narrow(u16 *param_1,s32 *param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x00a0882d
  .word 0x94820000
  .word 0x30420004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405167b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96020002
  .word 0x28420150
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x2484aa80
  .word 0x2405167c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96030002
  .word 0x00031140
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b720
  .word 0x00439821
  .word 0x0000802d
  .word 0x12200002
  .word 0x00000000
  .word 0xae200000
  .word 0x96620034
  .word 0x10400015
  .word 0x00000000
  .word 0x96640032
  .word 0x10800012
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x24040064
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x304300ff
  .word 0x92620036
  .word 0x0062082a
  .word 0x10200006
  .word 0x00000000
  .word 0x96700034
  .word 0x12200003
  .word 0x00000000
  .word 0x24020001
  .word 0xae220000
  .word 0x3202ffff
  .word 0x1440006c
  .word 0x00000000
  .word 0x0000902d
  .word 0x0000a02d
  .word 0x10000015
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00021080
  .word 0x02628821
  .word 0x96230022
  .word 0x1060000d
  .word 0x00000000
  .word 0x28621388
  .word 0x14400007
  .word 0x00000000
  .word 0x24021588
  .word 0x00432023
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x92220024
  .word 0x02421021
  .word 0x3052ffff
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3282ffff
  .word 0x28420004
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x641100c8
  .word 0x24040bd8
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430018
  .word 0x00000000
  .word 0xc7818278
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x3063ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3063ffff
  .word 0x3071ffff
  .word 0x16200002
  .word 0x00000000
  .word 0x64110001
  .word 0x3254ffff
  .word 0x1a80002f
  .word 0x00000000
  .word 0x3224ffff
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0054082a
  .word 0x10200028
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x3052ffff
  .word 0x0000a82d
  .word 0x0000a02d
  .word 0x1000001c
  .word 0x00000000
  .word 0x3282ffff
  .word 0x00021080
  .word 0x02628821
  .word 0x26360022
  .word 0x96230022
  .word 0x10600013
  .word 0x00000000
  .word 0x28621388
  .word 0x14400007
  .word 0x00000000
  .word 0x24021588
  .word 0x00432023
  .word 0x0c0e5474
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x92220024
  .word 0x02a21021
  .word 0x3055ffff
  .word 0x0255082a
  .word 0x10200004
  .word 0x00000000
  .word 0x96d00000
  .word 0x10000007
  .word 0x00000000
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3282ffff
  .word 0x28420004
  .word 0x1440ffe2
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
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
#pragma opt_loop_invariants reset





// FUN_0030c0c0
#ifndef PC_BUILD
asm int FUN_0030c0c0(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003c
  .word 0x00000000
  .word 0x0c05d4ac
  .word 0x00000000
  .word 0x3050ffff
  .word 0x0c05d504
  .word 0x00000000
  .word 0x3055ffff
  .word 0x0000a02d
  .word 0x3211ffff
  .word 0x1000002d
  .word 0x00000000
  .word 0x8f84b70c
  .word 0x3283ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x00028040
  .word 0x00901021
  .word 0x94430002
  .word 0x16230004
  .word 0x00000000
  .word 0x94430004
  .word 0x10000004
  .word 0x00000000
  .word 0x94420004
  .word 0x1622001c
  .word 0x00000000
  .word 0x0000982d
  .word 0x3076ffff
  .word 0x10000014
  .word 0x00000000
  .word 0x0013943c
  .word 0x0012943f
  .word 0x0240202d
  .word 0x0c05d258
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05d2a4
  .word 0x00000000
  .word 0x94420002
  .word 0x14560005
  .word 0x00000000
  .word 0x8f82b70c
  .word 0x00501021
  .word 0x1000000e
  .word 0x00000000
  .word 0x26620001
  .word 0x3053ffff
  .word 0x3262ffff
  .word 0x0055102a
  .word 0x1440ffea
  .word 0x00000000
  .word 0x26820001
  .word 0x3054ffff
  .word 0x3282ffff
  .word 0x28420020
  .word 0x1440ffd1
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */





// FUN_0030c220
s32 FUN_0030c220(s32 param_1)

{
  s32 index;
  s32 valid;

  valid = 0;
  index = param_1 & 0xFFFF;
  if ((index >= 0x110) && (index < 0x131)) {
    valid = 1;
  }
  K_ASSERT(!!valid == 1, 0x170D);
  return DAT_007ce3fc + (index - 0x110) * 6;
}





// FUN_0030c2a0
u8 FUN_0030c2a0(u32 param_1)

{
  u16 uVar1;
  u16 uVar2;
  s32 lVar3;
  
  uVar1 = FUN_0030fc40(7,param_1,param_1,0,0);
  lVar3 = FUN_003005e0(param_1,0x218);
  if (lVar3 != 0) {
    uVar1 += 10;
  }
  lVar3 = FUN_0016f190(0x1319);
  if (lVar3 == 0) {
    if (uVar1 > 0x5a) {
      uVar1 = 0x5a;
    }
    else if (uVar1 < 0x32) {
      uVar1 = 0x32;
    }
  }
  else {
    if (uVar1 > 0x5a) {
      uVar1 = 0x5a;
    }
    else if (uVar1 < 5) {
      uVar1 = 5;
    }
  }
  uVar2 = FUN_002ffbc0(100);
  return uVar2 < uVar1;
}





// FUN_0030c3a0
u32 FUN_0030c3a0(u16 *param_1)

{
  u32 uVar1;
  
  if ((*param_1 & 4) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_1[1] >= 0x150) {
      FUN_0019d3f0((u32)D_0069aa80,0x174d);
    }
    if ((*(u16 *)(DAT_007ce410 + (u32)param_1[1] * 0x3e) & 4) != 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}





// FUN_0030c440
void FUN_0030c440(void)

{
  u16 uVar1;
  
  for (uVar1 = 1; uVar1 < 0xb; uVar1++) {
    FUN_0030c490(uVar1);
  }
  return;
}





// FUN_0030c490
void FUN_0030c490(u16 param_1)

{
  s16 id;
  s16 value;

  id = (s16)param_1;
  value = (s16)FUN_0016c5f0(id);
  FUN_0016cf40(id,value);
  value = (s16)FUN_0016c670(id);
  FUN_0016cf90(id,value);
  FUN_0016d9d0(id,-1);
}





// FUN_0030c510
void datCalcNoOp(void)
{
}

// FUN_0030c520
void FUN_0030c520(void)
{
  float value;
  float product;

  if (FUN_00311250() != 0) {
    if (FUN_003111f0() != 0) {
      value = (float)FUN_0030fdf0(0xe, 2) + (float)FUN_0030fdf0(0xe, 2);
      value = (((float)FUN_0030fdf0(0x13, 0) - 30.0f) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      value *= (float)FUN_0030fdf0(0x17, 0);
    } else {
      value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
      value = DAT_007cad74 *
              ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      product = value * (float)FUN_0030fdf0(0x17, 0);
      value = DAT_007caf8c * product;
    }
  } else {
    if (FUN_003111f0() != 0) {
      value = (float)FUN_0030fdf0(0xe, 2) + (float)FUN_0030fdf0(0xe, 2);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      value *= (float)FUN_0030fdf0(0x17, 0);
    } else {
      value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
      value = DAT_007cad74 *
              ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0x17, 0);
      value *= DAT_007caf8c;
      value -= 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
    }
  }
  FUN_00311190((int)value);
}





// FUN_0030c930
void FUN_0030c930(void)
{
  float value;
  float result;
  float factor;

  if (FUN_003111f0() != 0) {
    value = (float)FUN_0030fdf0(0xe, 2);
    value += (float)FUN_0030fdf0(0xe, 2);
    value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
    value *= (float)FUN_0030fdf0(0xd, 1) / 5.0f;
    result = sqrtf(value) * 10.0f;
    result *= (float)FUN_0030fdf0(0xc, 0);
    factor = (float)FUN_0030fdf0(0x17, 0);
    factor = result * factor + (float)FUN_0030fdf0(0x19, 0);
  } else {
    value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
    value = DAT_007cad74 *
            ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
    value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
    value *= (float)FUN_0030fdf0(0xd, 1) / 5.0f;
    result = sqrtf(value) * 10.0f;
    factor = (float)FUN_0030fdf0(0x17, 0);
    factor = result * factor + (float)FUN_0030fdf0(0x19, 0);
    factor *= DAT_007caf8c;
    factor -= 10.0f;
    factor *= (float)FUN_0030fdf0(0xc, 0);
  }
  FUN_00311190((int)factor);
}





// FUN_0030cb90
void FUN_0030cb90(void)
{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  lVar1 = FUN_003111f0();
  if (lVar1 != 0) {
    fVar3 = (float)FUN_0030fdf0(0x13,0);
    fVar2 = (float)FUN_0030fdf0(0x1a,0);
    fVar3 = fVar3 + fVar2;
  }
  else {
    fVar4 = (float)FUN_0030fdf0(0x1a,0);
    fVar3 = DAT_007cadb4 * fVar4 + (float)FUN_0030fdf0(0x13,0);
  }
  FUN_00311190((int)fVar3);
  return;
}





// FUN_0030cc40
void FUN_0030cc40(void)
{
  float ratio;
  float value;
  float output;

  if (FUN_003111f0() != 0) {
    value = (float)FUN_0030fdf0(0xd, 3) + 200.0f;
    value /= (float)FUN_0030fdf0(0xe, 3) + 200.0f;
    output = value * (float)FUN_0030fdf0(0x11, 0);
  } else {
    value = (float)FUN_0030fdf0(0xd, 3) + 200.0f;
    ratio = value / ((float)FUN_0030fdf0(0xe, 3) + 200.0f);
    value = (float)FUN_0030fdf0(0xd, 3) + 200.0f;
    value /= (float)FUN_0030fdf0(0x1f, 0) / 2.0f + 200.0f;
    output = ratio * value * (float)FUN_0030fdf0(0x11, 0);
  }
  FUN_00311190((int)output);
}





// FUN_0030cdb0
void FUN_0030cdb0(void)
{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  lVar1 = FUN_003111f0();
  if (lVar1 == 0)
    goto zero;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar3 = 50.0f;
  fVar4 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,4);
  fVar3 = 50.0f;
  fVar3 = fVar3 + fVar2;
  fVar4 = fVar4 / fVar3;
  fVar2 = (float)FUN_0030fdf0(0x14,0);
  fVar2 = fVar2 * fVar4;
  goto done;
zero:
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar3 = 50.0f;
  fVar4 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,4);
  fVar3 = 50.0f;
  fVar3 = fVar3 + fVar2;
  fVar4 = fVar4 / fVar3;
  fVar3 = (float)FUN_0030fdf0(0x14,0);
  fVar3 = fVar3 * fVar4;
  fVar2 = DAT_007cad74 * fVar3;
done:
  FUN_00311190((int)fVar2);
  return;
}





// FUN_0030cec0
void FUN_0030cec0(void)

{
  float fVar1;
  
  FUN_003111f0();
  fVar1 = (float)FUN_0030fdf0(0x15,0);
  FUN_00311190((int)fVar1);
  return;
}





// FUN_0030cf00
void FUN_0030cf00(void)
{
  float fVar4;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_0030fdf0(0xd,3);
  fVar3 = 100.0f;
  fVar1 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,3);
  fVar3 = 100.0f;
  fVar3 = fVar3 + fVar2;
  fVar4 = fVar1 / fVar3;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar3 = 100.0f;
  fVar1 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,4);
  fVar3 = 100.0f;
  fVar3 = fVar3 + fVar2;
  fVar3 = fVar1 / fVar3;
  fVar2 = fVar4 * fVar3;
  fVar1 = fVar2 * 75.0f;
  fVar3 = (float)FUN_0030fdf0(0x22,0);
  fVar3 = fVar3 * 5.0f + fVar1;
  FUN_00311190((int)(fVar3));
  return;
}





// FUN_0030d000
void FUN_0030d000(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}




// FUN_0030d0e0
void FUN_0030d0e0(void)
{
  float fVar1;
  float fVar2;

  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030d1c0
void FUN_0030d1c0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030d2a0
void FUN_0030d2a0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 40.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030d380
void FUN_0030d380(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 30.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030d460
void FUN_0030d460(void)

{
  float fVar1 = 100.0f;
  FUN_00311190(fVar1);
}





// FUN_0030d4a0
void FUN_0030d4a0(void)

{
  float fVar1 = 100.0f;
  FUN_00311190(fVar1);
}





// FUN_0030d4e0
void FUN_0030d4e0(void)
{
  float value;

  value = (float)FUN_0030fdf0(0xe, 2);
  value += (float)FUN_0030fdf0(0xe, 2);
  value = ((float)FUN_0030fdf0(0x13, 0) - 30.0f) * 30.0f /
          (value * 5.0f);
  value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
  value = sqrtf(value) * 10.0f;
  value *= (float)FUN_0030fdf0(0xc, 0);
  value *= (float)FUN_0030fdf0(0x17, 0);
  value *= (float)FUN_0030fdf0(0x1b, 0);
  value *= (float)FUN_0030fdf0(0x21, 0);
  FUN_00311190((int)(value * DAT_007cad74));
}





// FUN_0030d610
void FUN_0030d610(void)
{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  lVar1 = FUN_003111f0();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0030fdf0(0x12,0);
    fVar2 *= (float)FUN_0030fdf0(0x10,0);
    fVar2 *= (float)FUN_0030fdf0(0xd,4) + 100.0f;
    fVar3 = fVar2 / ((float)FUN_0030fdf0(0xe,4) + 100.0f);
    fVar4 = fVar3;
  }
  else {
    fVar2 = (float)FUN_0030fdf0(0x12,0);
    fVar2 *= (float)FUN_0030fdf0(0x10,0);
    fVar2 *= (float)FUN_0030fdf0(0xd,4) + 100.0f;
    fVar3 = fVar2 / ((float)FUN_0030fdf0(0xe,4) + 100.0f);
    fVar4 = DAT_007cad74 * fVar3;
  }
  FUN_00311190((int)fVar4);
  return;
}

// FUN_0030d750
void FUN_0030d750(void)
{
}





// FUN_0030d760
void FUN_0030d760(void)
{
  float value;
  float product;

  if (FUN_00311250() != 0) {
    if (FUN_003111f0() != 0) {
      value = (float)FUN_0030fdf0(0xe, 2) + (float)FUN_0030fdf0(0xe, 2);
      value = (((float)FUN_0030fdf0(0x13, 0) - 30.0f) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      product = value * (float)FUN_0030fdf0(0x17, 0);
      value = DAT_007cae84 * product;
    } else {
      value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
      value = DAT_007cad74 *
              ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      product = value * (float)FUN_0030fdf0(0x17, 0);
      value = DAT_007cadb4 * product;
    }
  } else {
    if (FUN_003111f0() != 0) {
      value = (float)FUN_0030fdf0(0xe, 2) + (float)FUN_0030fdf0(0xe, 2);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      product = value * (float)FUN_0030fdf0(0x17, 0);
      value = DAT_007cae84 * product;
    } else {
      value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
      value = DAT_007cad74 *
              ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0x17, 0);
      value *= DAT_007cadb4;
      value -= 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
    }
  }
  FUN_00311190((int)value);
}





// FUN_0030db80
void FUN_0030db80(void)
{
  float value;
  float result;
  float factor;

  if (FUN_003111f0() != 0) {
    value = (float)FUN_0030fdf0(0xe, 2);
    value += (float)FUN_0030fdf0(0xe, 2);
    value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
    value *= (float)FUN_0030fdf0(0xd, 1) / 5.0f;
    result = sqrtf(value) * 10.0f;
    result *= (float)FUN_0030fdf0(0xc, 0);
    factor = (float)FUN_0030fdf0(0x17, 0);
    factor = result * factor + (float)FUN_0030fdf0(0x19, 0);
    factor *= DAT_007cae84;
  } else {
    value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
    value = DAT_007cad74 *
            ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
    value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
    value *= (float)FUN_0030fdf0(0xd, 1) / 5.0f;
    result = sqrtf(value) * 10.0f;
    factor = (float)FUN_0030fdf0(0x17, 0);
    factor = result * factor + (float)FUN_0030fdf0(0x19, 0);
    factor *= DAT_007cadb4;
    factor -= 10.0f;
    factor *= (float)FUN_0030fdf0(0xc, 0);
  }
  FUN_00311190((int)factor);
}

// FUN_0030ddf0
void FUN_0030ddf0(void)
{
  float value;
  float factor;

  if (FUN_003111f0() != 0) {
    value = (float)FUN_0030fdf0(0x13, 0);
    factor = value + (float)FUN_0030fdf0(0x1a, 0);
    value = 1.5f * factor;
  } else {
    value = (float)FUN_0030fdf0(0x1a, 0);
    factor = 0.5f;
    value = factor * value + (float)FUN_0030fdf0(0x13, 0);
  }
  FUN_00311190((int)value);
}





// FUN_0030dec0
void FUN_0030dec0(void)
{
  float ratio;
  float value;
  float output;

  if (FUN_003111f0() != 0) {
    value = (float)FUN_0030fdf0(0xd, 3) + 200.0f;
    value /= (float)FUN_0030fdf0(0xe, 3) + 200.0f;
    output = value * (float)FUN_0030fdf0(0x11, 0);
  } else {
    value = (float)FUN_0030fdf0(0xd, 3) + 200.0f;
    ratio = value / ((float)FUN_0030fdf0(0xe, 3) + 200.0f);
    value = (float)FUN_0030fdf0(0xd, 3) + 200.0f;
    value /= (float)FUN_0030fdf0(0x1f, 0) / 2.0f + 200.0f;
    output = ratio * value * (float)FUN_0030fdf0(0x11, 0);
  }
  FUN_00311190((int)output);
}





// FUN_0030e030
void FUN_0030e030(void)

{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  lVar1 = FUN_003111f0();
  if (lVar1 == 0)
    goto zero;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar3 = 50.0f;
  fVar4 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,4);
  fVar3 = 50.0f;
  fVar3 = fVar3 + fVar2;
  fVar4 = fVar4 / fVar3;
  fVar3 = (float)FUN_0030fdf0(0x14,0);
  fVar3 = fVar3 * fVar4;
  goto done;
zero:
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar3 = 50.0f;
  fVar4 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,4);
  fVar3 = 50.0f;
  fVar3 = fVar3 + fVar2;
  fVar4 = fVar4 / fVar3;
  fVar3 = (float)FUN_0030fdf0(0x14,0);
  fVar3 = fVar3 * fVar4 * 0.5f;
done:
  FUN_00311190((int)fVar3);
}





// FUN_0030e140
void FUN_0030e140(void)

{
  float fVar1;
  
  FUN_003111f0();
  fVar1 = (float)FUN_0030fdf0(0x15,0);
  FUN_00311190((int)fVar1);
  return;
}





// FUN_0030e180
void FUN_0030e180(void)
{
  float fVar4;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_0030fdf0(0xd,3);
  fVar3 = 60.0f;
  fVar1 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,3);
  fVar3 = 60.0f;
  fVar3 = fVar3 + fVar2;
  fVar4 = fVar1 / fVar3;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar3 = 30.0f;
  fVar1 = fVar3 + fVar2;
  fVar2 = (float)FUN_0030fdf0(0xe,4);
  fVar3 = 30.0f;
  fVar3 = fVar3 + fVar2;
  fVar3 = fVar1 / fVar3;
  fVar2 = fVar4 * fVar3;
  fVar1 = fVar2 * 85.0f;
  fVar3 = (float)FUN_0030fdf0(0x22,0);
  fVar3 = fVar3 * 5.0f + fVar1;
  FUN_00311190((int)(fVar3));
  return;
}





// FUN_0030e280
void FUN_0030e280(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030e360
void FUN_0030e360(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030e440
void FUN_0030e440(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030e520
void FUN_0030e520(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 40.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030e600
void FUN_0030e600(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 30.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030e6e0
void FUN_0030e6e0(void)

{
  float fVar1 = 100.0f;
  FUN_00311190(fVar1);
}





// FUN_0030e720
void FUN_0030e720(void)

{
  float fVar1 = 100.0f;
  FUN_00311190(fVar1);
}





// FUN_0030e760
void FUN_0030e760(void)
{
  float value;
  float product;

  value = (float)FUN_0030fdf0(0xe, 2);
  value += (float)FUN_0030fdf0(0xe, 2);
  value = (((float)FUN_0030fdf0(0x13, 0) - 30.0f) * 30.0f) /
          (value * 5.0f);
  value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
  value = sqrtf(value) * 10.0f;
  value *= (float)FUN_0030fdf0(0xc, 0);
  product = value * (float)FUN_0030fdf0(0x17, 0);
  value = 2.0f * product;
  value *= (float)FUN_0030fdf0(0x1b, 0);
  value *= (float)FUN_0030fdf0(0x21, 0);
  FUN_00311190((int)(value * DAT_007cad74));
}





// FUN_0030e8a0
void FUN_0030e8a0(void)

{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_003111f0();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0030fdf0(0x12,0);
    fVar3 = (float)FUN_0030fdf0(0x10,0);
    fVar2 = fVar2 * fVar3;
    fVar4 = (float)FUN_0030fdf0(0xd,4);
    fVar2 = fVar2 * (fVar4 + 100.0f);
    fVar4 = (float)FUN_0030fdf0(0xe,4);
    fVar4 = fVar2 / (fVar4 + 100.0f);
  }
  else {
    fVar2 = (float)FUN_0030fdf0(0x12,0);
    fVar3 = (float)FUN_0030fdf0(0x10,0);
    fVar2 = fVar2 * fVar3;
    fVar4 = (float)FUN_0030fdf0(0xd,4);
    fVar2 = fVar2 * (fVar4 + 100.0f);
    fVar4 = (float)FUN_0030fdf0(0xe,4);
    fVar4 = fVar2 / (fVar4 + 100.0f);
    fVar5 = 0.5f;
    fVar3 = fVar5 * fVar4;
    fVar4 = fVar3;
  }
  FUN_00311190((int)fVar4);
  return;
}

// FUN_0030e9f0
void FUN_0030e9f0(void)
{
}





// FUN_0030ea00
void FUN_0030ea00(void)
{
  float value;
  float product;

  if (FUN_00311250() != 0) {
    if (FUN_003111f0() != 0) {
      value = (float)FUN_0030fdf0(0xe, 2) + (float)FUN_0030fdf0(0xe, 2);
      value = (((float)FUN_0030fdf0(0x13, 0) - 30.0f) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      value *= (float)FUN_0030fdf0(0x17, 0);
    } else {
      value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
      value = DAT_007cad74 *
              ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      product = value * (float)FUN_0030fdf0(0x17, 0);
      value = DAT_007cad8c * product;
    }
  } else {
    if (FUN_003111f0() != 0) {
      value = (float)FUN_0030fdf0(0xe, 2) + (float)FUN_0030fdf0(0xe, 2);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
      value *= (float)FUN_0030fdf0(0x17, 0);
    } else {
      value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
      value = DAT_007cad74 *
              ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
      value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
      value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
      value = sqrtf(value) * 10.0f;
      value *= (float)FUN_0030fdf0(0x17, 0);
      value *= DAT_007cad8c;
      value -= 10.0f;
      value *= (float)FUN_0030fdf0(0xc, 0);
    }
  }
  FUN_00311190((int)value);
}





// FUN_0030ee10
void FUN_0030ee10(void)
{
  float value;
  float result;
  float factor;

  if (FUN_003111f0() != 0) {
    value = (float)FUN_0030fdf0(0xe, 2);
    value += (float)FUN_0030fdf0(0xe, 2);
    value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
    value *= (float)FUN_0030fdf0(0xd, 1) / 5.0f;
    result = sqrtf(value) * 10.0f;
    result *= (float)FUN_0030fdf0(0xc, 0);
    factor = (float)FUN_0030fdf0(0x17, 0);
    factor = result * factor + (float)FUN_0030fdf0(0x19, 0);
  } else {
    value = (float)FUN_0030fdf0(0x20, 0) / 2.0f;
    value = DAT_007cad74 *
            ((float)FUN_0030fdf0(0xe, 2) * 2.0f + value / 2.0f);
    value = ((float)FUN_0030fdf0(0x13, 0) * 30.0f) / (value * 5.0f);
    value *= (float)FUN_0030fdf0(0xd, 1) / 5.0f;
    result = sqrtf(value) * 10.0f;
    factor = (float)FUN_0030fdf0(0x17, 0);
    factor = result * factor + (float)FUN_0030fdf0(0x19, 0);
    factor *= DAT_007cad8c;
    factor -= 10.0f;
    factor *= (float)FUN_0030fdf0(0xc, 0);
  }
  FUN_00311190((int)factor);
}





// FUN_0030f070
void FUN_0030f070(void)

{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_003111f0();
  if (lVar1 != 0) {
    fVar3 = (float)FUN_0030fdf0(0x13,0);
    fVar2 = (float)FUN_0030fdf0(0x1a,0);
    fVar3 = fVar3 + fVar2;
  }
  else {
    fVar4 = (float)FUN_0030fdf0(0x1a,0);
    fVar3 = DAT_007cadb4 * fVar4 + (float)FUN_0030fdf0(0x13,0);
  }
  FUN_00311190((int)fVar3);
  return;
}





// FUN_0030f120
void FUN_0030f120(void)
{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  lVar1 = FUN_003111f0();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0030fdf0(0xd,3);
    fVar3 = 200.0f;
    fVar5 = fVar3 + fVar2;
    fVar2 = (float)FUN_0030fdf0(0xe,3);
    fVar3 = 200.0f;
    fVar3 = fVar3 + fVar2;
    fVar5 = fVar5 / fVar3;
    fVar4 = (float)FUN_0030fdf0(0x11,0);
    fVar3 = fVar5 * fVar4;
    fVar4 = fVar3;
    fVar7 = fVar4;
  }
  else {
    fVar2 = (float)FUN_0030fdf0(0xd,3);
    fVar3 = 200.0f;
    fVar5 = fVar3 + fVar2;
    fVar2 = (float)FUN_0030fdf0(0xe,3);
    fVar3 = 200.0f;
    fVar3 = fVar3 + fVar2;
    fVar2 = fVar5 / fVar3;
    fVar4 = (float)FUN_0030fdf0(0xd,3);
    fVar3 = 200.0f;
    fVar5 = fVar3 + fVar4;
    fVar3 = (float)FUN_0030fdf0(0x1f,0);
    fVar3 = fVar3 / 2.0f;
    fVar4 = 200.0f;
    fVar6 = fVar4 + fVar3;
    fVar3 = fVar6;
    fVar5 = fVar5 / fVar3;
    fVar4 = (float)FUN_0030fdf0(0x11,0);
    fVar3 = fVar2 * fVar5;
    fVar7 = fVar3 * fVar4;
  }
  FUN_00311190((int)fVar7);
  return;
}





// FUN_0030f290
void FUN_0030f290(void)
{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_003111f0();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0030fdf0(0xd,4) + 50.0f;
    fVar3 = (float)FUN_0030fdf0(0xe,4) + 50.0f;
    fVar2 = fVar2 / fVar3;
    fVar4 = (float)FUN_0030fdf0(0x14,0);
    fVar4 = fVar4 * fVar2;
    fVar5 = fVar4;
  }
  else {
    fVar2 = (float)FUN_0030fdf0(0xd,4) + 50.0f;
    fVar3 = (float)FUN_0030fdf0(0xe,4) + 50.0f;
    fVar2 = fVar2 / fVar3;
    fVar4 = (float)FUN_0030fdf0(0x14,0);
    fVar4 = fVar4 * fVar2;
    fVar5 = DAT_007cad74 * fVar4;
  }
  FUN_00311190((int)fVar5);
  return;
}





// FUN_0030f3a0
void FUN_0030f3a0(void)

{
  float fVar1;
  
  FUN_003111f0();
  fVar1 = (float)FUN_0030fdf0(0x15,0);
  FUN_00311190((int)fVar1);
  return;
}





// FUN_0030f3e0
void FUN_0030f3e0(void)

{
  float fVar3;
  float fVar2;
  float fVar1;
  
  fVar1 = (float)FUN_0030fdf0(0xd,3) + 150.0f;
  fVar2 = (float)FUN_0030fdf0(0xe,3) + 150.0f;
  fVar3 = fVar1 / fVar2;
  fVar1 = (float)FUN_0030fdf0(0xd,4) + 150.0f;
  fVar2 = (float)FUN_0030fdf0(0xe,4) + 150.0f;
  fVar1 = fVar1 / fVar2;
  fVar2 = fVar3 * fVar1 * 30.0f;
  fVar1 = (float)FUN_0030fdf0(0x22,0);
  FUN_00311190((int)(fVar1 * 5.0f + fVar2));
  return;
}





// FUN_0030f4e0
void FUN_0030f4e0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030f5c0
void FUN_0030f5c0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030f6a0
void FUN_0030f6a0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 50.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030f780
void FUN_0030f780(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 40.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030f860
void FUN_0030f860(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0030fdf0(1,0);
  fVar2 = fVar1 - 1.0f;
  fVar1 = 2.0f + 3.0f * fVar2;
  fVar2 = (float)FUN_0030fdf0(0x10,0);
  fVar1 *= fVar2;
  if (fVar1 <= 0.0f)
    goto nonpositive;
  fVar2 = (float)FUN_0030fdf0(0xd,4);
  fVar2 = (fVar2 / fVar1) * 30.0f;
  goto done;
nonpositive:
  fVar2 = 1.0f;
done:
  FUN_00311190_typed((int)fVar2);
  return;
}





// FUN_0030f940
void FUN_0030f940(void)

{
  float fVar1 = 100.0f;
  FUN_00311190(fVar1);
}





// FUN_0030f980
void FUN_0030f980(void)

{
  float fVar1 = 100.0f;
  FUN_00311190(fVar1);
  return;
}





// FUN_0030f9c0
void FUN_0030f9c0(void)
{
  float value;

  value = (float)FUN_0030fdf0(0xe, 2);
  value += (float)FUN_0030fdf0(0xe, 2);
  value = ((float)FUN_0030fdf0(0x13, 0) - 30.0f) * 30.0f /
          (value * 5.0f);
  value *= (float)FUN_0030fdf0(0xd, 0) / 5.0f;
  value = sqrtf(value) * 10.0f;
  value *= (float)FUN_0030fdf0(0xc, 0);
  value *= (float)FUN_0030fdf0(0x17, 0);
  value *= (float)FUN_0030fdf0(0x1b, 0);
  value *= (float)FUN_0030fdf0(0x21, 0);
  FUN_00311190((int)(value * DAT_007cad74));
}





// FUN_0030faf0
void FUN_0030faf0(void)

{
  s32 lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_003111f0();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0030fdf0(0x12,0);
    fVar3 = (float)FUN_0030fdf0(0x10,0);
    fVar2 = fVar2 * fVar3;
    fVar4 = (float)FUN_0030fdf0(0xd,4);
    fVar2 = fVar2 * (fVar4 + 100.0f);
    fVar4 = (float)FUN_0030fdf0(0xe,4);
    fVar4 = fVar2 / (fVar4 + 100.0f);
  }
  else {
    fVar2 = (float)FUN_0030fdf0(0x12,0);
    fVar3 = (float)FUN_0030fdf0(0x10,0);
    fVar2 = fVar2 * fVar3;
    fVar4 = (float)FUN_0030fdf0(0xd,4);
    fVar2 = fVar2 * (fVar4 + 100.0f);
    fVar4 = (float)FUN_0030fdf0(0xe,4);
    fVar4 = fVar2 / (fVar4 + 100.0f);
    fVar5 = 1.5f;
    fVar3 = fVar5 * fVar4;
    fVar4 = fVar3;
  }
  FUN_00311190((int)fVar4);
  return;
}















 
#define DAT_00957190 (*(u32*)DAT_00957190_abs)
#define DAT_00957194 (*(u32*)DAT_00957194_abs)
#define DAT_00957198 (*(s16*)DAT_00957198_abs)
#define DAT_0095719c (*(u16*)DAT_0095719c_abs)
#define DAT_009571a0 (*(u32*)DAT_009571a0_abs)
#undef DAT_00957190
#undef DAT_00957194
#undef DAT_00957198
#undef DAT_0095719c
#undef DAT_009571a0

// Recovered sibling: FUN_0030fdf0's Ghidra window ran to 0x00311190, but its own
// `jr $ra` is at 0x0031116c followed by four padding nops. A separate 16-byte
// function begins at 0x00311180 (addiu $v0, $zero, 1 / jr $ra / nop / nop) and is
// reached only through a raw pointer stored at ELF file offset 0x6b94b8, never by
// a direct jal, which is why Ghidra never split it out.




#pragma opt_lifetimes reset
