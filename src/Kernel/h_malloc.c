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

// FUN_00191a10
void H_Free(void* memory)
{
    HHeapAlloc* allocs;
    u32 i;
    u32 count;
    HHeapAlloc* alloc;
    s32 intr;

    if ((u32)memory < (u32)gHeapAllocs)
    {
        (*H_FREE_ERROR)(memory);
    }
    else if (gHeapEnd < (u32)memory)
    {
        (*H_FREE_ERROR)(memory);
    }
    else
    {
        intr = func_0050d3a0();
        allocs = gHeapAllocs;
        i = 0;
        count = gHeapAllocCount;

        goto check;

    loop:
        alloc = &allocs[i];
        if (memory == alloc->memory)
        {
            alloc->memory = NULL;
            alloc->size = 0;
            goto done;
        }

        i++;

    check:
        if (i < count)
        {
            goto loop;
        }

    done:
        if (intr != 0)
        {
            func_0050d3f0();
        }
    }
}

// FUN_00191af0
asm void* H_Malloc(size_t size)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040882d
  .word 0x2603000f
  .word 0x2402fff0
  .word 0x00628024
  .word 0x8f82b354
  .word 0x000218c0
  .word 0x8f82b35c
  .word 0x00439821
  .word 0x8f86b35c
  .word 0x02702021
  .word 0x0000382d
  .word 0x8f85b354
  .word 0x1000001f
  .word 0x00000000
  .word 0x000710c0
  .word 0x00c21021
  .word 0x8c430004
  .word 0x10600019
  .word 0x00000000
  .word 0x8c420000
  .word 0x00439021
  .word 0x16620003
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x0053082b
  .word 0x10200006
  .word 0x00000000
  .word 0x0272082b
  .word 0x1020000d
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x0244082b
  .word 0x10200003
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0044082b
  .word 0x10200003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24e70001
  .word 0x00e5102b
  .word 0x1440ffe0
  .word 0x00000000
  .word 0x0260902d
  .word 0x16530030
  .word 0x00000000
  .word 0x0000382d
  .word 0x1000000c
  .word 0x00000000
  .word 0x000710c0
  .word 0x00c22021
  .word 0x24830004
  .word 0x8c820004
  .word 0x14400005
  .word 0x00000000
  .word 0xac920000
  .word 0xac700000
  .word 0x1000000e
  .word 0x00000000
  .word 0x24e70001
  .word 0x00e5102b
  .word 0x1440fff3
  .word 0x00000000
  .word 0x3c04007b
  .word 0x248469f8
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c04007b
  .word 0x248469e8
  .word 0x2405009d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x02501821
  .word 0x8f82b358
  .word 0x0062102b
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844c38
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844c48
  .word 0x240500d5
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240102d
  .word 0x10000014
  .word 0x00000000
  .word 0x0240982d
  .word 0x02501821
  .word 0x8f82b358
  .word 0x0062102b
  .word 0x1440ffa2
  .word 0x00000000
  .word 0x0c06522c
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844c38
  .word 0x0c14896a
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844c48
  .word 0x240500e3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x1000ff95
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
  .word 0x00000000
  .word 0x00000000
}
// FUN_00191d10
void* H_Calloc(u32 count, size_t size)
{
    void* memory;

    memory = H_Malloc(size * count);
    memset(memory, 0, size * count);

    return memory;
}

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

// FUN_00191D70
void hmallocPrepareTilePacket(u64 source, u32 owner, s32 tileIndex, s32 tileCount)
{
    u8 headerBytes[4];
    u16 header[2];
    u32 texture;
    u32 tileBytes;

    func_004f1e20(source, headerBytes, header);
    texture = header[0] & 0x3fff;
    tileBytes = tileCount * 0x10;
    if (tileBytes < 0x1c1)
    {
        hmallocInitTilePacket32(texture, (void*)&D_00846F00, owner, 0, 0,
                                tileIndex << 4, tileBytes, 0, 0, 0);
    }
    else
    {
        hmallocInitTilePacket32(texture, (void*)&D_00846F00, owner, 0, 0,
                                tileIndex << 4, 0x1c0, 0, 0,
                                tileBytes - 0x1c0);
    }
    if (&D_00846F00 != NULL)
    {
        func_004d5000((void*)&D_00846F00, 0x102);
    }
}

// FUN_00191E60
static void hmallocInitTilePacket(u32 texture, u32 packet, u32 source, s32 a3,
                                   s32 a4, s32 a5, s32 a6, s32 a7, s32 a8,
                                   s32 a9, s32 a10)
{
    hmallocEmitCommands(texture, packet, source, 0x400, a3, a4, a5, a6,
                         a7, a8, a9);
}

static void hmallocInitTilePacket32(u32 texture, void* packet, u32 source,
                                    s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                                    s32 a8, s32 a9)
{
    hmallocInitTilePacket(texture, (u32)(uintptr_t)packet, source,
                          a3, a4, a5, a6, a7, a8, a9, 0);
}

// FUN_00191EC0
asm static void hmallocEmitCommands(u32 texture, u32 packet, u32 source, s32 a3,
                                 s32 a4, s32 a5, s32 a6, s32 a7, s32 a8,
                                 s32 a9, s32 a10)
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
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0b82d
  .word 0x00e0a82d
  .word 0x0100f02d
  .word 0x0140882d
  .word 0x0011b103
  .word 0x000b8103
  .word 0xafa900ac
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x240a0003
  .word 0x0c064858
  .word 0x00000000
  .word 0x26440010
  .word 0x2405000e
  .word 0x24060001
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x240b0002
  .word 0x0c064874
  .word 0x00000000
  .word 0x2622003f
  .word 0x00021983
  .word 0x04410003
  .word 0x00000000
  .word 0x2442003f
  .word 0x00021983
  .word 0x00031180
  .word 0x000331bc
  .word 0x000631bf
  .word 0x04410003
  .word 0x00000000
  .word 0x2442003f
  .word 0x00023183
  .word 0x26440020
  .word 0x0260282d
  .word 0x0000382d
  .word 0x0c06488c
  .word 0x00000000
  .word 0x00103100
  .word 0x26440030
  .word 0x24050010
  .word 0x0c0648c4
  .word 0x00000000
  .word 0x26540040
  .word 0x8fa200c0
  .word 0x00022103
  .word 0x8fa200b0
  .word 0x00021903
  .word 0x02041021
  .word 0x02a21018
  .word 0x00621018
  .word 0x02e21821
  .word 0x8fa200b8
  .word 0x00021103
  .word 0x72a21018
  .word 0x00628821
  .word 0x0000982d
  .word 0x00101280
  .word 0x00029103
  .word 0x04410003
  .word 0x00000000
  .word 0x2442000f
  .word 0x00029103
  .word 0x02b0b818
  .word 0x72a4a818
  .word 0x1000003a
  .word 0x00000000
  .word 0x26c2ffff
  .word 0x02628026
  .word 0x2e100001
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080001
  .word 0x0000482d
  .word 0x240a0004
  .word 0x0c064858
  .word 0x00000000
  .word 0x26840010
  .word 0x2405000e
  .word 0x24060001
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x240b0002
  .word 0x0c064874
  .word 0x00000000
  .word 0x00131100
  .word 0x03c23021
  .word 0x26840020
  .word 0x0000282d
  .word 0x8fa700ac
  .word 0x0c0648a8
  .word 0x00000000
  .word 0x26840030
  .word 0x0000282d
  .word 0x0c0648dc
  .word 0x00000000
  .word 0x26840040
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0200502d
  .word 0x0240582d
  .word 0x0c064874
  .word 0x00000000
  .word 0x0011313c
  .word 0x0006313e
  .word 0x26840050
  .word 0x0000282d
  .word 0x0000382d
  .word 0x24080003
  .word 0x0000482d
  .word 0x0240502d
  .word 0x0c064858
  .word 0x00000000
  .word 0x26940060
  .word 0x02371021
  .word 0x00558821
  .word 0x26730001
  .word 0x0276102a
  .word 0x1440ffc5
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x24080007
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0c064858
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

// FUN_00192160
static void hmallocPackHeader(u64* out, u32 a1, s32 a2, u32 a3, u32 a4,
                              u32 a5, u32 a6)
{
    u64 packet;

    packet = ((u64)a1 << 0x3f) |
             ((u64)(u32)(a2 & ~0xf) << 0x20) |
             ((u64)a3 << 0x1f) |
             ((u64)a4 << 0x1c) |
             ((u64)a5 << 0x1a) |
             (u64)a6;
    *out = packet;
}

// FUN_001921D0
static void hmallocPackDescriptor(u32* out, u64 address, s32 a2, s32 a3,
                                   s32 a4, s32 a5, s32 a6, u32 a7)
{
    out[0] = ((u32)a6 << 0xf) | a7;
    out[1] = ((u32)a5 << 0xe) | ((u32)a4 << 0xf) |
             ((u32)a3 << 0x1a) | ((u32)a2 << 0x1c);
    out[2] = (u32)(address & 0xffffffffULL);
    out[3] = (u32)(address >> 0x20);
}

// FUN_00192230
static void hmallocWriteImage(u32* out, u32 image, u32 a2, u32 a3)
{
    u64 value;

    value = ((u64)a3 << 0x38) | ((u64)a2 << 0x30) |
            ((u64)image << 0x20);
    out[0] = (u32)(value & 0xffffffffULL);
    out[1] = (u32)(value >> 0x20);
    out[2] = 0x50;
    out[3] = 0;
}

// FUN_001922A0
static void hmallocWriteTile(u32* out, u32 a1, u32 image, u32 a3)
{
    u64 value;

    value = ((u64)a1 << 0x3b) | ((u64)a3 << 0x30) |
            ((u64)image << 0x20);
    out[0] = (u32)(value & 0xffffffffULL);
    out[1] = (u32)(value >> 0x20);
    out[2] = 0x51;
    out[3] = 0;
}

// FUN_00192310
static void hmallocWriteScale(u32* out, u32 x, u32 y)
{
    u64 value;
    value = ((u64)y << 0x20) | x;
    out[0] = (u32)(value & 0xffffffffULL);
    out[1] = (u32)(value >> 0x20);
    out[2] = 0x52;
    out[3] = 0;
}

// FUN_00192370
static void hmallocWriteSolid(u32* out, u32 value)
{
    u64 packet;
    packet = value;
    out[0] = (u32)(packet & 0xffffffffULL);
    out[1] = 0;
    out[2] = 0x53;
    out[3] = 0;
}

// FUN_001923B0
static s32 hmallocTaskUpdateA(void* task)
{
    u32* work;
    HCdvd* resource;
    u32 fileSize;
    void* destination;
    void* fileMemory;

    work = *(u32**)((u8*)task + 0x3c);
    switch (work[0])
    {
        case 0:
            work[1] = (u32)(uintptr_t)func_00100d80((void*)D_005E4C60, 0);
            work[0] += 1;
            break;
        case 1:
            if (func_001016b0((void*)(uintptr_t)work[1]) == 1)
            {
                resource = (HCdvd*)(uintptr_t)work[1];
                fileSize = ((volatile /* Removing this function's qualifier batch loses hmallocTaskUpdateA (MATCH nd0 -> MISMATCH nd10, size 204 -> 204) - measured W170. */ HCdvd*)resource)->fileSize;
                destination = D_0083BB30_abs;
                __asm__ volatile /* Removing this function's qualifier batch loses hmallocTaskUpdateA (MATCH nd0 -> MISMATCH nd10, size 204 -> 204) - measured W170. */ ("" : "+r"(destination));
                fileMemory = (void*)(uintptr_t)((volatile /* Removing this function's qualifier batch loses hmallocTaskUpdateA (MATCH nd0 -> MISMATCH nd10, size 204 -> 204) - measured W170. */ HCdvd*)resource)->fileMemory;
                func_00521250(destination, (u32)(uintptr_t)fileMemory, fileSize);
                H_Cdvd_Destroy((void*)(uintptr_t)work[1]);
                work[1] = 0;
                func_0016c2f0();
                return -1;
            }
            break;
    }
    return 0;
}

// FUN_00192480
static void hmallocTaskDestroyA(void* task)
{
    u32* work;

    work = *(u32**)((u8*)task + 0x3c);
    if (work[1] != 0)
    {
        H_Cdvd_Destroy((void*)(uintptr_t)work[1]);
        work[1] = 0;
    }
    HMALLOC_ENGINE_FREE(work);
}

// FUN_001924D0
static void* hmallocCreateTaskA(void* parent)
{
    void* work;
    void* task;

    work = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 0x106f, D_005E4C80, (KwlnTaskUpdateFunc)hmallocTaskUpdateA, (KwlnTaskDestroyFunc)hmallocTaskDestroyA, work);
    if (task == NULL)
    {
        return NULL;
    }
    return task;
}

// FUN_00192570
static s32 hmallocTaskUpdateB(void* task)
{
    u32* work;
    HCdvd* resource;
    u32 fileSize;
    void* destination;

    work = *(u32**)((u8*)task + 0x3c);
    switch (work[0])
    {
        case 0:
            work[1] = (u32)(uintptr_t)func_00100d80((void*)D_005E4CA0, 0);
            work[2] = (u32)(uintptr_t)func_00100d80((void*)D_005E4CC0, 0);
            work[0] += 1;
            break;
        case 1:
            if (func_001016b0((void*)(uintptr_t)work[1]) == 1 &&
                func_001016b0((void*)(uintptr_t)work[2]) == 1)
            {
                resource = (HCdvd*)(uintptr_t)work[1];
                fileSize = resource->fileSize;
                destination = D_0083BB30;
                __asm__ volatile /* Removing this function's qualifier batch loses hmallocTaskUpdateB (MATCH nd0 -> MISMATCH nd10, size 296 -> 296) - measured W170. */ ("" : : "r"(destination) : "memory");
                func_00521250(destination, (u32)(uintptr_t)resource->fileMemory, fileSize);
                resource = (HCdvd*)(uintptr_t)work[2];
                fileSize = ((volatile /* Removing this function's qualifier batch loses hmallocTaskUpdateB (MATCH nd0 -> MISMATCH nd10, size 296 -> 296) - measured W170. */ HCdvd*)resource)->fileSize;
                destination = D_0083AB30_abs;
                __asm__ volatile /* Removing this function's qualifier batch loses hmallocTaskUpdateB (MATCH nd0 -> MISMATCH nd10, size 296 -> 296) - measured W170. */ ("" : : "r"(destination) : "memory");
                func_00521250(destination, (u32)(uintptr_t)((volatile /* Removing this function's qualifier batch loses hmallocTaskUpdateB (MATCH nd0 -> MISMATCH nd10, size 296 -> 296) - measured W170. */ HCdvd*)resource)->fileMemory, fileSize);
                H_Cdvd_Destroy((void*)(uintptr_t)work[1]);
                work[1] = 0;
                H_Cdvd_Destroy((void*)(uintptr_t)work[2]);
                work[2] = 0;
                func_0016c2f0();
                return -1;
            }
            break;
    }
    return 0;
}

// FUN_001926A0
static void hmallocTaskDestroyB(void* task)
{
    u32* work;

    work = *(u32**)((u8*)task + 0x3c);
    if (work[1] != 0)
    {
        H_Cdvd_Destroy((void*)(uintptr_t)work[1]);
        work[1] = 0;
    }
    if (work[2] != 0)
    {
        H_Cdvd_Destroy((void*)(uintptr_t)work[2]);
        work[2] = 0;
    }
    HMALLOC_ENGINE_FREE(work);
}

// FUN_00192710
static void* hmallocCreateTaskB(void* parent)
{
    void* work;
    void* task;

    work = HMALLOC_ENGINE_ALLOC(1, 0xc, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 0x106f, D_005E4CE0, (KwlnTaskUpdateFunc)hmallocTaskUpdateB, (KwlnTaskDestroyFunc)hmallocTaskDestroyB, work);
    if (task == NULL)
    {
        return NULL;
    }
    return task;
}







extern const u32 D_005E4D80[];











