#include "Kernel/h_memcard.h"
#include "sce/libmc2.h"
#include "sce/libdbc.h"




static SceMc2SocketParam sSocketParam; // 00846eb0
static u_long128 sAddr[SCE_MC2_DMA_BUFFER_MAX] __attribute__((aligned(64))); // 00846b80

static s32 sMemcardAsync;        // 007ce00c
static s32 sMemcardAbort;        // 007ce01c
static s32 sMemcardSeqMode;      // 007ce03c
static s32 sSocketNo;            // 007ce024
static s32 sMemcardMode;         // 007ce038
static s32 sMemcardFile;         // 007ce034
static void* sMemcardBuffer;     // 007ce028
static s32 sMemcardBufferSize;   // 007ce030
static s32* sMemcardResult;      // 007ce02c

/* The memory-card UI and allocator entry points are function tables in the
 * retail image.  Keep these as opaque calls: their concrete implementations
 * live in the SDK/game support objects. */
extern s32 FUN_00514900();
extern s32 FUN_0017d800();
extern s32 FUN_0016f190();
extern s32 FUN_001021c0();
extern u32 FUN_005136f8(u64 param_1, u32 param_2);
extern s32 FUN_005137b8();
extern s32 FUN_00513968();
extern s32 FUN_00513cc8();
#pragma alias FUN_00513cc8_m0 FUN_00513cc8
extern u32 FUN_00513cc8_m0(s32 socket, void* path, u32 size,
                           u32 mode, void* buffer);
extern s32 FUN_00513de8();
extern u32 FUN_00513598(u64 param_1);
extern s64 FUN_005140f8();
extern s32 FUN_005225a8();
extern s32 FUN_00523ac8();
extern s32 FUN_00524270();
extern s32 FUN_00521250();
extern s32 FUN_00521408();
extern s32 FUN_00523e68();
extern u32 D_00960178[];
extern u32 jtbl_0096017C[];
extern s32 D_00846EA0[];
extern s32 D_00846EA4[];
extern s32 D_00846EA8[];
extern u8 D_00846C80[];
extern u32 D_00846C90[];
extern u8 D_00846DA0[];
extern u8 D_005E4810[];
extern u8 D_005E4C10[];
extern u8 D_005E4BB0[];
extern u8 D_005E48A0[];
extern u8 D_005E49D0[];
extern u8 D_005E4870[];
extern u8 D_005E49A0[];
extern u8 D_005E4840[];
extern u8 D_005E4BE0[];
extern u8 D_005E4BF8[];
extern u8 D_005E4BC8[];
extern u8 D_005E46C0[];
extern u8 D_005E4700[];
extern u8 D_005E4730[];
extern u8 D_005E4760[];
extern u8 D_005E4780[];
extern u8 D_005E4784[];
extern u8 D_005E4788[];
extern u8 D_005E4790[];
extern u8 D_005E4810[];
extern u8 D_005E4830[];
extern u8 D_005E4840[];
extern u8 D_005E4870[];
extern u8 D_005E48A0[];
extern u8 D_005E48C8[];
extern u8 D_005E48E0[];
extern u8 D_005E4900[];
extern u8 D_005E4920[];
extern u8 D_005E4940[];
extern u8 D_005E4960[];
extern u8 D_005E4980[];
extern u8 D_005E49A0[];
extern u8 D_005E49D0[];
extern u8 D_005E4A00[];
extern u8 D_005E4A20[];
extern u8 D_005E4A40[];
extern u8 D_005E4A60[];
extern u8 D_005E4A80[];
extern u8 D_005E4AA0[];
extern u8 D_005E4AC0[];
extern u8 D_005E4AE0[];
extern u8 D_005E4B00[];
extern u8 D_005E4B20[];
extern u8 D_005E4B40[];
extern u8 D_005E4B50[];
extern u8 D_005E4B80[];
extern u8 D_007CC0C8[];
extern u8 D_00846780[];
extern u8 D_00846790[];
extern u8 D_00846800[];
extern u8 D_00846830[];
extern u8 D_00846840[];
extern u8 D_00846884[];
extern u8 D_008468C4[];
extern u8 D_00846904[];
extern u16 D_00846786;
extern s32 D_0084678C;

#define MEMCARD_ALLOC(size, flags) \
    (*(void* (**)(u32, u32))D_00960178)((size), (flags))
#define MEMCARD_FREE(memory) \
    (*(void (**)(void*))jtbl_0096017C)((memory))

/* The save-slot scanner has a separate work area in the original small-data
 * section.  These names describe the state represented by the GP-relative
 * fields used by the retail routines. */
static s32 sSlotScanMode;    // 007ce010
static s32 sSlotScanResult;  // 007ce014
static s32 sSlotScanDone;    // 007ce018
static u32* sSlotScanTable;  // 007ce020

// FUN_0018f100
void H_Memcard_Init()
{
    sceDbcInit();
    sceMc2Init(0);

    sSocketParam.option = SCE_MC2_TYPE_PS2;
    sSocketParam.port = SCE_MC2_PORT_1;
    sSocketParam.slot = 0;

    sSocketNo = sceMc2CreateSocket(&sSocketParam, sAddr);
}

// FUN_0018f170
void func_0018f170(s32 file, void* buffer, s32 size)
{
    sMemcardMode = 0;
    sMemcardAsync = 0;
    sMemcardFile = file;
    sMemcardBuffer = buffer;
    sMemcardBufferSize = size;
    sMemcardSeqMode = 0;
}

// FUN_0018f190 Poll the memory-card socket and normalize errors.
s32 func_0018f190(s32* mode, u32* result, s32* error)
{
    s32 status;

    status = FUN_00514900();
    if (status != 1)
    {
        if (status != 0)
        {
            if (status == -1)
            {
                goto minus_return;
            }
            return status;

minus_return:
            return -1;
        }
        return 0;
    }

    switch (*mode)
    {
        case 5:
        case 6:
            if ((s32)*result < 0)
            {
                *error = 0;
                if ((s32)*result < 0)
                {
                    *result &= 0xffff;
                }
            }
            else
            {
                *error = 1;
            }
            break;

        default:
            if (*result == 0)
            {
                *error = 1;
            }
            if ((s32)*result < 0)
            {
                *result &= 0xffff;
            }
            break;
    }

    return 1;
}

// FUN_0018f2a0
void func_0018f2a0(void)
{
    sMemcardSeqMode = 9;
}

// FUN_0018f2b0
void func_0018f2b0(void)
{
    sMemcardSeqMode = 4;
}

// FUN_0018f2c0. Advance the save/load card-dialog state machine.
#ifndef PC_BUILD
asm s32 func_0018f2c0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0x3c04005e
  .word 0x24844810
  .word 0x8f85b34c
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8f82b34c
  .word 0x2c41000e
  .word 0x102004a0
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246369b0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xafa0001c
  .word 0xafa00018
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1443048f
  .word 0x00000000
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56ea0
  .word 0x0c144dbe
  .word 0x00000000
  .word 0x24020001
  .word 0xaf82b34c
  .word 0x10000486
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443047e
  .word 0x00000000
  .word 0x8fa20014
  .word 0x14400028
  .word 0x00000000
  .word 0x8fa50018
  .word 0x2402002f
  .word 0x10a2001b
  .word 0x00000000
  .word 0x34029001
  .word 0x10a20015
  .word 0x00000000
  .word 0x24020013
  .word 0x10a2000f
  .word 0x00000000
  .word 0x2402006f
  .word 0x10a20009
  .word 0x00000000
  .word 0x34029003
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000467
  .word 0x00000000
  .word 0x2402fffb
  .word 0x10000464
  .word 0x00000000
  .word 0x2402fffb
  .word 0x10000461
  .word 0x00000000
  .word 0x2402fff9
  .word 0x1000045e
  .word 0x00000000
  .word 0x24020003
  .word 0xaf82b34c
  .word 0x24020002
  .word 0x10000459
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844830
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c020084
  .word 0x8c436ea0
  .word 0x24020002
  .word 0x10620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000044d
  .word 0x00000000
  .word 0x3c030084
  .word 0x8c636ea4
  .word 0x14600005
  .word 0x00000000
  .word 0x24030003
  .word 0xaf83b34c
  .word 0x10000445
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54840
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54870
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a548a0
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56da0
  .word 0x3c060084
  .word 0x24c66c80
  .word 0x0c144dee
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844830
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020002
  .word 0xaf82b34c
  .word 0x1000040f
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430027
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x8fa20014
  .word 0x14400024
  .word 0x00000000
  .word 0x8fa30018
  .word 0x2402002f
  .word 0x10620020
  .word 0x00000000
  .word 0x34029001
  .word 0x10620015
  .word 0x00000000
  .word 0x24020013
  .word 0x1062000f
  .word 0x00000000
  .word 0x2402006f
  .word 0x10620009
  .word 0x00000000
  .word 0x34029003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100003eb
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100003e8
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100003e5
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100003e2
  .word 0x00000000
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56ea0
  .word 0x0c144dbe
  .word 0x00000000
  .word 0x24020002
  .word 0x100003da
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1043001d
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x100003cc
  .word 0x00000000
  .word 0x8fa30018
  .word 0x146003c9
  .word 0x00000000
  .word 0x2402002f
  .word 0x106203c6
  .word 0x00000000
  .word 0x34029001
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020013
  .word 0x10620009
  .word 0x00000000
  .word 0x2402006f
  .word 0x10620006
  .word 0x00000000
  .word 0x34029003
  .word 0x10620003
  .word 0x00000000
  .word 0x100003b8
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100003b6
  .word 0x00000000
  .word 0x8f84b334
  .word 0x0c144d66
  .word 0x00000000
  .word 0x24020005
  .word 0xaf82b34c
  .word 0x100003ae
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10430011
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x100003a1
  .word 0x00000000
  .word 0x8fa20014
  .word 0x10400006
  .word 0x00000000
  .word 0x24020006
  .word 0xaf82b34c
  .word 0x24020004
  .word 0x1000039a
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000397
  .word 0x00000000
  .word 0x24020006
  .word 0xaf82b34c
  .word 0x10000392
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443038a
  .word 0x00000000
  .word 0x8fa20014
  .word 0x1440002c
  .word 0x00000000
  .word 0x8fa50018
  .word 0x24020002
  .word 0x10a2001b
  .word 0x00000000
  .word 0x24020013
  .word 0x10a20015
  .word 0x00000000
  .word 0x24020016
  .word 0x10a2000f
  .word 0x00000000
  .word 0x2402006f
  .word 0x10a20009
  .word 0x00000000
  .word 0x34029003
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x2402fffb
  .word 0x10000373
  .word 0x00000000
  .word 0x2402fffb
  .word 0x10000370
  .word 0x00000000
  .word 0x2402fffb
  .word 0x1000036d
  .word 0x00000000
  .word 0x2402fffb
  .word 0x1000036a
  .word 0x00000000
  .word 0x24020006
  .word 0xaf82b34c
  .word 0x10000365
  .word 0x00000000
  .word 0x3c04005e
  .word 0x248448c8
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020006
  .word 0xaf82b34c
  .word 0x2402fff9
  .word 0x1000035d
  .word 0x00000000
  .word 0x24020008
  .word 0xaf82b34c
  .word 0x0060102d
  .word 0x10000358
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1043002a
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x1000002a
  .word 0x00000000
  .word 0x8fa20014
  .word 0x14400027
  .word 0x00000000
  .word 0x8fa30018
  .word 0x2402002f
  .word 0x1062001b
  .word 0x00000000
  .word 0x34029001
  .word 0x10620015
  .word 0x00000000
  .word 0x24020013
  .word 0x1062000f
  .word 0x00000000
  .word 0x2402006f
  .word 0x10620009
  .word 0x00000000
  .word 0x34029003
  .word 0x10620003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000333
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000330
  .word 0x00000000
  .word 0x2402fffd
  .word 0x1000032d
  .word 0x00000000
  .word 0x2402fffd
  .word 0x1000032a
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000327
  .word 0x00000000
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56ea0
  .word 0x0c144dbe
  .word 0x00000000
  .word 0x24020001
  .word 0x1000031f
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x1043002e
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000311
  .word 0x00000000
  .word 0x8fa20014
  .word 0x10400005
  .word 0x00000000
  .word 0x24020006
  .word 0xaf82b34c
  .word 0x1000030a
  .word 0x00000000
  .word 0x8fa30018
  .word 0x2402002f
  .word 0x1062001b
  .word 0x00000000
  .word 0x34029001
  .word 0x10620015
  .word 0x00000000
  .word 0x24020013
  .word 0x1062000f
  .word 0x00000000
  .word 0x2402006f
  .word 0x10620009
  .word 0x00000000
  .word 0x34029003
  .word 0x10620003
  .word 0x00000000
  .word 0x100002f8
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100002f6
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100002f3
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100002f0
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100002ed
  .word 0x00000000
  .word 0x2402fffd
  .word 0x100002ea
  .word 0x00000000
  .word 0x24020006
  .word 0xaf82b34c
  .word 0x100002e5
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a548e0
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54900
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54920
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54940
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54960
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56da0
  .word 0x0c14503e
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844980
  .word 0x0040282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24020007
  .word 0xaf82b34c
  .word 0x24020005
  .word 0x1000029b
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430292
  .word 0x00000000
  .word 0x8fa20014
  .word 0x10400005
  .word 0x00000000
  .word 0x2402000a
  .word 0xaf82b34c
  .word 0x1000028b
  .word 0x00000000
  .word 0x8fa30018
  .word 0x2402001c
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020011
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x2402000a
  .word 0xaf82b34c
  .word 0x1000027e
  .word 0x00000000
  .word 0x2402fffa
  .word 0x1000027c
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000279
  .word 0x00000000
  .word 0x8f83b348
  .word 0x24020002
  .word 0x10620089
  .word 0x00000000
  .word 0x24020001
  .word 0x10620048
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000be
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54840
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x100000b1
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040001a
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54870
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000009e
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a549a0
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000094
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a548a0
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000085
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a549d0
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a00
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000006f
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a20
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a40
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a60
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000046
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a80
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54aa0
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54ac0
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54ae0
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54b00
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54b20
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56da0
  .word 0x0c144f7a
  .word 0x00000000
  .word 0x2402000b
  .word 0xaf82b34c
  .word 0x100001a7
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x24030001
  .word 0x1443019f
  .word 0x00000000
  .word 0x8fa20014
  .word 0x10400005
  .word 0x00000000
  .word 0x2402000c
  .word 0xaf82b34c
  .word 0x10000198
  .word 0x00000000
  .word 0x8fa30018
  .word 0x2402001c
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020011
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x2402000c
  .word 0xaf82b34c
  .word 0x1000018b
  .word 0x00000000
  .word 0x2402fffa
  .word 0x10000189
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000186
  .word 0x00000000
  .word 0x8f83b348
  .word 0x24020002
  .word 0x1062009e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620050
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000014b
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54840
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1040001a
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54870
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a549a0
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a548a0
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x8f86b344
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a549d0
  .word 0x00c0382d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x8f88b340
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56da0
  .word 0x8f86b338
  .word 0x0000382d
  .word 0x0c144f32
  .word 0x00000000
  .word 0x10000100
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a00
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a20
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a40
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a60
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54a80
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844b40
  .word 0x27a50010
  .word 0x0c040870
  .word 0x00000000
  .word 0x8fa80010
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56da0
  .word 0x0040302d
  .word 0x0000382d
  .word 0x0c144f32
  .word 0x00000000
  .word 0x100000b5
  .word 0x00000000
  .word 0x8f82b31c
  .word 0x1040000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54aa0
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400018
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54ac0
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54ae0
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x24041422
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54b00
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846da0
  .word 0x3c05005e
  .word 0x24a54b20
  .word 0x8f86b344
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846780
  .word 0x0000282d
  .word 0x240603c4
  .word 0x0c148502
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846780
  .word 0x278593d8
  .word 0x0c14909c
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400018
  .word 0x00000000
  .word 0x8f82b344
  .word 0x0440002a
  .word 0x00000000
  .word 0x28410010
  .word 0x10200027
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846840
  .word 0x3c05005e
  .word 0x24a54b50
  .word 0x0c14909c
  .word 0x00000000
  .word 0x8f82b344
  .word 0x000218c0
  .word 0x3c02005e
  .word 0x24424790
  .word 0x00432821
  .word 0x3c040084
  .word 0x24846840
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x8f82b344
  .word 0x04400013
  .word 0x00000000
  .word 0x28410010
  .word 0x10200010
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846840
  .word 0x3c05005e
  .word 0x24a54b80
  .word 0x0c14909c
  .word 0x00000000
  .word 0x8f82b344
  .word 0x000218c0
  .word 0x3c02005e
  .word 0x24424790
  .word 0x00432821
  .word 0x3c040084
  .word 0x24846840
  .word 0x0c148f9a
  .word 0x00000000
  .word 0x24030012
  .word 0x3c020084
  .word 0xa4436786
  .word 0x24030060
  .word 0x3c020084
  .word 0xac43678c
  .word 0x3c040084
  .word 0x24846790
  .word 0x3c05005e
  .word 0x24a546c0
  .word 0x24060040
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c040084
  .word 0x248467d0
  .word 0x3c05005e
  .word 0x24a54700
  .word 0x24060030
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846800
  .word 0x3c05005e
  .word 0x24a54730
  .word 0x24060030
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846830
  .word 0x3c05005e
  .word 0x24a54760
  .word 0x24060010
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846884
  .word 0x3c02005e
  .word 0x8c454780
  .word 0x0c14909c
  .word 0x00000000
  .word 0x3c040084
  .word 0x248468c4
  .word 0x3c02005e
  .word 0x8c454784
  .word 0x0c14909c
  .word 0x00000000
  .word 0x3c040084
  .word 0x24846904
  .word 0x3c02005e
  .word 0x8c454788
  .word 0x0c14909c
  .word 0x00000000
  .word 0x8f84b334
  .word 0x3c050084
  .word 0x24a56da0
  .word 0x3c060084
  .word 0x24c66780
  .word 0x0000382d
  .word 0x240803c4
  .word 0x0c144f32
  .word 0x00000000
  .word 0x2402000d
  .word 0xaf82b34c
  .word 0x1000002c
  .word 0x00000000
  .word 0x27a4001c
  .word 0x27a50018
  .word 0x27a60014
  .word 0x0c063c64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430024
  .word 0x00000000
  .word 0x8fa20014
  .word 0x1040000e
  .word 0x00000000
  .word 0x8f83b348
  .word 0x24020002
  .word 0x14620004
  .word 0x00000000
  .word 0x24020064
  .word 0x1000001b
  .word 0x00000000
  .word 0x24620001
  .word 0xaf82b348
  .word 0x2402000a
  .word 0xaf82b34c
  .word 0x10000014
  .word 0x00000000
  .word 0x8fa30018
  .word 0x2402001c
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020011
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x2402000c
  .word 0xaf82b34c
  .word 0x10000007
  .word 0x00000000
  .word 0x2402fffa
  .word 0x10000005
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00190580
void func_00190580(void)
{
    sMemcardAbort = 1;
}

// FUN_00190590 Poll cancellation/error status for a transaction.
s32 func_00190590(void)
{
    s32 status;
    s32 cardMode;
    s32 cardCode;
    s32 cardError;

    if (sMemcardAbort != 0)
    {
        status = func_0018f190(&cardMode, (u32*)&cardCode, &cardError);
        if (status == -1)
        {
            sMemcardAbort = 0;
            FUN_005136f8(sSocketNo, (u32)D_00846EA0);
        }
    }
    else
    {
        status = func_0018f190(&cardMode, (u32*)&cardCode, &cardError);
        if (status == 1)
        {
            FUN_005136f8(sSocketNo, (u32)D_00846EA0);
            if (cardError == 0)
            {
                switch (cardCode)
                {
                    case 0x9003:
                        goto card_error_9003;
                    case 0x6f:
                        goto card_error_6f;
                    case 0x13:
                        goto card_error_13;
                    case 0x9001:
                        goto card_error_9001;
                    case 0x2f:
                        goto card_error_2f;
                    default:
                        goto card_state;
                }
        }
            goto card_state;
    }
        }
    goto card_done;

card_error_9003:
    return 3;
card_error_6f:
    return -5;
card_error_13:
    return -5;
card_error_9001:
    return -4;
card_error_2f:
    return -2;

card_state:
    if (*D_00846EA0 != 2)
    {
        return -1;
    }
    if (*D_00846EA4 == 0)
    {
        return -2;
    }
    goto card_done;

card_done:
    return 0;
}

// FUN_00190700
void func_00190700(s32 file, void* buffer, s32* result)
{
    sMemcardSeqMode = 0;
    sMemcardMode = 0;
    sMemcardFile = file;
    sMemcardBuffer = buffer;
    sMemcardResult = result;
}

// FUN_00190720 Advance the load transaction state machine.
s32 func_00190720(void)
{
    s32 cardMode;
    s32 cardCode;
    s32 cardError;
    FUN_005225a8(D_005E4810, sMemcardSeqMode);

    switch (sMemcardSeqMode)
    {
        case 0:
            goto state0;
        case 1:
            goto state1;
        case 2:
            goto state2;
        case 3:
            goto state3;
        default:
            goto done;
    }

state0:
    cardMode = 0;
    cardCode = 0;
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == -1)
    {
        FUN_005136f8(sSocketNo, (u32)D_00846EA0);
        sMemcardSeqMode = 1;
    }
    goto done;

state1:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == 1)
    {
        if (cardError == 0)
        {
            switch (cardCode)
            {
                case 0x9003:
                    goto state1_error3;
                case 0x6f:
                    goto state1_error5b;
                case 0x13:
                    goto state1_error5a;
                case 0x9001:
                    goto state1_error4;
                case 0x2f:
                    goto state1_error2;
                default:
                    break;
            }
        }
        goto state1_continue;
state1_error3:
        return -3;
state1_error5b:
        return -5;
state1_error5a:
        return -5;
state1_error4:
        return -4;
state1_error2:
        return -2;
state1_continue:
        if (*D_00846EA0 != 2)
        {
            return -1;
        }
        if (*D_00846EA4 == 0)
        {
            return -2;
        }
        if (sMemcardAsync != 0)
        {
            FUN_00523ac8(D_00846DA0, D_005E4840, sMemcardFile, sMemcardFile);
        }
        else
        {
            if (FUN_0017d800() != 0)
            {
                if (FUN_0016f190(0x1422) == 0)
                {
                    FUN_00523ac8(D_00846DA0, D_005E4870, sMemcardFile, sMemcardFile);
                }
                else
                {
                    FUN_00523ac8(D_00846DA0, D_005E49A0, sMemcardFile, sMemcardFile);
                }
            }
            else
            {
                if (FUN_0016f190(0x1422) == 0)
                {
                    FUN_00523ac8(D_00846DA0, D_005E48A0, sMemcardFile, sMemcardFile);
                }
                else
                {
                    FUN_00523ac8(D_00846DA0, D_005E49D0, sMemcardFile, sMemcardFile);
                }
            }
        }
        FUN_005137b8(sSocketNo, D_00846DA0, D_00846C80);
        sMemcardSeqMode = 2;
    }
    goto done;

state2:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == 1)
    {
        if (cardError == 0)
        {
            switch (cardCode)
            {
                case 0x6f:
                    goto state2_error5c;
                case 0x16:
                    goto state2_error5b;
                case 2:
                    goto state2_error8;
                case 0x13:
                    goto state2_error5a;
                default:
                    break;
            }
        }
        goto state2_continue;
state2_error5c:
        return -5;
state2_error5b:
        return -5;
state2_error8:
        return -8;
state2_error5a:
        return -5;
state2_continue:

        if (sMemcardAsync != 0)
        {
            FUN_00523ac8(D_00846DA0, D_005E4840, sMemcardFile, sMemcardFile);
        }
        else
        {
            if (FUN_0017d800() != 0)
            {
                if (FUN_0016f190(0x1422) == 0)
                {
                    FUN_00523ac8(D_00846DA0, D_005E4870, sMemcardFile, sMemcardFile);
                }
                else
                {
                    FUN_00523ac8(D_00846DA0, D_005E49A0, sMemcardFile, sMemcardFile);
                }
            }
            else
            {
                if (FUN_0016f190(0x1422) == 0)
                {
                    FUN_00523ac8(D_00846DA0, D_005E48A0, sMemcardFile, sMemcardFile);
                }
                else
                {
                    FUN_00523ac8(D_00846DA0, D_005E49D0, sMemcardFile, sMemcardFile);
                }
            }
        }
        FUN_00513968(sSocketNo, D_00846DA0, sMemcardBuffer, 0, D_00846C90[0]);
        sMemcardSeqMode = 3;
    }
    goto done;

state3:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == 1)
    {
        if (cardError != 0)
        {
            *sMemcardResult = cardCode;
        }
        else
        {
            switch (cardCode)
            {
                case 0x6f:
                    goto state3_error5e;
                case 0x16:
                    goto state3_error5d;
                case 0xd:
                    goto state3_error5c;
                case 2:
                    goto state3_error5b;
                case 0x13:
                    goto state3_error5a;
                default:
                    break;
            }
        }
        goto state3_continue;
state3_error5e:
        return -3;
state3_error5d:
        return -3;
state3_error5c:
        return -3;
state3_error5b:
        return -3;
state3_error5a:
        return -3;
state3_continue:
        FUN_005225a8(D_005E4BB0, cardCode);
        return 100;
    }

done:
    return 0;
}

// FUN_00190cb0
void func_00190cb0(u32* table)
{
    sMemcardSeqMode = 0;
    sSlotScanTable = table;
    sMemcardMode = 0;
    sMemcardFile = 0;
}

// FUN_00190cd0
s32 func_00190cd0(void)
{
    s32 cardMode;
    s32 cardCode;
    s32 cardError;
    u32 checksum;
    u32 i;
    u8* recordData;

    switch (sMemcardSeqMode)
    {
        case 0:
            goto state0;
        case 1:
            goto state1;
        case 2:
            goto state2;
        case 3:
            goto state3;
        default:
            goto done;
    }

state0:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == -1)
    {
        FUN_005225a8(D_005E4BC8, FUN_005136f8(sSocketNo, (u32)D_00846EA0));
        sMemcardSeqMode = 1;
    }
    goto done;

state1:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) != 1)
    {
        goto done;
    }
    if (cardError != 0)
    {
        goto state1_card_error;
    }
    switch (cardCode)
    {
        case 0x9003:
            goto state1_card_error;
        case 0x6f:
            goto state1_error6f;
        case 0x13:
            goto state1_error13;
        case 0x9001:
            goto state1_error9001;
        case 0x2f:
            goto state1_error2f;
        default:
            goto state1_card_error;
    }

state1_error6f:
    return -5;
state1_error13:
    return -5;
state1_error9001:
    return -4;
state1_error2f:
    return -2;

state1_card_error:
    if (*D_00846EA0 != 2)
    {
        return -1;
    }
    if (*D_00846EA4 == 0)
    {
        return -2;
    }
    sMemcardSeqMode = 2;
    goto done;

state2:
    sMemcardBuffer = MEMCARD_ALLOC(0x38, 0x40000);
    if (sMemcardAsync != 0)
    {
        FUN_00523ac8(D_00846DA0, D_005E4840, sMemcardFile, sMemcardFile);
    }
    else
    {
        if (FUN_0017d800() != 0)
        {
            if (FUN_0016f190(0x1422) == 0)
            {
                FUN_00523ac8(D_00846DA0, D_005E4870, sMemcardFile, sMemcardFile);
            }
            else
            {
                FUN_00523ac8(D_00846DA0, D_005E49A0, sMemcardFile, sMemcardFile);
            }
        }
        else
        {
            if (FUN_0016f190(0x1422) == 0)
            {
                FUN_00523ac8(D_00846DA0, D_005E48A0, sMemcardFile, sMemcardFile);
            }
            else
            {
                FUN_00523ac8(D_00846DA0, D_005E49D0, sMemcardFile, sMemcardFile);
            }
        }
    }
    FUN_00513968(sSocketNo, D_00846DA0, sMemcardBuffer, 0, 0x38);
    FUN_005225a8(D_005E4BE0, D_00846DA0, 0x38);
    sMemcardSeqMode = 3;
    goto done;

state3:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) != 1)
    {
        goto done;
    }
    FUN_005225a8(D_005E4BF8, cardCode);
    if (cardError == 0)
    {
        switch (cardCode)
        {
            case 0x6f:
                goto state3_error6f;
            case 0x16:
                goto state3_error16;
            case 0xd:
                goto state3_errord;
            case 2:
                goto state3_error2;
            case 0x13:
                goto state3_error13;
            default:
                goto state3_after;
        }

state3_error6f:
        MEMCARD_FREE(sMemcardBuffer);
        return -3;
state3_error16:
        MEMCARD_FREE(sMemcardBuffer);
        return -3;
state3_errord:
        MEMCARD_FREE(sMemcardBuffer);
        return -3;
state3_error2:
        MEMCARD_FREE(sMemcardBuffer);
        sSlotScanTable[sMemcardFile] = 0;
        goto state3_after;
state3_error13:
        MEMCARD_FREE(sMemcardBuffer);
        return -3;
    }
    FUN_00521250((u8*)sSlotScanTable + sMemcardFile * 0x34 + 0x40,
                 (u8*)sMemcardBuffer + 4, 0x34);
    MEMCARD_FREE(sMemcardBuffer);
    if (cardCode >= 0)
    {
        recordData = (u8*)sSlotScanTable + sMemcardFile * 0x34 + 0x40;
        checksum = 0;
        for (i = 0; i < 0x32; i++)
        {
            checksum = (u16)((checksum + recordData[i]) & 0xff);
        }
        if (*(u16*)(recordData + 0x32) != (checksum & 0xff))
        {
            FUN_00521408(recordData, 0, 0x34);
        }
        sSlotScanTable[sMemcardFile] = 1;
    }
    else
    {
        sSlotScanTable[sMemcardFile] = 0;
    }

state3_after:
    sMemcardFile++;
    if (sMemcardFile == 0x10)
    {
        return 100;
    }
    sMemcardSeqMode = 2;
    goto done;

done:
    return 0;
}

// FUN_00191240
void func_00191240(void)
{
    sMemcardSeqMode = 0;
    sMemcardMode = 0;
    sMemcardFile = 0;
}

// FUN_00191260. Scan slot records until a valid card is found.
s32 func_00191260(void)
{
    s32 cardMode;
    s32 cardCode;
    s32 cardError;

    FUN_005225a8(D_005E4C10, sMemcardSeqMode);

    switch (sMemcardSeqMode)
    {
        case 0:
            goto state0;
        case 1:
            goto state1;
        case 2:
            goto state2;
        case 3:
            goto state3;
        default:
            goto done;
    }

state0:
    sSlotScanResult = -1;
    sSlotScanDone = 1;
    cardMode = 0;
    cardCode = 0;
    sSlotScanMode = 0;
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == -1)
    {
        FUN_005136f8(sSocketNo, (u32)D_00846EA0);
        sMemcardSeqMode = 1;
    }
    goto done;

state1:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == 1)
    {
        if (cardError == 0)
        {
            if (cardCode == 0x2f)
            {
                goto state1_error64;
            }
            if (cardCode == 0x9001)
            {
                goto state1_error4;
            }
            if (cardCode == 0x9003)
            {
                goto state1_error3;
            }
            if (cardCode == 0x13)
            {
                goto state1_error5a;
            }
            switch (cardCode)
            {
                case 0x6f:
                    goto state1_error5b;
                default:
                    break;
            }
            goto state1_error9;
        }
        goto state1_card_error;
    }
    goto done;
 

state1_error5b:
    return -5;
state1_error5a:
    return -5;
state1_error3:
    FUN_005136f8(sSocketNo, (u32)D_00846EA0);
    goto done;
state1_error4:
    return -4;
state1_error64:
    return 100;
state1_error9:
    return -9;

state1_card_error:
    if (*D_00846EA0 == 2)
    {
        if (*D_00846EA8 >= 0x4e)
        {
            if (sSlotScanDone != 0)
            {
                return 100;
            }
            sSlotScanResult = 100;
            sMemcardSeqMode = 2;
            goto done;
        }
        sMemcardSeqMode = 2;
        goto done;
    }
    return -1;

state2:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == -1)
    {
        if (sMemcardAsync != 0)
        {
            FUN_00523ac8(D_00846DA0, D_005E4840, sMemcardFile, sMemcardFile);
        }
        else
        {
            if (sSlotScanMode == 0)
            {
                FUN_00523ac8(D_00846DA0, D_005E4870, sMemcardFile, sMemcardFile);
            }
            else
            {
                FUN_00523ac8(D_00846DA0, D_005E48A0, sMemcardFile, sMemcardFile);
            }
        }
        FUN_005137b8(sSocketNo, D_00846DA0, D_00846C80);
        sMemcardSeqMode = 3;
    }
    goto done;

state3:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == 1)
    {
        if (cardError != 0)
        {
            goto state3_error64;
        }
        if (cardCode == 2)
        {
            goto state3_card2;
        }
        if (cardCode == 0x13)
        {
            goto state3_error5a;
        }
        if (cardCode == 0x16)
        {
            goto state3_error5b;
        }
        if (cardCode == 0x6f)
        {
            goto state3_error5c;
        }
        switch (cardCode)
        {
            case 0x9003:
                goto state3_error5d;
            default:
                break;
        }
    }
    goto done;

state3_error5d:
    return -5;
state3_error5c:
    return -5;
state3_error5b:
    return -5;
state3_error5a:
    return -5;

state3_card2:
    sMemcardFile++;
    if (sMemcardFile != 0x10)
    {
        goto state3_card2_continue;
    }
    if (sSlotScanMode == 1)
    {
        if (sSlotScanResult != 100)
        {
            return -6;
        }
        return 100;
    }
    sMemcardFile = 0;
    sSlotScanMode = 1;
state3_card2_continue:
    sMemcardSeqMode = 2;
    goto done;

state3_error64:
    sSlotScanDone = 1;
    return 100;

done:
    return 0;
}

// FUN_00191640
void func_00191640(s32 slot)
{
    sMemcardSeqMode = 0;
    sMemcardMode = 0;
    sMemcardFile = slot;
}

// FUN_00191660. Scan one slot and report card status.
s32 func_00191660(void)
{
    s32 cardMode;
    s32 cardCode;
    s32 cardError;

    FUN_005225a8(D_005E4C10, sMemcardSeqMode);

    switch (sMemcardSeqMode)
    {
        case 0:
            goto state0;
        case 1:
            goto state1;
        case 2:
            goto state2;
        case 3:
            goto state3;
        default:
            goto done;
    }

state0:
    cardMode = 0;
    cardCode = 0;
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == -1)
    {
        FUN_005136f8(sSocketNo, (u32)D_00846EA0);
        sMemcardSeqMode = 1;
    }
    goto done;

state1:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == 1)
    {
        if (cardError == 0)
        {
            if (cardCode == 0x2f)
            {
                goto state1_error64;
            }
            if (cardCode == 0x9001)
            {
                goto state1_error4;
            }
            if (cardCode == 0x9003)
            {
                goto state1_error3;
            }
            if (cardCode == 0x13)
            {
                goto state1_error5a;
            }
            switch (cardCode)
            {
                case 0x6f:
                    goto state1_error5b;
                default:
                    break;
            }
            goto state1_error9;
        }
        goto state1_card_error;
    }
    goto done;

state1_error5b:
    return -5;
state1_error5a:
    return -5;
state1_error3:
    FUN_005136f8(sSocketNo, (u32)D_00846EA0);
    goto done;
state1_error4:
    return -4;
state1_error64:
    return 100;
state1_error9:
    return -9;

state1_card_error:
    if (*D_00846EA0 != 2)
    {
        goto state1_card_error_bad;
    }
    if (*D_00846EA8 >= 0x4e)
    {
        return 100;
    }
    sMemcardSeqMode = 2;
    goto done;
state1_card_error_bad:
    return -1;

state2:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == -1)
    {
        if (sMemcardAsync != 0)
        {
            FUN_00523ac8(D_00846DA0, D_005E4840, sMemcardFile, sMemcardFile);
        }
        else
        {
            if (FUN_0017d800() != 0)
            {
                FUN_00523ac8(D_00846DA0, D_005E48A0, sMemcardFile, sMemcardFile);
            }
            else
            {
                FUN_00523ac8(D_00846DA0, D_005E4870, sMemcardFile, sMemcardFile);
            }
        }
        FUN_005137b8(sSocketNo, D_00846DA0, D_00846C80);
        sMemcardSeqMode = 3;
    }
    goto done;

state3:
    if (func_0018f190(&cardMode, (u32*)&cardCode, &cardError) == 1)
    {
        if (cardError != 0)
        {
            goto state3_error64;
        }
        if (cardCode == 2)
        {
            goto state3_error6;
        }
        if (cardCode == 0x13)
        {
            goto state3_error5a;
        }
        if (cardCode == 0x16)
        {
            goto state3_error5b;
        }
        if (cardCode == 0x6f)
        {
            goto state3_error5c;
        }
        switch (cardCode)
        {
            case 0x9003:
                goto state3_error5d;
            default:
                break;
        }
    }
    goto done;

state3_error5d:
    return -5;
state3_error5c:
    return -5;
state3_error5b:
    return -5;
state3_error5a:
    return -5;
state3_error6:
    return -6;
state3_error64:
    return 100;

done:
    return 0;
}



#include "Kernel/h_malloc.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "h_cdvd.h"
#include "Kosaka/k_assert.h"
#include "temporary.h"

extern s32 func_0050d3a0(void);
extern void func_0050d3f0(void);
extern void kwlnTaskPrintTrees(void);

#define H_FREE_ERROR ((HFreeCallback*)0x0096017c)

HHeapAlloc* gHeapAllocs; // 007ce04c
u32 gHeapEnd;            // 007ce048
u32 gHeapAllocCount;     // 007ce044
u32 gHeapCursor;         // 007ce040



// FUN_001919c0. Initialize the retail heap allocation table.
void H_Malloc_Init(void* table, u32 size)
{
    u32 i;
    HHeapAlloc* entries;

    gHeapAllocs = (HHeapAlloc*)table;
    gHeapEnd = (u32)table + size;
    gHeapAllocCount = 500;
    entries = (HHeapAlloc*)table;
    for (i = 0; i < gHeapAllocCount; i++)
    {
        entries[i].memory = NULL;
        entries[i].size = 0;
    }
    gHeapCursor = 0;
}
typedef void* (*HmallocAllocator)(u32, u32, u32);
typedef void (*HmallocReleaser)(void*);
typedef s32 (*HmallocStepCallback)(void);

extern u8 D_00846F00[];
extern u32 D_00960184[];
#pragma alias D_00960184_abs D_00960184
extern u8 D_00960184_abs[];
#pragma alias jtbl_0096017C_abs jtbl_0096017C
extern u8 jtbl_0096017C_abs[];
extern const char D_005E4C80[];
extern const char D_005E4C60[];
extern const char D_005E4CA0[];
extern const char D_005E4CC0[];
extern u8 D_0083BB30[];
#pragma alias D_0083BB30_abs D_0083BB30
extern u8 D_0083BB30_abs[];
extern u8 D_0083AB30[];
#pragma alias D_0083AB30_abs D_0083AB30
extern u8 D_0083AB30_abs[];
extern const char D_005E4CE0[];
extern const f32 D_005E4D00;
extern const f32 D_005E4D04;
extern const f32 D_005E4D08;
extern const f32 D_005E4D0C;
extern const f32 D_005E4D20;
extern const f32 D_005E4D24;
extern const f32 D_005E4D28;
extern const f32 D_005E4D2C;
extern const char D_005E4D10[];
extern const char D_005E4D30[];
extern const char D_005E4D60[];
extern const char D_005E4E20[];
extern const char D_005E4E38[];
extern const char D_005E4E48[];
extern const char D_005E4E58[];
extern const char D_005E4E70[];
extern const u16 D_007E094E;
extern const u16 D_007E0952;
#define HMALLOC_ENGINE_ALLOC(count, size, flags) \
    (*(HmallocAllocator*)D_00960184_abs)((count), (size), (flags))
#define HMALLOC_ENGINE_FREE(memory) \
    (*(HmallocReleaser*)jtbl_0096017C_abs)((memory))
#define HMALLOC_STEP_TABLE ((HmallocStepCallback*)0x005e4d00)
#define HMALLOC_GLOBAL_FLOAT_VALUES ((const f32*)0x007cc0d8)
#define HMALLOC_GLOBAL_IMAGE_VALUES ((const f32*)0x007cc0e0)

extern void func_004f1e20(u64 source, void* bytes, u16* header);
extern void func_004d5000(void* packet, u32 size);
extern void func_0016cfe0(s32 group, s32 value);
extern void func_0016d090(s32 group, s32 value);
extern void func_0016d160(s32 group, s32 value);
extern void func_0016f1f0(u32 id, s32 enabled);
extern void func_00521408(void* dst, u32 value, u32 size);
extern void func_00176680(void* dst, u16 id);
extern void func_0017cd30(void* entry);
extern s32 func_001016b0(void* resource);
extern void func_00521250(void* allocator, u32 width, u32 height);
extern void func_0016c2f0(void);
extern void* func_00100d80(void* descriptor, s32 flags);
extern void func_0017d7f0(s32 mode);

static u32 sHmallocInputWords[0x100];
static u32 sHmallocInputBits[0x20];
static u8 sHmallocInputRecords[0x34 * 0x100];
static void* sHmallocResourceA;
static void* sHmallocResourceB;
static void* sHmallocResourceC;
static void* sHmallocResourceD;
static u32 sHmallocResourceReady;
static u32 sHmallocResourceMode;
static u32 sHmallocResourceFlag;
static void* sHmallocControllerTask;

extern void func_00104d10(u64 matrix, const f32* values, u32 value);
extern u32 func_004214e0(void* task, s32 mode);
extern void func_004215b0(u32 handle, u32 command);
extern void func_00421650(u32 handle);
extern s32 func_00510e30(void);
extern s32 func_00509ed0(const char* path);
extern s32 func_0050a100(s32 file, void* entry);
extern void func_00509f98(s32 file);
extern s32 func_00524128(const char* path, const char* name);
extern s32 func_00420340(void* task, s32 flags);
extern void func_0035f060();

static void hmallocInitTilePacket(u32 texture, u32 packet, u32 source, s32 a3,
                                   s32 a4, s32 a5, s32 a6, s32 a7, s32 a8,
                                   s32 a9, s32 a10);
static void hmallocInitTilePacket32(u32 texture, void* packet, u32 source,
                                    s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                                    s32 a8, s32 a9);
static void hmallocEmitCommands(u32 texture, u32 packet, u32 source, s32 a3,
                                 s32 a4, s32 a5, s32 a6, s32 a7, s32 a8,
                                 s32 a9, s32 a10);
static void hmallocPackHeader(u64* out, u32 a1, s32 a2, u32 a3, u32 a4,
                              u32 a5, u32 a6);
static void hmallocPackDescriptor(u32* out, u64 address, s32 a2, s32 a3,
                                  s32 a4, s32 a5, s32 a6, u32 a7);
static void hmallocWriteImage(u32* out, u32 image, u32 a2, u32 a3);
static void hmallocWriteTile(u32* out, u32 a1, u32 image, u32 a3);
static void hmallocWriteScale(u32* out, u32 x, u32 y);
static void hmallocWriteSolid(u32* out, u32 value);



static void hmallocInitTilePacket32(u32 texture, void* packet, u32 source,
                                    s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                                    s32 a8, s32 a9)
{
    hmallocInitTilePacket(texture, (u32)(uintptr_t)packet, source,
                          a3, a4, a5, a6, a7, a8, a9, 0);
}




















extern const u32 D_005E4D80[];
