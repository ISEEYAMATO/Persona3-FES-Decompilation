#include "rw/rprandom.h"

extern RwUInt32 D_0095D410[];
#pragma alias D_0095D410_abs D_0095D410
extern u8 D_0095D410_abs[];
extern RwUInt32 uGpffffaed4;

typedef struct RpRandomGlobals
{
    RwUInt32 *state;
    RwUInt32 *jptr;
    RwUInt32 *kptr;
    RwUInt32 *end;
} RpRandomGlobals;

extern RwInt32 iGpffffba88;

#define RANDOMGLOBALS ((RpRandomGlobals*)((RwUInt8*)&rwGlobals + iGpffffba88))

// FUN_00488c70
#pragma optimization_level 3
#pragma schedule off
#ifndef PC_BUILD
asm void RpRandomSeedMT(RwUInt32 seed)
{
  .set noreorder
  .word 0x3c030096
  .word 0x34860001
  .word 0x2463d410
  .word 0xaf80aed4
  .word 0x24650004
  .word 0x24030270
  .word 0x2464ffff
  .word 0x3c030096
  .word 0x1080000b
  .word 0xac66d410
  .word 0x3c030001
  .word 0x34630dcd
  .word 0x00c33018
  .word 0x2484ffff
  .word 0xaca60000
  .word 0x24a50004
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma optimization_level 2

// FUN_00488dd0
#pragma optimization_level 3
void RpRandomSeed(RwUInt32 seed)
{
    RwInt32 j;
    RwInt32 offset;
    RwInt32 warmup;
    RwUInt32* state;
    RpRandomGlobals* globals;

    j = 1;
    offset = sizeof(RwUInt32);
    *RANDOMGLOBALS->state = seed;

    do
    {
        j += 6;
        state = (RwUInt32*)((RwUInt8*)RANDOMGLOBALS->state + offset);
        *state = state[-1] * 0x41c64e6d + 0x3039;

        state = (RwUInt32*)((RwUInt8*)RANDOMGLOBALS->state + offset);
        state[1] = *state * 0x41c64e6d + 0x3039;

        state = (RwUInt32*)((RwUInt8*)RANDOMGLOBALS->state + offset);
        state[2] = state[1] * 0x41c64e6d + 0x3039;

        state = (RwUInt32*)((RwUInt8*)RANDOMGLOBALS->state + offset);
        state[3] = state[2] * 0x41c64e6d + 0x3039;

        state = (RwUInt32*)((RwUInt8*)RANDOMGLOBALS->state + offset);
        state[4] = state[3] * 0x41c64e6d + 0x3039;

        state = (RwUInt32*)((RwUInt8*)RANDOMGLOBALS->state + offset);
        offset += 6 * sizeof(RwUInt32);
        state[5] = state[4] * 0x41c64e6d + 0x3039;
    } while (j < 0x1f);

    warmup = 0;
    globals = RANDOMGLOBALS;
    globals->jptr = globals->state + 3;
    globals->kptr = globals->state;

    do
    {
        RpRandom();
        warmup++;
    } while (warmup < 0x136);
}
#pragma optimization_level 2

// FUN_00488f30
#ifndef PC_BUILD
asm RwUInt32 RpRandom(void)
{
  .set noreorder
  .word 0x8f82ba88
  .word 0x3c050096
  .word 0x24a50070
  .word 0x00a21821
  .word 0x8c620008
  .word 0x8c640004
  .word 0x8c420000
  .word 0x8c830000
  .word 0x00621021
  .word 0xac820000
  .word 0x8f82ba88
  .word 0x00a22821
  .word 0x8ca30004
  .word 0x8c620000
  .word 0x24640004
  .word 0xaca40004
  .word 0x00021042
  .word 0x8ca3000c
  .word 0x0002107c
  .word 0x0083082b
  .word 0x1020000c
  .word 0x0002107e
  .word 0x8ca30008
  .word 0x24640004
  .word 0xaca40008
  .word 0x8ca3000c
  .word 0x0083182b
  .word 0x1460000b
  .word 0x00000000
  .word 0x8ca30000
  .word 0xaca30008
  .word 0x10000007
  .word 0x00000000
  .word 0x8ca30000
  .word 0xaca30004
  .word 0x8ca30008
  .word 0x24630004
  .word 0x1000fff9
  .word 0xaca30008
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* Recovered engine region 0x430000-0x4AFFFF */
#include "temporary.h"

typedef int (*code)(); /* PC: unnamed varargs */
typedef u8 bool;
#ifndef CONCAT44
#define CONCAT44(hi, lo) ((((u64)(hi)) << 32) | (u32)(lo))
#endif
#ifndef CONCAT22
#define CONCAT22(hi, lo) ((u32)((((u32)(u16)(hi)) << 16) | (u16)(lo)))
#endif

typedef union Vec128 { struct { u32 _0_4_; u32 _4_4_; u32 _8_4_; u32 _12_4_; }; struct { u64 _0_8_; u64 _8_8_; }; u8 _bytes[16]; } Vec128;
static Vec128 rwVecZero(void) { Vec128 v; v._0_8_=0; v._8_8_=0; return v; }
static Vec128 rwVecKeep(Vec128 v) { return v; }
#define _lqc2(x) rwVecZero()
#define _sqc2(x) rwVecKeep(x)
#define _qmtc2(x) rwVecZero()
#define _qmfc2(x) rwVecZero()
#define _vwaitq() ((u32)0)
#define _ctc2(x) ((void)0)
#define _vnop() ((void)0)
#define DI() ((void)0)
#define EI() ((void)0)
#define SYNC(x) ((void)0)
#define FlushCache(x) ((void)0)
#define _pcpyld(...) rwVecZero()
#define _pexew(...) rwVecZero()
#define _ppacw(...) rwVecZero()
#define _vabs(...) rwVecZero()
#define _vadd(...) rwVecZero()
#define _vaddabc(...) rwVecZero()
#define _vaddi(...) rwVecZero()
#define _vmadd(...) rwVecZero()
#define _vmadda(...) rwVecZero()
#define _vmaddabc(...) rwVecZero()
#define _vmaddbc(...) rwVecZero()
#define _vmax(...) rwVecZero()
#define _vmini(...) rwVecZero()
#define _vmsubbc(...) rwVecZero()
#define _vmul(...) rwVecZero()
#define _vmula(...) rwVecZero()
#define _vmulabc(...) rwVecZero()
#define _vmulbc(...) rwVecZero()
#define _vmuli(...) rwVecZero()
#define _vsub(...) rwVecZero()
extern u32 DAT_006b4608;
extern u32 DAT_006b4610;
extern u32 DAT_006b4618;
extern u32 DAT_006b4620;
extern u32 DAT_006b4650;
extern u32 DAT_006b4652;
extern u32 DAT_006b46d0;
extern u32 DAT_006b46d2;
extern u32 DAT_006b46d4;
extern u32 DAT_006b46d6;
extern u32 DAT_006b46d8;
extern u32 DAT_006b46da;
extern u32 DAT_006b46dc;
extern u32 DAT_006b46de;
extern u32 DAT_006b46e0;
extern u32 DAT_006b46e2;
extern u32 DAT_006b46e4;
extern u32 DAT_006b46e6;
extern u32 DAT_006b4712;
extern u32 DAT_006b4714;
extern u32 DAT_006b4716;
extern u32 DAT_006b4718;
extern u32 DAT_006b471a;
extern u32 DAT_006b471c;
extern u32 DAT_006b471e;
extern u32 DAT_006b477a;
extern u32 DAT_006b477c;
extern u32 DAT_006b477e;
extern u32 DAT_006b4780;
extern u32 DAT_006b4782;
extern u32 DAT_006b4784;
extern u32 DAT_006b4786;
extern u32 DAT_006b4788;
extern u32 DAT_006b478a;
extern u32 DAT_006b478c;
extern u32 DAT_006b478e;
extern u32 DAT_006b4790;
extern u32 DAT_006b4792;
extern u32 DAT_006b4794;
extern u32 DAT_006b4796;
extern u32 DAT_006b4798;
extern u32 DAT_006b479a;
extern u32 DAT_006b479c;
extern u32 DAT_006b479e;
extern u32 DAT_006b47a0;
extern u32 DAT_006b47a2;
extern u32 DAT_006b47a4;
extern u32 DAT_006b47a6;
extern u32 DAT_006b47ae;
extern u32 DAT_006b481a;
extern u32 DAT_006b4a48;
extern u32 DAT_006b4a50;
extern u32 DAT_006b4a78;
extern u32 DAT_006b4a80;
extern u32 DAT_006b4a90;
extern u32 DAT_006b4ab0;
extern u32 DAT_006b4ab4;
extern u32 DAT_006b4ab8;
extern u32 DAT_006b4abc;
extern u32 DAT_006b4ac0;
extern u32 DAT_006b4ac2;
extern u32 DAT_006b4ac4;
extern u32 DAT_006b4ac6;
extern u32 DAT_006b4ac8;
extern u32 DAT_006b4b20;
extern u32 DAT_006b4b28;
extern u32 DAT_006b4b80;
extern u32 DAT_006b4b82;
extern u32 DAT_006b4b84;
extern u32 DAT_006b4e00;
extern u32 DAT_007bc460;
extern u32 DAT_007bc6b0;
extern u32 DAT_007bc730;
extern u32 DAT_007caf94;
extern u32 DAT_007cafa8;
extern u32 DAT_007cafc0;
extern u32 DAT_007cb134;
extern u32 DAT_007cb138;
extern u32 DAT_007cdb10;
extern u32 DAT_007ce290;
extern u32 DAT_007ce6ac;
extern u32 DAT_007ce6bc;
extern u32 DAT_007ce6c0;
extern u32 DAT_007ce6c4;
extern u32 DAT_007ce6c8;
extern u32 DAT_007ce6cc;
extern u32 DAT_007ce6d0;
extern u32 DAT_007ce6d4;
extern u32 DAT_007ce6e0;
extern u32 DAT_007ce6e4;
extern u32 DAT_007ce6e8;
extern u32 DAT_007ce6ec;
extern u32 DAT_007ce6f0;
extern u32 DAT_007ce6f4;
extern u32 DAT_007ce700;
extern u32 DAT_007ce704;
extern u32 DAT_007ce70c;
extern u32 DAT_007ce710;
extern u32 DAT_007ce714;
extern u32 DAT_007ce718;
extern u32 DAT_007e094e;
extern u32 DAT_007e0952;
extern u32 DAT_007e0958;
extern u32 DAT_007e095a;
extern u32 DAT_0086be00;
extern u32 DAT_0086e6e8;
extern u32 DAT_0086e6f0;
extern u32 DAT_0086e6f4;
extern u32 DAT_0086e808;
extern u32 DAT_0086e80c;
extern u32 DAT_0086e810;
extern u32 DAT_0086e848;
extern u32 DAT_0086e9cc;
extern u32 DAT_0086eb8c;
extern u32 DAT_0086ed4c;
extern u32 DAT_0086eda0;
extern u32 DAT_0086ede8;
extern u32 DAT_0086edf4;
extern u32 DAT_0086ef08;
extern u32 DAT_0086ef0c;
extern u32 DAT_0086ef10;
extern u32 DAT_0086ef2c;
extern u32 DAT_0086ef38;
extern u32 DAT_0086ef39;
extern u32 DAT_0086ef3a;
extern u32 DAT_0086ef3b;
extern u32 DAT_0086ef3c;
extern u32 DAT_008717a0;
extern u32 DAT_008717e8;
extern u32 DAT_008717f0;
extern u32 DAT_008717f4;
extern u32 DAT_0087190c;
extern u32 DAT_0087193a;
extern u32 DAT_0087193b;
extern u32 DAT_0087193c;
extern u32 DAT_00871948;
extern u32 DAT_0087194a;
extern u32 DAT_0087194c;
extern u32 DAT_00871954;
extern u32 DAT_00871958;
extern u32 DAT_008719b0;
extern u32 DAT_0095c0e0;
extern u32 DAT_0095c0e4;
extern u32 DAT_0095c0e8;
extern u32 DAT_0095c0ec;
extern u32 DAT_0095c0f0;
extern u32 DAT_0095c0f4;
extern u32 DAT_0095c0f8;
extern u32 DAT_0095c0fc;
extern u32 DAT_0095c100;
extern u32 DAT_0095c110;
extern u32 DAT_0095c210;
extern u32 DAT_0095c21e;
extern u32 DAT_0095c21f;
extern u32 DAT_0095c220;
extern u32 DAT_0095c221;
extern u32 DAT_0095c23e;
extern u32 DAT_0095c23f;
extern u32 DAT_0095c240;
extern u32 DAT_0095c241;
extern u32 DAT_0095c258;
extern u32 DAT_0095c25c;
extern u32 DAT_0095c260;
extern u32 DAT_00960088;
extern code DAT_00960090;
extern code DAT_009600a0;
extern code DAT_0096017c;
extern code DAT_00960184;
extern u32 PTR_DAT_006b46f0;
extern u32 PTR_DAT_006b4720;
extern u32 PTR_DAT_006b4de0;
extern u32 PTR_FUN_006b4e60;
extern u8 cGpffffb9cc;
extern u32 fGpffff8110;
extern u32 fGpffff8248;
extern u32 fGpffff82d8;
extern u32 gp0xffffae24;
extern u32 gp0xffffb9f7;
extern u32 iGpffffb418;
extern u32 iGpffffb5a0;
extern u32 iGpffffb9fc;
extern u32 iGpffffba08;
extern u32 iGpffffba20;
extern u32 iGpffffba24;
extern u32 uGpffff82b8;
extern u32 uGpffff82d0;
extern u32 uGpffff82d4;
extern u32 uGpffffae20;
extern u32 uGpffffb418;
extern u32 uGpffffb9cc;
extern u32 uGpffffb9dc;
extern u32 uGpffffb9e0;
extern u32 uGpffffb9e4;
extern u32 uGpffffba00;
extern u32 uGpffffba04;
extern u32 uGpffffba08;
extern u32 uGpffffba28;
extern char getCopCondition(int,int);

extern code FUN_00100d80;
extern code FUN_00100ec0;
extern code FUN_001016b0;
extern code FUN_00102100;
extern code FUN_001023a0;
extern code FUN_00108570;
extern code FUN_001085c0;
extern code FUN_00108670;
extern code FUN_00108710;
extern code FUN_00108fd0;
extern code FUN_0010a4e0;
extern code FUN_0010c1a0;
extern code FUN_0010c3a0;
extern code FUN_00111f30;
extern code FUN_001120c0;
extern code FUN_00112370;
extern code FUN_00112420;
extern code FUN_001124b0;
extern code FUN_001126b0;
extern code FUN_00112740;
extern code FUN_001127d0;
extern code FUN_00113a30;
extern code FUN_001140d0;
extern code FUN_001158b0;
extern code FUN_00115980;
extern code FUN_001159f0;
extern code FUN_00115bc0;
extern code FUN_0016c470;
extern code FUN_0016c4f0;
extern code FUN_0016c570;
extern code FUN_0016c5f0;
extern code FUN_0016c920;
extern code FUN_0016c970;
extern code FUN_0016cf40;
extern code FUN_0016cf90;
extern code FUN_0016f190;
extern code FUN_0016f1f0;
extern code FUN_0016f490;
extern code FUN_00170a40;
extern code FUN_00170ab0;
extern code FUN_00170b20;
extern code FUN_00170b90;
extern code FUN_00173300;
extern code FUN_00173380;
extern code FUN_00177410;
extern code FUN_0017b500;
extern code FUN_0017b5b0;
extern code FUN_0017b660;
extern code FUN_0017b860;
extern code FUN_0017be10;
extern code FUN_001831e0;
extern code FUN_0018bee0;
extern code FUN_0018c0c0;
extern code FUN_0018eb30;
extern code FUN_00194b20;
extern code FUN_00194b80;
extern code FUN_00195020;
extern code FUN_00195460;
extern code FUN_00198590;
extern code FUN_001a0040;
extern code FUN_001a0250;
extern code FUN_001a02c0;
extern code FUN_001a0dc0;
extern code FUN_001a5320;
extern code FUN_001a56b0;
extern code FUN_001a56c0;
extern code FUN_001a56d0;
extern code FUN_001a5700;
extern code FUN_001a57a0;
extern code FUN_001a5aa0;
extern code FUN_001a91b0;
extern code FUN_001a9390;
extern code FUN_001a9760;
extern code FUN_001aaa20;
extern code FUN_001aaac0;
extern code FUN_001acc30;
extern code FUN_001ad870;
extern code FUN_001ad910;
extern code FUN_001ad920;
extern code FUN_001ad940;
extern code FUN_001adc20;
extern code FUN_001adff0;
extern code FUN_001af930;
extern code FUN_001afa20;
extern code FUN_001aff70;
extern code FUN_001b0020;
extern code FUN_001b00c0;
extern code FUN_001b01b0;
extern code FUN_001b01d0;
extern code FUN_001b0220;
extern code FUN_001b0230;
extern code FUN_001b0240;
extern code FUN_001b0250;
extern code FUN_001b0260;
extern code FUN_001b9120;
extern code FUN_001bf220;
extern code FUN_001c6450;
extern code FUN_001c65e0;
extern code FUN_001c6720;
extern code FUN_001c6d70;
extern code FUN_001c6dd0;
extern code FUN_001c7130;
extern code FUN_001c7160;
extern code FUN_001c7270;
extern code FUN_001c7b10;
extern code FUN_001cd670;
extern code FUN_001d0110;
extern code FUN_001d22a0;
extern code FUN_001d3810;
extern code FUN_001d8b00;
extern code FUN_001d8c60;
extern code FUN_001d8d80;
extern code FUN_001d8e60;
extern code FUN_001dde00;
extern code FUN_001ded40;
extern code FUN_001e1360;
extern code FUN_001e13c0;
extern code FUN_00269690;
extern code FUN_002699a0;
extern code FUN_002699d0;
extern code FUN_00269a10;
extern code FUN_00269c80;
extern code FUN_00269ca0;
extern code FUN_002ff340;
extern code FUN_002ff760;
extern code FUN_002ff790;
extern code FUN_00316e00;
extern code FUN_00316f70;
extern code FUN_003174e0;
extern code FUN_003182d0;
extern code FUN_00318540;
extern code FUN_00318b60;
extern code FUN_00318ed0;
extern code FUN_0031c1d0;
extern code FUN_0035bb40;
extern code FUN_0035bc00;
extern code FUN_0035c1a0;
extern code FUN_003952d0;
extern code FUN_003b2cb0;
extern code FUN_003b5d10;
extern code FUN_003b5d50;
extern code FUN_003b6030;
extern code FUN_003b7090;
extern code FUN_003bb010;
extern code FUN_003c72d0;
extern code FUN_003c7430;
extern code FUN_003c74e0;
extern code FUN_003c7560;
extern code FUN_003c75b0;
extern code FUN_003c77a0;
extern code FUN_003c7850;
extern code FUN_003c78d0;
extern code FUN_003c7b90;
extern code FUN_00421fe0;
extern code FUN_004221a0;
extern code FUN_004222d0;
extern code FUN_004229d0;
extern code FUN_00422c10;
extern code FUN_00422c30;
extern code FUN_00422c90;
extern code FUN_00423fe0;
extern code FUN_00427830;
extern code FUN_00427a10;
extern code FUN_00427db0;
extern code FUN_00427de0;
extern code FUN_00427e20;
extern code FUN_00427e50;
extern code FUN_00427e60;
extern code FUN_00427e70;
extern code FUN_00429e80;
extern code FUN_00488f30;
extern code FUN_004c31b0;
extern code FUN_004c3880;
extern code FUN_004c38c0;
extern code FUN_004c69f0;
extern code FUN_004c6ac0;
extern code FUN_004c6be0;
extern code FUN_004d0f00;
extern code FUN_004d1260;
extern code FUN_004d7f60;
extern code FUN_00521250;
extern code FUN_00521408;
extern code FUN_00523e68;
extern code FUN_00524388;
extern code FUN_00524670;
extern code FUN_00524828;
extern code FUN_0052e878;
extern code FUN_0052ea18;

char FUN_00435440(char param_1);
char FUN_0043bc20(char param_1);
float FUN_0045b4e0(long param_1);
float FUN_004693a0(int param_1);
float FUN_0047cfd0(u32 *param_1,u8 (*param_2) [12],u8 (*param_3) [12], int param_4,int param_5);
float FUN_004a9560(float param_1,int param_2,u8 *param_3);
float FUN_004aa2c0(void);
int * FUN_00496cd0(u32 param_1,u32 *param_2,u64 param_3,u16 *param_4);
int * FUN_004ac120(int *param_1,u64 param_2);
int * FUN_004ac240(int *param_1);
int FUN_0044f120(float *param_1);
int FUN_0044f170(int param_1);
int FUN_00457410(void);
int FUN_0045edd0(u32 *param_1);
int FUN_0045f540(int param_1,int param_2);
int FUN_00465b40(int param_1);
int FUN_00468350(int param_1);
int FUN_0046ad20(int *param_1,int param_2);
int FUN_0046b060(int param_1,u32 *param_2,int param_3);
int FUN_004753d0(int param_1,u32 param_2);
int FUN_00475540(int param_1,u64 param_2,u64 param_3,u32 param_4);
int FUN_00489320(int *param_1);
int FUN_00489ae0(int param_1);
int FUN_0048a7a0(int param_1);
int FUN_0048d200(int param_1);
int FUN_0048e4f0(long param_1);
int FUN_0048e890(int *param_1,long param_2,u64 param_3,int param_4);
int FUN_0048ed20(int param_1,int param_2);
int FUN_0048ede0(int param_1);
int FUN_0048ee30(int param_1,int param_2);
int FUN_004912b0(int param_1);
int FUN_00491cc0(int param_1);
int FUN_00492f80(int param_1,int param_2);
int FUN_00493cb0(u64 param_1);
int FUN_00495340(int *param_1,int param_2);
int FUN_004964f0(int param_1,char *param_2);
int FUN_00499400(int param_1,u64 param_2,int param_3,int param_4);
int FUN_0049c560(int param_1);
int FUN_0049c5c0(int param_1);
int FUN_0049c620(int param_1);
int FUN_0049d4d0(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6);
int FUN_0049ecd0(int param_1);
int FUN_0049f340(int param_1);
int FUN_004a0ce0(int param_1,int *param_2,int param_3,u32 param_4);
int FUN_004a26d0(int param_1,int *param_2,int param_3,u32 param_4);
int FUN_004a5200(void);
int FUN_004a5290(void);
int FUN_004a5320(void);
int FUN_004a6630(int param_1,float *param_2,int param_3,int *param_4,int *param_5);
int FUN_004ab0e0(u64 param_1);
int FUN_004ace80(int param_1,float *param_2,u64 param_3,u32 *param_4,int *param_5);
long FUN_0045ec40(u16 param_1,u16 param_2,u32 *param_3,u32 param_4);
long FUN_0045efe0(u64 param_1);
long FUN_0045f140(u64 param_1,u16 param_2,u16 param_3,u64 param_4, u32 *param_5);
long FUN_00464280(u32 param_1);
long FUN_00464540(u64 param_1);
long FUN_00467c20(long param_1,u64 param_2,int param_3);
long FUN_0046bab0(long param_1,u64 param_2);
long FUN_0046bd00(long param_1,u64 param_2);
long FUN_0046bfb0(float param_1,long param_2,u8 *param_3,float *param_4,u32 param_5);
long FUN_00474260(u32 param_1,u32 param_2,u64 param_3,u64 param_4);
long FUN_00475d60(u64 param_1,u64 param_2,u64 param_3,u32 param_4, u32 param_5);
long FUN_0047ab70(void);
long FUN_0047b1a0(void);
long FUN_0047bb40(int param_1,int param_2,u32 param_3);
long FUN_0048a9a0(long param_1,u64 param_2);
long FUN_0048af80(u32 param_1);
long FUN_0048dab0(int param_1,long param_2,u64 param_3);
long FUN_00490050(u64 param_1);
long FUN_00490dc0(u64 param_1,int *param_2,int *param_3);
long FUN_00491880(void);
long FUN_00491b40(u64 param_1);
long FUN_00491de0(void);
long FUN_004920a0(u64 param_1);
long FUN_00494580(u64 param_1);
long FUN_004947c0(u8 param_1);
long FUN_00494be0(void);
long FUN_00494e30(u64 param_1);
long FUN_004954c0(u64 param_1,long param_2);
long FUN_00495b10(long param_1);
long FUN_00496230(u64 param_1,char *param_2,u32 param_3);
long FUN_00497130(u64 param_1,long param_2,u64 param_3,u64 param_4,long param_5);
long FUN_00498e70(int param_1);
long FUN_00499140(long param_1,u32 param_2);
long FUN_0049a080(long param_1);
long FUN_0049a400(u32 *param_1);
long FUN_0049c810(void);
long FUN_0049fe40(long param_1,int param_2,long param_3);
long FUN_0049fec0(long param_1,u32 param_2);
long FUN_004a35c0(long param_1,long param_2,u32 param_3);
long FUN_004a38f0(long param_1,long param_2,long param_3,long param_4);
long FUN_004a3a80(long param_1,long param_2,long param_3,long param_4);
long FUN_004a3c10(long param_1,long param_2,long param_3);
long FUN_004a3d70(long param_1,u32 param_2);
long FUN_004a3db0(long param_1,long param_2,long param_3);
long FUN_004a3e30(long param_1,int param_2,long param_3);
long FUN_004a5470(void);
long FUN_004a6ce0(u32 param_1,long param_2,u8 *param_3,u32 *param_4, u64 param_5);
long FUN_004a6eb0(float param_1,long param_2,u8 *param_3,float *param_4,float *param_5);
long FUN_004a7820(long param_1,u64 param_2,u32 param_3,u32 param_4);
long FUN_004a9490(long param_1);
long FUN_004a98a0(u64 param_1);
long FUN_004ac570(void);
long FUN_004ac5f0(long param_1);
long FUN_004ac710(long param_1);
long FUN_004acb90(u64 param_1);
long FUN_004aeea0(u64 param_1);
long FUN_004af210(int *param_1,int *param_2,u32 param_3,u64 param_4);
short * FUN_00496e80(int param_1,short param_2,short param_3);
short FUN_0043b980(char param_1,u64 param_2);
short FUN_0043bda0(char param_1,char param_2);
u16 FUN_00435660(char param_1);
u16 FUN_0043c180(char param_1);
u16 FUN_0043c340(char param_1);
u16 FUN_00453460(void);
u32 * FUN_0048f580(u64 param_1,int *param_2,int param_3,u32 param_4);
u32 * FUN_0048fbd0(u64 param_1,u64 param_2,u64 param_3,u32 param_4);
u32 * FUN_004a7e40(u32 *param_1,u32 param_2,u32 param_3,char *param_4);
u32 * FUN_004a8980(u32 *param_1,u64 param_2,u32 param_3,u64 param_4);
u32 * FUN_004a90f0(void);
u32 * FUN_004a9a80(u64 param_1);
u32 * FUN_004ab8c0(void);
u32 FUN_00431880(int param_1);
u32 FUN_00431aa0(u64 param_1);
u32 FUN_00432050(u64 param_1);
u32 FUN_00432600(u64 param_1);
u32 FUN_00432bb0(u64 param_1);
u32 FUN_00433160(int param_1);
u32 FUN_00433810(char param_1,char param_2);
u32 FUN_004339d0(int param_1);
u32 FUN_00433de0(int param_1);
u32 FUN_00434770(float param_1,float param_2,u64 param_3,float *param_4);
u32 FUN_00434920(float param_1,float param_2,int param_3,float *param_4);
u32 FUN_004352e0(void);
u32 FUN_00437e20(char param_1);
u32 FUN_0043a230(char param_1);
u32 FUN_0043a9d0(u64 param_1,u64 param_2,char param_3);
u32 FUN_0043c500(int param_1);
u32 FUN_0043c910(char param_1);
u32 FUN_0043ca30(u64 param_1);
u32 FUN_00449fe0(float param_1,float param_2,float param_3,float param_4,int param_5,short param_6);
u32 FUN_0044a110(float param_1,float param_2,float param_3,float param_4,int param_5,short param_6);
u32 FUN_0044f300(char param_1);
u32 FUN_0044ffb0(int param_1);
u32 FUN_004514a0(char param_1);
u32 FUN_004523c0(u64 param_1,char param_2);
u32 FUN_00452a70(char param_1,char param_2);
u32 FUN_004534b0(char param_1);
u32 FUN_00453ed0(char param_1,char param_2,char param_3,u32 *param_4,char param_5,char param_6);
u32 FUN_004541f0(int param_1);
u32 FUN_00457470(int param_1);
u32 FUN_004575e0(int param_1);
u32 FUN_004589e0(void);
u32 FUN_00458a80(char param_1,char param_2);
u32 FUN_00458cb0(u64 param_1,char param_2,char param_3);
u32 FUN_00459790(u64 param_1,char param_2);
u32 FUN_00459e00(char param_1);
u32 FUN_00459e80(int param_1);
u32 FUN_0045a020(int param_1);
u32 FUN_0045a280(u64 param_1,int param_2);
u32 FUN_0045af40(void);
u32 FUN_0045afd0(float param_1,long param_2,int param_3,int param_4,int param_5,int param_6, u8 param_7,u8 param_8,short param_9);
u32 FUN_0045b190(long param_1);
u32 FUN_0045b420(long param_1,long param_2);
u32 FUN_0045df00(int param_1);
u32 FUN_0045e3e0(u64 param_1);
u32 FUN_0045e8c0(u64 param_1);
u32 FUN_0045eaf0(void);
u32 FUN_0045eba0(void);
u32 FUN_00465590(int param_1,u64 param_2);
u32 FUN_00466710(int param_1);
u32 FUN_00466720(int param_1);
u32 FUN_00466730(u32 *param_1);
u32 FUN_00469030(int param_1);
u32 FUN_00469340(int param_1);
u32 FUN_004695f0(int param_1);
u32 FUN_00469650(int param_1);
u32 FUN_004696b0(int param_1);
u32 FUN_00469710(int param_1);
u32 FUN_004698e0(int param_1);
u32 FUN_00469a90(void);
u32 FUN_00469ce0(void);
u32 FUN_00469cf0(void);
u32 FUN_0046a6c0(int param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0046a6f0(int param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0046a720(int param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0046a750(u64 param_1);
u32 FUN_0046a890(u64 param_1);
u32 FUN_0046eb10(int param_1,u32 *param_2);
u32 FUN_00473600(int *param_1,u32 param_2);
u32 FUN_00473b10(int *param_1,u32 param_2);
u32 FUN_00473fb0(u32 param_1);
u32 FUN_00474640(int param_1,int *param_2,u32 param_3,u32 param_4);
u32 FUN_00474a80(int param_1);
u32 FUN_00478440(int param_1,u32 *param_2);
u32 FUN_00478e80(u64 param_1,u32 param_2);
u32 FUN_00479840(int param_1,u32 *param_2);
u32 FUN_0047a210(u64 param_1,int param_2);
u32 FUN_0047a510(u64 param_1,u64 param_2,u64 param_3,u32 param_4);
u32 FUN_0047abf0(int param_1,u32 *param_2);
u32 FUN_0047bd20(u64 param_1);
u32 FUN_0047de30(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_0047e9e0(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
u32 FUN_0047fb10(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_00480c30(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_00481860(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
u32 FUN_00482a50(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_00483170(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_004861b0(u64 param_1,u64 param_2,u32 param_3,u32 param_4);
u32 FUN_00486340(u32 param_1,int param_2,u32 param_3);
u32 FUN_00489020(int param_1);
u32 FUN_00489550(int *param_1,int param_2,long param_3,int param_4,long param_5,long param_6, long param_7,long param_8);
u32 FUN_004899f0(u64 param_1);
u32 FUN_00489a80(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0048a1a0(void);
u32 FUN_0048a2c0(int param_1);
#pragma alias FUN_0048a2c0_noarg FUN_0048a2c0
extern u32 FUN_0048a2c0_noarg(void);
u32 FUN_0048a3d0(u32 *param_1);
u32 FUN_0048a3e0(int param_1);
u32 FUN_0048a480(int param_1);
u32 FUN_0048abf0(void);
u32 FUN_0048ac00(void);
u32 FUN_0048da30(u64 param_1);
u32 FUN_0048ef30(int param_1);
f32 FUN_0048ef60(int param_1, int param_2);
u32 FUN_0048ef80(int param_1,int param_2);
int FUN_0048efe0(int param_1);
u32 FUN_00491a80(u64 param_1);
u32 FUN_00491ea0(u64 param_1);
u32 FUN_00492d50(u64 param_1);
u32 FUN_00493b60(u64 param_1);
u32 FUN_00494760(u64 param_1);
u32 FUN_00494cc0(u64 param_1);
u32 FUN_00495320(int *param_1,int param_2);
u32 FUN_00495c20(u64 param_1);
u32 FUN_00495c80(int *param_1);
u32 FUN_00497600(int param_1,u32 param_2,int *param_3,int param_4);
u32 FUN_004982b0(int *param_1,long param_2);
u32 FUN_00498e40(long param_1,long param_2);
u32 FUN_00499c20(code *param_1,u64 param_2);
u32 FUN_0049a170(u32 param_1);
u32 FUN_0049a290(int param_1);
u32 FUN_0049aeb0(u64 param_1);
u32 FUN_0049af20(int *param_1);
u32 FUN_0049c230(int param_1);
u32 FUN_0049c790(void);
u32 FUN_0049c7a0(u64 param_1,u32 *param_2);
u32 FUN_0049c8c0(void);
u32 FUN_0049cc70(int param_1);
u32 FUN_0049e6c0(int param_1);
u32 FUN_0049e780(int param_1);
u32 FUN_0049f5d0(int param_1,u32 *param_2);
u32 FUN_004a09d0(u64 param_1,u32 *param_2);
u32 FUN_004a1430(int param_1);
u32 FUN_004a2bb0(int param_1);
u32 FUN_004a4060(int param_1,int *param_2);
u32 FUN_004a42f0(int param_1);
u32 FUN_004a4f90(int param_1);
u32 FUN_004a5080(int param_1);
u32 FUN_004a5210(void);
u32 FUN_004a52a0(void);
u32 FUN_004a5330(void);
u32 FUN_004a5400(void);
u32 FUN_004a5540(u64 param_1);
u32 FUN_004a9330(void);
u32 FUN_004a9550(u32 param_1);
u32 FUN_004a96b0(int param_1);
u32 FUN_004a9bf0(void);
u32 FUN_004a9d80(float *param_1,float *param_2,float *param_3);
u32 FUN_004a9f20(float param_1,float param_2,float param_3,float param_4);
u32 FUN_004aa410(int param_1);
u32 FUN_004aa540(void);
u32 FUN_004aa6c0(void);
u32 FUN_004aada0(u32 param_1,u32 param_2);
u32 FUN_004aae00(u32 param_1,u32 param_2);
u32 FUN_004ab0c0(void);
u32 FUN_004ac870(void);
u32 FUN_004adb80(void);
u32 FUN_004ae010(int param_1);
u32 FUN_004ae8f0(int param_1);
u32 FUN_004ae900(int param_1);
u32 FUN_004af130(u64 param_1);
u32 FUN_004af940(int param_1);
u64 FUN_00430060(int param_1);
u64 FUN_00430180(u64 param_1);
u64 FUN_00430bb0(u64 param_1);
u64 FUN_00431110(u64 param_1,u64 param_2,char param_3,u8 param_4);
u64 FUN_004312b0(u64 param_1);
u64 FUN_00431670(u64 param_1,char param_2,u32 param_3);
u64 FUN_00439f60(u64 param_1,char param_2);
u64 FUN_0043a0b0(u64 param_1,char param_2);
u64 FUN_0043c690(u32 param_1);
u64 FUN_00447e70(u64 param_1,u8 param_2,u8 param_3);
u64 FUN_0044aaf0(u64 param_1);
u64 FUN_0044ad20(u64 param_1,char param_2);
u64 FUN_0044e560(u64 param_1);
u64 FUN_004542c0(char param_1);
u64 FUN_00454620(char param_1);
u64 FUN_00455e00(u64 param_1);
u64 FUN_004560d0(u32 param_1,u32 param_2,u32 param_3,u64 param_4, u32 param_5,u32 param_6);
u64 FUN_004579b0(u64 param_1);
u64 FUN_00457a40(u64 param_1);
u64 FUN_00458630(u64 param_1,char param_2,u8 param_3);
u64 FUN_00459f60(u64 param_1,u16 param_2,char param_3);
u64 FUN_0045ee00(u64 param_1,u64 param_2);
u64 FUN_0045f4e0(u64 param_1,int param_2);
u64 FUN_0045f580(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_0045f600(u64 param_1,u64 param_2,char *param_3,int param_4);
u64 FUN_00464020(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
u64 FUN_00464120(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
u64 FUN_004643b0(u64 param_1,int param_2,u32 param_3);
u64 FUN_004654a0(u64 param_1,u64 param_2);
u64 FUN_00465930(u64 param_1,u64 param_2);
u64 FUN_00465a00(u64 param_1);
u64 FUN_00465ae0(u64 param_1);
u64 FUN_00465bf0(u64 param_1,int param_2);
u64 FUN_00465cf0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00465eb0(u64 param_1,u64 param_2,u32 param_3);
u64 FUN_00466260(u32 param_1,u32 *param_2,u32 *param_3,u32 param_4,u64 param_5);
u64 FUN_004663d0(u64 param_1);
u64 FUN_00466480(u32 param_1,int param_2,u32 param_3,u64 param_4);
u64 FUN_00466640(u64 param_1);
u64 FUN_00466ef0(u32 *param_1);
u64 FUN_00467590(u64 param_1);
u64 FUN_00467600(u64 param_1);
u64 FUN_004676c0(u64 param_1);
u64 FUN_004677f0(u64 param_1);
u64 FUN_00467860(u64 param_1,u64 param_2);
u64 FUN_00467b40(u64 param_1,int *param_2);
u64 FUN_00467fd0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00468560(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00468690(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_004687e0(long param_1,int *param_2);
u64 FUN_00468dc0(u64 param_1);
u64 FUN_00468e30(u64 param_1);
u64 FUN_00468ea0(u64 param_1,int param_2);
u64 FUN_00469060(u64 param_1,long param_2);
u64 FUN_00469280(u64 param_1,u32 param_2);
u64 FUN_004692e0(float param_1,u64 param_2);
u64 FUN_00469400(u64 param_1,int param_2);
u64 FUN_004694b0(u64 param_1,u32 param_2);
u64 FUN_00469510(u64 param_1,u32 param_2);
u64 FUN_00469590(u32 param_1,u64 param_2);
u64 FUN_00469770(u64 param_1,int param_2);
u64 FUN_00469840(u64 param_1,u32 param_2,u32 param_3);
u64 FUN_00469940(u64 param_1,u32 *param_2,u32 *param_3);
u64 FUN_004699b0(u64 param_1,u32 param_2,u32 param_3);
u64 FUN_00469a10(u64 param_1,long param_2,long param_3);
u64 FUN_00469d00(u64 param_1);
u64 FUN_00469d60(u64 param_1);
u64 FUN_00469e30(u64 param_1,int param_2);
u64 FUN_00469fe0(u64 param_1);
u64 FUN_0046a040(u64 param_1,int param_2);
u64 FUN_0046a0f0(u64 param_1,u64 param_2,int param_3);
u64 FUN_0046a230(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0046a470(u64 param_1,int param_2);
u64 FUN_0046a600(u64 param_1);
u64 FUN_0046a660(u64 param_1);
u64 FUN_0046a830(u64 param_1);
u64 FUN_0046a970(u64 param_1,int param_2);
u64 FUN_0046aa80(u64 param_1,u32 *param_2);
u64 FUN_0046ac30(u64 param_1);
u64 FUN_0046ad80(u32 *param_1);
u64 FUN_0046afa0(u32 *param_1);
u64 FUN_0046b8e0(int param_1);
u64 FUN_0046c330(u64 param_1,u32 param_2);
u64 FUN_0046c5b0(int param_1);
u64 FUN_0046cd90(int param_1);
u64 FUN_0046d6f0(int param_1);
u64 FUN_0046e170(int param_1);
u64 FUN_0046eb90(int param_1,u32 *param_2);
u64 FUN_0046f400(u32 *param_1,u32 *param_2);
u64 FUN_0046fdd0(int param_1);
u64 FUN_00470200(float *param_1,float *param_2);
u64 FUN_004709e0(int param_1);
u64 FUN_00470e10(u32 *param_1,u32 *param_2);
u64 FUN_00471470(int param_1);
u64 FUN_004718a0(int param_1,u32 *param_2);
u64 FUN_00472270(int param_1);
u64 FUN_00472970(int param_1);
u64 FUN_004733c0(int param_1,int param_2);
u64 FUN_004734d0(u64 param_1);
u64 FUN_00474160(u64 param_1);
u64 FUN_004747f0(u64 param_1);
u64 FUN_00474820(int param_1,long param_2,u32 param_3);
u64 FUN_004748c0(int param_1,long param_2);
u64 FUN_004749a0(int param_1,long param_2);
u64 FUN_00474bb0(u64 param_1);
u64 FUN_00474c60(u64 param_1);
u64 FUN_00478520(int param_1);
u64 FUN_00478a70(void);
u64 FUN_00479900(int param_1);
u64 FUN_00479e50(void);
u64 FUN_0047a710(u64 param_1,int *param_2);
u64 FUN_0047b280(u64 param_1,float *param_2,u32 param_3,u8 *param_4);
u64 FUN_0047b750(u64 param_1,float *param_2,u32 param_3,float *param_4);
u64 FUN_0047be10(int param_1,int param_2,u64 param_3);
u64 FUN_00488cd0(u64 param_1);
u64 FUN_00488d40(u64 param_1);
u64 FUN_00489080(u64 param_1,int *param_2);
u64 FUN_00489160(u64 param_1,long param_2);
u64 FUN_00489730(u64 param_1);
u64 FUN_00489840(u64 param_1);
u64 FUN_004898e0(u64 param_1);
u64 FUN_00489960(u64 param_1);
u64 FUN_00489b70(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00489cd0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00489f20(u64 param_1,u64 param_2,int param_3,u64 param_4,u64 param_5);
int FUN_0048a2a0(int param_1,u32 param_2);
u64 FUN_0048a2e0(u64 param_1,int param_2);
u64 FUN_0048a370(int param_1);
u64 FUN_0048a4b0(u32 param_1);
u64 FUN_0048a790(u64 param_1);
u64 FUN_0048a800(u64 param_1,int param_2);
u64 FUN_0048ac10(u64 param_1,long param_2);
u64 FUN_0048b910(u32 param_1,float *param_2);
u64 FUN_0048cf00(u64 param_1);
u64 FUN_0048cfa0(u64 param_1);
u64 FUN_0048d0e0(u64 param_1);
u64 FUN_0048d270(int param_1,int param_2,u64 param_3);
u64 FUN_0048d370(u64 param_1,int param_2,u32 *param_3);
u64 FUN_0048d480(float param_1,int param_2,long param_3,u64 param_4,long param_5);
u64 FUN_0048d960(u64 param_1);
u64 FUN_0048e020(int *param_1,u64 param_2);
u64 FUN_0048e2d0(int *param_1,u64 param_2);
u64 FUN_0048e750(long param_1,u64 param_2);
u64 FUN_0048eab0(u64 param_1,int param_2);
u64 FUN_0048eb50(u64 param_1,int param_2,int param_3);
u64 FUN_0048ec20(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_0048ecf0(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_0048f340(u64 param_1,int param_2);
u64 FUN_0048f3c0(u64 param_1,u64 param_2,int param_3);
u64 FUN_0048f460(u64 param_1,int param_2);
u64 FUN_0048f4e0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00490770(u64 param_1,u64 param_2,int param_3);
u64 FUN_00490810(u64 param_1);
u64 FUN_00490860(u64 param_1);
u64 FUN_004908d0(u64 param_1,int param_2);
u64 FUN_00490980(u64 param_1,u64 param_2);
u64 FUN_00490d00(u64 param_1);
u64 FUN_00490d40(u64 param_1);
u64 FUN_00490d90(u64 param_1);
u64 FUN_00491410(u64 param_1);
u64 FUN_004914d0(u64 param_1,int param_2);
u64 FUN_00491630(u64 param_1);
u64 FUN_004916d0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00491760(u64 param_1,code *param_2,u64 param_3);
u64 FUN_004917f0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_004919b0(u64 param_1,int param_2,u32 param_3);
u64 FUN_00491ff0(u64 param_1,int param_2);
u64 FUN_00492020(u64 param_1,int param_2);
u64 FUN_00492060(u64 param_1,int param_2);
u64 FUN_00492d10(u64 param_1);
u64 FUN_00492e20(u64 param_1,float *param_2);
u64 FUN_00493210(u64 param_1,u16 *param_2,u16 param_3,u16 param_4, u16 param_5);
u64 FUN_00493230(u64 param_1,int param_2,long param_3);
u64 FUN_004932c0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00493370(u64 param_1,u16 param_2);
u64 FUN_004933d0(u64 param_1);
u64 FUN_00493b40(u64 param_1);
u64 FUN_004944b0(u64 param_1,u32 *param_2);
u64 FUN_004948b0(u64 param_1);
u64 FUN_00494930(u64 param_1,int param_2);
u64 FUN_004949c0(u64 param_1,int param_2);
u64 FUN_00494a40(u64 param_1,u64 param_2,int param_3);
u64 FUN_00494ae0(u64 param_1,int param_2);
u64 FUN_00494b70(u64 param_1);
u64 FUN_00494d50(u64 param_1,long param_2);
u64 FUN_00495260(u64 param_1);
u64 FUN_00495300(u64 param_1);
u64 FUN_00495a30(u64 param_1,int param_2);
u64 FUN_00495cf0(u64 param_1,u32 param_2,u16 param_3,u16 param_4, u16 param_5,u16 param_6,u16 param_7,u16 param_8, u16 param_9);
u64 FUN_00495f10(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00495fb0(u32 *param_1,char *param_2,u64 param_3,u64 param_4);
u64 FUN_004967a0(u64 param_1);
u64 FUN_00496be0(u32 param_1,u32 *param_2,int param_3,u32 *param_4);
u64 FUN_00498720(int param_1,u64 param_2,u32 param_3);
u64 FUN_00499320(u64 param_1);
u64 FUN_00499a80(u64 param_1);
u64 FUN_00499af0(u64 param_1,int param_2);
u64 FUN_00499b90(u64 param_1);
u64 FUN_00499ca0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00499d30(u64 param_1);
u64 FUN_00499fd0(u64 param_1);
u64 FUN_0049a250(u64 param_1);
u64 FUN_0049a3d0(u64 param_1,code *param_2);
u64 FUN_0049a7c0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_0049a870(u64 param_1,code *param_2,u64 param_3);
u64 FUN_0049aaf0(u64 param_1,int param_2);
u64 FUN_0049abf0(u64 param_1);
u64 FUN_0049ade0(u64 param_1,int param_2);
u64 FUN_0049ae30(u64 param_1);
u64 FUN_0049b180(u64 param_1);
u64 FUN_0049b2e0(u64 param_1);
u64 FUN_0049b3f0(u64 param_1,int param_2);
u64 FUN_0049b440(u64 param_1);
u64 FUN_0049b760(u64 param_1,int param_2);
u64 FUN_0049b7a0(u64 param_1);
u64 FUN_0049b850(u64 param_1,int param_2);
u64 FUN_0049bbc0(u64 param_1,u64 param_2);
u64 FUN_0049bbf0(u64 param_1,u64 param_2);
u64 FUN_0049bc20(u64 param_1,u64 param_2);
u64 FUN_0049bdc0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0049c160(u64 param_1,int param_2);
u64 FUN_0049c1b0(u64 param_1,int param_2);
u64 FUN_0049c1e0(u64 param_1,int param_2);
u64 FUN_0049c240(u64 param_1,u64 param_2);
u64 FUN_0049c330(u64 param_1,code *param_2,u64 param_3);
u64 FUN_0049c3d0(u64 param_1,int param_2);
u64 FUN_0049c480(u64 param_1,int param_2);
u64 FUN_0049dc70(int param_1);
u64 FUN_0049e5a0(u64 param_1,int param_2);
u64 FUN_0049e830(u64 param_1,u64 param_2);
u64 FUN_0049e9f0(u64 param_1,u64 param_2);
u64 FUN_0049ee70(u64 param_1,u64 param_2);
u64 FUN_0049f040(u64 param_1,u64 param_2);
u64 FUN_0049faa0(u64 param_1);
u64 FUN_004a0430(u64 param_1,int param_2);
u64 FUN_004a0e00(int param_1);
u64 FUN_004a30d0(int param_1);
u64 FUN_004a3f20(u64 param_1);
u64 FUN_004a4d60(u64 param_1,int param_2);
u64 FUN_004a4da0(u64 param_1);
u64 FUN_004a4e40(u64 param_1);
u64 FUN_004a4ef0(u64 param_1);
u64 FUN_004a55b0(u64 param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6,float *param_7);
u64 FUN_004a5dd0(u64 param_1,u8 *param_2,u8 *param_3,u8 *param_4,u64 param_5);
u64 FUN_004a6200(u64 param_1,float *param_2,float *param_3,float *param_4,float *param_5);
u64 FUN_004a62e0(u64 param_1,long param_2);
u64 FUN_004a6360(u64 param_1,int param_2,u64 param_3);
u64 FUN_004a6530(u64 param_1,u64 param_2);
u64 FUN_004a6600(u64 param_1);
u64 FUN_004a7620(u64 param_1);
u64 FUN_004ab1b0(u64 param_1);
u64 FUN_004ab200(u32 param_1,u32 param_2,u64 param_3);
u64 FUN_004ab2c0(float param_1,float param_2,u64 param_3);
u64 FUN_004ab410(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6, u64 param_7);
u64 FUN_004ab6a0(u64 param_1);
u64 FUN_004abd50(u64 param_1,u32 *param_2);
u64 FUN_004ac020(int *param_1,u64 param_2);
u64 FUN_004ac920(u64 param_1,int param_2,u64 param_3);
u64 FUN_004acb10(u64 param_1,u64 param_2);
u64 FUN_004ad480(u64 param_1,char *param_2);
u64 FUN_004ad5b0(u64 param_1,long param_2,u64 param_3);
u64 FUN_004ad6a0(int param_1);
u64 FUN_004ad700(u64 param_1,u64 param_2);
u64 FUN_004ad750(u64 param_1);
u64 FUN_004ad940(u64 param_1,u64 param_2);
u64 FUN_004adbd0(int *param_1);
u64 FUN_004adcc0(u64 param_1,u32 param_2);
u64 FUN_004addb0(u64 param_1,u64 param_2);
u64 FUN_004ade90(u64 param_1);
u64 FUN_004adf30(u64 param_1);
u64 FUN_004adfd0(u64 param_1,int param_2);
u64 FUN_004ae020(u64 param_1,u32 *param_2);
u64 FUN_004ae070(u32 param_1,u32 param_2,u64 param_3);
u64 FUN_004ae0c0(u32 param_1,u32 param_2,u64 param_3);
u64 FUN_004ae110(u64 param_1,u64 param_2);
u64 FUN_004ae150(u64 param_1,u64 param_2);
u32 FUN_004ae1d0(u32 param_1,u32 param_2);
u64 FUN_004ae1f0(int param_1,u32 *param_2);
u64 FUN_004ae270(u64 param_1,u64 param_2);
u64 FUN_004ae2f0(u64 param_1);
u64 FUN_004ae3b0(u64 param_1,u64 param_2);
u64 FUN_004ae690(u64 param_1);
u64 FUN_004ae790(u64 param_1);
u64 FUN_004ae960(u64 param_1,float *param_2,float *param_3);
u64 FUN_004aeb60(u64 param_1,code *param_2,u64 param_3);
u64 FUN_004aebf0(u64 param_1,u64 param_2,long param_3);
u32 FUN_004aef50(u32 param_1);
u64 FUN_004aef60(u64 param_1);
u64 FUN_004af340(u32 *param_1);
u64 FUN_004af760(u64 param_1);
u64 FUN_004af9d0(u64 param_1,float *param_2,float *param_3);
u64 FUN_004affe0(u64 param_1,u64 param_2,long param_3);
u8 * FUN_00493710(int param_1,int param_2,u32 param_3);
u8 * FUN_004aae60(void);
u8 ** FUN_0049ff00(void);
u8 ** FUN_004a3f10(void);
u8 FUN_00435260(char param_1);
u8 FUN_004353f0(int param_1);
u8 FUN_00435810(void);
u8 FUN_004359f0(u64 param_1,u8 param_2,u8 param_3,u32 *param_4, u8 param_5,u8 param_6);
u8 FUN_0043c730(char param_1);
u8 FUN_0043c7f0(char param_1);
u8 FUN_00449c90(u64 param_1,char param_2);
u8 FUN_0044a420(int param_1,long param_2,u64 param_3);
u8 FUN_0044f060(float param_1,int param_2,float *param_3);
u8 FUN_0044f1c0(float param_1,float *param_2,float *param_3);
u8 FUN_0044fab0(int param_1);
u8 FUN_00453480(void);
u8 FUN_00454400(u32 *param_1,char param_2);
u8 FUN_00454520(float *param_1,char param_2);
u8 FUN_00454a70(char param_1,float *param_2);
u8 FUN_00454d00(float *param_1);
u8 FUN_00457390(char param_1);
u8 FUN_004573d0(char param_1);
u8 FUN_0045a3b0(void);
u8 FUN_0045af90(long param_1);
u8 FUN_0045b480(long param_1);
u8 FUN_0045b4b0(long param_1);
u8 FUN_0045e010(int param_1);
u8 FUN_0045e0c0(int param_1);
u8 FUN_0045e170(int param_1);
u8 FUN_0045ec00(void);
u8 FUN_0045ec20(void);
u8 FUN_0045f7d0(void);
u8 FUN_004661b0(void);
u8 FUN_00468c50(void);
u8 FUN_0046a530(void);
u8 FUN_00473590(void);
u8 FUN_00477050(int param_1);
u8 FUN_00479030(int param_1);
u8 FUN_0047a3d0(int param_1);
u32 FUN_00488fe0(void);
u8 FUN_0048ad20(void);
u8 FUN_0048dcf0(void);
u8 FUN_0048f030(void);
u8 FUN_004915c0(void);
u8 FUN_0049a980(void);
u8 FUN_0049be50(void);
u8 FUN_0049c6c0(void);
u8 FUN_004a5100(void);
u8 FUN_004a9bd0(int param_1);
u8 FUN_004aa390(float param_1);
u8 FUN_004aa3d0(float param_1);
u8 FUN_004aaa60(void);
u8 FUN_004aab40(long param_1);
u8 FUN_004aac70(u32 *param_1);
u8 FUN_004ac390(long param_1);
u8 FUN_004accc0(float *param_1,int *param_2);
u8 FUN_004ae1e0(int param_1);
u8 FUN_004ae4e0(int param_1);
u8 FUN_004ae5a0(long param_1);
void FUN_00430150(int param_1);
void FUN_00430220(int param_1,u64 param_2);
void FUN_00430270(u32 *param_1,int param_2);
void FUN_004302a0(int param_1);
void FUN_004302b0(void);
void FUN_00430630(int param_1);
void FUN_00430780(u64 param_1,int param_2,int param_3,int param_4);
void FUN_00430a40(char param_1);
void FUN_004310e0(int param_1);
void FUN_004311f0(float *param_1,u32 param_2,u32 param_3);
void FUN_00431630(int param_1);
void FUN_004332f0(int param_1);
void FUN_004333d0(int param_1);
void FUN_004334d0(int param_1);
void FUN_004343d0(int param_1);
void FUN_004344f0(float param_1,float *param_2,int param_3,float *param_4,float *param_5);
void FUN_00434c90(char param_1);
void FUN_00434d30(void);
void FUN_00434e60(void);
void FUN_00434f60(u8 param_1);
void FUN_00434f70(void);
void FUN_00435060(u8 param_1);
void FUN_004350e0(char param_1,char param_2);
void FUN_00435370(u8 param_1);
void FUN_00435c00(u64 param_1);
void FUN_00437e00(void);
void FUN_00437e80(u32 *param_1,char param_2);
void FUN_00438010(u64 param_1);
void FUN_00439400(char param_1);
void FUN_00439520(u64 param_1);
void FUN_0043a1a0(char param_1,u8 param_2);
void FUN_0043a2f0(int param_1);
void FUN_0043a960(int param_1);
void FUN_0043bf50(u64 param_1);
void FUN_0043c660(int param_1);
void FUN_0043c7a0(char param_1,u8 param_2);
void FUN_00447ad0(int param_1);
void FUN_00447f90(float *param_1,int param_2,char param_3);
void FUN_00448060(u64 param_1,u8 param_2,u64 param_3,char param_4,short param_5, char param_6);
void FUN_00448cf0(u64 param_1,u8 param_2,u64 param_3,char param_4,short param_5, char param_6,int param_7);
void FUN_00449d10(int param_1);
void FUN_00449d60(u64 param_1);
void FUN_00449ed0(void);
void FUN_00449fa0(void);
void FUN_0044a240(u32 param_1,u32 param_2,float param_3,u32 param_4,int param_5 ,u8 param_6);
void FUN_0044a330(u32 param_1,u32 param_2,float param_3,u32 param_4,int param_5 ,u8 param_6);
void FUN_0044a630(int param_1);
void FUN_0044a790(u32 *param_1);
void FUN_0044a990(int param_1,u32 *param_2);
void FUN_0044acf0(int param_1);
void FUN_0044af60(u64 param_1);
void FUN_0044b7d0(int param_1);
void FUN_0044beb0(u64 param_1);
void FUN_0044d600(int param_1);
void FUN_0044dfc0(u64 param_1);
void FUN_0044e530(int param_1,u8 param_2);
void FUN_0044f270(float *param_1,float *param_2);
void FUN_004501b0(char param_1);
void FUN_00450b30(char param_1);
void FUN_00451d70(int param_1);
void FUN_00452010(float *param_1);
void FUN_00452f70(u32 *param_1,int param_2);
void FUN_004532d0(char param_1);
void FUN_004533e0(u8 param_1);
void FUN_00453470(u16 param_1);
void FUN_00453490(int param_1);
void FUN_00453d90(char param_1);
void FUN_00454110(int param_1);
void FUN_00454290(int param_1);
void FUN_004543c0(char param_1,u8 param_2);
void FUN_00454f50(char param_1,char param_2);
void FUN_00455b50(void);
void FUN_00455cf0(void);
void FUN_00456050(int param_1);
void FUN_004561d0(u32 param_1,u32 param_2,int param_3);
void FUN_004561f0(float param_1,int param_2);
void FUN_004563b0(f32 param_1, int param_2);
void FUN_004563c0(int param_1,u8 param_2);
void FUN_004563d0(int param_1,u64 param_2);
void FUN_00456400(int param_1,u8 param_2);
void FUN_00456410(char param_1);
void FUN_00456450(char param_1);
void FUN_00456490(char param_1);
void FUN_004564e0(char param_1);
void FUN_00456530(char param_1);
void FUN_00456580(char param_1);
void FUN_004565d0(char param_1);
void FUN_00456620(char param_1);
void FUN_00456670(u64 param_1,u64 param_2);
void FUN_00456a90(u64 param_1,u64 param_2,u64 param_3);
void FUN_00456ea0(u64 param_1,u64 param_2,u64 param_3);
void FUN_00457340(char param_1,u8 param_2,char param_3);
void FUN_00457980(int param_1);
void FUN_00458600(int param_1);
void FUN_00458850(int param_1);
void FUN_00458870(int param_1);
void FUN_00458890(void);
void FUN_00458920(int param_1);
void FUN_00458930(void);
void FUN_004589d0(int param_1,u8 param_2);
void FUN_00458b00(void);
void FUN_00458b60(void);
void FUN_00458bb0(void);
void FUN_00459d60(void);
void FUN_00459f30(int param_1);
void FUN_0045a220(int param_1);
void FUN_0045a3e0(void);
void FUN_0045a430(char param_1);
void FUN_0045a490(void);
void FUN_0045ace0(void);
void FUN_0045af70(u8 param_1);
void FUN_0045b620(float param_1,float param_2,float param_3,float param_4,u64 param_5, char param_6,int param_7);
void FUN_0045b830(int param_1,long param_2);
void FUN_0045b8f0(int param_1);
void FUN_0045bcb0(u64 param_1,u64 param_2);
void FUN_0045bd90(u64 param_1);
void FUN_0045c530(int param_1);
void FUN_0045c8c0(int param_1,int param_2);
void FUN_0045cdd0(u64 param_1,long param_2);
void FUN_0045ce90(u64 param_1);
void FUN_0045d990(u64 param_1,long param_2);
void FUN_0045e7b0(int param_1);
void FUN_0045e7e0(void);
void FUN_0045ea80(int param_1);
void FUN_0045edc0(void);
void FUN_0045f930(int param_1,float *param_2,code *param_3,u32 param_4);
void FUN_004606b0(int param_1,u64 param_2,code *param_3,u32 param_4);
void FUN_00460ec0(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00461900(int param_1,float *param_2,u64 param_3,code *param_4,u32 param_5);
void FUN_00461d00(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00461ea0(int param_1,float *param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00462bb0(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00463490(int param_1,int param_2,float *param_3,u32 param_4,code *param_5, u32 param_6);
void FUN_00463b20(int param_1,int param_2,int param_3,u32 param_4,code *param_5, u32 param_6);
void FUN_00463f20(int param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00464850(float param_1,int param_2,int param_3,int param_4);
void FUN_00464e80(float param_1,int param_2,int param_3,int param_4);
void FUN_00465670(int param_1,int param_2);
void FUN_00468530(u64 param_1,u64 param_2,int param_3);
void FUN_00468660(u64 param_1,u64 param_2,int param_3);
void FUN_00468720(char *param_1,long param_2,int param_3);
void FUN_00469aa0(int param_1);
void FUN_00469b50(int param_1);
void FUN_00469bc0(int param_1);
void FUN_0046a8d0(int *param_1,int *param_2);
void FUN_0046a9e0(int *param_1);
void FUN_0046b1b0(u32 *param_1,int param_2,u32 *param_3);
void FUN_0046ea80(u64 param_1);
void FUN_00472130(u64 param_1);
void FUN_00472170(u64 param_1);
void FUN_004721b0(u64 param_1);
void FUN_004721f0(u64 param_1);
void FUN_00472230(u64 param_1);
void FUN_00473340(u64 param_1);
void FUN_00473380(u64 param_1);
void FUN_00474210(u64 param_1,u64 param_2,u64 param_3);
void FUN_00474d30(int param_1,int param_2);
void FUN_00474f20(int param_1,u32 param_2);
void FUN_00475c20(int param_1);
void FUN_00475cb0(int param_1);
void FUN_00476140(u32 *param_1,long param_2,u32 param_3);
void FUN_00476490(u64 *param_1,long param_2,u64 *param_3);
void FUN_00476720(int param_1,long param_2,u64 *param_3);
void FUN_00476980(int param_1,long param_2,u64 *param_3);
void FUN_00476c20(int param_1,int param_2,long param_3);
void FUN_00477150(int *param_1,int param_2,u64 param_3,u64 param_4,u32 param_5);
void FUN_00477470(int *param_1,u64 param_2,u64 param_3,u64 param_4, u32 param_5);
void FUN_00477610(int *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
void FUN_00477810(u32 *param_1,int param_2,int param_3);
void FUN_00477a20(u32 *param_1,int param_2,int param_3);
void FUN_00477c90(int *param_1,int param_2,int param_3);
void FUN_00477eb0(int *param_1,int param_2,int param_3);
void FUN_00478100(int *param_1,int param_2,int param_3);
void FUN_00478280(int *param_1,int param_2,int param_3);
void FUN_00478cc0(int param_1,u32 *param_2);
void FUN_00479170(int *param_1,int param_2,u64 param_3,u64 param_4,u32 param_5);
void FUN_00479590(int *param_1,u64 param_2,u64 param_3,u64 param_4, u32 param_5);
void FUN_0047a050(int param_1,u32 *param_2);
void FUN_0047bf80(int param_1);
void FUN_0047c240(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_0047c8c0(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_004838e0(u32 *param_1,int param_2,int param_3);
void FUN_00485070(u32 *param_1,int param_2,int param_3);
void FUN_00485110(u32 *param_1,int param_2,int param_3);
void FUN_00485440(u32 *param_1,int param_2,int param_3);
void FUN_00485750(int *param_1,int param_2,int param_3);
void FUN_00485e20(int *param_1,int param_2,int param_3);
void FUN_00485ef0(int *param_1,int param_2,int param_3);
void FUN_00485ff0(int *param_1,int param_2,int param_3);
void FUN_004866c0(int param_1);
void FUN_00486c80(int *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_00487030(int *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_00487280(int *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_004876f0(int *param_1,float *param_2,float *param_3,long param_4,int param_5);
void FUN_00487bf0(u32 *param_1,int param_2,int param_3);
void FUN_00488550(int *param_1,int param_2,int param_3,int param_4,u32 param_5);
void FUN_00489350(u64 param_1,long param_2);
void FUN_004893e0(int param_1,int param_2,u32 param_3);
void FUN_00489460(int param_1,u32 *param_2,int *param_3,int param_4,u32 *param_5,u32 param_6);
void FUN_0048a3f0(u64 param_1,long param_2);
void FUN_0048dd70(int *param_1);
void FUN_0048de50(int *param_1,int *param_2);
void FUN_0048e610(int *param_1);
void FUN_0048efa0(int param_1,int param_2,u32 param_3);
void FUN_0048efc0(int param_1, int param_2, f32 param_3);
void FUN_00491100(int param_1);
void FUN_00492c30(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c60(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c90(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00492cc0(u64 param_1,u64 param_2);
void FUN_00492ce0(u64 param_1,u64 param_2);
void FUN_00492d00(u64 param_1);
void FUN_00493c50(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00493c80(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494520(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494550(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494db0(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494de0(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494e10(u64 param_1,u64 param_2);
void FUN_00495480(int *param_1,int param_2);
void FUN_004959c0(u64 param_1);
void FUN_00496580(void);
void FUN_00496ad0(u64 param_1,int *param_2,short param_3,short param_4,int param_5, int param_6);
void FUN_00496f60(int param_1,int param_2,long param_3);
void FUN_00498e30(u64 param_1);
void FUN_00499230(void);
void FUN_00499250(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00499280(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_004992b0(u64 param_1,u64 param_2);
void FUN_004992d0(u64 param_1,u64 param_2);
void FUN_00499720(u64 param_1);
void FUN_00499850(int *param_1);
void FUN_00499e90(u32 param_1,u32 param_2);
void FUN_00499f40(int param_1);
void FUN_0049a920(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_0049a950(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_0049afa0(int param_1,u64 param_2);
void FUN_0049be20(int param_1);
void FUN_0049c680(void);
void FUN_0049c9b0(void);
void FUN_0049ca50(long param_1);
void FUN_0049cab0(float param_1,u8 *param_2);
void FUN_0049cbd0(int param_1,float *param_2);
void FUN_0049cc30(int param_1);
void FUN_0049e4f0(u64 param_1);
void FUN_0049ff10(u32 param_1,u32 param_2,int param_3,long param_4);
void FUN_004a0480(int param_1,int param_2);
void FUN_004a05d0(int param_1,int param_2);
void FUN_004a06c0(int param_1);
void FUN_004a08f0(int param_1,int *param_2,int param_3,u32 param_4);
void FUN_004a0dc0(int param_1);
void FUN_004a24a0(int param_1,int param_2);
void FUN_004a2560(u64 param_1,int *param_2);
void FUN_004a3540(int param_1);
void FUN_004a3f70(int param_1,u32 *param_2);
void FUN_004a53b0(void);
void FUN_004a91f0(void);
void FUN_004a97c0(u64 param_1,u64 param_2);
void FUN_004a9a70(int param_1);
void FUN_004aa550(u64 param_1);
void FUN_004aa5c0(void);
void FUN_004aa620(void);
void FUN_004aad50(void);
void FUN_004ab170(u32 *param_1);
void FUN_004ab910(float *param_1,float *param_2,float *param_3);
void FUN_004aba20(u64 param_1,u64 param_2,int param_3);
void FUN_004ac410(int *param_1);
void FUN_004ac7f0(void);
void FUN_004ac860(u32 param_1,u32 param_2);
void FUN_004adb50(void);
void FUN_004adc70(u64 param_1);
void FUN_004adc90(u64 param_1,u64 param_2);
void FUN_004adca0(void);
void FUN_004ae060(int param_1);
void FUN_004ae940(u64 param_1);

extern u32 DAT_007ce77c;
extern u32 DAT_007ce7b4;
extern u32 DAT_0095de10;
extern u32 DAT_0095de14;
extern u32 DAT_0095de18;
#pragma alias DAT_0095de18_abs DAT_0095de18
extern u32 DAT_0095de18_abs[];
extern u32 DAT_0095de1c;
extern u32 DAT_0095de20;
extern u32 DAT_0095de28;
extern u32 DAT_0095de30;
extern u32 DAT_0095de40;
extern u32 DAT_0095de50;
extern u32 DAT_0095de68;
extern u32 DAT_00960070;
#pragma alias DAT_00960070_abs DAT_00960070
extern u32 DAT_00960070_abs[];
#pragma alias DAT_0095de14_abs DAT_0095de14
extern u32 DAT_0095de14_abs[];
#pragma alias DAT_0096017c_abs DAT_0096017c
extern void (*DAT_0096017c_abs[])();
#pragma alias DAT_0096017c_abs2 DAT_0096017c
extern u8 DAT_0096017c_abs2[];
#pragma alias DAT_0096018c_abs DAT_0096018c
extern void (*DAT_0096018c_abs[])(u32,u64);
#pragma alias FUN_004ca520_typed FUN_004ca520
extern int FUN_004ca520_typed(int,int,u8*,u8*);
#pragma alias FUN_00488d40_abs FUN_00488d40
extern u8 FUN_00488d40_abs[];
#pragma alias FUN_00488cd0_abs FUN_00488cd0
extern u8 FUN_00488cd0_abs[];
#pragma alias FUN_00521408_typed FUN_00521408
extern void FUN_00521408_typed(int,int,int);
extern u32 DAT_00960074;
extern u32 DAT_00960078;
extern u32 DAT_0096007c;
extern code DAT_00960140;
extern code DAT_00960178;
extern code DAT_0096017c;
extern code DAT_00960188;
extern code DAT_0096018c;
extern u32 iGpffffba8c;
extern u32 iGpffffba90;
extern u32 iGpffffba94;
extern u32 iGpffffba98;
extern u32 iGpffffba9c;
extern u32 iGpffffbaa0;
extern u32 iGpffffbaa4;
extern u32 iGpffffbaa8;
extern u32 iGpffffbaac;
extern u32 iGpffffbab0;
extern u32 iGpffffbab4;
extern u32 iGpffffbab8;
extern u32 uGpffffaed8;
extern u32 uGpffffaedc;
extern u32 uGpffffba88;
extern char getCopCondition(int,int);

extern code FUN_00100d80;
extern code FUN_00100ec0;
extern code FUN_001016b0;
extern code FUN_00102100;
extern code FUN_001023a0;
extern code FUN_00108570;
extern code FUN_001085c0;
extern code FUN_00108670;
extern code FUN_00108710;
extern code FUN_00108f70;
extern code FUN_00108fd0;
extern code FUN_00109040;
extern code FUN_0010a4e0;
extern code FUN_0010c1a0;
extern code FUN_0010c3a0;
extern code FUN_00111f30;
extern code FUN_001120c0;
extern code FUN_00112370;
extern code FUN_00112420;
extern code FUN_001124b0;
extern code FUN_001126b0;
extern code FUN_00112740;
extern code FUN_001127d0;
extern code FUN_00113a30;
extern code FUN_001140d0;
extern code FUN_001158b0;
extern code FUN_00115980;
extern code FUN_001159f0;
extern code FUN_00115bc0;
extern code FUN_0016c470;
extern code FUN_0016c4f0;
extern code FUN_0016c570;
extern code FUN_0016c5f0;
extern code FUN_0016c920;
extern code FUN_0016c970;
extern code FUN_0016cf40;
extern code FUN_0016cf90;
extern code FUN_0016f190;
extern code FUN_0016f1f0;
extern code FUN_0016f490;
extern code FUN_00170a40;
extern code FUN_00170ab0;
extern code FUN_00170b20;
extern code FUN_00170b90;
extern code FUN_00173300;
extern code FUN_00173380;
extern code FUN_00177410;
extern code FUN_0017b500;
extern code FUN_0017b5b0;
extern code FUN_0017b660;
extern code FUN_0017b860;
extern code FUN_0017be10;
extern code FUN_001831e0;
extern code FUN_0018bee0;
extern code FUN_0018c0c0;
extern code FUN_0018eb30;
extern code FUN_00194b20;
extern code FUN_00194b80;
extern code FUN_00195020;
extern code FUN_00195290;
extern code FUN_00195460;
extern code FUN_00198590;
extern code FUN_001a0040;
extern code FUN_001a0250;
extern code FUN_001a02c0;
extern code FUN_001a0dc0;
extern code FUN_001a5320;
extern code FUN_001a56b0;
extern code FUN_001a56c0;
extern code FUN_001a56d0;
extern code FUN_001a5700;
extern code FUN_001a57a0;
extern code FUN_001a5aa0;
extern code FUN_001a91b0;
extern code FUN_001a9390;
extern code FUN_001a9760;
extern code FUN_001aaa20;
extern code FUN_001aaac0;
extern code FUN_001acc30;
extern code FUN_001ad870;
extern code FUN_001ad910;
extern code FUN_001ad920;
extern code FUN_001ad940;
extern code FUN_001adc20;
extern code FUN_001adff0;
extern code FUN_001af930;
extern code FUN_001afa20;
extern code FUN_001aff70;
extern code FUN_001b0020;
extern code FUN_001b00c0;
extern code FUN_001b01b0;
extern code FUN_001b01d0;
extern code FUN_001b0220;
extern code FUN_001b0230;
extern code FUN_001b0240;
extern code FUN_001b0250;
extern code FUN_001b0260;
extern code FUN_001b9120;
extern code FUN_001bf220;
extern code FUN_001c6450;
extern code FUN_001c65e0;
extern code FUN_001c6720;
extern code FUN_001c6d70;
extern code FUN_001c6dd0;
extern code FUN_001c7130;
extern code FUN_001c7160;
extern code FUN_001c7270;
extern code FUN_001c7b10;
extern code FUN_001cd670;
extern code FUN_001d0110;
extern code FUN_001d22a0;
extern code FUN_001d3810;
extern code FUN_001d8b00;
extern code FUN_001d8c60;
extern code FUN_001d8d80;
extern code FUN_001d8e60;
extern code FUN_001dde00;
extern code FUN_001ded40;
extern code FUN_001e1360;
extern code FUN_001e13c0;
extern code FUN_00269690;
extern code FUN_002699a0;
extern code FUN_002699d0;
extern code FUN_00269a10;
extern code FUN_00269c80;
extern code FUN_00269ca0;
extern code FUN_002ff340;
extern code FUN_002ff760;
extern code FUN_002ff790;
extern code FUN_00316e00;
extern code FUN_00316f70;
extern code FUN_003174e0;
extern code FUN_003182d0;
extern code FUN_00318540;
extern code FUN_00318b60;
extern code FUN_00318ed0;
extern code FUN_0031c1d0;
extern code FUN_0035bb40;
extern code FUN_0035bc00;
extern code FUN_0035c1a0;
extern code FUN_003952d0;
extern code FUN_003b2cb0;
extern code FUN_003b5d10;
extern code FUN_003b5d50;
extern code FUN_003b6030;
extern code FUN_003b7090;
extern code FUN_003bb010;
extern code FUN_003c72d0;
extern code FUN_003c7430;
extern code FUN_003c74e0;
extern code FUN_003c7560;
extern code FUN_003c75b0;
extern code FUN_003c77a0;
extern code FUN_003c7850;
extern code FUN_003c78d0;
extern code FUN_003c7b90;
extern code FUN_00421fe0;
extern code FUN_004221a0;
extern code FUN_004222d0;
extern code FUN_004229d0;
extern code FUN_00422c10;
extern code FUN_00422c30;
extern code FUN_00422c90;
extern code FUN_00423fe0;
extern code FUN_00427830;
extern code FUN_00427a10;
extern code FUN_00427db0;
extern code FUN_00427de0;
extern code FUN_00427e20;
extern code FUN_00427e50;
extern code FUN_00427e60;
extern code FUN_00427e70;
extern code FUN_00429e80;
extern code FUN_00469DC0;
extern code FUN_00474630;
extern code FUN_00488dd0;
extern code FUN_00488f30;
extern code FUN_004ACE60;
extern code FUN_004ACE70;
extern code FUN_004b0fa0;
extern code FUN_004b1050;
extern code FUN_004b1090;
extern code FUN_004b1100;
extern code FUN_004b11a0;
extern code FUN_004b6680;
extern code FUN_004b6e10;
extern code FUN_004b6eb0;
extern code FUN_004b75d0;
extern code FUN_004bae00;
extern code FUN_004bb5d0;
extern code FUN_004c0240;
extern code FUN_004c0370;
extern code FUN_004c0550;
extern code FUN_004c06c0;
extern code FUN_004c15a0;
extern code FUN_004c1600;
extern code FUN_004c1750;
extern code FUN_004c17f0;
extern code FUN_004c1820;
extern code FUN_004c1850;
extern code FUN_004c18b0;
extern code FUN_004c1910;
extern code FUN_004c19f0;
extern code FUN_004c1c50;
extern code FUN_004c1cd0;
extern code FUN_004c1d10;
extern code FUN_004c1d50;
extern code FUN_004c1e60;
extern code FUN_004c1e70;
extern code FUN_004c1f70;
extern code FUN_004c2090;
extern code FUN_004c20b0;
extern code FUN_004c2120;
extern code FUN_004c2130;
extern code FUN_004c21b0;
extern code FUN_004c2d20;
extern code FUN_004c2f30;
extern code FUN_004c31b0;
extern code FUN_004c32a0;
extern code FUN_004c33d0;
extern code FUN_004c35d0;
extern code FUN_004c3880;
extern code FUN_004c38c0;
extern code FUN_004c3b50;
extern code FUN_004c3c30;
extern code FUN_004c4200;
extern code FUN_004c47e0;
extern code FUN_004c4930;
extern code FUN_004c5250;
extern code FUN_004c53f0;
extern code FUN_004c5620;
extern code FUN_004c5780;
extern code FUN_004c58a0;
extern code FUN_004c5960;
extern code FUN_004c59b0;
extern code FUN_004c5a00;
extern code FUN_004c5a50;
extern code FUN_004c5c30;
extern code FUN_004c6170;
extern code FUN_004c61b0;
extern code FUN_004c64b0;
extern code FUN_004c6560;
extern code FUN_004c65d0;
extern code FUN_004c6970;
extern code FUN_004c69f0;
extern code FUN_004c6ac0;
extern code FUN_004c6be0;
extern code FUN_004c6c20;
extern code FUN_004c6c60;
extern code FUN_004c7a50;
extern code FUN_004c7b60;
extern code FUN_004c7b90;
extern code FUN_004c7d00;
extern code FUN_004c7d30;
extern code FUN_004c7d80;
extern code FUN_004c81a0;
extern code FUN_004c81d0;
extern code FUN_004c8240;
extern code FUN_004c83c0;
extern code FUN_004c9df0;
extern code FUN_004ca000;
extern code FUN_004ca030;
extern code FUN_004ca510;
extern code FUN_004ca520;
extern code FUN_004ca550;
extern code FUN_004cace0;
extern code FUN_004cad30;
extern code FUN_004cae30;
extern code FUN_004caf10;
extern code FUN_004caf80;
extern code FUN_004cb1b0;
extern code FUN_004cb270;
extern code FUN_004cb2f0;
extern code FUN_004cb6e0;
extern code FUN_004cb7f0;
extern code FUN_004cb9f0;
extern code FUN_004cbe00;
extern code FUN_004cbeb0;
extern code FUN_004cbf20;
extern code FUN_004cc0a0;
extern code FUN_004cc1d0;
extern code FUN_004cc5c0;
extern code FUN_004cc6b0;
extern code FUN_004cdc70;
extern code FUN_004cdce0;
extern code FUN_004cdd50;
extern code FUN_004ce0f0;
extern code FUN_004cec10;
extern code FUN_004d0c30;
extern code FUN_004d0d10;
extern code FUN_004d0e40;
extern code FUN_004d0f00;
extern code FUN_004d0fd0;
extern code FUN_004d1110;
extern code FUN_004d1170;
extern code FUN_004d11d0;
extern code FUN_004d11f0;
extern code FUN_004d1260;
extern code FUN_004d13b0;
extern code FUN_004d1840;
extern code FUN_004d18c0;
extern code FUN_004d4df0;
extern code FUN_004d51c0;
extern code FUN_004d59d0;
extern code FUN_004d5e90;
extern code FUN_004d5fe0;
extern code FUN_004d7f60;
extern code FUN_004ec2b0;
extern code FUN_004f0f30;
extern code FUN_004f1020;
extern code FUN_004f1e20;
extern code FUN_004f1e40;
extern code FUN_004f1ed0;
extern code FUN_004f1f80;
extern code FUN_004f1fd0;
extern code FUN_004f23c0;
extern code FUN_004f2430;
extern code FUN_004f2710;
extern code FUN_004f2e70;
extern code FUN_004f2f70;
extern code FUN_004f3010;
extern code FUN_004f3ec0;
extern code FUN_004f3f70;
extern code FUN_004f3f80;
extern code FUN_004f4640;
extern code FUN_004f4830;
extern code FUN_004f4950;
extern code FUN_00503a58;
extern code FUN_0050d3a0;
extern code FUN_0050d3f0;
extern code FUN_005211b8;
extern code FUN_00521250;
extern code FUN_00521408;
extern code FUN_005225a8;
extern code FUN_005225f8;
extern code FUN_00523e68;
extern code FUN_00524270;
extern code FUN_00524388;
extern code FUN_00524670;
extern code FUN_00524828;
extern code FUN_0052e6d8;
extern code FUN_0052e878;
extern code FUN_0052ea18;
extern code FUN_005316d0;

char FUN_00435440(char param_1);
char FUN_0043bc20(char param_1);
float FUN_0045b4e0(long param_1);
float FUN_004693a0(int param_1);
float FUN_0047cfd0(u32 *param_1,u8 (*param_2) [12],u8 (*param_3) [12], int param_4,int param_5);
float FUN_004a9560(float param_1,int param_2,u8 *param_3);
float FUN_004aa2c0(void);
int * FUN_00496cd0(u32 param_1,u32 *param_2,u64 param_3,u16 *param_4);
int * FUN_004ac120(int *param_1,u64 param_2);
int * FUN_004ac240(int *param_1);
int FUN_0044f120(float *param_1);
int FUN_0044f170(int param_1);
int FUN_00457410(void);
int FUN_0045edd0(u32 *param_1);
int FUN_0045f540(int param_1,int param_2);
int FUN_00465b40(int param_1);
int FUN_00468350(int param_1);
int FUN_0046ad20(int *param_1,int param_2);
int FUN_0046b060(int param_1,u32 *param_2,int param_3);
int FUN_004753d0(int param_1,u32 param_2);
int FUN_00475540(int param_1,u64 param_2,u64 param_3,u32 param_4);
int FUN_00489320(int *param_1);
int FUN_00489ae0(int param_1);
int FUN_0048a7a0(int param_1);
int FUN_0048d200(int param_1);
int FUN_0048e4f0(long param_1);
int FUN_0048e890(int *param_1,long param_2,u64 param_3,int param_4);
int FUN_0048ed20(int param_1,int param_2);
int FUN_0048ede0(int param_1);
int FUN_0048ee30(int param_1,int param_2);
int FUN_004912b0(int param_1);
int FUN_00491cc0(int param_1);
int FUN_00492f80(int param_1,int param_2);
int FUN_00493cb0(u64 param_1);
int FUN_00495340(int *param_1,int param_2);
int FUN_004964f0(int param_1,char *param_2);
int FUN_00499400(int param_1,u64 param_2,int param_3,int param_4);
int FUN_0049c560(int param_1);
int FUN_0049c5c0(int param_1);
int FUN_0049c620(int param_1);
int FUN_0049d4d0(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6);
int FUN_0049ecd0(int param_1);
int FUN_0049f340(int param_1);
int FUN_004a0ce0(int param_1,int *param_2,int param_3,u32 param_4);
int FUN_004a26d0(int param_1,int *param_2,int param_3,u32 param_4);
int FUN_004a5200(void);
int FUN_004a5290(void);
int FUN_004a5320(void);
int FUN_004a6630(int param_1,float *param_2,int param_3,int *param_4,int *param_5);
int FUN_004ab0e0(u64 param_1);
int FUN_004ace80(int param_1,float *param_2,u64 param_3,u32 *param_4,int *param_5);
long FUN_0045ec40(u16 param_1,u16 param_2,u32 *param_3,u32 param_4);
long FUN_0045efe0(u64 param_1);
long FUN_0045f140(u64 param_1,u16 param_2,u16 param_3,u64 param_4, u32 *param_5);
long FUN_00464280(u32 param_1);
long FUN_00464540(u64 param_1);
long FUN_00467c20(long param_1,u64 param_2,int param_3);
long FUN_0046bab0(long param_1,u64 param_2);
long FUN_0046bd00(long param_1,u64 param_2);
long FUN_0046bfb0(float param_1,long param_2,u8 *param_3,float *param_4,u32 param_5);
long FUN_00474260(u32 param_1,u32 param_2,u64 param_3,u64 param_4);
long FUN_00475d60(u64 param_1,u64 param_2,u64 param_3,u32 param_4, u32 param_5);
long FUN_0047ab70(void);
long FUN_0047b1a0(void);
long FUN_0047bb40(int param_1,int param_2,u32 param_3);
long FUN_0048a9a0(long param_1,u64 param_2);
long FUN_0048af80(u32 param_1);
long FUN_0048dab0(int param_1,long param_2,u64 param_3);
long FUN_00490050(u64 param_1);
long FUN_00490dc0(u64 param_1,int *param_2,int *param_3);
long FUN_00491880(void);
long FUN_00491b40(u64 param_1);
long FUN_00491de0(void);
long FUN_004920a0(u64 param_1);
long FUN_00494580(u64 param_1);
long FUN_004947c0(u8 param_1);
long FUN_00494be0(void);
long FUN_00494e30(u64 param_1);
long FUN_004954c0(u64 param_1,long param_2);
long FUN_00495b10(long param_1);
long FUN_00496230(u64 param_1,char *param_2,u32 param_3);
long FUN_00497130(u64 param_1,long param_2,u64 param_3,u64 param_4,long param_5);
long FUN_00498e70(int param_1);
long FUN_00499140(long param_1,u32 param_2);
long FUN_0049a080(long param_1);
long FUN_0049a400(u32 *param_1);
long FUN_0049c810(void);
long FUN_0049fe40(long param_1,int param_2,long param_3);
long FUN_0049fec0(long param_1,u32 param_2);
long FUN_004a35c0(long param_1,long param_2,u32 param_3);
long FUN_004a38f0(long param_1,long param_2,long param_3,long param_4);
long FUN_004a3a80(long param_1,long param_2,long param_3,long param_4);
long FUN_004a3c10(long param_1,long param_2,long param_3);
long FUN_004a3d70(long param_1,u32 param_2);
long FUN_004a3db0(long param_1,long param_2,long param_3);
long FUN_004a3e30(long param_1,int param_2,long param_3);
long FUN_004a5470(void);
long FUN_004a6ce0(u32 param_1,long param_2,u8 *param_3,u32 *param_4, u64 param_5);
long FUN_004a6eb0(float param_1,long param_2,u8 *param_3,float *param_4,float *param_5);
long FUN_004a7820(long param_1,u64 param_2,u32 param_3,u32 param_4);
long FUN_004a9490(long param_1);
long FUN_004a98a0(u64 param_1);
long FUN_004ac570(void);
long FUN_004ac5f0(long param_1);
long FUN_004ac710(long param_1);
long FUN_004acb90(u64 param_1);
long FUN_004aeea0(u64 param_1);
long FUN_004af210(int *param_1,int *param_2,u32 param_3,u64 param_4);
short * FUN_00496e80(int param_1,short param_2,short param_3);
short FUN_0043b980(char param_1,u64 param_2);
short FUN_0043bda0(char param_1,char param_2);
u16 FUN_00435660(char param_1);
u16 FUN_0043c180(char param_1);
u16 FUN_0043c340(char param_1);
u16 FUN_00453460(void);
u32 * FUN_0048f580(u64 param_1,int *param_2,int param_3,u32 param_4);
u32 * FUN_0048fbd0(u64 param_1,u64 param_2,u64 param_3,u32 param_4);
u32 * FUN_004a7e40(u32 *param_1,u32 param_2,u32 param_3,char *param_4);
u32 * FUN_004a8980(u32 *param_1,u64 param_2,u32 param_3,u64 param_4);
u32 * FUN_004a90f0(void);
u32 * FUN_004a9a80(u64 param_1);
u32 * FUN_004ab8c0(void);
u32 FUN_00431880(int param_1);
u32 FUN_00431aa0(u64 param_1);
u32 FUN_00432050(u64 param_1);
u32 FUN_00432600(u64 param_1);
u32 FUN_00432bb0(u64 param_1);
u32 FUN_00433160(int param_1);
u32 FUN_00433810(char param_1,char param_2);
u32 FUN_004339d0(int param_1);
u32 FUN_00433de0(int param_1);
u32 FUN_00434770(float param_1,float param_2,u64 param_3,float *param_4);
u32 FUN_00434920(float param_1,float param_2,int param_3,float *param_4);
u32 FUN_004352e0(void);
u32 FUN_00437e20(char param_1);
u32 FUN_0043a230(char param_1);
u32 FUN_0043a9d0(u64 param_1,u64 param_2,char param_3);
u32 FUN_0043c500(int param_1);
u32 FUN_0043c910(char param_1);
u32 FUN_0043ca30(u64 param_1);
u32 FUN_00449fe0(float param_1,float param_2,float param_3,float param_4,int param_5,short param_6);
u32 FUN_0044a110(float param_1,float param_2,float param_3,float param_4,int param_5,short param_6);
u32 FUN_0044f300(char param_1);
u32 FUN_0044ffb0(int param_1);
u32 FUN_004514a0(char param_1);
u32 FUN_004523c0(u64 param_1,char param_2);
u32 FUN_00452a70(char param_1,char param_2);
u32 FUN_004534b0(char param_1);
u32 FUN_00453ed0(char param_1,char param_2,char param_3,u32 *param_4,char param_5,char param_6);
u32 FUN_004541f0(int param_1);
u32 FUN_00457470(int param_1);
u32 FUN_004575e0(int param_1);
u32 FUN_004589e0(void);
u32 FUN_00458a80(char param_1,char param_2);
u32 FUN_00458cb0(u64 param_1,char param_2,char param_3);
u32 FUN_00459790(u64 param_1,char param_2);
u32 FUN_00459e00(char param_1);
u32 FUN_00459e80(int param_1);
u32 FUN_0045a020(int param_1);
u32 FUN_0045a280(u64 param_1,int param_2);
u32 FUN_0045af40(void);
u32 FUN_0045afd0(float param_1,long param_2,int param_3,int param_4,int param_5,int param_6, u8 param_7,u8 param_8,short param_9);
u32 FUN_0045b190(long param_1);
u32 FUN_0045b420(long param_1,long param_2);
u32 FUN_0045df00(int param_1);
u32 FUN_0045e3e0(u64 param_1);
u32 FUN_0045e8c0(u64 param_1);
u32 FUN_0045eaf0(void);
u32 FUN_0045eba0(void);
u32 FUN_00465590(int param_1,u64 param_2);
u32 FUN_00466710(int param_1);
u32 FUN_00466720(int param_1);
u32 FUN_00466730(u32 *param_1);
u32 FUN_00469030(int param_1);
u32 FUN_00469340(int param_1);
u32 FUN_004695f0(int param_1);
u32 FUN_00469650(int param_1);
u32 FUN_004696b0(int param_1);
u32 FUN_00469710(int param_1);
u32 FUN_004698e0(int param_1);
u32 FUN_00469a90(void);
u32 FUN_00469ce0(void);
u32 FUN_00469cf0(void);
u32 FUN_0046a6c0(int param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0046a6f0(int param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0046a720(int param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0046a750(u64 param_1);
u32 FUN_0046a890(u64 param_1);
u32 FUN_0046eb10(int param_1,u32 *param_2);
u32 FUN_00473600(int *param_1,u32 param_2);
u32 FUN_00473b10(int *param_1,u32 param_2);
u32 FUN_00473fb0(u32 param_1);
u32 FUN_00474640(int param_1,int *param_2,u32 param_3,u32 param_4);
u32 FUN_00474a80(int param_1);
u32 FUN_00478440(int param_1,u32 *param_2);
u32 FUN_00478e80(u64 param_1,u32 param_2);
u32 FUN_00479840(int param_1,u32 *param_2);
u32 FUN_0047a210(u64 param_1,int param_2);
u32 FUN_0047a510(u64 param_1,u64 param_2,u64 param_3,u32 param_4);
u32 FUN_0047abf0(int param_1,u32 *param_2);
u32 FUN_0047bd20(u64 param_1);
u32 FUN_0047de30(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_0047e9e0(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
u32 FUN_0047fb10(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_00480c30(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_00481860(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
u32 FUN_00482a50(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_00483170(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
u32 FUN_004861b0(u64 param_1,u64 param_2,u32 param_3,u32 param_4);
u32 FUN_00486340(u32 param_1,int param_2,u32 param_3);
u32 FUN_00489020(int param_1);
u32 FUN_00489550(int *param_1,int param_2,long param_3,int param_4,long param_5,long param_6, long param_7,long param_8);
u32 FUN_004899f0(u64 param_1);
u32 FUN_00489a80(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
u32 FUN_0048a1a0(void);
u32 FUN_0048a2c0(int param_1);
u32 FUN_0048a3d0(u32 *param_1);
u32 FUN_0048a3e0(int param_1);
u32 FUN_0048a480(int param_1);
u32 FUN_0048abf0(void);
u32 FUN_0048ac00(void);
u32 FUN_0048da30(u64 param_1);
u32 FUN_0048ef30(int param_1);
f32 FUN_0048ef60(int param_1, int param_2);
u32 FUN_0048ef80(int param_1,int param_2);
int FUN_0048efe0(int param_1);
u32 FUN_00491a80(u64 param_1);
u32 FUN_00491ea0(u64 param_1);
u32 FUN_00492d50(u64 param_1);
u32 FUN_00493b60(u64 param_1);
u32 FUN_00494760(u64 param_1);
u32 FUN_00494cc0(u64 param_1);
u32 FUN_00495320(int *param_1,int param_2);
u32 FUN_00495c20(u64 param_1);
u32 FUN_00495c80(int *param_1);
u32 FUN_00497600(int param_1,u32 param_2,int *param_3,int param_4);
u32 FUN_004982b0(int *param_1,long param_2);
u32 FUN_00498e40(long param_1,long param_2);
u32 FUN_00499c20(code *param_1,u64 param_2);
u32 FUN_0049a170(u32 param_1);
u32 FUN_0049a290(int param_1);
u32 FUN_0049aeb0(u64 param_1);
u32 FUN_0049af20(int *param_1);
u32 FUN_0049c230(int param_1);
u32 FUN_0049c790(void);
u32 FUN_0049c7a0(u64 param_1,u32 *param_2);
u32 FUN_0049c8c0(void);
u32 FUN_0049cc70(int param_1);
u32 FUN_0049e6c0(int param_1);
u32 FUN_0049e780(int param_1);
u32 FUN_0049f5d0(int param_1,u32 *param_2);
u32 FUN_004a09d0(u64 param_1,u32 *param_2);
u32 FUN_004a1430(int param_1);
u32 FUN_004a2bb0(int param_1);
u32 FUN_004a4060(int param_1,int *param_2);
u32 FUN_004a42f0(int param_1);
u32 FUN_004a4f90(int param_1);
u32 FUN_004a5080(int param_1);
u32 FUN_004a5210(void);
u32 FUN_004a52a0(void);
u32 FUN_004a5330(void);
u32 FUN_004a5400(void);
u32 FUN_004a5540(u64 param_1);
u32 FUN_004a9330(void);
u32 FUN_004a9550(u32 param_1);
u32 FUN_004a96b0(int param_1);
u32 FUN_004a9bf0(void);
u32 FUN_004a9d80(float *param_1,float *param_2,float *param_3);
u32 FUN_004a9f20(float param_1,float param_2,float param_3,float param_4);
u32 FUN_004aa410(int param_1);
u32 FUN_004aa540(void);
u32 FUN_004aa6c0(void);
u32 FUN_004aada0(u32 param_1,u32 param_2);
u32 FUN_004aae00(u32 param_1,u32 param_2);
u32 FUN_004ab0c0(void);
u32 FUN_004ac870(void);
u32 FUN_004adb80(void);
u32 FUN_004ae010(int param_1);
u32 FUN_004ae8f0(int param_1);
u32 FUN_004ae900(int param_1);
u32 FUN_004af130(u64 param_1);
u32 FUN_004af940(int param_1);
u64 FUN_00430060(int param_1);
u64 FUN_00430180(u64 param_1);
u64 FUN_00430bb0(u64 param_1);
u64 FUN_00431110(u64 param_1,u64 param_2,char param_3,u8 param_4);
u64 FUN_004312b0(u64 param_1);
u64 FUN_00431670(u64 param_1,char param_2,u32 param_3);
u64 FUN_00439f60(u64 param_1,char param_2);
u64 FUN_0043a0b0(u64 param_1,char param_2);
u64 FUN_0043c690(u32 param_1);
u64 FUN_00447e70(u64 param_1,u8 param_2,u8 param_3);
u64 FUN_0044aaf0(u64 param_1);
u64 FUN_0044ad20(u64 param_1,char param_2);
u64 FUN_0044e560(u64 param_1);
u64 FUN_004542c0(char param_1);
u64 FUN_00454620(char param_1);
u64 FUN_00455e00(u64 param_1);
u64 FUN_004560d0(u32 param_1,u32 param_2,u32 param_3,u64 param_4, u32 param_5,u32 param_6);
u64 FUN_004579b0(u64 param_1);
u64 FUN_00457a40(u64 param_1);
u64 FUN_00458630(u64 param_1,char param_2,u8 param_3);
u64 FUN_00459f60(u64 param_1,u16 param_2,char param_3);
u64 FUN_0045ee00(u64 param_1,u64 param_2);
u64 FUN_0045f4e0(u64 param_1,int param_2);
u64 FUN_0045f580(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_0045f600(u64 param_1,u64 param_2,char *param_3,int param_4);
u64 FUN_00464020(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
u64 FUN_00464120(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
u64 FUN_004643b0(u64 param_1,int param_2,u32 param_3);
u64 FUN_004654a0(u64 param_1,u64 param_2);
u64 FUN_00465930(u64 param_1,u64 param_2);
u64 FUN_00465a00(u64 param_1);
u64 FUN_00465ae0(u64 param_1);
u64 FUN_00465bf0(u64 param_1,int param_2);
u64 FUN_00465cf0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00465eb0(u64 param_1,u64 param_2,u32 param_3);
u64 FUN_00466260(u32 param_1,u32 *param_2,u32 *param_3,u32 param_4,u64 param_5);
u64 FUN_004663d0(u64 param_1);
u64 FUN_00466480(u32 param_1,int param_2,u32 param_3,u64 param_4);
u64 FUN_00466640(u64 param_1);
u64 FUN_00466ef0(u32 *param_1);
u64 FUN_00467590(u64 param_1);
u64 FUN_00467600(u64 param_1);
u64 FUN_004676c0(u64 param_1);
u64 FUN_004677f0(u64 param_1);
u64 FUN_00467860(u64 param_1,u64 param_2);
u64 FUN_00467b40(u64 param_1,int *param_2);
u64 FUN_00467fd0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00468560(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00468690(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_004687e0(long param_1,int *param_2);
u64 FUN_00468dc0(u64 param_1);
u64 FUN_00468e30(u64 param_1);
u64 FUN_00468ea0(u64 param_1,int param_2);
u64 FUN_00469060(u64 param_1,long param_2);
u64 FUN_00469280(u64 param_1,u32 param_2);
u64 FUN_004692e0(float param_1,u64 param_2);
u64 FUN_00469400(u64 param_1,int param_2);
u64 FUN_004694b0(u64 param_1,u32 param_2);
u64 FUN_00469510(u64 param_1,u32 param_2);
u64 FUN_00469590(u32 param_1,u64 param_2);
u64 FUN_00469770(u64 param_1,int param_2);
u64 FUN_00469840(u64 param_1,u32 param_2,u32 param_3);
u64 FUN_00469940(u64 param_1,u32 *param_2,u32 *param_3);
u64 FUN_004699b0(u64 param_1,u32 param_2,u32 param_3);
u64 FUN_00469a10(u64 param_1,long param_2,long param_3);
u64 FUN_00469d00(u64 param_1);
u64 FUN_00469d60(u64 param_1);
u64 FUN_00469e30(u64 param_1,int param_2);
u64 FUN_00469fe0(u64 param_1);
u64 FUN_0046a040(u64 param_1,int param_2);
u64 FUN_0046a0f0(u64 param_1,u64 param_2,int param_3);
u64 FUN_0046a230(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0046a470(u64 param_1,int param_2);
u64 FUN_0046a600(u64 param_1);
u64 FUN_0046a660(u64 param_1);
u64 FUN_0046a830(u64 param_1);
u64 FUN_0046a970(u64 param_1,int param_2);
u64 FUN_0046aa80(u64 param_1,u32 *param_2);
u64 FUN_0046ac30(u64 param_1);
u64 FUN_0046ad80(u32 *param_1);
u64 FUN_0046afa0(u32 *param_1);
u64 FUN_0046b8e0(int param_1);
u64 FUN_0046c330(u64 param_1,u32 param_2);
u64 FUN_0046c5b0(int param_1);
u64 FUN_0046cd90(int param_1);
u64 FUN_0046d6f0(int param_1);
u64 FUN_0046e170(int param_1);
u64 FUN_0046eb90(int param_1,u32 *param_2);
u64 FUN_0046f400(u32 *param_1,u32 *param_2);
u64 FUN_0046fdd0(int param_1);
u64 FUN_00470200(float *param_1,float *param_2);
u64 FUN_004709e0(int param_1);
u64 FUN_00470e10(u32 *param_1,u32 *param_2);
u64 FUN_00471470(int param_1);
u64 FUN_004718a0(int param_1,u32 *param_2);
u64 FUN_00472270(int param_1);
u64 FUN_00472970(int param_1);
u64 FUN_004733c0(int param_1,int param_2);
u64 FUN_004734d0(u64 param_1);
u64 FUN_00474160(u64 param_1);
u64 FUN_004747f0(u64 param_1);
u64 FUN_00474820(int param_1,long param_2,u32 param_3);
u64 FUN_004748c0(int param_1,long param_2);
u64 FUN_004749a0(int param_1,long param_2);
u64 FUN_00474bb0(u64 param_1);
u64 FUN_00474c60(u64 param_1);
u64 FUN_00478520(int param_1);
u64 FUN_00478a70(void);
u64 FUN_00479900(int param_1);
u64 FUN_00479e50(void);
u64 FUN_0047a710(u64 param_1,int *param_2);
u64 FUN_0047b280(u64 param_1,float *param_2,u32 param_3,u8 *param_4);
u64 FUN_0047b750(u64 param_1,float *param_2,u32 param_3,float *param_4);
u64 FUN_0047be10(int param_1,int param_2,u64 param_3);
u64 FUN_00488cd0(u64 param_1);
u64 FUN_00488d40(u64 param_1);
u64 FUN_00489080(u64 param_1,int *param_2);
u64 FUN_00489160(u64 param_1,long param_2);
u64 FUN_00489730(u64 param_1);
u64 FUN_00489840(u64 param_1);
u64 FUN_004898e0(u64 param_1);
u64 FUN_00489960(u64 param_1);
u64 FUN_00489b70(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00489cd0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_00489f20(u64 param_1,u64 param_2,int param_3,u64 param_4,u64 param_5);
int FUN_0048a2a0(int param_1,u32 param_2);
u64 FUN_0048a2e0(u64 param_1,int param_2);
u64 FUN_0048a370(int param_1);
u64 FUN_0048a4b0(u32 param_1);
u64 FUN_0048a790(u64 param_1);
u64 FUN_0048a800(u64 param_1,int param_2);
u64 FUN_0048ac10(u64 param_1,long param_2);
u64 FUN_0048b910(u32 param_1,float *param_2);
u64 FUN_0048cf00(u64 param_1);
u64 FUN_0048cfa0(u64 param_1);
u64 FUN_0048d0e0(u64 param_1);
u64 FUN_0048d270(int param_1,int param_2,u64 param_3);
u64 FUN_0048d370(u64 param_1,int param_2,u32 *param_3);
u64 FUN_0048d480(float param_1,int param_2,long param_3,u64 param_4,long param_5);
u64 FUN_0048d960(u64 param_1);
u64 FUN_0048e020(int *param_1,u64 param_2);
u64 FUN_0048e2d0(int *param_1,u64 param_2);
u64 FUN_0048e750(long param_1,u64 param_2);
u64 FUN_0048eab0(u64 param_1,int param_2);
u64 FUN_0048eb50(u64 param_1,int param_2,int param_3);
u64 FUN_0048ec20(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_0048ecf0(u64 param_1,u64 param_2,int param_3,int param_4);
u64 FUN_0048f340(u64 param_1,int param_2);
u64 FUN_0048f3c0(u64 param_1,u64 param_2,int param_3);
u64 FUN_0048f460(u64 param_1,int param_2);
u64 FUN_0048f4e0(u64 param_1,u64 param_2,int param_3);
u64 FUN_00490770(u64 param_1,u64 param_2,int param_3);
u64 FUN_00490810(u64 param_1);
u64 FUN_00490860(u64 param_1);
u64 FUN_004908d0(u64 param_1,int param_2);
u64 FUN_00490980(u64 param_1,u64 param_2);
u64 FUN_00490d00(u64 param_1);
u64 FUN_00490d40(u64 param_1);
u64 FUN_00490d90(u64 param_1);
u64 FUN_00491410(u64 param_1);
u64 FUN_004914d0(u64 param_1,int param_2);
u64 FUN_00491630(u64 param_1);
u64 FUN_004916d0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00491760(u64 param_1,code *param_2,u64 param_3);
u64 FUN_004917f0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_004919b0(u64 param_1,int param_2,u32 param_3);
u64 FUN_00491ff0(u64 param_1,int param_2);
u64 FUN_00492020(u64 param_1,int param_2);
u64 FUN_00492060(u64 param_1,int param_2);
u64 FUN_00492d10(u64 param_1);
u64 FUN_00492e20(u64 param_1,float *param_2);
u64 FUN_00493210(u64 param_1,u16 *param_2,u16 param_3,u16 param_4, u16 param_5);
u64 FUN_00493230(u64 param_1,int param_2,long param_3);
u64 FUN_004932c0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00493370(u64 param_1,u16 param_2);
u64 FUN_004933d0(u64 param_1);
u64 FUN_00493b40(u64 param_1);
u64 FUN_004944b0(u64 param_1,u32 *param_2);
u64 FUN_004948b0(u64 param_1);
u64 FUN_00494930(u64 param_1,int param_2);
u64 FUN_004949c0(u64 param_1,int param_2);
u64 FUN_00494a40(u64 param_1,u64 param_2,int param_3);
u64 FUN_00494ae0(u64 param_1,int param_2);
u64 FUN_00494b70(u64 param_1);
u64 FUN_00494d50(u64 param_1,long param_2);
u64 FUN_00495260(u64 param_1);
u64 FUN_00495300(u64 param_1);
u64 FUN_00495a30(u64 param_1,int param_2);
u64 FUN_00495cf0(u64 param_1,u32 param_2,u16 param_3,u16 param_4, u16 param_5,u16 param_6,u16 param_7,u16 param_8, u16 param_9);
u64 FUN_00495f10(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00495fb0(u32 *param_1,char *param_2,u64 param_3,u64 param_4);
u64 FUN_004967a0(u64 param_1);
u64 FUN_00496be0(u32 param_1,u32 *param_2,int param_3,u32 *param_4);
u64 FUN_00498720(int param_1,u64 param_2,u32 param_3);
u64 FUN_00499320(u64 param_1);
u64 FUN_00499a80(u64 param_1);
u64 FUN_00499af0(u64 param_1,int param_2);
u64 FUN_00499b90(u64 param_1);
u64 FUN_00499ca0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00499d30(u64 param_1);
u64 FUN_00499fd0(u64 param_1);
u64 FUN_0049a250(u64 param_1);
u64 FUN_0049a3d0(u64 param_1,code *param_2);
u64 FUN_0049a7c0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_0049a870(u64 param_1,code *param_2,u64 param_3);
u64 FUN_0049aaf0(u64 param_1,int param_2);
u64 FUN_0049abf0(u64 param_1);
u64 FUN_0049ade0(u64 param_1,int param_2);
u64 FUN_0049ae30(u64 param_1);
u64 FUN_0049b180(u64 param_1);
u64 FUN_0049b2e0(u64 param_1);
u64 FUN_0049b3f0(u64 param_1,int param_2);
u64 FUN_0049b440(u64 param_1);
u64 FUN_0049b760(u64 param_1,int param_2);
u64 FUN_0049b7a0(u64 param_1);
u64 FUN_0049b850(u64 param_1,int param_2);
u64 FUN_0049bbc0(u64 param_1,u64 param_2);
u64 FUN_0049bbf0(u64 param_1,u64 param_2);
u64 FUN_0049bc20(u64 param_1,u64 param_2);
u64 FUN_0049bdc0(u64 param_1,u64 param_2,u64 param_3);
u64 FUN_0049c160(u64 param_1,int param_2);
u64 FUN_0049c1b0(u64 param_1,int param_2);
u64 FUN_0049c1e0(u64 param_1,int param_2);
u64 FUN_0049c240(u64 param_1,u64 param_2);
u64 FUN_0049c330(u64 param_1,code *param_2,u64 param_3);
u64 FUN_0049c3d0(u64 param_1,int param_2);
u64 FUN_0049c480(u64 param_1,int param_2);
u64 FUN_0049dc70(int param_1);
u64 FUN_0049e5a0(u64 param_1,int param_2);
u64 FUN_0049e830(u64 param_1,u64 param_2);
u64 FUN_0049e9f0(u64 param_1,u64 param_2);
u64 FUN_0049ee70(u64 param_1,u64 param_2);
u64 FUN_0049f040(u64 param_1,u64 param_2);
u64 FUN_0049faa0(u64 param_1);
u64 FUN_004a0430(u64 param_1,int param_2);
u64 FUN_004a0e00(int param_1);
u64 FUN_004a30d0(int param_1);
u64 FUN_004a3f20(u64 param_1);
u64 FUN_004a4d60(u64 param_1,int param_2);
u64 FUN_004a4da0(u64 param_1);
u64 FUN_004a4e40(u64 param_1);
u64 FUN_004a4ef0(u64 param_1);
u64 FUN_004a55b0(u64 param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6,float *param_7);
u64 FUN_004a5dd0(u64 param_1,u8 *param_2,u8 *param_3,u8 *param_4,u64 param_5);
u64 FUN_004a6200(u64 param_1,float *param_2,float *param_3,float *param_4,float *param_5);
u64 FUN_004a62e0(u64 param_1,long param_2);
u64 FUN_004a6360(u64 param_1,int param_2,u64 param_3);
u64 FUN_004a6530(u64 param_1,u64 param_2);
u64 FUN_004a6600(u64 param_1);
u64 FUN_004a7620(u64 param_1);
u64 FUN_004ab1b0(u64 param_1);
u64 FUN_004ab200(u32 param_1,u32 param_2,u64 param_3);
u64 FUN_004ab2c0(float param_1,float param_2,u64 param_3);
u64 FUN_004ab410(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6, u64 param_7);
u64 FUN_004ab6a0(u64 param_1);
u64 FUN_004abd50(u64 param_1,u32 *param_2);
u64 FUN_004ac020(int *param_1,u64 param_2);
u64 FUN_004ac920(u64 param_1,int param_2,u64 param_3);
u64 FUN_004acb10(u64 param_1,u64 param_2);
u64 FUN_004ad480(u64 param_1,char *param_2);
u64 FUN_004ad5b0(u64 param_1,long param_2,u64 param_3);
u64 FUN_004ad6a0(int param_1);
u64 FUN_004ad700(u64 param_1,u64 param_2);
u64 FUN_004ad750(u64 param_1);
u64 FUN_004ad940(u64 param_1,u64 param_2);
u64 FUN_004adbd0(int *param_1);
u64 FUN_004adcc0(u64 param_1,u32 param_2);
u64 FUN_004addb0(u64 param_1,u64 param_2);
u64 FUN_004ade90(u64 param_1);
u64 FUN_004adf30(u64 param_1);
u64 FUN_004adfd0(u64 param_1,int param_2);
u64 FUN_004ae020(u64 param_1,u32 *param_2);
u64 FUN_004ae070(u32 param_1,u32 param_2,u64 param_3);
u64 FUN_004ae0c0(u32 param_1,u32 param_2,u64 param_3);
u64 FUN_004ae110(u64 param_1,u64 param_2);
u64 FUN_004ae150(u64 param_1,u64 param_2);
u32 FUN_004ae1d0(u32 param_1,u32 param_2);
u64 FUN_004ae1f0(int param_1,u32 *param_2);
u64 FUN_004ae270(u64 param_1,u64 param_2);
u64 FUN_004ae2f0(u64 param_1);
u64 FUN_004ae3b0(u64 param_1,u64 param_2);
u64 FUN_004ae690(u64 param_1);
u64 FUN_004ae790(u64 param_1);
u64 FUN_004ae960(u64 param_1,float *param_2,float *param_3);
u64 FUN_004aeb60(u64 param_1,code *param_2,u64 param_3);
u64 FUN_004aebf0(u64 param_1,u64 param_2,long param_3);
u32 FUN_004aef50(u32 param_1);
u64 FUN_004aef60(u64 param_1);
u64 FUN_004af340(u32 *param_1);
u64 FUN_004af760(u64 param_1);
u64 FUN_004af9d0(u64 param_1,float *param_2,float *param_3);
u64 FUN_004affe0(u64 param_1,u64 param_2,long param_3);
u8 * FUN_00493710(int param_1,int param_2,u32 param_3);
u8 * FUN_004aae60(void);
u8 ** FUN_0049ff00(void);
u8 ** FUN_004a3f10(void);
u8 FUN_00435260(char param_1);
u8 FUN_004353f0(int param_1);
u8 FUN_00435810(void);
u8 FUN_004359f0(u64 param_1,u8 param_2,u8 param_3,u32 *param_4, u8 param_5,u8 param_6);
u8 FUN_0043c730(char param_1);
u8 FUN_0043c7f0(char param_1);
u8 FUN_00449c90(u64 param_1,char param_2);
u8 FUN_0044a420(int param_1,long param_2,u64 param_3);
u8 FUN_0044f060(float param_1,int param_2,float *param_3);
u8 FUN_0044f1c0(float param_1,float *param_2,float *param_3);
u8 FUN_0044fab0(int param_1);
u8 FUN_00453480(void);
u8 FUN_00454400(u32 *param_1,char param_2);
u8 FUN_00454520(float *param_1,char param_2);
u8 FUN_00454a70(char param_1,float *param_2);
u8 FUN_00454d00(float *param_1);
u8 FUN_00457390(char param_1);
u8 FUN_004573d0(char param_1);
u8 FUN_0045a3b0(void);
u8 FUN_0045af90(long param_1);
u8 FUN_0045b480(long param_1);
u8 FUN_0045b4b0(long param_1);
u8 FUN_0045e010(int param_1);
u8 FUN_0045e0c0(int param_1);
u8 FUN_0045e170(int param_1);
u8 FUN_0045ec00(void);
u8 FUN_0045ec20(void);
u8 FUN_0045f7d0(void);
u8 FUN_004661b0(void);
u8 FUN_00468c50(void);
u8 FUN_0046a530(void);
u8 FUN_00473590(void);
u8 FUN_00477050(int param_1);
u8 FUN_00479030(int param_1);
u8 FUN_0047a3d0(int param_1);
u32 FUN_00488fe0(void);
u8 FUN_0048ad20(void);
u8 FUN_0048dcf0(void);
u8 FUN_0048f030(void);
u8 FUN_004915c0(void);
u8 FUN_0049a980(void);
u8 FUN_0049be50(void);
u8 FUN_0049c6c0(void);
u8 FUN_004a5100(void);
u8 FUN_004a9bd0(int param_1);
u8 FUN_004aa390(float param_1);
u8 FUN_004aa3d0(float param_1);
u8 FUN_004aaa60(void);
u8 FUN_004aab40(long param_1);
u8 FUN_004aac70(u32 *param_1);
u8 FUN_004ac390(long param_1);
u8 FUN_004accc0(float *param_1,int *param_2);
u8 FUN_004ae1e0(int param_1);
u8 FUN_004ae4e0(int param_1);
u8 FUN_004ae5a0(long param_1);
void FUN_00430150(int param_1);
void FUN_00430220(int param_1,u64 param_2);
void FUN_00430270(u32 *param_1,int param_2);
void FUN_004302a0(int param_1);
void FUN_004302b0(void);
void FUN_00430630(int param_1);
void FUN_00430780(u64 param_1,int param_2,int param_3,int param_4);
void FUN_00430a40(char param_1);
void FUN_004310e0(int param_1);
void FUN_004311f0(float *param_1,u32 param_2,u32 param_3);
void FUN_00431630(int param_1);
void FUN_004332f0(int param_1);
void FUN_004333d0(int param_1);
void FUN_004334d0(int param_1);
void FUN_004343d0(int param_1);
void FUN_004344f0(float param_1,float *param_2,int param_3,float *param_4,float *param_5);
void FUN_00434c90(char param_1);
void FUN_00434d30(void);
void FUN_00434e60(void);
void FUN_00434f60(u8 param_1);
void FUN_00434f70(void);
void FUN_00435060(u8 param_1);
void FUN_004350e0(char param_1,char param_2);
void FUN_00435370(u8 param_1);
void FUN_00435c00(u64 param_1);
void FUN_00437e00(void);
void FUN_00437e80(u32 *param_1,char param_2);
void FUN_00438010(u64 param_1);
void FUN_00439400(char param_1);
void FUN_00439520(u64 param_1);
void FUN_0043a1a0(char param_1,u8 param_2);
void FUN_0043a2f0(int param_1);
void FUN_0043a960(int param_1);
void FUN_0043bf50(u64 param_1);
void FUN_0043c660(int param_1);
void FUN_0043c7a0(char param_1,u8 param_2);
void FUN_00447ad0(int param_1);
void FUN_00447f90(float *param_1,int param_2,char param_3);
void FUN_00448060(u64 param_1,u8 param_2,u64 param_3,char param_4,short param_5, char param_6);
void FUN_00448cf0(u64 param_1,u8 param_2,u64 param_3,char param_4,short param_5, char param_6,int param_7);
void FUN_00449d10(int param_1);
void FUN_00449d60(u64 param_1);
void FUN_00449ed0(void);
void FUN_00449fa0(void);
void FUN_0044a240(u32 param_1,u32 param_2,float param_3,u32 param_4,int param_5 ,u8 param_6);
void FUN_0044a330(u32 param_1,u32 param_2,float param_3,u32 param_4,int param_5 ,u8 param_6);
void FUN_0044a630(int param_1);
void FUN_0044a790(u32 *param_1);
void FUN_0044a990(int param_1,u32 *param_2);
void FUN_0044acf0(int param_1);
void FUN_0044af60(u64 param_1);
void FUN_0044b7d0(int param_1);
void FUN_0044beb0(u64 param_1);
void FUN_0044d600(int param_1);
void FUN_0044dfc0(u64 param_1);
void FUN_0044e530(int param_1,u8 param_2);
void FUN_0044f270(float *param_1,float *param_2);
void FUN_004501b0(char param_1);
void FUN_00450b30(char param_1);
void FUN_00451d70(int param_1);
void FUN_00452010(float *param_1);
void FUN_00452f70(u32 *param_1,int param_2);
void FUN_004532d0(char param_1);
void FUN_004533e0(u8 param_1);
void FUN_00453470(u16 param_1);
void FUN_00453490(int param_1);
void FUN_00453d90(char param_1);
void FUN_00454110(int param_1);
void FUN_00454290(int param_1);
void FUN_004543c0(char param_1,u8 param_2);
void FUN_00454f50(char param_1,char param_2);
void FUN_00455b50(void);
void FUN_00455cf0(void);
void FUN_00456050(int param_1);
void FUN_004561d0(u32 param_1,u32 param_2,int param_3);
void FUN_004561f0(float param_1,int param_2);
void FUN_004563b0(f32 param_1, int param_2);
void FUN_004563c0(int param_1,u8 param_2);
void FUN_004563d0(int param_1,u64 param_2);
void FUN_00456400(int param_1,u8 param_2);
void FUN_00456410(char param_1);
void FUN_00456450(char param_1);
void FUN_00456490(char param_1);
void FUN_004564e0(char param_1);
void FUN_00456530(char param_1);
void FUN_00456580(char param_1);
void FUN_004565d0(char param_1);
void FUN_00456620(char param_1);
void FUN_00456670(u64 param_1,u64 param_2);
void FUN_00456a90(u64 param_1,u64 param_2,u64 param_3);
void FUN_00456ea0(u64 param_1,u64 param_2,u64 param_3);
void FUN_00457340(char param_1,u8 param_2,char param_3);
void FUN_00457980(int param_1);
void FUN_00458600(int param_1);
void FUN_00458850(int param_1);
void FUN_00458870(int param_1);
void FUN_00458890(void);
void FUN_00458920(int param_1);
void FUN_00458930(void);
void FUN_004589d0(int param_1,u8 param_2);
void FUN_00458b00(void);
void FUN_00458b60(void);
void FUN_00458bb0(void);
void FUN_00459d60(void);
void FUN_00459f30(int param_1);
void FUN_0045a220(int param_1);
void FUN_0045a3e0(void);
void FUN_0045a430(char param_1);
void FUN_0045a490(void);
void FUN_0045ace0(void);
void FUN_0045af70(u8 param_1);
void FUN_0045b620(float param_1,float param_2,float param_3,float param_4,u64 param_5, char param_6,int param_7);
void FUN_0045b830(int param_1,long param_2);
void FUN_0045b8f0(int param_1);
void FUN_0045bcb0(u64 param_1,u64 param_2);
void FUN_0045bd90(u64 param_1);
void FUN_0045c530(int param_1);
void FUN_0045c8c0(int param_1,int param_2);
void FUN_0045cdd0(u64 param_1,long param_2);
void FUN_0045ce90(u64 param_1);
void FUN_0045d990(u64 param_1,long param_2);
void FUN_0045e7b0(int param_1);
void FUN_0045e7e0(void);
void FUN_0045ea80(int param_1);
void FUN_0045edc0(void);
void FUN_0045f930(int param_1,float *param_2,code *param_3,u32 param_4);
void FUN_004606b0(int param_1,u64 param_2,code *param_3,u32 param_4);
void FUN_00460ec0(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00461900(int param_1,float *param_2,u64 param_3,code *param_4,u32 param_5);
void FUN_00461d00(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00461ea0(int param_1,float *param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00462bb0(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5);
void FUN_00463490(int param_1,int param_2,float *param_3,u32 param_4,code *param_5, u32 param_6);
void FUN_00463b20(int param_1,int param_2,int param_3,u32 param_4,code *param_5, u32 param_6);
void FUN_00463f20(int param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00464850(float param_1,int param_2,int param_3,int param_4);
void FUN_00464e80(float param_1,int param_2,int param_3,int param_4);
void FUN_00465670(int param_1,int param_2);
void FUN_00468530(u64 param_1,u64 param_2,int param_3);
void FUN_00468660(u64 param_1,u64 param_2,int param_3);
void FUN_00468720(char *param_1,long param_2,int param_3);
void FUN_00469aa0(int param_1);
void FUN_00469b50(int param_1);
void FUN_00469bc0(int param_1);
void FUN_0046a8d0(int *param_1,int *param_2);
void FUN_0046a9e0(int *param_1);
void FUN_0046b1b0(u32 *param_1,int param_2,u32 *param_3);
void FUN_0046ea80(u64 param_1);
void FUN_00472130(u64 param_1);
void FUN_00472170(u64 param_1);
void FUN_004721b0(u64 param_1);
void FUN_004721f0(u64 param_1);
void FUN_00472230(u64 param_1);
void FUN_00473340(u64 param_1);
void FUN_00473380(u64 param_1);
void FUN_00474210(u64 param_1,u64 param_2,u64 param_3);
void FUN_00474d30(int param_1,int param_2);
void FUN_00474f20(int param_1,u32 param_2);
void FUN_00475c20(int param_1);
void FUN_00475cb0(int param_1);
void FUN_00476140(u32 *param_1,long param_2,u32 param_3);
void FUN_00476490(u64 *param_1,long param_2,u64 *param_3);
void FUN_00476720(int param_1,long param_2,u64 *param_3);
void FUN_00476980(int param_1,long param_2,u64 *param_3);
void FUN_00476c20(int param_1,int param_2,long param_3);
void FUN_00477150(int *param_1,int param_2,u64 param_3,u64 param_4,u32 param_5);
void FUN_00477470(int *param_1,u64 param_2,u64 param_3,u64 param_4, u32 param_5);
void FUN_00477610(int *param_1,u64 param_2,u64 param_3,int param_4,int param_5);
void FUN_00477810(u32 *param_1,int param_2,int param_3);
void FUN_00477a20(u32 *param_1,int param_2,int param_3);
void FUN_00477c90(int *param_1,int param_2,int param_3);
void FUN_00477eb0(int *param_1,int param_2,int param_3);
void FUN_00478100(int *param_1,int param_2,int param_3);
void FUN_00478280(int *param_1,int param_2,int param_3);
void FUN_00478cc0(int param_1,u32 *param_2);
void FUN_00479170(int *param_1,int param_2,u64 param_3,u64 param_4,u32 param_5);
void FUN_00479590(int *param_1,u64 param_2,u64 param_3,u64 param_4, u32 param_5);
void FUN_0047a050(int param_1,u32 *param_2);
void FUN_0047bf80(int param_1);
void FUN_0047c240(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_0047c8c0(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_004838e0(u32 *param_1,int param_2,int param_3);
void FUN_00485070(u32 *param_1,int param_2,int param_3);
void FUN_00485110(u32 *param_1,int param_2,int param_3);
void FUN_00485440(u32 *param_1,int param_2,int param_3);
void FUN_00485750(int *param_1,int param_2,int param_3);
void FUN_00485e20(int *param_1,int param_2,int param_3);
void FUN_00485ef0(int *param_1,int param_2,int param_3);
void FUN_00485ff0(int *param_1,int param_2,int param_3);
void FUN_004866c0(int param_1);
void FUN_00486c80(int *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_00487030(int *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_00487280(int *param_1,float *param_2,float *param_3,int param_4,int param_5);
void FUN_004876f0(int *param_1,float *param_2,float *param_3,long param_4,int param_5);
void FUN_00487bf0(u32 *param_1,int param_2,int param_3);
void FUN_00488550(int *param_1,int param_2,int param_3,int param_4,u32 param_5);
void FUN_00489350(u64 param_1,long param_2);
void FUN_004893e0(int param_1,int param_2,u32 param_3);
void FUN_00489460(int param_1,u32 *param_2,int *param_3,int param_4,u32 *param_5,u32 param_6);
void FUN_0048a3f0(u64 param_1,long param_2);
void FUN_0048dd70(int *param_1);
void FUN_0048de50(int *param_1,int *param_2);
void FUN_0048e610(int *param_1);
void FUN_0048efa0(int param_1,int param_2,u32 param_3);
void FUN_0048efc0(int param_1, int param_2, f32 param_3);
void FUN_00491100(int param_1);
void FUN_00492c30(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c60(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c90(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00492cc0(u64 param_1,u64 param_2);
void FUN_00492ce0(u64 param_1,u64 param_2);
void FUN_00492d00(u64 param_1);
void FUN_00493c50(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00493c80(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494520(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494550(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494db0(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494de0(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494e10(u64 param_1,u64 param_2);
void FUN_00495480(int *param_1,int param_2);
void FUN_004959c0(u64 param_1);
void FUN_00496580(void);
void FUN_00496ad0(u64 param_1,int *param_2,short param_3,short param_4,int param_5, int param_6);
void FUN_00496f60(int param_1,int param_2,long param_3);
void FUN_00498e30(u64 param_1);
void FUN_00499230(void);
void FUN_00499250(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00499280(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_004992b0(u64 param_1,u64 param_2);
void FUN_004992d0(u64 param_1,u64 param_2);
void FUN_00499720(u64 param_1);
void FUN_00499850(int *param_1);
void FUN_00499e90(u32 param_1,u32 param_2);
void FUN_00499f40(int param_1);
void FUN_0049a920(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_0049a950(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_0049afa0(int param_1,u64 param_2);
void FUN_0049be20(int param_1);
void FUN_0049c680(void);
void FUN_0049c9b0(void);
void FUN_0049ca50(long param_1);
void FUN_0049cab0(float param_1,u8 *param_2);
void FUN_0049cbd0(int param_1,float *param_2);
void FUN_0049cc30(int param_1);
void FUN_0049e4f0(u64 param_1);
void FUN_0049ff10(u32 param_1,u32 param_2,int param_3,long param_4);
void FUN_004a0480(int param_1,int param_2);
void FUN_004a05d0(int param_1,int param_2);
void FUN_004a06c0(int param_1);
void FUN_004a08f0(int param_1,int *param_2,int param_3,u32 param_4);
void FUN_004a0dc0(int param_1);
void FUN_004a24a0(int param_1,int param_2);
void FUN_004a2560(u64 param_1,int *param_2);
void FUN_004a3540(int param_1);
void FUN_004a3f70(int param_1,u32 *param_2);
void FUN_004a53b0(void);
void FUN_004a91f0(void);
void FUN_004a97c0(u64 param_1,u64 param_2);
void FUN_004a9a70(int param_1);
void FUN_004aa550(u64 param_1);
void FUN_004aa5c0(void);
void FUN_004aa620(void);
void FUN_004aad50(void);
void FUN_004ab170(u32 *param_1);
void FUN_004ab910(float *param_1,float *param_2,float *param_3);
void FUN_004aba20(u64 param_1,u64 param_2,int param_3);

#pragma schedule off
// FUN_00488CD0
#ifndef PC_BUILD
asm u64 FUN_00488cd0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x24420070
  .word 0x7fb00000
  .word 0x8f83ba88
  .word 0x0080802d
  .word 0x00431021
  .word 0x8c440000
  .word 0x1080000a
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8f83ba88
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0xac400000
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off

// FUN_00488D40
#ifndef PC_BUILD
asm u64 FUN_00488d40(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020004
  .word 0xffbf0010
  .word 0x3445010c
  .word 0x7fb00000
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0080802d
  .word 0x0040f809
  .word 0x2404007c
  .word 0x8f84ba88
  .word 0x3c030096
  .word 0x24630070
  .word 0x00642821
  .word 0xaca20000
  .word 0x8ca20000
  .word 0x1040000d
  .word 0x00000000
  .word 0x2443000c
  .word 0x3c029a31
  .word 0xaca30004
  .word 0x34449039
  .word 0x8ca20000
  .word 0xaca20008
  .word 0x8ca20000
  .word 0x2442007c
  .word 0x0c122374
  .word 0xaca2000c
  .word 0x10000002
  .word 0x0200102d
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma schedule on
// FUN_00488FE0
u32 FUN_00488fe0(void)
{
  int lVar1;

  lVar1 = FUN_004ca520_typed(0x10,0x10c,FUN_00488d40_abs,FUN_00488cd0_abs);
  uGpffffba88 = lVar1;
  return lVar1 >= 0;
}
#pragma schedule on
// FUN_00489020
#pragma no_branch_likely on
u32 FUN_00489020(int param_1)
{
  u32 *puVar1 = (u32 *)(param_1 + 0x2c);
  u32 uVar2;

  param_1 = *(int *)(param_1 + 0x38);
  if (param_1 != 0) {
    DAT_0096017c_abs[0](param_1);
  }
  uVar2 = 1;
  asm volatile("" : "+m"(uVar2));
  asm volatile("" : "+m"(*puVar1));
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return uVar2;
}
#pragma schedule off

#pragma no_branch_likely off
// FUN_00489080
#ifndef PC_BUILD
asm u64 FUN_00489080(u64 param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x24060004
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x2651002c
  .word 0x0080802d
  .word 0x0c1305fc
  .word 0x0220282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000023
  .word 0x0000102d
  .word 0x0200202d
  .word 0x26250004
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x1000001b
  .word 0x0000102d
  .word 0x0200202d
  .word 0x26250008
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x10400006
  .word 0x00000000
  .word 0x8e420030
  .word 0x14400005
  .word 0x00000000
  .word 0x10000010
  .word 0x0200102d
  .word 0x1000000e
  .word 0x0000102d
  .word 0x8e260004
  .word 0x0200202d
  .word 0x8e220008
  .word 0x8e430000
  .word 0x8e25000c
  .word 0x00063040
  .word 0x00021040
  .word 0x00661821
  .word 0x0c1314fc
  .word 0x00623021
  .word 0x1440fff1
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */


// FUN_00489160
#ifndef PC_BUILD
asm u64 FUN_00489160(u64 param_1,long param_2)

{
  .set noreorder
  .word 0x27bdff40
  .word 0x24060004
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x27a500b4
  .word 0x7fb10010
  .word 0x2693002c
  .word 0x0c130644
  .word 0x7fb00000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000050
  .word 0x0000102d
  .word 0x02a0202d
  .word 0x27a500bc
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000048
  .word 0x0000102d
  .word 0x02a0202d
  .word 0x27a500b8
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400006
  .word 0x00000000
  .word 0x8fb100bc
  .word 0x1e200005
  .word 0x00000000
  .word 0x1000003d
  .word 0x02a0102d
  .word 0x1000003b
  .word 0x0000102d
  .word 0x8fa200b4
  .word 0x0280202d
  .word 0x8fb600b8
  .word 0x0260802d
  .word 0x8e970000
  .word 0x0c122408
  .word 0x7fa200a0
  .word 0x3c020003
  .word 0x0011f040
  .word 0x34450116
  .word 0x00161840
  .word 0x3c020096
  .word 0x02fe2021
  .word 0x8c420178
  .word 0x00839021
  .word 0x0040f809
  .word 0x0240202d
  .word 0xae02000c
  .word 0x8e04000c
  .word 0x10800023
  .word 0x00000000
  .word 0x0240302d
  .word 0x0c148502
  .word 0x0000282d
  .word 0x7ba200a0
  .word 0x0280182d
  .word 0xae020000
  .word 0xae110004
  .word 0xae160008
  .word 0x8e02000c
  .word 0x00571021
  .word 0xae020010
  .word 0x8e020010
  .word 0x005e1021
  .word 0xae020014
  .word 0x10600015
  .word 0x00000000
  .word 0x8e660004
  .word 0x02a0202d
  .word 0x8e620008
  .word 0x8e830000
  .word 0x8e65000c
  .word 0x00063040
  .word 0x00021040
  .word 0x00661821
  .word 0x0c131494
  .word 0x00623021
  .word 0x1440ffcc
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0260202d
  .word 0x10000004
  .word 0x0000102d
  .word 0x1000ffeb
  .word 0x0000182d
  .word 0x0000102d
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
  .word 0x03e00008
  .word 0x27bd00c0
}
#endif /* PC_BUILD: asm function omitted */

#pragma schedule on
// FUN_00489320
int FUN_00489320(int *param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = 0xc;
  if (param_1[0xc] != 0) {
    iVar2 = *param_1 + param_1[0xc] * 2;
    iVar2 = iVar2 + param_1[0xd] * 2;
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}
#pragma schedule off


// FUN_00489350
#ifndef PC_BUILD
asm void FUN_00489350(u64 param_1,long param_2)

{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c132954
  .word 0x24040120
  .word 0x2403ffff
  .word 0x1443000a
  .word 0x00000000
  .word 0x24020002
  .word 0x16020007
  .word 0x00000000
  .word 0x24100001
  .word 0x0220202d
  .word 0x0c122b04
  .word 0x0200282d
  .word 0x1000000b
  .word 0xdfbf0020
  .word 0x0c132954
  .word 0x2404012e
  .word 0x2403ffff
  .word 0x1443fff7
  .word 0x00000000
  .word 0x24020003
  .word 0x1602fff4
  .word 0x00000000
  .word 0x1000fff2
  .word 0x24100001
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_004893E0
#ifndef PC_BUILD
asm void FUN_004893e0(int param_1,int param_2,u32 param_3)

{
  .set noreorder
  .word 0x24030001
  .word 0x0006082b
  .word 0xac830010
  .word 0x1020001a
  .word 0x0000502d
  .word 0x24070004
  .word 0x8c890010
  .word 0x2d210004
  .word 0x10200011
  .word 0x00000000
  .word 0x00091880
  .word 0x00a34021
  .word 0x8d030000
  .word 0x1060000c
  .word 0x00000000
  .word 0x8c830010
  .word 0x24630001
  .word 0xac830010
  .word 0x8c830010
  .word 0x1067000a
  .word 0x00000000
  .word 0x25290001
  .word 0x2d230004
  .word 0x1460fff4
  .word 0x25080004
  .word 0x00000000
  .word 0x254a0001
  .word 0x0146182b
  .word 0x1460ffe9
  .word 0x24a50010
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489460
#ifndef PC_BUILD
asm void FUN_00489460(int param_1,u32 *param_2,int *param_3,int param_4,u32 *param_5,u32 param_6)

{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0009082b
  .word 0x7fb00000
  .word 0x0000682d
  .word 0x10200033
  .word 0xad000000
  .word 0x24030001
  .word 0x8c8a0010
  .word 0x000a082b
  .word 0x10200028
  .word 0x0000602d
  .word 0x00c0582d
  .word 0x0000502d
  .word 0x00000000
  .word 0x8d6e0000
  .word 0x11c0001c
  .word 0x00000000
  .word 0x8cae0000
  .word 0x0060c82d
  .word 0x8d0f0000
  .word 0x0000802d
  .word 0x014e7006
  .word 0x000f082b
  .word 0x1020000c
  .word 0x31d800ff
  .word 0x00000000
  .word 0x00f07021
  .word 0x91ce0000
  .word 0x170e0003
  .word 0x00000000
  .word 0x10000005
  .word 0x0000c82d
  .word 0x26100001
  .word 0x020f702b
  .word 0x15c0fff7
  .word 0x00000000
  .word 0x13200007
  .word 0x00000000
  .word 0x00ef7021
  .word 0xa1d80000
  .word 0x8d0e0000
  .word 0x25ce0001
  .word 0xad0e0000
  .word 0x00000000
  .word 0x8c8e0010
  .word 0x258c0001
  .word 0x256b0004
  .word 0x018e702b
  .word 0x15c0ffdd
  .word 0x254a0008
  .word 0x25ad0001
  .word 0x01a9502b
  .word 0x24c60010
  .word 0x1540ffd1
  .word 0x24a50004
  .word 0x00000000
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489550
asm u32
FUN_00489550(int *param_1,int param_2,long param_3,int param_4,long param_5,long param_6,
            long param_7,long param_8)

{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x0160f02d
  .word 0x7fb60060
  .word 0x0120b82d
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x7fb10010
  .word 0x00121080
  .word 0x7fb00000
  .word 0x00521821
  .word 0x0100882d
  .word 0x00141180
  .word 0x00032080
  .word 0x7fa200a0
  .word 0x3c030003
  .word 0x00821021
  .word 0x34650116
  .word 0x02621821
  .word 0x0140802d
  .word 0x3c020096
  .word 0x2476000f
  .word 0x8c420178
  .word 0x0040f809
  .word 0x02c0202d
  .word 0xaea20044
  .word 0x8ea40044
  .word 0x10800046
  .word 0x00000000
  .word 0x02c0302d
  .word 0x0c148502
  .word 0x0000282d
  .word 0xaeb40000
  .word 0x2402fff0
  .word 0xaeb30004
  .word 0x0012a080
  .word 0x8ea30044
  .word 0xaea30008
  .word 0x8ea30008
  .word 0x00731821
  .word 0x2463000f
  .word 0x00621024
  .word 0xaea2000c
  .word 0x8ea3000c
  .word 0x7ba200a0
  .word 0x00621021
  .word 0xaea20014
  .word 0x8ea20014
  .word 0x00541021
  .word 0x12200007
  .word 0xaea20018
  .word 0x12600005
  .word 0x00000000
  .word 0x8ea40008
  .word 0x0220282d
  .word 0x0c148494
  .word 0x0260302d
  .word 0x13c0001a
  .word 0x00000000
  .word 0x8ea20000
  .word 0x10400017
  .word 0x244affff
  .word 0x000a4180
  .word 0x24030008
  .word 0x03c84821
  .word 0x8ea2000c
  .word 0x0060282d
  .word 0x0120302d
  .word 0x00483821
  .word 0x00000000
  .word 0x8cc40000
  .word 0x24a5ffff
  .word 0x8cc20004
  .word 0xace40000
  .word 0x24c60008
  .word 0xace20004
  .word 0x1ca0fff9
  .word 0x24e70008
  .word 0x0140102d
  .word 0x2529ffc0
  .word 0x2508ffc0
  .word 0x1440ffef
  .word 0x254affff
  .word 0x00000000
  .word 0x12000005
  .word 0x00000000
  .word 0x8ea40014
  .word 0x0200282d
  .word 0x0c148494
  .word 0x0280302d
  .word 0x12e00005
  .word 0x00000000
  .word 0x8ea40018
  .word 0x00123100
  .word 0x0c148494
  .word 0x02e0282d
  .word 0x10000002
  .word 0x24020001
  .word 0x0000102d
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
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
}

// FUN_00489730
#ifndef PC_BUILD
asm u64 FUN_00489730(u64 param_1)

{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020096
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c42de30
  .word 0x10400008
  .word 0x0080802d
  .word 0x3c030096
  .word 0x0200102d
  .word 0x8c64de30
  .word 0x3c030096
  .word 0x24840001
  .word 0x1000002f
  .word 0xac64de30
  .word 0x24040120
  .word 0x0c132954
  .word 0x24110001
  .word 0x2403ffff
  .word 0x10430002
  .word 0x00000000
  .word 0x36310002
  .word 0x0c132954
  .word 0x2404012e
  .word 0x2403ffff
  .word 0x10430002
  .word 0x00000000
  .word 0x36310004
  .word 0x0c122afc
  .word 0x0220202d
  .word 0x8f85aed8
  .word 0x3c080096
  .word 0x8f87aedc
  .word 0x3c020004
  .word 0x24040048
  .word 0x24060004
  .word 0x2508dde0
  .word 0x0c130ed8
  .word 0x34490116
  .word 0x3c030096
  .word 0xac62de28
  .word 0x3c020004
  .word 0x34450116
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x2404400f
  .word 0x3c030096
  .word 0x0040202d
  .word 0xac62de20
  .word 0x0000282d
  .word 0x0c148502
  .word 0x2406400f
  .word 0x3c020096
  .word 0x2403fff0
  .word 0x8c44de20
  .word 0x2484000f
  .word 0x3c020096
  .word 0x00831824
  .word 0x1000ffcc
  .word 0xac43de1c
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489840
#ifndef PC_BUILD
asm u64 FUN_00489840(u64 param_1)

{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c030096
  .word 0xffbf0010
  .word 0x3c020096
  .word 0x7fb00000
  .word 0x8c63de30
  .word 0x0080802d
  .word 0x2463ffff
  .word 0x10600003
  .word 0xac43de30
  .word 0x10000010
  .word 0x0200102d
  .word 0x0c122b00
  .word 0x00000000
  .word 0x3c020096
  .word 0x0c130f0c
  .word 0x8c44de28
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac40de28
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x8c64de20
  .word 0x3c020096
  .word 0x1000fff0
  .word 0xac40de20
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c43de18
  .word 0x00831821
  .word 0x0080102d
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_004898E0
#ifndef PC_BUILD
asm u64 FUN_004898e0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020096
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c42de18
  .word 0x0080802d
  .word 0x02021021
  .word 0x8c510000
  .word 0x12200009
  .word 0x00000000
  .word 0x0c1229e4
  .word 0x00000000
  .word 0x0c1228dc
  .word 0x0220202d
  .word 0x3c030096
  .word 0x8c63de18
  .word 0x02031821
  .word 0xac620000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489960
#ifndef PC_BUILD
asm u64 FUN_00489960(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x0000282d
  .word 0x7fb00000
  .word 0x24060004
  .word 0x8c42de14
  .word 0x0080802d
  .word 0x0c148502
  .word 0x02022021
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42de14
  .word 0x00821821
  .word 0x8c620000
  .word 0x10400002
  .word 0x00000000
  .word 0xac600000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c43de14
  .word 0x00a32821
  .word 0x0080102d
  .word 0x00831821
  .word 0x8ca40000
  .word 0x03e00008
  .word 0xac640000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_004899F0
#ifndef PC_BUILD
asm u32 FUN_004899f0(u64 param_1)

{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x24110001
  .word 0x0080802d
  .word 0x0c132954
  .word 0x24040120
  .word 0x2403ffff
  .word 0x1443000d
  .word 0x00000000
  .word 0x8e040018
  .word 0x10800008
  .word 0x00000000
  .word 0x0c1228b0
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c1224d4
  .word 0x0220282d
  .word 0x10000009
  .word 0x24020001
  .word 0x0c124b40
  .word 0x24040120
  .word 0x02021021
  .word 0x90420000
  .word 0x1040ffef
  .word 0x00000000
  .word 0x1000ffed
  .word 0x24110002
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489A80
#ifndef PC_BUILD
asm u32 FUN_00489a80(u64 param_1,u64 param_2,u64 param_3,u64 param_4)

{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c840018
  .word 0x10800008
  .word 0x00e0802d
  .word 0x0c1228b0
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c1224d4
  .word 0x0200282d
  .word 0xdfbf0020
  .word 0x24020001
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489AE0
#ifndef PC_BUILD
asm int FUN_00489ae0(int param_1)

{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c030096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c63de18
  .word 0x00831821
  .word 0x8c650000
  .word 0x10a00017
  .word 0x0000102d
  .word 0x8c830008
  .word 0x3c020100
  .word 0x00621024
  .word 0x14400010
  .word 0x00000000
  .word 0x8c870014
  .word 0x24060004
  .word 0x8ca30004
  .word 0x8ca20000
  .word 0x00a0202d
  .word 0x00c33021
  .word 0x00072880
  .word 0x00071900
  .word 0x00c52821
  .word 0x00021180
  .word 0x00a31821
  .word 0x0c1224c8
  .word 0x00628021
  .word 0x10000003
  .word 0x02021021
  .word 0x0c1229e8
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489B70
#ifndef PC_BUILD
asm u64 FUN_00489b70(u64 param_1,u64 param_2,u64 param_3)

{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020096
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c42de18
  .word 0x00c21021
  .word 0x8c510000
  .word 0x12200047
  .word 0x0080902d
  .word 0x8cc30008
  .word 0x3c020100
  .word 0x00621024
  .word 0x10400007
  .word 0x00000000
  .word 0x0c122a00
  .word 0x00c0282d
  .word 0x1440003e
  .word 0x00000000
  .word 0x1000003d
  .word 0x0000102d
  .word 0x8e280010
  .word 0x3c0700ff
  .word 0x8e230004
  .word 0x27a5004c
  .word 0x8cd00014
  .word 0x92220000
  .word 0x00084400
  .word 0x00031a00
  .word 0x01073824
  .word 0x3063ff00
  .word 0x24060004
  .word 0x00e31825
  .word 0x00431025
  .word 0x0c1305fc
  .word 0xafa2004c
  .word 0x10400021
  .word 0x00000000
  .word 0x8e250008
  .word 0x8e260004
  .word 0x0c1314fc
  .word 0x0240202d
  .word 0x1040001d
  .word 0x00000000
  .word 0x8e250014
  .word 0x00103080
  .word 0x0c1305fc
  .word 0x0240202d
  .word 0x10400019
  .word 0x00000000
  .word 0x8e250018
  .word 0x00103100
  .word 0x0c1305d4
  .word 0x0240202d
  .word 0x10400015
  .word 0x00000000
  .word 0x8e220000
  .word 0x0240202d
  .word 0x8e25000c
  .word 0x0c1305d4
  .word 0x00023180
  .word 0x10400010
  .word 0x00000000
  .word 0x0220282d
  .word 0x0c122420
  .word 0x0240202d
  .word 0x1440000d
  .word 0x00000000
  .word 0x1000000c
  .word 0x0000102d
  .word 0x1000000a
  .word 0x0000102d
  .word 0x10000008
  .word 0x0000102d
  .word 0x10000006
  .word 0x0000102d
  .word 0x10000004
  .word 0x0000102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0240102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489CD0
#ifndef PC_BUILD
asm u64 FUN_00489cd0(u64 param_1,u64 param_2,u64 param_3)

{
  .set noreorder
  .word 0x27bdfe70
  .word 0x3c020100
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8cc30008
  .word 0x00621024
  .word 0x10400009
  .word 0x00c0a02d
  .word 0x0c122a68
  .word 0x0280282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000074
  .word 0x0000102d
  .word 0x10000072
  .word 0x02a0102d
  .word 0x27a5018c
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400036
  .word 0x00000000
  .word 0x3c020096
  .word 0x8fa6018c
  .word 0x8c44de28
  .word 0x8e920014
  .word 0x00061a02
  .word 0x30d600ff
  .word 0x3c020003
  .word 0x307300ff
  .word 0x34450116
  .word 0x00061c02
  .word 0x3c020096
  .word 0x307000ff
  .word 0x8c420188
  .word 0x0040f809
  .word 0xafb30188
  .word 0x0040882d
  .word 0x0000282d
  .word 0x0220202d
  .word 0x0c148502
  .word 0x24060048
  .word 0x12000022
  .word 0x00000000
  .word 0x8fa20188
  .word 0x14400008
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x27a70080
  .word 0x27a80188
  .word 0x0c122518
  .word 0x0240482d
  .word 0x8fa60188
  .word 0x02c0282d
  .word 0x0220202d
  .word 0x0240382d
  .word 0x27a80080
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0c122554
  .word 0x0000582d
  .word 0x10400013
  .word 0x00000000
  .word 0x12200019
  .word 0x00000000
  .word 0x8e250008
  .word 0x02a0202d
  .word 0x0c131494
  .word 0x0260302d
  .word 0x12620015
  .word 0x00000000
  .word 0x10000038
  .word 0x0000102d
  .word 0x10000036
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c1224f8
  .word 0x0240302d
  .word 0x1000ffdb
  .word 0x8fa20188
  .word 0x3c020096
  .word 0x8c44de28
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x1000ffe7
  .word 0x0000882d
  .word 0x10000026
  .word 0x0000102d
  .word 0x8e250014
  .word 0x00123080
  .word 0x0c130644
  .word 0x02a0202d
  .word 0x10400019
  .word 0x00000000
  .word 0x8e250018
  .word 0x00123100
  .word 0x0c13062c
  .word 0x02a0202d
  .word 0x10400015
  .word 0x00000000
  .word 0xae300010
  .word 0x02a0202d
  .word 0x8e220000
  .word 0x8e25000c
  .word 0x0c13062c
  .word 0x00023180
  .word 0x1040000f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c122458
  .word 0x0220282d
  .word 0x1040000c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c1228b8
  .word 0x0220282d
  .word 0x1000ff95
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x10000004
  .word 0x0000102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0190
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_00489F20
asm u64
FUN_00489f20(u64 param_1,u64 param_2,int param_3,u64 param_4,u64 param_5
            )

{
  .set noreorder
  .word 0x27bdfe80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8cd10018
  .word 0x0100802d
  .word 0x0c1228b0
  .word 0x0220202d
  .word 0x1040000a
  .word 0x00000000
  .word 0x0200282d
  .word 0x0c131588
  .word 0x0240202d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000077
  .word 0x0000102d
  .word 0x10000075
  .word 0x0240102d
  .word 0x0240202d
  .word 0x27a5017c
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040005e
  .word 0x00000000
  .word 0x3c020096
  .word 0x8e300014
  .word 0x8c44de28
  .word 0x8fb3017c
  .word 0x3c020003
  .word 0x34450116
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0xafb30178
  .word 0x0040a02d
  .word 0x0000282d
  .word 0x0280202d
  .word 0x0c148502
  .word 0x24060048
  .word 0x8fa20178
  .word 0x14400008
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x27a70070
  .word 0x27a80178
  .word 0x0c122518
  .word 0x0200482d
  .word 0x8fa60178
  .word 0x0260282d
  .word 0x0280202d
  .word 0x0200382d
  .word 0x27a80070
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0c122554
  .word 0x0000582d
  .word 0x1040003c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c131588
  .word 0x24050004
  .word 0x1040003f
  .word 0x00000000
  .word 0x8e850014
  .word 0x00103080
  .word 0x0c130644
  .word 0x0240202d
  .word 0x1040003b
  .word 0x00000000
  .word 0x8e850018
  .word 0x00103100
  .word 0x0c13062c
  .word 0x0240202d
  .word 0x10400037
  .word 0x00000000
  .word 0x8e820000
  .word 0x0002082b
  .word 0x10200016
  .word 0x0000a82d
  .word 0x0000982d
  .word 0x0240202d
  .word 0x0c131588
  .word 0x2405000c
  .word 0x14400003
  .word 0x00000000
  .word 0x1000002e
  .word 0x0000102d
  .word 0x8e82000c
  .word 0x0240202d
  .word 0x24060040
  .word 0x0c13062c
  .word 0x00532821
  .word 0x10400026
  .word 0x00000000
  .word 0x8e820000
  .word 0x26b50001
  .word 0x02a2102b
  .word 0x1440ffee
  .word 0x26730040
  .word 0x00000000
  .word 0x8e850018
  .word 0x0280202d
  .word 0x0c1224f8
  .word 0x0200302d
  .word 0x8e850014
  .word 0x0200482d
  .word 0x8e860018
  .word 0x8e870008
  .word 0x0c122518
  .word 0x26880004
  .word 0x0220202d
  .word 0x0c1228b8
  .word 0x0280282d
  .word 0x1000ff9c
  .word 0x00000000
  .word 0x10000010
  .word 0x0000102d
  .word 0x3c020096
  .word 0x8c44de28
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0280282d
  .word 0x1000ffbe
  .word 0x0000a02d
  .word 0x10000006
  .word 0x0000102d
  .word 0x10000004
  .word 0x0000102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0180
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
  .word 0x03e00008
  .word 0x0000102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048A1A0
#ifndef PC_BUILD
asm u32 FUN_0048a1a0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060049
  .word 0x3c070049
  .word 0xffbf0000
  .word 0x0000202d
  .word 0x24050116
  .word 0x24c69730
  .word 0x0c132948
  .word 0x24e79840
  .word 0x3c030096
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040004
  .word 0xac62de10
  .word 0x24050116
  .word 0x24c69960
  .word 0x24e799a0
  .word 0x0c124b0c
  .word 0x250899d0
  .word 0x3c030096
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x24040116
  .word 0xac62de14
  .word 0x24a59f20
  .word 0x24c6a180
  .word 0x0c124b24
  .word 0x24e7a190
  .word 0x3c050049
  .word 0x24040116
  .word 0x0c124b30
  .word 0x24a599f0
  .word 0x3c050049
  .word 0x24040116
  .word 0x0c124b38
  .word 0x24a59a80
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040004
  .word 0x24050116
  .word 0x24c698c0
  .word 0x24e798e0
  .word 0x0c124f14
  .word 0x25089950
  .word 0x3c030096
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x24040116
  .word 0xac62de18
  .word 0x24a59cd0
  .word 0x24c69b70
  .word 0x0c124f20
  .word 0x24e79ae0
  .word 0xdfbf0000
  .word 0x24020001
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma schedule on
// FUN_0048A2A0
int FUN_0048a2a0(int param_1,u32 param_2)
{
  int iVar1;
  u32 uVar1;

  iVar1 = param_1;
  uVar1 = DAT_0095de14_abs[0];
  *(u32 *)((u8 *)iVar1 + uVar1) = param_2;
  return iVar1;
}
#pragma schedule off

#pragma schedule on
// FUN_0048A2C0
u32 FUN_0048a2c0(int param_1)
{
  return *(u32 *)(param_1 + DAT_0095de18_abs[0]);
}
#pragma schedule off

#pragma alias DAT_0095de18_abs DAT_0095de18
extern u32 DAT_0095de18_abs[];

// FUN_0048A2E0
#ifndef PC_BUILD
asm u64 FUN_0048a2e0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020096
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c42de18
  .word 0x00a0802d
  .word 0x02221021
  .word 0x8c420000
  .word 0x12020010
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x0c1229e4
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42de18
  .word 0x02221021
  .word 0x12000007
  .word 0xac500000
  .word 0x0c12292c
  .word 0x0220202d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000002
  .word 0x0000102d
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma schedule on
// FUN_0048A370
#ifndef PC_BUILD
asm u64 FUN_0048a370(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c840044
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c122408
  .word 0x0200202d
  .word 0x3c020096
  .word 0x8c44de28
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0200282d
  .word 0xdfbf0010
  .word 0x0000102d
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off

// FUN_0048A3D0
#pragma optimization_level 3
u32 FUN_0048a3d0(u32 *param_1)
{
  return *param_1;
}
#pragma optimization_level 2

// FUN_0048A3E0
#pragma optimization_level 3
u32 FUN_0048a3e0(int param_1)
{
  return *(u32 *)(param_1 + 0xc);
}
#pragma optimization_level 2

// FUN_0048A3F0
#ifndef PC_BUILD
asm void FUN_0048a3f0(u64 param_1,long param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c132954
  .word 0x24040120
  .word 0x2403ffff
  .word 0x1443000a
  .word 0x00000000
  .word 0x24020002
  .word 0x16020007
  .word 0x00000000
  .word 0x24100001
  .word 0x0220202d
  .word 0x0c122b04
  .word 0x0200282d
  .word 0x1000000b
  .word 0xdfbf0020
  .word 0x0c132954
  .word 0x2404012e
  .word 0x2403ffff
  .word 0x1443fff7
  .word 0x00000000
  .word 0x24020003
  .word 0x1602fff4
  .word 0x00000000
  .word 0x1000fff2
  .word 0x24100001
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0048A480
#ifndef PC_BUILD
asm u32 FUN_0048a480(int param_1)
{
  .set noreorder
  .word 0x8c84006c
  .word 0x24020116
  .word 0x8c83002c
  .word 0x14620003
  .word 0x00000000
  .word 0x10000002
  .word 0x8c820030
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma optimization_level 3
#pragma schedule on
// FUN_0048A4B0
#ifndef PC_BUILD
asm u64 FUN_0048a4b0(u32 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020100
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c830008
  .word 0x00621024
  .word 0x10400003
  .word 0x0080802d
  .word 0x100000a9
  .word 0x0200102d
  .word 0x0c1228b0
  .word 0x00000000
  .word 0x8c470018
  .word 0x8c460014
  .word 0x8e040014
  .word 0xac40001c
  .word 0xac400020
  .word 0xac400024
  .word 0xac400028
  .word 0x8c430030
  .word 0x14600044
  .word 0x00000000
  .word 0x0004082b
  .word 0x1020fff0
  .word 0x0000402d
  .word 0x44800800
  .word 0x2403fc00
  .word 0x90c90000
  .word 0x0000282d
  .word 0x8cea0000
  .word 0x25290001
  .word 0x01435024
  .word 0x00094880
  .word 0x01494825
  .word 0xace90000
  .word 0xc4e00004
  .word 0x8cc90000
  .word 0x8cea0004
  .word 0x46000832
  .word 0x00094a02
  .word 0x01435024
  .word 0x4501007b
  .word 0x312900ff
  .word 0x25290001
  .word 0x24a50001
  .word 0x00094880
  .word 0x01494825
  .word 0x00000000
  .word 0xace90004
  .word 0xc4e00008
  .word 0x8cc90000
  .word 0x8cea0008
  .word 0x46000832
  .word 0x00094c02
  .word 0x01435024
  .word 0x45010070
  .word 0x312900ff
  .word 0x25290001
  .word 0x24a50001
  .word 0x00094880
  .word 0x01494825
  .word 0x00000000
  .word 0xace90008
  .word 0xc4e0000c
  .word 0x8cc90000
  .word 0x8cea000c
  .word 0x46000832
  .word 0x00094e02
  .word 0x01435024
  .word 0x45010064
  .word 0x312900ff
  .word 0x25290001
  .word 0x24a50001
  .word 0x00094880
  .word 0x01494825
  .word 0x00000000
  .word 0x00052880
  .word 0xace9000c
  .word 0x00455021
  .word 0x8d49001c
  .word 0x25080001
  .word 0x0104282b
  .word 0x24e70010
  .word 0x24c60004
  .word 0x25290001
  .word 0x14a0ffc5
  .word 0xad49001c
  .word 0x1000ffb0
  .word 0x00000000
  .word 0x0004082b
  .word 0x1020ffad
  .word 0x0000282d
  .word 0x44800800
  .word 0x2403fc00
  .word 0x90ca0000
  .word 0x0000402d
  .word 0x8c490038
  .word 0x8ceb0000
  .word 0x012a4821
  .word 0x91290000
  .word 0x01635824
  .word 0x25290001
  .word 0x00094880
  .word 0x01694825
  .word 0xace90000
  .word 0xc4e00004
  .word 0x8cea0004
  .word 0x8cc90000
  .word 0x46000832
  .word 0x01435824
  .word 0x00094a02
  .word 0x4501003c
  .word 0x312a00ff
  .word 0x8c490038
  .word 0x25080001
  .word 0x012a4821
  .word 0x91290000
  .word 0x25290001
  .word 0x00094880
  .word 0x01694825
  .word 0xace90004
  .word 0xc4e00008
  .word 0x8cea0008
  .word 0x8cc90000
  .word 0x46000832
  .word 0x01435824
  .word 0x00094c02
  .word 0x4501002e
  .word 0x312a00ff
  .word 0x8c490038
  .word 0x25080001
  .word 0x012a4821
  .word 0x91290000
  .word 0x25290001
  .word 0x00094880
  .word 0x01694825
  .word 0xace90008
  .word 0xc4e0000c
  .word 0x8cea000c
  .word 0x8cc90000
  .word 0x46000832
  .word 0x01435824
  .word 0x00094e02
  .word 0x45010020
  .word 0x312a00ff
  .word 0x8c490038
  .word 0x25080001
  .word 0x012a4821
  .word 0x91290000
  .word 0x25290001
  .word 0x00094880
  .word 0x01694825
  .word 0x00084080
  .word 0xace9000c
  .word 0x00485021
  .word 0x8d49001c
  .word 0x24a50001
  .word 0x00a4402b
  .word 0x24e70010
  .word 0x24c60004
  .word 0x25290001
  .word 0x1500ffbc
  .word 0xad49001c
  .word 0x1000ff64
  .word 0x00000000
  .word 0x1000ff8a
  .word 0x0000482d
  .word 0x00000000
  .word 0x1000ff95
  .word 0x0000482d
  .word 0x1000ffa1
  .word 0x0000482d
  .word 0x1000ffcb
  .word 0x0000482d
  .word 0x1000ffd9
  .word 0x0000482d
  .word 0x1000ffe7
  .word 0x0000482d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off
#pragma optimization_level 2
// FUN_0048A790
#pragma optimization_level 3
u64 FUN_0048a790(u64 param_1)
{
  return param_1;
}
#pragma optimization_level 2

// FUN_0048A7A0
#pragma schedule on
#ifndef PC_BUILD
asm int FUN_0048a7a0(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24020010
  .word 0xffbf0010
  .word 0x24450004
  .word 0x7fb00000
  .word 0x3c020096
  .word 0x8c42de18
  .word 0x00821021
  .word 0x8c440000
  .word 0x8c830000
  .word 0x8c820004
  .word 0x00031980
  .word 0x00a31821
  .word 0x00621021
  .word 0x0c1224c8
  .word 0x24500010
  .word 0x02021021
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off

// FUN_0048A800
#ifndef PC_BUILD
asm u64 FUN_0048a800(u64 param_1,int param_2)

{
  .set noreorder
  .word 0x27bdffb0
  .word 0x24020004
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0xafa2004c
  .word 0x00a0802d
  .word 0x24020010
  .word 0x24450004
  .word 0x3c020096
  .word 0x8c42de18
  .word 0x02021021
  .word 0x8c440000
  .word 0x8c830000
  .word 0x8c820004
  .word 0x00031980
  .word 0x00a31821
  .word 0x00621021
  .word 0x0c1224c8
  .word 0x24520010
  .word 0x02421021
  .word 0x0220202d
  .word 0x2446fff4
  .word 0x24050001
  .word 0x3c020003
  .word 0x24080037
  .word 0x0c130568
  .word 0x34477002
  .word 0x14400003
  .word 0x00000000
  .word 0x1000003e
  .word 0x0000102d
  .word 0x0220202d
  .word 0x27a5004c
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000036
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c0700ff
  .word 0x8c42de18
  .word 0x0220202d
  .word 0x27a50048
  .word 0x24060004
  .word 0x02021021
  .word 0x8c500000
  .word 0x8e080010
  .word 0x8e030004
  .word 0x92020000
  .word 0x00084400
  .word 0x00031a00
  .word 0x01073824
  .word 0x3063ff00
  .word 0x00e31825
  .word 0x00431025
  .word 0x0c1305fc
  .word 0xafa20048
  .word 0x14400003
  .word 0x00000000
  .word 0x1000001f
  .word 0x0000102d
  .word 0x8e050008
  .word 0x8e060004
  .word 0x0c1314fc
  .word 0x0220202d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000017
  .word 0x0000102d
  .word 0x8e020000
  .word 0x0220202d
  .word 0x8e05000c
  .word 0x0c1314fc
  .word 0x00023180
  .word 0x14400003
  .word 0x00000000
  .word 0x1000000e
  .word 0x0000102d
  .word 0x0220202d
  .word 0x2605001c
  .word 0x0c1305fc
  .word 0x24060010
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x0200282d
  .word 0x0c122420
  .word 0x0220202d
  .word 0x0002880a
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0048A9A0
#ifndef PC_BUILD
asm long FUN_0048a9a0(long param_1,u64 param_2)

{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x27a60078
  .word 0x7fb40040
  .word 0x27a7007c
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x24050001
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa3007c
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1420000d
  .word 0x00000000
  .word 0x24030116
  .word 0x3c028000
  .word 0xafa30068
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa2006c
  .word 0x0c130714
  .word 0x27a40068
  .word 0x10000068
  .word 0x0000102d
  .word 0x10000066
  .word 0x0000102d
  .word 0x0280202d
  .word 0x27a50070
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa30070
  .word 0x24020004
  .word 0x10620005
  .word 0x00000000
  .word 0x1000005a
  .word 0x0000102d
  .word 0x10000058
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c44de28
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x34650116
  .word 0x0040882d
  .word 0x0000282d
  .word 0x0220202d
  .word 0x0c148502
  .word 0x24060048
  .word 0x0280202d
  .word 0x27a50074
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000044
  .word 0x0000102d
  .word 0x93a30074
  .word 0x3c020003
  .word 0x34450116
  .word 0x3c020096
  .word 0xae230000
  .word 0x8fa30074
  .word 0x00031a02
  .word 0x306300ff
  .word 0xae230004
  .word 0x8fa30074
  .word 0x00031c02
  .word 0x306300ff
  .word 0xae230010
  .word 0x8e230000
  .word 0x8e300004
  .word 0x8c420178
  .word 0x00039180
  .word 0x02501821
  .word 0xafa30078
  .word 0x0040f809
  .word 0x2464000f
  .word 0xae220044
  .word 0x0280202d
  .word 0x8e230044
  .word 0x2402fff0
  .word 0x2463000f
  .word 0x00621024
  .word 0xae22000c
  .word 0x8e230000
  .word 0x8e22000c
  .word 0x00031980
  .word 0x00431021
  .word 0xae220008
  .word 0x8e250008
  .word 0x0c131494
  .word 0x0200302d
  .word 0x12020003
  .word 0x00000000
  .word 0x1000001c
  .word 0x0000102d
  .word 0x8e25000c
  .word 0x0280202d
  .word 0x0c131494
  .word 0x0240302d
  .word 0x12420003
  .word 0x00000000
  .word 0x10000014
  .word 0x0000102d
  .word 0x0280202d
  .word 0x2625001c
  .word 0x0c130644
  .word 0x24060010
  .word 0x10540003
  .word 0x00000000
  .word 0x1000000c
  .word 0x0000102d
  .word 0x0280202d
  .word 0x0c122458
  .word 0x0220282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x0000102d
  .word 0x0260202d
  .word 0x0c1228b8
  .word 0x0220282d
  .word 0x0280102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0048ABF0
#pragma optimization_level 3
u32 FUN_0048abf0(void)
{
  return 1;
}
#pragma optimization_level 2

// FUN_0048AC00
#pragma optimization_level 3
u32 FUN_0048ac00(void)
{
  return 1;
}
#pragma optimization_level 2

// FUN_0048AC10
#ifndef PC_BUILD
asm u64 FUN_0048ac10(u64 param_1,long param_2)

{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8c820018
  .word 0x8c420008
  .word 0x24040120
  .word 0x30420080
  .word 0x0c124b40
  .word 0x0002802b
  .word 0x02421021
  .word 0x12200022
  .word 0x90420000
  .word 0x24020003
  .word 0x12220016
  .word 0x00000000
  .word 0x24020002
  .word 0x12220009
  .word 0x00000000
  .word 0x24020001
  .word 0x12220003
  .word 0x00000000
  .word 0x10000011
  .word 0x3c020001
  .word 0x3c020001
  .word 0x1000000f
  .word 0x34441002
  .word 0x24020001
  .word 0x16020004
  .word 0x00000000
  .word 0x3c020001
  .word 0x10000003
  .word 0x34441014
  .word 0x3c020001
  .word 0x34441013
  .word 0x10000005
  .word 0x00000000
  .word 0x3c020001
  .word 0x10000002
  .word 0x34441002
  .word 0x34441002
  .word 0x0c11aa24
  .word 0x00000000
  .word 0xae42006c
  .word 0x1000000c
  .word 0x0240102d
  .word 0x3c030001
  .word 0x1040fff9
  .word 0x34641002
  .word 0x24020001
  .word 0x16020003
  .word 0x00000000
  .word 0x10000002
  .word 0x34641014
  .word 0x34641013
  .word 0x1000fff1
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0048AD20
#ifndef PC_BUILD
asm u8 FUN_0048ad20(void)

{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c030004
  .word 0xffbf0000
  .word 0x3c020096
  .word 0x8c420178
  .word 0x24043030
  .word 0x0040f809
  .word 0x34650102
  .word 0x10400080
  .word 0xaf82ba8c
  .word 0x24420404
  .word 0x3c044380
  .word 0xaf82ba90
  .word 0x44843800
  .word 0x24420404
  .word 0x3c0540c0
  .word 0xaf82ba94
  .word 0x3c04c040
  .word 0x24420404
  .word 0x0000182d
  .word 0xaf82ba98
  .word 0x44852800
  .word 0x24420404
  .word 0xaf82ba9c
  .word 0x44842000
  .word 0x24420404
  .word 0x3c054040
  .word 0xaf82baa0
  .word 0x3c043f80
  .word 0x24420404
  .word 0xaf82baa4
  .word 0x44851800
  .word 0x24420404
  .word 0xaf82baa8
  .word 0x44840800
  .word 0x24420404
  .word 0x3c054080
  .word 0xaf82baac
  .word 0x3c04bf80
  .word 0x24420404
  .word 0xaf82bab0
  .word 0x44850000
  .word 0x24420404
  .word 0x44847000
  .word 0xaf82bab4
  .word 0x24420404
  .word 0x3c054000
  .word 0x3c04c080
  .word 0xaf82bab8
  .word 0x44856000
  .word 0x0000102d
  .word 0x44845800
  .word 0x44801000
  .word 0x44833000
  .word 0x8f84ba8c
  .word 0x46031018
  .word 0x468031a0
  .word 0x24630001
  .word 0x28610101
  .word 0x00822021
  .word 0x46073183
  .word 0x46063242
  .word 0x46093202
  .word 0x46054203
  .word 0xe4880000
  .word 0x46062282
  .word 0x8f84ba90
  .word 0x460a1a00
  .word 0x00822021
  .word 0x4606421c
  .word 0x46011018
  .word 0x4608321c
  .word 0x46054203
  .word 0xe4880000
  .word 0x46061bc2
  .word 0x8f84ba94
  .word 0x46057a01
  .word 0x00822021
  .word 0x46064202
  .word 0x46001018
  .word 0x4608321c
  .word 0x46054203
  .word 0xe4880000
  .word 0x46067342
  .word 0x8f84ba98
  .word 0x460d1a00
  .word 0x00822021
  .word 0x46064202
  .word 0x46034201
  .word 0x46011018
  .word 0x4608321c
  .word 0x46054203
  .word 0xe4880000
  .word 0x460a6200
  .word 0x8f84ba9c
  .word 0x46011018
  .word 0x4606421c
  .word 0x460c4a43
  .word 0x00822021
  .word 0xe4890000
  .word 0x8f84baa0
  .word 0x460c4203
  .word 0x00822021
  .word 0xe4880000
  .word 0x460f5a00
  .word 0x8f84baa4
  .word 0x46064202
  .word 0x00822021
  .word 0x460c4203
  .word 0xe4880000
  .word 0x460d6200
  .word 0x8f84baa8
  .word 0x46064202
  .word 0x00822021
  .word 0x46014201
  .word 0x460c4203
  .word 0xe4880000
  .word 0x8f84baac
  .word 0x460a0a80
  .word 0x460c7a41
  .word 0x00822021
  .word 0xe4860000
  .word 0x8f84bab0
  .word 0x460d0a00
  .word 0x00822021
  .word 0xe48a0000
  .word 0x8f84bab4
  .word 0x00822021
  .word 0xe4890000
  .word 0x8f84bab8
  .word 0x00822021
  .word 0xe4880000
  .word 0x1420ffb0
  .word 0x24420004
  .word 0x8f82ba8c
  .word 0x1000000c
  .word 0x0002102b
  .word 0x24030102
  .word 0x3c028000
  .word 0xafa30018
  .word 0x34440013
  .word 0x0c130744
  .word 0x24053030
  .word 0xafa2001c
  .word 0x0c130714
  .word 0x27a40018
  .word 0x1000fff3
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma optimization_level 3
#pragma schedule on
// FUN_0048AF80
#ifndef PC_BUILD
asm long FUN_0048af80(u32 param_1)

{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00159880
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x02b38018
  .word 0x3c120096
  .word 0x26520178
  .word 0x3c030003
  .word 0x8e420000
  .word 0x34650102
  .word 0x0040f809
  .word 0x0200202d
  .word 0x0040a02d
  .word 0x12800215
  .word 0x00000000
  .word 0x02b58818
  .word 0x0280202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x00113080
  .word 0x3c020003
  .word 0x26a3ffff
  .word 0x34450102
  .word 0x00038080
  .word 0x8e420000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x10400212
  .word 0x00000000
  .word 0x24070001
  .word 0x26a6ffff
  .word 0x24030004
  .word 0xac470000
  .word 0x28c10003
  .word 0x24050002
  .word 0x1420004d
  .word 0xac430004
  .word 0x26a4fffd
  .word 0x28810009
  .word 0x14200039
  .word 0x26a3fff7
  .word 0x28c40002
  .word 0x14800007
  .word 0x0000402d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00c1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x00e0402d
  .word 0x1100002e
  .word 0x00000000
  .word 0x24440008
  .word 0x8c88fffc
  .word 0x24a50008
  .word 0x8c87fff8
  .word 0x00a3302a
  .word 0x00084080
  .word 0x01073823
  .word 0xac870000
  .word 0x8c880000
  .word 0x8c87fffc
  .word 0x00084080
  .word 0x01073823
  .word 0xac870004
  .word 0x8c880004
  .word 0x8c870000
  .word 0x00084080
  .word 0x01073823
  .word 0xac870008
  .word 0x8c880008
  .word 0x8c870004
  .word 0x00084080
  .word 0x01073823
  .word 0xac87000c
  .word 0x8c88000c
  .word 0x8c870008
  .word 0x00084080
  .word 0x01073823
  .word 0xac870010
  .word 0x8c880010
  .word 0x8c87000c
  .word 0x00084080
  .word 0x01073823
  .word 0xac870014
  .word 0x8c880014
  .word 0x8c870010
  .word 0x00084080
  .word 0x01073823
  .word 0xac870018
  .word 0x8c880018
  .word 0x8c870014
  .word 0x00084080
  .word 0x01073823
  .word 0xac87001c
  .word 0x14c0ffd5
  .word 0x24840020
  .word 0x26a7ffff
  .word 0x00a7082a
  .word 0x1020000d
  .word 0x00000000
  .word 0x00051880
  .word 0x00434021
  .word 0x8d06fffc
  .word 0x24a50001
  .word 0x8d04fff8
  .word 0x00a7182a
  .word 0x00063080
  .word 0x00c42023
  .word 0xad040000
  .word 0x1460fff8
  .word 0x25080004
  .word 0x00000000
  .word 0x104001c7
  .word 0x00000000
  .word 0x00151880
  .word 0x3c100096
  .word 0x00621821
  .word 0x2610017c
  .word 0x0040202d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x8c76fff8
  .word 0x8e420000
  .word 0x3c030003
  .word 0x0260202d
  .word 0x0040f809
  .word 0x34650102
  .word 0x104001be
  .word 0x00000000
  .word 0x24060001
  .word 0x24050002
  .word 0xac460000
  .word 0x2aa10003
  .word 0x1420004c
  .word 0xac450004
  .word 0x26a4fffe
  .word 0x28810009
  .word 0x1420003a
  .word 0x26a3fff8
  .word 0x2aa40002
  .word 0x14800007
  .word 0x0000382d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x02a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x00c0382d
  .word 0x10e0002f
  .word 0x00000000
  .word 0x24440008
  .word 0x8c88fffc
  .word 0x24a50008
  .word 0x8c87fff8
  .word 0x00a3302a
  .word 0x00084080
  .word 0x01073823
  .word 0xac870000
  .word 0x8c880000
  .word 0x8c87fffc
  .word 0x00084080
  .word 0x01073823
  .word 0xac870004
  .word 0x8c880004
  .word 0x8c870000
  .word 0x00084080
  .word 0x01073823
  .word 0xac870008
  .word 0x8c880008
  .word 0x8c870004
  .word 0x00084080
  .word 0x01073823
  .word 0xac87000c
  .word 0x8c88000c
  .word 0x8c870008
  .word 0x00084080
  .word 0x01073823
  .word 0xac870010
  .word 0x8c880010
  .word 0x8c87000c
  .word 0x00084080
  .word 0x01073823
  .word 0xac870014
  .word 0x8c880014
  .word 0x8c870010
  .word 0x00084080
  .word 0x01073823
  .word 0xac870018
  .word 0x8c880018
  .word 0x8c870014
  .word 0x00084080
  .word 0x01073823
  .word 0xac87001c
  .word 0x14c0ffd5
  .word 0x24840020
  .word 0x00000000
  .word 0x00b5082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x00051880
  .word 0x00433821
  .word 0x8ce6fffc
  .word 0x24a50001
  .word 0x8ce4fff8
  .word 0x00b5182a
  .word 0x00063080
  .word 0x00c42023
  .word 0xace40000
  .word 0x1460fff8
  .word 0x24e70004
  .word 0x10400176
  .word 0x00000000
  .word 0x26a4fffe
  .word 0x0480003e
  .word 0x00000000
  .word 0x06a10003
  .word 0x00151843
  .word 0x26a30001
  .word 0x00031843
  .word 0x28610009
  .word 0x1420002b
  .word 0x00000000
  .word 0x26a5fffe
  .word 0x04a00007
  .word 0x0000302d
  .word 0x3c038000
  .word 0x34630002
  .word 0x00a3182a
  .word 0x14600002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00020
  .word 0x00000000
  .word 0x00041880
  .word 0x00431821
  .word 0x8c650000
  .word 0x2484fff0
  .word 0x28810010
  .word 0x00052823
  .word 0xac650000
  .word 0x8c65fff8
  .word 0x00052823
  .word 0xac65fff8
  .word 0x8c65fff0
  .word 0x00052823
  .word 0xac65fff0
  .word 0x8c65ffe8
  .word 0x00052823
  .word 0xac65ffe8
  .word 0x8c65ffe0
  .word 0x00052823
  .word 0xac65ffe0
  .word 0x8c65ffd8
  .word 0x00052823
  .word 0xac65ffd8
  .word 0x8c65ffd0
  .word 0x00052823
  .word 0xac65ffd0
  .word 0x8c65ffc8
  .word 0x00052823
  .word 0xac65ffc8
  .word 0x1020ffe5
  .word 0x2463ffc0
  .word 0x00000000
  .word 0x0480000b
  .word 0x00000000
  .word 0x00041880
  .word 0x00432821
  .word 0x8ca30000
  .word 0x2484fffe
  .word 0x00031823
  .word 0xaca30000
  .word 0x24a5fff8
  .word 0x0481fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x32a40001
  .word 0x24080002
  .word 0x2403fffe
  .word 0x0015082a
  .word 0x0064400a
  .word 0x1020008a
  .word 0x0000482d
  .word 0x44960000
  .word 0x0000682d
  .word 0x24430004
  .word 0x26a7ffff
  .word 0x46800060
  .word 0x24050001
  .word 0x000d2080
  .word 0x00e95023
  .word 0x02843021
  .word 0x00a0702d
  .word 0x000a2080
  .word 0x00445021
  .word 0xc5400000
  .word 0x46800020
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0x19200073
  .word 0xe4c00000
  .word 0x29210009
  .word 0x1420005c
  .word 0x2524fff8
  .word 0x19200008
  .word 0x0000582d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0121082a
  .word 0x10200003
  .word 0x00000000
  .word 0x00a0582d
  .word 0x00000000
  .word 0x11600051
  .word 0x00000000
  .word 0x0060602d
  .word 0x24cb0004
  .word 0x8d920000
  .word 0x8d4f0000
  .word 0x024f7818
  .word 0x010f7818
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe5600000
  .word 0x8d920004
  .word 0x8d4f0000
  .word 0x724f7818
  .word 0x010f7818
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe5600004
  .word 0x8d920008
  .word 0x8d4f0000
  .word 0x724f7818
  .word 0x010f7818
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe5600008
  .word 0x8d92000c
  .word 0x8d4f0000
  .word 0x724f7818
  .word 0x010f7818
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe560000c
  .word 0x8d920010
  .word 0x8d4f0000
  .word 0x724f7818
  .word 0x010f7818
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe5600010
  .word 0x8d920014
  .word 0x8d4f0000
  .word 0x724f7818
  .word 0x010f7818
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe5600014
  .word 0x8d920018
  .word 0x8d4f0000
  .word 0x724f7818
  .word 0x010f7818
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe5600018
  .word 0x8d92001c
  .word 0x8d4f0000
  .word 0x724f7818
  .word 0x010f7818
  .word 0x25ce0008
  .word 0x008e082a
  .word 0x258c0020
  .word 0x448f0000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe560001c
  .word 0x1020ffb4
  .word 0x256b0020
  .word 0x00000000
  .word 0x012e082a
  .word 0x14200012
  .word 0x00000000
  .word 0x000e2080
  .word 0x00c45821
  .word 0x00446021
  .word 0x8d860000
  .word 0x8d440000
  .word 0x00c42018
  .word 0x01042018
  .word 0x25ce0001
  .word 0x012e082a
  .word 0x258c0004
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010003
  .word 0xe5600000
  .word 0x1020fff3
  .word 0x256b0004
  .word 0x25290001
  .word 0x0135202a
  .word 0x1480ff7e
  .word 0x01b56821
  .word 0x00111880
  .word 0xc6800000
  .word 0x00741821
  .word 0x0015082a
  .word 0x0000702d
  .word 0x10200072
  .word 0xe460fffc
  .word 0x3c038000
  .word 0x26acffff
  .word 0x346a0001
  .word 0x0000882d
  .word 0x24090001
  .word 0x018a402a
  .word 0x01cc082a
  .word 0x10200065
  .word 0x0180682d
  .word 0x018e1823
  .word 0x28610009
  .word 0x1420004d
  .word 0x25cb0008
  .word 0x018e182a
  .word 0x0000282d
  .word 0x14600093
  .word 0x0000202d
  .word 0x01ca182a
  .word 0x14600090
  .word 0x00000000
  .word 0x1000008e
  .word 0x0120202d
  .word 0x00000000
  .word 0x15000003
  .word 0x00000000
  .word 0x0120282d
  .word 0x00000000
  .word 0x10a0003d
  .word 0x00000000
  .word 0x00111880
  .word 0x000d2080
  .word 0x02832821
  .word 0x02ae1823
  .word 0x00a47821
  .word 0x02a31818
  .word 0x2467ffff
  .word 0x00000000
  .word 0x00ed1823
  .word 0x00032080
  .word 0x02842021
  .word 0x25a3ffff
  .word 0xc4800000
  .word 0x00e31823
  .word 0x00031880
  .word 0x02831821
  .word 0xe5e00000
  .word 0x25a4fffe
  .word 0xc4600000
  .word 0x00e42823
  .word 0x00052880
  .word 0x25a4fffd
  .word 0x00e42023
  .word 0x02853021
  .word 0x00042080
  .word 0x02842821
  .word 0x25a4fffc
  .word 0xe5e0fffc
  .word 0x00e42023
  .word 0xc4c00000
  .word 0x00041880
  .word 0x02832021
  .word 0x25a3fffb
  .word 0x00e39023
  .word 0x25a3fffa
  .word 0x00129880
  .word 0x00e39023
  .word 0xe5e0fff8
  .word 0x02931821
  .word 0xc4a00000
  .word 0x00129080
  .word 0x02929821
  .word 0x25b2fff9
  .word 0x00f29023
  .word 0x25adfff8
  .word 0x00123080
  .word 0x016d082a
  .word 0x02863021
  .word 0xe5e0fff4
  .word 0xc4800000
  .word 0xe5e0fff0
  .word 0xc4600000
  .word 0xe5e0ffec
  .word 0xc6600000
  .word 0xe5e0ffe8
  .word 0xc4c00000
  .word 0xe5e0ffe4
  .word 0x1420ffce
  .word 0x25efffe0
  .word 0x00000000
  .word 0x01cd082a
  .word 0x10200012
  .word 0x00000000
  .word 0x00111880
  .word 0x000d2080
  .word 0x02832821
  .word 0x02ae1823
  .word 0x00a42821
  .word 0x02a31818
  .word 0x2464ffff
  .word 0x008d1823
  .word 0x00031880
  .word 0x25adffff
  .word 0x02831821
  .word 0x01cd082a
  .word 0xc4600000
  .word 0xe4a00000
  .word 0x1420fff8
  .word 0x24a5fffc
  .word 0x00000000
  .word 0x25ce0001
  .word 0x01d5182a
  .word 0x1460ff96
  .word 0x02358821
  .word 0x0040202d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000031
  .word 0x0280102d
  .word 0x24020102
  .word 0x0200282d
  .word 0xafa20098
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2009c
  .word 0x0c130714
  .word 0x27a40098
  .word 0x10000026
  .word 0x0000102d
  .word 0x24020102
  .word 0x0200282d
  .word 0xafa20090
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa20094
  .word 0x0c130714
  .word 0x27a40090
  .word 0x1000fe39
  .word 0x0000102d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0280202d
  .word 0x10000015
  .word 0x0000102d
  .word 0x24020102
  .word 0x0260282d
  .word 0xafa20088
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x1000fe8a
  .word 0x0000102d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x0280202d
  .word 0x10000005
  .word 0x0000102d
  .word 0x1080ff77
  .word 0x00000000
  .word 0x1000ff71
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00a0
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off
#pragma optimization_level 2

#pragma optimization_level 3
#pragma schedule on
// FUN_0048B910

#ifndef PC_BUILD
asm u64 FUN_0048b910(u32 param_1,float *param_2)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x0080f02d
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x00a0a82d
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0c123480
  .word 0xe7b40000
  .word 0x8fc3000c
  .word 0x0040982d
  .word 0x24020002
  .word 0x10620090
  .word 0x27d40038
  .word 0x24040001
  .word 0x10640003
  .word 0x00000000
  .word 0x1000047e
  .word 0x24020102
  .word 0x2a61000a
  .word 0x10200482
  .word 0x00000000
  .word 0x0260802d
  .word 0x3c020096
  .word 0x00101880
  .word 0x2442de40
  .word 0x00431021
  .word 0x8c480000
  .word 0x1100047c
  .word 0x00000000
  .word 0x0013082a
  .word 0x1020006c
  .word 0x0000882d
  .word 0x0000782d
  .word 0x02137023
  .word 0x0280682d
  .word 0x27a700f4
  .word 0x27a600f8
  .word 0x06010003
  .word 0x00102843
  .word 0x26020001
  .word 0x00022843
  .word 0x02652023
  .word 0x02054818
  .word 0x02701823
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00091880
  .word 0x02a25821
  .word 0x01036021
  .word 0x44800000
  .word 0x24020001
  .word 0x2603fff8
  .word 0x0225482a
  .word 0xafa000f0
  .word 0xace00000
  .word 0x15200469
  .word 0xacc00000
  .word 0x0224082a
  .word 0x10200023
  .word 0x00000000
  .word 0x0010082a
  .word 0x1020003e
  .word 0x0000482d
  .word 0x0225b023
  .word 0x0180502d
  .word 0x00169040
  .word 0x02569021
  .word 0x00129080
  .word 0x02b2b021
  .word 0x00000000
  .word 0x25290001
  .word 0xc7a100f0
  .word 0x0130902a
  .word 0xc5460000
  .word 0xc6c50000
  .word 0xc4e30000
  .word 0xc6c40004
  .word 0xc6c20008
  .word 0x46010018
  .word 0xc4c10000
  .word 0x254a0004
  .word 0x4606295c
  .word 0x46030018
  .word 0x460620dc
  .word 0xe7a500f0
  .word 0x26d6000c
  .word 0xe4e30000
  .word 0x46010018
  .word 0x4606105c
  .word 0x1640ffec
  .word 0xe4c10000
  .word 0x10000020
  .word 0x00000000
  .word 0x00000000
  .word 0x0010082a
  .word 0x1020001c
  .word 0x0000502d
  .word 0x020e4818
  .word 0x0160902d
  .word 0x00094880
  .word 0x0109b021
  .word 0x00000000
  .word 0x254a0001
  .word 0xc7a100f0
  .word 0x0150482a
  .word 0xc6c60000
  .word 0xc6450000
  .word 0xc4e30000
  .word 0xc6440004
  .word 0xc6420008
  .word 0x46010018
  .word 0xc4c10000
  .word 0x26d60004
  .word 0x4606295c
  .word 0x46030018
  .word 0x460620dc
  .word 0xe7a500f0
  .word 0x2652000c
  .word 0xe4e30000
  .word 0x46010018
  .word 0x4606105c
  .word 0x1520ffec
  .word 0xe4c10000
  .word 0x00000000
  .word 0x26310001
  .word 0xc7a300f0
  .word 0x25aa000c
  .word 0xc7a200f4
  .word 0x0233482a
  .word 0xc7a100f8
  .word 0x01f07821
  .word 0x25ce0001
  .word 0xe5a3000c
  .word 0xe5a20010
  .word 0xe5a10014
  .word 0x1520ffac
  .word 0x0140682d
  .word 0x00000000
  .word 0x00131040
  .word 0xc6820018
  .word 0x00531021
  .word 0xc681001c
  .word 0x00021080
  .word 0xc6800020
  .word 0x00541021
  .word 0xe6820000
  .word 0xe6810004
  .word 0xe6800008
  .word 0xc442fff4
  .word 0xc441fff8
  .word 0xc440fffc
  .word 0xe442000c
  .word 0xe4410010
  .word 0x100003f2
  .word 0xe4400014
  .word 0x2a61000a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x0260b82d
  .word 0x2417000a
  .word 0x06e10004
  .word 0x32e20001
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffe
  .word 0x104000d5
  .word 0x00000000
  .word 0x06e10003
  .word 0x00179043
  .word 0x26e20001
  .word 0x00029043
  .word 0x3c020096
  .word 0x26510001
  .word 0x24420178
  .word 0x00118080
  .word 0x7fa200b0
  .word 0x3c020003
  .word 0x34450102
  .word 0x7ba200b0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1040047e
  .word 0x00000000
  .word 0x24060001
  .word 0x24030003
  .word 0xac460000
  .word 0x2a210003
  .word 0x24050002
  .word 0x1420004d
  .word 0xac430004
  .word 0x2644ffff
  .word 0x28810009
  .word 0x14200039
  .word 0x2643fff9
  .word 0x2a240002
  .word 0x14800007
  .word 0x0000382d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0221082a
  .word 0x10200002
  .word 0x00000000
  .word 0x00c0382d
  .word 0x10e0002e
  .word 0x00000000
  .word 0x24440008
  .word 0x8c88fffc
  .word 0x24a50008
  .word 0x8c87fff8
  .word 0x00a3302a
  .word 0x00084080
  .word 0x01073823
  .word 0xac870000
  .word 0x8c880000
  .word 0x8c87fffc
  .word 0x00084080
  .word 0x01073823
  .word 0xac870004
  .word 0x8c880004
  .word 0x8c870000
  .word 0x00084080
  .word 0x01073823
  .word 0xac870008
  .word 0x8c880008
  .word 0x8c870004
  .word 0x00084080
  .word 0x01073823
  .word 0xac87000c
  .word 0x8c88000c
  .word 0x8c870008
  .word 0x00084080
  .word 0x01073823
  .word 0xac870010
  .word 0x8c880010
  .word 0x8c87000c
  .word 0x00084080
  .word 0x01073823
  .word 0xac870014
  .word 0x8c880014
  .word 0x8c870010
  .word 0x00084080
  .word 0x01073823
  .word 0xac870018
  .word 0x8c880018
  .word 0x8c870014
  .word 0x00084080
  .word 0x01073823
  .word 0xac87001c
  .word 0x14c0ffd5
  .word 0x24840020
  .word 0x00b1082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x00051880
  .word 0x26470001
  .word 0x00434021
  .word 0x8d06fffc
  .word 0x24a50001
  .word 0x8d04fff8
  .word 0x00a7182a
  .word 0x00063080
  .word 0x00c42023
  .word 0xad040000
  .word 0x1460fff8
  .word 0x25080004
  .word 0x00000000
  .word 0x10400434
  .word 0x00000000
  .word 0x00122080
  .word 0x3c033f80
  .word 0x00442821
  .word 0x3c160096
  .word 0xc4a00000
  .word 0x0040202d
  .word 0x26d6017c
  .word 0x44830800
  .word 0x8ec20000
  .word 0x46800020
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x0040f809
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x3c030003
  .word 0x0200202d
  .word 0x8c420000
  .word 0x0040f809
  .word 0x34650102
  .word 0x1040041f
  .word 0x00000000
  .word 0x24060001
  .word 0x24030005
  .word 0xac460000
  .word 0x2a210003
  .word 0x24050002
  .word 0x1420004d
  .word 0xac430004
  .word 0x2644ffff
  .word 0x28810009
  .word 0x14200039
  .word 0x2643fff9
  .word 0x2a240002
  .word 0x14800007
  .word 0x0000382d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0221082a
  .word 0x10200002
  .word 0x00000000
  .word 0x00c0382d
  .word 0x10e0002e
  .word 0x00000000
  .word 0x24440008
  .word 0x8c88fffc
  .word 0x24a50008
  .word 0x8c87fff8
  .word 0x00a3302a
  .word 0x00084080
  .word 0x01073823
  .word 0xac870000
  .word 0x8c880000
  .word 0x8c87fffc
  .word 0x00084080
  .word 0x01073823
  .word 0xac870004
  .word 0x8c880004
  .word 0x8c870000
  .word 0x00084080
  .word 0x01073823
  .word 0xac870008
  .word 0x8c880008
  .word 0x8c870004
  .word 0x00084080
  .word 0x01073823
  .word 0xac87000c
  .word 0x8c88000c
  .word 0x8c870008
  .word 0x00084080
  .word 0x01073823
  .word 0xac870010
  .word 0x8c880010
  .word 0x8c87000c
  .word 0x00084080
  .word 0x01073823
  .word 0xac870014
  .word 0x8c880014
  .word 0x8c870010
  .word 0x00084080
  .word 0x01073823
  .word 0xac870018
  .word 0x8c880018
  .word 0x8c870014
  .word 0x00084080
  .word 0x01073823
  .word 0xac87001c
  .word 0x14c0ffd5
  .word 0x24840020
  .word 0x00b1082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x00051880
  .word 0x26470001
  .word 0x00434021
  .word 0x8d06fffc
  .word 0x24a50001
  .word 0x8d04fff8
  .word 0x00a7182a
  .word 0x00063080
  .word 0x00c42023
  .word 0xad040000
  .word 0x1460fff8
  .word 0x25080004
  .word 0x00000000
  .word 0x144000d3
  .word 0x00000000
  .word 0x100003eb
  .word 0x0000102d
  .word 0x06e10003
  .word 0x00179043
  .word 0x26e20001
  .word 0x00029043
  .word 0x3c110096
  .word 0x3c020003
  .word 0x26310178
  .word 0x34450102
  .word 0x8e220000
  .word 0x00128080
  .word 0x0040f809
  .word 0x0200202d
  .word 0x104003c5
  .word 0x00000000
  .word 0x24060001
  .word 0x24030004
  .word 0xac460000
  .word 0x2a410003
  .word 0x24050002
  .word 0x1420004c
  .word 0xac430004
  .word 0x2644fffe
  .word 0x28810009
  .word 0x1420003a
  .word 0x2643fff8
  .word 0x2a440002
  .word 0x14800007
  .word 0x0000382d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0241082a
  .word 0x10200002
  .word 0x00000000
  .word 0x00c0382d
  .word 0x10e0002f
  .word 0x00000000
  .word 0x24440008
  .word 0x8c88fffc
  .word 0x24a50008
  .word 0x8c87fff8
  .word 0x00a3302a
  .word 0x00084080
  .word 0x01073823
  .word 0xac870000
  .word 0x8c880000
  .word 0x8c87fffc
  .word 0x00084080
  .word 0x01073823
  .word 0xac870004
  .word 0x8c880004
  .word 0x8c870000
  .word 0x00084080
  .word 0x01073823
  .word 0xac870008
  .word 0x8c880008
  .word 0x8c870004
  .word 0x00084080
  .word 0x01073823
  .word 0xac87000c
  .word 0x8c88000c
  .word 0x8c870008
  .word 0x00084080
  .word 0x01073823
  .word 0xac870010
  .word 0x8c880010
  .word 0x8c87000c
  .word 0x00084080
  .word 0x01073823
  .word 0xac870014
  .word 0x8c880014
  .word 0x8c870010
  .word 0x00084080
  .word 0x01073823
  .word 0xac870018
  .word 0x8c880018
  .word 0x8c870014
  .word 0x00084080
  .word 0x01073823
  .word 0xac87001c
  .word 0x14c0ffd5
  .word 0x24840020
  .word 0x00000000
  .word 0x00b2082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x00051880
  .word 0x00433821
  .word 0x8ce6fffc
  .word 0x24a50001
  .word 0x8ce4fff8
  .word 0x00b2182a
  .word 0x00063080
  .word 0x00c42023
  .word 0xace40000
  .word 0x1460fff8
  .word 0x24e70004
  .word 0x1040037c
  .word 0x00000000
  .word 0x00122080
  .word 0x3c033f80
  .word 0x00822821
  .word 0x3c160096
  .word 0xc4a0fffc
  .word 0x0040202d
  .word 0x26d6017c
  .word 0x44830800
  .word 0x8ec20000
  .word 0x46800020
  .word 0x46000d03
  .word 0x00000000
  .word 0x00000000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e220000
  .word 0x3c030003
  .word 0x34650102
  .word 0x26510001
  .word 0x00118080
  .word 0x0040f809
  .word 0x0200202d
  .word 0x10400366
  .word 0x00000000
  .word 0x24060001
  .word 0x24050002
  .word 0xac460000
  .word 0x2a210003
  .word 0x1420004d
  .word 0xac450004
  .word 0x2644ffff
  .word 0x28810009
  .word 0x14200039
  .word 0x2643fff9
  .word 0x2a240002
  .word 0x14800007
  .word 0x0000382d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0221082a
  .word 0x10200002
  .word 0x00000000
  .word 0x00c0382d
  .word 0x10e0002e
  .word 0x00000000
  .word 0x24440008
  .word 0x8c88fffc
  .word 0x24a50008
  .word 0x8c87fff8
  .word 0x00a3302a
  .word 0x00084080
  .word 0x01073823
  .word 0xac870000
  .word 0x8c880000
  .word 0x8c87fffc
  .word 0x00084080
  .word 0x01073823
  .word 0xac870004
  .word 0x8c880004
  .word 0x8c870000
  .word 0x00084080
  .word 0x01073823
  .word 0xac870008
  .word 0x8c880008
  .word 0x8c870004
  .word 0x00084080
  .word 0x01073823
  .word 0xac87000c
  .word 0x8c88000c
  .word 0x8c870008
  .word 0x00084080
  .word 0x01073823
  .word 0xac870010
  .word 0x8c880010
  .word 0x8c87000c
  .word 0x00084080
  .word 0x01073823
  .word 0xac870014
  .word 0x8c880014
  .word 0x8c870010
  .word 0x00084080
  .word 0x01073823
  .word 0xac870018
  .word 0x8c880018
  .word 0x8c870014
  .word 0x00084080
  .word 0x01073823
  .word 0xac87001c
  .word 0x14c0ffd5
  .word 0x24840020
  .word 0x00b1082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x00051880
  .word 0x26470001
  .word 0x00434021
  .word 0x8d06fffc
  .word 0x24a50001
  .word 0x8d04fff8
  .word 0x00a7182a
  .word 0x00063080
  .word 0x00c42023
  .word 0xad040000
  .word 0x1460fff8
  .word 0x25080004
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x1000031b
  .word 0x0000102d
  .word 0x2643ffff
  .word 0x0460003c
  .word 0x00000000
  .word 0x06210003
  .word 0x00112043
  .word 0x26240001
  .word 0x00042043
  .word 0x28810009
  .word 0x14200029
  .word 0x00000000
  .word 0x04600007
  .word 0x0000282d
  .word 0x3c048000
  .word 0x34840002
  .word 0x0064202a
  .word 0x14800002
  .word 0x00000000
  .word 0x24050001
  .word 0x10a0001f
  .word 0x00000000
  .word 0x00032080
  .word 0x00442021
  .word 0x8c850000
  .word 0x2463fff0
  .word 0x28610010
  .word 0x00052823
  .word 0xac850000
  .word 0x8c85fff8
  .word 0x00052823
  .word 0xac85fff8
  .word 0x8c85fff0
  .word 0x00052823
  .word 0xac85fff0
  .word 0x8c85ffe8
  .word 0x00052823
  .word 0xac85ffe8
  .word 0x8c85ffe0
  .word 0x00052823
  .word 0xac85ffe0
  .word 0x8c85ffd8
  .word 0x00052823
  .word 0xac85ffd8
  .word 0x8c85ffd0
  .word 0x00052823
  .word 0xac85ffd0
  .word 0x8c85ffc8
  .word 0x00052823
  .word 0xac85ffc8
  .word 0x1020ffe5
  .word 0x2484ffc0
  .word 0x0460000b
  .word 0x00000000
  .word 0x00032080
  .word 0x00442821
  .word 0x8ca40000
  .word 0x2463fffe
  .word 0x00042023
  .word 0xaca40000
  .word 0x24a5fff8
  .word 0x0461fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x0013082a
  .word 0x102001e6
  .word 0x0000502d
  .word 0x26e30001
  .word 0x00122080
  .word 0x0280682d
  .word 0x26470001
  .word 0x00444021
  .word 0x264cfff9
  .word 0x04610003
  .word 0x00033043
  .word 0x24630001
  .word 0x00033043
  .word 0x44800000
  .word 0x24c5ffff
  .word 0x24cbfff8
  .word 0x24040001
  .word 0x0153001a
  .word 0x00007010
  .word 0x28e10002
  .word 0xc5010000
  .word 0x0080482d
  .word 0x000e1840
  .word 0x006e1821
  .word 0x00031880
  .word 0x02a31821
  .word 0x46800920
  .word 0xc4630000
  .word 0xc4620004
  .word 0xc4610008
  .word 0x46032182
  .word 0x46022142
  .word 0x142000dd
  .word 0x460121c2
  .word 0x2a410009
  .word 0x142000be
  .word 0x00000000
  .word 0x18e00008
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00e1082a
  .word 0x10200003
  .word 0x00000000
  .word 0x0080182d
  .word 0x00000000
  .word 0x106000b3
  .word 0x00000000
  .word 0x012a1821
  .word 0x0073001a
  .word 0x00001810
  .word 0x02497023
  .word 0x000e7080
  .word 0x252f0001
  .word 0x004e8021
  .word 0xc6010000
  .word 0x01ea7021
  .word 0x46060018
  .word 0x00038040
  .word 0x02031821
  .word 0x00031880
  .word 0x02a31821
  .word 0x46800920
  .word 0xc4620000
  .word 0xc4610008
  .word 0x460410dc
  .word 0xc4620004
  .word 0x46050018
  .word 0x4604115c
  .word 0x46070018
  .word 0x4604099c
  .word 0x01d3001a
  .word 0x00007010
  .word 0x024f1823
  .word 0x00031880
  .word 0x252f0002
  .word 0x00431821
  .word 0xc4620000
  .word 0x46030018
  .word 0x000e1840
  .word 0x006e7021
  .word 0x000e7080
  .word 0x01ea1821
  .word 0x02ae7021
  .word 0xc5c40000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc5c10004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc5c10008
  .word 0x46060018
  .word 0x4603099c
  .word 0x0073001a
  .word 0x00007010
  .word 0x024f1823
  .word 0x00031880
  .word 0x252f0003
  .word 0x46020018
  .word 0x00431821
  .word 0xc4620000
  .word 0x000e1840
  .word 0x006e7021
  .word 0x000e7080
  .word 0x01ea1821
  .word 0x02ae7021
  .word 0xc5c40000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc5c10004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc5c10008
  .word 0x46060018
  .word 0x4603099c
  .word 0x0073001a
  .word 0x00007010
  .word 0x024f1823
  .word 0x00031880
  .word 0x252f0004
  .word 0x46020018
  .word 0x00431821
  .word 0xc4620000
  .word 0x000e1840
  .word 0x006e7021
  .word 0x000e7080
  .word 0x01ea1821
  .word 0x02ae7021
  .word 0xc5c40000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc5c10004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc5c10008
  .word 0x46060018
  .word 0x4603099c
  .word 0x0073001a
  .word 0x00007010
  .word 0x024f1823
  .word 0x00031880
  .word 0x252f0005
  .word 0x46020018
  .word 0x00431821
  .word 0xc4620000
  .word 0x000e1840
  .word 0x006e7021
  .word 0x000e7080
  .word 0x01ea1821
  .word 0x02ae7021
  .word 0xc5c40000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc5c10004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc5c10008
  .word 0x46060018
  .word 0x4603099c
  .word 0x0073001a
  .word 0x00007010
  .word 0x024f1823
  .word 0x00031880
  .word 0x252f0006
  .word 0x46020018
  .word 0x00431821
  .word 0xc4620000
  .word 0x000e1840
  .word 0x006e7021
  .word 0x000e7080
  .word 0x01ea1821
  .word 0x02ae7021
  .word 0xc5c40000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc5c10004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc5c10008
  .word 0x46060018
  .word 0x4603099c
  .word 0x0073001a
  .word 0x00007010
  .word 0x024f1823
  .word 0x00031880
  .word 0x252f0007
  .word 0x46020018
  .word 0x00431821
  .word 0xc4620000
  .word 0x000e1840
  .word 0x006e7021
  .word 0x000e7080
  .word 0x01ea1821
  .word 0x02ae7021
  .word 0xc5c40000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc5c10004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc5c10008
  .word 0x46060018
  .word 0x4603091c
  .word 0x0073001a
  .word 0x00007010
  .word 0x024f1823
  .word 0x00031880
  .word 0x25290008
  .word 0x46020018
  .word 0x00431821
  .word 0xc4620000
  .word 0x000e1840
  .word 0x006e7021
  .word 0x000e7080
  .word 0x012c182a
  .word 0x02ae7021
  .word 0xc5c30000
  .word 0x468010a0
  .word 0x4602199c
  .word 0xc5c10004
  .word 0x46050018
  .word 0x4602095c
  .word 0xc5c10008
  .word 0x46040018
  .word 0x1460ff4f
  .word 0x460209dc
  .word 0x0127082a
  .word 0x1020001a
  .word 0x00000000
  .word 0x00000000
  .word 0x012a1821
  .word 0x0073001a
  .word 0x00007810
  .word 0x02491823
  .word 0x00031880
  .word 0x25290001
  .word 0x00437021
  .word 0xc5c10000
  .word 0x0127182a
  .word 0x46060018
  .word 0x000f7040
  .word 0x01cf7021
  .word 0x000e7080
  .word 0x02ae7021
  .word 0x468008e0
  .word 0xc5c20000
  .word 0xc5c10008
  .word 0x4603119c
  .word 0xc5c20004
  .word 0x46050018
  .word 0x4603115c
  .word 0x46070018
  .word 0x1460ffe9
  .word 0x460309dc
  .word 0x28c10002
  .word 0x142000de
  .word 0x0080482d
  .word 0x28a10009
  .word 0x142000bf
  .word 0x00000000
  .word 0x18c00007
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00c1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0080182d
  .word 0x106000b5
  .word 0x00000000
  .word 0x026a1821
  .word 0x00000000
  .word 0x00697023
  .word 0x01d3001a
  .word 0x00007010
  .word 0x02497823
  .word 0x000f7880
  .word 0x25300001
  .word 0x004f8821
  .word 0xc6210000
  .word 0x00707823
  .word 0x46060018
  .word 0x000e8840
  .word 0x022e7021
  .word 0x000e7080
  .word 0x02ae7021
  .word 0x46800920
  .word 0xc5c20000
  .word 0xc5c10008
  .word 0x460410dc
  .word 0xc5c20004
  .word 0x46050018
  .word 0x4604115c
  .word 0x46070018
  .word 0x4604099c
  .word 0x01f3001a
  .word 0x00007010
  .word 0x02507823
  .word 0x000f7880
  .word 0x004f8021
  .word 0xc6020000
  .word 0x252f0002
  .word 0x46030018
  .word 0x000e8040
  .word 0x020e8021
  .word 0x00108080
  .word 0x006f7023
  .word 0x02b08021
  .word 0xc6040000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc6010004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc6010008
  .word 0x46060018
  .word 0x4603099c
  .word 0x01d3001a
  .word 0x00007010
  .word 0x024f7823
  .word 0x000f7880
  .word 0x004f8021
  .word 0x46020018
  .word 0x252f0003
  .word 0xc6020000
  .word 0x000e8040
  .word 0x020e8021
  .word 0x00108080
  .word 0x006f7023
  .word 0x02b08021
  .word 0xc6040000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc6010004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc6010008
  .word 0x46060018
  .word 0x4603099c
  .word 0x01d3001a
  .word 0x00007010
  .word 0x024f7823
  .word 0x000f7880
  .word 0x004f8021
  .word 0x46020018
  .word 0x252f0004
  .word 0xc6020000
  .word 0x000e8040
  .word 0x020e8021
  .word 0x00108080
  .word 0x006f7023
  .word 0x02b08021
  .word 0xc6040000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc6010004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc6010008
  .word 0x46060018
  .word 0x4603099c
  .word 0x01d3001a
  .word 0x00007010
  .word 0x024f7823
  .word 0x000f7880
  .word 0x004f8021
  .word 0x46020018
  .word 0x252f0005
  .word 0xc6020000
  .word 0x000e8040
  .word 0x020e8021
  .word 0x00108080
  .word 0x006f7023
  .word 0x02b08021
  .word 0xc6040000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc6010004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc6010008
  .word 0x46060018
  .word 0x4603099c
  .word 0x01d3001a
  .word 0x00007010
  .word 0x024f7823
  .word 0x000f7880
  .word 0x004f8021
  .word 0x46020018
  .word 0x252f0006
  .word 0xc6020000
  .word 0x000e8040
  .word 0x020e8021
  .word 0x00108080
  .word 0x006f7023
  .word 0x02b08021
  .word 0xc6040000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc6010004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc6010008
  .word 0x46060018
  .word 0x4603099c
  .word 0x01d3001a
  .word 0x00007010
  .word 0x024f7823
  .word 0x000f7880
  .word 0x25300007
  .word 0x46020018
  .word 0x004f7821
  .word 0xc5e20000
  .word 0x000e7840
  .word 0x01ee7821
  .word 0x000f7880
  .word 0x00707023
  .word 0x02af7821
  .word 0xc5e40000
  .word 0x468010e0
  .word 0x4603209c
  .word 0xc5e10004
  .word 0x46050018
  .word 0x4603095c
  .word 0xc5e10008
  .word 0x46060018
  .word 0x4603091c
  .word 0x01d3001a
  .word 0x00007810
  .word 0x02507023
  .word 0x000e7080
  .word 0x25290008
  .word 0x46020018
  .word 0x004e7021
  .word 0xc5c20000
  .word 0x000f7040
  .word 0x01cf7821
  .word 0x000f7880
  .word 0x012b702a
  .word 0x02af7821
  .word 0xc5e30000
  .word 0x468010a0
  .word 0x4602199c
  .word 0xc5e10004
  .word 0x46050018
  .word 0x4602095c
  .word 0xc5e10008
  .word 0x46040018
  .word 0x15c0ff4f
  .word 0x460209dc
  .word 0x0126082a
  .word 0x1020001a
  .word 0x00000000
  .word 0x026a7021
  .word 0x01c91823
  .word 0x0073001a
  .word 0x00001810
  .word 0x02497823
  .word 0x000f7880
  .word 0x25290001
  .word 0x004f8021
  .word 0xc6010000
  .word 0x0126782a
  .word 0x46060018
  .word 0x00038040
  .word 0x02031821
  .word 0x00031880
  .word 0x02a31821
  .word 0x468008e0
  .word 0xc4620000
  .word 0xc4610008
  .word 0x4603119c
  .word 0xc4620004
  .word 0x46050018
  .word 0x4603115c
  .word 0x46070018
  .word 0x15e0ffe9
  .word 0x460309dc
  .word 0x254a0001
  .word 0x46143042
  .word 0x0153182a
  .word 0xe5a1000c
  .word 0x46142842
  .word 0xe5a10010
  .word 0x46143842
  .word 0xe5a10014
  .word 0x1460fe2a
  .word 0x25ad000c
  .word 0x0040202d
  .word 0x00131040
  .word 0x00531021
  .word 0x00021080
  .word 0x02821021
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xe6820000
  .word 0xe6810004
  .word 0xe6800008
  .word 0xc682000c
  .word 0xc6810010
  .word 0xc6800014
  .word 0xe442000c
  .word 0xe4410010
  .word 0xe4400014
  .word 0xc6820018
  .word 0xc681001c
  .word 0xc6800020
  .word 0xe4420018
  .word 0xe441001c
  .word 0xe4400020
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x100000d9
  .word 0x03c0102d
  .word 0x0c130744
  .word 0xafa200e0
  .word 0xafa200e4
  .word 0x0c130714
  .word 0x27a400e0
  .word 0x100000d2
  .word 0x0000102d
  .word 0x1000fb7f
  .word 0x2410000a
  .word 0x24030102
  .word 0x3c028000
  .word 0xafa300e8
  .word 0x0c130744
  .word 0x34440016
  .word 0xafa200ec
  .word 0x0c130714
  .word 0x27a400e8
  .word 0x100000c6
  .word 0x0000102d
  .word 0x0010082a
  .word 0x1020fbd9
  .word 0x0000502d
  .word 0x2a010009
  .word 0x1420006c
  .word 0x00000000
  .word 0x0200082a
  .word 0x14200007
  .word 0x0000482d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0201082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040482d
  .word 0x11200061
  .word 0x00000000
  .word 0x000f4880
  .word 0x02a0902d
  .word 0x0109b021
  .word 0x00000000
  .word 0x254a0008
  .word 0xc7a100f0
  .word 0x0143482a
  .word 0xc6470000
  .word 0xc6c60000
  .word 0xc4e40000
  .word 0xc6450004
  .word 0xc4c20000
  .word 0x46010018
  .word 0xc6430008
  .word 0x46063a1c
  .word 0x46040018
  .word 0x460629dc
  .word 0x46020018
  .word 0xc641000c
  .word 0x4606199c
  .word 0xc6c50004
  .word 0x46080018
  .word 0xc6430010
  .word 0xc6420014
  .word 0x4605091c
  .word 0x46070018
  .word 0x460518dc
  .word 0x46060018
  .word 0x4605121c
  .word 0xc6410018
  .word 0xc6c70008
  .word 0x46040018
  .word 0xc642001c
  .word 0xc6c6000c
  .word 0x4607095c
  .word 0x46030018
  .word 0x4607111c
  .word 0x46080018
  .word 0xc6430020
  .word 0xc6410024
  .word 0xc6420028
  .word 0xc6c80018
  .word 0x460718dc
  .word 0x46050018
  .word 0x4606095c
  .word 0x46040018
  .word 0x460611dc
  .word 0x46030018
  .word 0xc641002c
  .word 0xc6430030
  .word 0xc6c40010
  .word 0xc6420034
  .word 0x4606099c
  .word 0x46050018
  .word 0x460418dc
  .word 0x46070018
  .word 0x4604125c
  .word 0x46060018
  .word 0xc6410038
  .word 0xc645003c
  .word 0xc6c60014
  .word 0xc6420048
  .word 0x460409dc
  .word 0x46030018
  .word 0x4606295c
  .word 0xc6440040
  .word 0x46090018
  .word 0xc6430044
  .word 0xc641004c
  .word 0x4606211c
  .word 0x46070018
  .word 0x460618dc
  .word 0x46050018
  .word 0x460811dc
  .word 0x46040018
  .word 0x4608099c
  .word 0x46030018
  .word 0xc6450050
  .word 0xc6c4001c
  .word 0xc6430054
  .word 0xc6420058
  .word 0xc641005c
  .word 0x4608295c
  .word 0x46070018
  .word 0x26d60020
  .word 0x460418dc
  .word 0x46060018
  .word 0x4604109c
  .word 0x26520060
  .word 0x46050018
  .word 0x4604085c
  .word 0xe7a300f0
  .word 0xe4e20000
  .word 0x1520ffa6
  .word 0xe4c10000
  .word 0x00000000
  .word 0x0150082a
  .word 0x1020fb68
  .word 0x00000000
  .word 0x000f9080
  .word 0x000a4880
  .word 0x0112b021
  .word 0x000a9040
  .word 0x02c94821
  .word 0x024a9021
  .word 0x00129080
  .word 0x02b2b021
  .word 0x00000000
  .word 0x254a0001
  .word 0xc7a100f0
  .word 0x0150902a
  .word 0xc5260000
  .word 0xc6c50000
  .word 0xc4e30000
  .word 0xc6c40004
  .word 0xc6c20008
  .word 0x46010018
  .word 0xc4c10000
  .word 0x25290004
  .word 0x4606295c
  .word 0x46030018
  .word 0x460620dc
  .word 0xe7a500f0
  .word 0x26d6000c
  .word 0xe4e30000
  .word 0x46010018
  .word 0x4606105c
  .word 0x1640ffec
  .word 0xe4c10000
  .word 0x1000fb48
  .word 0x00000000
  .word 0x00000000
  .word 0x24020102
  .word 0xafa200d8
  .word 0x0200282d
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa200dc
  .word 0x0c130714
  .word 0x27a400d8
  .word 0x1000fbcc
  .word 0x0000102d
  .word 0x10000024
  .word 0x0000102d
  .word 0x24020102
  .word 0x0200282d
  .word 0xafa200d0
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa200d4
  .word 0x0c130714
  .word 0x27a400d0
  .word 0x1000fc2b
  .word 0x0000102d
  .word 0x24020102
  .word 0x0200282d
  .word 0xafa200c8
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa200cc
  .word 0x0c130714
  .word 0x27a400c8
  .word 0x1000fc84
  .word 0x0000102d
  .word 0x1000000c
  .word 0x0000102d
  .word 0x24020102
  .word 0x0200282d
  .word 0xafa200c0
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa200c4
  .word 0x0c130714
  .word 0x27a400c0
  .word 0x1000fce3
  .word 0x0000102d
  .word 0xdfbf00a0
  .word 0xc7b40000
  .word 0x7bbe0090
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd0100
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma schedule off
#pragma optimization_level 2

// FUN_0048CF00
#ifndef PC_BUILD
asm u64 FUN_0048cf00(u64 param_1)

{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82bac4
  .word 0x0080802d
  .word 0x2442ffff
  .word 0x10400003
  .word 0xaf82bac4
  .word 0x10000013
  .word 0x0200102d
  .word 0x3c120096
  .word 0x3c110096
  .word 0x2413000a
  .word 0x2652de68
  .word 0x2631017c
  .word 0x8e220000
  .word 0x0040f809
  .word 0x8e440000
  .word 0x2673ffff
  .word 0xae400000
  .word 0x2a610004
  .word 0x1020fff9
  .word 0x2652fffc
  .word 0x8e220000
  .word 0x0040f809
  .word 0x8f84ba8c
  .word 0x1000ffed
  .word 0xaf80ba8c
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0048CFA0
#ifndef PC_BUILD
asm u64 FUN_0048cfa0(u64 param_1)

{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82bac4
  .word 0x10400006
  .word 0x0080882d
  .word 0x8f83bac4
  .word 0x0220102d
  .word 0x24630001
  .word 0x1000003b
  .word 0xaf83bac4
  .word 0x0c122b48
  .word 0x00000000
  .word 0x1040001e
  .word 0x00000000
  .word 0x3c100096
  .word 0x24120004
  .word 0x2610de50
  .word 0x0c122be0
  .word 0x0240202d
  .word 0x14400007
  .word 0xae020000
  .word 0x2650ffff
  .word 0x2a010004
  .word 0x1020001c
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x26520001
  .word 0x2a41000b
  .word 0x1420fff3
  .word 0x26100004
  .word 0x24020001
  .word 0x1440ffe4
  .word 0x00000000
  .word 0x24020102
  .word 0x24040003
  .word 0x0c130744
  .word 0xafa20050
  .word 0xafa20054
  .word 0x0c130714
  .word 0x27a40050
  .word 0x1000001a
  .word 0x0000102d
  .word 0x24020102
  .word 0x24040003
  .word 0x0c130744
  .word 0xafa20058
  .word 0xafa2005c
  .word 0x0c130714
  .word 0x27a40058
  .word 0x10000011
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c120096
  .word 0x00101880
  .word 0x2442de40
  .word 0x00439821
  .word 0x2652017c
  .word 0x8e420000
  .word 0x0040f809
  .word 0x8e640000
  .word 0x2610ffff
  .word 0xae600000
  .word 0x2a010004
  .word 0x1020fff9
  .word 0x2673fffc
  .word 0x1000ffd6
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0048D0E0
#ifndef PC_BUILD
asm u64 FUN_0048d0e0(u64 param_1)

{
  .set noreorder
  .word 0x27bdff80
  .word 0x24060028
  .word 0xffbf0040
  .word 0x27a50050
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x0c131494
  .word 0x7fb00000
  .word 0x24030028
  .word 0x10430003
  .word 0x00000000
  .word 0x10000032
  .word 0x0000102d
  .word 0x8fb00070
  .word 0x3c020001
  .word 0x34450102
  .word 0x3c020096
  .word 0x8c420178
  .word 0x00101840
  .word 0x00701821
  .word 0x00039880
  .word 0x0040f809
  .word 0x0260202d
  .word 0x10400009
  .word 0x0040882d
  .word 0x0240202d
  .word 0x0260302d
  .word 0x0c13062c
  .word 0x0220282d
  .word 0x1440000e
  .word 0x00000000
  .word 0x1000001e
  .word 0x0000102d
  .word 0x24020102
  .word 0x0260282d
  .word 0xafa20078
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2007c
  .word 0x0c130714
  .word 0x27a40078
  .word 0x10000013
  .word 0x0000102d
  .word 0x8fa50074
  .word 0x0200202d
  .word 0x0c1236ac
  .word 0x0220302d
  .word 0x0040802d
  .word 0x27a50050
  .word 0x3c020096
  .word 0x26040018
  .word 0x8c420140
  .word 0x0040f809
  .word 0x24060020
  .word 0x2402000c
  .word 0xa2020000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0220202d
  .word 0x0200102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_0048D200
#ifndef PC_BUILD
asm int FUN_0048d200(int param_1)

{
  .set noreorder
  .word 0x27bdffe0
  .word 0x8c83000c
  .word 0x24020002
  .word 0x10620009
  .word 0xffbf0000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000007
  .word 0x0040202d
  .word 0x8c820008
  .word 0x1000000b
  .word 0x2442fffe
  .word 0x8c820008
  .word 0x10000008
  .word 0x2442fffd
  .word 0x24020102
  .word 0x0c130744
  .word 0xafa20018
  .word 0xafa2001c
  .word 0x0c130714
  .word 0x27a40018
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
