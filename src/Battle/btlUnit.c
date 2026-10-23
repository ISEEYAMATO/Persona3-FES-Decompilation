#include "Battle/btlUnit.h"
#include "Battle/btlPacket.h"
#include "Battle/battle.h"
#include "Battle/btlAction.h"
#include "Battle/btlBoss.h"
#include "Graphics/Model/mdlManager.h"
#include "Main/Battle/Data/datUnit.h"
#include "Main/Battle/Data/datCalc.h"
#include "Main/Battle/Data/datPersona.h"
#include "Scene/mt_scene.h"
#include "Graphics/Model/mdlFile.h"
#include "h_cdvd.h"
#include "Kernel/Kwln/kwln.h"

typedef struct BtlUnitPacket002843e0
{
    BtlUnit* unit; // 0x00
    u16 unk_4;     // 0x04
    u8 unkData[0x02];
} BtlUnitPacket002843e0;
extern const u8 DAT_00693290[];
extern const u8 DAT_006932e0[];
extern const u8* iGpffffb718;
extern const u8* iGpffffb71c;
extern const u8* iGpffffb728;
extern const u8* iGpffffb73c;
extern const u16 gp0xffff9828[];
extern u8* iGpffffb710;
extern u16 func_002fb860(void);
extern void* func_00308c60(DatUnit* unit);
extern s16 func_003082f0(DatUnit* unit, u16 id);
extern long func_002d6370(u64 id);
extern f32 func_00318910(Model* mdl, u32 slot, s16 id);
extern void func_002d4040(BtlUnit* unit);
extern void func_001a0dc0(u16 resTypeId, u32 enable);
extern u32 func_0031c7e0(Model* model);
extern u32 func_0031ebe0(void* data);
extern void func_002bbd00(void* data);
extern void func_002bb8f0(void* data);
extern void func_002b7000(BtlUnit* unit, s8 slot, u32 value);
extern f32 func_004c6ac0(const RwV3d* value);
extern void* func_00174800(u64 id);
extern u32 func_0030b5a0(DatUnit* unit, u32 flag);
extern void func_002f9c10(BtlAction* action);
typedef struct BtlUnitPacketResource
{
    BtlUnit* unit;
    u16 type;
    u16 id;
    u16 flags;
    u8 unkData[2];
    u32 state;
} BtlUnitPacketResource;
extern void func_00287ea0(BtlUnit* unit);
extern u32 DAT_007cc970;
void FUN_002878d0(BtlUnit* unit);
extern void func_002d3fe0(BtlUnit* unit);
extern void mdl00319050(Model* mdl);
extern void mdl00319070(Model* mdl);
extern void mdl003191b0(Model* mdl);
extern u32 func_0017d800(void);
extern void* func_00198580(void);
extern void* func_003b54c0(void* value);
extern void* func_003b5d50(u32 value);
extern void func_004944b0(void* dst, const void* src);
extern void func_004cb7f0(void* dst, const void* src, u32 mode);
extern u32 func_004c9d10(void* value);
extern void func_004c9d00(void* value);
extern void func_004d7f60(u32 group, u32 value);
extern void func_003294d0(void);
extern void func_00329550(void);
extern void func_00358460(const RwRGBA* color, u32 mode);
extern u32 func_00198560(void);
extern u32 func_00198570(void);
extern u32 func_00198590(void);
extern void func_00317a20(Model* mdl);
extern void* DAT_0096017c[];
typedef struct BtlUnitSortEntry
{
    u8 unk_0[0x128];
    Model* mdl;
} BtlUnitSortEntry;

static s16 btlUnitAnimCategory(const BtlUnit* unit, s16 id)
{
    if (unit->genus == UNIT_GENUS_EC)
    {
        if (id == 4 || id == 5 || id == 6)
        {
            return 0;
        }
        return -1;
    }

    if (id == 4)
    {
        return 0;
    }
    if (id == 5)
    {
        return 1;
    }
    if (id == 6)
    {
        return 2;
    }
    return -1;
}
static void btlUnitUnlinkAndFree(BtlUnit* unit)
{
    BtlUnitList* list;

    list = &gBtl->unitLists[unit->genus];
    if (unit->prev != NULL)
    {
        unit->prev->next = unit->next;
    }
    else
    {
        list->head = unit->next;
    }
    if (unit->next != NULL)
    {
        unit->next->prev = unit->prev;
    }
    else
    {
        list->tail = unit->prev;
    }
    RwFree(unit);
}



/* Recovered battle-misc support prelude */
typedef int (*code)(...);
void FUN_00287b20(int param_1,u16 param_2);
#pragma alias btlUnitFabs FUN_0052e118
extern s32 btlUnitFabs(s32 value);
extern s32 func_00530da0(f32 value);
extern f32 func_005318a0(s32 value);
void FUN_00287cf0(BtlUnit* unit, u16 mode);
void FUN_00287ea0(BtlUnit* unit);
void FUN_00288110(BtlUnit* unit);
int FUN_00288da0(BtlUnit* unit, u16 mode);
void FUN_002891e0(void);
BtlAction* FUN_00289650(u16 param_1, u16 param_2, void* param_3);
void btlAction00299e30(BtlAction* action);
extern f32 DAT_007cad78;
extern f32 fGpffff8218;
extern void mdl00318a70(Model* mdl, RwMatrix* matrix, u32 mode);
extern void func_0029ee20(BtlUnit* unit);
extern void func_002fd520(BtlUnit* unit);
extern u32 func_002bbfa0(u64 bad);
extern s16 func_002bbdf0(void* value);
extern void func_002bc0e0(u64 bad, u8* color);
extern void func_002bbdc0(void* value, s16 id);
extern void func_002bbf80(void* value, u32 color);
extern void func_002bbe00(void* value);
extern f32 DAT_007cadb4;
extern f32 DAT_007cadc0;
extern f32 DAT_007caea4;
extern f32 DAT_007cada4;
extern f32 DAT_007cb0cc;
extern code DAT_00960090;
#pragma alias DAT_00960090_abs DAT_00960090
extern code DAT_00960090_abs[];
extern int iGpffffa850;
extern int iGpffffb6fc;

static u32 sNextId = 1; // 007cc51c

static f32 gUnk_007cad7c = 0.3f; // 007cad7c. No idea where to put this

RwV3d gUnk_00957188; // 00957188
extern RwV3d D_00697870;
extern RwV3d D_00697880;
extern RwV3d D_00697890;
extern RwV3d D_006978A0;
extern RwV3d D_00957180;
#pragma alias D_00957180_abs D_00957180
extern RwV3d D_00957180_abs;
extern u8* DAT_007ce42c;
extern const u8* iGpffffb718;
extern const u8* iGpffffb71c;
extern const u8* iGpffffb73c;
extern void func_002ff890(DatUnit* unit, u32 param_2, u16 id);
extern void* func_00308c60(DatUnit* unit);

BtlPacket* btlUnitCreateResNullifiedAnimPacket(BtlUnit* unit, f32 param_2);
BtlPacket* btlUnit00284900(BtlUnit* unit, s32 param_2);
BtlPacket* btlUnitCreateEnmDodgeAnimPacket(BtlUnit* unit, s32 unused);
void FUN_00287490(BtlUnit* unit);
void FUN_00287510(BtlUnit* unit);
void FUN_003b7090(u16 resTypeId);
void FUN_002bbbc0(void* param);

typedef struct BtlUnitAnimInfo
{
    s16 unk_0;
    s16 speedPercent;
    s16 unk_4;
    s16 unk_6;
    s16 unk_8;
} BtlUnitAnimInfo;

typedef struct BtlUnitPacketBackstep
{
    RwV3d origin;          // 0x00
    RwV3d displacement;    // 0x0c
    BtlUnit* unit;         // 0x18
    u16 blendFrameCount;   // 0x1c
    u16 counter;           // 0x1e
    f32 phase;             // 0x20
} BtlUnitPacketBackstep;

void func_0027f530(BtlUnit* unit);
void func_00280050(void* param_1, RwV3d* param_2);
f32 func_00280870(u32 param_1, u32 param_2, RwV3d* param_3, f32* param_4, f32* param_5, u32 param_6);
u32 func_002f8ea0(BtlUnit* unit, RwV3d* param_2);
void func_002d1de0(RwV3d* dst, const RwV3d* from, const RwV3d* to);
void func_002d4800(RwV3d* param_1);
void func_002d48c0(RwV3d* param_1, const RwV3d* param_2, const RwV3d* param_3, f32 param_4);
void func_00288110(BtlUnit* unit);
void func_002831c0(BtlUnit* unit, s32 param_2);
s16 func_002838d0(BtlUnit* unit, u16 id, f32 scale);
s16 func_00283510(BtlUnit* unit, s32 id);
const BtlUnitAnimBounds* func_00288da0(BtlUnit* unit, s32 id);
void* func_002bbc00(BtlUnit* unit);
void* func_002bb7d0(void);
void func_002bcde0(BtlUnit* unit, void* param_2);
f32 func_0052ea18(f32 x, f32 z);
void func_004bdde0(RtQuat* dst, const RwV3d* axis, s32 param_3, f32 angle);
f32 effMiscRandFloat(s32 param_1);
Model* func_00316c70(u16 type, u16 id, HCdvd* cdvd, u32 readMode);
void func_0031c1d0(Model* mdl);
void func_001a0590(u16 resTypeId, u32 param_2);
u32 func_002d5cf0(BtlUnit* unit);
void func_00319230(Model* mdl, u32 param_2);
u32 func_0017c0e0(u16 id);
u16 func_003b6180(u16 id, Model* mdl);
void func_002d3e00(BtlUnit* unit, s32 param_2);
void func_00280130(BtlUnit* unit, RwV3d* param_2);
void func_00280200(BtlUnit* unit, const s16* param_2, RwV3d* param_3);
void func_002802d0(BtlUnit* unit, BtlUnit* target, RwV3d* param_3);
void func_00280390(BtlUnit* unit, BtlUnit* target, RwV3d* param_3);
void func_00280480(BtlUnit* unit, BtlUnit* target, RwV3d* param_3);
void func_00280580(BtlUnit* unit, RwV3d* param_2);
void func_002806d0(BtlUnit* unit, RwV3d* param_2);
void func_002807a0(BtlUnit* unit, RwV3d* param_2);
void func_00280da0(BtlUnit* unit);
f32 func_002812d0(BtlUnit* unit, BtlUnit* target, s32 id);
void func_002826d0(BtlUnit* unit);
void func_00282bc0(BtlUnit* unit);
s16 func_002f9560(BtlUnit* unit, u16* flags);
s16 func_002835e0(BtlUnit* unit, s16 id, f32 scale);
s16 func_002838d0(BtlUnit* unit, u16 id, f32 scale);
u16 func_002ffbc0(u32 max);
f32 func_002fc5d0(BtlUnit* unit, BtlUnit* target, s32 id);
s32 func_00318ed0(Model* mdl, s32 param_2, RwV3d* pos);
u32 func_00281f20(void* work);
BtlPacket* func_00282130(BtlUnit* unit, u16 blendFrameCount);
u32 func_00318620(Model* mdl, u16 slotIdx, s16 id);
u32 func_003186e0(Model* mdl, u16 slotIdx, s16 id);
u32 func_0017d800(void);
s16 btlUnit00282c30(BtlUnit* unit);
u32 btlUnit00282c60(BtlUnit* unit);
u32 btlUnit00282cd0(BtlUnit* unit);
void btlUnit00283c00(BtlUnit* unit, s32 param_2);

// 12 bytes
typedef struct BtlUnitPacketResNullifiedAnim
{
    BtlUnit* unit; // 0x00
    f32 unk_4;     // 0x04
    u32 counter;   // 0x08
} BtlUnitPacketResNullifiedAnim;

void btlUnitInitResNullifiedAnimPacket(void* work);
u32 btlUnitUpdateResNullifiedAnimPacket(void* work);
void btlUnitDestroyResNullifiedAnimPacket(void* work);

// 24 bytes
typedef struct BtlUnitPacket00284900
{
    RwV3d pos;     // 0x00
    BtlUnit* unit; // 0x0c
    u16 unk_10;    // 0x10
    u16 unk_12;    // 0x12
    f32 phase;     // 0x14
} BtlUnitPacket00284900;

void btlUnitInit00284900Packet(void* work);
u32 btlUnitUpdate00284900Packet(void* work);
void btlUnitDestroy00284900Packet(void* work);

// 16 bytes
typedef struct BtlUnitPacketEnmDodgeAnim
{
    BtlUnit* unit; // 0x00
    s32 unk_4;     // 0x04
    f32 phase;     // 0x08
    f32 step;      // 0x0c
} BtlUnitPacketEnmDodgeAnim;

void btlUnitInitEnmDodgeAnimPacket(void* work);
u32 btlUnitUpdateEnmDodgeAnimPacket(void* work);
void btlUnitDestroyEnmDodgeAnimPacket(void* work);

// 4 bytes
typedef struct BtlUnitPacket00284c90
{
    BtlUnit* unit; // 0x00
} BtlUnitPacket00284c90;

void btlUnitInit00284c90Packet(void* work);
u32 btlUnitUpdate00284c90Packet(void* work);
void btlUnitDestroy00284c90Packet(void* work);

// 8 bytes
typedef struct BtlUnitPacket00284d80
{
    BtlUnit* unit; // 0x00
    s16 unk_4;     // 0x04
    u8 unkData[0x02];
} BtlUnitPacket00284d80;

void btlUnitInit00284d80Packet(void* work);
u32 btlUnitUpdate00284d80Packet(void* work);
void btlUnitDestroy00284d80Packet(void* work);

// 16 bytes
typedef struct BtlUnitPacket00284f50
{
    BtlUnit* unit; // 0x00
    u16 unk_4;     // 0x04
    f32 unk_8;     // 0x08
    u16 unk_c;     // 0x0c
} BtlUnitPacket00284f50;

void btlUnitInit00284f50Packet(void* work);
u32 btlUnitUpdate00284f50Packet(void* work);
void btlUnitDestroy00284f50Packet(void* work);

// 16 bytes
typedef struct BtlUnitPacketModel
{
    BtlUnit* unit; // 0x00
    u16 type;      // 0x04. See enum 'ModelType'
    u16 id;        // 0x06
    u16 flags;     // 0x08
    u8 unkData[0x02];
    HCdvd* cdvd;   // 0x0c
} BtlUnitPacketModel;

void btlUnitInitModelPacket(void* work);
u32 btlUnitUpdateModelPacket(void* work);
void btlUnitDestroyModelPacket(void* work);

// 4 bytes
typedef struct BtlUnitPacket002857f0
{
    BtlUnit* unit; // 0x00
} BtlUnitPacket002857f0;

void btlUnitInit002857f0Packet(void* work);
u32 btlUnitUpdate002857f0Packet(void* work);
void btlUnitDestroy002857f0Packet(void* work);

// 20 bytes
typedef struct BtlUnitPacket00285d30
{
    BtlUnit* unit; // 0x00
    u32 startCol;  // 0x04
    u32 targetCol; // 0x08
    s16 unk_c;     // 0x0c
    s16 unk_e;     // 0x0e
    u8 mode;       // 0x10
    u8 flags;      // 0x11
    s16 counter;   // 0x12
} BtlUnitPacket00285d30;

void btlUnitInit00285d30Packet(void* work);
u32 btlUnitUpdate00285d30Packet(void* work);
void btlUnitDestroy00285d30Packet(void* work);

// 4 bytes
typedef struct BtlUnitPacketUnitPtr
{
    BtlUnit* unit; // 0x00
} BtlUnitPacketUnitPtr;

void btlUnitInit00285e50Packet(void* work);
u32 btlUnitUpdate00285e50Packet(void* work);
void btlUnitDestroy00285e50Packet(void* work);

void btlUnitInit00285f20Packet(void* work);
u32 btlUnitUpdate00285f20Packet(void* work);
void btlUnitDestroy00285f20Packet(void* work);

void btlUnitInit002860b0Packet(void* work);
u32 btlUnitUpdate00286240Packet(void* work);
void btlUnitInit00286240Packet(void* work);
void btlUnitDestroy00286240Packet(void* work);
u32 btlUnitUpdate002860b0Packet(void* work);
void btlUnitDestroy002860b0Packet(void* work);

void btlUnit002862a0(void* work);
u32 btlUnit002862c0(void* work);
void btlUnit00286300(void* work);
// FUN_0027f650
void btlUnitSetPos(BtlUnit* unit, const RwV3d* pos)
{
    unit->pos = *pos;
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
}

// FUN_0027f680
void btlUnitSetRot(BtlUnit* unit, const RtQuat* rot)
{
    if (!(unit->flags3 & BTLUNIT_FLAG3_NOROT))
    {
        unit->rot = *rot;
        unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
    }
}

// FUN_0027f6d0
void btlUnitSetRotFromMat(BtlUnit* unit, const RwMatrix* mat)
{
    RtQuatConvertFromMatrix(&unit->rot, mat);
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
}

// FUN_0027f710
void btlUnitSetScale(BtlUnit* unit, f32 scale)
{
    unit->scale = scale;
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
}

// FUN_0027f730
void btlUnitSetColor(BtlUnit* unit, RwRGBA col)
{
    unit->cols[BTLUNIT_COL_MAIN] = col;
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
}

// FUN_0027f770
void btlUnitSetFlags(BtlUnit* unit, u16 flags)
{
    unit->flags |= flags;
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
}

// FUN_0027f790
void btlUnitClearFlags(BtlUnit* unit, u16 flags)
{
    unit->flags &= ~flags;
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
}

// FUN_0027f7c0
void btlUnit0027f7c0(BtlUnit* unit, RwV3d* param_2, RwV3d* parm_3, RwV3d* param_4)
{
    RwV3d base;
    RwV3d target;

    base.x = unit->unk_94 * 25 - 0x6d6;
    base.y = unit->pos.y;
    base.z = unit->unk_96 * 25 - 0x6d6;

    if (param_2 != NULL)
    {
        *param_2 = base;
    }

    if (param_4 != NULL || parm_3 != NULL)
    {
        switch (unit->genus)
        {
        case UNIT_GENUS_PC:
            func_00280870(2, 1, &target, 0, 0, 1);
            break;

        case UNIT_GENUS_EC:
            if (func_002f8ea0(unit, &target) != 1)
            {
                func_00280050(gBtl->actionList.head->unit, &target);
            }
            break;
        }

        if (param_4 != NULL)
        {
            *param_4 = target;
        }

        if (parm_3 != NULL)
        {
            func_002d1de0(parm_3, &base, &target);
        }
    }
}

// FUN_0027f930
s32 btlUnit0027f930(s32 param_1)
{
    return param_1 + 0x4e;
}

/* W389 measured: opt_loop_invariants on nd964->936, object 1260/1328 -> 1244/1328. */
// FUN_0027f940
#ifndef PC_BUILD
asm void func_0027f940(BtlUnit* unit, BtlUnit* source, BtlUnit* target,
                   u16 tableIndex, RwV3d* position, void* rotationOut, u8 mode)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
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
  .word 0x00e0b82d
  .word 0x0100882d
  .word 0x0120802d
  .word 0x0140a82d
  .word 0x949600a4
  .word 0x32a400ff
  .word 0x24030002
  .word 0x10830053
  .word 0x00000000
  .word 0x12000009
  .word 0x00000000
  .word 0xc663001c
  .word 0xc6620020
  .word 0xc6610024
  .word 0xc6600028
  .word 0xe6030000
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x1220009a
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a500b0
  .word 0x0c09ffec
  .word 0x00000000
  .word 0xc661008c
  .word 0xc660002c
  .word 0x460008c2
  .word 0x3c023f00
  .word 0x44821000
  .word 0xc7a100b4
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603101d
  .word 0xe7a000b4
  .word 0x32a300ff
  .word 0x00031040
  .word 0x00431021
  .word 0x00022040
  .word 0x32c3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b73c
  .word 0x00621021
  .word 0x00821821
  .word 0x8462000c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800120
  .word 0xe7a400d0
  .word 0x8462000e
  .word 0x44820000
  .word 0x00000000
  .word 0x468000e0
  .word 0xe7a300d4
  .word 0x84620010
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0xe7a200d8
  .word 0xc681002c
  .word 0x46012002
  .word 0xe7a000c0
  .word 0x46011802
  .word 0xe7a000c4
  .word 0x46011002
  .word 0xe7a000c8
  .word 0x27a400d0
  .word 0x27a500c0
  .word 0x24060001
  .word 0x2667001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a100d0
  .word 0xc7a000b0
  .word 0x46000800
  .word 0xe6200000
  .word 0xc7a100d4
  .word 0xc7a000b4
  .word 0x46000800
  .word 0xe6200004
  .word 0xc7a100d8
  .word 0xc7a000b8
  .word 0x46000800
  .word 0xe6200008
  .word 0x10000054
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a600b0
  .word 0x0c0a00b4
  .word 0x00000000
  .word 0x32e6ffff
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0c0a04b4
  .word 0x00000000
  .word 0x3c024248
  .word 0x44820800
  .word 0x00000000
  .word 0x46010500
  .word 0x27a400a0
  .word 0x26650004
  .word 0x27a600b0
  .word 0x0c0b4778
  .word 0x00000000
  .word 0x27a400e0
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x27a700a0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a000e0
  .word 0x46140542
  .word 0xc7a000e8
  .word 0x46140502
  .word 0x8f84b73c
  .word 0x32c3ffff
  .word 0x00031080
  .word 0x00431021
  .word 0x00021040
  .word 0x00431021
  .word 0x000210c0
  .word 0x00441021
  .word 0x8442000c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc680002c
  .word 0x46000d82
  .word 0x27a400e0
  .word 0x3c050069
  .word 0x24a57870
  .word 0x24060001
  .word 0x27a700a0
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a000e0
  .word 0x46160042
  .word 0xe7a100e0
  .word 0xc7a000e4
  .word 0x46160002
  .word 0xe7a000e4
  .word 0xc7a000e8
  .word 0x46160002
  .word 0xe7a000e8
  .word 0x4601a880
  .word 0x4600a040
  .word 0xc7a000b0
  .word 0x46020000
  .word 0xe7a000d0
  .word 0xc7a000b8
  .word 0x46010000
  .word 0xe7a000d8
  .word 0xafa000d4
  .word 0x12200007
  .word 0x00000000
  .word 0xc7a200d0
  .word 0xc7a100d4
  .word 0xc7a000d8
  .word 0xe6220000
  .word 0xe6210004
  .word 0xe6200008
  .word 0x12000006
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a500d0
  .word 0x27a600b0
  .word 0x0c0b4778
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W389 measured: opt_propagation off (replacing prior loop-invariants scope) nd871->862, object 1176/1232 -> 1168/1232. */
// FUN_0027FC80
#pragma optimization_level 1
#pragma tailcall on
u32 func_0027fc80(BtlUnit* unit)
{
    BtlUnit* source;
    u32 charId;
    u8* table;
    u8* entry;
    uintptr_t address;

    source = unit;
    if (unit->genus != UNIT_GENUS_PS)
    {
        return 0xffffffff;
    }
    charId = source->charId;
    if (charId == 0xcf)
    {
        return 0xffffffff;
    }

    table = DAT_007ce42c;
    address = charId * 0x58;
    address += (uintptr_t)table;
    entry = (u8*)address;
    return ((u32)entry[0x56] << 24) | 0xffffff;
}

#pragma tailcall off
#pragma optimization_level 2

// FUN_0027FCF0
void func_0027fcf0(BtlUnit* unit, const RwV3d* target)
{
    RtQuat rotation;

    func_002d1de0((RwV3d*)&rotation, &unit->pos, target);
    if ((unit->flags3 & BTLUNIT_FLAG3_NOROT) == 0)
    {
        unit->rot = rotation;
        unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
    }
    func_00288110(unit);
}

// FUN_0027fd70
void btlUnitInitPosRotColPacket(void* work)
{
    BtlUnitPacketPosRotCol* packet;

    packet = (BtlUnitPacketPosRotCol*)work;

    packet->unit->packetCount++;
}

// FUN_0027fd90
u32 btlUnitUpdatePosRotColPacket(void* work)
{
    BtlUnitPacketPosRotCol* packet;
    BtlUnit* unit;

    packet = (BtlUnitPacketPosRotCol*)work;

    if (packet->flags & BTLUNIT_POSROTCOL_FLAG_SETPOS)
    {
        unit = packet->unit;

        unit->pos = packet->pos;
        unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
    }

    if (packet->flags & BTLUNIT_POSROTCOL_FLAG_SETROT && 
        !(packet->unit->flags3 & BTLUNIT_FLAG3_NOROT))
    {
        unit = packet->unit;

        unit->rot = packet->rot;
        unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
    }

    if (packet->flags & BTLUNIT_POSROTCOL_FLAG_SETCOL)
    {
        BtlUnit* colUnit;

        colUnit = packet->unit;

        colUnit->cols[BTLUNIT_COL_MAIN] = packet->col;
        colUnit->flags2 |= BTLUNIT_FLAG2_DIRTY;
    }

    return 1;
}
/* W389 measured: opt_dead_assignments off nd246->245, object 528/528 -> 528/528. */
// FUN_0027fe70
void btlUnitDestroyPosRotColPacket(void* work)
{
    BtlUnitPacketPosRotCol* packet;

    packet = (BtlUnitPacketPosRotCol*)work;

    packet->unit->packetCount--;
}

// FUN_0027fe90
BtlPacket* btlUnitCreatePosRotColPacket(BtlUnit* unit, const RwV3d* pos, const RtQuat* rot, const RwRGBA* col)
{
    BtlPacket* packet;
    BtlUnitPacketPosRotCol* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_POSROTCOL, sizeof(BtlUnitPacketPosRotCol));

    packet->initFunc = btlUnitInitPosRotColPacket;
    packet->updateFunc = btlUnitUpdatePosRotColPacket;
    packet->destroyFunc = btlUnitDestroyPosRotColPacket;

    work = (BtlUnitPacketPosRotCol*)packet->workData;

    work->unit = unit;
    work->flags = 0;

    if (pos != NULL)
    {
        work->pos = *pos;
        work->flags |= BTLUNIT_POSROTCOL_FLAG_SETPOS;
    }

    if (rot != NULL)
    {
        work->rot = *rot;
        work->flags |= BTLUNIT_POSROTCOL_FLAG_SETROT;
    }

    if (col != NULL)
    {
        work->col = *col;
        work->flags |= BTLUNIT_POSROTCOL_FLAG_SETCOL;
    }

    return packet;
}

// FUN_0027ffb0
void btlUnitGetSphereWorldCenter(BtlUnit* unit, RwV3d* dst)
{
    RwV3d scaledCenter;
    RwV3d rotatedCenter;

    scaledCenter.x = unit->sphereCenter.x * unit->scale;
    scaledCenter.y = unit->sphereCenter.y * unit->scale;
    scaledCenter.z = unit->sphereCenter.z * unit->scale;

    RtQuatTransformVectors(&rotatedCenter, &scaledCenter, 1, &unit->rot);

    dst->x = rotatedCenter.x + unit->pos.x;
    dst->y = rotatedCenter.y + unit->pos.y;
    dst->z = rotatedCenter.z + unit->pos.z;
}

// FUN_00280050
void func_00280050(void* param_1, RwV3d* param_2)
{
    BtlUnit* unit;
    RwV3d scaled;
    RwV3d transformed;

    unit = (BtlUnit*)param_1;
    scaled.x = unit->sphereCenter.x * unit->scale;
    scaled.y = unit->sphereCenter.y * unit->scale;
    scaled.z = unit->sphereCenter.z * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &unit->rot);
    param_2->x = transformed.x + (unit->unk_94 * 25 - 0x6d6);
    param_2->y = transformed.y + unit->pos.y;
    param_2->z = transformed.z + (unit->unk_96 * 25 - 0x6d6);
}

// FUN_00280130
void func_00280130(BtlUnit* unit, RwV3d* param_2)
{
    const BtlUnitAnimBounds* bounds;
    RwV3d scaled;
    RwV3d transformed;
    f32 centerY;
    f32 centerZ;
    f32 centerX;

    bounds = func_00288da0(unit, 0);
    centerY = bounds->centerY;
    centerZ = bounds->centerZ;
    centerX = bounds->centerX;
    scaled.x = centerX * unit->scale;
    scaled.y = centerY * unit->scale;
    scaled.z = centerZ * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &unit->rot);
    param_2->x = transformed.x + unit->pos.x;
    param_2->y = transformed.y + unit->pos.y;
    param_2->z = transformed.z + unit->pos.z;
}

// FUN_00280200
void func_00280200(BtlUnit* unit, const s16* param_2, RwV3d* param_3)
{
    RwV3d scaled;
    RwV3d transformed;
    f32 y;
    f32 z;
    f32 x;

    y = param_2[1];
    z = param_2[2];
    x = param_2[0];
    scaled.x = x * unit->scale;
    scaled.y = y * unit->scale;
    scaled.z = z * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &unit->rot);
    param_3->x = transformed.x + unit->pos.x;
    param_3->y = transformed.y + unit->pos.y;
    param_3->z = transformed.z + unit->pos.z;
}

// FUN_002802D0
void func_002802d0(BtlUnit* unit, BtlUnit* target, RwV3d* param_3)
{
    RtQuat rotation;
    RwV3d scaled;
    RwV3d transformed;

    func_002d1de0((RwV3d*)&rotation, &unit->pos, &target->pos);
    scaled.x = unit->sphereCenter.x * unit->scale;
    scaled.y = unit->sphereCenter.y * unit->scale;
    scaled.z = unit->sphereCenter.z * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &rotation);
    param_3->x = transformed.x + unit->pos.x;
    param_3->y = transformed.y + unit->pos.y;
    param_3->z = transformed.z + unit->pos.z;
}

// FUN_00280390
void func_00280390(BtlUnit* unit, BtlUnit* target, RwV3d* param_3)
{
    const BtlUnitAnimBounds* bounds;
    RtQuat rotation;
    RwV3d scaled;
    RwV3d transformed;
    f32 centerY;
    f32 centerZ;
    f32 centerX;

    func_002d1de0((RwV3d*)&rotation, &unit->pos, &target->pos);
    bounds = func_00288da0(unit, 9);
    centerY = bounds->centerY;
    centerZ = bounds->centerZ;
    centerX = bounds->centerX;
    scaled.x = centerX * unit->scale;
    scaled.y = centerY * unit->scale;
    scaled.z = centerZ * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &rotation);
    param_3->x = transformed.x + unit->pos.x;
    param_3->y = transformed.y + unit->pos.y;
    param_3->z = transformed.z + unit->pos.z;
}

// FUN_00280480
void func_00280480(BtlUnit* unit, BtlUnit* target, RwV3d* param_3)
{
    RtQuat rotation;
    RwV3d scaled;
    RwV3d transformed;

    func_002d1de0((RwV3d*)&rotation, &unit->pos, &target->pos);
    scaled.x = unit->sphereCenter.x * unit->scale;
    scaled.y = unit->sphereCenter.y * unit->scale;
    scaled.z = unit->sphereCenter.z * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &rotation);
    param_3->x = transformed.x + (unit->unk_94 * 25 - 0x6d6);
    param_3->y = transformed.y + unit->pos.y;
    param_3->z = transformed.z + (unit->unk_96 * 25 - 0x6d6);
}

// FUN_00280580
void func_00280580(BtlUnit* unit, RwV3d* param_2)
{
    RwV3d inactiveScaled;
    RwV3d inactiveTransformed;
    RwV3d scaled;
    RwV3d transformed;

    if ((unit->flags2 & BTLUNIT_FLAG2_UPDATE) == 0)
    {
        inactiveScaled.x = unit->sphereCenter.x * unit->scale;
        inactiveScaled.y = unit->sphereCenter.y * unit->scale;
        inactiveScaled.z = unit->sphereCenter.z * unit->scale;
        RtQuatTransformVectors(&inactiveTransformed, &inactiveScaled, 1, &unit->rot);
        param_2->x = inactiveTransformed.x + unit->pos.x;
        param_2->y = inactiveTransformed.y + unit->pos.y;
        param_2->z = inactiveTransformed.z + unit->pos.z;
        return;
    }

    if (func_00318ed0(unit->mdl, 0, param_2) != 0)
    {
        return;
    }

    scaled.x = unit->sphereCenter.x * unit->scale;
    scaled.y = unit->sphereCenter.y * unit->scale;
    scaled.z = unit->sphereCenter.z * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &unit->rot);
    param_2->x = transformed.x + unit->pos.x;
    param_2->y = transformed.y + unit->pos.y;
    param_2->z = transformed.z + unit->pos.z;
}

// FUN_002806D0
void func_002806d0(BtlUnit* unit, RwV3d* param_2)
{
    RwV3d scaled;
    RwV3d transformed;

    scaled.x = unit->sphereCenter.x * unit->scale;
    scaled.y = unit->sphereCenter.y * unit->scale;
    scaled.z = unit->sphereCenter.z * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &unit->rot);
    param_2->x = transformed.x + unit->pos.x;
    param_2->y = transformed.y + unit->pos.y;
    param_2->z = transformed.z + unit->pos.z;
    param_2->y += unit->unk_8c * unit->scale * DAT_007cb0cc;
}

// FUN_002807A0
void func_002807a0(BtlUnit* unit, RwV3d* param_2)
{
    RwV3d scaled;
    RwV3d transformed;

    scaled.x = unit->sphereCenter.x * unit->scale;
    scaled.y = unit->sphereCenter.y * unit->scale;
    scaled.z = unit->sphereCenter.z * unit->scale;
    RtQuatTransformVectors(&transformed, &scaled, 1, &unit->rot);
    param_2->x = transformed.x + unit->pos.x;
    param_2->y = transformed.y + unit->pos.y;
    param_2->z = transformed.z + unit->pos.z;
    param_2->y += unit->unk_8c * unit->scale * 0.25f;
}
#pragma push
#pragma opt_loop_invariants on
// FUN_00280870
#ifndef PC_BUILD
asm f32 func_00280870(u32 param_1, u32 param_2, RwV3d* param_3,
                  f32* param_4, f32* param_5, u32 param_6)
{
  .set noreorder
  .word 0x27bdfed0
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
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x00e0a82d
  .word 0x0100b02d
  .word 0x4480b800
  .word 0x3c0205f5
  .word 0x3442e100
  .word 0x44820000
  .word 0x00000000
  .word 0x468005a0
  .word 0x0000102d
  .word 0x0000a02d
  .word 0x3c030095
  .word 0xdc657180
  .word 0x3c030095
  .word 0xc4607188
  .word 0xffa50110
  .word 0xe7a00118
  .word 0x0000902d
  .word 0x3097ffff
  .word 0x3123ffff
  .word 0x307e0001
  .word 0x10000069
  .word 0x00000000
  .word 0x24030001
  .word 0x02431804
  .word 0x02e31824
  .word 0x10600063
  .word 0x00000000
  .word 0x001220c0
  .word 0x8f83b6fc
  .word 0x00641821
  .word 0x8c730150
  .word 0x1000005b
  .word 0x00000000
  .word 0x8e64009c
  .word 0x30830008
  .word 0x10600056
  .word 0x00000000
  .word 0x00911824
  .word 0x14600053
  .word 0x00000000
  .word 0x17c0001c
  .word 0x00000000
  .word 0xc6600080
  .word 0xc661002c
  .word 0x46010002
  .word 0xe7a000f0
  .word 0xc6600084
  .word 0x46010002
  .word 0xe7a000f4
  .word 0xc6600088
  .word 0x46010002
  .word 0xe7a000f8
  .word 0x27a400e0
  .word 0x27a500f0
  .word 0x24060001
  .word 0x2667001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6610004
  .word 0xc7a000e0
  .word 0x46010100
  .word 0xc6610008
  .word 0xc7a000e4
  .word 0x460100c0
  .word 0xc661000c
  .word 0xc7a000e8
  .word 0x46010040
  .word 0x1000001a
  .word 0x00000000
  .word 0x86630094
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x2442f92a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800120
  .word 0xc6630084
  .word 0xc662002c
  .word 0xc6610008
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x460218dc
  .word 0x86630096
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x2442f92a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7a00110
  .word 0x46040000
  .word 0xe7a00110
  .word 0xc7a00114
  .word 0x46030000
  .word 0xe7a00114
  .word 0xc7a00118
  .word 0x46010000
  .word 0xe7a00118
  .word 0xc661008c
  .word 0xc660002c
  .word 0x46000882
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4602081c
  .word 0x4600b834
  .word 0x45000002
  .word 0x00000000
  .word 0x460005c6
  .word 0x4600b036
  .word 0x45010002
  .word 0x00000000
  .word 0x46000586
  .word 0x0260102d
  .word 0x26940001
  .word 0x8e730a34
  .word 0x1660ffa5
  .word 0x00000000
  .word 0x26520001
  .word 0x2e430004
  .word 0x1460ff96
  .word 0x00000000
  .word 0x16800004
  .word 0x00000000
  .word 0x44800000
  .word 0x100000a0
  .word 0x00000000
  .word 0x24030001
  .word 0x16830014
  .word 0x00000000
  .word 0xdfa30110
  .word 0xc7a00118
  .word 0xffa30120
  .word 0xe7a00128
  .word 0xc441002c
  .word 0xc4400090
  .word 0x46010602
  .word 0xc440008c
  .word 0x46010042
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0x46180036
  .word 0x4501007e
  .word 0x00000000
  .word 0x46000606
  .word 0x1000007b
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x06800006
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00141842
  .word 0x32820001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000843
  .word 0xc7a00110
  .word 0x46010002
  .word 0xe7a00120
  .word 0xc7a00114
  .word 0x46010542
  .word 0xe7b50124
  .word 0xc7a00118
  .word 0x46010502
  .word 0xe7b40128
  .word 0x4480c000
  .word 0x0000982d
  .word 0x10000058
  .word 0x00000000
  .word 0x24020001
  .word 0x02621004
  .word 0x02e21024
  .word 0x10400052
  .word 0x00000000
  .word 0x001318c0
  .word 0x8f82b6fc
  .word 0x00431021
  .word 0x8c520150
  .word 0x1000004a
  .word 0x00000000
  .word 0x8e43009c
  .word 0x30620008
  .word 0x10400045
  .word 0x00000000
  .word 0x00711024
  .word 0x14400042
  .word 0x00000000
  .word 0x17c00019
  .word 0x00000000
  .word 0xc6400080
  .word 0xc641002c
  .word 0x46010002
  .word 0xe7a000d0
  .word 0xc6400084
  .word 0x46010002
  .word 0xe7a000d4
  .word 0xc6400088
  .word 0x46010002
  .word 0xe7a000d8
  .word 0x27a400c0
  .word 0x27a500d0
  .word 0x24060001
  .word 0x2647001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6410004
  .word 0xc7a000c0
  .word 0x46010080
  .word 0xc641000c
  .word 0xc7a000c8
  .word 0x46010040
  .word 0x10000013
  .word 0x00000000
  .word 0x86430094
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x2442f92a
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x86430096
  .word 0x00031080
  .word 0x00431821
  .word 0x00031080
  .word 0x00621021
  .word 0x2442f92a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7a00120
  .word 0x46001001
  .word 0xe7a00100
  .word 0x4615a801
  .word 0xe7a00104
  .word 0x46140801
  .word 0xe7a00108
  .word 0x27a40100
  .word 0x0c131ab0
  .word 0x00000000
  .word 0xc6430090
  .word 0xc642002c
  .word 0x44800800
  .word 0x00000000
  .word 0x46000818
  .word 0x4602181c
  .word 0x46180036
  .word 0x45010002
  .word 0x00000000
  .word 0x46000606
  .word 0x26940001
  .word 0x8e520a34
  .word 0x1640ffb6
  .word 0x00000000
  .word 0x26730001
  .word 0x2e620004
  .word 0x1440ffa7
  .word 0x00000000
  .word 0x12000007
  .word 0x00000000
  .word 0xc7a20120
  .word 0xc7a10124
  .word 0xc7a00128
  .word 0xe6020000
  .word 0xe6010004
  .word 0xe6000008
  .word 0x12a00002
  .word 0x00000000
  .word 0xe6b70000
  .word 0x12c00002
  .word 0x00000000
  .word 0xe6d60000
  .word 0x4600c006
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
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0130
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_loop_invariants reset

/* Removing this loses func_0027fc80 (MATCH nd0 -> MISMATCH nd18) - measured W161. */
#pragma push
#pragma opt_propagation off
// FUN_00280DA0
#ifndef PC_BUILD
asm void func_00280da0(BtlUnit* unit)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x948300c8
  .word 0x30620001
  .word 0x10400092
  .word 0x00000000
  .word 0x30620010
  .word 0x1040008f
  .word 0x00000000
  .word 0x267100ec
  .word 0x967204ee
  .word 0x967004ec
  .word 0x44800000
  .word 0xc67700cc
  .word 0xc6610004
  .word 0xe7a10088
  .word 0xc661000c
  .word 0xe7a1008c
  .word 0x10000019
  .word 0x00000000
  .word 0x4600bdc1
  .word 0x001210c0
  .word 0x02221021
  .word 0x24540008
  .word 0xc4410008
  .word 0xc7a00088
  .word 0x46000801
  .word 0xe7a00090
  .word 0xc441000c
  .word 0xc7a0008c
  .word 0x46000801
  .word 0xe7a00094
  .word 0x27a40090
  .word 0x0080282d
  .word 0x0c131ac8
  .word 0x00000000
  .word 0x46170034
  .word 0x4500000a
  .word 0x00000000
  .word 0xc6820000
  .word 0xc6810004
  .word 0xe7a20088
  .word 0xe7a1008c
  .word 0x26520001
  .word 0x2602ffff
  .word 0x0242102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x8e6200c4
  .word 0x30420001
  .word 0x10400002
  .word 0x00000000
  .word 0x2612ffff
  .word 0x2602ffff
  .word 0x0242082a
  .word 0x1020003a
  .word 0x00000000
  .word 0xc7a00090
  .word 0x46170082
  .word 0xe7a20098
  .word 0xc7a00094
  .word 0x46170002
  .word 0xe7a0009c
  .word 0xc7a10088
  .word 0x46020d80
  .word 0xc7b4008c
  .word 0x4600a540
  .word 0x001010c0
  .word 0x00511021
  .word 0xc440fff8
  .word 0x46000801
  .word 0xe7a00098
  .word 0xc440fffc
  .word 0x4600a001
  .word 0xe7a0009c
  .word 0x27a40098
  .word 0x0c131abc
  .word 0x00000000
  .word 0xc66100e8
  .word 0x46010034
  .word 0x45000012
  .word 0x00000000
  .word 0x46170000
  .word 0x46010041
  .word 0xc7a00090
  .word 0x46010082
  .word 0xe7a20098
  .word 0xc7a00094
  .word 0x46010042
  .word 0xe7a1009c
  .word 0xc7a00088
  .word 0x46020580
  .word 0x4601a540
  .word 0x966200c8
  .word 0x3042fffe
  .word 0xa66200c8
  .word 0x966200c8
  .word 0x3042ffef
  .word 0xa66200c8
  .word 0xe7b600b0
  .word 0xc6620008
  .word 0xe7a200b4
  .word 0xe7b500b8
  .word 0xc7a00090
  .word 0x4600b040
  .word 0xe7a10088
  .word 0xc7a00094
  .word 0x4600a800
  .word 0xe7a0008c
  .word 0xe7a100a0
  .word 0xe7a200a4
  .word 0xe7a000a8
  .word 0x10000013
  .word 0x00000000
  .word 0x001210c0
  .word 0x02221021
  .word 0xc4400000
  .word 0xe7a000b0
  .word 0xc6600008
  .word 0xe7a000b4
  .word 0xc4400004
  .word 0xe7a000b8
  .word 0xdfa200b0
  .word 0xc7a000b8
  .word 0xffa200a0
  .word 0xe7a000a8
  .word 0x966200c8
  .word 0x3042fffe
  .word 0xa66200c8
  .word 0x966200c8
  .word 0x3042ffef
  .word 0xa66200c8
  .word 0xc7a200b0
  .word 0xc7a100b4
  .word 0xc7a000b8
  .word 0xe6620004
  .word 0xe6610008
  .word 0xe660000c
  .word 0x8e620098
  .word 0x34420004
  .word 0xae620098
  .word 0xa6320402
  .word 0xc7a200a0
  .word 0xc7a100a4
  .word 0xc7a000a8
  .word 0xe66200d0
  .word 0xe66100d4
  .word 0xe66000d8
  .word 0x966200c8
  .word 0x34420002
  .word 0xa66200c8
  .word 0x966200c8
  .word 0x30420002
  .word 0x1040007f
  .word 0x00000000
  .word 0xc66100d0
  .word 0xc6600004
  .word 0x46000b01
  .word 0xe7ac00a0
  .word 0xc66100d8
  .word 0xc660000c
  .word 0x46000841
  .word 0xe7a100a8
  .word 0x44800000
  .word 0x00000000
  .word 0x460c0032
  .word 0x45000004
  .word 0x00000000
  .word 0x46010032
  .word 0x4501006c
  .word 0x00000000
  .word 0x8e62009c
  .word 0x30422000
  .word 0x14400068
  .word 0x00000000
  .word 0xc7ad00a8
  .word 0x0c14ba86
  .word 0x00000000
  .word 0xc78180d0
  .word 0x46000d02
  .word 0x27a400a0
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x2667001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7ac00a0
  .word 0xc7ad00a8
  .word 0x0c14ba86
  .word 0x00000000
  .word 0xc78180d0
  .word 0x46000802
  .word 0x4600a541
  .word 0x4600ab06
  .word 0x0c14c368
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14b846
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c14c628
  .word 0x00000000
  .word 0xc78183c8
  .word 0x46010036
  .word 0x4501002d
  .word 0x00000000
  .word 0x8e6200c4
  .word 0x30420002
  .word 0x14400029
  .word 0x00000000
  .word 0x3c024334
  .word 0x44820800
  .word 0x00000000
  .word 0x46010036
  .word 0x45010010
  .word 0x00000000
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a836
  .word 0x45010007
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x4600ad41
  .word 0x10000005
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44820000
  .word 0x00000000
  .word 0x46150540
  .word 0xc66004f4
  .word 0x00000000
  .word 0x4600ab03
  .word 0x27a40070
  .word 0xc663001c
  .word 0xc6620020
  .word 0xc6610024
  .word 0xc6600028
  .word 0xe7a30070
  .word 0xe7a20074
  .word 0xe7a10078
  .word 0xe7a0007c
  .word 0x3c050069
  .word 0x24a57880
  .word 0x24060002
  .word 0x0c12f778
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x27a40070
  .word 0x3c050069
  .word 0x24a57880
  .word 0x4600a306
  .word 0x0000302d
  .word 0x0c12f778
  .word 0x00000000
  .word 0x966200c8
  .word 0x3042fffd
  .word 0xa66200c8
  .word 0x8e62009c
  .word 0x30422000
  .word 0x14400011
  .word 0x00000000
  .word 0xc7a30070
  .word 0xc7a20074
  .word 0xc7a10078
  .word 0xc7a0007c
  .word 0xe663001c
  .word 0xe6620020
  .word 0xe6610024
  .word 0xe6600028
  .word 0x8e620098
  .word 0x34420004
  .word 0xae620098
  .word 0x10000004
  .word 0x00000000
  .word 0x966200c8
  .word 0x3042fffd
  .word 0xa66200c8
  .word 0x0000102d
  .word 0xdfbf0060
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
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule reset
#pragma pop
#pragma opt_propagation reset
// FUN_00281270
u32 btlUnitIsMoving(BtlUnit* unit)
{
    return (unit->movementFlags & BTLUNIT_MOVEMENTFLAGS_MOVE) != 0;
}


// FUN_00281290
void btlUnitStopMoving(BtlUnit* unit)
{
    unit->movementFlags &= ~BTLUNIT_MOVEMENTFLAGS_MOVE;
}

// FUN_002812b0
void btlUnitStopRotating(BtlUnit* unit)
{
    unit->movementFlags &= ~BTLUNIT_MOVEMENTFLAGS_ROTATE;
}

// FUN_002812D0
f32 func_002812d0(BtlUnit* unit, BtlUnit* target, s32 id)
{
    const BtlUnitAnimInfo* animInfo;
    s16 animId;
    f32 offset;
    f32 targetOffset;

    animId = func_00283510(unit, id);
    if (animId < unit->unk_9d8)
    {
        animInfo = (const BtlUnitAnimInfo*)unit->unk_9ec;
        offset = unit->scale * animInfo[animId].unk_6;
        targetOffset = func_002fc5d0(unit, target, id);
        if (targetOffset >= 0.0f)
        {
            offset += targetOffset;
        }
        else
        {
            offset += target->sphereRadius * target->scale;
        }
        offset += unit->sphereCenter.z * unit->scale;
    }
    else
    {
        offset = 0.0f;
    }

    return offset;
}

// FUN_002813d0
void btlUnitInitMovePacket(void* work)
{
    BtlUnitPacketMove* packet;

    packet = (BtlUnitPacketMove*)work;

    packet->unit->packetCount++;
}

// FUN_002813f0
#ifndef PC_BUILD
asm u32 btlUnitUpdateMovePacket(void* work)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c900000
  .word 0x8c840010
  .word 0x30820008
  .word 0x104000a4
  .word 0x00000000
  .word 0x96230014
  .word 0x24020002
  .word 0x10620094
  .word 0x00000000
  .word 0x24020001
  .word 0x10620017
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000152
  .word 0x00000000
  .word 0x30820010
  .word 0x1040000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50040
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0xc7a20040
  .word 0xc7a10044
  .word 0xc7a00048
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0x96220014
  .word 0x24420001
  .word 0xa6220014
  .word 0x260400ec
  .word 0x0c0b5200
  .word 0x00000000
  .word 0xc620001c
  .word 0xe60000e8
  .word 0x8e220010
  .word 0xae0200c4
  .word 0x3c024158
  .word 0x44820800
  .word 0xc6200020
  .word 0x46000842
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe60000cc
  .word 0x8e0200c4
  .word 0x30420001
  .word 0x14400016
  .word 0x00000000
  .word 0xc6000004
  .word 0xe60000ec
  .word 0xc600000c
  .word 0xe60000f0
  .word 0xc6200004
  .word 0xe60000f4
  .word 0xc620000c
  .word 0xe60000f8
  .word 0x24020002
  .word 0xa60204ec
  .word 0x960200c8
  .word 0x3042ffdf
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x34420001
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x34420010
  .word 0xa60200c8
  .word 0x10000047
  .word 0x00000000
  .word 0xc620001c
  .word 0x44801000
  .word 0x00000000
  .word 0x46001032
  .word 0x45010027
  .word 0x00000000
  .word 0xc6010004
  .word 0xc6200004
  .word 0x46000801
  .word 0xe7a00060
  .word 0xc6010008
  .word 0xc6200008
  .word 0x46000801
  .word 0xe7a00064
  .word 0xc601000c
  .word 0xc620000c
  .word 0x46000801
  .word 0xe7a00068
  .word 0xe7a20064
  .word 0x27a40060
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00060
  .word 0xc621001c
  .word 0x460100c2
  .word 0xe7a30060
  .word 0xc7a00064
  .word 0x46010082
  .word 0xe7a20064
  .word 0xc7a00068
  .word 0x46010042
  .word 0xe7a10068
  .word 0xc6200004
  .word 0x46030000
  .word 0xe7a00040
  .word 0xc6200008
  .word 0x46020000
  .word 0xe7a00044
  .word 0xc620000c
  .word 0x46010000
  .word 0xe7a00048
  .word 0x10000007
  .word 0x00000000
  .word 0xc6220004
  .word 0xc6210008
  .word 0xc620000c
  .word 0xe7a20040
  .word 0xe7a10044
  .word 0xe7a00048
  .word 0xc6000008
  .word 0xe7a00044
  .word 0xc7a20040
  .word 0xc7a10044
  .word 0xc7a00048
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x8e020098
  .word 0x34420004
  .word 0xae020098
  .word 0x960200c8
  .word 0x3042ffdf
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x3042fffe
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x3042ffef
  .word 0xa60200c8
  .word 0xc6220004
  .word 0xc6210008
  .word 0xc620000c
  .word 0xe60200dc
  .word 0xe60100e0
  .word 0xe60000e4
  .word 0x96220014
  .word 0x24420001
  .word 0xa6220014
  .word 0x100000c6
  .word 0x00000000
  .word 0x960300c8
  .word 0x30620001
  .word 0x0002102b
  .word 0x144000c1
  .word 0x00000000
  .word 0x30620002
  .word 0x0002102b
  .word 0x144000bd
  .word 0x00000000
  .word 0x24020001
  .word 0x100000be
  .word 0x00000000
  .word 0x96230014
  .word 0x24020003
  .word 0x106200aa
  .word 0x00000000
  .word 0x24020002
  .word 0x1062007b
  .word 0x00000000
  .word 0x24020001
  .word 0x10620017
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000ac
  .word 0x00000000
  .word 0x30820010
  .word 0x1040000d
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a50040
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c09fdf0
  .word 0x00000000
  .word 0xc7a20040
  .word 0xc7a10044
  .word 0xc7a00048
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0x96220014
  .word 0x24420001
  .word 0xa6220014
  .word 0x260400ec
  .word 0x0c0b5200
  .word 0x00000000
  .word 0xc620001c
  .word 0xe60000e8
  .word 0x8e220010
  .word 0xae0200c4
  .word 0x3c024158
  .word 0x44820800
  .word 0xc6200020
  .word 0x46000842
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46010002
  .word 0xe60000cc
  .word 0xc6000004
  .word 0xe7a00038
  .word 0xc600000c
  .word 0xe7a0003c
  .word 0xc6200004
  .word 0xe7a00030
  .word 0xc620000c
  .word 0xe7a00034
  .word 0x3c024248
  .word 0x44826000
  .word 0x260400ec
  .word 0x27a50038
  .word 0x27a60030
  .word 0x0c0b5230
  .word 0x00000000
  .word 0x960204ec
  .word 0x14400009
  .word 0x00000000
  .word 0xc6220004
  .word 0xc6210008
  .word 0xc620000c
  .word 0xe60200dc
  .word 0xe60100e0
  .word 0xe60000e4
  .word 0x10000035
  .word 0x00000000
  .word 0x000210c0
  .word 0x00501021
  .word 0xc44500dc
  .word 0xe7a50060
  .word 0x44802000
  .word 0xafa00064
  .word 0xc44300e0
  .word 0xe7a30068
  .word 0xc6220004
  .word 0xc6210008
  .word 0xc620000c
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0xafa00054
  .word 0xc7a00050
  .word 0x46002801
  .word 0xe7a00060
  .word 0x46042001
  .word 0xe7a00064
  .word 0xc7a00058
  .word 0x46001801
  .word 0xe7a00068
  .word 0x27a40060
  .word 0x0080282d
  .word 0x0c131a7c
  .word 0x00000000
  .word 0xc7a00060
  .word 0xc621001c
  .word 0x460100c2
  .word 0xe7a30060
  .word 0xc7a00064
  .word 0x46010082
  .word 0xe7a20064
  .word 0xc7a00068
  .word 0x46010042
  .word 0xe7a10068
  .word 0xc7a00050
  .word 0x46030000
  .word 0xe7a00050
  .word 0xc7a00054
  .word 0x46020000
  .word 0xe7a00054
  .word 0xc7a00058
  .word 0x46010000
  .word 0xe7a00058
  .word 0xc7a20050
  .word 0xc7a10054
  .word 0xc7a00058
  .word 0xe60200dc
  .word 0xe60100e0
  .word 0xe60000e4
  .word 0x96220014
  .word 0x24420001
  .word 0xa6220014
  .word 0x920404f0
  .word 0x24030002
  .word 0x1483000f
  .word 0x00000000
  .word 0x960200c8
  .word 0x3042ffdf
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x34420001
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x34420010
  .word 0xa60200c8
  .word 0x96220014
  .word 0x24420001
  .word 0xa6220014
  .word 0x10000027
  .word 0x00000000
  .word 0x24020003
  .word 0x14820024
  .word 0x00000000
  .word 0xc6000004
  .word 0xe60000ec
  .word 0xc600000c
  .word 0xe60000f0
  .word 0xc6200004
  .word 0xe60000f4
  .word 0xc620000c
  .word 0xe60000f8
  .word 0xa60304ec
  .word 0x960200c8
  .word 0x3042ffdf
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x34420001
  .word 0xa60200c8
  .word 0x960200c8
  .word 0x34420010
  .word 0xa60200c8
  .word 0x96220014
  .word 0x24420001
  .word 0xa6220014
  .word 0x1000000d
  .word 0x00000000
  .word 0x960300c8
  .word 0x30620001
  .word 0x0002102b
  .word 0x14400008
  .word 0x00000000
  .word 0x30620002
  .word 0x0002102b
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x8e220018
  .word 0x24420001
  .word 0xae220018
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_002819b0
void btlUnitDestroyMovePacket(void* work)
{
    BtlUnitPacketMove* packet;

    packet = (BtlUnitPacketMove*)work;

    packet->unit->packetCount--;
}

// FUN_002819d0
BtlPacket* btlUnitCreateMovePacket(BtlUnit* unit, const RwV3d* targetPos, f32 speed, u32 flags)
{
    BtlPacket* packet;
    BtlUnitPacketMove* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_MOVE, sizeof(BtlUnitPacketMove));

    packet->initFunc = btlUnitInitMovePacket;
    packet->updateFunc = btlUnitUpdateMovePacket;
    packet->destroyFunc = btlUnitDestroyMovePacket;

    work = (BtlUnitPacketMove*)packet->workData;

    work->unit = unit;
    work->speed = speed;
    work->flags = flags;

    if (targetPos != NULL)
    {
        work->targetPos = *targetPos;
    }
    else
    {
        work->targetPos = gUnk_00957188;
    }

    return packet;
}

// FUN_00281ab0
void btlUnitInitMoveToUnitPacket(void* work)
{
    BtlUnitPacketMoveToUnit* packet;

    packet = (BtlUnitPacketMoveToUnit*)work;

    packet->targetUnit->packetCount++;
}

/* W415: swapped mutually exclusive no-rotation branch layout; final call census matches retail (nd 392 -> 396, object 872/912; offset movement raises nd). */
// FUN_00281ad0
#ifndef PC_BUILD
asm u32 btlUnitUpdateMoveToUnitPacket(void* work)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c820018
  .word 0x144000d2
  .word 0x00000000
  .word 0x8e300024
  .word 0x8e02009c
  .word 0x30422000
  .word 0x14400060
  .word 0x00000000
  .word 0x8e220010
  .word 0x30420040
  .word 0x14400025
  .word 0x00000000
  .word 0x8e220000
  .word 0x27a40040
  .word 0x26050004
  .word 0x24460004
  .word 0x0c0b4778
  .word 0x00000000
  .word 0xc6000080
  .word 0xc601002c
  .word 0x46010002
  .word 0xe7a000c0
  .word 0xc6000084
  .word 0x46010002
  .word 0xe7a000c4
  .word 0xc6000088
  .word 0x46010002
  .word 0xe7a000c8
  .word 0x27a400b0
  .word 0x27a500c0
  .word 0x24060001
  .word 0x27a70040
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6010004
  .word 0xc7a000b0
  .word 0x46010000
  .word 0xe7a000e0
  .word 0xc6010008
  .word 0xc7a000b4
  .word 0x46010000
  .word 0xe7a000e4
  .word 0xc601000c
  .word 0xc7a000b8
  .word 0x46010000
  .word 0xe7a000e8
  .word 0x10000030
  .word 0x00000000
  .word 0x8e220000
  .word 0x27a40030
  .word 0x26050004
  .word 0x24460004
  .word 0x0c0b4778
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0a2368
  .word 0x00000000
  .word 0x84430002
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x84430004
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xc601002c
  .word 0x46010002
  .word 0xe7a000a0
  .word 0x46011802
  .word 0xe7a000a4
  .word 0x46011002
  .word 0xe7a000a8
  .word 0x27a40090
  .word 0x27a500a0
  .word 0x24060001
  .word 0x27a70030
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6010004
  .word 0xc7a00090
  .word 0x46010000
  .word 0xe7a000e0
  .word 0xc6010008
  .word 0xc7a00094
  .word 0x46010000
  .word 0xe7a000e4
  .word 0xc601000c
  .word 0xc7a00098
  .word 0x46010000
  .word 0xe7a000e8
  .word 0xc7a200e0
  .word 0xc7a100e4
  .word 0xc7a000e8
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0x1000006e
  .word 0x00000000
  .word 0x8e220010
  .word 0x30420040
  .word 0x1440001f
  .word 0x00000000
  .word 0xc6000080
  .word 0xc601002c
  .word 0x46010002
  .word 0xe7a00080
  .word 0xc6000084
  .word 0x46010002
  .word 0xe7a00084
  .word 0xc6000088
  .word 0x46010002
  .word 0xe7a00088
  .word 0x27a40070
  .word 0x27a50080
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6010004
  .word 0xc7a00070
  .word 0x46010000
  .word 0xe7a000e0
  .word 0xc6010008
  .word 0xc7a00074
  .word 0x46010000
  .word 0xe7a000e4
  .word 0xc601000c
  .word 0xc7a00078
  .word 0x46010000
  .word 0xe7a000e8
  .word 0x1000002a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0a2368
  .word 0x00000000
  .word 0x84430002
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x84430004
  .word 0x44830000
  .word 0x00000000
  .word 0x468000a0
  .word 0x84420000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xc601002c
  .word 0x46010002
  .word 0xe7a00060
  .word 0x46011802
  .word 0xe7a00064
  .word 0x46011002
  .word 0xe7a00068
  .word 0x27a40050
  .word 0x27a50060
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc6010004
  .word 0xc7a00050
  .word 0x46010000
  .word 0xe7a000e0
  .word 0xc6010008
  .word 0xc7a00054
  .word 0x46010000
  .word 0xe7a000e4
  .word 0xc601000c
  .word 0xc7a00058
  .word 0x46010000
  .word 0xe7a000e8
  .word 0x8e220024
  .word 0x27a400d0
  .word 0x3c050069
  .word 0x24a57890
  .word 0x24060001
  .word 0x2447001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0xc7a000d0
  .word 0xc621001c
  .word 0x460100c2
  .word 0xe7a300d0
  .word 0xc7a000d4
  .word 0x46010082
  .word 0xe7a200d4
  .word 0xc7a000d8
  .word 0x46010042
  .word 0xe7a100d8
  .word 0xc7a000e0
  .word 0x46030000
  .word 0xe7a000e0
  .word 0xc7a000e4
  .word 0x46020000
  .word 0xe7a000e4
  .word 0xc7a000e8
  .word 0x46010000
  .word 0xe7a000e8
  .word 0xc7a200e0
  .word 0xc7a100e4
  .word 0xc7a000e8
  .word 0xe6220004
  .word 0xe6210008
  .word 0xe620000c
  .word 0xae20001c
  .word 0x0220202d
  .word 0x0c0a04fc
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00281e60
void btlUnitDestroyMoveToUnitPacket(void* work)
{
    BtlUnitPacketMoveToUnit* packet;

    packet = (BtlUnitPacketMoveToUnit*)work;

    packet->targetUnit->packetCount--;
}

// FUN_00281e80
BtlPacket* btlUnitCreateMoveToUnitPacket(BtlUnit* unit, BtlUnit* targetUnit, f32 param_3, f32 speed, u32 flags)
{
    BtlPacket* packet;
    BtlUnitPacketMoveToUnit* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_MOVETOUNIT, sizeof(BtlUnitPacketMoveToUnit));
    
    packet->initFunc = btlUnitInitMoveToUnitPacket;
    packet->updateFunc = btlUnitUpdateMoveToUnitPacket;
    packet->destroyFunc = btlUnitDestroyMoveToUnitPacket;

    work = (BtlUnitPacketMoveToUnit*)packet->workData;

    work->move.unit = unit;
    work->move.unk_1c = param_3;
    work->move.speed = speed;
    work->move.flags = flags;
    work->targetUnit = targetUnit;

    return packet;
}

#pragma push
#pragma opt_dead_assignments off
// FUN_00281F20
#ifndef PC_BUILD
asm u32 func_00281f20(void* workData)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c900018
  .word 0x9482001e
  .word 0x1440001b
  .word 0x00000000
  .word 0xc78080c4
  .word 0xe6200020
  .word 0xc6020004
  .word 0xc6010008
  .word 0xc600000c
  .word 0xe6220000
  .word 0xe6210004
  .word 0xe6200008
  .word 0x27a40050
  .word 0x3c050069
  .word 0x24a578a0
  .word 0x24060001
  .word 0x2607001c
  .word 0x0c12f878
  .word 0x00000000
  .word 0x3c0243c8
  .word 0x44820800
  .word 0xc7a00050
  .word 0x46000802
  .word 0xe620000c
  .word 0xc7a00054
  .word 0x46000802
  .word 0xe6200010
  .word 0xc7a00058
  .word 0x46000802
  .word 0xe6200014
  .word 0x9622001c
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
  .word 0x3c024000
  .word 0x44822800
  .word 0x00000000
  .word 0x46002842
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010043
  .word 0xc6200020
  .word 0x46010100
  .word 0xe6240020
  .word 0x3c024080
  .word 0x44821800
  .word 0x3c02c000
  .word 0x44820000
  .word 0x00000000
  .word 0x46040082
  .word 0x3c02bf80
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4604101e
  .word 0x4604185c
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0x46002842
  .word 0xc78081b4
  .word 0x46000834
  .word 0x4500000d
  .word 0x00000000
  .word 0xc620000c
  .word 0x46010002
  .word 0xe7a00040
  .word 0xc6200010
  .word 0x46010002
  .word 0xe7a00044
  .word 0xc6200014
  .word 0x46010002
  .word 0xe7a00048
  .word 0x0000102d
  .word 0x10000008
  .word 0x00000000
  .word 0xc622000c
  .word 0xc6210010
  .word 0xc6200014
  .word 0xe7a20040
  .word 0xe7a10044
  .word 0xe7a00048
  .word 0x24020001
  .word 0xc6210000
  .word 0xc7a00040
  .word 0x46000800
  .word 0xe7a00030
  .word 0xc6210004
  .word 0xc7a00044
  .word 0x46000800
  .word 0xe7a00034
  .word 0xc6210008
  .word 0xc7a00048
  .word 0x46000800
  .word 0xe7a00038
  .word 0xc7a20030
  .word 0xc7a10034
  .word 0xc7a00038
  .word 0xe6020004
  .word 0xe6010008
  .word 0xe600000c
  .word 0x8e030098
  .word 0x34630004
  .word 0xae030098
  .word 0x9623001e
  .word 0x24630001
  .word 0xa623001e
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_dead_assignments reset

// FUN_00282130
BtlPacket* func_00282130(BtlUnit* unit, u16 blendFrameCount)
{
    BtlPacket* packet;
    BtlUnitPacketBackstep* work;

    packet = btlPacketCreate(BTLPACKET_MAKE_ID(BTLPACKET_MODULE_UNIT, 12),
                             sizeof(BtlUnitPacketBackstep));
    packet->updateFunc = func_00281f20;
    work = (BtlUnitPacketBackstep*)packet->workData;
    work->unit = unit;
    work->blendFrameCount = (s16)blendFrameCount;
    work->counter = 0;
    return packet;
}

// FUN_00282190
void btlUnitInitRotatePacket(void* work)
{
    BtlUnitPacketRotate* packet;

    packet = (BtlUnitPacketRotate*)work;

    packet->unit->packetCount++;
}

// FUN_002821b0
u32 btlUnitUpdateRotatePacket(void* work)
{
    BtlUnitPacketRotate* packet;
    BtlUnit* unit;
    RwV3d baseRot;
    u32 flags;
    u32 ret;

    packet = (BtlUnitPacketRotate*)work;
    unit = packet->unit;

    if (packet->timer == 0)
    {
        if (packet->flags & (1 << 5))
        {
            btlUnit0027f7c0(unit, NULL, NULL, &baseRot);
            packet->rot = baseRot;
        }

        flags = packet->flags;
        
        unit->targetRot = packet->rot;
        unit->unk_4f8 = 0;
        unit->unk_e8 = 0;
        unit->unk_c4 = flags;
        unit->movementFlags |= BTLUNIT_MOVEMENTFLAGS_ROTATE;
    }

    // !(unit->movementFlags & BTLUNIT_MOVEMENTFLAGS_ROTATE)
    if (!(unit->movementFlags & BTLUNIT_MOVEMENTFLAGS_ROTATE ? 1 : 0))
    {
        return 1;
    }

    packet->timer++;

    return 0;
}

// FUN_00282290
void btlUnitDestroyRotatePacket(void* work)
{
    BtlUnitPacketRotate* packet;

    packet = (BtlUnitPacketRotate*)work;

    packet->unit->packetCount--;
}

// FUN_002822b0
BtlPacket* btlUnitCreateRotatePacket(BtlUnit* unit, const RwV3d* rot, u32 flags)
{
    BtlPacket* packet;
    BtlUnitPacketRotate* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_ROTATE, sizeof(BtlUnitPacketRotate));

    packet->initFunc = btlUnitInitRotatePacket;
    packet->updateFunc = btlUnitUpdateRotatePacket;
    packet->destroyFunc = btlUnitDestroyRotatePacket;

    work = (BtlUnitPacketRotate*)packet->workData;

    work->unit = unit;
    work->flags = flags;

    if (rot != NULL)
    {
        work->rot = *rot;
    }
    else
    {
        work->rot = gUnk_00957188;
    }

    return packet;
}

// FUN_00282380
void btlUnitInitRotateTowardUnitPacket(void* work)
{
    BtlUnitPacketRotateTowardUnit* packet;

    packet = (BtlUnitPacketRotateTowardUnit*)work;

    packet->unit->packetCount++;
    packet->targetUnit->packetCount++;
}

// FUN_002823b0
u32 btlUnitUpdateRotateTowardUnitPacket(void* work)
{
    BtlUnitPacketRotateTowardUnit* packet;
    BtlUnit* unit;
    BtlUnit* targetUnit;
    RwV3d scaledCenter;
    RwV3d rotatedCenter;
    RwV3d targetRot;
    RtQuat rot;
    f32 x;
    f32 z;
    f32 angle;

    packet = (BtlUnitPacketRotateTowardUnit*)work;
    unit = packet->unit;

    if (packet->timer == 0)
    {
        if (packet->flags & 2)
        {
            if (packet->flags & 0x20)
            {
                targetUnit = packet->targetUnit;
                scaledCenter.x = targetUnit->sphereCenter.x * targetUnit->scale;
                scaledCenter.y = targetUnit->sphereCenter.y * targetUnit->scale;
                scaledCenter.z = targetUnit->sphereCenter.z * targetUnit->scale;
                RtQuatTransformVectors(&rotatedCenter, &scaledCenter, 1, &targetUnit->rot);
                x = rotatedCenter.x + (targetUnit->unk_94 * 25 - 0x6d6) - unit->pos.x;
                z = rotatedCenter.z + (targetUnit->unk_96 * 25 - 0x6d6) - unit->pos.z;
            }
            else
            {
                x = packet->targetUnit->pos.x - unit->pos.x;
                z = packet->targetUnit->pos.z - unit->pos.z;
            }

            if (x != 0.0f || z != 0.0f)
            {
                angle = func_0052ea18(x, z) * DAT_007cadc0;
                func_004bdde0(&rot, &D_00697880, 0, angle);
                if (!(unit->flags3 & BTLUNIT_FLAG3_NOROT))
                {
                    unit->rot = rot;
                    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
                }
            }

            unit->movementFlags &= ~BTLUNIT_MOVEMENTFLAGS_ROTATE;
            func_00288110(unit);
        }
        else
        {
            if (packet->flags & 0x20)
            {
                btlUnit0027f7c0(packet->targetUnit, &unit->targetRot, NULL, NULL);
            }
            else
            {
                unit->targetRot = packet->targetUnit->pos;
            }

            unit->unk_c4 |= packet->flags;
            unit->movementFlags |= BTLUNIT_MOVEMENTFLAGS_ROTATE;
        }
    }

    if (!(unit->movementFlags & BTLUNIT_MOVEMENTFLAGS_ROTATE ? 1 : 0))
    {
        return 1;
    }

    packet->timer++;
    return 0;
}

// FUN_00282620
void btlUnitDestroyRotateTowardUnitPacket(void* work)
{
    BtlUnitPacketRotateTowardUnit* packet;

    packet = (BtlUnitPacketRotateTowardUnit*)work;

    packet->unit->packetCount--;
    packet->targetUnit->packetCount--;
}

// FUN_00282650
BtlPacket* btlUnitCreateRotateTowardUnitPacket(BtlUnit* unit, BtlUnit* targetUnit, u32 flags)
{
    BtlPacket* packet;
    BtlUnitPacketRotateTowardUnit* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_ROTATETOWARDUNIT, sizeof(BtlUnitPacketRotateTowardUnit));

    packet->initFunc = btlUnitInitRotateTowardUnitPacket;
    packet->updateFunc = btlUnitUpdateRotateTowardUnitPacket;
    packet->destroyFunc = btlUnitDestroyRotateTowardUnitPacket;

    work = (BtlUnitPacketRotateTowardUnit*)packet->workData;

    work->unit = unit;
    work->targetUnit = targetUnit;
    work->flags = flags;

    return packet;
}

// FUN_002826D0
#ifndef PC_BUILD
asm void func_002826d0(BtlUnit* unit)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c830098
  .word 0x30630002
  .word 0x10600127
  .word 0x00000000
  .word 0x8e3009f4
  .word 0x962309cc
  .word 0x30620002
  .word 0x10400008
  .word 0x00000000
  .word 0x44806000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x1000011b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400016
  .word 0x00000000
  .word 0x0c0a0ee8
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x862209da
  .word 0x0062102a
  .word 0x1440000e
  .word 0x00000000
  .word 0x862209dc
  .word 0x1840000b
  .word 0x00000000
  .word 0x44806000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x862309dc
  .word 0x2463ffff
  .word 0xa62309dc
  .word 0x10000103
  .word 0x00000000
  .word 0x8e2409f4
  .word 0x0000282d
  .word 0xc62c09d4
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x962309cc
  .word 0x30630008
  .word 0x14600030
  .word 0x00000000
  .word 0x962300c8
  .word 0x30620001
  .word 0x1040001b
  .word 0x00000000
  .word 0x30620004
  .word 0x14400018
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b34
  .word 0x00000000
  .word 0x14400024
  .word 0x00000000
  .word 0x8e2200c4
  .word 0x30420004
  .word 0x10400005
  .word 0x00000000
  .word 0x3c024000
  .word 0x44826000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0220202d
  .word 0x24050001
  .word 0x24060004
  .word 0x00a0382d
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b34
  .word 0x00000000
  .word 0x1040000d
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b18
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x822709e8
  .word 0x0220202d
  .word 0x862509e0
  .word 0x24060006
  .word 0xc62c09e4
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x962309d0
  .word 0x2c610008
  .word 0x102000c4
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24847b00
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x920400ee
  .word 0x24030001
  .word 0x148300b9
  .word 0x00000000
  .word 0x863009e0
  .word 0x0220202d
  .word 0x0c0a0b0c
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x120300b1
  .word 0x00000000
  .word 0x0220202d
  .word 0x262509cc
  .word 0x0c0be558
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402ffff
  .word 0x10620004
  .word 0x00000000
  .word 0x3066ffff
  .word 0x10000028
  .word 0x00000000
  .word 0x862209e2
  .word 0x18400004
  .word 0x00000000
  .word 0x3046ffff
  .word 0x10000022
  .word 0x00000000
  .word 0x862309e0
  .word 0x24020011
  .word 0x10620009
  .word 0x00000000
  .word 0x2402000d
  .word 0x10620006
  .word 0x00000000
  .word 0x24020003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x3065ffff
  .word 0x0220202d
  .word 0x0c0a0d44
  .word 0x00000000
  .word 0x3044ffff
  .word 0x962209d8
  .word 0x0082082a
  .word 0x10200009
  .word 0x00000000
  .word 0x8e2309ec
  .word 0x00041080
  .word 0x00441021
  .word 0x00021040
  .word 0x00431021
  .word 0x94460008
  .word 0x10000005
  .word 0x00000000
  .word 0x64060006
  .word 0x10000002
  .word 0x00000000
  .word 0x0000302d
  .word 0x822709e8
  .word 0x0220202d
  .word 0x862509e0
  .word 0xc62c09e4
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0xc6010108
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46000834
  .word 0x4501006f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b0c
  .word 0x00000000
  .word 0x00029c3c
  .word 0x00139c3f
  .word 0x0220202d
  .word 0x0c0a0ee8
  .word 0x00000000
  .word 0x0002943c
  .word 0x0012943f
  .word 0x3265ffff
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0220202d
  .word 0x0c0a0d78
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x0243182a
  .word 0x1460005a
  .word 0x00000000
  .word 0x44806000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x10000053
  .word 0x00000000
  .word 0x920400ee
  .word 0x24030001
  .word 0x1483004f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b0c
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2405000d
  .word 0x10650047
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0220202d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x1000003e
  .word 0x00000000
  .word 0x920400ee
  .word 0x24030001
  .word 0x1483003a
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b0c
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2405000f
  .word 0x10650032
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0220202d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x920400ee
  .word 0x24030001
  .word 0x14830025
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b0c
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x24050018
  .word 0x1065001d
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0220202d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x920400ee
  .word 0x24030001
  .word 0x14830010
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0b0c
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x24050019
  .word 0x10650008
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0220202d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x962309cc
  .word 0x3063fff7
  .word 0xa62309cc
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

// FUN_00282BC0
void func_00282bc0(BtlUnit* unit)
{
    s16 animation;

    animation = (s16)func_002838d0(
        unit, (u16)(s32)btlUnit00282c30(unit), 1.0f);
    animation = (s16)func_002ffbc0(animation);
    btlUnit00283c00(unit, animation);
}

// FUN_00282c30
s16 btlUnit00282c30(BtlUnit* unit)
{
    if ((unit->flags2 & 2) != 0)
    {
        return unit->unk_9ce;
    }

    return 0;
}

// FUN_00282c60
u32 btlUnit00282c60(BtlUnit* unit)
{
    s16 val;

    switch (unit->genus)
    {
    case 0:
    case 1:
        if ((unit->flags2 & 2) != 0)
        {
            val = unit->unk_9ce;
        }
        else
        {
            val = 0;
        }
        return unit->unk_9e0 == val;
    }

    return 0;
}

// FUN_00282cd0
u32 btlUnit00282cd0(BtlUnit* unit)
{
    s16 val;

    switch (unit->genus)
    {
    case 0:
    case 1:
        if ((unit->flags2 & 2) != 0)
        {
            val = unit->unk_9ce;
        }
        else
        {
            val = 0;
        }
        return val == 1;
    }

    return 0;
}

// FUN_00282d40
#ifndef PC_BUILD
asm void btlUnitAnimate(BtlUnit* unit, s32 id, u16 blendFrameCount, f32 speed, u16 mode)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x00c0a82d
  .word 0x46006506
  .word 0x00e0902d
  .word 0xa49209d0
  .word 0x8c830098
  .word 0x30630002
  .word 0x10600100
  .word 0x00000000
  .word 0x3214ffff
  .word 0xa63009ce
  .word 0x0280282d
  .word 0x0c0a0d44
  .word 0x00000000
  .word 0x3053ffff
  .word 0x962209d8
  .word 0x0262082a
  .word 0x10200013
  .word 0x00000000
  .word 0x8e2309ec
  .word 0x00131080
  .word 0x00531021
  .word 0x00021040
  .word 0x00431021
  .word 0x84420002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0x4600a002
  .word 0xe62009d4
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0xae2209d4
  .word 0x3252ffff
  .word 0x2e410008
  .word 0x1020000b
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24637b20
  .word 0x00121080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x64020001
  .word 0x3048ffff
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46140032
  .word 0x45010013
  .word 0x00000000
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2402000b
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020006
  .word 0x10620009
  .word 0x00000000
  .word 0x24020005
  .word 0x10620006
  .word 0x00000000
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x35020060
  .word 0x3048ffff
  .word 0x0013343c
  .word 0x0006343f
  .word 0x8e2409f4
  .word 0x0000282d
  .word 0x02a0382d
  .word 0x0c0c60b4
  .word 0x00000000
  .word 0x8e2409f4
  .word 0x0000282d
  .word 0xc62c09d4
  .word 0x0c0c627c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0a2368
  .word 0x00000000
  .word 0x84430000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200080
  .word 0x84430002
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200084
  .word 0x84430004
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200088
  .word 0x94430006
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe620008c
  .word 0x94430008
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6200090
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x2404000f
  .word 0x10640006
  .word 0x00000000
  .word 0x24040007
  .word 0x10640003
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x962409d8
  .word 0x0264082a
  .word 0x1020001d
  .word 0x00000000
  .word 0x3265ffff
  .word 0x00052080
  .word 0x00852021
  .word 0x00043040
  .word 0x8e2409ec
  .word 0x00862821
  .word 0x84a40000
  .word 0x04800014
  .word 0x00000000
  .word 0x84a40004
  .word 0x18800011
  .word 0x00000000
  .word 0x962409cc
  .word 0x34840004
  .word 0xa62409cc
  .word 0x8e2409ec
  .word 0x00862021
  .word 0x84840000
  .word 0xa62409da
  .word 0x8e2409ec
  .word 0x00c42021
  .word 0x84840004
  .word 0xa62409dc
  .word 0x10000004
  .word 0x00000000
  .word 0x962409cc
  .word 0x3084fffb
  .word 0xa62409cc
  .word 0x1640004f
  .word 0x00000000
  .word 0x24040006
  .word 0x10640024
  .word 0x00000000
  .word 0x24040005
  .word 0x10640021
  .word 0x00000000
  .word 0x24040004
  .word 0x1064001e
  .word 0x00000000
  .word 0x24040013
  .word 0x10640018
  .word 0x00000000
  .word 0x24040016
  .word 0x10640015
  .word 0x00000000
  .word 0x24040015
  .word 0x10640012
  .word 0x00000000
  .word 0x2404000a
  .word 0x1064000f
  .word 0x00000000
  .word 0x24040008
  .word 0x1064000c
  .word 0x00000000
  .word 0x2404000b
  .word 0x10640009
  .word 0x00000000
  .word 0x24040007
  .word 0x10640006
  .word 0x00000000
  .word 0x24040002
  .word 0x10640003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0xa62009e2
  .word 0x10000029
  .word 0x00000000
  .word 0x922300a2
  .word 0x1460000d
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x1080000a
  .word 0x00000000
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304400ff
  .word 0x24030006
  .word 0x14830004
  .word 0x00000000
  .word 0xa62009e2
  .word 0x1000001a
  .word 0x00000000
  .word 0x922300a2
  .word 0x14600004
  .word 0x00000000
  .word 0x24030005
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0xa62309e2
  .word 0x10000010
  .word 0x00000000
  .word 0x962309d8
  .word 0x0263082a
  .word 0x1020000b
  .word 0x00000000
  .word 0x8e2509ec
  .word 0x3264ffff
  .word 0x00041880
  .word 0x00641821
  .word 0x00031840
  .word 0x00651821
  .word 0x84630008
  .word 0xa62309e2
  .word 0x10000002
  .word 0x00000000
  .word 0xa62009e2
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W420: grouped PC/EC switch and single-case availability checks corrected EXTRA 002831c0 (nd394, obj740/848; baseline nd552, obj820/848). */
// FUN_002831C0
#ifndef PC_BUILD
asm void func_002831c0(BtlUnit* unit, s32 blendFrameCount)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x0000982d
  .word 0x8c840a2c
  .word 0x0c0c2d78
  .word 0x00000000
  .word 0x10400027
  .word 0x00000000
  .word 0x8ea20098
  .word 0x30420002
  .word 0x1040001f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050011
  .word 0x0c0a0d44
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8ea409f4
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c0c6188
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8ea409f4
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c0c61b8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000004
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x10600002
  .word 0x00000000
  .word 0x24130011
  .word 0x8ea40a2c
  .word 0x3c02000f
  .word 0x3445feff
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24130003
  .word 0x8ea40a2c
  .word 0x3c050010
  .word 0x0c0c0160
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x24130009
  .word 0x8ea40a2c
  .word 0x0000282d
  .word 0x0c0c2d68
  .word 0x00000000
  .word 0x1040002b
  .word 0x00000000
  .word 0x8ea2009c
  .word 0x30420020
  .word 0x10400027
  .word 0x00000000
  .word 0x8ea20098
  .word 0x30420002
  .word 0x1040001f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050012
  .word 0x0c0a0d44
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8ea409f4
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c0c6188
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000f
  .word 0x00000000
  .word 0x8ea409f4
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c0c61b8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0000182d
  .word 0x10000004
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x10600002
  .word 0x00000000
  .word 0x24130012
  .word 0x0013843c
  .word 0x0010843f
  .word 0x24020012
  .word 0x12020005
  .word 0x00000000
  .word 0x64120001
  .word 0x96b109e2
  .word 0x10000003
  .word 0x00000000
  .word 0x64120002
  .word 0x0000882d
  .word 0x8ea40a2c
  .word 0x0c0c014c
  .word 0x00000000
  .word 0x24030100
  .word 0x1043000a
  .word 0x00000000
  .word 0x24030020
  .word 0x10430003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c033f00
  .word 0x4483a000
  .word 0x1000000f
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x3c034000
  .word 0x4483a000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c034040
  .word 0x4483a000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c033f80
  .word 0x4483a000
  .word 0x92a400a2
  .word 0x24030001
  .word 0x10830005
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8ea30098
  .word 0x30630002
  .word 0x10600004
  .word 0x00000000
  .word 0x86a309ce
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x0003243c
  .word 0x0004243f
  .word 0x86a309e0
  .word 0x00641826
  .word 0x2c630001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x1060000b
  .word 0x00000000
  .word 0x86a309e0
  .word 0x10700008
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0260282d
  .word 0x0280302d
  .word 0x4600a306
  .word 0x0240382d
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0xa6b309e0
  .word 0xa6b109e2
  .word 0xe6b409e4
  .word 0xa2b209e8
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00283510
s16 func_00283510(BtlUnit* unit, s32 id)
{
    s16 result;
    const u8* row;

    switch (unit->genus)
    {
    case UNIT_GENUS_PC:
    case UNIT_GENUS_PS:
        goto resolve;
    default:
        break;
    }
    switch (unit->genus)
    {
    case UNIT_GENUS_EC:
        break;
    default:
        goto zero;
    }
    result = (s16)func_002fb860();
    if (result != -1)
    {
        return result;
    }

resolve:
    row = DAT_00693290 + (u32)unit->genus * 26;
    result = row[(u32)id & 0xffff];
    return result;

zero:
    return 0;
}

// FUN_002835E0
s16 func_002835e0(BtlUnit* unit, s16 id, f32 scale)
{
    s16 animId;
    s16 tableId;
    const u8* row;
    const BtlUnitAnimInfo* info;
    u32 offset;

    switch (unit->genus)
    {
    case UNIT_GENUS_PC:
    case UNIT_GENUS_PS:
        goto resolve;
    default:
        break;
    }
    switch (unit->genus)
    {
    case UNIT_GENUS_EC:
        break;
    default:
        goto zero;
    }
    animId = (s16)func_002fb860();
    switch (animId)
    {
    case -1:
        goto resolve;
    default:
        break;
    }
    goto resolved;

resolve:
    row = DAT_00693290 + (u32)unit->genus * 26;
    tableId = row[(u16)id];
    goto tableResolved;

zero:
    animId = 0;
    goto resolved;

tableResolved:
    animId = tableId;

resolved:
    if (animId < unit->unk_9d8)
    {
        offset = animId * sizeof(*info);
        info = (const BtlUnitAnimInfo*)(offset + (u32)unit->unk_9ec);
        return (s16)((f32)info->unk_0 /
                     (scale * ((f32)info->speedPercent / 100.0f)));
    }
    return 0;
}

// FUN_00283750
s16 func_00283750(BtlUnit* unit, s16 id, f32 scale)
{
    s16 animId;
    s16 tableId;
    const u8* row;
    const BtlUnitAnimInfo* info;
    s16 frames;
    u32 offset;

    switch (unit->genus)
    {
    case UNIT_GENUS_PC:
    case UNIT_GENUS_PS:
        goto resolve;
    default:
        break;
    }
    switch (unit->genus)
    {
    case UNIT_GENUS_EC:
        break;
    default:
        goto zero;
    }
    animId = (s16)func_002fb860();
    switch (animId)
    {
    case -1:
        goto resolve;
    default:
        break;
    }
    goto resolved;

resolve:
    row = DAT_00693290 + (u32)unit->genus * 26;
    tableId = row[(u16)id];
    goto tableResolved;

zero:
    animId = 0;
    goto resolved;

tableResolved:
    animId = tableId;

resolved:
    if (animId < unit->unk_9d8)
    {
        offset = animId * sizeof(*info);
        info = (const BtlUnitAnimInfo*)(offset + (u32)unit->unk_9ec);
        frames = info->unk_4;
        if (frames < 0)
        {
            return 0;
        }
        return (s16)((f32)frames /
                     (scale * ((f32)info->speedPercent / 100.0f)));
    }
    return 0;
}

// FUN_002838D0
s16 func_002838d0(BtlUnit* unit, u16 id, f32 scale)
{
    s16 animId;
    s16 tableId;
    const u8* row;
    f32 duration;
    const BtlUnitAnimInfo* info;
    u32 infoOffset;

    if (!(unit->flags2 & BTLUNIT_FLAG2_UPDATE))
    {
        return 0;
    }

    switch (unit->genus)
    {
    case UNIT_GENUS_PC:
    case UNIT_GENUS_PS:
        goto resolve;
    default:
        break;
    }
    switch (unit->genus)
    {
    case UNIT_GENUS_EC:
        break;
    default:
        goto zero;
    }
    animId = (s16)func_002fb860();
    switch (animId)
    {
    case -1:
        goto resolve;
    default:
        break;
    }
    goto resolved;

resolve:
    row = DAT_00693290 + (u32)unit->genus * 26;
    tableId = row[id];
    goto tableResolved;

zero:
    animId = 0;
    goto resolved;

tableResolved:
    animId = tableId;

resolved:
    duration = func_00318910(unit->mdl, 0, animId);
    if (animId < unit->unk_9d8)
    {
        info = (const BtlUnitAnimInfo*)unit->unk_9ec;
        infoOffset = (u32)(animId * sizeof(*info));
        infoOffset += (u32)info;
        info = (const BtlUnitAnimInfo*)infoOffset;
        duration /= scale * ((f32)info->speedPercent / 100.0f);
        return (s16)duration;
    }

    return (s16)duration;
}

// FUN_00283A70
s16 func_00283a70(BtlUnit* unit, s32 id)
{
    s16 animId;
    s16 tableId;
    const u8* row;
    const BtlUnitAnimInfo* info;
    u32 infoOffset;

    if (!(unit->flags2 & BTLUNIT_FLAG2_UPDATE))
    {
        return 6;
    }

    switch (unit->genus)
    {
    case UNIT_GENUS_PC:
    case UNIT_GENUS_PS:
        goto resolve;
    default:
        break;
    }
    switch (unit->genus)
    {
    case UNIT_GENUS_EC:
        break;
    default:
        goto zero;
    }
    animId = (s16)func_002fb860();
    switch (animId)
    {
    case -1:
        goto resolve;
    default:
        break;
    }
    goto resolved;

resolve:
    row = DAT_00693290 + (u32)unit->genus * 26;
    tableId = row[(u32)id & 0xffff];
    goto tableResolved;

zero:
    animId = 0;
    goto resolved;

tableResolved:
    animId = tableId;

resolved:
    if (animId < unit->unk_9d8)
    {
        info = (const BtlUnitAnimInfo*)unit->unk_9ec;
        infoOffset = (u32)(animId * sizeof(*info));
        infoOffset += (u32)info;
        info = (const BtlUnitAnimInfo*)infoOffset;
        return info->unk_8;
    }
    return 6;
}

// FUN_00283ba0
s16 btlUnitGetAnimFrame(BtlUnit* unit)
{
    if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
    {
        return (s32)mdlAnimGetCurrentFrame(unit->mdl, 0);
    }

    return 0;
}

// 8 bytes

// FUN_00283c00
void btlUnit00283c00(BtlUnit* unit, s32 param_2)
{
    if ((unit->flags2 & 2) != 0)
    {
        mdlAnim00318770(unit->mdl, 0, (f32)param_2);
    }
}

// FUN_00283C50
void func_00283c50(f32 speed, BtlUnit* unit)
{
    if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
    {
        unit->unk_9d4 = speed;
    }
}

/* W416 width audit: retail offset 0x98 has a 0x10 extension pair; ours has no extension pair at 0x98 (the candidate is a layout mismatch, not a confirmed ours shift-width disagreement). Category's s32 declaration is therefore retained: retyping to s16 measured nd263/object476 (window464, rate 0.552521 vs baseline 0.513043), u16 measured nd276/object476 (rate 0.579832), and complete (s16) casts at compare/index uses measured nd275/object468 (rate 0.587607); all moved away from the window/regressed, so the width is already correct for the retained source. */
// FUN_00283C70
#ifndef PC_BUILD
asm s16 func_00283c70(BtlUnit* unit, u16 id)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x908600a2
  .word 0x24030001
  .word 0x14c30010
  .word 0x00000000
  .word 0x30a7ffff
  .word 0x24020006
  .word 0x10e20009
  .word 0x00000000
  .word 0x24020005
  .word 0x10e20006
  .word 0x00000000
  .word 0x24020004
  .word 0x10e20003
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000018
  .word 0x00000000
  .word 0x30a7ffff
  .word 0x24020006
  .word 0x10e20010
  .word 0x00000000
  .word 0x24020005
  .word 0x10e20009
  .word 0x00000000
  .word 0x24020004
  .word 0x10e20003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000009
  .word 0x00000000
  .word 0x0003143c
  .word 0x0002143f
  .word 0x10000005
  .word 0x00000000
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x0002843c
  .word 0x0010843f
  .word 0x2402ffff
  .word 0x16020004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000039
  .word 0x00000000
  .word 0x24030001
  .word 0x14c3000e
  .word 0x00000000
  .word 0x948300a4
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b728
  .word 0x00621821
  .word 0x00101080
  .word 0x00431021
  .word 0x8442001a
  .word 0x10000029
  .word 0x00000000
  .word 0x948500a4
  .word 0x24020004
  .word 0x10a20015
  .word 0x00000000
  .word 0x10a30003
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x8c840a2c
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304400ff
  .word 0x8f83b718
  .word 0x000410c0
  .word 0x00441021
  .word 0x00021080
  .word 0x00441021
  .word 0x000210c0
  .word 0x00431821
  .word 0x00101080
  .word 0x00431021
  .word 0x84420018
  .word 0x10000011
  .word 0x00000000
  .word 0x00071840
  .word 0x27829828
  .word 0x00431021
  .word 0x84420000
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f83b71c
  .word 0x00051140
  .word 0x00451021
  .word 0x00021080
  .word 0x00451021
  .word 0x00021040
  .word 0x00431821
  .word 0x00101080
  .word 0x00431021
  .word 0x84420018
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W420: inlined btlUnitAnimCategory and u16 id recovery: nd211, obj412/416; baseline nd193, obj264/416. */
// FUN_00283E40
#ifndef PC_BUILD
asm u16 func_00283e40(BtlUnit* unit, u16 id)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x908700a2
  .word 0x24060001
  .word 0x14e60010
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x24020006
  .word 0x10620009
  .word 0x00000000
  .word 0x24020005
  .word 0x10620006
  .word 0x00000000
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000018
  .word 0x00000000
  .word 0x30a3ffff
  .word 0x24020006
  .word 0x10620010
  .word 0x00000000
  .word 0x24020005
  .word 0x10620009
  .word 0x00000000
  .word 0x24020004
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000009
  .word 0x00000000
  .word 0x0006143c
  .word 0x0002143f
  .word 0x10000005
  .word 0x00000000
  .word 0x24020002
  .word 0x10000002
  .word 0x00000000
  .word 0x2402ffff
  .word 0x0002843c
  .word 0x0010843f
  .word 0x2402ffff
  .word 0x16020004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002e
  .word 0x00000000
  .word 0x24020001
  .word 0x14e2000e
  .word 0x00000000
  .word 0x948300a4
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b728
  .word 0x00621821
  .word 0x00101080
  .word 0x00431021
  .word 0x8442001c
  .word 0x1000001e
  .word 0x00000000
  .word 0x948500a4
  .word 0x14a20011
  .word 0x00000000
  .word 0x8c840a2c
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304400ff
  .word 0x8f83b718
  .word 0x000410c0
  .word 0x00441021
  .word 0x00021080
  .word 0x00441021
  .word 0x000210c0
  .word 0x00431821
  .word 0x00101080
  .word 0x00431021
  .word 0x8442001a
  .word 0x1000000b
  .word 0x00000000
  .word 0x8f83b71c
  .word 0x00051140
  .word 0x00451021
  .word 0x00021080
  .word 0x00451021
  .word 0x00021040
  .word 0x00431821
  .word 0x00101080
  .word 0x00431021
  .word 0x8442001a
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00283FE0
const void* func_00283fe0(BtlUnit* unit, u32 id)
{
    if (unit->genus == UNIT_GENUS_EC)
    {
        return NULL;
    }

    switch (unit->charId)
    {
        case 4:
            return DAT_006932e0 + ((id & 0xffff) - 4) * 8;

        default:
            return NULL;
    }
}

// FUN_00284040
u32 func_00284040(u64 unused, BtlUnit* unit, u64 id, s64 param_4)
{
    s16 skillId;
    u16 flags;
    s16 type;
    s32 offset;

    (void)unused;
    skillId = (s16)id;
    if (skillId == -1 || skillId >= 0x1d0)
    {
        return 1;
    }
    if (func_002d6370(id) != 0)
    {
        offset = skillId * 7;
        offset = (u32)offset << 2;
        flags = *(const u16*)(((uintptr_t)iGpffffb710 + 2) + offset);
        if (flags & 0x200)
        {
            goto return_zero;
        }
        if (param_4 == 0)
        {
            goto return_one;
        }
        if (flags & 1)
        {
            goto return_two;
        }
return_one:
        return 1;
return_two:
        return 2;
return_zero:
        return 0;
    }
    type = func_003082f0(unit->datUnit, (u16)id);
    switch (type)
    {
        case 0x10:
        case 0x11:
            return 1;
        default:
            return 3;
    }
}

// FUN_00284170
void btlUnitInitAnimPacket(void* work)
{
    BtlUnitPacketAnim* packet;

    packet = (BtlUnitPacketAnim*)work;

    packet->unit->packetCount++;
}

// FUN_00284190
u32 btlUnitUpdateAnimPacket(void* work)
{
    BtlUnitPacketAnim* packet;

    packet = (BtlUnitPacketAnim*)work;

    if (packet->id >= 0 && packet->id < BTLUNIT_ANIM_MAX)
    {
        btlUnitAnimate(packet->unit,
                       packet->id,
                       packet->blendFrameCount,
                       packet->speed,
                       packet->mode);
    }

    return 1;
}

// FUN_002841e0
void btlUnitDestroyAnimPacket(void* work)
{
    BtlUnitPacketAnim* packet;

    packet = (BtlUnitPacketAnim*)work;

    packet->unit->packetCount--;
}

// FUN_00284200
BtlPacket* btlUnitCreateAnimPacket(BtlUnit* unit, u16 id, u16 blendFrameCount, f32 speed, u16 mode)
{
    BtlPacket* packet;
    BtlUnitPacketAnim* work;
    s16 _id;

    _id = id;
    switch (_id)
    {
        case BTLUNIT_ANIM_RESNULLIFIED: return btlUnitCreateResNullifiedAnimPacket(unit, 32.0f);
        case -3:                        return btlUnit00284900(unit, 6);
        case BTLUNIT_ANIM_ENMDODGE:     return btlUnitCreateEnmDodgeAnimPacket(unit, 6);
    }

    packet = btlPacketCreate(BTLUNIT_PACKET_ANIM, sizeof(BtlUnitPacketAnim));

    packet->initFunc = btlUnitInitAnimPacket;
    packet->updateFunc = btlUnitUpdateAnimPacket;
    packet->destroyFunc = btlUnitDestroyAnimPacket;

    work = (BtlUnitPacketAnim*)packet->workData;

    work->unit = unit;

    switch (_id)
    {
        case -5:
            _id = -1;
    }

    work->id = _id;
    work->blendFrameCount = blendFrameCount;
    work->speed = speed;
    work->mode = mode;

    return packet;
}

// FUN_00284330
void btlUnitInit002843e0Packet(void* work)
{
    BtlUnitPacket002843e0* packet;

    packet = (BtlUnitPacket002843e0*)work;

    packet->unit->packetCount++;
}

/* W414: packet->unk_4 is an unsigned halfword (retail lhu at +0x04), and
 * loading it only at the call keeps packet in v1 while unit stays in a0;
 * this yields nd0 at 108/112.  The BtlUnit field at 0x9e8 is already s8,
 * matching retail's signed lb; changing it was unnecessary. */
// FUN_00284350
u32 btlUnitUpdate002843e0Packet(void* work)
{
    BtlUnitPacket002843e0* packet;
    u16 frame;
    BtlUnit* unit;
    s16 activeAnimation;

    packet = (BtlUnitPacket002843e0*)work;
    unit = packet->unit;

    if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
    {
        activeAnimation = unit->unk_9ce;
    }
    else
    {
        activeAnimation = 0;
    }

    if (unit->unk_9e0 != activeAnimation)
    {
        frame = packet->unk_4;
        btlUnitAnimate(unit, unit->unk_9e0, frame,
                       unit->unk_9e4, unit->unk_9e8);
    }

    return 1;
}

// FUN_002843c0
void btlUnitDestroy002843e0Packet(void* work)
{
    BtlUnitPacket002843e0* packet;

    packet = (BtlUnitPacket002843e0*)work;

    packet->unit->packetCount--;
}

// FUN_002843e0
BtlPacket* btlUnit002843e0(BtlUnit* unit, s16 param_2)
{
    BtlPacket* packet;
    BtlUnitPacket002843e0* work;

    packet = btlPacketCreate(0x104, sizeof(BtlUnitPacket002843e0));

    packet->initFunc = btlUnitInit002843e0Packet;
    packet->updateFunc = btlUnitUpdate002843e0Packet;
    packet->destroyFunc = btlUnitDestroy002843e0Packet;

    work = (BtlUnitPacket002843e0*)packet->workData;

    work->unit = unit;
    work->unk_4 = param_2;

    return packet;
}


// FUN_00284450
void btlUnitInitResNullifiedAnimPacket(void* work)
{
    BtlUnitPacketResNullifiedAnim* packet;

    packet = (BtlUnitPacketResNullifiedAnim*)work;

    packet->unit->packetCount++;
}

// FUN_00284470
u32 btlUnitUpdateResNullifiedAnimPacket(void* work)
{
    BtlUnitPacketResNullifiedAnim* packet;
    BtlUnit* unit;
    RwV3d direction;
    f32 magnitude;

    packet = (BtlUnitPacketResNullifiedAnim*)work;
    unit = packet->unit;
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;

    if (packet->unk_4 > 0.5f)
    {
        RtQuatTransformVectors(&direction, &D_00697870, 1, &unit->rot);

        if (packet->counter & 1)
        {
            magnitude = packet->unk_4 * (0.5f + 0.5f * effMiscRandFloat(0));
        }
        else
        {
            magnitude = -packet->unk_4 * (0.5f + 0.5f * effMiscRandFloat(0));
        }

        unit->posOffset.x = direction.x * magnitude;
        unit->posOffset.y = direction.y * magnitude;
        unit->posOffset.z = direction.z * magnitude;
        packet->unk_4 *= gUnk_007cad7c;
        unit->unk_9cc |= 1;
    }
    else
    {
        unit->posOffset.x = 0.0f;
        unit->posOffset.y = 0.0f;
        unit->posOffset.z = 0.0f;
        unit->unk_9cc &= ~1;
        return 1;
    }

    packet->counter++;
    return 0;
}

// FUN_002845e0
void btlUnitDestroyResNullifiedAnimPacket(void* work)
{
    BtlUnitPacketResNullifiedAnim* packet;

    packet = (BtlUnitPacketResNullifiedAnim*)work;

    packet->unit->packetCount--;
}

// FUN_00284600
BtlPacket* btlUnitCreateResNullifiedAnimPacket(BtlUnit* unit, f32 param_2)
{
    BtlPacket* packet;
    BtlUnitPacketResNullifiedAnim* work;

    packet = btlPacketCreate(0x107, sizeof(BtlUnitPacketResNullifiedAnim));

    packet->initFunc = btlUnitInitResNullifiedAnimPacket;
    packet->updateFunc = btlUnitUpdateResNullifiedAnimPacket;
    packet->destroyFunc = btlUnitDestroyResNullifiedAnimPacket;

    work = (BtlUnitPacketResNullifiedAnim*)packet->workData;

    work->unit = unit;
    work->unk_4 = param_2;

    return packet;
}

// FUN_00284670
void btlUnitInit00284900Packet(void* work)
{
    BtlUnitPacket00284900* packet;

    packet = (BtlUnitPacket00284900*)work;

    packet->unit->packetCount++;
}

// FUN_00284690
u32 btlUnitUpdate00284900Packet(void* work)
{
    static f32 one = 1.0f;
    BtlUnitPacket00284900* packet;
    BtlUnit* unit;
    RwV3d position;
    RwV3d direction;
    f32 phase;
    f32 magnitude;
    f32 arcScale;
    u32 result;

    packet = (BtlUnitPacket00284900*)work;
    unit = packet->unit;
    unit->flags2 |= BTLUNIT_FLAG2_DIRTY;

    if (packet->unk_12 == 0)
    {
        packet->phase = 0.5f;
        packet->pos = unit->pos;
    }

    phase = packet->phase + 1.0f / (2.0f * (f32)packet->unk_10);
    packet->phase = phase;
    arcScale = 2.0f * (((-1.0f + (-2.0f * phase * phase)) + (4.0f * phase)) - 0.5f);

    RtQuatTransformVectors(&direction, &D_00697870, 1, &unit->rot);
    magnitude = unit->sphereRadius * unit->scale * 1.25f;
    if (magnitude < 75.0f)
    {
        magnitude = 75.0f;
    }

    if (arcScale < one)
    {
        magnitude *= arcScale;
        direction.x *= magnitude;
        direction.y *= magnitude;
        direction.z *= magnitude;
        result = 0;
        goto update;
    }

    direction.x *= magnitude;
    direction.y *= magnitude;
    direction.z *= magnitude;

    result = 1;
update:
    if (!(unit->flags3 & BTLUNIT_FLAG3_UNK400))
    {
        position.x = packet->pos.x + direction.x;
        position.y = packet->pos.y + direction.y;
        position.z = packet->pos.z + direction.z;
        unit->pos = position;
        unit->flags2 |= BTLUNIT_FLAG2_DIRTY;
    }

    packet->unk_12++;
    return result;
}

// FUN_002848e0
void btlUnitDestroy00284900Packet(void* work)
{
    BtlUnitPacket00284900* packet;

    packet = (BtlUnitPacket00284900*)work;

    packet->unit->packetCount--;
}

// FUN_00284900
BtlPacket* btlUnit00284900(BtlUnit* unit, s32 param_2)
{
    BtlPacket* packet;
    BtlUnitPacket00284900* work;

    packet = btlPacketCreate(0x108, sizeof(BtlUnitPacket00284900));

    packet->initFunc = btlUnitInit00284900Packet;
    packet->updateFunc = btlUnitUpdate00284900Packet;
    packet->destroyFunc = btlUnitDestroy00284900Packet;

    work = (BtlUnitPacket00284900*)packet->workData;

    work->unit = unit;
    work->unk_10 = param_2;
    work->unk_12 = 0;

    return packet;
}

// FUN_00284980
void btlUnitInitEnmDodgeAnimPacket(void* work)
{
    BtlUnitPacketEnmDodgeAnim* packet;

    packet = (BtlUnitPacketEnmDodgeAnim*)work;

    packet->unit->packetCount++;
}

// FUN_002849a0
u32 btlUnitUpdateEnmDodgeAnimPacket(void* work)
{
    static volatile /* Removing this function's qualifier batch loses btlUnitUpdateEnmDodgeAnimPacket (MATCH nd0 -> MISMATCH nd261, size 424 -> 420) - measured W170. */ f32 phaseLimit = 1.0f;
    static volatile /* Removing this function's qualifier batch loses btlUnitUpdateEnmDodgeAnimPacket (MATCH nd0 -> MISMATCH nd261, size 424 -> 420) - measured W170. */ f32 baseScale = 0.3f;
    static volatile /* Removing this function's qualifier batch loses btlUnitUpdateEnmDodgeAnimPacket (MATCH nd0 -> MISMATCH nd261, size 424 -> 420) - measured W170. */ f32 stepDelta = 0.05f;
    static volatile /* Removing this function's qualifier batch loses btlUnitUpdateEnmDodgeAnimPacket (MATCH nd0 -> MISMATCH nd261, size 424 -> 420) - measured W170. */ f32 reverseStep = -0.3f;
    BtlUnitPacketEnmDodgeAnim* packet;
    BtlUnit* unit;
    RwV3d direction;
    f32 phase;
    f32 baseMagnitude;
    f32 magnitude;
    f32 positiveDelta;
    f32 negativeDelta;
    packet = (BtlUnitPacketEnmDodgeAnim*)work;
    unit = packet->unit;

    baseMagnitude = unit->sphereRadius * unit->scale * baseScale;
    if (baseMagnitude > 100.0f)
    {
        baseMagnitude = 100.0f;
    }

    if (packet->unk_4 == 0)
    {
        packet->phase = 0.0f;
        packet->step = baseScale;
    }

    if (packet->step >= 0.0f)
    {
        phase = packet->phase;
        positiveDelta = (1.0f - phase) * packet->step;
        packet->step += stepDelta;
        magnitude = baseMagnitude * packet->phase;
        packet->phase += positiveDelta;
        if (packet->phase >= phaseLimit)
        {
            packet->step = reverseStep;
        }
    }
    else
    {
        f32 negativeStepDelta;
        negativeDelta = -packet->step;
        phase = packet->phase;
        negativeDelta = phase * (f32)negativeDelta;
        negativeStepDelta = stepDelta;
        packet->step -= negativeStepDelta;
        magnitude = baseMagnitude * packet->phase;
        phase = packet->phase - negativeDelta;
        packet->phase = phase;
        if (phase <= negativeStepDelta)
        {
            if (!(unit->flags3 & BTLUNIT_FLAG3_UNK400))
            {
                unit->posOffset.x = 0.0f;
                unit->posOffset.y = 0.0f;
                unit->posOffset.z = 0.0f;
            }
            return 1;
        }
    }

    if (!(unit->flags3 & BTLUNIT_FLAG3_UNK400))
    {
        RtQuatTransformVectors(&direction, &D_00697870, 1, &unit->rot);
        unit->posOffset.x = direction.x * magnitude;
        unit->posOffset.y = direction.y * magnitude;
        unit->posOffset.z = direction.z * magnitude;
    }

    packet->unk_4++;
    return 0;
}

// FUN_00284b50
void btlUnitDestroyEnmDodgeAnimPacket(void* work)
{
    BtlUnitPacketEnmDodgeAnim* packet;

    packet = (BtlUnitPacketEnmDodgeAnim*)work;

    packet->unit->packetCount--;
}

// FUN_00284b70
BtlPacket* btlUnitCreateEnmDodgeAnimPacket(BtlUnit* unit, s32 unused)
{
    BtlPacket* packet;
    BtlUnitPacketEnmDodgeAnim* work;

    packet = btlPacketCreate(0x109, sizeof(BtlUnitPacketEnmDodgeAnim));

    packet->initFunc = btlUnitInitEnmDodgeAnimPacket;
    packet->updateFunc = btlUnitUpdateEnmDodgeAnimPacket;
    packet->destroyFunc = btlUnitDestroyEnmDodgeAnimPacket;

    work = (BtlUnitPacketEnmDodgeAnim*)packet->workData;

    work->unit = unit;
    work->unk_4 = 0;

    return packet;
}

// FUN_00284be0
void btlUnitInit00284c90Packet(void* work)
{
    BtlUnitPacket00284c90* packet;

    packet = (BtlUnitPacket00284c90*)work;

    packet->unit->packetCount++;
}

// FUN_00284c00
u32 btlUnitUpdate00284c90Packet(void* work)
{
    BtlUnitPacket00284c90* packet;
    BtlUnit* unit;
    s16 current;

    packet = (BtlUnitPacket00284c90*)work;

    unit = packet->unit;

    switch (unit->genus)
    {
        case UNIT_GENUS_PC:
        case UNIT_GENUS_EC:
            if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
            {
                current = unit->unk_9ce;
            }
            else
            {
                current = 0;
            }

            return unit->unk_9e0 == current;
    }

    return 0;
}

// FUN_00284c70
void btlUnitDestroy00284c90Packet(void* work)
{
    BtlUnitPacket00284c90* packet;

    packet = (BtlUnitPacket00284c90*)work;

    packet->unit->packetCount--;
}

// FUN_00284c90
BtlPacket* btlUnit00284c90(BtlUnit* unit)
{
    BtlPacket* packet;
    BtlUnitPacket00284c90* work;

    packet = btlPacketCreate(0x105, sizeof(BtlUnitPacket00284c90));

    packet->initFunc = btlUnitInit00284c90Packet;
    packet->updateFunc = btlUnitUpdate00284c90Packet;
    packet->destroyFunc = btlUnitDestroy00284c90Packet;

    work = (BtlUnitPacket00284c90*)packet->workData;

    work->unit = unit;

    return packet;
}

// FUN_00284cf0
void btlUnitInit00284d80Packet(void* work)
{
    BtlUnitPacket00284d80* packet;

    packet = (BtlUnitPacket00284d80*)work;

    packet->unit->packetCount++;
}

// FUN_00284d10
u32 btlUnitUpdate00284d80Packet(void* work)
{
    BtlUnitPacket00284d80* packet;
    s16 frame;
    BtlUnit* unit;

    packet = (BtlUnitPacket00284d80*)work;

    frame = packet->unk_4;
    unit = packet->unit;

    if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
    {
        mdlAnim00318770(unit->mdl, 0, frame);
    }

    return 1;
}

// FUN_00284d60
void btlUnitDestroy00284d80Packet(void* work)
{
    BtlUnitPacket00284d80* packet;

    packet = (BtlUnitPacket00284d80*)work;

    packet->unit->packetCount--;
}

// FUN_00284d80
BtlPacket* btlUnit00284d80(BtlUnit* unit, s16 param_2)
{
    BtlPacket* packet;
    BtlUnitPacket00284d80* work;

    packet = btlPacketCreate(0x102, sizeof(BtlUnitPacket00284d80));

    packet->initFunc = btlUnitInit00284d80Packet;
    packet->updateFunc = btlUnitUpdate00284d80Packet;
    packet->destroyFunc = btlUnitDestroy00284d80Packet;

    work = (BtlUnitPacket00284d80*)packet->workData;

    work->unit = unit;
    work->unk_4 = param_2;

    return packet;
}

// FUN_00284df0
void btlUnitInit00284f50Packet(void* work)
{
    BtlUnitPacket00284f50* packet;

    packet = (BtlUnitPacket00284f50*)work;

    packet->unit->packetCount++;
}

// FUN_00284e10
u32 btlUnitUpdate00284f50Packet(void* work)
{
    BtlUnitPacket00284f50* packet;
    BtlUnit* unit;
    f32 speed;
    u16 blendFrameCount;
    u16 mode;
    s16 frame;

    packet = (BtlUnitPacket00284f50*)work;

    mode = packet->unk_c;
    speed = packet->unk_8;
    blendFrameCount = packet->unk_4;
    unit = packet->unit;

    if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
    {
        FUN_00287cf0(unit, 4);

        if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
        {
            frame = (s32)mdlAnimGetCurrentFrame(unit->mdl, 0);
        }
        else
        {
            frame = 0;
        }

        btlUnitAnimate(unit, unit->unk_9ce, blendFrameCount, speed, mode);

        if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
        {
            mdlAnim00318770(unit->mdl, 0, frame);
        }
        FUN_00287b20((int)unit, 4);

    }

    return 1;
}


// FUN_00284f30
void btlUnitDestroy00284f50Packet(void* work)
{
    BtlUnitPacket00284f50* packet;

    packet = (BtlUnitPacket00284f50*)work;

    packet->unit->packetCount--;
}

// FUN_00284f50
BtlPacket* btlUnit00284f50(BtlUnit* unit, u16 param_2, f32 speed, u16 param_4)
{
    BtlPacket* packet;
    BtlUnitPacket00284f50* work;

    packet = btlPacketCreate(0x103, sizeof(BtlUnitPacket00284f50));

    packet->initFunc = btlUnitInit00284f50Packet;
    packet->updateFunc = btlUnitUpdate00284f50Packet;
    packet->destroyFunc = btlUnitDestroy00284f50Packet;

    work = (BtlUnitPacket00284f50*)packet->workData;

    work->unit = unit;
    work->unk_4 = param_2;
    work->unk_8 = speed;
    work->unk_c = param_4;

    return packet;
}

// FUN_00284fe0
void btlUnitInitModelPacket(void* work)
{
    BtlUnitPacketModel* packet;
    BtlUnit* unit;
    Model* mdl;
    u32 flags;
    char path[128];

    packet = (BtlUnitPacketModel*)work;

    unit = packet->unit;

    unit->packetCount++;

    if (unit->mdl != NULL)
    {
        if (packet->type == unit->mdl->type && packet->id == unit->mdl->id)
        {
            return;
        }

        mdlDestroy(unit->mdl);
        unit->mdl = NULL;
    }

    mdl = mdlSearch(packet->type, packet->id, 0);

    if (mdl != NULL)
    {
        unit->mdl = mdlClone(mdl);

        flags = unit->flags2 | BTLUNIT_FLAG2_UPDATE;
        unit->flags2 = flags;
        unit->flags2 = flags | BTLUNIT_FLAG2_UNK01;
    }
    else
    {
        if (!(packet->flags & (1 << 4)))
        {
            mdlFileResolvePackPath(packet->type, packet->id, path);
            packet->cdvd = H_Cdvd_Request(path, 0);
            unit->flags2 |= BTLUNIT_FLAG2_UNK01;
        }

        unit->flags2 &= ~BTLUNIT_FLAG2_UPDATE;
    }
}

// FUN_002850f0
#ifndef PC_BUILD
asm u32 btlUnitUpdateModelPacket(void* work)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c910000
  .word 0x8e220098
  .word 0x30420001
  .word 0x1440001b
  .word 0x00000000
  .word 0x96440004
  .word 0x96450006
  .word 0x0000302d
  .word 0x0c0c5a44
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0c5d14
  .word 0x00000000
  .word 0xae2209f4
  .word 0x1000000e
  .word 0x00000000
  .word 0x96440004
  .word 0x96450006
  .word 0x27a60040
  .word 0x0c0c754c
  .word 0x00000000
  .word 0x27a40040
  .word 0x0000282d
  .word 0x0c040360
  .word 0x00000000
  .word 0xae42000c
  .word 0x8e220098
  .word 0x34420001
  .word 0xae220098
  .word 0x8e2409f4
  .word 0x14800016
  .word 0x00000000
  .word 0x8e44000c
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x1040012b
  .word 0x00000000
  .word 0x96440004
  .word 0x96450006
  .word 0x8e46000c
  .word 0x0000382d
  .word 0x0c0c5b1c
  .word 0x00000000
  .word 0xae2209f4
  .word 0x96430004
  .word 0x24020001
  .word 0x14620120
  .word 0x00000000
  .word 0x8e2409f4
  .word 0x0c0c7074
  .word 0x00000000
  .word 0x1000011b
  .word 0x00000000
  .word 0x0c0c5bdc
  .word 0x00000000
  .word 0x10400117
  .word 0x00000000
  .word 0x96420008
  .word 0x30420004
  .word 0x1040007e
  .word 0x00000000
  .word 0x922300a2
  .word 0x24020002
  .word 0x1062004f
  .word 0x00000000
  .word 0x24020001
  .word 0x1062001d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000073
  .word 0x00000000
  .word 0x962400a4
  .word 0x8e2509f4
  .word 0x0c0ed800
  .word 0x00000000
  .word 0xa62209f2
  .word 0x962409f2
  .word 0x24050001
  .word 0x0c068164
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0b573c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x8e2309f4
  .word 0x946200d8
  .word 0x34420400
  .word 0xa46200d8
  .word 0x8e2409f4
  .word 0x24050001
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x1000005b
  .word 0x00000000
  .word 0x0c09f2f4
  .word 0x00000000
  .word 0x0040202d
  .word 0x8e2509f4
  .word 0x0c0ed800
  .word 0x00000000
  .word 0xa62209f2
  .word 0x962409f2
  .word 0x24050001
  .word 0x0c068164
  .word 0x00000000
  .word 0x8e2409f4
  .word 0x24050001
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x962300a4
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x00431021
  .word 0x000218c0
  .word 0x8f82b728
  .word 0x00621021
  .word 0x94440018
  .word 0x30820002
  .word 0x10400005
  .word 0x00000000
  .word 0x8e2309f4
  .word 0x946200d8
  .word 0x34420200
  .word 0xa46200d8
  .word 0x30820008
  .word 0x10400005
  .word 0x00000000
  .word 0x8e2309f4
  .word 0x946200d8
  .word 0x34420400
  .word 0xa46200d8
  .word 0x30820010
  .word 0x10400032
  .word 0x00000000
  .word 0x8e2309f4
  .word 0x946200d8
  .word 0x34420800
  .word 0xa46200d8
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e2309f4
  .word 0x946200d8
  .word 0x3042feff
  .word 0xa46200d8
  .word 0x962400a4
  .word 0x0c05f038
  .word 0x00000000
  .word 0x3050ffff
  .word 0x32020002
  .word 0x10400007
  .word 0x00000000
  .word 0x8e2309f4
  .word 0x946200d8
  .word 0x34420200
  .word 0xa46200d8
  .word 0x1000000b
  .word 0x00000000
  .word 0x32020004
  .word 0x10400008
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c0a1f3c
  .word 0x00000000
  .word 0x96420008
  .word 0x3042fffe
  .word 0xa6420008
  .word 0x32020008
  .word 0x10400005
  .word 0x00000000
  .word 0x8e2309f4
  .word 0x946200d8
  .word 0x34420400
  .word 0xa46200d8
  .word 0x962400a4
  .word 0x8e2509f4
  .word 0x0c0ed860
  .word 0x00000000
  .word 0xa62209f2
  .word 0x8e2409f4
  .word 0x24050008
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x8e230098
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae220098
  .word 0x34420002
  .word 0xae220098
  .word 0x0220202d
  .word 0x24050004
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x96420008
  .word 0x30420008
  .word 0x10400002
  .word 0x00000000
  .word 0xa2200033
  .word 0x96420008
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050002
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x96420008
  .word 0x30420002
  .word 0x10400005
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x96420008
  .word 0x30420100
  .word 0x10400007
  .word 0x00000000
  .word 0x8e2209f4
  .word 0xa04003a8
  .word 0x8e2209f4
  .word 0xa04003a9
  .word 0x8e2209f4
  .word 0xa04003aa
  .word 0x96420008
  .word 0x30420040
  .word 0x10400005
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0b4f80
  .word 0x00000000
  .word 0x96420008
  .word 0x30420020
  .word 0x10400059
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0a0c70
  .word 0x00000000
  .word 0x822709e8
  .word 0x0220202d
  .word 0x862509e0
  .word 0x0000302d
  .word 0xc62c09e4
  .word 0x0c0a0b50
  .word 0x00000000
  .word 0x8e220098
  .word 0x30430002
  .word 0x10600004
  .word 0x00000000
  .word 0x862209ce
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x3045ffff
  .word 0x14600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000002f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0a0d44
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8e2409f4
  .word 0x0000282d
  .word 0x0200302d
  .word 0x0c0c6244
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x962209d8
  .word 0x0082082a
  .word 0x1020001a
  .word 0x00000000
  .word 0x8e2309ec
  .word 0x00041080
  .word 0x00441021
  .word 0x00021040
  .word 0x00431021
  .word 0x84420002
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x3c0242c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46011083
  .word 0x3c023f80
  .word 0x44820800
  .word 0x00000000
  .word 0x46020842
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000006
  .word 0x00000000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c0bfef0
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8e220098
  .word 0x30420002
  .word 0x10400008
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800320
  .word 0x8e2409f4
  .word 0x0000282d
  .word 0x0c0c61dc
  .word 0x00000000
  .word 0x8e44000c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c0403b0
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00285670
void btlUnitDestroyModelPacket(void* work)
{
    BtlUnitPacketModel* packet;

    packet = (BtlUnitPacketModel*)work;

    packet->unit->packetCount--;
}

// FUN_00285690
BtlPacket* btlUnitCreateModelPacket(BtlUnit* unit, u16 id, u16 flags)
{
    BtlPacket* packet;
    BtlUnitPacketModel* work;

    packet = btlPacketCreate(0x10f, sizeof(BtlUnitPacketModel));

    packet->unk_47 &= ~(1 << 0);

    packet->initFunc = btlUnitInitModelPacket;
    packet->updateFunc = btlUnitUpdateModelPacket;
    packet->destroyFunc = btlUnitDestroyModelPacket;

    work = (BtlUnitPacketModel*)packet->workData;

    work->unit = unit;
    work->flags = flags;
    work->type = unit->genus + 1;
    work->id = id;

    return packet;
}

// FUN_00285730
void btlUnitInit002857f0Packet(void* work)
{
    BtlUnitPacket002857f0* packet;

    packet = (BtlUnitPacket002857f0*)work;

    packet->unit->packetCount++;
}

// FUN_00285750
u32 btlUnitUpdate002857f0Packet(void* work)
{
    BtlUnitPacket002857f0* packet;
    BtlUnit* unit;

    packet = (BtlUnitPacket002857f0*)work;

    unit = packet->unit;

    if (unit->resTypeId != 0)
    {
        FUN_003b7090(unit->resTypeId);
        unit->resTypeId = 0;
    }
    else
    {
        mdlDestroy(unit->mdl);
    }

    unit->mdl = NULL;

    unit->flags2 &= ~BTLUNIT_FLAG2_UPDATE;

    FUN_00287510(unit);

    return 1;
}

// FUN_002857d0
void btlUnitDestroy002857f0Packet(void* work)
{
    BtlUnitPacket002857f0* packet;

    packet = (BtlUnitPacket002857f0*)work;

    packet->unit->packetCount--;
}

// FUN_002857f0
BtlPacket* btlUnit002857f0(BtlUnit* unit)
{
    BtlPacket* packet;
    BtlUnitPacket002857f0* work;

    packet = btlPacketCreate(0x110, sizeof(BtlUnitPacket002857f0));

    packet->unk_47 &= ~(1 << 0);

    packet->initFunc = btlUnitInit002857f0Packet;
    packet->updateFunc = btlUnitUpdate002857f0Packet;
    packet->destroyFunc = btlUnitDestroy002857f0Packet;

    work = (BtlUnitPacket002857f0*)packet->workData;

    work->unit = unit;

    return packet;
}

// FUN_00285860
void btlUnitInit00285d30Packet(void* work)
{
    BtlUnitPacket00285d30* packet;

    packet = (BtlUnitPacket00285d30*)work;

    packet->unit->packetCount++;
}

// FUN_00285880
#ifndef PC_BUILD
asm u32 btlUnitUpdate00285d30Packet(void* work)
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
  .word 0x0080a02d
  .word 0x8c930000
  .word 0x84900012
  .word 0x90830010
  .word 0x24020004
  .word 0x1062001a
  .word 0x00000000
  .word 0x24020003
  .word 0x10620017
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000d
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x8692000c
  .word 0x0000a82d
  .word 0x8691000e
  .word 0x26560001
  .word 0x0232b821
  .word 0x10000013
  .word 0x00000000
  .word 0x8691000e
  .word 0x0000b02d
  .word 0x8692000c
  .word 0x26350001
  .word 0x0232b821
  .word 0x1000000c
  .word 0x00000000
  .word 0x8692000c
  .word 0x0000a82d
  .word 0x8691000e
  .word 0x0000b02d
  .word 0x0232082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0240b82d
  .word 0x10000002
  .word 0x00000000
  .word 0x0220b82d
  .word 0x1600002c
  .word 0x00000000
  .word 0x92620033
  .word 0x00021e00
  .word 0x92620032
  .word 0x00021400
  .word 0x00621825
  .word 0x92620031
  .word 0x00021200
  .word 0x00431825
  .word 0x92620030
  .word 0x00431025
  .word 0xae820004
  .word 0x92820011
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x8e820004
  .word 0x0002123c
  .word 0x0002123e
  .word 0xae820004
  .word 0x92820011
  .word 0x30420002
  .word 0x10400007
  .word 0x00000000
  .word 0x8e820004
  .word 0x00021a3c
  .word 0x00031a3e
  .word 0x3c02ff00
  .word 0x00621025
  .word 0xae820004
  .word 0x92820011
  .word 0x30420004
  .word 0x10400002
  .word 0x00000000
  .word 0xae800004
  .word 0x92820011
  .word 0x30420008
  .word 0x10400003
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae820004
  .word 0x0260202d
  .word 0x0c0a1d24
  .word 0x00000000
  .word 0x8e830004
  .word 0x0216102a
  .word 0x1440004a
  .word 0x00000000
  .word 0x1a200012
  .word 0x00000000
  .word 0x02d11021
  .word 0x0202082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x02161023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x8e820008
  .word 0xafa200a8
  .word 0x27a200a8
  .word 0xc7808218
  .word 0x8c420000
  .word 0x70021688
  .word 0x70021588
  .word 0x48a25800
  .word 0x4beb593c
  .word 0x44020000
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25ad8
  .word 0x8e820004
  .word 0xafa200a4
  .word 0x27a200a4
  .word 0x8c420000
  .word 0x70021688
  .word 0x70021588
  .word 0x48a25000
  .word 0x4bea513c
  .word 0x44020000
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25298
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x44020000
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25298
  .word 0x44020800
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25ad8
  .word 0x4beb52a8
  .word 0x3c02437f
  .word 0x48a21000
  .word 0x4be25298
  .word 0x4bea517c
  .word 0x48225000
  .word 0x700215c8
  .word 0x700216c8
  .word 0xafa200a0
  .word 0x8fa400a0
  .word 0x3c02ff00
  .word 0x00621824
  .word 0x0004123c
  .word 0x0002123e
  .word 0x00621825
  .word 0x0215102a
  .word 0x1440004a
  .word 0x00000000
  .word 0x1a400012
  .word 0x00000000
  .word 0x02b21021
  .word 0x0202082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x02151023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x8e820008
  .word 0xafa2009c
  .word 0x27a2009c
  .word 0xc7808218
  .word 0x8c420000
  .word 0x70021688
  .word 0x70021588
  .word 0x48a25800
  .word 0x4beb593c
  .word 0x44020000
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25ad8
  .word 0x8e820004
  .word 0xafa20098
  .word 0x27a20098
  .word 0x8c420000
  .word 0x70021688
  .word 0x70021588
  .word 0x48a25000
  .word 0x4bea513c
  .word 0x44020000
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25298
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x44020000
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25298
  .word 0x44020800
  .word 0x00000000
  .word 0x48a21000
  .word 0x4be25ad8
  .word 0x4beb52a8
  .word 0x3c02437f
  .word 0x48a21000
  .word 0x4be25298
  .word 0x4bea517c
  .word 0x48225000
  .word 0x700215c8
  .word 0x700216c8
  .word 0xafa20094
  .word 0x8fa40094
  .word 0x00031a3c
  .word 0x00031a3e
  .word 0x3c02ff00
  .word 0x00821024
  .word 0x00621825
  .word 0xa3a300ac
  .word 0x00031202
  .word 0xa3a200ad
  .word 0x00031402
  .word 0xa3a200ae
  .word 0x00031602
  .word 0xa3a200af
  .word 0x93a500ac
  .word 0x93a400ad
  .word 0x93a300ae
  .word 0x93a200af
  .word 0xa2650030
  .word 0xa2640031
  .word 0xa2630032
  .word 0xa2620033
  .word 0x8e620098
  .word 0x34420004
  .word 0xae620098
  .word 0x02f0082a
  .word 0x10200004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x86820012
  .word 0x24420001
  .word 0xa6820012
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
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00285d10
void btlUnitDestroy00285d30Packet(void* work)
{
    BtlUnitPacket00285d30* packet;

    packet = (BtlUnitPacket00285d30*)work;

    packet->unit->packetCount--;
}

// FUN_00285d30
BtlPacket* btlUnit00285d30(BtlUnit* unit, u32 targetCol, s16 param_3, s16 param_4, u8 mode, u8 flags)
{
    BtlPacket* packet;
    BtlUnitPacket00285d30* work;

    packet = btlPacketCreate(0x112, sizeof(BtlUnitPacket00285d30));

    packet->initFunc = btlUnitInit00285d30Packet;
    packet->updateFunc = btlUnitUpdate00285d30Packet;
    packet->destroyFunc = btlUnitDestroy00285d30Packet;

    work = (BtlUnitPacket00285d30*)packet->workData;

    work->unit = unit;
    work->targetCol = targetCol;
    work->unk_c = param_3;
    work->unk_e = param_4;
    work->mode = mode;
    work->flags = flags;

    return packet;
}

// FUN_00285de0
void btlUnitInit00285e50Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount++;
}

// FUN_00285e00
u32 btlUnitUpdate00285e50Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    FUN_00287490(packet->unit);

    return 1;
}

// FUN_00285e30
void btlUnitDestroy00285e50Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount--;
}

// FUN_00285e50
BtlPacket* btlUnit00285e50(BtlUnit* unit)
{
    BtlPacket* packet;
    BtlUnitPacketUnitPtr* work;

    packet = btlPacketCreate(0x113, sizeof(BtlUnitPacketUnitPtr));

    packet->initFunc = btlUnitInit00285e50Packet;
    packet->updateFunc = btlUnitUpdate00285e50Packet;
    packet->destroyFunc = btlUnitDestroy00285e50Packet;

    work = (BtlUnitPacketUnitPtr*)packet->workData;

    work->unit = unit;

    return packet;
}

// FUN_00285eb0
void btlUnitInit00285f20Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount++;
}

// FUN_00285ed0
u32 btlUnitUpdate00285f20Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    FUN_00287510(packet->unit);

    return 1;
}

// FUN_00285f00
void btlUnitDestroy00285f20Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount--;
}

// FUN_00285f20
BtlPacket* btlUnit00285f20(BtlUnit* unit)
{
    BtlPacket* packet;
    BtlUnitPacketUnitPtr* work;

    packet = btlPacketCreate(0x114, sizeof(BtlUnitPacketUnitPtr));

    packet->initFunc = btlUnitInit00285f20Packet;
    packet->updateFunc = btlUnitUpdate00285f20Packet;
    packet->destroyFunc = btlUnitDestroy00285f20Packet;

    work = (BtlUnitPacketUnitPtr*)packet->workData;

    work->unit = unit;

    return packet;
}

// FUN_00285f80
void btlUnitInit002860b0Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount++;
}

// FUN_00285fa0
u32 btlUnitUpdate002860b0Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;
    u16 i;
    BtlUnit* unit;
    Model* mdl;
    Model* m;

    packet = (BtlUnitPacketUnitPtr*)work;

    unit = packet->unit;

    if (!(unit->flags2 & BTLUNIT_FLAG2_UPDATE))
    {
        return 1;
    }

    if (unit->mdl == NULL)
    {
        return 1;
    }

    for (i = 0; i < 5; i++)
    {
        mdl = unit->mdl;

        if ((m = mdl)->attachedWpns[i].flags & (1 << 0) &&
            m->attachedWpns[i].wpnMdl != NULL)
        {
            if (mdl00319770(unit->mdl, i))
            {
                (m = unit->mdl)->attachedWpns[i].wpnMdl->flags &= ~(1 << 1);
            }
        }
    }

    return 1;
}

// FUN_00286090
void btlUnitDestroy002860b0Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount--;
}

// FUN_002860b0
BtlPacket* btlUnit002860b0(BtlUnit* unit)
{
    BtlPacket* packet;
    BtlUnitPacketUnitPtr* work;

    packet = btlPacketCreate(0x115, sizeof(BtlUnitPacketUnitPtr));

    packet->initFunc = btlUnitInit002860b0Packet;
    packet->updateFunc = btlUnitUpdate002860b0Packet;
    packet->destroyFunc = btlUnitDestroy002860b0Packet;

    work = (BtlUnitPacketUnitPtr*)packet->workData;

    work->unit = unit;

    return packet;
}

// FUN_00286110
void btlUnitInit00286240Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount++;
}

// FUN_00286130
u32 btlUnitUpdate00286240Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;
    u16 i;
    BtlUnit* unit;
    Model* mdl;
    Model* m;

    packet = (BtlUnitPacketUnitPtr*)work;

    unit = packet->unit;

    if (!(unit->flags2 & BTLUNIT_FLAG2_UPDATE))
    {
        return 1;
    }

    if (unit->mdl == NULL)
    {
        return 1;
    }

    for (i = 0; i < 5; i++)
    {
        mdl = unit->mdl;

        if ((m = mdl)->attachedWpns[i].flags & (1 << 0) &&
            m->attachedWpns[i].wpnMdl != NULL)
        {
            if (mdl00319770(unit->mdl, i))
            {
                (m = unit->mdl)->attachedWpns[i].wpnMdl->flags |= (1 << 1);
            }
        }
    }

    return 1;
}

// FUN_00286220
void btlUnitDestroy00286240Packet(void* work)
{
    BtlUnitPacketUnitPtr* packet;

    packet = (BtlUnitPacketUnitPtr*)work;

    packet->unit->packetCount--;
}

// FUN_00286240
BtlPacket* btlUnit00286240(BtlUnit* unit)
{
    BtlPacket* packet;
    BtlUnitPacketUnitPtr* work;

    packet = btlPacketCreate(0x116, sizeof(BtlUnitPacketUnitPtr));

    packet->initFunc = btlUnitInit00286240Packet;
    packet->updateFunc = btlUnitUpdate00286240Packet;
    packet->destroyFunc = btlUnitDestroy00286240Packet;

    work = (BtlUnitPacketUnitPtr*)packet->workData;

    work->unit = unit;

    return packet;
}

// FUN_002862a0
void btlUnit002862a0(void* work)
{
    BtlUnit* unit;

    unit = *(BtlUnit**)work;

    unit->packetCount++;
}

// FUN_002862c0
u32 btlUnit002862c0(void* work)
{
    BtlUnit* unit;

    unit = *(BtlUnit**)work;

    if (unit->unk_9fc != NULL)
    {
        FUN_002bbbc0(unit->unk_9fc);
    }

    return 1;
}

// FUN_00286300
void btlUnit00286300(void* work)
{
    BtlUnit* unit;

    unit = *(BtlUnit**)work;

    unit->packetCount--;
}

// FUN_00286320
BtlPacket* btlUnit00286320(BtlUnit* unit)
{
    BtlPacket* packet;
    BtlUnit** work;

    packet = btlPacketCreate(BTLPACKET_MAKE_ID(BTLPACKET_MODULE_UNIT, 0x1a), sizeof(BtlUnit*));

    packet->initFunc = btlUnit002862a0;
    packet->updateFunc = btlUnit002862c0;
    packet->destroyFunc = btlUnit00286300;

    work = (BtlUnit**)packet->workData;
    *work = unit;

    return packet;
}

// FUN_00286380
void func_00286380(void* work)
{
    BtlUnitPacketResource* packet;
    BtlUnit* unit;

    packet = (BtlUnitPacketResource*)work;
    unit = packet->unit;
    unit->packetCount++;
    if (!(packet->flags & 0x10))
    {
        if (*(void**)unit->mdl->runtimeData.animationData == NULL)
        {
            func_0031c7e0(unit->mdl);
        }
        packet->state = 1;
    }
}

// FUN_002863F0
u32 func_002863f0(void* work)
{
    BtlUnitPacketResource* packet;
    BtlUnit* unit;

    packet = (BtlUnitPacketResource*)work;
    unit = packet->unit;
    if (packet->state == 0)
    {
        if (*(void**)unit->mdl->runtimeData.animationData == NULL)
        {
            func_0031c7e0(unit->mdl);
        }
        packet->state = 1;
    }
    else if (func_0031ebe0(unit->mdl->runtimeData.animationData))
    {
        return 1;
    }
    return 0;
}

// FUN_00286480
void btlUnitDestroyResourcePacket(void* work)
{
    BtlUnitPacketResource* packet;

    packet = (BtlUnitPacketResource*)work;
    packet->unit->packetCount--;
}

// FUN_002864A0
BtlPacket* func_002864a0(BtlUnit* unit, u16 id, u16 flags)
{
    BtlPacket* packet;
    BtlUnitPacketResource* work;

    packet = btlPacketCreate(0x111, sizeof(BtlUnitPacketResource));
    packet->unk_47 &= ~(1 << 0);
    packet->initFunc = func_00286380;
    packet->updateFunc = func_002863f0;
    packet->destroyFunc = btlUnitDestroyResourcePacket;

    work = (BtlUnitPacketResource*)packet->workData;
    work->unit = unit;
    work->flags = flags;
    work->type = unit->genus + 1;
    work->id = id;
    work->state = 0;
    return packet;
}

u32 btlUnit00287580(BtlUnit* unit);
#pragma push
#pragma opt_propagation off
// FUN_00286540
#ifndef PC_BUILD
asm void func_00286540(void)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000982d
  .word 0x1000039a
  .word 0x00000000
  .word 0x001320c0
  .word 0x8f83b6fc
  .word 0x00641821
  .word 0x8c740154
  .word 0x10000391
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a0368
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a09b4
  .word 0x00000000
  .word 0x24030002
  .word 0x1263000b
  .word 0x00000000
  .word 0x24030001
  .word 0x12630003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0bf548
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x8e830098
  .word 0x30630002
  .word 0x10600009
  .word 0x00000000
  .word 0x968409f2
  .word 0x10800006
  .word 0x00000000
  .word 0x928200ac
  .word 0x38420001
  .word 0x2c450001
  .word 0x0c068394
  .word 0x00000000
  .word 0x8e830098
  .word 0x30630002
  .word 0x1060036d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a7b88
  .word 0x00000000
  .word 0x96840000
  .word 0x30830003
  .word 0x10600012
  .word 0x00000000
  .word 0x30830004
  .word 0x1460000f
  .word 0x00000000
  .word 0x92830037
  .word 0x2861001d
  .word 0x14200005
  .word 0x00000000
  .word 0x2463ffe4
  .word 0xa2830037
  .word 0x10000002
  .word 0x00000000
  .word 0xa2800037
  .word 0x8e830098
  .word 0x34630004
  .word 0xae830098
  .word 0x10000011
  .word 0x00000000
  .word 0x92830037
  .word 0x286100ff
  .word 0x1020000d
  .word 0x00000000
  .word 0x286100e3
  .word 0x10200005
  .word 0x00000000
  .word 0x2463001c
  .word 0xa2830037
  .word 0x10000003
  .word 0x00000000
  .word 0x240300ff
  .word 0xa2830037
  .word 0x8e830098
  .word 0x34630004
  .word 0xae830098
  .word 0x9683004c
  .word 0x18600061
  .word 0x00000000
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x46000883
  .word 0x92850048
  .word 0x92830044
  .word 0x00651823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001042
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x10000006
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x00a41821
  .word 0xa2830040
  .word 0x92850049
  .word 0x92830045
  .word 0x00651823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001042
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x10000006
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x00a41821
  .word 0xa2830041
  .word 0x9285004a
  .word 0x92830046
  .word 0x00651823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001042
  .word 0x3c034f00
  .word 0x44830000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0x46000824
  .word 0x44040000
  .word 0x10000006
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44040000
  .word 0x3c038000
  .word 0x00832025
  .word 0x00a41821
  .word 0xa2830042
  .word 0x8e830098
  .word 0x34630004
  .word 0xae830098
  .word 0x9683004c
  .word 0x2463ffff
  .word 0xa683004c
  .word 0x8e830098
  .word 0x30630004
  .word 0x106002a3
  .word 0x00000000
  .word 0xc683001c
  .word 0xc6820020
  .word 0xc6810024
  .word 0xc6800028
  .word 0x46031b02
  .word 0x460212c2
  .word 0x46010a82
  .word 0x46011242
  .word 0x46030a02
  .word 0x460219c2
  .word 0x46030182
  .word 0x46020142
  .word 0x46010102
  .word 0x460a5800
  .word 0x3c024000
  .word 0x44821800
  .word 0x3c023f80
  .word 0x44821000
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181d
  .word 0xe7a00060
  .word 0x46043800
  .word 0x46001802
  .word 0xe7a00064
  .word 0x46054001
  .word 0x46001802
  .word 0xe7a00068
  .word 0x46043801
  .word 0x46001802
  .word 0xe7a00070
  .word 0x460a6000
  .word 0x46020818
  .word 0x4600181d
  .word 0xe7a00074
  .word 0x46064800
  .word 0x46001802
  .word 0xe7a00078
  .word 0x46054000
  .word 0x46001802
  .word 0xe7a00080
  .word 0x46064801
  .word 0x46001802
  .word 0xe7a00084
  .word 0x460b6000
  .word 0x46020818
  .word 0x4600181d
  .word 0xe7a00088
  .word 0xafa00090
  .word 0xafa00094
  .word 0xafa00098
  .word 0x24020003
  .word 0xafa2006c
  .word 0x8e8409f4
  .word 0x27a50060
  .word 0x0000302d
  .word 0x0c0c629c
  .word 0x00000000
  .word 0xc680002c
  .word 0xe7a000a8
  .word 0xe7a000a4
  .word 0xe7a000a0
  .word 0x8e8409f4
  .word 0x27a500a0
  .word 0x24060002
  .word 0x0c0c62a4
  .word 0x00000000
  .word 0xc6810004
  .word 0xc6800010
  .word 0x46000800
  .word 0xe7a000a0
  .word 0xc6810008
  .word 0xc6800014
  .word 0x46000800
  .word 0xe7a000a4
  .word 0xc681000c
  .word 0xc6800018
  .word 0x46000800
  .word 0xe7a000a8
  .word 0x8e8409f4
  .word 0x27a500a0
  .word 0x24060002
  .word 0x0c0c628c
  .word 0x00000000
  .word 0x92850030
  .word 0x92840031
  .word 0x92830032
  .word 0x92820033
  .word 0xa3a500ac
  .word 0xa3a400ad
  .word 0xa3a300ae
  .word 0xa3a200af
  .word 0x92820035
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
  .word 0xc7808218
  .word 0x46010082
  .word 0x93a200ad
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
  .word 0xc7808218
  .word 0x46010002
  .word 0x46020002
  .word 0x92820036
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200ae
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030982
  .word 0x92820037
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200af
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030942
  .word 0x92820034
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200ac
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030842
  .word 0x3c02437f
  .word 0x44822000
  .word 0x3c023f00
  .word 0x44821800
  .word 0x44801000
  .word 0x00000000
  .word 0x46031018
  .word 0x4601205c
  .word 0x46000864
  .word 0x44020800
  .word 0x00000000
  .word 0xa3a200ac
  .word 0x46031018
  .word 0x4600201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200ad
  .word 0x46031018
  .word 0x4606201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200ae
  .word 0x46031018
  .word 0x4605201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200af
  .word 0x9282003d
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
  .word 0xc7808218
  .word 0x46010082
  .word 0x93a200ad
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
  .word 0xc7808218
  .word 0x46010002
  .word 0x46020002
  .word 0x9282003e
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200ae
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030982
  .word 0x9282003f
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200af
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030942
  .word 0x9282003c
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200ac
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030842
  .word 0x3c02437f
  .word 0x44822000
  .word 0x3c023f00
  .word 0x44821800
  .word 0x44801000
  .word 0x00000000
  .word 0x46031018
  .word 0x4601205c
  .word 0x46000864
  .word 0x44020800
  .word 0x00000000
  .word 0xa3a200ac
  .word 0x46031018
  .word 0x4600201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200ad
  .word 0x46031018
  .word 0x4606201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200ae
  .word 0x46031018
  .word 0x4605201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200af
  .word 0x92820041
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
  .word 0xc7808218
  .word 0x46010082
  .word 0x93a200ad
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
  .word 0xc7808218
  .word 0x46010002
  .word 0x46020002
  .word 0x92820042
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200ae
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030982
  .word 0x92820043
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200af
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030942
  .word 0x92820040
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x460208c2
  .word 0x93a200ac
  .word 0x04400006
  .word 0x00000000
  .word 0x44820800
  .word 0x00000000
  .word 0x468008a0
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830800
  .word 0x00000000
  .word 0x468008a0
  .word 0x46021080
  .word 0xc7818218
  .word 0x46020842
  .word 0x46030842
  .word 0x3c02437f
  .word 0x44822000
  .word 0x3c023f00
  .word 0x44821800
  .word 0x44801000
  .word 0x00000000
  .word 0x46031018
  .word 0x4601205c
  .word 0x46000864
  .word 0x44020800
  .word 0x00000000
  .word 0xa3a200ac
  .word 0x46031018
  .word 0x4600201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200ad
  .word 0x46031018
  .word 0x4606201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200ae
  .word 0x46031018
  .word 0x4605201c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa3a200af
  .word 0x93a200af
  .word 0x284200fe
  .word 0x1440000f
  .word 0x00000000
  .word 0x240200ff
  .word 0xa3a200af
  .word 0x3c020007
  .word 0x345037fb
  .word 0x0280202d
  .word 0x24050002
  .word 0x0c0a1f3c
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050005
  .word 0x0c0a1f3c
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x24050002
  .word 0x1265000a
  .word 0x00000000
  .word 0x3c020007
  .word 0x345037fb
  .word 0x0280202d
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x0280202d
  .word 0x24050005
  .word 0x0c0a1ec8
  .word 0x00000000
  .word 0x8e8209f4
  .word 0x244300e8
  .word 0x8c4200e8
  .word 0x10500012
  .word 0x00000000
  .word 0xac700000
  .word 0x0000202d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e8309f4
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x00621021
  .word 0x8c4203b8
  .word 0x10400002
  .word 0x00000000
  .word 0xac5000e8
  .word 0x24840001
  .word 0x2c820005
  .word 0x1440fff4
  .word 0x00000000
  .word 0x27a500ac
  .word 0x93a600ac
  .word 0x93a400ad
  .word 0x93a300ae
  .word 0x93a200af
  .word 0xa286004e
  .word 0xa284004f
  .word 0xa2830050
  .word 0xa2820051
  .word 0x8e8409f4
  .word 0x0c0c62b4
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0b5010
  .word 0x00000000
  .word 0x8e840098
  .word 0x2403fffb
  .word 0x00831824
  .word 0xae830098
  .word 0x8e8409f4
  .word 0x948300d8
  .word 0x30630004
  .word 0x10600003
  .word 0x00000000
  .word 0x0c0c5dcc
  .word 0x00000000
  .word 0x8e8309f8
  .word 0x10600032
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0a1d60
  .word 0x00000000
  .word 0x1040002d
  .word 0x00000000
  .word 0x8e820a2c
  .word 0x10400022
  .word 0x00000000
  .word 0x8c42000c
  .word 0x0002933c
  .word 0x0012933e
  .word 0x0240202d
  .word 0x0c0aefe8
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x8e8409f8
  .word 0x0c0aef7c
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12220013
  .word 0x00000000
  .word 0x0240202d
  .word 0x26850048
  .word 0x0c0af038
  .word 0x00000000
  .word 0x92850040
  .word 0x92840041
  .word 0x92830042
  .word 0x92820043
  .word 0xa2850044
  .word 0xa2840045
  .word 0xa2830046
  .word 0xa2820047
  .word 0x24020008
  .word 0xa682004c
  .word 0x8e8409f8
  .word 0x0220282d
  .word 0x0c0aef70
  .word 0x00000000
  .word 0x8e8409f8
  .word 0x9a85004e
  .word 0x8a850051
  .word 0x0c0aefe0
  .word 0x00000000
  .word 0x8e8409f8
  .word 0x0c0aef80
  .word 0x00000000
  .word 0x8e940a30
  .word 0x1680fc6f
  .word 0x00000000
  .word 0x26730001
  .word 0x2e630004
  .word 0x1460fc65
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_propagation reset

/* W389 measured: opt_propagation off nd742->707, object 988/992 -> 984/992. */
// FUN_00287400
void func_00287400(void)
{
    u32 genus;
    BtlUnit* unit;

    for (genus = 0; genus < UNIT_GENUS_MAX; genus++)
    {
        unit = *(BtlUnit**)((u8*)gBtl + 0x154 + (genus << 3));
        while (unit != NULL)
        {
            if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
            {
                func_00287ea0(unit);
            }
            unit = unit->prev;
        }
    }
}

// FUN_00287490
void FUN_00287490(BtlUnit* unit)
{
    unit->flags3 &= ~BTLUNIT_FLAG3_UNK1000;
    FUN_00287cf0(unit, 5);
    if (unit->resTypeId != 0)
    {
        func_001a0dc0(unit->resTypeId, 1);
        unit->flags3 &= ~BTLUNIT_FLAG3_UNK02;
    }
    else
    {
        unit->flags3 |= BTLUNIT_FLAG3_UNK02;
    }
}

// FUN_00287510
void FUN_00287510(BtlUnit* unit)
{
    unit->flags3 |= BTLUNIT_FLAG3_UNK1000;
    FUN_00287cf0(unit, 5);
    if (unit->resTypeId != 0)
    {
        func_001a0dc0(unit->resTypeId, 0);
    }
    unit->flags3 &= ~BTLUNIT_FLAG3_UNK02;
}
/* Data tables used by the retail animation and character helpers. */



// FUN_00287580
u32 btlUnit00287580(BtlUnit* unit)
{
    return !(unit->flags3 & BTLUNIT_FLAG3_UNK1000);
}
// FUN_002875a0
BtlUnit* btlUnitCreate(u8 genus)
{
    BtlUnit* unit;
    u32 id;
    f32 moveScale;

    unit = RwMalloc(sizeof(BtlUnit), rwMEMHINTDUR_GLOBAL);
    memset(unit, 0, sizeof(BtlUnit));

    unit->genus = genus;

    if (sNextId >= 0x0fffffff)
    {
        sNextId = 1;
    }
    id = sNextId;
    sNextId = id + 1;
    unit->id = id;

    func_0027f530(unit);

    unit->unk_8c = 150.0f;
    unit->sphereRadius = 50.0f;
    unit->sphereCenter.x = 0.0f;
    unit->sphereCenter.y = unit->unk_8c * 0.5f;
    unit->sphereCenter.z = 0.0f;
    unit->movementFlags = 0;
    unit->unk_cc = 27.0f;
    if (unit->genus == UNIT_GENUS_PC)
    {
        moveScale = 8.0f;
    }
    else
    {
        moveScale = 14.0f;
    }
    unit->unk_4f4 = 0.5f * moveScale;
    unit->unk_9d4 = 1.0f;
    unit->unk_9f0 = -1;
    unit->unk_9f8 = func_002bbc00(unit);
    unit->unk_9fc = func_002bb7d0();

    unit->prev = NULL;
    if (gBtl->unitLists[genus].head != NULL)
    {
        gBtl->unitLists[genus].head->prev = unit;
        unit->next = gBtl->unitLists[genus].head;
    }
    else
    {
        gBtl->unitLists[genus].tail = unit;
        unit->next = NULL;
    }
    gBtl->unitLists[genus].head = unit;

    return unit;
}

// FUN_00287740
void func_00287740(BtlUnit* unit)
{
    s32 category;

    if (unit->resTypeId != 0)
    {
        category = (unit->resTypeId & 0xffc00) >> 10;
        func_003b7090(unit->resTypeId);
        if (unit->mdl != NULL)
        {
            FUN_00287cf0(unit, 4);
            FUN_00287cf0(unit, 1);
            FUN_00287cf0(unit, 2);
            FUN_00287cf0(unit, 3);
            mdlSetColor(unit->mdl, (const RwRGBA*)&DAT_007cc970);
            mdlAnimSetSpeed(unit->mdl, 0, 1.0f);
            if (category == 1 && !(unit->flags2 & (1 << 3)))
            {
                mdlDestroy(unit->mdl);
            }
        }
        unit->resTypeId = 0;
    }
    else
    {
        if (unit->mdl != NULL)
        {
            mdlDestroy(unit->mdl);
        }
    }
    unit->mdl = NULL;
    unit->flags2 &= ~BTLUNIT_FLAG2_UPDATE;
}

// FUN_00287860
void func_00287860(BtlUnit* unit)
{
    func_00287740(unit);
    if (unit->personaUnit != NULL)
    {
        FUN_002878d0(unit->personaUnit);
    }
    if (unit->unk_9f8 != NULL)
    {
        func_002bbd00(unit->unk_9f8);
        unit->unk_9f8 = NULL;
    }
    if (unit->unk_9fc != NULL)
    {
        func_002bb8f0(unit->unk_9fc);
        unit->unk_9fc = NULL;
    }
}

// FUN_002878D0
void FUN_002878d0(BtlUnit* unit)
{
    u8 genus;

    genus = unit->genus;
    func_00287740(unit);
    if (unit->personaUnit != NULL)
    {
        FUN_002878d0(unit->personaUnit);
    }
    if (unit->unk_9f8 != NULL)
    {
        func_002bbd00(unit->unk_9f8);
        unit->unk_9f8 = NULL;
    }
    if (unit->unk_9fc != NULL)
    {
        func_002bb8f0(unit->unk_9fc);
        unit->unk_9fc = NULL;
    }
    func_002d3fe0(unit);
    if (unit->unk_9f0 >= 0)
    {
        func_002b7000(unit, unit->unk_9f0, 0);
    }
    if (unit->next != NULL)
    {
        unit->next->prev = unit->prev;
    }
    else
    {
        gBtl->unitLists[genus].tail = unit->prev;
    }
    if (unit->prev != NULL)
    {
        unit->prev->next = unit->next;
    }
    else
    {
        gBtl->unitLists[genus].head = unit->next;
    }
    ((void (*)(void*))DAT_0096017c[0])(unit);
}

// FUN_002879F0
void func_002879f0(void)
{
    BtlUnit* unit;
    BtlUnit* next;
    u32 genus;
    u8 unitGenus;

    for (genus = 0; genus < UNIT_GENUS_MAX; genus++)
    {
        unit = *(BtlUnit**)((u8*)gBtl + 0x150 + (genus << 3));
        while (unit != NULL)
        {
            next = unit->next;
            unitGenus = unit->genus;
            func_00287860(unit);
            func_002d3fe0(unit);
            if (unit->unk_9f0 >= 0)
            {
                func_002b7000(unit, unit->unk_9f0, 0);
            }
            if (unit->next != NULL)
            {
                unit->next->prev = unit->prev;
            }
            else
            {
                *(BtlUnit**)((u8*)gBtl + 0x154 + ((u32)unitGenus << 3)) = unit->prev;
            }
            if (unit->prev != NULL)
            {
                unit->prev->next = unit->next;
            }
            else
            {
                *(BtlUnit**)((u8*)gBtl + 0x150 + ((u32)unitGenus << 3)) = unit->next;
            }
            ((void (*)(void*))DAT_0096017c[0])(unit);
            unit = next;
        }
    }
}


// FUN_00287B20


void FUN_00287b20(int param_1,u16 param_2)
{
    u16 uVar1;
    u32 uVar2;
    s16 sVar3;
    u32 uVar4;

    uVar4 = *(u32*)(param_1 + 0x98) & 2;
    if (uVar4 != 0)
    {
        switch (param_2)
        {
            case 5:
                if ((*(u32*)(param_1 + 0x9c) & 0x800) == 0 &&
                    *(u16*)(param_1 + 0x9f2) != 0 &&
                    (*(u32*)(param_1 + 0x9c) & 8) != 0)
                {
                    if (uVar4 != 0)
                        sVar3 = *(s16*)(param_1 + 0x9ce);
                    else
                        sVar3 = 0;

                    if (sVar3 != 0x12)
                    {
                        FUN_001a0dc0(*(u16*)(param_1 + 0x9f2), 0);
                        *(u32*)(param_1 + 0x9c) |= 0x800;
                    }
                }
                break;

            case 1:
                FUN_00319010(*(u32*)(param_1 + 0x9f4));
                *(f32*)(*(int*)(param_1 + 0x9f4) + 0x39c) = DAT_007cad78;
                *(f32*)(*(int*)(param_1 + 0x9f4) + 0x3a0) =
                    *(f32*)(*(int*)(param_1 + 0x9f4) + 0x39c);
                *(f32*)(*(int*)(param_1 + 0x9f4) + 0x3a4) = 1.0f;
                break;

            case 2:
                FUN_00319050(*(u32*)(param_1 + 0x9f4));
                break;

            case 3:
                uVar1 = FUN_00319200(*(u32*)(param_1 + 0x9f4));
                FUN_003191f0(*(u32*)(param_1 + 0x9f4), (u16)(uVar1 | 0x1000));
                uVar1 = FUN_00319200(*(u32*)(param_1 + 0x9f4));
                FUN_003191f0(*(u32*)(param_1 + 0x9f4), (u16)(uVar1 | 0x2000));
                uVar2 = (u16)FUN_00319200(*(u32*)(param_1 + 0x9f4));
                uVar2 &= -0x801;
                FUN_003191f0(*(u32*)(param_1 + 0x9f4), (u16)uVar2);
                break;

            case 4:
                *(u16*)(*(int*)(param_1 + 0x9f4) + 0x3fe) |= 0x10;
                break;
        }
    }
}

// FUN_00287CF0


void FUN_00287cf0(BtlUnit* unit, u16 mode)
{
    u16 flags;

    if (!(unit->flags2 & BTLUNIT_FLAG2_UPDATE))
    {
        return;
    }

    switch (mode)
    {
        case 5:
            if ((unit->flags3 & BTLUNIT_FLAG3_UNK800) && unit->resTypeId != 0)
            {
                func_001a0dc0(unit->resTypeId, !(unit->flags3 & BTLUNIT_FLAG3_UNK1000));
                unit->flags3 &= ~BTLUNIT_FLAG3_UNK800;
            }
            break;

        case 1:
            mdlDisableFullShadow(unit->mdl);
            unit->mdl->unk_388 &= 0xe2;
            break;

        case 2:
            mdl00319070(unit->mdl);
            break;

        case 3:
            mdlLookAtSetBlendRotFactor(unit->mdl, DAT_007cada4);
            mdlLookAtSetMaxAngles(unit->mdl, 70.0f, 80.0f);
            mdl003191b0(unit->mdl);
            mdlLookAtDisableTarget(unit->mdl);
            flags = mdlLookAtGetFlags(unit->mdl);
            mdlLookAtSetFlags(unit->mdl, flags & ~0x2000);
            flags = mdlLookAtGetFlags(unit->mdl);
            mdlLookAtSetFlags(unit->mdl, flags & ~0x1000);
            unit->lookAtMode = 0;
            break;

        case 4:
            unit->mdl->runtimeData.animationFields.unk_0e &= ~0x10;
            break;
    }
}


// FUN_00287EA0


void FUN_00287ea0(BtlUnit* unit)
{
    BtlUnit* target;
    RwV3d targetPos;
    RwV3d scaledCenter;
    RwV3d transformedCenter;
    u32 updateFlag;
    s16 state;

    updateFlag = unit->flags2 & BTLUNIT_FLAG2_UPDATE;
    if (updateFlag == 0)
    {
        return;
    }

    if (updateFlag != 0)
    {
        state = unit->unk_9ce;
    }
    else
    {
        state = 0;
    }

    switch (state)
    {
        case 0:
            goto state_zero;

        case 16:
            if (mdlLookAtIsActive(unit->mdl)) {
                mdlLookAtDisableTarget(unit->mdl);
            }
            return;
        default:
            if (mdlLookAtIsActive(unit->mdl)) {
                mdl003191b0(unit->mdl);
                mdlLookAtDisableTarget(unit->mdl);
            }
            return;
    }

state_zero:
    if (unit->lookAtMode == 0 ||
        unit->mdl->animSlots[0].anim.blendFactor < 1.0f ||
        (mdlLookAtGetFlags(unit->mdl) & MDLLOOKAT_FLAG_UNK200))
    {
        goto done;
    }

    switch (unit->lookAtMode)
    {
        case 1:
            goto target_position;
        case 2:
            goto target_unit;
        default:
            goto done;
    }

target_position:
    mdlLookAtSetTargetPosXYZ(unit->mdl, &unit->lookAtTargetPos);
    goto done;

target_unit:
    if (unit->lookAtTargetId == 0)
    {
        goto done;
    }

    target = btlUnitFindFromId((u16)unit->lookAtTargetId);
    if (target != NULL && target != unit)
    {
        scaledCenter.x = target->sphereCenter.x * target->scale;
        scaledCenter.y = target->sphereCenter.y * target->scale;
        scaledCenter.z = target->sphereCenter.z * target->scale;
        RtQuatTransformVectors(&transformedCenter, &scaledCenter, 1, &target->rot);
        targetPos.x = transformedCenter.x + target->pos.x;
        targetPos.y = transformedCenter.y + target->pos.y;
        targetPos.z = transformedCenter.z + target->pos.z;
        targetPos.y = DAT_007cb0cc * (target->unk_8c * target->scale) +
                      targetPos.y + 0.0f;
        mdlLookAtSetTargetPosXYZ(unit->mdl, &targetPos);
        goto done;
    }

    mdlLookAtDisableTarget(unit->mdl);
    unit->lookAtTargetId = 0;

done:
    return;
}

// FUN_002880e0
void btlUnit002880e0(BtlUnit* unit, u8 param_2)
{
    if (unit != NULL && unit->genus == 2)
    {
        *(u8*)&unit->unk_ac = param_2;
    }
}


// FUN_00288110


void FUN_00288110(BtlUnit* unit)
{
    s32 result;

    if ((unit->flags2 & BTLUNIT_FLAG2_UPDATE) != 0 &&
        (result = FUN_003191d0(unit->mdl)) != 0)
    {
        FUN_003191b0(unit->mdl);
        FUN_00319190(unit->mdl);
    }
}

// FUN_00288170
void btlUnitInitLookAtPacket(void* work)
{
    BtlUnitPacketLookAt* packet;

    packet = (BtlUnitPacketLookAt*)work;

    if (packet->unit != NULL)
    {
        packet->unit->packetCount++;
    }
}

// FUN_00288190
u32 btlUnitUpdateLookAtPacket(void* work)
{
    BtlUnitPacketLookAt* packet;
    Battle* btl;
    BtlUnit* curr;
    BtlUnit* unit;
    f32 maxPitchAngle1;
    f32 maxYawAngle1;
    f32 maxPitchAngle2;
    f32 maxYawAngle2;
    f32 maxPitchArg1;
    f32 maxYawArg1;
    f32 maxPitchArg2;
    f32 maxYawArg2;

    packet = (BtlUnitPacketLookAt*)work;

    if (packet->flags & BTLUNIT_LOOKAT_FLAG_ALLPLAYER)
    {
        btl = gBtl;
        curr = btl->unitLists[UNIT_GENUS_PC].tail;
        while (curr != NULL)
        {
            if (curr->flags3 & BTLUNIT_FLAG3_UNK08)
            {
                if (&maxPitchAngle1 != NULL)
                {
                    maxPitchAngle1 = 70.0f;
                }

                if (&maxYawAngle1 != NULL)
                {
                    maxYawAngle1 = 75.0f;
                }

                maxYawArg1 = maxYawAngle1;
                maxPitchArg1 = maxPitchAngle1;

                if (curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                {
                    mdlLookAtSetMaxAngles(curr->mdl, maxPitchArg1, maxYawArg1);
                }

                if (curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                {
                    mdlLookAtSetBlendRotFactor(curr->mdl, gUnk_007cad7c);
                }

                curr->lookAtMode = BTLUNIT_LOOKAT_MODE_TARGETPOS;
                curr->lookAtTargetPos = packet->targetPos;
                FUN_00287b20((int)curr, 3);
            }

            curr = curr->prev;
        }
    }
    else
    {
        unit = packet->unit;

        if (&maxPitchAngle2 != NULL)
        {
            maxPitchAngle2 = 70.0f;
        }

        if (&maxYawAngle2 != NULL)
        {
            maxYawAngle2 = 75.0f;
        }

        maxYawArg2 = maxYawAngle2;
        maxPitchArg2 = maxPitchAngle2;

        if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
        {
            mdlLookAtSetMaxAngles(unit->mdl, maxPitchArg2, maxYawArg2);
        }

        if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
        {
            mdlLookAtSetBlendRotFactor(unit->mdl, gUnk_007cad7c);
        }

        unit->lookAtMode = BTLUNIT_LOOKAT_MODE_TARGETPOS;
        unit->lookAtTargetPos = packet->targetPos;
        FUN_00287b20((int)unit, 3);
    }

    return 1;
}

// FUN_00288340
void btlUnitDestroyLookAtPacket(void* work)
{
    BtlUnitPacketLookAt* packet;

    packet = (BtlUnitPacketLookAt*)work;

    if (packet->unit != NULL)
    {
        packet->unit->packetCount--;
    }
}

/* W389 measured: opt_propagation off nd2216->2197, object 3760/3776 -> 3672/3776. */
// FUN_00288360
BtlPacket* btlUnitCreateLookAtPacket(BtlUnit* unit, const RwV3d* targetPos, u16 flags)
{
    BtlPacket* packet;
    BtlUnitPacketLookAt* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_LOOKAT, sizeof(BtlUnitPacketLookAt));
    
    packet->initFunc = btlUnitInitLookAtPacket;
    packet->updateFunc = btlUnitUpdateLookAtPacket;
    packet->destroyFunc = btlUnitDestroyLookAtPacket;

    work = (BtlUnitPacketLookAt*)packet->workData;

    work->unit = unit;
    work->flags = flags;
    work->targetPos = *targetPos;

    return packet;
}


// FUN_00288400
void btlUnitInitLookAtUnitPacket(void* work)
{
    BtlUnitPacketLookAtUnit* packet;

    packet = (BtlUnitPacketLookAtUnit*)work;

    if (packet->unit != NULL)
    {
        packet->unit->packetCount++;
    }

    packet->targetUnit->packetCount++;
}

// FUN_00288430
u32 btlUnitUpdateLookAtUnitPacket(void* work)
{
    BtlUnitPacketLookAtUnit* packet;
    f32 maxPitchAngle1;
    f32 maxYawAngle1;
    f32 maxPitchAngle2;
    f32 maxYawAngle2;
    f32 maxPitchAngle3;
    f32 maxYawAngle3;
    f32 maxPitchArg1;
    f32 maxYawArg1;
    f32 maxPitchArg2;
    f32 maxYawArg2;
    f32 maxPitchArg3;
    f32 maxYawArg3;



    packet = (BtlUnitPacketLookAtUnit*)work;

    if ((packet->flags & (BTLUNIT_LOOKAT_FLAG_ALLPLAYER | BTLUNIT_LOOKAT_FLAG_ALLENEMY)) != 0)
    {
        if (packet->flags & BTLUNIT_LOOKAT_FLAG_ALLPLAYER)
        {
            Battle* btl;
            BtlUnit* curr;
            BtlUnit* targetUnit;
            btl = gBtl;
            curr = btl->unitLists[UNIT_GENUS_PC].tail;
            while (curr != NULL)
            {
                if (curr->flags3 & BTLUNIT_FLAG3_UNK08)
                {
                    targetUnit = packet->targetUnit;
                    if (&maxPitchAngle1 != NULL)
                    {
                        maxPitchAngle1 = 70.0f;
                    }

                    if (&maxYawAngle1 != NULL)
                    {
                        maxYawAngle1 = 75.0f;
                    }

                    maxYawArg1 = maxYawAngle1;
                    maxPitchArg1 = maxPitchAngle1;

                    if (curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                    {
                        mdlLookAtSetMaxAngles(curr->mdl, maxPitchArg1, maxYawArg1);
                    }

                    if (curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                    {
                        mdlLookAtSetBlendRotFactor(curr->mdl, gUnk_007cad7c);
                    }

                    curr->lookAtMode = BTLUNIT_LOOKAT_MODE_TARGETUNIT;
                    curr->lookAtTargetId = targetUnit->id;
                    FUN_00287b20((int)curr, 3);
                }

                curr = curr->prev;
            }
        }

        if (packet->flags & BTLUNIT_LOOKAT_FLAG_ALLENEMY)
        {
            Battle* btl;
            BtlUnit* curr;
            BtlUnit* targetUnit;
            btl = gBtl;
            curr = btl->unitLists[UNIT_GENUS_EC].tail;
            while (curr != NULL)
            {
                if (curr->flags3 & BTLUNIT_FLAG3_UNK08)
                {
                    targetUnit = packet->targetUnit;
                    if (&maxPitchAngle2 != NULL)
                    {
                        maxPitchAngle2 = 70.0f;
                    }

                    if (&maxYawAngle2 != NULL)
                    {
                        maxYawAngle2 = 75.0f;
                    }

                    maxYawArg2 = maxYawAngle2;
                    maxPitchArg2 = maxPitchAngle2;

                    if (curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                    {
                        mdlLookAtSetMaxAngles(curr->mdl, maxPitchArg2, maxYawArg2);
                    }

                    if (curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                    {
                        mdlLookAtSetBlendRotFactor(curr->mdl, gUnk_007cad7c);
                    }

                    curr->lookAtMode = BTLUNIT_LOOKAT_MODE_TARGETUNIT;
                    curr->lookAtTargetId = targetUnit->id;
                    FUN_00287b20((int)curr, 3);
                }

                curr = curr->prev;
            }
        }
    }
    else
    {
        BtlUnit* targetUnit;
        BtlUnit* unit;
        targetUnit = packet->targetUnit;
        unit = packet->unit;
        if (&maxPitchAngle3 != NULL)
        {
            maxPitchAngle3 = 70.0f;
        }

        if (&maxYawAngle3 != NULL)
        {
            maxYawAngle3 = 75.0f;
        }

        maxYawArg3 = maxYawAngle3;
        maxPitchArg3 = maxPitchAngle3;

        if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
        {
            mdlLookAtSetMaxAngles(unit->mdl, maxPitchArg3, maxYawArg3);
        }

        if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
        {
            mdlLookAtSetBlendRotFactor(unit->mdl, gUnk_007cad7c);
        }

        unit->lookAtMode = BTLUNIT_LOOKAT_MODE_TARGETUNIT;
        unit->lookAtTargetId = targetUnit->id;
        FUN_00287b20((int)unit, 3);
    }

    return 1;
}

// FUN_002886b0
void btlUnitDestroyLookAtUnitPacket(void* work)
{
    BtlUnitPacketLookAtUnit* packet;

    packet = (BtlUnitPacketLookAtUnit*)work;

    if (packet->unit != NULL)
    {
        packet->unit->packetCount--;
    }

    packet->targetUnit->packetCount--;
}


// FUN_002886e0
BtlPacket* btlUnitCreateLookAtUnitPacket(BtlUnit* unit, BtlUnit* targetUnit, u16 flags)
{
    BtlPacket* packet;
    BtlUnitPacketLookAtUnit* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_LOOKATUNIT, sizeof(BtlUnitPacketLookAtUnit));

    packet->initFunc = btlUnitInitLookAtUnitPacket;
    packet->updateFunc = btlUnitUpdateLookAtUnitPacket;
    packet->destroyFunc = btlUnitDestroyLookAtUnitPacket;

    work = (BtlUnitPacketLookAtUnit*)packet->workData;

    work->unit = unit;
    work->targetUnit = targetUnit;
    work->flags = flags;

    return packet;
}

// FUN_00288760
void btlUnitInitLookAtDeactivatePacket(void* work)
{
    BtlUnitPacketLookAtDeactivate* packet;

    packet = (BtlUnitPacketLookAtDeactivate*)work;

    if (packet->unit != NULL)
    {
        packet->unit->packetCount++;
    }
}

// FUN_00288780
u32 btlUnitUpdateLookAtDeactivatePacket(void* work)
{
    BtlUnitPacketLookAtDeactivate* packet;
    Battle* btl;
    BtlUnit* curr;
    BtlUnit* unit;

    packet = (BtlUnitPacketLookAtDeactivate*)work;

    if (packet->flags & (BTLUNIT_LOOKAT_FLAG_ALLPLAYER | BTLUNIT_LOOKAT_FLAG_ALLENEMY))
    {
        if (packet->flags & BTLUNIT_LOOKAT_FLAG_ALLPLAYER)
        {
            btl = gBtl;
            curr = btl->unitLists[UNIT_GENUS_PC].tail;
            while (curr != NULL)
            {
                if (curr->flags3 & BTLUNIT_FLAG3_UNK08 && 
                    curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                {
                    mdlLookAtSetBlendRotFactor(curr->mdl, gUnk_007cad7c);
                    mdlLookAtSetMaxAngles(curr->mdl, 70.0f, 75.0f);
                    mdlLookAtDisableTarget(curr->mdl);

                    curr->lookAtMode = BTLUNIT_LOOKAT_MODE_NONE;
                }

                curr = curr->prev;
            }
        }

        if (packet->flags & BTLUNIT_LOOKAT_FLAG_ALLENEMY)
        {
            btl = gBtl;
            curr = btl->unitLists[UNIT_GENUS_EC].tail;
            while (curr != NULL)
            {
                if (curr->flags3 & BTLUNIT_FLAG3_UNK08 && 
                    curr->flags2 & BTLUNIT_FLAG2_UPDATE)
                {
                    mdlLookAtSetBlendRotFactor(curr->mdl, gUnk_007cad7c);
                    mdlLookAtSetMaxAngles(curr->mdl, 70.0f, 75.0f);
                    mdlLookAtDisableTarget(curr->mdl);

                    curr->lookAtMode = BTLUNIT_LOOKAT_MODE_NONE;
                }

                curr = curr->prev;
            }
        }
    }
    else
    {
        unit = packet->unit;
        if (unit->flags2 & BTLUNIT_FLAG2_UPDATE)
        {
            mdlLookAtSetBlendRotFactor(unit->mdl, gUnk_007cad7c);
            mdlLookAtSetMaxAngles(unit->mdl, 70.0f, 75.0f);
            mdlLookAtDisableTarget(unit->mdl);

            unit->lookAtMode = BTLUNIT_LOOKAT_MODE_NONE;
        }
    }

    return 1;
}

// FUN_00288930
void btlUnitDestroyLookAtDeactivatePacket(void* work)
{
    BtlUnitPacketLookAtDeactivate* packet;

    packet = (BtlUnitPacketLookAtDeactivate*)work;

    if (packet->unit != NULL)
    {
        packet->unit->packetCount--;
    }
}
/* Recovered battle-misc harvest: 0x00287EA0-0x00289650 */
// FUN_00288950
BtlPacket* btlUnitCreateLookAtDeactivatePacket(BtlUnit* unit, u16 flags)
{
    BtlPacket* packet;
    BtlUnitPacketLookAtDeactivate* work;

    packet = btlPacketCreate(BTLUNIT_PACKET_LOOKATDEACTIVATE, sizeof(BtlUnitPacketLookAtDeactivate));

    packet->initFunc = btlUnitInitLookAtDeactivatePacket;
    packet->updateFunc = btlUnitUpdateLookAtDeactivatePacket;
    packet->destroyFunc = btlUnitDestroyLookAtDeactivatePacket;

    work = (BtlUnitPacketLookAtDeactivate*)packet->workData;

    work->unit = unit;
    work->flags = flags;

    return packet;
}

#pragma push
#pragma opt_propagation off
// FUN_002889c0
#ifndef PC_BUILD
asm void btlUnitInitFromCharId(BtlUnit* unit, u16 id)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x3206ffff
  .word 0xa49000a4
  .word 0x908300a2
  .word 0x24020003
  .word 0x106200b2
  .word 0x00000000
  .word 0x24020002
  .word 0x1062008a
  .word 0x00000000
  .word 0x24020001
  .word 0x1062005f
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a8
  .word 0x00000000
  .word 0x8e220a2c
  .word 0xa4460002
  .word 0x8e240a2c
  .word 0x0000282d
  .word 0x0c0bfe24
  .word 0x00000000
  .word 0x962300a4
  .word 0x24020001
  .word 0x1462002b
  .word 0x00000000
  .word 0x8e240a2c
  .word 0x0c0c2318
  .word 0x00000000
  .word 0x304300ff
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021080
  .word 0x00431021
  .word 0x000220c0
  .word 0x8f82b718
  .word 0x00821021
  .word 0x94420014
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
  .word 0xe620002c
  .word 0x8e220098
  .word 0x34420004
  .word 0xae220098
  .word 0x8f82b718
  .word 0x00442021
  .word 0x24820024
  .word 0xae2209ec
  .word 0x2402001a
  .word 0xa62209d8
  .word 0x10000074
  .word 0x00000000
  .word 0x00101140
  .word 0x00501021
  .word 0x00021080
  .word 0x00501021
  .word 0x00022040
  .word 0x8f82b71c
  .word 0x00821021
  .word 0x94420014
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
  .word 0xe620002c
  .word 0x8e220098
  .word 0x34420004
  .word 0xae220098
  .word 0x8f82b71c
  .word 0x00442021
  .word 0x24820024
  .word 0xae2209ec
  .word 0x24020017
  .word 0xa62209d8
  .word 0x1000004e
  .word 0x00000000
  .word 0x8e220a2c
  .word 0xa4460002
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021080
  .word 0x00501021
  .word 0x000220c0
  .word 0x8f82b728
  .word 0x00821021
  .word 0x94420014
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
  .word 0xe620002c
  .word 0x8e220098
  .word 0x34420004
  .word 0xae220098
  .word 0x8f82b728
  .word 0x00442021
  .word 0x2482002a
  .word 0xae2209ec
  .word 0x24020013
  .word 0xa62209d8
  .word 0x10000026
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x00021040
  .word 0x00501021
  .word 0x000220c0
  .word 0x8f82b73c
  .word 0x00821021
  .word 0x94420018
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
  .word 0xe620002c
  .word 0x8e220098
  .word 0x34420004
  .word 0xae220098
  .word 0x8f82b73c
  .word 0x00441021
  .word 0x24440002
  .word 0x2442001a
  .word 0xae2209ec
  .word 0x24020006
  .word 0xa62209d8
  .word 0x84820000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200080
  .word 0x84820002
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200084
  .word 0x84820004
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6200088
  .word 0x94820006
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
  .word 0xe620008c
  .word 0x94820008
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
  .word 0xe6200090
  .word 0x0220202d
  .word 0x26250a04
  .word 0x0c0af378
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_propagation reset

// FUN_00288DA0


int FUN_00288da0(BtlUnit* unit, u16 mode)
{
    int result;
    u32 modeNine;
    u32 charId;
    u8 unitId;

    charId = unit->charId;
    switch (mode)
    {
    case 9:
        modeNine = 1;
        break;
    default:
        modeNine = 0;
        break;
    }

    switch (unit->genus)
    {
    case UNIT_GENUS_PC:
        if (charId == 1)
        {
            unitId = (u8)(u32)(uintptr_t)func_00308c60(unit->datUnit);
            result = modeNine
                ? (int)(uintptr_t)(iGpffffb718 + (unitId & 0xff) * 0x128 + 10)
                : (int)(uintptr_t)(iGpffffb718 + (unitId & 0xff) * 0x128);
        }
        else
        {
            result = modeNine
                ? (int)(uintptr_t)(iGpffffb71c + charId * 0x10a + 10)
                : (int)(uintptr_t)(iGpffffb71c + charId * 0x10a);
        }
        break;

    case UNIT_GENUS_EC:
        result = (int)(uintptr_t)func_002fc410(unit);
        switch ((u32)result)
        {
        case 0:
            result = modeNine
                ? (int)(uintptr_t)(iGpffffb728 + charId * 0xe8 + 10)
                : (int)(uintptr_t)(iGpffffb728 + charId * 0xe8);
            break;
        }
        break;

    case UNIT_GENUS_PS:
        result = (int)(uintptr_t)(iGpffffb73c + charId * 0x58 + 2);
        break;

    default:
        result = 0;
        break;
    }

    return result;
}

// FUN_00288f80
void btlUnitInitPersona(BtlUnit* unit, u16 personaId)
{
    if (unit->personaUnit == NULL)
    {
        unit->personaUnit = btlUnitCreate(UNIT_GENUS_PS);
    }

    btlUnitInitFromCharId(unit->personaUnit, personaId);
}


// FUN_00288FE0


BtlUnit* FUN_00288fe0(u16 genus, u16 charId)
{
    BtlUnit* unit;
    u32 targetCharId;

    unit = gBtl->unitLists[genus].tail;
    targetCharId = charId;
    while (unit != NULL)
    {
        if (unit->charId == targetCharId)
        {
            return unit;
        }
        unit = unit->prev;
    }

    return NULL;
}

/* W389 measured: opt_lifetimes on + opt_propagation off nd503->498, object 1136/1136 -> 1116/1136. */
// FUN_00289030
BtlUnit* btlUnitFindFromId(u16 id)
{
    u32 i;
    Battle* btl;
    u32 _id;
    BtlUnitList* list;
    BtlUnit* curr;

    i = 0;
    btl = gBtl;
    _id = id;
    for (; i < UNIT_GENUS_MAX; i++)
    {
        list = &btl->unitLists[i];
        curr = list->tail;
        while (curr != NULL)
        {
            if (curr->id == _id)
            {
                return curr;
            }

            curr = curr->prev;
        }
    }

    return NULL;
}

// W295: NOT a floor - retail loads the lhu (persona id) before `move $a0,$s1`;
// a volatile-cast temp for the id reproduces it.
// FUN_002890A0


int FUN_002890a0(BtlUnitSortEntry** param_1, BtlUnitSortEntry** param_2)
{
    RwV3d firstDelta;
    RwV3d secondDelta;
    RwV3d cameraPos;
    RwMatrix* matrix;
    BtlUnitSortEntry* first;
    BtlUnitSortEntry* second;
    f32 firstDistance;

    matrix = RwFrameGetLTM((RwFrame*)kwlnGetMainCamera()->object.object.parent);
    cameraPos = matrix->pos;

    first = *param_1;
    second = *param_2;

    firstDelta.x = mdlGetMatrix(first->mdl)->pos.x - cameraPos.x;
    firstDelta.y = mdlGetMatrix(first->mdl)->pos.y - cameraPos.y;
    firstDelta.z = mdlGetMatrix(first->mdl)->pos.z - cameraPos.z;

    secondDelta.x = mdlGetMatrix(second->mdl)->pos.x - cameraPos.x;
    secondDelta.y = mdlGetMatrix(second->mdl)->pos.y - cameraPos.y;
    secondDelta.z = mdlGetMatrix(second->mdl)->pos.z - cameraPos.z;

    firstDistance = RwV3dLength(&firstDelta);
    return (int)(firstDistance - RwV3dLength(&secondDelta));
}

/* Recovered battle-misc harvest: 0x00287B20-0x00287CF0 */
#pragma push
#pragma opt_lifetimes on
#pragma opt_propagation off
// FUN_002891E0


#ifndef PC_BUILD
asm void FUN_002891e0(void)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000882d
  .word 0x0000802d
  .word 0x1000001e
  .word 0x00000000
  .word 0x001020c0
  .word 0x8f83b6fc
  .word 0x00641821
  .word 0x8c720154
  .word 0x10000015
  .word 0x00000000
  .word 0x8e43009c
  .word 0x30630800
  .word 0x10600010
  .word 0x00000000
  .word 0x964509f2
  .word 0x10a0000d
  .word 0x00000000
  .word 0x8f82a850
  .word 0x8c440008
  .word 0x0c0ed530
  .word 0x00000000
  .word 0x8c430028
  .word 0x30630002
  .word 0x14600005
  .word 0x00000000
  .word 0x00111880
  .word 0x007d1821
  .word 0xac620100
  .word 0x26310001
  .word 0x8e520a30
  .word 0x1640ffeb
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030002
  .word 0x1460ffe1
  .word 0x00000000
  .word 0x122000e8
  .word 0x00000000
  .word 0x24100001
  .word 0x0c066158
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a300f0
  .word 0xe7a200f4
  .word 0xe7a100f8
  .word 0xe7a000fc
  .word 0x0c06615c
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a300e0
  .word 0xe7a200e4
  .word 0xe7a100e8
  .word 0xe7a000ec
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a50090
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0xc4430018
  .word 0xc442001c
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe7a300d0
  .word 0xe7a200d4
  .word 0xe7a100d8
  .word 0xe7a000dc
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c420004
  .word 0x24460010
  .word 0x27a50050
  .word 0x24040008
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a40100
  .word 0x0220282d
  .word 0x24060004
  .word 0x3c070029
  .word 0x24e790a0
  .word 0x0c14897e
  .word 0x00000000
  .word 0x24040004
  .word 0x0c0ed754
  .word 0x00000000
  .word 0x0040902d
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x26450100
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x26450110
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x26450120
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x2632ffff
  .word 0x10000068
  .word 0x00000000
  .word 0x00121080
  .word 0x005d1021
  .word 0x8c510100
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x26250190
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x262501a0
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x10400050
  .word 0x00000000
  .word 0x1200003d
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
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040007
  .word 0x24050002
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
  .word 0x24040009
  .word 0x24050002
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
  .word 0x0c0ca534
  .word 0x00000000
  .word 0xa3a0013c
  .word 0xa3a0013d
  .word 0xa3a0013e
  .word 0x240200ff
  .word 0xa3a2013f
  .word 0x27a4013c
  .word 0x0000282d
  .word 0x0c0d6118
  .word 0x00000000
  .word 0x0c0ca554
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e240128
  .word 0x94930418
  .word 0x24050003
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x8e240128
  .word 0x0c0c5e88
  .word 0x00000000
  .word 0x8e240128
  .word 0x0260282d
  .word 0x0c0c648c
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x2652ffff
  .word 0x0641ff98
  .word 0x00000000
  .word 0x0c066158
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a500f0
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a500d0
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x0040202d
  .word 0x27a500e0
  .word 0x0c12512c
  .word 0x00000000
  .word 0x0c066160
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a50050
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0x0c06615c
  .word 0x00000000
  .word 0x8c440004
  .word 0x27a50090
  .word 0x0000302d
  .word 0x0c132dfc
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma pop
#pragma opt_propagation reset
#pragma opt_lifetimes reset

// FUN_00289650


BtlAction* FUN_00289650(u16 mode, u16 charId, void* data)
{
  BtlAction* action;
  BtlUnit* unit;

  action = NULL;
  switch (mode) {
  case 0:
    unit = btlUnitCreate(0);
    action = btlActionCreate();
    btlActionSetUnit(action, unit);
    FUN_0029a2c0(action);
    btlAction00299e30(action);
    FUN_00299d60(action, 1);
    if (charId == 1) {
      action->unk_14 = 5;
      gBtl->actionList.head = action;
    }
    {
      u16 pid;
      pid = *(volatile u16 *)&datPersonaGetByPcId(charId)->id;
      btlUnitInitPersona(unit, pid);
    }
    action->unk_1a |= 0x10;
    break;
  case 1:
    unit = btlUnitCreate(1);
    action = btlActionCreate();
    btlActionSetUnit(action, unit);
    FUN_0029a2c0(action);
    btlAction00299e30(action);
    FUN_00299d60(action, 1);
    break;
  }

  if (data != NULL) {
    unit->datUnit = data;
    FUN_002889c0(unit, charId);
    if (datCalcIsDead(data, 0) != 0) {
      unit->flags3 |= BTLUNIT_FLAG3_DEAD;
    }
  }
  action->unit->flags3 |= BTLUNIT_FLAG3_UNK08;
  action->unk_1a |= 8;
  switch (mode) {
  case 0:
    unit->flags3 |= 0x20;
    unit->flags3 |= 0x40;
    unit->flags3 |= 0x80;
    unit->flags3 |= 0x200;
    break;
  case 1:
    break;
  }
  FUN_002f9c10(action);
  return action;
}
