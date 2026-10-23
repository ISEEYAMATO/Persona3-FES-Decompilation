#include "mw_harvest_compat.h"
#include "sce/sifdev.h"
#include "sce/sifrpc.h"

#ifndef PS2_SYSCALL
#define PS2_SYSCALL(number) \
    __asm__ volatile ("addiu $v1, $zero, %0\n" "syscall 0" \
                      : : "i"(number) : "memory")
#endif

/* auto-extern (generated) */
u32 FUN_0050dcb0(u32 param_1);
void FUN_0050da58(int param_1);
u64 FUN_0050efe0(void);
u8 * FUN_0050f588(long param_1,u64 param_2);
u32 FUN_00510148(long param_1);
u32 FUN_0050fbc0(void);
long FUN_0050e508(void);
void FUN_0050e000(long param_1);
void FUN_0050f3d0(void);
#pragma alias FUN_0050cc78_arg FUN_0050cc78
extern void FUN_0050cc78_arg(int param_1);
#pragma alias FUN_0050d880_3 FUN_0050d880
extern int FUN_0050d880_3(u32 param_1,u32 param_2,u32 param_3);
#pragma alias _ExecOSD_typed _ExecOSD
extern void _ExecOSD_typed(u32 param_1,u32 param_2);
void FUN_0050d780(void);
u32 FUN_0050def0(void);
int FUN_0050ce40(void);
void FUN_0050db38(void);
extern u32 ram0x00780b90;
extern u32 DAT_0077f8f4;
extern u32 DAT_0078038c;
extern u32 DAT_00780b14;
extern u32 DAT_0096b3c0;
extern u32 DAT_0096da80;
extern void* PTR_LAB_0077f8ec;
extern void* PTR_LAB_0077f8fc;
extern void* PTR_LAB_0077fbc4;
extern void* PTR_LAB_0077fbcc;
extern void* PTR_LAB_00780384;
extern void* PTR_LAB_0078039c;
extern void* PTR_LAB_00780b0c;
extern int DAT_0077f560;
#pragma alias DAT_0077f560_abs DAT_0077f560
extern u8 DAT_0077f560_abs[];
extern u32 DAT_0077f898;
extern u32 DAT_0077f8e0;
#pragma alias DAT_0077f8e0_abs DAT_0077f8e0
extern u8 DAT_0077f8e0_abs[];
extern u32 DAT_0077f8e8;
extern u32 DAT_0077f8f0;
extern u32 DAT_0077f8f8;
extern u32 DAT_0077f900;
extern u32 DAT_0077fb98;
extern u32 DAT_0077fb9c;
extern u32 DAT_0077fba0;
extern u32 DAT_0077fba4;
extern u32 DAT_0077fbb8;
#pragma alias DAT_0077fbb8_abs DAT_0077fbb8
extern u8 DAT_0077fbb8_abs[];
extern u32 DAT_0077fbc0;
extern u32 DAT_0077fbc8;
extern u32 DAT_0077fbd0;
extern u32 DAT_0077fbd4;
extern u32 DAT_00780380;
extern u32 DAT_00780388;
extern u32 DAT_00780390;
extern u32 DAT_00780398;
extern u32 DAT_00780b08;
extern u32 DAT_00780b10;
extern u32 DAT_00780b18;
extern u32 DAT_00780b48;
extern u32 DAT_00780b50;
extern u32 DAT_00780b54;
extern u32 DAT_00780b58;
#pragma alias DAT_00780b48_abs DAT_00780b48
extern u8 DAT_00780b48_abs[];
extern u32* DAT_00780b5c;
extern u32* DAT_00780b60;
extern u32 DAT_00780b64;
extern u32 DAT_00780b68;
extern u32 DAT_00780b70;
extern u32 DAT_00780b74;
extern u32 DAT_00780b94;
extern u32 DAT_00780b98;
extern u32 DAT_00780b9c;
extern u32 DAT_00780ba0;
extern u32 DAT_00780ba4;
extern u32 DAT_00780ba8;
extern u32 DAT_00780bac;
extern u32 DAT_00780bb0;
extern u32 DAT_00780bb4;
extern u32 DAT_00780bbc;
extern u32 DAT_00780bc8;
extern u32 DAT_00780bcc;
extern u32 DAT_00780bd4;
extern u32 DAT_00780be0;
extern u32* DAT_00780be4;
extern u32 DAT_00781d74;
extern u32 DAT_00782724;
extern u32 DAT_007be000;
extern u32 DAT_00969ec0;
extern u32 DAT_00969ec4;
extern u32 DAT_0096a0e4;
extern u32 DAT_0096a0e8;
#pragma alias DAT_0096a0e8_abs DAT_0096a0e8
extern u8 DAT_0096a0e8_abs[];
extern u32 DAT_00969ec8;
extern u32 DAT_00969fc3;
extern u32 DAT_00969fc4;
extern u32 DAT_0096a0bf;
extern u32 DAT_0096a100;
extern u32 DAT_0096a108;
extern u32 DAT_0096a110;
extern u32 DAT_0096a114;
extern u32 DAT_0096a118;
extern u32 DAT_0096d380;
extern u32 DAT_0096d3c0;
extern u32 DAT_0096d7b0;
extern u32* DAT_0096d7c0;
extern u32 DAT_0096d7c8;
extern u32* DAT_0096da00;
extern u32 DAT_0096da04;
extern u32* DAT_0096da08;
extern u32 DAT_0096da0c;
extern u32* DAT_0096da10;
extern u32 DAT_0096da14;
extern u32 DAT_0096daa4;
extern u32 DAT_0096dba3;
extern u32 DAT_0096dba4;
extern u32 DAT_0096dba8;
extern u32 DAT_0096dc24;
extern u32 DAT_20780c00;
extern u32 DAT_2096da80;
extern u32 DAT_2096da88;
extern u32 DAT_2096da90;
extern u32 DAT_2096da98;
extern u32 DAT_2096daa0;
extern u32 DAT_2096dbc0;
extern void* PTR_DAT_0077f564;
extern void* PTR_DAT_0077fba8;
extern void* PTR_DAT_0077fbac;
extern void* PTR_DAT_0077fbb0;
extern u32 _DAT_0096a100;
extern int Wired;
extern int Status;
extern int ErrorPC;
extern char s_SceKernelLibc_007be0b0[];
extern char s_SceKernelLibcEh_007be0c0[];
extern u32 REG_RCNT2_MODE;
extern u32 REG_RCNT2_COUNT;
extern u32 REG_RCNT3_MODE;
extern char s_SceCdNcmdSema_007be118[];
extern char s_SceCdScmdSema_007be128[];
extern char s_SceCdRcmdSema_007be138[];
extern char s_SceCdCallbackSema_007be148[];

#define SIF_LOADFILE_SERVER 0x80000006
#define SIF_LOADFILE_MODULE 0
#define SIF_LOADFILE_MODULE_BUFFER 1
#define SIF_LOADFILE_PATH_LIMIT 252
#define SIF_LOADFILE_ARGS_LIMIT 252

typedef struct SifLoadModuleRequest
{
    int result;
    int module_result;
    int argument_length;
    char path[SIF_LOADFILE_PATH_LIMIT];
    char arguments[SIF_LOADFILE_ARGS_LIMIT];
} SifLoadModuleRequest_t;

static SifRpcClientData_t sLoadFileClient;
static int sLoadFileInitialized;

static int sif_copy_bytes(char* destination, const char* source, int length, int capacity)
{
    int count;

    count = 0;
    if (source != 0)
    {
        while (count < length && count < capacity)
        {
            destination[count] = source[count];
            count++;
        }
    }
    return count;
}

static int sif_copy_string(char* destination, const char* source, int capacity)
{
    int count;

    count = 0;
    if (source != 0)
    {
        while (count + 1 < capacity && source[count] != '\0')
        {
            destination[count] = source[count];
            count++;
        }
    }
    destination[count] = '\0';
    return count;
}

// FUN_0050BAE8
asm u32 FUN_0050bae8(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0x3c120078
  .word 0xffbf0040
  .word 0x8e42f560
  .word 0xffb10020
  .word 0x04410032
  .word 0xffb00010
  .word 0x3c110097
  .word 0x2630a0c0
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a50006
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04430003
  .word 0x8e020024
  .word 0x10000028
  .word 0x2402ffff
  .word 0x10400019
  .word 0x0200202d
  .word 0x3c110097
  .word 0xae40f560
  .word 0xafa00000
  .word 0x240500ff
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x26299ec0
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410004
  .word 0x3c030097
  .word 0x3c02fffe
  .word 0x10000016
  .word 0x3442ffff
  .word 0x26279ec0
  .word 0x2466a0e8
  .word 0x88e40003
  .word 0x98e40000
  .word 0xa8c40003
  .word 0xb8c40000
  .word 0x1000000e
  .word 0x0000102d
  .word 0x3c020010
  .word 0x2403ffff
  .word 0x00000000
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x1000ffd2
  .word 0x2630a0c0
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_0050BBE8
asm bool FUN_0050bbe8(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020078
  .word 0xffb30030
  .word 0x3c030097
  .word 0xffb10010
  .word 0x2453f48c
  .word 0xffb20020
  .word 0x2471a0e8
  .word 0xffbf0040
  .word 0x0000902d
  .word 0xffb00000
  .word 0x0220202d
  .word 0x0260282d
  .word 0x0c14846e
  .word 0x24060004
  .word 0x1040000b
  .word 0x3c100078
  .word 0x0220202d
  .word 0x8e05f564
  .word 0x0c14846e
  .word 0x24060004
  .word 0x10400005
  .word 0x8e05f564
  .word 0x0260202d
  .word 0x0c14846e
  .word 0x24060004
  .word 0x0002902b
  .word 0x0240102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0050BC78
asm u32 FUN_0050bc78(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c020078
  .word 0x2403ffff
  .word 0x3c040097
  .word 0xffbf0000
  .word 0x2484a0e8
  .word 0xac43f560
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060004
  .word 0xdfbf0000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0050BCB0
asm u32 FUN_0050bcb0(u32 _param_1, long _param_2, u64 *_param_3, u32 *_param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb60070
  .word 0xffb30040
  .word 0x00e0b02d
  .word 0xffb10020
  .word 0x0080982d
  .word 0xffb00010
  .word 0x00a0882d
  .word 0xffbf0080
  .word 0x00c0802d
  .word 0xffb50060
  .word 0xffb40050
  .word 0x0c142eba
  .word 0xffb20030
  .word 0x04400069
  .word 0x3c02ffff
  .word 0x0c142efa
  .word 0x00000000
  .word 0x10400004
  .word 0x3c140097
  .word 0x3c02fffe
  .word 0x10000062
  .word 0x3442fffc
  .word 0x0280a82d
  .word 0x26929ec0
  .word 0x1200004a
  .word 0xae939ec0
  .word 0x2a2200fd
  .word 0x14400042
  .word 0x0200282d
  .word 0x26440104
  .word 0x02041025
  .word 0x30420007
  .word 0x1040001a
  .word 0x0200382d
  .word 0x260200e0
  .word 0x3c050097
  .word 0x68e30007
  .word 0x6ce30000
  .word 0x68e6000f
  .word 0x6ce60008
  .word 0x68e80017
  .word 0x6ce80010
  .word 0x68e9001f
  .word 0x6ce90018
  .word 0xb0830007
  .word 0xb4830000
  .word 0xb086000f
  .word 0xb4860008
  .word 0xb0880017
  .word 0xb4880010
  .word 0xb089001f
  .word 0xb4890018
  .word 0x24e70020
  .word 0x24840020
  .word 0x00000000
  .word 0x14e2ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x260200e0
  .word 0x3c050097
  .word 0xdcea0000
  .word 0xdce30008
  .word 0xdce60010
  .word 0xdce80018
  .word 0xfc8a0000
  .word 0xfc830008
  .word 0xfc860010
  .word 0xfc880018
  .word 0x24e70020
  .word 0x24840020
  .word 0x00000000
  .word 0x14e2fff4
  .word 0x00000000
  .word 0x68e90007
  .word 0x6ce90000
  .word 0x68ea000f
  .word 0x6cea0008
  .word 0x68e60017
  .word 0x6ce60010
  .word 0x88e8001b
  .word 0x98e80018
  .word 0xb0890007
  .word 0xb4890000
  .word 0xb08a000f
  .word 0xb48a0008
  .word 0xb0860017
  .word 0xb4860010
  .word 0xa888001b
  .word 0x26a39ec0
  .word 0x240200fc
  .word 0xb8880018
  .word 0x10000008
  .word 0xac620004
  .word 0x26440104
  .word 0x0c148494
  .word 0x0220302d
  .word 0x10000002
  .word 0xae510004
  .word 0xae400004
  .word 0x3c050097
  .word 0x26b09ec0
  .word 0x24a4a0c0
  .word 0xafa00000
  .word 0x24050006
  .word 0x0000302d
  .word 0x0200382d
  .word 0x24080200
  .word 0x0200482d
  .word 0x240a0008
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430004
  .word 0x8e030004
  .word 0x3c02fffe
  .word 0x10000003
  .word 0x3442ffff
  .word 0x8e829ec0
  .word 0xaec30000
  .word 0xdfbf0080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0090
}
// FUN_0050BEB8
asm u32 FUN_0050beb8(u32 param_1,long param_2,u64 *param_3,u32 *param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb60070
  .word 0xffb30040
  .word 0x00e0b02d
  .word 0xffb10020
  .word 0x0080982d
  .word 0xffb00010
  .word 0x00a0882d
  .word 0xffbf0080
  .word 0x00c0802d
  .word 0xffb50060
  .word 0xffb40050
  .word 0x0c142eba
  .word 0xffb20030
  .word 0x04400069
  .word 0x3c02ffff
  .word 0x0c142efa
  .word 0x00000000
  .word 0x10400004
  .word 0x3c140097
  .word 0x3c02fffe
  .word 0x10000062
  .word 0x3442fffc
  .word 0x0280a82d
  .word 0x26929ec0
  .word 0x1200004a
  .word 0xae939ec0
  .word 0x2a2200fd
  .word 0x14400042
  .word 0x0200282d
  .word 0x26440104
  .word 0x02041025
  .word 0x30420007
  .word 0x1040001a
  .word 0x0200382d
  .word 0x260200e0
  .word 0x3c050097
  .word 0x68e30007
  .word 0x6ce30000
  .word 0x68e6000f
  .word 0x6ce60008
  .word 0x68e80017
  .word 0x6ce80010
  .word 0x68e9001f
  .word 0x6ce90018
  .word 0xb0830007
  .word 0xb4830000
  .word 0xb086000f
  .word 0xb4860008
  .word 0xb0880017
  .word 0xb4880010
  .word 0xb089001f
  .word 0xb4890018
  .word 0x24e70020
  .word 0x24840020
  .word 0x00000000
  .word 0x14e2ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x260200e0
  .word 0x3c050097
  .word 0xdcea0000
  .word 0xdce30008
  .word 0xdce60010
  .word 0xdce80018
  .word 0xfc8a0000
  .word 0xfc830008
  .word 0xfc860010
  .word 0xfc880018
  .word 0x24e70020
  .word 0x24840020
  .word 0x00000000
  .word 0x14e2fff4
  .word 0x00000000
  .word 0x68e90007
  .word 0x6ce90000
  .word 0x68ea000f
  .word 0x6cea0008
  .word 0x68e60017
  .word 0x6ce60010
  .word 0x88e8001b
  .word 0x98e80018
  .word 0xb0890007
  .word 0xb4890000
  .word 0xb08a000f
  .word 0xb48a0008
  .word 0xb0860017
  .word 0xb4860010
  .word 0xa888001b
  .word 0x26a39ec0
  .word 0x240200fc
  .word 0xb8880018
  .word 0x10000008
  .word 0xac620004
  .word 0x26440104
  .word 0x0c148494
  .word 0x0220302d
  .word 0x10000002
  .word 0xae510004
  .word 0xae400004
  .word 0x3c050097
  .word 0x26b09ec0
  .word 0x24a4a0c0
  .word 0xafa00000
  .word 0x24050007
  .word 0x0000302d
  .word 0x0200382d
  .word 0x24080200
  .word 0x0200482d
  .word 0x240a0008
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430004
  .word 0x8e030004
  .word 0x3c02fffe
  .word 0x10000003
  .word 0x3442ffff
  .word 0x8e829ec0
  .word 0xaec30000
  .word 0xdfbf0080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0090
}
// FUN_0050C0C0
asm u32 FUN_0050c0c0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10020
  .word 0xffbf0030
  .word 0x0080882d
  .word 0x0c142eba
  .word 0xffb00010
  .word 0x04400018
  .word 0x3c02ffff
  .word 0x0c142efa
  .word 0x00000000
  .word 0x10400004
  .word 0x3c100097
  .word 0x3c02fffe
  .word 0x10000011
  .word 0x3442fffc
  .word 0x3c040097
  .word 0x26079ec0
  .word 0xae119ec0
  .word 0x2484a0c0
  .word 0xafa00000
  .word 0x24050008
  .word 0x0000302d
  .word 0x24080004
  .word 0x00e0482d
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e029ec0
  .word 0x3c02fffe
  .word 0x3442ffff
  .word 0xdfbf0030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0050C150
asm u32 FUN_0050c150(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00010
  .word 0xffbf0020
  .word 0x0c142eba
  .word 0x0080802d
  .word 0x0440001e
  .word 0x3c02ffff
  .word 0x0c142efa
  .word 0x00000000
  .word 0x50400004
  .word 0x3c020097
  .word 0x3c02fffe
  .word 0x10000017
  .word 0x3442fffc
  .word 0x0200282d
  .word 0x24509ec8
  .word 0x240600fc
  .word 0x0c14920a
  .word 0x0200202d
  .word 0x2603fff8
  .word 0x3c040097
  .word 0x0060382d
  .word 0xa0600103
  .word 0x2484a0c0
  .word 0x24050009
  .word 0xafa00000
  .word 0x0000302d
  .word 0x24080200
  .word 0x00e0482d
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e02fff8
  .word 0x3c02fffe
  .word 0x3442ffff
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050C1F0
asm u32 FUN_0050c1f0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10020
  .word 0xffbf0030
  .word 0x0080882d
  .word 0x0c142eba
  .word 0xffb00010
  .word 0x04400018
  .word 0x3c02ffff
  .word 0x0c142efa
  .word 0x00000000
  .word 0x10400004
  .word 0x3c100097
  .word 0x3c02fffe
  .word 0x10000011
  .word 0x3442fffc
  .word 0x3c040097
  .word 0x26079ec0
  .word 0xae119ec0
  .word 0x2484a0c0
  .word 0xafa00000
  .word 0x2405000a
  .word 0x0000302d
  .word 0x24080004
  .word 0x00e0482d
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430003
  .word 0x8e029ec0
  .word 0x3c02fffe
  .word 0x3442ffff
  .word 0xdfbf0030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0040
}
#pragma schedule on
/* DUMMYDUMB session 2026-10-21: retail saves $ra at 0x10($sp) and sets up a frame
 * pointer (`move $fp,$sp`), ours saves $ra at 0($sp) with a plain frame, so the
 * 6 differing bytes are the frame layout. The source passes
 * `(char *)result - 0x10` to the callee, which suggested retail's `result` array
 * was bigger than the 4 elements the decompiler emitted - but growing it to
 * 5/8/12 elements does not even change the frame (the array is unused, so it is
 * optimised away) and the diff gets worse (6 -> 8). The frame-pointer form is
 * not reachable from this source. Confirmed wall. */
// FUN_0050C280
asm void FUN_0050c280(u32 param_1, long param_2, u64 *param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c142f2c
  .word 0x03a0382d
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#pragma schedule off
// FUN_0050C2A0
#pragma push
#pragma schedule on
int FUN_0050c2a0(u32 param_1, long param_2, u64 *param_3, u32 *param_4)
{
  return FUN_0050bcb0(param_1, param_2, param_3, param_4);
}
#pragma pop
// FUN_0050C2C0
asm static int sif_load_module_request(const char* path, int argument_length, const char* arguments, int* module_result, int function)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffb40050
  .word 0xffb30040
  .word 0x00e0a02d
  .word 0xffb20030
  .word 0x0100982d
  .word 0xffb10020
  .word 0x00a0902d
  .word 0xffb00010
  .word 0x0080882d
  .word 0xffbf0070
  .word 0x00c0802d
  .word 0x0c142eba
  .word 0xffb50060
  .word 0x04400071
  .word 0x3c02ffff
  .word 0x0c142efa
  .word 0x00000000
  .word 0x50400004
  .word 0x3c020097
  .word 0x3c02fffe
  .word 0x1000006a
  .word 0x3442fffc
  .word 0x0220282d
  .word 0x24519ec8
  .word 0x240600fc
  .word 0x0c14920a
  .word 0x0220202d
  .word 0x2622fff8
  .word 0x1200004c
  .word 0xa0400103
  .word 0x2a4200fd
  .word 0x14400043
  .word 0x0200282d
  .word 0x262400fc
  .word 0x02041025
  .word 0x30420007
  .word 0x1040001b
  .word 0x0200182d
  .word 0x260200e0
  .word 0x3c150097
  .word 0x3c050097
  .word 0x68660007
  .word 0x6c660000
  .word 0x6867000f
  .word 0x6c670008
  .word 0x68680017
  .word 0x6c680010
  .word 0x6869001f
  .word 0x6c690018
  .word 0xb0860007
  .word 0xb4860000
  .word 0xb087000f
  .word 0xb4870008
  .word 0xb0880017
  .word 0xb4880010
  .word 0xb089001f
  .word 0xb4890018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x260200e0
  .word 0x3c150097
  .word 0x3c050097
  .word 0xdc660000
  .word 0xdc670008
  .word 0xdc680010
  .word 0xdc690018
  .word 0xfc860000
  .word 0xfc870008
  .word 0xfc880010
  .word 0xfc890018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x68660007
  .word 0x6c660000
  .word 0x6867000f
  .word 0x6c670008
  .word 0x68680017
  .word 0x6c680010
  .word 0x8869001b
  .word 0x98690018
  .word 0xb0860007
  .word 0xb4860000
  .word 0xb087000f
  .word 0xb4870008
  .word 0xb0880017
  .word 0xb4880010
  .word 0xa889001b
  .word 0x240200fc
  .word 0xb8890018
  .word 0x1000000b
  .word 0xaea29ec0
  .word 0x262400fc
  .word 0x0240302d
  .word 0x0c148494
  .word 0x3c150097
  .word 0x10000004
  .word 0xae32fff8
  .word 0xa0400104
  .word 0x3c150097
  .word 0xae20fff8
  .word 0x3c050097
  .word 0x26b09ec0
  .word 0x24a4a0c0
  .word 0x0260282d
  .word 0xafa00000
  .word 0x0000302d
  .word 0x0200382d
  .word 0x24080200
  .word 0x0200482d
  .word 0x240a0008
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430004
  .word 0x8e030004
  .word 0x3c02fffe
  .word 0x10000003
  .word 0x3442ffff
  .word 0x8ea29ec0
  .word 0xae830000
  .word 0xdfbf0070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}

#pragma schedule on
// FUN_0050C4E8
asm int sceSifLoadModule(const char* filename, int args, const char* argp)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x0000402d
  .word 0xffbf0010
  .word 0x0c1430b0
  .word 0x03a0382d
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
}
#pragma schedule off

#pragma schedule on
// FUN_0050C508
int sceSifLoadStartModule(const char* filename, int args, const char* argp, int* result)
{
    return sif_load_module_request(filename, args, argp, result, SIF_LOADFILE_MODULE);
}
#pragma schedule off

// FUN_0050C528
asm u32 FUN_0050c528(u32 _param_1, u32 _param_2, u32 *_param_3, u32 _param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffb40050
  .word 0xffb30040
  .word 0x00c0a02d
  .word 0xffb20030
  .word 0x00e0982d
  .word 0xffb00010
  .word 0x00a0902d
  .word 0xffbf0060
  .word 0x0080802d
  .word 0x0c142eba
  .word 0xffb10020
  .word 0x0440002c
  .word 0x3c02ffff
  .word 0x0c142efa
  .word 0x00000000
  .word 0x50400004
  .word 0x3c020097
  .word 0x3c02fffe
  .word 0x10000025
  .word 0x3442fffc
  .word 0x0200282d
  .word 0x24519ec8
  .word 0x240600fc
  .word 0x0220202d
  .word 0x0c14920a
  .word 0x2630fff8
  .word 0x0240282d
  .word 0xa2000103
  .word 0x262400fc
  .word 0x0c14920a
  .word 0x240600fc
  .word 0x3c040097
  .word 0xa20001ff
  .word 0x0260282d
  .word 0x2484a0c0
  .word 0xafa00000
  .word 0x0000302d
  .word 0x0200382d
  .word 0x24080200
  .word 0x0200482d
  .word 0x240a0010
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430004
  .word 0x8e22fff8
  .word 0x3c02fffe
  .word 0x10000009
  .word 0x3442ffff
  .word 0x54400004
  .word 0xae820000
  .word 0x3c02fffe
  .word 0x10000004
  .word 0x3442fffd
  .word 0x0000102d
  .word 0x8e030004
  .word 0xae830004
  .word 0xdfbf0060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}
#pragma schedule on
// FUN_0050C630
void FUN_0050c630(u32 param_1, u32 param_2, u32 *param_3)

{
  FUN_0050c528(param_1, param_2, param_3, 1);
  return;
}

extern u8 DAT_007bdff8[];
#pragma alias DAT_007bdff8_abs DAT_007bdff8
extern u8 DAT_007bdff8_abs[];
#pragma alias FUN_0050c528_str FUN_0050c528
extern u32 FUN_0050c528_str(u32 param_1, int param_2, u32* param_3, u32 param_4);
/* DUMMYDUMB session 2026-10-20: the only real residual is a two-instruction order
 * swap at +0/+4 - ours `addiu $sp,$sp,-16` then `move $a2,$a1` (the a2 argument
 * shuffle), retail `move $a2,$a1` first, before the frame setup. Everything else
 * matches (40B = 40B); the DAT_007bdff8_abs address is already absolute in
 * both (the rest are masked relocations). Probed: 1u for the a3 literal, a
 * (u32) cast on a0 - both byte-neutral. Confirmed wall: argument-shuffle
 * placement against the prologue. Same family as mt_evtMenu FUN_0037ABD0. */
// FUN_0050C650
asm void FUN_0050c650(u32 param_1, u32 param_2)
{
  .set noreorder
  .word 0x00a0302d
  .word 0x27bdfff0
  .word 0x3c05007c
  .word 0xffbf0000
  .word 0x24a5dff8
  .word 0x0c14314a
  .word 0x24070001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}

// FUN_0050C678
asm u32 FUN_0050c678(u32 param_1,u32 *param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffb30040
  .word 0xffb20030
  .word 0x0080982d
  .word 0xffb00010
  .word 0x00a0902d
  .word 0xffbf0050
  .word 0x00c0802d
  .word 0x0c142eba
  .word 0xffb10020
  .word 0x04410003
  .word 0x2e020003
  .word 0x10000027
  .word 0x3c02ffff
  .word 0x10400020
  .word 0x3c110097
  .word 0x3c040097
  .word 0x26229ec0
  .word 0xae339ec0
  .word 0x0040382d
  .word 0xac500004
  .word 0x2484a0c0
  .word 0x24050003
  .word 0xafa00000
  .word 0x0000302d
  .word 0x24080020
  .word 0x00e0482d
  .word 0x240a0020
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410004
  .word 0x00000000
  .word 0x3c02fffe
  .word 0x10000012
  .word 0x3442ffff
  .word 0x16000004
  .word 0x24020001
  .word 0x92229ec0
  .word 0x1000000c
  .word 0xa2420000
  .word 0x16020004
  .word 0x24020002
  .word 0x96229ec0
  .word 0x10000007
  .word 0xa6420000
  .word 0x52020004
  .word 0x8e229ec0
  .word 0x3c02fffe
  .word 0x10000003
  .word 0x3442fffe
  .word 0xae420000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}
// FUN_0050C768
asm u32 FUN_0050c768(u32 param_1,u32 *param_2,long param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0xffb10020
  .word 0x0080902d
  .word 0xffb00010
  .word 0x00a0882d
  .word 0xffbf0040
  .word 0x0c142eba
  .word 0x00c0802d
  .word 0x04410003
  .word 0x3c070097
  .word 0x10000025
  .word 0x3c02ffff
  .word 0x24e39ec0
  .word 0xacf29ec0
  .word 0x16000004
  .word 0xac700004
  .word 0x92220000
  .word 0x1000000d
  .word 0xa0620008
  .word 0x24020001
  .word 0x16020004
  .word 0x24020002
  .word 0x96220000
  .word 0x10000007
  .word 0xa4620008
  .word 0x52020004
  .word 0x8e220000
  .word 0x3c02fffe
  .word 0x10000013
  .word 0x3442fffe
  .word 0xac620008
  .word 0x24e79ec0
  .word 0x3c040097
  .word 0x2484a0c0
  .word 0xafa00000
  .word 0x24050002
  .word 0x0000302d
  .word 0x24080020
  .word 0x00e0482d
  .word 0x240a0010
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x3c04fffe
  .word 0x2403ffff
  .word 0x0062182a
  .word 0x3484ffff
  .word 0x0080102d
  .word 0x0003100b
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0050C848
asm bool FUN_0050c848(char *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10020
  .word 0xffb00010
  .word 0x0080882d
  .word 0x00a0802d
  .word 0xffbf0030
  .word 0x0000202d
  .word 0x0c143d62
  .word 0x0000282d
  .word 0x24040001
  .word 0x0c143d62
  .word 0x0000282d
  .word 0x0c140d0c
  .word 0x00000000
  .word 0x0c140d5c
  .word 0x3c048000
  .word 0x3c0a0097
  .word 0x0040582d
  .word 0x2543a100
  .word 0xac700014
  .word 0x82220000
  .word 0x1040000c
  .word 0x0000482d
  .word 0x0220102d
  .word 0x90440000
  .word 0x00000000
  .word 0x2543a100
  .word 0x00691821
  .word 0x25290001
  .word 0xa0640018
  .word 0x02291021
  .word 0x80430000
  .word 0x5460fff9
  .word 0x90440000
  .word 0x2546a100
  .word 0x3c038000
  .word 0xacc00004
  .word 0x2404ffff
  .word 0x0004203c
  .word 0x348400ff
  .word 0x34630003
  .word 0x24050068
  .word 0xdd42a100
  .word 0x24070068
  .word 0xacc90010
  .word 0x24080044
  .word 0xacc30008
  .word 0x00441024
  .word 0xfd42a100
  .word 0x00c0202d
  .word 0xa145a100
  .word 0x24050068
  .word 0xafab0004
  .word 0xafa70008
  .word 0xafa8000c
  .word 0x0c1419fe
  .word 0xafa60000
  .word 0x24040004
  .word 0x0c140d58
  .word 0x3c050004
  .word 0x03a0202d
  .word 0x0c140d48
  .word 0x24050001
  .word 0x1040000f
  .word 0x24040004
  .word 0x0c140d58
  .word 0x3c050001
  .word 0x24040004
  .word 0x0c140d58
  .word 0x3c050002
  .word 0x3c048000
  .word 0x0000282d
  .word 0x0c140d58
  .word 0x34840002
  .word 0x3c048000
  .word 0x0c140d58
  .word 0x0000282d
  .word 0x10000002
  .word 0x24020001
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
/* DUMMYDUMB session 2026-10-20: the only real residual is a two-instruction order
 * swap at +16/+20 - ours `ld $ra,0($sp)` then `lui $v1,1` (the 0x10000 mask),
 * retail the other way round. Everything else matches (40B = 40B); the rest are
 * masked call relocations. Probed: named result temp, mask as (1 << 16),
 * 0x10000u, ternary instead of != 0 - all byte-neutral. Confirmed wall:
 * epilogue ordering. Same family as cri_adx FUN_0057FA50 and libmc2
 * FUN_0051E0F0. */
// FUN_0050C9A0
asm bool FUN_0050c9a0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c140d5c
  .word 0x24040004
  .word 0x3c030001
  .word 0xdfbf0000
  .word 0x00431024
  .word 0x0002102b
  .word 0x03e00008
  .word 0x27bd0010
}

/* DUMMYDUMB session 2026-10-21: 6 differing bytes, the order of two
 * independent instructions.  Ours "ld ra,0(sp)" then "lui v1,0x1", retail
 * "lui v1,0x1" then "ld ra,0(sp)".
 * Probed: the call inlined into the return, an if/else form, a separate bool
 * local, the operands of the AND swapped, the constant with a u suffix, and
 * the local declared as int or u16 - all keep the order.
 * Confirmed wall: instruction scheduling.
 */
#pragma push
#pragma optimization_level 3
#pragma opt_rebuildconditionals off
// FUN_0050C9C8
asm bool FUN_0050c9c8(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c140d5c
  .word 0x24040004
  .word 0x3c030004
  .word 0x00431024
  .word 0x1040000a
  .word 0x0000102d
  .word 0x0c140d78
  .word 0x00000000
  .word 0x24040001
  .word 0x0c143d62
  .word 0x24050001
  .word 0x0000202d
  .word 0x0c143d62
  .word 0x24050001
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
#pragma pop
// FUN_0050CA18
asm u64 FUN_0050ca18(u8 *param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c02007c
  .word 0xffb10060
  .word 0xffb00050
  .word 0xffbf0070
  .word 0x0080802d
  .word 0x82030000
  .word 0x1060000b
  .word 0x2451e000
  .word 0x2603fff5
  .word 0x24840001
  .word 0x80820000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x10000003
  .word 0x00831023
  .word 0x2603fff5
  .word 0x00831023
  .word 0x2c420051
  .word 0x14400006
  .word 0x3c04007c
  .word 0x0200282d
  .word 0x0c141792
  .word 0x2484e010
  .word 0x10000023
  .word 0x0000102d
  .word 0x0c141a2a
  .word 0x0000202d
  .word 0x0c141a92
  .word 0x00000000
  .word 0x82220000
  .word 0x03a0182d
  .word 0x1040000b
  .word 0x92240000
  .word 0x92050000
  .word 0xa0640000
  .word 0x26310001
  .word 0x24630001
  .word 0x92240000
  .word 0x82220000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x10000003
  .word 0x00a0202d
  .word 0x92050000
  .word 0x00a0202d
  .word 0x5080000a
  .word 0xa0600000
  .word 0x00000000
  .word 0xa0640000
  .word 0x26100001
  .word 0x24630001
  .word 0x82020000
  .word 0x0040202d
  .word 0x1440fffa
  .word 0x00000000
  .word 0xa0600000
  .word 0x03a0202d
  .word 0x0c143212
  .word 0x0000282d
  .word 0xdfbf0070
  .word 0xdfb10060
  .word 0xdfb00050
  .word 0x03e00008
  .word 0x27bd0080
}
// FUN_0050CB28
asm u64 FUN_0050cb28(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020078
  .word 0xffb00000
  .word 0xffb10010
  .word 0x3c100051
  .word 0x2610d040
  .word 0x0080882d
  .word 0xac51f898
  .word 0x0200282d
  .word 0xffbf0020
  .word 0x0c140b84
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c140b84
  .word 0x24040002
  .word 0x0200282d
  .word 0x0c140b84
  .word 0x24040003
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x0080302d
  .word 0x27bdffe0
  .word 0x24c4ffff
  .word 0xffbf0010
  .word 0x2c82000d
  .word 0x14400004
  .word 0xffb00000
  .word 0x3c02ffff
  .word 0x10000014
  .word 0x3442ffff
  .word 0x3c020078
  .word 0x00061880
  .word 0x2442f8a0
  .word 0x2c840003
  .word 0x00621821
  .word 0x8c700000
  .word 0x10800007
  .word 0xac650000
  .word 0x3c050051
  .word 0x00c0202d
  .word 0x0c140b84
  .word 0x24a5d280
  .word 0x10000006
  .word 0x0200102d
  .word 0x3c050051
  .word 0x00c0202d
  .word 0x0c140b88
  .word 0x24a5d280
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_0050CC10
asm u32 FUN_0050cc10(u32 param_1,u32 param_2,u32 param_3)
{
  .word 0x2403005a;
  .word 0x0000000c;
  .word 0x03e00008;
  .word 0x00000000;
  .word 0x00063082;
  .word 0x10c0000a;
  .word 0x0000382d;
  .word 0x00000000;
  .word 0x8ca30000;
  .word 0x24e70001;
  .word 0x24a50004;
  .word 0x00e6102b;
  .word 0xac830000;
  .word 0x24840004;
  .word 0x1440fff9;
  .word 0x00000000;
  .word 0x03e00008;
  .word 0x0000102d;
}



// FUN_0050CC58 RFU091

u64 RFU091(u64 param_1)

{
  PS2_SYSCALL(0x5b);
}



// FUN_0050CC68 RFU116_SetSyscall

void RFU116_SetSyscall(void)

{
  PS2_SYSCALL(0x74);
  return;
}
// FUN_0050CC78
asm void FUN_0050cc78(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020078
  .word 0xffb20020
  .word 0xffb10010
  .word 0x24120003
  .word 0xffb00000
  .word 0xffbf0030
  .word 0x2450f8e8
  .word 0x8c44f8e8
  .word 0x26110018
  .word 0x0c14331a
  .word 0x8e050004
  .word 0x3c050078
  .word 0x3c048007
  .word 0x24060330
  .word 0x24a5f568
  .word 0x0c143304
  .word 0x34845000
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x0c140cf8
  .word 0x24040002
  .word 0x8e040008
  .word 0x0c14331a
  .word 0x8e05000c
  .word 0x8e040010
  .word 0x0c14331a
  .word 0x8e050014
  .word 0x8e240000
  .word 0x00000000
  .word 0x0c143316
  .word 0x26520001
  .word 0x8e240000
  .word 0x0040282d
  .word 0x0c14331a
  .word 0x26310008
  .word 0x2e420008
  .word 0x5440fff8
  .word 0x8e240000
  .word 0x0c143316
  .word 0x24040003
  .word 0x3c030078
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0xac62f8e0
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x24030055
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
  .word 0x2403ffab
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
}



// FUN_0050CD60 RFU086_WaitEvnetFlag

u64 RFU086_WaitEvnetFlag(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  PS2_SYSCALL(0x56);
}
#pragma alias RFU086_WaitEvnetFlag_0 RFU086_WaitEvnetFlag
extern u64 RFU086_WaitEvnetFlag_0(void);
#pragma push
#pragma opt_rebuildconditionals off
// FUN_0050CD70
asm u64 FUN_0050cd70(int param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x2482fff3
  .word 0x2c420023
  .word 0x14400003
  .word 0xffbf0000
  .word 0x10000003
  .word 0x2402ffff
  .word 0x0c143358
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x2403ffaa
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
  .word 0x24030057
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
  .word 0x2403ffa9
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
  .word 0x24030058
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
  .word 0x2403ffa8
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
  .word 0x24030059
  .word 0x0000000c
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop
// FUN_0050CE00
void FUN_0050ce00(void)

{
  u32 lVar1;
  
  lVar1 = GetMemorySize();
  if (lVar1 == 0x2000000) {
    FUN_0050ce40();
  }
  else {
    _InitTLB();
  }
  return;
}
// FUN_0050CE40
asm int FUN_0050ce40(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c04007c
  .word 0xffb20020
  .word 0x2484e030
  .word 0xffb10010
  .word 0x3c120078
  .word 0xffb00000
  .word 0xffbf0030
  .word 0x2650fb98
  .word 0x8e45fb98
  .word 0x8e070004
  .word 0x8e090008
  .word 0x00a0302d
  .word 0x00a73821
  .word 0x00e94821
  .word 0x00e0402d
  .word 0x24a5ffff
  .word 0x2529ffff
  .word 0x0c1417b2
  .word 0x24e7ffff
  .word 0x40803000
  .word 0x0000040f
  .word 0x8e51fb98
  .word 0x2a220031
  .word 0x14400006
  .word 0x0000c82d
  .word 0x3c04007c
  .word 0x0c1417b2
  .word 0x2484e068
  .word 0x0c143696
  .word 0x24040001
  .word 0x0331102a
  .word 0x1040000d
  .word 0x8e100010
  .word 0x8e050000
  .word 0x00000000
  .word 0x0320202d
  .word 0x8e060004
  .word 0x8e070008
  .word 0x8e08000c
  .word 0x0c143358
  .word 0x26100010
  .word 0x27390001
  .word 0x0331102a
  .word 0x5440fff7
  .word 0x8e050000
  .word 0x2650fb98
  .word 0x8e020004
  .word 0x03228821
  .word 0x2a230031
  .word 0x14600007
  .word 0x0331102a
  .word 0x3c04007c
  .word 0x0c1417b2
  .word 0x2484e080
  .word 0x0c143696
  .word 0x24040001
  .word 0x0331102a
  .word 0x1040000d
  .word 0x8e100014
  .word 0x8e050000
  .word 0x00000000
  .word 0x0320202d
  .word 0x8e060004
  .word 0x8e070008
  .word 0x8e08000c
  .word 0x0c143358
  .word 0x26100010
  .word 0x27390001
  .word 0x0331102a
  .word 0x5440fff7
  .word 0x8e050000
  .word 0x2650fb98
  .word 0xae19000c
  .word 0x40993000
  .word 0x0000040f
  .word 0x8e020008
  .word 0x58400019
  .word 0x0320802d
  .word 0x03228821
  .word 0x2a220031
  .word 0x14400007
  .word 0x0331102a
  .word 0x3c04007c
  .word 0x0c1417b2
  .word 0x2484e098
  .word 0x0c143696
  .word 0x24040001
  .word 0x0331102a
  .word 0x1040000c
  .word 0x8e100018
  .word 0x8e050000
  .word 0x0320202d
  .word 0x8e060004
  .word 0x8e070008
  .word 0x8e08000c
  .word 0x0c143358
  .word 0x26100010
  .word 0x27390001
  .word 0x0331102a
  .word 0x5440fff7
  .word 0x8e050000
  .word 0x0320802d
  .word 0x2a020030
  .word 0x1040000d
  .word 0x0019cb40
  .word 0x3c02e000
  .word 0x03228821
  .word 0x0200202d
  .word 0x0220302d
  .word 0x0000282d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c143358
  .word 0x26100001
  .word 0x2a020030
  .word 0x1440fff7
  .word 0x26312000
  .word 0xdfbf0030
  .word 0x0320102d
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x3c1a0097
  .word 0x275ab180
  .word 0x7f410010
  .word 0x7f420020
  .word 0x7f430030
  .word 0x7f440040
  .word 0x7f450050
  .word 0x7f460060
  .word 0x7f470070
  .word 0x7f480080
  .word 0x7f490090
  .word 0x7f4a00a0
  .word 0x7f4b00b0
  .word 0x7f4c00c0
  .word 0x7f4d00d0
  .word 0x7f4e00e0
  .word 0x7f4f00f0
  .word 0x7f500100
  .word 0x7f510110
  .word 0x7f520120
  .word 0x7f530130
  .word 0x7f540140
  .word 0x7f550150
  .word 0x7f560160
  .word 0x7f570170
  .word 0x7f580180
  .word 0x7f590190
  .word 0x7f5c01c0
  .word 0x7f5d01d0
  .word 0x7f5e01e0
  .word 0x7f5f01f0
  .word 0x00001010
  .word 0x3c010097
  .word 0xfc22b380
  .word 0x70001010
  .word 0x3c010097
  .word 0xfc22b388
  .word 0x00001012
  .word 0x3c010097
  .word 0xfc22b390
  .word 0x70001012
  .word 0x3c010097
  .word 0xfc22b398
  .word 0x00001028
  .word 0x3c010097
  .word 0xfc22b3a0
  .word 0x40046000
  .word 0x40056800
  .word 0x40067000
  .word 0x40074000
  .word 0x3c080097
  .word 0x2508b180
  .word 0x3c010097
  .word 0xac26b3a8
  .word 0x3c010051
  .word 0x2421d140
  .word 0x40817000
  .word 0x0000040f
  .word 0x40016000
  .word 0x2402fffe
  .word 0x00220824
  .word 0x40816000
  .word 0x0000040f
  .word 0x42000018
  .word 0x3c010078
  .word 0x8c21f898
  .word 0x3c1d0097
  .word 0x0020f809
  .word 0x27bdb180
  .word 0x2403ffac
  .word 0x0000000c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x40016000
  .word 0x241affe4
  .word 0x003a0824
  .word 0x40816000
  .word 0x0000040f
  .word 0x3c020097
  .word 0x8c42b3a8
  .word 0x40827000
  .word 0x0000040f
  .word 0x3c020097
  .word 0xdc42b380
  .word 0x00400011
  .word 0x3c020097
  .word 0xdc42b388
  .word 0x70400011
  .word 0x3c020097
  .word 0xdc42b390
  .word 0x00400013
  .word 0x3c020097
  .word 0xdc42b398
  .word 0x70400013
  .word 0x3c020097
  .word 0xdc42b3a0
  .word 0x00400029
  .word 0x0000040f
  .word 0x3c1a0097
  .word 0x275ab180
  .word 0x7b410010
  .word 0x7b420020
  .word 0x7b430030
  .word 0x7b440040
  .word 0x7b450050
  .word 0x7b460060
  .word 0x7b470070
  .word 0x7b480080
  .word 0x7b490090
  .word 0x7b4a00a0
  .word 0x7b4b00b0
  .word 0x7b4c00c0
  .word 0x7b4d00d0
  .word 0x7b4e00e0
  .word 0x7b4f00f0
  .word 0x7b500100
  .word 0x7b510110
  .word 0x7b520120
  .word 0x7b530130
  .word 0x7b540140
  .word 0x7b550150
  .word 0x7b560160
  .word 0x7b570170
  .word 0x7b580180
  .word 0x7b590190
  .word 0x7b5c01c0
  .word 0x7b5d01d0
  .word 0x7b5e01e0
  .word 0x7b5f01f0
  .word 0x401a6000
  .word 0x375a0013
  .word 0x409a6000
  .word 0x0000040f
  .word 0x42000018
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x3c1a0097
  .word 0x275ab180
  .word 0x7f410010
  .word 0x7f420020
  .word 0x7f430030
  .word 0x7f440040
  .word 0x7f450050
  .word 0x7f460060
  .word 0x7f470070
  .word 0x7f480080
  .word 0x7f490090
  .word 0x7f4a00a0
  .word 0x7f4b00b0
  .word 0x7f4c00c0
  .word 0x7f4d00d0
  .word 0x7f4e00e0
  .word 0x7f4f00f0
  .word 0x7f500100
  .word 0x7f510110
  .word 0x7f520120
  .word 0x7f530130
  .word 0x7f540140
  .word 0x7f550150
  .word 0x7f560160
  .word 0x7f570170
  .word 0x7f580180
  .word 0x7f590190
  .word 0x7f5c01c0
  .word 0x7f5d01d0
  .word 0x7f5e01e0
  .word 0x7f5f01f0
  .word 0x00001010
  .word 0x3c010097
  .word 0xfc22b380
  .word 0x70001010
  .word 0x3c010097
  .word 0xfc22b388
  .word 0x00001012
  .word 0x3c010097
  .word 0xfc22b390
  .word 0x70001012
  .word 0x3c010097
  .word 0xfc22b398
  .word 0x00001028
  .word 0x3c010097
  .word 0xfc22b3a0
  .word 0x40046000
  .word 0x40056800
  .word 0x40067000
  .word 0x40074000
  .word 0x4008b800
  .word 0x3c090097
  .word 0x2529b180
  .word 0x3c010051
  .word 0x2421d37c
  .word 0x40817000
  .word 0x0000040f
  .word 0x40016000
  .word 0x2402fffe
  .word 0x00220824
  .word 0x40816000
  .word 0x0000040f
  .word 0x42000018
  .word 0x30a2007c
  .word 0x3c010078
  .word 0x00220821
  .word 0x8c21f8a0
  .word 0x3c1d0097
  .word 0x0020f809
  .word 0x27bdb180
  .word 0x03ffffcd
  .word 0x00000000
}
// FUN_0050D3A0
asm bool FUN_0050d3a0(void)
{
  .set noreorder
  .word 0x40036000
  .word 0x3c020001
  .word 0x00621824
  .word 0x1060000d
  .word 0x0003202b
  .word 0x00000000
  .word 0x42000039
  .word 0x0000040f
  .word 0x40026000
  .word 0x3c030001
  .word 0x00431024
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fff8
  .word 0x00000000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x0000202d
  .word 0x03e00008
  .word 0x0080102d
}
#pragma alias FUN_0050d3a0_u32 FUN_0050d3a0
extern u32 FUN_0050d3a0_u32(void);
#pragma alias FUN_0050d3a0_long FUN_0050d3a0
extern long FUN_0050d3a0_long(void);
#pragma alias FUN_0050d3a0_int FUN_0050d3a0
extern int FUN_0050d3a0_int(void);
// FUN_0050D3F0
asm u32 FUN_0050d3f0(void)
{
  .set noreorder
  .word 0x40026000
  .word 0x3c030001
  .word 0x00431024
  .word 0x42000038
  .word 0x03e00008
  .word 0x0002102b
}
// FUN_0050D408
asm void FUN_0050d408(void)
{
  .set noreorder
  .word 0x3c02007c
  .word 0x3c05007c
  .word 0x27bdffb0
  .word 0x24030001
  .word 0x2442e0b0
  .word 0x24a5e0c0
  .word 0xffbf0040
  .word 0x03a0202d
  .word 0xafa20014
  .word 0xafa30028
  .word 0xafa50034
  .word 0xafa30004
  .word 0xafa30008
  .word 0x0c140c58
  .word 0xafa30024
  .word 0x3c030078
  .word 0x27a40020
  .word 0x0c140c58
  .word 0xac62fbd0
  .word 0x3c030078
  .word 0xdfbf0040
  .word 0xac62fbd4
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x3c030078
  .word 0x03e00008
  .word 0x8c62fbd4
  .word 0x00000000
}
// FUN_0050D478
asm u32 * FUN_0050d478(u32 *param_1,u32 param_2,u32 param_3)
{
  .word 0x2403005a;
  .word 0x0000000c;
  .word 0x03e00008;
  .word 0x00000000;
  .word 0x00063082;
  .word 0x10c0000a;
  .word 0x0000382d;
  .word 0x00000000;
  .word 0x8ca30000;
  .word 0x24e70001;
  .word 0x24a50004;
  .word 0x00e6102b;
  .word 0xac830000;
  .word 0x24840004;
  .word 0x1440fff9;
  .word 0x00000000;
  .word 0x03e00008;
  .word 0x0000102d;
  .word 0x8c820000;
  .word 0x1046000b;
  .word 0x0085102b;
  .word 0x5040000a;
  .word 0x0002200a;
  .word 0x24840004;
  .word 0x8c820000;
  .word 0x10460005;
  .word 0x0085102b;
  .word 0x5440fffc;
  .word 0x24840004;
  .word 0x10000002;
  .word 0x0002200a;
  .word 0x0002200a;
  .word 0x03e00008;
  .word 0x0080102d;
}
// FUN_0050D500
int FUN_0050d500(u32 param_1,u32 param_2,u32 param_3)

{
  PS2_SYSCALL(0x83);
}
// FUN_0050D510
asm u32 FUN_0050d510(int param_1)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffe0
  .word 0x8c45fbb8
  .word 0x00041880
  .word 0xffbf0010
  .word 0x03a0202d
  .word 0x24060004
  .word 0x0c14351e
  .word 0x00a32821
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#pragma optimization_level 3
// FUN_0050D548
asm void FUN_0050d548(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c020078
  .word 0xffb50050
  .word 0xffb40040
  .word 0x3c150051
  .word 0xffb30030
  .word 0x3c140051
  .word 0xffb20020
  .word 0xffb10010
  .word 0xffb00000
  .word 0xffbf0070
  .word 0x2450fbc0
  .word 0xffb60060
  .word 0x8c44fbc0
  .word 0x0c143592
  .word 0x8e050004
  .word 0x8e05000c
  .word 0x0c143592
  .word 0x8e040008
  .word 0x3c048000
  .word 0x3c058008
  .word 0x0c143540
  .word 0x26a6d4c0
  .word 0x0040982d
  .word 0x3c048000
  .word 0x3c058008
  .word 0x0c143540
  .word 0x2686d488
  .word 0x2671fdf4
  .word 0x0040902d
  .word 0x2650fe98
  .word 0x12300014
  .word 0x3c160078
  .word 0x0230102b
  .word 0x10400007
  .word 0x26640004
  .word 0x3c058008
  .word 0x0c143540
  .word 0x26a6d4c0
  .word 0x0040982d
  .word 0x10000007
  .word 0x2671fdf4
  .word 0x26440004
  .word 0x3c058008
  .word 0x0c143540
  .word 0x2686d488
  .word 0x0040902d
  .word 0x2650fe98
  .word 0x1630fff1
  .word 0x0230102b
  .word 0x10000002
  .word 0xaed1fbb8
  .word 0xaed1fbb8
  .word 0xdfbf0070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}
#pragma optimization_level 2

// FUN_0050D648 RFU116_SetSyscall
void FUN_0050d648(void) { PS2_SYSCALL(0x74); }

#pragma optimization_level 3
#pragma tailcall on
// FUN_0050D658
#pragma schedule on
asm void FUN_0050d658(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c143502
  .word 0x00000000
  .word 0x0c143552
  .word 0x00000000
  .word 0x0c1436ce
  .word 0x00000000
  .word 0x0c14372c
  .word 0x24040002
  .word 0x0c1437bc
  .word 0x00000000
  .word 0x0c140fce
  .word 0x00000000
  .word 0x0c1435e0
  .word 0x00000000
  .word 0x0c14331e
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x08143cf4
  .word 0x27bd0010
  .word 0x00000000
}
#pragma schedule off
#pragma optimization_level 2
#pragma tailcall off

// FUN_0050D6B0 RFU116_SetSyscall
void FUN_0050d6b0(void) { PS2_SYSCALL(0x74); }

// FUN_0050D6C0
asm u32 FUN_0050d6c0(u32 param_1,u32 param_2,u32 param_3)
{
  .word 0x2403005a;
  .word 0x0000000c;
  .word 0x03e00008;
  .word 0x00000000;
  .word 0x00063082;
  .word 0x10c0000a;
  .word 0x0000382d;
  .word 0x00000000;
  .word 0x8ca30000;
  .word 0x24e70001;
  .word 0x24a50004;
  .word 0x00e6102b;
  .word 0xac830000;
  .word 0x24840004;
  .word 0x1440fff9;
  .word 0x00000000;
  .word 0x03e00008;
  .word 0x0000102d;
}

// FUN_0050D708 RFU091
u64 FUN_0050d708(u64 param_1) { PS2_SYSCALL(0x5b); }

// FUN_0050D718
asm bool FUN_0050d718(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00010
  .word 0xffbf0020
  .word 0x0c140c84
  .word 0x03a0202d
  .word 0x8fa30000
  .word 0x3c02ffff
  .word 0x34421fff
  .word 0x27b00004
  .word 0x00621824
  .word 0x0200202d
  .word 0x34632000
  .word 0x0c140c80
  .word 0xafa30004
  .word 0x0c140c84
  .word 0x0200202d
  .word 0x0c140c80
  .word 0x03a0202d
  .word 0x8fa20004
  .word 0xdfbf0020
  .word 0x00021342
  .word 0xdfb00010
  .word 0x30420007
  .word 0x2c420001
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050D780
asm void FUN_0050d780(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0xffb20020
  .word 0xffb10010
  .word 0x0c1435c6
  .word 0xffb00000
  .word 0x1040001e
  .word 0x3c020078
  .word 0x24120002
  .word 0x24500380
  .word 0x8c440380
  .word 0x8e050004
  .word 0x0c1435ac
  .word 0x26110010
  .word 0x3c050078
  .word 0x3c048007
  .word 0x240607a8
  .word 0x24a5fbd8
  .word 0x0c1435b0
  .word 0x34844000
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x0c140cf8
  .word 0x24040002
  .word 0x8e040008
  .word 0x0c1435ac
  .word 0x8e05000c
  .word 0x8e240000
  .word 0x0c1435c2
  .word 0x26520001
  .word 0x8e240000
  .word 0x0040282d
  .word 0x0c1435ac
  .word 0x26310008
  .word 0x2e420003
  .word 0x5440fff8
  .word 0x8e240000
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
// FUN_0050D830
asm u32 FUN_0050d830(u32 param_1,u32 param_2,u32 param_3)
{
  .word 0x2403005a;
  .word 0x0000000c;
  .word 0x03e00008;
  .word 0x00000000;
  .word 0x10c00009;
  .word 0x0000382d;
  .word 0x90a30000;
  .word 0x24e70001;
  .word 0x24a50001;
  .word 0x00e6102b;
  .word 0xa0830000;
  .word 0x24840001;
  .word 0x1440fff9;
  .word 0x00000000;
  .word 0x03e00008;
  .word 0x0000102d;
}

// FUN_0050D870 RFU116_SetSyscall
void FUN_0050d870(void) { PS2_SYSCALL(0x74); }

// FUN_0050D880
asm int FUN_0050d880(void)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c020078
  .word 0xffb30040
  .word 0x3c030078
  .word 0x8c53f8e0
  .word 0x24670398
  .word 0xffb50060
  .word 0xffb40050
  .word 0x26620040
  .word 0xffb20030
  .word 0x0040a82d
  .word 0xffb10020
  .word 0x00a0902d
  .word 0xffb00010
  .word 0x00c0a02d
  .word 0xffbf0070
  .word 0x0080802d
  .word 0x8c640398
  .word 0x8ce50004
  .word 0x0c14361c
  .word 0xafa20000
  .word 0x2a430010
  .word 0x2402000f
  .word 0x0260202d
  .word 0x0043900a
  .word 0x03a0282d
  .word 0x0c14360c
  .word 0x24060004
  .word 0x26730004
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x24510001
  .word 0x8fa40000
  .word 0x0200282d
  .word 0x0c14360c
  .word 0x0220302d
  .word 0x8fa30000
  .word 0x00711821
  .word 0x1a400015
  .word 0xafa30000
  .word 0x0280802d
  .word 0x00000000
  .word 0x0260202d
  .word 0x03a0282d
  .word 0x24060004
  .word 0x0c14360c
  .word 0x26730004
  .word 0x2652ffff
  .word 0x0c1490e2
  .word 0x8e040000
  .word 0x24510001
  .word 0x8e050000
  .word 0x8fa40000
  .word 0x0220302d
  .word 0x0c14360c
  .word 0x26100004
  .word 0x8fa30000
  .word 0x00711821
  .word 0x1640ffef
  .word 0xafa30000
  .word 0x02a0102d
  .word 0xdfbf0070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0080
}



// FUN_0050D998 thunk_FUN_0050ce00
asm void thunk_FUN_0050ce00(void)
{
  .set noreorder
  .word 0x08143380
  .word 0x00000000
  .word 0x27bdffc0
  .word 0xffb10010
  .word 0x0080882d
  .word 0xffb20020
  .word 0xffb00000
  .word 0x00a0902d
  .word 0x00c0802d
  .word 0x3c04007c
  .word 0x0200282d
  .word 0xffbf0030
  .word 0x2484e0d0
  .word 0x0c143620
  .word 0x00e0302d
  .word 0x0c143666
  .word 0x00000000
  .word 0x3c020078
  .word 0x0220202d
  .word 0x8c47f8e0
  .word 0x0240282d
  .word 0x0200302d
  .word 0x0c140b6c
  .word 0x24e70004
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0050DA10
asm void FUN_0050da10(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffb00000
  .word 0xffbf0020
  .word 0x0c143620
  .word 0x00a0882d
  .word 0x0c143666
  .word 0x0040802d
  .word 0x3c020078
  .word 0x0200202d
  .word 0x8c46f8e0
  .word 0x0220282d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0x24c60004
  .word 0xdfb00000
  .word 0x08140b68
  .word 0x27bd0030
}
// FUN_0050DA58
asm void FUN_0050da58(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c143666
  .word 0x0080802d
  .word 0x0200202d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x08140b60
  .word 0x27bd0020
}
#pragma optimization_level 3
#pragma schedule on
#pragma tailcall on
// FUN_0050DA80
asm void FUN_0050da80(u32 param_1,u32 param_1_hi)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x00a0302d
  .word 0xffb00000
  .word 0x0080802d
  .word 0xffbf0010
  .word 0x3c04007c
  .word 0x0200282d
  .word 0x0c143620
  .word 0x2484e0d0
  .word 0x0c143666
  .word 0x00000000
  .word 0x3c020078
  .word 0x0200202d
  .word 0x8c45f8e0
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x24a50004
  .word 0x08140d60
  .word 0x27bd0020
  .word 0x00000000
}
#pragma tailcall off
#pragma schedule off
#pragma optimization_level 2

// FUN_0050DAD0 RFU116_SetSyscall
void FUN_0050dad0(void) { PS2_SYSCALL(0x74); }

// FUN_0050DAE0
asm u32 FUN_0050dae0(u32 param_1,u32 param_2,u32 param_3)
{
  .word 0x2403005a;
  .word 0x0000000c;
  .word 0x03e00008;
  .word 0x00000000;
  .word 0x00063082;
  .word 0x10c0000a;
  .word 0x0000382d;
  .word 0x00000000;
  .word 0x8ca30000;
  .word 0x24e70001;
  .word 0x24a50004;
  .word 0x00e6102b;
  .word 0xac830000;
  .word 0x24840004;
  .word 0x1440fff9;
  .word 0x00000000;
  .word 0x03e00008;
  .word 0x0000102d;
}

// FUN_0050DB28 RFU091
u64 FUN_0050db28(u64 param_1) { PS2_SYSCALL(0x5b); }

// FUN_0050DB38
asm void FUN_0050db38(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c021000
  .word 0xffbf0030
  .word 0x34421810
  .word 0xffb20020
  .word 0xffb10010
  .word 0xffb00000
  .word 0x8c430000
  .word 0x30630100
  .word 0x14600026
  .word 0xdfbf0030
  .word 0x3c020078
  .word 0x24120002
  .word 0x24500b08
  .word 0x8c440b08
  .word 0x8e050004
  .word 0x0c1436b4
  .word 0x26110010
  .word 0x3c050078
  .word 0x3c048007
  .word 0x24a503a0
  .word 0x34846000
  .word 0x0c1436b8
  .word 0x24060740
  .word 0x3c050078
  .word 0x3c040008
  .word 0x24a50ae0
  .word 0x34842000
  .word 0x0c1436b8
  .word 0x24060028
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x0c140cf8
  .word 0x24040002
  .word 0x8e040008
  .word 0x0c1436b4
  .word 0x8e05000c
  .word 0x8e240000
  .word 0x0c1436ca
  .word 0x26520001
  .word 0x8e240000
  .word 0x0040282d
  .word 0x0c1436b4
  .word 0x26310008
  .word 0x2e420008
  .word 0x5440fff8
  .word 0x8e240000
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
// FUN_0050DC10
asm void FUN_0050dc10(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x40036000
  .word 0x3c020001
  .word 0x00621824
  .word 0x1060000b
  .word 0x3c060001
  .word 0x00000000
  .word 0x42000039
  .word 0x0000040f
  .word 0x40026000
  .word 0x00461024
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fff8
  .word 0x00000000
  .word 0x40026000
  .word 0x0000040f
  .word 0x34420006
  .word 0x38420002
  .word 0x00431025
  .word 0x40826000
  .word 0x0000040f
  .word 0xac850000
  .word 0x409ff000
  .word 0x0000040f
  .word 0x42000018
  .word 0x03e00008
  .word 0x00000000
}
// Argument-materialization wall, measured: nine source variants (plain literal,
// explicit u32 cast, value form, temp variable, schedule off, optimization_level
// <=2, global_optimizer off, UL suffix) all keep mwcc's temp bounce
// (lui v0,0xb000; delay ori a0,v0,0x0010). Retail materializes hi and lo
// directly in a0 across the j delay slot. Classified per docs/matching.md
// "Known compiler walls": register allocation + delay-slot placement in
// wrapper/tail-call codegen (related to the W414 8/20-byte tailcall frames).
// The forwarded address is 0xb0000010 (retail); the old 0xb0001000 read was
// wrong and is corrected. The temp bounce (nd 2) is the only residual
// difference.
#pragma optimization_level 3
#pragma tailcall on
/* DUMMYDUMB session 2026-10-20 (2nd pass): FUN_0050DC80/90/A0 are all down to
 * 2 differing bytes and the residual is the same in each: ours builds the
 * constant in a scratch register (`lui $v0,0xb000` then `ori $a0,$v0,0x1000`),
 * retail builds it in the argument register (`lui $a0,0xb000` then `ori
 * $a0,$a0,0x1000`). Probed: the constant via a local, (u32) casts, 0xb0000000 |
 * 0x1000, 0xb0000000 + 0x1000, dropping the tailcall pragma, and dropping or
 * downgrading the optimization_level 3 pragma (9 bytes, worse - the tail call
 * needs level 3). Argument values and order are identical to retail. Confirmed
 * wall: register choice for building the constant. */
// FUN_0050DC80
asm void FUN_0050dc80(u32 param_1)
{
  .set noreorder
  .word 0x0080282d
  .word 0x3c04b000
  .word 0x08143704
  .word 0x34841000
}
#pragma optimization_level 3
#pragma tailcall on
// FUN_0050DC90
asm void FUN_0050dc90(u32 param_1)
{
  .set noreorder
  .word 0x0080282d
  .word 0x3c04b000
  .word 0x08143704
  .word 0x34841010
}
// FUN_0050DCA0
asm void FUN_0050dca0(u32 param_1)
{
  .set noreorder
  .word 0x0080282d
  .word 0x3c04b000
  .word 0x08143704
  .word 0x34841020
}
#pragma tailcall off
#pragma optimization_level 2
// FUN_0050DCB0
asm u32 FUN_0050dcb0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffb20020
  .word 0xffb40040
  .word 0x3c120078
  .word 0xffb10010
  .word 0xffbf0050
  .word 0x26510b48
  .word 0xffb30030
  .word 0xffb00000
  .word 0x8e220008
  .word 0x04400004
  .word 0x0080a02d
  .word 0x3c028000
  .word 0x1000003f
  .word 0x34428001
  .word 0x3c130097
  .word 0xfe400b48
  .word 0x2670b3c0
  .word 0xae200010
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24062000
  .word 0xae300014
  .word 0x26032000
  .word 0x2402007f
  .word 0x26101fc0
  .word 0x00000000
  .word 0xae030000
  .word 0x2442ffff
  .word 0x2610ffc0
  .word 0x2463ffc0
  .word 0x00000000
  .word 0x0441fffa
  .word 0x00000000
  .word 0x2662b3c0
  .word 0x0c143bf8
  .word 0xac401fc0
  .word 0x3c050051
  .word 0x2404000b
  .word 0x24a5e250
  .word 0x0000302d
  .word 0x0c140b94
  .word 0x0000382d
  .word 0x0040182d
  .word 0x04630004
  .word 0x26420b48
  .word 0x3c028000
  .word 0x1000001c
  .word 0x34429021
  .word 0x0c1434e8
  .word 0xac430008
  .word 0x3c031000
  .word 0x0040882d
  .word 0x34631010
  .word 0x3c02ffff
  .word 0x8c700000
  .word 0x3442fffc
  .word 0x02021024
  .word 0x00548025
  .word 0x36100300
  .word 0x32020080
  .word 0x14400005
  .word 0x0000202d
  .word 0x0c143720
  .word 0x36100c80
  .word 0x0c143728
  .word 0x3404ffff
  .word 0x0c143724
  .word 0x0200202d
  .word 0x0c140f2a
  .word 0x2404000b
  .word 0x12200004
  .word 0x0000102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}
// FUN_0050DE08
asm u32 FUN_0050de08(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb20020
  .word 0xffb00000
  .word 0x3c120078
  .word 0xffbf0030
  .word 0x26500b48
  .word 0xffb10010
  .word 0x8e020008
  .word 0x04410004
  .word 0x00000000
  .word 0x3c028000
  .word 0x1000001c
  .word 0x34428001
  .word 0x8e020010
  .word 0x10400004
  .word 0x00000000
  .word 0x3c028000
  .word 0x10000016
  .word 0x34420010
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x8e050008
  .word 0x0040882d
  .word 0x0c140b98
  .word 0x2404000b
  .word 0x14400008
  .word 0x2402ffff
  .word 0x0c140f10
  .word 0x2404000b
  .word 0x0c143724
  .word 0x24040c00
  .word 0x0c143720
  .word 0x0000202d
  .word 0x2402ffff
  .word 0xfe400b48
  .word 0x12200003
  .word 0xae020008
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x3c020078
  .word 0x8c430b50
  .word 0x04610004
  .word 0x3c031000
  .word 0x3c028000
  .word 0x03e00008
  .word 0x34428001
  .word 0x34631010
  .word 0x8c620000
  .word 0x03e00008
  .word 0x30420003
  .word 0x00000000
}
// FUN_0050DEF0
asm u32 FUN_0050def0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c021000
  .word 0x34421010
  .word 0x8c420000
  .word 0x30430080
  .word 0x10600007
  .word 0x00000000
  .word 0x12000013
  .word 0x24020001
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x1000000f
  .word 0x24020001
  .word 0x3c04ffff
  .word 0x3484f3ff
  .word 0x00442024
  .word 0x0c143724
  .word 0x34840080
  .word 0x0c143942
  .word 0x00000000
  .word 0x0c143800
  .word 0x0040202d
  .word 0x12000004
  .word 0x0000102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_0050DF80
asm u32 FUN_0050df80(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0040802d
  .word 0x3c021000
  .word 0x34421010
  .word 0x8c420000
  .word 0x30430080
  .word 0x14600007
  .word 0x00000000
  .word 0x1200000e
  .word 0x0000102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x1000000a
  .word 0x0000102d
  .word 0x3c04ffff
  .word 0x3484f37f
  .word 0x0c143724
  .word 0x00442024
  .word 0x12000004
  .word 0x24020001
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_0050E000
asm void FUN_0050e000(long param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020078
  .word 0xffbf0030
  .word 0x24420b48
  .word 0xffb20020
  .word 0x0080382d
  .word 0xffb10010
  .word 0xffb00000
  .word 0x8c43001c
  .word 0x04610054
  .word 0x8c460018
  .word 0x3c021000
  .word 0x34421010
  .word 0x8c520000
  .word 0x54c0000c
  .word 0xdcc20020
  .word 0x0c143728
  .word 0x0000202d
  .word 0x3c04ffff
  .word 0xdfbf0030
  .word 0x3484f7ff
  .word 0xdfb10010
  .word 0x02442024
  .word 0xdfb00000
  .word 0xdfb20020
  .word 0x08143724
  .word 0x27bd0040
  .word 0xdcc30010
  .word 0xdcc40018
  .word 0x0043102d
  .word 0x8cc60000
  .word 0x10c00019
  .word 0x0044802f
  .word 0xdcc20020
  .word 0x66037333
  .word 0xdcc40010
  .word 0xdcc50018
  .word 0x0044102d
  .word 0x0045102f
  .word 0x0043182b
  .word 0x10600010
  .word 0x32510003
  .word 0x0040802d
  .word 0x00000000
  .word 0x8cc60000
  .word 0x10c0000c
  .word 0x66037333
  .word 0xdcc20020
  .word 0xdcc40010
  .word 0xdcc50018
  .word 0x0044102d
  .word 0x0045102f
  .word 0x0043182b
  .word 0x50600005
  .word 0x0207102f
  .word 0x1000fff4
  .word 0x0040802d
  .word 0x32510003
  .word 0x0207102f
  .word 0x28427333
  .word 0x10400013
  .word 0x3c021000
  .word 0x00112880
  .word 0x34421000
  .word 0x24047333
  .word 0x00a42016
  .word 0x8c430000
  .word 0x0004203c
  .word 0x0004203f
  .word 0x0c143728
  .word 0x00642021
  .word 0x3c04ffff
  .word 0xdfbf0030
  .word 0x3484f7ff
  .word 0xdfb10010
  .word 0x02442024
  .word 0xdfb00000
  .word 0xdfb20020
  .word 0x08143724
  .word 0x27bd0040
  .word 0x3c04ffff
  .word 0x3484f7ff
  .word 0x0c143724
  .word 0x02442024
  .word 0x00112080
  .word 0xdfbf0030
  .word 0x00902016
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0x0004203c
  .word 0x0004203f
  .word 0xdfb00000
  .word 0x08143728
  .word 0x27bd0040
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0050E190
asm void FUN_0050e190(u32 *param_1)
{
  .set noreorder
  .word 0x0080302d
  .word 0x3c090078
  .word 0xdcc20020
  .word 0x25250b48
  .word 0xdcc30010
  .word 0x0000402d
  .word 0xdcc40018
  .word 0x0043102d
  .word 0x8ca50018
  .word 0x10000003
  .word 0x0044382f
  .word 0x00000000
  .word 0x8d050000
  .word 0x50a0000a
  .word 0xacc80004
  .word 0xdca20020
  .word 0xdca30010
  .word 0xdca40018
  .word 0x0043102d
  .word 0x0044102f
  .word 0x00e2102b
  .word 0x5040fff6
  .word 0x00a0402d
  .word 0xacc80004
  .word 0x10a00002
  .word 0xacc50000
  .word 0xaca60004
  .word 0x11000003
  .word 0x25220b48
  .word 0x03e00008
  .word 0xad060000
  .word 0x03e00008
  .word 0xac460018
  .word 0x00000000
}
// FUN_0050E218
asm int FUN_0050e218(int *param_1)
{
  .set noreorder
  .word 0x8c820004
  .word 0x10400003
  .word 0x8c830000
  .word 0x10000003
  .word 0xac430000
  .word 0x3c020078
  .word 0xac430b60
  .word 0x50600004
  .word 0xac800004
  .word 0x8c820004
  .word 0xac620004
  .word 0xac800004
  .word 0x03e00008
  .word 0x0060102d
}
// FUN_0050E250
asm u64 FUN_0050e250(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x3c031000
  .word 0xffb60060
  .word 0x34631010
  .word 0xffbf0090
  .word 0x00c0b02d
  .word 0xffbe0080
  .word 0xffb70070
  .word 0xffb50050
  .word 0xffb40040
  .word 0xffb30030
  .word 0xffb20020
  .word 0xffb10010
  .word 0xffb00000
  .word 0x8c620000
  .word 0x30420400
  .word 0x1040005e
  .word 0x3c150078
  .word 0x26a20b48
  .word 0x8c500018
  .word 0x1200005a
  .word 0x02a0f02d
  .word 0x02a0a02d
  .word 0x24173999
  .word 0x3c021000
  .word 0x00000000
  .word 0x3c031000
  .word 0x34421000
  .word 0x34631010
  .word 0x8c460000
  .word 0x8c710000
  .word 0xde040020
  .word 0xde020010
  .word 0x32250800
  .word 0xde030018
  .word 0x0082202d
  .word 0x10a0000a
  .word 0x0083982f
  .word 0xde820b48
  .word 0x3c04ffff
  .word 0x3484fbff
  .word 0x64420001
  .word 0x02242024
  .word 0x0c143724
  .word 0xfe820b48
  .word 0x3c061000
  .word 0x8cc61000
  .word 0xde840b48
  .word 0x0006103c
  .word 0x0002103e
  .word 0x32230003
  .word 0x00042438
  .word 0x00031880
  .word 0x00822025
  .word 0x00648814
  .word 0x0233102b
  .word 0x14400036
  .word 0x26920b48
  .word 0x0c143886
  .word 0x0200202d
  .word 0x8e030008
  .word 0x00103900
  .word 0xde060018
  .word 0xde040010
  .word 0x00e31825
  .word 0x0226302d
  .word 0xae43001c
  .word 0x00c4302f
  .word 0xae420020
  .word 0x8e1c002c
  .word 0x8e040008
  .word 0x02c0402d
  .word 0x8e020028
  .word 0x00e42025
  .word 0xde050020
  .word 0x0040f809
  .word 0x8e070030
  .word 0x0040282d
  .word 0x14a00007
  .word 0x2402ffff
  .word 0x8e03000c
  .word 0x3c02ffff
  .word 0x3442fffd
  .word 0x00621824
  .word 0x10000014
  .word 0xae03000c
  .word 0x14a2000b
  .word 0x24023998
  .word 0xae000008
  .word 0xae00000c
  .word 0x8e430014
  .word 0x8e420010
  .word 0xae030000
  .word 0x2442ffff
  .word 0xae500014
  .word 0xae420010
  .word 0x10000009
  .word 0x27c20b48
  .word 0xde030020
  .word 0x0045102b
  .word 0x0200202d
  .word 0x02e2280a
  .word 0x0065182d
  .word 0x0c143864
  .word 0xfe030020
  .word 0x27c20b48
  .word 0x8c500020
  .word 0x1600ffae
  .word 0x3c021000
  .word 0x10000002
  .word 0x26a40b48
  .word 0x26a40b48
  .word 0x2403ffff
  .word 0xac83001c
  .word 0x3c021000
  .word 0x34421000
  .word 0x3c031000
  .word 0x8c450000
  .word 0x34631010
  .word 0x8c700000
  .word 0x32020800
  .word 0x1040000a
  .word 0xac800020
  .word 0xdea20b48
  .word 0x3c04ffff
  .word 0x3484fbff
  .word 0x64420001
  .word 0x02042024
  .word 0x0c143724
  .word 0xfea20b48
  .word 0x3c051000
  .word 0x8ca51000
  .word 0xdea20b48
  .word 0x0005183c
  .word 0x0003183e
  .word 0x32040003
  .word 0x00021438
  .word 0x00042080
  .word 0x00431025
  .word 0x0c143800
  .word 0x00822014
  .word 0x3c021000
  .word 0x8c421000
  .word 0x3c031000
  .word 0x8c631010
  .word 0x30620800
  .word 0x1040000a
  .word 0x00000000
  .word 0xdea20b48
  .word 0x3c04ffff
  .word 0x3484fbff
  .word 0x64420001
  .word 0x00642024
  .word 0x0c143724
  .word 0xfea20b48
  .word 0x3c021000
  .word 0x8c421000
  .word 0xdea20b48
  .word 0x0000000f
  .word 0x42000038
  .word 0xdfbf0090
  .word 0x0000102d
  .word 0xdfbe0080
  .word 0xdfb70070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00a0
  .word 0x00000000
}
// FUN_0050E508
asm long FUN_0050e508(void)
{
  .set noreorder
  .word 0x3c031000
  .word 0x3c040078
  .word 0x34631000
  .word 0x9c620000
  .word 0x8c680010
  .word 0xdc8a0b48
  .word 0x31090800
  .word 0x11200003
  .word 0x24090002
  .word 0x9c620000
  .word 0x654a0001
  .word 0x31080003
  .word 0x000a5438
  .word 0x0008480a
  .word 0x004a1025
  .word 0x01094814
  .word 0x01221014
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
// FUN_0050E558
asm long FUN_0050e558(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x3c031000
  .word 0x3c040078
  .word 0x34631000
  .word 0x9c700000
  .word 0x8c680010
  .word 0xdc8a0b48
  .word 0x31090800
  .word 0x11200003
  .word 0x24090002
  .word 0x9c700000
  .word 0x654a0001
  .word 0x31080003
  .word 0x000a5438
  .word 0x0008480a
  .word 0x020a8025
  .word 0x01094814
  .word 0x01308014
  .word 0x10400004
  .word 0x0200102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_0050E5D8
asm u32 FUN_0050e5d8(void)
{
  .set noreorder
  .word 0x3c020078
  .word 0x24470b48
  .word 0x8ce60014
  .word 0x14c00004
  .word 0x00000000
  .word 0x3c028000
  .word 0x03e00008
  .word 0x34428005
  .word 0x8ce20010
  .word 0x00062900
  .word 0x8cc40000
  .word 0x24420001
  .word 0xacc00028
  .word 0xace20010
  .word 0xacc0000c
  .word 0xace40014
  .word 0x8ce3000c
  .word 0xfcc00018
  .word 0x24630001
  .word 0xace3000c
  .word 0x8ce2000c
  .word 0x00021040
  .word 0x304203fe
  .word 0x34420001
  .word 0xacc20008
  .word 0x8cc20008
  .word 0x03e00008
  .word 0x00a21025
}
// FUN_0050E648
asm u32 FUN_0050e648(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0xffb00000
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x0c143976
  .word 0x0040802d
  .word 0x12000003
  .word 0x0040882d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050E690
asm u32 FUN_0050e690(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x00041282
  .word 0xffb00000
  .word 0xffbf0030
  .word 0x00028180
  .word 0xffb20020
  .word 0x04800005
  .word 0xffb10010
  .word 0x8e030008
  .word 0x308203ff
  .word 0x10430004
  .word 0x3c120078
  .word 0x3c028000
  .word 0x1000001b
  .word 0x34428002
  .word 0x26510b48
  .word 0x8e22001c
  .word 0x54440004
  .word 0x8e02000c
  .word 0x3c028000
  .word 0x10000014
  .word 0x34420010
  .word 0x30420002
  .word 0x10400007
  .word 0x00000000
  .word 0x0c143886
  .word 0x0200202d
  .word 0x0040182d
  .word 0x8e220020
  .word 0x50500001
  .word 0xae230020
  .word 0xae000008
  .word 0x26430b48
  .word 0xae00000c
  .word 0x0000102d
  .word 0x8c650014
  .word 0x8c640010
  .word 0xae050000
  .word 0x2484ffff
  .word 0xac700014
  .word 0xac640010
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
// FUN_0050E750
asm u32 FUN_0050e750(u32 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x0200202d
  .word 0x0c1439a4
  .word 0x0040882d
  .word 0x12200003
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0050E7A0
asm u32 FUN_0050e7a0(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x3c020078
  .word 0x24430b48
  .word 0x8c620008
  .word 0x04410004
  .word 0x00000000
  .word 0x3c028000
  .word 0x03e00008
  .word 0x34428001
  .word 0x10800003
  .word 0x00000000
  .word 0x8c620010
  .word 0xac820000
  .word 0x10a00005
  .word 0x00000000
  .word 0x8c630010
  .word 0x24020080
  .word 0x00431023
  .word 0xaca20000
  .word 0x03e00008
  .word 0x0000102d
}
#pragma optimization_level 3
// FUN_0050E7F0
asm u32 FUN_0050e7f0(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x00a0882d
  .word 0xffb20020
  .word 0xffbf0030
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x0200202d
  .word 0x0040902d
  .word 0x0c1439e8
  .word 0x0220282d
  .word 0x12400003
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#pragma optimization_level 2
// FUN_0050E850
asm u32 FUN_0050e850(u32 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x00041282
  .word 0xffb00000
  .word 0xffbf0020
  .word 0x00028180
  .word 0x04800005
  .word 0xffb10010
  .word 0x8e030008
  .word 0x308203ff
  .word 0x50430004
  .word 0x3c020078
  .word 0x3c028000
  .word 0x10000019
  .word 0x34428002
  .word 0x24420b48
  .word 0x8c43001c
  .word 0x54640004
  .word 0x8e02000c
  .word 0x3c028000
  .word 0x10000012
  .word 0x34420010
  .word 0x30420001
  .word 0x1440000f
  .word 0x24020001
  .word 0x0c143942
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e02000c
  .word 0xfe110010
  .word 0x34420001
  .word 0x30430002
  .word 0x10600005
  .word 0xae02000c
  .word 0x0c143864
  .word 0x0200202d
  .word 0x0c143800
  .word 0x0220202d
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
#pragma optimization_level 3
// FUN_0050E900
asm u32 FUN_0050e900(u32 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x0200202d
  .word 0x0c143a14
  .word 0x0040882d
  .word 0x12200003
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
#pragma optimization_level 2
#pragma optimization_level 3
// FUN_0050E950
asm u32 FUN_0050e950(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x00041282
  .word 0xffb00000
  .word 0xffbf0030
  .word 0x00028180
  .word 0xffb20020
  .word 0x04800005
  .word 0xffb10010
  .word 0x8e030008
  .word 0x308203ff
  .word 0x50430004
  .word 0x3c020078
  .word 0x3c028000
  .word 0x10000023
  .word 0x34428002
  .word 0x24510b48
  .word 0x8e23001c
  .word 0x54640004
  .word 0x8e02000c
  .word 0x3c028000
  .word 0x1000001c
  .word 0x34420010
  .word 0x30420001
  .word 0x10400019
  .word 0x0000102d
  .word 0x0c143942
  .word 0x00000000
  .word 0x8e05000c
  .word 0x0040902d
  .word 0xde040010
  .word 0x3c02ffff
  .word 0xde030018
  .word 0x3442fffe
  .word 0x0244202f
  .word 0x30a60002
  .word 0x0064182d
  .word 0x00a22824
  .word 0xfe030018
  .word 0x10c00009
  .word 0xae05000c
  .word 0x0c143886
  .word 0x0200202d
  .word 0x0040182d
  .word 0x8e220020
  .word 0x50500001
  .word 0xae230020
  .word 0x0c143800
  .word 0x0240202d
  .word 0x24020001
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#pragma optimization_level 2
// FUN_0050EA30
asm u64 FUN_0050ea30(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x0200202d
  .word 0x0c143a54
  .word 0x0040882d
  .word 0x12200003
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
#pragma optimization_level 3
// FUN_0050EA80
asm long FUN_0050ea80(u32 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb10010
  .word 0x0080882d
  .word 0xffb20020
  .word 0xffb00000
  .word 0x00111282
  .word 0xffb30030
  .word 0x00a0902d
  .word 0xffbf0040
  .word 0x0c1434e8
  .word 0x00028180
  .word 0x06200009
  .word 0x0040982d
  .word 0x8e030008
  .word 0x322203ff
  .word 0x14430005
  .word 0x3c020078
  .word 0x24420b48
  .word 0x8c43001c
  .word 0x54710007
  .word 0x8e02000c
  .word 0x12600016
  .word 0x2402ffff
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x10000012
  .word 0x2402ffff
  .word 0x30420001
  .word 0x10400009
  .word 0xde110018
  .word 0x0c143942
  .word 0x00000000
  .word 0xde030010
  .word 0xfe120018
  .word 0x0043182f
  .word 0xfe020010
  .word 0x10000002
  .word 0x0223882d
  .word 0xfe120018
  .word 0x12600004
  .word 0x0220102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
#pragma optimization_level 2
// FUN_0050EB50
asm long FUN_0050eb50(u32 param_1)
{
  .set noreorder
  .word 0x00041282
  .word 0x04800005
  .word 0x00022980
  .word 0x8ca30008
  .word 0x308203ff
  .word 0x50430003
  .word 0x8ca2000c
  .word 0x03e00008
  .word 0x2402ffff
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0xdca30018
  .word 0xdca20010
  .word 0x03e00008
  .word 0x0043102f
  .word 0x03e00008
  .word 0x0000102d
}
// FUN_0050EB98
asm u64 FUN_0050eb98(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x0200202d
  .word 0x0c143ad4
  .word 0x0040882d
  .word 0x12200003
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0050EBE8
asm long FUN_0050ebe8(u32 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x00041282
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x00028980
  .word 0x04800005
  .word 0xffb00000
  .word 0x8e230008
  .word 0x308203ff
  .word 0x50430003
  .word 0x8e22000c
  .word 0x1000000a
  .word 0x2402ffff
  .word 0x30420001
  .word 0x10400006
  .word 0xde300018
  .word 0x0c143942
  .word 0x00000000
  .word 0xde230010
  .word 0x0043102f
  .word 0x0202802d
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0050EC58
asm u64 FUN_0050ec58(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x0200202d
  .word 0x0c143afa
  .word 0x0040882d
  .word 0x12200003
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0050ECA8
asm u32 FUN_0050eca8(u32 param_1,u64 param_2,long param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x00041282
  .word 0xffb40040
  .word 0xffb30030
  .word 0x00e0a02d
  .word 0xffb20020
  .word 0x00a0982d
  .word 0xffb00000
  .word 0x00c0902d
  .word 0xffbf0050
  .word 0x00028180
  .word 0x04800005
  .word 0xffb10010
  .word 0x8e030008
  .word 0x308203ff
  .word 0x50430004
  .word 0x3c020078
  .word 0x3c028000
  .word 0x10000028
  .word 0x34428002
  .word 0x24510b48
  .word 0x8e23001c
  .word 0x54640004
  .word 0x8e03000c
  .word 0x3c028000
  .word 0x10000021
  .word 0x34420010
  .word 0x30620002
  .word 0x10400008
  .word 0x00000000
  .word 0x0c143886
  .word 0x0200202d
  .word 0x0040182d
  .word 0x8e220020
  .word 0x50500001
  .word 0xae230020
  .word 0x8e03000c
  .word 0x16400006
  .word 0xae120028
  .word 0x3c02ffff
  .word 0x3442fffd
  .word 0x00621024
  .word 0x1000000b
  .word 0xae02000c
  .word 0x34620002
  .word 0xfe130020
  .word 0xae02000c
  .word 0xae1c002c
  .word 0x8e02000c
  .word 0x30420001
  .word 0x10400003
  .word 0xae140030
  .word 0x0c143864
  .word 0x0200202d
  .word 0x0c143942
  .word 0x00000000
  .word 0x0c143800
  .word 0x0040202d
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}
// FUN_0050EDB8
asm u64 FUN_0050edb8(u64 param_1,u64 param_2,u64 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffb30030
  .word 0xffb20020
  .word 0x00e0982d
  .word 0xffb10010
  .word 0x00c0902d
  .word 0xffb00000
  .word 0x00a0882d
  .word 0xffb40040
  .word 0xffbf0050
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x0200202d
  .word 0x0040a02d
  .word 0x0220282d
  .word 0x0240302d
  .word 0x0c143b2a
  .word 0x0260382d
  .word 0x12800003
  .word 0x0040802d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}
// FUN_0050EE38
asm void FUN_0050ee38(long param_1,long param_2,long param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x0080882d
  .word 0xffb20020
  .word 0x00a0802d
  .word 0xffbf0030
  .word 0x00c0902d
  .word 0x0c14bfa6
  .word 0x3c0508ca
  .word 0x0002103c
  .word 0x0002103f
  .word 0x56000001
  .word 0xae020000
  .word 0x12400015
  .word 0x3c0308ca
  .word 0x3c0508ca
  .word 0x00430019
  .word 0x00003012
  .word 0x00001810
  .word 0x0006303c
  .word 0x0003183c
  .word 0x0006303e
  .word 0x00661825
  .word 0x0223182f
  .word 0x00031178
  .word 0x0043102f
  .word 0x000221b8
  .word 0x0082202f
  .word 0x000420f8
  .word 0x0083202d
  .word 0x0c14bfa6
  .word 0x000421b8
  .word 0x0002103c
  .word 0x0002103f
  .word 0xae420000
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0050EEE0
asm long FUN_0050eee0(int param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c0208ca
  .word 0xffb00000
  .word 0x0080802d
  .word 0xffbf0010
  .word 0x00a0202d
  .word 0x72020019
  .word 0x00820019
  .word 0x3c05000f
  .word 0x34a54240
  .word 0x70008010
  .word 0x00003012
  .word 0x0010803c
  .word 0x0006303c
  .word 0x00002010
  .word 0x0006303e
  .word 0x0004203c
  .word 0x00862025
  .word 0x70003012
  .word 0x0006303c
  .word 0x0006303e
  .word 0x0c14bfa6
  .word 0x02068025
  .word 0x0202102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_0050EF50
asm float FUN_0050ef50(u32 param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x04800005
  .word 0xffbf0000
  .word 0x0c14bad8
  .word 0x00000000
  .word 0x10000006
  .word 0x46000046
  .word 0x0004107a
  .word 0x30840001
  .word 0x0c14bad8
  .word 0x00822025
  .word 0x46000040
  .word 0x3c014d0c
  .word 0x3421a000
  .word 0x44810000
  .word 0xdfbf0000
  .word 0x00000000
  .word 0x00000000
  .word 0x46010003
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x3c014d0c
  .word 0x3421a000
  .word 0x44810000
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x00000000
  .word 0x00000000
  .word 0x460c0303
  .word 0x0c14bb68
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
// FUN_0050EFE0
asm u64 FUN_0050efe0(void)
{
  .set noreorder
  .word 0x3c050097
  .word 0x3c030097
  .word 0x24a2d3c0
  .word 0x2404003f
  .word 0xac62d7c0
  .word 0x24430400
  .word 0x244203f0
  .word 0x00000000
  .word 0xac430000
  .word 0x2484ffff
  .word 0x2442fff0
  .word 0x2463fff0
  .word 0x00000000
  .word 0x0481fffa
  .word 0x00000000
  .word 0x24a3d3c0
  .word 0x0000102d
  .word 0x03e00008
  .word 0xac6003f0
  .word 0x00000000
}
// FUN_0050F030
asm long FUN_0050f030(u32 param_1,u64 param_2,u64 param_3,u32 *param_4)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x308400fe
  .word 0xffb00000
  .word 0x00e0802d
  .word 0xffbf0010
  .word 0x00101900
  .word 0x00641825
  .word 0x8e020008
  .word 0x8e07000c
  .word 0x0040f809
  .word 0x34640001
  .word 0x14400008
  .word 0xdfbf0010
  .word 0x3c030097
  .word 0x2402ffff
  .word 0x8c64d7c0
  .word 0xac70d7c0
  .word 0xae040000
  .word 0xae000004
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#pragma optimization_level 3
// FUN_0050F090
asm u32 FUN_0050f090(u64 param_1,long param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffb60060
  .word 0xffb50050
  .word 0x0080b02d
  .word 0xffb40040
  .word 0x00c0a82d
  .word 0xffbf0070
  .word 0x00a0a02d
  .word 0xffb30030
  .word 0xffb20020
  .word 0xffb10010
  .word 0x16800004
  .word 0xffb00000
  .word 0x3c028000
  .word 0x10000032
  .word 0x34420016
  .word 0x0c1434e8
  .word 0x3c120097
  .word 0x8e50d7c0
  .word 0x12000003
  .word 0x0040982d
  .word 0x8e020000
  .word 0xae42d7c0
  .word 0x16000008
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x3c028000
  .word 0x10000022
  .word 0x34428005
  .word 0x0c143992
  .word 0x00000000
  .word 0x0040882d
  .word 0x0623000b
  .word 0xae140008
  .word 0x8e42d7c0
  .word 0xae50d7c0
  .word 0xae020000
  .word 0xae000004
  .word 0x12600017
  .word 0x0220102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x10000013
  .word 0x0220102d
  .word 0x3c060051
  .word 0xae15000c
  .word 0x24c6f030
  .word 0xae110004
  .word 0x02c0282d
  .word 0x0220202d
  .word 0x0c143b6e
  .word 0x0200382d
  .word 0x0c143a40
  .word 0x0220202d
  .word 0x12600004
  .word 0x00101100
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x00101100
  .word 0x322300fe
  .word 0x00431025
  .word 0x34420001
  .word 0xdfbf0070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}
// FUN_0050F1C0
#pragma optimization_level 3
asm u32 FUN_0050f1c0(u64 param_1,long param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffb50050
  .word 0xffb40040
  .word 0x0080a82d
  .word 0xffb30030
  .word 0x00c0a02d
  .word 0xffbf0060
  .word 0x00a0982d
  .word 0xffb20020
  .word 0xffb10010
  .word 0x16600004
  .word 0xffb00000
  .word 0x3c028000
  .word 0x10000025
  .word 0x34420016
  .word 0x3c120097
  .word 0x8e50d7c0
  .word 0x12000003
  .word 0x00000000
  .word 0x8e020000
  .word 0xae42d7c0
  .word 0x16000004
  .word 0x00000000
  .word 0x3c028000
  .word 0x1000001a
  .word 0x34428005
  .word 0x0c143976
  .word 0x00000000
  .word 0x0040882d
  .word 0x06230007
  .word 0xae130008
  .word 0x8e43d7c0
  .word 0xae50d7c0
  .word 0xae030000
  .word 0xae000004
  .word 0x10000010
  .word 0xdfbf0060
  .word 0x3c060051
  .word 0xae14000c
  .word 0x24c6f030
  .word 0xae110004
  .word 0x02a0282d
  .word 0x0220202d
  .word 0x0c143b2a
  .word 0x0200382d
  .word 0x0c143a14
  .word 0x0220202d
  .word 0x00101100
  .word 0x322300fe
  .word 0x00431025
  .word 0x34420001
  .word 0xdfbf0060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0070
}
#pragma optimization_level 2
// FUN_0050F2B0
asm u32 FUN_0050f2b0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb00000
  .word 0x0080802d
  .word 0xffb10010
  .word 0x00101202
  .word 0xffb20020
  .word 0xffbf0030
  .word 0x0c1434e8
  .word 0x00028900
  .word 0x06000006
  .word 0x0040902d
  .word 0x8e220004
  .word 0x02021026
  .word 0x304200ff
  .word 0x10400008
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x3c028000
  .word 0x1000000e
  .word 0x34428002
  .word 0x8e240004
  .word 0x0c1439d4
  .word 0x00000000
  .word 0x3c030097
  .word 0x8c62d7c0
  .word 0xac71d7c0
  .word 0xae220000
  .word 0xae200004
  .word 0x12400004
  .word 0x0000102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0050F358
asm long FUN_0050f358(u32 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x00041202
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x04800006
  .word 0x00028100
  .word 0x8e020004
  .word 0x00821026
  .word 0x304200ff
  .word 0x10400004
  .word 0x00000000
  .word 0x3c028000
  .word 0x1000000d
  .word 0x34428002
  .word 0x8e040004
  .word 0x0c1439a4
  .word 0x00000000
  .word 0x0040202d
  .word 0x14800007
  .word 0x0080102d
  .word 0x3c020097
  .word 0x8c43d7c0
  .word 0xac50d7c0
  .word 0xae030000
  .word 0xae000004
  .word 0x0080102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_0050F3D0
asm void FUN_0050f3d0(void)
{
  .set noreorder
  .word 0x3c020078
  .word 0x3c030078
  .word 0x3c040097
  .word 0xac400b70
  .word 0xac600b74
  .word 0x2484d7c8
  .word 0x0000282d
  .word 0x08148502
  .word 0x24060200
  .word 0x00000000
  .word 0x27bdffb0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x00a0882d
  .word 0xffb30030
  .word 0xffb20020
  .word 0xffbf0040
  .word 0x0c1434e8
  .word 0x0080802d
  .word 0x3c030078
  .word 0x3c050078
  .word 0x8c730b70
  .word 0x0040902d
  .word 0xacb10b74
  .word 0x0200202d
  .word 0xac700b70
  .word 0x00113100
  .word 0x0c148502
  .word 0x0000282d
  .word 0x12400004
  .word 0x0260102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0260102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0050F478
asm u32 FUN_0050f478(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb30030
  .word 0xffb20020
  .word 0x00c0982d
  .word 0xffb00000
  .word 0x00a0902d
  .word 0xffbf0040
  .word 0x0080802d
  .word 0x06010008
  .word 0xffb10010
  .word 0x3c027fff
  .word 0x3c030097
  .word 0x3442ffff
  .word 0x2471d7c8
  .word 0x02028024
  .word 0x10000005
  .word 0x24020020
  .word 0x3c020078
  .word 0x3c030078
  .word 0x8c510b70
  .word 0x8c620b74
  .word 0x0202102b
  .word 0x14400004
  .word 0x00000000
  .word 0x3c028000
  .word 0x1000000d
  .word 0x34420069
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x00101900
  .word 0x00711821
  .word 0xac720000
  .word 0xac730004
  .word 0x0380202d
  .word 0x10400003
  .word 0xac640008
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x04830008
  .word 0x3c020078
  .word 0x3c027fff
  .word 0x3c030097
  .word 0x3442ffff
  .word 0x2465d7c8
  .word 0x00822024
  .word 0x10000004
  .word 0x24020020
  .word 0x3c030078
  .word 0x8c450b70
  .word 0x8c620b74
  .word 0x0082102b
  .word 0x14400003
  .word 0x00041900
  .word 0x03e00008
  .word 0x2402ff97
  .word 0x0000102d
  .word 0x00651821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
}
// FUN_0050F588
asm u8 * FUN_0050f588(long param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb30030
  .word 0xffbf0040
  .word 0x00a0982d
  .word 0xffb20020
  .word 0xffb10010
  .word 0x10800005
  .word 0xffb00000
  .word 0x3c020097
  .word 0x24030020
  .word 0x10000005
  .word 0x2442d7c8
  .word 0x3c020078
  .word 0x3c030078
  .word 0x8c420b70
  .word 0x8c630b74
  .word 0x0380902d
  .word 0x1860000f
  .word 0x0040802d
  .word 0x0060882d
  .word 0x8e020000
  .word 0x50400009
  .word 0x2631ffff
  .word 0x8e020008
  .word 0x0380182d
  .word 0x0040e02d
  .word 0x8e060000
  .word 0x0260202d
  .word 0x00c0f809
  .word 0x8e050004
  .word 0x2631ffff
  .word 0x1620fff4
  .word 0x26100010
  .word 0x0380102d
  .word 0x0240e02d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_0050F630
asm u32 FUN_0050f630(u32 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0x0080882d
  .word 0xffbf0020
  .word 0xffb00000
  .word 0x0c144052
  .word 0x24040001
  .word 0x1440000d
  .word 0x0000102d
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x3c030097
  .word 0x3c040097
  .word 0x8c70da00
  .word 0xac71da00
  .word 0xac9cda04
  .word 0x10400004
  .word 0x0200102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0050F698
asm void FUN_0050f698(int *param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x2405000b
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x3c100078
  .word 0x8c830000
  .word 0x3c040078
  .word 0xae030be0
  .word 0x8e020be0
  .word 0xac820be4
  .word 0x8e030be0
  .word 0x14650006
  .word 0x3c020078
  .word 0xae000be0
  .word 0x3c020078
  .word 0xac400bb4
  .word 0x10000014
  .word 0xdfbf0010
  .word 0x8c440ba8
  .word 0x0c140c64
  .word 0x00000000
  .word 0x3c030078
  .word 0x8c620b94
  .word 0x10400009
  .word 0x3c020097
  .word 0x8c43da00
  .word 0x10600006
  .word 0x3c020078
  .word 0x8c440ba0
  .word 0x0c140c64
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c020078
  .word 0xac400bb4
  .word 0xae000be0
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_0050F738
asm void FUN_0050f738(void)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbe0080
  .word 0xffb70070
  .word 0x3c1e0097
  .word 0xffb60060
  .word 0x3c170078
  .word 0xffb50050
  .word 0x3c16007c
  .word 0xffb40040
  .word 0x3c150097
  .word 0xffb30030
  .word 0x3c140078
  .word 0xffb20020
  .word 0x3c130078
  .word 0xffb10010
  .word 0x3c120097
  .word 0xffbf0090
  .word 0x3c110078
  .word 0xffb00000
  .word 0x3c020078
  .word 0x0c140c68
  .word 0x8c440ba0
  .word 0x8e830be0
  .word 0x2402ffff
  .word 0x14620008
  .word 0x8ee20b90
  .word 0xae600bb4
  .word 0x3c020078
  .word 0xae800be0
  .word 0xac400b94
  .word 0x0c140be8
  .word 0xafc0da14
  .word 0x8ee20b90
  .word 0x18400004
  .word 0x26c4e0d8
  .word 0x8e45da00
  .word 0x0c141792
  .word 0x8e260be4
  .word 0x8e43da00
  .word 0x10600009
  .word 0x00000000
  .word 0x8e220be4
  .word 0x10400006
  .word 0x00000000
  .word 0x0380802d
  .word 0x8ebcda04
  .word 0x0060f809
  .word 0x8e240be4
  .word 0x0200e02d
  .word 0xae600bb4
  .word 0x1000ffe1
  .word 0x3c020078
  .word 0x27bdffd0
  .word 0x0080382d
  .word 0xffb10010
  .word 0x00a0402d
  .word 0x3c110078
  .word 0xffb00000
  .word 0x8e240b94
  .word 0x24100001
  .word 0x14800015
  .word 0xffbf0020
  .word 0x3c020097
  .word 0x3c030051
  .word 0x3c05007c
  .word 0x2442da18
  .word 0x2463f738
  .word 0x24a5e100
  .word 0xac46000c
  .word 0x0040202d
  .word 0xac430004
  .word 0xac480008
  .word 0xac470014
  .word 0xac450020
  .word 0x0c140bd8
  .word 0xac400010
  .word 0x0000282d
  .word 0xae220b94
  .word 0x0c1410a8
  .word 0x0040202d
  .word 0x10000005
  .word 0x0200102d
  .word 0x00e0282d
  .word 0x0c140bfc
  .word 0x0000802d
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x3c052000
  .word 0x00853825
  .word 0x8ce20000
  .word 0x18400014
  .word 0x0000302d
  .word 0x8ce90008
  .word 0x18400011
  .word 0x01255025
  .word 0x24e80010
  .word 0x3c0b0078
  .word 0x01061021
  .word 0x00000000
  .word 0x01462821
  .word 0x90430000
  .word 0x01262021
  .word 0x24c60001
  .word 0xa0a30000
  .word 0xa0830000
  .word 0x8ce20000
  .word 0x00c2102a
  .word 0x1440fff7
  .word 0x01061021
  .word 0x10000003
  .word 0x8ce30004
  .word 0x3c0b0078
  .word 0x8ce30004
  .word 0x18600011
  .word 0x3c022000
  .word 0x8ce9000c
  .word 0x0000302d
  .word 0x1860000d
  .word 0x01225025
  .word 0x24e80050
  .word 0x01061021
  .word 0x01462821
  .word 0x90430000
  .word 0x01262021
  .word 0x24c60001
  .word 0xa0a30000
  .word 0xa0830000
  .word 0x8ce20004
  .word 0x00c2102a
  .word 0x1440fff7
  .word 0x01061021
  .word 0x08143da6
  .word 0x25640be0
}
// FUN_0050F960
asm void FUN_0050f960(void)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x2403ffff
  .word 0xffb10030
  .word 0x3c110078
  .word 0xffbf0050
  .word 0x8e220ba8
  .word 0xffb20040
  .word 0x1043000a
  .word 0xffb00020
  .word 0x3c100078
  .word 0x8e020bac
  .word 0x10430007
  .word 0x3c120078
  .word 0x8e420bb0
  .word 0x14430025
  .word 0xdfbf0050
  .word 0x10000004
  .word 0x3c02007c
  .word 0x3c100078
  .word 0x3c120078
  .word 0x3c02007c
  .word 0x24030001
  .word 0x2442e118
  .word 0xafa30004
  .word 0xafa20014
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa30008
  .word 0x3c03007c
  .word 0xae220ba8
  .word 0x2463e128
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa30014
  .word 0x3c03007c
  .word 0xae020bac
  .word 0x2463e138
  .word 0x03a0202d
  .word 0x0c140c58
  .word 0xafa30014
  .word 0x3c03007c
  .word 0xae420bb0
  .word 0x2463e148
  .word 0x03a0202d
  .word 0xafa30014
  .word 0x0c140c58
  .word 0xafa00008
  .word 0x3c030078
  .word 0xac620ba0
  .word 0x3c020078
  .word 0xac400bb4
  .word 0xdfbf0050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}
// FUN_0050FA48
asm void FUN_0050fa48(void)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffe0
  .word 0x8c430b94
  .word 0xffbf0010
  .word 0x10600009
  .word 0xffb00000
  .word 0x3c030078
  .word 0x2402ffff
  .word 0xac620be0
  .word 0x3c100078
  .word 0x0c140c60
  .word 0x8e040ba0
  .word 0x10000003
  .word 0x3c020078
  .word 0x3c100078
  .word 0x3c020078
  .word 0x0c140c5c
  .word 0x8c440ba8
  .word 0x3c030078
  .word 0x0c140c5c
  .word 0x8c640bac
  .word 0x3c030078
  .word 0x0c140c5c
  .word 0x8c640bb0
  .word 0x0c140c5c
  .word 0x8e040ba0
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x3c048000
  .word 0x0040802d
  .word 0x0c14192a
  .word 0x34840012
  .word 0x12000004
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x081434fc
  .word 0x27bd0020
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_0050FAE8
asm u32 FUN_0050fae8(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020078
  .word 0xffb20020
  .word 0xffb00000
  .word 0x0080902d
  .word 0x8c430bc8
  .word 0x00a0802d
  .word 0xffbf0030
  .word 0x04610003
  .word 0xffb10010
  .word 0x0c143ef0
  .word 0x00000000
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x3c050097
  .word 0x3c040097
  .word 0x8cb1da08
  .word 0x3c030097
  .word 0xac90da10
  .word 0xacb2da08
  .word 0xac7cda0c
  .word 0x10400004
  .word 0x0220102d
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0050FB68
asm void FUN_0050fb68(void)
{
  .set noreorder
  .word 0x3c020097
  .word 0x27bdffe0
  .word 0x8c45da08
  .word 0xffbf0010
  .word 0x10a0000c
  .word 0xffb00000
  .word 0x3c020078
  .word 0x8c430ba4
  .word 0x14600009
  .word 0xdfbf0010
  .word 0x3c020097
  .word 0x0380802d
  .word 0x8c5cda0c
  .word 0x3c030097
  .word 0x00a0f809
  .word 0x8c64da10
  .word 0x0200e02d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_0050FBC0
asm u32 FUN_0050fbc0(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb20020
  .word 0xffb10010
  .word 0x24120001
  .word 0x3c110078
  .word 0xffb00000
  .word 0xffbf0030
  .word 0x0c1434e8
  .word 0xae320ba4
  .word 0x3c050051
  .word 0x3c048000
  .word 0x0040802d
  .word 0x24a5fb68
  .word 0x34840012
  .word 0x0c14190c
  .word 0x0000302d
  .word 0x12000004
  .word 0x3c020078
  .word 0x0c1434fc
  .word 0x00000000
  .word 0x3c020078
  .word 0xae200ba4
  .word 0xac520bc8
  .word 0xdfbf0030
  .word 0x24020001
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0050FC38
asm u32 FUN_0050fc38(u64 *param_1,char *param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb30050
  .word 0xffb20040
  .word 0x0080982d
  .word 0xffb60080
  .word 0x00a0902d
  .word 0xffbf00b0
  .word 0x3c160078
  .word 0xffbe00a0
  .word 0xffb70090
  .word 0xffb50070
  .word 0xffb40060
  .word 0xffb10030
  .word 0xffb00020
  .word 0x0c143e58
  .word 0xafa60010
  .word 0x8ec40ba8
  .word 0x0c140c6c
  .word 0x00000000
  .word 0x8ec30ba8
  .word 0x1462009e
  .word 0x0000102d
  .word 0x3c030078
  .word 0x24020001
  .word 0xac620b9c
  .word 0x0c144052
  .word 0x24040001
  .word 0x14400064
  .word 0x0000202d
  .word 0x0c141a2a
  .word 0x3c110078
  .word 0x8e220bcc
  .word 0x0441002c
  .word 0x3c170097
  .word 0x3c140078
  .word 0x3c150097
  .word 0x1000000a
  .word 0x3c1e0097
  .word 0x2403ffff
  .word 0x00000000
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x26f0dc00
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a50597
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04430013
  .word 0x8e020024
  .word 0x8e820b90
  .word 0x18400005
  .word 0x3c020010
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e160
  .word 0x3c020010
  .word 0x2403ffff
  .word 0x00000000
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x1000ffe8
  .word 0x26f0dc00
  .word 0x1040ffdc
  .word 0x3c020010
  .word 0x10000004
  .word 0xae200bcc
  .word 0x3c140078
  .word 0x3c150097
  .word 0x3c1e0097
  .word 0x92430000
  .word 0x26a4da80
  .word 0x0000282d
  .word 0x00031600
  .word 0x1040000c
  .word 0xa0830024
  .word 0x24860024
  .word 0x24a50001
  .word 0x28a20100
  .word 0x10400007
  .word 0x02451021
  .word 0x00a62021
  .word 0x90430000
  .word 0xa0830000
  .word 0x00031e00
  .word 0x5460fff8
  .word 0x24a50001
  .word 0x24020100
  .word 0x14a20004
  .word 0x8e820b90
  .word 0x26a2da80
  .word 0xa0400123
  .word 0x8e820b90
  .word 0x18400005
  .word 0x3c04007c
  .word 0x3c050097
  .word 0x2484e180
  .word 0x0c141792
  .word 0x24a5daa4
  .word 0x8fa20010
  .word 0x26b0da80
  .word 0x2405012c
  .word 0x0200202d
  .word 0xae020128
  .word 0x0c1419fe
  .word 0xae100124
  .word 0x26e4dc00
  .word 0xafa00000
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0200382d
  .word 0x2408012c
  .word 0x27c9dbc0
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410006
  .word 0x3c022000
  .word 0x8ec40ba8
  .word 0x0c140c60
  .word 0x00000000
  .word 0x1000002f
  .word 0x0000102d
  .word 0x02021025
  .word 0x68430007
  .word 0x6c430000
  .word 0x6844000f
  .word 0x6c440008
  .word 0x68450017
  .word 0x6c450010
  .word 0x6846001f
  .word 0x6c460018
  .word 0xb2630007
  .word 0xb6630000
  .word 0xb264000f
  .word 0xb6640008
  .word 0xb2650017
  .word 0xb6650010
  .word 0xb266001f
  .word 0xb6660018
  .word 0x88430023
  .word 0x98430020
  .word 0xaa630023
  .word 0xba630020
  .word 0x8e830b90
  .word 0x18600010
  .word 0x3c04007c
  .word 0x26650008
  .word 0x0c141792
  .word 0x2484e198
  .word 0x8e820b90
  .word 0x1840000a
  .word 0x3c04007c
  .word 0x8e650004
  .word 0x0c141792
  .word 0x2484e1a8
  .word 0x8e820b90
  .word 0x18400004
  .word 0x3c04007c
  .word 0x8e650000
  .word 0x0c141792
  .word 0x2484e1b8
  .word 0x3c032000
  .word 0x27c2dbc0
  .word 0x00431025
  .word 0x8ec40ba8
  .word 0x0c140c60
  .word 0x8c500000
  .word 0x0200102d
  .word 0xdfbf00b0
  .word 0xdfbe00a0
  .word 0xdfb70090
  .word 0xdfb60080
  .word 0xdfb50070
  .word 0xdfb40060
  .word 0xdfb30050
  .word 0xdfb20040
  .word 0xdfb10030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}
#pragma schedule on
// FUN_0050FF38
void FUN_0050ff38(u32 param_1,u32 param_2)
{
  FUN_0050fc38((u64 *)param_1,(char *)param_2,0);
  return;
}
#pragma schedule off
// FUN_0050FF58
asm u32 FUN_0050ff58(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x0080882d
  .word 0xffbf0030
  .word 0x3c100078
  .word 0x0c143e58
  .word 0xffb20020
  .word 0x8e040ba8
  .word 0x0c140c6c
  .word 0x00000000
  .word 0x8e030ba8
  .word 0x1062000b
  .word 0x3c020078
  .word 0x8c430b90
  .word 0x18600011
  .word 0x3c020078
  .word 0x3c04007c
  .word 0x8c460b9c
  .word 0x2484e1d0
  .word 0x0c141792
  .word 0x0220282d
  .word 0x10000039
  .word 0x0000102d
  .word 0x3c020078
  .word 0x24040001
  .word 0x0c144052
  .word 0xac510b9c
  .word 0x10400006
  .word 0x0000202d
  .word 0x8e040ba8
  .word 0x0c140c60
  .word 0x00000000
  .word 0x1000002e
  .word 0x0000102d
  .word 0x0c141a2a
  .word 0x3c120078
  .word 0x8e420bbc
  .word 0x04410029
  .word 0x24020001
  .word 0x1000000a
  .word 0x3c110078
  .word 0x3c020010
  .word 0x2403ffff
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x26301d50
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a50595
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04430013
  .word 0x8e020024
  .word 0x3c020078
  .word 0x8c430b90
  .word 0x18600005
  .word 0x3c020010
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e1f8
  .word 0x3c020010
  .word 0x2403ffff
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x1000ffe8
  .word 0x26301d50
  .word 0x1040ffdc
  .word 0x24020001
  .word 0xae400bbc
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_005100B0
asm u32 FUN_005100b0(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24040002
  .word 0xffbf0020
  .word 0x0c143fd6
  .word 0xffb00010
  .word 0x14400003
  .word 0x3c020078
  .word 0x1000001a
  .word 0x0000102d
  .word 0x3c040078
  .word 0x24500c00
  .word 0x24841d50
  .word 0xafa00000
  .word 0x2405000e
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0200482d
  .word 0x240a0004
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410006
  .word 0x3c030078
  .word 0x3c020078
  .word 0x0c140c60
  .word 0x8c440ba8
  .word 0x10000007
  .word 0x0000102d
  .word 0x3c022000
  .word 0x02021025
  .word 0x8c640ba8
  .word 0x0c140c60
  .word 0x8c500000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_00510148
asm u32 FUN_00510148(long param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0xffb10010
  .word 0x14800015
  .word 0xffb00000
  .word 0x3c020078
  .word 0x8c430b90
  .word 0x18600003
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e210
  .word 0x3c110078
  .word 0x10000003
  .word 0x3c100078
  .word 0x0c141076
  .word 0x24040fa0
  .word 0x8e220bb4
  .word 0x1440fffc
  .word 0x00000000
  .word 0x0c141d0c
  .word 0x26041d50
  .word 0x1440fff8
  .word 0x0000102d
  .word 0x1000000c
  .word 0xdfbf0020
  .word 0x3c020078
  .word 0x8c430bb4
  .word 0x14600007
  .word 0x24020001
  .word 0x3c040078
  .word 0x0c141d0c
  .word 0x24841d50
  .word 0x14400002
  .word 0x24020001
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_005101E8
asm u64 FUN_005101e8(long param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x14800011
  .word 0xffb00000
  .word 0x3c020078
  .word 0x8c430b90
  .word 0x18600003
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e220
  .word 0x10000003
  .word 0x3c100078
  .word 0x0c141076
  .word 0x24040fa0
  .word 0x0c141d0c
  .word 0x26042700
  .word 0x1440fffb
  .word 0x0000102d
  .word 0x10000005
  .word 0xdfbf0010
  .word 0x3c040078
  .word 0x0c141d0c
  .word 0x24842700
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00510258
asm u32 FUN_00510258(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x0080882d
  .word 0xffbf0030
  .word 0x3c100078
  .word 0x0c143e58
  .word 0xffb20020
  .word 0x8e040bac
  .word 0x0c140c6c
  .word 0x00000000
  .word 0x8e030bac
  .word 0x1062000b
  .word 0x3c020078
  .word 0x8c430b90
  .word 0x18600011
  .word 0x3c020078
  .word 0x3c04007c
  .word 0x8c460b98
  .word 0x2484e230
  .word 0x0c141792
  .word 0x0220282d
  .word 0x10000039
  .word 0x0000102d
  .word 0x3c020078
  .word 0x24040001
  .word 0x0c14407a
  .word 0xac510b98
  .word 0x10400006
  .word 0x0000202d
  .word 0x8e040bac
  .word 0x0c140c60
  .word 0x00000000
  .word 0x1000002e
  .word 0x0000102d
  .word 0x0c141a2a
  .word 0x3c120078
  .word 0x8e420bd4
  .word 0x04410029
  .word 0x24020001
  .word 0x1000000a
  .word 0x3c110078
  .word 0x3c020010
  .word 0x2403ffff
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x26302700
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a50593
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04430013
  .word 0x8e020024
  .word 0x3c020078
  .word 0x8c430b90
  .word 0x18600005
  .word 0x3c020010
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e258
  .word 0x3c020010
  .word 0x2403ffff
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1443fffa
  .word 0x00000000
  .word 0x1000ffe8
  .word 0x26302700
  .word 0x1040ffdc
  .word 0x24020001
  .word 0xae400bd4
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x34028001
  .word 0x10820026
  .word 0x3c020078
  .word 0x34028003
  .word 0x10820021
  .word 0x3c020078
  .word 0x34028002
  .word 0x1082001c
  .word 0x3c020078
  .word 0x34028004
  .word 0x10820017
  .word 0x3c020078
  .word 0x34028011
  .word 0x10820010
  .word 0x34028013
  .word 0x1082000c
  .word 0x3c020078
  .word 0x34028012
  .word 0x10820007
  .word 0x3c020078
  .word 0x34028014
  .word 0x54820013
  .word 0x0000102d
  .word 0x3c020078
  .word 0x10000010
  .word 0x24422700
  .word 0x1000000e
  .word 0x244221c0
  .word 0x1000000c
  .word 0x24421d80
  .word 0x3c020078
  .word 0x8c420bac
  .word 0x10000009
  .word 0xaca20000
  .word 0x10000006
  .word 0x24421d50
  .word 0x10000004
  .word 0x24420c80
  .word 0x10000002
  .word 0x24420c00
  .word 0x8c420ba8
  .word 0xaca20000
  .word 0x03e00008
  .word 0x24020001
}
