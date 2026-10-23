#include "mw_harvest_compat.h"
#include "sce/sifdev.h"
#include "sce/sifrpc.h"

/* auto-extern (generated) */
u32 FUN_0050b710(u32 param_1);
extern int FUN_00507230(u32, u32, u32, u32, u32, u32, u32, u32);
extern int DAT_0077f558;
extern u32 DAT_00969d40;
extern u32 DAT_00969d80;
extern u32 DAT_00969d84;
extern u32 DAT_00969d88;
#pragma alias DAT_0077f558_abs DAT_0077f558
#pragma alias DAT_00969d40_abs DAT_00969d40
#pragma alias DAT_00969d80_abs DAT_00969d80
#pragma alias DAT_00969d84_abs DAT_00969d84
#pragma alias DAT_00969d88_abs DAT_00969d88
extern u8 DAT_0077f558_abs[];
extern u8 DAT_00969d40_abs[];
extern u8 DAT_00969d80_abs[];
extern u8 DAT_00969d84_abs[];
extern u8 DAT_00969d88_abs[];

typedef union SifIopHeapValue
{
    int result;
    int size;
    void* address;
} SifIopHeapValue_t;

typedef struct SifIopHeapLoadRequest
{
    void* address;
    char path[252];
} SifIopHeapLoadRequest_t;

static SifRpcClientData_t sIopHeapClient;

static int sif_copy_path(char* destination, const char* source, int capacity)
{
    int length;

    length = 0;
    if (source != 0)
    {
        while (length + 1 < capacity && source[length] != '\0')
        {
            destination[length] = source[length];
            length++;
        }
    }
    destination[length] = '\0';
    return length;
}
// FUN_0050B598
asm int sceSifInitIopHeap(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x3c110097
  .word 0x1000000a
  .word 0xffb00000
  .word 0x3c020010
  .word 0x2403ffff
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x26309d00
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a50003
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04430003
  .word 0x8e020024
  .word 0x10000005
  .word 0x2402ffff
  .word 0x1040ffec
  .word 0x3c020078
  .word 0xac40f558
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050b620
asm u32 FUN_0050b620(u32 param_1)
{
  .set noreorder
  .word 0x3c030078
  .word 0x27bdffd0
  .word 0x8c62f558
  .word 0x0080282d
  .word 0xffbf0020
  .word 0x04400011
  .word 0xffb00010
  .word 0x3c070097
  .word 0x3c040097
  .word 0xace59d80
  .word 0x3c100097
  .word 0x24849d00
  .word 0x24e79d80
  .word 0xafa00000
  .word 0x24050001
  .word 0x0000302d
  .word 0x24080004
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410002
  .word 0x8e029d40
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050B690
asm u32 FUN_0050b690(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffd0
  .word 0x8c43f558
  .word 0x0080382d
  .word 0xffbf0020
  .word 0xffb00010
  .word 0x04600015
  .word 0x0000102d
  .word 0x3c020097
  .word 0x3c040097
  .word 0x24439d80
  .word 0xac459d80
  .word 0xac670004
  .word 0x3c100097
  .word 0xac660008
  .word 0x24849d00
  .word 0x0060382d
  .word 0x24050004
  .word 0xafa00000
  .word 0x0000302d
  .word 0x2408000c
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410002
  .word 0x8e029d40
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050B710
asm u32 FUN_0050b710(u32 param_1)
{
  .set noreorder
  .word 0x3c030078
  .word 0x27bdffd0
  .word 0x8c62f558
  .word 0x0080282d
  .word 0xffbf0020
  .word 0x04410003
  .word 0xffb00010
  .word 0x10000012
  .word 0x0000102d
  .word 0x3c070097
  .word 0x3c040097
  .word 0xace59d80
  .word 0x3c100097
  .word 0x24849d00
  .word 0x24e79d80
  .word 0xafa00000
  .word 0x24050002
  .word 0x0000302d
  .word 0x24080004
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410002
  .word 0x8e029d40
  .word 0x2402ffff
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
#pragma push
#pragma schedule on
// FUN_0050B788
int FUN_0050b788(void* address)
{
  return FUN_0050b710((u32)address);
}
#pragma pop
// FUN_0050B7A8 NONMATCHING
int sceSifLoadIopHeap(const char* path, void* address)
{
    SifIopHeapLoadRequest_t request;
    int request_size;

    if (sceSifInitIopHeap() < 0)
    {
        return -1;
    }
    request.address = address;
    request_size = sif_copy_path(request.path, path, sizeof(request.path));
    if (sceSifCallRpc(&sIopHeapClient, 3, 0, &request, request_size + 5, &request, 4, 0, 0) < 0)
    {
        return -1;
    }
    return *(int*)&request;
}

// FUN_0050B898
asm u32 FUN_0050b898(void)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffd0
  .word 0x8c43f558
  .word 0xffbf0020
  .word 0x04610003
  .word 0xffb00010
  .word 0x10000011
  .word 0x0000102d
  .word 0x3c040097
  .word 0x3c100097
  .word 0x24849d00
  .word 0xafa00000
  .word 0x24050005
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e029d40
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050B908
asm u32 FUN_0050b908(void)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffd0
  .word 0x8c43f558
  .word 0xffbf0020
  .word 0x04610003
  .word 0xffb00010
  .word 0x10000011
  .word 0x0000102d
  .word 0x3c040097
  .word 0x3c100097
  .word 0x24849d00
  .word 0xafa00000
  .word 0x24050006
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e029d40
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050B978
asm u32 FUN_0050b978(void)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffd0
  .word 0x8c43f558
  .word 0xffbf0020
  .word 0x04610003
  .word 0xffb00010
  .word 0x10000011
  .word 0x0000102d
  .word 0x3c040097
  .word 0x3c100097
  .word 0x24849d00
  .word 0xafa00000
  .word 0x24050007
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e029d40
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050B9E8
asm u32 FUN_0050b9e8(u32 param_1)
{
  .set noreorder
  .word 0x3c030078
  .word 0x27bdffd0
  .word 0x8c62f558
  .word 0x0080282d
  .word 0xffbf0020
  .word 0x04410003
  .word 0xffb00010
  .word 0x10000013
  .word 0x0000102d
  .word 0x3c070097
  .word 0x3c040097
  .word 0xace59d80
  .word 0x3c100097
  .word 0x24849d00
  .word 0x24e79d80
  .word 0xafa00000
  .word 0x24050008
  .word 0x0000302d
  .word 0x24080004
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e029d40
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0050BA68
asm u32 FUN_0050ba68(u32 param_1)
{
  .set noreorder
  .word 0x3c030078
  .word 0x27bdffd0
  .word 0x8c62f558
  .word 0x0080282d
  .word 0xffbf0020
  .word 0x04410003
  .word 0xffb00010
  .word 0x10000013
  .word 0x0000102d
  .word 0x3c070097
  .word 0x3c040097
  .word 0xace59d80
  .word 0x3c100097
  .word 0x24849d00
  .word 0x24e79d80
  .word 0xafa00000
  .word 0x24050009
  .word 0x0000302d
  .word 0x24080004
  .word 0x26099d40
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e029d40
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
