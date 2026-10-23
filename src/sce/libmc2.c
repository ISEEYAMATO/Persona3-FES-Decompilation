#include "mw_harvest_compat.h"
#include "sce/libmc2.h"
#include "Utils.h"

/* auto-extern (generated) */
extern char s_MC2SOCKET_007be690[];
extern u32 DAT_007827d8;

// Fix EE math function return types
#define FUN_00531170_real FUN_00531170
#define FUN_00531170(a,b) ((unsigned long long (*)(unsigned long long, unsigned long long))FUN_00531170_real)(a,b)
#define FUN_005311c8_real FUN_005311c8
#define FUN_005311c8(a,b) ((unsigned long long (*)(unsigned long long, unsigned long long))FUN_005311c8_real)(a,b)
#define FUN_00531230_real FUN_00531230
#define FUN_00531230(a,b) ((unsigned long long (*)(unsigned long long, unsigned long long))FUN_00531230_real)(a,b)
#define FUN_00531480_real FUN_00531480
#define FUN_00531480(a,b) ((unsigned long long (*)(unsigned long long, unsigned long long))FUN_00531480_real)(a,b)
#define FUN_005316d0_real FUN_005316d0
#define FUN_005316d0(a,b) ((long long (*)(unsigned long long, unsigned long long))FUN_005316d0_real)(a,b)
// Helper function to read a u32 from an absolute address
static u32 read_u32(unsigned long addr) { return *(volatile u32 *)addr; }

u32 FUN_00516a48(u64 param_1);
u32 FUN_0051d308(u32 param_1,u32 param_2,int *param_3,u8 *param_4,
            u64 param_5);
u32 FUN_0051c700(u32 param_1);
u32 FUN_0051aa90(u64 param_1,u64 param_2,int param_3,int param_4);
u32 FUN_0051b1b0(int param_1);
u64 FUN_0051aa48(int param_1,u64 param_2,int param_3,int param_4);
u32 FUN_0051ab98(u32 param_1,int *param_2,int *param_3);
u32 FUN_0051bd10(int param_1,int param_2,int param_3,int param_4);
u32 FUN_0051a180(u32 param_1, int *param_2);
u32 FUN_0051c770(u32 *param_1,u32 param_2,u32 param_3);
u64 FUN_0051a418(int param_1,u64 param_2,int param_3,int param_4);
u64 FUN_0051a458(int param_1,u64 param_2,int param_3,int param_4);
long FUN_00519ef8(u64 param_1,u64 param_2,u64 param_3);
u32 FUN_0051cad0(int param_1);
u64 FUN_0051bf40(int param_1,u64 param_2,u32 param_3,u64 param_4);
u32 FUN_0051cdd8(int param_1);
void FUN_0051e118(u8 *param_1,int param_2);
u64 FUN_0051aa00(int param_1,u64 param_2,int param_3,int param_4);
bool FUN_0051b2c0(int param_1);
bool FUN_0051b3b0(int param_1);
u32 FUN_0051fe90(u64 param_1,u32 param_2);
u32 FUN_0051b4a0(int param_1);
u32 FUN_0051a1a0(u32 param_1);
bool FUN_0051a1c0(u32 param_1);
u32 FUN_0051ab50(int param_1,int param_2);
bool FUN_0051c280(int param_1);
bool FUN_0051c0c0(int param_1);
u32 FUN_0051b5f0(int param_1,u64 *param_2);
u32 FUN_0051a1e0(u64 param_1);
u32 FUN_0051fa20(u32 param_1);
void FUN_0051d588(int param_1,...);
u32 FUN_0051afd8(int param_1,u64 *param_2);
u32 FUN_0051ab08(int param_1,int param_2);
long FUN_00519728(u64 param_1,u64 param_2,long param_3);
long FUN_00517be8(u64 param_1,u64 param_2,long param_3);
long FUN_00519d70(u64 param_1,u64 param_2,u16 param_3);
u64 FUN_005210d8(u32 param_1,u32 param_2,u32 param_3);
bool FUN_0051a2f8(u64 param_1);
u64 FUN_0051b8f0(int param_1,u64 param_2,u32 param_3,u64 param_4);
long FUN_0051e178(u64 param_1,int param_2,int param_3);
u32 FUN_0051af70(int param_1,u32 param_2,u32 param_3);
u32 * FUN_005209c0(u64 param_1,int param_2);
bool FUN_0051bbd8(int param_1,u32 param_2);
u64 FUN_0051a498(int param_1);
u32 FUN_0051af98(int param_1,u64 *param_2);
u64 FUN_0051b8d0(int param_1,u64 param_2,u32 param_3,u32 param_4);
u32 FUN_00520410(int param_1,u32 (*param_2)(int));
u32 FUN_0051c8a0(u32 param_1);
u64 FUN_0051a9e0(u64 param_1,int param_2,u64 param_3,int param_4);
extern u32 ram0x007827d8;
extern u32 ram0x00782b00;
extern u32 *ram0x00782b18;
extern u32 register0x00000020;
extern char s_dbcman___SendData2_BUSY_007be898[];
extern char s_sceDbcSendData2__rpc_error_007be8b8[];
extern char s_Infinity_007beac8[];
extern char s_sceMc2_sema_subs_007be668[];
extern char s_sceDbc_sema_007be710[];
extern u32 DAT_007827fe;
extern u32 DAT_007be5f0;
extern u32 DAT_007be5f1;
extern u32 DAT_007be5f8;
extern u32 DAT_007be5f9;
extern u32 DAT_007be5fa;
extern u32 DAT_00996f40;
extern u32 DAT_00996f48;
extern u32 DAT_00996f50;
extern u32 DAT_00996f58;
extern u32 DAT_00996f60;
extern u32 DAT_00996f68;
extern u32 DAT_00996f70;
extern u32 DAT_00996f78;
extern void* PTR_DAT_007be628;
extern u32 DAT_007827e0;
#pragma alias DAT_007827e0_abs DAT_007827e0
extern u8 DAT_007827e0_abs[];
extern u32 DAT_007827e8;
extern u32 DAT_007827f0;
extern u32 DAT_007827f8;
extern u32 DAT_007827fc;
extern u32 DAT_00782808;
extern u32 DAT_0078280a;
extern u32 DAT_0078280c;
extern u32 DAT_0078280e;
extern u32 DAT_00782810;
extern u32 DAT_00782814;
extern u32 DAT_00782818;
extern u32 DAT_0078281c;
extern u32 DAT_00782820;
extern u32 DAT_00782824;
extern u32 DAT_00782828;
extern u32 DAT_0078282c;
extern u32 DAT_007828b0;
extern u32 DAT_0078292c;
extern u32 DAT_00782930;
extern u32 DAT_00782931;
extern u32 DAT_00782934;
extern u32 DAT_00782938;
extern u32 DAT_0078293c;
extern u32 DAT_00782944;
extern u32 DAT_00782948;
extern u32 DAT_0078294c;
extern u32 DAT_00782950;
extern u32 DAT_00782954;
extern u32 DAT_00782958;
extern u32 DAT_0078295c;
extern u32 DAT_00782960;
extern u32 DAT_00782ae8;
extern u32 DAT_00782aec;
extern u32 DAT_00782b04;
extern u32 DAT_00782b1c;
extern u32 DAT_00782b20;
extern u32 DAT_00782b24;
extern u32 DAT_00782b28;
extern u32 DAT_00782b2c;
extern u32 DAT_00782b30;
extern u32 DAT_00782b38;
extern u32 DAT_00782b3c;
extern u32 DAT_00782b80;
extern u32 DAT_00782b84;
extern u32 DAT_00782b88;
extern u32 DAT_00782b8c;
extern u32 DAT_00782b90;
extern u32 DAT_00782b94;
extern u32 DAT_00782b98;
extern u32 DAT_00782bc0;
extern u32 DAT_00782bc4;
extern u32 DAT_00782bc8;
extern u32 DAT_00782bcc;
extern u32 DAT_00782bd0;
extern u32 DAT_00782bd4;
extern u32 DAT_00782bd8;
extern u32 DAT_00782bdc;
extern u32 DAT_00782c00;
extern u32 DAT_00782c04;
extern u32 DAT_00782c08;
extern u32 DAT_00782c0c;
extern u32 DAT_00782c10;
extern u32 DAT_00782c14;
extern u32 DAT_00782c18;
extern u32 DAT_00782f40;
extern u32 DAT_00782f44;
extern u32 DAT_00783348;
extern u32 DAT_00783350;
extern u32 DAT_00783358;
extern u32 DAT_00783360;
extern u32 DAT_00783368;
extern u32 DAT_00783370;
extern u32 DAT_007be608;
extern u32 DAT_007be609;
extern u32 DAT_007be610;
extern u32 DAT_007be618;
extern u32 DAT_007be620;
extern u32 DAT_007beae0;
extern u32 DAT_007beae1;
extern u32 DAT_007beae8;
extern u32 DAT_007beaf0;
extern u32 DAT_007beaf8;
extern u32 DAT_007beb60;
extern u32 DAT_007beb78;
extern u32 DAT_007bec40;
extern u32 DAT_007bec60;
extern u32 DAT_0096f140;
extern u32 DAT_0096f144;
extern u32 DAT_0096f148;
extern u32 DAT_0096f14c;
extern u32 DAT_0096f150;
extern u32 DAT_0096f154;
extern u32 DAT_0096f158;
extern u32 DAT_0096f660;
extern u32 DAT_0096f664;
extern u32 DAT_0096f668;
extern u32 DAT_0096f66c;
extern u32* DAT_0097b680;
extern u32 DAT_0097b688;
extern u32 DAT_0097b788;
extern u32 DAT_0097bb84;
extern u32 DAT_0097bb88;
extern u32 DAT_0097bf84;
extern u32 DAT_0097bf88;
extern u32 DAT_0097bf8c;
extern u32 DAT_0097bf90;
extern u32 DAT_0097bf91;
extern u32 DAT_0097c010;
extern u32 DAT_0097c014;
extern u32 DAT_0097c018;
extern u32 DAT_0097c01c;
extern u32 DAT_0097c8c0;
extern u32 DAT_0097c8c2;
extern u32 DAT_0097c8c4;
extern u32 DAT_0097c8c8;
extern u32 DAT_0097c8d0;
extern u32 DAT_0097c8d4;
extern u32 DAT_0097c8d8;
extern u32 DAT_0097c8e0;
extern u32 DAT_0097c900;
extern u32 DAT_0097c901;
extern u32 DAT_0097cac0;
extern u32 DAT_0097cac2;
extern u32 DAT_0097cac4;
extern u32 DAT_0097cac8;
extern u32 DAT_0097cad0;
extern u32 DAT_0097cad4;
extern u32 DAT_0097cad8;
extern u32 DAT_0097cae0;
extern u32 DAT_0097cb00;
extern u32 DAT_0097cb01;
extern u32 DAT_0097cb02;
extern u32 DAT_0097ccc0;
extern u32 DAT_0097ccc4;
extern u32 DAT_0097ccc8;
extern u32 DAT_0097cccc;
extern u32 DAT_0097ccd0;
#pragma alias DAT_0097ccc0_abs DAT_0097ccc0
extern u8 DAT_0097ccc0_abs[];
extern u32 DAT_00984d00;
extern u32 DAT_00985500;
extern u32 DAT_00985508;
extern u32 DAT_0098550c;
extern u32 DAT_00985510;
extern u32 DAT_00985514;
extern u32 DAT_00985518;
extern u32 DAT_0098551c;
extern u32 DAT_00985524;
extern u32 DAT_00985580;
extern u32 DAT_00985584;
extern u32 DAT_00985588;
extern u32 DAT_0098558c;
extern u32 DAT_00985590;
extern u32 DAT_00985594;
extern u32 DAT_00985598;
extern u32 DAT_0098559c;
extern u32 DAT_009855a0;
extern u32 DAT_009855a4;
extern u32 DAT_009855a8;
extern u32 DAT_009855ac;
extern u32 DAT_009855c0;
extern u32 DAT_009855c8;
extern u32 DAT_00985640;
extern u32 DAT_00985ec0;
extern u32 DAT_00996764;
extern u32 DAT_009967b4;
extern u32 DAT_009967dc;
extern u32 DAT_00996840;
extern u32 DAT_00996844;
extern u32 DAT_00996848;
extern u32 DAT_0099684c;
extern u32 DAT_00996850;
extern u32 DAT_00996854;
extern u32 DAT_00996864;
extern u32 DAT_00996868;
extern u32 DAT_0099686c;
extern u32 DAT_009968cc;
extern u32 DAT_009968d0;
extern u32 DAT_00996900;
extern u32 DAT_00996904;
extern u32 DAT_00996908;
extern u32 DAT_0099690c;
extern u32 DAT_00996950;
extern u32 DAT_00996dc0;
extern u32 DAT_00996dc4;
extern u32 DAT_00996dc8;
extern u32 DAT_00996fc0;
extern u32 DAT_00996fc8;
extern u32 DAT_00996fd0;
extern u32 DAT_00996fd8;
extern u32 DAT_00996fe0;
extern u32 DAT_00996fe8;
extern u32 DAT_00996ff0;
extern u32 DAT_00996ffc;
extern u32 DAT_00997000;
extern u32 DAT_009acc20;
extern u64 FUN_00523c60();
extern u64 FUN_00523d40();
extern u8 LAB_0051f9e0;
extern u8 LAB_00523cc0;
extern u8 LAB_00523da8;
extern void* PTR_DAT_00782f30;
#pragma alias PTR_DAT_00782f30_abs PTR_DAT_00782f30
extern u8 PTR_DAT_00782f30_abs[];
extern void* PTR_DAT_00782f48;
extern void* PTR_DAT_00782f4c;
extern void* PTR_DAT_007beb30;
#pragma alias PTR_DAT_007beb30_abs PTR_DAT_007beb30
extern u8 PTR_DAT_007beb30_abs[];
extern void* PTR_PTR_00782f50;
extern void* PTR_PTR_00782f54;
extern u32 _DAT_00783350;
extern u32 _DAT_00996ff8;

typedef struct SceMc2SemaParam
{
    s32 count;
    s32 maxCount;
    s32 initCount;
    s32 waitThreads;
    u32 attributes;
    u32 option;
} SceMc2SemaParam;

typedef struct SceMc2ThreadParam
{
    s32 status;
    void (*function)(void*);
    void* stack;
    s32 stackSize;
    void* gpReg;
    s32 initialPriority;
    s32 currentPriority;
    u32 attributes;
    u32 option;
} SceMc2ThreadParam;

extern s32 func_00502f60(SceMc2ThreadParam* thread);
extern void func_00502f70(s32 threadId);
extern s32 func_00502fb0(s32 threadId);
extern s32 func_00503160(SceMc2SemaParam* semaphore);
extern void func_00503170(s32 semaphoreId);
extern void func_005042a0(s32 threadId, void* arg);
extern void func_00505e48(const char* message);
extern void func_005145f8(void* arg);
extern void func_00514928(s32 arg0, s32 arg1);
extern void func_005153a0(void);
extern void func_00515400(s32 socketId);
extern void func_0051a140(void);
extern s32 func_0051ae68(void);
extern void func_0051aef8(void);
extern s32 func_0051c130(void);
extern s32 func_0051c330(s32 socketId);
extern s32 D_007827D8[];
extern s32 D_0096F144[];
extern s32 D_0096F660[];
extern u8 D_0096F680[];
extern u8 D_007BE4F0[];
extern char D_007BE548[];

int func_00513290(void);

// FUN_005130e8
asm int sceMc2Init(int mode)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffb400c0
  .word 0x3c140078
  .word 0xffb200a0
  .word 0x8e8227d8
  .word 0x24120001
  .word 0xffbf00f0
  .word 0xffb600e0
  .word 0xffb500d0
  .word 0xffb300b0
  .word 0xffb10090
  .word 0x14520003
  .word 0xffb00080
  .word 0x0c144ca4
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2402ffff
  .word 0x3c160097
  .word 0x2463e4f0
  .word 0x3c100097
  .word 0xafa30074
  .word 0xae02f66c
  .word 0x26d5f660
  .word 0xaec2f660
  .word 0x27b10060
  .word 0xaea20004
  .word 0x2413007f
  .word 0xaea20008
  .word 0x0220202d
  .word 0xafb20068
  .word 0x0c140c58
  .word 0xafb30064
  .word 0x04400031
  .word 0xae02f66c
  .word 0x3c02007c
  .word 0xafa00068
  .word 0x2442e508
  .word 0xafb30064
  .word 0xafa20074
  .word 0x0c140c58
  .word 0x0220202d
  .word 0x04400028
  .word 0xaea20004
  .word 0x3c02007c
  .word 0xafb30064
  .word 0x2442e520
  .word 0x0220202d
  .word 0xafa20074
  .word 0x0c140c58
  .word 0xafa00068
  .word 0x0440001f
  .word 0xaea20008
  .word 0x3c030051
  .word 0x3c050097
  .word 0x3c06007d
  .word 0x3c07007c
  .word 0x246345f8
  .word 0x24a5f680
  .word 0x24c62cf0
  .word 0x24e7e530
  .word 0x3c020097
  .word 0x3408c000
  .word 0xac40f144
  .word 0x03a0202d
  .word 0xafa30004
  .word 0xafa50008
  .word 0xafa8000c
  .word 0xafa60010
  .word 0xafa70020
  .word 0x0c140bd8
  .word 0xafb20014
  .word 0x04410006
  .word 0xaec2f660
  .word 0x0c144ca4
  .word 0xae9227d8
  .word 0x3c028101
  .word 0x10000013
  .word 0x34428004
  .word 0x0c146b9a
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0c144ca4
  .word 0xae9227d8
  .word 0x3c028101
  .word 0x1000000a
  .word 0x34428003
  .word 0x0c146850
  .word 0x00000000
  .word 0x0c1454e8
  .word 0x00000000
  .word 0x8ec4f660
  .word 0x0c1410a8
  .word 0x0000282d
  .word 0xae9227d8
  .word 0x0000102d
  .word 0xdfbf00f0
  .word 0xdfb600e0
  .word 0xdfb500d0
  .word 0xdfb400c0
  .word 0xdfb300b0
  .word 0xdfb200a0
  .word 0xdfb10090
  .word 0xdfb00080
  .word 0x03e00008
  .word 0x27bd0100
}

// FUN_00513290
asm int func_00513290(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10010
  .word 0x3c110078
  .word 0xffbf0020
  .word 0x8e2227d8
  .word 0x14400004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x10000028
  .word 0x34428001
  .word 0x3c020097
  .word 0x8c43f144
  .word 0x10600003
  .word 0x0000202d
  .word 0x0c14524a
  .word 0x0000282d
  .word 0x3c100097
  .word 0x8e04f660
  .word 0x0482000a
  .word 0x2610f660
  .word 0x0c140bec
  .word 0x00000000
  .word 0x04410003
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e548
  .word 0x0c140bdc
  .word 0x8e04f660
  .word 0x2610f660
  .word 0x8e040004
  .word 0x04820004
  .word 0x8e040008
  .word 0x0c140c5c
  .word 0x00000000
  .word 0x8e040008
  .word 0x04800004
  .word 0x3c020097
  .word 0x0c140c5c
  .word 0x00000000
  .word 0x3c020097
  .word 0x8c44f66c
  .word 0x04800003
  .word 0x00000000
  .word 0x0c140c5c
  .word 0x00000000
  .word 0x0c146bbe
  .word 0x00000000
  .word 0xae2027d8
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_00513368
asm int sceMc2CreateSocket(SceMc2SocketParam* psocket, u_long128* paddr)
{
  .set noreorder
  .word 0x3c020078
  .word 0x27bdffe0
  .word 0x8c4327d8
  .word 0xffbf0010
  .word 0x14600004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x10000018
  .word 0x34428001
  .word 0x8c820004
  .word 0x2442fffe
  .word 0x2c420002
  .word 0x10400004
  .word 0x00000000
  .word 0x8c820008
  .word 0x10400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x1000000d
  .word 0x34420016
  .word 0x0c14704c
  .word 0x00000000
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000005
  .word 0x34420017
  .word 0x0c145500
  .word 0x0200202d
  .word 0x0c1470cc
  .word 0x0200202d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_005133F8
asm u32 FUN_005133f8(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c1470ba
  .word 0x00000000
  .word 0x0040202d
  .word 0x04830004
  .word 0x3c020078
  .word 0x3c028101
  .word 0x10000013
  .word 0x34428002
  .word 0x8c4327d8
  .word 0x54600004
  .word 0x3c020097
  .word 0x3c028101
  .word 0x1000000d
  .word 0x34428001
  .word 0x8c43f144
  .word 0x10600004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000007
  .word 0x34420010
  .word 0x0c1470a0
  .word 0x00000000
  .word 0x3c038101
  .word 0x34638002
  .word 0x0002180b
  .word 0x0060102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
// FUN_00513478
asm long FUN_00513478(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x3c020078
  .word 0xffb20050
  .word 0xffb00030
  .word 0x00a0902d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0060
  .word 0x14600004
  .word 0xffb10040
  .word 0x3c028101
  .word 0x10000019
  .word 0x34428001
  .word 0x3c020097
  .word 0x8c43f144
  .word 0x10600004
  .word 0x3c110097
  .word 0x3c028101
  .word 0x10000012
  .word 0x34420010
  .word 0x0c140c68
  .word 0x8e24f66c
  .word 0xafb00008
  .word 0x03a0202d
  .word 0x0c147376
  .word 0xafb2000c
  .word 0x0040802d
  .word 0x06010006
  .word 0x00000000
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x3c028101
  .word 0x10000004
  .word 0x34428002
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x0200102d
  .word 0xdfbf0060
  .word 0xdfb20050
  .word 0xdfb10040
  .word 0xdfb00030
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}
// FUN_00513528
asm u32 FUN_00513528(long param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x1c800004
  .word 0xffbf0000
  .word 0x3c028101
  .word 0x10000006
  .word 0x34420016
  .word 0x3c020097
  .word 0x0080282d
  .word 0x0c140bfc
  .word 0x8c44f660
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_00513560
asm u32 FUN_00513560(long param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x1c800004
  .word 0xffbf0000
  .word 0x3c028101
  .word 0x10000006
  .word 0x34420016
  .word 0x3c020097
  .word 0x0080282d
  .word 0x0c140c00
  .word 0x8c44f660
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_00513598
asm u32 FUN_00513598(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c030078
  .word 0xffb00000
  .word 0x8c6227d8
  .word 0x0080802d
  .word 0xffbf0020
  .word 0x14400004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x1000001d
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x3c110097
  .word 0x3c028101
  .word 0x10000015
  .word 0x34428002
  .word 0x0c140c68
  .word 0x8e24f66c
  .word 0x3c060097
  .word 0x24c5f140
  .word 0x8ca20004
  .word 0x50400006
  .word 0x3c020097
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x3c028101
  .word 0x10000009
  .word 0x34420010
  .word 0x24030003
  .word 0x8c44f664
  .word 0xacd0f140
  .word 0x0c140c60
  .word 0xaca30004
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_00513648
asm u32 FUN_00513648(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c030078
  .word 0xffb00000
  .word 0x8c6227d8
  .word 0x0080802d
  .word 0xffbf0020
  .word 0x14400004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x1000001d
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x3c110097
  .word 0x3c028101
  .word 0x10000015
  .word 0x34428002
  .word 0x0c140c68
  .word 0x8e24f66c
  .word 0x3c060097
  .word 0x24c5f140
  .word 0x8ca20004
  .word 0x50400006
  .word 0x3c020097
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x3c028101
  .word 0x10000009
  .word 0x34420010
  .word 0x24030004
  .word 0x8c44f664
  .word 0xacd0f140
  .word 0x0c140c60
  .word 0xaca30004
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_005136F8
asm u32 FUN_005136f8(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020078
  .word 0xffb20020
  .word 0xffb00000
  .word 0x00a0902d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0030
  .word 0x14600004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x1000001e
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x3c110097
  .word 0x3c028101
  .word 0x10000016
  .word 0x34428002
  .word 0x0c140c68
  .word 0x8e24f66c
  .word 0x3c060097
  .word 0x24c5f140
  .word 0x8ca20004
  .word 0x50400006
  .word 0x3c020097
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x3c028101
  .word 0x1000000a
  .word 0x34420010
  .word 0xacd0f140
  .word 0x8c44f664
  .word 0x24030002
  .word 0xacb2000c
  .word 0x0c140c60
  .word 0xaca30004
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_005137B8
asm u32 FUN_005137b8(u64 param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdfda0
  .word 0x3c020078
  .word 0xffb40240
  .word 0xffb30230
  .word 0x00c0a02d
  .word 0xffb00200
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0250
  .word 0xffb20220
  .word 0x14600004
  .word 0xffb10210
  .word 0x3c028101
  .word 0x10000029
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000021
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x10000019
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2471f140
  .word 0x8e220004
  .word 0x50400006
  .word 0x2402000e
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000d
  .word 0x34420010
  .word 0xac70f140
  .word 0xae220004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2624041c
  .word 0xae34000c
  .word 0x3c030097
  .word 0x0c140c60
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
  .word 0xdfbf0250
  .word 0xdfb40240
  .word 0xdfb30230
  .word 0xdfb20220
  .word 0xdfb10210
  .word 0xdfb00200
  .word 0x03e00008
  .word 0x27bd0260
}
// FUN_005138B8
asm u32 FUN_005138b8(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c030078
  .word 0xffb00000
  .word 0x8c6227d8
  .word 0x0080802d
  .word 0xffbf0020
  .word 0x14400004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x1000001d
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x3c110097
  .word 0x3c028101
  .word 0x10000015
  .word 0x34428002
  .word 0x0c140c68
  .word 0x8e24f66c
  .word 0x3c060097
  .word 0x24c5f140
  .word 0x8ca20004
  .word 0x50400006
  .word 0x3c020097
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x3c028101
  .word 0x10000009
  .word 0x34420010
  .word 0x24030064
  .word 0x8c44f664
  .word 0xacd0f140
  .word 0x0c140c60
  .word 0xaca30004
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_00513968
asm u32 FUN_00513968(u64 param_1,u64 param_2,u32 param_3,u32 param_4,
            u32 param_5)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c020078
  .word 0xffb60060
  .word 0xffb50050
  .word 0x00e0b02d
  .word 0xffb40040
  .word 0x00c0a82d
  .word 0xffb30030
  .word 0x0100a02d
  .word 0xffb10010
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080882d
  .word 0xffbf0070
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x1000002b
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0220202d
  .word 0x0040882d
  .word 0x06210004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000023
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001b
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2470f140
  .word 0x8e020004
  .word 0x50400006
  .word 0x24020005
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000f
  .word 0x34420010
  .word 0xac71f140
  .word 0xae020004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2604041c
  .word 0xae140014
  .word 0x3c030097
  .word 0x8c64f664
  .word 0xae15000c
  .word 0x0c140c60
  .word 0xae160010
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
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
}
// FUN_00513A88
asm u32 FUN_00513a88(u64 param_1,u64 param_2,u32 param_3,u32 param_4,
            u32 param_5)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c020078
  .word 0xffb60060
  .word 0xffb50050
  .word 0x00e0b02d
  .word 0xffb40040
  .word 0x00c0a82d
  .word 0xffb30030
  .word 0x0100a02d
  .word 0xffb10010
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080882d
  .word 0xffbf0070
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x1000002b
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0220202d
  .word 0x0040882d
  .word 0x06210004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000023
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001b
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2470f140
  .word 0x8e020004
  .word 0x50400006
  .word 0x24020020
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000f
  .word 0x34420010
  .word 0xac71f140
  .word 0xae020004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2604041c
  .word 0xae140014
  .word 0x3c030097
  .word 0x8c64f664
  .word 0xae15000c
  .word 0x0c140c60
  .word 0xae160010
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
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
}
// FUN_00513BA8
asm u32 FUN_00513ba8(u64 param_1,u64 param_2,u32 param_3,u32 param_4,
            u32 param_5)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c020078
  .word 0xffb60060
  .word 0xffb50050
  .word 0x00e0b02d
  .word 0xffb40040
  .word 0x00c0a82d
  .word 0xffb30030
  .word 0x0100a02d
  .word 0xffb10010
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080882d
  .word 0xffbf0070
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x1000002b
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0220202d
  .word 0x0040882d
  .word 0x06210004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000023
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001b
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2470f140
  .word 0x8e020004
  .word 0x50400006
  .word 0x24020021
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000f
  .word 0x34420010
  .word 0xac71f140
  .word 0xae020004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2604041c
  .word 0xae140014
  .word 0x3c030097
  .word 0x8c64f664
  .word 0xae15000c
  .word 0x0c140c60
  .word 0xae160010
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
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
}
// FUN_00513CC8
asm u32 FUN_00513cc8(u64 param_1,u64 param_2,u32 param_3,u32 param_4,
            u32 param_5)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c020078
  .word 0xffb60060
  .word 0xffb50050
  .word 0x00e0b02d
  .word 0xffb40040
  .word 0x00c0a82d
  .word 0xffb30030
  .word 0x0100a02d
  .word 0xffb10010
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080882d
  .word 0xffbf0070
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x1000002b
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0220202d
  .word 0x0040882d
  .word 0x06210004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000023
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001b
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2470f140
  .word 0x8e020004
  .word 0x50400006
  .word 0x24020006
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000f
  .word 0x34420010
  .word 0xac71f140
  .word 0xae020004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2604041c
  .word 0xae140014
  .word 0x3c030097
  .word 0x8c64f664
  .word 0xae15000c
  .word 0x0c140c60
  .word 0xae160010
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
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
}
// FUN_00513DE8
asm u32 FUN_00513de8(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0040
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x1000002a
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000022
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001a
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2471f140
  .word 0x8e220004
  .word 0x50400006
  .word 0x24020007
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000e
  .word 0x34420010
  .word 0xac70f140
  .word 0xae220004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2624041c
  .word 0x3c030097
  .word 0x34028417
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0xae22000c
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_00513EE0
asm u32 FUN_00513ee0(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020078
  .word 0xffb20020
  .word 0xffb00000
  .word 0x00a0902d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0030
  .word 0x14600004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x10000028
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000020
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0240202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c110097
  .word 0x3c028101
  .word 0x10000018
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e24f66c
  .word 0x3c030097
  .word 0x2464f140
  .word 0x8c820004
  .word 0x50400006
  .word 0x24020008
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x3c028101
  .word 0x1000000c
  .word 0x34420010
  .word 0xac70f140
  .word 0xac820004
  .word 0x0240282d
  .word 0x0c14909c
  .word 0x2484041c
  .word 0x3c030097
  .word 0x0c140c60
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_00513FC8
asm u32 FUN_00513fc8(u64 param_1,u64 param_2,u32 param_3,u32 param_4,
            u32 param_5,u32 param_6)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x3c020078
  .word 0xffb70070
  .word 0xffb60060
  .word 0x0100b82d
  .word 0xffb50050
  .word 0x00e0b02d
  .word 0xffb40040
  .word 0x00c0a82d
  .word 0xffb30030
  .word 0x0120a02d
  .word 0xffb10010
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080882d
  .word 0xffbf0080
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x1000002c
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0220202d
  .word 0x0040882d
  .word 0x06210004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000024
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001c
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2470f140
  .word 0x8e020004
  .word 0x50400006
  .word 0x2402000a
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x10000010
  .word 0x34420010
  .word 0xac71f140
  .word 0xae020004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2604041c
  .word 0xae140018
  .word 0x3c030097
  .word 0x8c64f664
  .word 0xae15000c
  .word 0xae160010
  .word 0x0c140c60
  .word 0xae170014
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0xdfb70070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0090
}
// FUN_005140F8
asm u32 FUN_005140f8(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0040
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x1000002a
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000022
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001a
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2471f140
  .word 0x8e220004
  .word 0x50400006
  .word 0x2402000b
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000e
  .word 0x34420010
  .word 0xac70f140
  .word 0xae220004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2624041c
  .word 0x3c030097
  .word 0x34028427
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0xae22000c
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_005141F0
asm u32 FUN_005141f0(u64 param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020078
  .word 0xffb40040
  .word 0xffb30030
  .word 0x00c0a02d
  .word 0xffb00000
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0050
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x10000029
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000021
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x10000019
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2471f140
  .word 0x8e220004
  .word 0x50400006
  .word 0x2402000c
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000d
  .word 0x34420010
  .word 0xac70f140
  .word 0xae220004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2624041c
  .word 0xae34000c
  .word 0x3c030097
  .word 0x0c140c60
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0060
}
// FUN_005142F0
asm u32 FUN_005142f0(u64 param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020078
  .word 0xffb40040
  .word 0xffb30030
  .word 0x30d4ffff
  .word 0xffb00000
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0050
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x10000029
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000021
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x10000019
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2471f140
  .word 0x8e220004
  .word 0x50400006
  .word 0x2402000d
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000d
  .word 0x34420010
  .word 0xac70f140
  .word 0xae220004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2624041c
  .word 0xae34000c
  .word 0x3c030097
  .word 0x0c140c60
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0060
}
// FUN_005143F0
asm u32 FUN_005143f0(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020078
  .word 0xffb40040
  .word 0xffb30030
  .word 0x00c0a02d
  .word 0xffb10010
  .word 0x00a0982d
  .word 0x8c4327d8
  .word 0x0080882d
  .word 0xffbf0050
  .word 0xffb20020
  .word 0x14600004
  .word 0xffb00000
  .word 0x3c028101
  .word 0x10000030
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0220202d
  .word 0x0040882d
  .word 0x06210004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000028
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0260202d
  .word 0x2c420080
  .word 0x10400006
  .word 0x00000000
  .word 0x0c1490e2
  .word 0x0280202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c120097
  .word 0x3c028101
  .word 0x1000001b
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e44f66c
  .word 0x3c030097
  .word 0x2470f140
  .word 0x8e020004
  .word 0x50400006
  .word 0x24020009
  .word 0x0c140c60
  .word 0x8e44f66c
  .word 0x3c028101
  .word 0x1000000f
  .word 0x34420010
  .word 0xac71f140
  .word 0xae020004
  .word 0x0260282d
  .word 0x0c14909c
  .word 0x2604041c
  .word 0x2604049c
  .word 0x0c14909c
  .word 0x0280282d
  .word 0x3c030097
  .word 0x0c140c60
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0x8e44f66c
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
// FUN_00514510
asm u32 FUN_00514510(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020078
  .word 0xffb20020
  .word 0xffb00000
  .word 0x00a0902d
  .word 0x8c4327d8
  .word 0x0080802d
  .word 0xffbf0030
  .word 0x14600004
  .word 0xffb10010
  .word 0x3c028101
  .word 0x10000028
  .word 0x34428001
  .word 0x0c1470ba
  .word 0x0200202d
  .word 0x0040802d
  .word 0x06010004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000020
  .word 0x34428002
  .word 0x0c1490e2
  .word 0x0240202d
  .word 0x2c420080
  .word 0x14400004
  .word 0x3c110097
  .word 0x3c028101
  .word 0x10000018
  .word 0x3442005b
  .word 0x0c140c68
  .word 0x8e24f66c
  .word 0x3c030097
  .word 0x2464f140
  .word 0x8c820004
  .word 0x50400006
  .word 0x2402000f
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x3c028101
  .word 0x1000000c
  .word 0x34420010
  .word 0xac70f140
  .word 0xac820004
  .word 0x0240282d
  .word 0x0c14909c
  .word 0x2484041c
  .word 0x3c030097
  .word 0x0c140c60
  .word 0x8c64f664
  .word 0x0c140c60
  .word 0x8e24f66c
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_005145F8
asm void FUN_005145f8(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb30030
  .word 0xffb20020
  .word 0x3c13007c
  .word 0xffb10010
  .word 0x3c120097
  .word 0xffbf0040
  .word 0x3c110097
  .word 0xffb00000
  .word 0x2642f660
  .word 0x0c140c68
  .word 0x8c440004
  .word 0x2623f140
  .word 0x8c620004
  .word 0x2442fffe
  .word 0x2c430020
  .word 0x10600079
  .word 0x00021080
  .word 0x2663e570
  .word 0x00431021
  .word 0x8c440000
  .word 0x00800008
  .word 0x00000000
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x0c145760
  .word 0x8e05000c
  .word 0x1000006e
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x2605041c
  .word 0x8e070010
  .word 0x0c14609a
  .word 0x8e080014
  .word 0x10000065
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x2605041c
  .word 0x8e070010
  .word 0x0c14611c
  .word 0x8e080014
  .word 0x1000005c
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x2605041c
  .word 0x8e070010
  .word 0x0c14639c
  .word 0x8e080014
  .word 0x10000053
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x2605041c
  .word 0x8e070010
  .word 0x0c1461f0
  .word 0x8e080014
  .word 0x1000004a
  .word 0xae020008
  .word 0x8e24f140
  .word 0x0c145846
  .word 0x2630f140
  .word 0x10000045
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x0c145f36
  .word 0x2605041c
  .word 0x1000003e
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x0c14653e
  .word 0x2605041c
  .word 0x10000038
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x0c145f36
  .word 0x2605041c
  .word 0x10000031
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x0c1465ca
  .word 0x2605041c
  .word 0x1000002a
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x2605041c
  .word 0x8e070010
  .word 0x8e080014
  .word 0x0c146614
  .word 0x8e090018
  .word 0x10000020
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x9606000c
  .word 0x0c14675c
  .word 0x2605041c
  .word 0x10000019
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x2605041c
  .word 0x0c1467be
  .word 0x2606049c
  .word 0x10000012
  .word 0xae020008
  .word 0x8e24f140
  .word 0x0c145a92
  .word 0x2630f140
  .word 0x1000000d
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x8e06000c
  .word 0x0c145efa
  .word 0x2605041c
  .word 0x10000006
  .word 0xae020008
  .word 0x2630f140
  .word 0x8e24f140
  .word 0x0c14681e
  .word 0x2605041c
  .word 0xae020008
  .word 0x2624f140
  .word 0x3c028101
  .word 0x8c830008
  .word 0x34429fff
  .word 0x14620005
  .word 0x2642f660
  .word 0x3c028101
  .word 0x34420002
  .word 0xac820008
  .word 0x2642f660
  .word 0x0c140c60
  .word 0x8c440008
  .word 0x1000ff73
  .word 0x2642f660
}
// FUN_00514858
asm u32 FUN_00514858(int param_1,int *param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020097
  .word 0xffb20020
  .word 0xffb10010
  .word 0x2452f140
  .word 0xffb00000
  .word 0x00a0882d
  .word 0xffbf0030
  .word 0x8e420004
  .word 0x14400003
  .word 0x00c0802d
  .word 0x10000017
  .word 0x2402ffff
  .word 0x56200001
  .word 0xae220000
  .word 0x14800005
  .word 0x3c020097
  .word 0x0c140c68
  .word 0x8c44f668
  .word 0x10000005
  .word 0x00000000
  .word 0x0c140c6c
  .word 0x8c44f668
  .word 0x0440000b
  .word 0x0000102d
  .word 0x12000003
  .word 0x00000000
  .word 0x8e420008
  .word 0xae020000
  .word 0x52200004
  .word 0xae400004
  .word 0x8e420004
  .word 0xae220000
  .word 0xae400004
  .word 0x24020001
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#pragma schedule on
// FUN_00514900
asm void FUN_00514900(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x00a0302d
  .word 0x27bdfff0
  .word 0x0080282d
  .word 0xffbf0000
  .word 0x0c145216
  .word 0x24040001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
// FUN_00514928
asm void FUN_00514928(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x00a0302d
  .word 0x27bdfff0
  .word 0x0080282d
  .word 0xffbf0000
  .word 0x0c145216
  .word 0x0000202d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
#pragma schedule off
#pragma schedule on
#pragma optimization_level 3
#pragma opt_lifetimes on
// FUN_00514950
asm int FUN_00514950(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144dbe
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#pragma schedule off
#pragma opt_lifetimes off
#pragma optimization_level 2
#pragma schedule on
#pragma optimization_level 3
#pragma opt_lifetimes on
// FUN_00514990
asm int FUN_00514990(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144d66
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#pragma schedule off
#pragma opt_lifetimes off
#pragma optimization_level 2
#pragma schedule on
#pragma optimization_level 3
#pragma opt_lifetimes on
// FUN_005149D0
asm int FUN_005149d0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144d92
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#pragma schedule off
#pragma opt_lifetimes off
#pragma optimization_level 2
// FUN_00514A10
asm int FUN_00514a10(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144e5a
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514A50
asm int FUN_00514a50(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144f32
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514A90
asm int FUN_00514a90(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144ea2
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514AD0
asm int FUN_00514ad0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144eea
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514B10
asm int FUN_00514b10(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144f7a
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514B50
asm int FUN_00514b50(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144fb8
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514B90
asm int FUN_00514b90(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c1450fc
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514BD0
asm int FUN_00514bd0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c14503e
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514C10
asm int FUN_00514c10(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c14507c
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514C50
asm int FUN_00514c50(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144ff2
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514C90
asm int FUN_00514c90(u64 param_1,u64 param_2,u16 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c1450bc
  .word 0x30c6ffff
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514CD0
asm int FUN_00514cd0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c144dee
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514D10
asm int FUN_00514d10(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c145144
  .word 0x00000000
  .word 0x0040182d
  .word 0x14600006
  .word 0xafa20000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c145216
  .word 0x03a0302d
  .word 0x8fa20000
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514D50
asm int FUN_00514d50(char *param_1,char param_2)
{
  .set noreorder
  .word 0x00052e00
  .word 0x80830000
  .word 0x90820000
  .word 0x00052e03
  .word 0x1060000a
  .word 0x0080302d
  .word 0x1065000c
  .word 0x00000000
  .word 0x24c60001
  .word 0x00000000
  .word 0x80c30000
  .word 0x10600003
  .word 0x90c20000
  .word 0x5465fffc
  .word 0x24c60001
  .word 0x00021600
  .word 0x00021603
  .word 0x14450003
  .word 0x00000000
  .word 0x03e00008
  .word 0x00c41023
  .word 0x03e00008
  .word 0x2402ffff
  .word 0x00000000
}
// FUN_00514DB0
asm u32 FUN_00514db0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x2405002f
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c148fe6
  .word 0x0080802d
  .word 0x1040000a
  .word 0x0200202d
  .word 0x0c14927a
  .word 0x2405002f
  .word 0x0c1490e2
  .word 0x24440001
  .word 0x2c420020
  .word 0x14400009
  .word 0x24020001
  .word 0x10000007
  .word 0x0000102d
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x2c430020
  .word 0x10600002
  .word 0x0000102d
  .word 0x24020001
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00514E20
asm u32 FUN_00514e20(char *param_1)
{
  .set noreorder
  .word 0x80820000
  .word 0x10400011
  .word 0x90830000
  .word 0x2406003f
  .word 0x2405002a
  .word 0x00000000
  .word 0x00031600
  .word 0x00021603
  .word 0x10460005
  .word 0x00000000
  .word 0x10450003
  .word 0x28420020
  .word 0x10400003
  .word 0x24840001
  .word 0x03e00008
  .word 0x0000102d
  .word 0x80820000
  .word 0x1440fff4
  .word 0x90830000
  .word 0x03e00008
  .word 0x24020001
  .word 0x00000000
}
// FUN_00514E78
asm u32 FUN_00514e78(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x2405002f
  .word 0xffb00020
  .word 0xffbf0030
  .word 0x0c148fe6
  .word 0x0080802d
  .word 0x1040000f
  .word 0x0200202d
  .word 0x0c14927a
  .word 0x2405002f
  .word 0x0c1490e2
  .word 0x24440001
  .word 0x2c420020
  .word 0x1040001a
  .word 0x0200202d
  .word 0x0c14927a
  .word 0x2405002f
  .word 0x24450001
  .word 0x0c14909c
  .word 0x03a0202d
  .word 0x10000009
  .word 0x3c05007c
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x2c420020
  .word 0x1040000e
  .word 0x0200282d
  .word 0x0c14909c
  .word 0x03a0202d
  .word 0x3c05007c
  .word 0x03a0202d
  .word 0x0c14904a
  .word 0x24a5e5f0
  .word 0x10400006
  .word 0x3c05007c
  .word 0x03a0202d
  .word 0x0c14904a
  .word 0x24a5e5f8
  .word 0x14400002
  .word 0x24020001
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0xdfb00020
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
// FUN_00514F30
asm bool FUN_00514f30(char *param_1,char *param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb30030
  .word 0xffb10010
  .word 0x0080982d
  .word 0xffbf0040
  .word 0x00a0882d
  .word 0xffb20020
  .word 0x10000043
  .word 0xffb00000
  .word 0x00000000
  .word 0x06400005
  .word 0x0060802d
  .word 0x04600003
  .word 0x0240802d
  .word 0x0243102a
  .word 0x0062800a
  .word 0x0220202d
  .word 0x0260282d
  .word 0x0c14919c
  .word 0x0200302d
  .word 0x14400044
  .word 0x0000102d
  .word 0x02308821
  .word 0x02709821
  .word 0x82230000
  .word 0x2402003f
  .word 0x1462000a
  .word 0x92250000
  .word 0x2403003f
  .word 0x00000000
  .word 0x82620000
  .word 0x1040001f
  .word 0x26310001
  .word 0x26730001
  .word 0x82220000
  .word 0x1043fffa
  .word 0x92250000
  .word 0x00051600
  .word 0x2403002a
  .word 0x00021603
  .word 0x14430023
  .word 0x0220202d
  .word 0x2404002a
  .word 0x2403003f
  .word 0x26310001
  .word 0x82220000
  .word 0x92250000
  .word 0x00000000
  .word 0x00000000
  .word 0x1044fffa
  .word 0x00000000
  .word 0x5043fff9
  .word 0x26310001
  .word 0x10400009
  .word 0x24120001
  .word 0x1000000b
  .word 0x00052e00
  .word 0x00000000
  .word 0x0220282d
  .word 0x0c1453cc
  .word 0x0260202d
  .word 0x54520003
  .word 0x92250000
  .word 0x10000019
  .word 0x24020001
  .word 0x26730001
  .word 0x00052e00
  .word 0x0260202d
  .word 0x0c145354
  .word 0x00052e03
  .word 0x0040802d
  .word 0x0601fff2
  .word 0x02709821
  .word 0x1000000f
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0c145354
  .word 0x2405003f
  .word 0x0040902d
  .word 0x0220202d
  .word 0x0c145354
  .word 0x2405002a
  .word 0x0641ffb7
  .word 0x0040182d
  .word 0x0461ffb5
  .word 0x0220202d
  .word 0x0c14904a
  .word 0x0260282d
  .word 0x2c420001
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_005150B0
asm char * FUN_005150b0(long param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb10010
  .word 0xffb00000
  .word 0x00a0882d
  .word 0xffbf0040
  .word 0x0080802d
  .word 0xffb30030
  .word 0x12000009
  .word 0xffb20020
  .word 0x3c020098
  .word 0x0200282d
  .word 0x2442b688
  .word 0x0040202d
  .word 0x0c14909c
  .word 0x0040802d
  .word 0x56000006
  .word 0x82020000
  .word 0x3c130098
  .word 0x8e70b680
  .word 0x1200002d
  .word 0x0000102d
  .word 0x82020000
  .word 0x14400006
  .word 0x92050000
  .word 0x10000028
  .word 0x0000102d
  .word 0x10400026
  .word 0x0000102d
  .word 0x92050000
  .word 0x00052e00
  .word 0x26100001
  .word 0x00052e03
  .word 0x0c148fe6
  .word 0x0220202d
  .word 0x5440fff7
  .word 0x8202ffff
  .word 0x8203ffff
  .word 0x24020022
  .word 0x1462000c
  .word 0x2612ffff
  .word 0x0200902d
  .word 0x3c130098
  .word 0x3c11007c
  .word 0x82050000
  .word 0x2624e600
  .word 0x0c148fe6
  .word 0x26100001
  .word 0x5040fffc
  .word 0x82050000
  .word 0x1000000a
  .word 0x8202ffff
  .word 0x3c130098
  .word 0x82050000
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c148fe6
  .word 0x26100001
  .word 0x5040fffc
  .word 0x82050000
  .word 0x8202ffff
  .word 0x50400002
  .word 0xae60b680
  .word 0xae70b680
  .word 0xa200ffff
  .word 0x0240102d
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_005151D0
asm int FUN_005151d0(char *param_1)
{
  .set noreorder
  .word 0x0080282d
  .word 0x0000302d
  .word 0x80a20000
  .word 0x1040000b
  .word 0x90a30000
  .word 0x00000000
  .word 0x00031600
  .word 0x24a50001
  .word 0x00021603
  .word 0x24c30001
  .word 0x3842002f
  .word 0x80a40000
  .word 0x0062300a
  .word 0x1480fff8
  .word 0x90a30000
  .word 0x03e00008
  .word 0x00c0102d
  .word 0x00000000
}
// FUN_00515218
asm u32 FUN_00515218(int param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20020
  .word 0xffb00000
  .word 0x0080902d
  .word 0xffb10010
  .word 0x00a0802d
  .word 0xffbf0040
  .word 0x00c0882d
  .word 0xffb30030
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x2c420080
  .word 0x14400003
  .word 0x24020898
  .word 0x1000004b
  .word 0x0000102d
  .word 0x3c050098
  .word 0x02421018
  .word 0x24a5bf90
  .word 0x0220202d
  .word 0x0c14909c
  .word 0x00452821
  .word 0x82030000
  .word 0x2402002f
  .word 0x1462000b
  .word 0x3c12007c
  .word 0x26040001
  .word 0x2646e608
  .word 0x80c20000
  .word 0x80c30001
  .word 0xa2220000
  .word 0xa2230001
  .word 0x0c14542c
  .word 0x2645e608
  .word 0x10000005
  .word 0x0040802d
  .word 0x0200202d
  .word 0x0c14542c
  .word 0x2645e608
  .word 0x0040802d
  .word 0x12000028
  .word 0x3c13007c
  .word 0x0200202d
  .word 0x00000000
  .word 0x0c14904a
  .word 0x2665e5f0
  .word 0x14400004
  .word 0x3c05007c
  .word 0x0000202d
  .word 0x1000001a
  .word 0x2645e608
  .word 0x0200202d
  .word 0x0c14904a
  .word 0x24a5e5f8
  .word 0x1440000d
  .word 0x0200282d
  .word 0x0c1490e2
  .word 0x0220202d
  .word 0x00511021
  .word 0x0220202d
  .word 0xa040ffff
  .word 0x0c14927a
  .word 0x2405002f
  .word 0x1040ffce
  .word 0x0000202d
  .word 0xa0400001
  .word 0x10000009
  .word 0x2645e608
  .word 0x0c148f9a
  .word 0x0220202d
  .word 0x2650e608
  .word 0x0200282d
  .word 0x0c148f9a
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0000202d
  .word 0x0c14542c
  .word 0x00000000
  .word 0x0040802d
  .word 0x1600ffdc
  .word 0x0200202d
  .word 0x2645e608
  .word 0x0c14904a
  .word 0x0220202d
  .word 0x10400004
  .word 0x0220202d
  .word 0x0c14927a
  .word 0x2405002f
  .word 0xa0400000
  .word 0x24020001
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_005153A0
asm u32 FUN_005153a0(void)
{
  .set noreorder
  .word 0x3c020098
  .word 0x2404ffff
  .word 0x2442b788
  .word 0x24060001
  .word 0x24420808
  .word 0x3c05007c
  .word 0x24030001
  .word 0x00000000
  .word 0xac44fff8
  .word 0x2463ffff
  .word 0xac44fffc
  .word 0xac40008c
  .word 0xac460080
  .word 0xac400084
  .word 0xac400088
  .word 0x24aae608
  .word 0x81470000
  .word 0x81480001
  .word 0xa0470000
  .word 0xa0480001
  .word 0x0461fff3
  .word 0x24420898
  .word 0x03e00008
  .word 0x24020001
}
// FUN_00515400
asm u32 FUN_00515400(int param_1)
{
  .set noreorder
  .word 0x24020898
  .word 0x3c030098
  .word 0x00822018
  .word 0x2463b788
  .word 0x2408ffff
  .word 0x24090001
  .word 0x246a0808
  .word 0x3c0b007c
  .word 0x00642821
  .word 0xaca80800
  .word 0x00a0302d
  .word 0xacc80804
  .word 0x00a0382d
  .word 0xace00894
  .word 0x00a0182d
  .word 0xaca90888
  .word 0x008a2021
  .word 0xacc0088c
  .word 0xac600890
  .word 0x2567e608
  .word 0x80e30000
  .word 0x80e50001
  .word 0xa0830000
  .word 0xa0850001
  .word 0x03e00008
  .word 0x24020001
}
// FUN_00515468
asm int FUN_00515468(u64 param_1,int param_2,u32 *param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x24030184
  .word 0xffb10010
  .word 0x3c020078
  .word 0x0080882d
  .word 0xffb30030
  .word 0x02231818
  .word 0x244227e0
  .word 0x00c0982d
  .word 0xffbf0060
  .word 0xffb50050
  .word 0x00a0302d
  .word 0xffb40040
  .word 0xffb20020
  .word 0x00624821
  .word 0x04a10003
  .word 0xffb00000
  .word 0x3402ffff
  .word 0x00a23021
  .word 0x24020898
  .word 0x3c150098
  .word 0x02223818
  .word 0x26a8b788
  .word 0x2402ffff
  .word 0x25040804
  .word 0x0045102a
  .word 0x24a300ff
  .word 0x00a2180b
  .word 0x00068403
  .word 0x00e49021
  .word 0x00031a03
  .word 0x00101200
  .word 0x8e440000
  .word 0x1090000f
  .word 0x0062a023
  .word 0x00101080
  .word 0x00e82821
  .word 0x01221021
  .word 0x0220202d
  .word 0x8c460050
  .word 0x0c146906
  .word 0x24070001
  .word 0x54400006
  .word 0xae500000
  .word 0x3c038101
  .word 0x0000102d
  .word 0x3463006f
  .word 0x1000000e
  .word 0xae630000
  .word 0x24030898
  .word 0x00141080
  .word 0x02231818
  .word 0x26a4b788
  .word 0x00431021
  .word 0x00441021
  .word 0x8c420000
  .word 0x04430005
  .word 0xae600000
  .word 0x3c038101
  .word 0x0000102d
  .word 0x34639001
  .word 0xae630000
  .word 0xdfbf0060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}
// FUN_00515588
asm u32 FUN_00515588(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24020898
  .word 0xffb00000
  .word 0x0080802d
  .word 0xffb10010
  .word 0x02023818
  .word 0x3c110098
  .word 0xffbf0020
  .word 0x2625b788
  .word 0x00a71021
  .word 0x8c460800
  .word 0x18c0000d
  .word 0x24040001
  .word 0x8c430894
  .word 0x1464000b
  .word 0x24030898
  .word 0x24a50400
  .word 0x0200202d
  .word 0x00e52821
  .word 0x0c146916
  .word 0x24070001
  .word 0x14400004
  .word 0x24030898
  .word 0x10000007
  .word 0x0000102d
  .word 0x24030898
  .word 0x2624b788
  .word 0x02031818
  .word 0x24020001
  .word 0x00832021
  .word 0xac800894
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_00515618
asm u32 FUN_00515618(u64 param_1,int param_2,int *param_3)
{
  .set noreorder
  .word 0x00a0382d
  .word 0x2402ffff
  .word 0x27bdff70
  .word 0x0047102a
  .word 0x24e300ff
  .word 0xffb20020
  .word 0x00e2180b
  .word 0xffb30030
  .word 0x00039203
  .word 0xffb10010
  .word 0x00c0982d
  .word 0x00121200
  .word 0x0080882d
  .word 0xffb00000
  .word 0xffbf0080
  .word 0xffb70070
  .word 0x00e29023
  .word 0xffb60060
  .word 0xffb50050
  .word 0x0c14551a
  .word 0xffb40040
  .word 0x8e630000
  .word 0x0040802d
  .word 0x14600023
  .word 0x0000102d
  .word 0x24020898
  .word 0x3c170098
  .word 0x0222a018
  .word 0x26f6b788
  .word 0x26c20800
  .word 0x0282a821
  .word 0x8ea30000
  .word 0x10700012
  .word 0x24030898
  .word 0x0c145562
  .word 0x0220202d
  .word 0x10400008
  .word 0x26c50400
  .word 0x0220202d
  .word 0x02852821
  .word 0x0200302d
  .word 0x0c146906
  .word 0x24070001
  .word 0x54400006
  .word 0xaeb00000
  .word 0x3c038101
  .word 0x0000102d
  .word 0x3463006f
  .word 0x1000000a
  .word 0xae630000
  .word 0x24030898
  .word 0x00122080
  .word 0x02231818
  .word 0x26e2b788
  .word 0x00832021
  .word 0x00441021
  .word 0x8c500400
  .word 0xae600000
  .word 0x0200102d
  .word 0xdfbf0080
  .word 0xdfb70070
  .word 0xdfb60060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0090
}
// FUN_00515730
asm long FUN_00515730(u64 param_1,u64 param_2,u32 *param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c145586
  .word 0x00c0802d
  .word 0x0040182d
  .word 0x3c027fff
  .word 0x3442ffff
  .word 0x14620004
  .word 0xdfbf0010
  .word 0x3c028101
  .word 0x34429002
  .word 0xae020000
  .word 0x0060102d
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00515778
asm u32 FUN_00515778(u64 param_1,u64 param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c1455cc
  .word 0x00c0802d
  .word 0x8e030000
  .word 0x0040202d
  .word 0x1460000d
  .word 0x0000102d
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0x14820007
  .word 0x3c027fff
  .word 0x3c038101
  .word 0x3c02ffff
  .word 0x34630059
  .word 0x3442ffff
  .word 0x10000003
  .word 0xae030000
  .word 0x3442ffff
  .word 0x00821024
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_005157E0
asm u32 FUN_005157e0(u64 param_1,int param_2,u32 param_3,u64 param_4)
{
  .set noreorder
  .word 0x2402ffff
  .word 0x27bdff60
  .word 0x0045102a
  .word 0x24a300ff
  .word 0x00a2180b
  .word 0xffb30030
  .word 0x00039a03
  .word 0xffbe0080
  .word 0xffb40040
  .word 0x00131200
  .word 0xffb00000
  .word 0x00e0a02d
  .word 0x0080802d
  .word 0x00c0f02d
  .word 0xffb10010
  .word 0x00a29823
  .word 0xffbf0090
  .word 0xffb70070
  .word 0x0280302d
  .word 0xffb60060
  .word 0xffb50050
  .word 0x0c14551a
  .word 0xffb20020
  .word 0x0040882d
  .word 0x8e820000
  .word 0x14400026
  .word 0x0000102d
  .word 0x24020898
  .word 0x3c170098
  .word 0x02029018
  .word 0x26f6b788
  .word 0x26c20800
  .word 0x0242a821
  .word 0x8ea30000
  .word 0x10710012
  .word 0x24040898
  .word 0x0c145562
  .word 0x0200202d
  .word 0x10400008
  .word 0x26c50400
  .word 0x0200202d
  .word 0x02452821
  .word 0x0220302d
  .word 0x0c146906
  .word 0x24070001
  .word 0x54400006
  .word 0xaeb10000
  .word 0x3c038101
  .word 0x0000102d
  .word 0x3463006f
  .word 0x1000000d
  .word 0xae830000
  .word 0x24040898
  .word 0x00132880
  .word 0x02042018
  .word 0x26e3b788
  .word 0x24060001
  .word 0x24020001
  .word 0x00a42821
  .word 0x00642021
  .word 0x00651821
  .word 0xac7e0400
  .word 0xac860894
  .word 0xae800000
  .word 0xdfbf0090
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
}
// FUN_00515910
asm int FUN_00515910(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x24020898
  .word 0xffb50060
  .word 0x3c030098
  .word 0xffb60070
  .word 0x0080a82d
  .word 0x02a2b018
  .word 0x24040184
  .word 0xffb10020
  .word 0x02a42018
  .word 0xffbe0090
  .word 0x00a0882d
  .word 0xffb70080
  .word 0x3c020078
  .word 0xffb30040
  .word 0x244227e0
  .word 0xffbf00a0
  .word 0x2477c018
  .word 0xffb40050
  .word 0x00829821
  .word 0xffb20030
  .word 0x02d7f021
  .word 0xffb00010
  .word 0xae200000
  .word 0xafb60000
  .word 0x8e630170
  .word 0x8fd00000
  .word 0x0203102a
  .word 0x10400019
  .word 0x8fa20000
  .word 0x3c030098
  .word 0x2463c018
  .word 0x3c148000
  .word 0x00439021
  .word 0x02a0202d
  .word 0x00000000
  .word 0x0200282d
  .word 0x0c145586
  .word 0x0220302d
  .word 0x0040182d
  .word 0x8e220000
  .word 0x14400015
  .word 0x0000102d
  .word 0x00741024
  .word 0x54400005
  .word 0x8e630170
  .word 0xae200000
  .word 0x0200102d
  .word 0x1000000e
  .word 0xae500000
  .word 0x26100001
  .word 0x0203102a
  .word 0x1440ffef
  .word 0x02a0202d
  .word 0x02d72021
  .word 0x8c820000
  .word 0x10400003
  .word 0x0000102d
  .word 0x1000ffdf
  .word 0xac800000
  .word 0x3c038101
  .word 0x3463001c
  .word 0xae230000
  .word 0xdfbf00a0
  .word 0xdfbe0090
  .word 0xdfb70080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
}
// FUN_00515A40
asm int FUN_00515a40(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x24060898
  .word 0xffb40040
  .word 0x3c020078
  .word 0x0080a02d
  .word 0xffb20020
  .word 0x24040184
  .word 0x72863018
  .word 0x02842018
  .word 0xffb30030
  .word 0xffb10010
  .word 0x00a0902d
  .word 0xffbf0060
  .word 0x3c030098
  .word 0xffb50050
  .word 0x244227e0
  .word 0xffb00000
  .word 0x2463b788
  .word 0xae400000
  .word 0x00829821
  .word 0x00661821
  .word 0x8c700890
  .word 0x8e620170
  .word 0x0202102a
  .word 0x10400012
  .word 0x0000882d
  .word 0x3c158000
  .word 0x00000000
  .word 0x0280202d
  .word 0x0200282d
  .word 0x0c145586
  .word 0x0240302d
  .word 0x0040202d
  .word 0x8e420000
  .word 0x14400009
  .word 0x0000102d
  .word 0x8e620170
  .word 0x00952024
  .word 0x26230001
  .word 0x26100001
  .word 0x0202102a
  .word 0x1440fff2
  .word 0x0064880a
  .word 0x0220102d
  .word 0xdfbf0060
  .word 0xdfb50050
  .word 0xdfb40040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}
// FUN_00515B18
asm int FUN_00515b18(u64 param_1,u64 *param_2,u64 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffb30040
  .word 0xffb10020
  .word 0x00a0982d
  .word 0xffb40050
  .word 0x3c118101
  .word 0xffb20030
  .word 0x00c0282d
  .word 0xffb00010
  .word 0x0080902d
  .word 0xffbf0060
  .word 0x00e0802d
  .word 0xafa00000
  .word 0x3c140098
  .word 0x36310059
  .word 0x00000000
  .word 0x2a020002
  .word 0x10400039
  .word 0x00a0302d
  .word 0x2691c8c0
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x14400004
  .word 0x00101a40
  .word 0x3c028101
  .word 0x1000003c
  .word 0x3442006f
  .word 0x00711821
  .word 0x00731025
  .word 0x30420007
  .word 0x10400019
  .word 0x0260202d
  .word 0x24620200
  .word 0x68650007
  .word 0x6c650000
  .word 0x6866000f
  .word 0x6c660008
  .word 0x68670017
  .word 0x6c670010
  .word 0x6868001f
  .word 0x6c680018
  .word 0xb0850007
  .word 0xb4850000
  .word 0xb086000f
  .word 0xb4860008
  .word 0xb0870017
  .word 0xb4870010
  .word 0xb088001f
  .word 0xb4880018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x10000010
  .word 0xa260005f
  .word 0x24620200
  .word 0xdc650000
  .word 0xdc660008
  .word 0xdc670010
  .word 0xdc680018
  .word 0xfc850000
  .word 0xfc860008
  .word 0xfc870010
  .word 0xfc880018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0xa260005f
  .word 0x1000000e
  .word 0x0000102d
  .word 0x0240202d
  .word 0x0c1455de
  .word 0x03a0302d
  .word 0x8fa30000
  .word 0x14710004
  .word 0x0040282d
  .word 0x3c028101
  .word 0x10000005
  .word 0x34420002
  .word 0x14600003
  .word 0x0060102d
  .word 0x1000ffb9
  .word 0x2610fffe
  .word 0xdfbf0060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0070
}
// FUN_00515C98
asm int FUN_00515c98(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c02ffff
  .word 0xffb10020
  .word 0x3442ffff
  .word 0xffbf0030
  .word 0x0080882d
  .word 0x14a20003
  .word 0xffb00010
  .word 0x10000016
  .word 0x0000102d
  .word 0x10000004
  .word 0x24100001
  .word 0x26100001
  .word 0x3442ffff
  .word 0x00a22824
  .word 0x0220202d
  .word 0x0c1455cc
  .word 0x03a0302d
  .word 0x8fa30000
  .word 0x10600003
  .word 0x0040282d
  .word 0x10000009
  .word 0x0060102d
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0x10a20005
  .word 0x0200102d
  .word 0x04a0fff0
  .word 0x3c027fff
  .word 0x3c028101
  .word 0x34429002
  .word 0xdfbf0030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_00515D28: O2 keeps the recovered four-word argument block but differs only in its stack/register schedule (80 bytes versus retail 88).
asm void FUN_00515d28(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x00a0182d
  .word 0xffbf0010
  .word 0x24090001
  .word 0x03a0282d
  .word 0x8c620030
  .word 0x94660028
  .word 0x00021280
  .word 0x9467002c
  .word 0x0046001a
  .word 0x00c0402d
  .word 0xafa80000
  .word 0xafa70004
  .word 0x50c00001
  .word 0x000001cd
  .word 0xafa9000c
  .word 0x00001012
  .word 0x0c146be6
  .word 0xafa20008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_00515D80
asm int FUN_00515d80(u64 param_1,long param_2)
{
  .set noreorder
  .word 0x27bdfd40
  .word 0x24030184
  .word 0xffb30250
  .word 0x3c020078
  .word 0x0080982d
  .word 0xffb60280
  .word 0x02631818
  .word 0xffb10230
  .word 0x244227e0
  .word 0xffbf02b0
  .word 0xffbe02a0
  .word 0x00a0b02d
  .word 0xffb70290
  .word 0xffb50270
  .word 0x00628821
  .word 0xffb40260
  .word 0xffb20240
  .word 0x0c147030
  .word 0xffb00220
  .word 0x1040000a
  .word 0x00000000
  .word 0x12c00004
  .word 0x00000000
  .word 0xaec00004
  .word 0xaec00000
  .word 0xaec00008
  .word 0x0c146868
  .word 0x0260202d
  .word 0x14400004
  .word 0x24140002
  .word 0x3c028101
  .word 0x100000ba
  .word 0x34420013
  .word 0x14540009
  .word 0x3c1e0098
  .word 0x0c146cb0
  .word 0x0260202d
  .word 0x24030898
  .word 0x27c2b788
  .word 0x02631818
  .word 0x24040001
  .word 0x00431021
  .word 0xac440888
  .word 0x24030898
  .word 0x27d2b788
  .word 0x02638018
  .word 0x02501021
  .word 0x8c430888
  .word 0x10600085
  .word 0x0260202d
  .word 0x0c146860
  .word 0x03a0282d
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa20000
  .word 0x10400013
  .word 0x02501821
  .word 0x2404ffff
  .word 0xac600894
  .word 0x0060102d
  .word 0xac440800
  .word 0x3c05007c
  .word 0xac640804
  .word 0x26420808
  .word 0x02021021
  .word 0xac600890
  .word 0x24a8e608
  .word 0x81030000
  .word 0x81060001
  .word 0xa0430000
  .word 0xa0460001
  .word 0x0c146878
  .word 0x0260202d
  .word 0x14400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x1000008d
  .word 0x3442006f
  .word 0x56c00001
  .word 0xaed40000
  .word 0x3c05007c
  .word 0x0220202d
  .word 0x24a5e610
  .word 0x0c14919c
  .word 0x2406001b
  .word 0x50400005
  .word 0x8222001c
  .word 0x56c00066
  .word 0xaec00004
  .word 0x10000064
  .word 0x00000000
  .word 0x2404000a
  .word 0x8225001e
  .word 0x2442ffd0
  .word 0x00443018
  .word 0x24c3ffd0
  .word 0x00653021
  .word 0x28c2000b
  .word 0x10400004
  .word 0x0260202d
  .word 0x3c028101
  .word 0x10000074
  .word 0x34420086
  .word 0x0c14574a
  .word 0x0220282d
  .word 0x0000a02d
  .word 0x8e250044
  .word 0x0260202d
  .word 0x8e260040
  .word 0x0c146bdc
  .word 0x0000902d
  .word 0x0c146d28
  .word 0x0260202d
  .word 0x8e230030
  .word 0x240203e8
  .word 0x50400001
  .word 0x000001cd
  .word 0x0062001a
  .word 0x8e240038
  .word 0x8e300034
  .word 0x00001812
  .word 0x00621818
  .word 0x18800013
  .word 0x24770001
  .word 0x27b50010
  .word 0x00000000
  .word 0x16970004
  .word 0x0200282d
  .word 0x8e220034
  .word 0x02021023
  .word 0xae220170
  .word 0x0c146ad4
  .word 0x0260202d
  .word 0x26520001
  .word 0x8e240038
  .word 0x26830001
  .word 0x0062a00a
  .word 0x0244202a
  .word 0x1480fff3
  .word 0x26100001
  .word 0x10000003
  .word 0x8e26003c
  .word 0x27b50010
  .word 0x8e26003c
  .word 0x0260202d
  .word 0x02a0282d
  .word 0x0c1456c6
  .word 0x0000382d
  .word 0x0040182d
  .word 0x14600044
  .word 0xafa20210
  .word 0x97a20010
  .word 0x30428000
  .word 0x10400024
  .word 0x27b00050
  .word 0x3c05007c
  .word 0x24a5e5f0
  .word 0x0c14904a
  .word 0x0200202d
  .word 0x1440001e
  .word 0x02a0282d
  .word 0x8e26003c
  .word 0x0260202d
  .word 0x0c1456c6
  .word 0x24070001
  .word 0x0040182d
  .word 0x14600033
  .word 0xafa20210
  .word 0x97a20010
  .word 0x30428000
  .word 0x10400013
  .word 0x3c05007c
  .word 0x0200202d
  .word 0x0c14904a
  .word 0x24a5e5f8
  .word 0x1440000e
  .word 0x27c3b788
  .word 0x24020898
  .word 0x02621018
  .word 0x24040001
  .word 0x00621821
  .word 0xac64088c
  .word 0x24030898
  .word 0x27c2b788
  .word 0x02631818
  .word 0x2442088c
  .word 0x00628021
  .word 0x8e040000
  .word 0x14800004
  .word 0x00000000
  .word 0x3c028101
  .word 0x1000001a
  .word 0x3442002f
  .word 0x12c0000d
  .word 0x0260202d
  .word 0x0c145690
  .word 0x27a50210
  .word 0x8fa30210
  .word 0x10600003
  .word 0x0040302d
  .word 0x10000011
  .word 0x0060102d
  .word 0x8e030000
  .word 0x24020002
  .word 0xaec20000
  .word 0xaec30004
  .word 0xaec60008
  .word 0x24030898
  .word 0x27c2b788
  .word 0x02631818
  .word 0x24420888
  .word 0x00621821
  .word 0x8c640000
  .word 0x50800004
  .word 0x0000102d
  .word 0x3c028101
  .word 0xac600000
  .word 0x34429003
  .word 0xdfbf02b0
  .word 0xdfbe02a0
  .word 0xdfb70290
  .word 0xdfb60280
  .word 0xdfb50270
  .word 0xdfb40260
  .word 0xdfb30250
  .word 0xdfb20240
  .word 0xdfb10230
  .word 0xdfb00220
  .word 0x03e00008
  .word 0x27bd02c0
}
// FUN_00516118 NONMATCHING
int FUN_00516118(u64 param_1)

{
  u64 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  u8 uStack_d0;
  u8 bStack_cf;
  u8 bStack_ce;
  u8 bStack_cd;
  u8 bStack_cb;
  u8 bStack_ca;
  u8 bStack_c9;
  int iStack_b0;
  int iStack_ac;
  u16 uVar1;
  u8 uVar2;
  u64 uVar3;
  u64 uVar4;
  u32 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  iVar15 = (int)param_1;
  iVar8 = iVar15 * 0x184;
  puVar12 = (u64 *)(&DAT_007827e0 + iVar8);
  lVar9 = FUN_0051c0c0(0);
  if (lVar9 == 0) {
    return -0x7efeffed;
  }
  (&DAT_0097c01c)[iVar15 * 0x226] = 0;
  (&DAT_0097bf88)[iVar15 * 0x226] = 0xffffffff;
  (&DAT_0097bf8c)[iVar15 * 0x226] = 0xffffffff;
  (&DAT_0097c018)[iVar15 * 0x226] = 0;
  uVar2 = DAT_007be609;
  (&DAT_0097bf90)[iVar15 * 0x898] = DAT_007be608;
  (&DAT_0097bf91)[iVar15 * 0x898] = uVar2;
  lVar9 = FUN_0051a180(param_1,(int *)(u32)(int *)(u32)&iStack_e0);
  if ((lVar9 == 0) || (lVar9 = FUN_0051a1e0(param_1), lVar9 == 0)) {
LAB_005169c4:
    iVar8 = -0x7efeff91;
  }
  else {
    lVar9 = FUN_00524670(puVar12,0x7be610,0x1b);
    if (lVar9 != 0) {
      iVar13 = 0x1f;
      puVar5 = (u32 *)(&DAT_0078292c + iVar8);
      do {
        *puVar5 = 0xffffffff;
        iVar13 = iVar13 + -1;
        puVar5 = puVar5 + -1;
      } while (-1 < iVar13);
      lVar9 = (long)(FUN_0051ab98(param_1,&iStack_e0,(int *)(u32)(&DAT_007828b0 + iVar8)));
      if (lVar9 == 0) goto LAB_005169c4;
    }
    FUN_00521408(puVar12,0,0x28);
    uVar4 = DAT_007be620;
    uVar3 = DAT_007be618;
    *puVar12 = DAT_007be610;
    *(u64 *)(&DAT_007827e8 + iVar8) = uVar3;
    *(u64 *)(&DAT_007827f0 + iVar8) = uVar4;
    *(u8 **)(&DAT_007827f8 + iVar8) = PTR_DAT_007be628;
    FUN_00523e68(puVar12,0x7be630);
    *(u16 *)(&DAT_00782808 + iVar8) = (u16)iStack_e0;
    if (iStack_e0 == 0) {
      trap(7);
    }
    *(u16 *)(&DAT_0078280e + iVar8) = 0xff00;
    *(u16 *)(&DAT_0078280c + iVar8) = (u16)iStack_dc;
    *(short *)(&DAT_0078280a + iVar8) = (short)(0x400 / iStack_e0);
    *(u32 *)(&DAT_00782934 + iVar8) = 0x400;
    (&DAT_00782930)[iVar8] = 2;
    (&DAT_00782931)[iVar8] = 0x2b;
    *(u32 *)(&DAT_00782938 + iVar8) = 0x100;
    *(u32 *)(&DAT_0078281c + iVar8) = 0;
    *(u32 *)(&DAT_00782828 + iVar8) = 0;
    *(u32 *)(&DAT_0078282c + iVar8) = 0;
    *(u32 *)(&DAT_00782950 + iVar8) = 0;
    *(int *)(&DAT_00782810 + iVar8) = iStack_d8 / (int)(0x400 / iStack_e0 & 0xffffU);
    *(u32 *)(&DAT_00782960 + iVar8) = 0xffffffff;
    *(u32 *)(&DAT_00782944 + iVar8) = 0;
    *(u32 *)(&DAT_00782948 + iVar8) = 0;
    *(u32 *)(&DAT_0078294c + iVar8) = 0;
    *(u32 *)(&DAT_00782954 + iVar8) = 0xffffffff;
    *(u32 *)(&DAT_00782958 + iVar8) = 0xffffffff;
    *(u32 *)(&DAT_0078295c + iVar8) = 0xffffffff;
    *(u32 *)(&DAT_0078293c + iVar8) =
         (u32)*(u16 *)(&DAT_0078280c + iVar8) / (u32)*(u16 *)(&DAT_0078280a + iVar8);
    *(int *)(&DAT_00782820 + iVar8) = iStack_d8 / iStack_dc + -1;
    iStack_ac = iVar8 + 0x782830;
    while( true ) {
      lVar9 = FUN_0051ab08(param_1,*(u32 *)(&DAT_00782820 + iVar8));
      iVar13 = *(int *)(&DAT_00782820 + iVar8);
      if (lVar9 == 0) break;
      *(int *)(&DAT_00782820 + iVar8) = iVar13 + -1;
    }
    while( true ) {
      *(int *)(&DAT_00782824 + iVar8) = iVar13 + -1;
      lVar9 = FUN_0051ab08(param_1,*(u32 *)(&DAT_00782824 + iVar8));
      if (lVar9 == 0) break;
      iVar13 = *(int *)(&DAT_00782824 + iVar8);
    }
    FUN_0051af70(param_1,*(u32 *)(&DAT_00782824 + iVar8),
                 *(u32 *)(&DAT_00782820 + iVar8));
    iVar10 = *(int *)(&DAT_00782810 + iVar8) * 4 + -1;
    iVar13 = *(int *)(&DAT_00782810 + iVar8) * 4 + 0x3fe;
    if (-1 < iVar10) {
      iVar13 = iVar10;
    }
    iStack_dc = iStack_dc * iStack_e0;
    iVar10 = (iVar13 >> 10) + 1;
    iVar11 = iVar10 * 4 + -1;
    iVar13 = iVar10 * 4 + 0x3fe;
    if (-1 < iVar11) {
      iVar13 = iVar11;
    }
    iVar11 = iStack_dc + 0x3ff;
    if (-1 < iStack_dc) {
      iVar11 = iStack_dc;
    }
    iVar11 = iVar11 >> 10;
    iVar13 = (iVar13 >> 10) + 1;
    if (0x20 < iVar13) {
      iVar13 = 0x20;
      iVar10 = 0x2000;
    }
    FUN_00521408(iStack_ac,0,0x80);
    iVar7 = 0;
    if (0 < iVar13) {
      do {
        iVar14 = iVar7 + 1;
        do {
          lVar9 = FUN_0051ab50(param_1,iVar11);
          if (lVar9 == 1) {
            iVar11 = iVar11 + 1;
          }
        } while (lVar9 != 0);
        *(int *)(iStack_ac + iVar7 * 4) = iVar11;
        iVar11 = iVar11 + 1;
        iVar7 = iVar14;
      } while (iVar14 < iVar13);
    }
    iVar10 = iVar10 + -1;
    iVar14 = 0;
    iVar7 = 0;
    iVar13 = 0xff;
    puVar5 = (u32 *)(&DAT_0097bb84 + iVar15 * 0x898);
    do {
      *puVar5 = 0xffffffff;
      iVar13 = iVar13 + -1;
      puVar5 = puVar5 + -1;
    } while (-1 < iVar13);
    iVar13 = 0xff;
    puVar5 = (u32 *)(&DAT_0097bf84 + iVar15 * 0x898);
    do {
      *puVar5 = 0xffffffff;
      iVar13 = iVar13 + -1;
      puVar5 = puVar5 + -1;
    } while (-1 < iVar13);
    if (iVar10 < 0) {
      uVar1 = *(u16 *)(&DAT_0078280a + iVar8);
    }
    else {
      do {
        while (lVar9 = FUN_0051ab50(param_1,iVar11), lVar9 != 0) {
          iVar11 = iVar11 + 1;
        }
        iVar13 = iVar15 * 0x898;
        lVar9 = (u64)(FUN_0051a458(param_1,(u64)(u32)(&DAT_0097bb88 + iVar13),iVar11,1));
        if (lVar9 == 0) goto LAB_005169c4;
        iVar6 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        *(int *)(&DAT_0097b788 + iVar6 + iVar13) = iVar11;
        if ((0xff < iVar7) || (iVar10 == 0)) {
          iVar7 = iVar14 * 4;
          iVar14 = iVar14 + 1;
          lVar9 = (u64)(FUN_0051a458(param_1,(u64)(u32)(&DAT_0097b788 + iVar13),*(u32 *)(iStack_ac + iVar7),1));
          if (lVar9 == 0) goto LAB_005169c4;
          puVar5 = (u32 *)(&DAT_0097bb84 + iVar13);
          iVar13 = 0xff;
          do {
            *puVar5 = 0xffffffff;
            iVar13 = iVar13 + -1;
            puVar5 = puVar5 + -1;
          } while (-1 < iVar13);
          iVar7 = 0;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      uVar1 = *(u16 *)(&DAT_0078280a + iVar8);
    }
    *(int *)(&DAT_00782814 + iVar8) = iVar11;
    iVar13 = 0;
    if (uVar1 == 0) {
      trap(7);
    }
    iVar10 = 0;
    iVar7 = (int)(*(int *)(&DAT_00782824 + iVar8) * (u32)*(u16 *)(&DAT_0078280c + iVar8)) /
            (int)(u32)uVar1 - iVar11;
    *(int *)(&DAT_00782818 + iVar8) = iVar7;
    iVar14 = (*(int *)(&DAT_00782810 + iVar8) / 1000) * 1000 + 1;
    if (0 < iVar7) {
      iVar7 = iStack_b0;
      do {
        iStack_b0 = iVar7;
        if (iVar10 == iVar14) {
          *(int *)(&DAT_00782950 + iVar8) = iVar11 - *(int *)(&DAT_00782814 + iVar8);
        }
        lVar9 = FUN_0051ab50(param_1,iVar11);
        if (lVar9 == 1) {
          FUN_005157e0(param_1,iVar13,0xfffffffffffffffd,(u64)(u32)&iStack_b0);
          iVar7 = iStack_b0;
        }
        else {
          if (iVar10 == 0) {
            *(int *)(&DAT_00782814 + iVar8) = iVar11;
          }
          FUN_005157e0(param_1,iVar13,0x7fffffff,(u64)(u32)&iStack_b0);
          iVar10 = iVar10 + 1;
          iVar7 = iStack_b0;
        }
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar13 = iVar13 + 1;
        iVar11 = iVar11 + 1;
        iStack_b0 = 0;
      } while (iVar13 < *(int *)(&DAT_00782818 + iVar8));
    }
    if (iVar14 <= iVar10) {
      if (*(u16 *)(&DAT_0078280a + iVar8) == 0) {
        trap(7);
      }
      *(int *)(&DAT_00782818 + iVar8) =
           (int)(*(int *)(&DAT_00782824 + iVar8) * (u32)*(u16 *)(&DAT_0078280c + iVar8)) /
           (int)(u32)*(u16 *)(&DAT_0078280a + iVar8) - *(int *)(&DAT_00782814 + iVar8);
      lVar9 = (u64)(FUN_00515910(param_1,(u64)(u32)&iStack_b0));
      if (iStack_b0 != 0) {
        return iStack_b0;
      }
      if (lVar9 == 0) {
        FUN_00521408(0x97c8c0,0,0x200);
        DAT_0097c8c0 = 0x8427;
        (*(u16*)((u8*)&DAT_0097c8c8 + 6)) = (u16)(bStack_c9 >> 4) * 10 + (bStack_c9 & 0xf) + 2000;
        (*(u8*)((u8*)&DAT_0097c8c8 + 5)) = (bStack_ca >> 4) * '\n' + (bStack_ca & 0xf);
        (*(u8*)((u8*)&DAT_0097c8c8 + 1)) = (bStack_cf >> 4) * '\n' + (bStack_cf & 0xf);
        (*(u8*)((u8*)&DAT_0097c8c8 + 4)) = (bStack_cb >> 4) * '\n' + (bStack_cb & 0xf);
        (*(u8*)((u8*)&DAT_0097c8c8 + 3)) = (bStack_cd >> 4) * '\n' + (bStack_cd & 0xf);
        (*(u8*)((u8*)&DAT_0097c8c8 + 2)) = (bStack_ce >> 4) * '\n' + (bStack_ce & 0xf);
        DAT_0097c8c4 = 2;
        DAT_0097c8c2 = 0;
        (*(u8*)((u8*)&DAT_0097c8c8 + 0)) = 0;
        DAT_0097c8d0 = 0;
        DAT_0097c8d4 = 0;
        DAT_0097c8d8 = (u32)CONCAT25((*(u16*)((u8*)&DAT_0097c8c8 + 6)),
                                       CONCAT14((*(u8*)((u8*)&DAT_0097c8c8 + 5)),
                                                CONCAT13((*(u8*)((u8*)&DAT_0097c8c8 + 4)),
                                                         CONCAT12((*(u8*)((u8*)&DAT_0097c8c8 + 3)),
                                                                  CONCAT11((*(unsigned char *)((unsigned char *)&DAT_0097c8c8 + 2)),
                                                                           (*(u8*)((u8*)&DAT_0097c8c8 + 1)))))))
                       << 8;
        DAT_0097c8e0 = 0;
        DAT_0097c900 = DAT_007be5f0;
        DAT_0097c901 = DAT_007be5f1;
        FUN_00521408(0x97cac0,0,0x200);
        (*(u8*)((u8*)&DAT_0097cac8 + 1)) = (bStack_cf >> 4) * '\n' + (bStack_cf & 0xf);
        (*(u8*)((u8*)&DAT_0097cac8 + 3)) = (bStack_cd >> 4) * '\n' + (bStack_cd & 0xf);
        (*(u16*)((u8*)&DAT_0097cac8 + 6)) = (u16)(bStack_c9 >> 4) * 10 + (bStack_c9 & 0xf) + 2000;
        (*(u8*)((u8*)&DAT_0097cac8 + 5)) = (bStack_ca >> 4) * '\n' + (bStack_ca & 0xf);
        (*(u8*)((u8*)&DAT_0097cac8 + 4)) = (bStack_cb >> 4) * '\n' + (bStack_cb & 0xf);
        (*(u8*)((u8*)&DAT_0097cac8 + 2)) = (bStack_ce >> 4) * '\n' + (bStack_ce & 0xf);
        DAT_0097cac0 = 0xa426;
        DAT_0097cac4 = 0;
        DAT_0097cac2 = 0;
        (*(u8*)((u8*)&DAT_0097cac8 + 0)) = 0;
        DAT_0097cad0 = 0;
        DAT_0097cad4 = 0;
        DAT_0097cad8 = (u32)CONCAT25((*(u16*)((u8*)&DAT_0097cac8 + 6)),
                                       CONCAT14((*(u8*)((u8*)&DAT_0097cac8 + 5)),
                                                CONCAT13((*(u8*)((u8*)&DAT_0097cac8 + 4)),
                                                         CONCAT12((*(u8*)((u8*)&DAT_0097cac8 + 3)),
                                                                  CONCAT11((*(unsigned char *)((unsigned char *)&DAT_0097cac8 + 2)),
                                                                           (*(u8*)((u8*)&DAT_0097cac8 + 1)))))))
                       << 8;
        DAT_0097cae0 = 0;
        DAT_0097cb00 = DAT_007be5f8;
        DAT_0097cb01 = DAT_007be5f9;
        DAT_0097cb02 = DAT_007be5fa;
        lVar9 = FUN_0051aa90(param_1,0x97c8c0,0,1);
        if (lVar9 != 0) {
          FUN_005157e0(param_1,0,0xffffffffffffffff,(u64)(u32)&iStack_b0);
          if (iStack_b0 != 0) {
            return iStack_b0;
          }
          lVar9 = FUN_0051a498(param_1);
          if (((lVar9 != 0) && (lVar9 = FUN_00515588(param_1), lVar9 != 0)) &&
             (lVar9 = FUN_0051a2f8(param_1), lVar9 != 0)) {
            (&DAT_0097c010)[iVar15 * 0x226] = 1;
            iVar8 = FUN_00515d80(param_1,0);
            if (iVar8 != -0x7efe6ffd) {
              return iVar8;
            }
            return 0;
          }
        }
        goto LAB_005169c4;
      }
      FUN_00505e48(0x7be640,lVar9);
    }
    iVar8 = -0x7efe6fff;
  }
  return iVar8;
}
// FUN_00516A48
asm u32 FUN_00516a48(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0x0080902d
  .word 0xffbf0040
  .word 0xffb10020
  .word 0x0c147030
  .word 0xffb00010
  .word 0x14400004
  .word 0x0240202d
  .word 0x3c028101
  .word 0x1000002f
  .word 0x34420013
  .word 0x0c146860
  .word 0x03a0282d
  .word 0x14400004
  .word 0x8fa70004
  .word 0x3c028101
  .word 0x10000028
  .word 0x3442006f
  .word 0x24030898
  .word 0x8fa40008
  .word 0x02431818
  .word 0x3c020098
  .word 0x2408ffff
  .word 0x0087001a
  .word 0x2442b788
  .word 0x24490808
  .word 0x3c0a007c
  .word 0x00432021
  .word 0xac800894
  .word 0x0080282d
  .word 0xaca80800
  .word 0x0080302d
  .word 0xacc80804
  .word 0x0080102d
  .word 0xac800890
  .word 0x00691821
  .word 0xac40088c
  .word 0x2546e608
  .word 0x80c20000
  .word 0x80c40001
  .word 0xa0620000
  .word 0xa0640001
  .word 0x50e00001
  .word 0x000001cd
  .word 0x00008812
  .word 0x1a20000a
  .word 0x0000802d
  .word 0x0240202d
  .word 0x00000000
  .word 0x0c146ef6
  .word 0x0200282d
  .word 0x1040ffdb
  .word 0x26100001
  .word 0x0211102a
  .word 0x1440fffa
  .word 0x0240202d
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_00516B48
asm u32 FUN_00516b48(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c147030
  .word 0x0080802d
  .word 0x10400018
  .word 0x00000000
  .word 0x0c146868
  .word 0x0200202d
  .word 0x24030002
  .word 0x10430013
  .word 0x3c030098
  .word 0x24020898
  .word 0x02022818
  .word 0x2466b788
  .word 0x24040001
  .word 0x00c51021
  .word 0x8c430888
  .word 0x1064000b
  .word 0x00000000
  .word 0x8c43088c
  .word 0x14600004
  .word 0x00000000
  .word 0x3c028101
  .word 0x1000000b
  .word 0x3442002f
  .word 0x0c146870
  .word 0x0200202d
  .word 0x14400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000004
  .word 0x34420013
  .word 0x0c146d28
  .word 0x0200202d
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_00516BE8
asm u32 FUN_00516be8(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c145486
  .word 0x00c0802d
  .word 0x10400005
  .word 0x00000000
  .word 0x0c145388
  .word 0x0200202d
  .word 0x14400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000007
  .word 0x34420016
  .word 0x0c14536c
  .word 0x0200202d
  .word 0x3c038101
  .word 0x3463005b
  .word 0x0002180b
  .word 0x0060102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_00516C48
asm int FUN_00516c48(u64 param_1,u64 *param_2,long param_3,u64 param_4,
                u32 param_5,int param_6)
{
  .set noreorder
  .word 0x27bdfb50
  .word 0x24020001
  .word 0xffbe0490
  .word 0xffb70480
  .word 0x00e0f02d
  .word 0xffb60470
  .word 0x0080b82d
  .word 0xffb50460
  .word 0x00c0b02d
  .word 0xffb40450
  .word 0x0000a82d
  .word 0xffb30440
  .word 0x00a0a02d
  .word 0xffb20430
  .word 0x0100982d
  .word 0xffbf04a0
  .word 0x0120902d
  .word 0xffb10420
  .word 0xffb00410
  .word 0xafa00400
  .word 0x10000064
  .word 0xafa20404
  .word 0x0200202d
  .word 0x0c14904a
  .word 0x24c5e5f0
  .word 0x14400072
  .word 0x27b00240
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x2c420020
  .word 0x1040006d
  .word 0x3c07007c
  .word 0x0200202d
  .word 0x0c14904a
  .word 0x24e5e5f8
  .word 0x14400068
  .word 0x03a0802d
  .word 0x12400044
  .word 0x0000882d
  .word 0x96020000
  .word 0x30428000
  .word 0x10400037
  .word 0x03c0202d
  .word 0xa200005f
  .word 0x0c14904a
  .word 0x26050040
  .word 0x14400033
  .word 0x0012102a
  .word 0x1280002c
  .word 0x00000000
  .word 0x0280282d
  .word 0x02051025
  .word 0x30420007
  .word 0x10400019
  .word 0x0200182d
  .word 0x26020200
  .word 0x68680007
  .word 0x6c680000
  .word 0x6864000f
  .word 0x6c640008
  .word 0x68660017
  .word 0x6c660010
  .word 0x6867001f
  .word 0x6c670018
  .word 0xb0a80007
  .word 0xb4a80000
  .word 0xb0a4000f
  .word 0xb4a40008
  .word 0xb0a60017
  .word 0xb4a60010
  .word 0xb0a7001f
  .word 0xb4a70018
  .word 0x24630020
  .word 0x24a50020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x26020200
  .word 0xdc680000
  .word 0xdc640008
  .word 0xdc660010
  .word 0xdc670018
  .word 0xfca80000
  .word 0xfca40008
  .word 0xfca60010
  .word 0xfca70018
  .word 0x24630020
  .word 0x24a50020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x56c00001
  .word 0xaed50000
  .word 0x10000031
  .word 0x0000102d
  .word 0x0012102a
  .word 0x26310001
  .word 0x02429023
  .word 0x26100200
  .word 0x2a220002
  .word 0x10400003
  .word 0x26b50001
  .word 0x5640ffbf
  .word 0x96020000
  .word 0x0260282d
  .word 0x02e0202d
  .word 0x0c1455cc
  .word 0x27a60400
  .word 0x8fa30400
  .word 0x10600003
  .word 0x0040982d
  .word 0x1000001f
  .word 0x0060102d
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0x12620019
  .word 0x3c027fff
  .word 0x3442ffff
  .word 0x02629824
  .word 0x02e0202d
  .word 0x03a0282d
  .word 0x0260302d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x14400004
  .word 0x8fa80404
  .word 0x3c028101
  .word 0x1000000f
  .word 0x3442006f
  .word 0x1100ffa1
  .word 0x03a0802d
  .word 0x27b00040
  .word 0xafa00404
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x2c420020
  .word 0x1440ff8b
  .word 0x3c06007c
  .word 0x3c028101
  .word 0x10000003
  .word 0x34429002
  .word 0x3c028101
  .word 0x34420002
  .word 0xdfbf04a0
  .word 0xdfbe0490
  .word 0xdfb70480
  .word 0xdfb60470
  .word 0xdfb50460
  .word 0xdfb40450
  .word 0xdfb30440
  .word 0xdfb20430
  .word 0xdfb10420
  .word 0xdfb00410
  .word 0x03e00008
  .word 0x27bd04b0
  .word 0x00000000
}
// FUN_00516EC0
asm long FUN_00516ec0(u64 param_1,u64 param_2,u64 *param_3,u32 *param_4,
                 u32 *param_5)
{
  .set noreorder
  .word 0x27bdfb30
  .word 0x24030184
  .word 0xffb704a0
  .word 0x3c020078
  .word 0x0080b82d
  .word 0xffbe04b0
  .word 0x02e31818
  .word 0xffb50480
  .word 0xffb10440
  .word 0x244227e0
  .word 0xafa70424
  .word 0x00c0a82d
  .word 0xffbf04c0
  .word 0x00a0882d
  .word 0xffb60490
  .word 0x00621821
  .word 0xffb40470
  .word 0xffb30460
  .word 0x03a0282d
  .word 0xffb20450
  .word 0x0000382d
  .word 0xffb00430
  .word 0x0000f02d
  .word 0xafa80428
  .word 0x0c1456c6
  .word 0x8c66003c
  .word 0x0040202d
  .word 0x148000ed
  .word 0xdfbf04c0
  .word 0x27b00040
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x2c420020
  .word 0x10400006
  .word 0x3c05007c
  .word 0x0200202d
  .word 0x0c14904a
  .word 0x24a5e5f0
  .word 0x50400004
  .word 0x3c02007c
  .word 0x3c028101
  .word 0x100000de
  .word 0x34429002
  .word 0x0220202d
  .word 0x2450e608
  .word 0x0c14904a
  .word 0x0200282d
  .word 0x1440002d
  .word 0x0220202d
  .word 0x02a0302d
  .word 0x30c20007
  .word 0x10400019
  .word 0x03a0182d
  .word 0x27a20200
  .word 0x68640007
  .word 0x6c640000
  .word 0x6865000f
  .word 0x6c650008
  .word 0x68670017
  .word 0x6c670010
  .word 0x6868001f
  .word 0x6c680018
  .word 0xb0c40007
  .word 0xb4c40000
  .word 0xb0c5000f
  .word 0xb4c50008
  .word 0xb0c70017
  .word 0xb4c70010
  .word 0xb0c8001f
  .word 0xb4c80018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x1000007e
  .word 0x00000000
  .word 0x27a20200
  .word 0xdc640000
  .word 0xdc650008
  .word 0xdc670010
  .word 0xdc680018
  .word 0xfcc40000
  .word 0xfcc50008
  .word 0xfcc70010
  .word 0xfcc80018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x1000006e
  .word 0x00000000
  .word 0x0c14542c
  .word 0x0200282d
  .word 0x3c138101
  .word 0x27a30420
  .word 0x3c148101
  .word 0xafa3042c
  .word 0x27b00200
  .word 0x27b20400
  .word 0x0040882d
  .word 0x24160001
  .word 0x36730002
  .word 0x36949fff
  .word 0x0220282d
  .word 0x0c14909c
  .word 0x0240202d
  .word 0x3c06007c
  .word 0x0000202d
  .word 0x0c14542c
  .word 0x24c5e608
  .word 0x0040882d
  .word 0x0200182d
  .word 0x02d1f00a
  .word 0x03a0102d
  .word 0x0200202d
  .word 0xdc470000
  .word 0xdc480008
  .word 0xdc450010
  .word 0xdc460018
  .word 0xfc670000
  .word 0xfc680008
  .word 0xfc650010
  .word 0xfc660018
  .word 0x24420020
  .word 0x24630020
  .word 0x00000000
  .word 0x1444fff4
  .word 0x00000000
  .word 0x8fa80210
  .word 0x02e0202d
  .word 0x8fa90204
  .word 0x03a0282d
  .word 0x8fa6042c
  .word 0x0c145b12
  .word 0x0240382d
  .word 0x97a30000
  .word 0x30632000
  .word 0x1460007a
  .word 0x0040202d
  .word 0x13d60007
  .word 0x00000000
  .word 0x1080ffda
  .word 0x0220282d
  .word 0x00931826
  .word 0x0280102d
  .word 0x10000074
  .word 0x0083100b
  .word 0x14800037
  .word 0x00000000
  .word 0x12a0002a
  .word 0x8fa30428
  .word 0x02a0302d
  .word 0x30c20007
  .word 0x10400018
  .word 0x03a0182d
  .word 0x68670007
  .word 0x6c670000
  .word 0x6868000f
  .word 0x6c680008
  .word 0x68620017
  .word 0x6c620010
  .word 0x6864001f
  .word 0x6c640018
  .word 0xb0c70007
  .word 0xb4c70000
  .word 0xb0c8000f
  .word 0xb4c80008
  .word 0xb0c20017
  .word 0xb4c20010
  .word 0xb0c4001f
  .word 0xb4c40018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1470ffec
  .word 0x00000000
  .word 0x1000000f
  .word 0x8fa30428
  .word 0xdc650000
  .word 0xdc670008
  .word 0xdc680010
  .word 0xdc620018
  .word 0xfcc50000
  .word 0xfcc70008
  .word 0xfcc80010
  .word 0xfcc20018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1470fff4
  .word 0x00000000
  .word 0x8fa30428
  .word 0x10600002
  .word 0x8fa20420
  .word 0xac620000
  .word 0x8fa40424
  .word 0x10800003
  .word 0x00000000
  .word 0x8fa20210
  .word 0xac820000
  .word 0x3c028101
  .word 0x1000003c
  .word 0x34420011
  .word 0x3c028101
  .word 0x34420002
  .word 0x14820038
  .word 0x0080102d
  .word 0x12a0002a
  .word 0x8fa20428
  .word 0x02a0302d
  .word 0x30c20007
  .word 0x10400018
  .word 0x0200182d
  .word 0x68650007
  .word 0x6c650000
  .word 0x6867000f
  .word 0x6c670008
  .word 0x68680017
  .word 0x6c680010
  .word 0x6862001f
  .word 0x6c620018
  .word 0xb0c50007
  .word 0xb4c50000
  .word 0xb0c7000f
  .word 0xb4c70008
  .word 0xb0c80017
  .word 0xb4c80010
  .word 0xb0c2001f
  .word 0xb4c20018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1472ffec
  .word 0x00000000
  .word 0x1000000f
  .word 0x8fa20428
  .word 0xdc640000
  .word 0xdc650008
  .word 0xdc670010
  .word 0xdc680018
  .word 0xfcc40000
  .word 0xfcc50008
  .word 0xfcc70010
  .word 0xfcc80018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1472fff4
  .word 0x00000000
  .word 0x8fa20428
  .word 0x54400001
  .word 0xac400000
  .word 0x8fa30424
  .word 0x10600003
  .word 0x00000000
  .word 0x8fa20210
  .word 0xac620000
  .word 0x3c028101
  .word 0x10000003
  .word 0x34420002
  .word 0x3c028101
  .word 0x3442000d
  .word 0xdfbf04c0
  .word 0xdfbe04b0
  .word 0xdfb704a0
  .word 0xdfb60490
  .word 0xdfb50480
  .word 0xdfb40470
  .word 0xdfb30460
  .word 0xdfb20450
  .word 0xdfb10440
  .word 0xdfb00430
  .word 0x03e00008
  .word 0x27bd04d0
}
// FUN_00517310
asm int FUN_00517310(u64 param_1,u64 *param_2,u32 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb50060
  .word 0xffb30040
  .word 0x3c158101
  .word 0xffb20030
  .word 0x3c13ffff
  .word 0xffb60070
  .word 0x3c127fff
  .word 0xffb40050
  .word 0x00a0b02d
  .word 0xffb10020
  .word 0x0080a02d
  .word 0xffb00010
  .word 0x00e0882d
  .word 0xffbf0080
  .word 0x00c0802d
  .word 0xafa00000
  .word 0x36b5006f
  .word 0x3673ffff
  .word 0x3652ffff
  .word 0x2a220002
  .word 0x1040003b
  .word 0x0280202d
  .word 0x3c130098
  .word 0x2672c8c0
  .word 0x0200302d
  .word 0x0240282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x1040003f
  .word 0x00111a40
  .word 0x02c0282d
  .word 0x00721821
  .word 0x00a31025
  .word 0x30420007
  .word 0x10400018
  .word 0x24a20200
  .word 0x68a40007
  .word 0x6ca40000
  .word 0x68a6000f
  .word 0x6ca60008
  .word 0x68a70017
  .word 0x6ca70010
  .word 0x68a8001f
  .word 0x6ca80018
  .word 0xb0640007
  .word 0xb4640000
  .word 0xb066000f
  .word 0xb4660008
  .word 0xb0670017
  .word 0xb4670010
  .word 0xb068001f
  .word 0xb4680018
  .word 0x24a50020
  .word 0x24630020
  .word 0x00000000
  .word 0x14a2ffec
  .word 0x00000000
  .word 0x1000000f
  .word 0x0280202d
  .word 0xdca40000
  .word 0xdca60008
  .word 0xdca70010
  .word 0xdca80018
  .word 0xfc640000
  .word 0xfc660008
  .word 0xfc670010
  .word 0xfc680018
  .word 0x24a50020
  .word 0x24630020
  .word 0x00000000
  .word 0x14a2fff4
  .word 0x00000000
  .word 0x0280202d
  .word 0x2665c8c0
  .word 0x0200302d
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x0002a80b
  .word 0x1000000f
  .word 0x02a0102d
  .word 0x0200282d
  .word 0x0c1455cc
  .word 0x03a0302d
  .word 0x8fa30000
  .word 0x10600003
  .word 0x0040802d
  .word 0x10000007
  .word 0x0060102d
  .word 0x12130003
  .word 0x02128024
  .word 0x1000ffb8
  .word 0x2631fffe
  .word 0x3c028101
  .word 0x3442006f
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
  .word 0x00000000
}
// FUN_005174B8
asm int FUN_005174b8(u64 param_1,u32 param_2,int param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x3c020098
  .word 0xffb30030
  .word 0xffbe0080
  .word 0x00e0982d
  .word 0xffb70070
  .word 0x245ec8c0
  .word 0xffb60060
  .word 0x3c178101
  .word 0xffb50050
  .word 0x3c16ffff
  .word 0xffb40040
  .word 0x3c157fff
  .word 0xffb20020
  .word 0x0080a02d
  .word 0xffb10010
  .word 0x00c0902d
  .word 0xffb00000
  .word 0x0000882d
  .word 0xffbf0090
  .word 0x00a0802d
  .word 0xae600000
  .word 0x36f7006f
  .word 0x36d6ffff
  .word 0x36b5ffff
  .word 0x0280202d
  .word 0x03c0282d
  .word 0x0200302d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x14400004
  .word 0x0000282d
  .word 0xae770000
  .word 0x1000001d
  .word 0x2402ffff
  .word 0x03c0202d
  .word 0x94820000
  .word 0x26230001
  .word 0x2652ffff
  .word 0x30428000
  .word 0x12400012
  .word 0x0062880a
  .word 0x24a50001
  .word 0x28a20002
  .word 0x1440fff7
  .word 0x24840200
  .word 0x0200282d
  .word 0x0280202d
  .word 0x0c1455cc
  .word 0x0260302d
  .word 0x8e630000
  .word 0x10600003
  .word 0x0040802d
  .word 0x10000009
  .word 0x2402ffff
  .word 0x12160006
  .word 0x02158024
  .word 0x1000ffe0
  .word 0x0280202d
  .word 0x26220001
  .word 0x10000002
  .word 0x0225100b
  .word 0x0220102d
  .word 0xdfbf0090
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
// FUN_005175E8
asm int FUN_005175e8(u64 param_1,u64 *param_2,u32 param_3,int param_4,u64 param_5
                )
{
  .set noreorder
  .word 0x27bdfb50
  .word 0x2402ffff
  .word 0xffb20430
  .word 0x00c0902d
  .word 0xafa20210
  .word 0xffb70480
  .word 0x2e420001
  .word 0xffb50460
  .word 0x3c178101
  .word 0xffb40450
  .word 0x00a0a82d
  .word 0xffb30440
  .word 0x0080a02d
  .word 0xffb10420
  .word 0x00e0982d
  .word 0xffbf04a0
  .word 0x0100882d
  .word 0xffbe0490
  .word 0x36f7006f
  .word 0xffb60470
  .word 0xffb00410
  .word 0xafa20404
  .word 0xafa00400
  .word 0x00000000
  .word 0x0280202d
  .word 0x3c050098
  .word 0x24a5c8c0
  .word 0x0240302d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x10400106
  .word 0x0000b02d
  .word 0x3c100098
  .word 0x2610c8c0
  .word 0x3c1e007c
  .word 0x00000000
  .word 0x96020000
  .word 0x30428000
  .word 0x10400035
  .word 0x26040040
  .word 0x0c14904a
  .word 0x27c5e5f0
  .word 0x5440002c
  .word 0x96020000
  .word 0x27a40200
  .word 0x32020007
  .word 0x10400019
  .word 0x0200182d
  .word 0x26020200
  .word 0x68650007
  .word 0x6c650000
  .word 0x6866000f
  .word 0x6c660008
  .word 0x68670017
  .word 0x6c670010
  .word 0x6868001f
  .word 0x6c680018
  .word 0xb0850007
  .word 0xb4850000
  .word 0xb086000f
  .word 0xb4860008
  .word 0xb0870017
  .word 0xb4870010
  .word 0xb088001f
  .word 0xb4880018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x96020000
  .word 0x26020200
  .word 0xdc690000
  .word 0xdc650008
  .word 0xdc660010
  .word 0xdc670018
  .word 0xfc890000
  .word 0xfc850008
  .word 0xfc860010
  .word 0xfc870018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x96020000
  .word 0x30428000
  .word 0x50400004
  .word 0x0200202d
  .word 0x1660003c
  .word 0x8fa80400
  .word 0x0200202d
  .word 0x02a41025
  .word 0x30420007
  .word 0x10400019
  .word 0x02a0182d
  .word 0x26a20200
  .word 0x68680007
  .word 0x6c680000
  .word 0x6869000f
  .word 0x6c690008
  .word 0x68650017
  .word 0x6c650010
  .word 0x6866001f
  .word 0x6c660018
  .word 0xb0880007
  .word 0xb4880000
  .word 0xb089000f
  .word 0xb4890008
  .word 0xb0850017
  .word 0xb4850010
  .word 0xb086001f
  .word 0xb4860018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x3c060098
  .word 0x26a20200
  .word 0xdc670000
  .word 0xdc680008
  .word 0xdc690010
  .word 0xdc650018
  .word 0xfc870000
  .word 0xfc880008
  .word 0xfc890010
  .word 0xfc850018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x3c060098
  .word 0x0280202d
  .word 0x24c5c8c0
  .word 0x24070001
  .word 0x0c146aa4
  .word 0x0240302d
  .word 0x50400098
  .word 0xae370000
  .word 0x5660008b
  .word 0xae200000
  .word 0x8fa60210
  .word 0x2407ffff
  .word 0x10c7008c
  .word 0x8fa70214
  .word 0x10000076
  .word 0x0280202d
  .word 0x0013102a
  .word 0x26d60001
  .word 0x02629823
  .word 0x25080001
  .word 0x26100200
  .word 0x2ac20002
  .word 0x1440ff86
  .word 0xafa80400
  .word 0x8fa90404
  .word 0x15200009
  .word 0x0240802d
  .word 0x29020014
  .word 0x14400007
  .word 0x0280202d
  .word 0x3c038101
  .word 0x2402ffff
  .word 0x34630017
  .word 0x1000007e
  .word 0xae230000
  .word 0x0280202d
  .word 0x0200282d
  .word 0x0c1455cc
  .word 0x0220302d
  .word 0x8e230000
  .word 0x0040902d
  .word 0x14600076
  .word 0x2402ffff
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0x16420068
  .word 0x3c027fff
  .word 0x0280202d
  .word 0x0c145644
  .word 0x0220282d
  .word 0x8e230000
  .word 0x1460006b
  .word 0x0040902d
  .word 0x3c068000
  .word 0x0200282d
  .word 0x02463025
  .word 0x0280202d
  .word 0x0c1455f8
  .word 0x0220382d
  .word 0x8e230000
  .word 0x14600063
  .word 0x2402ffff
  .word 0x0280202d
  .word 0x0240282d
  .word 0x2406ffff
  .word 0x0c1455f8
  .word 0x0220382d
  .word 0x8e230000
  .word 0x1460005b
  .word 0x2402ffff
  .word 0x3c020098
  .word 0x02a0282d
  .word 0x2450c8c0
  .word 0x00b01025
  .word 0x30420007
  .word 0x1040001a
  .word 0x0200302d
  .word 0x26020200
  .word 0x24a30200
  .word 0x68a40007
  .word 0x6ca40000
  .word 0x68a7000f
  .word 0x6ca70008
  .word 0x68a80017
  .word 0x6ca80010
  .word 0x68a9001f
  .word 0x6ca90018
  .word 0xb0c40007
  .word 0xb4c40000
  .word 0xb0c7000f
  .word 0xb4c70008
  .word 0xb0c80017
  .word 0xb4c80010
  .word 0xb0c9001f
  .word 0xb4c90018
  .word 0x24a50020
  .word 0x24c60020
  .word 0x00000000
  .word 0x14a3ffec
  .word 0x00000000
  .word 0x10000011
  .word 0xa4400000
  .word 0x26020200
  .word 0x24a30200
  .word 0xdca40000
  .word 0xdca70008
  .word 0xdca80010
  .word 0xdca90018
  .word 0xfcc40000
  .word 0xfcc70008
  .word 0xfcc80010
  .word 0xfcc90018
  .word 0x24a50020
  .word 0x24c60020
  .word 0x00000000
  .word 0x14a3fff4
  .word 0x00000000
  .word 0xa4400000
  .word 0x0240302d
  .word 0x3c020098
  .word 0x0280202d
  .word 0x2445c8c0
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x10400021
  .word 0x8fa60210
  .word 0x2403ffff
  .word 0x14c30004
  .word 0x8fa70214
  .word 0x3c028101
  .word 0x1000001d
  .word 0x34429002
  .word 0x0280202d
  .word 0x0c1456c6
  .word 0x03a0282d
  .word 0x14400017
  .word 0xae220000
  .word 0x8fa20004
  .word 0x0280202d
  .word 0x8fa60210
  .word 0x03a0282d
  .word 0x24420001
  .word 0x8fa70214
  .word 0x0c145cc4
  .word 0xafa20004
  .word 0x1440000d
  .word 0xae220000
  .word 0xae200000
  .word 0x1000000b
  .word 0x8fa20400
  .word 0x3442ffff
  .word 0x1000fef9
  .word 0x02429024
  .word 0x3c038101
  .word 0x2402ffff
  .word 0x34639002
  .word 0x10000003
  .word 0xae230000
  .word 0xae370000
  .word 0x2402ffff
  .word 0xdfbf04a0
  .word 0xdfbe0490
  .word 0xdfb70480
  .word 0xdfb60470
  .word 0xdfb50460
  .word 0xdfb40450
  .word 0xdfb30440
  .word 0xdfb20430
  .word 0xdfb10420
  .word 0xdfb00410
  .word 0x03e00008
  .word 0x27bd04b0
  .word 0x00000000
}
// FUN_00517AB8
asm long FUN_00517ab8(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfbd0
  .word 0x0000382d
  .word 0xffb00400
  .word 0x00c0802d
  .word 0xffb10410
  .word 0x0080882d
  .word 0x00a0302d
  .word 0xffbf0420
  .word 0x0c1456c6
  .word 0x27a50200
  .word 0x1440003c
  .word 0xdfbf0420
  .word 0x3c05007c
  .word 0x27a40240
  .word 0x0c14904a
  .word 0x24a5e5f0
  .word 0x10400004
  .word 0x8fa60210
  .word 0x3c028101
  .word 0x10000032
  .word 0x34429002
  .word 0x0220202d
  .word 0x8fa70214
  .word 0x0c1456c6
  .word 0x03a0282d
  .word 0x1440002d
  .word 0xdfbf0420
  .word 0x92050007
  .word 0x2403000a
  .word 0x92070003
  .word 0x0220202d
  .word 0x92060002
  .word 0x00051102
  .word 0x920f0001
  .word 0x00075902
  .word 0x920c0006
  .word 0x00064102
  .word 0x92090005
  .word 0x000f7102
  .word 0x000c6902
  .word 0x00431018
  .word 0x00095102
  .word 0x71635818
  .word 0x01034018
  .word 0x30a5000f
  .word 0x01c37018
  .word 0x30e7000f
  .word 0x71a36818
  .word 0x30c6000f
  .word 0x01435018
  .word 0x00451021
  .word 0x01675821
  .word 0x01064021
  .word 0x318c000f
  .word 0x3129000f
  .word 0x31ef000f
  .word 0x01ac6821
  .word 0x01495021
  .word 0x01cf7021
  .word 0x244207d0
  .word 0x8fa60210
  .word 0x8fa70214
  .word 0x03a0282d
  .word 0xa7a2001e
  .word 0xa3ad001d
  .word 0xa3aa001c
  .word 0xa3ab001b
  .word 0xa3a8001a
  .word 0x0c145cc4
  .word 0xa3ae0019
  .word 0xdfbf0420
  .word 0xdfb10410
  .word 0xdfb00400
  .word 0x03e00008
  .word 0x27bd0430
  .word 0x00000000
}
// FUN_00517BE8
asm long FUN_00517be8(u64 param_1,u64 param_2,long param_3)
{
  .set noreorder
  .word 0x27bdfd00
  .word 0xffb102b0
  .word 0xffb402e0
  .word 0x0080882d
  .word 0xffb202c0
  .word 0x00a0a02d
  .word 0xffb002a0
  .word 0x00c0902d
  .word 0xffbf02f0
  .word 0x0c145ad2
  .word 0xffb302d0
  .word 0x0040802d
  .word 0x16000028
  .word 0xdfbf02f0
  .word 0x27b30220
  .word 0x0280282d
  .word 0x0220202d
  .word 0x0c145afa
  .word 0x0260302d
  .word 0x0040802d
  .word 0x16000020
  .word 0xdfbf02f0
  .word 0x0220202d
  .word 0x0260282d
  .word 0x03a0302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0c145bb0
  .word 0x0000802d
  .word 0x3c038101
  .word 0x34630011
  .word 0x00432026
  .word 0x12400012
  .word 0x0044800b
  .word 0x16000011
  .word 0x0200102d
  .word 0x26440018
  .word 0x0c14909c
  .word 0x27a50040
  .word 0x8fa30004
  .word 0x97a20000
  .word 0x6ba4000f
  .word 0x6fa40008
  .word 0xb2440007
  .word 0xb6440000
  .word 0x6ba4001f
  .word 0x6fa40018
  .word 0xb244000f
  .word 0xb6440008
  .word 0xa6420014
  .word 0xae430010
  .word 0x0200102d
  .word 0xdfbf02f0
  .word 0xdfb402e0
  .word 0xdfb302d0
  .word 0xdfb202c0
  .word 0xdfb102b0
  .word 0xdfb002a0
  .word 0x03e00008
  .word 0x27bd0300
}
// FUN_00517CD8
asm int FUN_00517cd8(u64 param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdfac0
  .word 0xffb404e0
  .word 0xffb504f0
  .word 0x0080a02d
  .word 0xffb004a0
  .word 0x00c0a82d
  .word 0xffbf0530
  .word 0x00a0802d
  .word 0xffbe0520
  .word 0xffb70510
  .word 0xffb60500
  .word 0xffb304d0
  .word 0xffb204c0
  .word 0x0c145ad2
  .word 0xffb104b0
  .word 0x0040182d
  .word 0x14600146
  .word 0xafa20490
  .word 0x27b20400
  .word 0x0200282d
  .word 0x0280202d
  .word 0x0c145afa
  .word 0x0240302d
  .word 0x0040182d
  .word 0x1460013e
  .word 0xafa20490
  .word 0x34028417
  .word 0x0055a80a
  .word 0x32b70020
  .word 0x12e00009
  .word 0x02e0b02d
  .word 0x0c145474
  .word 0x0240202d
  .word 0x28420002
  .word 0x14400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000131
  .word 0x34429004
  .word 0x0c145474
  .word 0x0240202d
  .word 0x38420001
  .word 0x0280202d
  .word 0x2c500001
  .word 0x0240282d
  .word 0x03a0302d
  .word 0x0000382d
  .word 0x0c145bb0
  .word 0x0000402d
  .word 0x3c038101
  .word 0x0040202d
  .word 0x34630002
  .word 0x14830122
  .word 0xafa20490
  .word 0x16000009
  .word 0x27b10490
  .word 0x8fa20004
  .word 0x00531023
  .word 0x28420014
  .word 0x14400005
  .word 0x0280202d
  .word 0x3c028101
  .word 0x10000118
  .word 0x34420017
  .word 0x0280202d
  .word 0x0c145690
  .word 0x0220282d
  .word 0x8fa30490
  .word 0x10600003
  .word 0x0040802d
  .word 0x10000110
  .word 0x0060102d
  .word 0x8fa50010
  .word 0x0280202d
  .word 0x8fa60004
  .word 0x0c145d2e
  .word 0x0220382d
  .word 0x0040982d
  .word 0x8fa20490
  .word 0x14400108
  .word 0xdfbf0530
  .word 0x0013102a
  .word 0x24030001
  .word 0x24040002
  .word 0x00508021
  .word 0x0096180b
  .word 0x0203182a
  .word 0x10600004
  .word 0x00000000
  .word 0x3c028101
  .word 0x100000fd
  .word 0x3442001c
  .word 0x12e0000f
  .word 0x0280202d
  .word 0x0c145644
  .word 0x0220282d
  .word 0x0040f02d
  .word 0x8fa20490
  .word 0x144000f5
  .word 0xdfbf0530
  .word 0x0280202d
  .word 0x03c0282d
  .word 0x2406ffff
  .word 0x0c1455f8
  .word 0x0220382d
  .word 0x8fa20490
  .word 0x144000ed
  .word 0xdfbf0530
  .word 0x27a20480
  .word 0x0280202d
  .word 0xafa20494
  .word 0x0c146d7c
  .word 0x0040282d
  .word 0x2413000a
  .word 0x27b00200
  .word 0x0000282d
  .word 0x0200202d
  .word 0x0c148502
  .word 0x24060200
  .word 0x93a30487
  .word 0x240effff
  .word 0x93a90486
  .word 0x240f0002
  .word 0x93a70485
  .word 0x00031102
  .word 0x93a60483
  .word 0x00096902
  .word 0x93a50482
  .word 0x00075102
  .word 0x93a40481
  .word 0x00065902
  .word 0x00056102
  .word 0x00531018
  .word 0x00044102
  .word 0x01b36818
  .word 0x71535018
  .word 0x3063000f
  .word 0x01735818
  .word 0x30e7000f
  .word 0x71936018
  .word 0x00431021
  .word 0x01134018
  .word 0x30c6000f
  .word 0x30a5000f
  .word 0x3084000f
  .word 0x3129000f
  .word 0x01475021
  .word 0x01665821
  .word 0x01856021
  .word 0x01044021
  .word 0x01a96821
  .word 0x03d6700b
  .word 0x0016780a
  .word 0x244207d0
  .word 0xa7b50200
  .word 0xafae0210
  .word 0x0240202d
  .word 0xafaf0204
  .word 0x2405002f
  .word 0xa7a2020e
  .word 0xa3ad020d
  .word 0xa3aa020c
  .word 0xa3ab020b
  .word 0xa3ac020a
  .word 0xa3a80209
  .word 0xa7a00202
  .word 0xa3a00208
  .word 0xafa00214
  .word 0x6ba3020f
  .word 0x6fa30208
  .word 0xb3a3021f
  .word 0xb7a30218
  .word 0x0c14927a
  .word 0xafa00220
  .word 0x68490008
  .word 0x6c490001
  .word 0x68430010
  .word 0x6c430009
  .word 0x68440018
  .word 0x6c440011
  .word 0x68450020
  .word 0x6c450019
  .word 0xb3a90247
  .word 0xb7a90240
  .word 0xb3a3024f
  .word 0xb7a30248
  .word 0xb3a40257
  .word 0xb7a40250
  .word 0xb3a5025f
  .word 0xb7a50258
  .word 0x0220402d
  .word 0x0200282d
  .word 0x0280202d
  .word 0x8fa60010
  .word 0x0c145d7a
  .word 0x8fa70004
  .word 0x0040a82d
  .word 0x06a00091
  .word 0x8fa20490
  .word 0x12e0007f
  .word 0x3c110098
  .word 0x0000282d
  .word 0x2630c8c0
  .word 0x24060200
  .word 0x0200202d
  .word 0x0c148502
  .word 0x34128427
  .word 0x93a30487
  .word 0x3c0f007c
  .word 0x93ae0486
  .word 0x0000282d
  .word 0x93ad0485
  .word 0x00031102
  .word 0x93ac0483
  .word 0x000e5902
  .word 0x93aa0482
  .word 0x000d3902
  .word 0x93a60481
  .word 0x000c4102
  .word 0x000a4902
  .word 0x00531018
  .word 0x00062102
  .word 0x01735818
  .word 0x70f33818
  .word 0x3063000f
  .word 0x01134018
  .word 0x30c6000f
  .word 0x71334818
  .word 0x00431021
  .word 0x00932018
  .word 0x31ce000f
  .word 0x31ad000f
  .word 0x318c000f
  .word 0x314a000f
  .word 0xa632c8c0
  .word 0x00ed3821
  .word 0x010c4021
  .word 0x00862021
  .word 0x012a4821
  .word 0x244207d0
  .word 0x016e5821
  .word 0xa2040009
  .word 0x24060200
  .word 0xa602000e
  .word 0xa20b000d
  .word 0xa207000c
  .word 0xa208000b
  .word 0xa209000a
  .word 0xae150014
  .word 0xae000004
  .word 0xa6000002
  .word 0xae000010
  .word 0x6a07000f
  .word 0x6e070008
  .word 0xb207001f
  .word 0xb6070018
  .word 0x25e8e5f0
  .word 0x81030000
  .word 0x81040001
  .word 0xa2030040
  .word 0xa2040041
  .word 0x26100200
  .word 0x0c148502
  .word 0x0200202d
  .word 0x93a30487
  .word 0x3c0f007c
  .word 0x93ae0486
  .word 0x2625c8c0
  .word 0x93ad0485
  .word 0x00031102
  .word 0x93ac0483
  .word 0x000e4102
  .word 0x93a70482
  .word 0x000d4902
  .word 0x93a40481
  .word 0x000c5102
  .word 0x00075902
  .word 0x00531018
  .word 0x00043102
  .word 0x01134018
  .word 0x71334818
  .word 0x3063000f
  .word 0x00d33018
  .word 0x30e7000f
  .word 0x71535018
  .word 0x00431021
  .word 0x01735818
  .word 0x3084000f
  .word 0x31ce000f
  .word 0x31ad000f
  .word 0x318c000f
  .word 0x00c43021
  .word 0x012d4821
  .word 0x244207d0
  .word 0x010e4021
  .word 0x01675821
  .word 0x014c5021
  .word 0xa6120000
  .word 0xa602000e
  .word 0x0280202d
  .word 0xa208000d
  .word 0xa209000c
  .word 0xa20a000b
  .word 0xa20b000a
  .word 0xa2060009
  .word 0xae000004
  .word 0xa6000002
  .word 0xa2000008
  .word 0xae000010
  .word 0xae000014
  .word 0x6a09000f
  .word 0x6e090008
  .word 0xb209001f
  .word 0xb6090018
  .word 0xae000020
  .word 0x8fa60210
  .word 0x25e3e5f8
  .word 0x80680000
  .word 0x80690001
  .word 0x80620002
  .word 0xa2080040
  .word 0xa2090041
  .word 0xa2020042
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x1040000f
  .word 0x00000000
  .word 0x8fa50010
  .word 0x0280202d
  .word 0x0c145eae
  .word 0x8fa60494
  .word 0x1440000b
  .word 0xafa20490
  .word 0x0c145562
  .word 0x0280202d
  .word 0x10400005
  .word 0x00000000
  .word 0x0c146926
  .word 0x0280202d
  .word 0x54400003
  .word 0x8fa20490
  .word 0x3c028101
  .word 0x3442006f
  .word 0xdfbf0530
  .word 0xdfbe0520
  .word 0xdfb70510
  .word 0xdfb60500
  .word 0xdfb504f0
  .word 0xdfb404e0
  .word 0xdfb304d0
  .word 0xdfb204c0
  .word 0xdfb104b0
  .word 0xdfb004a0
  .word 0x03e00008
  .word 0x27bd0540
  .word 0x00000000
}
// FUN_00518268
asm int FUN_00518268(u64 param_1,u64 param_2,int param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdfcd0
  .word 0xffb502e0
  .word 0x0080a82d
  .word 0xffb402d0
  .word 0xffb302c0
  .word 0x00c0a02d
  .word 0xffb202b0
  .word 0x00a0982d
  .word 0xffb00290
  .word 0x0100902d
  .word 0x00e0802d
  .word 0xffbf0320
  .word 0xffbe0310
  .word 0xffb70300
  .word 0xffb602f0
  .word 0x0c145ad2
  .word 0xffb102a0
  .word 0x14400065
  .word 0xdfbf0320
  .word 0x27b10200
  .word 0x0260282d
  .word 0x02a0202d
  .word 0x0c145afa
  .word 0x0220302d
  .word 0x1440005e
  .word 0xdfbf0320
  .word 0x0220282d
  .word 0x02a0202d
  .word 0x03a0302d
  .word 0x0000382d
  .word 0x0c145bb0
  .word 0x0000402d
  .word 0x3c038101
  .word 0x34630011
  .word 0x14430054
  .word 0xdfbf0320
  .word 0x97a30000
  .word 0x30620001
  .word 0x10400004
  .word 0x00000000
  .word 0x30622000
  .word 0x50400004
  .word 0x30620020
  .word 0x3c028101
  .word 0x10000049
  .word 0x3442000d
  .word 0x10400004
  .word 0x8fa40004
  .word 0x3c028101
  .word 0x10000044
  .word 0x34420002
  .word 0x0090102a
  .word 0x10400011
  .word 0x00901823
  .word 0x3c028101
  .word 0x1000003e
  .word 0x34420016
  .word 0x3c028101
  .word 0x1000003b
  .word 0x3442006f
  .word 0x0280202d
  .word 0x0c148494
  .word 0x0240302d
  .word 0x10000036
  .word 0x03c0102d
  .word 0x10000034
  .word 0x0060102d
  .word 0x3c028101
  .word 0x10000031
  .word 0x34429002
  .word 0x0072900a
  .word 0x02501021
  .word 0x0082102a
  .word 0x0062900b
  .word 0x0240f02d
  .word 0x13c00029
  .word 0x8fb10010
  .word 0x3c17ffff
  .word 0x3c167fff
  .word 0x36f7ffff
  .word 0x36d6ffff
  .word 0x00000000
  .word 0x2a020400
  .word 0x10400015
  .word 0x3c020098
  .word 0x02a0202d
  .word 0x2453c8c0
  .word 0x0220302d
  .word 0x0260282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x1040ffdd
  .word 0xafa20280
  .word 0x24020400
  .word 0x00503023
  .word 0x00d2102a
  .word 0x1040ffdb
  .word 0x02132821
  .word 0x0c148494
  .word 0x0280202d
  .word 0x26830400
  .word 0x2642fc00
  .word 0x00509021
  .word 0x0070a023
  .word 0x0000802d
  .word 0x0220282d
  .word 0x02a0202d
  .word 0x0c1455cc
  .word 0x27a60280
  .word 0x8fa30280
  .word 0x1460ffd2
  .word 0x0040882d
  .word 0x1237ffd2
  .word 0x02368824
  .word 0x2602fc00
  .word 0x1640ffde
  .word 0x0050800b
  .word 0x03c0102d
  .word 0xdfbf0320
  .word 0xdfbe0310
  .word 0xdfb70300
  .word 0xdfb602f0
  .word 0xdfb502e0
  .word 0xdfb402d0
  .word 0xdfb302c0
  .word 0xdfb202b0
  .word 0xdfb102a0
  .word 0xdfb00290
  .word 0x03e00008
  .word 0x27bd0330
}
// FUN_00518470
asm int FUN_00518470(u64 param_1,u64 param_2,int param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdfce0
  .word 0xffb602f0
  .word 0xffb502e0
  .word 0x0080b02d
  .word 0xffb302c0
  .word 0x00c0a82d
  .word 0xffb202b0
  .word 0x0100982d
  .word 0xffb00290
  .word 0x00a0902d
  .word 0xffbf0310
  .word 0x00e0802d
  .word 0xffb70300
  .word 0xffb402d0
  .word 0x0c145ad2
  .word 0xffb102a0
  .word 0x0040182d
  .word 0x146000b7
  .word 0xafa20280
  .word 0x27b10200
  .word 0x0240282d
  .word 0x02c0202d
  .word 0x0c145afa
  .word 0x0220302d
  .word 0x0040182d
  .word 0x146000af
  .word 0xafa20280
  .word 0x0220282d
  .word 0x02c0202d
  .word 0x03a0302d
  .word 0x0000382d
  .word 0x0c145bb0
  .word 0x0000402d
  .word 0x3c038101
  .word 0x0040202d
  .word 0x34630011
  .word 0x148300a4
  .word 0xafa20280
  .word 0x97a30000
  .word 0x30620001
  .word 0x10400004
  .word 0x00000000
  .word 0x30622000
  .word 0x50400004
  .word 0x30620020
  .word 0x3c028101
  .word 0x1000009a
  .word 0x3442000d
  .word 0x10400004
  .word 0x8fa50004
  .word 0x3c028101
  .word 0x10000095
  .word 0x34420002
  .word 0x00b0102a
  .word 0x50400004
  .word 0x00b01023
  .word 0x3c028101
  .word 0x1000008f
  .word 0x34420016
  .word 0x02a0a02d
  .word 0x0053980a
  .word 0x8fb10010
  .word 0x02701821
  .word 0x2a040400
  .word 0x00a3182a
  .word 0x0043980b
  .word 0x14800010
  .word 0x0260b82d
  .word 0x27b20280
  .word 0x0220282d
  .word 0x02c0202d
  .word 0x0c1455de
  .word 0x0240302d
  .word 0x3c038101
  .word 0x8fa40280
  .word 0x34630059
  .word 0x10830070
  .word 0x0040882d
  .word 0x14800029
  .word 0x2610fc00
  .word 0x2a020400
  .word 0x1040fff4
  .word 0x0220282d
  .word 0x1a000026
  .word 0x3c020098
  .word 0x02c0202d
  .word 0x2452c8c0
  .word 0x0220302d
  .word 0x0240282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x10400066
  .word 0x00000000
  .word 0x24020400
  .word 0x00503023
  .word 0x00d3182a
  .word 0x14600006
  .word 0x02122821
  .word 0x02a0202d
  .word 0x0c148494
  .word 0x0260302d
  .word 0x10000063
  .word 0x02e0102d
  .word 0x0c148494
  .word 0x02a0202d
  .word 0x26a30400
  .word 0x2662fc00
  .word 0x0220282d
  .word 0x00509821
  .word 0x0070a023
  .word 0x02c0202d
  .word 0x0c1455de
  .word 0x27a60280
  .word 0x3c038101
  .word 0x8fa40280
  .word 0x34630059
  .word 0x10830048
  .word 0x0040882d
  .word 0x10800004
  .word 0x0000902d
  .word 0x10000050
  .word 0x0080102d
  .word 0x0000902d
  .word 0x2a620400
  .word 0x14400021
  .word 0x0000802d
  .word 0x3c158101
  .word 0x36b50059
  .word 0x16400004
  .word 0x0220282d
  .word 0x0220902d
  .word 0x10000016
  .word 0x24100001
  .word 0x02c0202d
  .word 0x0c1455de
  .word 0x27a60280
  .word 0x8fa30280
  .word 0x10750033
  .word 0x0040882d
  .word 0x14600034
  .word 0x02501021
  .word 0x1051000b
  .word 0x0240302d
  .word 0x02c0202d
  .word 0x0280282d
  .word 0x0c146a80
  .word 0x0200382d
  .word 0x1040002e
  .word 0x0220902d
  .word 0x00101280
  .word 0x0282a021
  .word 0x10000002
  .word 0x24100001
  .word 0x26100001
  .word 0x2673fc00
  .word 0x2a620400
  .word 0x1040ffe3
  .word 0x00000000
  .word 0x1a000012
  .word 0x0280282d
  .word 0x0240302d
  .word 0x02c0202d
  .word 0x0c146a80
  .word 0x0200382d
  .word 0x00101a80
  .word 0x1040001c
  .word 0x0283a021
  .word 0x1a600020
  .word 0x0220282d
  .word 0x02c0202d
  .word 0x0c1455de
  .word 0x27a60280
  .word 0x3c038101
  .word 0x8fa40280
  .word 0x34630059
  .word 0x1083000d
  .word 0x0040882d
  .word 0x1a600016
  .word 0x3c020098
  .word 0x02c0202d
  .word 0x2450c8c0
  .word 0x0220302d
  .word 0x0200282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x1440000b
  .word 0x0280202d
  .word 0x10000006
  .word 0x00000000
  .word 0x3c028101
  .word 0x1000000a
  .word 0x34429002
  .word 0x10000008
  .word 0x0060102d
  .word 0x3c028101
  .word 0x10000005
  .word 0x3442006f
  .word 0x0200282d
  .word 0x0c148494
  .word 0x0260302d
  .word 0x02e0102d
  .word 0xdfbf0310
  .word 0xdfb70300
  .word 0xdfb602f0
  .word 0xdfb502e0
  .word 0xdfb402d0
  .word 0xdfb302c0
  .word 0xdfb202b0
  .word 0xdfb102a0
  .word 0xdfb00290
  .word 0x03e00008
  .word 0x27bd0320
}
// FUN_005187C0
asm int FUN_005187c0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdfcb0
  .word 0xffb302e0
  .word 0xffb70320
  .word 0x0080982d
  .word 0xffb402f0
  .word 0x0100b82d
  .word 0xffb202d0
  .word 0x00c0a02d
  .word 0xffb102c0
  .word 0x00e0902d
  .word 0xffbf0340
  .word 0x00a0882d
  .word 0xffbe0330
  .word 0xffb60310
  .word 0xffb50300
  .word 0x0c145ad2
  .word 0xffb002b0
  .word 0x0040182d
  .word 0x14600158
  .word 0xafa20298
  .word 0x27b00200
  .word 0x0220282d
  .word 0x0260202d
  .word 0x0c145afa
  .word 0x0200302d
  .word 0x0040182d
  .word 0x14600150
  .word 0xafa20298
  .word 0x0200282d
  .word 0x0260202d
  .word 0x03a0302d
  .word 0x27a70290
  .word 0x0c145bb0
  .word 0x27a80294
  .word 0x3c038101
  .word 0x0040202d
  .word 0x34630011
  .word 0x14830145
  .word 0xafa20298
  .word 0x93a20060
  .word 0x1440000e
  .word 0x97a40000
  .word 0x34028000
  .word 0x3083f000
  .word 0x10620004
  .word 0x0080282d
  .word 0x3402a000
  .word 0x14620007
  .word 0x00000000
  .word 0x30a30f00
  .word 0x24020400
  .word 0x50620006
  .word 0x30a20002
  .word 0x50600004
  .word 0x30a20002
  .word 0x3c028101
  .word 0x10000132
  .word 0x34429002
  .word 0x54400004
  .word 0x30820020
  .word 0x3c028101
  .word 0x1000012d
  .word 0x3442000d
  .word 0x50400004
  .word 0x8fa20004
  .word 0x3c028101
  .word 0x10000128
  .word 0x34420002
  .word 0x0052102a
  .word 0x50400004
  .word 0x02571021
  .word 0x3c028101
  .word 0x10000122
  .word 0x34420016
  .word 0x2403ffff
  .word 0x244403ff
  .word 0x8fa50010
  .word 0x0064182a
  .word 0x244207fe
  .word 0x0083100b
  .word 0x0260202d
  .word 0x0c145726
  .word 0x00028a83
  .word 0x0040802d
  .word 0x06000117
  .word 0xdfbf0340
  .word 0x0211102a
  .word 0x1040000e
  .word 0x0260202d
  .word 0x0c145690
  .word 0x27a50298
  .word 0x0040182d
  .word 0x8fa20298
  .word 0x1440010e
  .word 0xdfbf0340
  .word 0x02301023
  .word 0x0062102a
  .word 0x10400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000107
  .word 0x3442001c
  .word 0x3c02ffff
  .word 0x8fa50010
  .word 0x3442ffff
  .word 0x14a20051
  .word 0x3c020098
  .word 0x27b00298
  .word 0x0260202d
  .word 0x0c145644
  .word 0x0200282d
  .word 0x8fa30298
  .word 0x10600003
  .word 0x0040882d
  .word 0x100000f8
  .word 0x0060102d
  .word 0x0200382d
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0c1455f8
  .word 0x2406ffff
  .word 0x8fa20298
  .word 0x144000f1
  .word 0xdfbf0340
  .word 0x0260202d
  .word 0x0c146d7c
  .word 0x27a50280
  .word 0x8fa30004
  .word 0x0075182a
  .word 0x10600002
  .word 0xafb10010
  .word 0xafb50004
  .word 0x93a50287
  .word 0x2403000a
  .word 0x93a70282
  .word 0x0260202d
  .word 0x93a60281
  .word 0x00051102
  .word 0x93af0286
  .word 0x00075902
  .word 0x93ae0285
  .word 0x00064102
  .word 0x93ac0283
  .word 0x000f6902
  .word 0x000e4902
  .word 0x00431018
  .word 0x000c5102
  .word 0x01034018
  .word 0x01635818
  .word 0x30a5000f
  .word 0x01a36818
  .word 0x30e7000f
  .word 0x71234818
  .word 0x30c6000f
  .word 0x71435018
  .word 0x00451021
  .word 0x01675821
  .word 0x01064021
  .word 0x31ef000f
  .word 0x31ce000f
  .word 0x318c000f
  .word 0x01af6821
  .word 0x012e4821
  .word 0x014c5021
  .word 0x244207d0
  .word 0x8fa60290
  .word 0x8fa70294
  .word 0x03a0282d
  .word 0xa7a2001e
  .word 0xa3ad001d
  .word 0xa3a9001c
  .word 0xa3aa001b
  .word 0xa3ab001a
  .word 0x0c145cc4
  .word 0xa3a80019
  .word 0x144000bb
  .word 0xafa20298
  .word 0x0c145562
  .word 0x0260202d
  .word 0x104000ac
  .word 0xafa2029c
  .word 0x0c146926
  .word 0x0260202d
  .word 0x104000a8
  .word 0xafa2029c
  .word 0x8fa50010
  .word 0x3c020098
  .word 0xafb702a0
  .word 0x00a0882d
  .word 0x245ec8c0
  .word 0x0280b02d
  .word 0x0240a82d
  .word 0x2a420400
  .word 0x1040003c
  .word 0x0220a02d
  .word 0x1e400008
  .word 0x3c020098
  .word 0x02571021
  .word 0x28420400
  .word 0x1040000b
  .word 0x8fa20004
  .word 0x02a2102a
  .word 0x10400008
  .word 0x3c020098
  .word 0x0260202d
  .word 0x2445c8c0
  .word 0x0220302d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x1040008e
  .word 0xafa2029c
  .word 0x24020400
  .word 0x00523023
  .word 0x00d7182a
  .word 0x14600016
  .word 0x025e2021
  .word 0x02c0282d
  .word 0x0c148494
  .word 0x02e0302d
  .word 0x03c0282d
  .word 0x0220302d
  .word 0x0260202d
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x1040007f
  .word 0xafa2029c
  .word 0x27b10280
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0c146d7c
  .word 0x02b7a821
  .word 0x8fa30004
  .word 0x0075182a
  .word 0x5460003c
  .word 0xafb50004
  .word 0x1000003b
  .word 0x93a50287
  .word 0x0c148494
  .word 0x02c0282d
  .word 0x0260202d
  .word 0x03c0282d
  .word 0x0220302d
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x1040006b
  .word 0xafa2029c
  .word 0x26a20400
  .word 0x26c40400
  .word 0x26e3fc00
  .word 0x0052a823
  .word 0x0072b821
  .word 0x0092b023
  .word 0x0000902d
  .word 0x0220a02d
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0c1455cc
  .word 0x27a6029c
  .word 0x8fa3029c
  .word 0x1460ff6e
  .word 0x0040882d
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0x16220019
  .word 0x3c027fff
  .word 0x27b00298
  .word 0x0260202d
  .word 0x0c145644
  .word 0x0200282d
  .word 0x8fa30298
  .word 0x1460ff63
  .word 0x0040882d
  .word 0x0260202d
  .word 0x0220282d
  .word 0x2406ffff
  .word 0x0c1455f8
  .word 0x0200382d
  .word 0x8fa20298
  .word 0x14400054
  .word 0x0280282d
  .word 0x3c068000
  .word 0x02263025
  .word 0x0200382d
  .word 0x0c1455f8
  .word 0x0260202d
  .word 0x8fa20298
  .word 0x1440004d
  .word 0xdfbf0340
  .word 0x3c027fff
  .word 0x2643fc00
  .word 0x3442ffff
  .word 0x0072900b
  .word 0x1000ff9b
  .word 0x02228824
  .word 0x93a50287
  .word 0x2403000a
  .word 0x93a70282
  .word 0x0260202d
  .word 0x93a60281
  .word 0x00051102
  .word 0x93b00286
  .word 0x00077102
  .word 0x93ab0285
  .word 0x00064902
  .word 0x93aa0283
  .word 0x00107902
  .word 0x000b6102
  .word 0x00431018
  .word 0x000a6902
  .word 0x01234818
  .word 0x01c37018
  .word 0x30a5000f
  .word 0x01e37818
  .word 0x97a80000
  .word 0x71836018
  .word 0x30e7000f
  .word 0x71a36818
  .word 0x30c6000f
  .word 0x00451021
  .word 0x01c77021
  .word 0x01264821
  .word 0x3210000f
  .word 0x316b000f
  .word 0x314a000f
  .word 0x01f07821
  .word 0x018b6021
  .word 0x01aa6821
  .word 0x35080080
  .word 0x244207d0
  .word 0x8fa60290
  .word 0x8fa70294
  .word 0x03a0282d
  .word 0xa7a80000
  .word 0xa7a2001e
  .word 0xa3af001d
  .word 0xa3ac001c
  .word 0xa3ad001b
  .word 0xa3ae001a
  .word 0x0c145cc4
  .word 0xa3a90019
  .word 0x14400016
  .word 0xafa20298
  .word 0x8fa50290
  .word 0x0220302d
  .word 0x0c145eae
  .word 0x0260202d
  .word 0x14400010
  .word 0xafa20298
  .word 0x0c145562
  .word 0x0260202d
  .word 0x14400004
  .word 0xafa2029c
  .word 0x3c028101
  .word 0x10000009
  .word 0x3442006f
  .word 0x0c146926
  .word 0x0260202d
  .word 0x3c038101
  .word 0x8fa402a0
  .word 0x3463006f
  .word 0xafa2029c
  .word 0x0062200a
  .word 0x0080102d
  .word 0xdfbf0340
  .word 0xdfbe0330
  .word 0xdfb70320
  .word 0xdfb60310
  .word 0xdfb50300
  .word 0xdfb402f0
  .word 0xdfb302e0
  .word 0xdfb202d0
  .word 0xdfb102c0
  .word 0xdfb002b0
  .word 0x03e00008
  .word 0x27bd0350
  .word 0x00000000
}
// FUN_00518DA0
asm u32 FUN_00518da0(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb10010
  .word 0x00a0882d
  .word 0xffb30030
  .word 0xffb20020
  .word 0x0220982d
  .word 0xffb00000
  .word 0x0080902d
  .word 0x00c0802d
  .word 0xffbf0040
  .word 0x0c1455de
  .word 0x0260282d
  .word 0x3c038101
  .word 0x8e040000
  .word 0x34630059
  .word 0x1483001a
  .word 0x0040882d
  .word 0x0240202d
  .word 0x0c145644
  .word 0x0200282d
  .word 0x8e030000
  .word 0x14600012
  .word 0x0040882d
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2406ffff
  .word 0x0c1455f8
  .word 0x0200382d
  .word 0x8e030000
  .word 0x1460000e
  .word 0x2402ffff
  .word 0x3c068000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x02263025
  .word 0x0c1455f8
  .word 0x0200382d
  .word 0x8e030000
  .word 0x50600004
  .word 0xae000000
  .word 0x10000003
  .word 0x2402ffff
  .word 0xae000000
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
// FUN_00518E70
asm int FUN_00518e70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdfcc0
  .word 0xffb302d0
  .word 0xffb70310
  .word 0x0080982d
  .word 0xffb60300
  .word 0x00c0b82d
  .word 0xffb202c0
  .word 0x0100b02d
  .word 0xffb102b0
  .word 0x00e0902d
  .word 0xffbf0330
  .word 0x00a0882d
  .word 0xffbe0320
  .word 0xffb502f0
  .word 0xffb402e0
  .word 0x0c145ad2
  .word 0xffb002a0
  .word 0x0040182d
  .word 0x14600183
  .word 0xafa20298
  .word 0x27b00200
  .word 0x0220282d
  .word 0x0260202d
  .word 0x0c145afa
  .word 0x0200302d
  .word 0x0040182d
  .word 0x1460017b
  .word 0xafa20298
  .word 0x0200282d
  .word 0x0260202d
  .word 0x03a0302d
  .word 0x27a70290
  .word 0x0c145bb0
  .word 0x27a80294
  .word 0x3c038101
  .word 0x0040202d
  .word 0x34630011
  .word 0x14830170
  .word 0xafa20298
  .word 0x93a20060
  .word 0x144000a6
  .word 0x97a40000
  .word 0x34028000
  .word 0x3083f000
  .word 0x10620004
  .word 0x0080282d
  .word 0x3402a000
  .word 0x1462009f
  .word 0x00000000
  .word 0x30a30f00
  .word 0x24020400
  .word 0x50620004
  .word 0x30a20002
  .word 0x14600099
  .word 0x00000000
  .word 0x30a20002
  .word 0x54400004
  .word 0x30820020
  .word 0x3c028101
  .word 0x1000015a
  .word 0x3442000d
  .word 0x50400004
  .word 0x8fa20004
  .word 0x3c028101
  .word 0x10000155
  .word 0x34420002
  .word 0x0052102a
  .word 0x50400004
  .word 0x02561021
  .word 0x3c028101
  .word 0x1000014f
  .word 0x34420016
  .word 0x2403ffff
  .word 0x244403ff
  .word 0x8fa50010
  .word 0x0064182a
  .word 0x244207fe
  .word 0x0083100b
  .word 0x0260202d
  .word 0x0c145726
  .word 0x00028a83
  .word 0x0040802d
  .word 0x06000144
  .word 0xdfbf0330
  .word 0x0211102a
  .word 0x1040000e
  .word 0x0260202d
  .word 0x0c145690
  .word 0x27a50298
  .word 0x0040182d
  .word 0x8fa20298
  .word 0x1440013b
  .word 0xdfbf0330
  .word 0x02301023
  .word 0x0062102a
  .word 0x10400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000134
  .word 0x3442001c
  .word 0x3c02ffff
  .word 0x8fa50010
  .word 0x3442ffff
  .word 0x54a2004e
  .word 0x0240a82d
  .word 0x27b00298
  .word 0x0260202d
  .word 0x0c145644
  .word 0x0200282d
  .word 0x8fa30298
  .word 0x14600126
  .word 0x0040882d
  .word 0x0200382d
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0c1455f8
  .word 0x2406ffff
  .word 0x8fa20298
  .word 0x14400120
  .word 0xdfbf0330
  .word 0x0260202d
  .word 0x0c146d7c
  .word 0x27a50280
  .word 0x8fa30004
  .word 0x0075182a
  .word 0x10600002
  .word 0xafb10010
  .word 0xafb50004
  .word 0x93a50287
  .word 0x2403000a
  .word 0x93a70282
  .word 0x0260202d
  .word 0x93a60281
  .word 0x00051102
  .word 0x93af0286
  .word 0x00075902
  .word 0x93ae0285
  .word 0x00064102
  .word 0x93ac0283
  .word 0x000f6902
  .word 0x000e4902
  .word 0x00431018
  .word 0x000c5102
  .word 0x01034018
  .word 0x01635818
  .word 0x30a5000f
  .word 0x01a36818
  .word 0x30e7000f
  .word 0x71234818
  .word 0x30c6000f
  .word 0x71435018
  .word 0x00451021
  .word 0x01675821
  .word 0x01064021
  .word 0x31ef000f
  .word 0x31ce000f
  .word 0x318c000f
  .word 0x01af6821
  .word 0x012e4821
  .word 0x014c5021
  .word 0x244207d0
  .word 0x8fa60290
  .word 0x8fa70294
  .word 0x03a0282d
  .word 0xa7a2001e
  .word 0xa3ad001d
  .word 0xa3a9001c
  .word 0xa3aa001b
  .word 0xa3ab001a
  .word 0x0c145cc4
  .word 0xa3a80019
  .word 0x144000ea
  .word 0xafa20298
  .word 0x0c145562
  .word 0x0260202d
  .word 0x104000dd
  .word 0x00000000
  .word 0x0c146926
  .word 0x0260202d
  .word 0x104000d9
  .word 0x8fa50010
  .word 0x0240a82d
  .word 0x00a0882d
  .word 0x02c0f02d
  .word 0x2aa20400
  .word 0x1440000e
  .word 0x02e0a02d
  .word 0x27b00298
  .word 0x0220282d
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c146368
  .word 0x0200302d
  .word 0x8fa30298
  .word 0x146000d2
  .word 0x0040882d
  .word 0x2652fc00
  .word 0x2a420400
  .word 0x1040fff7
  .word 0x0220282d
  .word 0x1a400037
  .word 0x00000000
  .word 0x3c028101
  .word 0x8fa30298
  .word 0x34420059
  .word 0x54620004
  .word 0x3c020098
  .word 0x3c028101
  .word 0x100000c5
  .word 0x34429002
  .word 0x0260202d
  .word 0x2450c8c0
  .word 0x0220302d
  .word 0x0200282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x104000b4
  .word 0x00000000
  .word 0x24020400
  .word 0x00523023
  .word 0x00d6182a
  .word 0x10600010
  .word 0x02502021
  .word 0x0c148494
  .word 0x02e0282d
  .word 0x0200282d
  .word 0x0260202d
  .word 0x0220302d
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x104000a6
  .word 0x26c3fc00
  .word 0x26a20400
  .word 0x26e40400
  .word 0x0052a823
  .word 0x0072b021
  .word 0x1000000c
  .word 0x0092a023
  .word 0x02e0282d
  .word 0x0c148494
  .word 0x02c0302d
  .word 0x0200282d
  .word 0x0260202d
  .word 0x0220302d
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x10400096
  .word 0x02b6a821
  .word 0x0000b02d
  .word 0x0220282d
  .word 0x0260202d
  .word 0x0c146368
  .word 0x27a60298
  .word 0x8fa30298
  .word 0x14600096
  .word 0x0040882d
  .word 0x1ac0004a
  .word 0x0000902d
  .word 0x2ac20400
  .word 0x14400020
  .word 0x0000802d
  .word 0x00000000
  .word 0x16400004
  .word 0x0220282d
  .word 0x0220902d
  .word 0x10000016
  .word 0x24100001
  .word 0x0260202d
  .word 0x0c146368
  .word 0x27a60298
  .word 0x8fa30298
  .word 0x14600085
  .word 0x0040882d
  .word 0x02501021
  .word 0x1051000c
  .word 0x0240302d
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0c146a92
  .word 0x0200382d
  .word 0x10400074
  .word 0x0220902d
  .word 0x00101280
  .word 0x02a2a821
  .word 0x0282a021
  .word 0x10000002
  .word 0x24100001
  .word 0x26100001
  .word 0x26d6fc00
  .word 0x2ac20400
  .word 0x1040ffe3
  .word 0x00000000
  .word 0x1a000012
  .word 0x0240302d
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0c146a92
  .word 0x0200382d
  .word 0x10400062
  .word 0x00000000
  .word 0x00101280
  .word 0x02a2a821
  .word 0x1ac0001c
  .word 0x0282a021
  .word 0x0220282d
  .word 0x0260202d
  .word 0x0c146368
  .word 0x27a60298
  .word 0x8fa30298
  .word 0x1460005f
  .word 0x0040882d
  .word 0x1ac00013
  .word 0x3c020098
  .word 0x0260202d
  .word 0x2450c8c0
  .word 0x0220302d
  .word 0x0200282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x1040004d
  .word 0x0280282d
  .word 0x0200202d
  .word 0x0c148494
  .word 0x02c0302d
  .word 0x0200282d
  .word 0x0220302d
  .word 0x0260202d
  .word 0x0c146aa4
  .word 0x24070001
  .word 0x10400043
  .word 0x02b6a821
  .word 0x27b10280
  .word 0x0260202d
  .word 0x0c146d7c
  .word 0x0220282d
  .word 0x8fa30004
  .word 0x0075182a
  .word 0x54600001
  .word 0xafb50004
  .word 0x93a50287
  .word 0x2403000a
  .word 0x93a70282
  .word 0x0260202d
  .word 0x93a60281
  .word 0x00051102
  .word 0x93b00286
  .word 0x00077102
  .word 0x93ab0285
  .word 0x00064902
  .word 0x93aa0283
  .word 0x00107902
  .word 0x000b6102
  .word 0x00431018
  .word 0x000a6902
  .word 0x01234818
  .word 0x01c37018
  .word 0x30a5000f
  .word 0x01e37818
  .word 0x97a80000
  .word 0x71836018
  .word 0x30e7000f
  .word 0x71a36818
  .word 0x30c6000f
  .word 0x00451021
  .word 0x01c77021
  .word 0x01264821
  .word 0x3210000f
  .word 0x316b000f
  .word 0x314a000f
  .word 0x01f07821
  .word 0x018b6021
  .word 0x01aa6821
  .word 0x35080080
  .word 0x244207d0
  .word 0x8fa60290
  .word 0x8fa70294
  .word 0x03a0282d
  .word 0xa7a80000
  .word 0xa7a2001e
  .word 0xa3af001d
  .word 0xa3ac001c
  .word 0xa3ad001b
  .word 0xa3ae001a
  .word 0x0c145cc4
  .word 0xa3a90019
  .word 0x14400014
  .word 0xafa20298
  .word 0x8fa50290
  .word 0x0220302d
  .word 0x0c145eae
  .word 0x0260202d
  .word 0x1440000e
  .word 0xafa20298
  .word 0x0c145562
  .word 0x0260202d
  .word 0x14400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x10000007
  .word 0x3442006f
  .word 0x0c146926
  .word 0x0260202d
  .word 0x3c038101
  .word 0x3463006f
  .word 0x03c2180b
  .word 0x0060102d
  .word 0xdfbf0330
  .word 0xdfbe0320
  .word 0xdfb70310
  .word 0xdfb60300
  .word 0xdfb502f0
  .word 0xdfb402e0
  .word 0xdfb302d0
  .word 0xdfb202c0
  .word 0xdfb102b0
  .word 0xdfb002a0
  .word 0x03e00008
  .word 0x27bd0340
}
// FUN_005194F8
asm int FUN_005194f8(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdfc90
  .word 0xffb30350
  .word 0xffb00320
  .word 0x0080982d
  .word 0xffbf0360
  .word 0x00a0802d
  .word 0xffb20340
  .word 0x0c145ad2
  .word 0xffb10330
  .word 0x0040182d
  .word 0x1460007a
  .word 0xafa2031c
  .word 0x27b10210
  .word 0x0200282d
  .word 0x0260202d
  .word 0x0c145afa
  .word 0x0220302d
  .word 0x0040182d
  .word 0x14600072
  .word 0xafa2031c
  .word 0x0260202d
  .word 0x0220282d
  .word 0x03a0302d
  .word 0x27a70310
  .word 0x0c145bb0
  .word 0x27a80314
  .word 0x3c038101
  .word 0x0040202d
  .word 0x34630011
  .word 0x14830067
  .word 0xafa2031c
  .word 0x97a30000
  .word 0x30620002
  .word 0x54400004
  .word 0x30620020
  .word 0x3c028101
  .word 0x10000060
  .word 0x3442000d
  .word 0x10400019
  .word 0x27b00290
  .word 0x0220282d
  .word 0x0c14909c
  .word 0x0200202d
  .word 0x3c05007c
  .word 0x0200202d
  .word 0x0c148f9a
  .word 0x24a5e660
  .word 0x0200282d
  .word 0x0260202d
  .word 0x0000302d
  .word 0x2407ffff
  .word 0x0000402d
  .word 0x0c146614
  .word 0x27a90318
  .word 0x0040182d
  .word 0x1460004d
  .word 0xafa2031c
  .word 0x8fa20318
  .word 0x28420003
  .word 0x14400004
  .word 0x97a30000
  .word 0x3c028101
  .word 0x10000046
  .word 0x3442005a
  .word 0x38628000
  .word 0x8fa60310
  .word 0x8fa70314
  .word 0x0260202d
  .word 0xa7a20000
  .word 0x0c145cc4
  .word 0x03a0282d
  .word 0x0040182d
  .word 0x1460003c
  .word 0xafa2031c
  .word 0x0c146926
  .word 0x0260202d
  .word 0x1040002d
  .word 0x8fa60010
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0x14c20003
  .word 0x00c0802d
  .word 0x10000032
  .word 0x0000102d
  .word 0x1000000e
  .word 0x27b2031c
  .word 0x02023026
  .word 0x0260202d
  .word 0x0c1455f8
  .word 0x0240382d
  .word 0x8fa2031c
  .word 0x1440002a
  .word 0xdfbf0360
  .word 0x3c02ffff
  .word 0x3442ffff
  .word 0x12020012
  .word 0x3c027fff
  .word 0x3442ffff
  .word 0x02028024
  .word 0x0200882d
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0c1455cc
  .word 0x0240302d
  .word 0x8fa3031c
  .word 0x14600013
  .word 0x0040802d
  .word 0x3c02ffff
  .word 0x3442fffd
  .word 0x12020004
  .word 0x00000000
  .word 0x3c028000
  .word 0x0600ffe5
  .word 0x0220282d
  .word 0x0c145562
  .word 0x0260202d
  .word 0x10400005
  .word 0x00000000
  .word 0x0c146926
  .word 0x0260202d
  .word 0x14400006
  .word 0x24040898
  .word 0x3c028101
  .word 0x10000009
  .word 0x3442006f
  .word 0x10000007
  .word 0x0060102d
  .word 0x3c030098
  .word 0x02642018
  .word 0x2463b788
  .word 0x0000102d
  .word 0x00641821
  .word 0xac600890
  .word 0xdfbf0360
  .word 0xdfb30350
  .word 0xdfb20340
  .word 0xdfb10330
  .word 0xdfb00320
  .word 0x03e00008
  .word 0x27bd0370
}
// FUN_00519728
asm long FUN_00519728(u64 param_1,u64 param_2,long param_3)
{
  .set noreorder
  .word 0x27bdfd20
  .word 0xffb302b0
  .word 0xffb202a0
  .word 0x00c0982d
  .word 0xffb10290
  .word 0x0080902d
  .word 0x27b10200
  .word 0x0220302d
  .word 0xffbf02d0
  .word 0xffb402c0
  .word 0x0c145afa
  .word 0xffb00280
  .word 0x14400035
  .word 0xdfbf02d0
  .word 0x3c02007c
  .word 0x0220202d
  .word 0x2454e608
  .word 0x0c14904a
  .word 0x0280282d
  .word 0x14400009
  .word 0x24020898
  .word 0x3c040098
  .word 0x02421018
  .word 0x2484bf90
  .word 0x0220282d
  .word 0x0c14909c
  .word 0x00442021
  .word 0x10000020
  .word 0x00000000
  .word 0x0c145ad2
  .word 0x0240202d
  .word 0x14400022
  .word 0xdfbf02d0
  .word 0x0240202d
  .word 0x0220282d
  .word 0x03a0302d
  .word 0x0000382d
  .word 0x0c145bb0
  .word 0x0000402d
  .word 0x3c038101
  .word 0x34630011
  .word 0x14430018
  .word 0xdfbf02d0
  .word 0x97a20000
  .word 0x30420020
  .word 0x14400004
  .word 0x24100898
  .word 0x3c028101
  .word 0x10000011
  .word 0x34420014
  .word 0x3c020098
  .word 0x02508018
  .word 0x2442bf90
  .word 0x0220282d
  .word 0x02028021
  .word 0x0c14909c
  .word 0x0200202d
  .word 0x0200202d
  .word 0x0c148f9a
  .word 0x0280282d
  .word 0x12600003
  .word 0x0260202d
  .word 0x0c14909c
  .word 0x0220282d
  .word 0x0000102d
  .word 0xdfbf02d0
  .word 0xdfb402c0
  .word 0xdfb302b0
  .word 0xdfb202a0
  .word 0xdfb10290
  .word 0xdfb00280
  .word 0x03e00008
  .word 0x27bd02e0
  .word 0x00000000
}
// FUN_00519850
asm int FUN_00519850(u64 param_1,u64 param_2,int param_3,int param_4,u64 *param_5,
                int *param_6)
{
  .set noreorder
  .word 0x27bdfa00
  .word 0xffb605c0
  .word 0xffb705d0
  .word 0x0080b02d
  .word 0xffb10570
  .word 0x00c0b82d
  .word 0xffb00560
  .word 0x0100882d
  .word 0xffbf05f0
  .word 0x00a0802d
  .word 0xffbe05e0
  .word 0xffb505b0
  .word 0xffb405a0
  .word 0xffb30590
  .word 0xffb20580
  .word 0xafa70544
  .word 0xafa90548
  .word 0x0c147030
  .word 0xafa0054c
  .word 0x14400004
  .word 0x24030898
  .word 0x3c028101
  .word 0x10000124
  .word 0x34420013
  .word 0x3c020098
  .word 0x02c31818
  .word 0x2442b788
  .word 0x00431021
  .word 0x8c44088c
  .word 0x10800089
  .word 0x0200282d
  .word 0x02c0202d
  .word 0x0c145486
  .word 0x03a0302d
  .word 0x10400007
  .word 0x03a0202d
  .word 0x3c02007c
  .word 0x2452e608
  .word 0x0c14904a
  .word 0x0240282d
  .word 0x14400004
  .word 0x27b00080
  .word 0x3c028101
  .word 0x1000010f
  .word 0x34420016
  .word 0x03a0282d
  .word 0x0c14909c
  .word 0x0200202d
  .word 0x0200202d
  .word 0x0c14927a
  .word 0x2405002f
  .word 0x27a30100
  .word 0x0200202d
  .word 0xafa30550
  .word 0x0c1490e2
  .word 0xa0400000
  .word 0x24420001
  .word 0x8fa40550
  .word 0x0c14909c
  .word 0x02022821
  .word 0x0c1490e2
  .word 0x0200202d
  .word 0x14400008
  .word 0x0200282d
  .word 0x0240282d
  .word 0x02c0202d
  .word 0x27a60340
  .word 0x0000382d
  .word 0x0000402d
  .word 0x10000006
  .word 0x24100001
  .word 0x02c0202d
  .word 0x27a60340
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000802d
  .word 0x0c145bb0
  .word 0x00000000
  .word 0x3c038101
  .word 0x0040202d
  .word 0x34630011
  .word 0x148300e9
  .word 0xafa20540
  .word 0x97a20340
  .word 0x30420020
  .word 0x14400004
  .word 0x27a50140
  .word 0x3c028101
  .word 0x100000e2
  .word 0x34420014
  .word 0x8fa60350
  .word 0xafa50554
  .word 0x02c0202d
  .word 0x0c1456c6
  .word 0x0000382d
  .word 0x0040182d
  .word 0x14600012
  .word 0xafa20540
  .word 0x97a20140
  .word 0x30428000
  .word 0x104000c5
  .word 0x27b30180
  .word 0x3c06007c
  .word 0x0260202d
  .word 0x0c14904a
  .word 0x24c5e5f0
  .word 0x144000bf
  .word 0x8fa60350
  .word 0x02c0202d
  .word 0x8fa50554
  .word 0x0c1456c6
  .word 0x24070001
  .word 0x0040182d
  .word 0x1060000a
  .word 0xafa20540
  .word 0x3c028101
  .word 0x34420002
  .word 0x546200c5
  .word 0x8fa20540
  .word 0x3c028101
  .word 0x34429002
  .word 0xafa20540
  .word 0x100000c0
  .word 0x8fa20540
  .word 0x97a20140
  .word 0x30428000
  .word 0x104000ab
  .word 0x3c07007c
  .word 0x0260202d
  .word 0x0c14904a
  .word 0x24e5e5f8
  .word 0x144000a6
  .word 0x8fa30344
  .word 0x28620002
  .word 0x144000a3
  .word 0x00000000
  .word 0x02e3102a
  .word 0x14400006
  .word 0x0000f02d
  .word 0x8fa80548
  .word 0x550000ad
  .word 0xad000000
  .word 0x100000ac
  .word 0x0000102d
  .word 0x120000a3
  .word 0x8fb40350
  .word 0x2462fffe
  .word 0x14400006
  .word 0xafa20344
  .word 0x8fa90548
  .word 0x552000a3
  .word 0xad200000
  .word 0x100000a2
  .word 0x0000102d
  .word 0x0280282d
  .word 0x02c0202d
  .word 0x0c1455de
  .word 0x27a60540
  .word 0x3c038101
  .word 0x8fa40540
  .word 0x34630059
  .word 0x10830088
  .word 0x0040a02d
  .word 0x10800091
  .word 0x8fa20344
  .word 0x10000095
  .word 0x0080102d
  .word 0x3c028101
  .word 0x10000092
  .word 0x3442006f
  .word 0x02c0202d
  .word 0x2450c8c0
  .word 0x0280302d
  .word 0x0200282d
  .word 0x0c146a78
  .word 0x24070001
  .word 0x1040fff6
  .word 0x0200902d
  .word 0x0000a82d
  .word 0x26100200
  .word 0x8fa40554
  .word 0x32420007
  .word 0x10400019
  .word 0x0240182d
  .word 0x0200102d
  .word 0x68650007
  .word 0x6c650000
  .word 0x6866000f
  .word 0x6c660008
  .word 0x68670017
  .word 0x6c670010
  .word 0x6868001f
  .word 0x6c680018
  .word 0xb0850007
  .word 0xb4850000
  .word 0xb086000f
  .word 0xb4860008
  .word 0xb0870017
  .word 0xb4870010
  .word 0xb088001f
  .word 0xb4880018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x97a30140
  .word 0x0200102d
  .word 0xdc690000
  .word 0xdc650008
  .word 0xdc660010
  .word 0xdc670018
  .word 0xfc890000
  .word 0xfc850008
  .word 0xfc860010
  .word 0xfc870018
  .word 0x24630020
  .word 0x24840020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x97a30140
  .word 0x30628000
  .word 0x10400034
  .word 0xa3a0019f
  .word 0x30622000
  .word 0x14400032
  .word 0x8fa20344
  .word 0x8fa50550
  .word 0x0c1453cc
  .word 0x27a40180
  .word 0x24030001
  .word 0x5443002c
  .word 0x8fa20344
  .word 0x56e00029
  .word 0x26f7ffff
  .word 0x1220001e
  .word 0x8fa80544
  .word 0x1900001c
  .word 0x8fa30144
  .word 0x26240018
  .word 0x97a20140
  .word 0x0260282d
  .word 0x6ba9014f
  .word 0x6fa90148
  .word 0xb2290007
  .word 0xb6290000
  .word 0x6ba9015f
  .word 0x6fa90158
  .word 0xb229000f
  .word 0xb6290008
  .word 0xae230010
  .word 0x0c14909c
  .word 0xa6220014
  .word 0x3c09007c
  .word 0x0260202d
  .word 0x0c14904a
  .word 0x2525e5f0
  .word 0x14400004
  .word 0x3c02007c
  .word 0x97a20340
  .word 0xa6220014
  .word 0x3c02007c
  .word 0x0260202d
  .word 0x2445e5f8
  .word 0x0c14904a
  .word 0x26310038
  .word 0x8fa30544
  .word 0x18600007
  .word 0x27de0001
  .word 0x03c3102a
  .word 0x14400005
  .word 0x8fa20344
  .word 0x24050001
  .word 0x1000000a
  .word 0xafa5054c
  .word 0x8fa20344
  .word 0x2442ffff
  .word 0x10400015
  .word 0xafa20344
  .word 0x26b50001
  .word 0x26100200
  .word 0x2aa20002
  .word 0x1440ff97
  .word 0x26520200
  .word 0x8fa6054c
  .word 0x24020001
  .word 0x10c20016
  .word 0x0280282d
  .word 0x02c0202d
  .word 0x0c1455de
  .word 0x27a60540
  .word 0x3c038101
  .word 0x8fa40540
  .word 0x34630059
  .word 0x14830007
  .word 0x0040a02d
  .word 0x3c028101
  .word 0x1000000f
  .word 0x34429002
  .word 0x24070001
  .word 0x1000ffef
  .word 0xafa7054c
  .word 0x1480ff74
  .word 0x8fa8054c
  .word 0x15000005
  .word 0x8fa90548
  .word 0x8fa20344
  .word 0x1440ff74
  .word 0x3c020098
  .word 0x8fa90548
  .word 0x55200001
  .word 0xad3e0000
  .word 0x0000102d
  .word 0xdfbf05f0
  .word 0xdfbe05e0
  .word 0xdfb705d0
  .word 0xdfb605c0
  .word 0xdfb505b0
  .word 0xdfb405a0
  .word 0xdfb30590
  .word 0xdfb20580
  .word 0xdfb10570
  .word 0xdfb00560
  .word 0x03e00008
  .word 0x27bd0600
  .word 0x00000000
}
// FUN_00519D70
asm long FUN_00519d70(u64 param_1,u64 param_2,u16 param_3)
{
  .set noreorder
  .word 0x27bdfd20
  .word 0xffb102b0
  .word 0x0080882d
  .word 0xffb202c0
  .word 0xffb002a0
  .word 0x30d2ffff
  .word 0xffbf02d0
  .word 0x0c145ad2
  .word 0x00a0802d
  .word 0x14400053
  .word 0xdfbf02d0
  .word 0x0200282d
  .word 0x0220202d
  .word 0x0c145afa
  .word 0x03a0302d
  .word 0x1440004d
  .word 0xdfbf02d0
  .word 0x27b00080
  .word 0x0220202d
  .word 0x03a0282d
  .word 0x0200302d
  .word 0x27a70290
  .word 0x0c145bb0
  .word 0x27a80294
  .word 0x3c038101
  .word 0x34630011
  .word 0x14430042
  .word 0xdfbf02d0
  .word 0x97a30080
  .word 0x30620020
  .word 0x54400004
  .word 0x3062e7f0
  .word 0x3c028101
  .word 0x1000003b
  .word 0x34420014
  .word 0x0220202d
  .word 0x3243180f
  .word 0x27a50280
  .word 0x00431025
  .word 0x0c146d7c
  .word 0xa7a20080
  .word 0x93a40287
  .word 0x2403000a
  .word 0x93a70282
  .word 0x0200282d
  .word 0x93a60281
  .word 0x00041102
  .word 0x93af0286
  .word 0x00075902
  .word 0x93ae0285
  .word 0x00064102
  .word 0x93ac0283
  .word 0x000f6902
  .word 0x000e4902
  .word 0x00431018
  .word 0x000c5102
  .word 0x01034018
  .word 0x01635818
  .word 0x3084000f
  .word 0x01a36818
  .word 0x30e7000f
  .word 0x71234818
  .word 0x30c6000f
  .word 0x71435018
  .word 0x00441021
  .word 0x01675821
  .word 0x01064021
  .word 0x31ef000f
  .word 0x31ce000f
  .word 0x318c000f
  .word 0x01af6821
  .word 0x012e4821
  .word 0x014c5021
  .word 0x244207d0
  .word 0x8fa60290
  .word 0x8fa70294
  .word 0x0220202d
  .word 0xa7a2009e
  .word 0xa3ad009d
  .word 0xa3a9009c
  .word 0xa3aa009b
  .word 0xa3ab009a
  .word 0x0c145cc4
  .word 0xa3a80099
  .word 0x14400008
  .word 0xdfbf02d0
  .word 0x0c146926
  .word 0x0220202d
  .word 0x3c038101
  .word 0x3463006f
  .word 0x0002180b
  .word 0x0060102d
  .word 0xdfbf02d0
  .word 0xdfb202c0
  .word 0xdfb102b0
  .word 0xdfb002a0
  .word 0x03e00008
  .word 0x27bd02e0
}
// FUN_00519EF8
asm long FUN_00519ef8(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdfc80
  .word 0xffb40350
  .word 0x0080a02d
  .word 0xffb10320
  .word 0xffb00310
  .word 0x00c0882d
  .word 0x00a0802d
  .word 0xffbf0370
  .word 0xffb50360
  .word 0xffb30340
  .word 0x0c145ad2
  .word 0xffb20330
  .word 0x1440004a
  .word 0xdfbf0370
  .word 0x27b50200
  .word 0x0200282d
  .word 0x0280202d
  .word 0x0c145afa
  .word 0x02a0302d
  .word 0x14400043
  .word 0xdfbf0370
  .word 0x0220202d
  .word 0x0c148fe6
  .word 0x2405002f
  .word 0x1440000e
  .word 0x27b00280
  .word 0x02a0282d
  .word 0x0c14909c
  .word 0x0200202d
  .word 0x0200202d
  .word 0x0c14927a
  .word 0x2405002f
  .word 0x24440001
  .word 0x0c14909c
  .word 0x0220282d
  .word 0x0c145388
  .word 0x0220202d
  .word 0x14400004
  .word 0x00000000
  .word 0x3c028101
  .word 0x1000002d
  .word 0x34420016
  .word 0x0c14536c
  .word 0x0220202d
  .word 0x14400004
  .word 0x27b20300
  .word 0x3c028101
  .word 0x10000026
  .word 0x3442005b
  .word 0x27b30304
  .word 0x0200282d
  .word 0x0280202d
  .word 0x03a0302d
  .word 0x0240382d
  .word 0x0c145bb0
  .word 0x0260402d
  .word 0x3c038101
  .word 0x34630002
  .word 0x1443001c
  .word 0xdfbf0370
  .word 0x02a0282d
  .word 0x0240382d
  .word 0x0260402d
  .word 0x0280202d
  .word 0x0c145bb0
  .word 0x03a0302d
  .word 0x3c038101
  .word 0x34630011
  .word 0x14430012
  .word 0xdfbf0370
  .word 0x0220282d
  .word 0x0c14909c
  .word 0x27a40040
  .word 0x8fa60300
  .word 0x0280202d
  .word 0x8fa70304
  .word 0x0c145cc4
  .word 0x03a0282d
  .word 0x14400008
  .word 0xdfbf0370
  .word 0x0c146926
  .word 0x0280202d
  .word 0x3c038101
  .word 0x3463006f
  .word 0x0002180b
  .word 0x0060102d
  .word 0xdfbf0370
  .word 0xdfb50360
  .word 0xdfb40350
  .word 0xdfb30340
  .word 0xdfb20330
  .word 0xdfb10320
  .word 0xdfb00310
  .word 0x03e00008
  .word 0x27bd0380
  .word 0x00000000
}
// FUN_0051A078
asm int FUN_0051a078(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdfd30
  .word 0xffb102a0
  .word 0xffb202b0
  .word 0x0080882d
  .word 0xffbf02c0
  .word 0x00a0902d
  .word 0x0c145ad2
  .word 0xffb00290
  .word 0x0040182d
  .word 0x14600021
  .word 0xafa20280
  .word 0x27b00200
  .word 0x0240282d
  .word 0x0220202d
  .word 0x0c145afa
  .word 0x0200302d
  .word 0x0040182d
  .word 0x14600019
  .word 0xafa20280
  .word 0x0200282d
  .word 0x0220202d
  .word 0x03a0302d
  .word 0x0000382d
  .word 0x0c145bb0
  .word 0x0000402d
  .word 0x3c038101
  .word 0x0040202d
  .word 0x34630011
  .word 0x1483000e
  .word 0xafa20280
  .word 0x97a20000
  .word 0x30420020
  .word 0x14400004
  .word 0x8fa50010
  .word 0x3c028101
  .word 0x10000007
  .word 0x34420014
  .word 0x0220202d
  .word 0x8fa60004
  .word 0x0c145d2e
  .word 0x27a70280
  .word 0x8fa30280
  .word 0x0063100b
  .word 0xdfbf02c0
  .word 0xdfb202b0
  .word 0xdfb102a0
  .word 0xdfb00290
  .word 0x03e00008
  .word 0x27bd02d0
  .word 0x00000000
}
// FUN_0051A140
asm u32 FUN_0051a140(void)
{
  .set noreorder
  .word 0x3c020098
  .word 0x34038020
  .word 0x2444ccc0
  .word 0x2405ffff
  .word 0x00831821
  .word 0x00000000
  .word 0xac850000
  .word 0xac80000c
  .word 0x24844010
  .word 0x0083102a
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x03e00008
  .word 0x24020001
  .word 0x00000000
}
#pragma push
#pragma schedule on
// FUN_0051A180
u32 FUN_0051a180(u32 param_1, int *param_2)
{
  return FUN_0051afd8((int)param_1, (u64 *)param_2);
}
#pragma pop
#pragma push
#pragma schedule on
// FUN_0051A1A0
u32 FUN_0051a1a0(u32 param_1)
{
  return FUN_0051b1b0((int)param_1);
}
#pragma pop
#pragma push
#pragma schedule on
// FUN_0051A1C0
bool FUN_0051a1c0(u32 param_1)
{
  return FUN_0051b3b0((int)param_1);
}
#pragma pop
// FUN_0051A1E0
asm u32 FUN_0051a1e0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020098
  .word 0xffb10010
  .word 0x0000302d
  .word 0xffb00000
  .word 0x24514d00
  .word 0x0080802d
  .word 0xffbf0020
  .word 0x0220282d
  .word 0x24070001
  .word 0x0c146dc2
  .word 0x0000402d
  .word 0x14400003
  .word 0x24040184
  .word 0x10000031
  .word 0x0000102d
  .word 0x3c030078
  .word 0x02042018
  .word 0x246327e0
  .word 0x0220282d
  .word 0x00832021
  .word 0x00851025
  .word 0x30420007
  .word 0x10400018
  .word 0x24a20180
  .word 0x68a30007
  .word 0x6ca30000
  .word 0x68a6000f
  .word 0x6ca60008
  .word 0x68a70017
  .word 0x6ca70010
  .word 0x68a8001f
  .word 0x6ca80018
  .word 0xb0830007
  .word 0xb4830000
  .word 0xb086000f
  .word 0xb4860008
  .word 0xb0870017
  .word 0xb4870010
  .word 0xb088001f
  .word 0xb4880018
  .word 0x24a50020
  .word 0x24840020
  .word 0x00000000
  .word 0x14a2ffec
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0xdca30000
  .word 0xdca60008
  .word 0xdca70010
  .word 0xdca80018
  .word 0xfc830000
  .word 0xfc860008
  .word 0xfc870010
  .word 0xfc880018
  .word 0x24a50020
  .word 0x24840020
  .word 0x00000000
  .word 0x14a2fff4
  .word 0x00000000
  .word 0x8ca20000
  .word 0xac820000
  .word 0x24020001
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0051A2F8
asm bool FUN_0051a2f8(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x240500ff
  .word 0xffb20020
  .word 0x24060800
  .word 0xffb10010
  .word 0x3c120098
  .word 0xffb00000
  .word 0x0080882d
  .word 0x26504d00
  .word 0xffbf0030
  .word 0x0c148502
  .word 0x0200202d
  .word 0x24040184
  .word 0x3c030078
  .word 0x02242018
  .word 0x246327e0
  .word 0x00831821
  .word 0x00701025
  .word 0x30420007
  .word 0x10400018
  .word 0x24620180
  .word 0x68640007
  .word 0x6c640000
  .word 0x6865000f
  .word 0x6c650008
  .word 0x68660017
  .word 0x6c660010
  .word 0x6867001f
  .word 0x6c670018
  .word 0xb2040007
  .word 0xb6040000
  .word 0xb205000f
  .word 0xb6050008
  .word 0xb2060017
  .word 0xb6060010
  .word 0xb207001f
  .word 0xb6070018
  .word 0x24630020
  .word 0x26100020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0xdc680000
  .word 0xdc690008
  .word 0xdc6a0010
  .word 0xdc640018
  .word 0xfe080000
  .word 0xfe090008
  .word 0xfe0a0010
  .word 0xfe040018
  .word 0x24630020
  .word 0x26100020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x8c680000
  .word 0x0220202d
  .word 0x26454d00
  .word 0xae080000
  .word 0x0000302d
  .word 0x0c146e3c
  .word 0x24070001
  .word 0xdfbf0030
  .word 0x0002102b
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
// FUN_0051A418
asm u64 FUN_0051a418(int param_1,u64 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x24030184
  .word 0x27bdfff0
  .word 0x00831818
  .word 0x3c020078
  .word 0xffbf0000
  .word 0x244227e0
  .word 0x00621821
  .word 0x9468002a
  .word 0x01070018
  .word 0x00003812
  .word 0x00c80018
  .word 0x0c146e34
  .word 0x00003012
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051A458
asm u64 FUN_0051a458(int param_1,u64 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x24030184
  .word 0x27bdfff0
  .word 0x00831818
  .word 0x3c020078
  .word 0xffbf0000
  .word 0x244227e0
  .word 0x00621821
  .word 0x9468002a
  .word 0x01070018
  .word 0x00003812
  .word 0x00c80018
  .word 0x0c146e3c
  .word 0x00003012
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051A498
asm u64 FUN_0051a498(int param_1)
{
  .set noreorder
  .word 0x24024010
  .word 0x27bdffc0
  .word 0x00823818
  .word 0x3c030098
  .word 0xffb20020
  .word 0x2463ccc0
  .word 0xffb10010
  .word 0xffbf0030
  .word 0x2412ffff
  .word 0xffb00000
  .word 0x00e38821
  .word 0x8e260000
  .word 0x10d20009
  .word 0x24020001
  .word 0x2470000c
  .word 0x24650010
  .word 0x00f08021
  .word 0x00e52821
  .word 0x0c146916
  .word 0x8e070000
  .word 0xae320000
  .word 0xae000000
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0051A508
asm u64 FUN_0051a508(u64 param_1,u64 *param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x24030184
  .word 0xffb30030
  .word 0x24024010
  .word 0x0080982d
  .word 0xffb40040
  .word 0x02631818
  .word 0x3c040078
  .word 0xffb20020
  .word 0x248427e0
  .word 0xffb10010
  .word 0x02624018
  .word 0xffb00000
  .word 0x00a0882d
  .word 0xffbf0050
  .word 0x00641821
  .word 0x3c140098
  .word 0x2407ffff
  .word 0x8c650034
  .word 0x2689ccc0
  .word 0x9464002a
  .word 0x01095021
  .word 0x00c58021
  .word 0x9462002c
  .word 0x02042018
  .word 0x50400001
  .word 0x000001cd
  .word 0x8d430000
  .word 0x0082001a
  .word 0x00009012
  .word 0x54670039
  .word 0x25230004
  .word 0x25220010
  .word 0x01281821
  .word 0xad500000
  .word 0x01023021
  .word 0xac700004
  .word 0x0060102d
  .word 0xac520008
  .word 0x02261025
  .word 0xac60000c
  .word 0x30420007
  .word 0x10400019
  .word 0x0220182d
  .word 0x26220400
  .word 0x68640007
  .word 0x6c640000
  .word 0x6865000f
  .word 0x6c650008
  .word 0x68670017
  .word 0x6c670010
  .word 0x6868001f
  .word 0x6c680018
  .word 0xb0c40007
  .word 0xb4c40000
  .word 0xb0c5000f
  .word 0xb4c50008
  .word 0xb0c70017
  .word 0xb4c70010
  .word 0xb0c8001f
  .word 0xb4c80018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1462ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x24054010
  .word 0x26220400
  .word 0xdc690000
  .word 0xdc640008
  .word 0xdc650010
  .word 0xdc670018
  .word 0xfcc90000
  .word 0xfcc40008
  .word 0xfcc50010
  .word 0xfcc70018
  .word 0x24630020
  .word 0x24c60020
  .word 0x00000000
  .word 0x1462fff4
  .word 0x00000000
  .word 0x24054010
  .word 0x2684ccc0
  .word 0x02652818
  .word 0x2484000c
  .word 0x10000082
  .word 0x24020001
  .word 0x01032821
  .word 0x8ca20000
  .word 0x24420001
  .word 0x1602003e
  .word 0x2523000c
  .word 0x01032021
  .word 0x8c820000
  .word 0x28420010
  .word 0x10400039
  .word 0x01281021
  .word 0x8c430008
  .word 0x14720036
  .word 0x25220010
  .word 0xacb00000
  .word 0x8c830000
  .word 0x00031a80
  .word 0x01031821
  .word 0x00621021
  .word 0x02222025
  .word 0x30840007
  .word 0x10800019
  .word 0x0220302d
  .word 0x26240400
  .word 0x68c80007
  .word 0x6cc80000
  .word 0x68c9000f
  .word 0x6cc90008
  .word 0x68c30017
  .word 0x6cc30010
  .word 0x68c5001f
  .word 0x6cc50018
  .word 0xb0480007
  .word 0xb4480000
  .word 0xb049000f
  .word 0xb4490008
  .word 0xb0430017
  .word 0xb4430010
  .word 0xb045001f
  .word 0xb4450018
  .word 0x24c60020
  .word 0x24420020
  .word 0x00000000
  .word 0x14c4ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x24054010
  .word 0x26240400
  .word 0xdcc70000
  .word 0xdcc80008
  .word 0xdcc90010
  .word 0xdcc30018
  .word 0xfc470000
  .word 0xfc480008
  .word 0xfc490010
  .word 0xfc430018
  .word 0x24c60020
  .word 0x24420020
  .word 0x00000000
  .word 0x14c4fff4
  .word 0x00000000
  .word 0x24054010
  .word 0x2684ccc0
  .word 0x02652818
  .word 0x2484000c
  .word 0x10000040
  .word 0x24020001
  .word 0x0c146926
  .word 0x0260202d
  .word 0x24034010
  .word 0x2684ccc0
  .word 0x02631818
  .word 0x0040402d
  .word 0x24860010
  .word 0x0220382d
  .word 0x00641021
  .word 0x00832821
  .word 0xac500000
  .word 0x00663021
  .word 0x00a0102d
  .word 0xacb00004
  .word 0xac520008
  .word 0x0040202d
  .word 0x00e61025
  .word 0x30420007
  .word 0x10400019
  .word 0xac80000c
  .word 0x24e20400
  .word 0x68e40007
  .word 0x6ce40000
  .word 0x68e5000f
  .word 0x6ce50008
  .word 0x68e90017
  .word 0x6ce90010
  .word 0x68e3001f
  .word 0x6ce30018
  .word 0xb0c40007
  .word 0xb4c40000
  .word 0xb0c5000f
  .word 0xb4c50008
  .word 0xb0c90017
  .word 0xb4c90010
  .word 0xb0c3001f
  .word 0xb4c30018
  .word 0x24e70020
  .word 0x24c60020
  .word 0x00000000
  .word 0x14e2ffec
  .word 0x00000000
  .word 0x10000010
  .word 0x24054010
  .word 0x24e20400
  .word 0xdce40000
  .word 0xdce50008
  .word 0xdce90010
  .word 0xdce30018
  .word 0xfcc40000
  .word 0xfcc50008
  .word 0xfcc90010
  .word 0xfcc30018
  .word 0x24e70020
  .word 0x24c60020
  .word 0x00000000
  .word 0x14e2fff4
  .word 0x00000000
  .word 0x24054010
  .word 0x2684ccc0
  .word 0x02652818
  .word 0x2484000c
  .word 0x0100102d
  .word 0x00a42821
  .word 0x8ca30000
  .word 0x24630001
  .word 0xaca30000
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
// FUN_0051A8A0
asm u64 FUN_0051a8a0(u64 param_1,u64 *param_2,int param_3)
{
  .set noreorder
  .word 0x0080382d
  .word 0x24024010
  .word 0x24040184
  .word 0x00e24018
  .word 0x00e42018
  .word 0x27bdfff0
  .word 0x3c030078
  .word 0xffbf0000
  .word 0x3c020098
  .word 0x246327e0
  .word 0x2449ccc0
  .word 0x00a0502d
  .word 0x00832021
  .word 0x01091021
  .word 0x8c850034
  .word 0x8c440000
  .word 0x00c53021
  .word 0x00c4102a
  .word 0x54400037
  .word 0x00e0202d
  .word 0x01281821
  .word 0x8c62000c
  .word 0x00821021
  .word 0x00c2102a
  .word 0x10400030
  .word 0x00c41023
  .word 0x0140282d
  .word 0x00021280
  .word 0x25240010
  .word 0x01021021
  .word 0x00441021
  .word 0x00451825
  .word 0x30630007
  .word 0x10600018
  .word 0x24430400
  .word 0x68440007
  .word 0x6c440000
  .word 0x6846000f
  .word 0x6c460008
  .word 0x68470017
  .word 0x6c470010
  .word 0x6848001f
  .word 0x6c480018
  .word 0xb0a40007
  .word 0xb4a40000
  .word 0xb0a6000f
  .word 0xb4a60008
  .word 0xb0a70017
  .word 0xb4a70010
  .word 0xb0a8001f
  .word 0xb4a80018
  .word 0x24420020
  .word 0x24a50020
  .word 0x00000000
  .word 0x1443ffec
  .word 0x00000000
  .word 0x10000014
  .word 0x24020001
  .word 0xdc440000
  .word 0xdc460008
  .word 0xdc470010
  .word 0xdc480018
  .word 0xfca40000
  .word 0xfca60008
  .word 0xfca70010
  .word 0xfca80018
  .word 0x24420020
  .word 0x24a50020
  .word 0x00000000
  .word 0x1443fff4
  .word 0x00000000
  .word 0x10000005
  .word 0x24020001
  .word 0x00e0202d
  .word 0x0140282d
  .word 0x0c146906
  .word 0x24070001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
#pragma alias FUN_0051a8a0_0arg FUN_0051a8a0
extern u64 FUN_0051a8a0_0arg(void);
#pragma schedule on
// FUN_0051A9E0
u64 FUN_0051a9e0(u64 param_1,int param_2,u64 param_3,int param_4)
{
  return FUN_0051a8a0_0arg();
}
#pragma schedule off
// FUN_0051AA00
asm u64 FUN_0051aa00(int param_1,u64 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x24030184
  .word 0x27bdfff0
  .word 0x00831818
  .word 0x3c020078
  .word 0xffbf0000
  .word 0x244227e0
  .word 0x00621821
  .word 0x8c680034
  .word 0x9462002a
  .word 0x00c83021
  .word 0x00c20018
  .word 0x00003012
  .word 0x00470018
  .word 0x0c146f44
  .word 0x00003812
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051AA48
asm u64 FUN_0051aa48(int param_1,u64 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x24030184
  .word 0x27bdfff0
  .word 0x00831818
  .word 0x3c020078
  .word 0xffbf0000
  .word 0x244227e0
  .word 0x00621821
  .word 0x8c680034
  .word 0x9462002a
  .word 0x00c83021
  .word 0x00c20018
  .word 0x00003012
  .word 0x00470018
  .word 0x0c146fd0
  .word 0x00003812
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051AA90
asm u32 FUN_0051aa90(u64 param_1,u64 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb30030
  .word 0xffb20020
  .word 0x0080982d
  .word 0xffb10010
  .word 0x00a0902d
  .word 0xffb00000
  .word 0x00c0882d
  .word 0x00e0802d
  .word 0x1a00000c
  .word 0xffbf0040
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c146942
  .word 0x0220302d
  .word 0x14400003
  .word 0x2610ffff
  .word 0x10000004
  .word 0x0000102d
  .word 0x1e00fff7
  .word 0x26310001
  .word 0x24020001
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_0051AB08
asm u32 FUN_0051ab08(int param_1,int param_2)
{
  .set noreorder
  .word 0x24030184
  .word 0x3c020078
  .word 0x00832018
  .word 0x244227e0
  .word 0x0000182d
  .word 0x00822021
  .word 0x248400d0
  .word 0x00000000
  .word 0x8c820000
  .word 0x14450003
  .word 0x24630001
  .word 0x03e00008
  .word 0x24020001
  .word 0x28620020
  .word 0x1440fff9
  .word 0x24840004
  .word 0x03e00008
  .word 0x0000102d
}
// FUN_0051AB50
asm u32 FUN_0051ab50(int param_1,int param_2)
{
  .set noreorder
  .word 0x24030184
  .word 0x27bdfff0
  .word 0x00831818
  .word 0x3c020078
  .word 0xffbf0000
  .word 0x244227e0
  .word 0x00621821
  .word 0x9466002a
  .word 0x9462002c
  .word 0x00a62818
  .word 0x50400001
  .word 0x000001cd
  .word 0x00a2001a
  .word 0x0c146ac2
  .word 0x00002812
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051AB98
asm u32 FUN_0051ab98(u32 param_1,int *param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdff40
  .word 0x3c030098
  .word 0xffbe00a0
  .word 0xffb70090
  .word 0x0000f02d
  .word 0xffb60080
  .word 0xffb50070
  .word 0x24764d00
  .word 0xffb40060
  .word 0x00c0a82d
  .word 0xffb20040
  .word 0x00a0a02d
  .word 0xffbf00b0
  .word 0x24120001
  .word 0xffb30050
  .word 0xffb10030
  .word 0xffb00020
  .word 0x8e820004
  .word 0x8e850008
  .word 0x50400001
  .word 0x000001cd
  .word 0x00a2001a
  .word 0x0000b812
  .word 0x0257102a
  .word 0x10400037
  .word 0xafa40000
  .word 0x3c13ffff
  .word 0x24090800
  .word 0x3673ffff
  .word 0x2bc20010
  .word 0x10400031
  .word 0x02c0282d
  .word 0x8e820000
  .word 0x8e860004
  .word 0x0000402d
  .word 0x0122001b
  .word 0x50400001
  .word 0x000001cd
  .word 0x8fa40000
  .word 0x0000882d
  .word 0x7fa90010
  .word 0x00001812
  .word 0x02460018
  .word 0x0060802d
  .word 0x00003012
  .word 0x0c146dc2
  .word 0x0200382d
  .word 0x8e860000
  .word 0x0000282d
  .word 0x00d01018
  .word 0x00021082
  .word 0x10400012
  .word 0x7ba90010
  .word 0x8ec20000
  .word 0x10530003
  .word 0x26440001
  .word 0x1000000e
  .word 0x24110001
  .word 0x00d01018
  .word 0x24a50001
  .word 0x00021082
  .word 0x00a2102b
  .word 0x10400008
  .word 0x00051080
  .word 0x00561021
  .word 0x8c430000
  .word 0x1073fff8
  .word 0x00d01018
  .word 0x10000002
  .word 0x24110001
  .word 0x26440001
  .word 0x5a200005
  .word 0x0080902d
  .word 0xaeb20000
  .word 0x27de0001
  .word 0x26b50004
  .word 0x0080902d
  .word 0x0257102a
  .word 0x1440ffcf
  .word 0x2bc20010
  .word 0x24020001
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
// FUN_0051AD10
asm u64 FUN_0051ad10(void)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020098
  .word 0xffb20020
  .word 0x3c120078
  .word 0xffb00000
  .word 0x8c445500
  .word 0x3c100098
  .word 0xffb40040
  .word 0xffb30030
  .word 0x0240a02d
  .word 0xffb10010
  .word 0xffbf0050
  .word 0x261155c0
  .word 0xae402ae8
  .word 0x0c140c68
  .word 0x26330080
  .word 0x0220202d
  .word 0x0c140ee6
  .word 0x262500ff
  .word 0x8e0355c0
  .word 0x8e422ae8
  .word 0x0043102a
  .word 0x50400007
  .word 0x8e630000
  .word 0x8e220080
  .word 0x0043102a
  .word 0x50400003
  .word 0x8e630000
  .word 0x1000000d
  .word 0xae432ae8
  .word 0x8e822ae8
  .word 0x0043102a
  .word 0x50400009
  .word 0xae200008
  .word 0x8e220000
  .word 0x0043102a
  .word 0x10400004
  .word 0x3c020098
  .word 0xae432ae8
  .word 0x10000003
  .word 0x24425640
  .word 0xae200008
  .word 0x0220102d
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
// FUN_0051ADE0
asm u64 FUN_0051ade0(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020098
  .word 0xffb00000
  .word 0x8c445500
  .word 0x3c100098
  .word 0xffb10010
  .word 0xffbf0020
  .word 0x0c140c68
  .word 0x261155c0
  .word 0x0220202d
  .word 0x0c140ee6
  .word 0x2625007f
  .word 0x8e0255c0
  .word 0x58400001
  .word 0xae200008
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0051AE38
asm void FUN_0051ae38(void)
{
  .set noreorder
  .word 0x3c020098
  .word 0x27bdfff0
  .word 0x8c445500
  .word 0xffbf0000
  .word 0x0c140c64
  .word 0x00000000
  .word 0x0000000f
  .word 0x42000038
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
// FUN_0051AE68
asm u32 FUN_0051ae68(void)
{
  .set noreorder
  .word 0x3c02007c
  .word 0x27bdffd0
  .word 0x3c030078
  .word 0x2442e668
  .word 0x2405007f
  .word 0xffbf0020
  .word 0xac602ae8
  .word 0x03a0202d
  .word 0xafa50004
  .word 0xafa20014
  .word 0x0c140c58
  .word 0xafa00008
  .word 0x3c030098
  .word 0x04410003
  .word 0xac625500
  .word 0x10000011
  .word 0x0000102d
  .word 0x3c020098
  .word 0x24070200
  .word 0x24435508
  .word 0x24060010
  .word 0x24650048
  .word 0x24044000
  .word 0x00000000
  .word 0xac600000
  .word 0xac670008
  .word 0xac66000c
  .word 0xac640010
  .word 0x24630024
  .word 0x0065102a
  .word 0x1440fff9
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0020
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0051AEF8
asm u32 FUN_0051aef8(void)
{
  .set noreorder
  .word 0x3c020098
  .word 0x27bdffd0
  .word 0x8c445500
  .word 0xffbf0020
  .word 0xffb10010
  .word 0x04800003
  .word 0xffb00000
  .word 0x0c140c5c
  .word 0x00000000
  .word 0x3c020098
  .word 0x24505508
  .word 0x26110048
  .word 0x8e020000
  .word 0x00000000
  .word 0x50400005
  .word 0x26100024
  .word 0x0c147228
  .word 0x8e040004
  .word 0xae000000
  .word 0x26100024
  .word 0x0211102a
  .word 0x5440fff8
  .word 0x8e020000
  .word 0xdfbf0020
  .word 0x24020001
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0051AF70
asm u32 FUN_0051af70(int param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x24020024
  .word 0x3c030098
  .word 0x00822018
  .word 0x24635508
  .word 0x24020001
  .word 0x00643821
  .word 0x00e0182d
  .word 0xace5001c
  .word 0x03e00008
  .word 0xac660020
}
// FUN_0051AF98
asm u32 FUN_0051af98(int param_1,u64 *param_2)
{
  .set noreorder
  .word 0x24020024
  .word 0x3c030098
  .word 0x00822018
  .word 0x24635508
  .word 0x00832021
  .word 0x68a30007
  .word 0x6ca30000
  .word 0x68a6000f
  .word 0x6ca60008
  .word 0xb083000f
  .word 0xb4830008
  .word 0xb0860017
  .word 0xb4860010
  .word 0x03e00008
  .word 0x24020001
  .word 0x00000000
}
// FUN_0051AFD8
asm u32 FUN_0051afd8(int param_1,u64 *param_2)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x24030024
  .word 0xffb60070
  .word 0x0080b02d
  .word 0xffbe0090
  .word 0x02c31818
  .word 0x3c1e0098
  .word 0x27c25508
  .word 0xffb70080
  .word 0xffb20030
  .word 0x24420004
  .word 0xafa50004
  .word 0x24170003
  .word 0xffbf00a0
  .word 0x00629021
  .word 0xffb50060
  .word 0xffb40050
  .word 0xffb30040
  .word 0xffb10020
  .word 0xffb00010
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x10570029
  .word 0x3c130098
  .word 0x24030030
  .word 0x26625580
  .word 0x3c100098
  .word 0xac400024
  .word 0x261055c0
  .word 0xafa30000
  .word 0x0200202d
  .word 0xac400008
  .word 0x0000282d
  .word 0xac40000c
  .word 0x24060100
  .word 0xac400010
  .word 0x3c110078
  .word 0xac400014
  .word 0x3c150052
  .word 0xac400018
  .word 0x24140001
  .word 0xac40001c
  .word 0x0c148502
  .word 0xac400020
  .word 0x0200202d
  .word 0x0c140e96
  .word 0x248500ff
  .word 0xae372aec
  .word 0x8e440000
  .word 0x00000000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x26a8ae38
  .word 0x5454fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x0040582d
  .word 0x8d6c0008
  .word 0x24020001
  .word 0x11820003
  .word 0x24070024
  .word 0x10000028
  .word 0x0000102d
  .word 0x9162000d
  .word 0x02c73818
  .word 0x9163000c
  .word 0x27c45508
  .word 0x00021200
  .word 0x00621821
  .word 0x24020001
  .word 0x00872821
  .word 0xaca30008
  .word 0x00e43821
  .word 0x00a0402d
  .word 0x00a0482d
  .word 0x9163000f
  .word 0x00a0502d
  .word 0x9164000e
  .word 0x00031a00
  .word 0x00832021
  .word 0xad04000c
  .word 0x91660011
  .word 0x91650013
  .word 0x91640012
  .word 0x00063200
  .word 0x91630010
  .word 0x00052e00
  .word 0x00042400
  .word 0x00651821
  .word 0x00862021
  .word 0x00641821
  .word 0xad230010
  .word 0xad4c0014
  .word 0x8fa30004
  .word 0x68e4000f
  .word 0x6ce40008
  .word 0x68e50017
  .word 0x6ce50010
  .word 0xb0640007
  .word 0xb4640000
  .word 0xb065000f
  .word 0xb4650008
  .word 0xdfbf00a0
  .word 0xdfbe0090
  .word 0xdfb70080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
}
// FUN_0051B1B0
asm u32 FUN_0051b1b0(int param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x24020024
  .word 0xffb00010
  .word 0x3c030098
  .word 0x00828018
  .word 0xffb10020
  .word 0x24715508
  .word 0xffb20030
  .word 0xffbf0060
  .word 0x26220004
  .word 0xffb40050
  .word 0xffb30040
  .word 0x02029021
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x24030003
  .word 0x14430003
  .word 0x02302021
  .word 0x10000029
  .word 0x0000102d
  .word 0x3c130098
  .word 0x0080102d
  .word 0x24070030
  .word 0x0040182d
  .word 0x8c450008
  .word 0x8c66000c
  .word 0x26625580
  .word 0x8c830010
  .word 0x3c100098
  .word 0xac450008
  .word 0x261055c0
  .word 0xac46000c
  .word 0x0200202d
  .word 0xac430010
  .word 0x0000282d
  .word 0xac400018
  .word 0x24060100
  .word 0xafa70000
  .word 0x3c110078
  .word 0xac400014
  .word 0x0c148502
  .word 0x3c140052
  .word 0x0200202d
  .word 0x248500ff
  .word 0x0c140e96
  .word 0x24100001
  .word 0x24020004
  .word 0xae222aec
  .word 0x8e440000
  .word 0x00000000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x2688ae38
  .word 0x5450fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x8c420008
  .word 0xdfbf0060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0070
}
// FUN_0051B2C0
asm bool FUN_0051b2c0(int param_1)
{
  .set noreorder
  .word 0x24030024
  .word 0x3c020098
  .word 0x00832018
  .word 0x27bdff90
  .word 0x24425508
  .word 0xffb20030
  .word 0xffbf0060
  .word 0x24420004
  .word 0xffb40050
  .word 0xffb30040
  .word 0x00829021
  .word 0xffb10020
  .word 0xffb00010
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x24030003
  .word 0x14430003
  .word 0x3c130098
  .word 0x10000021
  .word 0x0000102d
  .word 0x24020030
  .word 0x26635580
  .word 0x3c100098
  .word 0xac600018
  .word 0x261055c0
  .word 0xafa20000
  .word 0x0200202d
  .word 0xac600014
  .word 0x0000282d
  .word 0x24060100
  .word 0x0c148502
  .word 0x3c110078
  .word 0x3c140052
  .word 0x0200202d
  .word 0x248500ff
  .word 0x0c140e96
  .word 0x24100001
  .word 0x2402000d
  .word 0xae222aec
  .word 0x8e440000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x2688ae38
  .word 0x5450fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x8c420008
  .word 0x38420001
  .word 0x2c420001
  .word 0xdfbf0060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0070
}
// FUN_0051B3B0
asm bool FUN_0051b3b0(int param_1)
{
  .set noreorder
  .word 0x24030024
  .word 0x3c020098
  .word 0x00832018
  .word 0x27bdff90
  .word 0x24425508
  .word 0xffb20030
  .word 0xffbf0060
  .word 0x24420004
  .word 0xffb40050
  .word 0xffb30040
  .word 0x00829021
  .word 0xffb10020
  .word 0xffb00010
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x24030003
  .word 0x14430003
  .word 0x3c130098
  .word 0x10000021
  .word 0x0000102d
  .word 0x24020030
  .word 0x26635580
  .word 0x3c100098
  .word 0xac600018
  .word 0x261055c0
  .word 0xafa20000
  .word 0x0200202d
  .word 0xac600014
  .word 0x0000282d
  .word 0x24060100
  .word 0x0c148502
  .word 0x3c110078
  .word 0x3c140052
  .word 0x0200202d
  .word 0x248500ff
  .word 0x0c140e96
  .word 0x24100001
  .word 0x2402000c
  .word 0xae222aec
  .word 0x8e440000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x2688ae38
  .word 0x5450fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x8c420008
  .word 0x38420001
  .word 0x2c420001
  .word 0xdfbf0060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0070
}
// FUN_0051B4A0
asm u32 FUN_0051b4a0(int param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x24020024
  .word 0xffb00010
  .word 0x3c030098
  .word 0x00828018
  .word 0xffb10020
  .word 0x24715508
  .word 0xffb20030
  .word 0xffbf0070
  .word 0x26220004
  .word 0xffb50060
  .word 0xffb40050
  .word 0x02029021
  .word 0xffb30040
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x24030003
  .word 0x14430003
  .word 0x02301021
  .word 0x10000036
  .word 0x0000102d
  .word 0x8c4a0008
  .word 0x11400005
  .word 0x3c04007c
  .word 0x8c4b000c
  .word 0x15600006
  .word 0x02302821
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e680
  .word 0x1000002b
  .word 0x0000102d
  .word 0x3c140098
  .word 0x00a0102d
  .word 0x3c100098
  .word 0x0040182d
  .word 0x0040202d
  .word 0x8c680020
  .word 0x261055c0
  .word 0x8c89001c
  .word 0x24070030
  .word 0x8ca30014
  .word 0x0200202d
  .word 0x8c460010
  .word 0x0000282d
  .word 0x26825580
  .word 0x3c110078
  .word 0xac460010
  .word 0x3c150052
  .word 0xac4a0008
  .word 0x24060100
  .word 0xac430024
  .word 0x24130001
  .word 0xac4b000c
  .word 0xac480014
  .word 0xac490018
  .word 0x0c148502
  .word 0xafa70000
  .word 0x0200202d
  .word 0x0c140e96
  .word 0x248500ff
  .word 0x24020006
  .word 0xae222aec
  .word 0x8e440000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26875580
  .word 0x0c1474c2
  .word 0x26a8ae38
  .word 0x5453fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x8c420008
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
// FUN_0051B5F0
asm u32 FUN_0051b5f0(int param_1,u64 *param_2)
{
  .set noreorder
  .word 0x24030024
  .word 0x3c020098
  .word 0x00832018
  .word 0x27bdff80
  .word 0x24425508
  .word 0xffb50060
  .word 0xffb20030
  .word 0x24420004
  .word 0xffbf0070
  .word 0x00a0a82d
  .word 0xffb40050
  .word 0x00829021
  .word 0xffb30040
  .word 0xffb10020
  .word 0xffb00010
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x24030003
  .word 0x10430022
  .word 0x3c130098
  .word 0x24020030
  .word 0x26635580
  .word 0x3c100098
  .word 0xac600018
  .word 0x261055c0
  .word 0xafa20000
  .word 0x0200202d
  .word 0xac600014
  .word 0x0000282d
  .word 0x24060100
  .word 0x0c148502
  .word 0x3c110078
  .word 0x3c140052
  .word 0x0200202d
  .word 0x248500ff
  .word 0x0c140e96
  .word 0x24100001
  .word 0x2402000a
  .word 0xae222aec
  .word 0x8e440000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x2688ae38
  .word 0x5450fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x0040182d
  .word 0x8c620008
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x68620013
  .word 0x6c62000c
  .word 0xb2a20007
  .word 0xb6a20000
  .word 0x8c620008
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
// FUN_0051B708
asm int FUN_0051b708(int param_1,int param_2,u32 param_3,int param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x24020024
  .word 0xffb00010
  .word 0x3c030098
  .word 0x00828018
  .word 0xffb10020
  .word 0x24715508
  .word 0xffb70080
  .word 0xffb60070
  .word 0x26220004
  .word 0xffb50060
  .word 0x00a0b82d
  .word 0xffb40050
  .word 0x0202a821
  .word 0xffb20030
  .word 0x00c0b02d
  .word 0xffbf0090
  .word 0x00e0a02d
  .word 0xffb30040
  .word 0x0100902d
  .word 0x0c1472b4
  .word 0x8ea40000
  .word 0x24030003
  .word 0x10430031
  .word 0x02302021
  .word 0x3c130098
  .word 0x0080102d
  .word 0x8c870010
  .word 0x8c450008
  .word 0x0040182d
  .word 0x8c66000c
  .word 0x26625580
  .word 0xac520024
  .word 0x24030030
  .word 0xae765580
  .word 0x3c100098
  .word 0xac450008
  .word 0x261055c0
  .word 0xac46000c
  .word 0x0200202d
  .word 0xac470010
  .word 0x0000282d
  .word 0xafa30000
  .word 0x24060100
  .word 0xac540004
  .word 0x3c110078
  .word 0xac400014
  .word 0x02a0902d
  .word 0xac400018
  .word 0x3c160052
  .word 0xac40001c
  .word 0x24150001
  .word 0x0c148502
  .word 0xac400020
  .word 0x0200202d
  .word 0x0c140e96
  .word 0x248500ff
  .word 0x24020001
  .word 0xae222aec
  .word 0x8e440000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x26c8ae38
  .word 0x5455fffa
  .word 0x8e440000
  .word 0x0c146b78
  .word 0x00000000
  .word 0x8c430008
  .word 0x24020001
  .word 0x10620003
  .word 0x3c020098
  .word 0x1000001c
  .word 0x0000102d
  .word 0x02e0802d
  .word 0x1a800018
  .word 0x24515640
  .word 0x3c020098
  .word 0x0280982d
  .word 0x24525580
  .word 0x00000000
  .word 0x8e450008
  .word 0x0220202d
  .word 0x2673ffff
  .word 0x02252821
  .word 0x0c140ee6
  .word 0x24a5ffff
  .word 0x8e450008
  .word 0x0200202d
  .word 0x02052821
  .word 0x0c140e96
  .word 0x24a5ffff
  .word 0x8e460008
  .word 0x0200202d
  .word 0x0c148494
  .word 0x0220282d
  .word 0x8e430008
  .word 0x02038021
  .word 0x1660ffee
  .word 0x02238821
  .word 0x0280102d
  .word 0xdfbf0090
  .word 0xdfb70080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd00a0
  .word 0x00000000
}
// FUN_0051B8D0
asm u64 FUN_0051b8d0(int param_1,u64 param_2,u32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x24030024
  .word 0x3c020098
  .word 0x00831818
  .word 0x24425508
  .word 0x00431021
  .word 0x08146dc2
  .word 0x8c480014
  .word 0x00000000
}
// FUN_0051B8F0
asm u64 FUN_0051b8f0(int param_1,u64 param_2,u32 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x24020024
  .word 0xffb00010
  .word 0x3c030098
  .word 0x00828018
  .word 0xffb20030
  .word 0x24725508
  .word 0xffb70080
  .word 0xffb60070
  .word 0x26420004
  .word 0xffb40050
  .word 0x00c0b82d
  .word 0xffb30040
  .word 0x0202b021
  .word 0xffbf00a0
  .word 0x00a0982d
  .word 0xffbe0090
  .word 0x00e0a02d
  .word 0xffb50060
  .word 0xffb10020
  .word 0x0c1472b4
  .word 0x8ec40000
  .word 0x24030003
  .word 0x14430003
  .word 0x02503021
  .word 0x1000003f
  .word 0x0000102d
  .word 0x26510008
  .word 0x00c0102d
  .word 0x02118821
  .word 0x0040182d
  .word 0x0040202d
  .word 0x8c680010
  .word 0x0040282d
  .word 0x8c890020
  .word 0x3c150098
  .word 0x8caa001c
  .word 0x240c0030
  .word 0x8ccb0014
  .word 0x3c100098
  .word 0x8e230000
  .word 0x261055c0
  .word 0x8c47000c
  .word 0x0200202d
  .word 0x26a25580
  .word 0xaeb75580
  .word 0xac430008
  .word 0x0000282d
  .word 0xac47000c
  .word 0x24060100
  .word 0xac480010
  .word 0x3c120078
  .word 0xac490014
  .word 0x3c1e0052
  .word 0xac4a0018
  .word 0x24170001
  .word 0xac4b0024
  .word 0xac530028
  .word 0xafac0000
  .word 0xac540004
  .word 0xac40001c
  .word 0x0c148502
  .word 0xac400020
  .word 0x0200202d
  .word 0x0c140e96
  .word 0x248500ff
  .word 0x8e250000
  .word 0x0260202d
  .word 0x00b41018
  .word 0x00532821
  .word 0x0c140e96
  .word 0x24a5ffff
  .word 0x24020002
  .word 0xae422aec
  .word 0x8ec40000
  .word 0x00000000
  .word 0x03a0302d
  .word 0x8e452aec
  .word 0x26a75580
  .word 0x0c1474c2
  .word 0x27c8ae38
  .word 0x5457fffa
  .word 0x8ec40000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x8c430008
  .word 0x0000102d
  .word 0x38630001
  .word 0x0283100a
  .word 0xdfbf00a0
  .word 0xdfbe0090
  .word 0xdfb70080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
}
// FUN_0051BA88
asm u64 FUN_0051ba88(int param_1,u32 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x24020024
  .word 0xffb00010
  .word 0x3c030098
  .word 0x00828018
  .word 0xffb10020
  .word 0x24715508
  .word 0xffb60070
  .word 0xffb40050
  .word 0x26220004
  .word 0xffb20030
  .word 0x00a0a02d
  .word 0xffbf0080
  .word 0x02029021
  .word 0xffb50060
  .word 0x00c0b02d
  .word 0xffb30040
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x24030003
  .word 0x14430003
  .word 0x02302821
  .word 0x10000032
  .word 0x0000102d
  .word 0x3c130098
  .word 0x00a0102d
  .word 0x24070030
  .word 0x0040182d
  .word 0x0040202d
  .word 0x8c68000c
  .word 0x3c100098
  .word 0x8c890010
  .word 0x261055c0
  .word 0x8ca30014
  .word 0x0200202d
  .word 0x8c460008
  .word 0x0000282d
  .word 0xae745580
  .word 0x26625580
  .word 0xac460008
  .word 0x3c110078
  .word 0xac430024
  .word 0x24060100
  .word 0xac48000c
  .word 0x3c150052
  .word 0xac490010
  .word 0x24140001
  .word 0xafa70000
  .word 0xac560004
  .word 0xac400014
  .word 0xac400018
  .word 0xac40001c
  .word 0x0c148502
  .word 0xac400020
  .word 0x0200202d
  .word 0x0c140e96
  .word 0x248500ff
  .word 0x2402000b
  .word 0xae222aec
  .word 0x8e440000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x26a8ae38
  .word 0x5454fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x8c430008
  .word 0x0000102d
  .word 0x38630001
  .word 0x02c3100a
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
  .word 0x00000000
}
// FUN_0051BBD8
asm bool FUN_0051bbd8(int param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x24020024
  .word 0xffb00010
  .word 0x3c030098
  .word 0x00828018
  .word 0xffb10020
  .word 0x24715508
  .word 0xffb40050
  .word 0xffb20030
  .word 0x26220004
  .word 0xffbf0070
  .word 0x00a0a02d
  .word 0xffb50060
  .word 0x02029021
  .word 0xffb30040
  .word 0x0c1472b4
  .word 0x8e440000
  .word 0x24030003
  .word 0x14430003
  .word 0x02302021
  .word 0x1000002f
  .word 0x0000102d
  .word 0x3c130098
  .word 0x0080102d
  .word 0x8c890010
  .word 0x0040182d
  .word 0x8c460008
  .word 0x8c68000c
  .word 0x26625580
  .word 0x24030001
  .word 0xac540020
  .word 0xac460008
  .word 0x24070030
  .word 0xac430004
  .word 0x3c100098
  .word 0xac48000c
  .word 0x261055c0
  .word 0xac490010
  .word 0x0200202d
  .word 0xafa70000
  .word 0x0000282d
  .word 0xae605580
  .word 0x24060100
  .word 0xac400014
  .word 0x3c110078
  .word 0xac400018
  .word 0x3c150052
  .word 0xac40001c
  .word 0x0c148502
  .word 0x24140001
  .word 0x0200202d
  .word 0x0c140e96
  .word 0x248500ff
  .word 0x24020009
  .word 0xae222aec
  .word 0x8e440000
  .word 0x03a0302d
  .word 0x8e252aec
  .word 0x26675580
  .word 0x0c1474c2
  .word 0x26a8ae38
  .word 0x5454fffa
  .word 0x8e440000
  .word 0x0c146b44
  .word 0x00000000
  .word 0x8c420008
  .word 0x38420001
  .word 0x2c420001
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
// FUN_0051BD10
asm u32 FUN_0051bd10(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x24020024
  .word 0xafa40004
  .word 0xffb00010
  .word 0x00828018
  .word 0xffb20030
  .word 0x3c020098
  .word 0xffb70080
  .word 0xffb60070
  .word 0x24525508
  .word 0xffb10020
  .word 0x00c0b02d
  .word 0xffbf00a0
  .word 0x02501021
  .word 0xffbe0090
  .word 0x00a0882d
  .word 0xffb50060
  .word 0x00e0b82d
  .word 0xffb40050
  .word 0xffb30040
  .word 0x0c1472b4
  .word 0x8c440004
  .word 0x24030003
  .word 0x14430003
  .word 0x02501821
  .word 0x10000066
  .word 0x0000102d
  .word 0x3c040001
  .word 0x8c620008
  .word 0x0220a82d
  .word 0x0082001a
  .word 0x00001812
  .word 0xafa30008
  .word 0x50400001
  .word 0x000001cd
  .word 0x1ae0005b
  .word 0x3c1e0098
  .word 0x8fa30004
  .word 0x3c020098
  .word 0x8fb40008
  .word 0x24525508
  .word 0x24110024
  .word 0x27d05580
  .word 0x00718818
  .word 0x02f4102a
  .word 0x02e2a00b
  .word 0x240a0030
  .word 0x3c020098
  .word 0x0000282d
  .word 0x245355c0
  .word 0x02511021
  .word 0x0260202d
  .word 0x0040182d
  .word 0x8c490008
  .word 0x8c67000c
  .word 0x0040302d
  .word 0x0040402d
  .word 0x8cc30010
  .word 0x8d020014
  .word 0x24060080
  .word 0xae030010
  .word 0xae090008
  .word 0x3c030098
  .word 0xae07000c
  .word 0x24635ec0
  .word 0xae020024
  .word 0xafaa0000
  .word 0xafd65580
  .word 0xae140004
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0x0c148502
  .word 0xae030028
  .word 0x0260202d
  .word 0x0c140e96
  .word 0x2485007f
  .word 0x3c020052
  .word 0x02519021
  .word 0x2448ae38
  .word 0x8e440004
  .word 0x24020011
  .word 0x3c030078
  .word 0x0200382d
  .word 0x24050011
  .word 0xac622aec
  .word 0x0c1474c2
  .word 0x03a0302d
  .word 0x0c146b78
  .word 0x00000000
  .word 0x8c430008
  .word 0x24020001
  .word 0x1462ffbb
  .word 0x3c050099
  .word 0x3c120098
  .word 0x26525ec0
  .word 0x24a5673f
  .word 0x0c140ee6
  .word 0x0240202d
  .word 0x1a800015
  .word 0x0000882d
  .word 0x02f49823
  .word 0x02d4b021
  .word 0x27d05580
  .word 0x02a0202d
  .word 0x8e060008
  .word 0x0240282d
  .word 0x0c148494
  .word 0x26310001
  .word 0x8e050008
  .word 0x02a0202d
  .word 0x02a52821
  .word 0x0c140e96
  .word 0x24a5ffff
  .word 0x8e020008
  .word 0x0234182a
  .word 0x02a2a821
  .word 0x1460fff1
  .word 0x02429021
  .word 0x10000004
  .word 0x0260b82d
  .word 0x02d4b021
  .word 0x02f49823
  .word 0x0260b82d
  .word 0x1ee0ffa8
  .word 0x8fa30004
  .word 0x24020001
  .word 0xdfbf00a0
  .word 0xdfbe0090
  .word 0xdfb70080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd00b0
}
// FUN_0051BF40
asm u64 FUN_0051bf40(int param_1,u64 param_2,u32 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x24020024
  .word 0xffb00010
  .word 0x3c030098
  .word 0x00828018
  .word 0xffb10020
  .word 0x24715508
  .word 0xffb60070
  .word 0xffb50060
  .word 0x26220004
  .word 0xffb40050
  .word 0x00c0a82d
  .word 0xffb30040
  .word 0x0202b021
  .word 0xffbf0080
  .word 0x00a0982d
  .word 0xffb20030
  .word 0x00e0a02d
  .word 0x0c1472b4
  .word 0x8ec40000
  .word 0x24030003
  .word 0x14430003
  .word 0x02303821
  .word 0x1000003e
  .word 0x0000102d
  .word 0x26320008
  .word 0x00e0102d
  .word 0x02129021
  .word 0x0040182d
  .word 0x8c4a000c
  .word 0x8c6c0010
  .word 0x0040202d
  .word 0x0040282d
  .word 0x8c8b0020
  .word 0x8ca9001c
  .word 0x3c060098
  .word 0x8ce80014
  .word 0x3c020098
  .word 0x8e430000
  .word 0x24d05580
  .word 0xacd55580
  .word 0x24425ec0
  .word 0x24070030
  .word 0xae030008
  .word 0xae0a000c
  .word 0x3c110098
  .word 0xae0c0010
  .word 0x263155c0
  .word 0xae0b0014
  .word 0x0220202d
  .word 0xae090018
  .word 0x0000282d
  .word 0xae080024
  .word 0x24060100
  .word 0xae02002c
  .word 0xafa70000
  .word 0xae140004
  .word 0xae00001c
  .word 0xae000020
  .word 0x0c148502
  .word 0xae130028
  .word 0x0220202d
  .word 0x0c140e96
  .word 0x2485007f
  .word 0x8e450000
  .word 0x0260202d
  .word 0x00b41018
  .word 0x00532821
  .word 0x0c140e96
  .word 0x24a5ffff
  .word 0x8ec40000
  .word 0x3c030078
  .word 0x24020010
  .word 0x3c080052
  .word 0x0200382d
  .word 0xac622aec
  .word 0x2508ae38
  .word 0x24050010
  .word 0x0c1474c2
  .word 0x03a0302d
  .word 0x0c146b78
  .word 0x00000000
  .word 0x8c430008
  .word 0x0000102d
  .word 0x38630001
  .word 0x0283100a
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
// FUN_0051C0C0
asm bool FUN_0051c0c0(int param_1)
{
  .set noreorder
  .word 0x24030024
  .word 0x27bdfff0
  .word 0x00832018
  .word 0x3c020098
  .word 0xffbf0000
  .word 0x24425508
  .word 0x00441021
  .word 0x0c1472b4
  .word 0x8c440004
  .word 0x38420003
  .word 0xdfbf0000
  .word 0x0002102b
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051C0F8
asm int FUN_0051c0f8(void)
{
  .set noreorder
  .word 0x3c020098
  .word 0x0000182d
  .word 0x24445508
  .word 0x00000000
  .word 0x8c820000
  .word 0x54400003
  .word 0x24630001
  .word 0x03e00008
  .word 0x0060102d
  .word 0x28620002
  .word 0x1440fff9
  .word 0x24840024
  .word 0x03e00008
  .word 0x2402ffff
}
// FUN_0051C130
asm long FUN_0051c130(u32 *param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffb10040
  .word 0xffb20050
  .word 0x0080882d
  .word 0xffbf0060
  .word 0x0c14703e
  .word 0xffb00030
  .word 0x0040902d
  .word 0x06400039
  .word 0x2402ffff
  .word 0x8e220000
  .word 0x3c09007c
  .word 0x8e260008
  .word 0x3c100098
  .word 0x8e28000c
  .word 0x261055c0
  .word 0x8e230004
  .word 0x24070002
  .word 0xafa20000
  .word 0x0200202d
  .word 0xafa6000c
  .word 0x0000282d
  .word 0xafa30008
  .word 0x24060100
  .word 0xafa80010
  .word 0x252ae690
  .word 0x69420007
  .word 0x6d420000
  .word 0x85430008
  .word 0xb3a2001b
  .word 0xb7a20014
  .word 0xa7a3001c
  .word 0xafa70004
  .word 0x8fa20000
  .word 0x34420001
  .word 0x0c148502
  .word 0xafa20000
  .word 0x0200282d
  .word 0x03a0202d
  .word 0x0c1471dc
  .word 0x24a60080
  .word 0x24030024
  .word 0x3c040098
  .word 0x02433018
  .word 0x24875508
  .word 0x00e61821
  .word 0x04410003
  .word 0xac620004
  .word 0x10000011
  .word 0x2402ffff
  .word 0x00c72021
  .word 0x24020001
  .word 0xac820000
  .word 0x00e61821
  .word 0xac60001c
  .word 0x0060102d
  .word 0xac400020
  .word 0x0040202d
  .word 0x24030200
  .word 0x0040282d
  .word 0xac830008
  .word 0x24020010
  .word 0xaca2000c
  .word 0x24034000
  .word 0xac830010
  .word 0x0240102d
  .word 0xdfbf0060
  .word 0xdfb20050
  .word 0xdfb10040
  .word 0xdfb00030
  .word 0x03e00008
  .word 0x27bd0070
}
// FUN_0051C250
asm bool FUN_0051c250(u32 param_1)
{
  .set noreorder
  .word 0x2c820002
  .word 0x14400003
  .word 0x24030024
  .word 0x03e00008
  .word 0x0000102d
  .word 0x3c020098
  .word 0x00831818
  .word 0x24425508
  .word 0x00621821
  .word 0x8c620000
  .word 0x03e00008
  .word 0x0002102b
}
// FUN_0051C280
asm bool FUN_0051c280(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb20020
  .word 0x0080902d
  .word 0xffbf0030
  .word 0xffb10010
  .word 0x0c147094
  .word 0xffb00000
  .word 0x14400003
  .word 0x24110024
  .word 0x1000000a
  .word 0x0000102d
  .word 0x3c100098
  .word 0x02518818
  .word 0x26105508
  .word 0x02111021
  .word 0x0c147228
  .word 0x8c440004
  .word 0x02308821
  .word 0x24020001
  .word 0xae200000
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0051C2E8
asm int FUN_0051c2e8(int param_1)
{
  .set noreorder
  .word 0x3c020098
  .word 0x0000182d
  .word 0x24455508
  .word 0x00000000
  .word 0x8ca20000
  .word 0x50400006
  .word 0x24630001
  .word 0x8ca20004
  .word 0x54440003
  .word 0x24630001
  .word 0x03e00008
  .word 0x0060102d
  .word 0x28620002
  .word 0x1440fff6
  .word 0x24a50024
  .word 0x03e00008
  .word 0x2402ffff
  .word 0x00000000
}
// FUN_0051C330
asm u32 FUN_0051c330(int param_1)
{
  .set noreorder
  .word 0x24020024
  .word 0x3c030098
  .word 0x00822018
  .word 0x24655508
  .word 0x00851021
  .word 0x8c430000
  .word 0x14600003
  .word 0x00a41821
  .word 0x03e00008
  .word 0x2402ffff
  .word 0x03e00008
  .word 0x8c620004
}
// FUN_0051C360
asm u32 FUN_0051c360(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c040099
  .word 0xffb00010
  .word 0x3c058000
  .word 0x3c100099
  .word 0xffbf0020
  .word 0x26076840
  .word 0x24846740
  .word 0xafa00000
  .word 0x34a51363
  .word 0x0000302d
  .word 0x24080090
  .word 0x00e0482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x8e026840
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0051C3B8
asm u32 FUN_0051c3b8(void)
{
  .set noreorder
  .word 0x27bdff40
  .word 0x24030001
  .word 0xffbe00a0
  .word 0xffbf00b0
  .word 0x3c1e0078
  .word 0xffb70090
  .word 0xffb60080
  .word 0xffb50070
  .word 0xffb40060
  .word 0xffb30050
  .word 0xffb20040
  .word 0xffb10030
  .word 0xffb00020
  .word 0x8fc22b00
  .word 0x14430003
  .word 0x3c170099
  .word 0x1000008b
  .word 0x24020001
  .word 0x0000202d
  .word 0x0c141a2a
  .word 0xaee07000
  .word 0x1000000b
  .word 0x3c110099
  .word 0x00000000
  .word 0x2402ffff
  .word 0x00000000
  .word 0x2463ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1462fffa
  .word 0x00000000
  .word 0x26306740
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a51300
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x0440005a
  .word 0x3c04007c
  .word 0x8e020024
  .word 0x1040ffed
  .word 0x3c030001
  .word 0x0c1470d8
  .word 0x00000000
  .word 0x0040802d
  .word 0x24030032
  .word 0x00101103
  .word 0x1043000c
  .word 0x3c04007c
  .word 0x0c141792
  .word 0x2484e6b8
  .word 0x3c04007c
  .word 0x320800ff
  .word 0x2484e6e0
  .word 0x24050003
  .word 0x24060020
  .word 0x0c141792
  .word 0x00103a03
  .word 0x1000005f
  .word 0x0000102d
  .word 0x1000000a
  .word 0x3c110099
  .word 0x3c030001
  .word 0x2402ffff
  .word 0x2463ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1462fffa
  .word 0x00000000
  .word 0x26306790
  .word 0x3c058000
  .word 0x0200202d
  .word 0x34a5131c
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04400032
  .word 0x3c04007c
  .word 0x8e020024
  .word 0x1040ffed
  .word 0x3c020099
  .word 0x3c138000
  .word 0x245667b8
  .word 0x0000902d
  .word 0x3673131e
  .word 0x26d50024
  .word 0x0000a02d
  .word 0x0280882d
  .word 0x1000000b
  .word 0x02a0802d
  .word 0x00000000
  .word 0x2402ffff
  .word 0x00000000
  .word 0x2463ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1462fffa
  .word 0x00000000
  .word 0x02362021
  .word 0x02532821
  .word 0x0c141c14
  .word 0x0000302d
  .word 0x04400016
  .word 0x3c04007c
  .word 0x8e020000
  .word 0x1040ffef
  .word 0x3c030001
  .word 0x26520001
  .word 0x26b50028
  .word 0x2a420002
  .word 0x1440ffe6
  .word 0x26940028
  .word 0x3c02007c
  .word 0x24030001
  .word 0x2442e710
  .word 0x2405007f
  .word 0xafa30008
  .word 0x03a0202d
  .word 0xafa50004
  .word 0x0c140c58
  .word 0xafa20014
  .word 0x04410007
  .word 0xaee27000
  .word 0x1000001b
  .word 0x0000102d
  .word 0x0c147562
  .word 0x2484e6a0
  .word 0x10000017
  .word 0x0000102d
  .word 0x3c020099
  .word 0x2403000f
  .word 0x24426fc0
  .word 0x2442003c
  .word 0xac400000
  .word 0x2463ffff
  .word 0x2442fffc
  .word 0x00000000
  .word 0x00000000
  .word 0x0461fffa
  .word 0x00000000
  .word 0x3c100099
  .word 0x3c04007c
  .word 0x26106f40
  .word 0x2484e720
  .word 0x0c147562
  .word 0x0200282d
  .word 0x0c1471c0
  .word 0x0200202d
  .word 0x24030001
  .word 0x24020001
  .word 0xafc32b00
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
}
// FUN_0051C658
asm u32 FUN_0051c658(void)
{
  .set noreorder
  .word 0x3c030078
  .word 0x27bdfff0
  .word 0x8c622b00
  .word 0x14400003
  .word 0xffbf0000
  .word 0x10000009
  .word 0x0000102d
  .word 0x3c020099
  .word 0xac602b00
  .word 0x8c447000
  .word 0x04800004
  .word 0x24020001
  .word 0x0c140c5c
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051C6A0
asm u32 FUN_0051c6a0(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020099
  .word 0xffb00010
  .word 0x3c040099
  .word 0x24506840
  .word 0x3c058000
  .word 0xffbf0020
  .word 0x24846740
  .word 0xafa00000
  .word 0x34a51305
  .word 0x0000302d
  .word 0x0200382d
  .word 0x24080090
  .word 0x0200482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430002
  .word 0x8e020004
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
}
// FUN_0051C700
asm u32 FUN_0051c700(u32 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020099
  .word 0xffb00010
  .word 0x3c058000
  .word 0x3c100099
  .word 0xffbf0020
  .word 0x26076840
  .word 0x34a51304
  .word 0xace40004
  .word 0x0000302d
  .word 0x24446740
  .word 0xafa00000
  .word 0x24080090
  .word 0x00e0482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410005
  .word 0x8e026840
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e740
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
// FUN_0051C770
asm u32 FUN_0051c770(u32 *param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x3c020078
  .word 0xffb30040
  .word 0xffb20030
  .word 0x00c0982d
  .word 0xffb00010
  .word 0x00a0902d
  .word 0x8c432b00
  .word 0x0080802d
  .word 0xffbf0060
  .word 0xffb40050
  .word 0x14600003
  .word 0xffb10020
  .word 0x10000036
  .word 0x0000102d
  .word 0x3c140099
  .word 0x0c140c68
  .word 0x8e847000
  .word 0x8e020000
  .word 0x3c070099
  .word 0x24f16840
  .word 0x26060014
  .word 0xace26840
  .word 0x26280014
  .word 0xae320028
  .word 0x0000282d
  .word 0x8e020004
  .word 0xae33002c
  .word 0xae220004
  .word 0x8e030008
  .word 0xae230008
  .word 0x8e02000c
  .word 0xae22000c
  .word 0x8e030010
  .word 0xae230010
  .word 0x00000000
  .word 0x00c51021
  .word 0x01052021
  .word 0x90430000
  .word 0x24a50001
  .word 0x28a20010
  .word 0xa0830000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x24e76840
  .word 0x3c058000
  .word 0x3c040099
  .word 0xafa00000
  .word 0x24846740
  .word 0x34a51301
  .word 0x0000302d
  .word 0x24080090
  .word 0x00e0482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410008
  .word 0x8e847000
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e760
  .word 0x0c140c60
  .word 0x8e847000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8e300024
  .word 0x0200102d
  .word 0xdfbf0060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0070
}
// FUN_0051C8A0
asm u32 FUN_0051c8a0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c030078
  .word 0xffb10020
  .word 0x8c622b00
  .word 0x0080882d
  .word 0xffbf0040
  .word 0xffb20030
  .word 0x14400003
  .word 0xffb00010
  .word 0x1000001f
  .word 0x0000102d
  .word 0x3c120099
  .word 0x0c140c68
  .word 0x8e447000
  .word 0x3c030099
  .word 0x3c040099
  .word 0x24706840
  .word 0x3c058000
  .word 0xac716840
  .word 0x24846740
  .word 0xafa00000
  .word 0x34a51302
  .word 0x0000302d
  .word 0x0200382d
  .word 0x24080090
  .word 0x0200482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410008
  .word 0x8e447000
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e780
  .word 0x0c140c60
  .word 0x8e447000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8e100004
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0051C960
asm u32 FUN_0051c960(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0xffb10020
  .word 0x0080902d
  .word 0x3c110099
  .word 0xffb00010
  .word 0x26246f40
  .word 0xffbf0040
  .word 0x0c140e96
  .word 0x24850080
  .word 0x0c1434e8
  .word 0x00000000
  .word 0x3c030099
  .word 0x26266f40
  .word 0x24656fc0
  .word 0x68c20007
  .word 0x6cc20000
  .word 0x68c4000f
  .word 0x6cc40008
  .word 0xb0a20007
  .word 0xb4a20000
  .word 0xb0a4000f
  .word 0xb4a40008
  .word 0x68c20017
  .word 0x6cc20010
  .word 0x68c4001f
  .word 0x6cc40018
  .word 0xb0a20017
  .word 0xb4a20010
  .word 0xb0a4001f
  .word 0xb4a40018
  .word 0x68c20027
  .word 0x6cc20020
  .word 0x68c4002f
  .word 0x6cc40028
  .word 0xb0a20027
  .word 0xb4a20020
  .word 0xb0a4002f
  .word 0xb4a40028
  .word 0x68c20037
  .word 0x6cc20030
  .word 0x68c4003f
  .word 0x6cc40038
  .word 0xb0a20037
  .word 0xb4a20030
  .word 0xb0a4003f
  .word 0xb4a40038
  .word 0x0c1434fc
  .word 0x24706fc0
  .word 0x00121880
  .word 0x24040001
  .word 0x00701821
  .word 0x8c620000
  .word 0x1444001f
  .word 0x2402fff4
  .word 0x3c110099
  .word 0x0c140c68
  .word 0x8e247000
  .word 0x3c030099
  .word 0x3c040099
  .word 0x24706840
  .word 0x3c058000
  .word 0xac726840
  .word 0x24846740
  .word 0xafa00000
  .word 0x34a51303
  .word 0x0000302d
  .word 0x0200382d
  .word 0x24080090
  .word 0x0200482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410008
  .word 0x8e247000
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e7a0
  .word 0x0c140c60
  .word 0x8e247000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8e100004
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0051CAD0
asm u32 FUN_0051cad0(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffb20020
  .word 0xffb00000
  .word 0x3c120099
  .word 0x0080802d
  .word 0xffb10010
  .word 0x26446f40
  .word 0xffbf0030
  .word 0x0c140e96
  .word 0x24850080
  .word 0x0c1434e8
  .word 0x00108080
  .word 0x3c030099
  .word 0x26466f40
  .word 0x24656fc0
  .word 0x68c20007
  .word 0x6cc20000
  .word 0x68c4000f
  .word 0x6cc40008
  .word 0xb0a20007
  .word 0xb4a20000
  .word 0xb0a4000f
  .word 0xb4a40008
  .word 0x68c20017
  .word 0x6cc20010
  .word 0x68c4001f
  .word 0x6cc40018
  .word 0xb0a20017
  .word 0xb4a20010
  .word 0xb0a4001f
  .word 0xb4a40018
  .word 0x68c20027
  .word 0x6cc20020
  .word 0x68c4002f
  .word 0x6cc40028
  .word 0xb0a20027
  .word 0xb4a20020
  .word 0xb0a4002f
  .word 0xb4a40028
  .word 0x68c20037
  .word 0x6cc20030
  .word 0x68c4003f
  .word 0x6cc40038
  .word 0xb0a20037
  .word 0xb4a20030
  .word 0xb0a4003f
  .word 0xb4a40038
  .word 0x0c1434fc
  .word 0x24716fc0
  .word 0x24040001
  .word 0x02118021
  .word 0x24020003
  .word 0x8e030000
  .word 0xdfbf0030
  .word 0x38630001
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0x0083100a
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
// FUN_0051CBC8
asm u32 FUN_0051cbc8(u32 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0xffb00010
  .word 0x3c120099
  .word 0x0080802d
  .word 0xffb10020
  .word 0x8e447000
  .word 0xffbf0040
  .word 0x0c140c68
  .word 0x00000000
  .word 0x3c030099
  .word 0x3c040099
  .word 0x24716840
  .word 0x3c058000
  .word 0xac706840
  .word 0x24846740
  .word 0xafa00000
  .word 0x34a51315
  .word 0x0000302d
  .word 0x0220382d
  .word 0x24080090
  .word 0x0220482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410008
  .word 0x8e447000
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e7c0
  .word 0x0c140c60
  .word 0x8e447000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8e300004
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0051CC78
asm u32 FUN_0051cc78(u32 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0xffb00010
  .word 0x3c120099
  .word 0x0080802d
  .word 0xffb10020
  .word 0x8e447000
  .word 0xffbf0040
  .word 0x0c140c68
  .word 0x00000000
  .word 0x3c030099
  .word 0x3c040099
  .word 0x24716840
  .word 0x3c058000
  .word 0xac706840
  .word 0x24846740
  .word 0xafa00000
  .word 0x34a51316
  .word 0x0000302d
  .word 0x0220382d
  .word 0x24080090
  .word 0x0220482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410008
  .word 0x8e447000
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e7e0
  .word 0x0c140c60
  .word 0x8e447000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8e300004
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0051CD28
asm u32 FUN_0051cd28(u32 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0xffb00010
  .word 0x3c120099
  .word 0x0080802d
  .word 0xffb10020
  .word 0x8e447000
  .word 0xffbf0040
  .word 0x0c140c68
  .word 0x00000000
  .word 0x3c030099
  .word 0x3c040099
  .word 0x24716840
  .word 0x3c058000
  .word 0xac706840
  .word 0x24846740
  .word 0xafa00000
  .word 0x34a51317
  .word 0x0000302d
  .word 0x0220382d
  .word 0x24080090
  .word 0x0220482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04410008
  .word 0x8e447000
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e800
  .word 0x0c140c60
  .word 0x8e447000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8e300004
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}
// FUN_0051CDD8
asm u32 FUN_0051cdd8(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffb20030
  .word 0xffb00010
  .word 0x3c120099
  .word 0x0080802d
  .word 0xffb10020
  .word 0x8e447000
  .word 0xffbf0040
  .word 0x0c140c68
  .word 0x00000000
  .word 0x3c030099
  .word 0x24020002
  .word 0x24716840
  .word 0x3c040099
  .word 0xae220008
  .word 0x3c058000
  .word 0xafa00000
  .word 0x24846740
  .word 0x34a5131d
  .word 0x0000302d
  .word 0x8e020008
  .word 0x0220382d
  .word 0x24080090
  .word 0x0220482d
  .word 0xae220010
  .word 0x240a0090
  .word 0x0000582d
  .word 0x8e02000c
  .word 0x0c141c8c
  .word 0xae220014
  .word 0x04410008
  .word 0x8e447000
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e800
  .word 0x0c140c60
  .word 0x8e447000
  .word 0x10000004
  .word 0x2402ffff
  .word 0x0c140c60
  .word 0x8e300004
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd0050
}
// FUN_0051CE98
asm int FUN_0051ce98(u32 param_1,u32 param_2,int *param_3,u8 *param_4,int *param_5
                ,int param_6)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffb60070
  .word 0xffb10020
  .word 0x3c160099
  .word 0x0080882d
  .word 0xffb70080
  .word 0xffb50060
  .word 0x0120b82d
  .word 0xffb40050
  .word 0x0100a82d
  .word 0xffb30040
  .word 0x00e0a02d
  .word 0xffb00010
  .word 0x00c0982d
  .word 0x8ec47000
  .word 0xffb20030
  .word 0xffbf0090
  .word 0x0c140c68
  .word 0x00a0802d
  .word 0x3c070099
  .word 0xacf16840
  .word 0x24f26840
  .word 0xae500004
  .word 0x8e620000
  .word 0xae420008
  .word 0x8ea30000
  .word 0xae43000c
  .word 0x8e620000
  .word 0x1840000f
  .word 0x0000282d
  .word 0x26460010
  .word 0x3c080099
  .word 0x02851021
  .word 0x00000000
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0xa0830000
  .word 0x8e620000
  .word 0x00a2102a
  .word 0x1440fff9
  .word 0x02851021
  .word 0x10000003
  .word 0x24e76840
  .word 0x3c080099
  .word 0x24e76840
  .word 0x3c058000
  .word 0x25046740
  .word 0xafa00000
  .word 0x34a51318
  .word 0x0000302d
  .word 0x24080090
  .word 0x00e0482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430008
  .word 0x8e500110
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e828
  .word 0x0c140c60
  .word 0x8ec47000
  .word 0x10000018
  .word 0x0000102d
  .word 0x06000013
  .word 0x00000000
  .word 0x8e420008
  .word 0xae620000
  .word 0x8e43000c
  .word 0xaea30000
  .word 0x8e42000c
  .word 0x1840000b
  .word 0x0000282d
  .word 0x26460090
  .word 0x00c51021
  .word 0x02e52021
  .word 0x90430000
  .word 0x24a50001
  .word 0xa0830000
  .word 0x8e42000c
  .word 0x00a2102a
  .word 0x1440fff9
  .word 0x00c51021
  .word 0x8e500110
  .word 0x0c140c60
  .word 0x8ec47000
  .word 0x0200102d
  .word 0xdfbf0090
  .word 0xdfb70080
  .word 0xdfb60070
  .word 0xdfb50060
  .word 0xdfb40050
  .word 0xdfb30040
  .word 0xdfb20030
  .word 0xdfb10020
  .word 0xdfb00010
  .word 0x03e00008
  .word 0x27bd00a0
  .word 0x00000000
}
// FUN_0051D028
asm int FUN_0051d028(u32 param_1,u32 param_2,int *param_3,u8 *param_4)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffb50060
  .word 0xffb10020
  .word 0x3c150099
  .word 0x0080882d
  .word 0xffb40050
  .word 0xffb30040
  .word 0x00e0a02d
  .word 0xffb00010
  .word 0x00c0982d
  .word 0x8ea47000
  .word 0xffb20030
  .word 0xffbf0070
  .word 0x0c140c68
  .word 0x00a0802d
  .word 0x3c070099
  .word 0xacf16840
  .word 0x24f26840
  .word 0xae500004
  .word 0x8e620000
  .word 0xae420008
  .word 0x8e630000
  .word 0x1860000f
  .word 0x0000282d
  .word 0x2646000c
  .word 0x3c080099
  .word 0x02851021
  .word 0x00000000
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0xa0830000
  .word 0x8e620000
  .word 0x00a2102a
  .word 0x1440fff9
  .word 0x02851021
  .word 0x10000003
  .word 0x24e76840
  .word 0x3c080099
  .word 0x24e76840
  .word 0x3c058000
  .word 0x25046740
  .word 0xafa00000
  .word 0x34a51319
  .word 0x0000302d
  .word 0x24080090
  .word 0x00e0482d
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430008
  .word 0x8e50008c
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e848
  .word 0x0c140c60
  .word 0x8ea47000
  .word 0x10000009
  .word 0x0000102d
  .word 0x06000004
  .word 0x00000000
  .word 0x8e420008
  .word 0xae620000
  .word 0x8e50008c
  .word 0x0c140c60
  .word 0x8ea47000
  .word 0x0200102d
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
// FUN_0051D158
asm u32 FUN_0051d158(u32 param_1,u32 param_2,int *param_3,u8 *param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb40050
  .word 0xffb30040
  .word 0x0080a02d
  .word 0xffb20030
  .word 0x00e0982d
  .word 0xffb00010
  .word 0xffbf0080
  .word 0x00c0802d
  .word 0xffb60070
  .word 0xffb50060
  .word 0xffb10020
  .word 0x8e030000
  .word 0x28620081
  .word 0x14400007
  .word 0x00a0902d
  .word 0x3c04007c
  .word 0x0060282d
  .word 0x0c147562
  .word 0x2484e868
  .word 0x1000004d
  .word 0x0000102d
  .word 0x3c150099
  .word 0x3c110078
  .word 0x0c140c68
  .word 0x8ea47000
  .word 0x8e222b04
  .word 0x0220402d
  .word 0x24420001
  .word 0x28430002
  .word 0x14600002
  .word 0xae222b04
  .word 0xae202b04
  .word 0x8e232b04
  .word 0x240400c0
  .word 0x3c160099
  .word 0x00641818
  .word 0x26c26dc0
  .word 0x00622021
  .word 0xac940000
  .word 0xac920004
  .word 0x8e020000
  .word 0xac820008
  .word 0x8e030000
  .word 0x1860000f
  .word 0x0000282d
  .word 0x2486000c
  .word 0x3c070099
  .word 0x02651021
  .word 0x00000000
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0xa0830000
  .word 0x8e020000
  .word 0x00a2102a
  .word 0x1440fff9
  .word 0x02651021
  .word 0x10000003
  .word 0x8d042b04
  .word 0x3c070099
  .word 0x8d042b04
  .word 0x24120028
  .word 0x24f067b8
  .word 0x00922018
  .word 0x0c141d0c
  .word 0x00902021
  .word 0x24030001
  .word 0x14430004
  .word 0x8e252b04
  .word 0x3c04007c
  .word 0x10000011
  .word 0x2484e898
  .word 0x240700c0
  .word 0x26c26dc0
  .word 0xafa00000
  .word 0x00a73818
  .word 0x00b21818
  .word 0x24060001
  .word 0x24080090
  .word 0x240a0090
  .word 0x0000582d
  .word 0x00e23821
  .word 0x00702021
  .word 0x0c141c8c
  .word 0x00e0482d
  .word 0x04410008
  .word 0x3c04007c
  .word 0x2484e8b8
  .word 0x0c147562
  .word 0x00000000
  .word 0x0c140c60
  .word 0x8ea47000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8ea47000
  .word 0x24020001
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
// FUN_0051D308
asm u32 FUN_0051d308(u32 param_1,u32 param_2,int *param_3,u8 *param_4,
            u64 param_5)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb50060
  .word 0xffb40050
  .word 0x0100a82d
  .word 0xffb30040
  .word 0x00e0a02d
  .word 0xffb10020
  .word 0x0080982d
  .word 0xffb00010
  .word 0xffbf0080
  .word 0x00c0802d
  .word 0xffb60070
  .word 0xffb20030
  .word 0x8e030000
  .word 0x28620481
  .word 0x14400007
  .word 0x00a0882d
  .word 0x3c04007c
  .word 0x0060282d
  .word 0x0c147562
  .word 0x2484e8d8
  .word 0x10000036
  .word 0x0000102d
  .word 0x3c120099
  .word 0x3c160099
  .word 0x0c140c68
  .word 0x8e447000
  .word 0x0c141d0c
  .word 0x26c46790
  .word 0x24030001
  .word 0x14430006
  .word 0x3c070099
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e908
  .word 0x10000021
  .word 0x00000000
  .word 0xacf36900
  .word 0x24e46900
  .word 0xac910004
  .word 0x8e020000
  .word 0xac820008
  .word 0x8e030000
  .word 0x1860000c
  .word 0x0000282d
  .word 0x2486000c
  .word 0x02851021
  .word 0x00000000
  .word 0x00c52021
  .word 0x90430000
  .word 0x24a50001
  .word 0xa0830000
  .word 0x8e020000
  .word 0x00a2102a
  .word 0x1440fff9
  .word 0x02851021
  .word 0x24e76900
  .word 0x3c058000
  .word 0x26c46790
  .word 0x02a0582d
  .word 0xafa00000
  .word 0x34a5131c
  .word 0x24060001
  .word 0x24080490
  .word 0x00e0482d
  .word 0x0c141c8c
  .word 0x240a0490
  .word 0x04410005
  .word 0x00000000
  .word 0x0c140c60
  .word 0x8e447000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c140c60
  .word 0x8e447000
  .word 0x24020001
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
// FUN_0051D460
asm int FUN_0051d460(u32 param_1,u32 param_2,int *param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffb40050
  .word 0xffb10020
  .word 0x3c140099
  .word 0x0080882d
  .word 0xffb50060
  .word 0xffb30040
  .word 0x00e0a82d
  .word 0xffb00010
  .word 0x00c0982d
  .word 0x8e847000
  .word 0xffb20030
  .word 0xffbf0070
  .word 0x0c140c68
  .word 0x00a0802d
  .word 0x3c030099
  .word 0x3c040099
  .word 0x24726840
  .word 0xac716840
  .word 0xae500004
  .word 0x3c058000
  .word 0xafa00000
  .word 0x24846740
  .word 0x34a5131a
  .word 0x0000302d
  .word 0x8e620000
  .word 0x0240382d
  .word 0x24080090
  .word 0x0240482d
  .word 0xae420008
  .word 0x240a0090
  .word 0x0c141c8c
  .word 0x0000582d
  .word 0x04430008
  .word 0x8e50008c
  .word 0x3c04007c
  .word 0x0c147562
  .word 0x2484e928
  .word 0x0c140c60
  .word 0x8e847000
  .word 0x10000017
  .word 0x0000102d
  .word 0x06000012
  .word 0x00000000
  .word 0x8e430008
  .word 0xae630000
  .word 0x8e420008
  .word 0x1840000c
  .word 0x0000282d
  .word 0x2646000c
  .word 0x00c51021
  .word 0x00000000
  .word 0x02a52021
  .word 0x90430000
  .word 0x24a50001
  .word 0xa0830000
  .word 0x8e420008
  .word 0x00a2102a
  .word 0x1440fff9
  .word 0x00c51021
  .word 0x8e50008c
  .word 0x0c140c60
  .word 0x8e847000
  .word 0x0200102d
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
// FUN_0051D588
void FUN_0051d588(int param_1,...)

{
  volatile char scratch[0x30];

  (void)scratch;
}
#pragma schedule off
// FUN_0051D5B0
asm u32 FUN_0051d5b0(long param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x24a50001
  .word 0xffb10010
  .word 0x0080102d
  .word 0xffb20020
  .word 0x3c110078
  .word 0xae252b24
  .word 0x3c120078
  .word 0xffbf0040
  .word 0xffb30030
  .word 0xffb00000
  .word 0x14400003
  .word 0xae462b28
  .word 0x1000002a
  .word 0x2402ffff
  .word 0x8e252b24
  .word 0x2413000c
  .word 0x3c100078
  .word 0x0040202d
  .word 0x00b30018
  .word 0x00002812
  .word 0x0c147846
  .word 0xae022b18
  .word 0x8e092b18
  .word 0x3c028000
  .word 0x34425010
  .word 0x3c040078
  .word 0xad220000
  .word 0x3c03001c
  .word 0xac832b30
  .word 0x3c08001b
  .word 0x3508aff0
  .word 0x8e422b28
  .word 0x10400004
  .word 0x3c020020
  .word 0x3c08001f
  .word 0xac822b30
  .word 0x3508aff0
  .word 0xad280004
  .word 0x3c020078
  .word 0xac482b2c
  .word 0x3c050078
  .word 0x24a22b38
  .word 0x3c060078
  .word 0x8e232b24
  .word 0x3c070078
  .word 0xac480004
  .word 0x24045010
  .word 0x00731818
  .word 0xaca42b38
  .word 0xacc92b1c
  .word 0x0000102d
  .word 0xad200008
  .word 0x2463fff4
  .word 0x01231821
  .word 0xace32b20
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x3c030078
  .word 0x2406000c
  .word 0x8c652b24
  .word 0x3c020078
  .word 0x27bdfff0
  .word 0x8c442b18
  .word 0x00a60018
  .word 0xffbf0000
  .word 0x0c147846
  .word 0x00002812
  .word 0x3c020078
  .word 0x3c030078
  .word 0xac402b20
  .word 0xdfbf0000
  .word 0x0000102d
  .word 0xac602b1c
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_0051D6F8
asm u32 FUN_0051d6f8(int param_1)
{
  .set noreorder
  .word 0x3c0c0078
  .word 0x3c02ffff
  .word 0x2484000f
  .word 0x3442fff0
  .word 0x8d882b18
  .word 0x00825824
  .word 0x0000482d
  .word 0x10000004
  .word 0x3c0d0078
  .word 0x00000000
  .word 0x1100003a
  .word 0x00000000
  .word 0x8d050000
  .word 0x04a10035
  .word 0x0100302d
  .word 0x8d060004
  .word 0x14cb0003
  .word 0x0166102b
  .word 0x1000002f
  .word 0x0100482d
  .word 0x1040002d
  .word 0x240affff
  .word 0x3c090078
  .word 0x8d222b24
  .word 0x2442ffff
  .word 0x18400015
  .word 0x0000382d
  .word 0x8d822b18
  .word 0x8c430000
  .word 0x14600004
  .word 0x00000000
  .word 0x1000000f
  .word 0x0000502d
  .word 0x00000000
  .word 0x8d222b24
  .word 0x24e70001
  .word 0x2442ffff
  .word 0x00e2102a
  .word 0x10400008
  .word 0x2402000c
  .word 0x8d842b18
  .word 0x00e21018
  .word 0x00441021
  .word 0x8c430000
  .word 0x1460fff5
  .word 0x00000000
  .word 0x00e0502d
  .word 0x05400010
  .word 0x2404000c
  .word 0x8d832b18
  .word 0x01442018
  .word 0x8d070008
  .word 0x00ab2821
  .word 0x3c028000
  .word 0x00a22825
  .word 0x00cb3023
  .word 0x0100482d
  .word 0x00641821
  .word 0xac650000
  .word 0xac660004
  .word 0xac670008
  .word 0xad030008
  .word 0x10000003
  .word 0xad0b0004
  .word 0x0100482d
  .word 0xad2b0004
  .word 0x0100302d
  .word 0x1120ffc6
  .word 0x8cc80008
  .word 0x5520002d
  .word 0x8d230000
  .word 0x25a32b38
  .word 0x8c620004
  .word 0x004b102b
  .word 0x14400025
  .word 0x3c050078
  .word 0x240affff
  .word 0x8ca22b24
  .word 0x2442ffff
  .word 0x0122102a
  .word 0x10400014
  .word 0x0000382d
  .word 0x8d822b18
  .word 0x8c430000
  .word 0x14600003
  .word 0x00000000
  .word 0x1000000e
  .word 0x0000502d
  .word 0x8ca22b24
  .word 0x24e70001
  .word 0x2442ffff
  .word 0x00e2102a
  .word 0x10400008
  .word 0x2402000c
  .word 0x8d842b18
  .word 0x00e21018
  .word 0x00441021
  .word 0x8c430000
  .word 0x1460fff5
  .word 0x00000000
  .word 0x00e0502d
  .word 0x0540000a
  .word 0x2402000c
  .word 0x8d832b18
  .word 0x01421018
  .word 0x8da52b38
  .word 0x00624821
  .word 0xad200008
  .word 0xad250000
  .word 0xad2b0004
  .word 0x10000003
  .word 0xacc90008
  .word 0x03e00008
  .word 0x2402ffff
  .word 0x8d230000
  .word 0x3c027fff
  .word 0x3442ffff
  .word 0x8d240004
  .word 0x00621824
  .word 0xad230000
  .word 0x00642021
  .word 0x8da22b38
  .word 0x0044102b
  .word 0x10400006
  .word 0x25a52b38
  .word 0x3c030078
  .word 0xada42b38
  .word 0x8c622b30
  .word 0x00441023
  .word 0xaca20004
  .word 0x03e00008
  .word 0x8d220000
  .word 0x1080004d
  .word 0x3c0a0078
  .word 0x3c038000
  .word 0x8d452b18
  .word 0x00a0302d
  .word 0x8ca20000
  .word 0x54440004
  .word 0x00a0302d
  .word 0x00431025
  .word 0x10000004
  .word 0xaca20000
  .word 0x8ca50008
  .word 0x54a0fff9
  .word 0x8ca20000
  .word 0x10c5000e
  .word 0x00000000
  .word 0x8cc20000
  .word 0x0441000b
  .word 0x00000000
  .word 0x8cc20004
  .word 0x8ca30004
  .word 0x8ca40008
  .word 0x00431021
  .word 0xacc20004
  .word 0xacc40008
  .word 0xaca00008
  .word 0xaca00004
  .word 0xaca00000
  .word 0x00c0282d
  .word 0x10a00024
  .word 0x8d432b18
  .word 0x8ca70008
  .word 0x10e0000d
  .word 0x00000000
  .word 0x8ce20000
  .word 0x0441000a
  .word 0x00e0302d
  .word 0x8ca20004
  .word 0x8ce30004
  .word 0x8cc40008
  .word 0x00431021
  .word 0xaca20004
  .word 0xaca40008
  .word 0xacc00008
  .word 0xace00004
  .word 0xace00000
  .word 0x10a00012
  .word 0x3c027fff
  .word 0x8ca30000
  .word 0x3442ffff
  .word 0x3c080078
  .word 0x00623024
  .word 0x8ca70004
  .word 0x8d032b38
  .word 0x00c71021
  .word 0x14430009
  .word 0x25092b38
  .word 0x8d220004
  .word 0x3c030078
  .word 0x8c642b30
  .word 0x00e21021
  .word 0xaca20004
  .word 0x00862023
  .word 0xad240004
  .word 0xad062b38
  .word 0x8d432b18
  .word 0x8c620000
  .word 0x0441000a
  .word 0x00000000
  .word 0x8c620008
  .word 0x14400007
  .word 0x3c020078
  .word 0x3c030078
  .word 0x8c452b2c
  .word 0x24642b38
  .word 0x24025010
  .word 0xac622b38
  .word 0xac850004
  .word 0x03e00008
  .word 0x00000000
}
#pragma push
#pragma schedule on
// FUN_0051DA48
u64 FUN_0051da48(void)
{
  return 0;
}
#pragma pop
// FUN_0051DA50
asm u64 FUN_0051da50(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x0c144a1a
  .word 0x0080802d
  .word 0x0c144b52
  .word 0x0200202d
  .word 0x0040802d
  .word 0x24040001
  .word 0x34058010
  .word 0x24060980
  .word 0x0c144a70
  .word 0x24073fff
  .word 0x24040001
  .word 0x34058010
  .word 0x24060a80
  .word 0x0c144a70
  .word 0x24073fff
  .word 0x24040001
  .word 0x34058010
  .word 0x24060981
  .word 0x0c144a70
  .word 0x0000382d
  .word 0x24040001
  .word 0x34058010
  .word 0x24060a81
  .word 0x0c144a70
  .word 0x0000382d
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x03e00008
  .word 0x0000102d
}
#pragma schedule on
// FUN_0051DAE0
u64 FUN_0051dae0(void)

{
  FUN_00512e48();
  return 0;
}
#pragma schedule off
// FUN_0051DB00
asm void FUN_0051db00(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                 u32 param_5)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb10010
  .word 0x3c110078
  .word 0xffb20020
  .word 0xffb00000
  .word 0x0080902d
  .word 0x26302b80
  .word 0xffa50088
  .word 0xffa60090
  .word 0x0200202d
  .word 0xffbf0030
  .word 0x0000282d
  .word 0xffa70098
  .word 0x24060040
  .word 0xffa800a0
  .word 0x26100004
  .word 0xffa900a8
  .word 0xffaa00b0
  .word 0x0c148502
  .word 0xffab00b8
  .word 0xae202b80
  .word 0x24020002
  .word 0xae020000
  .word 0x26262b80
  .word 0x8fa20088
  .word 0x26100004
  .word 0xae120000
  .word 0x24040001
  .word 0x26100004
  .word 0x340590f0
  .word 0x8fa30090
  .word 0x24070040
  .word 0xae020000
  .word 0x26100004
  .word 0x8fa80098
  .word 0xae030000
  .word 0x26100004
  .word 0x8fa200a0
  .word 0xae080000
  .word 0x0c144a70
  .word 0xae020004
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}
// FUN_0051DBC0
asm void FUN_0051dbc0(u32 param_1,u32 param_2,u32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffb10010
  .word 0x3c110078
  .word 0xffb20020
  .word 0xffb00000
  .word 0x0080902d
  .word 0x26302b80
  .word 0xffa50088
  .word 0xffa60090
  .word 0x0200202d
  .word 0xffbf0030
  .word 0x0000282d
  .word 0xffa70098
  .word 0x24060040
  .word 0xffa800a0
  .word 0x26100004
  .word 0xffa900a8
  .word 0xffaa00b0
  .word 0x0c148502
  .word 0xffab00b8
  .word 0xae202b80
  .word 0x2402000a
  .word 0xae020000
  .word 0x26262b80
  .word 0x8fa20088
  .word 0x26100004
  .word 0xae120000
  .word 0x24040001
  .word 0x26100004
  .word 0x340590f0
  .word 0x8fa30090
  .word 0x24070040
  .word 0xae020000
  .word 0x8fa20098
  .word 0x26100004
  .word 0xae030000
  .word 0x0c144a70
  .word 0xae020004
  .word 0xdfbf0030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00c0
}
// FUN_0051DC70
asm void FUN_0051dc70(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                 u32 param_5,u32 param_6)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb20020
  .word 0x3c120078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x0080982d
  .word 0x26502bc0
  .word 0xffa50098
  .word 0xffa600a0
  .word 0x0200202d
  .word 0xffb10010
  .word 0x0000282d
  .word 0xffbf0040
  .word 0x24060040
  .word 0xffa700a8
  .word 0x0200882d
  .word 0xffa800b0
  .word 0x26100004
  .word 0xffa900b8
  .word 0xffaa00c0
  .word 0x0c148502
  .word 0xffab00c8
  .word 0x3c020100
  .word 0x8fa30098
  .word 0xae422bc0
  .word 0x0220302d
  .word 0xae000000
  .word 0x24040001
  .word 0x26100004
  .word 0x340590f0
  .word 0x8fa200a0
  .word 0x24070040
  .word 0xae130000
  .word 0x26100004
  .word 0x8fa800a8
  .word 0xae030000
  .word 0x8fa300b0
  .word 0x26100004
  .word 0xae020000
  .word 0x8fa200b8
  .word 0x26100004
  .word 0xae080000
  .word 0x26100004
  .word 0xae020004
  .word 0x0c144a70
  .word 0xae030000
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x00000000
}
// FUN_0051DD48
asm void FUN_0051dd48(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb20020
  .word 0x3c120078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x0080982d
  .word 0x26502bc0
  .word 0xffa50098
  .word 0xffa600a0
  .word 0x0200202d
  .word 0xffb10010
  .word 0x0000282d
  .word 0xffbf0040
  .word 0x24060040
  .word 0xffa700a8
  .word 0x0200882d
  .word 0xffa800b0
  .word 0x26100004
  .word 0xffa900b8
  .word 0xffaa00c0
  .word 0x0c148502
  .word 0xffab00c8
  .word 0x3c020100
  .word 0x24030001
  .word 0xae422bc0
  .word 0x0220302d
  .word 0xae030000
  .word 0x24040001
  .word 0x26100004
  .word 0x340590f0
  .word 0x8fa20098
  .word 0x24070040
  .word 0xae130000
  .word 0x0c144a70
  .word 0xae020004
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00d0
}
// FUN_0051DDF0
asm void FUN_0051ddf0(u32 param_1,u32 param_2,u32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb20020
  .word 0x3c120078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x0080982d
  .word 0x26502c00
  .word 0xffa50098
  .word 0xffa600a0
  .word 0x0200202d
  .word 0xffb10010
  .word 0x0000282d
  .word 0xffbf0040
  .word 0x24060040
  .word 0xffa700a8
  .word 0x0200882d
  .word 0xffa800b0
  .word 0x26100004
  .word 0xffa900b8
  .word 0xffaa00c0
  .word 0x0c148502
  .word 0xffab00c8
  .word 0x3c020400
  .word 0x8fa70098
  .word 0xae422c00
  .word 0x0220302d
  .word 0xae000000
  .word 0x24040001
  .word 0x26100004
  .word 0x340590f0
  .word 0x8fa300a0
  .word 0xae130000
  .word 0x26100004
  .word 0x8fa200a8
  .word 0xae070000
  .word 0x26100004
  .word 0x24070040
  .word 0xae020004
  .word 0x0c144a70
  .word 0xae030000
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x00000000
}
// FUN_0051DEB0
asm void FUN_0051deb0(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb20020
  .word 0x3c120078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x0080982d
  .word 0x26502c00
  .word 0xffa50098
  .word 0xffa600a0
  .word 0x0200202d
  .word 0xffb10010
  .word 0x0000282d
  .word 0xffbf0040
  .word 0x24060040
  .word 0xffa700a8
  .word 0x0200882d
  .word 0xffa800b0
  .word 0x26100004
  .word 0xffa900b8
  .word 0xffaa00c0
  .word 0x0c148502
  .word 0xffab00c8
  .word 0x3c020400
  .word 0x24030001
  .word 0xae422c00
  .word 0x0220302d
  .word 0xae030000
  .word 0x24040001
  .word 0x26100004
  .word 0x340590f0
  .word 0x8fa20098
  .word 0x24070040
  .word 0xae130000
  .word 0x0c144a70
  .word 0xae020004
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00d0
}
// FUN_0051DF58
asm void FUN_0051df58(u32 param_1,u32 param_2,u32 param_3,u32 param_4,
                 u32 param_5)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb20020
  .word 0x3c120078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x0080982d
  .word 0x26502c00
  .word 0xffa50098
  .word 0xffa600a0
  .word 0x0200202d
  .word 0xffb10010
  .word 0x0000282d
  .word 0xffbf0040
  .word 0x24060040
  .word 0xffa700a8
  .word 0x0200882d
  .word 0xffa800b0
  .word 0x26100004
  .word 0xffa900b8
  .word 0xffaa00c0
  .word 0x0c148502
  .word 0xffab00c8
  .word 0x3c020400
  .word 0x24030002
  .word 0xae422c00
  .word 0x0220302d
  .word 0xae030000
  .word 0x24040001
  .word 0x26100004
  .word 0x340590f0
  .word 0x8fa20098
  .word 0x24070040
  .word 0xae130000
  .word 0x26100004
  .word 0x8fa800a0
  .word 0xae020000
  .word 0x26100004
  .word 0x8fa300a8
  .word 0xae080000
  .word 0x26100004
  .word 0x8fa200b0
  .word 0xae030000
  .word 0x0c144a70
  .word 0xae020004
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x00000000
}
// FUN_0051E028
asm void FUN_0051e028(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffb20020
  .word 0x3c120078
  .word 0xffb30030
  .word 0xffb00000
  .word 0x0080982d
  .word 0x26502c00
  .word 0xffa50098
  .word 0xffa600a0
  .word 0x0200202d
  .word 0xffb10010
  .word 0x0000282d
  .word 0xffbf0040
  .word 0x24060040
  .word 0xffa700a8
  .word 0x0200882d
  .word 0xffa800b0
  .word 0x26100004
  .word 0xffa900b8
  .word 0xffaa00c0
  .word 0x0c148502
  .word 0xffab00c8
  .word 0x3c020400
  .word 0x24030003
  .word 0xae422c00
  .word 0x0220302d
  .word 0xae030000
  .word 0x24040001
  .word 0x8fa30098
  .word 0x26100004
  .word 0xae130000
  .word 0x340590f0
  .word 0x26100004
  .word 0x24070040
  .word 0x8fa200a0
  .word 0xae030000
  .word 0x0c144a70
  .word 0xae020004
  .word 0xdfbf0040
  .word 0xdfb30030
  .word 0xdfb20020
  .word 0xdfb10010
  .word 0xdfb00000
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x00000000
}
// FUN_0051E0E0
asm int FUN_0051e0e0(int param_1)
{
  .set noreorder
  .word 0x04820001
  .word 0x00042023
  .word 0x03e00008
  .word 0x0080102d
}
#pragma schedule on
#pragma optimization_level 3
/* DUMMYDUMB session 2026-10-20: the only real residual is a two-instruction order
 * swap at +20/+24 - ours `ld $ra,0($sp)` then `dsll32 $v0,$v0,0` (the (u64) sign
 * extension of the call result), retail the other way round. Everything else
 * matches (40B = 40B); the other differences are masked call/address
 * relocations. Probed: (u64)(int) double cast, unsigned long long cast, long
 * cast, dropping the cast - all byte-neutral. Confirmed wall: epilogue
 * ordering. Same family as cri_adx FUN_0057FA50 and the six sibling
 * accessors. */
// FUN_0051E0F0
asm u64 FUN_0051e0f0(u64 param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0000282d
  .word 0xffbf0000
  .word 0x0c149714
  .word 0x2406000a
  .word 0x0002103c
  .word 0xdfbf0000
  .word 0x0002103f
  .word 0x03e00008
  .word 0x27bd0010
}
#pragma optimization_level 2
#pragma schedule off
// FUN_0051E118
#pragma optimization_level 3
#pragma opt_lifetimes on
asm void FUN_0051e118(u8 *param_1,int param_2)
{
  .set noreorder
  .word 0x24a5ffff
  .word 0x240fffff
  .word 0x10af0008
  .word 0x00000000
  .word 0xa0800000
  .word 0x24a5ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14affffa
  .word 0x24840001
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes reset
#pragma optimization_level 2
#pragma schedule on
#pragma tailcall on
// FUN_0051E150
asm long FUN_0051e150(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0080782d
  .word 0xffbf0000
  .word 0x3c0e0078
  .word 0x00a0302d
  .word 0x8dc42f30
  .word 0xdfbf0000
  .word 0x01e0282d
  .word 0x0814785e
  .word 0x27bd0010
}
#pragma tailcall off
#pragma schedule off
// FUN_0051E178
asm long FUN_0051e178(u64 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffb00000
  .word 0xffbf0008
  .word 0x0c148270
  .word 0x00a62818
  .word 0x0040802d
  .word 0x1200001d
  .word 0x0000102d
  .word 0x8e0ffffc
  .word 0x240efffc
  .word 0x01ee7824
  .word 0x25edfffc
  .word 0x01a0302d
  .word 0x2daf0025
  .word 0x11e00019
  .word 0x2dac0014
  .word 0x1580000e
  .word 0x0200702d
  .word 0xae000000
  .word 0x260e0008
  .word 0x2daf001c
  .word 0x15e00009
  .word 0xae000004
  .word 0xae000008
  .word 0x2daf0024
  .word 0xae00000c
  .word 0x15e00004
  .word 0x260e0010
  .word 0xae000010
  .word 0x260e0018
  .word 0xae000014
  .word 0xadc00000
  .word 0x25ce0004
  .word 0xadc00004
  .word 0xadc00000
  .word 0x0200102d
  .word 0xdfb00000
  .word 0xdfbf0008
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x0200202d
  .word 0x0c148502
  .word 0x0000282d
  .word 0x1000fff8
  .word 0x0200102d
  .word 0x00000000
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffb10008
  .word 0x3c10009b
  .word 0xffbf0010
  .word 0x0080882d
  .word 0xae00cc20
  .word 0x0c140e12
  .word 0x00a0202d
  .word 0x240fffff
  .word 0x544f0005
  .word 0xdfb00000
  .word 0x8e0fcc20
  .word 0x55e00001
  .word 0xae2f0000
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_0051E280
asm int FUN_0051e280(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x0000102d
  .word 0xffb20010
  .word 0xffb40020
  .word 0xffb00000
  .word 0xffb10008
  .word 0xffb30018
  .word 0xffb50028
  .word 0xffb60030
  .word 0xffbf0038
  .word 0x8cb20010
  .word 0x8c8f0010
  .word 0x01f2782a
  .word 0x15e00074
  .word 0x0080a02d
  .word 0x2652ffff
  .word 0x24a70014
  .word 0x00127880
  .word 0x24930014
  .word 0x00ef8021
  .word 0x026f2021
  .word 0x8e0e0000
  .word 0x00e0b02d
  .word 0x8c830000
  .word 0x0260402d
  .word 0x25ce0001
  .word 0x006e001b
  .word 0x51c00001
  .word 0x000001cd
  .word 0x00008812
  .word 0x1220002d
  .word 0x0000a812
  .word 0x0000302d
  .word 0x0000482d
  .word 0x8ceb0000
  .word 0x8d0c0000
  .word 0x316fffff
  .word 0x000b6c02
  .word 0x01f17818
  .word 0x71b16818
  .word 0x318effff
  .word 0x24e70004
  .word 0x000c6402
  .word 0x0207502b
  .word 0x01e97821
  .word 0x31ebffff
  .word 0x000f7c02
  .word 0x01cb7023
  .word 0x01af4821
  .word 0x01c67021
  .word 0x312fffff
  .word 0xa50e0000
  .word 0x000e3403
  .word 0x018f6023
  .word 0x01866021
  .word 0x00094c02
  .word 0xa50c0002
  .word 0x000c3403
  .word 0x1140ffe7
  .word 0x25080004
  .word 0x1460000f
  .word 0x2484fffc
  .word 0x0264782b
  .word 0x51e0000c
  .word 0xae920010
  .word 0x8c8f0000
  .word 0x55e00009
  .word 0xae920010
  .word 0x2484fffc
  .word 0x0264782b
  .word 0x11e00004
  .word 0x2652ffff
  .word 0x8c8f0000
  .word 0x11e0fffb
  .word 0x2484fffc
  .word 0xae920010
  .word 0x0c14879c
  .word 0x0280202d
  .word 0x04400033
  .word 0x02a0102d
  .word 0x26350001
  .word 0x02c0382d
  .word 0x0000302d
  .word 0x0000482d
  .word 0x0260402d
  .word 0x8ceb0000
  .word 0x8d0d0000
  .word 0x316fffff
  .word 0x24e70004
  .word 0x01e97821
  .word 0x31aeffff
  .word 0x31ecffff
  .word 0x000b5c02
  .word 0x000f7c02
  .word 0x01cc7023
  .word 0x016f4821
  .word 0x01c67021
  .word 0x312fffff
  .word 0xa50e0000
  .word 0x000d6c02
  .word 0x000e3403
  .word 0x01af6823
  .word 0x00094c02
  .word 0x01a66021
  .word 0x0207782b
  .word 0xa50c0002
  .word 0x000c3403
  .word 0x11e0ffe9
  .word 0x25080004
  .word 0x00127880
  .word 0x026f2021
  .word 0x8c8e0000
  .word 0x15c00011
  .word 0x02a0102d
  .word 0x2484fffc
  .word 0x0264782b
  .word 0x51e0000d
  .word 0xae920010
  .word 0x8c8f0000
  .word 0x55e0000a
  .word 0xae920010
  .word 0x2484fffc
  .word 0x0264782b
  .word 0x11e00004
  .word 0x2652ffff
  .word 0x8c8f0000
  .word 0x51e0fffb
  .word 0x2484fffc
  .word 0xae920010
  .word 0x02a0102d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfb40020
  .word 0xdfb50028
  .word 0xdfb60030
  .word 0xdfbf0038
  .word 0x03e00008
  .word 0x27bd0040
}
// FUN_0051E4B0 NONMATCHING
char * FUN_0051e4b0(u64 param_1,u32 param_2,u32 param_3,u32 param_4,int *param_5,
                   u32 *param_6,int *param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  u64 uVar5;
  u64 uVar6;
  u64 uVar7;
  u32 uVar8;
  long lVar9;
  u64 uVar10;
  char cVar11;
  int iVar12;
  u32 uVar13;
  u32 uVar14;
  int iVar15;
  u64 *puVar16;
  u32 uVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  int iStack_b0;
  int iStack_ac;
  u32 uStack_a8;
  u32 uStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int iStack_98;
  int iStack_94;
  u32 uStack_90;
  u32 uStack_8c;
  u32 uStack_88;
  u32 uStack_84;
  u32 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  u32 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  
  iVar3 = (int)param_1;
  iVar15 = *(int *)(iVar3 + 0x40);
  iStack_68 = 0;
  uStack_a8 = param_3;
  uStack_a4 = param_4;
  piStack_a0 = param_5;
  piStack_9c = param_7;
  if (iVar15 != 0) {
    *(u32 *)(iVar15 + 4) = *(u32 *)(iVar3 + 0x44);
    *(int *)(iVar15 + 8) = 1 << (*(u32 *)(iVar3 + 0x44) & 0x1f);
    FUN_00521620(param_1,iVar15);
    *(u32 *)(iVar3 + 0x40) = 0;
  }
  uVar13 = (u32)(int)(param_2 >> 0x20);
  if ((long)uVar13 < 0) {
    *param_6 = 1;
    param_2 = param_2 & 0xffffffff | (uVar13 & 0x7fffffff) << 0x20;
  }
  else {
    *param_6 = 0;
  }
  uVar14 = (u32)(param_2 >> 0x20);
  if ((uVar14 & 0x7ff00000) == 0x7ff00000) {
    *piStack_a0 = 9999;
    if ((param_2 & 0xfffffffffffff) == 0) {
      pcVar19 = s_Infinity_007beac8;
    }
    else {
      pcVar19 = (char *)0x7bead8;
    }
    if (piStack_9c == (int *)0x0) {
      return pcVar19;
    }
    pcVar21 = pcVar19 + 8;
    if (pcVar19[3] == '\0') {
      pcVar21 = pcVar19 + 3;
    }
    *piStack_9c = (int)pcVar21;
    return pcVar19;
  }
  lVar4 = FUN_005316d0(param_2,0);
  if (lVar4 == 0) {
    *piStack_a0 = 1;
    if (piStack_9c == (int *)0x0) {
      return (char *)&DAT_007beae0;
    }
    *piStack_9c = (int)&DAT_007beae1;
    return (char *)&DAT_007beae0;
  }
  iVar15 = iStack_ac;
  uVar5 = FUN_005222c0(param_1,param_2,&iStack_b0,&iStack_ac);
  uVar17 = uVar14 >> 0x14 & 0x7ff;
  if (uVar17 == 0) {
    iVar12 = iStack_ac + iStack_b0;
    iVar18 = iVar12 + 0x432;
    if (iVar18 < 0x21) {
      uVar14 = (u32)param_2 << (-iVar18 & 0x1fU);
    }
    else {
      uVar14 = uVar14 << (-iVar18 & 0x1fU) | (u32)param_2 >> (iVar12 + 0x412U & 0x1f);
    }
    uVar13 = FUN_00531720(uVar14);
    if ((int)uVar14 < 0) {
      uVar13 = FUN_00531170(uVar13,0x41f0000000000000);
    }
    iStack_6c = 1;
    uVar17 = iVar12 - 1;
    uVar13 = uVar13 & 0xffffffff | (long)((int)(uVar13 >> 0x20) + -0x1f00000) << 0x20;
  }
  else {
    iStack_6c = 0;
    uVar17 = uVar17 - 0x3ff;
    uVar13 = param_2 & 0xffffffff |
             ((long)(param_2 & 0xffffffff | ((long)param_2 >> 0x20 & 0xfffffU) << 0x20) >> 0x20 |
             0x3ff00000U) << 0x20;
  }
  uVar6 = FUN_005311c8(uVar13,0x3ff8000000000000);
  uVar6 = FUN_00531230(uVar6,DAT_007beae8);
  uVar6 = FUN_00531170(uVar6,DAT_007beaf0);
  uVar7 = FUN_00531720(uVar17);
  uVar7 = FUN_00531230(uVar7,DAT_007beaf8);
  uVar6 = FUN_00531170(uVar6,uVar7);
  uStack_84 = FUN_005317d0(uVar6);
  lVar4 = FUN_005316d0(uVar6,0);
  if (lVar4 < 0) {
    uVar7 = FUN_00531720(uStack_84);
    lVar4 = FUN_005316d0(uVar6,uVar7);
    if (lVar4 != 0) {
      uStack_84 = uStack_84 - 1;
    }
  }
  iStack_7c = 1;
  if (uStack_84 < 0x17) {
    iStack_7c = 0;
    lVar4 = FUN_005316d0(param_2,*(u64 *)(&DAT_007beb78 + uStack_84 * 8));
    if (lVar4 < 0) {
      uStack_84 = uStack_84 - 1;
    }
  }
  iStack_74 = (iVar15 - uVar17) + -1;
  if (iStack_74 < 0) {
    iStack_98 = -iStack_74;
    iStack_74 = 0;
  }
  else {
    iStack_98 = 0;
  }
  if ((int)uStack_84 < 0) {
    uStack_70 = 0;
    iStack_98 = iStack_98 - uStack_84;
    iStack_94 = -uStack_84;
  }
  else {
    iStack_94 = 0;
    iStack_74 = iStack_74 + uStack_84;
    uStack_70 = uStack_84;
  }
  if (9 < uStack_a8) {
    uStack_a8 = 0;
  }
  bVar1 = 5 < (int)uStack_a8;
  if (bVar1) {
    uStack_a8 = uStack_a8 - 4;
  }
  uStack_88 = 0xffffffff;
  uStack_90 = 0xffffffff;
  iStack_78 = 1;
  uVar14 = uStack_a4;
  switch(uStack_a8) {
  case 0:
  case 1:
    uStack_a4 = 0;
    uVar17 = 0x12;
    uVar14 = uStack_a4;
    break;
  case 2:
    iStack_78 = 0;
  case 4:
    uStack_90 = 1;
    uVar17 = uStack_90;
    uVar14 = uStack_90;
    uStack_88 = uStack_90;
    if (0 < (int)uStack_a4) {
      uVar17 = uStack_a4;
      uVar14 = uStack_a4;
      uStack_90 = uStack_a4;
      uStack_88 = uStack_a4;
    }
    break;
  case 3:
    iStack_78 = 0;
  case 5:
    uStack_88 = uStack_a4 + uStack_84;
    uStack_90 = uStack_88 + 1;
    uVar17 = uStack_90;
    if ((int)uStack_90 < 1) {
      uVar17 = 1;
    }
  }
  uStack_a4 = uVar14;
  *(u32 *)(iVar3 + 0x44) = 0;
  iVar15 = 4;
  if (0x17 < uVar17) {
    iVar12 = 0;
    do {
      iVar15 = iVar15 * 2;
      iVar12 = iVar12 + 1;
    } while (iVar15 + 0x14U <= uVar17);
    *(int *)(iVar3 + 0x44) = iVar12;
  }
  pcVar19 = (char *)FUN_00521578(param_1,*(u32 *)(iVar3 + 0x44));
  *(char **)(iVar3 + 0x40) = pcVar19;
  if ((0xe < uStack_90) || (bVar1)) {
LAB_0051ea44:
    if ((iStack_b0 < 0) || (0xe < (int)uStack_84)) {
      iStack_68 = 0;
      iStack_64 = 0;
      bVar1 = 1 < (int)uStack_a8;
      iVar15 = iStack_98;
      iVar3 = iStack_94;
      if (iStack_78 != 0) {
        if (bVar1) {
          iVar12 = uStack_90 - 1;
          iVar3 = iStack_94 - iVar12;
          if (iStack_94 < iVar12) {
            iVar12 = iVar12 - iStack_94;
            iStack_94 = iStack_94 + iVar12;
            iVar3 = 0;
            uStack_70 = uStack_70 + iVar12;
          }
          uVar14 = uStack_90;
          if ((int)uStack_90 < 0) {
            uVar14 = 0;
            iVar15 = iStack_98 - uStack_90;
          }
        }
        else {
          uVar14 = iStack_b0 + 0x433;
          if (iStack_6c == 0) {
            uVar14 = 0x36 - iStack_ac;
          }
        }
        iStack_74 = iStack_74 + uVar14;
        iStack_64 = FUN_005219c8(param_1,1);
        iStack_98 = iStack_98 + uVar14;
      }
      if ((0 < iVar15) && (0 < iStack_74)) {
        iVar12 = iStack_74;
        if (iVar15 < iStack_74) {
          iVar12 = iVar15;
        }
        iStack_74 = iStack_74 - iVar12;
        iStack_98 = iStack_98 - iVar12;
        iVar15 = iVar15 - iVar12;
      }
      if (0 < iStack_94) {
        iVar12 = iStack_94;
        if (iStack_78 != 0) {
          if (0 < iVar3) {
            iStack_64 = FUN_00521c08(param_1,iStack_64,iVar3);
            uVar6 = FUN_00521a00(param_1,iStack_64,uVar5);
            FUN_00521620(param_1,uVar5);
            uVar5 = uVar6;
          }
          iVar12 = iStack_94 - iVar3;
          if (iVar12 == 0) goto LAB_0051ed8c;
        }
        uVar5 = FUN_00521c08(param_1,uVar5,iVar12);
      }
LAB_0051ed8c:
      iStack_60 = FUN_005219c8(param_1,1);
      if (0 < (int)uStack_70) {
        iStack_60 = FUN_00521c08(param_1,iStack_60,uStack_70);
      }
      bVar2 = false;
      if (((!bVar1) && ((param_2 & 0xfffffffffffff) == 0)) &&
         (((long)param_2 >> 0x20 & 0x7ff00000U) != 0)) {
        bVar2 = true;
        iStack_98 = iStack_98 + 1;
        iStack_74 = iStack_74 + 1;
      }
      if (uStack_70 == 0) {
        uVar14 = iStack_74 + 1;
      }
      else {
        iVar3 = FUN_00521888(*(u32 *)(*(int *)(iStack_60 + 0x10) * 4 + iStack_60 + 0x10));
        uVar14 = iStack_74 - iVar3;
      }
      iVar3 = 0;
      if ((uVar14 & 0x1f) != 0) {
        iVar3 = 0x20 - (uVar14 & 0x1f);
      }
      if (iVar3 < 5) {
        if (iVar3 < 4) {
          iVar3 = iVar3 + 0x1c;
          goto LAB_0051ee60;
        }
      }
      else {
        iVar3 = iVar3 + -4;
LAB_0051ee60:
        iStack_74 = iStack_74 + iVar3;
        iStack_98 = iStack_98 + iVar3;
        iVar15 = iVar15 + iVar3;
      }
      if (0 < iStack_98) {
        uVar5 = FUN_00521d10(param_1,uVar5,iStack_98);
      }
      if (0 < iStack_74) {
        iStack_60 = FUN_00521d10(param_1,iStack_60,iStack_74);
      }
      if ((iStack_7c != 0) && (lVar4 = FUN_00521e70(uVar5,iStack_60), 0 < lVar4)) {
        uVar5 = FUN_00521650(param_1,uVar5,10,0);
        uStack_84 = uStack_84 - 1;
        if (iStack_78 != 0) {
          iStack_64 = FUN_00521650(param_1,iStack_64,10,0);
        }
        uStack_90 = uStack_88;
      }
      if ((0 < (int)uStack_90) || ((int)uStack_a8 < 3)) {
        iVar3 = 1;
        pcVar21 = pcVar19;
        if (iStack_78 != 0) {
          if (0 < iVar15) {
            iStack_64 = FUN_00521d10(param_1,iStack_64,iVar15);
          }
          iStack_68 = iStack_64;
          if (bVar2) {
            iStack_64 = FUN_00521578(param_1,*(u32 *)(iStack_64 + 4));
            FUN_00521250(iStack_64 + 0xc,iStack_68 + 0xc,*(int *)(iStack_68 + 0x10) * 4 + 8);
            iStack_64 = FUN_00521d10(param_1,iStack_64,1);
          }
          uVar14 = 1;
          do {
            iVar15 = FUN_0051e280(uVar5,iStack_60);
            uVar17 = iVar15 + 0x30;
            lVar4 = FUN_00521e70(uVar5,iStack_68);
            uVar6 = FUN_00521ed8(param_1,iStack_60,iStack_64);
            if (*(int *)((int)uVar6 + 0xc) == 0) {
              lVar9 = FUN_00521e70(uVar5,uVar6);
            }
            else {
              lVar9 = 1;
            }
            FUN_00521620(param_1,uVar6);
            if (((lVar9 == 0) && (uStack_a8 == 0)) && ((param_2 & 1) == 0)) {
              if (uVar17 != 0x39) {
                uVar17 = uVar17 + (0 < lVar4);
LAB_0051f05c:
                *pcVar21 = (char)uVar17;
                goto LAB_0051f060;
              }
LAB_0051f06c:
              *pcVar21 = '9';
              goto LAB_0051f078;
            }
            cVar11 = (char)uVar17;
            if ((lVar4 < 0) || (((lVar4 == 0 && (uStack_a8 == 0)) && ((param_2 & 1) == 0)))) {
              if (lVar9 < 1) goto LAB_0051f05c;
              uVar5 = FUN_00521d10(param_1,uVar5,1);
              lVar4 = FUN_00521e70(uVar5,iStack_60);
              if (lVar4 < 1) {
                if (lVar4 != 0) {
                  *pcVar21 = cVar11;
                  goto LAB_0051f060;
                }
                if ((uVar17 & 1) == 0) {
                  *pcVar21 = cVar11;
                  goto LAB_0051f060;
                }
              }
              if (iVar15 + 0x31 == 0x3a) goto LAB_0051f06c;
              *pcVar21 = (char)(iVar15 + 0x31);
              goto LAB_0051f060;
            }
            if (0 < lVar9) {
              if (uVar17 == 0x39) goto LAB_0051f06c;
              *pcVar21 = cVar11 + '\x01';
              goto LAB_0051f060;
            }
            *pcVar21 = cVar11;
            pcVar21 = pcVar21 + 1;
            if (uVar14 == uStack_90) goto LAB_0051f1fc;
            uVar5 = FUN_00521650(param_1,uVar5,10,0);
            if (iStack_68 == iStack_64) {
              iStack_68 = FUN_00521650(param_1,iStack_64,10,0);
              iStack_64 = iStack_68;
            }
            else {
              iStack_68 = FUN_00521650(param_1,iStack_68,10,0);
              iStack_64 = FUN_00521650(param_1,iStack_64,10,0);
            }
            uVar14 = uVar14 + 1;
          } while( true );
        }
        while( true ) {
          iVar15 = FUN_0051e280(uVar5,iStack_60);
          uVar17 = iVar15 + 0x30;
          *pcVar21 = (char)uVar17;
          pcVar21 = pcVar21 + 1;
          if ((int)uStack_90 <= iVar3) break;
          uVar5 = FUN_00521650(param_1,uVar5,10,0);
          iVar3 = iVar3 + 1;
        }
LAB_0051f1fc:
        uVar5 = FUN_00521d10(param_1,uVar5,1);
        lVar4 = FUN_00521e70(uVar5,iStack_60);
        if (lVar4 < 1) {
          if ((lVar4 != 0) || ((uVar17 & 1) == 0)) {
            do {
              pcVar20 = pcVar21;
              pcVar21 = pcVar20 + -1;
            } while (pcVar20[-1] == '0');
            goto LAB_0051ead0;
          }
          pcVar21 = pcVar21 + -1;
        }
        else {
          pcVar21 = pcVar21 + -1;
        }
LAB_0051f078:
        cVar11 = *pcVar21;
        while (cVar11 == '9') {
          if (pcVar21 == pcVar19) {
            uStack_84 = uStack_84 + 1;
            pcVar20 = pcVar19 + 1;
            *pcVar19 = '1';
            goto LAB_0051ead0;
          }
          pcVar21 = pcVar21 + -1;
          cVar11 = *pcVar21;
        }
        *pcVar21 = cVar11 + '\x01';
LAB_0051f060:
        pcVar20 = pcVar21 + 1;
        goto LAB_0051ead0;
      }
      if (-1 < (int)uStack_90) {
        iStack_60 = FUN_00521650(param_1,iStack_60,5,0);
        lVar4 = FUN_00521e70(uVar5,iStack_60);
        goto joined_r0x0051ef4c;
      }
    }
    else {
      uVar6 = *(u64 *)(&DAT_007beb78 + uStack_84 * 8);
      if ((-1 < (int)uStack_a4) || (0 < (int)uStack_90)) {
        uVar14 = 1;
        pcVar20 = pcVar19;
        do {
          uVar7 = FUN_00531480(param_2,uVar6);
          uVar13 = FUN_005317d0(uVar7);
          uVar7 = FUN_00531720(uVar13);
          uVar7 = FUN_00531230(uVar7,uVar6);
          uVar7 = FUN_005311c8(param_2,uVar7);
          *pcVar20 = (char)uVar13 + '0';
          pcVar20 = pcVar20 + 1;
          if (uVar14 == uStack_90) {
            uVar7 = FUN_00531170(uVar7,uVar7);
            lVar4 = FUN_005316d0(uVar6,uVar7);
            if (lVar4 < 0) goto LAB_0051ebdc;
            lVar4 = FUN_005316d0(uVar6,uVar7);
            if ((lVar4 == 0) && ((uVar13 & 1) != 0)) goto LAB_0051ebdc;
            break;
          }
          uVar14 = uVar14 + 1;
          param_2 = FUN_00531230(0x4024000000000000,uVar7);
          lVar4 = FUN_005316d0(param_2,0);
        } while (lVar4 != 0);
        goto LAB_0051eb14;
      }
      iStack_64 = 0;
      iStack_60 = 0;
      if (-1 < (int)uStack_90) {
        uVar6 = FUN_00531230(uVar6,0x4014000000000000);
        lVar4 = FUN_005316d0(param_2,uVar6);
joined_r0x0051ef4c:
        if (0 < lVar4) goto LAB_0051eab8;
      }
    }
LAB_0051eb48:
    uStack_84 = ~uStack_a4;
    pcVar20 = pcVar19;
  }
  else {
    uStack_8c = uStack_90;
    iVar15 = 2;
    uStack_80 = uStack_84;
    if ((int)uStack_84 < 1) {
      uVar14 = -uStack_84;
      uVar13 = param_2;
      if (uVar14 != 0) {
        uVar17 = (int)uVar14 >> 4;
        uVar13 = FUN_00531230(*(u64 *)(&DAT_007beb78 + (uVar14 & 0xf) * 8),param_2);
        if (uVar17 != 0) {
          puVar16 = (u64 *)&DAT_007bec40;
          do {
            if ((uVar17 & 1) != 0) {
              iVar15 = iVar15 + 1;
              uVar13 = FUN_00531230(*puVar16,uVar13);
            }
            uVar17 = (int)uVar17 >> 1;
            puVar16 = puVar16 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    else {
      uVar14 = (int)uStack_84 >> 4;
      uVar6 = *(u64 *)(&DAT_007beb78 + (uStack_84 & 0xf) * 8);
      uVar13 = param_2;
      if ((uVar14 & 0x10) != 0) {
        uVar14 = uVar14 & 0xf;
        iVar15 = 3;
        uVar13 = FUN_00531480(param_2,DAT_007bec60);
      }
      if (uVar14 != 0) {
        puVar16 = (u64 *)&DAT_007bec40;
        do {
          if ((uVar14 & 1) != 0) {
            iVar15 = iVar15 + 1;
            uVar6 = FUN_00531230(uVar6,*puVar16);
          }
          uVar14 = (int)uVar14 >> 1;
          puVar16 = puVar16 + 1;
        } while (uVar14 != 0);
      }
      uVar13 = FUN_00531480(uVar13,uVar6);
    }
    if (((iStack_7c != 0) && (lVar4 = FUN_005316d0(uVar13,0x3ff0000000000000), lVar4 < 0)) &&
       (0 < (int)uStack_90)) {
      if (0 < (int)uStack_88) {
        uStack_90 = uStack_88;
        uVar13 = FUN_00531230(0x4024000000000000,uVar13);
        iVar15 = iVar15 + 1;
        uStack_84 = uStack_84 - 1;
        goto LAB_0051e998;
      }
LAB_0051ea2c:
      uStack_84 = uStack_80;
      uStack_90 = uStack_8c;
      goto LAB_0051ea44;
    }
LAB_0051e998:
    uVar6 = FUN_00531720(iVar15);
    uVar6 = FUN_00531230(uVar6,uVar13);
    uVar8 = FUN_00531170(uVar6,0x401c000000000000);
    uVar8 = uVar8 & 0xffffffff | (long)((int)(uVar8 >> 0x20) + -0x3400000) << 0x20;
    if (uStack_90 != 0) {
      if (iStack_78 != 0) {
        iVar15 = 0;
        uVar6 = FUN_00531480(0x3fe0000000000000,*(u64 *)(uStack_90 * 8 + 0x7beb70));
        uVar6 = FUN_005311c8(uVar6,uVar8);
        pcVar20 = pcVar19;
        while( true ) {
          uVar7 = FUN_005317d0(uVar13);
          uVar10 = FUN_00531720(uVar7);
          uVar10 = FUN_005311c8(uVar13,uVar10);
          *pcVar20 = (char)uVar7 + '0';
          lVar4 = FUN_005316d0(uVar10,uVar6);
          pcVar20 = pcVar20 + 1;
          if (lVar4 < 0) break;
          uVar7 = FUN_005311c8(0x3ff0000000000000,uVar10);
          lVar4 = FUN_005316d0(uVar7,uVar6);
          if (lVar4 < 0) goto LAB_0051ebdc;
          iVar15 = iVar15 + 1;
          if ((int)uStack_90 <= iVar15) goto LAB_0051ea2c;
          uVar6 = FUN_00531230(0x4024000000000000,uVar6);
          uVar13 = FUN_00531230(0x4024000000000000,uVar10);
        }
        goto LAB_0051eb14;
      }
      uVar14 = 1;
      uVar6 = FUN_00531230(*(u64 *)(uStack_90 * 8 + 0x7beb70),uVar8);
      pcVar21 = pcVar19;
      while( true ) {
        uVar7 = FUN_005317d0(uVar13);
        uVar10 = FUN_00531720(uVar7);
        uVar10 = FUN_005311c8(uVar13,uVar10);
        *pcVar21 = (char)uVar7 + '0';
        pcVar20 = pcVar21 + 1;
        if (uVar14 == uStack_90) break;
        uVar14 = uVar14 + 1;
        uVar13 = FUN_00531230(0x4024000000000000,uVar10);
        pcVar21 = pcVar20;
      }
      uVar7 = FUN_00531170(0x3fe0000000000000,uVar6);
      lVar4 = FUN_005316d0(uVar7,uVar10);
      if (lVar4 < 0) {
LAB_0051ebdc:
        pcVar20 = pcVar20 + -1;
        cVar11 = *pcVar20;
        while (cVar11 == '9') {
          if (pcVar20 == pcVar19) {
            uStack_84 = uStack_84 + 1;
            *pcVar19 = '0';
            cVar11 = '0';
            break;
          }
          pcVar20 = pcVar20 + -1;
          cVar11 = *pcVar20;
        }
        *pcVar20 = cVar11 + '\x01';
        pcVar20 = pcVar20 + 1;
        goto LAB_0051eb14;
      }
      uVar6 = FUN_005311c8(0x3fe0000000000000,uVar6);
      lVar4 = FUN_005316d0(uVar10,uVar6);
      if (lVar4 < 0) {
        for (; *pcVar21 == '0'; pcVar21 = pcVar21 + -1) {
        }
        pcVar20 = pcVar21 + 1;
        goto LAB_0051eb14;
      }
      goto LAB_0051ea2c;
    }
    iStack_64 = 0;
    uVar6 = FUN_005311c8(uVar13,0x4014000000000000);
    iStack_60 = 0;
    lVar4 = FUN_005316d0(uVar8,uVar6);
    if (-1 < lVar4) {
      uVar7 = FUN_005311c8(0,uVar8);
      lVar4 = FUN_005316d0(uVar6,uVar7);
      if (-1 < lVar4) goto LAB_0051ea2c;
      goto LAB_0051eb48;
    }
LAB_0051eab8:
    *pcVar19 = '1';
    uStack_84 = uStack_84 + 1;
    pcVar20 = pcVar19 + 1;
  }
LAB_0051ead0:
  FUN_00521620(param_1,iStack_60);
  if (iStack_64 != 0) {
    if ((iStack_68 != 0) && (iStack_68 != iStack_64)) {
      FUN_00521620(param_1,iStack_68);
    }
    FUN_00521620(param_1,iStack_64);
  }
LAB_0051eb14:
  FUN_00521620(param_1,uVar5);
  *pcVar20 = '\0';
  *piStack_a0 = uStack_84 + 1;
  if (piStack_9c != (int *)0x0) {
    *piStack_9c = (int)pcVar20;
  }
  return pcVar19;
}
/* DUMMYDUMB session 2026-10-20: function-scoped #pragma schedule on.
 * Retail loads the pointer in the delay slot of jr $ra (lui $t7,0x78 / jr $ra /
 * lw $v0,0x2f30($t7)); with scheduling off mwcc emits the load before the jump.
 * Measured: 7 -> 3 differing bytes. The remaining 3 are the addressing form
 * (we load the slot gp-relative, retail materialises 0x782f30 absolutely).
 * Still NONMATCHING - recorded as a measured improvement.
 */
#pragma schedule on
// FUN_0051F690
asm u8 * FUN_0051f690(void)
{
  .set noreorder
  .word 0x3c0f0078
  .word 0x03e00008
  .word 0x8de22f30
  .word 0x00000000
}

/* DUMMYDUMB session 2026-10-21: 3 differing bytes, the register that holds
 * the address.  Ours "lui v0,0x0 / lw v0,0(v0)" builds the address through
 * the gp-relative path and reuses v0 for the address and the loaded value;
 * retail "lui t7,0x78 / lw v0,0x2f30(t7)" keeps the address in t7.
 * Probed: the address as a literal, as a symbol, as a volatile load, through
 * a pointer variable, with different casts and return types - all keep v0.
 * A micro-test shows mwcc always materialises an absolute address into v0
 * here.  Confirmed wall: absolute address base register.
 */
#pragma schedule off
// FUN_0051F6A0
asm u64 FUN_0051f6a0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c0f0078
  .word 0xffb30018
  .word 0xffb00000
  .word 0xffb10008
  .word 0xffb20010
  .word 0xffbf0020
  .word 0x8dee2f30
  .word 0x8dd20148
  .word 0x12400010
  .word 0x0080982d
  .word 0x8e510004
  .word 0x2631ffff
  .word 0x06200008
  .word 0x00117880
  .word 0x01f27821
  .word 0x25f00008
  .word 0x8e0f0000
  .word 0x01e0f809
  .word 0x2631ffff
  .word 0x0621fffc
  .word 0x2610fffc
  .word 0x8e520000
  .word 0x5640fff4
  .word 0x8e510004
  .word 0x3c0f0078
  .word 0x8de42f30
  .word 0x8c8f003c
  .word 0x11e00003
  .word 0x00000000
  .word 0x01e0f809
  .word 0x00000000
  .word 0x0c040086
  .word 0x0260202d
}
// FUN_0051F728
asm u64 FUN_0051f728(long param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb10008
  .word 0xffb00000
  .word 0xffb20010
  .word 0xffbf0018
  .word 0x1480000c
  .word 0x0080882d
  .word 0x3c0f0078
  .word 0xdfb00000
  .word 0x8de42f30
  .word 0x3c050052
  .word 0xdfb10008
  .word 0x24a5f728
  .word 0xdfb20010
  .word 0xdfbf0018
  .word 0x08148104
  .word 0x27bd0020
  .word 0x00000000
  .word 0x8c840054
  .word 0x54800006
  .word 0x8c8f0038
  .word 0x3c0f0078
  .word 0x8dee2f30
  .word 0xae2e0054
  .word 0x01c0202d
  .word 0x8c8f0038
  .word 0x55e00004
  .word 0x8622000c
  .word 0x0c147e88
  .word 0x00000000
  .word 0x8622000c
  .word 0x304f0008
  .word 0x51e00017
  .word 0x0000102d
  .word 0x8e320010
  .word 0x12400013
  .word 0x304e0003
  .word 0x8e2f0000
  .word 0x0000682d
  .word 0xae320000
  .word 0x15c00002
  .word 0x01f28023
  .word 0x8e2d0014
  .word 0x1a00000b
  .word 0xae2d0008
  .word 0x8e220024
  .word 0x0240282d
  .word 0x8e24001c
  .word 0x0040f809
  .word 0x0200302d
  .word 0x02028023
  .word 0x1840000a
  .word 0x02429021
  .word 0x5e00fff8
  .word 0x8e220024
  .word 0x0000102d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfbf0018
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x962f000c
  .word 0x2402ffff
  .word 0x35ef0040
  .word 0x1000fff6
  .word 0xa62f000c
  .word 0x00000000
}
// FUN_0051F838
asm void FUN_0051f838(u32 *param_1,u16 param_2,u16 param_3,u32 param_4)
{
  .set noreorder
  .word 0x3c0f0052
  .word 0xac870054
  .word 0x3c0e0052
  .word 0xa485000c
  .word 0x25ef3c60
  .word 0xa486000e
  .word 0x25ce3cc0
  .word 0xac8f0020
  .word 0xac8e0024
  .word 0x3c0f0052
  .word 0xac800000
  .word 0x3c0e0052
  .word 0xac800004
  .word 0x25ef3d40
  .word 0xac800008
  .word 0x25ce3da8
  .word 0xac8f0028
  .word 0xac8e002c
  .word 0xac800010
  .word 0xac800014
  .word 0xac800018
  .word 0x03e00008
  .word 0xac84001c
  .word 0x00000000
}
// FUN_0051F898
asm long FUN_0051f898(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffb20010
  .word 0x24100058
  .word 0xffb10008
  .word 0x00b08018
  .word 0xffbf0018
  .word 0x00a0902d
  .word 0x0c148270
  .word 0x2605000c
  .word 0x244f000c
  .word 0x0040882d
  .word 0x0200302d
  .word 0x01e0202d
  .word 0x0000282d
  .word 0x12200006
  .word 0x0000102d
  .word 0xae320004
  .word 0xae200000
  .word 0x0c148502
  .word 0xae2f0008
  .word 0x0220102d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfbf0018
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_0051F908
asm u32 * FUN_0051f908(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb10008
  .word 0xffb00000
  .word 0xffbf0010
  .word 0x8c8f0038
  .word 0x15e00003
  .word 0x0080882d
  .word 0x0c147e88
  .word 0x00000000
  .word 0x263001d8
  .word 0x8e0e0004
  .word 0x25ceffff
  .word 0x05c00006
  .word 0x8e0d0008
  .word 0x85af000c
  .word 0x11e00015
  .word 0x25ceffff
  .word 0x05c1fffc
  .word 0x25ad0058
  .word 0x8e020000
  .word 0x5440fff5
  .word 0x0040802d
  .word 0x0220202d
  .word 0x0c147e26
  .word 0x24050004
  .word 0x10400003
  .word 0xae020000
  .word 0x1000ffee
  .word 0x0040802d
  .word 0x240f000c
  .word 0x0000102d
  .word 0xae2f0000
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x240f0001
  .word 0xadb10054
  .word 0xa5af000c
  .word 0x01a0102d
  .word 0xada00000
  .word 0x240fffff
  .word 0xada00008
  .word 0xa5af000e
  .word 0xada00004
  .word 0xada00010
  .word 0xada00014
  .word 0xada00018
  .word 0xada00030
  .word 0xada00034
  .word 0xada00044
  .word 0x1000ffeb
  .word 0xada00048
  .word 0x27bdfff0
  .word 0x3c050052
  .word 0xffbf0000
  .word 0x24a5f728
  .word 0xdfbf0000
  .word 0x08148104
  .word 0x27bd0010
  .word 0x00000000
  .word 0x27bdfff0
  .word 0x3c0f0078
  .word 0xffbf0000
  .word 0x8de42f30
  .word 0xdfbf0000
  .word 0x08147e78
  .word 0x27bd0010
  .word 0x00000000
}
#pragma tailcall on
#pragma alias FUN_0051f838_u32 FUN_0051f838
extern u32 FUN_0051f838_u32(u32 *param_1,u16 param_2,u16 param_3,u32 param_4);
// FUN_0051FA20
asm u32 FUN_0051fa20(u32 param_1)
{
  .set noreorder
  .word 0x3c0f0052
  .word 0xac8001d8
  .word 0x25eff9e0
  .word 0x27bdfff0
  .word 0xac8f003c
  .word 0x248e01e4
  .word 0xffb00000
  .word 0x0080382d
  .word 0x240f0001
  .word 0xffbf0008
  .word 0xac8f0038
  .word 0x0080802d
  .word 0xac8e01e0
  .word 0x24050004
  .word 0x240f0003
  .word 0x0000302d
  .word 0xac8f01dc
  .word 0x0c147e0e
  .word 0x8c840004
  .word 0x8e040008
  .word 0x0200382d
  .word 0x24050009
  .word 0x0c147e0e
  .word 0x24060001
  .word 0x8e04000c
  .word 0x0200382d
  .word 0xdfbf0008
  .word 0x2405000a
  .word 0xdfb00000
  .word 0x24060002
  .word 0x08147e0e
  .word 0x27bd0010
}
#pragma tailcall off
// FUN_0051FAA0
asm int FUN_0051faa0(int param_1,long param_2,int param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x0000102d
  .word 0xffb20010
  .word 0xffb10008
  .word 0x00c59018
  .word 0xffb40020
  .word 0xffb50028
  .word 0x00e0882d
  .word 0xffb00000
  .word 0x00a0a02d
  .word 0xffb30018
  .word 0xffb60030
  .word 0xffbf0038
  .word 0x12400027
  .word 0x00c0a82d
  .word 0x8ce60004
  .word 0x04c10004
  .word 0x00c0802d
  .word 0xace00004
  .word 0x0000302d
  .word 0x00c0802d
  .word 0x0080982d
  .word 0x00d2782b
  .word 0x11e00012
  .word 0x0240b02d
  .word 0x8e250000
  .word 0x0260202d
  .word 0x0200302d
  .word 0x0c148494
  .word 0x02509023
  .word 0x02709821
  .word 0x8e2f0000
  .word 0x0220202d
  .word 0x01f07821
  .word 0x0c148d60
  .word 0xae2f0000
  .word 0x1440001a
  .word 0x02d27823
  .word 0x8e300004
  .word 0x0212782b
  .word 0x55e0fff1
  .word 0x8e250000
  .word 0x8e250000
  .word 0x0260202d
  .word 0x0c148494
  .word 0x0240302d
  .word 0x8e2e0004
  .word 0x02a0102d
  .word 0x8e2f0000
  .word 0x01d27023
  .word 0x01f27821
  .word 0xae2e0004
  .word 0xae2f0000
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfb40020
  .word 0xdfb50028
  .word 0xdfb60030
  .word 0xdfbf0038
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x01f4001b
  .word 0x52800001
  .word 0x000001cd
  .word 0x1000fff2
  .word 0x00001012
}
// FUN_0051FBB0
asm void FUN_0051fbb0(u64 param_1,long param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffb10008
  .word 0xffbf0010
  .word 0x00a0802d
  .word 0x10a000ac
  .word 0x0080882d
  .word 0x0c148532
  .word 0x00000000
  .word 0x2607fff8
  .word 0x240efffe
  .word 0x8ceb0004
  .word 0x3c0f0078
  .word 0x25e62f40
  .word 0x016e4824
  .word 0x8ccd0008
  .word 0x00e96021
  .word 0x240ffffc
  .word 0x8d8e0004
  .word 0x158d001e
  .word 0x01cf4024
  .word 0x316f0001
  .word 0x15e00008
  .word 0x01284821
  .word 0x8e05fff8
  .word 0x00e53823
  .word 0x01254821
  .word 0x8cea000c
  .word 0x8ceb0008
  .word 0xad4b0008
  .word 0xad6a000c
  .word 0x3c0f0078
  .word 0xacc70008
  .word 0x0009703c
  .word 0xddec3348
  .word 0x352d0001
  .word 0x000e703e
  .word 0x01cc702b
  .word 0x15c00005
  .word 0xaced0004
  .word 0x3c0f0078
  .word 0x0220202d
  .word 0x0c147fa4
  .word 0x8de53350
  .word 0x0220202d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x08148548
  .word 0x27bd0020
  .word 0xad880004
  .word 0x316f0001
  .word 0x15e00008
  .word 0x0000682d
  .word 0x8e05fff8
  .word 0x24cf0008
  .word 0x00e53823
  .word 0x8cee0008
  .word 0x15cf0073
  .word 0x01254821
  .word 0x240d0001
  .word 0x01887021
  .word 0x8dcf0004
  .word 0x31ef0001
  .word 0x15e0000e
  .word 0x352f0001
  .word 0x15a00069
  .word 0x01284821
  .word 0x3c0f0078
  .word 0x8d8e0008
  .word 0x25ef2f48
  .word 0x55cf0061
  .word 0x8d8a000c
  .word 0xadc7000c
  .word 0x240d0001
  .word 0xadc70008
  .word 0xacee000c
  .word 0xacee0008
  .word 0x352f0001
  .word 0x00e97021
  .word 0xacef0004
  .word 0x15a0ffda
  .word 0xadc90000
  .word 0x2d2f0200
  .word 0x11e00013
  .word 0x000960c2
  .word 0x3c0d0078
  .word 0x25ad2f40
  .word 0x000c78c0
  .word 0x01ed5021
  .word 0x8dae0004
  .word 0x000c6082
  .word 0x8d4b0008
  .word 0x240f0001
  .word 0xacea000c
  .word 0x018f7814
  .word 0xaceb0008
  .word 0x000f783c
  .word 0xad67000c
  .word 0x000f783f
  .word 0x01cf7025
  .word 0xadae0004
  .word 0x1000ffc5
  .word 0xad470008
  .word 0x00097242
  .word 0x11c00004
  .word 0x2dcf0005
  .word 0x11e00027
  .word 0x00097982
  .word 0x25ec0038
  .word 0x3c0f0078
  .word 0x000c70c0
  .word 0x25e82f40
  .word 0x01c85021
  .word 0x8d4b0008
  .word 0x556a0010
  .word 0x8d6f0004
  .word 0x258e0003
  .word 0x298f0000
  .word 0x01cf600b
  .word 0x000c6883
  .word 0x8d0e0004
  .word 0x240f0001
  .word 0x01af7814
  .word 0x000f783c
  .word 0x000f783f
  .word 0x01cf7025
  .word 0xad0e0004
  .word 0xacea000c
  .word 0xaceb0008
  .word 0x1000ffe3
  .word 0xad67000c
  .word 0x240efffc
  .word 0x01ee7824
  .word 0x012f782b
  .word 0x51e0fff8
  .word 0x8d6a000c
  .word 0x8d6b0008
  .word 0x516afff5
  .word 0x8d6a000c
  .word 0x8d6f0004
  .word 0x01ee7824
  .word 0x012f782b
  .word 0x55e0fffa
  .word 0x8d6b0008
  .word 0x1000ffee
  .word 0x8d6a000c
  .word 0x2dcf0015
  .word 0x15e0ffd9
  .word 0x25cc005b
  .word 0x2dcf0055
  .word 0x11e00003
  .word 0x00097b02
  .word 0x1000ffd4
  .word 0x25ec006e
  .word 0x2dcf0155
  .word 0x11e00003
  .word 0x00097bc2
  .word 0x1000ffcf
  .word 0x25ec0077
  .word 0x2dcf0555
  .word 0x11e00003
  .word 0x00097c82
  .word 0x1000ffca
  .word 0x25ec007c
  .word 0x1000ffc8
  .word 0x240c007e
  .word 0x00000000
  .word 0x8d8a000c
  .word 0xad4e0008
  .word 0x1000ffa3
  .word 0xadca000c
  .word 0x1000fffb
  .word 0x8d8e0008
  .word 0x8cea000c
  .word 0xad4e0008
  .word 0x1000ff8c
  .word 0xadca000c
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_0051FE90
asm u32 FUN_0051fe90(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb00000
  .word 0xffb20010
  .word 0xffb10008
  .word 0x00a0802d
  .word 0xffb30018
  .word 0x0080902d
  .word 0xffb40020
  .word 0x0010803c
  .word 0xffbf0028
  .word 0x0c148532
  .word 0x0010803e
  .word 0x3c0f0078
  .word 0x240efffc
  .word 0x25f32f40
  .word 0x0240202d
  .word 0x8e6d0008
  .word 0x8daf0004
  .word 0x01ee7824
  .word 0x000f883c
  .word 0x0011883e
  .word 0x0230802f
  .word 0x66100fef
  .word 0x0010833a
  .word 0x6610ffff
  .word 0x00108338
  .word 0x2a0f1000
  .word 0x15e00027
  .word 0x0000282d
  .word 0x0c148e4c
  .word 0x00000000
  .word 0x8e6f0008
  .word 0x0011703c
  .word 0x000e703f
  .word 0x01ee7821
  .word 0x144f001f
  .word 0x0240202d
  .word 0x0010a03c
  .word 0x0240202d
  .word 0x0014a03f
  .word 0x0c148e4c
  .word 0x00142823
  .word 0x0230782f
  .word 0x3c0d0078
  .word 0x35ef0001
  .word 0x0240202d
  .word 0x000f783c
  .word 0x0000282d
  .word 0x240effff
  .word 0x144e001c
  .word 0x000f783f
  .word 0x0c148e4c
  .word 0x00000000
  .word 0x8e6d0008
  .word 0x0240202d
  .word 0x004d8823
  .word 0x362f0001
  .word 0x2a2e0010
  .word 0x000f603c
  .word 0x15c00007
  .word 0x000c603f
  .word 0x3c0f0078
  .word 0x8dee3358
  .word 0x3c0f0078
  .word 0x004e7023
  .word 0xadee3370
  .word 0xadac0004
  .word 0x0c148548
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfb40020
  .word 0xdfbf0028
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x8e6e0008
  .word 0x0240202d
  .word 0xadcf0004
  .word 0x8daf3370
  .word 0x01f47823
  .word 0x0c148548
  .word 0xadaf3370
  .word 0x1000fff0
  .word 0x24020001
  .word 0x00000000
}
// FUN_0051FFF0
asm void FUN_0051fff0(int *param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb00000
  .word 0xffb10008
  .word 0x3c10009b
  .word 0xffbf0010
  .word 0x0080882d
  .word 0xae00cc20
  .word 0x00a0202d
  .word 0x0c140e46
  .word 0x00c0282d
  .word 0x240fffff
  .word 0x544f0005
  .word 0xdfb00000
  .word 0x8e0fcc20
  .word 0x55e00001
  .word 0xae2f0000
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
// FUN_00520048
asm u32 FUN_00520048(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x0000702d
  .word 0xffb30018
  .word 0xffb50028
  .word 0xffb00000
  .word 0x0080982d
  .word 0xffb10008
  .word 0xffb20010
  .word 0xffb40020
  .word 0xffb60030
  .word 0xffb70038
  .word 0xffbf0040
  .word 0x8cb20008
  .word 0x1240002b
  .word 0x00a0a82d
  .word 0x948e000c
  .word 0x31cf0008
  .word 0x11e00004
  .word 0x00000000
  .word 0x8c8f0010
  .word 0x55e00007
  .word 0x8eb10000
  .word 0x0c14a274
  .word 0x00000000
  .word 0x14400020
  .word 0x240effff
  .word 0x966e000c
  .word 0x8eb10000
  .word 0x31cf0002
  .word 0x11e0002c
  .word 0x0000902d
  .word 0x24160400
  .word 0x1640000a
  .word 0x2e4f0401
  .word 0x8e340000
  .word 0x8e260004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10c0fffa
  .word 0x26310008
  .word 0x00c0902d
  .word 0x2e4f0401
  .word 0x8e620024
  .word 0x02c0302d
  .word 0x8e64001c
  .word 0x024f300b
  .word 0x0040f809
  .word 0x0280282d
  .word 0x18400013
  .word 0x0282a021
  .word 0x8eaf0008
  .word 0x02429023
  .word 0x01e27823
  .word 0x15e0ffe9
  .word 0xaeaf0008
  .word 0x0000702d
  .word 0xdfb00000
  .word 0x01c0102d
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfb40020
  .word 0xdfb50028
  .word 0xdfb60030
  .word 0xdfb70038
  .word 0xdfbf0040
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x966f000c
  .word 0x240effff
  .word 0x35ef0040
  .word 0x1000fff0
  .word 0xa66f000c
  .word 0x31cf0001
  .word 0x000f7c00
  .word 0x000f7c03
  .word 0x15e0004f
  .word 0x0000b82d
  .word 0x1640000a
  .word 0x31cf0200
  .word 0x8e340000
  .word 0x8e260004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10c0fffa
  .word 0x26310008
  .word 0x00c0902d
  .word 0x31cf0200
  .word 0x11e00016
  .word 0x8e700008
  .word 0x0250782b
  .word 0x8e640000
  .word 0x024f800b
  .word 0x0280282d
  .word 0x0c1484c0
  .word 0x0200302d
  .word 0x8e6f0008
  .word 0x8e6e0000
  .word 0x01f07823
  .word 0x01d07021
  .word 0xae6f0008
  .word 0xae6e0000
  .word 0x0240802d
  .word 0x8eaf0008
  .word 0x0290a021
  .word 0x02509023
  .word 0x01f07823
  .word 0x11e0ffca
  .word 0xaeaf0008
  .word 0x1000ffdf
  .word 0x966e000c
  .word 0x8e640000
  .word 0x8e6f0010
  .word 0x01e4782b
  .word 0x11e0000f
  .word 0x0212782b
  .word 0x11e0000d
  .word 0x0280282d
  .word 0x0c1484c0
  .word 0x0200302d
  .word 0x8e6f0000
  .word 0x0260202d
  .word 0x01f07821
  .word 0x0c147dca
  .word 0xae6f0000
  .word 0x5040ffea
  .word 0x8eaf0008
  .word 0x1000ffc4
  .word 0x966f000c
  .word 0x00000000
  .word 0x8e700014
  .word 0x0250782b
  .word 0x55e0000b
  .word 0x8e640000
  .word 0x8e620024
  .word 0x0200302d
  .word 0x8e64001c
  .word 0x0040f809
  .word 0x0280282d
  .word 0x1c40ffdb
  .word 0x0040802d
  .word 0x1000ffb6
  .word 0x966f000c
  .word 0x00000000
  .word 0x0280282d
  .word 0x0240302d
  .word 0x0c1484c0
  .word 0x0240802d
  .word 0x8e6f0008
  .word 0x8e6e0000
  .word 0x01f27823
  .word 0x01d27021
  .word 0xae6f0008
  .word 0x1000ffcd
  .word 0xae6e0000
  .word 0x1640000a
  .word 0x00000000
  .word 0x0000b82d
  .word 0x8e340000
  .word 0x8e260004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x10c0fffa
  .word 0x26310008
  .word 0x00c0902d
  .word 0x16e0000a
  .word 0x0256782b
  .word 0x0280202d
  .word 0x2405000a
  .word 0x0c148436
  .word 0x0240302d
  .word 0x10400040
  .word 0x00547823
  .word 0x25f60001
  .word 0x24170001
  .word 0x0256782b
  .word 0x8e6e0008
  .word 0x0240682d
  .word 0x8e6c0014
  .word 0x02cf680a
  .word 0x8e640000
  .word 0x8e6f0010
  .word 0x01e4782b
  .word 0x11e0001d
  .word 0x01cc8021
  .word 0x020d782a
  .word 0x11e0001a
  .word 0x0280282d
  .word 0x0c1484c0
  .word 0x0200302d
  .word 0x8e6f0000
  .word 0x0260202d
  .word 0x01f07821
  .word 0x0c147dca
  .word 0xae6f0000
  .word 0x5440ff7f
  .word 0x966f000c
  .word 0x02d0b023
  .word 0x56c00006
  .word 0x8eaf0008
  .word 0x0c147dca
  .word 0x0260202d
  .word 0x1440ff77
  .word 0x0000b82d
  .word 0x8eaf0008
  .word 0x0290a021
  .word 0x02509023
  .word 0x01f07823
  .word 0x15e0ffc9
  .word 0xaeaf0008
  .word 0x1000ff63
  .word 0x0000702d
  .word 0x00000000
  .word 0x01ac782a
  .word 0x55e0000a
  .word 0x8e640000
  .word 0x8e620024
  .word 0x0180302d
  .word 0x8e64001c
  .word 0x0040f809
  .word 0x0280282d
  .word 0x1c40ffe7
  .word 0x0040802d
  .word 0x1000ff63
  .word 0x966f000c
  .word 0x01a0802d
  .word 0x0280282d
  .word 0x0c1484c0
  .word 0x01a0302d
  .word 0x8e6f0008
  .word 0x8e6e0000
  .word 0x01f07823
  .word 0x01d07021
  .word 0xae6f0008
  .word 0x1000ffda
  .word 0xae6e0000
  .word 0x1000ffc1
  .word 0x26560001
  .word 0x00000000
}
#pragma optimization_level 3
#pragma schedule on
// FUN_00520410
asm u32 FUN_00520410(int param_1,u32 (*param_2)(int))
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb20010
  .word 0xffb30018
  .word 0xffb40020
  .word 0x249201d8
  .word 0xffb00000
  .word 0x0000982d
  .word 0xffb10008
  .word 0xffbf0028
  .word 0x12400011
  .word 0x00a0a02d
  .word 0x8e510004
  .word 0x2631ffff
  .word 0x0620000a
  .word 0x8e500008
  .word 0x860f000c
  .word 0x51e00005
  .word 0x2631ffff
  .word 0x0280f809
  .word 0x0200202d
  .word 0x02629825
  .word 0x2631ffff
  .word 0x0621fff8
  .word 0x26100058
  .word 0x8e520000
  .word 0x5640fff2
  .word 0x8e510004
  .word 0x0260102d
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfb40020
  .word 0xdfbf0028
  .word 0x03e00008
  .word 0x27bd0030
}
#pragma schedule off
#pragma optimization_level 2
// FUN_005204A0
asm u8 * FUN_005204a0(int param_1,u32 param_2,void *param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffb10008
  .word 0xffb00000
  .word 0xffb20010
  .word 0x0080882d
  .word 0xffb30018
  .word 0x00c0802d
  .word 0xffbf0020
  .word 0x00c0202d
  .word 0x10c00016
  .word 0x00a0902d
  .word 0x3c13007c
  .word 0x0c14904a
  .word 0x2665eb60
  .word 0x10400006
  .word 0x0200202d
  .word 0x3c05007c
  .word 0x0c14904a
  .word 0x24a5eb28
  .word 0x14400004
  .word 0x0000782d
  .word 0xae300034
  .word 0xae320030
  .word 0x266feb60
  .word 0xdfb00000
  .word 0x01e0102d
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfbf0020
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x1000fff6
  .word 0x3c13007c
}
#pragma push
#pragma schedule on
// FUN_00520528
u8 ** FUN_00520528(void)
{
  return (u8 **)PTR_DAT_007beb30_abs;
}
#pragma pop
#pragma tailcall on
// FUN_00520538
asm void FUN_00520538(u32 param_1,void *param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0080782d
  .word 0xffbf0000
  .word 0x3c0e0078
  .word 0x00a0302d
  .word 0x8dc42f30
  .word 0xdfbf0000
  .word 0x01e0282d
  .word 0x08148128
  .word 0x27bd0010
}
// FUN_00520560
asm void FUN_00520560(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c0f0078
  .word 0xffbf0000
  .word 0x8de42f30
  .word 0xdfbf0000
  .word 0x0814814a
  .word 0x27bd0010
  .word 0x00000000
}
// FUN_00520580
asm void FUN_00520580(int *param_1,u64 param_2,u64 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffb10008
  .word 0xffb00000
  .word 0x0080882d
  .word 0xffbf0010
  .word 0x00a0202d
  .word 0x3c10009b
  .word 0x00c0282d
  .word 0xae00cc20
  .word 0x0c140e16
  .word 0x00e0302d
  .word 0x240fffff
  .word 0x544f0005
  .word 0xdfb00000
  .word 0x8e0fcc20
  .word 0x55e00001
  .word 0xae2f0000
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfbf0010
  .word 0x03e00008
  .word 0x27bd0020
}
// FUN_005205D8
asm void FUN_005205d8(int *param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffb00070
  .word 0xffb10078
  .word 0xffb20080
  .word 0xffbf0088
  .word 0x948e000c
  .word 0x31cf0002
  .word 0x11e0000c
  .word 0x0080802d
  .word 0x248e0043
  .word 0x240f0001
  .word 0xac8f0014
  .word 0xac8e0010
  .word 0xac8e0000
  .word 0xdfb00070
  .word 0xdfb10078
  .word 0xdfb20080
  .word 0xdfbf0088
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x8485000e
  .word 0x04a00008
  .word 0x35cf0800
  .word 0x8c840054
  .word 0x0c147ffc
  .word 0x03a0302d
  .word 0x04410025
  .word 0x8faf0004
  .word 0x960e000c
  .word 0x35cf0800
  .word 0x0000902d
  .word 0xa60f000c
  .word 0x24110400
  .word 0x8e040054
  .word 0x0c148270
  .word 0x24050400
  .word 0x14400009
  .word 0x960f000c
  .word 0x260d0043
  .word 0x240e0001
  .word 0xae0d0010
  .word 0x35ef0002
  .word 0xae0e0014
  .word 0xa60f000c
  .word 0x1000ffe1
  .word 0xae0d0000
  .word 0x3c0e0052
  .word 0x8e0d0054
  .word 0x25cef9e0
  .word 0x35ef0080
  .word 0xae020010
  .word 0xadae003c
  .word 0xa60f000c
  .word 0xae110014
  .word 0x1240ffd7
  .word 0xae020000
  .word 0x0c140e44
  .word 0x8604000e
  .word 0x5040ffd4
  .word 0xdfb00070
  .word 0x960f000c
  .word 0x35ef0001
  .word 0x1000ffcf
  .word 0xa60f000c
  .word 0x24110400
  .word 0x340d8000
  .word 0x31eff000
  .word 0x39ee2000
  .word 0x15ed000b
  .word 0x2dd20001
  .word 0x3c0f0052
  .word 0x8e0e0028
  .word 0x25ef3d40
  .word 0x15cf0007
  .word 0x960f000c
  .word 0xae11004c
  .word 0x35ef0400
  .word 0x00000000
  .word 0x1000ffd2
  .word 0xa60f000c
  .word 0x960f000c
  .word 0x1000fffc
  .word 0x35ef0800
  .word 0x00000000
}
#pragma schedule on
// FUN_00520728
#pragma tailcall on
asm u32 * FUN_00520728(int param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0080282d
  .word 0xffbf0000
  .word 0x3c0f0078
  .word 0x8de42f30
  .word 0xdfbf0000
  .word 0x08148270
  .word 0x27bd0010
}
#pragma tailcall off
#pragma schedule on
// FUN_00520748
#pragma tailcall on
asm void FUN_00520748(u64 param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0080282d
  .word 0xffbf0000
  .word 0x3c0f0078
  .word 0x8de42f30
  .word 0xdfbf0000
  .word 0x08147eec
  .word 0x27bd0010
}
#pragma tailcall off
#pragma schedule off
// FUN_00520768
asm void FUN_00520768(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c0f0078
  .word 0xffb60030
  .word 0x0005283c
  .word 0xffb30018
  .word 0x0005283e
  .word 0xffb10008
  .word 0x25f62f40
  .word 0xffb20010
  .word 0x3c0f0078
  .word 0xffb40020
  .word 0xffb50028
  .word 0xffb70038
  .word 0x2414ffff
  .word 0xffb00000
  .word 0xffbf0040
  .word 0x0080b82d
  .word 0x8ed30008
  .word 0xddee3350
  .word 0x8e6d0004
  .word 0x240ffffc
  .word 0x00ae282d
  .word 0x01afa824
  .word 0x64a50010
  .word 0x3c0f0078
  .word 0x0005903c
  .word 0x8dee3358
  .word 0x0012903f
  .word 0x11d40008
  .word 0x02758821
  .word 0x0012783c
  .word 0x240ef000
  .word 0x000f783e
  .word 0x65ef0fff
  .word 0x01ee7824
  .word 0x000f903c
  .word 0x0012903f
  .word 0x0c148e4c
  .word 0x0240282d
  .word 0x1054001e
  .word 0x0040802d
  .word 0x0051782b
  .word 0x11e00004
  .word 0x3c0e0078
  .word 0x5676001a
  .word 0xdfb00000
  .word 0x3c0e0078
  .word 0x8dcf3370
  .word 0x01f27821
  .word 0x1611001f
  .word 0xadcf3370
  .word 0x320f0fff
  .word 0x15e0001d
  .word 0x3c0d0078
  .word 0x02551021
  .word 0x8ece0008
  .word 0x344f0001
  .word 0xadcf0004
  .word 0x3c0a0078
  .word 0x3c090078
  .word 0x3c0f0078
  .word 0xdd4c3360
  .word 0x8dee3370
  .word 0xdd2d3368
  .word 0x018e782b
  .word 0x01ae582b
  .word 0x01cf600b
  .word 0x01cb680b
  .word 0xfd4c3360
  .word 0xfd2d3368
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfb40020
  .word 0xdfb50028
  .word 0xdfb60030
  .word 0xdfb70038
  .word 0xdfbf0040
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x3c0d0078
  .word 0x240fffff
  .word 0x8dae3358
  .word 0x55cf003b
  .word 0x3c0d0078
  .word 0xadb03358
  .word 0x260f0008
  .word 0x31e5000f
  .word 0x10a00034
  .word 0x240f0010
  .word 0x01e58823
  .word 0x02118021
  .word 0x02127821
  .word 0x240e1000
  .word 0x31ef0fff
  .word 0x02e0202d
  .word 0x01cf702f
  .word 0x000e703c
  .word 0x000e703f
  .word 0x022e8821
  .word 0x0c148e4c
  .word 0x0220282d
  .word 0x240fffff
  .word 0x144f0003
  .word 0x3c0d0078
  .word 0x0000882d
  .word 0x0200102d
  .word 0x00507823
  .word 0x8dae3370
  .word 0x01f11021
  .word 0x3c0f0078
  .word 0x344c0001
  .word 0x01d17021
  .word 0x25ef2f40
  .word 0xadae3370
  .word 0xadf00008
  .word 0x126fffc4
  .word 0xae0c0004
  .word 0x2eaf0010
  .word 0x11e00003
  .word 0x240f0001
  .word 0x1000ffcb
  .word 0xae0f0004
  .word 0x8e6e0004
  .word 0x26adfff4
  .word 0x240ffff0
  .word 0x240c0005
  .word 0x01afa824
  .word 0x31ce0001
  .word 0x01d57025
  .word 0x02757821
  .word 0xae6e0004
  .word 0x2ead0010
  .word 0xadec0008
  .word 0x15a0ffb2
  .word 0xadec0004
  .word 0x26650008
  .word 0x0c147eec
  .word 0x02e0202d
  .word 0x1000ffae
  .word 0x3c0a0078
  .word 0x1000ffce
  .word 0x0000882d
  .word 0x02117023
  .word 0x8daf3370
  .word 0x01ee7821
  .word 0x1000ffc3
  .word 0xadaf3370
  .word 0x00000000
}
// FUN_005209C0
asm u32 * FUN_005209c0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24a50013
  .word 0xffb20010
  .word 0x2caf001f
  .word 0xffb00000
  .word 0xffb10008
  .word 0xffb30018
  .word 0xffb40020
  .word 0xffbf0028
  .word 0x15e001ae
  .word 0x0080902d
  .word 0x240ffff0
  .word 0x00af8824
  .word 0x0c148532
  .word 0x0240202d
  .word 0x2e2f01f8
  .word 0x11e00167
  .word 0x3c140078
  .word 0x268f2f40
  .word 0x022f6021
  .word 0x8d90000c
  .word 0x120c0018
  .word 0x001140c2
  .word 0x8e0e0004
  .word 0x240ffffc
  .word 0x8e07000c
  .word 0x0240202d
  .word 0x01cf5024
  .word 0x8e090008
  .word 0x020a7021
  .word 0x8dcf0004
  .word 0xace90008
  .word 0xad27000c
  .word 0x35ef0001
  .word 0xadcf0004
  .word 0x0c148548
  .word 0x00000000
  .word 0x26020008
  .word 0xdfb00000
  .word 0xdfb10008
  .word 0xdfb20010
  .word 0xdfb30018
  .word 0xdfb40020
  .word 0xdfbf0028
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x25080002
  .word 0x3c0f0078
  .word 0x25ef2f48
  .word 0x8df00008
  .word 0x120f003a
  .word 0x240efffc
  .word 0x8e0f0004
  .word 0x01ee5024
  .word 0x0151682b
  .word 0x11a0013c
  .word 0x022a7823
  .word 0x000f783c
  .word 0x000f783e
  .word 0x000f582f
  .word 0x296f0010
  .word 0x15e00014
  .word 0x3c0f0078
  .word 0x362f0001
  .word 0x3c0e0078
  .word 0xae0f0004
  .word 0x02112821
  .word 0x25ce2f48
  .word 0x000b603c
  .word 0x356f0001
  .word 0xadc50008
  .word 0x000c603f
  .word 0xadc5000c
  .word 0x000f783c
  .word 0xacae0008
  .word 0x000f783f
  .word 0x00ac6821
  .word 0xacaf0004
  .word 0x0240202d
  .word 0xadac0000
  .word 0x1000ffd2
  .word 0xacae000c
  .word 0x25ed2f48
  .word 0xadad000c
  .word 0x05600005
  .word 0xadad0008
  .word 0x020a7021
  .word 0x0240202d
  .word 0x1000ffc8
  .word 0x8dcf0004
  .word 0x2d4f0200
  .word 0x11e000da
  .word 0x000a60c2
  .word 0x25adfff8
  .word 0x000c78c0
  .word 0x8dae0004
  .word 0x01ed3821
  .word 0x000c6082
  .word 0x240f0001
  .word 0x8ce90008
  .word 0x018f7814
  .word 0xae07000c
  .word 0x000f783c
  .word 0xae090008
  .word 0x000f783f
  .word 0xad30000c
  .word 0x01cf7025
  .word 0xadae0004
  .word 0xacf00008
  .word 0x290f0000
  .word 0x250d0003
  .word 0x010f680a
  .word 0x268e2f40
  .word 0x000d6883
  .word 0x9dcc0004
  .word 0x240f0001
  .word 0x01af4814
  .word 0x0189702b
  .word 0x15c0005a
  .word 0x268f2f40
  .word 0x012c7824
  .word 0x15e00010
  .word 0x3c0f0078
  .word 0x240ffffc
  .word 0x00094878
  .word 0x010f7824
  .word 0x012c7024
  .word 0x15c00009
  .word 0x25e80004
  .word 0x0180702d
  .word 0x00094878
  .word 0x012e7824
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x11e0fffa
  .word 0x25080004
  .word 0x3c0f0078
  .word 0x25e52f40
  .word 0x01e0182d
  .word 0x00a0202d
  .word 0x00a0102d
  .word 0x000878c0
  .word 0x0100302d
  .word 0x01e56021
  .word 0x0180682d
  .word 0x8db0000c
  .word 0x120d0016
  .word 0x290f003f
  .word 0x2407fffc
  .word 0x8e0f0004
  .word 0x01e75024
  .word 0x01517823
  .word 0x022a7023
  .word 0x000f583c
  .word 0x000e703c
  .word 0x000e703e
  .word 0x0151782b
  .word 0x11e00002
  .word 0x000b583e
  .word 0x000e582f
  .word 0x296f0010
  .word 0x51e0007e
  .word 0x8e090008
  .word 0x05610073
  .word 0x020a7021
  .word 0x8e10000c
  .word 0x560dffef
  .word 0x8e0f0004
  .word 0x290f003f
  .word 0x11e00003
  .word 0x25ad0008
  .word 0x25ad0008
  .word 0x25080001
  .word 0x25080001
  .word 0x310f0003
  .word 0x55e0ffe2
  .word 0x8db0000c
  .word 0x0009783c
  .word 0x246d2f40
  .word 0x000f783f
  .word 0x000f7027
  .word 0x30cf0003
  .word 0x15e0005a
  .word 0x24c6ffff
  .word 0x8daf0004
  .word 0x01ee7824
  .word 0xadaf0004
  .word 0x9c8e0004
  .word 0x00094878
  .word 0x01c9782b
  .word 0x15e00011
  .word 0x268f2f40
  .word 0x1120000e
  .word 0x012e7824
  .word 0x15e0ffcb
  .word 0x000878c0
  .word 0x9c4e0004
  .word 0x00094878
  .word 0x012e7824
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x11e0fffa
  .word 0x25080004
  .word 0x1000ffc1
  .word 0x000878c0
  .word 0x00000000
  .word 0x268f2f40
  .word 0x8dee0008
  .word 0x8dcd0004
  .word 0x240ffffc
  .word 0x01af6824
  .word 0x01b1702b
  .word 0x11c00037
  .word 0x022d7823
  .word 0x000f783c
  .word 0x000f783e
  .word 0x000f582f
  .word 0x26902f40
  .word 0x2413fffc
  .word 0x8e0e0008
  .word 0x8dcf0004
  .word 0x01f37824
  .word 0x01f1782b
  .word 0x15e00004
  .word 0x0240202d
  .word 0x296f0010
  .word 0x11e0001a
  .word 0x268c2f40
  .word 0x0c1481da
  .word 0x0220282d
  .word 0x8e0f0008
  .word 0x8dee0004
  .word 0x01d37024
  .word 0x01d1782b
  .word 0x11e0001d
  .word 0x022e7823
  .word 0x000f783c
  .word 0x000f783e
  .word 0x000f582f
  .word 0x268e2f40
  .word 0x8dcd0008
  .word 0x8daf0004
  .word 0x240efffc
  .word 0x01ee7824
  .word 0x01f1782b
  .word 0x15e00003
  .word 0x296f0010
  .word 0x11e00005
  .word 0x268c2f40
  .word 0x0c148548
  .word 0x0240202d
  .word 0x1000ff28
  .word 0x0000102d
  .word 0x362d0001
  .word 0x8d900008
  .word 0x356e0001
  .word 0x000e703c
  .word 0x0240202d
  .word 0xae0d0004
  .word 0x02117821
  .word 0x000e703f
  .word 0xad8f0008
  .word 0x1000ff1a
  .word 0xadee0004
  .word 0x01d17823
  .word 0x000f583c
  .word 0x1000ffe4
  .word 0x000b583e
  .word 0x01b17823
  .word 0x000f583c
  .word 0x1000ffca
  .word 0x000b583e
  .word 0x258cfff8
  .word 0x8d8f0008
  .word 0x11ecffa2
  .word 0x30cf0003
  .word 0x1000ffa6
  .word 0x9c8e0004
  .word 0x8e07000c
  .word 0x8dcf0004
  .word 0x0240202d
  .word 0x8e090008
  .word 0x35ef0001
  .word 0xadcf0004
  .word 0xace90008
  .word 0x1000ff03
  .word 0xad27000c
  .word 0x362d0001
  .word 0x8e07000c
  .word 0x3c0e0078
  .word 0x02112821
  .word 0xae0d0004
  .word 0xace90008
  .word 0x25ce2f48
  .word 0x000b603c
  .word 0xad27000c
  .word 0x356f0001
  .word 0xadc50008
  .word 0x000c603f
  .word 0xadc5000c
  .word 0x000f783c
  .word 0xacae0008
  .word 0x000f783f
  .word 0x00ac6821
  .word 0xadac0000
  .word 0x0240202d
  .word 0x1000ff1b
  .word 0xacaf0004
  .word 0x000a7242
  .word 0x11c00004
  .word 0x2dcf0005
  .word 0x11e00026
  .word 0x000a7982
  .word 0x25ec0038
  .word 0x000c78c0
  .word 0x268b2f40
  .word 0x01eb3821
  .word 0x8ce90008
  .word 0x55270010
  .word 0x8d2f0004
  .word 0x258e0003
  .word 0x298f0000
  .word 0x01cf600b
  .word 0x000c6883
  .word 0x8d6e0004
  .word 0x240f0001
  .word 0x01af7814
  .word 0x000f783c
  .word 0x000f783f
  .word 0x01cf7025
  .word 0xad6e0004
  .word 0xae07000c
  .word 0xae090008
  .word 0x1000ff1c
  .word 0xad30000c
  .word 0x240efffc
  .word 0x01ee7824
  .word 0x014f782b
  .word 0x51e0fff8
  .word 0x8d27000c
  .word 0x8d290008
  .word 0x5127fff5
  .word 0x8d27000c
  .word 0x8d2f0004
  .word 0x01ee7824
  .word 0x014f782b
  .word 0x55e0fffa
  .word 0x8d290008
  .word 0x1000ffee
  .word 0x8d27000c
  .word 0x2dcf0015
  .word 0x15e0ffda
  .word 0x25cc005b
  .word 0x2dcf0055
  .word 0x11e00003
  .word 0x000a7b02
  .word 0x1000ffd5
  .word 0x25ec006e
  .word 0x2dcf0155
  .word 0x11e00003
  .word 0x000a7bc2
  .word 0x1000ffd0
  .word 0x25ec0077
  .word 0x2dcf0555
  .word 0x11e00003
  .word 0x000a7c82
  .word 0x1000ffcb
  .word 0x25ec007c
  .word 0x1000ffc9
  .word 0x240c007e
  .word 0x01517823
  .word 0x000f583c
  .word 0x1000fec5
  .word 0x000b583e
  .word 0x00117242
  .word 0x11c00005
  .word 0x001140c2
  .word 0x2dcf0005
  .word 0x11e00027
  .word 0x00117982
  .word 0x25e80038
  .word 0x3c140078
  .word 0x000870c0
  .word 0x268f2f40
  .word 0x01cf6821
  .word 0x8db0000c
  .word 0x520dfeaa
  .word 0x25080001
  .word 0x240cfffc
  .word 0x8e0f0004
  .word 0x01ec5024
  .word 0x01517823
  .word 0x022a7023
  .word 0x000f583c
  .word 0x000e703c
  .word 0x000e703e
  .word 0x0151782b
  .word 0x11e00002
  .word 0x000b583e
  .word 0x000e582f
  .word 0x296f0010
  .word 0x51e00006
  .word 0x2508ffff
  .word 0x05610006
  .word 0x020a7021
  .word 0x8e10000c
  .word 0x560dffef
  .word 0x8e0f0004
  .word 0x1000fe94
  .word 0x25080001
  .word 0x8e07000c
  .word 0x8dcf0004
  .word 0x0240202d
  .word 0x8e090008
  .word 0x35ef0001
  .word 0xace90008
  .word 0x1000ff7c
  .word 0xadcf0004
  .word 0x2dcf0015
  .word 0x15e0ffd9
  .word 0x25c8005b
  .word 0x2dcf0055
  .word 0x11e00003
  .word 0x00117b02
  .word 0x1000ffd4
  .word 0x25e8006e
  .word 0x2dcf0155
  .word 0x11e00003
  .word 0x00117bc2
  .word 0x1000ffcf
  .word 0x25e80077
  .word 0x2dcf0555
  .word 0x11e00003
  .word 0x00117c82
  .word 0x1000ffca
  .word 0x25e8007c
  .word 0x1000ffc8
  .word 0x2408007e
  .word 0x1000fe54
  .word 0x24110010
}
// FUN_005210A8
asm u32 FUN_005210a8(u64 param_1,u32 *param_2,long param_3,long param_4)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0000102d
  .word 0x10c00007
  .word 0x03a5280a
  .word 0x10e00005
  .word 0x2402ffff
  .word 0x90cf0000
  .word 0xacaf0000
  .word 0x90ce0000
  .word 0x000e102b
  .word 0x03e00008
  .word 0x27bd0010
}
// FUN_005210D8
asm u64 FUN_005210d8(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x2cc20010
  .word 0x14400026
  .word 0x30a500ff
  .word 0x3082000f
  .word 0x14400023
  .word 0x0080382d
  .word 0x00051a38
  .word 0x3c020101
  .word 0x34420101
  .word 0x00021438
  .word 0x34420101
  .word 0x00021438
  .word 0x34420101
  .word 0x0065502d
  .word 0x3c038080
  .word 0x34638080
  .word 0x00031c38
  .word 0x34638080
  .word 0x00031c38
  .word 0x34638080
  .word 0x700a46e9
  .word 0x71084b89
  .word 0x0040202d
  .word 0x70634389
  .word 0x78e20000
  .word 0x704914c9
  .word 0x70845389
  .word 0x70021ce9
  .word 0x704a1248
  .word 0x70431489
  .word 0x70481489
  .word 0x70491ba9
  .word 0x00431025
  .word 0x54400006
  .word 0x00e0202d
  .word 0x24c6fff0
  .word 0x2cc20010
  .word 0x1040fff2
  .word 0x24e70010
  .word 0x00e0202d
  .word 0x3c02ffff
  .word 0x24c6ffff
  .word 0x3442ffff
  .word 0x10c20008
  .word 0x00000000
  .word 0x3c03ffff
  .word 0x3463ffff
  .word 0x90820000
  .word 0x10450005
  .word 0x24c6ffff
  .word 0x14c3fffc
  .word 0x24840001
  .word 0x03e00008
  .word 0x0000102d
  .word 0x03e00008
  .word 0x0080102d
}
// FUN_005211B8
asm int FUN_005211b8(u8 (*param_1) [16],u8 (*param_2) [16],u32 param_3)
{
  .set noreorder
  .word 0x2cc20010
  .word 0x14400011
  .word 0x00851025
  .word 0x3042000f
  .word 0x1440000e
  .word 0x00000000
  .word 0x78830000
  .word 0x2cc70020
  .word 0x78a20000
  .word 0x24840010
  .word 0x704344c9
  .word 0x24a20010
  .word 0x710753a9
  .word 0x01484825
  .word 0x0049280a
  .word 0x55200003
  .word 0x2484fff0
  .word 0x10e0fff4
  .word 0x24c6fff0
  .word 0x3c02ffff
  .word 0x24c6ffff
  .word 0x3442ffff
  .word 0x10c2000c
  .word 0x00000000
  .word 0x3c07ffff
  .word 0x34e7ffff
  .word 0x90830000
  .word 0x90a20000
  .word 0x10620003
  .word 0x24840001
  .word 0x03e00008
  .word 0x00621023
  .word 0x24c6ffff
  .word 0x14c7fff8
  .word 0x24a50001
  .word 0x03e00008
  .word 0x0000102d
  .word 0x00000000
}