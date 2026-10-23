#include "Kernel/h_malloc.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "h_cdvd.h"
#include "Kosaka/k_assert.h"
#include "temporary.h"

extern const u32 D_005E4D80[];







extern s32 func_0050d3a0(void);
extern void func_0050d3f0(void);
extern void kwlnTaskPrintTrees(void);

#define H_FREE_ERROR ((HFreeCallback*)0x0096017c)

HHeapAlloc* gHeapAllocs; // 007ce04c
u32 gHeapEnd;            // 007ce048
u32 gHeapAllocCount;     // 007ce044
u32 gHeapCursor;         // 007ce040



typedef void* (*HmallocAllocator)(u32, u32, u32);
typedef void (*HmallocReleaser)(void*);
typedef s32 (*HmallocStepCallback)(void);

extern u8 D_00846F00[];
extern u32 D_00960184[];
extern u32 jtbl_0096017C[];
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














// FUN_001927B0
static s32 hmallocTaskUpdateC(void* task)
{
    u32* work;
    HmallocStepCallback callbacks[4];
    f32 callback0;
    f32 callback1;
    f32 callback2;
    f32 callback3;

    work = *(u32**)((u8*)task + 0x3c);
    callback0 = D_005E4D00;
    callback1 = D_005E4D04;
    callback2 = D_005E4D08;
    callback3 = D_005E4D0C;
    __asm__ ("" : : "f"(callback0), "f"(callback1), "f"(callback2), "f"(callback3) : "memory");
    ((f32*)callbacks)[0] = callback0;
    ((f32*)callbacks)[1] = callback1;
    ((f32*)callbacks)[2] = callback2;
    ((f32*)callbacks)[3] = callback3;
    switch (work[0])
    {
        case 0:
            if (callbacks[work[1]] == NULL)
            {
                return -1;
            }
            work[2] = (u32)callbacks[work[1]]();
            work[0] += 1;
            break;
        case 1:
            if (kwlnTaskGetState((void*)(uintptr_t)work[2]) == 3)
            {
                work[1] += 1;
                work[0] = 0;
            }
            break;
    }
    return 0;
}

// FUN_001928A0
static void hmallocTaskDestroyC(void* task)
{
    HMALLOC_ENGINE_FREE(*(void**)((u8*)task + 0x3c));
}

// FUN_001928D0
static void* hmallocCreateTaskC(void)
{
    void* work;
    void* task;

    work = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(NULL, 0x106f, D_005E4D10, (KwlnTaskUpdateFunc)hmallocTaskUpdateC, (KwlnTaskDestroyFunc)hmallocTaskDestroyC, work);
    if (task == NULL)
    {
        return NULL;
    }
    func_0017d7f0(0);
    return task;
}

// FUN_00192980
static s32 hmallocTaskUpdateD(void* task)
{
    u32* work;
    HmallocStepCallback callbacks[4];
    f32 callback0;
    f32 callback1;
    f32 callback2;
    f32 callback3;

    work = *(u32**)((u8*)task + 0x3c);
    callback0 = D_005E4D20;
    callback1 = D_005E4D24;
    callback2 = D_005E4D28;
    callback3 = D_005E4D2C;
    __asm__ ("" : : "f"(callback0), "f"(callback1), "f"(callback2), "f"(callback3) : "memory");
    ((f32*)callbacks)[0] = callback0;
    ((f32*)callbacks)[1] = callback1;
    ((f32*)callbacks)[2] = callback2;
    ((f32*)callbacks)[3] = callback3;
    switch (work[0])
    {
        case 0:
            if (callbacks[work[1]] == NULL)
            {
                return -1;
            }
            work[2] = (u32)callbacks[work[1]]();
            work[0] += 1;
            break;
        case 1:
            if (kwlnTaskGetState((void*)(uintptr_t)work[2]) == 3)
            {
                work[1] += 1;
                work[0] = 0;
            }
            break;
    }
    return 0;
}

// FUN_00192A70
static void hmallocTaskDestroyD(void* task)
{
    HMALLOC_ENGINE_FREE(*(void**)((u8*)task + 0x3c));
}

// FUN_00192AA0
static void* hmallocCreateTaskD(void)
{
    void* work;
    void* task;

    work = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(NULL, 0x106f, D_005E4D30, (KwlnTaskUpdateFunc)hmallocTaskUpdateD, (KwlnTaskDestroyFunc)hmallocTaskDestroyD, work);
    if (task == NULL)
    {
        return NULL;
    }
    func_0017d7f0(1);
    return task;
}

// FUN_00192B50
static s32 hmallocTaskUpdateE(void* task)
{
    u32* work;
    u32 state;
    f32 value0;
    f32 value1;
    const f32* image;
    u32* selected;
    u64 packed;
    union
    {
        f32 f;
        u32 u;
    } values[4];
    void* workMemory;
    void* created;

    work = *(u32**)((u8*)task + 0x3c);
    state = work[0];
    switch (state)
    {
        case 0:
            work[0] = 1;
            break;
        case 1:
            __asm__ volatile ("lwc1 %0, -0x6c18($gp)" : "=f"(value0) : : "memory");
            __asm__ volatile ("lwc1 %0, -0x6c14($gp)" : "=f"(value1) : : "memory");
            values[0].f = value0;
            values[1].f = value1;
            if ((D_007E094E & 0x40) != 0)
            {
                switch (work[1])
                {
                    case 0:
                        workMemory = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
                        if (workMemory == NULL)
                        {
                            created = NULL;
                        }
                        else
                        {
                            created = kwlnTaskCreateWithAutoPriority(
                                NULL, 0x106f, D_005E4D10,
                                (KwlnTaskUpdateFunc)hmallocTaskUpdateC,
                                (KwlnTaskDestroyFunc)hmallocTaskDestroyC, workMemory);
                            if (created == NULL)
                            {
                                created = NULL;
                            }
                            else
                            {
                                func_0017d7f0(0);
                            }
                        }
                        work[2] = (u32)(uintptr_t)created;
                        break;
                    default:
                        workMemory = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
                        if (workMemory == NULL)
                        {
                            created = NULL;
                        }
                        else
                        {
                            created = kwlnTaskCreateWithAutoPriority(
                                NULL, 0x106f, D_005E4D30,
                                (KwlnTaskUpdateFunc)hmallocTaskUpdateD,
                                (KwlnTaskDestroyFunc)hmallocTaskDestroyD, workMemory);
                            if (created == NULL)
                            {
                                created = NULL;
                            }
                            else
                            {
                                func_0017d7f0(1);
                            }
                        }
                        work[2] = (u32)(uintptr_t)created;
                        break;
                }
                work[0] = 2;
            }
            else
            {
                u32 flags = D_007E0952;
                if ((flags & 0x1000) != 0)
                {
                    work[1] = work[1] + 1;
                    work[1] &= 1;
                }
                else if ((flags & 0x4000) != 0)
                {
                    work[1] = work[1] + 1;
                    work[1] &= 1;
                }
            }
            values[2].u = 0x40800000;
            values[3].u = 0x40800000;
            selected = (u32*)(uintptr_t)work[1];
            __asm__ volatile ("sll %0, %0, 2\n\taddu %0, %0, $sp"
                              : "+r"(selected) : : "memory");
            packed = *(u64*)&values[2];
            __asm__ volatile ("addiu %0, $gp, -0x6c10"
                              : "=r"(image) : "r"(packed), "r"(selected) : "memory");
            func_00104d10(packed, image, selected[12]);
            break;
        case 2:
            if (kwlnTaskGetState((void*)(uintptr_t)work[2]) == 3)
            {
                return -1;
            }
            break;
    }
    return 0;
}

// FUN_00192DB0
static void hmallocTaskDestroyE(void* task)
{
    HMALLOC_ENGINE_FREE(*(void**)((u8*)task + 0x3c));
}

// FUN_00192DE0
void* hmallocCreateTaskE(void)
{
    void* work;
    void* task;

    work = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(NULL, 0x106f, D_005E4D60, (KwlnTaskUpdateFunc)hmallocTaskUpdateE, (KwlnTaskDestroyFunc)hmallocTaskDestroyE, work);
    if (task == NULL)
    {
        return NULL;
    }
    return task;
}

// FUN_00192E70
#ifndef PC_BUILD
asm static void hmallocApplyInputTable(void)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x3c06005e
  .word 0x24c64d80
  .word 0x27a50080
  .word 0x24040014
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8f90b360
  .word 0x24040001
  .word 0x8605003c
  .word 0x0c05b3f8
  .word 0x00000000
  .word 0x24040001
  .word 0x8605003e
  .word 0x0c05b424
  .word 0x00000000
  .word 0x24040001
  .word 0x86050040
  .word 0x0c05b458
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000001d
  .word 0x00000000
  .word 0x00101880
  .word 0x007d1821
  .word 0x24630080
  .word 0x8c640000
  .word 0x1080001a
  .word 0x00000000
  .word 0x00041143
  .word 0x04810003
  .word 0x00000000
  .word 0x2482001f
  .word 0x00021143
  .word 0x00021880
  .word 0x8f82b368
  .word 0x00432821
  .word 0x3083001f
  .word 0x04810004
  .word 0x00000000
  .word 0x10600002
  .word 0x00000000
  .word 0x2463ffe0
  .word 0x24020001
  .word 0x00621804
  .word 0x8ca20000
  .word 0x00621024
  .word 0x0002282b
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030100
  .word 0x1460ffe2
  .word 0x00000000
  .word 0x8f90b364
  .word 0x0000882d
  .word 0x1000001b
  .word 0x00000000
  .word 0x00111840
  .word 0x00711821
  .word 0x00031880
  .word 0x00711821
  .word 0x00031880
  .word 0x02039021
  .word 0x96430000
  .word 0x30630001
  .word 0x10600010
  .word 0x00000000
  .word 0x27a40040
  .word 0x0000282d
  .word 0x24060034
  .word 0x0c148502
  .word 0x00000000
  .word 0x27a40040
  .word 0x96450002
  .word 0x0c05d9a0
  .word 0x00000000
  .word 0x97a20040
  .word 0x34420001
  .word 0xa7a20040
  .word 0x27a40040
  .word 0x0c05f34c
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230100
  .word 0x1460ffe4
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00193020
#ifndef PC_BUILD
asm static s32 hmallocTaskUpdateF(void* task)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c91003c
  .word 0x8e230000
  .word 0x24020003
  .word 0x106200ab
  .word 0x00000000
  .word 0x24020001
  .word 0x1062004f
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000a7
  .word 0x00000000
  .word 0x8f84b360
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b364
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b368
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b36c
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf80b360
  .word 0xaf80b364
  .word 0xaf80b368
  .word 0xaf80b36c
  .word 0x3c100096
  .word 0x26100184
  .word 0x24040001
  .word 0x24050050
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf82b360
  .word 0x24040001
  .word 0x24053400
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf82b364
  .word 0x24040001
  .word 0x240502c0
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf82b368
  .word 0x24040001
  .word 0x2405002c
  .word 0x3c060004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf82b36c
  .word 0xaf80b30c
  .word 0x24020001
  .word 0xaf82b31c
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c1080d0
  .word 0x00000000
  .word 0xae220008
  .word 0x24020001
  .word 0xae220000
  .word 0x1000005d
  .word 0x00000000
  .word 0x8e240008
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430057
  .word 0x00000000
  .word 0xaf80b31c
  .word 0x8f82b30c
  .word 0x1040002a
  .word 0x00000000
  .word 0x24020001
  .word 0xae220004
  .word 0x0c064b9c
  .word 0x00000000
  .word 0xaf80b30c
  .word 0x8f84b360
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b364
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b368
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b36c
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf80b360
  .word 0xaf80b364
  .word 0xaf80b368
  .word 0xaf80b36c
  .word 0x24020003
  .word 0xae220000
  .word 0x1000002a
  .word 0x00000000
  .word 0x8f84b360
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b364
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b368
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f84b36c
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xaf80b360
  .word 0xaf80b364
  .word 0xaf80b368
  .word 0xaf80b36c
  .word 0x2402ffff
  .word 0xae220004
  .word 0x24020003
  .word 0xae220000
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
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
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00193320
static void hmallocTaskDestroyF(void* task)
{
    u32* work;

    work = *(u32**)((u8*)task + 0x3c);
    if (sHmallocResourceA != NULL)
    {
        HMALLOC_ENGINE_FREE(sHmallocResourceA);
    }
    if (sHmallocResourceB != NULL)
    {
        HMALLOC_ENGINE_FREE(sHmallocResourceB);
    }
    if (sHmallocResourceC != NULL)
    {
        HMALLOC_ENGINE_FREE(sHmallocResourceC);
    }
    if (sHmallocResourceD != NULL)
    {
        HMALLOC_ENGINE_FREE(sHmallocResourceD);
    }
    HMALLOC_ENGINE_FREE(work);
}

// FUN_001933D0
static s32 hmallocStartController(void)
{
    void* work;
    void* task;

    work = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
    if (work == NULL)
    {
        task = NULL;
    }
    else
    {
        task = kwlnTaskCreateWithAutoPriority(
            NULL, 0x106f, D_005E4E20,
            (KwlnTaskUpdateFunc)hmallocTaskUpdateF,
            (KwlnTaskDestroyFunc)hmallocTaskDestroyF, work);
        if (task == NULL)
        {
            task = NULL;
        }
    }
    sHmallocControllerTask = task;
    return 1;
}

// FUN_00193460
static s32 hmallocPollController(void)
{
    u32* work;
    s32 state;

    if (kwlnTaskGetState(sHmallocControllerTask) == 3)
    {
        sHmallocControllerTask = NULL;
        return 1;
    }
    work = *(u32**)((u8*)sHmallocControllerTask + 0x3c);
    state = (s32)work[1];
    if (state == 1)
    {
        func_0035f060(1);
    }
    else if (state == -1)
    {
        func_0035f060(0);
    }
    return 0;
}

// FUN_001934F0
static s32 hmallocTaskUpdateG(void* task)
{
    u32* work;
    s32 status;
    s32 file;
    s32 i;

    work = *(u32**)((u8*)task + 0x3c);
    switch (work[0])
    {
        case 0:
            work[0x507] = func_004214e0(task, 1);
            work[0] = 1;
            work[4] = 0;
            work[5] = 0;
            break;

        case 1:
            func_004215b0(work[0x507], 0x16);
            work[0] = 3;
            work[4] = 0;
            work[6] = 0;
            break;

        case 2:
            break;

        case 3:
        {
            u8 entryB[272];
            u8 entryA[64];
            if (work[4] == 0)
            {
                status = func_00510e30();
                if (status == 0)
                {
                    work[6] = 1;
                }
                else if (work[6] != 0)
                {
                    if (status == 0x14)
                    {
                        work[6] = 0;
                        file = func_00509ed0(D_005E4E38);
                        if (file >= 0)
                        {
                            work[1] = 0;
                            for (i = 0; i < 0x14; i++)
                            {
                                if (func_0050a100(file, entryA) > 0)
                                {
                                    work[1] += 1;
                                    if (func_00524128(D_005E4E48,
                                                      (const char*)entryB) == 0)
                                    {
                                        work[5] = 1;
                                    }
                                }
                            }
                            func_00509f98(file);
                        }
                        if (work[5] != 0)
                        {
                            func_004215b0(work[0x507], 0x18);
                            work[0] = 4;
                        }
                        else
                        {
                            func_004215b0(work[0x507], 0x1a);
                        }
                    }
                    else if (status == 5 || status == 0x10 ||
                             status == 0x11 || status == 0x12 ||
                             status == 0x13 || (u32)(status - 0xfd) < 3)
                    {
                        func_004215b0(work[0x507], 0x1a);
                        work[6] = 0;
                    }
                }
            }
            break;
        }

        case 4:
            work[0] = 5;
            work[5] = 0;
            work[4] = 0;
            break;

        case 5:
        {
            u8 entryB[272];
            u8 entryA[64];
            status = func_00510e30();
            if (status == 0)
            {
                work[6] = 1;
            }
            else if (work[6] != 0)
            {
                if (status == 0x14)
                {
                    work[6] = 0;
                    file = func_00509ed0(D_005E4E38);
                    if (file >= 0)
                    {
                        work[1] = 0;
                        for (i = 0; i < 0x14; i++)
                        {
                            if (func_0050a100(file, entryA) > 0)
                            {
                                work[1] += 1;
                                if (func_00524128(D_005E4E58,
                                                  (const char*)entryB) == 0)
                                {
                                    work[5] = 1;
                                }
                            }
                        }
                        func_00509f98(file);
                    }
                    if (work[5] != 0)
                    {
                        func_00421650(work[0x507]);
                        return -1;
                    }
                    func_004215b0(work[0x507], 0x1b);
                    work[6] = 0;
                }
                else if (status == 5 || status == 0x10 ||
                         status == 0x11 || status == 0x12 ||
                         status == 0x13 || (u32)(status - 0xfd) < 3)
                {
                    func_004215b0(work[0x507], 0x1b);
                    work[6] = 0;
                }
            }
            break;
        }
    }
    return 0;
}

// FUN_001938B0
static void hmallocTaskDestroyG(void* task)
{
    HMALLOC_ENGINE_FREE(*(void**)((u8*)task + 0x3c));
}

// FUN_001938E0
static void* hmallocCreateTaskG(void* parent)
{
    void* work;
    void* task;

    work = HMALLOC_ENGINE_ALLOC(1, 0x1420, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 0x106f, D_005E4E70, (KwlnTaskUpdateFunc)hmallocTaskUpdateG, (KwlnTaskDestroyFunc)hmallocTaskDestroyG, work);
    if (task == NULL)
    {
        return NULL;
    }
    return task;
}
