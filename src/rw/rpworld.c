#include "temporary.h"

/* auto-extern (generated) */
extern u32* puGpffffbd04;
extern u8 LAB_00490d80;
extern u8 LAB_004944a0;
extern u8 LAB_004a9be0;

typedef int (*code)(...);
extern long thunk_FUN_004c3970(int param_1,u32 param_2,long param_3,int param_4,long param_5,u32 param_6);
#pragma alias thunk_FUN_004c3970_u32 thunk_FUN_004c3970
extern u32 thunk_FUN_004c3970_u32(int param_1,u32 param_2,int param_3,u32 param_4,u32 param_5,u32 param_6);
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
#pragma alias FUN_00521250_copy FUN_00521250
extern void FUN_00521250_copy(u64 destination,u64 source,u32 size);
#pragma alias FUN_00521250_u32 FUN_00521250
extern void FUN_00521250_u32(u32 destination,u32 source,u32 size);
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
#pragma alias FUN_00496230_u32 FUN_00496230
extern long FUN_00496230_u32(u32 param_1,u32 param_2,u32 param_3);
long FUN_00497130(u64 param_1,long param_2,u64 param_3,u64 param_4,long param_5);
long FUN_00498e70(int param_1);
long FUN_00499140(long param_1,u32 param_2);
long FUN_0049a080(long param_1);
long FUN_0049a400(u32 *param_1);
long FUN_0049c810(void);
long FUN_0049fe40(int param_1,int param_2,int param_3);
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
f32 FUN_0048ef60(int param_1,int param_2);
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
u64 FUN_0048a2a0(u64 param_1,u32 param_2);
u64 FUN_0048a2e0(u64 param_1,int param_2);
u64 FUN_0048a370(u64 param_1);
u64 FUN_0048a4b0(u64 param_1);
u64 FUN_0048a790(u64 param_1);
u64 FUN_0048a800(u64 param_1,int param_2);
u64 FUN_0048ac10(u64 param_1,long param_2);
u64 FUN_0048b910(u64 param_1,float *param_2);
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
u32 FUN_00490d40(int param_1);
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
u32 FUN_00493b40(u32 param_1);
u64 FUN_004944b0(u64 param_1,u32 *param_2);
u64 FUN_004948b0(u64 param_1);
u64 FUN_00494930(u64 param_1,int param_2);
u64 FUN_004949c0(u64 param_1,int param_2);
u64 FUN_00494a40(u64 param_1,u64 param_2,int param_3);
u64 FUN_00494ae0(u64 param_1,int param_2);
u64 FUN_00494b70(u64 param_1);
u64 FUN_00494d50(u64 param_1,long param_2);
u64 FUN_00495260(u64 param_1);
u32 FUN_00495300(u32 param_1);
u64 FUN_00495a30(u64 param_1,int param_2);
u64 FUN_00495cf0(u64 param_1,u32 param_2,u16 param_3,u16 param_4, u16 param_5,u16 param_6,u16 param_7,u16 param_8, u16 param_9);
u64 FUN_00495f10(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00495fb0(u32 *param_1,char *param_2,u64 param_3,u64 param_4);
#pragma alias FUN_00495fb0_u32 FUN_00495fb0
extern u64 FUN_00495fb0_u32(u32 *param_1,char *param_2,u32 param_3,u32 param_4);
u64 FUN_004967a0(u64 param_1);
u64 FUN_00496be0(u32 param_1,u32 *param_2,int param_3,u32 *param_4);
u64 FUN_00498720(int param_1,u64 param_2,u32 param_3);
#pragma alias FUN_00498720_wide FUN_00498720
extern u64 FUN_00498720_wide(u64 param_1,u64 param_2,u32 param_3);
u64 FUN_00499320(u64 param_1);
u64 FUN_00499a80(u64 param_1);
u64 FUN_00499af0(u64 param_1,int param_2);
u64 FUN_00499b90(u64 param_1);
u64 FUN_00499ca0(u64 param_1,code *param_2,u64 param_3);
u64 FUN_00499d30(u64 param_1);
u64 FUN_00499fd0(u64 param_1);
u64 FUN_0049a250(u64 param_1);
u32 FUN_0049a3d0(u32 param_1,code *param_2);
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
#pragma alias FUN_0049c160_wide FUN_0049c160
extern u64 FUN_0049c160_wide(u64 param_1,u64 param_2);
u64 FUN_0049c1b0(u64 param_1,int param_2);
u64 FUN_0049c1e0(u64 param_1,int param_2);
#pragma alias FUN_0049c1e0_wide FUN_0049c1e0
extern u64 FUN_0049c1e0_wide(u64 param_1,u64 param_2);
u64 FUN_0049c240(u64 param_1,u64 param_2);
#pragma alias FUN_0049c240_typed FUN_0049c240
extern u64 FUN_0049c240_typed(int param_1,u64 param_2);
u64 FUN_0049c330(u64 param_1,code *param_2,u64 param_3);
#pragma alias FUN_0049c330_typed FUN_0049c330
extern u64 FUN_0049c330_typed(u32 param_1,u32 param_2,u64 param_3);
u64 FUN_0049c3d0(u64 param_1,int param_2);
#pragma alias FUN_0049c3d0_wide FUN_0049c3d0
extern u64 FUN_0049c3d0_wide(u64 param_1,u64 param_2);
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
u64 FUN_004a6600(u64 param_1,u64 param_2);
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
#pragma alias FUN_004acb10_u32 FUN_004acb10
extern u32 FUN_004acb10_u32(u32 param_1,u32 param_2);
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
u32 FUN_004ae110(int param_1,int param_2);
u64 FUN_004ae150(u64 param_1,u64 param_2);
u32 FUN_004ae1d0(u32 param_1,u32 param_2);
u64 FUN_004ae1f0(int param_1,u32 *param_2);
u32 FUN_004ae270(int param_1,int param_2);
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
u8 FUN_00488fe0(void);
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
void FUN_0048efc0(int param_1,int param_2,f32 param_3);
void FUN_00491100(int param_1);
void FUN_00492c30(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c60(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c90(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00492cc0(u64 param_1,u64 param_2);
void FUN_00492ce0(u64 param_1,u64 param_2);
void FUN_00492d00(u32 param_1);
void FUN_00493c50(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00493c80(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494520(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494550(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494db0(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494de0(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494e10(u64 param_1,u64 param_2);
void FUN_00495480(int *param_1,int param_2);
int FUN_004959c0(u64 param_1);
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

extern u32 DAT_0077dce0;
#pragma alias DAT_0077dce0_abs DAT_0077dce0
extern u8 DAT_0077dce0_abs[];
extern u32 DAT_0077dd00;
#pragma alias DAT_0077dd00_abs DAT_0077dd00
extern u8 DAT_0077dd00_abs[];
extern u32 DAT_0077dd20;
extern u32 DAT_0077dd40;
#pragma alias DAT_0077dd20_abs DAT_0077dd20
extern u8 DAT_0077dd20_abs[];
extern u32 DAT_0077dd60;
extern u32 DAT_0077dd78;
#pragma alias DAT_0077dd40_abs DAT_0077dd40
extern u8 DAT_0077dd40_abs[];
extern u32 DAT_0077dd7c;
extern u32 DAT_0077dd80;
#pragma alias DAT_0077dd60_abs DAT_0077dd60
extern u8 DAT_0077dd60_abs[];
extern u32 DAT_0077dda4;
extern u32 DAT_0077ddb0;
#pragma alias DAT_0077ddb0_abs DAT_0077ddb0
extern u8 DAT_0077ddb0_abs[];
extern u32 DAT_0077ddd0;
#pragma alias DAT_0077ddd0_abs DAT_0077ddd0
extern u8 DAT_0077ddd0_abs[];
extern u32 DAT_0077dec0;
extern u32 DAT_0077dee0;
extern u32 DAT_007bcac2;
extern u32 DAT_007bcac3;
extern u32 DAT_007bcac7;
extern u32 DAT_007bcac8;
extern u32 DAT_007bcac9;
extern u32 DAT_007bcacc;
extern u32 DAT_007bcacf;
extern u32 DAT_007bcae2;
extern u32 DAT_007bcae3;
extern u32 DAT_007bcae7;
extern u32 DAT_007bcae8;
extern u32 DAT_007bcae9;
extern u32 DAT_007bcaec;
extern u32 DAT_007bcaef;
extern u32 DAT_007bcb52;
extern u32 DAT_007bcb53;
extern u32 DAT_007bcb57;
extern u32 DAT_007bcb58;
extern u32 DAT_007bcb59;
extern u32 DAT_007bcb5c;
extern u32 DAT_007bcb5f;
extern u32 DAT_007cdbe0;
extern u32 DAT_007cdbe4;
extern u32 DAT_007cdbe8;
extern u32 DAT_007cdbec;
extern u32 DAT_007cdc08;
extern u32 DAT_007cdc09;
extern u32 DAT_007cdc0a;
extern u32 DAT_007cdc0b;
extern u32 DAT_007cdc64;
extern u32 DAT_007cdc68;
#pragma alias DAT_007cdc64_abs DAT_007cdc64
extern u32 DAT_007cdc64_abs[];
#pragma alias DAT_007cdc68_abs DAT_007cdc68
extern u32 DAT_007cdc68_abs[];
extern u32 DAT_007cdc6c;
extern u32 DAT_007cdcc4;
extern u32 DAT_007cdcc8;
extern u32 DAT_007cdccc;
extern u32 DAT_007cdcd0;
extern u32 DAT_007cdcd4;
extern u32 DAT_007ce720;
extern u32 DAT_007ce724;
extern u32 DAT_007ce728;
extern u32 DAT_007ce72c;
extern u32 DAT_007ce7b8;
extern u32 DAT_007ce7bc;
extern u32 DAT_007ce7c0;
extern u32 DAT_007ce7c4;
extern u32 DAT_007ce7c8;
extern u32 DAT_007ce7cc;
extern u32 DAT_007ce7d0;
extern u32 DAT_007ce7d4;
extern u32 DAT_007ce7d8;
extern u32 DAT_007ce7dc;
extern u32 DAT_007ce7e0;
extern u32 DAT_007ce7e4;
extern u32 DAT_007ce7e8;
extern u32 DAT_007ce7ec;
extern u32 DAT_007ce7f8;
extern u32 DAT_007ce7fc;
extern u32 DAT_007ce830;
extern u32 DAT_007ce834;
extern u32 DAT_007ce838;
extern u32 DAT_007ce83c;
extern u32 DAT_007ce840;
extern u32 DAT_007ce844;
extern u32 DAT_007ce848;
extern u32 DAT_007ce850;
extern u32 DAT_007ce854;
extern u32 DAT_007ce868;
extern u32 DAT_007ce86c;
extern u32 DAT_007ce870;
extern u32 DAT_007ce874;
extern u32 DAT_007ce878;
extern u32 DAT_007ce880;
extern u32* DAT_007ce884;
extern u32 DAT_007ce888;
extern u32 DAT_007ce88c;
extern u32 DAT_007ce890;
extern u32 DAT_007ce8f0;
extern u32* DAT_007ce9f4;
extern u32 DAT_007cea60;
extern u32 DAT_007ceaf4;
extern u32 DAT_007ceb20;
extern u32 DAT_007ceb28;
extern u32 DAT_0095dfc0;
extern u32 DAT_0095dfc4;
extern u32 DAT_0095dfc8;
extern u32 DAT_0095dfcc;
extern u32 DAT_0095dfd0;
extern u32 DAT_0095e860;
extern u32 DAT_0095e864;
extern u32 DAT_0095ea60;
extern u32 DAT_0095ed60;
extern u32 DAT_0095ed64;
#pragma alias DAT_0095ed60_abs DAT_0095ed60
extern u32 DAT_0095ed60_abs[];
#pragma alias DAT_0095ed64_abs DAT_0095ed64
extern u32 DAT_0095ed64_abs[];
extern u32 DAT_0095ed68;
extern u32 DAT_0095ed6c;
extern u32 DAT_0095ed70;
extern u32 DAT_0095ed74;
extern u32 DAT_0095ed78;
extern u32 DAT_0095ed7c;
extern u32 DAT_0095ed80;
extern u32 DAT_0095ed84;
extern u32* DAT_0095ed88;
extern u32 DAT_0095ed8c;
#pragma alias DAT_0095ed8c_abs DAT_0095ed8c
extern u32 DAT_0095ed8c_abs[];
#pragma alias DAT_0096018c_abs DAT_0096018c
extern u32 DAT_0096018c_abs[];
extern u32 DAT_0095edb0;
extern u32 DAT_0095edb4;
extern u32 DAT_0095edb8;
extern u32 DAT_0095edbc;
extern u32 DAT_0095edc0;
extern u32 DAT_0095edc4;
extern u32 DAT_0095edc8;
extern u32 DAT_0095edd0;
extern u32 DAT_0095edd4;
extern u32 DAT_0095edd8;
extern u32 DAT_0095ede0;
extern u32 DAT_0095ede4;
extern u32 DAT_0095ede8;
extern u32 DAT_0095edec;
extern u8 DAT_0095edf0[];
#pragma alias DAT_0095edf0_abs DAT_0095edf0
extern u32 DAT_0095edf0_abs[];
extern u32 DAT_0095ee70;
#pragma alias DAT_0095ee70_abs DAT_0095ee70
extern int DAT_0095ee70_abs[];
extern u32 DAT_0095ee74;
extern u32 DAT_0095ee78;
extern u32 DAT_0095ee7c;
extern u32 DAT_0095ee80;
extern u32 DAT_0095ee90;
extern u32 DAT_0095ee94;
extern u32 DAT_0095ee98;
extern u32 DAT_0095ee9c;
extern u32 DAT_0095eea0;
extern u32 DAT_0095eea4;
extern u32 DAT_0095eea8;
extern u32 DAT_0095eeac;
extern u32 DAT_0095eeb0;
extern u32 DAT_0095eeb4;
extern u32 DAT_0095eeb8;
extern u32 DAT_0095eebc;
extern u32 DAT_0095eec0;
extern u32 DAT_0095eec4;
extern u32 DAT_0095eec8;
extern u32 DAT_0095eecc;
#pragma alias DAT_0095ef50_abs DAT_0095ef50
extern u32 DAT_0095ef50_abs[];
 #pragma alias DAT_0095ef64_abs DAT_0095ef64
extern u32 DAT_0095ef64_abs[];
extern u32 DAT_0095ef10;
extern u32 DAT_0095ef50;
extern u32 DAT_0095ef54;
extern u32 DAT_0095ef58;
extern u32 DAT_0095ef5c;
extern u32 DAT_0095ef60;
extern u32 DAT_0095ef64;
extern u32 DAT_0095ef68;
extern u32 DAT_0095ef70;
extern u32 DAT_0095ef74;
extern u32 DAT_0095ef78;
extern u32 DAT_0095ef7c;
extern u32 DAT_0095ef84;
extern u32 DAT_0095ef88;
extern u32 DAT_0095ef98;
extern u32 DAT_0095efa0;
extern u32 DAT_0095efa4;
extern u32 DAT_0095efc4;
extern u32 DAT_0095efc8;
extern u32 DAT_0095efd0;
#pragma alias DAT_0095efd0_abs DAT_0095efd0
extern u32 DAT_0095efd0_abs[];
extern u32 DAT_0095f040;
#pragma alias DAT_00960074_abs DAT_00960074
extern u32 DAT_00960074_abs[];
extern code DAT_0095f478;
extern u32 DAT_0095f57c;
extern u32 DAT_0095f580;
extern u32 DAT_0095f584;
extern u32 DAT_0095f984;
extern u32 DAT_0095f988;
extern u8 DAT_00960070[];
#pragma alias DAT_00960070_abs DAT_00960070
extern u32 DAT_00960070_abs[];
extern u32 DAT_00960074;
extern u32 DAT_00960078;
extern u32 DAT_0096007a;
extern u32 DAT_0096007c;
extern u32 DAT_00960080;
extern u32 DAT_00960088;
extern u32 DAT_0096008c;
extern code DAT_00960090;
extern code DAT_00960094;
extern u32 DAT_00960098;
extern u32 DAT_0096009c;
extern code DAT_009600a0;
extern u32 DAT_009600a8;
extern u32 DAT_009600ac;
extern u32 DAT_009600b0;
extern u32 DAT_009600b4;
extern u32 DAT_009600b8;
extern u32 DAT_009600bc;
extern u32 DAT_009600c0;
extern u32 DAT_009600c4;
extern u32 DAT_009600c8;
extern u32 DAT_009600cc;
extern code DAT_00960134;
extern code DAT_0096013c;
extern code DAT_00960144;
extern code DAT_00960158;
extern code DAT_00960164;
extern code DAT_00960174;
extern code DAT_00960178;
#pragma alias DAT_00960178_abs DAT_00960178
extern int (*DAT_00960178_abs[])(u64,u64);
extern code DAT_0096017c;
extern code DAT_00960180;
extern code DAT_00960188;
extern code DAT_0096018c;
extern u32 DAT_009658a0;
extern u32 DAT_009658a8;
extern u32 DAT_009658ac;
extern u32 DAT_00965910;
extern u32 DAT_00965920;
extern u32 DAT_00965930;
extern u32 DAT_00965940;
extern u32 PTR_DAT_0077f130;
extern u32 PTR_FUN_0077dda0;
extern u8 *PTR_s_PS2AllMat_csl_0077e1e0[];
extern u8 *PTR_s_PS2All_csl_0077de80[];
extern u32 Status;
extern u32 _DAT_00965910;
extern u32 _DAT_00965920;
extern u32 _DAT_00965930;
extern u32 _DAT_00965940;
extern u32 switchdataD_007bca50[];
extern u32 bGpffffbe04;
extern u32 gp0xffffaf20;
extern u32 gp0xffffaf98;
extern u32 gp0xffffafa0;
extern u32 gp0xffffafa8;
extern u32 gp0xffffafc0;
extern u32 gp0xffffafc8;
extern u32 gp0xffffafd0;
extern u32 iGpffffb0f8;
extern u32 iGpffffba38;
extern u32 iGpffffba3c;
extern u32 iGpffffbb14;
extern u32 iGpffffbb20;
extern u32 iGpffffbb24;
extern u32 iGpffffbb2c;
extern u32 iGpffffbb30;
extern u32 iGpffffbb34;
extern u32 iGpffffbb60;
extern u32 iGpffffbb70;
extern u32 iGpffffbb74;
extern u32 iGpffffbb78;
extern u32 iGpffffbb7c;
extern u32 iGpffffbb80;
extern u32 iGpffffbb84;
extern u32 iGpffffbb88;
extern u32 iGpffffbb8c;
extern u32 iGpffffbb9c;
extern u32 iGpffffbba0;
extern u32 iGpffffbdb4;
extern u32 iGpffffbdbc;
extern u32 iGpffffbdcc;
extern u32 iGpffffbe14;
extern u32 iGpffffbe38;
extern u32 uGpffffaee0;
extern u32 uGpffffaee4;
extern u32 uGpffffaee8;
extern u32 uGpffffaeec;
extern u32 uGpffffaf00;
extern u32 uGpffffaf04;
extern u32 uGpffffaf08;
extern u32 uGpffffaf0c;
extern u32 uGpffffafb0;
extern u32 uGpffffafb4;
extern u32 uGpffffafb8;
extern u32 uGpffffafbc;
extern u32 uGpffffb0d0;
extern u32 uGpffffbb10;
extern u32 uGpffffbb20;
extern u32 uGpffffbb24;
extern u32 uGpffffbb28;
extern u32 uGpffffbb78;
extern u32 uGpffffbb7c;
extern u32 uGpffffbb80;
extern u32 uGpffffbb84;
extern u32 uGpffffbba4;
extern u32 uGpffffbd50;
extern u32 uGpffffbd68;
extern u32 uGpffffbd70;
extern u32 uGpffffbdc4;
extern u32 uGpffffbdc8;
extern u32 uGpffffbe08;
extern u32 uGpffffbe0c;
extern u32 uGpffffbe10;
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
#pragma alias FUN_004b11a0_typed FUN_004b11a0
extern void FUN_004b11a0_typed(void);
#pragma alias FUN_004b1050_typed FUN_004b1050
extern void FUN_004b1050_typed(void);
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
#pragma alias FUN_004c1600_typed FUN_004c1600
extern long FUN_004c1600_typed(int param_1,int param_2,u32 *param_3,u32 *param_4);
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
#pragma alias FUN_004c1e60_typed FUN_004c1e60
extern void FUN_004c1e60_typed(u32 param_1);
extern code FUN_004c1e70;
extern code FUN_004c1f70;
extern code FUN_004c2090;
extern code FUN_004c20b0;
extern code FUN_004c2120;
extern code FUN_004c2130;
extern code FUN_004c21b0;
#pragma alias FUN_004c21b0_typed FUN_004c21b0
extern u32 *FUN_004c21b0_typed(u32 param_1);
#pragma alias FUN_00492060_typed FUN_00492060
extern void FUN_00492060_typed(u32 param_1,u32 param_2);
#pragma alias FUN_004ca030_typed FUN_004ca030
extern void FUN_004ca030_typed(u32 param_1);
extern code FUN_004c2d20;
extern code FUN_004c2f30;
extern code FUN_004c31b0;
extern code FUN_004c32a0;
extern code FUN_004c33d0;
extern code FUN_004c35d0;
extern code FUN_004c3880;
extern code FUN_004c38c0;
#pragma alias FUN_004c3c30_typed FUN_004c3c30
extern void FUN_004c3c30_typed(u32 param_1);
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
#pragma alias FUN_004c5a00_typed FUN_004c5a00
extern void FUN_004c5a00_typed(u64 param_1,u64 param_2,u64 param_3);
#pragma alias FUN_004c5a00_u32 FUN_004c5a00
extern void FUN_004c5a00_u32(u32 param_1,u64 param_2,u64 param_3);
extern code FUN_004c5a50;
extern code FUN_004c5c30;
extern code FUN_004c6170;
extern code FUN_004c61b0;
#pragma alias FUN_004c5960_raw FUN_004c5960
extern void FUN_004c5960_raw();
#pragma alias FUN_004c59b0_raw FUN_004c59b0
extern void FUN_004c59b0_raw();
#pragma alias FUN_004c6170_raw FUN_004c6170
extern void FUN_004c6170_raw();
#pragma alias FUN_004c6170_u32 FUN_004c6170
extern u32 FUN_004c6170_u32(u32 param_1,u32 param_2);
#pragma alias FUN_004c61b0_raw FUN_004c61b0
extern void FUN_004c61b0_raw();
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
#pragma alias FUN_004d4df0_typed FUN_004d4df0
extern void FUN_004d4df0_typed(void);
extern code FUN_004d51c0;
extern code FUN_004d59d0;
#pragma alias FUN_004d59d0_typed FUN_004d59d0
extern void FUN_004d59d0_typed(int,int);
#pragma alias FUN_004d5fe0_typed FUN_004d5fe0
extern int FUN_004d5fe0_typed(int,int);
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
#pragma alias FUN_005316d0_s32 FUN_005316d0
extern int FUN_005316d0_s32(void);

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
long FUN_0049fe40(int param_1,int param_2,int param_3);
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
f32 FUN_0048ef60(int param_1,int param_2);
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
u64 FUN_0048a2a0(u64 param_1,u32 param_2);
u64 FUN_0048a2e0(u64 param_1,int param_2);
u64 FUN_0048a370(u64 param_1);
u64 FUN_0048a4b0(u64 param_1);
u64 FUN_0048a790(u64 param_1);
u64 FUN_0048a800(u64 param_1,int param_2);
u64 FUN_0048ac10(u64 param_1,long param_2);
u64 FUN_0048b910(u64 param_1,float *param_2);
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
u32 FUN_00490d40(int param_1);
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
u32 FUN_00493b40(u32 param_1);
u64 FUN_004944b0(u64 param_1,u32 *param_2);
u64 FUN_004948b0(u64 param_1);
u64 FUN_00494930(u64 param_1,int param_2);
u64 FUN_004949c0(u64 param_1,int param_2);
u64 FUN_00494a40(u64 param_1,u64 param_2,int param_3);
u64 FUN_00494ae0(u64 param_1,int param_2);
u64 FUN_00494b70(u64 param_1);
u64 FUN_00494d50(u64 param_1,long param_2);
u64 FUN_00495260(u64 param_1);
u32 FUN_00495300(u32 param_1);
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
u32 FUN_0049a3d0(u32 param_1,code *param_2);
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
#pragma alias FUN_0049c160_wide FUN_0049c160
extern u64 FUN_0049c160_wide(u64 param_1,u64 param_2);
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
u64 FUN_004a6600(u64 param_1,u64 param_2);
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
u32 FUN_004ae110(int param_1,int param_2);
u64 FUN_004ae150(u64 param_1,u64 param_2);
u32 FUN_004ae1d0(u32 param_1,u32 param_2);
u64 FUN_004ae1f0(int param_1,u32 *param_2);
u32 FUN_004ae270(int param_1,int param_2);
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
u8 FUN_00488fe0(void);
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
void FUN_0048efc0(int param_1,int param_2,f32 param_3);
void FUN_00491100(int param_1);
void FUN_00492c30(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c60(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00492c90(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00492cc0(u64 param_1,u64 param_2);
void FUN_00492ce0(u64 param_1,u64 param_2);
void FUN_00492d00(u32 param_1);
void FUN_00493c50(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00493c80(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494520(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494550(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494db0(u64 param_1,u64 param_2,u64 param_3,u64 param_4, u64 param_5);
void FUN_00494de0(u64 param_1,u64 param_2,u64 param_3,u64 param_4);
void FUN_00494e10(u64 param_1,u64 param_2);
void FUN_00495480(int *param_1,int param_2);
int FUN_004959c0(u64 param_1);
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

#pragma schedule on
// FUN_0045EC00

u8 FUN_0045ec00(void)

{
  int iVar1;
  
  iVar1 = FUN_005316d0_s32();
  return iVar1 < 0;
}

#pragma schedule on
// FUN_0045EC20

u8 FUN_0045ec20(void)
{
  int iVar1;
  
  iVar1 = FUN_005316d0_s32();
  return 0 < iVar1;
}
#pragma schedule off

// FUN_0045EC40
asm long FUN_0045ec40(u16 param_1,u16 param_2,u32 *param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x00e0902d
  .word 0x7fb00000
  .word 0x3290ffff
  .word 0x1a000032
  .word 0x24110028
  .word 0x00101100
  .word 0x2442000f
  .word 0x1000002e
  .word 0x02228821
  .word 0x00021040
  .word 0x24420001
  .word 0x02228821
  .word 0x3c020003
  .word 0x3445002c
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0220202d
  .word 0x10400028
  .word 0x00000000
  .word 0xac520000
  .word 0x0040282d
  .word 0xa455001c
  .word 0xa454001e
  .word 0xc6630000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe4430004
  .word 0xe4420008
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc6610010
  .word 0xc6600014
  .word 0xe4410014
  .word 0xe4400018
  .word 0x1a000021
  .word 0x24420028
  .word 0x2444000f
  .word 0x00101900
  .word 0x2402fff0
  .word 0x00822024
  .word 0x00831021
  .word 0xaca40020
  .word 0x12c00006
  .word 0x00000000
  .word 0x24430001
  .word 0x2402fffe
  .word 0x00621024
  .word 0x10000002
  .word 0xaca20024
  .word 0xaca00024
  .word 0x10000013
  .word 0x00a0102d
  .word 0x32560001
  .word 0x12c0ffd4
  .word 0x00000000
  .word 0x1000ffcf
  .word 0x32a2ffff
  .word 0x2402011d
  .word 0x0220282d
  .word 0xafa20088
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x10000003
  .word 0x0000102d
  .word 0x1000ffe5
  .word 0xaca00020
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma alias DAT_0096017c_abs DAT_0096017c
extern void (*DAT_0096017c_abs[])(void);

#pragma optimization_level 3
// FUN_0045EDC0
void FUN_0045edc0(void)
{
  DAT_0096017c_abs[0]();
}
#pragma optimization_level 2

// FUN_0045EDD0
asm int FUN_0045edd0(u32 *param_1)
{
  .set noreorder
  .word 0x9482001e
  .word 0x24050030
  .word 0x8c830000
  .word 0x00021100
  .word 0x30630001
  .word 0x10600004
  .word 0x00a21021
  .word 0x9483001c
  .word 0x00031840
  .word 0x00431021
  .word 0x03e00008
  .word 0x00000000
}

// FUN_0045EE00
asm u64 FUN_0045ee00(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x9483001e
  .word 0x8c820000
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x24050030
  .word 0x00031900
  .word 0x30420001
  .word 0x10400004
  .word 0x00a38021
  .word 0x9662001c
  .word 0x00021040
  .word 0x02028021
  .word 0x3c020003
  .word 0x0240202d
  .word 0x2405002c
  .word 0x0200302d
  .word 0x34477002
  .word 0x0c130568
  .word 0x24080037
  .word 0x14400003
  .word 0x00000000
  .word 0x10000052
  .word 0x0000102d
  .word 0x3c020003
  .word 0x2606fff4
  .word 0x0240202d
  .word 0x24050001
  .word 0x34477002
  .word 0x0c130568
  .word 0x24080037
  .word 0x14400003
  .word 0x00000000
  .word 0x10000047
  .word 0x0000102d
  .word 0xc6650010
  .word 0x8e670000
  .word 0xc6640014
  .word 0x9663001c
  .word 0xc6630018
  .word 0x9662001e
  .word 0xc6620004
  .word 0x0240202d
  .word 0xc6610008
  .word 0x27a50060
  .word 0xc660000c
  .word 0x24060024
  .word 0xe7a50064
  .word 0xafa70060
  .word 0xe7a40068
  .word 0xafa3007c
  .word 0xe7a3006c
  .word 0xafa20080
  .word 0xe7a20070
  .word 0xe7a10074
  .word 0x0c1314fc
  .word 0xe7a00078
  .word 0x10400025
  .word 0x00000000
  .word 0x9662001e
  .word 0x1840001c
  .word 0x00000000
  .word 0x0002082b
  .word 0x10200019
  .word 0x0000882d
  .word 0x0000802d
  .word 0x8e620020
  .word 0x27a50050
  .word 0x0240202d
  .word 0x24060010
  .word 0x00501021
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4410008
  .word 0xc440000c
  .word 0xe7a30050
  .word 0xe7a20054
  .word 0xe7a10058
  .word 0x0c1314fc
  .word 0xe7a0005c
  .word 0x14400003
  .word 0x00000000
  .word 0x10000016
  .word 0x0000102d
  .word 0x9662001e
  .word 0x26310001
  .word 0x0222102b
  .word 0x1440ffea
  .word 0x26100010
  .word 0x8e620000
  .word 0x30420001
  .word 0x14400005
  .word 0x00000000
  .word 0x1000000b
  .word 0x0260102d
  .word 0x10000009
  .word 0x0000102d
  .word 0x9662001c
  .word 0x0240202d
  .word 0x8e650024
  .word 0x0c130608
  .word 0x00023040
  .word 0x1440fff6
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0045EFE0
asm long FUN_0045efe0(u64 param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x24050001
  .word 0xffbf0030
  .word 0x0000302d
  .word 0x7fb20020
  .word 0x27a7008c
  .word 0x7fb10010
  .word 0x0080882d
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000042
  .word 0x0000102d
  .word 0x0220202d
  .word 0x27a50060
  .word 0x0c131494
  .word 0x24060024
  .word 0x24030024
  .word 0x10430003
  .word 0x00000000
  .word 0x10000039
  .word 0x0000102d
  .word 0xc7a50064
  .word 0x97a4007c
  .word 0xc7a40068
  .word 0x97a50080
  .word 0xc7a3006c
  .word 0x8fa70060
  .word 0xc7a20070
  .word 0x27a60040
  .word 0xc7a10074
  .word 0xc7a00078
  .word 0xe7a5004c
  .word 0xe7a40050
  .word 0xe7a30054
  .word 0xe7a20040
  .word 0xe7a10044
  .word 0x0c117b10
  .word 0xe7a00048
  .word 0x0040802d
  .word 0x1200000a
  .word 0x00000000
  .word 0x9602001e
  .word 0x1c400009
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x14400012
  .word 0x00000000
  .word 0x1000001c
  .word 0x0200102d
  .word 0x1000001a
  .word 0x0000102d
  .word 0x8e050020
  .word 0x00029100
  .word 0x0220202d
  .word 0x0c131494
  .word 0x0240302d
  .word 0x1242fff2
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000000d
  .word 0x0000102d
  .word 0x9602001c
  .word 0x0220202d
  .word 0x8e050024
  .word 0x0c130614
  .word 0x00023040
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0045F140
asm long FUN_0045f140(u64 param_1,u16 param_2,u16 param_3,u64 param_4,
                 u32 *param_5)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080902d
  .word 0x7fb10010
  .word 0x30a4ffff
  .word 0x7fb00000
  .word 0x30c5ffff
  .word 0xad000000
  .word 0x00e0302d
  .word 0x0100882d
  .word 0x0c117b10
  .word 0x24070001
  .word 0x0040802d
  .word 0x1200003d
  .word 0x00000000
  .word 0x9602001e
  .word 0x184000ab
  .word 0x00000000
  .word 0x8e140020
  .word 0x0002102b
  .word 0x14400038
  .word 0x0000982d
  .word 0x240200ff
  .word 0xa7a000fa
  .word 0xa3a200f9
  .word 0x27b400f8
  .word 0x24130001
  .word 0x92830001
  .word 0x240200ff
  .word 0x14620074
  .word 0x00000000
  .word 0x96840002
  .word 0x00131080
  .word 0x8e030020
  .word 0x005d1021
  .word 0x26730001
  .word 0x00042100
  .word 0x0064a021
  .word 0x26830008
  .word 0xac430060
  .word 0x00000000
  .word 0x1660fff1
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x1040001b
  .word 0x00000000
  .word 0x9602001c
  .word 0x0002082b
  .word 0x10200017
  .word 0x0000982d
  .word 0x0000882d
  .word 0x0240202d
  .word 0x27a50100
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400007
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x10000087
  .word 0x0000102d
  .word 0x8e020024
  .word 0x26730001
  .word 0x8fa30100
  .word 0x00511021
  .word 0xa4430000
  .word 0x9602001c
  .word 0x0262102b
  .word 0x1440ffec
  .word 0x26310002
  .word 0x1000007c
  .word 0x0200102d
  .word 0x1000007a
  .word 0x0000102d
  .word 0x0240202d
  .word 0x27a5010c
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040003a
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a50108
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400034
  .word 0x00000000
  .word 0x0240202d
  .word 0x26850004
  .word 0x0c13062c
  .word 0x24060004
  .word 0x1040002e
  .word 0x00000000
  .word 0x0240202d
  .word 0x2685000c
  .word 0x0c13062c
  .word 0x24060004
  .word 0x10400028
  .word 0x00000000
  .word 0x8fa3010c
  .word 0x24020002
  .word 0x00031c02
  .word 0xa2830008
  .word 0x92830008
  .word 0x34630001
  .word 0xa2830000
  .word 0x8fa30108
  .word 0xa683000a
  .word 0x8fa30108
  .word 0x00031c02
  .word 0xa6830002
  .word 0x8fa3010c
  .word 0x00031a02
  .word 0x306300ff
  .word 0x14620004
  .word 0x00000000
  .word 0x240200ff
  .word 0x10000003
  .word 0xa2820001
  .word 0xa2800001
  .word 0x00000000
  .word 0x93a3010c
  .word 0x24020002
  .word 0x14620005
  .word 0x00000000
  .word 0x240200ff
  .word 0x10000004
  .word 0xa2820009
  .word 0x00000000
  .word 0xa2800009
  .word 0x00000000
  .word 0x9602001e
  .word 0x26730001
  .word 0x0262102b
  .word 0x1440ffc4
  .word 0x26940010
  .word 0x1000ff8c
  .word 0x240200ff
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x10000035
  .word 0x0000102d
  .word 0x0240202d
  .word 0x27a50104
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400010
  .word 0x00000000
  .word 0x8fa20104
  .word 0x00021402
  .word 0x3042ffff
  .word 0x284100f0
  .word 0x10200010
  .word 0x00000000
  .word 0xa2820001
  .word 0x2673ffff
  .word 0x8fa30104
  .word 0x00131080
  .word 0x005d1021
  .word 0xa6830002
  .word 0x1000ff84
  .word 0x8c540060
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000001a
  .word 0x0000102d
  .word 0x24020001
  .word 0xae220000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x2402011d
  .word 0x24040001
  .word 0x0c130744
  .word 0xafa200f0
  .word 0xafa200f4
  .word 0x0c130714
  .word 0x27a400f0
  .word 0x1000000b
  .word 0x0000102d
  .word 0x0240202d
  .word 0x0c131588
  .word 0x24050004
  .word 0x1440ff6b
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0110
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0080102d
  .word 0x8f85ba2c
  .word 0x8f84ba30
  .word 0x3c030096
  .word 0x24630070
  .word 0x24a50001
  .word 0x00641821
  .word 0xaf85ba2c
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba2c
  .word 0x0080102d
  .word 0x2463ffff
  .word 0x03e00008
  .word 0xaf83ba2c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0045F4E0
asm u64 FUN_0045f4e0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x02258021
  .word 0x8e040000
  .word 0x10800004
  .word 0x00000000
  .word 0x0c117b70
  .word 0x00000000
  .word 0xae000000
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00851021
  .word 0xac400000
  .word 0x03e00008
  .word 0x0080102d
}

// FUN_0045F540
asm int FUN_0045f540(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x00851021
  .word 0x8c440000
  .word 0x10800005
  .word 0xffbf0000
  .word 0x0c117b74
  .word 0x00000000
  .word 0x10000002
  .word 0x24420010
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0045F580
asm u64 FUN_0045f580(u64 param_1,u64 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c78021
  .word 0x8e020000
  .word 0x14400003
  .word 0x0080882d
  .word 0x10000012
  .word 0x0220102d
  .word 0x0c132944
  .word 0x00000000
  .word 0xafa2003c
  .word 0x0220202d
  .word 0x27a5003c
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x8e040000
  .word 0x0c117b80
  .word 0x0220282d
  .word 0x1440ffef
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
}

// FUN_0045F600
asm u64 FUN_0045f600(u64 param_1,u64 param_2,char *param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0030
  .word 0x27a5006c
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x02478021
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400052
  .word 0x00000000
  .word 0x8fa2006c
  .word 0x3c010003
  .word 0x34216001
  .word 0x0041082b
  .word 0x1020003f
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50068
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400048
  .word 0x00000000
  .word 0x92430000
  .word 0x24020008
  .word 0x1462001b
  .word 0x00000000
  .word 0x8e42005c
  .word 0xc4410004
  .word 0xc4400010
  .word 0x46000801
  .word 0xe7a0004c
  .word 0xc4410008
  .word 0xc4400010
  .word 0x46000801
  .word 0xe7a00050
  .word 0xc441000c
  .word 0xc4400010
  .word 0x46000801
  .word 0xe7a00054
  .word 0xc4410004
  .word 0xc4400010
  .word 0x46000800
  .word 0xe7a00040
  .word 0xc4410008
  .word 0xc4400010
  .word 0x46000800
  .word 0xe7a00044
  .word 0xc441000c
  .word 0xc4400010
  .word 0x46000800
  .word 0x1000000d
  .word 0xe7a00048
  .word 0xc6430060
  .word 0xc6420064
  .word 0xc6410068
  .word 0xc640006c
  .word 0xe7a30040
  .word 0xe7a20044
  .word 0xe7a10048
  .word 0xe7a0004c
  .word 0xc6410070
  .word 0xc6400074
  .word 0xe7a10050
  .word 0xe7a00054
  .word 0x8fa2006c
  .word 0x0220202d
  .word 0x8fa50068
  .word 0x27a70040
  .word 0x27a80064
  .word 0xafa00064
  .word 0x0c117c50
  .word 0x2446ffff
  .word 0xae020000
  .word 0x8fa20064
  .word 0x1040000c
  .word 0x00000000
  .word 0x10000016
  .word 0x0220102d
  .word 0x0220202d
  .word 0x2405002c
  .word 0x0000302d
  .word 0x0c130580
  .word 0x0000382d
  .word 0x1440000b
  .word 0x00000000
  .word 0x1000000d
  .word 0x0000102d
  .word 0x8e020000
  .word 0x0002880a
  .word 0x10000009
  .word 0x0220102d
  .word 0x10000007
  .word 0x0000102d
  .word 0x10000005
  .word 0x0000102d
  .word 0x0c117bf8
  .word 0x0220202d
  .word 0x1000fff5
  .word 0xae020000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x8f83ba34
  .word 0x0080102d
  .word 0x00831821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0045F7D0
asm u8 FUN_0045f7d0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060046
  .word 0x3c070046
  .word 0xffbf0000
  .word 0x24040004
  .word 0x2405011d
  .word 0x24c6f490
  .word 0x0c132948
  .word 0x24e7f4c0
  .word 0xaf82ba30
  .word 0x0002102a
  .word 0x14400003
  .word 0x00000000
  .word 0x10000045
  .word 0xdfbf0000
  .word 0x3c060046
  .word 0x24040004
  .word 0x2405011d
  .word 0x24c6f7b0
  .word 0x0000382d
  .word 0x0c124b0c
  .word 0x0000402d
  .word 0xaf82ba34
  .word 0x0002102a
  .word 0x14400006
  .word 0x00000000
  .word 0x0002102b
  .word 0x1440001d
  .word 0x00000000
  .word 0x1000ffef
  .word 0x00000000
  .word 0x3c060046
  .word 0x3c070046
  .word 0x24040004
  .word 0x2405011d
  .word 0x24c6f530
  .word 0x24e7f4e0
  .word 0x0c126494
  .word 0x0000402d
  .word 0xaf82ba3c
  .word 0x0040102a
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x1000ffed
  .word 0x0002102b
  .word 0x3c050046
  .word 0x3c060046
  .word 0x3c070046
  .word 0x2404011d
  .word 0x24a5f600
  .word 0x24c6f580
  .word 0x0c1264a0
  .word 0x24e7f540
  .word 0x0040102a
  .word 0x1000fff4
  .word 0x38420001
  .word 0x3c060046
  .word 0x3c070046
  .word 0x24040004
  .word 0x2405011d
  .word 0x24c6f530
  .word 0x24e7f4e0
  .word 0x0c124f14
  .word 0x0000402d
  .word 0xaf82ba38
  .word 0x0040102a
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x1000ffd6
  .word 0x0002102b
  .word 0x3c050046
  .word 0x3c060046
  .word 0x3c070046
  .word 0x2404011d
  .word 0x24a5f600
  .word 0x24c6f580
  .word 0x0c124f20
  .word 0x24e7f540
  .word 0x0040102a
  .word 0x1000fff4
  .word 0x38420001
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0045F930 NONMATCHING

void FUN_0045f930(int param_1,float *param_2,code *param_3,u32 param_4)

{
  u8 bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  u8 *puVar6;
  u8 bVar7;
  u8 bVar8;
  int *piVar9;
  u8 **ppuVar10;
  long lVar11;
  u8 *pbVar12;
  u16 *puVar13;
  u32 uVar14;
  u32 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_f20;
  float fVar30;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  u32 uStack_528;
  float *pfStack_524;
  float *pfStack_520;
  float *pfStack_51c;
  int iStack_510;
  float afStack_50c [12];
  u8 uStack_4dc;
  u8 uStack_4db;
  u16 uStack_4da;
  u8 *puStack_4d4;
  int iStack_4d0;
  int iStack_4cc;
  u8 *apuStack_4c8 [96];
  u8 **ppuStack_348;
  float afStack_340 [12];
  int aiStack_310 [195];
  int *piStack_4;
  
  afStack_340[6] = 0.0;
  afStack_340[0] = *param_2;
  afStack_340[1] = param_2[1];
  afStack_340[2] = param_2[2];
  afStack_340[3] = param_2[3] - *param_2;
  afStack_340[4] = param_2[4] - param_2[1];
  afStack_340[5] = param_2[5] - param_2[2];
  if (afStack_340[3] != 0.0) {
    afStack_340[6] = 1.0 / afStack_340[3];
  }
  afStack_340[7] = 0.0;
  if (afStack_340[4] != 0.0) {
    afStack_340[7] = 1.0 / afStack_340[4];
  }
  afStack_340[8] = 0.0;
  if (afStack_340[5] != 0.0) {
    afStack_340[8] = 1.0 / afStack_340[5];
  }
  fVar20 = param_2[3];
  fVar21 = fVar20;
  if (fVar20 < 0.0) {
    fVar21 = -fVar20;
  }
  fVar16 = *param_2;
  fVar18 = fVar16;
  if (fVar16 < 0.0) {
    fVar18 = -fVar16;
  }
  if (fVar21 <= fVar18) {
    fVar20 = fVar16;
    if (fVar16 < 0.0) {
      fVar20 = -fVar16;
    }
  }
  else if (fVar20 < 0.0) {
    fVar20 = -fVar20;
  }
  fVar21 = param_2[4];
  fVar18 = fVar21;
  if (fVar21 < 0.0) {
    fVar18 = -fVar21;
  }
  fVar17 = param_2[1];
  fVar16 = fVar17;
  if (fVar17 < 0.0) {
    fVar16 = -fVar17;
  }
  if (fVar18 <= fVar16) {
    fVar21 = fVar17;
    if (fVar17 < 0.0) {
      fVar21 = -fVar17;
    }
  }
  else if (fVar21 < 0.0) {
    fVar21 = -fVar21;
  }
  fVar18 = param_2[5];
  fVar16 = fVar18;
  if (fVar18 < 0.0) {
    fVar16 = -fVar18;
  }
  fVar19 = param_2[2];
  fVar17 = fVar19;
  if (fVar19 < 0.0) {
    fVar17 = -fVar19;
  }
  if (fVar16 <= fVar17) {
    fVar18 = fVar19;
    if (fVar19 < 0.0) {
      fVar18 = -fVar19;
    }
  }
  else if (fVar18 < 0.0) {
    fVar18 = -fVar18;
  }
  piStack_4 = aiStack_310 + 3;
  afStack_340[0xb] = fVar18 * 1e-06;
  afStack_340[9] = fVar20 * 1e-06;
  afStack_340[10] = fVar21 * 1e-06;
  aiStack_310[0] = *(int *)(param_1 + 0x1c);
  aiStack_310[2] = 0x3f800000;
  aiStack_310[1] = 0;
  if (aiStack_310 < piStack_4) {
    do {
      piVar2 = piStack_4;
      piStack_4 = piStack_4 + -3;
      piVar2 = (int *)piVar2[-3];
      iVar3 = *piVar2;
      piVar9 = piStack_4;
      while (piStack_4 = piVar9, -1 < iVar3) {
        iVar3 = *piVar2;
        fVar18 = *(float *)((int)afStack_340 + iVar3 + 0xc);
        fVar20 = *(float *)((int)afStack_340 + iVar3 + 0x24);
        fVar21 = (float)piVar9[2] * fVar18 + *(float *)((int)afStack_340 + iVar3) + 0.0;
        fVar16 = (float)piVar2[5] - fVar20;
        fVar20 = (float)piVar2[4] + fVar20;
        fVar17 = (float)piVar9[1] * fVar18 + *(float *)((int)afStack_340 + iVar3) + 0.0;
        if (0.0 < fVar18) {
          if (fVar16 <= fVar21) {
            if (fVar17 <= fVar20) {
              piStack_4 = piVar9 + 3;
              fVar18 = *(float *)((int)afStack_340 + *piVar2 + 0x18);
              piVar9[3] = piVar2[2];
              piVar9[4] = piVar9[1];
              piVar9[5] = piVar9[2];
              if (fVar20 < fVar21) {
                piVar9[5] = (int)(fVar18 * (fVar20 - fVar21) + (float)piVar9[5] + 0.0);
              }
              *piVar9 = piVar2[3];
              if (fVar17 < fVar16) {
                piVar9[1] = (int)(fVar18 * (fVar16 - fVar17) + (float)piVar9[1] + 0.0);
              }
            }
            else {
              *piVar9 = piVar2[3];
            }
          }
          else {
            *piVar9 = piVar2[2];
          }
        }
        else if (fVar21 <= fVar20) {
          if (fVar16 <= fVar17) {
            piStack_4 = piVar9 + 3;
            fVar18 = *(float *)((int)afStack_340 + *piVar2 + 0x18);
            piVar9[3] = piVar2[3];
            piVar9[4] = piVar9[1];
            piVar9[5] = piVar9[2];
            if (fVar21 < fVar16) {
              piVar9[5] = (int)(fVar18 * (fVar16 - fVar21) + (float)piVar9[5] + 0.0);
            }
            *piVar9 = piVar2[2];
            if (fVar20 < fVar17) {
              piVar9[1] = (int)(fVar18 * (fVar20 - fVar17) + (float)piVar9[1] + 0.0);
            }
          }
          else {
            *piVar9 = piVar2[2];
          }
        }
        else {
          *piVar9 = piVar2[3];
        }
        piVar2 = (int *)*piStack_4;
        piVar9 = piStack_4;
        iVar3 = *piVar2;
      }
      iVar3 = *(int *)((int)piVar2 + DAT_007ce72c);
      if (iVar3 != 0) {
        iVar4 = piVar2[1];
        iVar5 = piVar2[2];
        uStack_4db = 0xff;
        uStack_4da = 0;
        if (*(short *)(iVar3 + 0x1e) == 0) {
          uStack_4db = (char)*(u16 *)(iVar3 + 0x1c);
        }
        puStack_4d4 = &uStack_4dc;
        afStack_50c[1] = afStack_340[1];
        afStack_50c[0] = afStack_340[0];
        afStack_50c[2] = afStack_340[2];
        afStack_50c[3] = afStack_340[3];
        afStack_50c[4] = afStack_340[4];
        afStack_50c[5] = afStack_340[5];
        afStack_50c[6] = afStack_340[6];
        afStack_50c[7] = afStack_340[7];
        afStack_50c[8] = afStack_340[8];
        afStack_50c[9] = afStack_340[9];
        afStack_50c[10] = afStack_340[10];
        afStack_50c[0xb] = afStack_340[0xb];
        iStack_4d0 = piVar9[1];
        iStack_4cc = piVar9[2];
        ppuStack_348 = apuStack_4c8;
        iStack_510 = iVar3;
        if (&puStack_4d4 < apuStack_4c8) {
          do {
            ppuVar10 = ppuStack_348;
            ppuStack_348 = ppuStack_348 + -3;
            puVar6 = ppuVar10[-3];
            bVar1 = puVar6[1];
            ppuVar10 = ppuStack_348;
            while (ppuStack_348 = ppuVar10, bVar1 == 0xff) {
              pbVar12 = (u8 *)(*(int *)(iStack_510 + 0x20) + (u32)*(u16 *)(puVar6 + 2) * 0x10)
              ;
              uVar14 = *pbVar12 & 0xc;
              fVar21 = *(float *)((int)afStack_50c + uVar14 + 0x24);
              fVar16 = *(float *)((int)afStack_50c + uVar14 + 0xc);
              fVar17 = *(float *)(pbVar12 + 0xc) - fVar21;
              fVar20 = (float)(int)ppuVar10[2] * fVar16 + *(float *)((int)afStack_50c + uVar14) + 0.0;
              fVar21 = *(float *)(pbVar12 + 4) + fVar21;
              fVar18 = (float)(int)ppuVar10[1] * fVar16 + *(float *)((int)afStack_50c + uVar14) + 0.0;
              if (0.0 < fVar16) {
                if (fVar17 <= fVar20) {
                  if (fVar18 <= fVar21) {
                    ppuStack_348 = ppuVar10 + 3;
                    fVar16 = *(float *)((int)afStack_50c + uVar14 + 0x18);
                    ppuVar10[3] = pbVar12;
                    ppuVar10[4] = ppuVar10[1];
                    ppuVar10[5] = ppuVar10[2];
                    if (fVar21 < fVar20) {
                      ppuVar10[5] = (u8 *)(int)(fVar16 * (fVar21 - fVar20) + (float)(int)ppuVar10[5] + 0.0);
                    }
                    *ppuVar10 = pbVar12 + 8;
                    if (fVar18 < fVar17) {
                      ppuVar10[1] = (u8 *)(int)(fVar16 * (fVar17 - fVar18) + (float)(int)ppuVar10[1] + 0.0);
                    }
                  }
                  else {
                    *ppuVar10 = pbVar12 + 8;
                  }
                }
                else {
                  *ppuVar10 = pbVar12;
                }
              }
              else if (fVar20 <= fVar21) {
                if (fVar17 <= fVar18) {
                  ppuStack_348 = ppuVar10 + 3;
                  fVar16 = *(float *)((int)afStack_50c + uVar14 + 0x18);
                  ppuVar10[3] = pbVar12 + 8;
                  ppuVar10[4] = ppuVar10[1];
                  ppuVar10[5] = ppuVar10[2];
                    if (fVar20 < fVar17) {
                      ppuVar10[5] = (u8 *)(int)(fVar16 * (fVar17 - fVar20) + (float)(int)ppuVar10[5] + 0.0);
                    }
                    *ppuVar10 = pbVar12;
                    if (fVar21 < fVar18) {
                      ppuVar10[1] = (u8 *)(int)(fVar16 * (fVar21 - fVar18) + (float)(int)ppuVar10[1] + 0.0);
                    }
                }
                else {
                  *ppuVar10 = pbVar12;
                }
              }
              else {
                *ppuVar10 = pbVar12 + 8;
              }
              puVar6 = *ppuStack_348;
              ppuVar10 = ppuStack_348;
              bVar1 = puVar6[1];
            }
            uVar14 = (u32)*(u16 *)(*ppuVar10 + 2);
            uVar15 = uVar14 + bVar1;
            for (; uVar14 < uVar15; uVar14 = uVar14 + 1 & 0xffff) {
              uStack_528 = uVar14;
              if (*(int *)(iVar3 + 0x24) != 0) {
                uStack_528 = (u32)*(u16 *)(*(int *)(iVar3 + 0x24) + uVar14 * 2);
              }
              puVar13 = (u16 *)(iVar4 + uStack_528 * 8);
              pfStack_524 = (float *)(iVar5 + (u32)*puVar13 * 0xc);
              pfStack_520 = (float *)(iVar5 + (u32)puVar13[1] * 0xc);
              fVar16 = *pfStack_524;
              fVar20 = pfStack_524[2];
              fVar18 = pfStack_524[1];
              pfStack_51c = (float *)(iVar5 + (u32)puVar13[2] * 0xc);
              fVar28 = *pfStack_520 - fVar16;
              fVar29 = pfStack_520[2] - fVar20;
              fVar23 = *pfStack_51c - fVar16;
              fVar27 = pfStack_520[1] - fVar18;
              fVar25 = pfStack_51c[2] - fVar20;
              fVar26 = pfStack_51c[1] - fVar18;
              fVar19 = afStack_340[4] * fVar25 - afStack_340[5] * fVar26;
              fVar17 = afStack_340[5] * fVar23 - afStack_340[3] * fVar25;
              fVar24 = afStack_340[3] * fVar26 - afStack_340[4] * fVar23;
              fVar21 = fVar29 * fVar24 + fVar28 * fVar19 + fVar27 * fVar17;
              bVar7 = 0;
              if (1e-08 < fVar21) {
                fVar30 = -fVar21 * 1e-05;
                fVar18 = afStack_340[1] - fVar18;
                fVar16 = afStack_340[0] - fVar16;
                fVar20 = afStack_340[2] - fVar20;
                fVar17 = fVar20 * fVar24 + fVar16 * fVar19 + fVar18 * fVar17;
                fVar19 = fVar21 - fVar30;
                bVar8 = 0;
                if ((fVar30 <= fVar17) && (bVar8 = 1, fVar19 < fVar17)) {
                  bVar8 = 0;
                }
                bVar7 = 0;
                if (bVar8) {
                  fVar22 = fVar18 * fVar29 - fVar20 * fVar27;
                  fVar24 = fVar20 * fVar28 - fVar16 * fVar29;
                  fVar18 = fVar16 * fVar27 - fVar18 * fVar28;
                  fVar20 = afStack_340[5] * fVar18 +
                           afStack_340[3] * fVar22 + afStack_340[4] * fVar24;
                  bVar8 = 0;
                  if ((fVar30 <= fVar20) && (bVar8 = 1, fVar19 < fVar17 + fVar20)) {
                    bVar8 = 0;
                  }
                  bVar7 = 0;
                  if (bVar8) {
                    unaff_f20 = fVar25 * fVar18 + fVar23 * fVar22 + fVar26 * fVar24;
                    bVar7 = 0;
                    if ((fVar30 <= unaff_f20) && (bVar7 = 1, fVar19 < unaff_f20)) {
                      bVar7 = 0;
                    }
                    if (bVar7) {
                      unaff_f20 = unaff_f20 / fVar21;
                    }
                  }
                }
              }
              if (bVar7) {
                fStack_534 = *pfStack_524;
                fStack_530 = pfStack_524[1];
                fStack_52c = pfStack_524[2];
                fVar19 = *pfStack_520 - *pfStack_524;
                fVar21 = *pfStack_51c - *pfStack_524;
                fVar17 = pfStack_520[2] - pfStack_524[2];
                fVar16 = pfStack_520[1] - pfStack_524[1];
                fVar20 = pfStack_51c[2] - pfStack_524[2];
                fVar18 = pfStack_51c[1] - pfStack_524[1];
                fStack_540 = fVar16 * fVar20 - fVar17 * fVar18;
                fStack_53c = fVar17 * fVar21 - fVar19 * fVar20;
                fStack_538 = fVar19 * fVar18 - fVar16 * fVar21;
                fVar20 = SQRT(fStack_538 * fStack_538 +
                              fStack_540 * fStack_540 + fStack_53c * fStack_53c);
                if (0.0 < fVar20) {
                  fVar20 = 1.0 / fVar20;
                }
                fStack_540 = fStack_540 * fVar20;
                fStack_53c = fStack_53c * fVar20;
                fStack_538 = fStack_538 * fVar20;
                lVar11 = (*param_3)(unaff_f20,param_2,piVar2,&fStack_540,param_4);
                if (lVar11 == 0) {
                  return;
                }
              }
            }
          } while (&puStack_4d4 < ppuStack_348);
        }
      }
    } while (aiStack_310 < piStack_4);
  }
  return;
}

// FUN_004606B0 NONMATCHING

void FUN_004606b0(int param_1,u64 param_2,code *param_3,u32 param_4)

{
  char cVar1;
  u16 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  u8 *puVar7;
  u8 **ppuVar8;
  u16 *puVar9;
  float *pfVar10;
  long lVar11;
  u16 uVar12;
  float *pfVar13;
  u32 uVar14;
  u32 uVar15;
  u8 *pbVar16;
  int iVar17;
  u32 uVar18;
  u32 uVar19;
  u32 uVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  u8 *puStack_2c0;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  u32 uStack_288;
  float *pfStack_284;
  float *pfStack_280;
  float *pfStack_27c;
  int iStack_270;
  float afStack_26c [12];
  u8 uStack_23c;
  u8 uStack_23b;
  u16 uStack_23a;
  u8 *puStack_234;
  u32 uStack_230;
  u8 *apuStack_22c [64];
  u8 **ppuStack_12c;
  float afStack_120 [6];
  int iStack_108;
  int aiStack_104 [64];
  int *piStack_4;
  
  pfVar13 = (float *)param_2;
  piStack_4 = aiStack_104;
  afStack_120[0] = *pfVar13;
  afStack_120[1] = pfVar13[1];
  afStack_120[2] = pfVar13[2];
  afStack_120[3] = pfVar13[3];
  afStack_120[4] = pfVar13[4];
  afStack_120[5] = pfVar13[5];
  iStack_108 = *(int *)(param_1 + 0x1c);
  if (&iStack_108 < piStack_4) {
    do {
      piVar3 = piStack_4;
      piStack_4 = piStack_4 + -1;
      piVar3 = (int *)piVar3[-1];
      iVar4 = *piVar3;
      while (-1 < iVar4) {
        if (*(float *)((int)afStack_120 + *piVar3) < (float)piVar3[5]) {
          *piStack_4 = piVar3[2];
        }
        else {
          *piStack_4 = piVar3[3];
          if (*(float *)((int)afStack_120 + *piVar3 + 0xc) <= (float)piVar3[4]) {
            piStack_4 = piStack_4 + 1;
            *piStack_4 = piVar3[2];
          }
        }
        piVar3 = (int *)*piStack_4;
        iVar4 = *piVar3;
      }
      iVar4 = *(int *)((int)piVar3 + DAT_007ce72c);
      if (iVar4 != 0) {
        iVar5 = piVar3[1];
        iVar6 = piVar3[2];
        if ((((*pfVar13 < *(float *)(iVar4 + 0x10)) || (pfVar13[1] < *(float *)(iVar4 + 0x14))) ||
            (pfVar13[2] < *(float *)(iVar4 + 0x18))) ||
           (((*(float *)(iVar4 + 4) < pfVar13[3] || (*(float *)(iVar4 + 8) < pfVar13[4])) ||
            (*(float *)(iVar4 + 0xc) < pfVar13[5])))) {
          ppuStack_12c = &puStack_234;
        }
        else {
          uStack_23b = 0xff;
          uStack_23a = 0;
          if (*(short *)(iVar4 + 0x1e) == 0) {
            uStack_23b = (char)*(u16 *)(iVar4 + 0x1c);
          }
          afStack_26c[0] = *pfVar13;
          afStack_26c[1] = pfVar13[1];
          afStack_26c[2] = pfVar13[2];
          afStack_26c[3] = pfVar13[3];
          afStack_26c[4] = pfVar13[4];
          afStack_26c[5] = pfVar13[5];
          afStack_26c[6] = *pfVar13;
          afStack_26c[7] = pfVar13[1];
          afStack_26c[8] = pfVar13[2];
          afStack_26c[9] = pfVar13[3];
          afStack_26c[10] = pfVar13[4];
          puStack_234 = &uStack_23c;
          afStack_26c[0xb] = pfVar13[5];
          if (*(float *)(iVar4 + 0x14) < pfVar13[4]) {
            uVar15 = 4;
          }
          else {
            uVar15 = 0;
          }
          if (*(float *)(iVar4 + 0x18) < pfVar13[5]) {
            uVar20 = 0x10;
          }
          else {
            uVar20 = 0;
          }
          if (*pfVar13 < *(float *)(iVar4 + 4)) {
            uVar19 = 2;
          }
          else {
            uVar19 = 0;
          }
          if (pfVar13[1] < *(float *)(iVar4 + 8)) {
            uVar18 = 8;
          }
          else {
            uVar18 = 0;
          }
          if (pfVar13[2] < *(float *)(iVar4 + 0xc)) {
            uVar14 = 0x20;
          }
          else {
            uVar14 = 0;
          }
          ppuStack_12c = apuStack_22c;
          uStack_230 = uVar14 | uVar18 | uVar19 | uVar20 | *(float *)(iVar4 + 0x10) < pfVar13[3] |
                                                           uVar15;
          iStack_270 = iVar4;
        }
        if (&puStack_234 < ppuStack_12c) {
          do {
            ppuStack_12c = ppuStack_12c + -2;
LAB_00460a2c:
            ppuVar8 = ppuStack_12c;
            puVar7 = *ppuStack_12c;
            uVar12 = (u16)(u8)puVar7[1];
            if (uVar12 == 0xff) {
              if (ppuStack_12c[1] != (u8 *)0x0) goto code_r0x00460a60;
              iVar17 = *(int *)(iStack_270 + 0x20) + (u32)*(u16 *)(puVar7 + 2) * 0x10;
              cVar1 = *(char *)(iVar17 + 1);
              iVar21 = iVar17;
              while (cVar1 == -1) {
                iVar21 = *(int *)(iStack_270 + 0x20) + (u32)*(u16 *)(iVar21 + 2) * 0x10;
                cVar1 = *(char *)(iVar21 + 1);
              }
              uVar12 = (u16)*(u8 *)(iVar17 + 9);
              iVar17 = iVar17 + 8;
              if (uVar12 == 0xff) {
                do {
                  iVar17 = *(int *)(iStack_270 + 0x20) + (u32)*(u16 *)(iVar17 + 2) * 0x10;
                  uVar12 = (u16)*(u8 *)(iVar17 + 9);
                  iVar17 = iVar17 + 8;
                } while (uVar12 == 0xff);
              }
              uVar2 = *(u16 *)(iVar21 + 2);
              puStack_2c0 = (u8 *)0x0;
              uVar12 = (*(short *)(iVar17 + 2) + uVar12) - uVar2;
            }
            else {
              puStack_2c0 = ppuStack_12c[1];
              uVar2 = *(u16 *)(puVar7 + 2);
            }
            for (uVar15 = (u32)uVar2; uVar15 < (u32)uVar2 + (u32)uVar12;
                uVar15 = uVar15 + 1 & 0xffff) {
              uVar20 = uVar15;
              if (*(int *)(iVar4 + 0x24) != 0) {
                uVar20 = (u32)*(u16 *)(*(int *)(iVar4 + 0x24) + uVar15 * 2);
              }
              puVar9 = (u16 *)(iVar5 + uVar20 * 8);
              pfVar22 = (float *)(iVar6 + (u32)*puVar9 * 0xc);
              pfVar23 = (float *)(iVar6 + (u32)puVar9[1] * 0xc);
              pfVar10 = (float *)(iVar6 + (u32)puVar9[2] * 0xc);
              if (puStack_2c0 == (u8 *)0x0) {
                fStack_294 = *pfVar22;
LAB_00460be8:
                fStack_290 = pfVar22[1];
                fStack_28c = pfVar22[2];
                fVar29 = *pfVar23 - *pfVar22;
                fVar25 = *pfVar10 - *pfVar22;
                fVar28 = pfVar23[2] - pfVar22[2];
                fVar27 = pfVar23[1] - pfVar22[1];
                fVar24 = pfVar10[2] - pfVar22[2];
                fVar26 = pfVar10[1] - pfVar22[1];
                fStack_2a0 = fVar27 * fVar24 - fVar28 * fVar26;
                fStack_29c = fVar28 * fVar25 - fVar29 * fVar24;
                fStack_298 = fVar29 * fVar26 - fVar27 * fVar25;
                fVar24 = SQRT(fStack_298 * fStack_298 +
                              fStack_2a0 * fStack_2a0 + fStack_29c * fStack_29c);
                if (0.0 < fVar24) {
                  fVar24 = 1.0 / fVar24;
                }
                fStack_2a0 = fStack_2a0 * fVar24;
                fStack_29c = fStack_29c * fVar24;
                fStack_298 = fStack_298 * fVar24;
                uStack_288 = uVar20;
                pfStack_284 = pfVar22;
                pfStack_280 = pfVar23;
                pfStack_27c = pfVar10;
                lVar11 = (*param_3)(0,param_2,piVar3,&fStack_2a0,param_4);
                if (lVar11 == 0) {
                  return;
                }
              }
              else {
                lVar11 = ((code)FUN_004bb5d0)(param_2,pfVar22,pfVar23,pfVar10);
                if (lVar11 != 0) {
                  fStack_294 = *pfVar22;
                  goto LAB_00460be8;
                }
              }
            }
          } while (&puStack_234 < ppuStack_12c);
        }
      }
    } while (&iStack_108 < piStack_4);
  }
  return;
code_r0x00460a60:
  pbVar16 = (u8 *)(*(int *)(iStack_270 + 0x20) + (u32)*(u16 *)(puVar7 + 2) * 0x10);
  uVar15 = *pbVar16 & 0xc;
  if (*(float *)((int)afStack_26c + uVar15) < *(float *)(pbVar16 + 0xc)) {
    *ppuStack_12c = pbVar16;
  }
  else {
    *ppuStack_12c = pbVar16 + 8;
    if (*(float *)((int)afStack_26c + uVar15 + 0xc) <= *(float *)(pbVar16 + 4)) {
      ppuStack_12c = ppuStack_12c + 2;
      ppuVar8[2] = pbVar16;
      ppuVar8[3] = ppuVar8[1];
      if (*(float *)(pbVar16 + 4) <= *(float *)((int)afStack_26c + uVar15 + 0x18)) {
        ppuVar8[3] = (u8 *)((u32)ppuVar8[3] & ~(2 << (uVar15 >> 1)));
      }
      if (*(float *)((int)afStack_26c + uVar15 + 0x24) <= *(float *)(pbVar16 + 0xc)) {
        ppuVar8[1] = (u8 *)((u32)ppuVar8[1] & ~(1 << (uVar15 >> 1)));
      }
    }
  }
  goto LAB_00460a2c;
}

// FUN_00460EC0 NONMATCHING

void FUN_00460ec0(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5
                 )

{
  char cVar1;
  u16 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  u8 *puVar7;
  u8 **ppuVar8;
  u16 *puVar9;
  float *pfVar10;
  long lVar11;
  u16 uVar12;
  float *pfVar13;
  u32 uVar14;
  u32 uVar15;
  u8 *pbVar16;
  int iVar17;
  u32 uVar18;
  u32 uVar19;
  u32 uVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  u8 *puStack_300;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  u32 uStack_2c8;
  float *pfStack_2c4;
  float *pfStack_2c0;
  float *pfStack_2bc;
  int iStack_2b0;
  float afStack_2ac [12];
  u8 uStack_27c;
  u8 uStack_27b;
  u16 uStack_27a;
  u8 *puStack_274;
  u32 uStack_270;
  u8 *apuStack_26c [64];
  u8 **ppuStack_16c;
  float afStack_160 [6];
  int iStack_148;
  int aiStack_144 [64];
  int *piStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_4;
  
  pfVar13 = (float *)param_2;
  fVar24 = pfVar13[1];
  fVar27 = pfVar13[2];
  fVar31 = pfVar13[3];
  fVar28 = *pfVar13;
  piStack_44 = aiStack_144;
  fVar33 = fVar31 * 0.57;
  fVar38 = fVar28 - fVar31;
  fVar39 = fVar24 - fVar31;
  fVar36 = fVar28 - fVar33;
  afStack_160[3] = fVar38;
  fVar35 = fVar27 - fVar33;
  fStack_20 = fVar28 + fVar31;
  fVar37 = fVar27 - fVar31;
  afStack_160[0] = fVar28 + fVar31;
  afStack_160[4] = fVar39;
  afStack_160[5] = fVar37;
  fStack_14 = fVar38;
  fStack_10 = fVar39;
  fVar41 = fVar27 + fVar31;
  fVar40 = fVar24 + fVar31;
  fStack_40 = fVar28 + fVar33;
  afStack_160[1] = fVar40;
  afStack_160[2] = fVar41;
  fStack_c = fVar37;
  fVar28 = fVar24 - fVar33;
  fVar24 = fVar24 + fVar33;
  iStack_148 = *(int *)(param_1 + 0x1c);
  fVar27 = fVar27 + fVar33;
  fStack_34 = fVar36;
  fStack_1c = fVar40;
  fStack_18 = fVar41;
  fStack_30 = fVar28;
  fStack_2c = fVar35;
  fStack_3c = fVar24;
  fStack_38 = fVar27;
  if (&iStack_148 < piStack_44) {
    do {
      piVar3 = piStack_44;
      piStack_44 = piStack_44 + -1;
      piVar3 = (int *)piVar3[-1];
      iVar4 = *piVar3;
      while (-1 < iVar4) {
        if (*(float *)((int)afStack_160 + *piVar3) < (float)piVar3[5]) {
          *piStack_44 = piVar3[2];
        }
        else {
          *piStack_44 = piVar3[3];
          if (*(float *)((int)afStack_160 + *piVar3 + 0xc) <= (float)piVar3[4]) {
            piStack_44 = piStack_44 + 1;
            *piStack_44 = piVar3[2];
          }
        }
        piVar3 = (int *)*piStack_44;
        iVar4 = *piVar3;
      }
      iVar4 = *(int *)((int)piVar3 + iGpffffba3c);
      if (iVar4 != 0) {
        fVar34 = *(float *)(iVar4 + 0x10);
        fVar33 = *pfVar13;
        if (fVar33 < fVar34) {
          fVar33 = fVar34 - fVar33;
        }
        else if (*(float *)(iVar4 + 4) < fVar33) {
          fVar33 = fVar33 - *(float *)(iVar4 + 4);
        }
        else {
          fVar33 = 0.0;
        }
        fVar29 = *(float *)(iVar4 + 0x14);
        fVar25 = pfVar13[1];
        if (fVar25 < fVar29) {
          fVar25 = fVar29 - fVar25;
        }
        else if (*(float *)(iVar4 + 8) < fVar25) {
          fVar25 = fVar25 - *(float *)(iVar4 + 8);
        }
        else {
          fVar25 = 0.0;
        }
        fVar30 = *(float *)(iVar4 + 0x18);
        fVar26 = pfVar13[2];
        fVar32 = 0.0;
        if (fVar26 < fVar30) {
          fVar32 = fVar30 - fVar26;
        }
        else if (*(float *)(iVar4 + 0xc) < fVar26) {
          fVar32 = fVar26 - *(float *)(iVar4 + 0xc);
        }
        if (fVar32 * fVar32 + fVar25 * fVar25 + fVar33 * fVar33 + 0.0 + 0.0 <=
            pfVar13[3] * pfVar13[3]) {
          iVar5 = piVar3[1];
          iVar6 = piVar3[2];
          if ((((fStack_20 < fVar34) || (fVar40 < fVar29)) || (fVar41 < fVar30)) ||
             (((*(float *)(iVar4 + 4) < fVar38 || (*(float *)(iVar4 + 8) < fVar39)) ||
              (*(float *)(iVar4 + 0xc) < fVar37)))) {
            ppuStack_16c = &puStack_274;
          }
          else {
            uStack_27b = 0xff;
            uStack_27a = 0;
            if (*(short *)(iVar4 + 0x1e) == 0) {
              uStack_27b = (char)*(u16 *)(iVar4 + 0x1c);
            }
            afStack_2ac[1] = fVar40;
            puStack_274 = &uStack_27c;
            afStack_2ac[2] = fVar41;
            afStack_2ac[3] = fVar38;
            afStack_2ac[4] = fVar39;
            afStack_2ac[5] = fVar37;
            afStack_2ac[7] = fVar24;
            afStack_2ac[8] = fVar27;
            afStack_2ac[0] = fStack_20;
            afStack_2ac[6] = fStack_40;
            afStack_2ac[9] = fVar36;
            afStack_2ac[10] = fVar28;
            afStack_2ac[0xb] = fVar35;
            if (*(float *)(iVar4 + 0x14) < fVar28) {
              uVar15 = 4;
            }
            else {
              uVar15 = 0;
            }
            if (*(float *)(iVar4 + 0x18) < fVar35) {
              uVar20 = 0x10;
            }
            else {
              uVar20 = 0;
            }
            if (fStack_40 < *(float *)(iVar4 + 4)) {
              uVar19 = 2;
            }
            else {
              uVar19 = 0;
            }
            if (fVar24 < *(float *)(iVar4 + 8)) {
              uVar18 = 8;
            }
            else {
              uVar18 = 0;
            }
            if (fVar27 < *(float *)(iVar4 + 0xc)) {
              uVar14 = 0x20;
            }
            else {
              uVar14 = 0;
            }
            ppuStack_16c = apuStack_26c;
            uStack_270 = uVar14 | uVar18 | uVar19 | uVar20 | *(float *)(iVar4 + 0x10) < fVar36 |
                                                             uVar15;
            iStack_2b0 = iVar4;
          }
          if (&puStack_274 < ppuStack_16c) {
            do {
              ppuStack_16c = ppuStack_16c + -2;
LAB_004613e8:
              ppuVar8 = ppuStack_16c;
              puVar7 = *ppuStack_16c;
              uVar12 = (u16)(u8)puVar7[1];
              if (uVar12 == 0xff) {
                if (ppuStack_16c[1] != (u8 *)0x0) goto code_r0x0046141c;
                iVar17 = *(int *)(iStack_2b0 + 0x20) + (u32)*(u16 *)(puVar7 + 2) * 0x10;
                cVar1 = *(char *)(iVar17 + 1);
                iVar21 = iVar17;
                while (cVar1 == -1) {
                  iVar21 = *(int *)(iStack_2b0 + 0x20) + (u32)*(u16 *)(iVar21 + 2) * 0x10;
                  cVar1 = *(char *)(iVar21 + 1);
                }
                uVar12 = (u16)*(u8 *)(iVar17 + 9);
                iVar17 = iVar17 + 8;
                if (uVar12 == 0xff) {
                  do {
                    iVar17 = *(int *)(iStack_2b0 + 0x20) + (u32)*(u16 *)(iVar17 + 2) * 0x10;
                    uVar12 = (u16)*(u8 *)(iVar17 + 9);
                    iVar17 = iVar17 + 8;
                  } while (uVar12 == 0xff);
                }
                uVar2 = *(u16 *)(iVar21 + 2);
                puStack_300 = (u8 *)0x0;
                uVar12 = (*(short *)(iVar17 + 2) + uVar12) - uVar2;
              }
              else {
                puStack_300 = ppuStack_16c[1];
                uVar2 = *(u16 *)(puVar7 + 2);
              }
              for (uVar15 = (u32)uVar2; uVar15 < (u32)uVar2 + (u32)uVar12;
                  uVar15 = uVar15 + 1 & 0xffff) {
                uVar20 = uVar15;
                if (*(int *)(iVar4 + 0x24) != 0) {
                  uVar20 = (u32)*(u16 *)(*(int *)(iVar4 + 0x24) + uVar15 * 2);
                }
                puVar9 = (u16 *)(iVar5 + uVar20 * 8);
                pfVar22 = (float *)(iVar6 + (u32)*puVar9 * 0xc);
                pfVar23 = (float *)(iVar6 + (u32)puVar9[1] * 0xc);
                pfVar10 = (float *)(iVar6 + (u32)puVar9[2] * 0xc);
                if (puStack_300 == (u8 *)0x0) {
                  fVar30 = *pfVar23 - *pfVar22;
                  fVar29 = pfVar23[1] - pfVar22[1];
                  fVar34 = *pfVar10 - *pfVar22;
                  fVar26 = pfVar23[2] - pfVar22[2];
                  fVar33 = pfVar10[2] - pfVar22[2];
                  fVar25 = pfVar10[1] - pfVar22[1];
                  fStack_2e0 = fVar29 * fVar33 - fVar26 * fVar25;
                  fStack_2dc = fVar26 * fVar34 - fVar30 * fVar33;
                  fStack_2d8 = fVar30 * fVar25 - fVar29 * fVar34;
                  fVar33 = SQRT(fStack_2d8 * fStack_2d8 +
                                fStack_2e0 * fStack_2e0 + fStack_2dc * fStack_2dc);
                  if (0.0 < fVar33) {
                    fVar33 = 1.0 / fVar33;
                  }
                  fStack_2e0 = fStack_2e0 * fVar33;
                  fStack_2dc = fStack_2dc * fVar33;
                  fStack_2d8 = fStack_2d8 * fVar33;
                  fStack_4 = (pfVar13[2] - pfVar22[2]) * fStack_2d8 +
                             (*pfVar13 - *pfVar22) * fStack_2e0 +
                             (pfVar13[1] - pfVar22[1]) * fStack_2dc;
LAB_004616d0:
                  fStack_4 = fStack_4 * (1.0 / fVar31);
                  fStack_2d4 = *pfVar22;
                  fStack_2d0 = pfVar22[1];
                  fStack_2cc = pfVar22[2];
                  uStack_2c8 = uVar20;
                  pfStack_2c4 = pfVar22;
                  pfStack_2c0 = pfVar23;
                  pfStack_2bc = pfVar10;
                  lVar11 = (*param_4)(fStack_4,param_3,piVar3,&fStack_2e0,param_5);
                  if (lVar11 == 0) {
                    return;
                  }
                }
                else {
                  lVar11 = ((code)FUN_004bae00)(param_2,pfVar22,pfVar23,pfVar10,&fStack_2e0,&fStack_4);
                  if (lVar11 != 0) goto LAB_004616d0;
                }
              }
            } while (&puStack_274 < ppuStack_16c);
          }
        }
      }
    } while (&iStack_148 < piStack_44);
  }
  return;
code_r0x0046141c:
  pbVar16 = (u8 *)(*(int *)(iStack_2b0 + 0x20) + (u32)*(u16 *)(puVar7 + 2) * 0x10);
  uVar15 = *pbVar16 & 0xc;
  if (*(float *)((int)afStack_2ac + uVar15) < *(float *)(pbVar16 + 0xc)) {
    *ppuStack_16c = pbVar16;
  }
  else {
    *ppuStack_16c = pbVar16 + 8;
    if (*(float *)((int)afStack_2ac + uVar15 + 0xc) <= *(float *)(pbVar16 + 4)) {
      ppuStack_16c = ppuStack_16c + 2;
      ppuVar8[2] = pbVar16;
      ppuVar8[3] = ppuVar8[1];
      if (*(float *)(pbVar16 + 4) <= *(float *)((int)afStack_2ac + uVar15 + 0x18)) {
        ppuVar8[3] = (u8 *)((u32)ppuVar8[3] & ~(2 << (uVar15 >> 1)));
      }
      if (*(float *)((int)afStack_2ac + uVar15 + 0x24) <= *(float *)(pbVar16 + 0xc)) {
        ppuVar8[1] = (u8 *)((u32)ppuVar8[1] & ~(1 << (uVar15 >> 1)));
      }
    }
  }
  goto LAB_004613e8;
}

// FUN_00461900
asm void FUN_00461900(int param_1,float *param_2,u64 param_3,code *param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x00c0f02d
  .word 0x7fb60070
  .word 0x0080b82d
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x00a0a82d
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x0000982d
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xafa700bc
  .word 0xe7b60008
  .word 0xafa800b8
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c86005c
  .word 0xc4a5000c
  .word 0xc4a40000
  .word 0x8c830010
  .word 0xc4a30010
  .word 0x8c94002c
  .word 0xc4a20004
  .word 0xc4a10014
  .word 0xc4a00008
  .word 0x8cd00014
  .word 0x46042d01
  .word 0x0003082a
  .word 0x46021d41
  .word 0x1020007f
  .word 0x46000d81
  .word 0x27b600cc
  .word 0x27b200c4
  .word 0x27b100c8
  .word 0x96860000
  .word 0x3c03322b
  .word 0x3463cc77
  .word 0x96840002
  .word 0x44830800
  .word 0x96870004
  .word 0x00061840
  .word 0x00663021
  .word 0x00041840
  .word 0x00641821
  .word 0x00062080
  .word 0x00031880
  .word 0x00073040
  .word 0x02042021
  .word 0x00c73021
  .word 0x02031821
  .word 0x00063080
  .word 0x02063821
  .word 0xc4870000
  .word 0xc4e00000
  .word 0xc4850008
  .word 0xc4620008
  .word 0xc4640000
  .word 0xc4860004
  .word 0xc4630004
  .word 0x460702c1
  .word 0x46051401
  .word 0xc4e00008
  .word 0xc4e20004
  .word 0x46061bc1
  .word 0x46050341
  .word 0x46061301
  .word 0x460da81a
  .word 0x460cb21d
  .word 0x460bb01a
  .word 0x460da25d
  .word 0x460ca01a
  .word 0x460baa9d
  .word 0x46072381
  .word 0x4609781a
  .word 0x4608701e
  .word 0x460a801c
  .word 0x46010036
  .word 0x45000002
  .word 0x24050001
  .word 0x0000282d
  .word 0x10a00044
  .word 0x00000000
  .word 0x3c063727
  .word 0x24050001
  .word 0x34c6c5ac
  .word 0x44861000
  .word 0x46000047
  .word 0x46011482
  .word 0xc6a20004
  .word 0xc6a30000
  .word 0xc6a10008
  .word 0x46061181
  .word 0x46071901
  .word 0x4609301a
  .word 0x46050841
  .word 0x4608201e
  .word 0x460a095c
  .word 0x46122834
  .word 0x45000002
  .word 0x46120441
  .word 0x0000282d
  .word 0x10a00005
  .word 0x00000000
  .word 0x46112836
  .word 0x45010002
  .word 0x24050001
  .word 0x0000282d
  .word 0x10a00029
  .word 0x00000000
  .word 0x4610301a
  .word 0x460f089d
  .word 0x460e081a
  .word 0x461020dd
  .word 0x460f201a
  .word 0x460e311d
  .word 0x4603a81a
  .word 0x4602a01e
  .word 0x4604b05c
  .word 0x46120834
  .word 0x45000002
  .word 0x24050001
  .word 0x0000282d
  .word 0x10a00006
  .word 0x00000000
  .word 0x46012840
  .word 0x46110836
  .word 0x45010002
  .word 0x24050001
  .word 0x0000282d
  .word 0x10a00013
  .word 0x00000000
  .word 0x4603601a
  .word 0x4602581e
  .word 0x46046ddc
  .word 0x4612b834
  .word 0x45000002
  .word 0x24050001
  .word 0x0000282d
  .word 0x10a00005
  .word 0x00000000
  .word 0x4611b836
  .word 0x45010002
  .word 0x24050001
  .word 0x0000282d
  .word 0x10a00004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600bdc3
  .word 0x14a00009
  .word 0x00000000
  .word 0x8ee30010
  .word 0x26730001
  .word 0x0263182a
  .word 0x1460ff87
  .word 0x26940008
  .word 0x00000000
  .word 0x1000004b
  .word 0xdfbf00a0
  .word 0xc4830000
  .word 0x27a200d8
  .word 0xc4810004
  .word 0xc4800008
  .word 0x44801000
  .word 0xac530000
  .word 0xe6c30000
  .word 0x27a200dc
  .word 0xac440000
  .word 0xe6c10004
  .word 0x27a200e0
  .word 0xac430000
  .word 0xe6c00008
  .word 0x27a200e4
  .word 0xac470000
  .word 0xc4860000
  .word 0xc4650000
  .word 0xc4e00000
  .word 0xc4830008
  .word 0xc4610008
  .word 0xc4880004
  .word 0xc4640004
  .word 0x46062a41
  .word 0x46060141
  .word 0x46030981
  .word 0xc4e00008
  .word 0xc4e10004
  .word 0x460821c1
  .word 0x46030001
  .word 0x46080901
  .word 0x4600381a
  .word 0x460430dd
  .word 0x4605301a
  .word 0x4600485d
  .word 0x4604481a
  .word 0x4605381d
  .word 0x4601081a
  .word 0x4603181e
  .word 0xe6200000
  .word 0xe7a300c0
  .word 0x4600001c
  .word 0x460000c4
  .word 0xe6410000
  .word 0x00000000
  .word 0x00000000
  .word 0x46021836
  .word 0x45010009
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460300c3
  .word 0x00000000
  .word 0x00000000
  .word 0x10000001
  .word 0x00000000
  .word 0x8fa600b8
  .word 0xc7a200c0
  .word 0x8fa200bc
  .word 0xc6410000
  .word 0x03c0202d
  .word 0xc6200000
  .word 0x27a500c0
  .word 0x4600bb06
  .word 0x46031082
  .word 0x46030842
  .word 0x46030002
  .word 0xe7a200c0
  .word 0xe6410000
  .word 0x0040f809
  .word 0xe6200000
  .word 0x1440ffb0
  .word 0x00000000
  .word 0xdfbf00a0
  .word 0xc7b7000c
  .word 0x7bbe0090
  .word 0xc7b60008
  .word 0x7bb70080
  .word 0xc7b50004
  .word 0x7bb60070
  .word 0xc7b40000
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd00f0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00461D00
asm void FUN_00461d00(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5
                 )
{
  .set noreorder
  .word 0x27bdff10
  .word 0x3c033f80
  .word 0xffbf00a0
  .word 0xc4a0000c
  .word 0x7fbe0090
  .word 0x44830800
  .word 0x7fb70080
  .word 0x00a0f02d
  .word 0x7fb60070
  .word 0x0080b82d
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x0000a02d
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0xafa600bc
  .word 0x46000d03
  .word 0x8c85005c
  .word 0x8c830010
  .word 0xafa700b8
  .word 0xafa800b4
  .word 0x8c95002c
  .word 0x00000000
  .word 0x0003182a
  .word 0x14600003
  .word 0x8cb30014
  .word 0x1000003b
  .word 0xdfbf00a0
  .word 0x27b600cc
  .word 0x96a60000
  .word 0x03c0202d
  .word 0x96a50002
  .word 0x27a800c0
  .word 0x96a30004
  .word 0x27a900ec
  .word 0x00061040
  .word 0x00463021
  .word 0x00051040
  .word 0x00451021
  .word 0x00021080
  .word 0x00062880
  .word 0x02628821
  .word 0x02659021
  .word 0x00031040
  .word 0x0240282d
  .word 0x00431021
  .word 0x0220302d
  .word 0x00021080
  .word 0x02628021
  .word 0x0c12eb80
  .word 0x0200382d
  .word 0x14400008
  .word 0x00000000
  .word 0x8ee30010
  .word 0x26940001
  .word 0x0283182a
  .word 0x1460ffe4
  .word 0x26b50008
  .word 0x1000ffdf
  .word 0x00000000
  .word 0xc7a000ec
  .word 0x27a200dc
  .word 0x8fa400bc
  .word 0x27a500c0
  .word 0x8fa600b4
  .word 0x46140002
  .word 0xe7a000ec
  .word 0xc6420000
  .word 0xc6410004
  .word 0xc6400008
  .word 0xc7ac00ec
  .word 0xac520000
  .word 0xe6c20000
  .word 0x27a200e0
  .word 0xac510000
  .word 0xe6c10004
  .word 0x27a200e4
  .word 0xac500000
  .word 0x27a200d8
  .word 0xac540000
  .word 0x8fa200b8
  .word 0x0040f809
  .word 0xe6c00008
  .word 0x1440ffe1
  .word 0x00000000
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
  .word 0x27bd00f0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00461EA0 NONMATCHING

void FUN_00461ea0(int param_1,float *param_2,u32 param_3,code *param_4,u32 param_5)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u8 *puVar5;
  u8 bVar6;
  u8 bVar7;
  u8 **ppuVar8;
  long lVar9;
  u8 *pbVar10;
  u16 *puVar11;
  u32 uVar12;
  u32 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float in_f23;
  float fVar31;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  u32 uStack_1e8;
  float *pfStack_1e4;
  float *pfStack_1e0;
  float *pfStack_1dc;
  int iStack_1d0;
  float afStack_1cc [12];
  u8 uStack_19c;
  u8 uStack_19b;
  u16 uStack_19a;
  u8 *puStack_194;
  float fStack_190;
  float fStack_18c;
  u8 *apuStack_188 [96];
  u8 **ppuStack_8;
  
  iVar2 = *(int *)(param_1 + iGpffffba38);
  if (iVar2 == 0) {
    ((code)FUN_00461900)();
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c);
    iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + 0x14);
    fVar30 = param_2[3] - *param_2;
    fVar29 = param_2[4] - param_2[1];
    uStack_19b = 0xff;
    uStack_19a = 0;
    fVar31 = param_2[5] - param_2[2];
    if (*(short *)(iVar2 + 0x1e) == 0) {
      uStack_19b = (char)*(u16 *)(iVar2 + 0x1c);
    }
    afStack_1cc[0] = *param_2;
    afStack_1cc[1] = param_2[1];
    afStack_1cc[2] = param_2[2];
    afStack_1cc[6] = 0.0;
    afStack_1cc[3] = param_2[3] - *param_2;
    afStack_1cc[4] = param_2[4] - param_2[1];
    afStack_1cc[5] = param_2[5] - param_2[2];
    if (afStack_1cc[3] != 0.0) {
      afStack_1cc[6] = 1.0 / afStack_1cc[3];
    }
    afStack_1cc[7] = 0.0;
    if (afStack_1cc[4] != 0.0) {
      afStack_1cc[7] = 1.0 / afStack_1cc[4];
    }
    afStack_1cc[8] = 0.0;
    if (afStack_1cc[5] != 0.0) {
      afStack_1cc[8] = 1.0 / afStack_1cc[5];
    }
    afStack_1cc[9] = param_2[3];
    fVar15 = afStack_1cc[9];
    if (afStack_1cc[9] < 0.0) {
      fVar15 = -afStack_1cc[9];
    }
    fVar14 = *param_2;
    fVar16 = fVar14;
    if (fVar14 < 0.0) {
      fVar16 = -fVar14;
    }
    if (fVar15 <= fVar16) {
      afStack_1cc[9] = fVar14;
      if (fVar14 < 0.0) {
        afStack_1cc[9] = -fVar14;
      }
    }
    else if (afStack_1cc[9] < 0.0) {
      afStack_1cc[9] = -afStack_1cc[9];
    }
    afStack_1cc[10] = param_2[4];
    fVar15 = afStack_1cc[10];
    if (afStack_1cc[10] < 0.0) {
      fVar15 = -afStack_1cc[10];
    }
    fVar14 = param_2[1];
    fVar16 = fVar14;
    if (fVar14 < 0.0) {
      fVar16 = -fVar14;
    }
    if (fVar15 <= fVar16) {
      afStack_1cc[10] = fVar14;
      if (fVar14 < 0.0) {
        afStack_1cc[10] = -fVar14;
      }
    }
    else if (afStack_1cc[10] < 0.0) {
      afStack_1cc[10] = -afStack_1cc[10];
    }
    afStack_1cc[0xb] = param_2[5];
    fVar15 = afStack_1cc[0xb];
    if (afStack_1cc[0xb] < 0.0) {
      fVar15 = -afStack_1cc[0xb];
    }
    fVar14 = param_2[2];
    fVar16 = fVar14;
    if (fVar14 < 0.0) {
      fVar16 = -fVar14;
    }
    if (fVar15 <= fVar16) {
      afStack_1cc[0xb] = fVar14;
      if (fVar14 < 0.0) {
        afStack_1cc[0xb] = -fVar14;
      }
    }
    else if (afStack_1cc[0xb] < 0.0) {
      afStack_1cc[0xb] = -afStack_1cc[0xb];
    }
    afStack_1cc[0xb] = afStack_1cc[0xb] * 1e-06;
    puStack_194 = &uStack_19c;
    fStack_18c = 1.0;
    ppuStack_8 = apuStack_188;
    fStack_190 = 0.0;
    afStack_1cc[9] = afStack_1cc[9] * 1e-06;
    afStack_1cc[10] = afStack_1cc[10] * 1e-06;
    fVar19 = *(float *)(iVar2 + 0x14) - afStack_1cc[10];
    fVar20 = *(float *)(iVar2 + 8) + afStack_1cc[10];
    fVar18 = *(float *)(iVar2 + 0x10) - afStack_1cc[9];
    fVar16 = *(float *)(iVar2 + 0x18) - afStack_1cc[0xb];
    fVar14 = *(float *)(iVar2 + 4) + afStack_1cc[9];
    fVar15 = *(float *)(iVar2 + 0xc) + afStack_1cc[0xb];
    if (afStack_1cc[6] == 0.0) {
      bVar6 = 0;
      if ((fVar18 <= afStack_1cc[0]) && (afStack_1cc[0] <= fVar14)) {
        bVar6 = 1;
      }
    }
    else {
      fVar18 = afStack_1cc[6] * (fVar18 - afStack_1cc[0]);
      fVar21 = afStack_1cc[6] * (fVar14 - afStack_1cc[0]);
      fVar14 = fVar21;
      if (fVar18 <= fVar21) {
        fVar14 = fVar18;
        fVar18 = fVar21;
      }
      bVar6 = 0;
      if ((0.0 <= fVar18) && (fVar14 <= 1.0)) {
        bVar6 = 1;
      }
      if (bVar6) {
        if (0.0 < fVar14) {
          fStack_190 = fVar14;
        }
        if (1.0 <= fVar18) {
          fStack_18c = 1.0;
        }
        else {
          fStack_18c = fVar18;
        }
      }
    }
    bVar7 = 0;
    if (bVar6) {
      if (afStack_1cc[7] == 0.0) {
        bVar6 = 0;
        if ((fVar19 <= afStack_1cc[1]) && (afStack_1cc[1] <= fVar20)) {
          bVar6 = 1;
        }
      }
      else {
        fVar18 = afStack_1cc[7] * (fVar19 - afStack_1cc[1]);
        fVar19 = afStack_1cc[7] * (fVar20 - afStack_1cc[1]);
        fVar14 = fVar19;
        if (fVar18 <= fVar19) {
          fVar14 = fVar18;
          fVar18 = fVar19;
        }
        bVar6 = 0;
        if ((fStack_190 <= fVar18) && (fVar14 <= fStack_18c)) {
          bVar6 = 1;
        }
        if (bVar6) {
          if (fStack_190 < fVar14) {
            fStack_190 = fVar14;
          }
          if (fStack_18c <= fVar18) {
          }
          else {
            fStack_18c = fVar18;
          }
        }
      }
      bVar7 = 0;
      if (bVar6) {
        if (afStack_1cc[8] == 0.0) {
          bVar7 = 0;
          if ((fVar16 <= afStack_1cc[2]) && (afStack_1cc[2] <= fVar15)) {
            bVar7 = 1;
          }
        }
        else {
          fVar16 = afStack_1cc[8] * (fVar16 - afStack_1cc[2]);
          fVar14 = afStack_1cc[8] * (fVar15 - afStack_1cc[2]);
          fVar15 = fVar14;
          if (fVar16 <= fVar14) {
            fVar15 = fVar16;
            fVar16 = fVar14;
          }
          bVar7 = 0;
          if ((fStack_190 <= fVar16) && (fVar15 <= fStack_18c)) {
            bVar7 = 1;
          }
          if (bVar7) {
            if (fStack_190 < fVar15) {
              fStack_190 = fVar15;
            }
            if (fStack_18c <= fVar16) {
            }
            else {
              fStack_18c = fVar16;
            }
          }
        }
      }
    }
    if (!bVar7) {
      ppuStack_8 = &puStack_194;
    }
    iStack_1d0 = iVar2;
    if (&puStack_194 < ppuStack_8) {
      do {
        ppuVar8 = ppuStack_8;
        ppuStack_8 = ppuStack_8 + -3;
        puVar5 = ppuVar8[-3];
        bVar1 = puVar5[1];
        ppuVar8 = ppuStack_8;
        while (ppuStack_8 = ppuVar8, bVar1 == 0xff) {
          pbVar10 = (u8 *)(*(int *)(iStack_1d0 + 0x20) + (u32)*(u16 *)(puVar5 + 2) * 0x10);
          uVar13 = *pbVar10 & 0xc;
          fVar18 = *(float *)((int)afStack_1cc + uVar13 + 0xc);
          fVar16 = *(float *)((int)afStack_1cc + uVar13 + 0x24);
          fVar19 = *(float *)(pbVar10 + 0xc) - fVar16;
          fVar16 = *(float *)(pbVar10 + 4) + fVar16;
          fVar15 = (float)(int)ppuVar8[2] * fVar18 + *(float *)((int)afStack_1cc + uVar13) + 0.0;
          fVar14 = (float)(int)ppuVar8[1] * fVar18 + *(float *)((int)afStack_1cc + uVar13) + 0.0;
          if (0.0 < fVar18) {
            if (fVar19 <= fVar15) {
              if (fVar14 <= fVar16) {
                ppuStack_8 = ppuVar8 + 3;
                fVar18 = *(float *)((int)afStack_1cc + uVar13 + 0x18);
                ppuVar8[3] = pbVar10;
                ppuVar8[4] = ppuVar8[1];
                ppuVar8[5] = ppuVar8[2];
                if (fVar16 < fVar15) {
                  ppuVar8[5] = (u8 *)(int)(fVar18 * (fVar16 - fVar15) + (float)(int)ppuVar8[5] + 0.0);
                }
                *ppuVar8 = pbVar10 + 8;
                if (fVar14 < fVar19) {
                  ppuVar8[1] = (u8 *)(int)(fVar18 * (fVar19 - fVar14) + (float)(int)ppuVar8[1] + 0.0);
                }
                *ppuVar8 = pbVar10 + 8;
              }
              *ppuVar8 = pbVar10;
            }
          }
          else if (fVar15 <= fVar16) {
            if (fVar19 <= fVar14) {
              ppuStack_8 = ppuVar8 + 3;
              fVar18 = *(float *)((int)afStack_1cc + uVar13 + 0x18);
              ppuVar8[3] = pbVar10 + 8;
              ppuVar8[4] = ppuVar8[1];
              ppuVar8[5] = ppuVar8[2];
              if (fVar15 < fVar19) {
                ppuVar8[5] = (u8 *)(int)(fVar18 * (fVar19 - fVar15) + (float)(int)ppuVar8[5] + 0.0);
              }
              *ppuVar8 = pbVar10;
              if (fVar16 < fVar14) {
                ppuVar8[1] = (u8 *)(int)(fVar18 * (fVar16 - fVar14) + (float)(int)ppuVar8[1] + 0.0);
              }
              *ppuVar8 = pbVar10;
            }
            *ppuVar8 = pbVar10 + 8;
          }
          puVar5 = *ppuStack_8;
          ppuVar8 = ppuStack_8;
          bVar1 = puVar5[1];
        }
        uVar13 = (u32)*(u16 *)(*ppuVar8 + 2);
        uVar12 = uVar13 + bVar1;
        for (; uVar13 < uVar12; uVar13 = uVar13 + 1 & 0xffff) {
          uStack_1e8 = uVar13;
          if (*(int *)(iVar2 + 0x24) != 0) {
            uStack_1e8 = (u32)*(u16 *)(*(int *)(iVar2 + 0x24) + uVar13 * 2);
          }
          puVar11 = (u16 *)(iVar3 + uStack_1e8 * 8);
          pfStack_1e4 = (float *)(iVar4 + (u32)*puVar11 * 0xc);
          pfStack_1e0 = (float *)(iVar4 + (u32)puVar11[1] * 0xc);
          fVar14 = *pfStack_1e4;
          fVar15 = pfStack_1e4[2];
          fVar18 = pfStack_1e4[1];
          pfStack_1dc = (float *)(iVar4 + (u32)puVar11[2] * 0xc);
          fVar26 = *pfStack_1e0 - fVar14;
          fVar28 = pfStack_1e0[2] - fVar15;
          fVar21 = *pfStack_1dc - fVar14;
          fVar25 = pfStack_1e0[1] - fVar18;
          fVar23 = pfStack_1dc[2] - fVar15;
          fVar24 = pfStack_1dc[1] - fVar18;
          fVar20 = fVar29 * fVar23 - fVar31 * fVar24;
          fVar19 = fVar31 * fVar21 - fVar30 * fVar23;
          fVar22 = fVar30 * fVar24 - fVar29 * fVar21;
          fVar16 = fVar28 * fVar22 + fVar26 * fVar20 + fVar25 * fVar19;
          bVar6 = 0;
          if (1e-08 < fVar16) {
            fVar27 = -fVar16 * 1e-05;
            fVar14 = *param_2 - fVar14;
            fVar18 = param_2[1] - fVar18;
            fVar15 = param_2[2] - fVar15;
            fVar19 = fVar15 * fVar22 + fVar14 * fVar20 + fVar18 * fVar19;
            fVar20 = fVar16 - fVar27;
            bVar7 = 0;
            if ((fVar27 <= fVar19) && (bVar7 = 1, fVar20 < fVar19)) {
              bVar7 = 0;
            }
            bVar6 = 0;
            if (bVar7) {
              fVar17 = fVar18 * fVar28 - fVar15 * fVar25;
              fVar22 = fVar15 * fVar26 - fVar14 * fVar28;
              fVar14 = fVar14 * fVar25 - fVar18 * fVar26;
              fVar15 = fVar31 * fVar14 + fVar30 * fVar17 + fVar29 * fVar22;
              bVar7 = 0;
              if ((fVar27 <= fVar15) && (bVar7 = 1, fVar20 < fVar19 + fVar15)) {
                bVar7 = 0;
              }
              bVar6 = 0;
              if (bVar7) {
                in_f23 = fVar23 * fVar14 + fVar21 * fVar17 + fVar24 * fVar22;
                bVar6 = 0;
                if ((fVar27 <= in_f23) && (bVar6 = 1, fVar20 < in_f23)) {
                  bVar6 = 0;
                }
                if (bVar6) {
                  in_f23 = in_f23 / fVar16;
                }
              }
            }
          }
          if (bVar6) {
            fStack_1f4 = *pfStack_1e4;
            fStack_1f0 = pfStack_1e4[1];
            fStack_1ec = pfStack_1e4[2];
            fVar20 = *pfStack_1e0 - *pfStack_1e4;
            fVar16 = *pfStack_1dc - *pfStack_1e4;
            fVar19 = pfStack_1e0[2] - pfStack_1e4[2];
            fVar18 = pfStack_1e0[1] - pfStack_1e4[1];
            fVar15 = pfStack_1dc[2] - pfStack_1e4[2];
            fVar14 = pfStack_1dc[1] - pfStack_1e4[1];
            fStack_200 = fVar18 * fVar15 - fVar19 * fVar14;
            fStack_1fc = fVar19 * fVar16 - fVar20 * fVar15;
            fStack_1f8 = fVar20 * fVar14 - fVar18 * fVar16;
            fVar15 = SQRT(fStack_1f8 * fStack_1f8 +
                          fStack_200 * fStack_200 + fStack_1fc * fStack_1fc);
            if (0.0 < fVar15) {
              fVar15 = 1.0 / fVar15;
            }
            fStack_200 = fStack_200 * fVar15;
            fStack_1fc = fStack_1fc * fVar15;
            fStack_1f8 = fStack_1f8 * fVar15;
            lVar9 = (*param_4)(in_f23,param_3,&fStack_200,param_5);
            if (lVar9 == 0) {
              return;
            }
          }
        }
      } while (&puStack_194 < ppuStack_8);
    }
  }
  return;
}

// FUN_00462BB0 NONMATCHING

void FUN_00462bb0(int param_1,u64 param_2,u32 param_3,code *param_4,u32 param_5
                 )

{
  char cVar1;
  u16 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  u8 **ppuVar6;
  u16 *puVar7;
  long lVar8;
  u16 uVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uVar12;
  u8 *pbVar13;
  int iVar14;
  u32 uVar15;
  u32 uVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  u8 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  u8 **ppuStack_1f0;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  u32 uStack_1b8;
  float *pfStack_1b4;
  float *pfStack_1b0;
  float *pfStack_1ac;
  int iStack_1a0;
  float afStack_19c [12];
  u8 uStack_16c;
  u8 uStack_16b;
  u16 uStack_16a;
  u8 *puStack_164;
  u32 uStack_160;
  u8 *apuStack_15c [64];
  u8 **ppuStack_5c;
  u64 uStack_50;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  u64 uStack_30;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = *(int *)(param_1 + iGpffffba38);
  if (iVar3 == 0) {
    ((code)FUN_00461d00)();
  }
  else {
    fVar28 = *(float *)(iVar3 + 0x10);
    pfVar18 = (float *)param_2;
    fVar23 = *pfVar18;
    if (fVar23 < fVar28) {
      fVar23 = fVar28 - fVar23;
    }
    else if (*(float *)(iVar3 + 4) < fVar23) {
      fVar23 = fVar23 - *(float *)(iVar3 + 4);
    }
    else {
      fVar23 = 0.0;
    }
    fVar29 = *(float *)(iVar3 + 0x14);
    fVar24 = pfVar18[1];
    if (fVar24 < fVar29) {
      fVar24 = fVar29 - fVar24;
    }
    else if (*(float *)(iVar3 + 8) < fVar24) {
      fVar24 = fVar24 - *(float *)(iVar3 + 8);
    }
    else {
      fVar24 = 0.0;
    }
    fVar26 = *(float *)(iVar3 + 0x18);
    fVar25 = pfVar18[2];
    fVar27 = 0.0;
    if (fVar25 < fVar26) {
      fVar27 = fVar26 - fVar25;
    }
    else if (*(float *)(iVar3 + 0xc) < fVar25) {
      fVar27 = fVar25 - *(float *)(iVar3 + 0xc);
    }
    fVar25 = pfVar18[3];
    if (fVar27 * fVar27 + fVar24 * fVar24 + fVar23 * fVar23 + 0.0 + 0.0 <= fVar25 * fVar25) {
      iVar4 = *(int *)(param_1 + 0x2c);
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 0x14);
      fStack_10 = *pfVar18;
      fStack_c = pfVar18[1];
      fVar23 = fVar25 * 0.57;
      fStack_8 = pfVar18[2];
      fVar30 = fStack_10 + fVar25;
      fStack_44 = fStack_10 - fVar23;
      fStack_3c = fStack_8 - fVar23;
      fVar24 = fStack_10 + fVar23;
      fStack_48 = fStack_8 + fVar23;
      fStack_28 = fStack_8 + fVar25;
      fStack_24 = fStack_10 - fVar25;
      fStack_20 = fStack_c - fVar25;
      fVar27 = fStack_c + fVar25;
      fStack_40 = fStack_c - fVar23;
      fStack_1c = fStack_8 - fVar25;
      fVar23 = fStack_c + fVar23;
      uStack_30 = CONCAT44(fVar27,fVar30);
      uStack_50 = CONCAT44(fVar23,fVar24);
      if ((((fVar30 < fVar28) || (fVar27 < fVar29)) || (fStack_28 < fVar26)) ||
         (((*(float *)(iVar3 + 4) < fStack_24 || (*(float *)(iVar3 + 8) < fStack_20)) ||
          (*(float *)(iVar3 + 0xc) < fStack_1c)))) {
        ppuStack_5c = &puStack_164;
      }
      else {
        uStack_16a = 0;
        uStack_16b = 0xff;
        if (*(short *)(iVar3 + 0x1e) == 0) {
          uStack_16b = (char)*(u16 *)(iVar3 + 0x1c);
        }
        afStack_19c[2] = fStack_28;
        afStack_19c[5] = fStack_1c;
        puStack_164 = &uStack_16c;
        afStack_19c[0] = fVar30;
        afStack_19c[1] = fVar27;
        afStack_19c[3] = fStack_24;
        afStack_19c[4] = fStack_20;
        afStack_19c[7] = fVar23;
        afStack_19c[8] = fStack_48;
        afStack_19c[9] = fStack_44;
        afStack_19c[10] = fStack_40;
        afStack_19c[0xb] = fStack_3c;
        afStack_19c[6] = fVar24;
        if (*(float *)(iVar3 + 0x14) < fStack_40) {
          uVar12 = 4;
        }
        else {
          uVar12 = 0;
        }
        if (*(float *)(iVar3 + 0x18) < fStack_3c) {
          uVar10 = 0x10;
        }
        else {
          uVar10 = 0;
        }
        if (fVar24 < *(float *)(iVar3 + 4)) {
          uVar16 = 2;
        }
        else {
          uVar16 = 0;
        }
        if (fVar23 < *(float *)(iVar3 + 8)) {
          uVar15 = 8;
        }
        else {
          uVar15 = 0;
        }
        if (fStack_48 < *(float *)(iVar3 + 0xc)) {
          uVar11 = 0x20;
        }
        else {
          uVar11 = 0;
        }
        ppuStack_5c = apuStack_15c;
        uStack_160 = uVar11 | uVar15 | uVar16 | uVar10 | *(float *)(iVar3 + 0x10) < fStack_44 |
                                                         uVar12;
        iStack_1a0 = iVar3;
      }
      ppuStack_1f0 = &puStack_164;
      while (ppuStack_1f0 < ppuStack_5c) {
        ppuStack_5c = ppuStack_5c + -2;
LAB_00462fc4:
        ppuVar6 = ppuStack_5c;
        puVar22 = *ppuStack_5c;
        uVar9 = (u16)(u8)puVar22[1];
        if (uVar9 == 0xff) {
          if (ppuStack_5c[1] != (u8 *)0x0) goto code_r0x00462ff4;
          iVar14 = *(int *)(iStack_1a0 + 0x20) + (u32)*(u16 *)(puVar22 + 2) * 0x10;
          cVar1 = *(char *)(iVar14 + 1);
          iVar17 = iVar14;
          while (cVar1 == -1) {
            iVar17 = *(int *)(iStack_1a0 + 0x20) + (u32)*(u16 *)(iVar17 + 2) * 0x10;
            cVar1 = *(char *)(iVar17 + 1);
          }
          uVar9 = (u16)*(u8 *)(iVar14 + 9);
          iVar14 = iVar14 + 8;
          if (uVar9 == 0xff) {
            do {
              iVar14 = *(int *)(iStack_1a0 + 0x20) + (u32)*(u16 *)(iVar14 + 2) * 0x10;
              uVar9 = (u16)*(u8 *)(iVar14 + 9);
              iVar14 = iVar14 + 8;
            } while (uVar9 == 0xff);
          }
          uVar2 = *(u16 *)(iVar17 + 2);
          puVar22 = (u8 *)0x0;
          uVar9 = (*(short *)(iVar14 + 2) + uVar9) - uVar2;
        }
        else {
          uVar2 = *(u16 *)(puVar22 + 2);
          puVar22 = ppuStack_5c[1];
        }
        for (uVar12 = (u32)uVar2; uVar12 < (u32)uVar2 + (u32)uVar9; uVar12 = uVar12 + 1 & 0xffff)
        {
          uVar10 = uVar12;
          if (*(int *)(iVar3 + 0x24) != 0) {
            uVar10 = (u32)*(u16 *)(*(int *)(iVar3 + 0x24) + uVar12 * 2);
          }
          puVar7 = (u16 *)(iVar4 + uVar10 * 8);
          pfVar19 = (float *)(iVar5 + (u32)*puVar7 * 0xc);
          pfVar20 = (float *)(iVar5 + (u32)puVar7[1] * 0xc);
          pfVar21 = (float *)(iVar5 + (u32)puVar7[2] * 0xc);
          if (puVar22 == (u8 *)0x0) {
            fVar27 = *pfVar20 - *pfVar19;
            fVar28 = *pfVar21 - *pfVar19;
            fVar26 = pfVar20[2] - pfVar19[2];
            fVar29 = pfVar20[1] - pfVar19[1];
            fVar23 = pfVar21[2] - pfVar19[2];
            fVar24 = pfVar21[1] - pfVar19[1];
            fStack_1d0 = fVar29 * fVar23 - fVar26 * fVar24;
            fStack_1cc = fVar26 * fVar28 - fVar27 * fVar23;
            fStack_1c8 = fVar27 * fVar24 - fVar29 * fVar28;
            fVar23 = SQRT(fStack_1c8 * fStack_1c8 +
                          fStack_1d0 * fStack_1d0 + fStack_1cc * fStack_1cc);
            if (0.0 < fVar23) {
              fVar23 = 1.0 / fVar23;
            }
            fStack_1d0 = fStack_1d0 * fVar23;
            fStack_1cc = fStack_1cc * fVar23;
            fStack_1c8 = fStack_1c8 * fVar23;
            fStack_4 = (pfVar18[2] - pfVar19[2]) * fStack_1c8 +
                       (*pfVar18 - *pfVar19) * fStack_1d0 + (pfVar18[1] - pfVar19[1]) * fStack_1cc;
LAB_00463298:
            fStack_4 = fStack_4 * (1.0 / fVar25);
            fStack_1c4 = *pfVar19;
            fStack_1c0 = pfVar19[1];
            fStack_1bc = pfVar19[2];
            uStack_1b8 = uVar10;
            pfStack_1b4 = pfVar19;
            pfStack_1b0 = pfVar20;
            pfStack_1ac = pfVar21;
            lVar8 = (*param_4)(fStack_4,param_3,&fStack_1d0,param_5);
            if (lVar8 == 0) {
              return;
            }
          }
          else {
            lVar8 = ((code)FUN_004bae00)(param_2,pfVar19,pfVar20,pfVar21,&fStack_1d0,&fStack_4);
            if (lVar8 != 0) goto LAB_00463298;
          }
        }
      }
    }
  }
  return;
code_r0x00462ff4:
  pbVar13 = (u8 *)(*(int *)(iStack_1a0 + 0x20) + (u32)*(u16 *)(puVar22 + 2) * 0x10);
  uVar12 = *pbVar13 & 0xc;
  if (*(float *)((int)afStack_19c + uVar12) < *(float *)(pbVar13 + 0xc)) {
    *ppuStack_5c = pbVar13;
  }
  else {
    *ppuStack_5c = pbVar13 + 8;
    if (*(float *)((int)afStack_19c + uVar12 + 0xc) <= *(float *)(pbVar13 + 4)) {
      ppuStack_5c = ppuStack_5c + 2;
      ppuVar6[2] = pbVar13;
      ppuVar6[3] = ppuVar6[1];
      if (*(float *)(pbVar13 + 4) <= *(float *)((int)afStack_19c + uVar12 + 0x18)) {
        ppuVar6[3] = (u8 *)((u32)ppuVar6[3] & ~(2 << (uVar12 >> 1)));
      }
      if (*(float *)((int)afStack_19c + uVar12 + 0x24) <= *(float *)(pbVar13 + 0xc)) {
        ppuVar6[1] = (u8 *)((u32)ppuVar6[1] & ~(1 << (uVar12 >> 1)));
      }
    }
  }
  goto LAB_00462fc4;
}

// FUN_00463490
asm void FUN_00463490(int param_1,int param_2,float *param_3,u32 param_4,code *param_5,
                 u32 param_6)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x00c0a82d
  .word 0x7fb30040
  .word 0x0000a02d
  .word 0x7fb20030
  .word 0x27b300f0
  .word 0x7fb10020
  .word 0x27b200fc
  .word 0x7fb00010
  .word 0x27b10108
  .word 0xe7b7000c
  .word 0xafa700b8
  .word 0xe7b60008
  .word 0xafa800b4
  .word 0xe7b50004
  .word 0xafa900b0
  .word 0xe7b40000
  .word 0xafa400bc
  .word 0x84a70004
  .word 0xc4c5000c
  .word 0xc4c40000
  .word 0x8c88005c
  .word 0xc4c30010
  .word 0xc4c20004
  .word 0xc4c10014
  .word 0xc4c00008
  .word 0x000718c0
  .word 0x00671823
  .word 0x00031880
  .word 0x00681821
  .word 0x46042d01
  .word 0x8c660014
  .word 0x46000d81
  .word 0x27a30114
  .word 0xac660000
  .word 0x84a60006
  .word 0x8c87005c
  .word 0x000618c0
  .word 0x00661823
  .word 0x00031880
  .word 0x00671821
  .word 0x8c660014
  .word 0x27a30118
  .word 0xac660000
  .word 0xc4a1000c
  .word 0x27a3011c
  .word 0xc4a00010
  .word 0x46000802
  .word 0xe4600000
  .word 0x8c830010
  .word 0x8c90002c
  .word 0x0003082a
  .word 0x102000f1
  .word 0x46021d41
  .word 0x27b600f4
  .word 0x27b70100
  .word 0x27be010c
  .word 0x27a30118
  .word 0x8c640000
  .word 0x27a30114
  .word 0x8c630000
  .word 0x106400ea
  .word 0x00000000
  .word 0x27a5011c
  .word 0x96060000
  .word 0xc4a00000
  .word 0x00062840
  .word 0x00a62821
  .word 0x00052880
  .word 0x00653021
  .word 0x00852821
  .word 0xc4a20000
  .word 0xc4c10000
  .word 0x46011041
  .word 0xe7a100f0
  .word 0xc7a100f0
  .word 0xc4a30004
  .word 0xc4c20004
  .word 0x46000902
  .word 0x46021841
  .word 0xe6c10000
  .word 0xc6c10000
  .word 0xc4a30008
  .word 0xc4c20008
  .word 0x46000842
  .word 0x27a500f8
  .word 0x46021881
  .word 0xe6c10000
  .word 0x46001042
  .word 0xe4a10000
  .word 0xe7a400f0
  .word 0xc4c30000
  .word 0xc6c20000
  .word 0xc4a10000
  .word 0x460320c0
  .word 0xe7a300f0
  .word 0xc4c30004
  .word 0x46031080
  .word 0xe6c20000
  .word 0xc4c20008
  .word 0x46020840
  .word 0xe4a10000
  .word 0x96060002
  .word 0x00062840
  .word 0x00a62821
  .word 0x00052880
  .word 0x00653821
  .word 0x00853021
  .word 0xc4c20000
  .word 0x27a500fc
  .word 0xc4e10000
  .word 0x46011041
  .word 0xe4a10000
  .word 0xc4a10000
  .word 0xc4c30004
  .word 0xc4e20004
  .word 0x46000902
  .word 0x27a50104
  .word 0x46021881
  .word 0xe6e20000
  .word 0xc6e10000
  .word 0xc4c30008
  .word 0xc4e20008
  .word 0x46000842
  .word 0x46021881
  .word 0xe6e10000
  .word 0x46001042
  .word 0xe4a10000
  .word 0x27a500fc
  .word 0xe4a40000
  .word 0xc4e30000
  .word 0x27a50104
  .word 0xc4a10000
  .word 0xc6e20000
  .word 0x460320c0
  .word 0x27a500fc
  .word 0xe4a30000
  .word 0xc4e30004
  .word 0x27a50104
  .word 0x46031080
  .word 0xe6e20000
  .word 0xc4e20008
  .word 0x46020840
  .word 0xe4a10000
  .word 0x96060004
  .word 0x00062840
  .word 0x00a62821
  .word 0x00053080
  .word 0x00662821
  .word 0x00862021
  .word 0xc4820000
  .word 0x27a30108
  .word 0xc4a10000
  .word 0x46011041
  .word 0xe4610000
  .word 0xc4610000
  .word 0xc4830004
  .word 0xc4a20004
  .word 0x27a30110
  .word 0x46021881
  .word 0xe7c20000
  .word 0x460008c2
  .word 0xc7c10000
  .word 0xc4840008
  .word 0xc4a20008
  .word 0x46000842
  .word 0x46022081
  .word 0x46001002
  .word 0xe4600000
  .word 0x27a30108
  .word 0xe7c10000
  .word 0xe4630000
  .word 0xc4a20000
  .word 0x27a30110
  .word 0xc4600000
  .word 0xc7c10000
  .word 0x46021880
  .word 0x27a30108
  .word 0xe4620000
  .word 0xc4a20004
  .word 0x27a30110
  .word 0x46020840
  .word 0xe7c10000
  .word 0xc4a10008
  .word 0x46010000
  .word 0xe4600000
  .word 0x3c03322b
  .word 0xc6670000
  .word 0x3463cc77
  .word 0xc6200000
  .word 0xc6650008
  .word 0xc6420008
  .word 0xc6440000
  .word 0xc6660004
  .word 0xc6430004
  .word 0x460702c1
  .word 0x46051401
  .word 0xc6200008
  .word 0xc6220004
  .word 0x46061bc1
  .word 0x46050341
  .word 0x46061301
  .word 0x460da81a
  .word 0x460cb21d
  .word 0x460bb01a
  .word 0x460da25d
  .word 0x460ca01a
  .word 0x460baa9d
  .word 0x46072381
  .word 0x4609781a
  .word 0x4608701e
  .word 0x44830800
  .word 0x460a801c
  .word 0x46010036
  .word 0x45000002
  .word 0x24040001
  .word 0x0000202d
  .word 0x10800044
  .word 0x00000000
  .word 0x3c033727
  .word 0x24040001
  .word 0x3463c5ac
  .word 0xc6a10000
  .word 0x44831800
  .word 0x46000087
  .word 0x46021c42
  .word 0x46070901
  .word 0xc6a20004
  .word 0xc6a10008
  .word 0x46061181
  .word 0x4609301a
  .word 0x46050841
  .word 0x4608201e
  .word 0x460a095c
  .word 0x46112834
  .word 0x45000002
  .word 0x461101c1
  .word 0x0000202d
  .word 0x10800005
  .word 0x00000000
  .word 0x46072836
  .word 0x45010002
  .word 0x24040001
  .word 0x0000202d
  .word 0x10800029
  .word 0x00000000
  .word 0x4610301a
  .word 0x460f089d
  .word 0x460e081a
  .word 0x461020dd
  .word 0x460f201a
  .word 0x460e311d
  .word 0x4603a81a
  .word 0x4602a01e
  .word 0x4604b05c
  .word 0x46110834
  .word 0x45000002
  .word 0x24040001
  .word 0x0000202d
  .word 0x10800006
  .word 0x00000000
  .word 0x46012840
  .word 0x46070836
  .word 0x45010002
  .word 0x24040001
  .word 0x0000202d
  .word 0x10800013
  .word 0x00000000
  .word 0x4603601a
  .word 0x4602581e
  .word 0x46046ddc
  .word 0x4611b834
  .word 0x45000002
  .word 0x24040001
  .word 0x0000202d
  .word 0x10800005
  .word 0x00000000
  .word 0x4607b836
  .word 0x45010002
  .word 0x24040001
  .word 0x0000202d
  .word 0x10800004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4600bdc3
  .word 0x14800019
  .word 0x00000000
  .word 0x8fa300bc
  .word 0x26940001
  .word 0x8c630010
  .word 0x0283182a
  .word 0x1460ff14
  .word 0x26100008
  .word 0x10000065
  .word 0xdfbf00a0
  .word 0x96070000
  .word 0x96060002
  .word 0x96050004
  .word 0x00072040
  .word 0x00873821
  .word 0x00062040
  .word 0x00862021
  .word 0x00042080
  .word 0x00073080
  .word 0x00649021
  .word 0x00669821
  .word 0x00052040
  .word 0x00852021
  .word 0x00042080
  .word 0x1000ff83
  .word 0x00648821
  .word 0x27a200cc
  .word 0xc6630000
  .word 0xc6610004
  .word 0xc6600008
  .word 0x44801000
  .word 0x00000000
  .word 0xe4430000
  .word 0x27a200d8
  .word 0xac540000
  .word 0x27a200cc
  .word 0xe4410004
  .word 0x27a200dc
  .word 0xac530000
  .word 0x27a200cc
  .word 0xe4400008
  .word 0x27a200e0
  .word 0xac520000
  .word 0x27a200e4
  .word 0xac510000
  .word 0xc6660000
  .word 0x27a200c4
  .word 0xc6450000
  .word 0xc6200000
  .word 0xc6630008
  .word 0xc6410008
  .word 0xc6680004
  .word 0xc6440004
  .word 0x46062a41
  .word 0x46060141
  .word 0x46030981
  .word 0xc6200008
  .word 0xc6210004
  .word 0x460821c1
  .word 0x46030001
  .word 0x46080901
  .word 0x4600381a
  .word 0x460430dd
  .word 0x4605301a
  .word 0x4600485d
  .word 0x4604481a
  .word 0x4605381d
  .word 0xe4410000
  .word 0x4601081a
  .word 0x27a200c8
  .word 0x4603181e
  .word 0xe4400000
  .word 0xe7a300c0
  .word 0x4600001c
  .word 0x460000c4
  .word 0x00000000
  .word 0x00000000
  .word 0x46021836
  .word 0x45010009
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460300c3
  .word 0x00000000
  .word 0x00000000
  .word 0x10000001
  .word 0x00000000
  .word 0x27a200c4
  .word 0xc4410000
  .word 0x8fa400b8
  .word 0xc7a200c0
  .word 0x8fa600b0
  .word 0x4600bb06
  .word 0x27a500c0
  .word 0x27a200c8
  .word 0xc4400000
  .word 0x46031082
  .word 0x46030842
  .word 0x27a200c4
  .word 0xe4410000
  .word 0x46030002
  .word 0x27a200c8
  .word 0xe4400000
  .word 0x8fa200b4
  .word 0x0040f809
  .word 0xe7a200c0
  .word 0x1440ff96
  .word 0x00000000
  .word 0xdfbf00a0
  .word 0xc7b7000c
  .word 0x7bbe0090
  .word 0xc7b60008
  .word 0x7bb70080
  .word 0xc7b50004
  .word 0x7bb60070
  .word 0xc7b40000
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd0120
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00463B20
asm void FUN_00463b20(int param_1,int param_2,int param_3,u32 param_4,code *param_5,
                 u32 param_6)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0x3c033f80
  .word 0xffbf00a0
  .word 0x44830800
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x27be010c
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x27b50100
  .word 0x7fb30040
  .word 0x03c0a02d
  .word 0x7fb20030
  .word 0x27b30118
  .word 0x7fb10020
  .word 0x0000902d
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0xafa700c4
  .word 0xc4c0000c
  .word 0xafa600c8
  .word 0x8c87005c
  .word 0xafa800c0
  .word 0xafa900bc
  .word 0x84a60004
  .word 0x46000d03
  .word 0x000618c0
  .word 0x00661823
  .word 0x00031880
  .word 0x00671821
  .word 0x8c660014
  .word 0x27a30124
  .word 0xac660000
  .word 0x84a60006
  .word 0x8c87005c
  .word 0x000618c0
  .word 0x00661823
  .word 0x00031880
  .word 0x00671821
  .word 0x8c660014
  .word 0x27a30128
  .word 0xac660000
  .word 0xc4a1000c
  .word 0x27a3012c
  .word 0xc4a00010
  .word 0x46000802
  .word 0xe4600000
  .word 0x8c830010
  .word 0x8c91002c
  .word 0x0003082a
  .word 0x10200090
  .word 0xafa400cc
  .word 0x27b00104
  .word 0x27b60110
  .word 0x27b7011c
  .word 0x27a20128
  .word 0x8c430000
  .word 0x27a20124
  .word 0x8c420000
  .word 0x10430089
  .word 0x00000000
  .word 0x27a4012c
  .word 0x96250000
  .word 0xc4800000
  .word 0x00052040
  .word 0x00852021
  .word 0x00042080
  .word 0x00442821
  .word 0x00642021
  .word 0xc4820000
  .word 0xc4a10000
  .word 0x46011041
  .word 0xe7a10100
  .word 0xc7a10100
  .word 0xc4830004
  .word 0xc4a20004
  .word 0x46000902
  .word 0x46021841
  .word 0xe6010000
  .word 0xc6010000
  .word 0xc4830008
  .word 0xc4a20008
  .word 0x46000842
  .word 0x27a40108
  .word 0x46021881
  .word 0xe6010000
  .word 0x46001042
  .word 0xe4810000
  .word 0xe7a40100
  .word 0xc4a30000
  .word 0xc6020000
  .word 0xc4810000
  .word 0x460320c0
  .word 0xe7a30100
  .word 0xc4a30004
  .word 0x46031080
  .word 0xe6020000
  .word 0xc4a20008
  .word 0x46020840
  .word 0xe4810000
  .word 0x96250002
  .word 0x00052040
  .word 0x00852021
  .word 0x00042080
  .word 0x00442821
  .word 0x00642021
  .word 0xc4820000
  .word 0xc4a10000
  .word 0x46011041
  .word 0xe7c10000
  .word 0xc7c10000
  .word 0xc4830004
  .word 0xc4a20004
  .word 0x46000902
  .word 0x46021881
  .word 0xe6c20000
  .word 0xc6c10000
  .word 0xc4830008
  .word 0xc4a20008
  .word 0x46000842
  .word 0x27a40114
  .word 0x46021881
  .word 0xe6c10000
  .word 0x46001042
  .word 0xe4810000
  .word 0xe7c40000
  .word 0xc4a30000
  .word 0xc6c20000
  .word 0xc4810000
  .word 0x460320c0
  .word 0xe7c30000
  .word 0xc4a30004
  .word 0x46031080
  .word 0xe6c20000
  .word 0xc4a20008
  .word 0x46020840
  .word 0xe4810000
  .word 0x96250004
  .word 0x00052040
  .word 0x00852021
  .word 0x00042880
  .word 0x00452021
  .word 0x00651821
  .word 0xc4620000
  .word 0x27a20118
  .word 0xc4810000
  .word 0x46011041
  .word 0xe4410000
  .word 0xc4410000
  .word 0xc4630004
  .word 0xc4820004
  .word 0x27a20120
  .word 0x46021881
  .word 0xe6e20000
  .word 0x460008c2
  .word 0xc6e10000
  .word 0xc4640008
  .word 0xc4820008
  .word 0x46000842
  .word 0x46022081
  .word 0x46001002
  .word 0xe4400000
  .word 0x27a20118
  .word 0xe6e10000
  .word 0xe4430000
  .word 0xc4820000
  .word 0x27a20120
  .word 0xc4400000
  .word 0xc6e10000
  .word 0x46021880
  .word 0x27a20118
  .word 0xe4420000
  .word 0xc4820004
  .word 0x27a20120
  .word 0x46020840
  .word 0xe6e10000
  .word 0xc4810008
  .word 0x46010000
  .word 0xe4400000
  .word 0x8fa400c8
  .word 0x02a0282d
  .word 0x0280302d
  .word 0x0260382d
  .word 0x27a800d0
  .word 0x0c12eb80
  .word 0x27a9013c
  .word 0x1440001a
  .word 0x00000000
  .word 0x00000000
  .word 0x8fa300cc
  .word 0x26520001
  .word 0x8c630010
  .word 0x0243182a
  .word 0x1460ff75
  .word 0x26310008
  .word 0x1000002d
  .word 0xdfbf00a0
  .word 0x96260000
  .word 0x96250002
  .word 0x96240004
  .word 0x00061840
  .word 0x00663021
  .word 0x00051840
  .word 0x00651821
  .word 0x00031880
  .word 0x00062880
  .word 0x0043a021
  .word 0x0045a821
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x1000ffdf
  .word 0x00439821
  .word 0x27a200e8
  .word 0xc6a30000
  .word 0x8fa400c4
  .word 0xc6a20004
  .word 0x8fa600bc
  .word 0xc6a10008
  .word 0x27a500d0
  .word 0xc7a0013c
  .word 0xac520000
  .word 0x27a200ec
  .word 0xac550000
  .word 0x46140302
  .word 0x27a200dc
  .word 0xe4430000
  .word 0x27a200f0
  .word 0xac540000
  .word 0x27a200dc
  .word 0xe4420004
  .word 0x27a200f4
  .word 0xac530000
  .word 0x27a200dc
  .word 0xe4410008
  .word 0x8fa200c0
  .word 0x0040f809
  .word 0xe7ac013c
  .word 0x1440ffce
  .word 0x00000000
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
  .word 0x27bd0140
  .word 0x00000000
  .word 0x00000000
}

// FUN_00463F20
asm void FUN_00463f20(int param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x00a0a82d
  .word 0x7fb30030
  .word 0x00c0a02d
  .word 0x7fb20020
  .word 0x00e0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c910018
  .word 0x0080802d
  .word 0x8c840004
  .word 0x0c132cbc
  .word 0x0100902d
  .word 0x0040282d
  .word 0x0c130ca8
  .word 0x27a40070
  .word 0x27a400b0
  .word 0x02a0282d
  .word 0x24060001
  .word 0x0c131b08
  .word 0x27a70070
  .word 0xc7a30094
  .word 0xc7a20090
  .word 0xc7a10098
  .word 0xc6a0000c
  .word 0x4603181a
  .word 0x4602101e
  .word 0x4601085c
  .word 0x46010044
  .word 0x46000802
  .word 0xe7a000bc
  .word 0x8e220018
  .word 0x28410002
  .word 0x1420000a
  .word 0x00000000
  .word 0x0220202d
  .word 0x2605004c
  .word 0x0280382d
  .word 0x0260402d
  .word 0x0240482d
  .word 0x0c118ec8
  .word 0x27a600b0
  .word 0x10000008
  .word 0xdfbf0060
  .word 0x0220202d
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0c118aec
  .word 0x27a500b0
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
  .word 0x00000000
}

// FUN_00464020
asm u64 FUN_00464020(u64 param_1,u64 param_2,u64 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x24020005
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8ca30018
  .word 0x1062001a
  .word 0x00e0802d
  .word 0x24020004
  .word 0x10620013
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000020
  .word 0x0260102d
  .word 0x0c117e4c
  .word 0x00000000
  .word 0x1000001c
  .word 0x0260102d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0c1183b0
  .word 0x0200402d
  .word 0x10000016
  .word 0x0260102d
  .word 0x0c1181ac
  .word 0x00000000
  .word 0x10000012
  .word 0x0260102d
  .word 0x0c1244ac
  .word 0x8e440000
  .word 0xc4430000
  .word 0x0240302d
  .word 0xc4420004
  .word 0x0220382d
  .word 0xc4410008
  .word 0x0200402d
  .word 0xc440000c
  .word 0x27a50050
  .word 0x0260202d
  .word 0xe7a30050
  .word 0xe7a20054
  .word 0xe7a10058
  .word 0x0c1183b0
  .word 0xe7a0005c
  .word 0x0260102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
}

// FUN_00464120
asm u64 FUN_00464120(u64 param_1,u64 param_2,u64 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdff30
  .word 0x24020005
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8ca30018
  .word 0x10620030
  .word 0x00e0802d
  .word 0x24020003
  .word 0x10620027
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000039
  .word 0x0260102d
  .word 0x8e740018
  .word 0x0c132cbc
  .word 0x8e640004
  .word 0x0040282d
  .word 0x0c130ca8
  .word 0x27a40080
  .word 0x27a40060
  .word 0x0240282d
  .word 0x24060002
  .word 0x0c131b08
  .word 0x27a70080
  .word 0x8e820018
  .word 0x28410002
  .word 0x1420000a
  .word 0x00000000
  .word 0x0280202d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x0200482d
  .word 0x2665004c
  .word 0x0c118d24
  .word 0x27a60060
  .word 0x10000008
  .word 0x0260102d
  .word 0x0280202d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0c1187a8
  .word 0x27a50060
  .word 0x0260102d
  .word 0x10000019
  .word 0xdfbf0050
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0c118fc8
  .word 0x0200402d
  .word 0x10000012
  .word 0x0260102d
  .word 0x0c1244ac
  .word 0x8e440000
  .word 0xc4430000
  .word 0x0240302d
  .word 0xc4420004
  .word 0x0220382d
  .word 0xc4410008
  .word 0x0200402d
  .word 0xc440000c
  .word 0x27a500c0
  .word 0x0260202d
  .word 0xe7a300c0
  .word 0xe7a200c4
  .word 0xe7a100c8
  .word 0x0c118fc8
  .word 0xe7a000cc
  .word 0x0260102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x00000000
  .word 0x00000000
}

// FUN_00464280
asm long FUN_00464280(u32 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020003
  .word 0xffbf0020
  .word 0x3445001e
  .word 0x7fb10010
  .word 0x3c020096
  .word 0x7fb00000
  .word 0x8c420178
  .word 0x0080802d
  .word 0x001018c0
  .word 0x24710008
  .word 0x0040f809
  .word 0x0220202d
  .word 0x1040002c
  .word 0x00000000
  .word 0xac500000
  .word 0x24430008
  .word 0xac430004
  .word 0x0010082b
  .word 0x8c450004
  .word 0x10200023
  .word 0x0000302d
  .word 0x2e010009
  .word 0x14200016
  .word 0x2604fff8
  .word 0xaca00000
  .word 0x24c60008
  .word 0xaca00004
  .word 0x00c4182b
  .word 0xaca00008
  .word 0xaca0000c
  .word 0xaca00010
  .word 0xaca00014
  .word 0xaca00018
  .word 0xaca0001c
  .word 0xaca00020
  .word 0xaca00024
  .word 0xaca00028
  .word 0xaca0002c
  .word 0xaca00030
  .word 0xaca00034
  .word 0xaca00038
  .word 0xaca0003c
  .word 0x1460ffed
  .word 0x24a50040
  .word 0x00000000
  .word 0x00d0082b
  .word 0x10200008
  .word 0x00000000
  .word 0xaca00000
  .word 0x24c60001
  .word 0xaca00004
  .word 0x00d0182b
  .word 0x24a50008
  .word 0x1460fffa
  .word 0x00000000
  .word 0x1000000c
  .word 0xdfbf0020
  .word 0x24020122
  .word 0x0220282d
  .word 0xafa20038
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2003c
  .word 0x0c130714
  .word 0x27a40038
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004643B0
asm u64 FUN_004643b0(u64 param_1,int param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x8c840004
  .word 0x00101080
  .word 0x000530c0
  .word 0x00501821
  .word 0x3c020003
  .word 0x00039880
  .word 0x34450122
  .word 0x3c020096
  .word 0x8c420178
  .word 0x00869021
  .word 0x0040f809
  .word 0x0260202d
  .word 0xae420004
  .word 0x8e440004
  .word 0x1080003a
  .word 0x00000000
  .word 0x0260302d
  .word 0x0c148502
  .word 0x0000282d
  .word 0x0010082b
  .word 0x10200031
  .word 0x0000282d
  .word 0x2e010009
  .word 0x14200020
  .word 0x2603fff8
  .word 0x0000202d
  .word 0x2402ffff
  .word 0x8e470004
  .word 0x24a50008
  .word 0x00a3302b
  .word 0x00e43821
  .word 0xace20010
  .word 0x8e470004
  .word 0x00e43821
  .word 0xace20024
  .word 0x8e470004
  .word 0x00e43821
  .word 0xace20038
  .word 0x8e470004
  .word 0x00e43821
  .word 0xace2004c
  .word 0x8e470004
  .word 0x00e43821
  .word 0xace20060
  .word 0x8e470004
  .word 0x00e43821
  .word 0xace20074
  .word 0x8e470004
  .word 0x00e43821
  .word 0xace20088
  .word 0x8e470004
  .word 0x00e43821
  .word 0xace2009c
  .word 0x14c0ffe5
  .word 0x248400a0
  .word 0x00000000
  .word 0x00b0082b
  .word 0x1020000c
  .word 0x00000000
  .word 0x00051080
  .word 0x2404ffff
  .word 0x00451021
  .word 0x00023080
  .word 0x8e430004
  .word 0x24a50001
  .word 0x00b0102b
  .word 0x00661821
  .word 0xac640010
  .word 0x1440fffa
  .word 0x24c60014
  .word 0xae500000
  .word 0x1000000b
  .word 0x0220102d
  .word 0x24020122
  .word 0x0260282d
  .word 0xafa20058
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2005c
  .word 0x0c130714
  .word 0x27a40058
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
}

// FUN_00464540
asm long FUN_00464540(u64 param_1)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x24050001
  .word 0xffbf0060
  .word 0x27a6009c
  .word 0x7fb50050
  .word 0x27a70098
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x14400003
  .word 0x00000000
  .word 0x1000006d
  .word 0x0000102d
  .word 0x02a0202d
  .word 0x27a50094
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000065
  .word 0x0000102d
  .word 0x02a0202d
  .word 0x27a50090
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040fff9
  .word 0x00000000
  .word 0x02a0202d
  .word 0x27a5008c
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040fff3
  .word 0x00000000
  .word 0x02a0202d
  .word 0x27a50088
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040ffed
  .word 0x00000000
  .word 0x8fa20094
  .word 0x2c410101
  .word 0x1020000c
  .word 0x00000000
  .word 0x0c1190a0
  .word 0x8fa4008c
  .word 0x0040a02d
  .word 0x12800011
  .word 0x00000000
  .word 0x8fa2008c
  .word 0x0002102b
  .word 0x1440000f
  .word 0x0000982d
  .word 0x10000044
  .word 0x0280102d
  .word 0x24030122
  .word 0x3c028000
  .word 0xafa30078
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa2007c
  .word 0x0c130714
  .word 0x27a40078
  .word 0x1000003a
  .word 0x0000102d
  .word 0x10000038
  .word 0x0000102d
  .word 0x0000802d
  .word 0x02a0202d
  .word 0x27a50084
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x1000002f
  .word 0x0000102d
  .word 0x8fa60084
  .word 0x14c00008
  .word 0x00000000
  .word 0x8fa2008c
  .word 0x26730001
  .word 0x0262102b
  .word 0x1440fff1
  .word 0x26100008
  .word 0x1000ffe0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c1190ec
  .word 0x0260282d
  .word 0x1040001d
  .word 0x00000000
  .word 0x8e830004
  .word 0x8fa20084
  .word 0x00701821
  .word 0x8c720004
  .word 0x0002082b
  .word 0x1020ffee
  .word 0x0000882d
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0c13062c
  .word 0x24060010
  .word 0x10400011
  .word 0x00000000
  .word 0x02a0202d
  .word 0x26450010
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040000b
  .word 0x00000000
  .word 0x8fa20084
  .word 0x26310001
  .word 0x0222102b
  .word 0x1440fff0
  .word 0x26520014
  .word 0x1000ffda
  .word 0x00000000
  .word 0x00000000
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
  .word 0x27bd00a0
  .word 0x00000000
  .word 0x00000000
  .word 0xc4a80008
  .word 0x3c034000
  .word 0xc4a7000c
  .word 0xc4a60010
  .word 0x44832800
  .word 0xc4a00014
  .word 0x3c033f80
  .word 0x46084302
  .word 0x46073882
  .word 0x46063042
  .word 0x44832000
  .word 0x44801800
  .word 0x46063ac2
  .word 0x24030003
  .word 0x46083282
  .word 0x46074242
  .word 0x46060182
  .word 0x46080202
  .word 0x460701c2
  .word 0x46011000
  .word 0x46041818
  .word 0x4600281d
  .word 0xe4800000
  .word 0x46016040
  .word 0x46026000
  .word 0x46041818
  .word 0x4601289d
  .word 0x46041818
  .word 0x460648c0
  .word 0x460328c2
  .word 0x46075101
  .word 0x46064841
  .word 0xe4830004
  .word 0x460128c2
  .word 0x46042902
  .word 0xe4840008
  .word 0xe4830010
  .word 0x460858c0
  .word 0x46075040
  .word 0xe4820014
  .word 0x46012882
  .word 0x46085841
  .word 0x460328c2
  .word 0xe4830018
  .word 0x46012842
  .word 0xe4820020
  .word 0x4600281d
  .word 0xe4810024
  .word 0xe4800028
  .word 0xac800030
  .word 0xac800034
  .word 0xac800038
  .word 0xac83000c
  .word 0xc4a00018
  .word 0xe4800030
  .word 0xc4a0001c
  .word 0xe4800034
  .word 0xc4a00020
  .word 0x03e00008
  .word 0xe4800038
}

// FUN_0048F030
asm u8 FUN_0048f030(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060049
  .word 0x3c070049
  .word 0xffbf0000
  .word 0x0000202d
  .word 0x2405011f
  .word 0x24c6dd30
  .word 0x0c132948
  .word 0x24e7dd50
  .word 0x04410003
  .word 0x00000000
  .word 0x100000b3
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040008
  .word 0x2405011f
  .word 0x24c6ea90
  .word 0x24e7eab0
  .word 0x0c124f14
  .word 0x2508eb50
  .word 0x04410003
  .word 0xaf82bac8
  .word 0x100000a6
  .word 0x0000102d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404011f
  .word 0x24a5ec20
  .word 0x24c6ecf0
  .word 0x0c124f20
  .word 0x24e7ed20
  .word 0x04410003
  .word 0xaf82bacc
  .word 0x1000009a
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040008
  .word 0x2405011f
  .word 0x24c6ea90
  .word 0x24e7eab0
  .word 0x0c126494
  .word 0x2508eb50
  .word 0xaf82bad0
  .word 0x8f82bac8
  .word 0x04410003
  .word 0x00000000
  .word 0x1000008b
  .word 0x0000102d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404011f
  .word 0x24a5ec20
  .word 0x24c6ecf0
  .word 0x0c1264a0
  .word 0x24e7ed20
  .word 0xaf82bad4
  .word 0x8f82bacc
  .word 0x04410003
  .word 0x00000000
  .word 0x1000007d
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040008
  .word 0x2405011f
  .word 0x24c6ea90
  .word 0x24e7eab0
  .word 0x0c132e7c
  .word 0x2508eb50
  .word 0x04410003
  .word 0xaf82bad8
  .word 0x10000070
  .word 0x0000102d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404011f
  .word 0x24a5ec20
  .word 0x24c6ecf0
  .word 0x0c131f40
  .word 0x24e7ed20
  .word 0x04410003
  .word 0xaf82badc
  .word 0x10000064
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040008
  .word 0x2405011f
  .word 0x24c6ea90
  .word 0x24e7eab0
  .word 0x0c132800
  .word 0x2508eb50
  .word 0x04410003
  .word 0xaf82bae0
  .word 0x10000057
  .word 0x0000102d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404011f
  .word 0x24a5ec20
  .word 0x24c6ecf0
  .word 0x0c131ed8
  .word 0x24e7ed20
  .word 0x04410003
  .word 0xaf82bae4
  .word 0x1000004b
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040008
  .word 0x2405011f
  .word 0x24c6ea90
  .word 0x24e7eab0
  .word 0x0c125148
  .word 0x2508eb50
  .word 0x04410003
  .word 0xaf82bae8
  .word 0x1000003e
  .word 0x0000102d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404011f
  .word 0x24a5ec20
  .word 0x24c6ecf0
  .word 0x0c125154
  .word 0x24e7ed20
  .word 0x04410003
  .word 0xaf82baec
  .word 0x10000032
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040008
  .word 0x2405011f
  .word 0x24c6ea90
  .word 0x24e7eab0
  .word 0x0c12536c
  .word 0x2508eb50
  .word 0x04410003
  .word 0xaf82baf0
  .word 0x10000025
  .word 0x0000102d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404011f
  .word 0x24a5ec20
  .word 0x24c6ecf0
  .word 0x0c125378
  .word 0x24e7ed20
  .word 0x04410003
  .word 0xaf82baf4
  .word 0x10000019
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x3c080049
  .word 0x24040008
  .word 0x2405011f
  .word 0x24c6ea90
  .word 0x24e7eab0
  .word 0x0c1344ec
  .word 0x2508eb50
  .word 0x04410003
  .word 0xaf82baf8
  .word 0x1000000c
  .word 0x0000102d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404011f
  .word 0x24a5ec20
  .word 0x24c6ecf0
  .word 0x0c132068
  .word 0x24e7ed20
  .word 0xaf82bafc
  .word 0x0040102a
  .word 0x38420001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048F340
asm u64 FUN_0048f340(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24060004
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c130644
  .word 0x2785bb14
  .word 0x10400006
  .word 0x00000000
  .word 0x24020008
  .word 0x12020005
  .word 0x00000000
  .word 0x1000000a
  .word 0x0220102d
  .word 0x10000008
  .word 0x0000102d
  .word 0x0220202d
  .word 0x2785bb10
  .word 0x0c130644
  .word 0x24060004
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048F3C0
asm u64 FUN_0048f3c0(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x8cc2006c
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x2445002c
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x8e02006c
  .word 0x0220202d
  .word 0x24060004
  .word 0x0c1305fc
  .word 0x24450030
  .word 0x0002880a
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x8c82006c
  .word 0x10400006
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x24020008
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048F460
asm u64 FUN_0048f460(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24060004
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c130644
  .word 0x2785bb0c
  .word 0x10400006
  .word 0x00000000
  .word 0x24020008
  .word 0x12020005
  .word 0x00000000
  .word 0x1000000a
  .word 0x0220102d
  .word 0x10000008
  .word 0x0000102d
  .word 0x0220202d
  .word 0x2785bb08
  .word 0x0c130644
  .word 0x24060004
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048F4E0
asm u64 FUN_0048f4e0(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x8cc2007c
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x2445002c
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x8e02007c
  .word 0x0220202d
  .word 0x24060004
  .word 0x0c1305fc
  .word 0x24450030
  .word 0x0002880a
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x8c82007c
  .word 0x10400006
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x24020008
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048F580
asm u32 * FUN_0048f580(u64 param_1,int *param_2,int param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdfee0
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x00c0b82d
  .word 0x7fb50050
  .word 0x0080b02d
  .word 0x7fb40040
  .word 0x0000302d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x00e0902d
  .word 0x24110001
  .word 0x27a7011c
  .word 0x0220282d
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa3011c
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
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30110
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20114
  .word 0x0c130714
  .word 0x27a40110
  .word 0x1000015e
  .word 0x0000102d
  .word 0x1000015c
  .word 0x0000102d
  .word 0x02c0202d
  .word 0x27a500a0
  .word 0x0c131494
  .word 0x2406002c
  .word 0x2403002c
  .word 0x14430084
  .word 0x00000000
  .word 0x3c020078
  .word 0x8e930000
  .word 0x8c42ddb0
  .word 0x02621021
  .word 0x12600080
  .word 0xae820000
  .word 0x2402ffff
  .word 0x27be00a4
  .word 0xae620000
  .word 0x27b500a8
  .word 0xc7a200ac
  .word 0x26640010
  .word 0xc7a100b0
  .word 0x0000282d
  .word 0xc7a000b4
  .word 0x24060020
  .word 0xe662006c
  .word 0xe6610070
  .word 0xe6600074
  .word 0xc7a200b8
  .word 0xc7a100bc
  .word 0xc7a000c0
  .word 0xe6620060
  .word 0xe6610064
  .word 0xe6600068
  .word 0x8fa200a0
  .word 0xa6620080
  .word 0x8fc20000
  .word 0xa6620084
  .word 0x8ea20000
  .word 0xa6620082
  .word 0xae600004
  .word 0xae600008
  .word 0xae600030
  .word 0x0c148502
  .word 0xae60000c
  .word 0xae60007c
  .word 0x26640038
  .word 0xae600034
  .word 0x26630040
  .word 0xae600078
  .word 0x3c020100
  .word 0xae640038
  .word 0xae64003c
  .word 0xae630040
  .word 0xae630044
  .word 0x8ee30008
  .word 0x00621024
  .word 0x14400041
  .word 0x00000000
  .word 0x8ea40000
  .word 0x1480005d
  .word 0x00000000
  .word 0x1220003c
  .word 0x00000000
  .word 0x8fc20000
  .word 0x10400039
  .word 0x00000000
  .word 0x8e830000
  .word 0x000280c0
  .word 0x00701021
  .word 0xae820000
  .word 0xae630004
  .word 0x8e620004
  .word 0x104000e3
  .word 0x00000000
  .word 0x162000ec
  .word 0x00000000
  .word 0x1220002d
  .word 0x00000000
  .word 0x8fa2011c
  .word 0x3c010003
  .word 0x34216002
  .word 0x0041082b
  .word 0x10200027
  .word 0x00000000
  .word 0x8fc20000
  .word 0x0002082a
  .word 0x10200023
  .word 0x0000282d
  .word 0x0000302d
  .word 0x27a400da
  .word 0x27a300dc
  .word 0x27a200de
  .word 0x8e670004
  .word 0x24a50001
  .word 0x00e65821
  .word 0x85690002
  .word 0x85670006
  .word 0x856a0000
  .word 0x85680004
  .word 0xa7a900da
  .word 0xa7a700de
  .word 0x94870000
  .word 0xa7aa00d8
  .word 0xa7a800dc
  .word 0x946a0000
  .word 0x94490000
  .word 0x97a800d8
  .word 0xa5670000
  .word 0x8e670004
  .word 0x00e63821
  .word 0xa4ea0002
  .word 0x8e670004
  .word 0x00e63821
  .word 0xa4e90004
  .word 0x8e670004
  .word 0x00e63821
  .word 0xa4e80006
  .word 0x8fc70000
  .word 0x00a7382a
  .word 0x14e0ffe4
  .word 0x24c60008
  .word 0x00000000
  .word 0x162000c4
  .word 0x00000000
  .word 0x162000de
  .word 0x00000000
  .word 0x92e20003
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x0c1265c8
  .word 0x0260202d
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c126614
  .word 0x0260202d
  .word 0x0000102d
  .word 0x100000d3
  .word 0xdfbf0090
  .word 0x100000d0
  .word 0x0000102d
  .word 0x3c028000
  .word 0x24030002
  .word 0x34440013
  .word 0x3c020078
  .word 0x8c45ddb0
  .word 0x0c130744
  .word 0xafa30108
  .word 0xafa2010c
  .word 0x0c130714
  .word 0x27a40108
  .word 0x100000c4
  .word 0x0000102d
  .word 0x8e830000
  .word 0x00041040
  .word 0x00441021
  .word 0x00028080
  .word 0x00701021
  .word 0xae820000
  .word 0xae630008
  .word 0x8e620008
  .word 0x1040004b
  .word 0x00000000
  .word 0x16200054
  .word 0x00000000
  .word 0x12200016
  .word 0x00000000
  .word 0x32420010
  .word 0x10400013
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8e830000
  .word 0x00028080
  .word 0x00701021
  .word 0xae820000
  .word 0xae63000c
  .word 0x8e62000c
  .word 0x1040004e
  .word 0x00000000
  .word 0x12200008
  .word 0x00000000
  .word 0x8e65000c
  .word 0x02c0202d
  .word 0x0c131494
  .word 0x0200302d
  .word 0x12020002
  .word 0x00000000
  .word 0x0000882d
  .word 0x12200016
  .word 0x00000000
  .word 0x32420008
  .word 0x10400013
  .word 0x00000000
  .word 0x8ea20000
  .word 0x8e830000
  .word 0x00028080
  .word 0x00701021
  .word 0xae820000
  .word 0xae630030
  .word 0x8e620030
  .word 0x10400042
  .word 0x00000000
  .word 0x12200008
  .word 0x00000000
  .word 0x8e650030
  .word 0x0200302d
  .word 0x0c131494
  .word 0x02c0202d
  .word 0x14400002
  .word 0x00000000
  .word 0x0000882d
  .word 0x1220ff69
  .word 0x00000000
  .word 0x8ee30020
  .word 0x1860ff66
  .word 0x00000000
  .word 0x96620082
  .word 0x0003082a
  .word 0x0000902d
  .word 0x1020ff61
  .word 0x0002a8c0
  .word 0x0260802d
  .word 0x8e830000
  .word 0x00751021
  .word 0xae820000
  .word 0x16200034
  .word 0xae030010
  .word 0x00000000
  .word 0x1620003f
  .word 0x00000000
  .word 0x8ee20020
  .word 0x26520001
  .word 0x0242102a
  .word 0x1440fff4
  .word 0x26100004
  .word 0x1000ff51
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30100
  .word 0x34440013
  .word 0x0c130744
  .word 0x0200282d
  .word 0xafa20104
  .word 0x0c130714
  .word 0x27a40100
  .word 0x1000ffac
  .word 0x0000882d
  .word 0x8e650008
  .word 0x0200302d
  .word 0x0c13062c
  .word 0x02c0202d
  .word 0x1440ffa8
  .word 0x00000000
  .word 0x1000ffa6
  .word 0x0000882d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300f8
  .word 0x34440013
  .word 0x0c130744
  .word 0x0200282d
  .word 0xafa200fc
  .word 0x0c130714
  .word 0x27a400f8
  .word 0x1000ffa9
  .word 0x0000882d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300f0
  .word 0x34440013
  .word 0x0c130744
  .word 0x0200282d
  .word 0xafa200f4
  .word 0x0c130714
  .word 0x27a400f0
  .word 0x1000ffb5
  .word 0x0000882d
  .word 0x8e020010
  .word 0x1440ffcc
  .word 0x00000000
  .word 0x24020002
  .word 0x02a0282d
  .word 0xafa200e8
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa200ec
  .word 0x0c130714
  .word 0x27a400e8
  .word 0x1000ff1a
  .word 0x0000882d
  .word 0x8e050010
  .word 0x02c0202d
  .word 0x0c13062c
  .word 0x02a0302d
  .word 0x1440ffbd
  .word 0x00000000
  .word 0x1000ff12
  .word 0x0000882d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300e0
  .word 0x34440013
  .word 0x0c130744
  .word 0x0200282d
  .word 0xafa200e4
  .word 0x0c130714
  .word 0x27a400e0
  .word 0x1000ff14
  .word 0x0000882d
  .word 0x8e650004
  .word 0x0200302d
  .word 0x0c130614
  .word 0x02c0202d
  .word 0x1440ff10
  .word 0x00000000
  .word 0x1000ff0e
  .word 0x0000882d
  .word 0x3c040078
  .word 0x0260282d
  .word 0x0c13192c
  .word 0x2484ddb0
  .word 0xaf80bb0c
  .word 0x1620000d
  .word 0xaf80bb08
  .word 0x1220ff35
  .word 0x00000000
  .word 0x8f85bb0c
  .word 0x10a0ff32
  .word 0x00000000
  .word 0x8f87bb08
  .word 0x3c040078
  .word 0x2484ddb0
  .word 0x0c13170c
  .word 0x0260302d
  .word 0x1000ff2b
  .word 0x00000000
  .word 0x3c040078
  .word 0x02c0282d
  .word 0x2484ddb0
  .word 0x0c131694
  .word 0x0260302d
  .word 0x1440ffee
  .word 0x00000000
  .word 0x1000ffec
  .word 0x0000882d
  .word 0x0260102d
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
  .word 0x27bd0120
}

// FUN_0048FBD0
asm u32 * FUN_0048fbd0(u64 param_1,u64 param_2,u64 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x00e0902d
  .word 0x7fb00000
  .word 0x27a600bc
  .word 0x24100001
  .word 0x27a700b8
  .word 0x0c130580
  .word 0x0200282d
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa300b8
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
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300b0
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200b4
  .word 0x0c130714
  .word 0x27a400b0
  .word 0x100000ed
  .word 0x0000102d
  .word 0x100000eb
  .word 0x0000102d
  .word 0x27a40070
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060018
  .word 0x8fb100bc
  .word 0x02a0202d
  .word 0x27a50070
  .word 0x0c131494
  .word 0x0220302d
  .word 0x162200d2
  .word 0x00000000
  .word 0x8e910000
  .word 0x26220018
  .word 0x122000d0
  .word 0xae820000
  .word 0x8fa40070
  .word 0x3c024000
  .word 0x27a30074
  .word 0x02421024
  .word 0xae240000
  .word 0xc4600000
  .word 0x10400006
  .word 0xe6200004
  .word 0xc7a00080
  .word 0xe6200010
  .word 0xc7a00084
  .word 0x10000005
  .word 0xe6200014
  .word 0xc4600000
  .word 0xe6200010
  .word 0xc4600000
  .word 0xe6200014
  .word 0x8fa20078
  .word 0x1040002a
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700b8
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x12000015
  .word 0x00000000
  .word 0x8fa300b8
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1420000a
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300a0
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200a4
  .word 0x0c130714
  .word 0x27a400a0
  .word 0x0000802d
  .word 0x12000032
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0c123d60
  .word 0x0240382d
  .word 0x1440002b
  .word 0xae220008
  .word 0x10000029
  .word 0x0000802d
  .word 0x02a0202d
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700b8
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x12000015
  .word 0x00000000
  .word 0x8fa300b8
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1420000a
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30098
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa2009c
  .word 0x0c130714
  .word 0x27a40098
  .word 0x0000802d
  .word 0x12000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0c123ef4
  .word 0x0240382d
  .word 0x14400002
  .word 0xae220008
  .word 0x0000802d
  .word 0x12000055
  .word 0x00000000
  .word 0x8fa2007c
  .word 0x1040002a
  .word 0x00000000
  .word 0x02a0202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700b8
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x12000015
  .word 0x00000000
  .word 0x8fa300b8
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1420000a
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30090
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20094
  .word 0x0c130714
  .word 0x27a40090
  .word 0x0000802d
  .word 0x12000032
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0240382d
  .word 0x0c123d60
  .word 0x0260302d
  .word 0x1440002b
  .word 0xae22000c
  .word 0x10000029
  .word 0x0000802d
  .word 0x02a0202d
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700b8
  .word 0x14400002
  .word 0x00000000
  .word 0x0000802d
  .word 0x12000015
  .word 0x00000000
  .word 0x8fa300b8
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1420000a
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30088
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x0000802d
  .word 0x12000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0240382d
  .word 0x0c123ef4
  .word 0x0260302d
  .word 0x14400002
  .word 0xae22000c
  .word 0x0000802d
  .word 0x1600001e
  .word 0x00000000
  .word 0x8e240008
  .word 0x1080000c
  .word 0x00000000
  .word 0x92620003
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x0c1265c8
  .word 0x00000000
  .word 0x10000004
  .word 0xae200008
  .word 0x0c126614
  .word 0x00000000
  .word 0xae200008
  .word 0x1000000f
  .word 0x0000102d
  .word 0x1000000d
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300a8
  .word 0x34440013
  .word 0x0c130744
  .word 0x24050018
  .word 0xafa200ac
  .word 0x0c130714
  .word 0x27a400a8
  .word 0x10000002
  .word 0x0000102d
  .word 0x0220102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00490050
asm long FUN_00490050(u64 param_1)
{
  .set noreorder
  .word 0x27bdff20
  .word 0x24050001
  .word 0xffbf0050
  .word 0x27a600d8
  .word 0x7fb40040
  .word 0x27a700d4
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080882d
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa300d4
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
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300c8
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200cc
  .word 0x0c130714
  .word 0x27a400c8
  .word 0x10000163
  .word 0x0000102d
  .word 0x10000161
  .word 0x0000102d
  .word 0x27a40060
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060040
  .word 0x8fb000d8
  .word 0x0220202d
  .word 0x27a50060
  .word 0x0c131494
  .word 0x0200302d
  .word 0x1602008b
  .word 0x00000000
  .word 0x8fa20080
  .word 0x1c40008a
  .word 0x00000000
  .word 0x3c020078
  .word 0x8fa50078
  .word 0x8c46ddd0
  .word 0x8fa3007c
  .word 0x00052040
  .word 0x3c020078
  .word 0x00852021
  .word 0x8c42ddb0
  .word 0x000420c0
  .word 0x00c42021
  .word 0x00621818
  .word 0x8fb30084
  .word 0x3c0200ff
  .word 0x02621024
  .word 0x10400003
  .word 0x0083a021
  .word 0x10000008
  .word 0x00029403
  .word 0x32620080
  .word 0x10400003
  .word 0x00000000
  .word 0x10000003
  .word 0x24120002
  .word 0x32620004
  .word 0x0002902b
  .word 0x3c020100
  .word 0x02621024
  .word 0x14400017
  .word 0x00000000
  .word 0x8fa40074
  .word 0x32620010
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x10400003
  .word 0x0283a021
  .word 0x00041080
  .word 0x0282a021
  .word 0x32620008
  .word 0x10400003
  .word 0x00000000
  .word 0x00041080
  .word 0x0282a021
  .word 0x12400004
  .word 0x00000000
  .word 0x02441018
  .word 0x000210c0
  .word 0x0282a021
  .word 0x8fa20070
  .word 0x000210c0
  .word 0x0282a021
  .word 0x3c020003
  .word 0x3445000b
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0280202d
  .word 0x0040802d
  .word 0x12000058
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x0280302d
  .word 0x3c020078
  .word 0x24030007
  .word 0x8c46ddd0
  .word 0x0280282d
  .word 0x0200202d
  .word 0x02063021
  .word 0x24020001
  .word 0xafa600dc
  .word 0xa2030000
  .word 0xa2000001
  .word 0xa2000002
  .word 0xa2000003
  .word 0xae000004
  .word 0x0c1267a4
  .word 0xa2020003
  .word 0xae130008
  .word 0x24020002
  .word 0xae02000c
  .word 0x2608002c
  .word 0xc7a00064
  .word 0x3c02bf80
  .word 0x44820800
  .word 0x26030034
  .word 0x0220202d
  .word 0x24050008
  .word 0x2602003c
  .word 0x0000302d
  .word 0x27a700d0
  .word 0x46000802
  .word 0xe6000044
  .word 0xc7a00068
  .word 0x46000802
  .word 0xe6000048
  .word 0xc7a0006c
  .word 0x46000802
  .word 0xe600004c
  .word 0xae120020
  .word 0xae00001c
  .word 0xae00006c
  .word 0xae08002c
  .word 0xae080030
  .word 0xae030034
  .word 0xae030038
  .word 0xae02003c
  .word 0x0c130580
  .word 0xae020040
  .word 0x1040002f
  .word 0x00000000
  .word 0x8fa300d0
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x14200028
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300b0
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200b4
  .word 0x0c130714
  .word 0x27a400b0
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x100000cc
  .word 0x0000102d
  .word 0x100000ca
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300c0
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200c4
  .word 0x0c130714
  .word 0x27a400c0
  .word 0x100000c0
  .word 0x0000102d
  .word 0x24020002
  .word 0x0280282d
  .word 0xafa200b8
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa200bc
  .word 0x0c130714
  .word 0x27a400b8
  .word 0x100000b5
  .word 0x0000102d
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x100000b1
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0c125530
  .word 0x26050010
  .word 0x10400040
  .word 0x00000000
  .word 0x8fa20060
  .word 0x1040001f
  .word 0x00000000
  .word 0x0220202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700d0
  .word 0x1040003a
  .word 0x00000000
  .word 0x8fa300d0
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x14200033
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300a8
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200ac
  .word 0x0c130714
  .word 0x27a400a8
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x1000008b
  .word 0x0000102d
  .word 0x0220202d
  .word 0x2405000a
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700d0
  .word 0x1040006e
  .word 0x00000000
  .word 0x8fa300d0
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400006
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x14200067
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300a0
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200a4
  .word 0x0c130714
  .word 0x27a400a0
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x1000006d
  .word 0x0000102d
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x10000069
  .word 0x0000102d
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x10000065
  .word 0x0000102d
  .word 0x0260382d
  .word 0x0220202d
  .word 0x27a500dc
  .word 0x0c123d60
  .word 0x0200302d
  .word 0x14400005
  .word 0xae02001c
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x1000005a
  .word 0x0000102d
  .word 0xae000024
  .word 0x2602002c
  .word 0xae020028
  .word 0x0200202d
  .word 0xc7a30088
  .word 0xc7a2008c
  .word 0xc7a10090
  .word 0xc7a00094
  .word 0xe6030050
  .word 0xe6020054
  .word 0xe6010058
  .word 0xe600005c
  .word 0xc7a10098
  .word 0xc7a0009c
  .word 0xe6010060
  .word 0x0c12674c
  .word 0xe6000064
  .word 0x0200202d
  .word 0x0c1268f4
  .word 0x0000282d
  .word 0x8e020014
  .word 0x0002082a
  .word 0x10200011
  .word 0x0000982d
  .word 0x0000902d
  .word 0x8e020010
  .word 0x00521021
  .word 0x8c440000
  .word 0x8c850000
  .word 0x10a00004
  .word 0x00000000
  .word 0x0c125354
  .word 0x00000000
  .word 0x00000000
  .word 0x8e020014
  .word 0x26730001
  .word 0x0262102a
  .word 0x1440fff3
  .word 0x26520004
  .word 0x00000000
  .word 0x3c040078
  .word 0x2484ddd0
  .word 0x0c13192c
  .word 0x0200282d
  .word 0x3c040078
  .word 0x0220282d
  .word 0x2484ddd0
  .word 0x0200302d
  .word 0xaf80bb14
  .word 0x0c131694
  .word 0xaf80bb10
  .word 0x1040001e
  .word 0x00000000
  .word 0x8f85bb14
  .word 0x10a00006
  .word 0x00000000
  .word 0x8f87bb10
  .word 0x3c040078
  .word 0x2484ddd0
  .word 0x0c13170c
  .word 0x0200302d
  .word 0x0c126820
  .word 0x0200202d
  .word 0x10400016
  .word 0x00000000
  .word 0x10000017
  .word 0x0200102d
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x10000013
  .word 0x0000102d
  .word 0x0260382d
  .word 0x0220202d
  .word 0x27a500dc
  .word 0x0c123ef4
  .word 0x0200302d
  .word 0x1440ffb3
  .word 0xae02001c
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x10000008
  .word 0x0000102d
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c1268a4
  .word 0x0200202d
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00e0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83bb1c
  .word 0x0080102d
  .word 0x2463ffff
  .word 0x03e00008
  .word 0xaf83bb1c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83bb1c
  .word 0x0080102d
  .word 0x24630001
  .word 0x03e00008
  .word 0xaf83bb1c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x081247a8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x081246a0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x27bdffd0
  .word 0x24060004
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c130644
  .word 0x2785bb2c
  .word 0x10400006
  .word 0x00000000
  .word 0x24020008
  .word 0x12020005
  .word 0x00000000
  .word 0x1000000a
  .word 0x0220102d
  .word 0x10000008
  .word 0x0000102d
  .word 0x0220202d
  .word 0x2785bb28
  .word 0x0c130644
  .word 0x24060004
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_00490770
asm u64 FUN_00490770(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x8cc2006c
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x2445002c
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x8e02006c
  .word 0x0220202d
  .word 0x24060004
  .word 0x0c1305fc
  .word 0x24450030
  .word 0x0002880a
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x8c82006c
  .word 0x10400006
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x24020008
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_00490810
asm u64 FUN_00490810(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c82004c
  .word 0x30420002
  .word 0x14400006
  .word 0x0080802d
  .word 0x92030003
  .word 0x0200102d
  .word 0x34630001
  .word 0x10000005
  .word 0xa2030003
  .word 0x0c124440
  .word 0x00000000
  .word 0x1000fff9
  .word 0x92030003
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_00490860
asm u64 FUN_00490860(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c84006c
  .word 0x10800008
  .word 0x00000000
  .word 0x0200282d
  .word 0x0c13cb9c
  .word 0x24060001
  .word 0x10400009
  .word 0x00000000
  .word 0x10000008
  .word 0x0200102d
  .word 0x8f83be38
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x1000fff4
  .word 0x8c44003c
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004908D0
asm u64 FUN_004908d0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x0c1246d0
  .word 0x7fb00000
  .word 0x0040802d
  .word 0x1200000c
  .word 0x00000000
  .word 0x8e420004
  .word 0x1040000c
  .word 0x00000000
  .word 0x8c4500a0
  .word 0x0c124b44
  .word 0x0200202d
  .word 0x8e240004
  .word 0x0c1247fc
  .word 0x0200282d
  .word 0x1000000e
  .word 0x0240102d
  .word 0xae200008
  .word 0x1000000b
  .word 0x0000102d
  .word 0x0c1246a0
  .word 0x0200202d
  .word 0x24020002
  .word 0x24040005
  .word 0x0c130744
  .word 0xafa20048
  .word 0xafa2004c
  .word 0x0c130714
  .word 0x27a40048
  .word 0x0000102d
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

// FUN_00490980
asm u64 FUN_00490980(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x27a60068
  .word 0x7fb30030
  .word 0x27a70064
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x0c130580
  .word 0x24050001
  .word 0x1040001e
  .word 0x00000000
  .word 0x8fa30064
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x144000a4
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1020009f
  .word 0x00000000
  .word 0x0260202d
  .word 0x27a5006c
  .word 0x0c131494
  .word 0x24060004
  .word 0x24030004
  .word 0x1443000e
  .word 0x00000000
  .word 0xae000004
  .word 0x8fa2006c
  .word 0x1c40000c
  .word 0x00000000
  .word 0xae000000
  .word 0x8fa2006c
  .word 0x0002102a
  .word 0x1440001e
  .word 0x0000902d
  .word 0x10000096
  .word 0x0200102d
  .word 0x10000094
  .word 0x0000102d
  .word 0x10000092
  .word 0x0000102d
  .word 0x00022080
  .word 0x3c020003
  .word 0x3445000f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae020000
  .word 0x8e020000
  .word 0x1440ffec
  .word 0x00000000
  .word 0x8fa3006c
  .word 0x24020002
  .word 0xafa20058
  .word 0x3c028000
  .word 0x34440013
  .word 0x0c130744
  .word 0x00032880
  .word 0xafa2005c
  .word 0x0c130714
  .word 0x27a40058
  .word 0x1000007b
  .word 0x0000102d
  .word 0x0000882d
  .word 0x0260202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a70064
  .word 0x1440000f
  .word 0x00000000
  .word 0x8e020004
  .word 0x0002102a
  .word 0x14400026
  .word 0x0000902d
  .word 0x8e040000
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000000
  .word 0x10000065
  .word 0x0000102d
  .word 0x8fa30064
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x1440003c
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x10200037
  .word 0x00000000
  .word 0x0c124f2c
  .word 0x0260202d
  .word 0x8e030000
  .word 0x00711821
  .word 0x10400017
  .word 0xac620000
  .word 0x8e020004
  .word 0x26520001
  .word 0x24420001
  .word 0xae020004
  .word 0x8fa2006c
  .word 0x0242102a
  .word 0x1440ffd3
  .word 0x26310004
  .word 0x1000ffb3
  .word 0x00000000
  .word 0x0000882d
  .word 0x8e020000
  .word 0x00511021
  .word 0x0c124ed8
  .word 0x8c440000
  .word 0x8e020004
  .word 0x26520001
  .word 0x0242102a
  .word 0x1440fff8
  .word 0x26310004
  .word 0x1000ffd1
  .word 0x8e040000
  .word 0x8e020004
  .word 0x0002102a
  .word 0x1440000b
  .word 0x0000902d
  .word 0x8e040000
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000000
  .word 0x10000030
  .word 0x0000102d
  .word 0x0000882d
  .word 0x8e020000
  .word 0x00511021
  .word 0x0c124ed8
  .word 0x8c440000
  .word 0x8e020004
  .word 0x26520001
  .word 0x0242102a
  .word 0x1440fff8
  .word 0x26310004
  .word 0x1000ffec
  .word 0x8e040000
  .word 0x8e020004
  .word 0x0002102a
  .word 0x1440000b
  .word 0x0000902d
  .word 0x8e040000
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000000
  .word 0x10000016
  .word 0x0000102d
  .word 0x0000882d
  .word 0x8e020000
  .word 0x00511021
  .word 0x0c124ed8
  .word 0x8c440000
  .word 0x8e020004
  .word 0x26520001
  .word 0x0242102a
  .word 0x1440fff8
  .word 0x26310004
  .word 0x1000ffec
  .word 0x8e040000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30050
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20054
  .word 0x0c130714
  .word 0x27a40050
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
  .word 0x8f83bb20
  .word 0x0080102d
  .word 0x00831821
  .word 0xac600008
  .word 0xac600004
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83bb24
  .word 0x0080102d
  .word 0x00831821
  .word 0xac600008
  .word 0xac600004
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_00490D00
asm u64 FUN_00490d00(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f82bb24
  .word 0x0080802d
  .word 0x02021021
  .word 0x8c440000
  .word 0x0c124808
  .word 0x0200282d
  .word 0x0c1251d8
  .word 0x0200202d
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

#pragma schedule on
// FUN_00490D40

u32 FUN_00490d40(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  FUN_00492060_typed(*(u32 *)(iVar1 + iGpffffbb20),(u32)param_1);
  FUN_004ca030_typed((u32)param_1);
  return param_1;
}
#pragma schedule off

#pragma schedule on
// FUN_00490D80
u32 FUN_00490d80(u32 param_1)
{
  return param_1;
}
#pragma schedule off

#pragma optimization_level 3
// FUN_00490D90

u64 FUN_00490d90(u64 param_1)

{
  FUN_00491a80(param_1);
  return param_1;
}
#pragma optimization_level 2

// FUN_00490DC0
asm long FUN_00490dc0(u64 param_1,int *param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0040
  .word 0x27a70098
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x24050001
  .word 0x27a6009c
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x1040003d
  .word 0x00000000
  .word 0x8fa30098
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x144000ab
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x102000a6
  .word 0x00000000
  .word 0x27a40050
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060010
  .word 0x8fa6009c
  .word 0x0260202d
  .word 0x0c131494
  .word 0x27a50050
  .word 0x8fa3009c
  .word 0x00621026
  .word 0x2c420001
  .word 0x1040002f
  .word 0x00000000
  .word 0x0c124620
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000034
  .word 0x00000000
  .word 0x8fa20058
  .word 0xa2020002
  .word 0x8e420004
  .word 0x14400031
  .word 0x00000000
  .word 0x8e220004
  .word 0x10400037
  .word 0x00000000
  .word 0x8fa30054
  .word 0x0200202d
  .word 0x8e220000
  .word 0x00031880
  .word 0x00431021
  .word 0x8c450000
  .word 0x0c12466c
  .word 0x0000302d
  .word 0x3c040078
  .word 0x0260282d
  .word 0x2484dce0
  .word 0x0200302d
  .word 0xaf80bb2c
  .word 0x0c131694
  .word 0xaf80bb28
  .word 0x0002102b
  .word 0x10400069
  .word 0x00000000
  .word 0x8f85bb2c
  .word 0x14a00070
  .word 0x00000000
  .word 0x1000007e
  .word 0x0200102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30090
  .word 0x0c130744
  .word 0x3444001a
  .word 0xafa20094
  .word 0x0c130714
  .word 0x27a40090
  .word 0x10000074
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30088
  .word 0x0c130744
  .word 0x3444001a
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x1000006a
  .word 0x0000102d
  .word 0x10000068
  .word 0x0000102d
  .word 0x8fa30050
  .word 0x8e420000
  .word 0x00031880
  .word 0x00431021
  .word 0x8c450000
  .word 0x0c124b44
  .word 0x0200202d
  .word 0x1000ffc9
  .word 0x8e220004
  .word 0x0260202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a70098
  .word 0x1040001a
  .word 0x00000000
  .word 0x8fa30098
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x1440002c
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x10200027
  .word 0x00000000
  .word 0x0c124f2c
  .word 0x0260202d
  .word 0x0040882d
  .word 0x0011102b
  .word 0x10400015
  .word 0x00000000
  .word 0x0200202d
  .word 0x0220282d
  .word 0x0c12466c
  .word 0x0000302d
  .word 0x0c124ed8
  .word 0x0220202d
  .word 0x1000ffb3
  .word 0x00000000
  .word 0x0c1246a0
  .word 0x0200202d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30080
  .word 0x0c130744
  .word 0x3444001a
  .word 0xafa20084
  .word 0x0c130714
  .word 0x27a40080
  .word 0x10000033
  .word 0x0000102d
  .word 0x0c1246a0
  .word 0x0200202d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30078
  .word 0x0c130744
  .word 0x3444001a
  .word 0xafa2007c
  .word 0x0c130714
  .word 0x27a40078
  .word 0x10000027
  .word 0x0000102d
  .word 0x0c1246a0
  .word 0x0200202d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30070
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20074
  .word 0x0c130714
  .word 0x27a40070
  .word 0x1000001b
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30068
  .word 0x0c130744
  .word 0x3444001a
  .word 0xafa2006c
  .word 0x0c130714
  .word 0x27a40068
  .word 0x10000011
  .word 0x0000102d
  .word 0x8f87bb28
  .word 0x3c040078
  .word 0x2484dce0
  .word 0x0c13170c
  .word 0x0200302d
  .word 0x1000ff8b
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30060
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20064
  .word 0x0c130714
  .word 0x27a40060
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00a0
  .word 0x00000000
}

// FUN_00491100
asm void FUN_00491100(int param_1)
{
  .set noreorder
  .word 0x8c860018
  .word 0x10c00068
  .word 0x00000000
  .word 0x84890052
  .word 0x84880050
  .word 0x1109003d
  .word 0x2483004c
  .word 0x8cc50018
  .word 0x0105082a
  .word 0x10200039
  .word 0x00000000
  .word 0x0125082a
  .word 0x10200036
  .word 0x00000000
  .word 0x8cc7005c
  .word 0x000828c0
  .word 0xc464000c
  .word 0xc4630010
  .word 0x44800000
  .word 0x00a83023
  .word 0x000928c0
  .word 0x00063080
  .word 0x00a92823
  .word 0x00e63021
  .word 0x00052880
  .word 0x00e52821
  .word 0xc4c20010
  .word 0xc4a10010
  .word 0x460320c2
  .word 0x46020018
  .word 0x46020801
  .word 0x4600181c
  .word 0xe4800028
  .word 0xc4a10004
  .word 0xc4c00004
  .word 0x46000801
  .word 0xe480001c
  .word 0xc4a10008
  .word 0xc4c00008
  .word 0x46000801
  .word 0xe4800020
  .word 0xc4a1000c
  .word 0xc4c0000c
  .word 0x46000801
  .word 0xe4800024
  .word 0xc480001c
  .word 0x46030002
  .word 0xe480001c
  .word 0xc4800020
  .word 0x46030002
  .word 0xe4800020
  .word 0xc4800024
  .word 0x46030002
  .word 0xe4800024
  .word 0xc4c10004
  .word 0xc480001c
  .word 0x46010000
  .word 0xe480001c
  .word 0xc4c10008
  .word 0xc4800020
  .word 0x46010000
  .word 0xe4800020
  .word 0xc4c1000c
  .word 0xc4800024
  .word 0x46010000
  .word 0x10000015
  .word 0xe4800024
  .word 0x8cc50018
  .word 0x0105082a
  .word 0x1020001a
  .word 0x00000000
  .word 0x0125082a
  .word 0x10200017
  .word 0x00000000
  .word 0x8cc6005c
  .word 0x000828c0
  .word 0x00a82823
  .word 0x00052880
  .word 0x00a62821
  .word 0xc4a30004
  .word 0xc4a20008
  .word 0xc4a1000c
  .word 0xc4a00010
  .word 0xe483001c
  .word 0xe4820020
  .word 0xe4810024
  .word 0xe4800028
  .word 0x8c660000
  .word 0x2405fffd
  .word 0x00c52824
  .word 0xac650000
  .word 0x90830003
  .word 0x34630001
  .word 0xa0830003
  .word 0x1000000b
  .word 0x00000000
  .word 0x8cc5005c
  .word 0xc4a30004
  .word 0xc4a20008
  .word 0xc4a1000c
  .word 0xc4a00010
  .word 0xe483001c
  .word 0xe4820020
  .word 0xe4810024
  .word 0x1000ffee
  .word 0xe4800028
  .word 0x03e00008
  .word 0x00000000
}

// FUN_004912B0
asm int FUN_004912b0(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c82004c
  .word 0x8c910004
  .word 0x30420002
  .word 0x10400003
  .word 0x0080802d
  .word 0x0c124440
  .word 0x00000000
  .word 0x0c132b8c
  .word 0x0220202d
  .word 0x14400007
  .word 0x00000000
  .word 0x92020003
  .word 0x30420001
  .word 0x14400003
  .word 0x00000000
  .word 0x1000003f
  .word 0x2602002c
  .word 0x0c132cbc
  .word 0x0220202d
  .word 0x0040882d
  .word 0x2604002c
  .word 0x2605001c
  .word 0x0c131af8
  .word 0x0220302d
  .word 0x8e23000c
  .word 0x24020003
  .word 0x30630003
  .word 0x10620030
  .word 0x00000000
  .word 0xc6250004
  .word 0xc6240000
  .word 0xc6230008
  .word 0xc6220014
  .word 0xc6210010
  .word 0xc6200018
  .word 0x4605281a
  .word 0x4604201e
  .word 0x4603191c
  .word 0x4602101a
  .word 0x4601081e
  .word 0x460000dc
  .word 0xc6220024
  .word 0xc6210020
  .word 0xc6200028
  .word 0x4602101a
  .word 0x4601081e
  .word 0x4600005c
  .word 0x46011834
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x46001806
  .word 0x46000806
  .word 0x46002034
  .word 0x45010003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x46011834
  .word 0x45010003
  .word 0x00000000
  .word 0x10000003
  .word 0x46001906
  .word 0x460008c6
  .word 0x46001906
  .word 0x00000000
  .word 0x00000000
  .word 0x46040044
  .word 0xc6000028
  .word 0x46010002
  .word 0xe6000038
  .word 0x92030003
  .word 0x2402fffe
  .word 0x00621024
  .word 0x1000ffc4
  .word 0xa2020003
  .word 0xc6000028
  .word 0x1000fff9
  .word 0xe6000038
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_00491410
asm u64 FUN_00491410(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x3c050049
  .word 0x7fb00000
  .word 0x24420070
  .word 0x8f83bb30
  .word 0x0080802d
  .word 0x24a506d0
  .word 0x00431021
  .word 0x8c440004
  .word 0x0c131080
  .word 0x0000302d
  .word 0x8f83bb30
  .word 0x3c020096
  .word 0x24420070
  .word 0x3c050049
  .word 0x24a506e0
  .word 0x00431021
  .word 0x8c440000
  .word 0x0c131080
  .word 0x0000302d
  .word 0x8f83bb30
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x0c130f0c
  .word 0x8c440000
  .word 0x8f83bb30
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x0c130f0c
  .word 0x8c440004
  .word 0x8f85bb30
  .word 0x3c040096
  .word 0x8f83bb34
  .word 0x24840070
  .word 0x0200102d
  .word 0x00852021
  .word 0x2463ffff
  .word 0xac800000
  .word 0xac800004
  .word 0xaf83bb34
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004914D0
asm u64 FUN_004914d0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c080096
  .word 0xffbf0010
  .word 0x3c020078
  .word 0x7fb00000
  .word 0x24060010
  .word 0x0080802d
  .word 0xaf85bb30
  .word 0x8c44dce0
  .word 0x2508dea0
  .word 0x8f85aee0
  .word 0x8f87aee4
  .word 0x3c020004
  .word 0x0c130ed8
  .word 0x34490010
  .word 0x8f84bb30
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0xac620000
  .word 0x8c620000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000020
  .word 0x0000102d
  .word 0x3c020078
  .word 0x3c080096
  .word 0x8c44dd00
  .word 0x24060010
  .word 0x8f85aee8
  .word 0x2508de70
  .word 0x8f87aeec
  .word 0x3c020004
  .word 0x0c130ed8
  .word 0x34490014
  .word 0x8f84bb30
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0xac620004
  .word 0x8c620004
  .word 0x10400006
  .word 0x00000000
  .word 0x8f83bb34
  .word 0x0200102d
  .word 0x24630001
  .word 0x10000009
  .word 0xaf83bb34
  .word 0x0c130f0c
  .word 0x8c640000
  .word 0x8f83bb30
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x1000ffe0
  .word 0xac400000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004915C0
asm u8 FUN_004915c0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060049
  .word 0x3c070049
  .word 0xffbf0000
  .word 0x2404000c
  .word 0x24050010
  .word 0x24c60ca0
  .word 0x24e70cc0
  .word 0x0c132800
  .word 0x0000402d
  .word 0x04410003
  .word 0xaf82bb20
  .word 0x1000000c
  .word 0x0000102d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x2404000c
  .word 0x24050010
  .word 0x24c60cd0
  .word 0x24e70cf0
  .word 0x0c125148
  .word 0x0000402d
  .word 0xaf82bb24
  .word 0x0040102a
  .word 0x38420001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}

// FUN_00491630
asm u64 FUN_00491630(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x24920008
  .word 0x7fb00000
  .word 0x8c900008
  .word 0x12120009
  .word 0x0080882d
  .word 0x9202ffc2
  .word 0x30420004
  .word 0x14400007
  .word 0x2613ffc0
  .word 0x8e100000
  .word 0x1612fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x1000000b
  .word 0x0220102d
  .word 0x0c132cbc
  .word 0x8e640004
  .word 0x8e620048
  .word 0x0040f809
  .word 0x0260202d
  .word 0x1440fff4
  .word 0x00000000
  .word 0x1000fff2
  .word 0x0000882d
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004916D0
asm u64 FUN_004916d0(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x26910008
  .word 0x8c820008
  .word 0x1051000c
  .word 0x00c0902d
  .word 0x8c500000
  .word 0x2444ffc0
  .word 0x0260f809
  .word 0x0240282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x0280102d
  .word 0x1611fff7
  .word 0x0200102d
  .word 0x00000000
  .word 0x0280102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00491760
asm u64 FUN_00491760(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x26910018
  .word 0x8c820018
  .word 0x1051000e
  .word 0x00c0902d
  .word 0x8c500000
  .word 0x2443fffc
  .word 0x0240282d
  .word 0x8f82bb20
  .word 0x0260f809
  .word 0x00622023
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x0280102d
  .word 0x1611fff5
  .word 0x0200102d
  .word 0x00000000
  .word 0x0280102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_004917F0
asm u64 FUN_004917f0(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x26910010
  .word 0x8c820010
  .word 0x1051000e
  .word 0x00c0902d
  .word 0x8c500000
  .word 0x2443fffc
  .word 0x0240282d
  .word 0x8f82bb24
  .word 0x0260f809
  .word 0x00622023
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x0280102d
  .word 0x1611fff5
  .word 0x0200102d
  .word 0x00000000
  .word 0x0280102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_00491880
asm long FUN_00491880(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c030096
  .word 0xffbf0010
  .word 0x3c020003
  .word 0x7fb00000
  .word 0x34450014
  .word 0x8f84bb30
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c420188
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x0040802d
  .word 0x12000035
  .word 0x00000000
  .word 0x24060001
  .word 0x3c030049
  .word 0xa2060000
  .word 0x24630810
  .word 0xa2000001
  .word 0x24020005
  .word 0xa2000002
  .word 0x0200202d
  .word 0xa2000003
  .word 0x0000282d
  .word 0xae000004
  .word 0xae030010
  .word 0xae000014
  .word 0xa2020002
  .word 0x0c124b44
  .word 0xa2060003
  .word 0xae000018
  .word 0x3c030049
  .word 0xae000028
  .word 0x24630860
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000024
  .word 0xae000038
  .word 0xae00002c
  .word 0xae000030
  .word 0xae000034
  .word 0xae030048
  .word 0x8e020048
  .word 0x10400018
  .word 0x00000000
  .word 0xa6000050
  .word 0x3c043f80
  .word 0xa6000052
  .word 0x24030003
  .word 0xae040054
  .word 0x26020064
  .word 0xae040058
  .word 0x0200282d
  .word 0xae00005c
  .word 0x3c040078
  .word 0xae03004c
  .word 0x2484dce0
  .word 0xae000044
  .word 0xae000040
  .word 0xae00003c
  .word 0xae00006c
  .word 0xae020064
  .word 0x0c13192c
  .word 0xae020068
  .word 0x10000005
  .word 0x0200102d
  .word 0x10000003
  .word 0x0000102d
  .word 0x1000ffe8
  .word 0xae030048
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004919B0
asm u64 FUN_004919b0(u64 param_1,int param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8c820018
  .word 0x12420021
  .word 0x0080802d
  .word 0x12400003
  .word 0x00000000
  .word 0x0c124ed0
  .word 0x0240202d
  .word 0x8e040018
  .word 0x10800003
  .word 0x00000000
  .word 0x0c124ed8
  .word 0x00000000
  .word 0x32220001
  .word 0x14400015
  .word 0xae120018
  .word 0x1240000a
  .word 0x00000000
  .word 0x8e42005c
  .word 0xc4430004
  .word 0xc4420008
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe603001c
  .word 0xe6020020
  .word 0xe6010024
  .word 0xe6000028
  .word 0x8e110004
  .word 0x12200007
  .word 0x00000000
  .word 0x0c12708c
  .word 0x0200202d
  .word 0x10400003
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x0220202d
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00491A80
asm u32 FUN_00491a80(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x0080882d
  .word 0x7fb00000
  .word 0x3c040078
  .word 0x0220282d
  .word 0x0c131958
  .word 0x2484dce0
  .word 0x8e240014
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8e240018
  .word 0x1080000f
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c124ed8
  .word 0x00000000
  .word 0xae200018
  .word 0x8e300004
  .word 0x12000007
  .word 0x00000000
  .word 0x0c12708c
  .word 0x0220202d
  .word 0x10400003
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x0200202d
  .word 0x0c134630
  .word 0x0220202d
  .word 0x8f84bb30
  .word 0x3c030096
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x00641821
  .word 0x8c640000
  .word 0x0040f809
  .word 0x0220282d
  .word 0xdfbf0020
  .word 0x24020001
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_00491B40
asm long FUN_00491b40(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080882d
  .word 0x0c124620
  .word 0x7fb00000
  .word 0x0040802d
  .word 0x1200004d
  .word 0x00000000
  .word 0x92220000
  .word 0x0200202d
  .word 0x0000282d
  .word 0xa2020000
  .word 0x92220001
  .word 0xa2020001
  .word 0x92220002
  .word 0xa2020002
  .word 0x92220003
  .word 0xa2020003
  .word 0xae000004
  .word 0x92220002
  .word 0x0c124b44
  .word 0xa2020002
  .word 0x8e320018
  .word 0x8e020018
  .word 0x1242001e
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x0c124ed0
  .word 0x0240202d
  .word 0x8e040018
  .word 0x10800003
  .word 0x00000000
  .word 0x0c124ed8
  .word 0x00000000
  .word 0x1240000a
  .word 0xae120018
  .word 0x8e42005c
  .word 0xc4430004
  .word 0xc4420008
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe603001c
  .word 0xe6020020
  .word 0xe6010024
  .word 0xe6000028
  .word 0x8e120004
  .word 0x12400007
  .word 0x00000000
  .word 0x0c12708c
  .word 0x0200202d
  .word 0x10400003
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x0240202d
  .word 0xc623001c
  .word 0x3c040078
  .word 0xc6220020
  .word 0x2484dce0
  .word 0xc6210024
  .word 0x0200282d
  .word 0xc6200028
  .word 0x0220302d
  .word 0xe603001c
  .word 0xe6020020
  .word 0xe6010024
  .word 0xe6000028
  .word 0x8e220048
  .word 0xae020048
  .word 0x8e22006c
  .word 0xae02006c
  .word 0xc623004c
  .word 0xc6220050
  .word 0xc6210054
  .word 0xc6200058
  .word 0xe603004c
  .word 0xe6020050
  .word 0xe6010054
  .word 0xe6000058
  .word 0xc620005c
  .word 0x0c131974
  .word 0xe600005c
  .word 0x10000002
  .word 0x0200102d
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00491CC0
asm int FUN_00491cc0(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x27b10054
  .word 0x0c124778
  .word 0xafa40050
  .word 0x14400003
  .word 0xae220000
  .word 0x10000032
  .word 0x0000102d
  .word 0x8fa20050
  .word 0x0c132b38
  .word 0x8c440004
  .word 0x8e230000
  .word 0xac620004
  .word 0x8e240000
  .word 0x8c820004
  .word 0x1040001b
  .word 0x00000000
  .word 0x27b00058
  .word 0x24020001
  .word 0xae020000
  .word 0x8fa20050
  .word 0x24530008
  .word 0x8c420008
  .word 0x10530009
  .word 0x00000000
  .word 0x8c520000
  .word 0x2444ffc0
  .word 0x0c124234
  .word 0x27a50050
  .word 0x10400003
  .word 0x00000000
  .word 0x1653fff9
  .word 0x0240102d
  .word 0x8fa20050
  .word 0x0c132b4c
  .word 0x8c440004
  .word 0x8e020000
  .word 0x14400009
  .word 0x00000000
  .word 0x0c1247a8
  .word 0x8e240000
  .word 0x1000000f
  .word 0x0000102d
  .word 0x0c1247a8
  .word 0x00000000
  .word 0x1000000b
  .word 0x0000102d
  .word 0x8fa30050
  .word 0x3c040078
  .word 0x8e220000
  .word 0x8c630028
  .word 0xac430028
  .word 0x8e250000
  .word 0x8fa60050
  .word 0x0c131974
  .word 0x2484dd00
  .word 0x8e220000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00491DE0
asm long FUN_00491de0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c030096
  .word 0xffbf0010
  .word 0x3c020003
  .word 0x7fb00000
  .word 0x34450010
  .word 0x8f84bb30
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c420188
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640004
  .word 0x0040802d
  .word 0x1200001a
  .word 0x00000000
  .word 0x24020002
  .word 0x3c040078
  .word 0xa2020000
  .word 0x26070008
  .word 0xa2000001
  .word 0x3c020049
  .word 0xa2000002
  .word 0x26060010
  .word 0xa2000003
  .word 0x26030018
  .word 0xae000004
  .word 0x24420d80
  .word 0xae070008
  .word 0x2484dd00
  .word 0xae07000c
  .word 0x0200282d
  .word 0xae060010
  .word 0xae060014
  .word 0xae030018
  .word 0xae03001c
  .word 0xae000024
  .word 0xae000020
  .word 0x0c13192c
  .word 0xae020028
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00491EA0
asm u32 FUN_00491ea0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x3c040078
  .word 0x0200282d
  .word 0x0c131958
  .word 0x2484dd00
  .word 0x8e130008
  .word 0x26120008
  .word 0x1272000a
  .word 0x00000000
  .word 0x2671ffc0
  .word 0x8e730000
  .word 0x0c1246a0
  .word 0x0220202d
  .word 0x12200004
  .word 0x00000000
  .word 0x1672fff9
  .word 0x00000000
  .word 0x00000000
  .word 0x8e130010
  .word 0x26110010
  .word 0x1271000f
  .word 0x00000000
  .word 0x8f83bb24
  .word 0x2662fffc
  .word 0x8e730000
  .word 0x00439023
  .word 0x02431021
  .word 0x8c440000
  .word 0x0c124808
  .word 0x0240282d
  .word 0x0c1251d8
  .word 0x0240202d
  .word 0x12400003
  .word 0x00000000
  .word 0x1671fff3
  .word 0x00000000
  .word 0x8e130018
  .word 0x26110018
  .word 0x1271000f
  .word 0x00000000
  .word 0x8f83bb20
  .word 0x2662fffc
  .word 0x8e730000
  .word 0x00439023
  .word 0x02431021
  .word 0x8c440000
  .word 0x0c124818
  .word 0x0240282d
  .word 0x0c13280c
  .word 0x0240202d
  .word 0x12400003
  .word 0x00000000
  .word 0x1671fff3
  .word 0x00000000
  .word 0x8e040004
  .word 0x10800003
  .word 0x00000000
  .word 0x0c132c6c
  .word 0x00000000
  .word 0x8f84bb30
  .word 0x3c030096
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x00641821
  .word 0x8c640004
  .word 0x0040f809
  .word 0x0200282d
  .word 0xdfbf0040
  .word 0x24020001
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
}

// FUN_00491FF0
asm u64 FUN_00491ff0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x8c870008
  .word 0x24830008
  .word 0x24a60040
  .word 0x0080102d
  .word 0xaca70040
  .word 0xaca30044
  .word 0x8c830008
  .word 0xac660004
  .word 0xac860008
  .word 0x03e00008
  .word 0xaca4003c
  .word 0x00000000
}

#pragma schedule on
// FUN_00492020

u64 FUN_00492020(u64 param_1,int param_2)
{
  u64 result;
  u32 *puVar1;
  u32 first;
  u32 second;

  result = param_1;
  puVar1 = (u32 *)((u8 *)param_2 + iGpffffbb24);
  first = puVar1[1];
  second = puVar1[2];
  *(u32 *)second = first;
  second = puVar1[2];
  first = puVar1[1];
  *(u32 *)(first + 4) = second;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return result;
}

#pragma schedule on
// FUN_00492060

u64 FUN_00492060(u64 param_1,int param_2)
{
  u64 result;
  u32 *puVar1;
  u32 first;
  u32 second;

  result = param_1;
  puVar1 = (u32 *)(param_2 + iGpffffbb20);
  first = puVar1[1];
  second = puVar1[2];
  *(u32 *)second = first;
  second = puVar1[2];
  first = puVar1[1];
  *(u32 *)(first + 4) = second;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return result;
}

#pragma schedule off
// FUN_004920A0 NONMATCHING

long FUN_004920a0(u64 param_1)

{
  u8 bVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long unaff_s0;
  int iVar5;
  long unaff_s1;
  int iVar6;
  long unaff_s2;
  int iVar7;
  u32 uStack_90;
  u32 uStack_8c;
  u32 uStack_88;
  u32 uStack_84;
  u32 uStack_80;
  u32 uStack_7c;
  u32 uStack_78;
  u32 uStack_74;
  u32 uStack_70;
  u32 uStack_6c;
  u32 uStack_68;
  u32 uStack_64;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_44;
  int iStack_40;
  int iStack_3c;
  u32 *apuStack_38 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  u32 uStack_20;
  u32 uStack_1c;
  int iStack_14;
  int iStack_10;
  u8 auStack_c [4];
  u32 uStack_8;
  u8 auStack_4 [4];
  
  lVar2 = ((code)FUN_004c1600)(param_1,1,auStack_4,&uStack_8);
  if (lVar2 == 0) {
    uStack_20 = 2;
    uStack_1c = ((code)FUN_004c1d10)(0xffffffff8000001a);
    ((code)FUN_004c1c50)(&uStack_20);
    lVar2 = 0;
  }
  else if ((uStack_8 < 0x35000) || (0x37002 < uStack_8)) {
    uStack_90 = 2;
    uStack_8c = ((code)FUN_004c1d10)(0xffffffff80000004);
    ((code)FUN_004c1c50)(&uStack_90);
    lVar2 = 0;
  }
  else {
    lVar2 = ((code)FUN_004c5250)(param_1,&iStack_30,0xc);
    if (lVar2 == 0xc) {
      lVar2 = ((code)FUN_00491de0)();
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar3 = ((code)FUN_004c1600)(param_1,0xe,0,auStack_c);
        iVar7 = (int)lVar2;
        if (lVar3 == 0) {
          ((code)FUN_004c6560)(0x77dd00,lVar2);
          ((code)FUN_004916d0)(lVar2,0x490d90,0);
          ((code)FUN_004917f0)(lVar2,0x490d00,0);
          ((code)FUN_00491760)(lVar2,0x490d40,0);
          if (*(int *)(iVar7 + 4) != 0) {
            ((code)FUN_004cb1b0)();
          }
          (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
          uStack_50 = 2;
          uStack_4c = ((code)FUN_004c1d10)(0xffffffff8000001a);
          ((code)FUN_004c1c50)(&uStack_50);
          lVar2 = 0;
        }
        else {
          lVar3 = ((code)FUN_004c7d80)(param_1,apuStack_38);
          if (lVar3 == 0) {
            ((code)FUN_004c6560)(0x77dd00,lVar2);
            ((code)FUN_004916d0)(lVar2,0x490d90,0);
            ((code)FUN_004917f0)(lVar2,0x490d00,0);
            ((code)FUN_00491760)(lVar2,0x490d40,0);
            if (*(int *)(iVar7 + 4) != 0) {
              ((code)FUN_004cb1b0)();
            }
            (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
            uStack_58 = 2;
            uStack_54 = ((code)FUN_004c1d10)(0xffffffff8000001a);
            ((code)FUN_004c1c50)(&uStack_58);
            lVar2 = 0;
          }
          else {
            *(u32 *)(iVar7 + 4) = *apuStack_38[0];
            lVar3 = ((code)FUN_004c1600)(param_1,0x1a,0,auStack_c);
            if (lVar3 == 0) {
              ((code)FUN_004c7d30)(apuStack_38);
              ((code)FUN_004c6560)(0x77dd00,lVar2);
              ((code)FUN_004916d0)(lVar2,0x490d90,0);
              ((code)FUN_004917f0)(lVar2,0x490d00,0);
              ((code)FUN_00491760)(lVar2,0x490d40,0);
              if (*(int *)(iVar7 + 4) != 0) {
                ((code)FUN_004cb1b0)();
              }
              (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
              uStack_60 = 2;
              uStack_5c = ((code)FUN_004c1d10)(0xffffffff8000001a);
              ((code)FUN_004c1c50)(&uStack_60);
              lVar2 = 0;
            }
            else {
              lVar3 = ((code)FUN_00490980)(param_1,&iStack_40);
              if (lVar3 == 0) {
                ((code)FUN_004c7d30)(apuStack_38);
                ((code)FUN_004c6560)(0x77dd00,lVar2);
                ((code)FUN_004916d0)(lVar2,0x490d90,0);
                ((code)FUN_004917f0)(lVar2,0x490d00,0);
                ((code)FUN_00491760)(lVar2,0x490d40,0);
                if (*(int *)(iVar7 + 4) != 0) {
                  ((code)FUN_004cb1b0)();
                }
                (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
                uStack_68 = 2;
                uStack_64 = ((code)FUN_004c1d10)(0xffffffff8000001a);
                ((code)FUN_004c1c50)(&uStack_68);
                lVar2 = 0;
              }
              else {
                iVar6 = 0;
                if (0 < iStack_30) {
                  do {
                    lVar3 = ((code)FUN_004c1600)(param_1,0x14,0,&uStack_8);
                    bVar1 = 0;
                    if (lVar3 != 0) {
                      unaff_s2 = ((code)FUN_00490dc0)(param_1,apuStack_38,&iStack_40);
                      bVar1 = unaff_s2 != 0;
                    }
                    if (!bVar1) {
                      iVar6 = 0;
                      if (0 < iStack_3c) {
                        iVar5 = 0;
                        do {
                          ((code)FUN_00493b60)(*(u32 *)(iStack_40 + iVar5));
                          iVar6 = iVar6 + 1;
                          iVar5 = iVar5 + 4;
                        } while (iVar6 < iStack_3c);
                      }
                      if (iStack_40 != 0) {
                        (*DAT_0096017c)();
                        iStack_40 = 0;
                      }
                      ((code)FUN_004c7d30)(apuStack_38);
                      ((code)FUN_004c6560)(0x77dd00,lVar2);
                      ((code)FUN_004916d0)(lVar2,0x490d90,0);
                      ((code)FUN_004917f0)(lVar2,0x490d00,0);
                      ((code)FUN_00491760)(lVar2,0x490d40,0);
                      if (*(int *)(iVar7 + 4) != 0) {
                        ((code)FUN_004cb1b0)();
                      }
                      (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
                      uStack_70 = 2;
                      uStack_6c = ((code)FUN_004c1d10)(0xffffffff8000001a);
                      ((code)FUN_004c1c50)(&uStack_70);
                      return 0;
                    }
                    iVar5 = (int)unaff_s2;
                    iVar6 = iVar6 + 1;
                    *(u32 *)(iVar5 + 0x40) = *(u32 *)(iVar7 + 8);
                    *(int *)(iVar5 + 0x44) = iVar7 + 8;
                    *(int *)(*(int *)(iVar7 + 8) + 4) = iVar5 + 0x40;
                    *(int *)(iVar7 + 8) = iVar5 + 0x40;
                    *(int *)(iVar5 + 0x3c) = iVar7;
                  } while (iVar6 < iStack_30);
                }
                iVar6 = 0;
                if (0 < iStack_2c) {
                  do {
                    lVar3 = ((code)FUN_004c1600)(param_1,1,0,0);
                    bVar1 = 0;
                    if (lVar3 != 0) {
                      lVar3 = ((code)FUN_004c1910)(param_1,&iStack_10,4);
                      bVar1 = lVar3 != 0;
                    }
                    lVar3 = 0;
                    if (bVar1) {
                      lVar3 = ((code)FUN_004c1600)(param_1,0x12,0,0);
                    }
                    bVar1 = 0;
                    if (lVar3 != 0) {
                      unaff_s1 = ((code)FUN_00494580)(param_1);
                      bVar1 = unaff_s1 != 0;
                    }
                    if (!bVar1) {
                      iVar6 = 0;
                      if (0 < iStack_3c) {
                        iVar5 = 0;
                        do {
                          ((code)FUN_00493b60)(*(u32 *)(iStack_40 + iVar5));
                          iVar6 = iVar6 + 1;
                          iVar5 = iVar5 + 4;
                        } while (iVar6 < iStack_3c);
                      }
                      if (iStack_40 != 0) {
                        (*DAT_0096017c)();
                        iStack_40 = 0;
                      }
                      ((code)FUN_004c7d30)(apuStack_38);
                      ((code)FUN_004c6560)(0x77dd00,lVar2);
                      ((code)FUN_004916d0)(lVar2,0x490d90,0);
                      ((code)FUN_004917f0)(lVar2,0x490d00,0);
                      ((code)FUN_00491760)(lVar2,0x490d40,0);
                      if (*(int *)(iVar7 + 4) != 0) {
                        ((code)FUN_004cb1b0)();
                      }
                      (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
                      uStack_78 = 2;
                      uStack_74 = ((code)FUN_004c1d10)(0xffffffff8000001a);
                      ((code)FUN_004c1c50)(&uStack_78);
                      return 0;
                    }
                    ((code)FUN_004d1840)(unaff_s1,apuStack_38[0][iStack_10]);
                    iVar6 = iVar6 + 1;
                    piVar4 = (int *)((int)unaff_s1 + iGpffffbb24);
                    piVar4[1] = *(int *)(iVar7 + 0x10);
                    piVar4[2] = iVar7 + 0x10;
                    *(int **)(*(int *)(iVar7 + 0x10) + 4) = piVar4 + 1;
                    *(int **)(iVar7 + 0x10) = piVar4 + 1;
                    *piVar4 = iVar7;
                  } while (iVar6 < iStack_2c);
                }
                iVar6 = 0;
                if (0 < iStack_28) {
                  do {
                    lVar3 = ((code)FUN_004c1600)(param_1,1,0,0);
                    bVar1 = 0;
                    if (lVar3 != 0) {
                      lVar3 = ((code)FUN_004c1910)(param_1,&iStack_14,4);
                      bVar1 = lVar3 != 0;
                    }
                    lVar3 = 0;
                    if (bVar1) {
                      lVar3 = ((code)FUN_004c1600)(param_1,5,0,0);
                    }
                    bVar1 = 0;
                    if (lVar3 != 0) {
                      unaff_s0 = ((code)FUN_004c7b90)(param_1);
                      bVar1 = unaff_s0 != 0;
                    }
                    if (!bVar1) {
                      iVar6 = 0;
                      if (0 < iStack_3c) {
                        iVar5 = 0;
                        do {
                          ((code)FUN_00493b60)(*(u32 *)(iStack_40 + iVar5));
                          iVar6 = iVar6 + 1;
                          iVar5 = iVar5 + 4;
                        } while (iVar6 < iStack_3c);
                      }
                      if (iStack_40 != 0) {
                        (*DAT_0096017c)();
                        iStack_40 = 0;
                      }
                      ((code)FUN_004c7d30)(apuStack_38);
                      ((code)FUN_004c6560)(0x77dd00,lVar2);
                      ((code)FUN_004916d0)(lVar2,0x490d90,0);
                      ((code)FUN_004917f0)(lVar2,0x490d00,0);
                      ((code)FUN_00491760)(lVar2,0x490d40,0);
                      if (*(int *)(iVar7 + 4) != 0) {
                        ((code)FUN_004cb1b0)();
                      }
                      (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
                      uStack_80 = 2;
                      uStack_7c = ((code)FUN_004c1d10)(0xffffffff8000001a);
                      ((code)FUN_004c1c50)(&uStack_80);
                      return 0;
                    }
                    ((code)FUN_004d1840)(unaff_s0,apuStack_38[0][iStack_14]);
                    iVar6 = iVar6 + 1;
                    piVar4 = (int *)((int)unaff_s0 + iGpffffbb20);
                    piVar4[1] = *(int *)(iVar7 + 0x18);
                    piVar4[2] = iVar7 + 0x18;
                    *(int **)(*(int *)(iVar7 + 0x18) + 4) = piVar4 + 1;
                    *(int **)(iVar7 + 0x18) = piVar4 + 1;
                    *piVar4 = iVar7;
                  } while (iVar6 < iStack_28);
                }
                iVar6 = 0;
                if (0 < iStack_3c) {
                  iVar5 = 0;
                  do {
                    ((code)FUN_00493b60)(*(u32 *)(iStack_40 + iVar5));
                    iVar6 = iVar6 + 1;
                    iVar5 = iVar5 + 4;
                  } while (iVar6 < iStack_3c);
                }
                if (iStack_40 != 0) {
                  (*DAT_0096017c)();
                  iStack_40 = 0;
                }
                ((code)FUN_004c7d30)(apuStack_38);
                lVar3 = ((code)FUN_004c5a50)(0x77dd00,param_1,lVar2);
                if (lVar3 == 0) {
                  ((code)FUN_004c6560)(0x77dd00,lVar2);
                  ((code)FUN_004916d0)(lVar2,0x490d90,0);
                  ((code)FUN_004917f0)(lVar2,0x490d00,0);
                  ((code)FUN_00491760)(lVar2,0x490d40,0);
                  if (*(int *)(iVar7 + 4) != 0) {
                    ((code)FUN_004cb1b0)();
                  }
                  (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + iGpffffbb30),lVar2);
                  uStack_88 = 2;
                  uStack_84 = ((code)FUN_004c1d10)(0xffffffff8000001a);
                  ((code)FUN_004c1c50)(&uStack_88);
                  lVar2 = 0;
                }
              }
            }
          }
        }
      }
    }
    else {
      uStack_48 = 2;
      uStack_44 = ((code)FUN_004c1d10)(0xffffffff8000001a);
      ((code)FUN_004c1c50)(&uStack_48);
      lVar2 = 0;
    }
  }
  return lVar2;
}

#pragma schedule on
#pragma tailcall on
// FUN_00492C30

void FUN_00492c30(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)

{
  FUN_004c61b0_raw((u32)DAT_0077dce0_abs,param_1,param_2,param_3,param_4,param_5);
}
#pragma tailcall off
#pragma schedule off

#pragma schedule on
#pragma tailcall on
// FUN_00492C60

void FUN_00492c60(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)

{
  FUN_004c61b0_raw((u32)DAT_0077dd00_abs,param_1,param_2,param_3,param_4,param_5);
}

// FUN_00492C90

void FUN_00492c90(u64 param_1,u64 param_2,u64 param_3,u64 param_4)

{
  FUN_004c5960_raw((u32)DAT_0077dce0_abs,param_1,param_2,param_3,param_4);
}

// FUN_00492CC0

void FUN_00492cc0(u64 param_1,u64 param_2)

{
  FUN_004c59b0_raw((u32)DAT_0077dce0_abs,param_1,param_2);
}

#pragma schedule on

#pragma tailcall on

// FUN_00492CE0

void FUN_00492ce0(u64 param_1,u64 param_2)

{
  FUN_004c5a00_u32((u32)DAT_0077dce0_abs,param_1,param_2);
}
#pragma tailcall off
#pragma schedule off

#pragma schedule on
// FUN_00492D00
asm void FUN_00492d00(u32 param_1)
{
  .set noreorder
  .word 0x0080282d
  .word 0x3c040078
  .word 0x0813185c
  .word 0x2484dce0
}
#pragma tailcall off
#pragma schedule off

// FUN_00492D10
asm u64 FUN_00492d10(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0c134610
  .word 0x0080802d
  .word 0x92030003
  .word 0x0200102d
  .word 0x34630001
  .word 0xa2030003
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00492D50
asm u32 FUN_00492d50(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24050fff
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8482000e
  .word 0x0080802d
  .word 0x24420001
  .word 0x0c124cdc
  .word 0xa482000e
  .word 0x3c040078
  .word 0x0200282d
  .word 0x0c131958
  .word 0x2484dd20
  .word 0x8e04005c
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae00005c
  .word 0x0c125498
  .word 0x26040020
  .word 0x8603000e
  .word 0x3c020096
  .word 0x2463ffff
  .word 0xa603000e
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0xdfbf0010
  .word 0x24020001
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x8f83bb3c
  .word 0x0080102d
  .word 0xaf85bb38
  .word 0x24630001
  .word 0x03e00008
  .word 0xaf83bb3c
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83bb3c
  .word 0x0080102d
  .word 0x2463ffff
  .word 0x03e00008
  .word 0xaf83bb3c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00492E20
asm u64 FUN_00492e20(u64 param_1,float *param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x8c820000
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080882d
  .word 0xe7b40000
  .word 0x00a0802d
  .word 0x8c520014
  .word 0x4480a000
  .word 0x8e250014
  .word 0x27a40050
  .word 0x0c131e94
  .word 0x0240302d
  .word 0xc7a6005c
  .word 0x3c023f00
  .word 0xc7a50050
  .word 0x8e260014
  .word 0xc7a40060
  .word 0x27a40074
  .word 0xc7a30054
  .word 0x27a30078
  .word 0x44820000
  .word 0x2645ffff
  .word 0xc7a20064
  .word 0xc7a10058
  .word 0x46053140
  .word 0x46032100
  .word 0x460028c2
  .word 0x46002142
  .word 0x46011040
  .word 0x46000902
  .word 0xe7a30070
  .word 0xe4850000
  .word 0x12400024
  .word 0xe4640000
  .word 0xc4c10004
  .word 0xc4c20000
  .word 0xc4c00008
  .word 0x46050841
  .word 0x46031081
  .word 0x4601081a
  .word 0x46040001
  .word 0x4602101e
  .word 0x4600001c
  .word 0x46140036
  .word 0x45010002
  .word 0x00000000
  .word 0x46000506
  .word 0x00a0102d
  .word 0x24c6000c
  .word 0x1440fff0
  .word 0x24a5ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x00000000
  .word 0x46140504
  .word 0x3c033f80
  .word 0x0220102d
  .word 0xc7a20070
  .word 0x346320c5
  .word 0x44831800
  .word 0xc7a10074
  .word 0x461418c2
  .word 0xe6020000
  .word 0xc7a00078
  .word 0xe6010004
  .word 0xe7a3007c
  .word 0xe6000008
  .word 0x10000008
  .word 0xe603000c
  .word 0x44800000
  .word 0x00000000
  .word 0x4600a036
  .word 0x4501ffee
  .word 0x00000000
  .word 0x1000ffea
  .word 0x00000000
  .word 0xdfbf0040
  .word 0xc7b40000
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
  .word 0x00000000
}

// FUN_00492F80
asm int FUN_00492f80(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020100
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830008
  .word 0x00621024
  .word 0x1440006e
  .word 0x00a0902d
  .word 0x8e640014
  .word 0x30620010
  .word 0x00041840
  .word 0x00641821
  .word 0x00031880
  .word 0x10400002
  .word 0x2471001c
  .word 0x02238821
  .word 0x8e620018
  .word 0x00521021
  .word 0x02228018
  .word 0x8e64005c
  .word 0x1080006d
  .word 0x00000000
  .word 0x3c020003
  .word 0x3446000f
  .word 0x3c020096
  .word 0x8c420180
  .word 0x0040f809
  .word 0x0200282d
  .word 0x1040005a
  .word 0x00000000
  .word 0x8e660018
  .word 0x02262818
  .word 0x001220c0
  .word 0x00922023
  .word 0x2623ffe4
  .word 0x00042080
  .word 0x00452821
  .word 0x24a8ffff
  .word 0x01043821
  .word 0x70c31818
  .word 0x10600009
  .word 0x2465ffff
  .word 0x91040000
  .word 0x00a0182d
  .word 0x24a5ffff
  .word 0xa0e40000
  .word 0x2508ffff
  .word 0x1460fffa
  .word 0x24e7ffff
  .word 0x00000000
  .word 0x8e640018
  .word 0x0000182d
  .word 0x00922021
  .word 0xae640018
  .word 0xae62005c
  .word 0x8e650018
  .word 0x000520c0
  .word 0x0005082a
  .word 0x00852023
  .word 0x00042080
  .word 0x10200023
  .word 0x00444821
  .word 0x0000402d
  .word 0x3c060100
  .word 0x8e62005c
  .word 0x00483821
  .word 0xace00014
  .word 0xace00018
  .word 0x8e620008
  .word 0x00461024
  .word 0x14400013
  .word 0x00000000
  .word 0x8e620014
  .word 0x10400010
  .word 0x00000000
  .word 0xace90014
  .word 0x8e650014
  .word 0x8e620008
  .word 0x00052040
  .word 0x00852021
  .word 0x30420010
  .word 0x00042080
  .word 0x10400007
  .word 0x01244821
  .word 0xace90018
  .word 0x8e640014
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x01224821
  .word 0x8e650018
  .word 0x24630001
  .word 0x0065102a
  .word 0x1440ffe2
  .word 0x2508001c
  .word 0x00000000
  .word 0x00b21823
  .word 0x0065082a
  .word 0x10200032
  .word 0x00000000
  .word 0x000310c0
  .word 0x00431023
  .word 0x00022080
  .word 0x8e62005c
  .word 0x24630001
  .word 0x00441021
  .word 0xac400004
  .word 0xac400008
  .word 0xac40000c
  .word 0xac400010
  .word 0xac530000
  .word 0x8e650018
  .word 0x0065102a
  .word 0x1440fff5
  .word 0x2484001c
  .word 0x10000022
  .word 0x00b21023
  .word 0x1000ff9a
  .word 0x2411001c
  .word 0x24020002
  .word 0x0200282d
  .word 0xafa20058
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2005c
  .word 0x0c130714
  .word 0x27a40058
  .word 0x10000015
  .word 0x2402ffff
  .word 0x3c020003
  .word 0x3445000f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1440ffa9
  .word 0x00000000
  .word 0x24020002
  .word 0x0200282d
  .word 0xafa20050
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa20054
  .word 0x0c130714
  .word 0x27a40050
  .word 0x10000002
  .word 0x2402ffff
  .word 0x00b21023
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3

u64
// FUN_00493210
FUN_00493210(u64 param_1,u16 *param_2,u16 param_3,u16 param_4,
            u16 param_5)
{
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[2] = param_5;
  return param_1;
}
#pragma optimization_level 2

// FUN_00493230
asm u64 FUN_00493230(u64 param_1,int param_2,long param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00c0802d
  .word 0x12000010
  .word 0x00a0882d
  .word 0x26440020
  .word 0x0c125520
  .word 0x0200282d
  .word 0x04400004
  .word 0x00000000
  .word 0xa6220006
  .word 0x1000000b
  .word 0x0240102d
  .word 0x0200282d
  .word 0x0c1254d0
  .word 0x26440020
  .word 0x0441fff9
  .word 0x00000000
  .word 0x10000004
  .word 0x0000102d
  .word 0x3402ffff
  .word 0x1000fff5
  .word 0xa6220006
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004932C0
asm u64 FUN_004932c0(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c900024
  .word 0x0010102a
  .word 0x14400003
  .word 0x0000902d
  .word 0x10000011
  .word 0x02a0102d
  .word 0x0000882d
  .word 0x8ea20020
  .word 0x00511021
  .word 0x8c440000
  .word 0x0280f809
  .word 0x0260282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x02a0102d
  .word 0x26520001
  .word 0x0250102a
  .word 0x1440fff4
  .word 0x26310004
  .word 0x1000ffef
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
  .word 0x00000000
}

// FUN_00493370
asm u64 FUN_00493370(u64 param_1,u16 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x30a6ffff
  .word 0xffbf0010
  .word 0x30a20001
  .word 0x7fb00000
  .word 0x9483000c
  .word 0x0080802d
  .word 0x00661825
  .word 0x10400007
  .word 0xa483000c
  .word 0x8e040054
  .word 0x10800004
  .word 0x00000000
  .word 0x0c125720
  .word 0x00000000
  .word 0xae000054
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004933D0
asm u64 FUN_004933d0(u64 param_1)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x0000b02d
  .word 0x7fb40050
  .word 0x0080a82d
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x0000982d
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x8c820054
  .word 0x10400003
  .word 0x0000902d
  .word 0x100000b1
  .word 0x02a0102d
  .word 0x0c1256c4
  .word 0x8ea40010
  .word 0x104000ac
  .word 0xafa200b4
  .word 0x8ea20024
  .word 0x0002082a
  .word 0x1020007d
  .word 0x00000000
  .word 0x00028080
  .word 0x3c110096
  .word 0x3c020001
  .word 0x26310178
  .word 0x34450006
  .word 0x8e220000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x0040a02d
  .word 0x3c030001
  .word 0x8e220000
  .word 0x0200202d
  .word 0x0040f809
  .word 0x34650503
  .word 0x8e230000
  .word 0x0200202d
  .word 0xafa200bc
  .word 0x3c020001
  .word 0x0060f809
  .word 0x34450503
  .word 0xafa200b8
  .word 0x8ea20010
  .word 0x0002082a
  .word 0x10200059
  .word 0x0000b82d
  .word 0x0000f02d
  .word 0x8ea2002c
  .word 0x26a40020
  .word 0x005e8821
  .word 0x96250006
  .word 0x0c1254c8
  .word 0x0000802d
  .word 0x8c440000
  .word 0x3263ffff
  .word 0x0003082a
  .word 0x0040282d
  .word 0x1020000e
  .word 0x0000502d
  .word 0x00000000
  .word 0x3142ffff
  .word 0x00021080
  .word 0x02821021
  .word 0x8c420000
  .word 0x10440007
  .word 0x00000000
  .word 0x25420001
  .word 0x304affff
  .word 0x0143102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x00000000
  .word 0x3142ffff
  .word 0x10430058
  .word 0x00000000
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x8c900000
  .word 0x00000000
  .word 0x3244ffff
  .word 0x0004082a
  .word 0x1020000d
  .word 0x0000582d
  .word 0x3162ffff
  .word 0x00021880
  .word 0x8fa200bc
  .word 0x00431021
  .word 0x8c420000
  .word 0x10500006
  .word 0x00000000
  .word 0x25620001
  .word 0x304bffff
  .word 0x0164102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x3162ffff
  .word 0x10440046
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca20008
  .word 0x32c7ffff
  .word 0x0007082a
  .word 0x1020000e
  .word 0x0000182d
  .word 0x00000000
  .word 0x3064ffff
  .word 0x00043080
  .word 0x8fa400b8
  .word 0x00862021
  .word 0x8c840000
  .word 0x10820006
  .word 0x00000000
  .word 0x24630001
  .word 0x3063ffff
  .word 0x0067202a
  .word 0x1480fff5
  .word 0x00000000
  .word 0x3064ffff
  .word 0x10870038
  .word 0x00000000
  .word 0x00000000
  .word 0xffa30000
  .word 0x8fa400b4
  .word 0x96270002
  .word 0x96280004
  .word 0x96290006
  .word 0x0c12573c
  .word 0x96260000
  .word 0x8ea20010
  .word 0x26f70001
  .word 0x02e2102a
  .word 0x1440ffaa
  .word 0x27de0008
  .word 0x3c100096
  .word 0x2610017c
  .word 0x8e020000
  .word 0x0040f809
  .word 0x0280202d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x8fa400bc
  .word 0x8e020000
  .word 0x0040f809
  .word 0x8fa400b8
  .word 0x8ea20008
  .word 0x30420001
  .word 0x10400006
  .word 0x00000000
  .word 0x8fa400b4
  .word 0x0c126450
  .word 0x24050001
  .word 0x10000004
  .word 0x00000000
  .word 0x8fa400b4
  .word 0x0c126450
  .word 0x0000282d
  .word 0x1040001a
  .word 0x00000000
  .word 0xaea20054
  .word 0x1000001c
  .word 0x02a0102d
  .word 0x00021880
  .word 0x26620001
  .word 0x02831821
  .word 0x3053ffff
  .word 0x1000ffa5
  .word 0xac640000
  .word 0x00021880
  .word 0x8fa200bc
  .word 0x00431821
  .word 0x26420001
  .word 0xac700000
  .word 0x1000ffb6
  .word 0x3052ffff
  .word 0x00000000
  .word 0x00043080
  .word 0x8fa400b8
  .word 0x00863021
  .word 0x26c40001
  .word 0xacc20000
  .word 0x1000ffc4
  .word 0x3096ffff
  .word 0x00000000
  .word 0x0c125708
  .word 0x8fa400b4
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
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
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}

// FUN_00493710
asm u8 * FUN_00493710(int param_1,int param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x06a00041
  .word 0x7fb00000
  .word 0x3c010001
  .word 0x02a1082a
  .word 0x1020003d
  .word 0x00000000
  .word 0x0680003b
  .word 0x00000000
  .word 0x3c020078
  .word 0x8c44dd20
  .word 0x3c0200ff
  .word 0x02621024
  .word 0x10400003
  .word 0x326600ff
  .word 0x10000008
  .word 0x00028c02
  .word 0x32620080
  .word 0x10400003
  .word 0x00000000
  .word 0x10000003
  .word 0x24110002
  .word 0x32620004
  .word 0x0002882b
  .word 0x24020001
  .word 0x16220003
  .word 0x00000000
  .word 0x10000007
  .word 0x24050004
  .word 0x2e210002
  .word 0x14200003
  .word 0x00000000
  .word 0x10000002
  .word 0x24050080
  .word 0x0000282d
  .word 0x2403ff7b
  .word 0x3c020100
  .word 0x00c31824
  .word 0x0262b024
  .word 0x16c0000d
  .word 0x00658025
  .word 0x32020008
  .word 0x10400003
  .word 0x00000000
  .word 0x00151080
  .word 0x00822021
  .word 0x12200004
  .word 0x00000000
  .word 0x001510c0
  .word 0x02221018
  .word 0x00822021
  .word 0x001410c0
  .word 0x00822021
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c420178
  .word 0x0040f809
  .word 0x3465000f
  .word 0x0040902d
  .word 0x12400016
  .word 0x00000000
  .word 0x0c1254c0
  .word 0x26440020
  .word 0x14400014
  .word 0x00000000
  .word 0x100000b6
  .word 0x0000102d
  .word 0x06a0000c
  .word 0x00000000
  .word 0x3c020001
  .word 0x02a2102a
  .word 0x14400008
  .word 0x00000000
  .word 0x24020002
  .word 0x24040006
  .word 0x0c130744
  .word 0xafa20088
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x100000a7
  .word 0x0000102d
  .word 0x100000a5
  .word 0x0000102d
  .word 0xae40005c
  .word 0x24030008
  .word 0xae400018
  .word 0x24020001
  .word 0xa2430000
  .word 0x26440034
  .word 0xa2400001
  .word 0x0000282d
  .word 0xa2400002
  .word 0x24060020
  .word 0xa2400003
  .word 0xae400004
  .word 0xae400058
  .word 0xa640000c
  .word 0xa642000e
  .word 0xae400054
  .word 0x0c148502
  .word 0xae51001c
  .word 0xae400030
  .word 0x3c020f00
  .word 0x02621024
  .word 0xae40002c
  .word 0x02021025
  .word 0xae540010
  .word 0xae420008
  .word 0x16c00078
  .word 0xae550014
  .word 0x3c020078
  .word 0x32030008
  .word 0x8c42dd20
  .word 0x10600006
  .word 0x02423821
  .word 0x12a00004
  .word 0x00000000
  .word 0xae470030
  .word 0x00151080
  .word 0x00e23821
  .word 0x1220002e
  .word 0x00000000
  .word 0x12a0002c
  .word 0x00000000
  .word 0x0011082b
  .word 0x10200029
  .word 0x0000302d
  .word 0x2e210009
  .word 0x14200018
  .word 0x2624fff8
  .word 0x0240282d
  .word 0x001518c0
  .word 0xaca70034
  .word 0x00e31021
  .word 0xaca20038
  .word 0x24c60008
  .word 0x00431021
  .word 0xaca2003c
  .word 0x00431021
  .word 0xaca20040
  .word 0x00431021
  .word 0xaca20044
  .word 0x00431021
  .word 0xaca20048
  .word 0x00431021
  .word 0xaca2004c
  .word 0x00431021
  .word 0xaca20050
  .word 0x00433821
  .word 0x00c4102b
  .word 0x1440ffed
  .word 0x24a50020
  .word 0x00000000
  .word 0x00d1082b
  .word 0x1020000c
  .word 0x00000000
  .word 0x00061080
  .word 0x001518c0
  .word 0x02422021
  .word 0x24c60001
  .word 0xac870034
  .word 0x00d1102b
  .word 0x00e33821
  .word 0x24840004
  .word 0x1440fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x1280003d
  .word 0x00000000
  .word 0x0014082a
  .word 0xae47002c
  .word 0x10200039
  .word 0x0000102d
  .word 0x2a810009
  .word 0x1420002a
  .word 0x2686fff8
  .word 0x0280082a
  .word 0x14200007
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0281082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24030001
  .word 0x1060001f
  .word 0x00000000
  .word 0x0000382d
  .word 0x3405ffff
  .word 0x8e44002c
  .word 0x24420008
  .word 0x0046182a
  .word 0x00872021
  .word 0xa4850006
  .word 0x8e44002c
  .word 0x00872021
  .word 0xa485000e
  .word 0x8e44002c
  .word 0x00872021
  .word 0xa4850016
  .word 0x8e44002c
  .word 0x00872021
  .word 0xa485001e
  .word 0x8e44002c
  .word 0x00872021
  .word 0xa4850026
  .word 0x8e44002c
  .word 0x00872021
  .word 0xa485002e
  .word 0x8e44002c
  .word 0x00872021
  .word 0xa4850036
  .word 0x8e44002c
  .word 0x00872021
  .word 0xa485003e
  .word 0x1460ffe5
  .word 0x24e70040
  .word 0x0054082a
  .word 0x1020000a
  .word 0x00000000
  .word 0x000230c0
  .word 0x3405ffff
  .word 0x8e44002c
  .word 0x24420001
  .word 0x0054182a
  .word 0x00862021
  .word 0xa4850006
  .word 0x1460fffa
  .word 0x24c60008
  .word 0x0240202d
  .word 0x0c124be0
  .word 0x24050001
  .word 0x04400007
  .word 0x00000000
  .word 0x3c040078
  .word 0x0240282d
  .word 0x0c13192c
  .word 0x2484dd20
  .word 0x10000008
  .word 0x0240102d
  .word 0x0c125498
  .word 0x26440020
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0240202d
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
  .word 0x27bd0090
}

#pragma schedule on
// FUN_00493B40

u32 FUN_00493b40(u32 param_1)
{
  short sVar1;
  
  sVar1 = *(short *)((int)param_1 + 0xe);
  sVar1 = sVar1 + 1;
  *(short *)((int)param_1 + 0xe) = sVar1;
  return param_1;
}
#pragma schedule off

// FUN_00493B60
asm u32 FUN_00493b60(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24020001
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8483000e
  .word 0x2463ffff
  .word 0x18600006
  .word 0x0080802d
  .word 0x8603000e
  .word 0x2463ffff
  .word 0xa603000e
  .word 0x1000002c
  .word 0xdfbf0010
  .word 0x8e040058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8602000e
  .word 0x2442ffff
  .word 0xa602000e
  .word 0x8602000e
  .word 0x24420001
  .word 0xa602000e
  .word 0x9602000c
  .word 0x34420fff
  .word 0xa602000c
  .word 0x8e040054
  .word 0x10800004
  .word 0x00000000
  .word 0x0c125720
  .word 0x00000000
  .word 0xae000054
  .word 0x3c040078
  .word 0x0200282d
  .word 0x0c131958
  .word 0x2484dd20
  .word 0x8e04005c
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae00005c
  .word 0x0c125498
  .word 0x26040020
  .word 0x8603000e
  .word 0x3c020096
  .word 0x2463ffff
  .word 0xa603000e
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000ffd4
  .word 0x24020001
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

#pragma schedule on
#pragma tailcall on
// FUN_00493C50

void FUN_00493c50(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)

{
  FUN_004c61b0_raw((u32)DAT_0077dd20_abs,param_1,param_2,param_3,param_4,param_5);
}
#pragma tailcall off

#pragma schedule on
#pragma tailcall on
// FUN_00493C80

void FUN_00493c80(u64 param_1,u64 param_2,u64 param_3,u64 param_4)

{
  FUN_004c5960_raw((u32)DAT_0077dd20_abs,param_1,param_2,param_3,param_4);
}
#pragma tailcall off

// FUN_00493CB0
asm int FUN_00493cb0(u64 param_1)
{
  .set noreorder
  .word 0x27bdff30
  .word 0x24050001
  .word 0xffbf0070
  .word 0x0000302d
  .word 0x7fb60060
  .word 0x27a700cc
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa300cc
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
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300c0
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200c4
  .word 0x0c130714
  .word 0x27a400c0
  .word 0x100001ca
  .word 0x0000102d
  .word 0x100001c8
  .word 0x0000102d
  .word 0x02a0202d
  .word 0x27a500a0
  .word 0x0c131494
  .word 0x24060010
  .word 0x24030010
  .word 0x10430003
  .word 0x00000000
  .word 0x100001bf
  .word 0x0000102d
  .word 0x8fa400a8
  .word 0x8fa500a4
  .word 0x0c124dc4
  .word 0x8fa600a0
  .word 0x0040a02d
  .word 0x128000b0
  .word 0x00000000
  .word 0x8fa200ac
  .word 0x28410002
  .word 0x102000ae
  .word 0x00000000
  .word 0x8e830008
  .word 0x3c020100
  .word 0x00621024
  .word 0x14400047
  .word 0x00000000
  .word 0x8e830014
  .word 0x10600044
  .word 0x00000000
  .word 0x8fa200a0
  .word 0x30420008
  .word 0x144000bc
  .word 0x00000000
  .word 0x8e83001c
  .word 0x1860001b
  .word 0x00000000
  .word 0x8e820014
  .word 0x0003082a
  .word 0x0000902d
  .word 0x10200016
  .word 0x000280c0
  .word 0x0280882d
  .word 0x8e250034
  .word 0x02a0202d
  .word 0x0c13062c
  .word 0x0200302d
  .word 0x1440000a
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x184000c5
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x10000190
  .word 0x0000102d
  .word 0x8e82001c
  .word 0x26520001
  .word 0x0242102a
  .word 0x1440ffed
  .word 0x26310004
  .word 0x8e920010
  .word 0x12400020
  .word 0x00000000
  .word 0x8e90002c
  .word 0x001288c0
  .word 0x02a0202d
  .word 0x0220302d
  .word 0x0c131494
  .word 0x0200282d
  .word 0x1222000a
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x184000b8
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x10000177
  .word 0x0000102d
  .word 0x1240000d
  .word 0x2645ffff
  .word 0x8e040000
  .word 0x00a0102d
  .word 0x24a5ffff
  .word 0x00041c02
  .word 0xa6030000
  .word 0xa6040002
  .word 0x8e040004
  .word 0x00041c02
  .word 0xa6030004
  .word 0xa6040006
  .word 0x1440fff5
  .word 0x26100008
  .word 0x8e820018
  .word 0x0002082a
  .word 0x1020003d
  .word 0x0000982d
  .word 0x0000902d
  .word 0x27b60090
  .word 0x27b10094
  .word 0x8e82005c
  .word 0x02a0202d
  .word 0x27a50080
  .word 0x24060018
  .word 0x0c131494
  .word 0x00528021
  .word 0x24030018
  .word 0x1043000a
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x1840009d
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x10000150
  .word 0x0000102d
  .word 0xc7a30080
  .word 0xc7a20084
  .word 0xc7a10088
  .word 0xc7a0008c
  .word 0xe6030004
  .word 0xe6020008
  .word 0xe601000c
  .word 0xe6000010
  .word 0x8ec30000
  .word 0x14600099
  .word 0x00000000
  .word 0x146000b8
  .word 0x00000000
  .word 0x8e220000
  .word 0x10400013
  .word 0x00000000
  .word 0x8e830014
  .word 0x02a0202d
  .word 0x8e050018
  .word 0x00031040
  .word 0x00431021
  .word 0x0c13062c
  .word 0x00023080
  .word 0x1440000a
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x184000c6
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x1000012e
  .word 0x0000102d
  .word 0x8e820018
  .word 0x26730001
  .word 0x0262102a
  .word 0x1440ffc8
  .word 0x2652001c
  .word 0x02a0202d
  .word 0x24050008
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700cc
  .word 0x104000c1
  .word 0x00000000
  .word 0x8fa300cc
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x144000bd
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x102000b8
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0c125530
  .word 0x26850020
  .word 0x144000dc
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x184000cc
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x10000109
  .word 0x0000102d
  .word 0x10000107
  .word 0x0000102d
  .word 0x2445ffff
  .word 0x0c124be0
  .word 0x0280202d
  .word 0x0441ff4f
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x18400006
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x100000f9
  .word 0x0000102d
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000fff3
  .word 0x00000000
  .word 0x8e850030
  .word 0x00038080
  .word 0x02a0202d
  .word 0x0c131494
  .word 0x0200302d
  .word 0x1202ff3f
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x18400006
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x100000dd
  .word 0x0000102d
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000fff3
  .word 0x00000000
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000ff34
  .word 0x00000000
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000ff41
  .word 0x00000000
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000ff5c
  .word 0x00000000
  .word 0x8e220000
  .word 0x1040ff66
  .word 0x00000000
  .word 0x8e830014
  .word 0x02a0202d
  .word 0x8e050014
  .word 0x00031040
  .word 0x00431021
  .word 0x0c13062c
  .word 0x000230c0
  .word 0x1440ff74
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x18400006
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x10000098
  .word 0x0000102d
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000fff3
  .word 0x00000000
  .word 0x8e830014
  .word 0x02a0202d
  .word 0x8e050014
  .word 0x00031040
  .word 0x00431021
  .word 0x0c13062c
  .word 0x00023080
  .word 0x1440ff41
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x18400006
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x1000007a
  .word 0x0000102d
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000fff3
  .word 0x00000000
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000ff33
  .word 0x00000000
  .word 0x10000060
  .word 0x0000102d
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x1840000e
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300b8
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200bc
  .word 0x0c130714
  .word 0x27a400b8
  .word 0x1000004f
  .word 0x0000102d
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000ffec
  .word 0x24030002
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000ff2d
  .word 0x00000000
  .word 0x3c040078
  .word 0x02a0282d
  .word 0x2484dd20
  .word 0x0c131694
  .word 0x0280302d
  .word 0x14400016
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x18400006
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x10000027
  .word 0x0000102d
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000fff3
  .word 0x00000000
  .word 0x0c124cf4
  .word 0x0280202d
  .word 0x14400016
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0x18400006
  .word 0x00000000
  .word 0x8682000e
  .word 0x2442ffff
  .word 0xa682000e
  .word 0x1000000e
  .word 0x0000102d
  .word 0x8e840058
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8682000e
  .word 0x0280202d
  .word 0x2442ffff
  .word 0x0c124b54
  .word 0xa682000e
  .word 0x1000fff3
  .word 0x00000000
  .word 0x0280102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x081251d8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_004944B0
asm u64 FUN_004944b0(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0xc4a30000
  .word 0xc4a20004
  .word 0xc4a10008
  .word 0xc4a0000c
  .word 0xe4830018
  .word 0xe482001c
  .word 0xe4810020
  .word 0xe4800024
  .word 0xc4810018
  .word 0xc480001c
  .word 0x46000832
  .word 0x45010004
  .word 0x00000000
  .word 0xa0800003
  .word 0x10000008
  .word 0x0080102d
  .word 0xc4800020
  .word 0x46000832
  .word 0x4500fffa
  .word 0x00000000
  .word 0x24020001
  .word 0x1000fff8
  .word 0xa0820003
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma schedule on
#pragma tailcall on
// FUN_00494520

void FUN_00494520(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)

{
  FUN_004c61b0_raw((u32)DAT_0077dd40_abs,param_1,param_2,param_3,param_4,param_5);
}
#pragma tailcall off

#pragma schedule on
#pragma tailcall on
// FUN_00494550

void FUN_00494550(u64 param_1,u64 param_2,u64 param_3,u64 param_4)

{
  FUN_004c5960_raw((u32)DAT_0077dd40_abs,param_1,param_2,param_3,param_4);
}
#pragma tailcall off

// FUN_00494580
asm long FUN_00494580(u64 param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x24050001
  .word 0xffbf0030
  .word 0x27a6006c
  .word 0x7fb20020
  .word 0x27a70068
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x10400019
  .word 0x00000000
  .word 0x8fa30068
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400056
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x10200051
  .word 0x00000000
  .word 0x27a40040
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060018
  .word 0x8fb0006c
  .word 0x0240202d
  .word 0x27a50040
  .word 0x0c131494
  .word 0x0200302d
  .word 0x12020005
  .word 0x00000000
  .word 0x1000004d
  .word 0x0000102d
  .word 0x1000004b
  .word 0x0000102d
  .word 0x27b00054
  .word 0x8e020000
  .word 0x00021402
  .word 0x0c1251f0
  .word 0x304400ff
  .word 0x0040882d
  .word 0x1220002f
  .word 0x00000000
  .word 0xc7a00040
  .word 0x3c010003
  .word 0x34210300
  .word 0xe6200014
  .word 0xc7a00044
  .word 0xe6200018
  .word 0xc7a00048
  .word 0xe620001c
  .word 0xc7a0004c
  .word 0xe6200020
  .word 0x8fa20068
  .word 0x0041082b
  .word 0x1020000e
  .word 0x00000000
  .word 0xc7a20050
  .word 0x3c023f80
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4602101c
  .word 0x46000803
  .word 0x46000004
  .word 0x00000000
  .word 0x46000007
  .word 0x10000003
  .word 0xe6200028
  .word 0xc7a00050
  .word 0xe6200028
  .word 0xc6210018
  .word 0xc620001c
  .word 0x46000832
  .word 0x4501000f
  .word 0x00000000
  .word 0xa2200003
  .word 0x8e020000
  .word 0x3c040078
  .word 0x0240282d
  .word 0x2484dd40
  .word 0x0220302d
  .word 0x0c131694
  .word 0xa2220002
  .word 0x1040000c
  .word 0x00000000
  .word 0x10000015
  .word 0x0220102d
  .word 0x10000013
  .word 0x0000102d
  .word 0xc6200020
  .word 0x46000832
  .word 0x4500ffef
  .word 0x00000000
  .word 0x24020001
  .word 0x1000ffed
  .word 0xa2220003
  .word 0x1000000a
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30060
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20064
  .word 0x0c130714
  .word 0x27a40060
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494760
asm u32 FUN_00494760(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x3c040078
  .word 0x0200282d
  .word 0x0c131958
  .word 0x2484dd40
  .word 0x0c134630
  .word 0x0200202d
  .word 0x8f84bb40
  .word 0x3c030096
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x00641821
  .word 0x8c640000
  .word 0x0040f809
  .word 0x0200282d
  .word 0xdfbf0010
  .word 0x24020001
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004947C0
asm long FUN_004947c0(u8 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c030003
  .word 0xffbf0020
  .word 0x34650012
  .word 0x7fb10010
  .word 0x3c020096
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f86bb40
  .word 0x3c040096
  .word 0x24840070
  .word 0x8c420188
  .word 0x00861821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x0040802d
  .word 0x12000023
  .word 0x00000000
  .word 0x24080003
  .word 0x3c050049
  .word 0xa2080000
  .word 0x3c040078
  .word 0xa2110001
  .word 0x24a544a0
  .word 0xa2000002
  .word 0x3c073f80
  .word 0xa2000003
  .word 0x24060001
  .word 0xae000004
  .word 0x2603002c
  .word 0xae050010
  .word 0x3c020096
  .word 0xae000014
  .word 0x2484dd40
  .word 0xae000028
  .word 0x0200282d
  .word 0xae070018
  .word 0xae07001c
  .word 0xae070020
  .word 0xae070024
  .word 0xa2060003
  .word 0xae03002c
  .word 0xae030030
  .word 0xae000038
  .word 0xae000034
  .word 0x9442007a
  .word 0x2442ffff
  .word 0xa602003c
  .word 0x0c13192c
  .word 0xa2080002
  .word 0x10000002
  .word 0x0200102d
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_004948B0
asm u64 FUN_004948b0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x3c050049
  .word 0x7fb00000
  .word 0x24420070
  .word 0x8f83bb40
  .word 0x0080802d
  .word 0x24a54490
  .word 0x00431021
  .word 0x8c440000
  .word 0x0c131080
  .word 0x0000302d
  .word 0x8f83bb40
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x0c130f0c
  .word 0x8c440000
  .word 0x8f83bb44
  .word 0x3c040096
  .word 0x8f85bb40
  .word 0x24840070
  .word 0x0200102d
  .word 0x2463ffff
  .word 0x00852021
  .word 0xaf83bb44
  .word 0xac800000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_00494930
asm u64 FUN_00494930(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c080096
  .word 0xffbf0010
  .word 0x3c020078
  .word 0x7fb00000
  .word 0x24060010
  .word 0x0080802d
  .word 0xaf85bb40
  .word 0x8c44dd40
  .word 0x2508ded0
  .word 0x8f85aef0
  .word 0x8f87aef4
  .word 0x3c020004
  .word 0x0c130ed8
  .word 0x34490012
  .word 0x8f84bb40
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0xac620000
  .word 0x8c620000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x0000102d
  .word 0x8f83bb44
  .word 0x0200102d
  .word 0x24630001
  .word 0xaf83bb44
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004949C0
asm u64 FUN_004949c0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24060004
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c130644
  .word 0x2785bb4c
  .word 0x10400006
  .word 0x00000000
  .word 0x24020008
  .word 0x12020005
  .word 0x00000000
  .word 0x1000000a
  .word 0x0220102d
  .word 0x10000008
  .word 0x0000102d
  .word 0x0220202d
  .word 0x2785bb48
  .word 0x0c130644
  .word 0x24060004
  .word 0x1440fff7
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494A40
asm u64 FUN_00494a40(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x8cc20008
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x2445002c
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x8e020008
  .word 0x0220202d
  .word 0x24060004
  .word 0x0c1305fc
  .word 0x24450030
  .word 0x0002880a
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x8c820008
  .word 0x10400006
  .word 0x00000000
  .word 0x8c42002c
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x24020008
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494AE0
asm u64 FUN_00494ae0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c080096
  .word 0xffbf0010
  .word 0x3c020078
  .word 0x7fb00000
  .word 0x24060004
  .word 0x0080802d
  .word 0xaf85bb50
  .word 0x8c44dd60
  .word 0x2508df00
  .word 0x8f85aef8
  .word 0x8f87aefc
  .word 0x3c020004
  .word 0x0c130ed8
  .word 0x34490007
  .word 0x8f84bb50
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0xac620000
  .word 0x8c620000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x0000102d
  .word 0x8f83bb54
  .word 0x0200102d
  .word 0x24630001
  .word 0xaf83bb54
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494B70
asm u64 FUN_00494b70(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x24420070
  .word 0x7fb00000
  .word 0x8f83bb50
  .word 0x0080802d
  .word 0x00431021
  .word 0x8c440000
  .word 0x10800008
  .word 0x00000000
  .word 0x0c130f0c
  .word 0x00000000
  .word 0x8f83bb50
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0xac400000
  .word 0x8f83bb54
  .word 0x0200102d
  .word 0x2463ffff
  .word 0xaf83bb54
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494BE0
asm long FUN_00494be0(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c030096
  .word 0xffbf0010
  .word 0x3c020003
  .word 0x7fb00000
  .word 0x34450007
  .word 0x8f84bb50
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c420188
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x0040802d
  .word 0x12000021
  .word 0x00000000
  .word 0x240500ff
  .word 0x24020001
  .word 0xa3a5002c
  .word 0x3c040078
  .word 0xa3a5002d
  .word 0x3c060078
  .word 0xa3a5002e
  .word 0x3c030078
  .word 0xa3a5002f
  .word 0x2484dd60
  .word 0x93aa002c
  .word 0x0200282d
  .word 0x93a9002d
  .word 0xa6020018
  .word 0x93a8002e
  .word 0x3c020078
  .word 0x93a7002f
  .word 0xa20a0004
  .word 0xa2090005
  .word 0xa2080006
  .word 0xa2070007
  .word 0xae000000
  .word 0xae000008
  .word 0xc4c2dd78
  .word 0xc461dd7c
  .word 0xc440dd80
  .word 0xe602000c
  .word 0xe6010010
  .word 0x0c13192c
  .word 0xe6000014
  .word 0x10000002
  .word 0x0200102d
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494CC0
asm u32 FUN_00494cc0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24020001
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x84830018
  .word 0x10620006
  .word 0x0080802d
  .word 0x86020018
  .word 0x2442ffff
  .word 0xa6020018
  .word 0x10000013
  .word 0x24020001
  .word 0x3c040078
  .word 0x0200282d
  .word 0x0c131958
  .word 0x2484dd60
  .word 0x0200202d
  .word 0x0c125354
  .word 0x0000282d
  .word 0x8f84bb50
  .word 0x3c030096
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x00641821
  .word 0x8c640000
  .word 0x0040f809
  .word 0x0200282d
  .word 0x1000ffed
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494D50
asm u64 FUN_00494d50(u64 param_1,long param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x12000004
  .word 0x0080882d
  .word 0x8e020054
  .word 0x24420001
  .word 0xae020054
  .word 0x8e240000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae300000
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

#pragma schedule on
#pragma tailcall on
// FUN_00494DB0

void FUN_00494db0(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)

{
  FUN_004c61b0_raw((u32)DAT_0077dd60_abs,param_1,param_2,param_3,param_4,param_5);
}
#pragma tailcall off

#pragma schedule on
#pragma tailcall on
// FUN_00494DE0

void FUN_00494de0(u64 param_1,u64 param_2,u64 param_3,u64 param_4)

{
  FUN_004c5960_raw((u32)DAT_0077dd60_abs,param_1,param_2,param_3,param_4);
}
#pragma tailcall off

// FUN_00494E10
asm void FUN_00494e10(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x0080102d
  .word 0x00a0302d
  .word 0x3c040078
  .word 0x0040282d
  .word 0x08131680
  .word 0x2484dd60
  .word 0x00000000
  .word 0x00000000
}

// FUN_00494E30
asm long FUN_00494e30(u64 param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x24050001
  .word 0xffbf0030
  .word 0x27a6007c
  .word 0x7fb20020
  .word 0x27a70078
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x0c130580
  .word 0x7fb00000
  .word 0x10400019
  .word 0x00000000
  .word 0x8fa30078
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x144000eb
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x102000e6
  .word 0x00000000
  .word 0x27a40040
  .word 0x0000282d
  .word 0x0c148502
  .word 0x2406001c
  .word 0x8fb0007c
  .word 0x0240202d
  .word 0x27a50040
  .word 0x0c131494
  .word 0x0200302d
  .word 0x12020005
  .word 0x00000000
  .word 0x100000e2
  .word 0x0000102d
  .word 0x100000e0
  .word 0x0000102d
  .word 0x8f84bb50
  .word 0x3c030096
  .word 0x3c020003
  .word 0x27a90046
  .word 0x27a70047
  .word 0x24630070
  .word 0x34450007
  .word 0x91280000
  .word 0x90e60000
  .word 0x3c020096
  .word 0x8c420188
  .word 0x27b00044
  .word 0x00641821
  .word 0x8c640000
  .word 0xa1280000
  .word 0x0040f809
  .word 0xa0e60000
  .word 0x0040882d
  .word 0x12200063
  .word 0x00000000
  .word 0x240500ff
  .word 0x24020001
  .word 0xa3a50074
  .word 0x3c040078
  .word 0xa3a50075
  .word 0x3c060078
  .word 0xa3a50076
  .word 0x3c030078
  .word 0xa3a50077
  .word 0x2484dd60
  .word 0x93aa0074
  .word 0x0220282d
  .word 0x93a90075
  .word 0xa6220018
  .word 0x93a80076
  .word 0x3c020078
  .word 0x93a70077
  .word 0xa22a0004
  .word 0xa2290005
  .word 0xa2280006
  .word 0xa2270007
  .word 0xae200000
  .word 0xae200008
  .word 0xc4c2dd78
  .word 0xc461dd7c
  .word 0xc440dd80
  .word 0xe622000c
  .word 0xe6210010
  .word 0x0c13192c
  .word 0xe6200014
  .word 0x12200045
  .word 0x00000000
  .word 0x92050000
  .word 0x92040001
  .word 0x92030002
  .word 0x92020003
  .word 0xa2250004
  .word 0xa2240005
  .word 0xa2230006
  .word 0xa2220007
  .word 0xc7a20050
  .word 0xc7a10054
  .word 0xc7a00058
  .word 0xe622000c
  .word 0xe6210010
  .word 0xe6200014
  .word 0xae200000
  .word 0x8fa2004c
  .word 0x1040001f
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a70078
  .word 0x1440000a
  .word 0x00000000
  .word 0x86230018
  .word 0x24020001
  .word 0x1062002a
  .word 0x00000000
  .word 0x86220018
  .word 0x2442ffff
  .word 0xa6220018
  .word 0x1000008a
  .word 0x0000102d
  .word 0x8fa30078
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400034
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1020002f
  .word 0x00000000
  .word 0x0c1320f0
  .word 0x0240202d
  .word 0xae220000
  .word 0x3c040078
  .word 0x0240282d
  .word 0x2484dd60
  .word 0x0220302d
  .word 0xaf80bb4c
  .word 0x0c131694
  .word 0xaf80bb48
  .word 0x1440005e
  .word 0x00000000
  .word 0x86230018
  .word 0x24020001
  .word 0x10620045
  .word 0x00000000
  .word 0x86220018
  .word 0x2442ffff
  .word 0xa6220018
  .word 0x1000006a
  .word 0x0000102d
  .word 0x1000ffbb
  .word 0x0000882d
  .word 0x10000066
  .word 0x0000102d
  .word 0x3c040078
  .word 0x0220282d
  .word 0x0c131958
  .word 0x2484dd60
  .word 0x8e240000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae200000
  .word 0x3c030096
  .word 0x8f84bb50
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x00641821
  .word 0x8c640000
  .word 0x0040f809
  .word 0x0220282d
  .word 0x1000ffc6
  .word 0x00000000
  .word 0x86230018
  .word 0x24020001
  .word 0x1062000e
  .word 0x00000000
  .word 0x86220018
  .word 0x2442ffff
  .word 0xa6220018
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30068
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa2006c
  .word 0x0c130714
  .word 0x27a40068
  .word 0x10000040
  .word 0x0000102d
  .word 0x3c040078
  .word 0x0220282d
  .word 0x0c131958
  .word 0x2484dd60
  .word 0x8e240000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae200000
  .word 0x3c030096
  .word 0x8f84bb50
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x00641821
  .word 0x8c640000
  .word 0x0040f809
  .word 0x0220282d
  .word 0x1000ffe3
  .word 0x24030002
  .word 0x3c040078
  .word 0x0220282d
  .word 0x0c131958
  .word 0x2484dd60
  .word 0x8e240000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae200000
  .word 0x3c030096
  .word 0x8f84bb50
  .word 0x24630070
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x00641821
  .word 0x8c640000
  .word 0x0040f809
  .word 0x0220282d
  .word 0x1000ffab
  .word 0x00000000
  .word 0x8f85bb4c
  .word 0x14a00003
  .word 0x00000000
  .word 0x10000011
  .word 0x0220102d
  .word 0x8f87bb48
  .word 0x3c040078
  .word 0x2484dd60
  .word 0x0c13170c
  .word 0x0220302d
  .word 0x1000fff8
  .word 0x00000000
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30060
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20064
  .word 0x0c130714
  .word 0x27a40060
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
}

// FUN_00495260
asm u64 FUN_00495260(u64 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c940000
  .word 0x12800012
  .word 0x0080802d
  .word 0x8e110004
  .word 0x0011082a
  .word 0x10200009
  .word 0x0000982d
  .word 0x0280902d
  .word 0x0c125330
  .word 0x8e440000
  .word 0x26730001
  .word 0xae400000
  .word 0x0271102a
  .word 0x1440fffa
  .word 0x26520004
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0280202d
  .word 0xae000000
  .word 0xae000004
  .word 0x0200102d
  .word 0xae000008
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_00495300

u32 FUN_00495300(u32 param_1)
{
  u32 *puVar1;
  
  puVar1 = (u32 *)param_1;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}
#pragma optimization_level 2


#pragma optimization_level 3
// FUN_00495320
u32 FUN_00495320(int *param_1,int param_2)
{
  return *(u32 *)(*param_1 + param_2 * 4);
}
#pragma optimization_level 2

// FUN_00495340
asm int FUN_00495340(int *param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c830004
  .word 0x8c820008
  .word 0x0062082a
  .word 0x1420001e
  .word 0x00a0882d
  .word 0x8e440000
  .word 0x24420014
  .word 0x10800027
  .word 0x00028080
  .word 0x3c020103
  .word 0x34460008
  .word 0x3c020096
  .word 0x8c420180
  .word 0x0040f809
  .word 0x0200282d
  .word 0x10400027
  .word 0x00000000
  .word 0xae420000
  .word 0x8e430008
  .word 0x24630014
  .word 0xae430008
  .word 0x8e430004
  .word 0x00031880
  .word 0x00431021
  .word 0xac510000
  .word 0x86220018
  .word 0x24420001
  .word 0xa6220018
  .word 0x8e420004
  .word 0x24420001
  .word 0xae420004
  .word 0x8e420004
  .word 0x10000020
  .word 0x2442ffff
  .word 0x8e420000
  .word 0x00031880
  .word 0x00431021
  .word 0xac510000
  .word 0x86220018
  .word 0x24420001
  .word 0xa6220018
  .word 0x8e420004
  .word 0x24420001
  .word 0xae420004
  .word 0x8e420004
  .word 0x10000013
  .word 0x2442ffff
  .word 0x3c020103
  .word 0x34450008
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000ffd9
  .word 0x00000000
  .word 0x24020002
  .word 0x0200282d
  .word 0xafa20048
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2004c
  .word 0x0c130714
  .word 0x27a40048
  .word 0x2402ffff
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

// FUN_00495480
asm void FUN_00495480(int *param_1,int param_2)
{
  .set noreorder
  .word 0x8c830004
  .word 0x1860000c
  .word 0x2462ffff
  .word 0x8c830000
  .word 0x00022080
  .word 0x00642021
  .word 0x8c830000
  .word 0x10650006
  .word 0x00000000
  .word 0x0040182d
  .word 0x2484fffc
  .word 0x1c60fffa
  .word 0x2442ffff
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
}

// FUN_004954C0
asm long FUN_004954c0(u64 param_1,long param_2)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0060
  .word 0x27a60098
  .word 0x7fb50050
  .word 0x27a70094
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0c130580
  .word 0x24050001
  .word 0x10400065
  .word 0x00000000
  .word 0x8fa30094
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400119
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x10200114
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a5009c
  .word 0x0c130644
  .word 0x24060004
  .word 0x0002102b
  .word 0x10400055
  .word 0x00000000
  .word 0xae000008
  .word 0xae000000
  .word 0xae000004
  .word 0x8fb2009c
  .word 0x12400051
  .word 0x00000000
  .word 0x8e020008
  .word 0x0052082a
  .word 0x10200016
  .word 0x00000000
  .word 0x8e040000
  .word 0x10800009
  .word 0x00129880
  .word 0x3c020103
  .word 0x34460008
  .word 0x3c020096
  .word 0x8c420180
  .word 0x0040f809
  .word 0x0260282d
  .word 0x10000007
  .word 0x00000000
  .word 0x3c020103
  .word 0x34450008
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0260202d
  .word 0x1040003c
  .word 0x00000000
  .word 0xae020000
  .word 0xae120008
  .word 0x0200102d
  .word 0x10400042
  .word 0x00000000
  .word 0x3c020001
  .word 0x8fa3009c
  .word 0x34450501
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00032080
  .word 0x0040a02d
  .word 0x0220202d
  .word 0x8fa2009c
  .word 0x0280282d
  .word 0x0c130644
  .word 0x00023080
  .word 0x0002102b
  .word 0x1040004a
  .word 0x00000000
  .word 0x8fa2009c
  .word 0x0002082a
  .word 0x10200017
  .word 0x0000a82d
  .word 0x0280902d
  .word 0x8e420000
  .word 0x0440005f
  .word 0x00000000
  .word 0x00021880
  .word 0x8e020000
  .word 0x00431021
  .word 0x8c530000
  .word 0x86620018
  .word 0x24420001
  .word 0xa6620018
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c1254d0
  .word 0x0260282d
  .word 0x0c125330
  .word 0x0260202d
  .word 0x8fa2009c
  .word 0x26b50001
  .word 0x02a2102a
  .word 0x1440ffec
  .word 0x26520004
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0280202d
  .word 0x100000c4
  .word 0x0200102d
  .word 0x100000c2
  .word 0x0000102d
  .word 0x100000c0
  .word 0x0000102d
  .word 0x100000be
  .word 0x0200102d
  .word 0x24020002
  .word 0x0260282d
  .word 0xafa20078
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2007c
  .word 0x0c130714
  .word 0x27a40078
  .word 0x1000ffbe
  .word 0x0000102d
  .word 0x8e140000
  .word 0x12800012
  .word 0x00000000
  .word 0x8e110004
  .word 0x0011082a
  .word 0x10200009
  .word 0x0000982d
  .word 0x0280902d
  .word 0x0c125330
  .word 0x8e440000
  .word 0x26730001
  .word 0xae400000
  .word 0x0271102a
  .word 0x1440fffa
  .word 0x26520004
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0280202d
  .word 0xae000000
  .word 0xae000004
  .word 0x0000102d
  .word 0x1000009b
  .word 0xae000008
  .word 0x3c120096
  .word 0x2652017c
  .word 0x8e420000
  .word 0x0040f809
  .word 0x0280202d
  .word 0x8e150000
  .word 0x12a00012
  .word 0x00000000
  .word 0x8e110004
  .word 0x0011082a
  .word 0x1020000a
  .word 0x0000a02d
  .word 0x02a0982d
  .word 0x0c125330
  .word 0x8e640000
  .word 0x26940001
  .word 0xae600000
  .word 0x0291102a
  .word 0x1440fffa
  .word 0x26730004
  .word 0x00000000
  .word 0x8e420000
  .word 0x0040f809
  .word 0x02a0202d
  .word 0xae000000
  .word 0xae000004
  .word 0x0000102d
  .word 0x1000007e
  .word 0xae000008
  .word 0x0220202d
  .word 0x24050007
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a70094
  .word 0x10400026
  .word 0x00000000
  .word 0x8fa30094
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x14400044
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x1020003f
  .word 0x00000000
  .word 0x0c12538c
  .word 0x0220202d
  .word 0x1440ff95
  .word 0x0040982d
  .word 0x3c120096
  .word 0x2652017c
  .word 0x8e420000
  .word 0x0040f809
  .word 0x0280202d
  .word 0x8e150000
  .word 0x12a0002f
  .word 0x00000000
  .word 0x8e110004
  .word 0x0011082a
  .word 0x10200027
  .word 0x0000a02d
  .word 0x02a0982d
  .word 0x0c125330
  .word 0x8e640000
  .word 0x26940001
  .word 0xae600000
  .word 0x0291102a
  .word 0x1440fffa
  .word 0x26730004
  .word 0x1000001e
  .word 0x8e420000
  .word 0x3c120096
  .word 0x2652017c
  .word 0x8e420000
  .word 0x0040f809
  .word 0x0280202d
  .word 0x8e150000
  .word 0x12a00011
  .word 0x00000000
  .word 0x8e110004
  .word 0x0011082a
  .word 0x10200009
  .word 0x0000a02d
  .word 0x02a0982d
  .word 0x0c125330
  .word 0x8e640000
  .word 0x26940001
  .word 0xae600000
  .word 0x0291102a
  .word 0x1440fffa
  .word 0x26730004
  .word 0x8e420000
  .word 0x0040f809
  .word 0x02a0202d
  .word 0xae000000
  .word 0xae000004
  .word 0x0000102d
  .word 0x10000036
  .word 0xae000008
  .word 0x8e420000
  .word 0x0040f809
  .word 0x02a0202d
  .word 0xae000000
  .word 0xae000004
  .word 0x0000102d
  .word 0x1000002e
  .word 0xae000008
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30088
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x3c120096
  .word 0x2652017c
  .word 0x8e420000
  .word 0x0040f809
  .word 0x0280202d
  .word 0x8e150000
  .word 0x12a00011
  .word 0x00000000
  .word 0x8e110004
  .word 0x0011082a
  .word 0x10200009
  .word 0x0000a02d
  .word 0x02a0982d
  .word 0x0c125330
  .word 0x8e640000
  .word 0x26940001
  .word 0xae600000
  .word 0x0291102a
  .word 0x1440fffa
  .word 0x26730004
  .word 0x8e420000
  .word 0x0040f809
  .word 0x02a0202d
  .word 0xae000000
  .word 0xae000004
  .word 0x0000102d
  .word 0x1000000a
  .word 0xae000008
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30080
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20084
  .word 0x0c130714
  .word 0x27a40080
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00a0
}

#pragma tailcall on
// FUN_004959C0

int FUN_004959c0(u64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004959d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return DAT_00960178_abs[0](param_1,0x30502);
}
#pragma tailcall off
#pragma optimization_level 2
#pragma schedule on
// FUN_004959E0
#pragma no_branch_likely on
u64 FUN_004959e0(u64 param_1)
{
  u32 callback;

  DAT_007ce854 = DAT_007ce854 - 1;
  if (DAT_007ce854 == 0) {
    callback = DAT_007ce848;
    if (callback != 0) {
      FUN_004c3c30_typed(callback);
      DAT_007ce848 = 0;
    }
  }
  return param_1;
}
#pragma schedule off



#pragma no_branch_likely off
// FUN_00495A30
asm u64 FUN_00495a30(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f82bb64
  .word 0x0080802d
  .word 0x1040001f
  .word 0xaf85bb60
  .word 0x8f8cbb60
  .word 0x3c0b0096
  .word 0x256b0070
  .word 0x8f8abb64
  .word 0x240d0001
  .word 0x24090003
  .word 0x24080004
  .word 0x24070005
  .word 0x24060002
  .word 0x24050006
  .word 0x24040008
  .word 0x24030010
  .word 0x016c5821
  .word 0x0200102d
  .word 0xa56d0000
  .word 0x254a0001
  .word 0xa1690008
  .word 0xa1680009
  .word 0xa167000a
  .word 0xa16d000c
  .word 0xa1660010
  .word 0xa1650018
  .word 0xa1680028
  .word 0xa1640029
  .word 0xa160002a
  .word 0xa16d002b
  .word 0xa166002c
  .word 0xaf8abb64
  .word 0x1000000f
  .word 0xa163002d
  .word 0x3c020004
  .word 0x2404000c
  .word 0x24050032
  .word 0x24060004
  .word 0x0c130ed4
  .word 0x34470502
  .word 0x1440ffdb
  .word 0xaf82bb58
  .word 0x10400004
  .word 0x00000000
  .word 0x0c130f0c
  .word 0x0040202d
  .word 0xaf80bb58
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_00495B10
asm long FUN_00495b10(long param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020003
  .word 0xffbf0030
  .word 0x34450502
  .word 0x7fb20020
  .word 0x3c020096
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c420188
  .word 0x0040f809
  .word 0x8f84bb58
  .word 0x0040882d
  .word 0x12200026
  .word 0x00000000
  .word 0x16400005
  .word 0xae200004
  .word 0xae200008
  .word 0xae200000
  .word 0x1000002a
  .word 0x0220102d
  .word 0x3c020103
  .word 0x00121880
  .word 0x34450502
  .word 0x00721821
  .word 0x3c020096
  .word 0x00038080
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0200202d
  .word 0xae220008
  .word 0x8e220008
  .word 0x10400003
  .word 0x00000000
  .word 0x1000fff0
  .word 0xae320000
  .word 0x3c020096
  .word 0x8f84bb58
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x24020002
  .word 0x0200282d
  .word 0xafa20048
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2004c
  .word 0x0c130714
  .word 0x27a40048
  .word 0x1000000b
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30040
  .word 0x34440013
  .word 0x0c130744
  .word 0x2405000c
  .word 0xafa20044
  .word 0x0c130714
  .word 0x27a40040
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_00495C20
asm u32 FUN_00495c20(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c840008
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000008
  .word 0x3c020096
  .word 0x8f84bb58
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0200282d
  .word 0xdfbf0010
  .word 0x24020001
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_00495C80
asm u32 FUN_00495c80(int *param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c820000
  .word 0x1440000f
  .word 0x00000000
  .word 0x94820004
  .word 0x1440000c
  .word 0x00000000
  .word 0x94820006
  .word 0x14400009
  .word 0x00000000
  .word 0x8c820008
  .word 0x14400006
  .word 0x00000000
  .word 0x8c82000c
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x24020001
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x1000fff9
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}

// FUN_00495CF0
asm u64 FUN_00495cf0(u64 param_1,u32 param_2,u16 param_3,u16 param_4,
            u16 param_5,u16 param_6,u16 param_7,u16 param_8,
            u16 param_9)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x0160f02d
  .word 0x7fb60060
  .word 0x0140b82d
  .word 0x7fb50050
  .word 0x0120b02d
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x00e0902d
  .word 0x7fb00000
  .word 0x8c850004
  .word 0x8c820000
  .word 0x00a2102b
  .word 0x1440001b
  .word 0x0100882d
  .word 0x24a30001
  .word 0x00031080
  .word 0x00431021
  .word 0x10a0000a
  .word 0x00028080
  .word 0x3c020096
  .word 0x3c030103
  .word 0x8ea40008
  .word 0x0200282d
  .word 0x8c420180
  .word 0x0040f809
  .word 0x34660502
  .word 0x10000007
  .word 0x00000000
  .word 0x3c020103
  .word 0x34450502
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0200202d
  .word 0x10400043
  .word 0x00000000
  .word 0xaea20008
  .word 0x8ea20004
  .word 0x24420001
  .word 0xaea20000
  .word 0x8ea40004
  .word 0x02a0102d
  .word 0x8ea50008
  .word 0x97a600b0
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0xac740008
  .word 0x8ea50004
  .word 0x8ea30008
  .word 0x00052080
  .word 0x00852021
  .word 0x00042080
  .word 0x00641821
  .word 0xa4730000
  .word 0x8ea40004
  .word 0x8ea50008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0xa4720002
  .word 0x8ea40004
  .word 0x8ea50008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0xa4710004
  .word 0x8ea40004
  .word 0x8ea50008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0xa476000c
  .word 0x8ea40004
  .word 0x8ea50008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0xa477000e
  .word 0x8ea40004
  .word 0x8ea50008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0xa47e0010
  .word 0x8ea40004
  .word 0x8ea50008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x00651821
  .word 0xa4660012
  .word 0x8ea30004
  .word 0x24630001
  .word 0x1000000b
  .word 0xaea30004
  .word 0x24020002
  .word 0x0200282d
  .word 0xafa200a8
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa200ac
  .word 0x0c130714
  .word 0x27a400a8
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
  .word 0x00000000
  .word 0x00000000
}

// FUN_00495F10
asm u64 FUN_00495f10(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x8c82000c
  .word 0x94830004
  .word 0x00541021
  .word 0x2471ffff
  .word 0x14600003
  .word 0x24500010
  .word 0x1000000f
  .word 0x0280102d
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0260f809
  .word 0x0240302d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x0280102d
  .word 0x0220102d
  .word 0x2610000c
  .word 0x1440fff5
  .word 0x2631ffff
  .word 0x1000fff1
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
}

// FUN_00495FB0
asm u64 FUN_00495fb0(u32 *param_1,char *param_2,u64 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdfb40
  .word 0x94830004
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x00e0f02d
  .word 0x7fb60060
  .word 0x00a0b82d
  .word 0x7fb50050
  .word 0x27a504b0
  .word 0x7fb40040
  .word 0x00c0a82d
  .word 0x7fb30030
  .word 0x2406000c
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c870000
  .word 0x0080802d
  .word 0x8c820008
  .word 0xafa304b4
  .word 0xafa704b0
  .word 0xafa204b8
  .word 0x0c1305fc
  .word 0x02a0202d
  .word 0x10400007
  .word 0x00000000
  .word 0x96020004
  .word 0x26130010
  .word 0x14400005
  .word 0x2454ffff
  .word 0x10000073
  .word 0x02a0102d
  .word 0x10000071
  .word 0x0000102d
  .word 0x26f60008
  .word 0x8e620004
  .word 0x03c0202d
  .word 0x8e650008
  .word 0x0c125520
  .word 0xafa204a8
  .word 0x27a304ac
  .word 0x04400057
  .word 0xac620000
  .word 0x02a0202d
  .word 0x27a504a8
  .word 0x0c1305fc
  .word 0x24060008
  .word 0x10400055
  .word 0x00000000
  .word 0x92e40000
  .word 0x24020008
  .word 0x10820053
  .word 0x00000000
  .word 0x24020007
  .word 0x14820044
  .word 0x00000000
  .word 0x8ec30000
  .word 0x3c020100
  .word 0x00621024
  .word 0x1440003f
  .word 0x00000000
  .word 0x8e720004
  .word 0x1240003c
  .word 0x8e710000
  .word 0x00000000
  .word 0x2e410100
  .word 0x1020004c
  .word 0x00000000
  .word 0x0240802d
  .word 0x0010082b
  .word 0x1020002a
  .word 0x0000102d
  .word 0x2e010009
  .word 0x14200019
  .word 0x2605fff8
  .word 0x27a600a0
  .word 0x00000000
  .word 0x96240000
  .word 0x24420008
  .word 0x0045182b
  .word 0xacc40000
  .word 0x96240002
  .word 0xacc40004
  .word 0x96240004
  .word 0xacc40008
  .word 0x96240006
  .word 0xacc4000c
  .word 0x96240008
  .word 0xacc40010
  .word 0x9624000a
  .word 0xacc40014
  .word 0x9624000c
  .word 0xacc40018
  .word 0x9624000e
  .word 0xacc4001c
  .word 0x26310010
  .word 0x1460ffec
  .word 0x24c60020
  .word 0x00000000
  .word 0x0050082b
  .word 0x1020000c
  .word 0x00000000
  .word 0x00021880
  .word 0x007d1821
  .word 0x246500a0
  .word 0x96240000
  .word 0x24420001
  .word 0x0050182b
  .word 0xaca40000
  .word 0x26310002
  .word 0x1460fffa
  .word 0x24a50004
  .word 0x00000000
  .word 0x00103080
  .word 0x02a0202d
  .word 0x0c1305fc
  .word 0x27a500a0
  .word 0x1040001b
  .word 0x00000000
  .word 0x02509023
  .word 0x1640ffc8
  .word 0x00000000
  .word 0x00000000
  .word 0x0280102d
  .word 0x2673000c
  .word 0x1440ffa5
  .word 0x2694ffff
  .word 0x1000ff9e
  .word 0x00000000
  .word 0x0060102d
  .word 0x1000ffa8
  .word 0xac400000
  .word 0x00000000
  .word 0x1000000c
  .word 0x0000102d
  .word 0x8ec30000
  .word 0x3c020100
  .word 0x00621024
  .word 0x1040ffb2
  .word 0x00000000
  .word 0x1000ffa8
  .word 0x00000000
  .word 0x00000000
  .word 0x1000ffb5
  .word 0x24100100
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
  .word 0x27bd04c0
  .word 0x00000000
}

// FUN_00496230
asm long FUN_00496230(u64 param_1,char *param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdfb30
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x0080b02d
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0xafa500ac
  .word 0xafa600a8
  .word 0x27a504c0
  .word 0x7fb10010
  .word 0x2406000c
  .word 0x0c130644
  .word 0x7fb00000
  .word 0x10400078
  .word 0x00000000
  .word 0x8fa200ac
  .word 0x27b004c4
  .word 0x8e030000
  .word 0x90450000
  .word 0x00031900
  .word 0x24020008
  .word 0x10a20072
  .word 0x24640010
  .word 0x24020007
  .word 0x14a2000a
  .word 0x00000000
  .word 0x8fa200ac
  .word 0x8c430008
  .word 0x3c020100
  .word 0x00621024
  .word 0x14400004
  .word 0x00000000
  .word 0x8fa204c8
  .word 0x00021040
  .word 0x00822021
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c420178
  .word 0x0040f809
  .word 0x34650502
  .word 0x0040f02d
  .word 0x13c0005a
  .word 0x00000000
  .word 0x8e050000
  .word 0x3c030096
  .word 0x8fa204c0
  .word 0x24630070
  .word 0x27d10010
  .word 0x00052040
  .word 0xafc20000
  .word 0x00852021
  .word 0x8e020000
  .word 0x00042080
  .word 0xa7c20004
  .word 0x02248021
  .word 0x8f82bb60
  .word 0x00621021
  .word 0x84420000
  .word 0xa7c20006
  .word 0x8fa204c8
  .word 0xafc20008
  .word 0xafc0000c
  .word 0x8f82bb60
  .word 0x00621821
  .word 0x84620000
  .word 0x24420001
  .word 0xa4620000
  .word 0x97c20004
  .word 0x1040003f
  .word 0x2455ffff
  .word 0x8fa200ac
  .word 0x24570008
  .word 0x02c0202d
  .word 0x27a504b8
  .word 0x0c130644
  .word 0x24060008
  .word 0x14400003
  .word 0x00000000
  .word 0x10000051
  .word 0x0000102d
  .word 0x8fa204b8
  .word 0xae220004
  .word 0x27a204bc
  .word 0x8c450000
  .word 0x0c1254c8
  .word 0x8fa400a8
  .word 0xae220008
  .word 0x24030008
  .word 0x8fa200ac
  .word 0x90440000
  .word 0x10830035
  .word 0xae300000
  .word 0x24020007
  .word 0x14820022
  .word 0x00000000
  .word 0x8ee30000
  .word 0x3c020100
  .word 0x00621024
  .word 0x1440001d
  .word 0x00000000
  .word 0x8e340004
  .word 0x1280001a
  .word 0x00000000
  .word 0x00000000
  .word 0x2e810100
  .word 0x1020002e
  .word 0x27b300b0
  .word 0x0280902d
  .word 0x00123080
  .word 0x02c0202d
  .word 0x0c130644
  .word 0x0260282d
  .word 0x10400029
  .word 0x00000000
  .word 0x0292a023
  .word 0x12400028
  .word 0x2644ffff
  .word 0x00000000
  .word 0x8e630000
  .word 0x0080102d
  .word 0x2484ffff
  .word 0xa6030000
  .word 0x26730004
  .word 0x1440fffa
  .word 0x26100002
  .word 0x1000001e
  .word 0x00000000
  .word 0x00000000
  .word 0x02a0102d
  .word 0x2631000c
  .word 0x1440ffc5
  .word 0x26b5ffff
  .word 0x1000001b
  .word 0x03c0102d
  .word 0x10000019
  .word 0x0000102d
  .word 0x8fa200ac
  .word 0x8c430008
  .word 0x3c020100
  .word 0x00621024
  .word 0x1040ff93
  .word 0x00000000
  .word 0x1000ff89
  .word 0x24020007
  .word 0x8ee30000
  .word 0x3c020100
  .word 0x00621024
  .word 0x1040ffd0
  .word 0x00000000
  .word 0x1000ffc6
  .word 0x00000000
  .word 0x00000000
  .word 0x1000ffd3
  .word 0x24120100
  .word 0x10000005
  .word 0x0000102d
  .word 0x1680ffcb
  .word 0x00000000
  .word 0x1000ffe1
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
  .word 0x03e00008
  .word 0x27bd04d0
}

// FUN_004964F0
asm int FUN_004964f0(int param_1,char *param_2)
{
  .set noreorder
  .word 0x90a60000
  .word 0x24020008
  .word 0x10c2000e
  .word 0x00000000
  .word 0x24020007
  .word 0x14c20012
  .word 0x00000000
  .word 0x8ca30008
  .word 0x3c020100
  .word 0x00621024
  .word 0x1040000d
  .word 0x00000000
  .word 0x94820004
  .word 0x000210c0
  .word 0x2442000c
  .word 0x1000000f
  .word 0x00000000
  .word 0x8ca30008
  .word 0x3c020100
  .word 0x00621024
  .word 0x1440fff7
  .word 0x00000000
  .word 0x1000ffee
  .word 0x24020007
  .word 0x94830004
  .word 0x8c820008
  .word 0x000318c0
  .word 0x2463000c
  .word 0x00021080
  .word 0x1000fff1
  .word 0x00621021
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma schedule on
// FUN_00496580
asm void FUN_00496580(void)
{
  .set noreorder
  .word 0x8f83bb60
  .word 0x3c020096
  .word 0x24420070
  .word 0x00432021
  .word 0x84820000
  .word 0x24430001
  .word 0x03e00008
  .word 0xa4830000
  .word 0x8c820000
  .word 0x8ca30000
  .word 0x8c490008
  .word 0x0000202d
  .word 0x8c680008
  .word 0x11280015
  .word 0x0000282d
  .word 0x1120001b
  .word 0x00000000
  .word 0x8d260000
  .word 0x10c00013
  .word 0x00000000
  .word 0x8cc70000
  .word 0x90e70023
  .word 0x24060100
  .word 0x00073a00
  .word 0x30e70f00
  .word 0x10e6000b
  .word 0x00000000
  .word 0x24060300
  .word 0x10e60008
  .word 0x00000000
  .word 0x24060500
  .word 0x14e60006
  .word 0x00000000
  .word 0x10000004
  .word 0x34a50010
  .word 0x10000060
  .word 0x0000102d
  .word 0x34a50010
  .word 0x91270007
  .word 0x240600ff
  .word 0x10e60002
  .word 0x00000000
  .word 0x34a50010
  .word 0x11000051
  .word 0x00000000
  .word 0x8d060000
  .word 0x10c0000f
  .word 0x00000000
  .word 0x8cc70000
  .word 0x90e70023
  .word 0x24060100
  .word 0x00073a00
  .word 0x30e70f00
  .word 0x10e60007
  .word 0x00000000
  .word 0x24060300
  .word 0x10e60004
  .word 0x00000000
  .word 0x24060500
  .word 0x14e60002
  .word 0x00000000
  .word 0x34840010
  .word 0x91070007
  .word 0x240600ff
  .word 0x10e6003c
  .word 0x00000000
  .word 0x1000003a
  .word 0x34840010
  .word 0x10000002
  .word 0x24080008
  .word 0x0000402d
  .word 0x00c7082a
  .word 0x10200003
  .word 0x00a84025
  .word 0x10000002
  .word 0x24050008
  .word 0x0000282d
  .word 0x00853825
  .word 0x94650012
  .word 0x94440012
  .word 0x00a4082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x24060004
  .word 0x0000302d
  .word 0x0085082a
  .word 0x10200003
  .word 0x01063025
  .word 0x10000002
  .word 0x24040004
  .word 0x0000202d
  .word 0x00e43825
  .word 0x9465000e
  .word 0x9444000e
  .word 0x00a4082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x24080002
  .word 0x0000402d
  .word 0x0085082a
  .word 0x10200003
  .word 0x00c83025
  .word 0x10000002
  .word 0x24040002
  .word 0x0000202d
  .word 0x00e42825
  .word 0x9442000c
  .word 0x9464000c
  .word 0x0082082a
  .word 0x10200003
  .word 0x00000000
  .word 0x10000002
  .word 0x24030001
  .word 0x0000182d
  .word 0x0044082a
  .word 0x10200003
  .word 0x00c31825
  .word 0x10000002
  .word 0x24020001
  .word 0x0000102d
  .word 0x00a21025
  .word 0x10000008
  .word 0x00621023
  .word 0x94670010
  .word 0x94460010
  .word 0x00e6082a
  .word 0x1020ffc5
  .word 0x00000000
  .word 0x1000ffc1
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004967A0
asm u64 FUN_004967a0(u64 param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x3c03aaaa
  .word 0xffbf0070
  .word 0x3463aaab
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820004
  .word 0x8c930000
  .word 0x00620019
  .word 0x00002010
  .word 0x0002082b
  .word 0x0000582d
  .word 0x0000182d
  .word 0x10200026
  .word 0x00048042
  .word 0x2c410009
  .word 0x14200017
  .word 0x244cfff8
  .word 0x0260682d
  .word 0x95a60000
  .word 0x24630008
  .word 0x95a50002
  .word 0x006c202b
  .word 0x95aa0004
  .word 0x95a90006
  .word 0x95a80008
  .word 0x95a7000a
  .word 0x01665825
  .word 0x01655825
  .word 0x95a6000c
  .word 0x95a5000e
  .word 0x016a5025
  .word 0x01494825
  .word 0x01284025
  .word 0x01073825
  .word 0x00e63025
  .word 0x00c55825
  .word 0x1480ffed
  .word 0x25ad0010
  .word 0x00000000
  .word 0x0062082b
  .word 0x1020000a
  .word 0x00000000
  .word 0x00032040
  .word 0x02643021
  .word 0x94c50000
  .word 0x24630001
  .word 0x0062202b
  .word 0x01655825
  .word 0x24c60002
  .word 0x1480fffa
  .word 0x00000000
  .word 0x2562001f
  .word 0x000288c2
  .word 0x3c120096
  .word 0x3c020001
  .word 0x26520178
  .word 0x34450502
  .word 0x8e420000
  .word 0x0040f809
  .word 0x0220202d
  .word 0x0040a02d
  .word 0x12800079
  .word 0x00000000
  .word 0x3c030001
  .word 0x8e420000
  .word 0x34650502
  .word 0x8ea30004
  .word 0x0003b040
  .word 0x0040f809
  .word 0x02c0202d
  .word 0x0040902d
  .word 0x12400069
  .word 0x00000000
  .word 0x02c0302d
  .word 0x0240202d
  .word 0x0c148494
  .word 0x0260282d
  .word 0x0010082b
  .word 0x1020005e
  .word 0x0000602d
  .word 0x24040001
  .word 0x3406ffff
  .word 0x2629ffff
  .word 0x0280282d
  .word 0x1220000a
  .word 0x0120182d
  .word 0x00000000
  .word 0xa0a00000
  .word 0x0060102d
  .word 0x24a50001
  .word 0x2463ffff
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x0010082b
  .word 0x10200048
  .word 0x0000582d
  .word 0x0240502d
  .word 0x95480002
  .word 0x95450000
  .word 0x95470004
  .word 0x00a81024
  .word 0x00e21024
  .word 0x1046003c
  .word 0x00000000
  .word 0x00051943
  .word 0x30a2001f
  .word 0x00032880
  .word 0x00441804
  .word 0x02852821
  .word 0x8ca20000
  .word 0x00626824
  .word 0x15a00033
  .word 0x00000000
  .word 0x310d001f
  .word 0x00084143
  .word 0x01a46804
  .word 0x00084080
  .word 0x02884021
  .word 0x8d080000
  .word 0x01a84024
  .word 0x1500002a
  .word 0x00000000
  .word 0x30e8001f
  .word 0x00073943
  .word 0x01044004
  .word 0x00073880
  .word 0x02873821
  .word 0x8ce70000
  .word 0x01073824
  .word 0x14e00021
  .word 0x00000000
  .word 0x00431025
  .word 0x258c0001
  .word 0xaca20000
  .word 0x95420002
  .word 0x3043001f
  .word 0x00021143
  .word 0x00642804
  .word 0x00021080
  .word 0x02821821
  .word 0x8c620000
  .word 0x00451025
  .word 0xac620000
  .word 0x95420004
  .word 0x3043001f
  .word 0x00021143
  .word 0x00642804
  .word 0x00021080
  .word 0x02821821
  .word 0x8c620000
  .word 0x00451025
  .word 0xac620000
  .word 0x95420000
  .word 0xa6620000
  .word 0x95420002
  .word 0xa6620002
  .word 0x95420004
  .word 0xa6620004
  .word 0xa5460004
  .word 0x26730006
  .word 0xa5460002
  .word 0xa5460000
  .word 0x00000000
  .word 0x256b0001
  .word 0x0170102b
  .word 0x1440ffbb
  .word 0x254a0006
  .word 0x0190102b
  .word 0x1440ffa8
  .word 0x00000000
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0240202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0280202d
  .word 0x10000002
  .word 0x02a0102d
  .word 0x02a0102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00496AD0
asm void FUN_00496ad0(u64 param_1,int *param_2,short param_3,short param_4,int param_5,
                 int param_6)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x00e0902d
  .word 0x7fb00000
  .word 0x0100882d
  .word 0x8ca20000
  .word 0x1040001d
  .word 0x0120802d
  .word 0x3266ffff
  .word 0x3245ffff
  .word 0x94430002
  .word 0x14c30014
  .word 0x00000000
  .word 0x94430000
  .word 0x14a30011
  .word 0x00000000
  .word 0x8c430008
  .word 0x1460000e
  .word 0x00000000
  .word 0x8c440004
  .word 0x00111880
  .word 0x02032821
  .word 0x90830020
  .word 0x24630001
  .word 0xa0830020
  .word 0x8ca40000
  .word 0x90830020
  .word 0x24630001
  .word 0xa0830020
  .word 0x8ca30000
  .word 0x10000015
  .word 0xac430008
  .word 0x8c42000c
  .word 0x1440ffe8
  .word 0x00000000
  .word 0x00000000
  .word 0x3c020003
  .word 0x34450502
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x00000000
  .word 0xa4530000
  .word 0x00111880
  .word 0x02031821
  .word 0xa4520002
  .word 0x8c630000
  .word 0xac430004
  .word 0xac400008
  .word 0x8e830000
  .word 0xac43000c
  .word 0xae820000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
}

// FUN_00496BE0
asm u64 FUN_00496be0(u32 param_1,u32 *param_2,int param_3,u32 *param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00e0982d
  .word 0x7fb10010
  .word 0x10c0000b
  .word 0x7fb00000
  .word 0x3c110096
  .word 0x2631018c
  .word 0x8cd0000c
  .word 0x8e840004
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00c0282d
  .word 0x1600fffa
  .word 0x0200302d
  .word 0x00000000
  .word 0x0c130f0c
  .word 0x8e840004
  .word 0x0015082b
  .word 0xae800004
  .word 0x1020000d
  .word 0x0000902d
  .word 0x3c100096
  .word 0x0260882d
  .word 0x2610018c
  .word 0x8e250000
  .word 0x8e020000
  .word 0x0040f809
  .word 0x8e840000
  .word 0x26520001
  .word 0xae200000
  .word 0x0255102b
  .word 0x1440fff8
  .word 0x26310004
  .word 0x0c130f0c
  .word 0x8e840000
  .word 0xae800000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0260202d
  .word 0xdfbf0060
  .word 0x0000102d
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00496CD0
asm int * FUN_00496cd0(u32 param_1,u32 *param_2,u64 param_3,u16 *param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x3c020096
  .word 0xffbf0080
  .word 0x3c030003
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x0080b02d
  .word 0x7fb40040
  .word 0x00a0a82d
  .word 0x7fb30030
  .word 0x00c0a02d
  .word 0x7fb20020
  .word 0x00e0982d
  .word 0x7fb10010
  .word 0x00162080
  .word 0x7fb00000
  .word 0x8c420178
  .word 0x0040f809
  .word 0x34650502
  .word 0x0040902d
  .word 0x24040024
  .word 0x3c020003
  .word 0x02c0282d
  .word 0x24060004
  .word 0x0c130ed4
  .word 0x34470502
  .word 0xaea20000
  .word 0x24040010
  .word 0x00161042
  .word 0x24060004
  .word 0x24450001
  .word 0x3c020003
  .word 0x0c130ed4
  .word 0x34470502
  .word 0xaea20004
  .word 0x0016102b
  .word 0x14400003
  .word 0x0000882d
  .word 0x10000036
  .word 0x0240102d
  .word 0x3c170096
  .word 0x0240802d
  .word 0x26f70188
  .word 0x3c020003
  .word 0x34450502
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x8ea40000
  .word 0xae020000
  .word 0x0280282d
  .word 0x8e020000
  .word 0x0220402d
  .word 0xa0400020
  .word 0x8e020000
  .word 0xac510000
  .word 0x8e020000
  .word 0xac400014
  .word 0x8e020000
  .word 0xac400010
  .word 0x8e020000
  .word 0xac400018
  .word 0x8ea40004
  .word 0x96660000
  .word 0x96670002
  .word 0x0c125ab4
  .word 0x0240482d
  .word 0x8e030000
  .word 0x0280282d
  .word 0x0220402d
  .word 0xac620004
  .word 0x8ea40004
  .word 0x96660002
  .word 0x96670004
  .word 0x0c125ab4
  .word 0x0240482d
  .word 0x8e030000
  .word 0x0280282d
  .word 0x0220402d
  .word 0xac620008
  .word 0x8ea40004
  .word 0x96660004
  .word 0x96670000
  .word 0x0c125ab4
  .word 0x0240482d
  .word 0x8e040000
  .word 0x26310001
  .word 0x0236182b
  .word 0x26730014
  .word 0xac82000c
  .word 0x1460ffd1
  .word 0x26100004
  .word 0x1000ffca
  .word 0x00000000
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00496E80
asm short * FUN_00496e80(int param_1,short param_2,short param_3)
{
  .set noreorder
  .word 0x8c820004
  .word 0x30a8ffff
  .word 0x94470000
  .word 0x10e8001f
  .word 0x00000000
  .word 0x30c6ffff
  .word 0x14e60006
  .word 0x00000000
  .word 0x94430002
  .word 0x14680003
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x8c820008
  .word 0x94450000
  .word 0x10a80019
  .word 0x00000000
  .word 0x14a60006
  .word 0x00000000
  .word 0x94430002
  .word 0x14680003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x8c82000c
  .word 0x94440000
  .word 0x10880013
  .word 0x00000000
  .word 0x14860016
  .word 0x00000000
  .word 0x94430002
  .word 0x14680013
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x94450002
  .word 0x30c3ffff
  .word 0x10a3000e
  .word 0x00000000
  .word 0x1000ffde
  .word 0x30c6ffff
  .word 0x94430002
  .word 0x10660009
  .word 0x00000000
  .word 0x1000ffe4
  .word 0x00000000
  .word 0x94430002
  .word 0x10660004
  .word 0x00000000
  .word 0x1000ffea
  .word 0x00000000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00496F60
asm void FUN_00496f60(int param_1,int param_2,long param_3)
{
  .set noreorder
  .word 0x28c30004
  .word 0x14600050
  .word 0x00000000
  .word 0x24030001
  .word 0xac830018
  .word 0x90830020
  .word 0x00031880
  .word 0x00a33021
  .word 0x8cc30000
  .word 0x1064004b
  .word 0x00000000
  .word 0x8c860010
  .word 0x10c00003
  .word 0x00000000
  .word 0x8c830014
  .word 0xacc30014
  .word 0x8c860014
  .word 0x10c00003
  .word 0x00000000
  .word 0x8c830010
  .word 0xacc30010
  .word 0x0000302d
  .word 0x30c700ff
  .word 0x00073880
  .word 0x00873821
  .word 0x8ce90004
  .word 0x8d280004
  .word 0x11000043
  .word 0x0000182d
  .word 0x11040041
  .word 0x00000000
  .word 0x8d070018
  .word 0x14e0003e
  .word 0x00000000
  .word 0x0100182d
  .word 0x00000000
  .word 0x10600025
  .word 0x00000000
  .word 0x90670020
  .word 0x00073880
  .word 0x00a74021
  .word 0x8d070000
  .word 0x10e3003d
  .word 0x00000000
  .word 0x8c680010
  .word 0x11000004
  .word 0x00000000
  .word 0x8c670014
  .word 0xad070014
  .word 0x00000000
  .word 0x8c680014
  .word 0x11000004
  .word 0x00000000
  .word 0x8c670010
  .word 0xad070010
  .word 0x00000000
  .word 0x90670020
  .word 0x24e7ffff
  .word 0xa0670020
  .word 0x90670020
  .word 0x00073880
  .word 0x00a73821
  .word 0x8ce70000
  .word 0xac670010
  .word 0x8c670010
  .word 0x10e00002
  .word 0x00000000
  .word 0xace30014
  .word 0x90670020
  .word 0x00073880
  .word 0x00a73821
  .word 0xace30000
  .word 0xac600014
  .word 0x00000000
  .word 0x24c30001
  .word 0x306600ff
  .word 0x28c30003
  .word 0x1460ffc8
  .word 0x00000000
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x24030001
  .word 0x1000fffc
  .word 0xac83001c
  .word 0x8c630010
  .word 0xacc30000
  .word 0x90830020
  .word 0x00031880
  .word 0x00a31821
  .word 0x8c630000
  .word 0x1060ffb9
  .word 0x00000000
  .word 0x1000ffb7
  .word 0xac600014
  .word 0x8d280008
  .word 0x1100ffc3
  .word 0x00000000
  .word 0x8d070018
  .word 0x14e0ffc0
  .word 0x00000000
  .word 0x1000ffbe
  .word 0x0100182d
  .word 0x00000000
  .word 0x8ce70010
  .word 0xad070000
  .word 0x90670020
  .word 0x00073880
  .word 0x00a73821
  .word 0x8ce70000
  .word 0x10e0ffc9
  .word 0x00000000
  .word 0x1000ffc7
  .word 0xace00014
  .word 0x03e00008
  .word 0x00000000
}

// FUN_00497130
asm long FUN_00497130(u64 param_1,long param_2,u64 param_3,u64 param_4,long param_5
                 )
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x00a0102d
  .word 0xffbf0000
  .word 0x0080c02d
  .word 0x00c0782d
  .word 0x0100702d
  .word 0x0000682d
  .word 0x104000e0
  .word 0x0000602d
  .word 0x29c10004
  .word 0x0000582d
  .word 0x10200009
  .word 0x240affff
  .word 0x8c440004
  .word 0x108000db
  .word 0x00000000
  .word 0x8c83001c
  .word 0x146000d8
  .word 0x00000000
  .word 0x10000008
  .word 0x0080582d
  .word 0x8c440004
  .word 0x108000db
  .word 0x00000000
  .word 0x8c830018
  .word 0x146000d8
  .word 0x00000000
  .word 0x0080582d
  .word 0x116000dd
  .word 0x00000000
  .word 0x0160202d
  .word 0x01e0282d
  .word 0x01c0302d
  .word 0x0c125bd8
  .word 0x25ad0001
  .word 0x8d630004
  .word 0x104300d7
  .word 0x00000000
  .word 0x8d630008
  .word 0x104300d6
  .word 0x00000000
  .word 0x8d63000c
  .word 0x14430002
  .word 0x00000000
  .word 0x240a0002
  .word 0x25440001
  .word 0x24030003
  .word 0x0083001a
  .word 0x00001810
  .word 0x00031880
  .word 0x01631821
  .word 0x8c640004
  .word 0x8c830004
  .word 0x146b0003
  .word 0x00000000
  .word 0x10000002
  .word 0x94830002
  .word 0x94830000
  .word 0x3069ffff
  .word 0x0040502d
  .word 0x8f030004
  .word 0x0160202d
  .word 0x8f020000
  .word 0x00031840
  .word 0x00431021
  .word 0x9445fffe
  .word 0x0c125ba0
  .word 0x0120302d
  .word 0x29c10004
  .word 0x10200020
  .word 0x00000000
  .word 0x0002202b
  .word 0x24030001
  .word 0x38840001
  .word 0x148000b5
  .word 0x0060382d
  .word 0x8c440008
  .word 0x10800007
  .word 0x0000302d
  .word 0x8c84001c
  .word 0x0004202b
  .word 0x38840001
  .word 0x10800002
  .word 0x00000000
  .word 0x0060302d
  .word 0x8c440004
  .word 0x10800007
  .word 0x0000282d
  .word 0x8c84001c
  .word 0x0004202b
  .word 0x38840001
  .word 0x10800002
  .word 0x00000000
  .word 0x24050001
  .word 0x00a62021
  .word 0x108000a0
  .word 0x00000000
  .word 0x1000009e
  .word 0x0000382d
  .word 0x0000182d
  .word 0x1000001e
  .word 0x00000000
  .word 0x0002202b
  .word 0x24030001
  .word 0x38840001
  .word 0x1480009a
  .word 0x0060382d
  .word 0x8c440008
  .word 0x10800007
  .word 0x0000302d
  .word 0x8c840018
  .word 0x0004202b
  .word 0x38840001
  .word 0x10800002
  .word 0x00000000
  .word 0x0060302d
  .word 0x8c440004
  .word 0x10800007
  .word 0x0000282d
  .word 0x8c840018
  .word 0x0004202b
  .word 0x38840001
  .word 0x10800002
  .word 0x00000000
  .word 0x24050001
  .word 0x00a62021
  .word 0x10800085
  .word 0x00000000
  .word 0x10000083
  .word 0x0000382d
  .word 0x0000182d
  .word 0x106000a4
  .word 0x00000000
  .word 0x8d630004
  .word 0x106a0081
  .word 0x00000000
  .word 0x1062007f
  .word 0x00000000
  .word 0x0060602d
  .word 0x29c10004
  .word 0x1020001e
  .word 0x00000000
  .word 0x0000102d
  .word 0x11800086
  .word 0x0000302d
  .word 0x8d830008
  .word 0x10600007
  .word 0x0000282d
  .word 0x8c63001c
  .word 0x0003182b
  .word 0x38630001
  .word 0x10600002
  .word 0x00000000
  .word 0x24050001
  .word 0x8d830004
  .word 0x10600007
  .word 0x0000202d
  .word 0x8c63001c
  .word 0x0003182b
  .word 0x38630001
  .word 0x10600002
  .word 0x00000000
  .word 0x24040001
  .word 0x00851821
  .word 0x10600071
  .word 0x00000000
  .word 0x1000006f
  .word 0x24060001
  .word 0x24020001
  .word 0x1000001c
  .word 0x00000000
  .word 0x0000102d
  .word 0x1180006d
  .word 0x0000302d
  .word 0x8d830008
  .word 0x10600007
  .word 0x0000282d
  .word 0x8c630018
  .word 0x0003182b
  .word 0x38630001
  .word 0x10600002
  .word 0x00000000
  .word 0x24050001
  .word 0x8d830004
  .word 0x10600007
  .word 0x0000202d
  .word 0x8c630018
  .word 0x0003182b
  .word 0x38630001
  .word 0x10600002
  .word 0x00000000
  .word 0x24040001
  .word 0x00851821
  .word 0x10600058
  .word 0x00000000
  .word 0x10000056
  .word 0x24060001
  .word 0x24020001
  .word 0x10400057
  .word 0x00000000
  .word 0x8f030004
  .word 0x30620001
  .word 0x1040000a
  .word 0x00000000
  .word 0x00032040
  .word 0x0000102d
  .word 0x8f030000
  .word 0x00641821
  .word 0xa4690000
  .word 0x8f030004
  .word 0x24630001
  .word 0x10000012
  .word 0xaf030004
  .word 0x00032040
  .word 0x0180102d
  .word 0x8f030000
  .word 0x00642021
  .word 0x9483fffc
  .word 0xa4830000
  .word 0x8f030004
  .word 0x24630001
  .word 0xaf030004
  .word 0x8f040004
  .word 0x8f030000
  .word 0x00042040
  .word 0x00641821
  .word 0xa4690000
  .word 0x8f030004
  .word 0x24630001
  .word 0xaf030004
  .word 0x1440ff22
  .word 0x00000000
  .word 0x10000048
  .word 0x01a0102d
  .word 0x8c440008
  .word 0x1080ff30
  .word 0x00000000
  .word 0x8c83001c
  .word 0x1460ff2d
  .word 0x00000000
  .word 0x1000ff2b
  .word 0x0080582d
  .word 0x8c440008
  .word 0x1080ff28
  .word 0x00000000
  .word 0x8c830018
  .word 0x1460ff25
  .word 0x00000000
  .word 0x1000ff23
  .word 0x0080582d
  .word 0x10000036
  .word 0x01a0102d
  .word 0x1000ff30
  .word 0x0000502d
  .word 0x1000ff2e
  .word 0x240a0001
  .word 0x14e0ff82
  .word 0x00000000
  .word 0x1000ff61
  .word 0x0000182d
  .word 0x14e0ff7e
  .word 0x00000000
  .word 0x1000ff7c
  .word 0x0000182d
  .word 0x8d630008
  .word 0x106a0005
  .word 0x00000000
  .word 0x10620003
  .word 0x00000000
  .word 0x1000ff7d
  .word 0x0060602d
  .word 0x8d63000c
  .word 0x106aff7a
  .word 0x00000000
  .word 0x1062ff78
  .word 0x00000000
  .word 0x1000ff76
  .word 0x0060602d
  .word 0x10c0ffaf
  .word 0x00000000
  .word 0x1000ff90
  .word 0x24020001
  .word 0x10c0ffab
  .word 0x00000000
  .word 0x1000ffa9
  .word 0x24020001
  .word 0x8f040004
  .word 0x0000102d
  .word 0x8f030000
  .word 0x00042040
  .word 0x00641821
  .word 0xa4690000
  .word 0x8f030004
  .word 0x24630001
  .word 0x1000ffbf
  .word 0xaf030004
  .word 0x8f040004
  .word 0x8f030000
  .word 0x00042040
  .word 0x00641821
  .word 0xa4690000
  .word 0x8f030004
  .word 0x24630001
  .word 0x1000ffb6
  .word 0xaf030004
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}

// FUN_00497600 NONMATCHING

u32 FUN_00497600(int param_1,u32 param_2,int *param_3,int param_4)

{
  u32 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  u32 uVar9;
  u32 uVar10;
  u32 *puVar11;
  u32 uVar12;
  u64 uVar13;
  u64 uVar14;
  u8 bVar15;
  int iVar16;
  u32 uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  u16 *puVar21;
  u32 uVar22;
  u8 bVar23;
  u8 bVar24;
  int iVar25;
  u8 bVar26;
  int iVar27;
  int iVar28;
  u32 uVar29;
  u32 uVar30;
  long lVar31;
  u32 uStack_64;
  int iStack_60;
  u32 uStack_50;
  int *piStack_20;
  int aiStack_1c [6];
  u32 uStack_4;
  
  uStack_4 = 0;
  piStack_20 = (int *)0x0;
  aiStack_1c[0] = 0;
  aiStack_1c[1] = 0;
  aiStack_1c[2] = 0;
  aiStack_1c[3] = 0;
  aiStack_1c[4] = 0;
  uStack_50 = 0;
  iStack_60 = 0;
  piVar4 = (int *)((code)FUN_00496cd0)(param_2,aiStack_1c + 3,&uStack_4,param_1);
  uVar22 = 0;
  piVar5 = piVar4;
  if (param_2 != 0) {
    do {
      *(int **)(*piVar5 + 0x10) = (&piStack_20)[*(u8 *)(*piVar5 + 0x20)];
      iVar6 = *(int *)(*piVar5 + 0x10);
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x14) = *piVar5;
      }
      uVar22 = uVar22 + 1;
      (&piStack_20)[*(u8 *)((int *)*piVar5 + 8)] = (int *)*piVar5;
      *(u32 *)(*piVar5 + 0x14) = 0;
      piVar5 = piVar5 + 1;
    } while (uVar22 < param_2);
  }
  uVar13 = (*DAT_00960188)(*(u32 *)((int)(u8 *)DAT_00960074 + DAT_007ce850),0x10502);
  iVar28 = param_2 * 2 + 2;
  piVar5 = (int *)uVar13;
  piVar5[2] = iVar28;
  piVar5[1] = 0;
  iVar6 = (*DAT_00960178)(piVar5[2] << 2,0x10502);
  *piVar5 = iVar6;
  uVar14 = (*DAT_00960188)(*(u32 *)((int)(u8 *)DAT_00960074 + DAT_007ce850),0x10502);
  piVar7 = (int *)uVar14;
  piVar7[2] = iVar28;
  piVar7[1] = 0;
  iVar6 = (*DAT_00960178)(piVar7[2] << 2,0x10502);
  *piVar7 = iVar6;
  uVar22 = 0;
  if (param_2 == 0) {
LAB_004978a8:
    (*DAT_0096017c)(*piVar7);
    *piVar7 = 0;
    (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + DAT_007ce850),uVar14);
    (*DAT_0096017c)(*piVar5);
    *piVar5 = 0;
    (*DAT_0096018c)(*(u32 *)((int)(u8 *)DAT_00960074 + DAT_007ce850),uVar13);
    ((code)FUN_00496be0)(param_2,aiStack_1c + 3,uStack_4,piVar4);
    return 1;
  }
LAB_004977ac:
  uStack_64 = 0;
  if (param_4 == 0) {
    iVar6 = 3;
  }
  else {
    iVar6 = 0;
  }
  if (piStack_20 == (int *)0x0) {
    piVar8 = aiStack_1c;
    iVar16 = 1;
    iVar28 = aiStack_1c[0];
    while (iVar28 == 0) {
      piVar8 = piVar8 + 1;
      iVar16 = iVar16 + 1;
      iVar28 = *piVar8;
    }
    lVar31 = (long)(int)(&piStack_20 + iVar16);
    piVar8 = (&piStack_20)[iVar16];
    iVar28 = *(int *)(piVar8[3] + 8);
    iVar16 = 0;
    if ((iVar28 != 0) && (*(int *)(iVar28 + 0x18) == 0)) {
      iVar16 = 1;
    }
    iVar2 = *(int *)(piVar8[3] + 4);
    iVar19 = 0;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) == 0)) {
      iVar19 = 1;
    }
    if (1 < (u32)(iVar19 + iVar16)) {
      iVar16 = *(int *)(piVar8[2] + 8);
      iVar19 = 0;
      if ((iVar16 != 0) && (*(int *)(iVar16 + 0x18) == 0)) {
        iVar19 = 1;
      }
      iVar16 = *(int *)(piVar8[2] + 4);
      iVar20 = 0;
      if ((iVar16 != 0) && (*(int *)(iVar16 + 0x18) == 0)) {
        iVar20 = 1;
      }
      if (1 < (u32)(iVar20 + iVar19)) {
        uVar30 = 1;
        goto LAB_00497cc4;
      }
    }
    iVar16 = *(int *)(piVar8[1] + 8);
    iVar19 = 0;
    if ((iVar16 != 0) && (*(int *)(iVar16 + 0x18) == 0)) {
      iVar19 = 1;
    }
    iVar20 = *(int *)(piVar8[1] + 4);
    iVar25 = 0;
    if ((iVar20 != 0) && (*(int *)(iVar20 + 0x18) == 0)) {
      iVar25 = 1;
    }
    if (1 < (u32)(iVar25 + iVar19)) {
      bVar23 = 0;
      if (iVar2 != 0) {
        bVar23 = *(int *)(iVar2 + 0x18) == 0;
      }
      bVar15 = 0;
      if (iVar28 != 0) {
        bVar15 = *(int *)(iVar28 + 0x18) == 0;
      }
      if (1 < (u8)(bVar23 + bVar15)) {
        uVar30 = 2;
        goto LAB_00497cc4;
      }
    }
    iVar19 = *(int *)(piVar8[2] + 8);
    iVar25 = 0;
    if ((iVar19 != 0) && (*(int *)(iVar19 + 0x18) == 0)) {
      iVar25 = 1;
    }
    iVar3 = *(int *)(piVar8[2] + 4);
    iVar27 = 0;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == 0)) {
      iVar27 = 1;
    }
    if (1 < (u32)(iVar27 + iVar25)) {
      bVar23 = 0;
      if (iVar20 != 0) {
        bVar23 = *(int *)(iVar20 + 0x18) == 0;
      }
      bVar15 = 0;
      if (iVar16 != 0) {
        bVar15 = *(int *)(iVar16 + 0x18) == 0;
      }
      if (1 < (u8)(bVar23 + bVar15)) {
        uVar30 = 0;
        goto LAB_00497cc4;
      }
    }
    bVar23 = 0;
    if (iVar20 != 0) {
      bVar23 = *(int *)(iVar20 + 0x18) == 0;
    }
    bVar15 = 0;
    if (iVar16 != 0) {
      bVar15 = *(int *)(iVar16 + 0x18) == 0;
    }
    bVar26 = 0;
    if (iVar3 != 0) {
      bVar26 = *(int *)(iVar3 + 0x18) == 0;
    }
    bVar24 = 0;
    if (iVar19 != 0) {
      bVar24 = *(int *)(iVar19 + 0x18) == 0;
    }
    if ((u8)(bVar26 + bVar24) < (u8)(bVar23 + bVar15)) {
      bVar23 = 0;
      if (iVar20 != 0) {
        bVar23 = *(int *)(iVar20 + 0x18) == 0;
      }
      bVar15 = 0;
      if (iVar16 != 0) {
        bVar15 = *(int *)(iVar16 + 0x18) == 0;
      }
      bVar26 = 0;
      if (iVar2 != 0) {
        bVar26 = *(int *)(iVar2 + 0x18) == 0;
      }
      bVar24 = 0;
      if (iVar28 != 0) {
        bVar24 = *(int *)(iVar28 + 0x18) == 0;
      }
      if ((u8)(bVar26 + bVar24) < (u8)(bVar23 + bVar15)) {
        uVar30 = 2;
      }
      else {
        uVar30 = 1;
      }
    }
    else {
      bVar23 = 0;
      if (iVar3 != 0) {
        bVar23 = *(int *)(iVar3 + 0x18) == 0;
      }
      bVar15 = 0;
      if (iVar19 != 0) {
        bVar15 = *(int *)(iVar19 + 0x18) == 0;
      }
      bVar26 = 0;
      if (iVar2 != 0) {
        bVar26 = *(int *)(iVar2 + 0x18) == 0;
      }
      bVar24 = 0;
      if (iVar28 != 0) {
        bVar24 = *(int *)(iVar28 + 0x18) == 0;
      }
      if ((u8)(bVar26 + bVar24) < (u8)(bVar23 + bVar15)) {
        uVar30 = 0;
      }
      else {
        uVar30 = 1;
      }
    }
LAB_00497cc4:
    uVar1 = uVar30 % 3;
    uVar9 = uVar30 + 1;
    uVar10 = uVar30 + 2;
LAB_00497cfc:
    do {
      uVar17 = 0;
      if (param_2 != 0) {
        piVar8 = piVar4;
        if (8 < param_2) {
          do {
            uVar17 = uVar17 + 8;
            *(u32 *)(*piVar8 + 0x1c) = *(u32 *)(*piVar8 + 0x18);
            *(u32 *)(piVar8[1] + 0x1c) = *(u32 *)(piVar8[1] + 0x18);
            *(u32 *)(piVar8[2] + 0x1c) = *(u32 *)(piVar8[2] + 0x18);
            *(u32 *)(piVar8[3] + 0x1c) = *(u32 *)(piVar8[3] + 0x18);
            *(u32 *)(piVar8[4] + 0x1c) = *(u32 *)(piVar8[4] + 0x18);
            *(u32 *)(piVar8[5] + 0x1c) = *(u32 *)(piVar8[5] + 0x18);
            *(u32 *)(piVar8[6] + 0x1c) = *(u32 *)(piVar8[6] + 0x18);
            *(u32 *)(piVar8[7] + 0x1c) = *(u32 *)(piVar8[7] + 0x18);
            piVar8 = piVar8 + 8;
          } while (uVar17 < param_2 - 8);
        }
        if (uVar17 < param_2) {
          piVar8 = piVar4 + uVar17;
          do {
            iVar28 = *piVar8;
            uVar17 = uVar17 + 1;
            piVar8 = piVar8 + 1;
            *(u32 *)(iVar28 + 0x1c) = *(u32 *)(iVar28 + 0x18);
          } while (uVar17 < param_2);
        }
      }
      iVar28 = iVar6 + 1;
      uVar17 = uVar10 % 3;
      if (((iVar6 != 2) && (uVar17 = uVar9 % 3, iVar6 != 1)) && (uVar17 = uVar1, iVar6 != 0)) {
        uVar17 = uVar30;
      }
      piVar8 = (int *)lVar31;
      if (uVar17 == 2) {
        uStack_50 = *(u32 *)(*piVar8 + 4);
        iStack_60 = *(int *)(*piVar8 + 0xc);
LAB_00497e48:
        piVar18 = (int *)*piVar8;
      }
      else {
        if (uVar17 == 1) {
          uStack_50 = *(u32 *)(*piVar8 + 0xc);
          iStack_60 = *(int *)(*piVar8 + 8);
          goto LAB_00497e48;
        }
        if (uVar17 == 0) {
          uStack_50 = *(u32 *)(*piVar8 + 8);
          iStack_60 = *(int *)(*piVar8 + 4);
          goto LAB_00497e48;
        }
        piVar18 = (int *)*piVar8;
      }
      iVar6 = param_1 + *piVar18 * 0x14;
      *(u16 *)*piVar5 = *(u16 *)(iVar6 + (uVar17 % 3) * 2);
      *(u16 *)(*piVar5 + 2) = *(u16 *)(iVar6 + ((uVar17 + 1) % 3) * 2);
      *(u16 *)(*piVar5 + 4) = *(u16 *)(iVar6 + ((uVar17 + 2) % 3) * 2);
      piVar5[1] = 3;
      ((code)FUN_00496f60)(*piVar8,&piStack_20,iVar28);
      iVar6 = ((code)FUN_00497130)(uVar13,uStack_50,&piStack_20,param_1,iVar28);
      uVar29 = uVar22 + 1 + iVar6;
      if (iVar28 < 4) {
        iVar6 = 0;
        if ((*(int *)(iStack_60 + 8) != 0) && (*(int *)(*(int *)(iStack_60 + 8) + 0x1c) == 0)) {
          iVar6 = 1;
        }
        iVar16 = 0;
        if ((*(int *)(iStack_60 + 4) != 0) && (*(int *)(*(int *)(iStack_60 + 4) + 0x1c) == 0)) {
          iVar16 = 1;
        }
        iVar16 = iVar16 + iVar6;
      }
      else {
        iVar6 = 0;
        if ((*(int *)(iStack_60 + 8) != 0) && (*(int *)(*(int *)(iStack_60 + 8) + 0x18) == 0)) {
          iVar6 = 1;
        }
        iVar16 = 0;
        if ((*(int *)(iStack_60 + 4) != 0) && (*(int *)(*(int *)(iStack_60 + 4) + 0x18) == 0)) {
          iVar16 = 1;
        }
        iVar16 = iVar16 + iVar6;
      }
      iVar6 = iVar28;
      if (iVar16 == 0) goto code_r0x00497fc0;
      *(u16 *)*piVar7 = *(u16 *)(*piVar5 + 2);
      *(u16 *)(*piVar7 + 2) = *(u16 *)*piVar5;
      piVar7[1] = 2;
      iVar16 = ((code)FUN_00497130)(uVar14,iStack_60,&piStack_20,param_1,iVar28);
      uVar29 = uVar29 + iVar16;
      if ((piVar7[1] & 1U) != 0) {
        puVar21 = (u16 *)(piVar7[1] * 2 + *piVar7);
        *puVar21 = puVar21[-2];
        piVar7[1] = piVar7[1] + 1;
      }
      if (uStack_64 < uVar29) {
        uVar30 = uVar17;
        uStack_64 = uVar29;
      }
    } while (iVar28 < 4);
    piVar8 = (int *)(*DAT_00960188)(*(u32 *)((int)(u8 *)DAT_00960074 + DAT_007ce850),0x30502);
    piVar8[3] = *param_3;
    *param_3 = (int)piVar8;
    piVar8[2] = piVar5[1] + piVar7[1] + -2;
    piVar8[1] = 0;
    iVar6 = (*DAT_00960178)(piVar8[2] << 2,0x30502);
    *piVar8 = iVar6;
    uVar22 = piVar7[1];
    if (uVar22 < 3) {
      iVar6 = piVar8[1];
    }
    else {
      do {
        *(u16 *)(*piVar8 + piVar8[1] * 2) = *(u16 *)(uVar22 * 2 + *piVar7 + -2);
        piVar8[1] = piVar8[1] + 1;
        piVar7[1] = piVar7[1] + -1;
        uVar22 = piVar7[1];
      } while (2 < uVar22);
      iVar6 = piVar8[1];
    }
    ((code)FUN_00521250)(*piVar8 + iVar6 * 2,*piVar5,piVar5[1] << 2);
    piVar8[1] = piVar8[2];
    goto LAB_004978a0;
  }
  iVar6 = *piStack_20;
  piVar8 = (int *)(*DAT_00960188)(*(u32 *)((int)(u8 *)DAT_00960074 + DAT_007ce850),0x30502);
  piVar8[3] = *param_3;
  *param_3 = (int)piVar8;
  piVar8[2] = 3;
  piVar8[1] = 3;
  iVar28 = (*DAT_00960178)(0xc,0x30502);
  *piVar8 = iVar28;
  puVar21 = (u16 *)(param_1 + iVar6 * 0x14);
  *(u16 *)*piVar8 = *puVar21;
  *(u16 *)(*piVar8 + 2) = puVar21[1];
  *(u16 *)(*piVar8 + 4) = puVar21[2];
  piStack_20[6] = 1;
  piStack_20[7] = 1;
  piStack_20 = (int *)piStack_20[4];
  if (piStack_20 != (int *)0x0) {
    piStack_20[5] = 0;
  }
  uVar29 = uVar22 + 1;
  goto LAB_004978a0;
code_r0x00497fc0:
  if (uStack_64 < uVar29) {
    uVar30 = uVar17;
    uStack_64 = uVar29;
  }
  if (3 < iVar28) goto code_r0x00497fe4;
  goto LAB_00497cfc;
code_r0x00497fe4:
  puVar11 = (u32 *)
            (*DAT_00960188)(*(u32 *)((int)(u8 *)DAT_00960074 + DAT_007ce850),0x30502);
  puVar11[3] = *param_3;
  *param_3 = (int)puVar11;
  puVar11[2] = piVar5[1];
  puVar11[1] = piVar5[1];
  uVar12 = (*DAT_00960178)(piVar5[1] << 2,0x30502);
  *puVar11 = uVar12;
  ((code)FUN_00521250)(*puVar11,*piVar5,piVar5[1] << 2);
LAB_004978a0:
  uVar22 = uVar29;
  if (param_2 <= uVar29) goto LAB_004978a8;
  goto LAB_004977ac;
}

// FUN_004982B0
asm u32 FUN_004982b0(int *param_1,long param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x0080b02d
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820000
  .word 0x14400003
  .word 0x00a0882d
  .word 0x10000104
  .word 0x0000102d
  .word 0x8f86bb60
  .word 0x3c040096
  .word 0x3c030003
  .word 0x3c020096
  .word 0x24840070
  .word 0x34650502
  .word 0x8c420188
  .word 0x00861821
  .word 0x0040f809
  .word 0x8c640004
  .word 0xac400004
  .word 0xac400008
  .word 0x8ec40000
  .word 0x10800009
  .word 0x0040802d
  .word 0x8c830004
  .word 0x8e020008
  .word 0x24630006
  .word 0x00431021
  .word 0xae020008
  .word 0x8c84000c
  .word 0x1480fff9
  .word 0x00000000
  .word 0x8e040008
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c420178
  .word 0x34650502
  .word 0x0040f809
  .word 0x00042080
  .word 0xae020000
  .word 0x8ed20000
  .word 0x8e420004
  .word 0x0002082b
  .word 0x10200012
  .word 0x0000302d
  .word 0x0000282d
  .word 0x8e440000
  .word 0x24c60001
  .word 0x8e030004
  .word 0x8e020000
  .word 0x00852021
  .word 0x94840000
  .word 0x00031840
  .word 0x00431021
  .word 0xa4440000
  .word 0x8e020004
  .word 0x24420001
  .word 0xae020004
  .word 0x8e420004
  .word 0x00c2102b
  .word 0x1440fff1
  .word 0x24a50002
  .word 0x3c140096
  .word 0x2694017c
  .word 0x8e820000
  .word 0x0040f809
  .word 0x8e440000
  .word 0xae400000
  .word 0x3c030096
  .word 0x8f84bb60
  .word 0x3c150096
  .word 0x24630070
  .word 0x26b5018c
  .word 0x8ea20000
  .word 0x8e53000c
  .word 0x00641821
  .word 0x8c640004
  .word 0x0040f809
  .word 0x0240282d
  .word 0x126000ac
  .word 0x00000000
  .word 0x12600018
  .word 0x0260902d
  .word 0x8e060004
  .word 0x8e030000
  .word 0x00061040
  .word 0x00622821
  .word 0x94a4fffe
  .word 0x8e420000
  .word 0x94430000
  .word 0x1464000b
  .word 0x00000000
  .word 0x30c20001
  .word 0x1040000c
  .word 0x00000000
  .word 0x1220000a
  .word 0x00000000
  .word 0xa4a30000
  .word 0x8e020004
  .word 0x24420001
  .word 0x10000005
  .word 0xae020004
  .word 0x8e52000c
  .word 0x1640fff0
  .word 0x00000000
  .word 0x00000000
  .word 0x1240001b
  .word 0x00000000
  .word 0x12400043
  .word 0x00000000
  .word 0x8e420004
  .word 0x0002082b
  .word 0x1020006d
  .word 0x0000302d
  .word 0x0000282d
  .word 0x00000000
  .word 0x8e440000
  .word 0x8e030004
  .word 0x24c60001
  .word 0x8e020000
  .word 0x00852021
  .word 0x94840000
  .word 0x00031840
  .word 0x00431021
  .word 0xa4440000
  .word 0x8e020004
  .word 0x24420001
  .word 0xae020004
  .word 0x8e420004
  .word 0x00c2102b
  .word 0x1440fff1
  .word 0x24a50002
  .word 0x10000059
  .word 0x00000000
  .word 0x1260ffe5
  .word 0x0260902d
  .word 0x8e060004
  .word 0x8e030000
  .word 0x00061040
  .word 0x00622821
  .word 0x94a4fffc
  .word 0x00000000
  .word 0x8e420000
  .word 0x94430000
  .word 0x14640013
  .word 0x00000000
  .word 0x30c20001
  .word 0x14400016
  .word 0x00000000
  .word 0x12200014
  .word 0x00000000
  .word 0xa4a30000
  .word 0x8e440000
  .word 0x8e030004
  .word 0x8e020000
  .word 0x94840000
  .word 0x00031840
  .word 0x00431021
  .word 0xa4440002
  .word 0x8e020004
  .word 0x24420002
  .word 0x1000ffca
  .word 0xae020004
  .word 0x00000000
  .word 0x8e52000c
  .word 0x1640ffe8
  .word 0x00000000
  .word 0x1000ffc4
  .word 0x00000000
  .word 0x00000000
  .word 0xa4a30000
  .word 0x8e020004
  .word 0x24420001
  .word 0x1000ffbe
  .word 0xae020004
  .word 0x00000000
  .word 0x8e030004
  .word 0x30620001
  .word 0x1040001b
  .word 0x0260902d
  .word 0x12200019
  .word 0x00000000
  .word 0x8e020000
  .word 0x00031840
  .word 0x00431821
  .word 0x9462fffe
  .word 0xa4620000
  .word 0x8e640000
  .word 0x8e030004
  .word 0x8e020000
  .word 0x94840000
  .word 0x00031840
  .word 0x00431021
  .word 0xa4440002
  .word 0x8e640000
  .word 0x8e030004
  .word 0x8e020000
  .word 0x94840000
  .word 0x00031840
  .word 0x00431021
  .word 0xa4440004
  .word 0x8e020004
  .word 0x24420003
  .word 0x1000ffa2
  .word 0xae020004
  .word 0x00000000
  .word 0x8e020000
  .word 0x00031840
  .word 0x00431821
  .word 0x9462fffe
  .word 0xa4620000
  .word 0x8e640000
  .word 0x8e030004
  .word 0x8e020000
  .word 0x94840000
  .word 0x00031840
  .word 0x00431021
  .word 0xa4440002
  .word 0x8e020004
  .word 0x24420002
  .word 0x1000ff91
  .word 0xae020004
  .word 0x8e820000
  .word 0x0040f809
  .word 0x8e440000
  .word 0x1272000e
  .word 0xae400000
  .word 0x8e62000c
  .word 0x1052001b
  .word 0x0260202d
  .word 0x8c84000c
  .word 0x8c82000c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1452fffa
  .word 0x00000000
  .word 0x10000013
  .word 0x8e42000c
  .word 0x00000000
  .word 0x8f84bb60
  .word 0x3c030096
  .word 0x8ea20000
  .word 0x24630070
  .word 0x8e73000c
  .word 0x00641821
  .word 0x8c640004
  .word 0x0040f809
  .word 0x0240282d
  .word 0x00000000
  .word 0x1660ff56
  .word 0x00000000
  .word 0xaed00000
  .word 0xae00000c
  .word 0x1000000d
  .word 0x24020001
  .word 0x8e42000c
  .word 0x3c030096
  .word 0x24630070
  .word 0xac82000c
  .word 0x8f84bb60
  .word 0x8ea20000
  .word 0x00641821
  .word 0x8c640004
  .word 0x0040f809
  .word 0x0240282d
  .word 0x1000ffef
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
  .word 0x27bd0080
}

// FUN_00498720
asm u64 FUN_00498720(int param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff10
  .word 0x3c020096
  .word 0xffbf0090
  .word 0x24420178
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fa200a0
  .word 0x00a0b02d
  .word 0x3c020001
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x34450502
  .word 0x7fb30030
  .word 0x0000a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x7ba200a0
  .word 0x0080802d
  .word 0x8c830004
  .word 0xafa600e8
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00032080
  .word 0x10400012
  .word 0xafa200e4
  .word 0x8e050004
  .word 0x0005082b
  .word 0x10200010
  .word 0x0000302d
  .word 0x0000202d
  .word 0x0040182d
  .word 0x8e020008
  .word 0x24c60001
  .word 0x00441021
  .word 0xac620000
  .word 0x24840014
  .word 0x8e050004
  .word 0x00c5102b
  .word 0x1440fff8
  .word 0x24630004
  .word 0x10000004
  .word 0x8fa400e4
  .word 0x1000018b
  .word 0x0000102d
  .word 0x8fa400e4
  .word 0x3c070049
  .word 0x24060004
  .word 0x0c14897e
  .word 0x24e765a0
  .word 0x8e030004
  .word 0x2c620002
  .word 0x14400014
  .word 0x24110001
  .word 0x8fa200e4
  .word 0x2c610002
  .word 0x8c420000
  .word 0x8c460008
  .word 0x1420000e
  .word 0x0220202d
  .word 0x8fa200e4
  .word 0x24450004
  .word 0x8ca20000
  .word 0x8c420008
  .word 0x10460004
  .word 0x00000000
  .word 0x0040302d
  .word 0x26310001
  .word 0x00000000
  .word 0x24840001
  .word 0x0083102b
  .word 0x1440fff6
  .word 0x24a50004
  .word 0x7ba200a0
  .word 0x3c030101
  .word 0x00112080
  .word 0x8c420000
  .word 0x0040f809
  .word 0x34650502
  .word 0x0040982d
  .word 0x00111040
  .word 0x00511821
  .word 0x3c020001
  .word 0x34450502
  .word 0x7ba200a0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00032080
  .word 0x8fa300e4
  .word 0xafa200cc
  .word 0x8c630000
  .word 0x8c630008
  .word 0xac430008
  .word 0xac400004
  .word 0xac400000
  .word 0x8e050004
  .word 0x2ca20002
  .word 0x1440001d
  .word 0x241e0001
  .word 0x24a2ffff
  .word 0x0002082b
  .word 0x10200019
  .word 0x0000202d
  .word 0x8fa200cc
  .word 0x8fa700e4
  .word 0x2446000c
  .word 0x8ce30004
  .word 0x8ce20000
  .word 0x8c630008
  .word 0x8c420008
  .word 0x1043000a
  .word 0x00000000
  .word 0xacc30008
  .word 0x27de0001
  .word 0x24830001
  .word 0xacc30004
  .word 0xacc00000
  .word 0x8cc2fff8
  .word 0x00621023
  .word 0xacc2fff8
  .word 0x24c6000c
  .word 0x8e050004
  .word 0x24840001
  .word 0x24a2ffff
  .word 0x0082102b
  .word 0x1440ffec
  .word 0x24e70004
  .word 0x001e1040
  .word 0x005e1821
  .word 0x3c02cccc
  .word 0x00032080
  .word 0x3443cccd
  .word 0x8fa200cc
  .word 0x00822021
  .word 0x8c82fff8
  .word 0x00a21023
  .word 0xac82fff8
  .word 0x8e020004
  .word 0x00620019
  .word 0x00001810
  .word 0x3c020001
  .word 0x34470502
  .word 0x24040010
  .word 0x24060004
  .word 0x000310c2
  .word 0x0c130ed4
  .word 0x24450005
  .word 0x8fa300e4
  .word 0x3c040096
  .word 0x8f85bb60
  .word 0x24840070
  .word 0x001e082b
  .word 0xafa000ec
  .word 0xafa000b0
  .word 0xafa300d0
  .word 0x00851821
  .word 0x1020007c
  .word 0xac620004
  .word 0x8fb200cc
  .word 0x3c150096
  .word 0x3c170096
  .word 0x26b5017c
  .word 0x26f7018c
  .word 0x3c020001
  .word 0x8e440004
  .word 0x34450502
  .word 0x7ba200a0
  .word 0x00041880
  .word 0x00641821
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00032080
  .word 0x8e450004
  .word 0x0040802d
  .word 0x0005082b
  .word 0x10200017
  .word 0x0000302d
  .word 0x0200202d
  .word 0x00000000
  .word 0x8fa200d0
  .word 0x24c60001
  .word 0x8c430000
  .word 0xc4630000
  .word 0x24420004
  .word 0xc4620004
  .word 0xafa200d0
  .word 0xc4610008
  .word 0xc460000c
  .word 0xe4830000
  .word 0xe4820004
  .word 0xe4810008
  .word 0xe480000c
  .word 0xc4600010
  .word 0xe4800010
  .word 0x8e450004
  .word 0x00c5102b
  .word 0x1440ffee
  .word 0x24840014
  .word 0x00000000
  .word 0x0200202d
  .word 0x27a600ec
  .word 0x0c125d80
  .word 0x02c0382d
  .word 0x8fa500e8
  .word 0x0c1260ac
  .word 0x27a400ec
  .word 0x8fb100ec
  .word 0x12200029
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x3c030001
  .word 0x8e240004
  .word 0x34650502
  .word 0x8c420000
  .word 0x00041840
  .word 0x0040f809
  .word 0x2464000c
  .word 0x8e440008
  .word 0x2443000c
  .word 0xac440008
  .word 0x8e240004
  .word 0xac440004
  .word 0xac430000
  .word 0x8c430004
  .word 0x0003082b
  .word 0x1020000f
  .word 0x0000282d
  .word 0x0000302d
  .word 0x00000000
  .word 0x8e240000
  .word 0x8c430000
  .word 0x24a50001
  .word 0x00862021
  .word 0x94840000
  .word 0x00661821
  .word 0xa4640000
  .word 0x8c430004
  .word 0x00a3182b
  .word 0x1460fff6
  .word 0x24c60002
  .word 0x00000000
  .word 0x3283ffff
  .word 0x00032080
  .word 0x02642021
  .word 0x26830001
  .word 0xac820000
  .word 0x8e31000c
  .word 0x1620ffd9
  .word 0x3074ffff
  .word 0x8fa200ec
  .word 0x10400014
  .word 0x00000000
  .word 0x00000000
  .word 0x8fb100ec
  .word 0x8ea20000
  .word 0x8e23000c
  .word 0xafa300ec
  .word 0x0040f809
  .word 0x8e240000
  .word 0xae200000
  .word 0x3c030096
  .word 0x8f84bb60
  .word 0x24630070
  .word 0x8ee20000
  .word 0x00641821
  .word 0x8c640004
  .word 0x0040f809
  .word 0x0220282d
  .word 0x8fa200ec
  .word 0x1440ffef
  .word 0x00000000
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x8fa200b0
  .word 0x24420001
  .word 0xafa200b0
  .word 0x005e102b
  .word 0x1440ff8c
  .word 0x2652000c
  .word 0x00000000
  .word 0x8f83bb60
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x0c130f0c
  .word 0x8c440004
  .word 0x8f85bb60
  .word 0x3c020096
  .word 0x24420070
  .word 0x3290ffff
  .word 0x0010082b
  .word 0x24040010
  .word 0x0000902d
  .word 0x0000182d
  .word 0x00451021
  .word 0x1020004a
  .word 0xac400004
  .word 0x2e010009
  .word 0x14200037
  .word 0x2602fff8
  .word 0x0260282d
  .word 0x8cac0000
  .word 0x24630008
  .word 0x8caa0008
  .word 0x0062302b
  .word 0x8ca9000c
  .word 0x8ca80010
  .word 0x8ca70014
  .word 0x8cab0004
  .word 0x8d8e0004
  .word 0x8d4a0004
  .word 0x8d290004
  .word 0x8d080004
  .word 0x8ce70004
  .word 0x8d6c0004
  .word 0x000e6840
  .word 0x25ad000c
  .word 0x008d6821
  .word 0x024e5821
  .word 0x000c2040
  .word 0x016c5821
  .word 0x248c000c
  .word 0x016a2021
  .word 0x00892021
  .word 0x000a5040
  .word 0x00094840
  .word 0x01ac5821
  .word 0x254a000c
  .word 0x2529000c
  .word 0x016a5021
  .word 0x00882021
  .word 0x01495021
  .word 0x00084040
  .word 0x00874821
  .word 0x2508000c
  .word 0x00072040
  .word 0x01484021
  .word 0x2484000c
  .word 0x8ca70018
  .word 0x01045021
  .word 0x8ca4001c
  .word 0x8ce80004
  .word 0x8c840004
  .word 0x24a50020
  .word 0x01283821
  .word 0x00084040
  .word 0x00e49021
  .word 0x2508000c
  .word 0x00042040
  .word 0x01483821
  .word 0x2484000c
  .word 0x14c0ffcd
  .word 0x00e42021
  .word 0x00000000
  .word 0x0070082b
  .word 0x1020000e
  .word 0x00000000
  .word 0x00031080
  .word 0x02623821
  .word 0x8ce50000
  .word 0x24630001
  .word 0x0070102b
  .word 0x8ca60004
  .word 0x24e70004
  .word 0x00062840
  .word 0x02469021
  .word 0x24a5000c
  .word 0x1440fff7
  .word 0x00852021
  .word 0x00000000
  .word 0x0c125670
  .word 0x00000000
  .word 0x24030001
  .word 0x0040b82d
  .word 0xac430000
  .word 0x3284ffff
  .word 0xa4540004
  .word 0x00041840
  .word 0x8f86bb60
  .word 0x00641821
  .word 0x3c050096
  .word 0x26f10010
  .word 0x00031880
  .word 0x24a50070
  .word 0x0223a021
  .word 0x0010082b
  .word 0x0000a82d
  .word 0x00a61821
  .word 0x84630000
  .word 0xa4430006
  .word 0xac40000c
  .word 0xac520008
  .word 0x8f82bb60
  .word 0x00a21821
  .word 0x84620000
  .word 0x24420001
  .word 0x1020001d
  .word 0xa4620000
  .word 0x3c160096
  .word 0x0260902d
  .word 0x26d6017c
  .word 0xae340000
  .word 0x0280202d
  .word 0x8e420000
  .word 0x8c420004
  .word 0xae220004
  .word 0x8e420000
  .word 0x8c420008
  .word 0xae220008
  .word 0x8e430000
  .word 0x8c620004
  .word 0x8c650000
  .word 0x0c148494
  .word 0x00023040
  .word 0x8e230004
  .word 0x8e440000
  .word 0x8ec20000
  .word 0x00031840
  .word 0x2631000c
  .word 0x0040f809
  .word 0x0283a021
  .word 0x26b50001
  .word 0xae400000
  .word 0x02b0102b
  .word 0x1440ffe8
  .word 0x26520004
  .word 0x3c100096
  .word 0x2610017c
  .word 0x8e020000
  .word 0x0040f809
  .word 0x8fa400e4
  .word 0x8e020000
  .word 0x0040f809
  .word 0x0260202d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x8fa400cc
  .word 0x02e0102d
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
  .word 0x27bd00f0
}

#pragma tailcall on
// FUN_00498E30

void FUN_00498e30(u64 param_1)

{
  FUN_00498720_wide(param_1,0,1);
  return;
}
#pragma tailcall off

// FUN_00498E40
asm u32 FUN_00498e40(long param_1,long param_2)
{
  .set noreorder
  .word 0x10800004
  .word 0x00000000
  .word 0x3c020078
  .word 0x8c42dda0
  .word 0xac820000
  .word 0x10a00004
  .word 0x00000000
  .word 0x3c020078
  .word 0x8c42dda4
  .word 0xaca20000
  .word 0x03e00008
  .word 0x24020001
}

// FUN_00498E70
asm long FUN_00498e70(int param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x3c020001
  .word 0xffbf0050
  .word 0x34450502
  .word 0x7fb40040
  .word 0x3c020096
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c830004
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00032080
  .word 0x0040882d
  .word 0x1220008f
  .word 0x00000000
  .word 0x8e450004
  .word 0x0005082b
  .word 0x1020000d
  .word 0x0000302d
  .word 0x0000202d
  .word 0x0220182d
  .word 0x8e420008
  .word 0x24c60001
  .word 0x00441021
  .word 0xac620000
  .word 0x24840014
  .word 0x8e450004
  .word 0x00c5102b
  .word 0x1440fff8
  .word 0x24630004
  .word 0x00000000
  .word 0x3c070049
  .word 0x0220202d
  .word 0x24060004
  .word 0x0c14897e
  .word 0x24e765a0
  .word 0x8e440004
  .word 0x2c820002
  .word 0x14400012
  .word 0x24070001
  .word 0x8e220000
  .word 0x2c810002
  .word 0x8c460008
  .word 0x1420000d
  .word 0x00e0182d
  .word 0x26250004
  .word 0x8ca20000
  .word 0x8c420008
  .word 0x10460004
  .word 0x00000000
  .word 0x0040302d
  .word 0x24e70001
  .word 0x00000000
  .word 0x24630001
  .word 0x0064102b
  .word 0x1440fff6
  .word 0x24a50004
  .word 0x00071040
  .word 0x00471821
  .word 0x00041040
  .word 0x00039880
  .word 0x00441021
  .word 0x26630010
  .word 0x00021040
  .word 0x0062a021
  .word 0x0c125670
  .word 0x0280202d
  .word 0x0040802d
  .word 0x12000049
  .word 0x00000000
  .word 0xae000000
  .word 0x24020001
  .word 0xa6020004
  .word 0x3c080096
  .word 0x8f86bb60
  .word 0x25080070
  .word 0x26050010
  .word 0x0000102d
  .word 0x00b32021
  .word 0x0220182d
  .word 0x01063021
  .word 0x84c60000
  .word 0xa6060006
  .word 0xae00000c
  .word 0x8e470004
  .word 0x00073040
  .word 0x00c73021
  .word 0xae060008
  .word 0x8f86bb60
  .word 0x01063821
  .word 0x84e60000
  .word 0x24c60001
  .word 0xa4e60000
  .word 0xae000014
  .word 0x8e260000
  .word 0x8cc60008
  .word 0xae060018
  .word 0xae040010
  .word 0x8c670000
  .word 0x8ca60008
  .word 0x8ce70008
  .word 0x10e6000b
  .word 0x00000000
  .word 0x24a5000c
  .word 0xaca00004
  .word 0x8c660000
  .word 0x8cc60008
  .word 0xaca60008
  .word 0xaca40000
  .word 0x96060004
  .word 0x24c60001
  .word 0xa6060004
  .word 0x00000000
  .word 0x8c660000
  .word 0x24420001
  .word 0x94c60000
  .word 0xa4860000
  .word 0x8c660000
  .word 0x94c60002
  .word 0xa4860002
  .word 0x8c660000
  .word 0x94c60004
  .word 0x24630004
  .word 0xa4860004
  .word 0x8ca60004
  .word 0x24c60003
  .word 0xaca60004
  .word 0x8e460004
  .word 0x0046302b
  .word 0x14c0ffe0
  .word 0x24840006
  .word 0x3c050049
  .word 0x0200202d
  .word 0x24a567a0
  .word 0x0c1257c4
  .word 0x0000302d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0220202d
  .word 0x1000001b
  .word 0x0200102d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0220202d
  .word 0x24020002
  .word 0x0280282d
  .word 0xafa20068
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2006c
  .word 0x0c130714
  .word 0x27a40068
  .word 0x1000000c
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30060
  .word 0x34440013
  .word 0x8e420004
  .word 0x0c130744
  .word 0x00022880
  .word 0xafa20064
  .word 0x0c130714
  .word 0x27a40060
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}

// FUN_00499140
asm long FUN_00499140(long param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x1200001d
  .word 0x00000000
  .word 0x8e020004
  .word 0x10400015
  .word 0x00000000
  .word 0x30a20001
  .word 0x10400006
  .word 0x00000000
  .word 0x3c030078
  .word 0x3c020078
  .word 0x8c45dda4
  .word 0x10000004
  .word 0x8c63dda0
  .word 0x3c03004a
  .word 0x0000282d
  .word 0x24638e70
  .word 0x0060f809
  .word 0x0200202d
  .word 0x0040882d
  .word 0x1220000a
  .word 0x00000000
  .word 0x0c125708
  .word 0x0200202d
  .word 0x10000007
  .word 0x0220102d
  .word 0x0c125708
  .word 0x00000000
  .word 0x3c020078
  .word 0x10000002
  .word 0x2442dd90
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83bb6c
  .word 0x0080102d
  .word 0x24630001
  .word 0x03e00008
  .word 0xaf83bb6c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83bb6c
  .word 0x0080102d
  .word 0x2463ffff
  .word 0x03e00008
  .word 0xaf83bb6c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma tailcall on
// FUN_00499230
void FUN_00499230(void)
{
  ((code)(*(u32 *)((u8 *)DAT_00960074_abs[0] + 0x68)))();
  return;
}
#pragma tailcall off

#pragma schedule on
#pragma tailcall on
// FUN_00499250

void FUN_00499250(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)

{
  FUN_004c61b0_raw((u32)DAT_0077ddb0_abs,param_1,param_2,param_3,param_4,param_5);
}

// FUN_00499280

void FUN_00499280(u64 param_1,u64 param_2,u64 param_3,u64 param_4)

{
  FUN_004c5960_raw((u32)DAT_0077ddb0_abs,param_1,param_2,param_3,param_4);
}

// FUN_004992B0

void FUN_004992b0(u64 param_1,u64 param_2)

{
  FUN_004c59b0_raw((u32)DAT_0077ddb0_abs,param_1,param_2);
}
#pragma tailcall off

#pragma tailcall on
// FUN_004992D0

void FUN_004992d0(u64 param_1,u64 param_2)

{
  FUN_004c5a00_u32((u32)DAT_0077ddb0_abs,param_1,param_2);
}
#pragma tailcall off
// FUN_004992F0
asm u32 FUN_004992f0(u32 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x8ca20000
  .word 0x10440003
  .word 0x00000000
  .word 0x10000004
  .word 0x0080102d
  .word 0x24030001
  .word 0x0000102d
  .word 0xaca30004
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00499320
asm u64 FUN_00499320(u64 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c12648c
  .word 0x7fb00000
  .word 0x1040001e
  .word 0x00000000
  .word 0x8e930038
  .word 0x26920038
  .word 0x1272001a
  .word 0x00000000
  .word 0x3c110096
  .word 0x26310078
  .word 0x8e700008
  .word 0x92020002
  .word 0x30420004
  .word 0x1040000f
  .word 0x00000000
  .word 0x96030060
  .word 0x96220000
  .word 0x1062000b
  .word 0x00000000
  .word 0x0c1244ac
  .word 0x0200202d
  .word 0x3c030096
  .word 0x8c640070
  .word 0x0c13277c
  .word 0x0040282d
  .word 0x14400009
  .word 0x00000000
  .word 0x96220000
  .word 0xa6020060
  .word 0x8e730000
  .word 0x1672ffeb
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0x0280102d
  .word 0x8e020048
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000fff4
  .word 0x00000000
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
}

// FUN_00499400
asm int FUN_00499400(int param_1,u64 param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x00c0b82d
  .word 0x7fb50060
  .word 0x00a0b02d
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x0000982d
  .word 0x7fb10020
  .word 0x0000902d
  .word 0x7fb00010
  .word 0x0000882d
  .word 0x8c820014
  .word 0xafa700b8
  .word 0x1040007e
  .word 0xafa400bc
  .word 0x00028080
  .word 0x3c150096
  .word 0x3c020001
  .word 0x26b50178
  .word 0x34450006
  .word 0x8ea20000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x0040a02d
  .word 0x3c030001
  .word 0x8ea20000
  .word 0x0200202d
  .word 0x0040f809
  .word 0x34650507
  .word 0x8ea30000
  .word 0x0040f02d
  .word 0x3c020001
  .word 0x0200202d
  .word 0x0060f809
  .word 0x34450507
  .word 0xafa200b4
  .word 0x96e20084
  .word 0x0002082a
  .word 0x1020005a
  .word 0x0000a82d
  .word 0x0000802d
  .word 0x8ee20004
  .word 0x3266ffff
  .word 0x0006082a
  .word 0x0000182d
  .word 0x00504821
  .word 0x95220006
  .word 0x00022080
  .word 0x8fa200b8
  .word 0x00441021
  .word 0x8c450000
  .word 0x8ca20000
  .word 0x1020000e
  .word 0x0000502d
  .word 0x00000000
  .word 0x3144ffff
  .word 0x00042080
  .word 0x02842021
  .word 0x8c840000
  .word 0x10820007
  .word 0x00000000
  .word 0x25440001
  .word 0x308affff
  .word 0x0146202a
  .word 0x1480fff6
  .word 0x00000000
  .word 0x00000000
  .word 0x3144ffff
  .word 0x10860059
  .word 0x00000000
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x8c430000
  .word 0x00000000
  .word 0x3244ffff
  .word 0x0004082a
  .word 0x1020000d
  .word 0x0000582d
  .word 0x3162ffff
  .word 0x00021080
  .word 0x03c21021
  .word 0x8c420000
  .word 0x10430007
  .word 0x00000000
  .word 0x25620001
  .word 0x304bffff
  .word 0x0164102a
  .word 0x1440fff6
  .word 0x00000000
  .word 0x00000000
  .word 0x3162ffff
  .word 0x10440048
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca30008
  .word 0x3222ffff
  .word 0x0002082a
  .word 0x1020000e
  .word 0x0000202d
  .word 0x00000000
  .word 0x3086ffff
  .word 0x00063880
  .word 0x8fa600b4
  .word 0x00c73021
  .word 0x8cc60000
  .word 0x10c30006
  .word 0x00000000
  .word 0x24840001
  .word 0x3084ffff
  .word 0x0082302a
  .word 0x14c0fff5
  .word 0x00000000
  .word 0x3086ffff
  .word 0x10c20038
  .word 0x00000000
  .word 0x00000000
  .word 0xffa40000
  .word 0x95260000
  .word 0x95270002
  .word 0x95280004
  .word 0x95290006
  .word 0x0c12573c
  .word 0x02c0202d
  .word 0x96e20084
  .word 0x26b50001
  .word 0x02a2102a
  .word 0x1440ffa9
  .word 0x26100008
  .word 0x3c100096
  .word 0x2610017c
  .word 0x8e020000
  .word 0x0040f809
  .word 0x0280202d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x03c0202d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x8fa400b4
  .word 0x8fa200bc
  .word 0x8c420008
  .word 0x30420001
  .word 0x10400006
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0c126450
  .word 0x24050001
  .word 0x10000004
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0c126450
  .word 0x0000282d
  .word 0x10400019
  .word 0x00000000
  .word 0xaee20078
  .word 0x10000019
  .word 0x8fa200bc
  .word 0x00043080
  .word 0x26640001
  .word 0x02863021
  .word 0x3093ffff
  .word 0x1000ffa4
  .word 0xacc20000
  .word 0x00000000
  .word 0x00021080
  .word 0x03c22021
  .word 0x26420001
  .word 0xac830000
  .word 0x1000ffb5
  .word 0x3052ffff
  .word 0x8fa200b4
  .word 0x00063080
  .word 0x00463021
  .word 0x26220001
  .word 0xacc30000
  .word 0x1000ffc4
  .word 0x3051ffff
  .word 0x00000000
  .word 0x0c125708
  .word 0x02c0202d
  .word 0x0000102d
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
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}

// FUN_00499720
asm void FUN_00499720(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x2403fffe
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c840000
  .word 0x1083003a
  .word 0x00000000
  .word 0x2403ffff
  .word 0x10830003
  .word 0x00000000
  .word 0x10000014
  .word 0x8e040008
  .word 0x8e040034
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8e120038
  .word 0x26110038
  .word 0x12510016
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c126bc8
  .word 0x8e520000
  .word 0x00000000
  .word 0x00000000
  .word 0x1651fffa
  .word 0x00000000
  .word 0x1000000e
  .word 0x8e120040
  .word 0x8e040008
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1265c8
  .word 0x00000000
  .word 0x8e04000c
  .word 0x1080001b
  .word 0x00000000
  .word 0x0c1265c8
  .word 0x00000000
  .word 0x10000018
  .word 0xdfbf0030
  .word 0x8e120040
  .word 0x26110040
  .word 0x12510008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c126bac
  .word 0x8e520000
  .word 0x00000000
  .word 0x00000000
  .word 0x1651fffa
  .word 0x00000000
  .word 0x3c040078
  .word 0x2484ddb0
  .word 0x0c131958
  .word 0x0200282d
  .word 0x8e040078
  .word 0x10800005
  .word 0x00000000
  .word 0x0c125720
  .word 0x00000000
  .word 0x1000ffe9
  .word 0xae000078
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00499850
asm void FUN_00499850(int *param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x2402fffe
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830000
  .word 0x10620019
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10620003
  .word 0x00000000
  .word 0x1000001a
  .word 0x0080802d
  .word 0x0080802d
  .word 0x8c840034
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0x8e120038
  .word 0x26110038
  .word 0x12510022
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c126bc8
  .word 0x8e520000
  .word 0x00000000
  .word 0x00000000
  .word 0x1651fffa
  .word 0x00000000
  .word 0x1000001a
  .word 0x8e120040
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x8c840008
  .word 0x10800003
  .word 0x00000000
  .word 0x0c126614
  .word 0x00000000
  .word 0xae000008
  .word 0x8e04000c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c126614
  .word 0x00000000
  .word 0xae00000c
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000004c
  .word 0xdfbf0040
  .word 0x8e120040
  .word 0x26110040
  .word 0x12510009
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c126bac
  .word 0x8e520000
  .word 0x00000000
  .word 0x00000000
  .word 0x1651fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x3c040078
  .word 0x2484ddb0
  .word 0x0c131958
  .word 0x0200282d
  .word 0x8e040008
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000008
  .word 0x8e04000c
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae00000c
  .word 0x8e040030
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000030
  .word 0x8e040004
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000004
  .word 0x3c110096
  .word 0x0000982d
  .word 0x0200902d
  .word 0x2631017c
  .word 0x8e440010
  .word 0x10800006
  .word 0x00000000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae400010
  .word 0x00000000
  .word 0x26730001
  .word 0x2a620008
  .word 0x1440fff5
  .word 0x26520004
  .word 0x8e040078
  .word 0x10800004
  .word 0x00000000
  .word 0x0c125720
  .word 0x00000000
  .word 0xae000078
  .word 0x8e220000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000ffb4
  .word 0x00000000
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_00499A80
asm u64 FUN_00499a80(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x24420070
  .word 0x7fb00000
  .word 0x8f83bb70
  .word 0x0080802d
  .word 0x00431021
  .word 0x8c440000
  .word 0x10800008
  .word 0x00000000
  .word 0x0c130f0c
  .word 0x00000000
  .word 0x8f83bb70
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0xac400000
  .word 0x0c1271a0
  .word 0x00000000
  .word 0x8f83bb74
  .word 0x0200102d
  .word 0x2463ffff
  .word 0xaf83bb74
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_00499AF0
asm u64 FUN_00499af0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0xaf85bb70
  .word 0x0c1271b0
  .word 0x0080802d
  .word 0x14400003
  .word 0x00000000
  .word 0x1000001b
  .word 0x0000102d
  .word 0x3c080096
  .word 0x3c020004
  .word 0x24040010
  .word 0x24050008
  .word 0x24060004
  .word 0x24070001
  .word 0x2508df30
  .word 0x0c130ed8
  .word 0x3449000b
  .word 0x8f84bb70
  .word 0x3c030096
  .word 0x24630070
  .word 0x00642021
  .word 0xac820000
  .word 0x8c820000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x24830004
  .word 0x0200102d
  .word 0xac830004
  .word 0xac830008
  .word 0x8f83bb74
  .word 0x24630001
  .word 0xaf83bb74
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_00499B90
asm u64 FUN_00499b90(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x94820084
  .word 0x1840000a
  .word 0x0080802d
  .word 0x8e04007c
  .word 0x10800009
  .word 0x00000000
  .word 0x0200282d
  .word 0x0c13cb9c
  .word 0x24060001
  .word 0x0002800a
  .word 0x10000010
  .word 0x0200102d
  .word 0x1000000e
  .word 0x0200102d
  .word 0x3c020096
  .word 0x8c420074
  .word 0x8c44006c
  .word 0x10800003
  .word 0x00000000
  .word 0x1000fff3
  .word 0x0200282d
  .word 0x8f83be38
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x1000ffec
  .word 0x8c440040
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_00499C20
asm u32 FUN_00499c20(code *param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020096
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c420074
  .word 0x8c51003c
  .word 0x2450003c
  .word 0x1230000c
  .word 0x00a0902d
  .word 0x2624ffcc
  .word 0x10800007
  .word 0x8e310000
  .word 0x0260f809
  .word 0x0240282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000004
  .word 0x24020001
  .word 0x1630fff6
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_00499CA0
asm u64 FUN_00499ca0(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820040
  .word 0x26900040
  .word 0x1050000c
  .word 0x00c0902d
  .word 0x8c440008
  .word 0x10800007
  .word 0x8c510000
  .word 0x0260f809
  .word 0x0240282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000004
  .word 0x0280102d
  .word 0x1630fff6
  .word 0x0220102d
  .word 0x0280102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00499D30
asm u64 FUN_00499d30(u64 param_1)
{
  .set noreorder
  .word 0x27bdf8e0
  .word 0x8c87001c
  .word 0xc4850050
  .word 0x0000402d
  .word 0xc4840054
  .word 0xc4830058
  .word 0xc482005c
  .word 0xc4810060
  .word 0xc4800064
  .word 0xe7a50600
  .word 0xe7a40604
  .word 0xe7a30608
  .word 0xe7a2060c
  .word 0xe7a10610
  .word 0xe7a00614
  .word 0x8ce20000
  .word 0x04400023
  .word 0x00000000
  .word 0x25080001
  .word 0x8ce6000c
  .word 0x00081040
  .word 0x00081880
  .word 0x00481021
  .word 0x007d2821
  .word 0x000210c0
  .word 0x005d1021
  .word 0x24430000
  .word 0xc7a20600
  .word 0x8ce20000
  .word 0xc4e10014
  .word 0xaca60620
  .word 0xc4e00010
  .word 0xc7a60604
  .word 0xc7a50608
  .word 0xc7a4060c
  .word 0xe4620000
  .word 0xc7a30610
  .word 0xc7a20614
  .word 0x8ce70008
  .word 0xe4660004
  .word 0xe4650008
  .word 0xe464000c
  .word 0xe4630010
  .word 0xe4620014
  .word 0x00431821
  .word 0x005d1021
  .word 0xe461000c
  .word 0xe4400600
  .word 0x0501ffde
  .word 0x00000000
  .word 0x10000023
  .word 0x0080102d
  .word 0xc7a50600
  .word 0x00081080
  .word 0xc7a40604
  .word 0x005d1821
  .word 0xc7a30608
  .word 0x00081040
  .word 0xc7a2060c
  .word 0x00481021
  .word 0xc7a10610
  .word 0x000210c0
  .word 0xc7a00614
  .word 0x005d1021
  .word 0xe4e50048
  .word 0x24420000
  .word 0xe4e4004c
  .word 0x2508ffff
  .word 0xe4e30050
  .word 0xe4e20054
  .word 0xe4e10058
  .word 0xe4e0005c
  .word 0xc4450000
  .word 0x8c670620
  .word 0xc4440004
  .word 0xc4430008
  .word 0xc442000c
  .word 0xc4410010
  .word 0xc4400014
  .word 0xe7a50600
  .word 0xe7a40604
  .word 0xe7a30608
  .word 0xe7a2060c
  .word 0xe7a10610
  .word 0x1000ffdb
  .word 0xe7a00614
  .word 0x03e00008
  .word 0x27bd0720
}

// FUN_00499E90
asm void FUN_00499e90(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c030096
  .word 0xffbf0020
  .word 0x3c020004
  .word 0x7fb10010
  .word 0x24630070
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f84bb70
  .word 0x00a0802d
  .word 0x34450507
  .word 0x3c020096
  .word 0x8c420188
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x10400015
  .word 0x00000000
  .word 0xac510000
  .word 0x3c050096
  .word 0xac500004
  .word 0x24a50070
  .word 0x8f83bb70
  .word 0x24440008
  .word 0x00a31821
  .word 0x8c630004
  .word 0xac430008
  .word 0x8f83bb70
  .word 0x00a31821
  .word 0x24630004
  .word 0xac43000c
  .word 0x8f83bb70
  .word 0x00a31821
  .word 0x8c630004
  .word 0xac640004
  .word 0x8f83bb70
  .word 0x00a31821
  .word 0xac640004
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_00499F40
asm void FUN_00499f40(int param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c030096
  .word 0xffbf0000
  .word 0x24630070
  .word 0x8f85bb70
  .word 0x00651821
  .word 0x8c670004
  .word 0x24660004
  .word 0x10e60017
  .word 0x00000000
  .word 0x8ce3fff8
  .word 0x14640011
  .word 0x24e5fff8
  .word 0x8ca60008
  .word 0x3c030096
  .word 0x8ca4000c
  .word 0x24630070
  .word 0x3c020096
  .word 0xac860000
  .word 0x8ca6000c
  .word 0x8ca40008
  .word 0xac860004
  .word 0x8f84bb70
  .word 0x8c42018c
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x10000005
  .word 0xdfbf0000
  .word 0x8ce70000
  .word 0x14e6ffeb
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_00499FD0
asm u64 FUN_00499fd0(u64 param_1)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c91001c
  .word 0x1220000e
  .word 0x0000802d
  .word 0x8e220000
  .word 0x0440000d
  .word 0x00000000
  .word 0x8e23000c
  .word 0x26100001
  .word 0x00101080
  .word 0x005d1021
  .word 0x8e310008
  .word 0xac430040
  .word 0x0601fff6
  .word 0x00000000
  .word 0x1000000f
  .word 0x0240102d
  .word 0x1000000d
  .word 0x0000102d
  .word 0x8e240078
  .word 0x10800004
  .word 0x00000000
  .word 0x0c125720
  .word 0x00000000
  .word 0xae200078
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c510040
  .word 0x1000fff0
  .word 0x2610ffff
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0140
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049A080
asm long FUN_0049a080(long param_1)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c91001c
  .word 0x1220000f
  .word 0x0000802d
  .word 0x8e220000
  .word 0x0440000e
  .word 0x00000000
  .word 0x8e23000c
  .word 0x26100001
  .word 0x00101080
  .word 0x005d1021
  .word 0x8e310008
  .word 0xac430050
  .word 0x00000000
  .word 0x0601fff5
  .word 0x00000000
  .word 0x1000001e
  .word 0x0240102d
  .word 0x1000001c
  .word 0x0000102d
  .word 0x96240080
  .word 0x8e430010
  .word 0x8e220078
  .word 0x00042080
  .word 0x10400007
  .word 0x00649821
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c510050
  .word 0x1000fff0
  .word 0x2610ffff
  .word 0x00000000
  .word 0x0c1256c4
  .word 0x96240084
  .word 0x1040000b
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220302d
  .word 0x0260382d
  .word 0x0c126500
  .word 0x0040282d
  .word 0x0040902d
  .word 0x1640ffef
  .word 0x00000000
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0150
}

// FUN_0049A170
asm u32 FUN_0049a170(u32 param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x3c020096
  .word 0xffbf0050
  .word 0x24420070
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83bb70
  .word 0x00431021
  .word 0x8c530004
  .word 0x24520004
  .word 0x12720014
  .word 0x0080a02d
  .word 0x27b1006c
  .word 0x8e62fff8
  .word 0x90430003
  .word 0x30630001
  .word 0x10600010
  .word 0x2670fff8
  .word 0x0282182b
  .word 0x14600008
  .word 0x00000000
  .word 0x8e030004
  .word 0x00431821
  .word 0x0283082b
  .word 0x10200003
  .word 0x00000000
  .word 0x10000012
  .word 0xdfbf0050
  .word 0x8e730000
  .word 0x1672ffef
  .word 0x00000000
  .word 0x1000000c
  .word 0x0000102d
  .word 0xafb40068
  .word 0x3c05004a
  .word 0xae200000
  .word 0x24a592f0
  .word 0x8e040000
  .word 0x0c126a1c
  .word 0x27a60068
  .word 0x8e220000
  .word 0x1040fff2
  .word 0x00000000
  .word 0x8e020000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}

// FUN_0049A250

u64 FUN_0049a250(u64 param_1)

{
  FUN_0049c330_typed(*(u32 *)DAT_00960070_abs,(u32)FUN_00499320,param_1);
  return param_1;
}

// FUN_0049A290
asm u32 FUN_0049a290(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x24420070
  .word 0x7fb00000
  .word 0x8f83bb70
  .word 0x0080802d
  .word 0x00431021
  .word 0x8c440004
  .word 0x24430004
  .word 0x10830037
  .word 0x00000000
  .word 0x8c82fff8
  .word 0x14500011
  .word 0x2485fff8
  .word 0x8ca60008
  .word 0x3c030096
  .word 0x8ca4000c
  .word 0x24630070
  .word 0x3c020096
  .word 0xac860000
  .word 0x8ca6000c
  .word 0x8ca40008
  .word 0xac860004
  .word 0x8f84bb70
  .word 0x8c42018c
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x10000025
  .word 0x0200202d
  .word 0x8c840000
  .word 0x1483ffeb
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1265c8
  .word 0x00000000
  .word 0x3c040078
  .word 0x0200282d
  .word 0x0c131958
  .word 0x2484ddd0
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000000f
  .word 0x24020001
  .word 0x8e04001c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c126614
  .word 0x00000000
  .word 0x3c040078
  .word 0x0200282d
  .word 0x0c131958
  .word 0x2484ddd0
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x24020001
  .word 0x1000000c
  .word 0xdfbf0010
  .word 0x0200202d
  .word 0x0c1267f4
  .word 0x00000000
  .word 0x0c125498
  .word 0x26040010
  .word 0x92020003
  .word 0x30420001
  .word 0x1040ffe8
  .word 0x00000000
  .word 0x1000ffd8
  .word 0x8e04001c
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

#pragma optimization_level 3
#pragma schedule on
#pragma optimization_level 2
 
// FUN_0049A3D0
asm u32 FUN_0049a3d0(u32 param_1,code *param_2)
{
  .set noreorder
  .word 0x10a00004
  .word 0x00000000
  .word 0xac850068
  .word 0x10000004
  .word 0x0080102d
  .word 0x3c05004a
  .word 0x1000fffb
  .word 0x24a59b90
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma optimization_level 2

// FUN_0049A400
asm long FUN_0049a400(u32 *param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020078
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c44ddd0
  .word 0x3c100096
  .word 0x26100178
  .word 0x3c020003
  .word 0x3445000b
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040902d
  .word 0x12400092
  .word 0x00000000
  .word 0x24020007
  .word 0x26440010
  .word 0xa2420000
  .word 0xa2400001
  .word 0xa2400002
  .word 0xa2400003
  .word 0x0c1254c0
  .word 0xae400004
  .word 0x24030002
  .word 0x3c020078
  .word 0xae43000c
  .word 0xae400008
  .word 0x3c030003
  .word 0x8c44ddb0
  .word 0x8e020000
  .word 0x0040f809
  .word 0x3465000b
  .word 0x0040882d
  .word 0x1220008a
  .word 0x00000000
  .word 0x2402ffff
  .word 0x26230038
  .word 0xae220000
  .word 0x26240010
  .word 0xae200034
  .word 0x26220040
  .word 0xae200078
  .word 0x0000282d
  .word 0xae230038
  .word 0x24060020
  .word 0xae23003c
  .word 0xae220040
  .word 0xae220044
  .word 0xa6200082
  .word 0xa6200084
  .word 0xae200008
  .word 0xae200004
  .word 0x0c148502
  .word 0xae20000c
  .word 0xae200030
  .word 0x3c07004a
  .word 0xc662000c
  .word 0x3c060096
  .word 0xc6610010
  .word 0x3c040004
  .word 0xc6600014
  .word 0x264a002c
  .word 0x26490034
  .word 0x2648003c
  .word 0x24e79b90
  .word 0x3c030078
  .word 0x24c60070
  .word 0x3c020096
  .word 0x34850507
  .word 0xe6220054
  .word 0xe6210058
  .word 0xe620005c
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe6220048
  .word 0xe621004c
  .word 0xe6200050
  .word 0xc662000c
  .word 0xc6610010
  .word 0xc6600014
  .word 0xe622006c
  .word 0xe6210070
  .word 0xe6200074
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe6220060
  .word 0xe6210064
  .word 0xe6200068
  .word 0xae20007c
  .word 0xae51001c
  .word 0xae400020
  .word 0xae40004c
  .word 0xae400048
  .word 0xae400044
  .word 0xc662000c
  .word 0xc6610010
  .word 0xc6600014
  .word 0xe642005c
  .word 0xe6410060
  .word 0xe6400064
  .word 0xc6620000
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe6420050
  .word 0xe6410054
  .word 0xe6400058
  .word 0xae4a002c
  .word 0xae4a0030
  .word 0xae400024
  .word 0xae4a0028
  .word 0xae490034
  .word 0xae490038
  .word 0xae48003c
  .word 0xae480040
  .word 0xae470068
  .word 0xae40006c
  .word 0x8c70ddd0
  .word 0x8c420188
  .word 0x8f83bb70
  .word 0x00c31821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x10400015
  .word 0x00000000
  .word 0xac520000
  .word 0x3c050096
  .word 0xac500004
  .word 0x24a50070
  .word 0x8f84bb70
  .word 0x24430008
  .word 0x00a42021
  .word 0x8c840004
  .word 0xac440008
  .word 0x8f84bb70
  .word 0x00a42021
  .word 0x24840004
  .word 0xac44000c
  .word 0x8f82bb70
  .word 0x00a21021
  .word 0x8c420004
  .word 0xac430004
  .word 0x8f82bb70
  .word 0x00a21021
  .word 0xac430004
  .word 0x3c040078
  .word 0x0240282d
  .word 0x0c13192c
  .word 0x2484ddd0
  .word 0x3c040078
  .word 0x0220282d
  .word 0x0c13192c
  .word 0x2484ddb0
  .word 0x0c126820
  .word 0x0240202d
  .word 0x1040001e
  .word 0x00000000
  .word 0x10000043
  .word 0x0240102d
  .word 0x3c028000
  .word 0x24030002
  .word 0x34440013
  .word 0x3c020078
  .word 0x8c45ddd0
  .word 0x0c130744
  .word 0xafa30058
  .word 0xafa2005c
  .word 0x0c130714
  .word 0x27a40058
  .word 0x10000037
  .word 0x0000102d
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa30050
  .word 0x34440013
  .word 0x0c130744
  .word 0x24050004
  .word 0xafa20054
  .word 0x0c130714
  .word 0x27a40050
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0240202d
  .word 0x10000028
  .word 0x0000102d
  .word 0x0c1267d0
  .word 0x0240202d
  .word 0x0c1267f4
  .word 0x0240202d
  .word 0x0c125498
  .word 0x26440010
  .word 0x92420003
  .word 0x30420001
  .word 0x10400010
  .word 0x00000000
  .word 0x8e44001c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1265c8
  .word 0x00000000
  .word 0x3c040078
  .word 0x0240282d
  .word 0x0c131958
  .word 0x2484ddd0
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0240202d
  .word 0x1000000f
  .word 0x0000102d
  .word 0x8e44001c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c126614
  .word 0x00000000
  .word 0x3c040078
  .word 0x0240282d
  .word 0x0c131958
  .word 0x2484ddd0
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0240202d
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049A7C0
asm u64 FUN_0049a7c0(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c900014
  .word 0x0010102a
  .word 0x14400003
  .word 0x0000902d
  .word 0x10000011
  .word 0x02a0102d
  .word 0x0000882d
  .word 0x8ea20010
  .word 0x00511021
  .word 0x8c440000
  .word 0x0280f809
  .word 0x0260282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x02a0102d
  .word 0x26520001
  .word 0x0250102a
  .word 0x1440fff4
  .word 0x26310004
  .word 0x1000ffef
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049A870
asm u64 FUN_0049a870(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8c84001c
  .word 0x0000802d
  .word 0x8c820000
  .word 0x0440000b
  .word 0x00000000
  .word 0x8c83000c
  .word 0x26100001
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c840008
  .word 0xac430050
  .word 0x0601fff6
  .word 0x00000000
  .word 0x1000000c
  .word 0x0260102d
  .word 0x0240f809
  .word 0x0220282d
  .word 0x10400007
  .word 0x00000000
  .word 0x00101080
  .word 0x005d1021
  .word 0x8c440050
  .word 0x1000fff4
  .word 0x2610ffff
  .word 0x00000000
  .word 0x0260102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0150
  .word 0x00000000
  .word 0x00000000
}

#pragma schedule on
#pragma tailcall on
// FUN_0049A920

void FUN_0049a920(u64 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u64 param_5)

{
  FUN_004c61b0_raw((u32)DAT_0077ddd0_abs,param_1,param_2,param_3,param_4,param_5);
}
#pragma tailcall off

#pragma schedule on
#pragma tailcall on
// FUN_0049A950

void FUN_0049a950(u64 param_1,u64 param_2,u64 param_3,u64 param_4)

{
  FUN_004c5960_raw((u32)DAT_0077ddd0_abs,param_1,param_2,param_3,param_4);
}
#pragma tailcall off

// FUN_0049A980
asm u8 FUN_0049a980(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c060049
  .word 0xffbf0010
  .word 0x3c070049
  .word 0x7fb00000
  .word 0x24040004
  .word 0x24050501
  .word 0x24c64ae0
  .word 0x24e74b70
  .word 0x0c132948
  .word 0x0000802d
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x24040030
  .word 0x24050502
  .word 0x24c65a30
  .word 0x0c132948
  .word 0x24e759e0
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x24040004
  .word 0x24050503
  .word 0x24c62de0
  .word 0x0c132948
  .word 0x24e72e00
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x24040008
  .word 0x24050504
  .word 0x24c614d0
  .word 0x0c132948
  .word 0x24e71410
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x24040004
  .word 0x24050505
  .word 0x24c64930
  .word 0x0c132948
  .word 0x24e748b0
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x02028025
  .word 0x0000202d
  .word 0x2405050a
  .word 0x24c691f0
  .word 0x0c132948
  .word 0x24e79210
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x02028025
  .word 0x2404000c
  .word 0x24050507
  .word 0x24c69af0
  .word 0x0c132948
  .word 0x24e79a80
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x0000202d
  .word 0x2405050b
  .word 0x24c606b0
  .word 0x0c132948
  .word 0x24e70690
  .word 0x02021025
  .word 0x04410003
  .word 0x00000000
  .word 0x10000010
  .word 0x0000102d
  .word 0x0c126f94
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x1000000a
  .word 0x0000102d
  .word 0x0c124570
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c129440
  .word 0x00000000
  .word 0x0002102b
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_0049AAF0
asm u64 FUN_0049aaf0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c080096
  .word 0xffbf0010
  .word 0x3c020004
  .word 0x7fb00000
  .word 0x24060004
  .word 0xaf85bb88
  .word 0x0080802d
  .word 0x8f85af00
  .word 0x24040018
  .word 0x8f87af04
  .word 0x2508df90
  .word 0x0c130ed8
  .word 0x34490507
  .word 0x8f84bb88
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0xac620000
  .word 0x8c620000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000025
  .word 0x0000102d
  .word 0x8f85af08
  .word 0x3c080096
  .word 0x8f87af0c
  .word 0x3c020004
  .word 0x24040018
  .word 0x24060004
  .word 0x2508df60
  .word 0x0c130ed8
  .word 0x34490507
  .word 0x8f83bb88
  .word 0x3c060096
  .word 0x24c60070
  .word 0x00c31821
  .word 0xac620004
  .word 0x8c620004
  .word 0x1040000c
  .word 0x00000000
  .word 0x24050001
  .word 0x3c030096
  .word 0xa4650078
  .word 0x0200102d
  .word 0x8f84bb88
  .word 0x8f83bb8c
  .word 0x00c42021
  .word 0x24630001
  .word 0xac800008
  .word 0x10000009
  .word 0xaf83bb8c
  .word 0x0c130f0c
  .word 0x8c640000
  .word 0x8f84bb88
  .word 0x3c030096
  .word 0x24630070
  .word 0x0000102d
  .word 0x00641821
  .word 0xac600000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_0049ABF0
asm u64 FUN_0049abf0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x24420070
  .word 0x7fb00000
  .word 0x8f83bb88
  .word 0x0080802d
  .word 0x00431021
  .word 0x8c440004
  .word 0x10800008
  .word 0x00000000
  .word 0x0c130f0c
  .word 0x00000000
  .word 0x8f83bb88
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0xac400004
  .word 0x8f83bb88
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x8c440000
  .word 0x10800008
  .word 0x00000000
  .word 0x0c130f0c
  .word 0x00000000
  .word 0x8f83bb88
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0xac400000
  .word 0x8f83bb8c
  .word 0x0200102d
  .word 0x2463ffff
  .word 0xaf83bb8c
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x8f86bb78
  .word 0x3c020096
  .word 0x94450078
  .word 0x3c030096
  .word 0x00863821
  .word 0x8ce6000c
  .word 0x3c020096
  .word 0x24a50001
  .word 0xac660074
  .word 0xa4450078
  .word 0x8ce20010
  .word 0x00400008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83bb78
  .word 0x3c020096
  .word 0xac400074
  .word 0x00831021
  .word 0x8c420014
  .word 0x00400008
  .word 0x00000000
  .word 0x00000000
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82bb78
  .word 0x0080802d
  .word 0x02028821
  .word 0x8e220018
  .word 0x0040f809
  .word 0x00000000
  .word 0x10400011
  .word 0x00000000
  .word 0x8e32000c
  .word 0x1240000c
  .word 0x00000000
  .word 0x3c020096
  .word 0x0240202d
  .word 0x8c510110
  .word 0x0c126e14
  .word 0x0200282d
  .word 0x8e42000c
  .word 0x0000202d
  .word 0x0000282d
  .word 0x38420001
  .word 0x0220f809
  .word 0x2c460001
  .word 0x10000002
  .word 0x0200102d
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x8f87bb78
  .word 0x3c06004a
  .word 0x3c05004a
  .word 0x3c03004a
  .word 0x24c6acf0
  .word 0x24a5ac90
  .word 0x2463acd0
  .word 0x0080102d
  .word 0x00874021
  .word 0xad000000
  .word 0xad000004
  .word 0xad000008
  .word 0x8c870018
  .word 0xad070010
  .word 0x8c87001c
  .word 0xad070014
  .word 0x8c870010
  .word 0xad070018
  .word 0xac860010
  .word 0xac850018
  .word 0xac83001c
  .word 0x03e00008
  .word 0xad00000c
  .word 0x00000000
}

// FUN_0049ADE0
asm u64 FUN_0049ade0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f83bb78
  .word 0x0080802d
  .word 0x00a31021
  .word 0x8c44000c
  .word 0x02031821
  .word 0xac600000
  .word 0xac600004
  .word 0x10800003
  .word 0xac600008
  .word 0x0c127058
  .word 0x0200282d
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_0049AE30
asm u64 FUN_0049ae30(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82bb78
  .word 0x0080802d
  .word 0x02028821
  .word 0x8e240000
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae200000
  .word 0x0200102d
  .word 0xae200004
  .word 0xae200008
  .word 0x8e230010
  .word 0xae030018
  .word 0x8e230014
  .word 0xae03001c
  .word 0x8e230018
  .word 0xae030010
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049AEB0
asm u32 FUN_0049aeb0(u64 param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c030096
  .word 0xffbf0000
  .word 0x0080282d
  .word 0x8c87000c
  .word 0x24630070
  .word 0x8c860010
  .word 0x3c020096
  .word 0xacc70000
  .word 0x8c870010
  .word 0x8c86000c
  .word 0xacc70004
  .word 0x8c870000
  .word 0x8c860004
  .word 0xacc70000
  .word 0x8c860004
  .word 0x8c840000
  .word 0xac860004
  .word 0x8f84bb88
  .word 0x8c42018c
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640004
  .word 0xdfbf0000
  .word 0x24020001
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_0049AF20
asm u32 FUN_0049af20(int *param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c820008
  .word 0x10400018
  .word 0x0080282d
  .word 0x8ca20014
  .word 0x10400015
  .word 0x00000000
  .word 0x8ca6000c
  .word 0x3c030096
  .word 0x8ca40010
  .word 0x24630070
  .word 0x3c020096
  .word 0xac860000
  .word 0x8ca60010
  .word 0x8ca4000c
  .word 0xac860004
  .word 0x8ca60000
  .word 0x8ca40004
  .word 0xac860000
  .word 0x8ca60004
  .word 0x8ca40000
  .word 0xac860004
  .word 0x8f84bb88
  .word 0x8c42018c
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0xdfbf0000
  .word 0x24020001
  .word 0x03e00008
  .word 0x27bd0010
}

// FUN_0049AFA0
asm void FUN_0049afa0(int param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdfe90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000882d
  .word 0x0080802d
  .word 0x0c1244ac
  .word 0x0260202d
  .word 0xc4400008
  .word 0x8e12001c
  .word 0xc4440000
  .word 0x27a60164
  .word 0xc441000c
  .word 0x27a40168
  .word 0xc4420004
  .word 0x27a50154
  .word 0x27a30158
  .word 0xe7a00168
  .word 0x3c100096
  .word 0x26100188
  .word 0x46012001
  .word 0xe7a20164
  .word 0xe7a00160
  .word 0x46012000
  .word 0xc4c30000
  .word 0xe7a00150
  .word 0xc4820000
  .word 0x46011801
  .word 0xe4c00000
  .word 0x46011800
  .word 0xe4a00000
  .word 0x46011001
  .word 0xe4800000
  .word 0x46011000
  .word 0xe4600000
  .word 0x8e430000
  .word 0x04600020
  .word 0x00000000
  .word 0x007d1821
  .word 0xc4610160
  .word 0xc6400010
  .word 0x46000834
  .word 0x4500000e
  .word 0x0240202d
  .word 0x8c830000
  .word 0xc4800014
  .word 0x007d1821
  .word 0xc4610150
  .word 0x46010034
  .word 0x4500000f
  .word 0x8e520008
  .word 0x8c84000c
  .word 0x26310001
  .word 0x00111880
  .word 0x007d1821
  .word 0x10000009
  .word 0xac640050
  .word 0x8e430000
  .word 0xc6400014
  .word 0x007d1821
  .word 0xc4610150
  .word 0x46010034
  .word 0x45000026
  .word 0x00000000
  .word 0x8e52000c
  .word 0x0621ffe1
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x8f86bb88
  .word 0x3c040096
  .word 0x3c030003
  .word 0x24840070
  .word 0x34650507
  .word 0x8e020000
  .word 0x00861821
  .word 0x0040f809
  .word 0x8c640000
  .word 0xac520014
  .word 0x00111880
  .word 0xac530008
  .word 0x26470038
  .word 0x8e460038
  .word 0x007d1821
  .word 0x26650064
  .word 0x2444000c
  .word 0x2631ffff
  .word 0xac460000
  .word 0xac470004
  .word 0x8e460038
  .word 0xacc20004
  .word 0xae420038
  .word 0x8c720050
  .word 0x8e630064
  .word 0xac43000c
  .word 0xac450010
  .word 0x8e630064
  .word 0xac640004
  .word 0x1000ffde
  .word 0xae640064
  .word 0x00000000
  .word 0x00111880
  .word 0x007d1821
  .word 0x8c720050
  .word 0x1000ffd8
  .word 0x2631ffff
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0170
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049B180
asm u64 FUN_0049b180(u64 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82bb7c
  .word 0x02828021
  .word 0x8e020004
  .word 0x0040f809
  .word 0x00000000
  .word 0x1040002b
  .word 0x00000000
  .word 0x8e130000
  .word 0x12600026
  .word 0x00000000
  .word 0x8e920064
  .word 0x26910064
  .word 0x1251001f
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610018c
  .word 0x2645fff4
  .word 0x8ca20008
  .word 0x10400017
  .word 0x8e520000
  .word 0x8ca20014
  .word 0x10400014
  .word 0x00000000
  .word 0x8ca4000c
  .word 0x3c030096
  .word 0x8ca20010
  .word 0x24630070
  .word 0xac440000
  .word 0x8ca40010
  .word 0x8ca2000c
  .word 0xac440004
  .word 0x8ca40000
  .word 0x8ca20004
  .word 0xac440000
  .word 0x8ca40004
  .word 0x8ca20000
  .word 0xac440004
  .word 0x8f84bb88
  .word 0x8e020000
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x1651ffe5
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c126be8
  .word 0x0280282d
  .word 0x10000002
  .word 0x0280102d
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x8f86bb7c
  .word 0x3c05004a
  .word 0x3c030096
  .word 0x24a5b180
  .word 0x0080102d
  .word 0x00863021
  .word 0xacc00000
  .word 0x94630078
  .word 0x2463ffff
  .word 0xa4830060
  .word 0x8c830010
  .word 0xacc30004
  .word 0x03e00008
  .word 0xac850010
  .word 0x00000000
  .word 0x00000000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049B2E0
asm u64 FUN_0049b2e0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x26910064
  .word 0x8f82bb7c
  .word 0x8c930064
  .word 0x12710020
  .word 0x02829021
  .word 0x3c100096
  .word 0x2610018c
  .word 0x2665fff4
  .word 0x8ca20008
  .word 0x10400018
  .word 0x8e730000
  .word 0x8ca20014
  .word 0x10400015
  .word 0x00000000
  .word 0x8ca4000c
  .word 0x3c030096
  .word 0x8ca20010
  .word 0x24630070
  .word 0xac440000
  .word 0x8ca40010
  .word 0x8ca2000c
  .word 0xac440004
  .word 0x8ca40000
  .word 0x8ca20004
  .word 0xac440000
  .word 0x8ca40004
  .word 0x8ca20000
  .word 0xac440004
  .word 0x8f84bb88
  .word 0x8e020000
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x00000000
  .word 0x1671ffe4
  .word 0x00000000
  .word 0x8e430004
  .word 0x0280102d
  .word 0xae830010
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x8f85bb80
  .word 0x3c030096
  .word 0x0080102d
  .word 0x24630070
  .word 0x00852821
  .word 0xaca00000
  .word 0x8f84bb88
  .word 0x00641821
  .word 0x8c630008
  .word 0x03e00008
  .word 0xaca30004
  .word 0x00000000
}

// FUN_0049B3F0
asm u64 FUN_0049b3f0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f82bb80
  .word 0x0080802d
  .word 0x00a21021
  .word 0x8c440000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c127090
  .word 0x0200282d
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049B440
asm u64 FUN_0049b440(u64 param_1)
{
  .set noreorder
  .word 0x27bdfe40
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x0080a02d
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8f82bb84
  .word 0x02828021
  .word 0x8e020004
  .word 0x0040f809
  .word 0x00000000
  .word 0x10400093
  .word 0x00000000
  .word 0x92820001
  .word 0x28420080
  .word 0x14400028
  .word 0x00000000
  .word 0x8e160000
  .word 0x12c00023
  .word 0x8e950004
  .word 0x12a00021
  .word 0x00000000
  .word 0x8e92002c
  .word 0xc6940014
  .word 0x2691002c
  .word 0x12510020
  .word 0x0000982d
  .word 0x3c100096
  .word 0x2610018c
  .word 0x2645fff4
  .word 0x3c030096
  .word 0x8e520000
  .word 0x24630070
  .word 0x8ca4000c
  .word 0x8ca20010
  .word 0xac440000
  .word 0x8ca40010
  .word 0x8ca2000c
  .word 0xac440004
  .word 0x8ca40000
  .word 0x8ca20004
  .word 0xac440000
  .word 0x8ca40004
  .word 0x8ca20000
  .word 0xac440004
  .word 0x8f84bb88
  .word 0x8e020000
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640004
  .word 0x1651ffea
  .word 0x00000000
  .word 0x10000006
  .word 0x02a0202d
  .word 0x10000072
  .word 0x0280102d
  .word 0x10000070
  .word 0x0280102d
  .word 0x02a0202d
  .word 0x0c132cbc
  .word 0x00000000
  .word 0xc4430030
  .word 0x3c100096
  .word 0xc4420034
  .word 0x27a501b4
  .word 0xc4410038
  .word 0x27a401a4
  .word 0x27a301b8
  .word 0x8ed1001c
  .word 0x26100188
  .word 0x46141800
  .word 0x27a201a8
  .word 0xe7a201b4
  .word 0xe7a001a0
  .word 0x46141801
  .word 0xc4a20000
  .word 0xe7a001b0
  .word 0xe7a101b8
  .word 0xc4610000
  .word 0x46141000
  .word 0xe4800000
  .word 0x46141001
  .word 0xe4a00000
  .word 0x46140800
  .word 0xe4400000
  .word 0x46140801
  .word 0xe4600000
  .word 0x8e220000
  .word 0x04400020
  .word 0x00000000
  .word 0x005d1021
  .word 0xc44101b0
  .word 0xc6200010
  .word 0x46000834
  .word 0x4500000e
  .word 0x0220182d
  .word 0x8c620000
  .word 0xc4600014
  .word 0x005d1021
  .word 0xc44101a0
  .word 0x46010034
  .word 0x4500000f
  .word 0x8e310008
  .word 0x8c63000c
  .word 0x26730001
  .word 0x00131080
  .word 0x005d1021
  .word 0x10000009
  .word 0xac430090
  .word 0x8e220000
  .word 0xc6200014
  .word 0x005d1021
  .word 0xc44101a0
  .word 0x46010034
  .word 0x45000026
  .word 0x00000000
  .word 0x8e31000c
  .word 0x0661ffe1
  .word 0x00000000
  .word 0x1000ffbe
  .word 0x00000000
  .word 0x8f86bb88
  .word 0x3c040096
  .word 0x3c030003
  .word 0x24840070
  .word 0x34650507
  .word 0x8e020000
  .word 0x00861821
  .word 0x0040f809
  .word 0x8c640004
  .word 0xac510014
  .word 0x00131880
  .word 0xac540008
  .word 0x26270040
  .word 0x8e260040
  .word 0x007d1821
  .word 0x2685002c
  .word 0x2444000c
  .word 0x2673ffff
  .word 0xac460000
  .word 0xac470004
  .word 0x8e260040
  .word 0xacc20004
  .word 0xae220040
  .word 0x8c710090
  .word 0x8e83002c
  .word 0xac43000c
  .word 0xac450010
  .word 0x8e82002c
  .word 0xac440004
  .word 0x1000ffde
  .word 0xae84002c
  .word 0x00000000
  .word 0x00131080
  .word 0x005d1021
  .word 0x8c510090
  .word 0x1000ffd8
  .word 0x2673ffff
  .word 0x00000000
  .word 0x24020002
  .word 0xafa20198
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440016
  .word 0xafa2019c
  .word 0x0c130714
  .word 0x27a40198
  .word 0x1000ff8e
  .word 0x00000000
  .word 0xdfbf0080
  .word 0xc7b40000
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd01c0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f85bb84
  .word 0x3c03004a
  .word 0x2463b440
  .word 0x0080102d
  .word 0x00853021
  .word 0xacc00000
  .word 0x8c850010
  .word 0xacc50004
  .word 0x03e00008
  .word 0xac830010
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049B760
asm u64 FUN_0049b760(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f82bb84
  .word 0x0080802d
  .word 0x00a21021
  .word 0x8c440000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1270f4
  .word 0x0200282d
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_0049B7A0
asm u64 FUN_0049b7a0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x2671002c
  .word 0x8c92002c
  .word 0x1251001a
  .word 0x00000000
  .word 0x3c100096
  .word 0x2610018c
  .word 0x2645fff4
  .word 0x3c030096
  .word 0x8e520000
  .word 0x24630070
  .word 0x8ca4000c
  .word 0x8ca20010
  .word 0xac440000
  .word 0x8ca40010
  .word 0x8ca2000c
  .word 0xac440004
  .word 0x8ca40000
  .word 0x8ca20004
  .word 0xac440000
  .word 0x8ca40004
  .word 0x8ca20000
  .word 0xac440004
  .word 0x8f84bb88
  .word 0x8e020000
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640004
  .word 0x1651ffea
  .word 0x00000000
  .word 0x0260102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_0049B850
asm u64 FUN_0049b850(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdfe00
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0000a02d
  .word 0x7fb20020
  .word 0x0000982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8f82bb78
  .word 0x8ca40004
  .word 0x0c132cbc
  .word 0x02428821
  .word 0xc4420030
  .word 0x8e23000c
  .word 0xc4450034
  .word 0x8e04000c
  .word 0xc4440038
  .word 0x265e0094
  .word 0xc6410118
  .word 0x0000b02d
  .word 0xc640011c
  .word 0xc6430120
  .word 0xe7a201e8
  .word 0x8c75001c
  .word 0xc642010c
  .word 0x3c020096
  .word 0xe7a101d8
  .word 0x24420180
  .word 0xe7a001dc
  .word 0x7fa200b0
  .word 0xc6410110
  .word 0x3c020096
  .word 0xc6400114
  .word 0x24420178
  .word 0x7fa200a0
  .word 0xe7a501ec
  .word 0x38820002
  .word 0xe7a401f0
  .word 0x2c570001
  .word 0xe7a301e0
  .word 0xe7a201c8
  .word 0xe7a101cc
  .word 0xe7a001d0
  .word 0x8ea20000
  .word 0x04400018
  .word 0x00000000
  .word 0x005d1821
  .word 0x02a0202d
  .word 0xc46301d8
  .word 0xc6a20010
  .word 0xc6a10014
  .word 0xc46001c8
  .word 0x46021881
  .word 0xe7a201f8
  .word 0x8fa201f8
  .word 0x46000801
  .word 0x0440006c
  .word 0xe7a001f4
  .word 0x8fa201f8
  .word 0x04410003
  .word 0x00000000
  .word 0x10000002
  .word 0x8c950008
  .word 0x8c95000c
  .word 0x0681ffea
  .word 0x00000000
  .word 0xae330008
  .word 0x10000082
  .word 0x0200102d
  .word 0x26a20048
  .word 0x0000202d
  .word 0x03c0182d
  .word 0x90680012
  .word 0xc4610004
  .word 0x90670010
  .word 0xc4630000
  .word 0x90660011
  .word 0xc4650008
  .word 0xc460000c
  .word 0x00082840
  .word 0x00a84021
  .word 0x00072840
  .word 0x00a72821
  .word 0x00052880
  .word 0x00083880
  .word 0x00452821
  .word 0x00473821
  .word 0xc4a40000
  .word 0xc4e60008
  .word 0x00062840
  .word 0x00a62821
  .word 0x00052880
  .word 0x00452821
  .word 0xc4a20004
  .word 0x4601101a
  .word 0x4603201e
  .word 0x4605305c
  .word 0x46000801
  .word 0xe7a001fc
  .word 0x8fa501fc
  .word 0x0005302a
  .word 0x14c00005
  .word 0x00000000
  .word 0x24840001
  .word 0x28850006
  .word 0x14a0ffde
  .word 0x24630014
  .word 0x14c00028
  .word 0x00000000
  .word 0x8e230004
  .word 0x0263102a
  .word 0x1440001f
  .word 0x00000000
  .word 0x8e240000
  .word 0x24620032
  .word 0x10800009
  .word 0x00029080
  .word 0x3c020103
  .word 0x34460507
  .word 0x7ba200b0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x0240282d
  .word 0x10000007
  .word 0x00000000
  .word 0x3c020103
  .word 0x34450507
  .word 0x7ba200a0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x0240202d
  .word 0x10400015
  .word 0x00000000
  .word 0xae220000
  .word 0x24030001
  .word 0x8e220004
  .word 0x24420032
  .word 0xae220004
  .word 0x14600004
  .word 0x00000000
  .word 0xae330008
  .word 0x10000038
  .word 0x0200102d
  .word 0x8e220000
  .word 0x26730001
  .word 0x00561021
  .word 0xac550000
  .word 0x26d60004
  .word 0x00141080
  .word 0x005d1021
  .word 0x8c5500c0
  .word 0x1000ffa8
  .word 0x2694ffff
  .word 0x24020002
  .word 0x0240282d
  .word 0xafa201c0
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0x27a301c4
  .word 0x27a401c0
  .word 0x0c130714
  .word 0xac620000
  .word 0x1000ffe6
  .word 0x0000182d
  .word 0x8fa201f4
  .word 0x0441ff93
  .word 0x00000000
  .word 0xc46101e8
  .word 0xc6a00004
  .word 0x46000836
  .word 0x45000002
  .word 0x24020001
  .word 0x0000102d
  .word 0x16e0000c
  .word 0x00000000
  .word 0x16e0000e
  .word 0x00000000
  .word 0x1440000c
  .word 0x00000000
  .word 0x8c83000c
  .word 0x26940001
  .word 0x8c950008
  .word 0x00141080
  .word 0x005d1021
  .word 0x1000ff86
  .word 0xac4300c0
  .word 0x1440fff8
  .word 0x00000000
  .word 0x1000fff2
  .word 0x00000000
  .word 0x8c830008
  .word 0x26940001
  .word 0x8c95000c
  .word 0x00141080
  .word 0x005d1021
  .word 0x1000ff7b
  .word 0xac4300c0
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
  .word 0x27bd0200
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_0049BBC0

u64 FUN_0049bbc0(u64 param_1,u64 param_2)

{
  FUN_0049c1e0_wide(param_2,param_1);
  return param_1;
}
#pragma optimization_level 2

#pragma optimization_level 3
// FUN_0049BBF0

u64 FUN_0049bbf0(u64 param_1,u64 param_2)

{
  FUN_0049c3d0_wide(param_2,param_1);
  return param_1;
}
#pragma optimization_level 2

#pragma optimization_level 3
// FUN_0049BC20

u64 FUN_0049bc20(u64 param_1,u64 param_2)

{
  FUN_0049c160_wide(param_2,param_1);
  return param_1;
}
#pragma optimization_level 2
// FUN_0049BC50
#pragma schedule on
#pragma tailcall on
u32 FUN_0049bc50(u32 param_1,u32 param_2,u32 param_3)
{
  char *base;

  base = (char *)param_3;
  FUN_00495fb0_u32(*(u32 **)(param_3 + 0x54),base,param_1,(u32)base + 0x20);
  return;
}
#pragma tailcall off
#pragma schedule off

// FUN_0049BC70
#pragma schedule on
asm u32 FUN_0049bc70(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x0200282d
  .word 0x0c12588c
  .word 0x26060020
  .word 0xae020054
  .word 0x8e020054
  .word 0x0002880a
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule off

// FUN_0049BCC0
#pragma schedule on
#pragma tailcall on
void FUN_0049bcc0(int param_1)
{
  FUN_004964f0(*(u32 *)(param_1 + 0x54),(char *)param_1);
  return;
}
#pragma tailcall off
#pragma schedule off

// FUN_0049BCD0
#pragma schedule on
#pragma tailcall on
u64 FUN_0049bcd0(u64 param_1,u64 param_2,u64 param_3)
{
  return FUN_0049e830(param_1,param_3);
}
#pragma tailcall off
#pragma schedule off

// FUN_0049BCE0
#pragma schedule on
asm u64 FUN_0049bce0(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x00c0282d
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0c127a7c
  .word 0x0080802d
  .word 0x0002800a
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}
#pragma schedule off

// FUN_0049BD10
#pragma tailcall on
int FUN_0049bd10(int param_1)
{
  return FUN_0049ecd0(param_1);
}
#pragma tailcall off

// FUN_0049BD20
#pragma schedule on
#pragma tailcall on
u64 FUN_0049bd20(u64 param_1,u64 param_2,u64 param_3)
{
  return FUN_0049ee70(param_1,param_3);
}
#pragma tailcall off
#pragma schedule off

// FUN_0049BD30
#pragma schedule on
asm u64 FUN_0049bd30(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x00c0282d
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0c127c10
  .word 0x0080802d
  .word 0x0002800a
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}
#pragma schedule off

// FUN_0049BD60
#pragma tailcall on
int FUN_0049bd60(int param_1)
{
  return FUN_0049f340(param_1);
}
#pragma tailcall off

// FUN_0049BD70
#pragma schedule on
asm void FUN_0049bd70(u32 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x0c12685c
  .word 0x0200202d
  .word 0x8e040078
  .word 0x0220302d
  .word 0x0040282d
  .word 0x0c1257ec
  .word 0x24470010
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule off



// FUN_0049BDC0
asm u64 FUN_0049bdc0(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x0c12685c
  .word 0x0200202d
  .word 0x0220202d
  .word 0x0040282d
  .word 0x0c12588c
  .word 0x24460010
  .word 0xae020078
  .word 0x8e020078
  .word 0x0002880a
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

// FUN_0049BE20
asm void FUN_0049be20(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0c12685c
  .word 0x0080802d
  .word 0x8e040078
  .word 0x0c12593c
  .word 0x0040282d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_0049BE50
asm u8 FUN_0049be50(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0xffbf0010
  .word 0x2404000c
  .word 0x24050509
  .word 0x24c6aaf0
  .word 0x24e7abf0
  .word 0x0c132948
  .word 0x7fb00000
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x3c08004a
  .word 0x0040802d
  .word 0x2404001c
  .word 0x24050509
  .word 0x24c6ad80
  .word 0x24e7ae30
  .word 0x0c132800
  .word 0x2508ade0
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x3c08004a
  .word 0x02028025
  .word 0xaf82bb78
  .word 0x24040008
  .word 0x24050509
  .word 0x24c6b290
  .word 0x24e7b2e0
  .word 0x0c124b0c
  .word 0x2508b2d0
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x3c08004a
  .word 0x02028025
  .word 0xaf82bb7c
  .word 0x24040008
  .word 0x24050509
  .word 0x24c6b3c0
  .word 0x24e7b430
  .word 0x0c124b18
  .word 0x2508b3f0
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x3c08004a
  .word 0x02028025
  .word 0xaf82bb80
  .word 0x24040008
  .word 0x24050509
  .word 0x24c6b730
  .word 0x24e7b7a0
  .word 0x0c125148
  .word 0x2508b760
  .word 0x02028025
  .word 0xaf82bb84
  .word 0x0000202d
  .word 0x2405050e
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c124f14
  .word 0x0000402d
  .word 0x02028025
  .word 0x0000202d
  .word 0x2405050e
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c126494
  .word 0x0000402d
  .word 0x3c05004a
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x02028025
  .word 0x2404050e
  .word 0x24a5bc70
  .word 0x24c6bc50
  .word 0x0c124f20
  .word 0x24e7bcc0
  .word 0x3c05004a
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x02028025
  .word 0x2404050e
  .word 0x24a5bdc0
  .word 0x24c6bd70
  .word 0x0c1264a0
  .word 0x24e7be20
  .word 0x02028025
  .word 0x0000202d
  .word 0x24050510
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c124f14
  .word 0x0000402d
  .word 0x02028025
  .word 0x0000202d
  .word 0x24050510
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c126494
  .word 0x0000402d
  .word 0x3c05004a
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x02028025
  .word 0x24040510
  .word 0x24a5bce0
  .word 0x24c6bcd0
  .word 0x0c124f20
  .word 0x24e7bd10
  .word 0x3c05004a
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x02028025
  .word 0x24040510
  .word 0x24a5bd30
  .word 0x24c6bd20
  .word 0x0c1264a0
  .word 0x24e7bd60
  .word 0x02028025
  .word 0x0000202d
  .word 0x2405001f
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c124b0c
  .word 0x0000402d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x2404001f
  .word 0x24a506f0
  .word 0x24c60770
  .word 0x0c124b24
  .word 0x24e707e0
  .word 0x02028025
  .word 0x0000202d
  .word 0x2405001f
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c126a48
  .word 0x0000402d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x2404001f
  .word 0x24a5f340
  .word 0x24c6f3c0
  .word 0x0c126a54
  .word 0x24e7f430
  .word 0x02028025
  .word 0x0000202d
  .word 0x2405001f
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c126494
  .word 0x0000402d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x2404001f
  .word 0x24a5f460
  .word 0x24c6f4e0
  .word 0x0c1264a0
  .word 0x24e7f550
  .word 0x02028025
  .word 0x0000202d
  .word 0x2405001f
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c12536c
  .word 0x0000402d
  .word 0x3c050049
  .word 0x3c060049
  .word 0x3c070049
  .word 0x02028025
  .word 0x2404001f
  .word 0x24a549c0
  .word 0x24c64a40
  .word 0x0c125378
  .word 0x24e74ab0
  .word 0x02021025
  .word 0x04410003
  .word 0x00000000
  .word 0x10000004
  .word 0x0000102d
  .word 0x0c1271e4
  .word 0x00000000
  .word 0x0002102b
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C160
asm u64 FUN_0049c160(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82bb78
  .word 0x8ca40004
  .word 0x10800003
  .word 0x00a28021
  .word 0x0c132c9c
  .word 0x00000000
  .word 0xae11000c
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C1B0
asm u64 FUN_0049c1b0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x8f82bb78
  .word 0x00a21821
  .word 0x8c62000c
  .word 0x14400003
  .word 0x00000000
  .word 0x10000004
  .word 0x0000102d
  .word 0xac60000c
  .word 0x0080102d
  .word 0xac600008
  .word 0x03e00008
  .word 0x00000000
}

// FUN_0049C1E0
asm u64 FUN_0049c1e0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82bb7c
  .word 0x8ca40004
  .word 0x10800003
  .word 0x00a28021
  .word 0x0c132c9c
  .word 0x00000000
  .word 0xae110000
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}


#pragma optimization_level 3
// FUN_0049C230
u32 FUN_0049c230(int param_1)
{
  return *(u32 *)(param_1 + DAT_007ce86c);
}
#pragma optimization_level 2

// FUN_0049C240
asm u64 FUN_0049c240(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x2662002c
  .word 0x8f88bb80
  .word 0x26430020
  .word 0x8cb10004
  .word 0x0260302d
  .word 0x8c87002c
  .word 0x02488021
  .word 0xaca70020
  .word 0xaca20024
  .word 0x8c82002c
  .word 0x3c05004a
  .word 0x24a5bbc0
  .word 0xac430004
  .word 0xac83002c
  .word 0x8c820024
  .word 0x24420001
  .word 0xac820024
  .word 0x0240202d
  .word 0x0c1245b4
  .word 0xae130000
  .word 0x3c05004a
  .word 0x0240202d
  .word 0x24a5bbf0
  .word 0x0c1245fc
  .word 0x0260302d
  .word 0x3c05004a
  .word 0x0240202d
  .word 0x24a5bc20
  .word 0x0c1245d8
  .word 0x0260302d
  .word 0x12200006
  .word 0x00000000
  .word 0x26240010
  .word 0x0c130b48
  .word 0x0000282d
  .word 0x0c132c9c
  .word 0x0220202d
  .word 0x8f84bb88
  .word 0x3c030096
  .word 0x24630070
  .word 0x0260102d
  .word 0x00641821
  .word 0x8c630008
  .word 0xae030004
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_0049C330
asm u64 FUN_0049c330(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8f82bb78
  .word 0x02421021
  .word 0x8c530008
  .word 0x8c540000
  .word 0x16600003
  .word 0x00c0802d
  .word 0x1000000d
  .word 0x0240102d
  .word 0x8e840000
  .word 0x0220f809
  .word 0x0200282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x0240102d
  .word 0x2673ffff
  .word 0x1660fff7
  .word 0x26940004
  .word 0x1000fff3
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C3D0
asm u64 FUN_0049c3d0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82bb84
  .word 0x00a0802d
  .word 0x02021021
  .word 0xac510000
  .word 0x90a20001
  .word 0x28420080
  .word 0x14400010
  .word 0x00000000
  .word 0x8e040004
  .word 0x10800003
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x8e240034
  .word 0x26220034
  .word 0x26030034
  .word 0xae040034
  .word 0xae020038
  .word 0x8e220034
  .word 0xac430004
  .word 0xae230034
  .word 0x1000000a
  .word 0x0220102d
  .word 0x8e24003c
  .word 0x2622003c
  .word 0x26030034
  .word 0xae040034
  .word 0xae020038
  .word 0x8e22003c
  .word 0xac430004
  .word 0x1000fff6
  .word 0xae23003c
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C480
asm u64 FUN_0049c480(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x2671002c
  .word 0x8f82bb84
  .word 0x02621021
  .word 0xac400000
  .word 0x8cb2002c
  .word 0x1251001a
  .word 0x0080a02d
  .word 0x3c100096
  .word 0x2610018c
  .word 0x2645fff4
  .word 0x3c030096
  .word 0x8e520000
  .word 0x24630070
  .word 0x8ca4000c
  .word 0x8ca20010
  .word 0xac440000
  .word 0x8ca40010
  .word 0x8ca2000c
  .word 0xac440004
  .word 0x8ca40000
  .word 0x8ca20004
  .word 0xac440000
  .word 0x8ca40004
  .word 0x8ca20000
  .word 0xac440004
  .word 0x8f84bb88
  .word 0x8e020000
  .word 0x00641821
  .word 0x0040f809
  .word 0x8c640004
  .word 0x1651ffea
  .word 0x00000000
  .word 0x8e640034
  .word 0x8e630038
  .word 0x0280102d
  .word 0xac640000
  .word 0x8e640038
  .word 0x8e630034
  .word 0xac640004
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_0049C560
asm int FUN_0049c560(int param_1)
{
  .set noreorder
  .word 0x10800008
  .word 0x00000000
  .word 0x8f85be38
  .word 0x3c030096
  .word 0x24630070
  .word 0x0080102d
  .word 0x00651821
  .word 0x1000000c
  .word 0xac640040
  .word 0x8f83be38
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x8c440058
  .word 0x10800003
  .word 0x00000000
  .word 0x1000fff2
  .word 0x8f85be38
  .word 0x1000ffef
  .word 0x0000202d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C5C0
asm int FUN_0049c5c0(int param_1)
{
  .set noreorder
  .word 0x10800008
  .word 0x00000000
  .word 0x8f85be38
  .word 0x3c030096
  .word 0x24630070
  .word 0x0080102d
  .word 0x00651821
  .word 0x1000000c
  .word 0xac64003c
  .word 0x8f83be38
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x8c440054
  .word 0x10800003
  .word 0x00000000
  .word 0x1000fff2
  .word 0x8f85be38
  .word 0x1000ffef
  .word 0x0000202d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C620
asm int FUN_0049c620(int param_1)
{
  .set noreorder
  .word 0x10800008
  .word 0x00000000
  .word 0x8f85be38
  .word 0x3c030096
  .word 0x24630070
  .word 0x0080102d
  .word 0x00651821
  .word 0x1000000c
  .word 0xac640044
  .word 0x8f83be38
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0x8c44005c
  .word 0x10800003
  .word 0x00000000
  .word 0x1000fff2
  .word 0x8f85be38
  .word 0x1000ffef
  .word 0x0000202d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C680
asm void FUN_0049c680(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c12726c
  .word 0x00000000
  .word 0x0c1294a4
  .word 0x00000000
  .word 0x0c1294c8
  .word 0x00000000
  .word 0x0c129480
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C6C0
asm u8 FUN_0049c6c0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c020096
  .word 0xffbf0000
  .word 0x24420070
  .word 0x8f83be38
  .word 0x00431021
  .word 0xac40003c
  .word 0xac400040
  .word 0xac400044
  .word 0xac400048
  .word 0xac40004c
  .word 0xac400050
  .word 0xac400054
  .word 0xac400058
  .word 0x0c129484
  .word 0xac40005c
  .word 0x14400009
  .word 0x00000000
  .word 0x1440000b
  .word 0x00000000
  .word 0x1440000d
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x10000016
  .word 0x24020001
  .word 0x0c1294cc
  .word 0x00000000
  .word 0x1000fff5
  .word 0x00000000
  .word 0x0c1294a8
  .word 0x00000000
  .word 0x1000fff3
  .word 0x00000000
  .word 0x0c127230
  .word 0x00000000
  .word 0x1000fff1
  .word 0x00000000
  .word 0x0c12726c
  .word 0x00000000
  .word 0x0c1294a4
  .word 0x00000000
  .word 0x0c1294c8
  .word 0x00000000
  .word 0x0c129480
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C790
#pragma optimization_level 3

u32 FUN_0049c790(void)
{
  return 1;
}
#pragma optimization_level 2

// FUN_0049C7A0
asm u32 FUN_0049c7a0(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x8ca30000
  .word 0xffbf0000
  .word 0x94620000
  .word 0x18400009
  .word 0x00000000
  .word 0x8c620004
  .word 0xac620018
  .word 0x8c62000c
  .word 0x30420001
  .word 0x10400005
  .word 0x00000000
  .word 0x1000000a
  .word 0x24020001
  .word 0x10000008
  .word 0x0000102d
  .word 0x3c020096
  .word 0x24040001
  .word 0x8c420090
  .word 0x0040f809
  .word 0x0000282d
  .word 0x1000fff6
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049C810
asm long FUN_0049c810(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0010
  .word 0x0c13cbdc
  .word 0x7fb00000
  .word 0x0040802d
  .word 0x12000017
  .word 0x00000000
  .word 0x24020001
  .word 0x0200202d
  .word 0x0c13d190
  .word 0xae02002c
  .word 0x1040000f
  .word 0x00000000
  .word 0x3c060078
  .word 0x0040202d
  .word 0x0000282d
  .word 0x24c6de10
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x10400007
  .word 0x00000000
  .word 0x0c13cfe0
  .word 0x0040202d
  .word 0x10400003
  .word 0x00000000
  .word 0x1000000e
  .word 0x0200102d
  .word 0x0c13cc04
  .word 0x0200202d
  .word 0x24030002
  .word 0x3c028000
  .word 0x3c050078
  .word 0xafa30028
  .word 0x34440006
  .word 0x0c130744
  .word 0x24a5de50
  .word 0xafa2002c
  .word 0x0c130714
  .word 0x27a40028
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_0049C8C0
asm u32 FUN_0049c8c0(void)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c127204
  .word 0x7fb00000
  .word 0x0040a02d
  .word 0x0c11aa24
  .word 0x24040004
  .word 0x0040882d
  .word 0x0c11aa24
  .word 0x24040006
  .word 0x0040982d
  .word 0x0c11aa24
  .word 0x24040005
  .word 0x0040802d
  .word 0x0c11aa24
  .word 0x24040007
  .word 0x8f83be30
  .word 0x0040902d
  .word 0x3c020096
  .word 0x0280202d
  .word 0x24420070
  .word 0x00431021
  .word 0xac54001c
  .word 0xac530020
  .word 0xac530024
  .word 0xac530028
  .word 0xac52002c
  .word 0xac520030
  .word 0xac510038
  .word 0x0c13c8f0
  .word 0xac50003c
  .word 0x0260202d
  .word 0x0c13c90c
  .word 0x24050003
  .word 0x0260202d
  .word 0x0c13c90c
  .word 0x24050005
  .word 0x0260202d
  .word 0x0c13c90c
  .word 0x24050004
  .word 0x0240202d
  .word 0x0c13c90c
  .word 0x24050001
  .word 0x0240202d
  .word 0x0c13c90c
  .word 0x24050002
  .word 0xdfbf0050
  .word 0x24020001
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_0049C9B0
asm void FUN_0049c9b0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0000202d
  .word 0xffbf0000
  .word 0x0c13c90c
  .word 0x24050002
  .word 0x0000202d
  .word 0x0c13c90c
  .word 0x24050001
  .word 0x0000202d
  .word 0x0c13c90c
  .word 0x24050004
  .word 0x0000202d
  .word 0x0c13c90c
  .word 0x24050005
  .word 0x0000202d
  .word 0x0c13c90c
  .word 0x24050003
  .word 0x0c13c8f0
  .word 0x0000202d
  .word 0x8f83be30
  .word 0x3c020096
  .word 0x24420070
  .word 0x00431021
  .word 0xac40003c
  .word 0xac400038
  .word 0xac400030
  .word 0xac40002c
  .word 0xac400024
  .word 0xac400028
  .word 0xac400020
  .word 0x0c13cc04
  .word 0x8c44001c
  .word 0x8f84be30
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0xac60001c
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}

// FUN_0049CA50
asm void FUN_0049ca50(long param_1)
{
  .set noreorder
  .word 0xdf85bd70
  .word 0x2403fe1f
  .word 0x00a31824
  .word 0x34010006
  .word 0x5024000e
  .word 0x34650160
  .word 0x34010005
  .word 0x5024000b
  .word 0x346500c0
  .word 0x34010004
  .word 0x50240008
  .word 0x34650120
  .word 0x34010003
  .word 0x50240005
  .word 0x34650080
  .word 0x34010002
  .word 0x50240002
  .word 0x34650060
  .word 0x34650000
  .word 0x00000000
  .word 0x03e00008
  .word 0xff85bd70
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049CAB0
asm void FUN_0049cab0(float param_1,u8 *param_2)
{
  .set noreorder
  .word 0x90830000
  .word 0x04600004
  .word 0x00000000
  .word 0x44830000
  .word 0x10000008
  .word 0x46800120
  .word 0x00032842
  .word 0x30630001
  .word 0x00a32825
  .word 0x44850000
  .word 0x00000000
  .word 0x46800120
  .word 0x46042100
  .word 0x90830001
  .word 0x04600004
  .word 0x00000000
  .word 0x44830000
  .word 0x10000008
  .word 0x468000e0
  .word 0x00032842
  .word 0x30630001
  .word 0x00a32825
  .word 0x44850000
  .word 0x00000000
  .word 0x468000e0
  .word 0x460318c0
  .word 0x90830002
  .word 0x04600004
  .word 0x00000000
  .word 0x44830000
  .word 0x10000008
  .word 0x468000a0
  .word 0x00032842
  .word 0x30630001
  .word 0x00a32825
  .word 0x44850000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021080
  .word 0x90830003
  .word 0x04600004
  .word 0x00000000
  .word 0x44830000
  .word 0x10000008
  .word 0x46800060
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0x3c033b01
  .word 0x34631b50
  .word 0x44830000
  .word 0x46000842
  .word 0x460c1802
  .word 0x44040800
  .word 0x44030000
  .word 0x70042789
  .word 0x70031f89
  .word 0x460c1042
  .word 0x460c2002
  .word 0x44040800
  .word 0x44030000
  .word 0x708324c8
  .word 0x8f83bd04
  .word 0x7c640000
  .word 0x8f83bd04
  .word 0x24630010
  .word 0x03e00008
  .word 0xaf83bd04
}
// FUN_0049CBD0
asm void FUN_0049cbd0(int param_1,float *param_2)
{
  .set noreorder
  .word 0xc4830000
  .word 0x3c03437f
  .word 0xc4820004
  .word 0x34630001
  .word 0xc4810008
  .word 0x44830000
  .word 0x46001082
  .word 0x44046000
  .word 0x44031000
  .word 0x70042789
  .word 0x70031f89
  .word 0x46000842
  .word 0x46001882
  .word 0x44040800
  .word 0x44031000
  .word 0x708324c8
  .word 0x8f83bd04
  .word 0x7c640000
  .word 0x8f83bd04
  .word 0x24630010
  .word 0x03e00008
  .word 0xaf83bd04
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049CC30
asm void FUN_0049cc30(int param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c830018
  .word 0x14600003
  .word 0x00000000
  .word 0x10000007
  .word 0xdfbf0000
  .word 0x0c13537c
  .word 0x00000000
  .word 0x0c13537c
  .word 0x00000000
  .word 0x1000fff9
  .word 0x00000000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_0049CC70 NONMATCHING

u32 FUN_0049cc70(int param_1)

{
  int iVar1;
  u8 bVar2;
  u32 uVar3;
  u8 *pbVar4;
  int iVar5;
  u32 uVar6;
  u32 uVar7;
  u32 uVar8;
  int iVar9;
  int iVar10;
  u8 *pbVar11;
  int iVar12;
  u8 bVar13;
  
  uVar7 = *(u32 *)(param_1 + 0xb0);
  if (((uVar7 & 1) == 0) && ((uVar7 & 0xff) != 0)) {
    if ((uVar7 & 0xc) == 0) {
      *(u8 *)(param_1 + 0x1f0) = 4;
      *(u8 *)(param_1 + 0x1f1) = 0;
      *(u8 *)(param_1 + 0xb8) = 4;
      *(u8 *)(param_1 + 0xb9) = 0;
    }
    else {
      *(u8 *)(param_1 + 0x1f0) = 4;
      *(u8 *)(param_1 + 0x1f1) = 0;
      *(u8 *)(param_1 + 0xb8) = 4;
      *(u8 *)(param_1 + 0xb9) = 1;
    }
  }
  else {
    *(u8 *)(param_1 + 0x1f0) = 0xc;
    *(u8 *)(param_1 + 0x1f1) = 0;
    *(u8 *)(param_1 + 0xb8) = 4;
    *(u8 *)(param_1 + 0xb9) = 2;
  }
  *(u32 *)(param_1 + 0x70) = 0x68002001;
  uVar8 = 0;
  bVar2 = 1;
  *(u32 *)(param_1 + 0x78) = 0x6e002001;
  uVar7 = 0;
  iVar5 = param_1;
  do {
    uVar6 = *(u32 *)(iVar5 + 0x20);
    if (((uVar6 & 1) != 0) || ((uVar6 & 0x10) != 0)) {
      if (((uVar6 & 1) != 0) && ((uVar6 & 0x2000) == 0)) {
        bVar2 = 0;
      }
      uVar8 = uVar8 + 1 & 0xff;
    }
    uVar7 = uVar7 + 1;
    iVar5 = iVar5 + 8;
  } while (uVar7 < 10);
  *(u8 *)(param_1 + 0xb4) = bVar2;
  if (uVar8 == *(u8 *)(param_1 + 0xb6)) {
    uVar7 = 1;
    pbVar4 = (u8 *)(param_1 + 0x1f0);
    do {
      if (bVar2) {
        *(u32 *)(pbVar4 + 8) =
             (u32)*pbVar4 * ((*(int *)(pbVar4 + 4) / (int)uVar8) / (int)(u32)*pbVar4);
        iVar5 = *(int *)(pbVar4 + 8);
        if (iVar5 < (int)(u32)*pbVar4) {
          return 0;
        }
        *(int *)(pbVar4 + 0xc) =
             0xffff / ((iVar5 * 4 + 3 >> 2) * 2 + 5 + (iVar5 + 3 >> 2) + (iVar5 * 3 + 0xf >> 4));
        *(u32 *)(pbVar4 + 0x10) =
             (u32)*pbVar4 * ((*(int *)(pbVar4 + 4) / (int)(uVar8 + 2)) / (int)(u32)*pbVar4);
        iVar5 = *(int *)(pbVar4 + 0x10);
        *(int *)(pbVar4 + 0x14) =
             0xffff / (((iVar5 * 4 + 3 >> 2) + (iVar5 * 3 + 0xf >> 4)) * 2 + 7 + (iVar5 + 3 >> 2) +
                      ((iVar5 + 1) * 3 >> 2));
      }
      else {
        *(u32 *)(pbVar4 + 8) = *(int *)(pbVar4 + 4) / (int)uVar8 - (u32)pbVar4[1];
        *(u32 *)(pbVar4 + 8) =
             (u32)pbVar4[1] + (u32)*pbVar4 * (*(int *)(pbVar4 + 8) / (int)(u32)*pbVar4);
        if (*(int *)(pbVar4 + 8) < (int)((u32)*pbVar4 + (u32)pbVar4[1])) {
          return 0;
        }
        pbVar4[0xc] = 1;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        *(u32 *)(pbVar4 + 0x10) = *(int *)(pbVar4 + 4) / (int)(uVar8 + 2) - (u32)pbVar4[1];
        *(u32 *)(pbVar4 + 0x10) =
             (u32)pbVar4[1] + (u32)*pbVar4 * (*(int *)(pbVar4 + 0x10) / (int)(u32)*pbVar4);
        pbVar4[0x14] = 1;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0;
        pbVar4[0x17] = 0;
      }
      iVar5 = 2;
      if (bVar2) {
        iVar5 = 1;
      }
      uVar6 = 0;
      iVar9 = param_1;
      do {
        if ((*(u32 *)(iVar9 + 0x20) & 1) != 0) {
          if ((*(u32 *)(iVar9 + 0x20) & 0x2000) == 0) {
            iVar5 = iVar5 + 2;
          }
          else {
            switch(uVar6) {
            case 0:
              iVar5 = iVar5 + ((*(int *)(pbVar4 + 8) + 1) * 3 >> 2);
              break;
            case 1:
              iVar5 = iVar5 + *(int *)(pbVar4 + 8);
              break;
            case 2:
              iVar5 = iVar5 + (*(int *)(pbVar4 + 8) * 2 + 3 >> 2);
              break;
            case 3:
              iVar5 = iVar5 + *(int *)(pbVar4 + 8);
              break;
            case 4:
              iVar5 = iVar5 + (*(int *)(pbVar4 + 8) + 3 >> 2);
              break;
            case 5:
              iVar5 = iVar5 + (*(int *)(pbVar4 + 8) * 3 + 0xf >> 4);
            }
            iVar5 = iVar5 + 1;
          }
        }
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + 8;
      } while (uVar6 < 10);
      iVar10 = 0;
      bVar13 = 0;
      uVar6 = 0;
      iVar12 = (u32)*(u8 *)(param_1 + 0xb5) * 2 + 1;
      pbVar11 = pbVar4;
      iVar9 = param_1;
      do {
        if ((*(u32 *)(iVar9 + 0x20) & 1) == 0) {
          if ((*(u32 *)(iVar9 + 0x20) & 0x10) != 0) {
            pbVar11[0x2e] = bVar13;
            bVar13 = bVar13 + 1;
            pbVar11[0x18] = 0;
            pbVar11[0x19] = 0;
            pbVar11[0x1a] = 0;
            pbVar11[0x1b] = 0;
            pbVar11[0x20] = 0;
            pbVar11[0x21] = 0;
            pbVar11[0x22] = 0;
            pbVar11[0x23] = 0;
            pbVar11[0x28] = 0;
            pbVar11[0x29] = 0;
            pbVar11[0x2c] = 0;
            pbVar11[0x2d] = 0;
          }
        }
        else {
          pbVar11[0x2e] = bVar13;
          if ((*(u32 *)(iVar9 + 0x20) & 0x2000) == 0) {
            pbVar11[0x18] = 0;
            pbVar11[0x19] = 0;
            pbVar11[0x1a] = 0;
            pbVar11[0x1b] = 0;
            pbVar11[0x20] = 0;
            pbVar11[0x21] = 0;
            pbVar11[0x22] = 0;
            pbVar11[0x23] = 0;
            bVar13 = bVar13 + 1;
            pbVar11[0x28] = 0;
            pbVar11[0x29] = 0;
            pbVar11[0x2c] = 0;
            pbVar11[0x2d] = 0;
          }
          else {
            iVar1 = *(int *)(pbVar4 + 8);
            iVar12 = iVar12 + iVar10 + 1;
            bVar13 = bVar13 + 1;
            *(int *)(pbVar11 + 0x18) = iVar1;
            *(int *)(pbVar11 + 0x20) = iVar12;
            *(short *)(pbVar11 + 0x28) = (short)iVar5;
            pbVar11[0x2c] = 0;
            pbVar11[0x2d] = 0;
            switch(uVar6) {
            case 0:
              iVar10 = (iVar1 + 1) * 3 >> 2;
              break;
            case 1:
              iVar10 = iVar1;
              break;
            case 2:
              iVar10 = iVar1 * 2 + 3 >> 2;
              break;
            case 3:
              iVar10 = iVar1;
              break;
            case 4:
              iVar10 = iVar1 + 3 >> 2;
              break;
            case 5:
              iVar10 = iVar1 * 3 + 0xf >> 4;
            }
          }
        }
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + 8;
        pbVar11 = pbVar11 + 0x18;
      } while (uVar6 < 10);
      iVar5 = 2;
      if (bVar2) {
        iVar5 = 1;
      }
      uVar6 = 0;
      iVar9 = param_1;
      do {
        if ((*(u32 *)(iVar9 + 0x20) & 1) != 0) {
          if ((*(u32 *)(iVar9 + 0x20) & 0x2000) == 0) {
            iVar5 = iVar5 + 2;
          }
          else {
            switch(uVar6) {
            case 0:
              iVar5 = iVar5 + ((*(int *)(pbVar4 + 0x10) + 1) * 3 >> 2);
              break;
            case 1:
              iVar5 = iVar5 + *(int *)(pbVar4 + 0x10);
              break;
            case 2:
              iVar5 = iVar5 + (*(int *)(pbVar4 + 0x10) * 2 + 3 >> 2);
              break;
            case 3:
              iVar5 = iVar5 + *(int *)(pbVar4 + 0x10);
              break;
            case 4:
              iVar5 = iVar5 + (*(int *)(pbVar4 + 0x10) + 3 >> 2);
              break;
            case 5:
              iVar5 = iVar5 + (*(int *)(pbVar4 + 0x10) * 3 + 0xf >> 4);
              break;
            case 10:
              iVar5 = iVar5 + ((*(int *)(pbVar4 + 0x10) + 1) * 3 >> 2);
              break;
            case 0xb:
              iVar5 = iVar5 + (*(int *)(pbVar4 + 0x10) * 3 + 0xf >> 4);
            }
            iVar5 = iVar5 + 1;
          }
        }
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + 8;
      } while (uVar6 < 0xc);
      iVar10 = 0;
      bVar13 = 0;
      uVar6 = 0;
      iVar12 = (u32)*(u8 *)(param_1 + 0xb5) * 2 + 1;
      pbVar11 = pbVar4;
      iVar9 = param_1;
      do {
        if ((*(u32 *)(iVar9 + 0x20) & 1) == 0) {
          if ((*(u32 *)(iVar9 + 0x20) & 0x10) != 0) {
            pbVar11[0x2e] = bVar13;
            bVar13 = bVar13 + 1;
            pbVar11[0x1c] = 0;
            pbVar11[0x1d] = 0;
            pbVar11[0x1e] = 0;
            pbVar11[0x1f] = 0;
            pbVar11[0x24] = 0;
            pbVar11[0x25] = 0;
            pbVar11[0x26] = 0;
            pbVar11[0x27] = 0;
            pbVar11[0x2a] = 0;
            pbVar11[0x2b] = 0;
            pbVar11[0x2c] = 0;
            pbVar11[0x2d] = 0;
          }
        }
        else {
          pbVar11[0x2e] = bVar13;
          if ((*(u32 *)(iVar9 + 0x20) & 0x2000) == 0) {
            pbVar11[0x1c] = 0;
            pbVar11[0x1d] = 0;
            pbVar11[0x1e] = 0;
            pbVar11[0x1f] = 0;
            pbVar11[0x24] = 0;
            pbVar11[0x25] = 0;
            pbVar11[0x26] = 0;
            pbVar11[0x27] = 0;
            bVar13 = bVar13 + 1;
            pbVar11[0x2a] = 0;
            pbVar11[0x2b] = 0;
            pbVar11[0x2c] = 0;
            pbVar11[0x2d] = 0;
          }
          else {
            iVar1 = *(int *)(pbVar4 + 0x10);
            iVar12 = iVar12 + iVar10 + 1;
            bVar13 = bVar13 + 1;
            *(int *)(pbVar11 + 0x1c) = iVar1;
            *(int *)(pbVar11 + 0x24) = iVar12;
            *(short *)(pbVar11 + 0x2a) = (short)iVar5;
            pbVar11[0x2c] = 0;
            pbVar11[0x2d] = 0;
            switch(uVar6) {
            case 0:
              iVar10 = (iVar1 + 1) * 3 >> 2;
              break;
            case 1:
              iVar10 = iVar1;
              break;
            case 2:
              iVar10 = iVar1 * 2 + 3 >> 2;
              break;
            case 3:
              iVar10 = iVar1;
              break;
            case 4:
              iVar10 = iVar1 + 3 >> 2;
              break;
            case 5:
              iVar10 = iVar1 * 3 + 0xf >> 4;
              break;
            case 10:
              iVar10 = (iVar1 + 1) * 3 >> 2;
              break;
            case 0xb:
              iVar10 = iVar1 * 3 + 0xf >> 4;
            }
          }
        }
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + 8;
        pbVar11 = pbVar11 + 0x18;
      } while (uVar6 < 0xc);
      uVar7 = uVar7 + 1;
      pbVar4 = (u8 *)(param_1 + 0xb8);
    } while (uVar7 < 3);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// FUN_0049D4D0
asm int FUN_0049d4d0(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)
{
  .set noreorder
  .word 0x27bdff20
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c82000c
  .word 0x8c430000
  .word 0x30620001
  .word 0x14400034
  .word 0x8c930004
  .word 0x30620008
  .word 0x14400031
  .word 0x00000000
  .word 0x266201f0
  .word 0x8c43000c
  .word 0x8c8c0024
  .word 0x8c520008
  .word 0x11800004
  .word 0xafa300d0
  .word 0x8c430014
  .word 0x8c520010
  .word 0xafa300d0
  .word 0x904b0001
  .word 0x2403fffe
  .word 0x01635018
  .word 0x254affff
  .word 0x024b1823
  .word 0x01525021
  .word 0x01455021
  .word 0x0143001b
  .word 0x00006812
  .word 0x25a3ffff
  .word 0x01635018
  .word 0x2583000a
  .word 0x00aa5821
  .word 0x0003082b
  .word 0x1020001a
  .word 0x0000602d
  .word 0x00c0502d
  .word 0xc4430018
  .word 0x24430018
  .word 0xc442001c
  .word 0x258c0001
  .word 0xc4410020
  .word 0xc4400024
  .word 0xe5430000
  .word 0xe5420004
  .word 0xe5410008
  .word 0xe540000c
  .word 0xc4410028
  .word 0xc440002c
  .word 0xe5410010
  .word 0x0060102d
  .word 0xe5400014
  .word 0x8c830024
  .word 0x2463000a
  .word 0x0183182b
  .word 0x1460ffed
  .word 0x254a0018
  .word 0x10000004
  .word 0x926200b4
  .word 0x1000ffd0
  .word 0x266200b8
  .word 0x926200b4
  .word 0x144000a0
  .word 0x00000000
  .word 0x25acffff
  .word 0x0000802d
  .word 0x024c1018
  .word 0x926300b5
  .word 0x01621023
  .word 0x24630001
  .word 0x00031840
  .word 0x71a37018
  .word 0x264a0001
  .word 0x000a1840
  .word 0x24540001
  .word 0x006a1821
  .word 0x0014b843
  .word 0x00035882
  .word 0x0000882d
  .word 0x00141840
  .word 0x0000782d
  .word 0x00741821
  .word 0x0260c82d
  .word 0x00031883
  .word 0x0002a040
  .word 0x7fa300c0
  .word 0x0282a021
  .word 0x26430003
  .word 0x2694000f
  .word 0x0003b082
  .word 0x0014a103
  .word 0x24430003
  .word 0x00c0c02d
  .word 0x0003a883
  .word 0x000a5042
  .word 0x00121840
  .word 0x7fb400b0
  .word 0x00721821
  .word 0x2463000f
  .word 0x00031902
  .word 0x02d5a023
  .word 0x0157f023
  .word 0x7fb400a0
  .word 0x02421023
  .word 0x7bb400b0
  .word 0x0074a023
  .word 0x7fb40090
  .word 0x7bb400c0
  .word 0x0174b823
  .word 0x8f350020
  .word 0x32b40001
  .word 0x12800129
  .word 0x00000000
  .word 0x32b42000
  .word 0x1280011e
  .word 0x00000000
  .word 0x2de10006
  .word 0x10200123
  .word 0x00000000
  .word 0x3c14007c
  .word 0x000fa880
  .word 0x2694ca30
  .word 0x02b4a021
  .word 0x8e940000
  .word 0x02800008
  .word 0x00000000
  .word 0x00000000
  .word 0x8c8e0024
  .word 0x8cd40008
  .word 0x11c00003
  .word 0x84d50010
  .word 0x84d50012
  .word 0x8cd4000c
  .word 0x0015743c
  .word 0x000e743f
  .word 0x01cc7018
  .word 0xa4d00014
  .word 0x02178021
  .word 0x028e7021
  .word 0x016e7021
  .word 0x1000010c
  .word 0x25ce0001
  .word 0x00000000
  .word 0x8c8e0024
  .word 0x8cd40020
  .word 0x11c00003
  .word 0x84d50028
  .word 0x84d5002a
  .word 0x8cd40024
  .word 0x0015743c
  .word 0x000e743f
  .word 0x01cc7018
  .word 0xa4d0002c
  .word 0x02028021
  .word 0x028e7021
  .word 0x024e7021
  .word 0x100000fc
  .word 0x25ce0001
  .word 0x00000000
  .word 0x8c8e0024
  .word 0x8cd40038
  .word 0x11c00003
  .word 0x84d50040
  .word 0x84d50042
  .word 0x8cd4003c
  .word 0x0015743c
  .word 0x000e743f
  .word 0x01cc7018
  .word 0xa4d00044
  .word 0x021e8021
  .word 0x028e7021
  .word 0x014e7021
  .word 0x100000ec
  .word 0x25ce0001
  .word 0x00000000
  .word 0x8c8e0024
  .word 0x8cd40050
  .word 0x11c00003
  .word 0x84d50058
  .word 0x84d5005a
  .word 0x8cd40054
  .word 0x0015743c
  .word 0x000e743f
  .word 0x01cc7018
  .word 0xa4d0005c
  .word 0x02028021
  .word 0x028e7021
  .word 0x024e7021
  .word 0x100000dc
  .word 0x25ce0001
  .word 0x00000000
  .word 0x8c940024
  .word 0x8cce0068
  .word 0x12800003
  .word 0x84d50070
  .word 0x84d50072
  .word 0x8cce006c
  .word 0x0015a43c
  .word 0x0014a43f
  .word 0x028ca818
  .word 0xa4d00074
  .word 0x7bb400a0
  .word 0x01d57021
  .word 0x02ce7021
  .word 0x25ce0001
  .word 0x100000cb
  .word 0x02148021
  .word 0x8c940024
  .word 0x8cce0080
  .word 0x12800003
  .word 0x84d50088
  .word 0x84d5008a
  .word 0x8cce0084
  .word 0x0015a43c
  .word 0x0014a43f
  .word 0x028ca818
  .word 0xa4d0008c
  .word 0x7bb40090
  .word 0x01d57021
  .word 0x006e7021
  .word 0x25ce0001
  .word 0x100000bb
  .word 0x02148021
  .word 0x240a0001
  .word 0x0000602d
  .word 0x024d1818
  .word 0x84c20010
  .word 0x0000882d
  .word 0x10400007
  .word 0x006b2823
  .word 0x25630001
  .word 0x254a0001
  .word 0x00031040
  .word 0x00431021
  .word 0x10000002
  .word 0x00021082
  .word 0x0000102d
  .word 0x02221821
  .word 0xa4c00014
  .word 0x84c20010
  .word 0x10400005
  .word 0x00000000
  .word 0x00051040
  .word 0x00451021
  .word 0x10000002
  .word 0x00021083
  .word 0x0000102d
  .word 0x01826021
  .word 0x84c20028
  .word 0x10400004
  .word 0x00000000
  .word 0x254a0001
  .word 0x10000002
  .word 0x0160102d
  .word 0x0000102d
  .word 0x00621821
  .word 0xa4cc002c
  .word 0x84c20028
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x00a0102d
  .word 0x0000102d
  .word 0x01826021
  .word 0x84c20040
  .word 0x10400006
  .word 0x00000000
  .word 0x000b1040
  .word 0x254a0001
  .word 0x24420003
  .word 0x10000002
  .word 0x00021082
  .word 0x0000102d
  .word 0x00621821
  .word 0xa4cc0044
  .word 0x84c20040
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x00051043
  .word 0x0000102d
  .word 0x01826021
  .word 0x84c20058
  .word 0x10400004
  .word 0x00000000
  .word 0x254a0001
  .word 0x10000002
  .word 0x0160102d
  .word 0x0000102d
  .word 0x00621821
  .word 0xa4cc005c
  .word 0x84c20058
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x00a0102d
  .word 0x0000102d
  .word 0x01826021
  .word 0x84c20070
  .word 0x10400005
  .word 0x00000000
  .word 0x25620003
  .word 0x254a0001
  .word 0x10000002
  .word 0x00021082
  .word 0x0000102d
  .word 0x00621821
  .word 0xa4cc0074
  .word 0x84c20070
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x00051083
  .word 0x0000102d
  .word 0x01821021
  .word 0x84cc0088
  .word 0x11800010
  .word 0x00000000
  .word 0x00126040
  .word 0x254a0001
  .word 0x01927021
  .word 0x25ce000f
  .word 0x25acffff
  .word 0x000e7102
  .word 0x018e7818
  .word 0x724c6018
  .word 0x016c7023
  .word 0x000e6040
  .word 0x018e6021
  .word 0x258c000f
  .word 0x000c6102
  .word 0x10000002
  .word 0x01ec6021
  .word 0x0000602d
  .word 0x006c8821
  .word 0xa4c2008c
  .word 0x8c830024
  .word 0x1060002d
  .word 0x00000000
  .word 0x84c30088
  .word 0x1060000e
  .word 0x00000000
  .word 0x25a3ffff
  .word 0x02432018
  .word 0x01646023
  .word 0x00121840
  .word 0x000c2040
  .word 0x00721821
  .word 0x008c2021
  .word 0x2463000f
  .word 0x2484000f
  .word 0x00031902
  .word 0x00042102
  .word 0x10000002
  .word 0x00641823
  .word 0x0000182d
  .word 0x00436021
  .word 0x254a0002
  .word 0x25630001
  .word 0xa4cc0104
  .word 0x00031040
  .word 0x00432021
  .word 0x00051040
  .word 0x00451821
  .word 0x00041082
  .word 0x00031883
  .word 0x00122040
  .word 0x01836021
  .word 0x00922021
  .word 0x25a3ffff
  .word 0x2484000f
  .word 0x02221021
  .word 0x00042102
  .word 0x00642818
  .word 0x72431818
  .word 0xa4cc011c
  .word 0x01632023
  .word 0x00041840
  .word 0x00641821
  .word 0x2463000f
  .word 0x00031902
  .word 0x00a31821
  .word 0x00438821
  .word 0x014d2018
  .word 0x8fa200d0
  .word 0x02242021
  .word 0x01a21021
  .word 0x2443ffff
  .word 0x8fa200d0
  .word 0x0062001b
  .word 0x00001012
  .word 0x00821821
  .word 0x000210c0
  .word 0x00628821
  .word 0x8fa200d0
  .word 0x00111900
  .word 0xacf20000
  .word 0xad020000
  .word 0x2462022f
  .word 0x10000044
  .word 0xad2d0000
  .word 0x8f340024
  .word 0x00b4a018
  .word 0xaf050000
  .word 0xaf050004
  .word 0xa7000014
  .word 0x26940003
  .word 0x0014a082
  .word 0x02348821
  .word 0x25ef0001
  .word 0x2df4000a
  .word 0x27390008
  .word 0x1680fed0
  .word 0x27180018
  .word 0x8c820024
  .word 0x14400024
  .word 0x00000000
  .word 0x8c8b0024
  .word 0x01d07023
  .word 0x0000502d
  .word 0x2562000a
  .word 0x0002082b
  .word 0x1020ffe3
  .word 0x022e8821
  .word 0x8e630020
  .word 0x30620001
  .word 0x10400010
  .word 0x00000000
  .word 0x30622000
  .word 0x1440000d
  .word 0x00000000
  .word 0x11600003
  .word 0x00000000
  .word 0x10000003
  .word 0xacce000c
  .word 0xacce0008
  .word 0x00000000
  .word 0x8e620024
  .word 0x00a21018
  .word 0x24420003
  .word 0x00021082
  .word 0x01c27021
  .word 0x00000000
  .word 0x8c8b0024
  .word 0x254a0001
  .word 0x26730008
  .word 0x2562000a
  .word 0x0142102b
  .word 0x1440ffe7
  .word 0x24c60018
  .word 0x1000ffc8
  .word 0x8fa200d0
  .word 0x7ba200c0
  .word 0xa4d00104
  .word 0x84ca011a
  .word 0x01621023
  .word 0x02026021
  .word 0x8ccb0114
  .word 0x25a2ffff
  .word 0x01425018
  .word 0x7ba200b0
  .word 0xa4cc011c
  .word 0x00621023
  .word 0x01828021
  .word 0x016a1021
  .word 0x00621021
  .word 0x1000ffce
  .word 0x244e0001
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
  .word 0x27bd00e0
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049DC70 NONMATCHING

u64 FUN_0049dc70(int param_1)

{
  int iVar1;
  int iVar2;
  Vec128 auVar3;
  Vec128 auVar4;
  Vec128 auVar5;
  Vec128 auVar6;
  Vec128 auVar7;
  Vec128 auVar8;
  Vec128 auVar9;
  Vec128 auVar10;
  Vec128 auVar11;
  u8 bVar12;
  Vec128 auVar13;
  Vec128 auVar14;
  u32 uVar15;
  long lVar16;
  u32 uVar19;
  u8 in_v0_qw [16];
  u32 uVar20;
  Vec128 auVar17;
  Vec128 auVar18;
  u32 uVar21;
  int iVar22;
  long lVar23;
  Vec128 auVar24;
  Vec128 auVar25;
  u32 uVar26;
  int iVar27;
  Vec128 auVar28;
  Vec128 auVar29;
  Vec128 auVar30;
  int iVar31;
  u32 uVar32;
  u32 in_a2_udw;
  int iVar33;
  u32 uVar34;
  int iVar35;
  u32 uVar36;
  u32 uVar37;
  u32 *puVar38;
  Vec128 in_t4_qw;
  Vec128 auVar39;
  Vec128 auVar40;
  Vec128 auVar41;
  Vec128 auVar42;
  Vec128 auVar43;
  Vec128 auVar44;
  Vec128 auVar45;
  Vec128 auVar46;
  Vec128 in_t5_qw;
  Vec128 auVar47;
  Vec128 auVar48;
  Vec128 auVar49;
  int iVar50;
  int iVar51;
  u32 in_t7_udw;
  u32 in_register_000000fc;
  int iVar52;
  u32 uVar53;
  u32 uVar54;
  u32 in_s0_udw;
  u32 in_register_0000010c;
  long lVar55;
  long *plVar56;
  long *plVar57;
  long *plVar58;
  u32 in_s7_udw;
  u32 in_register_0000017c;
  u32 uVar59;
  u32 uVar60;
  u32 uVar62;
  u32 uVar63;
  Vec128 auVar61;
  u32 uVar64;
  u32 in_s8_udw;
  u32 in_register_000001ec;
  u32 uStack_180;
  int iStack_20;
  
  iVar1 = *(int *)(param_1 + 4);
  (*(u64*)((u8*)&auVar17 + 8)) = (*(u64*)((u8*)&in_v0_qw + 8));
  auVar61._8_8_ = 0;
  auVar61._0_8_ = auVar17._8_8_;
  iVar22 = **(int **)(param_1 + 0x30);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = in_a2_udw;
  auVar61 = _pcpyld(auVar18 << 0x40,auVar61 << 0x40);
  plVar58 = *(long **)(iVar22 + 0x20);
  lVar23 = (long)*(int *)(iVar22 + 0x34);
  uVar15 = (u32)*(u8 *)(iVar1 + 0xb6);
  uVar19 = (*(u32*)((u8*)&in_v0_qw + 8));
  uVar20 = (*(u32*)((u8*)&in_v0_qw + 12));
  iStack_20 = *(int *)(iVar22 + 0x24);
  iVar2 = *(int *)(iVar22 + 0x38);
  if (((**(u32 **)(param_1 + 0xc) & 1) == 0) && ((**(u32 **)(param_1 + 0xc) & 8) == 0)) {
    uStack_180 = (u32)*(u8 *)(iVar1 + 0x1f1);
  }
  else {
    uStack_180 = (u32)*(u8 *)(iVar1 + 0xb9);
    iStack_20 = iStack_20 + uStack_180 * (*(int *)(iVar22 + 0x34) + -1);
  }
  bVar12 = 0;
  lVar55 = 0;
  plVar56 = plVar58;
  if ((0 < lVar23) && (0 < lVar23)) {
    iVar50 = 0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = auVar17._8_8_;
    uVar34 = (u32)uVar15 | 0x1000100;
    auVar17._0_8_ = 0x10000000;
    auVar18 = _pcpyld(auVar25 << 0x40,auVar17);
    lVar16 = 0x500000000000000;
    uVar26 = auVar17._8_8_;
    do {
      iVar27 = (int)lVar23 + -1;
      lVar23 = (long)iVar27;
      if (lVar55 < lVar23) {
        uVar59 = *(u32 *)(iVar22 + 0x30);
      }
      else {
        iVar27 = iVar27 * *(int *)(iVar22 + 0x30);
        lVar23 = (long)iVar27;
        uVar59 = iStack_20 - iVar27;
      }
      auVar29._8_8_ = uVar26;
      auVar29._0_8_ = lVar23;
      plVar57 = plVar58;
      if ((int)lVar55 % iVar2 == 0) {
        iVar27 = (int)plVar58 - (int)plVar56;
        if (iVar27 < 0) {
          iVar27 = iVar27 + 0xf;
        }
        auVar28._8_4_ = uVar19;
        auVar28._0_8_ = 0x1100000011000000;
        auVar28._12_4_ = uVar20;
        uVar32 = (iVar27 >> 4) - 1U | 0x10000000;
        if (lVar55 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = auVar28._8_8_;
          auVar28._0_8_ = auVar11._8_8_;
          auVar28._8_8_ = 0;
        }
        auVar3._8_8_ = in_a2_udw;
        auVar3._0_8_ = (long)(int)uVar32;
        auVar29 = _pcpyld(auVar28,auVar3);
        if ((*(char *)(iVar1 + 0xb4) == '\0') || (lVar55 == 0)) {
          *(int *)plVar56 = auVar29._0_4_;
          *(int *)((int)plVar56 + 4) = auVar29._4_4_;
          *(int *)(plVar56 + 1) = auVar29._8_4_;
          *(int *)((int)plVar56 + 0xc) = auVar29._12_4_;
          plVar57 = plVar58 + 2;
          plVar56 = plVar58;
        }
        else {
          *plVar56 = (long)(int)uVar32;
          bVar12 = 1;
          plVar56 = plVar58;
        }
      }
      iVar27 = *(int *)(param_1 + 0x24);
      auVar30._8_8_ = auVar29._8_8_;
      iVar31 = iVar27 + 10;
      iVar52 = 0;
      uVar26 = auVar17._8_8_;
      if (0 < iVar31) {
        (*(u64*)((u8*)&in_t5_qw + 0)) = (long)iVar1;
        (*(u64*)((u8*)&in_t4_qw + 0)) = (long)(iVar22 + 0x18);
        do {
          iVar31 = (*(u32*)((u8*)&in_t5_qw + 0));
          uVar32 = *(u32 *)(iVar31 + 0x20);
          iVar35 = (*(u32*)((u8*)&in_t4_qw + 0));
          if (((uVar32 & 1) != 0) && ((uVar32 & 0x2000) == 0)) {
            uVar32 = uVar32 & 0xff000000;
            if (uVar32 == 0x6c000000) {
LAB_0049df20:
              iVar51 = 4;
            }
            else if (uVar32 == 0x68000000) {
              iVar51 = 3;
            }
            else if ((uVar32 == 0x6d000000) || (uVar32 == 0x64000000)) {
              iVar51 = 2;
            }
            else {
              if (((uVar32 != 0x65000000) && (uVar32 != 0x6e000000)) && (uVar32 != 0x60000000))
              goto LAB_0049df20;
              iVar51 = 1;
            }
            iVar33 = *(int *)(iVar35 + 0x98);
            if (iVar27 != 0) {
              iVar33 = *(int *)(iVar35 + 0x9c);
            }
            uVar32 = uVar59 * iVar51 + 3;
            auVar24._0_8_ =
                 ((u32)(*(u32 *)(iVar31 + 0x20) & 0xff004000) | 0x8000 |
                  (long)(int)(u32)*(u8 *)(iVar35 + 0xa6) |
                 (long)(int)((uVar59 + (int)(((uVar32 & 0xfffffffc) - uVar59 * iVar51) + iVar51 + -1
                                            ) / iVar51) * 0x10000)) << 0x20 | 0x1000100 |
                 (u32)uVar15;
            auVar24._8_8_ = auVar17._8_8_;
            auVar4._8_8_ = in_a2_udw;
            auVar4._0_8_ = (long)(int)((int)uVar32 >> 2 | 0x30000000) |
                           (long)(*(int *)(iVar22 + 0x20) + iVar33 * 0x10) +
                           (u32)((*(int *)(iVar22 + 0x30) - uStack_180) * iVar51 * iVar50) << 0x20
            ;
            auVar25 = _pcpyld(auVar24,auVar4);
            *(int *)plVar56 = auVar25._0_4_;
            *(int *)((int)plVar56 + 4) = auVar25._4_4_;
            *(int *)(plVar56 + 1) = auVar25._8_4_;
            *(int *)((int)plVar56 + 0xc) = auVar25._12_4_;
            uVar26 = auVar18._8_8_;
            plVar56 = plVar57 + 2;
            *(int *)plVar57 = auVar18._0_4_;
            *(int *)((int)plVar57 + 4) = auVar18._4_4_;
            *(int *)(plVar57 + 1) = auVar18._8_4_;
            *(int *)((int)plVar57 + 0xc) = auVar18._12_4_;
            plVar57 = plVar57 + 4;
          }
          iVar27 = *(int *)(param_1 + 0x24);
          iVar52 = iVar52 + 1;
          (*(u64*)((u8*)&in_t5_qw + 0)) = (long)(iVar31 + 8);
          iVar31 = iVar27 + 10;
          (*(u64*)((u8*)&in_t4_qw + 0)) = (long)(iVar35 + 0x18);
        } while (iVar52 < iVar31);
      }
      uVar32 = 0;
      auVar46 = in_t4_qw;
      auVar49 = in_t5_qw;
      if (0 < iVar31) {
        uVar36 = uVar59 << 0x10;
        iVar31 = (int)((uVar59 + 1) * 3) >> 2;
        uVar21 = uVar59 * 3 + 0xf & 0xfffffff0;
        uVar37 = uVar36 | 0x6a008000 | uVar59 * (uVar15 + 1);
        (*(u64*)((u8*)&auVar14 + 4)) = (*(u64*)((u8*)&auVar17 + 8));
        auVar14._0_4_ = uVar37;
        auVar14._12_4_ = 0;
        auVar49._0_4_ = auVar14._4_4_;
        auVar49._4_4_ = auVar14._8_4_;
        auVar49._8_4_ = auVar14._12_4_;
        auVar49._12_4_ = 0;
        auVar46._8_4_ = uVar19;
        auVar46._0_8_ = 0x1000404;
        auVar46._12_4_ = uVar20;
        lVar23 = (long)(iVar22 + 0x18);
        iVar27 = iVar1;
        do {
          auVar49._0_8_ = (u32)*(int *)(iVar27 + 0x20);
          auVar45._8_8_ = auVar46._8_8_;
          auVar45._0_8_ = auVar49._0_8_ & 1;
          iVar52 = (int)lVar23;
          if (((auVar45._0_8_ != 0) && (auVar45._0_8_ = auVar49._0_8_ & 0x2000, auVar45._0_8_ != 0))
             && (uVar32 < 0xc)) {
            auVar49._0_8_ = (u32)(int)(uVar32 * 4);
            auVar45._0_8_ = (u32)(int)((u32 *)(switchdataD_007bca50))[uVar32];
            uVar60 = auVar61._0_4_;
            uVar62 = auVar61._4_4_;
            uVar63 = auVar61._8_4_;
            uVar64 = auVar61._12_4_;
            uVar53 = 0;
            uVar54 = 0x5000000;
            switch(uVar32) {
            case 0:
              lVar23 = lVar16;
              if (bVar12) {
                bVar12 = 0;
                lVar23 = *plVar57;
              }
              auVar39._8_8_ = auVar45._8_8_;
              auVar39._0_8_ = lVar23;
              plVar58 = plVar57 + iVar31 * 2;
              auVar49._0_8_ = (u32)(int)plVar58;
              auVar6._8_4_ = in_t7_udw;
              auVar6._0_8_ = uVar34 | (u32)(uVar36 | 0x68008000 | (u32)*(u8 *)(iVar52 + 0xa6))
                                      << 0x20;
              auVar6._12_4_ = in_register_000000fc;
              auVar45 = _pcpyld(auVar6,auVar39);
              *(int *)plVar57 = auVar45._0_4_;
              *(int *)((int)plVar57 + 4) = auVar45._4_4_;
              *(int *)(plVar57 + 1) = auVar45._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar45._12_4_;
              *(u32 *)plVar58 = uVar60;
              *(u32 *)((int)plVar58 + 4) = uVar62;
              *(u32 *)(plVar58 + 1) = uVar63;
              *(u32 *)((int)plVar58 + 0xc) = uVar64;
              plVar57 = plVar58 + 2;
              break;
            case 1:
              lVar23 = lVar16;
              if (bVar12) {
                bVar12 = 0;
                lVar23 = *plVar57;
              }
              auVar49._0_8_ = lVar23;
              plVar58 = plVar57 + uVar59 * 2;
              auVar40._0_8_ =
                   uVar34 | (u32)(uVar36 | 0x6c008000 | (u32)*(u8 *)(iVar52 + 0xa6)) << 0x20;
              auVar40._8_8_ = auVar45._8_8_;
              auVar45 = _pcpyld(auVar40,auVar49);
              *(int *)plVar57 = auVar45._0_4_;
              *(int *)((int)plVar57 + 4) = auVar45._4_4_;
              *(int *)(plVar57 + 1) = auVar45._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar45._12_4_;
              *(u32 *)plVar58 = uVar60;
              *(u32 *)((int)plVar58 + 4) = uVar62;
              *(u32 *)(plVar58 + 1) = uVar63;
              *(u32 *)((int)plVar58 + 0xc) = uVar64;
              plVar57 = plVar58 + 2;
              in_t7_udw = uVar19;
              in_register_000000fc = uVar20;
              break;
            case 2:
              if (bVar12) {
                uVar53 = (u32)*plVar57;
                uVar54 = (u32)((u32)*plVar57 >> 0x20);
                bVar12 = 0;
              }
              plVar58 = plVar57 + ((int)(uVar59 * 2 + 3) >> 2) * 2;
              auVar49._0_8_ = (u32)(int)plVar58;
              (*(u64*)((u8*)&auVar49 + 8)) = (*(u64*)((u8*)&in_t5_qw + 8));
              auVar41._0_8_ =
                   uVar34 | ((u32)(uVar36 | 0x64008000) | (u32)*(u8 *)(iVar52 + 0xa6)) << 0x20
              ;
              auVar41._8_8_ = auVar17._8_8_;
              auVar8._4_4_ = uVar54;
              auVar8._0_4_ = uVar53;
              auVar8._8_4_ = in_s0_udw;
              auVar8._12_4_ = in_register_0000010c;
              auVar45 = _pcpyld(auVar41,auVar8);
              *(int *)plVar57 = auVar45._0_4_;
              *(int *)((int)plVar57 + 4) = auVar45._4_4_;
              *(int *)(plVar57 + 1) = auVar45._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar45._12_4_;
              *(u32 *)plVar58 = uVar60;
              *(u32 *)((int)plVar58 + 4) = uVar62;
              *(u32 *)(plVar58 + 1) = uVar63;
              *(u32 *)((int)plVar58 + 0xc) = uVar64;
              plVar57 = plVar58 + 2;
              break;
            case 3:
              lVar23 = lVar16;
              if (bVar12) {
                bVar12 = 0;
                lVar23 = *plVar57;
              }
              auVar49._0_8_ = lVar23;
              plVar58 = plVar57 + ((int)(uVar59 * 4 + 3) >> 2) * 2;
              auVar42._0_8_ =
                   uVar34 | (u32)(uVar36 | 0x6c008000 | (u32)*(u8 *)(iVar52 + 0xa6)) << 0x20;
              auVar42._8_8_ = auVar45._8_8_;
              auVar45 = _pcpyld(auVar42,auVar49);
              *(int *)plVar57 = auVar45._0_4_;
              *(int *)((int)plVar57 + 4) = auVar45._4_4_;
              *(int *)(plVar57 + 1) = auVar45._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar45._12_4_;
              *(u32 *)plVar58 = uVar60;
              *(u32 *)((int)plVar58 + 4) = uVar62;
              *(u32 *)(plVar58 + 1) = uVar63;
              *(u32 *)((int)plVar58 + 0xc) = uVar64;
              plVar57 = plVar58 + 2;
              in_t7_udw = (*(u32*)((u8*)&in_t5_qw + 8));
              in_register_000000fc = (*(u32*)((u8*)&in_t5_qw + 12));
              break;
            case 4:
              if (bVar12) {
                uVar53 = (u32)*plVar57;
                uVar54 = (u32)((u32)*plVar57 >> 0x20);
                bVar12 = 0;
              }
              plVar58 = plVar57 + ((int)(uVar59 + 3) >> 2) * 2;
              auVar49._0_8_ = (u32)(int)plVar58;
              (*(u64*)((u8*)&auVar49 + 8)) = (*(u64*)((u8*)&in_t4_qw + 8));
              auVar43._0_8_ =
                   uVar34 | ((u32)(uVar36 | 0x6e00c000) | (u32)*(u8 *)(iVar52 + 0xa6)) << 0x20
              ;
              auVar43._8_8_ = auVar17._8_8_;
              auVar7._4_4_ = uVar54;
              auVar7._0_4_ = uVar53;
              auVar7._8_4_ = in_s0_udw;
              auVar7._12_4_ = in_register_0000010c;
              auVar45 = _pcpyld(auVar43,auVar7);
              *(int *)plVar57 = auVar45._0_4_;
              *(int *)((int)plVar57 + 4) = auVar45._4_4_;
              *(int *)(plVar57 + 1) = auVar45._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar45._12_4_;
              *(u32 *)plVar58 = uVar60;
              *(u32 *)((int)plVar58 + 4) = uVar62;
              *(u32 *)(plVar58 + 1) = uVar63;
              *(u32 *)((int)plVar58 + 0xc) = uVar64;
              plVar57 = plVar58 + 2;
              break;
            case 5:
              lVar23 = lVar16;
              if (bVar12) {
                bVar12 = 0;
                lVar23 = *plVar57;
              }
              auVar44._8_8_ = auVar45._8_8_;
              auVar44._0_8_ = lVar23;
              puVar38 = (u32 *)((int)plVar57 + uVar21);
              auVar49._0_8_ = (u32)(int)puVar38;
              auVar5._8_4_ = in_t7_udw;
              auVar5._0_8_ = uVar34 | (u32)(uVar36 | 0x6a008000 | (u32)*(u8 *)(iVar52 + 0xa6))
                                      << 0x20;
              auVar5._12_4_ = in_register_000000fc;
              auVar45 = _pcpyld(auVar5,auVar44);
              *(int *)plVar57 = auVar45._0_4_;
              *(int *)((int)plVar57 + 4) = auVar45._4_4_;
              *(int *)(plVar57 + 1) = auVar45._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar45._12_4_;
              *puVar38 = uVar60;
              puVar38[1] = uVar62;
              puVar38[2] = uVar63;
              puVar38[3] = uVar64;
              plVar57 = (long *)(puVar38 + 4);
              break;
            case 10:
              lVar23 = lVar16;
              if (bVar12) {
                bVar12 = 0;
                lVar23 = *plVar57;
              }
              auVar47._8_8_ = auVar49._8_8_;
              auVar47._0_8_ = lVar23;
              plVar58 = plVar57 + iVar31 * 2;
              auVar45._0_8_ = (u32)(int)plVar58;
              auVar9._8_4_ = in_s7_udw;
              auVar9._0_8_ = (u32)(uVar36 | 0x68008000 | uVar59 * uVar15) << 0x20 | 0x1000404;
              auVar9._12_4_ = in_register_0000017c;
              auVar49 = _pcpyld(auVar9,auVar47);
              *(int *)plVar57 = auVar49._0_4_;
              *(int *)((int)plVar57 + 4) = auVar49._4_4_;
              *(int *)(plVar57 + 1) = auVar49._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar49._12_4_;
              *(u32 *)plVar58 = uVar60;
              *(u32 *)((int)plVar58 + 4) = uVar62;
              *(u32 *)(plVar58 + 1) = uVar63;
              *(u32 *)((int)plVar58 + 0xc) = uVar64;
              plVar57 = plVar58 + 2;
              break;
            case 0xb:
              lVar23 = lVar16;
              if (bVar12) {
                bVar12 = 0;
                lVar23 = *plVar57;
              }
              auVar48._8_8_ = auVar49._8_8_;
              auVar48._0_8_ = lVar23;
              puVar38 = (u32 *)((int)plVar57 + uVar21);
              auVar45._0_8_ = (u32)(int)puVar38;
              auVar10._8_4_ = in_s8_udw;
              auVar10._0_8_ = (u32)uVar37 << 0x20 | 0x1000404;
              auVar10._12_4_ = in_register_000001ec;
              auVar49 = _pcpyld(auVar10,auVar48);
              *(int *)plVar57 = auVar49._0_4_;
              *(int *)((int)plVar57 + 4) = auVar49._4_4_;
              *(int *)(plVar57 + 1) = auVar49._8_4_;
              *(int *)((int)plVar57 + 0xc) = auVar49._12_4_;
              *puVar38 = uVar60;
              puVar38[1] = uVar62;
              puVar38[2] = uVar63;
              puVar38[3] = uVar64;
              plVar57 = (long *)(puVar38 + 4);
            }
          }
          auVar46._8_8_ = auVar45._8_8_;
          uVar32 = uVar32 + 1;
          iVar27 = iVar27 + 8;
          auVar46._0_8_ = CONCAT71(0,(int)uVar32 < *(int *)(param_1 + 0x24) + 10);
          lVar23 = (long)(iVar52 + 0x18);
          uVar26 = auVar17._8_8_;
        } while (auVar46._0_8_ != 0);
      }
      uVar32 = 0x15000000;
      iVar50 = iVar50 + 4;
      if (lVar55 != 0) {
        uVar32 = 0x17000000;
      }
      lVar55 = (long)((int)lVar55 + 1);
      auVar30._0_8_ = (u32)uVar32 << 0x20 | (long)(int)(uVar59 | 0x4000000);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar26;
      auVar25 = _pcpyld(auVar13 << 0x40,auVar30);
      *(int *)plVar57 = auVar25._0_4_;
      *(int *)((int)plVar57 + 4) = auVar25._4_4_;
      *(int *)(plVar57 + 1) = auVar25._8_4_;
      *(int *)((int)plVar57 + 0xc) = auVar25._12_4_;
      lVar23 = (long)*(int *)(iVar22 + 0x34);
      plVar58 = plVar57 + 2;
      in_t4_qw = auVar46;
      in_t5_qw = auVar49;
      uVar26 = auVar30._8_8_;
    } while (lVar55 < lVar23);
  }
  iVar22 = (int)plVar58 - (int)plVar56;
  plVar58[-1] = 0x1100000011000000;
  if (iVar22 < 0) {
    iVar22 = iVar22 + 0xf;
  }
  *plVar56 = (long)(int)((iVar22 >> 4) - 1U | 0x60000000);
  if (*(char *)(iVar1 + 0xb4) == '\0') {
    plVar56[1] = 0;
  }
  return 1;
}

// FUN_0049E4F0
asm void FUN_0049e4f0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c820000
  .word 0x10400017
  .word 0x2451ffff
  .word 0x00111080
  .word 0x02428021
  .word 0x8e130004
  .word 0x1260000e
  .word 0x00000000
  .word 0x8e620000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000009
  .word 0xae600010
  .word 0x8e620004
  .word 0x1440fffc
  .word 0x00000000
  .word 0x0c12730c
  .word 0x0260202d
  .word 0x0c1311f8
  .word 0x0260202d
  .word 0x00000000
  .word 0x0220102d
  .word 0x2610fffc
  .word 0x1440ffed
  .word 0x2631ffff
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0240202d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_0049E5A0
asm u64 FUN_0049e5a0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c910000
  .word 0x12200020
  .word 0x00a0a02d
  .word 0x8e220000
  .word 0x10400018
  .word 0x2453ffff
  .word 0x00131080
  .word 0x02229021
  .word 0x8e500004
  .word 0x1200000f
  .word 0x00000000
  .word 0x8e020000
  .word 0x10400004
  .word 0x00000000
  .word 0x00000000
  .word 0x10000009
  .word 0xae000010
  .word 0x8e020004
  .word 0x1440fffc
  .word 0x00000000
  .word 0x0c12730c
  .word 0x0200202d
  .word 0x0c1311f8
  .word 0x0200202d
  .word 0x00000000
  .word 0x0260102d
  .word 0x2652fffc
  .word 0x1440ffec
  .word 0x2673ffff
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0220202d
  .word 0xaea00000
  .word 0x3c020003
  .word 0x2683ffff
  .word 0x3445050d
  .word 0x00031880
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24640008
  .word 0xaea20000
  .word 0x8ea20000
  .word 0x10400007
  .word 0x00000000
  .word 0xac540000
  .word 0x00143080
  .word 0x8ea20000
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24440004
  .word 0x02a0102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}

// FUN_0049E6C0
asm u32 FUN_0049e6c0(int param_1)
{
  .set noreorder
  .word 0x8c850008
  .word 0x0000182d
  .word 0x24020001
  .word 0x3c0a007c
  .word 0x0040382d
  .word 0x0040402d
  .word 0x0040482d
  .word 0x254aca80
  .word 0x8ca60000
  .word 0x30cbffff
  .word 0x00063702
  .word 0x30c60007
  .word 0x2cc10008
  .word 0x1020001c
  .word 0x00000000
  .word 0x00063080
  .word 0x00ca3021
  .word 0x8cc60000
  .word 0x00c00008
  .word 0x00000000
  .word 0x10000015
  .word 0x0120182d
  .word 0x25660001
  .word 0x00063100
  .word 0x10000011
  .word 0x00a62821
  .word 0x8ca60004
  .word 0x8c820008
  .word 0x00c23023
  .word 0x04c10003
  .word 0x00061103
  .word 0x24c2000f
  .word 0x00021103
  .word 0xaca20004
  .word 0x0000102d
  .word 0x10000006
  .word 0x24a50010
  .word 0x00000000
  .word 0x10000003
  .word 0x0100182d
  .word 0x00e0182d
  .word 0x00000000
  .word 0x0003302b
  .word 0x38c60001
  .word 0x14c0ffdb
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
}

// FUN_0049E780
asm u32 FUN_0049e780(int param_1)
{
  .set noreorder
  .word 0x8c850008
  .word 0x0000182d
  .word 0x24020001
  .word 0x3c0b007c
  .word 0x0040382d
  .word 0x0040402d
  .word 0x0040502d
  .word 0x256bcaa0
  .word 0x8ca60000
  .word 0x30c9ffff
  .word 0x00063702
  .word 0x30c60007
  .word 0x2cc10008
  .word 0x10200018
  .word 0x00000000
  .word 0x00063080
  .word 0x00cb3021
  .word 0x8cc60000
  .word 0x00c00008
  .word 0x00000000
  .word 0x10000011
  .word 0x0140182d
  .word 0x25260001
  .word 0x00063100
  .word 0x1000000d
  .word 0x00a62821
  .word 0x8ca90004
  .word 0x8c860008
  .word 0x0000102d
  .word 0x00094900
  .word 0x00c93021
  .word 0xaca60004
  .word 0x10000005
  .word 0x24a50010
  .word 0x10000003
  .word 0x0100182d
  .word 0x00e0182d
  .word 0x00000000
  .word 0x0003302b
  .word 0x38c60001
  .word 0x14c0ffdf
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
}

// FUN_0049E830
asm u64 FUN_0049e830(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x8ca30008
  .word 0xffbf0060
  .word 0x3c020100
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x00621024
  .word 0x10400053
  .word 0x7fb00000
  .word 0x8f82bba0
  .word 0x02621021
  .word 0x8c520000
  .word 0x8e550000
  .word 0x0015082b
  .word 0x1020000a
  .word 0x0000882d
  .word 0x0240802d
  .word 0x0c12730c
  .word 0x8e040004
  .word 0x26310001
  .word 0x26100004
  .word 0x0235102b
  .word 0x1440fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x0c127b34
  .word 0x0260202d
  .word 0x2446fff4
  .word 0x0280202d
  .word 0x3c020003
  .word 0x24050001
  .word 0x34477002
  .word 0x0c130568
  .word 0x24080037
  .word 0x14400003
  .word 0x00000000
  .word 0x1000003d
  .word 0x0000102d
  .word 0x0280202d
  .word 0x2785af10
  .word 0x0c1314fc
  .word 0x24060004
  .word 0x10400032
  .word 0x00000000
  .word 0x8e420000
  .word 0x0002082b
  .word 0x1020002c
  .word 0x0000882d
  .word 0x0240982d
  .word 0x8e700004
  .word 0x0280202d
  .word 0x27a5007c
  .word 0x24060004
  .word 0x8e030020
  .word 0x26150018
  .word 0x8e020008
  .word 0x00701823
  .word 0x00431023
  .word 0x0c1314fc
  .word 0xafa2007c
  .word 0x14400003
  .word 0x00000000
  .word 0x10000023
  .word 0x0000102d
  .word 0x0c1279b0
  .word 0x02a0202d
  .word 0xafa20078
  .word 0x0280202d
  .word 0x27a50078
  .word 0x0c1314fc
  .word 0x24060004
  .word 0x10400017
  .word 0x00000000
  .word 0x8ea50008
  .word 0x8fa6007c
  .word 0x0c1314fc
  .word 0x0280202d
  .word 0x10400013
  .word 0x00000000
  .word 0x0c1279e0
  .word 0x02a0202d
  .word 0x8e020008
  .word 0x0200202d
  .word 0x02021021
  .word 0x0c140e96
  .word 0x24450018
  .word 0x8e420000
  .word 0x26310001
  .word 0x0222102b
  .word 0x1440ffd7
  .word 0x26730004
  .word 0x10000006
  .word 0x0280102d
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
  .word 0x27bd0080
}

// FUN_0049E9F0
asm u64 FUN_0049e9f0(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0x0000302d
  .word 0xffbf0090
  .word 0x27a700bc
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x00a0b02d
  .word 0x7fb40040
  .word 0x24050001
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c130580
  .word 0x0080802d
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa300bc
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
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300a8
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200ac
  .word 0x0c130714
  .word 0x27a400a8
  .word 0x10000084
  .word 0x0000102d
  .word 0x10000082
  .word 0x0000102d
  .word 0x0200202d
  .word 0x27a500b8
  .word 0x0c131494
  .word 0x24060004
  .word 0x24030004
  .word 0x1443001c
  .word 0x00000000
  .word 0x8fa200b8
  .word 0x1443001b
  .word 0x00000000
  .word 0x8f82bba0
  .word 0x02c22021
  .word 0x8c820000
  .word 0x10400006
  .word 0x0000282d
  .word 0x8c420000
  .word 0x8ec30024
  .word 0x14620002
  .word 0x00000000
  .word 0x24050001
  .word 0x10a00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c920000
  .word 0x0c127968
  .word 0x8ec50024
  .word 0x0040202d
  .word 0x8c920000
  .word 0x8e570000
  .word 0x0017102a
  .word 0x14400007
  .word 0x0000a82d
  .word 0x10000060
  .word 0x02c0102d
  .word 0x1000005e
  .word 0x0000102d
  .word 0x1000005c
  .word 0x0000102d
  .word 0x3c1e0096
  .word 0x27de0178
  .word 0x0200202d
  .word 0x27a500b4
  .word 0x0c131494
  .word 0x24060004
  .word 0x24030004
  .word 0x10430003
  .word 0x00000000
  .word 0x10000051
  .word 0x0000102d
  .word 0x8fa400b4
  .word 0x3c030003
  .word 0x8fc20000
  .word 0x3465050d
  .word 0x26540004
  .word 0x0040f809
  .word 0x24840247
  .word 0xae820000
  .word 0x8e820000
  .word 0x1040003b
  .word 0x00000000
  .word 0xac400000
  .word 0x3c03004a
  .word 0x8e820000
  .word 0x2463cc30
  .word 0x0200202d
  .word 0x27a500b0
  .word 0x24060004
  .word 0xac400004
  .word 0x8e820000
  .word 0xac56000c
  .word 0x8fa700b4
  .word 0x8e820000
  .word 0x24e7022f
  .word 0xac470008
  .word 0x8e820000
  .word 0xac540010
  .word 0x8e820000
  .word 0xac430014
  .word 0x8e820000
  .word 0x0c131494
  .word 0x24530018
  .word 0x24030004
  .word 0x14430025
  .word 0x00000000
  .word 0xae600000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x240601b0
  .word 0x0c148502
  .word 0xae600004
  .word 0x266301b0
  .word 0x2402ffc0
  .word 0x2463003f
  .word 0x00621024
  .word 0xae620008
  .word 0x8fa200b0
  .word 0x14400019
  .word 0x00000000
  .word 0x8fb100b4
  .word 0x8e650008
  .word 0x0200202d
  .word 0x0c131494
  .word 0x0220302d
  .word 0x16220018
  .word 0x00000000
  .word 0x0c1279e0
  .word 0x0260202d
  .word 0x8e840000
  .word 0x8c820008
  .word 0x00821021
  .word 0x0c140e96
  .word 0x24450018
  .word 0x26b50001
  .word 0x02b7102a
  .word 0x1440ffb5
  .word 0x26520004
  .word 0x1000ffab
  .word 0x00000000
  .word 0x1000000a
  .word 0x0000102d
  .word 0x10000008
  .word 0x0000102d
  .word 0x8e630008
  .word 0x2402ff80
  .word 0x2463007f
  .word 0x00621024
  .word 0x1000ffe3
  .word 0xae620008
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
  .word 0x00000000
}

#pragma optimization_level 3
#pragma schedule on
// FUN_0049ECD0
asm int FUN_0049ecd0(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x8c850008
  .word 0x7fb20020
  .word 0x3c030100
  .word 0x7fb10010
  .word 0x0000102d
  .word 0x00a31824
  .word 0x1060005a
  .word 0x7fb00000
  .word 0x8f83bba0
  .word 0x24420010
  .word 0x00831821
  .word 0x8c650000
  .word 0x8ca40000
  .word 0x0004082b
  .word 0x10200052
  .word 0x0000382d
  .word 0x2c810009
  .word 0x1420003f
  .word 0x2483fff8
  .word 0x00a0302d
  .word 0x8cd20004
  .word 0x24e70008
  .word 0x8cd10008
  .word 0x00e3402b
  .word 0x8cd8000c
  .word 0x8ccc0010
  .word 0x8ccf0014
  .word 0x8ccb0018
  .word 0x8e4a0020
  .word 0x8e490008
  .word 0x8e300020
  .word 0x8e390008
  .word 0x8f0e0020
  .word 0x8f0d0008
  .word 0x01529023
  .word 0x01329023
  .word 0x02118023
  .word 0x8d8a0020
  .word 0x26510008
  .word 0x0330c823
  .word 0x8d890008
  .word 0x00518021
  .word 0x01d81023
  .word 0x01a26823
  .word 0x272e0008
  .word 0x020e7021
  .word 0x014c1023
  .word 0x25aa0008
  .word 0x01221023
  .word 0x01ca5021
  .word 0x24420008
  .word 0x0142c021
  .word 0x8dee0020
  .word 0x8d690020
  .word 0x8dec0008
  .word 0x8d620008
  .word 0x8ccd001c
  .word 0x8cca0020
  .word 0x01cf7023
  .word 0x012b4823
  .word 0x018e6023
  .word 0x258b0008
  .word 0x00491023
  .word 0x8dac0020
  .word 0x030b5821
  .word 0x24420008
  .word 0x8d490020
  .word 0x01627021
  .word 0x24c60020
  .word 0x8dab0008
  .word 0x8d420008
  .word 0x018d6023
  .word 0x012a4823
  .word 0x016c5823
  .word 0x256a0008
  .word 0x00491023
  .word 0x01ca5021
  .word 0x24420008
  .word 0x1500ffc5
  .word 0x01421021
  .word 0x00000000
  .word 0x00e4082b
  .word 0x1020000e
  .word 0x00000000
  .word 0x00071880
  .word 0x00a34821
  .word 0x8d280004
  .word 0x24e70001
  .word 0x00e4182b
  .word 0x8d060020
  .word 0x25290004
  .word 0x8d050008
  .word 0x00c83023
  .word 0x00a62823
  .word 0x24a50008
  .word 0x1460fff6
  .word 0x00451021
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}
#pragma schedule off
#pragma optimization_level 2

// FUN_0049EE70
asm u64 FUN_0049ee70(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x0260202d
  .word 0x0c12685c
  .word 0x7fb00000
  .word 0x8c430008
  .word 0x3c020100
  .word 0x00621024
  .word 0x10400052
  .word 0x00000000
  .word 0x8f82bb98
  .word 0x02621021
  .word 0x8c520000
  .word 0x8e550000
  .word 0x0015082b
  .word 0x10200009
  .word 0x0000882d
  .word 0x0240802d
  .word 0x0c12730c
  .word 0x8e040004
  .word 0x26310001
  .word 0x26100004
  .word 0x0235102b
  .word 0x1440fffa
  .word 0x00000000
  .word 0x0c127cd0
  .word 0x0260202d
  .word 0x2446fff4
  .word 0x0280202d
  .word 0x3c020003
  .word 0x24050001
  .word 0x34477002
  .word 0x0c130568
  .word 0x24080037
  .word 0x14400003
  .word 0x00000000
  .word 0x1000003d
  .word 0x0000102d
  .word 0x0280202d
  .word 0x2785af14
  .word 0x0c1314fc
  .word 0x24060004
  .word 0x10400032
  .word 0x00000000
  .word 0x8e420000
  .word 0x0002082b
  .word 0x1020002c
  .word 0x0000882d
  .word 0x0240982d
  .word 0x8e700004
  .word 0x0280202d
  .word 0x27a5007c
  .word 0x24060004
  .word 0x8e030020
  .word 0x26150018
  .word 0x8e020008
  .word 0x00701823
  .word 0x00431023
  .word 0x0c1314fc
  .word 0xafa2007c
  .word 0x14400003
  .word 0x00000000
  .word 0x10000023
  .word 0x0000102d
  .word 0x0c1279b0
  .word 0x02a0202d
  .word 0xafa20078
  .word 0x0280202d
  .word 0x27a50078
  .word 0x0c1314fc
  .word 0x24060004
  .word 0x10400017
  .word 0x00000000
  .word 0x8ea50008
  .word 0x8fa6007c
  .word 0x0c1314fc
  .word 0x0280202d
  .word 0x10400013
  .word 0x00000000
  .word 0x0c1279e0
  .word 0x02a0202d
  .word 0x8e020008
  .word 0x0200202d
  .word 0x02021021
  .word 0x0c140e96
  .word 0x24450018
  .word 0x8e420000
  .word 0x26310001
  .word 0x0222102b
  .word 0x1440ffd7
  .word 0x26730004
  .word 0x10000006
  .word 0x0280102d
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
  .word 0x27bd0080
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049F040
asm u64 FUN_0049f040(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x00a0b02d
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c12685c
  .word 0x02c0202d
  .word 0x0200202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a700bc
  .word 0x10400016
  .word 0x00000000
  .word 0x8fa300bc
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
  .word 0x24030002
  .word 0x3c028000
  .word 0xafa300a8
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa200ac
  .word 0x0c130714
  .word 0x27a400a8
  .word 0x10000087
  .word 0x0000102d
  .word 0x10000085
  .word 0x0000102d
  .word 0x0200202d
  .word 0x27a500b8
  .word 0x0c131494
  .word 0x24060004
  .word 0x24030004
  .word 0x1443001e
  .word 0x00000000
  .word 0x8fa200b8
  .word 0x1443001d
  .word 0x00000000
  .word 0x8f82bb98
  .word 0x02c22021
  .word 0x8c820000
  .word 0x10400007
  .word 0x0000282d
  .word 0x8ec30078
  .word 0x8c420000
  .word 0x94630004
  .word 0x14620002
  .word 0x00000000
  .word 0x24050001
  .word 0x10a00003
  .word 0x00000000
  .word 0x10000006
  .word 0x8c920000
  .word 0x8ec20078
  .word 0x0c127968
  .word 0x94450004
  .word 0x0040202d
  .word 0x8c920000
  .word 0x8e570000
  .word 0x0017102a
  .word 0x14400007
  .word 0x0000a82d
  .word 0x10000061
  .word 0x02c0102d
  .word 0x1000005f
  .word 0x0000102d
  .word 0x1000005d
  .word 0x0000102d
  .word 0x3c1e0096
  .word 0x27de0178
  .word 0x0200202d
  .word 0x27a500b4
  .word 0x0c131494
  .word 0x24060004
  .word 0x24030004
  .word 0x10430003
  .word 0x00000000
  .word 0x10000052
  .word 0x0000102d
  .word 0x8fa400b4
  .word 0x3c030003
  .word 0x8fc20000
  .word 0x3465050d
  .word 0x26540004
  .word 0x0040f809
  .word 0x24840247
  .word 0xae820000
  .word 0x8e820000
  .word 0x1040003c
  .word 0x00000000
  .word 0xac400000
  .word 0x3c03004a
  .word 0x8e820000
  .word 0x2463cc30
  .word 0x0200202d
  .word 0x27a500b0
  .word 0x24060004
  .word 0xac400004
  .word 0x8e820000
  .word 0xac56000c
  .word 0x8fa700b4
  .word 0x8e820000
  .word 0x24e7022f
  .word 0xac470008
  .word 0x8e820000
  .word 0xac540010
  .word 0x8e820000
  .word 0xac430014
  .word 0x8e820000
  .word 0x0c131494
  .word 0x24530018
  .word 0x24030004
  .word 0x14430026
  .word 0x00000000
  .word 0xae600000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x240601b0
  .word 0x0c148502
  .word 0xae600004
  .word 0x266301b0
  .word 0x2402ffc0
  .word 0x2463003f
  .word 0x00621024
  .word 0xae620008
  .word 0x8fa200b0
  .word 0x1440001a
  .word 0x00000000
  .word 0x00000000
  .word 0x8fb100b4
  .word 0x8e650008
  .word 0x0200202d
  .word 0x0c131494
  .word 0x0220302d
  .word 0x16220018
  .word 0x00000000
  .word 0x0c1279e0
  .word 0x0260202d
  .word 0x8e840000
  .word 0x8c820008
  .word 0x00821021
  .word 0x0c140e96
  .word 0x24450018
  .word 0x26b50001
  .word 0x02b7102a
  .word 0x1440ffb4
  .word 0x26520004
  .word 0x1000ffaa
  .word 0x00000000
  .word 0x1000000a
  .word 0x0000102d
  .word 0x10000008
  .word 0x0000102d
  .word 0x8e630008
  .word 0x2402ff80
  .word 0x2463007f
  .word 0x00621024
  .word 0x1000ffe3
  .word 0xae620008
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
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma schedule on
#pragma optimization_level 3
// FUN_0049F340
asm int FUN_0049f340(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0c12685c
  .word 0x0000802d
  .word 0x8c430008
  .word 0x3c020100
  .word 0x00621024
  .word 0x1040005a
  .word 0x00000000
  .word 0x8f82bb98
  .word 0x26100010
  .word 0x02221021
  .word 0x8c440000
  .word 0x8c830000
  .word 0x0003082b
  .word 0x10200052
  .word 0x0000302d
  .word 0x2c610009
  .word 0x1420003f
  .word 0x2462fff8
  .word 0x0080282d
  .word 0x8cb20004
  .word 0x24c60008
  .word 0x8cb90008
  .word 0x00c2382b
  .word 0x8cae000c
  .word 0x8caa0010
  .word 0x8caf0014
  .word 0x8cab0018
  .word 0x8e490020
  .word 0x8e480008
  .word 0x8f380020
  .word 0x8dcd0020
  .word 0x8f310008
  .word 0x8dcc0008
  .word 0x01329023
  .word 0x8d490020
  .word 0x01129023
  .word 0x8d480008
  .word 0x0319c023
  .word 0x26590008
  .word 0x01ae6823
  .word 0x02388823
  .word 0x018d6023
  .word 0x02198021
  .word 0x262e0008
  .word 0x020e7021
  .word 0x8cad001c
  .word 0x012a4823
  .word 0x258a0008
  .word 0x01094023
  .word 0x01ca5021
  .word 0x25080008
  .word 0x01488021
  .word 0x8dee0020
  .word 0x8d690020
  .word 0x8dec0008
  .word 0x8d680008
  .word 0x8caa0020
  .word 0x01cf7023
  .word 0x012b4823
  .word 0x018e6023
  .word 0x258b0008
  .word 0x01094023
  .word 0x8dac0020
  .word 0x020b5821
  .word 0x25080008
  .word 0x8d490020
  .word 0x01687021
  .word 0x24a50020
  .word 0x8dab0008
  .word 0x8d480008
  .word 0x018d6023
  .word 0x012a4823
  .word 0x016c5823
  .word 0x256a0008
  .word 0x01094023
  .word 0x01ca5021
  .word 0x25080008
  .word 0x14e0ffc5
  .word 0x01488021
  .word 0x00000000
  .word 0x00c3082b
  .word 0x1020000e
  .word 0x00000000
  .word 0x00061080
  .word 0x00824021
  .word 0x8d070004
  .word 0x24c60001
  .word 0x00c3102b
  .word 0x8ce50020
  .word 0x25080004
  .word 0x8ce40008
  .word 0x00a72823
  .word 0x00852023
  .word 0x24840008
  .word 0x1440fff6
  .word 0x02048021
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma optimization_level 2
#pragma schedule off
// FUN_0049F500
asm void FUN_0049f500(int param_1)
{
  .set noreorder
  .word 0x8c830014
  .word 0x3c020100
  .word 0x34480404
  .word 0x240c03d0
  .word 0x240b0020
  .word 0x2407fff0
  .word 0x3c096c01
  .word 0x24020001
  .word 0x24060002
  .word 0x24050003
  .word 0xac600018
  .word 0x246a0028
  .word 0xac6c001c
  .word 0x254a000f
  .word 0x01473824
  .word 0xac6b0020
  .word 0xac670024
  .word 0x0000202d
  .word 0x8c670024
  .word 0xace00010
  .word 0x8c670024
  .word 0xace00014
  .word 0x8c670024
  .word 0xace00018
  .word 0x8c670024
  .word 0xace0001c
  .word 0x8c6a001c
  .word 0x8c670024
  .word 0x254a0004
  .word 0x000a503c
  .word 0x000a503e
  .word 0x01494825
  .word 0x0009483c
  .word 0x01284025
  .word 0x71042389
  .word 0x7ce40000
  .word 0xac600010
  .word 0xac600014
  .word 0xa0620001
  .word 0xa0660002
  .word 0xa0620003
  .word 0xa0620004
  .word 0xa0650005
  .word 0xa0620006
  .word 0xa0600008
  .word 0xa0620009
  .word 0xa060000a
  .word 0xa066000b
  .word 0xa066000c
  .word 0x03e00008
  .word 0xa060000d
  .word 0x00000000
}

// FUN_0049F5D0
asm u32 FUN_0049f5d0(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdfea0
  .word 0x3c020096
  .word 0xffbf0090
  .word 0x24420070
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x27b30130
  .word 0x7fb10010
  .word 0x27b20134
  .word 0x7fb00000
  .word 0x27b1011c
  .word 0x8f86be38
  .word 0x27b00120
  .word 0x8ca30000
  .word 0x8c940014
  .word 0x00462821
  .word 0x27a20114
  .word 0x24040001
  .word 0xac400000
  .word 0x8ca20044
  .word 0xafa30118
  .word 0xafb40110
  .word 0xae640000
  .word 0xafa00128
  .word 0xafa0012c
  .word 0xafa200b0
  .word 0x27a500c0
  .word 0x240200ff
  .word 0xae400000
  .word 0xa3a20139
  .word 0x3c020096
  .word 0xae200000
  .word 0x2442dfc0
  .word 0xae000000
  .word 0x24430010
  .word 0xaf80bb90
  .word 0x27a20124
  .word 0xaf83bb94
  .word 0xac440000
  .word 0x27a200d0
  .word 0xafa200c0
  .word 0x27a20138
  .word 0xa0400000
  .word 0x27a2013a
  .word 0xa0400000
  .word 0x8e820010
  .word 0x0040f809
  .word 0x27a40110
  .word 0x104000c7
  .word 0x00000000
  .word 0x8e620000
  .word 0x28410002
  .word 0x102000c5
  .word 0x00000000
  .word 0x8f83bb90
  .word 0x106000c5
  .word 0x00000000
  .word 0x2402ffff
  .word 0x106200c7
  .word 0x00000000
  .word 0x2402fffb
  .word 0x14620004
  .word 0x00000000
  .word 0x24020004
  .word 0x10000008
  .word 0xaf82bb90
  .word 0x8e830024
  .word 0x8f82bb94
  .word 0x78630010
  .word 0x7c430000
  .word 0x8f82bb90
  .word 0x24420001
  .word 0xaf82bb90
  .word 0x3c030096
  .word 0x0002103c
  .word 0x2463dfc0
  .word 0x0002103e
  .word 0xaf83bb94
  .word 0x0000302d
  .word 0x00021c38
  .word 0x9e84001c
  .word 0x3c026c00
  .word 0x00622825
  .word 0x3c020100
  .word 0x34430404
  .word 0x8f82bb94
  .word 0x00a42025
  .word 0x0004203c
  .word 0x00831825
  .word 0x70661b89
  .word 0x7c430000
  .word 0x8f82bb90
  .word 0x24420001
  .word 0xaf82bb90
  .word 0x8fa400c0
  .word 0x0002303c
  .word 0x8f85bb94
  .word 0x0c13b0ac
  .word 0x0006303f
  .word 0x8e220000
  .word 0x0000f02d
  .word 0x8e160000
  .word 0x0000982d
  .word 0x0000a82d
  .word 0x94430004
  .word 0x8c44000c
  .word 0xafa200a0
  .word 0x0003082b
  .word 0x00821021
  .word 0x10200083
  .word 0x24520010
  .word 0x27b10140
  .word 0x27b00144
  .word 0x27b70154
  .word 0x8e870018
  .word 0x9384af19
  .word 0x9383af1a
  .word 0x9382af1b
  .word 0x10e0008e
  .word 0x9385af18
  .word 0x00000000
  .word 0x10fe0007
  .word 0x00000000
  .word 0x8ce60008
  .word 0x00e0f02d
  .word 0x8cd30014
  .word 0x27a60114
  .word 0xacd30000
  .word 0x00000000
  .word 0x27a6013c
  .word 0xacd20000
  .word 0x27a60148
  .word 0xacc00000
  .word 0x26c60004
  .word 0xae260000
  .word 0x27a60124
  .word 0x8cc90000
  .word 0x27a60138
  .word 0xae090000
  .word 0x90c80000
  .word 0x27a6013a
  .word 0x3108001f
  .word 0x90c70000
  .word 0x27a6013b
  .word 0xa0c80000
  .word 0x8e460008
  .word 0x24c8000c
  .word 0x27a6014c
  .word 0xacc80000
  .word 0x8e460008
  .word 0x8cc80000
  .word 0xa2e50000
  .word 0x27a60150
  .word 0x27a50155
  .word 0xacc80000
  .word 0xa0a40000
  .word 0x27a40156
  .word 0xa0830000
  .word 0x27a30157
  .word 0x14e0006b
  .word 0xa0620000
  .word 0x27a20124
  .word 0x8c430000
  .word 0x24020001
  .word 0x1062003c
  .word 0x00000000
  .word 0x27a20114
  .word 0x8e230000
  .word 0x8c440000
  .word 0x8e020000
  .word 0x34420001
  .word 0xae020000
  .word 0x8c620000
  .word 0x10400067
  .word 0x00000000
  .word 0x8c820000
  .word 0x10400004
  .word 0x00000000
  .word 0x0040f809
  .word 0x27a40110
  .word 0x00000000
  .word 0x8e020000
  .word 0x3042000e
  .word 0x14400063
  .word 0x00000000
  .word 0x8e220000
  .word 0x8c420000
  .word 0x8c440000
  .word 0x10800024
  .word 0x00000000
  .word 0x8c430004
  .word 0xac640000
  .word 0x3c020096
  .word 0x8e230000
  .word 0x24420070
  .word 0x8c630000
  .word 0x8c640004
  .word 0x8c630000
  .word 0xac640004
  .word 0x8f84bc00
  .word 0x8e230000
  .word 0x00442021
  .word 0x8c840024
  .word 0x8c630000
  .word 0x8c840000
  .word 0xac640000
  .word 0x8f84bc00
  .word 0x8e230000
  .word 0x00442021
  .word 0x8c840024
  .word 0x8c630000
  .word 0xac640004
  .word 0x8f83bc00
  .word 0x8e240000
  .word 0x00431821
  .word 0x8c630024
  .word 0x8c840000
  .word 0x8c630000
  .word 0xac640004
  .word 0x8f83bc00
  .word 0x8e240000
  .word 0x00431021
  .word 0x8c840000
  .word 0x8c420024
  .word 0xac440000
  .word 0x27a20114
  .word 0x8c420000
  .word 0x8c42000c
  .word 0x0040f809
  .word 0x27a40110
  .word 0x8e620010
  .word 0x10400003
  .word 0x2652000c
  .word 0x0040f809
  .word 0x27a40110
  .word 0x8fa200a0
  .word 0x26b50001
  .word 0x94420004
  .word 0x02a2102b
  .word 0x1440ff82
  .word 0x26d60004
  .word 0x8e820014
  .word 0x10400003
  .word 0x00000000
  .word 0x0040f809
  .word 0x27a40110
  .word 0x10000029
  .word 0x24020001
  .word 0x10000027
  .word 0x24020001
  .word 0x24020002
  .word 0x1000ff3a
  .word 0xae420000
  .word 0x8e830024
  .word 0x24020002
  .word 0xaf83bb94
  .word 0x1000ff5d
  .word 0xaf82bb90
  .word 0xaf80bb90
  .word 0x1000ff5a
  .word 0x0000102d
  .word 0x8e460008
  .word 0x8cc70008
  .word 0x14e0ff71
  .word 0x00000000
  .word 0x1000ff6f
  .word 0x8fa700b0
  .word 0x8e420008
  .word 0x90450004
  .word 0x90440005
  .word 0x90430006
  .word 0x90420007
  .word 0xa2e50000
  .word 0xa2e40001
  .word 0xa2e30002
  .word 0x1000ff8d
  .word 0xa2e20003
  .word 0x8e030000
  .word 0x3c020007
  .word 0x3442fff8
  .word 0x00621025
  .word 0x1000ff9b
  .word 0xae020000
  .word 0x0c127ea8
  .word 0x27a40110
  .word 0x1440ff9b
  .word 0x00000000
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
  .word 0x27bd0160
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049FAA0
asm u64 FUN_0049faa0(u64 param_1)
{
  .set noreorder
  .word 0x27bdfe50
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0xafa001ac
  .word 0xafa001a8
  .word 0xafa001a4
  .word 0x8c830034
  .word 0x8c920004
  .word 0x8c910030
  .word 0x3062000c
  .word 0x8e240000
  .word 0x1440003e
  .word 0x24900018
  .word 0x924600b5
  .word 0x0006082b
  .word 0x1020002c
  .word 0x0000282d
  .word 0x2cc10009
  .word 0x14200019
  .word 0x24c4fff8
  .word 0x0200402d
  .word 0x27a70050
  .word 0x8d030030
  .word 0x24a50008
  .word 0x00a4102b
  .word 0xace30000
  .word 0x8d030038
  .word 0xace30004
  .word 0x8d030040
  .word 0xace30008
  .word 0x8d030048
  .word 0xace3000c
  .word 0x8d030050
  .word 0xace30010
  .word 0x8d030058
  .word 0xace30014
  .word 0x8d030060
  .word 0xace30018
  .word 0x8d030068
  .word 0xace3001c
  .word 0x25080040
  .word 0x1440ffec
  .word 0x24e70020
  .word 0x00000000
  .word 0x00a6082b
  .word 0x1020000e
  .word 0x00000000
  .word 0x00051080
  .word 0x000518c0
  .word 0x005d1021
  .word 0x02033821
  .word 0x24440050
  .word 0x8ce30030
  .word 0x24a50001
  .word 0x00a6102b
  .word 0xac830000
  .word 0x24e70008
  .word 0x1440fffa
  .word 0x24840004
  .word 0x00000000
  .word 0x8e420008
  .word 0x0260202d
  .word 0x0040f809
  .word 0x27a50050
  .word 0x0040882d
  .word 0x8e040008
  .word 0x8e620030
  .word 0x8c430000
  .word 0x8c620008
  .word 0x00621021
  .word 0x0c140e96
  .word 0x244500db
  .word 0x10000093
  .word 0x0220102d
  .word 0x3c020007
  .word 0x3442fff0
  .word 0x00621025
  .word 0xae620034
  .word 0x8e62000c
  .word 0x8e63002c
  .word 0x8c420000
  .word 0x30420002
  .word 0x14400042
  .word 0x8c700004
  .word 0x0010283c
  .word 0x0260202d
  .word 0x0005283f
  .word 0x27a60080
  .word 0x27a701ac
  .word 0x27a801a8
  .word 0x0c127534
  .word 0x27a901a4
  .word 0x8e230000
  .word 0x10600003
  .word 0x00000000
  .word 0xac600010
  .word 0xae200000
  .word 0x0040302d
  .word 0x3c07004a
  .word 0x8e420004
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0040f809
  .word 0x24e7cc30
  .word 0xae220000
  .word 0x8e240000
  .word 0x10800030
  .word 0x00000000
  .word 0xac800018
  .word 0x0010103c
  .word 0xac80001c
  .word 0x0002103f
  .word 0x8e630018
  .word 0x24900018
  .word 0xac830028
  .word 0x8e63000c
  .word 0x8c630000
  .word 0xae630038
  .word 0x8e630038
  .word 0xac83002c
  .word 0xac820024
  .word 0x8e620024
  .word 0x2442000a
  .word 0x0002082b
  .word 0x10200020
  .word 0x0000282d
  .word 0x27a40080
  .word 0x0200182d
  .word 0xc4830000
  .word 0x24a50001
  .word 0xc4820004
  .word 0xc4810008
  .word 0xc480000c
  .word 0xe4630090
  .word 0xe4620094
  .word 0xe4610098
  .word 0xe460009c
  .word 0xc4810010
  .word 0xc4800014
  .word 0xe46100a0
  .word 0x24840018
  .word 0xe46000a4
  .word 0x8e620024
  .word 0x2442000a
  .word 0x00a2102b
  .word 0x1440ffee
  .word 0x24630018
  .word 0x1000000a
  .word 0x8fa501ac
  .word 0x0010103c
  .word 0x0002103f
  .word 0x2443fffe
  .word 0x00031040
  .word 0x1000ffba
  .word 0x00438021
  .word 0x10000040
  .word 0x0000102d
  .word 0x8fa501ac
  .word 0x260301b0
  .word 0x2402ffc0
  .word 0x2463003f
  .word 0x00621824
  .word 0x24040001
  .word 0xae050018
  .word 0x8fa201a4
  .word 0xae02001c
  .word 0x8fa201a8
  .word 0xae020020
  .word 0xae000024
  .word 0xae000028
  .word 0xae04002c
  .word 0x924200b4
  .word 0x10400004
  .word 0x00000000
  .word 0x2463007f
  .word 0x2402ff80
  .word 0x00621824
  .word 0xae030008
  .word 0x0000502d
  .word 0x8e660024
  .word 0x24c2000a
  .word 0x0002082b
  .word 0x10200021
  .word 0x0000282d
  .word 0x0240482d
  .word 0x0200402d
  .word 0x0200382d
  .word 0x8d230020
  .word 0x30620001
  .word 0x10400012
  .word 0x25240020
  .word 0x30622000
  .word 0x1440000f
  .word 0x00000000
  .word 0x10c00003
  .word 0x8d020098
  .word 0x8d02009c
  .word 0x00000000
  .word 0x00021900
  .word 0x8e020008
  .word 0x254a0001
  .word 0x00431021
  .word 0xace20030
  .word 0x8c820004
  .word 0x00021080
  .word 0xace20034
  .word 0x24e70008
  .word 0x00000000
  .word 0x8e660024
  .word 0x24a50001
  .word 0x25290008
  .word 0x24c2000a
  .word 0x00a2102b
  .word 0x1440ffe5
  .word 0x25080018
  .word 0x00000000
  .word 0x0c12771c
  .word 0x0260202d
  .word 0x1000ff33
  .word 0x924600b5
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd01b0
  .word 0x00000000
}

// FUN_0049FE40
asm long FUN_0049fe40(int param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x10800016
  .word 0x00000000
  .word 0x8c830014
  .word 0x10600015
  .word 0x00000000
  .word 0x24020002
  .word 0x10a2000b
  .word 0x00000000
  .word 0x24020001
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000009
  .word 0x0000102d
  .word 0x10c0000d
  .word 0x00000000
  .word 0xac660010
  .word 0x1000000b
  .word 0x0080102d
  .word 0xac660014
  .word 0x10000008
  .word 0x0080102d
  .word 0x10000006
  .word 0x00000000
  .word 0x10000004
  .word 0x0000102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049FEC0
asm long FUN_0049fec0(long param_1,u32 param_2)
{
  .set noreorder
  .word 0x10800007
  .word 0x00000000
  .word 0x8c820014
  .word 0x10400006
  .word 0x00000000
  .word 0xac450018
  .word 0x10000004
  .word 0x0080102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0049FF00
#pragma optimization_level 3

u8 ** FUN_0049ff00(void)
{
  return PTR_s_PS2All_csl_0077de80;
}
#pragma optimization_level 2

// FUN_0049FF10
asm void FUN_0049ff10(u32 param_1,u32 param_2,int param_3,long param_4)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x90920001
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f83bb90
  .word 0x8c840004
  .word 0x2c61007c
  .word 0x10200136
  .word 0x26300018
  .word 0x14600053
  .word 0x00000000
  .word 0x10a000ec
  .word 0x00000000
  .word 0xc4a00000
  .word 0x8f83bb94
  .word 0xc4aa0004
  .word 0xc4a90008
  .word 0xc4a80010
  .word 0xc4a70014
  .word 0xc4a60018
  .word 0xe4600000
  .word 0x8f86bb94
  .word 0xc4a50020
  .word 0xc4a40024
  .word 0xc4a30028
  .word 0xc4a20030
  .word 0xc4a10034
  .word 0xc4a00038
  .word 0x24c30004
  .word 0xaf83bb94
  .word 0xe4ca0004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a90004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4ac0004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a80004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a70004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a60004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4ac0004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a50004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a40004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a30004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4ac0004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a20004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a10004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4a00004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4ad0004
  .word 0x8f83bb94
  .word 0x24630004
  .word 0xaf83bb94
  .word 0x8f83bb90
  .word 0x24630004
  .word 0xaf83bb90
  .word 0x108000dd
  .word 0x00000000
  .word 0x0c132cbc
  .word 0x00000000
  .word 0x24430020
  .word 0x24440030
  .word 0xc6020000
  .word 0x8f85bb94
  .word 0xc6010004
  .word 0xc6000008
  .word 0xe4a20000
  .word 0x8f85bb94
  .word 0xe4a10004
  .word 0x8f85bb94
  .word 0xe4a00008
  .word 0x8f85bb94
  .word 0x124000d0
  .word 0xacb2000c
  .word 0x24050082
  .word 0x12450051
  .word 0x00000000
  .word 0x24050081
  .word 0x1245004e
  .word 0x00000000
  .word 0x24050080
  .word 0x1245002d
  .word 0x00000000
  .word 0x24040002
  .word 0x12440023
  .word 0x00000000
  .word 0x24040001
  .word 0x12440003
  .word 0x00000000
  .word 0x10000077
  .word 0x00000000
  .word 0x8f84bb94
  .word 0x24840010
  .word 0xaf84bb94
  .word 0xc4600000
  .word 0x8f84bb94
  .word 0xe4800000
  .word 0x8f84bb94
  .word 0x24840004
  .word 0xaf84bb94
  .word 0xc4600004
  .word 0x8f84bb94
  .word 0xe4800000
  .word 0x8f84bb94
  .word 0x24840004
  .word 0xaf84bb94
  .word 0xc4600008
  .word 0x8f83bb94
  .word 0xe4600000
  .word 0x8f84bb94
  .word 0x24830004
  .word 0xaf83bb94
  .word 0xac800004
  .word 0x8f84bb94
  .word 0x8f83bb90
  .word 0x24840004
  .word 0x24630002
  .word 0xaf84bb94
  .word 0x1000005a
  .word 0xaf83bb90
  .word 0x8f84bb94
  .word 0x8f83bb90
  .word 0x24840010
  .word 0x24630001
  .word 0xaf84bb94
  .word 0x10000053
  .word 0xaf83bb90
  .word 0x8f83bb94
  .word 0xc6200014
  .word 0x24630010
  .word 0xaf83bb94
  .word 0xc4810000
  .word 0x8f83bb94
  .word 0xe4610000
  .word 0x8f83bb94
  .word 0x24630004
  .word 0xaf83bb94
  .word 0xc4810004
  .word 0x8f83bb94
  .word 0xe4610000
  .word 0x8f83bb94
  .word 0x24630004
  .word 0xaf83bb94
  .word 0xc4810008
  .word 0x8f83bb94
  .word 0xe4610000
  .word 0x8f84bb94
  .word 0x24830004
  .word 0xaf83bb94
  .word 0xe4800004
  .word 0x8f84bb94
  .word 0x8f83bb90
  .word 0x24840004
  .word 0x24630002
  .word 0xaf84bb94
  .word 0x10000035
  .word 0xaf83bb90
  .word 0x8f85bb94
  .word 0xc6210014
  .word 0xc6200028
  .word 0x24a50010
  .word 0xaf85bb94
  .word 0xc4820000
  .word 0x8f85bb94
  .word 0xe4a20000
  .word 0x8f85bb94
  .word 0x24a50004
  .word 0xaf85bb94
  .word 0xc4820004
  .word 0x8f85bb94
  .word 0xe4a20000
  .word 0x8f85bb94
  .word 0x24a50004
  .word 0xaf85bb94
  .word 0xc4820008
  .word 0x8f84bb94
  .word 0xe4820000
  .word 0x8f85bb94
  .word 0x24a40004
  .word 0xaf84bb94
  .word 0xe4a10004
  .word 0x8f84bb94
  .word 0x24840004
  .word 0xaf84bb94
  .word 0xc4610000
  .word 0x8f84bb94
  .word 0xe4810000
  .word 0x8f84bb94
  .word 0x24840004
  .word 0xaf84bb94
  .word 0xc4610004
  .word 0x8f84bb94
  .word 0xe4810000
  .word 0x8f84bb94
  .word 0x24840004
  .word 0xaf84bb94
  .word 0xc4610008
  .word 0x8f83bb94
  .word 0xe4610000
  .word 0x8f84bb94
  .word 0x24830004
  .word 0xaf83bb94
  .word 0xe4800004
  .word 0x8f84bb94
  .word 0x8f83bb90
  .word 0x24840004
  .word 0x24630003
  .word 0xaf84bb94
  .word 0xaf83bb90
  .word 0x10000048
  .word 0xdfbf0030
  .word 0x8f85bb94
  .word 0x3c033f80
  .word 0xaca30000
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc00004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc00004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xe4cc0004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc00004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc30004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc00004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xe4cc0004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc00004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc00004
  .word 0x8f86bb94
  .word 0x24c50004
  .word 0xaf85bb94
  .word 0xacc30004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4ac0004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xaca00004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xaca00004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xaca00004
  .word 0x8f85bb94
  .word 0x24a30004
  .word 0xaf83bb94
  .word 0xe4ad0004
  .word 0x8f83bb94
  .word 0x24630004
  .word 0x1000ff20
  .word 0xaf83bb94
  .word 0x0000202d
  .word 0x1000ff26
  .word 0x0000182d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_004A0430
asm u64 FUN_004a0430(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x00a0182d
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x90820002
  .word 0x30420001
  .word 0x14400003
  .word 0x0080802d
  .word 0x10000007
  .word 0x0200102d
  .word 0xc46c0050
  .word 0xc46d0054
  .word 0x0c127fc4
  .word 0x24650010
  .word 0x1000fff9
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004A0480
asm void FUN_004a0480(int param_1,int param_2)
{
  .set noreorder
  .word 0x8c830018
  .word 0x3c060100
  .word 0x8c670008
  .word 0x00e63024
  .word 0x14c0004c
  .word 0x00000000
  .word 0x8ca9000c
  .word 0x30e6009f
  .word 0x90670018
  .word 0x30c600ff
  .word 0x00064400
  .word 0x2406fffe
  .word 0x95290006
  .word 0x00073e00
  .word 0x01284025
  .word 0x00e83825
  .word 0xaca70018
  .word 0x8ca70014
  .word 0x00e63024
  .word 0xaca60014
  .word 0x8ca60010
  .word 0x8cc70004
  .word 0x10e0003a
  .word 0x00000000
  .word 0x8cea0028
  .word 0x2484004c
  .word 0x8ca90018
  .word 0x112a0014
  .word 0x24e60018
  .word 0x00094402
  .word 0x000a3c02
  .word 0x310800ff
  .word 0x30e700ff
  .word 0x1507000b
  .word 0x00000000
  .word 0x00094602
  .word 0x000a3e02
  .word 0x310800ff
  .word 0x30e700ff
  .word 0x15070005
  .word 0x00000000
  .word 0x8ca70014
  .word 0x34e70004
  .word 0x10000004
  .word 0xaca70014
  .word 0x8ca70014
  .word 0x34e70008
  .word 0xaca70014
  .word 0x9467000c
  .word 0x10e00010
  .word 0x00000000
  .word 0x30e70001
  .word 0x10e00005
  .word 0x00000000
  .word 0x8ca30014
  .word 0x34630008
  .word 0x10000009
  .word 0xaca30014
  .word 0x8ca70014
  .word 0x34e70002
  .word 0xaca70014
  .word 0x9467000c
  .word 0x8ca30014
  .word 0x000738c0
  .word 0x00671825
  .word 0xaca30014
  .word 0x8c830000
  .word 0x30630001
  .word 0x1060000c
  .word 0x00000000
  .word 0x8cc70028
  .word 0x84830006
  .word 0x14e30005
  .word 0x00000000
  .word 0x8cc60024
  .word 0x84830004
  .word 0x10c30004
  .word 0x00000000
  .word 0x8ca30014
  .word 0x34630004
  .word 0xaca30014
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A05D0
asm void FUN_004a05d0(int param_1,int param_2)
{
  .set noreorder
  .word 0x8c83000c
  .word 0x24080001
  .word 0x8c690000
  .word 0x31230001
  .word 0x1068001e
  .word 0x00000000
  .word 0x312300ff
  .word 0x10600020
  .word 0x00000000
  .word 0x31230002
  .word 0x24070002
  .word 0x1067001c
  .word 0x00000000
  .word 0x31260010
  .word 0x24030010
  .word 0x10c3001e
  .word 0x00000000
  .word 0x31260008
  .word 0x24030008
  .word 0x14c30006
  .word 0x00000000
  .word 0xa0870029
  .word 0x9383be04
  .word 0x34630010
  .word 0x10000005
  .word 0xa0830028
  .word 0xa0880029
  .word 0x9383be04
  .word 0x34630014
  .word 0xa0830028
  .word 0x24030002
  .word 0x14a30013
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x24030004
  .word 0xa0830029
  .word 0x9383be04
  .word 0x1000fff7
  .word 0xa0830028
  .word 0x24030003
  .word 0xa0830029
  .word 0x9383be04
  .word 0x34630004
  .word 0x1000fff1
  .word 0xa0830028
  .word 0x24030004
  .word 0xa0830029
  .word 0x9383be04
  .word 0x1000ffec
  .word 0xa0830028
  .word 0x90830028
  .word 0x34630002
  .word 0x1000ffeb
  .word 0xa0830028
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A06C0
asm void FUN_004a06c0(int param_1)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c950008
  .word 0x8eb00018
  .word 0x8e030008
  .word 0x30630020
  .word 0x10600074
  .word 0x00000000
  .word 0x3c120096
  .word 0x2652007a
  .word 0x96420000
  .word 0x24420001
  .word 0xa6420000
  .word 0x0c132cbc
  .word 0x8ea40004
  .word 0x0040882d
  .word 0x27a40090
  .word 0x0c130ca8
  .word 0x0220282d
  .word 0x8e23000c
  .word 0x24020003
  .word 0x30630003
  .word 0x14620005
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa200d0
  .word 0x10000015
  .word 0xafa200d4
  .word 0xc7a300b4
  .word 0xc7a200b0
  .word 0xc7a000b8
  .word 0x44800800
  .word 0x4603181a
  .word 0x4602101e
  .word 0x4600001c
  .word 0x46000084
  .word 0x00000000
  .word 0x46011036
  .word 0x45010008
  .word 0xe7a200d0
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46020083
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0xe7a200d4
  .word 0x8e030054
  .word 0x3c04004a
  .word 0x24840430
  .word 0x27a50080
  .word 0x8c62000c
  .word 0x00431021
  .word 0x8c420018
  .word 0x2442000c
  .word 0x0c126708
  .word 0xafa20080
  .word 0x8eb40064
  .word 0x26b60064
  .word 0x1296003e
  .word 0x00000000
  .word 0x8e830008
  .word 0x8c730040
  .word 0x24710040
  .word 0x12710035
  .word 0x00000000
  .word 0x8e660008
  .word 0x10c0002e
  .word 0x00000000
  .word 0x96450000
  .word 0x94c3003c
  .word 0x1065002a
  .word 0x24c4003c
  .word 0x90c30002
  .word 0x30630001
  .word 0x10600026
  .word 0x00000000
  .word 0xa4850000
  .word 0x8e620008
  .word 0x0c132cbc
  .word 0x8c440004
  .word 0x24500030
  .word 0x0c1244ac
  .word 0x02a0202d
  .word 0xc4440004
  .word 0x8e640008
  .word 0xc6030004
  .word 0xc4460000
  .word 0xc6050000
  .word 0xc6000008
  .word 0xc4410008
  .word 0xc442000c
  .word 0x460320c1
  .word 0x46053141
  .word 0x4603181a
  .word 0x46000801
  .word 0x4605281e
  .word 0x4600005c
  .word 0xc4800014
  .word 0x46001000
  .word 0x46000002
  .word 0x46000834
  .word 0x4500000b
  .word 0x00000000
  .word 0x90830002
  .word 0x30630001
  .word 0x10600007
  .word 0x00000000
  .word 0x27a20080
  .word 0xc44c0050
  .word 0xc44d0054
  .word 0x0c127fc4
  .word 0x24450010
  .word 0x00000000
  .word 0x8e730000
  .word 0x1671ffce
  .word 0x00000000
  .word 0x00000000
  .word 0x8e940000
  .word 0x1696ffc5
  .word 0x00000000
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
  .word 0x27bd00e0
}

// FUN_004A08F0
asm void FUN_004a08f0(int param_1,int *param_2,int param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x8c820024
  .word 0x14400021
  .word 0x00e0882d
  .word 0x8c830008
  .word 0x3c020200
  .word 0x8c700018
  .word 0x8e030008
  .word 0x00621024
  .word 0x10400015
  .word 0x00000000
  .word 0x3c020003
  .word 0x3445050d
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x26440018
  .word 0xae620000
  .word 0x8e630000
  .word 0xac600000
  .word 0x8e630000
  .word 0xac600004
  .word 0x8e630000
  .word 0xac70000c
  .word 0x8e630000
  .word 0xac720008
  .word 0x8e630000
  .word 0xac730010
  .word 0x8e630000
  .word 0x10000004
  .word 0xac710014
  .word 0x0c13124c
  .word 0x0200202d
  .word 0xae620000
  .word 0x10000005
  .word 0xdfbf0040
  .word 0x0c13124c
  .word 0x8c840008
  .word 0x1000fffb
  .word 0xae620000
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A09D0
asm u32 FUN_004a09d0(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8c900008
  .word 0x24050001
  .word 0x8e060018
  .word 0x8cc20054
  .word 0xac82000c
  .word 0x8cc20018
  .word 0x14450063
  .word 0x0080902d
  .word 0x8f82bba0
  .word 0x00c22021
  .word 0x8c820000
  .word 0x10400007
  .word 0x0000382d
  .word 0x8cc30054
  .word 0x8c420000
  .word 0x94630004
  .word 0x14620002
  .word 0x00000000
  .word 0x00a0382d
  .word 0x10e00003
  .word 0x00000000
  .word 0x10000006
  .word 0x8c820000
  .word 0x8cc20054
  .word 0x0c127968
  .word 0x94450004
  .word 0x0040202d
  .word 0x8c820000
  .word 0xae420010
  .word 0x8e020018
  .word 0x8c420018
  .word 0xae420020
  .word 0x8e420020
  .word 0x28410002
  .word 0x1020005d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c128120
  .word 0x0240282d
  .word 0x8e040018
  .word 0x2403fffe
  .word 0x3c020096
  .word 0xa480000c
  .word 0x8e04004c
  .word 0x00831824
  .word 0xae03004c
  .word 0x8c420070
  .word 0x8e040004
  .word 0x0c132cbc
  .word 0x24530020
  .word 0x8e240000
  .word 0x0040282d
  .word 0x0c130bcc
  .word 0x0260302d
  .word 0x0200202d
  .word 0x0c1244ac
  .word 0x24110002
  .word 0x3c030096
  .word 0x8f84bdb4
  .word 0x8c650070
  .word 0x24030006
  .word 0x00a42021
  .word 0x2466ffff
  .word 0x1060001d
  .word 0x24840060
  .word 0xc440000c
  .word 0x24030001
  .word 0xc4470004
  .word 0xc4460000
  .word 0xc4450008
  .word 0x46000107
  .word 0xc4810004
  .word 0xc4820000
  .word 0xc4830008
  .word 0xc480000c
  .word 0x4601381a
  .word 0x4602301e
  .word 0x4603285c
  .word 0x46000801
  .word 0x46040036
  .word 0x45000002
  .word 0x0060102d
  .word 0x0000102d
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x24110001
  .word 0x00c0102d
  .word 0x24840014
  .word 0x1440ffec
  .word 0x24c6ffff
  .word 0x00000000
  .word 0x0011283c
  .word 0x0005283f
  .word 0x0c128174
  .word 0x0240202d
  .word 0x8e020018
  .word 0x0240202d
  .word 0x8c420008
  .word 0x30420040
  .word 0x0002102b
  .word 0x0c1281b0
  .word 0xa242002a
  .word 0x1000001c
  .word 0x24020001
  .word 0x8f82bb9c
  .word 0x02022021
  .word 0x8c820000
  .word 0x10400007
  .word 0x0000382d
  .word 0x8cc30054
  .word 0x8c420000
  .word 0x94630004
  .word 0x14620002
  .word 0x00000000
  .word 0x00a0382d
  .word 0x10e00003
  .word 0x00000000
  .word 0x10000006
  .word 0x8c820000
  .word 0x8cc20054
  .word 0x0c127968
  .word 0x94450004
  .word 0x0040202d
  .word 0x8c820000
  .word 0x1000ff9e
  .word 0xae420010
  .word 0xc6010058
  .word 0xc600005c
  .word 0x46000802
  .word 0x1000ffa0
  .word 0xe640001c
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x8c83000c
  .word 0x8c850030
  .word 0x8c82002c
  .word 0x8c630000
  .word 0x8ca50000
  .word 0x8c420004
  .word 0x30630002
  .word 0x14600015
  .word 0x24a50018
  .word 0x0002183c
  .word 0x8ca2000c
  .word 0x0003183f
  .word 0x14620016
  .word 0x00000000
  .word 0x8c820034
  .word 0x30420008
  .word 0x14400016
  .word 0x00000000
  .word 0x8c830030
  .word 0x8c82000c
  .word 0x8c630000
  .word 0x8c420000
  .word 0xac820038
  .word 0x8c62002c
  .word 0x8c830038
  .word 0x1462000f
  .word 0x00000000
  .word 0x10000011
  .word 0x24020001
  .word 0x0002103c
  .word 0x0002103f
  .word 0x2443fffe
  .word 0x00031040
  .word 0x1000ffe7
  .word 0x00431021
  .word 0x8c820034
  .word 0x34420008
  .word 0x1000ffe8
  .word 0xac820034
  .word 0x10000005
  .word 0x24020001
  .word 0x8c820034
  .word 0x34420008
  .word 0x1000ffef
  .word 0xac820034
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A0CE0
asm int FUN_004a0ce0(int param_1,int *param_2,int param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x240200ff
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x8c900008
  .word 0x92030000
  .word 0x14620021
  .word 0x00e0882d
  .word 0x3c020096
  .word 0x3c030200
  .word 0x8c420074
  .word 0x8c420008
  .word 0x00431024
  .word 0x10400015
  .word 0x00000000
  .word 0x3c020003
  .word 0x3445050d
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x26440018
  .word 0xae620000
  .word 0x8e620000
  .word 0xac400000
  .word 0x8e620000
  .word 0xac400004
  .word 0x8e620000
  .word 0xac50000c
  .word 0x8e620000
  .word 0xac520008
  .word 0x8e620000
  .word 0xac530010
  .word 0x8e620000
  .word 0x10000004
  .word 0xac510014
  .word 0x0c13124c
  .word 0x0200202d
  .word 0xae620000
  .word 0x10000005
  .word 0x8e620000
  .word 0x0c12823c
  .word 0x00000000
  .word 0x1000fffb
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_004A0DC0
asm void FUN_004a0dc0(int param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x240200ff
  .word 0xffbf0000
  .word 0x8c830008
  .word 0x90630000
  .word 0x14620005
  .word 0x00000000
  .word 0x0c1290bc
  .word 0x00000000
  .word 0x10000004
  .word 0xdfbf0000
  .word 0x0c12850c
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
}

// FUN_004A0E00
asm u64 FUN_004a0e00(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820040
  .word 0x10400003
  .word 0x0080902d
  .word 0x0c13c3cc
  .word 0x8c440000
  .word 0x8e500040
  .word 0x12000002
  .word 0x0000882d
  .word 0x8e110000
  .word 0xaf80bdc8
  .word 0x1220000c
  .word 0x0000102d
  .word 0x92230023
  .word 0x0002103c
  .word 0x0002103f
  .word 0x3063000f
  .word 0x38640001
  .word 0x38630005
  .word 0x2c840001
  .word 0x2c630001
  .word 0x00831825
  .word 0x00431025
  .word 0xaf82bdc8
  .word 0x8f82bdcc
  .word 0x12220135
  .word 0x00000000
  .word 0x1220012a
  .word 0x00000000
  .word 0xdf82b0d0
  .word 0x0220202d
  .word 0x0000282d
  .word 0x34420010
  .word 0x0c13c408
  .word 0xff82b0d0
  .word 0x1200012b
  .word 0xaf91bdcc
  .word 0x0c127294
  .word 0x92040050
  .word 0xff80bd68
  .word 0x24020003
  .word 0x8e030050
  .word 0x30630f00
  .word 0x00031a02
  .word 0x1062011e
  .word 0x00000000
  .word 0x8e030050
  .word 0x24020003
  .word 0x3063f000
  .word 0x00031b02
  .word 0x1462011c
  .word 0x00000000
  .word 0xdf82bd68
  .word 0x34420004
  .word 0x10000118
  .word 0xff82bd68
  .word 0x34420001
  .word 0x10000005
  .word 0xff82bd50
  .word 0xdf83bd50
  .word 0x2402fffe
  .word 0x00621024
  .word 0xff82bd50
  .word 0x0000202d
  .word 0x0c135674
  .word 0x24050012
  .word 0x3c021000
  .word 0x0000182d
  .word 0x3442000f
  .word 0x70623389
  .word 0x8f84bd04
  .word 0x3c036c01
  .word 0x3c020100
  .word 0x346303fa
  .word 0x34420404
  .word 0x0003183c
  .word 0x0000282d
  .word 0x00431025
  .word 0x7c860000
  .word 0x70451389
  .word 0x7c820010
  .word 0x8f83bd04
  .word 0x8f82bdc8
  .word 0x24630020
  .word 0xaf83bd04
  .word 0x92440047
  .word 0x388400ff
  .word 0x0004202b
  .word 0x00821025
  .word 0x10400005
  .word 0xaf84bdc4
  .word 0xdf82b0d0
  .word 0x34420040
  .word 0x10000005
  .word 0xff82b0d0
  .word 0xdf84b0d0
  .word 0x2402ffbf
  .word 0x00821024
  .word 0xff82b0d0
  .word 0x3c020096
  .word 0x3c04fc00
  .word 0xdc4758a0
  .word 0xdf85b0d0
  .word 0x34827fff
  .word 0x92440029
  .word 0x0002303c
  .word 0x3402ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00463025
  .word 0x3c020096
  .word 0x0004203c
  .word 0xdc4258a8
  .word 0x0004203f
  .word 0x00a42025
  .word 0x0004203c
  .word 0x0004203f
  .word 0x70063389
  .word 0x308407ff
  .word 0x00e63024
  .word 0x000423fc
  .word 0x00c42025
  .word 0x70443389
  .word 0x3c020096
  .word 0x0003203c
  .word 0x7c4658a0
  .word 0x0004203f
  .word 0x3c026c01
  .word 0x7c860000
  .word 0x344203fb
  .word 0x0000302d
  .word 0x0002183c
  .word 0x3c020100
  .word 0x34420404
  .word 0x00431025
  .word 0x70461389
  .word 0x7c820010
  .word 0x8f83bd04
  .word 0x30a20010
  .word 0x24630020
  .word 0x10400006
  .word 0xaf83bd04
  .word 0x3c023b01
  .word 0x34421b50
  .word 0x44826000
  .word 0x10000005
  .word 0x26440044
  .word 0x3c023b80
  .word 0x34428081
  .word 0x44826000
  .word 0x26440044
  .word 0x0c1272ac
  .word 0x00000000
  .word 0x3c036c01
  .word 0x3c020100
  .word 0x346303fc
  .word 0x34420404
  .word 0x0003183c
  .word 0x0000202d
  .word 0x00431025
  .word 0x70441b89
  .word 0x8f82bd04
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0x24430010
  .word 0xaf83bd04
  .word 0xc64c001c
  .word 0x0c1272f4
  .word 0x8e44003c
  .word 0x92440028
  .word 0x3c026c03
  .word 0x344303fd
  .word 0x0000282d
  .word 0x3c020100
  .word 0x0003183c
  .word 0x34420404
  .word 0x00431825
  .word 0x30820007
  .word 0x70652389
  .word 0x8f83bd04
  .word 0x7c640000
  .word 0x8f83be14
  .word 0x10600004
  .word 0x00000000
  .word 0x30430004
  .word 0x10600007
  .word 0x00000000
  .word 0x8f83b0f8
  .word 0x10600097
  .word 0x00000000
  .word 0x30430004
  .word 0x10600094
  .word 0x00000000
  .word 0x3c040096
  .word 0x8f85bd04
  .word 0x78845930
  .word 0x3c030096
  .word 0x34420008
  .word 0x7ca40010
  .word 0x78635940
  .word 0x7ca30020
  .word 0x8f83bd04
  .word 0x24630030
  .word 0xaf83bd04
  .word 0x8f86bdbc
  .word 0x24050003
  .word 0xaf80be0c
  .word 0x10c5008f
  .word 0x0000202d
  .word 0x9f85be10
  .word 0x0004203c
  .word 0x0002103c
  .word 0x0004203e
  .word 0x0002103e
  .word 0x0005283c
  .word 0x00a42025
  .word 0x70822389
  .word 0x0003103c
  .word 0x0002103f
  .word 0x7c440000
  .word 0x8f82bd04
  .word 0x24430010
  .word 0xaf83bd04
  .word 0x8e420040
  .word 0x10400081
  .word 0x00000000
  .word 0x3c025000
  .word 0x0000202d
  .word 0x34420004
  .word 0x0002103c
  .word 0x70441389
  .word 0x0003283c
  .word 0x2404000e
  .word 0x0005283f
  .word 0x7ca20000
  .word 0x3c021000
  .word 0x0002183c
  .word 0x34028003
  .word 0x00431025
  .word 0x70821389
  .word 0x7ca20010
  .word 0xdf83bd50
  .word 0x24020047
  .word 0x70431389
  .word 0x7ca20020
  .word 0xdf83bd70
  .word 0x24020014
  .word 0x70431389
  .word 0x7ca20030
  .word 0xdf83bd68
  .word 0x24020008
  .word 0x70431389
  .word 0x7ca20040
  .word 0x8f82bd04
  .word 0x24430050
  .word 0xaf83bd04
  .word 0x92420028
  .word 0x30430020
  .word 0x30420018
  .word 0x00031943
  .word 0x00021083
  .word 0x00621025
  .word 0xa242002b
  .word 0x8e430004
  .word 0x9244002b
  .word 0x8f82be08
  .word 0x8c630018
  .word 0x00042080
  .word 0x00641821
  .word 0x8c640000
  .word 0x1044000e
  .word 0x00000000
  .word 0x0004103c
  .word 0x0000282d
  .word 0x0002103e
  .word 0x0002183c
  .word 0x3c025000
  .word 0x00621025
  .word 0x70a21b89
  .word 0x8f82bd04
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0xaf84be08
  .word 0x24430010
  .word 0xaf83bd04
  .word 0x8e440030
  .word 0x3c060200
  .word 0x8e430004
  .word 0x3c050300
  .word 0x3c025000
  .word 0x8c880000
  .word 0x8c670014
  .word 0x25040018
  .word 0x9d030020
  .word 0x00e63025
  .word 0x0006303c
  .word 0x00c52825
  .word 0x0003183c
  .word 0x00621025
  .word 0x70a22b89
  .word 0x8f83bd04
  .word 0x3c020001
  .word 0x7c650000
  .word 0x8f83bd04
  .word 0x24630010
  .word 0xaf83bd04
  .word 0x42000039
  .word 0x0000040f
  .word 0x40036000
  .word 0x00621824
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x8c820000
  .word 0x24420001
  .word 0xac820000
  .word 0x42000038
  .word 0x24020001
  .word 0x8c830004
  .word 0x24630001
  .word 0xac830004
  .word 0x8c830004
  .word 0x10620038
  .word 0x00000000
  .word 0x1000003a
  .word 0x24020001
  .word 0xdf83b0d0
  .word 0x2402ffef
  .word 0x00621024
  .word 0x1000fed9
  .word 0xff82b0d0
  .word 0xdf82bd68
  .word 0x34420001
  .word 0x1000fee0
  .word 0xff82bd68
  .word 0x8f82bdc8
  .word 0x1040feea
  .word 0x00000000
  .word 0x1000fee5
  .word 0xdf82bd50
  .word 0x3c030096
  .word 0x8f85bd04
  .word 0x78645910
  .word 0x3c030096
  .word 0x7ca40010
  .word 0x78635920
  .word 0x7ca30020
  .word 0x8f83bd04
  .word 0x24630030
  .word 0x1000ff6e
  .word 0xaf83bd04
  .word 0x24040020
  .word 0x1000ff70
  .word 0xaf84be0c
  .word 0x0003283c
  .word 0x3c025000
  .word 0x0005283f
  .word 0x34420002
  .word 0x7ca00000
  .word 0x0002103c
  .word 0x0000182d
  .word 0x7ca00010
  .word 0x70431389
  .word 0x7ca20020
  .word 0x2404000e
  .word 0x3c021000
  .word 0x0002183c
  .word 0x34028001
  .word 0x00431825
  .word 0x70831b89
  .word 0x7ca30030
  .word 0x24020047
  .word 0xdf83bd50
  .word 0x70431389
  .word 0x7ca20040
  .word 0x8f82bd04
  .word 0x24430050
  .word 0x1000ff86
  .word 0xaf83bd04
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000ffc6
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A1430 NONMATCHING

u32 FUN_004a1430(int param_1)

{
  u8 bVar1;
  short sVar3;
  int iVar4;
  int iVar5;
  u8 bVar6;
  u8 bVar7;
  u8 *puVar8;
  u8 bVar9;
  int iVar10;
  int iVar11;
  u32 *puVar12;
  u32 *puVar13;
  int iVar14;
  u8 *puVar15;
  u8 *puVar16;
  u8 *puVar17;
  u8 *puVar18;
  int iVar19;
  int iVar20;
  u32 uVar21;
  u32 uVar22;
  u32 uVar23;
  u8 *pbVar24;
  u32 *puVar25;
  u8 *puVar26;
  int iVar27;
  int iVar28;
  float *pfVar29;
  u32 *puVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  u8 bVar2;
  
  iVar33 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(iVar33 + 0x18);
  iVar5 = **(int **)(param_1 + 0x30);
  uVar23 = **(u32 **)(param_1 + 0xc);
  iVar10 = *(int *)(iVar5 + 0x24);
  if ((uVar23 & 2) == 0) {
    puVar17 = (u8 *)0x7bcac4;
    puVar16 = (u8 *)0x7bcac5;
    puVar15 = (u8 *)0x7bcac6;
    bVar1 = DAT_007bcac3;
    bVar2 = DAT_007bcac2;
  }
  else {
    puVar17 = (u8 *)DAT_007bcac9;
    puVar16 = (u8 *)DAT_007bcacc;
    puVar15 = (u8 *)DAT_007bcacf;
    bVar1 = DAT_007bcac8;
    bVar2 = DAT_007bcac7;
  }
  uVar21 = (u32)bVar1;
  if ((uVar23 & 1) == 0) {
    if ((uVar23 & 8) == 0) {
      iVar19 = 0;
    }
    else {
      iVar19 = 1;
    }
  }
  else {
    iVar19 = 2;
  }
  if ((uVar23 & 0x100) == 0) {
    iVar14 = **(int **)(param_1 + 0x2c);
    puVar18 = puVar16;
    puVar16 = puVar17;
  }
  else {
    iVar14 = 0x7bcac0;
    puVar18 = puVar17;
  }
  uVar23 = *(u32 *)(param_1 + 0x34) & 0x10;
  bVar9 = 0;
  if (((uVar23 != 0) && (uVar22 = *(u32 *)(*(int *)(param_1 + 4) + 0x20), (uVar22 & 1) != 0)) &&
     ((uVar22 & 8) == 0)) {
    bVar9 = 1;
  }
  bVar6 = 0;
  if (((uVar23 != 0) && (uVar23 = *(u32 *)(*(int *)(param_1 + 4) + 0x28), (uVar23 & 1) != 0)) &&
     ((uVar23 & 8) == 0)) {
    bVar6 = 1;
  }
  bVar7 = 0;
  if ((((*(u32 *)(param_1 + 0x34) & 0x20) != 0) &&
      (uVar23 = *(u32 *)(*(int *)(param_1 + 4) + 0x48), (uVar23 & 1) != 0)) && ((uVar23 & 8) == 0))
  {
    bVar7 = 1;
  }
  iVar11 = *(int *)(iVar4 + 0x5c) + *(short *)(iVar33 + 0x50) * 0x1c;
  if (bVar9) {
    iVar27 = *(int *)(iVar4 + 0x18);
    iVar32 = *(int *)(iVar11 + 0x14);
    iVar28 = *(int *)(iVar5 + 0xb0);
    if (1 < iVar27) {
      iVar28 = *(int *)(iVar5 + 0xb4);
    }
    puVar13 = (u32 *)(*(int *)(iVar5 + 0x20) + iVar28 * 0x10);
    uVar23 = 0;
    iVar28 = iVar10;
    uVar22 = uVar21;
    while (0 < iVar28) {
      if (*(int *)(iVar5 + 0x30) < iVar28) {
        iVar31 = *(int *)(iVar5 + 0xa8);
        if (1 < iVar27) {
          iVar31 = *(int *)(iVar5 + 0xac);
        }
        iVar20 = iVar28 - (iVar31 - iVar19);
      }
      else {
        iVar20 = 0;
        puVar13 = puVar13 + *(short *)(iVar5 + 0xbc) * -4;
        iVar31 = iVar28;
      }
      puVar12 = puVar13;
      if (iVar31 == 0) {
        iVar27 = *(int *)(iVar4 + 0x18);
      }
      else {
        do {
          iVar31 = iVar31 + -1;
          iVar28 = uVar22 << ((u8)puVar18[uVar23] & 0x1f);
          pbVar24 = puVar15 + uVar23;
          iVar27 = uVar22 << ((u8)puVar16[uVar23] & 0x1f);
          uVar23 = bVar2 >> (uVar23 << 1) & 3;
          uVar22 = uVar22 + *pbVar24;
          puVar25 = (u32 *)
                    (iVar32 + (iVar27 + (u32)*(u16 *)(iVar14 + iVar28 * 2) & 0xffff) * 0xc);
          *puVar12 = *puVar25;
          puVar12[1] = puVar25[1];
          puVar12[2] = puVar25[2];
          puVar12 = puVar12 + 3;
        } while (iVar31 != 0);
        iVar27 = *(int *)(iVar4 + 0x18);
      }
      sVar3 = *(short *)(iVar5 + 0xb8);
      uVar22 = uVar22 - iVar19;
      if (1 < iVar27) {
        sVar3 = *(short *)(iVar5 + 0xba);
      }
      puVar13 = puVar13 + sVar3 * 4;
      iVar28 = iVar20;
    }
  }
  if (bVar6) {
    iVar28 = *(int *)(iVar5 + 200);
    iVar27 = *(int *)(iVar4 + 0x18);
    iVar32 = *(int *)(iVar11 + 0x14);
    if (1 < iVar27) {
      iVar28 = *(int *)(iVar5 + 0xcc);
    }
    puVar13 = (u32 *)(*(int *)(iVar5 + 0x20) + iVar28 * 0x10);
    uVar22 = 0;
    iVar28 = iVar10;
    uVar23 = uVar21;
    while (0 < iVar28) {
      if (*(int *)(iVar5 + 0x30) < iVar28) {
        iVar31 = *(int *)(iVar5 + 0xc0);
        if (1 < iVar27) {
          iVar31 = *(int *)(iVar5 + 0xc4);
        }
        iVar20 = iVar28 - (iVar31 - iVar19);
      }
      else {
        iVar20 = 0;
        puVar13 = puVar13 + *(short *)(iVar5 + 0xd4) * -4;
        iVar31 = iVar28;
      }
      puVar12 = puVar13;
      if (iVar31 == 0) {
        iVar27 = *(int *)(iVar4 + 0x18);
      }
      else {
        do {
          iVar31 = iVar31 + -1;
          iVar28 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
          pbVar24 = puVar15 + uVar22;
          iVar27 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
          uVar22 = bVar2 >> (uVar22 << 1) & 3;
          uVar23 = uVar23 + *pbVar24;
          puVar25 = (u32 *)
                    (iVar32 + (iVar27 + (u32)*(u16 *)(iVar14 + iVar28 * 2) & 0xffff) * 0xc);
          *puVar12 = *puVar25;
          puVar12[1] = puVar25[1];
          puVar12[2] = puVar25[2];
          puVar12[3] = 0;
          puVar12 = puVar12 + 4;
        } while (iVar31 != 0);
        iVar27 = *(int *)(iVar4 + 0x18);
      }
      sVar3 = *(short *)(iVar5 + 0xd0);
      uVar23 = uVar23 - iVar19;
      if (1 < iVar27) {
        sVar3 = *(short *)(iVar5 + 0xd2);
      }
      puVar13 = puVar13 + sVar3 * 4;
      iVar28 = iVar20;
    }
  }
  if (bVar7) {
    iVar32 = *(int *)(iVar5 + 0x128);
    iVar27 = *(int *)(iVar4 + 0x18);
    iVar11 = *(int *)(iVar11 + 0x18);
    if (1 < iVar27) {
      iVar32 = *(int *)(iVar5 + 300);
    }
    puVar26 = (u8 *)(*(int *)(iVar5 + 0x20) + iVar32 * 0x10);
    uVar22 = 0;
    iVar32 = iVar10;
    uVar23 = uVar21;
    while (0 < iVar32) {
      if (*(int *)(iVar5 + 0x30) < iVar32) {
        iVar28 = *(int *)(iVar5 + 0x120);
        if (1 < iVar27) {
          iVar28 = *(int *)(iVar5 + 0x124);
        }
        iVar31 = iVar32 - (iVar28 - iVar19);
      }
      else {
        iVar31 = 0;
        puVar26 = puVar26 + *(short *)(iVar5 + 0x134) * -0x10;
        iVar28 = iVar32;
      }
      if ((*(u32 *)(iVar4 + 8) & 0x10) == 0) {
        puVar8 = puVar26;
        if ((*(u32 *)(*(int *)(param_1 + 4) + 0x48) & 0x2000) == 0) {
          for (; iVar28 != 0; iVar28 = iVar28 + -1) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8 = puVar8 + 4;
          }
        }
        else {
          for (; iVar28 != 0; iVar28 = iVar28 + -1) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8 = puVar8 + 3;
          }
        }
      }
      else {
        puVar8 = puVar26;
        if ((*(u32 *)(*(int *)(param_1 + 4) + 0x48) & 0x2000) == 0) {
          for (; iVar28 != 0; iVar28 = iVar28 + -1) {
            iVar32 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
            pbVar24 = puVar15 + uVar22;
            iVar27 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
            uVar22 = bVar2 >> (uVar22 << 1) & 3;
            uVar23 = uVar23 + *pbVar24;
            pfVar29 = (float *)(iVar11 + (iVar27 + (u32)*(u16 *)(iVar14 + iVar32 * 2)) * 0xc);
            *puVar8 = (char)(int)(*pfVar29 * 127.0);
            puVar8[1] = (char)(int)(pfVar29[1] * 127.0);
            puVar8[2] = (char)(int)(pfVar29[2] * 127.0);
            puVar8[3] = 0;
            puVar8 = puVar8 + 4;
          }
        }
        else {
          for (; iVar28 != 0; iVar28 = iVar28 + -1) {
            iVar32 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
            pbVar24 = puVar15 + uVar22;
            iVar27 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
            uVar22 = bVar2 >> (uVar22 << 1) & 3;
            uVar23 = uVar23 + *pbVar24;
            pfVar29 = (float *)(iVar11 + (iVar27 + (u32)*(u16 *)(iVar14 + iVar32 * 2)) * 0xc);
            *puVar8 = (char)(int)(*pfVar29 * 127.0);
            puVar8[1] = (char)(int)(pfVar29[1] * 127.0);
            puVar8[2] = (char)(int)(pfVar29[2] * 127.0);
            puVar8 = puVar8 + 3;
          }
        }
      }
      iVar27 = *(int *)(iVar4 + 0x18);
      sVar3 = *(short *)(iVar5 + 0x130);
      uVar23 = uVar23 - iVar19;
      if (1 < iVar27) {
        sVar3 = *(short *)(iVar5 + 0x132);
      }
      puVar26 = puVar26 + sVar3 * 0x10;
      iVar32 = iVar31;
    }
  }
  *(int *)(iVar5 + 0x3c) = (int)*(short *)(iVar33 + 0x50);
  *(int *)(iVar5 + 0x40) = (int)*(short *)(iVar33 + 0x52);
  *(u32 *)(iVar5 + 0x44) = *(u32 *)(iVar4 + 0x18);
  if (1 < *(int *)(iVar4 + 0x18)) {
    iVar33 = *(int *)(iVar4 + 0x5c) + *(short *)(iVar33 + 0x52) * 0x1c;
    if (bVar9) {
      uVar22 = 0;
      iVar11 = *(int *)(iVar33 + 0x14);
      puVar13 = (u32 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x1a4) * 0x10);
      iVar27 = iVar10;
      uVar23 = uVar21;
      while (0 < iVar27) {
        if (*(int *)(iVar5 + 0x30) < iVar27) {
          iVar32 = *(int *)(iVar5 + 0x19c);
          iVar28 = iVar27 - (iVar32 - iVar19);
        }
        else {
          iVar28 = 0;
          puVar13 = puVar13 + *(short *)(iVar5 + 0x1ac) * -4;
          iVar32 = iVar27;
        }
        puVar12 = puVar13;
        if (iVar32 == 0) {
          sVar3 = *(short *)(iVar5 + 0x1aa);
        }
        else {
          do {
            iVar32 = iVar32 + -1;
            iVar31 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
            pbVar24 = puVar15 + uVar22;
            iVar27 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
            uVar22 = bVar2 >> (uVar22 << 1) & 3;
            uVar23 = uVar23 + *pbVar24;
            puVar25 = (u32 *)
                      (iVar11 + (iVar27 + (u32)*(u16 *)(iVar14 + iVar31 * 2) & 0xffff) * 0xc);
            *puVar12 = *puVar25;
            puVar12[1] = puVar25[1];
            puVar12[2] = puVar25[2];
            puVar12 = puVar12 + 3;
          } while (iVar32 != 0);
          sVar3 = *(short *)(iVar5 + 0x1aa);
        }
        uVar23 = uVar23 - iVar19;
        puVar13 = puVar13 + sVar3 * 4;
        iVar27 = iVar28;
      }
    }
    if (bVar7) {
      uVar22 = 0;
      iVar33 = *(int *)(iVar33 + 0x18);
      puVar26 = (u8 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x1bc) * 0x10);
      iVar11 = iVar10;
      uVar23 = uVar21;
      while (0 < iVar11) {
        if (*(int *)(iVar5 + 0x30) < iVar11) {
          iVar27 = *(int *)(iVar5 + 0x1b4);
          iVar32 = iVar11 - (iVar27 - iVar19);
        }
        else {
          iVar32 = 0;
          puVar26 = puVar26 + *(short *)(iVar5 + 0x1c4) * -0x10;
          iVar27 = iVar11;
        }
        if ((*(u32 *)(iVar4 + 8) & 0x10) == 0) {
          puVar8 = puVar26;
          if ((*(u32 *)(*(int *)(param_1 + 4) + 0x78) & 0x2000) == 0) {
            for (; iVar27 != 0; iVar27 = iVar27 + -1) {
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar8[3] = 0;
              puVar8 = puVar8 + 4;
            }
          }
          else {
            for (; iVar27 != 0; iVar27 = iVar27 + -1) {
              *puVar8 = 0;
              puVar8[1] = 0;
              puVar8[2] = 0;
              puVar8 = puVar8 + 3;
            }
          }
        }
        else {
          puVar8 = puVar26;
          if ((*(u32 *)(*(int *)(param_1 + 4) + 0x78) & 0x2000) == 0) {
            for (; iVar27 != 0; iVar27 = iVar27 + -1) {
              iVar28 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
              pbVar24 = puVar15 + uVar22;
              iVar11 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
              uVar22 = bVar2 >> (uVar22 << 1) & 3;
              uVar23 = uVar23 + *pbVar24;
              pfVar29 = (float *)(iVar33 + (iVar11 + (u32)*(u16 *)(iVar14 + iVar28 * 2)) * 0xc);
              *puVar8 = (char)(int)(*pfVar29 * 127.0);
              puVar8[1] = (char)(int)(pfVar29[1] * 127.0);
              puVar8[2] = (char)(int)(pfVar29[2] * 127.0);
              puVar8[3] = 0;
              puVar8 = puVar8 + 4;
            }
          }
          else {
            for (; iVar27 != 0; iVar27 = iVar27 + -1) {
              iVar28 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
              pbVar24 = puVar15 + uVar22;
              iVar11 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
              uVar22 = bVar2 >> (uVar22 << 1) & 3;
              uVar23 = uVar23 + *pbVar24;
              pfVar29 = (float *)(iVar33 + (iVar11 + (u32)*(u16 *)(iVar14 + iVar28 * 2)) * 0xc);
              *puVar8 = (char)(int)(*pfVar29 * 127.0);
              puVar8[1] = (char)(int)(pfVar29[1] * 127.0);
              puVar8[2] = (char)(int)(pfVar29[2] * 127.0);
              puVar8 = puVar8 + 3;
            }
          }
        }
        uVar23 = uVar23 - iVar19;
        puVar26 = puVar26 + *(short *)(iVar5 + 0x1c2) * 0x10;
        iVar11 = iVar32;
      }
    }
  }
  if (((((*(u32 *)(param_1 + 0x34) & 0x180) != 0) &&
       (uVar23 = *(u32 *)(*(int *)(param_1 + 4) + 0x30), (uVar23 & 1) != 0)) && ((uVar23 & 8) == 0)
      ) && ((*(u32 *)(iVar4 + 8) & 0x84) != 0)) {
    iVar27 = *(int *)(iVar5 + 0xe0);
    iVar33 = *(int *)(iVar4 + 0x18);
    iVar11 = *(int *)(iVar4 + 0x34);
    if (1 < iVar33) {
      iVar27 = *(int *)(iVar5 + 0xe4);
    }
    puVar13 = (u32 *)(*(int *)(iVar5 + 0x20) + iVar27 * 0x10);
    uVar22 = 0;
    iVar27 = iVar10;
    uVar23 = uVar21;
    while (0 < iVar27) {
      if (*(int *)(iVar5 + 0x30) < iVar27) {
        iVar32 = *(int *)(iVar5 + 0xd8);
        if (1 < iVar33) {
          iVar32 = *(int *)(iVar5 + 0xdc);
        }
        iVar28 = iVar27 - (iVar32 - iVar19);
      }
      else {
        iVar28 = 0;
        puVar13 = puVar13 + *(short *)(iVar5 + 0xec) * -4;
        iVar32 = iVar27;
      }
      puVar12 = puVar13;
      if (iVar32 == 0) {
        iVar33 = *(int *)(iVar4 + 0x18);
      }
      else {
        do {
          iVar32 = iVar32 + -1;
          iVar27 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
          pbVar24 = puVar15 + uVar22;
          iVar33 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
          uVar22 = bVar2 >> (uVar22 << 1) & 3;
          uVar23 = uVar23 + *pbVar24;
          puVar25 = (u32 *)
                    (iVar11 + (iVar33 + (u32)*(u16 *)(iVar14 + iVar27 * 2) & 0xffff) * 8);
          *puVar12 = *puVar25;
          puVar12[1] = puVar25[1];
          puVar12 = puVar12 + 2;
        } while (iVar32 != 0);
        iVar33 = *(int *)(iVar4 + 0x18);
      }
      sVar3 = *(short *)(iVar5 + 0xe8);
      uVar23 = uVar23 - iVar19;
      if (1 < iVar33) {
        sVar3 = *(short *)(iVar5 + 0xea);
      }
      puVar13 = puVar13 + sVar3 * 4;
      iVar27 = iVar28;
    }
  }
  if ((((*(u32 *)(param_1 + 0x34) & 0x180) != 0) &&
      (uVar23 = *(u32 *)(*(int *)(param_1 + 4) + 0x38), (uVar23 & 1) != 0)) &&
     (((uVar23 & 8) == 0 && ((*(u32 *)(iVar4 + 8) & 0x84) != 0)))) {
    iVar33 = *(int *)(iVar4 + 0x34);
    iVar11 = iVar33;
    if ((*(u32 *)(iVar4 + 8) & 0x80) != 0) {
      iVar11 = *(int *)(iVar4 + 0x38);
    }
    iVar32 = *(int *)(iVar5 + 0xf8);
    iVar27 = *(int *)(iVar4 + 0x18);
    if (1 < iVar27) {
      iVar32 = *(int *)(iVar5 + 0xfc);
    }
    puVar13 = (u32 *)(*(int *)(iVar5 + 0x20) + iVar32 * 0x10);
    uVar22 = 0;
    iVar32 = iVar10;
    uVar23 = uVar21;
    while (0 < iVar32) {
      if (*(int *)(iVar5 + 0x30) < iVar32) {
        iVar28 = *(int *)(iVar5 + 0xf0);
        if (1 < iVar27) {
          iVar28 = *(int *)(iVar5 + 0xf4);
        }
        iVar31 = iVar32 - (iVar28 - iVar19);
      }
      else {
        iVar31 = 0;
        puVar13 = puVar13 + *(short *)(iVar5 + 0x104) * -4;
        iVar28 = iVar32;
      }
      puVar12 = puVar13;
      if (iVar28 == 0) {
        iVar27 = *(int *)(iVar4 + 0x18);
      }
      else {
        do {
          iVar28 = iVar28 + -1;
          iVar32 = uVar23 << ((u8)puVar18[uVar22] & 0x1f);
          pbVar24 = puVar15 + uVar22;
          iVar27 = uVar23 << ((u8)puVar16[uVar22] & 0x1f);
          uVar22 = bVar2 >> (uVar22 << 1) & 3;
          uVar23 = uVar23 + *pbVar24;
          iVar27 = (iVar27 + (u32)*(u16 *)(iVar14 + iVar32 * 2) & 0xffff) * 8;
          puVar30 = (u32 *)(iVar33 + iVar27);
          puVar25 = (u32 *)(iVar11 + iVar27);
          *puVar12 = *puVar30;
          puVar12[1] = puVar30[1];
          puVar12[2] = *puVar25;
          puVar12[3] = puVar25[1];
          puVar12 = puVar12 + 4;
        } while (iVar28 != 0);
        iVar27 = *(int *)(iVar4 + 0x18);
      }
      sVar3 = *(short *)(iVar5 + 0x100);
      uVar23 = uVar23 - iVar19;
      if (1 < iVar27) {
        sVar3 = *(short *)(iVar5 + 0x102);
      }
      puVar13 = puVar13 + sVar3 * 4;
      iVar32 = iVar31;
    }
  }
  if ((((*(u32 *)(param_1 + 0x34) & 0x40) != 0) &&
      (uVar23 = *(u32 *)(*(int *)(param_1 + 4) + 0x40), (uVar23 & 1) != 0)) && ((uVar23 & 8) == 0))
  {
    iVar27 = *(int *)(iVar5 + 0x110);
    iVar33 = *(int *)(iVar4 + 0x18);
    iVar11 = *(int *)(iVar4 + 0x30);
    if (1 < iVar33) {
      iVar27 = *(int *)(iVar5 + 0x114);
    }
    puVar13 = (u32 *)(*(int *)(iVar5 + 0x20) + iVar27 * 0x10);
    uVar23 = 0;
    while (0 < iVar10) {
      if (*(int *)(iVar5 + 0x30) < iVar10) {
        iVar27 = *(int *)(iVar5 + 0x108);
        if (1 < iVar33) {
          iVar27 = *(int *)(iVar5 + 0x10c);
        }
        iVar32 = iVar10 - (iVar27 - iVar19);
      }
      else {
        iVar32 = 0;
        puVar13 = puVar13 + *(short *)(iVar5 + 0x11c) * -4;
        iVar27 = iVar10;
      }
      puVar12 = puVar13;
      if ((*(u32 *)(iVar4 + 8) & 8) == 0) {
        for (; iVar27 != 0; iVar27 = iVar27 + -1) {
          *puVar12 = 0xff000000;
          puVar12 = puVar12 + 1;
        }
      }
      else {
        for (; iVar27 != 0; iVar27 = iVar27 + -1) {
          pbVar24 = puVar15 + uVar23;
          iVar33 = uVar21 << ((u8)puVar18[uVar23] & 0x1f);
          iVar10 = uVar21 << ((u8)puVar16[uVar23] & 0x1f);
          uVar23 = bVar2 >> (uVar23 << 1) & 3;
          uVar21 = uVar21 + *pbVar24;
          *puVar12 = *(u32 *)
                      (iVar11 + (iVar10 + (u32)*(u16 *)(iVar14 + iVar33 * 2) & 0xffff) * 4);
          puVar12 = puVar12 + 1;
        }
      }
      iVar33 = *(int *)(iVar4 + 0x18);
      sVar3 = *(short *)(iVar5 + 0x118);
      uVar21 = uVar21 - iVar19;
      if (1 < iVar33) {
        sVar3 = *(short *)(iVar5 + 0x11a);
      }
      puVar13 = puVar13 + sVar3 * 4;
      iVar10 = iVar32;
    }
  }
  return 1;
}

// FUN_004A24A0
asm void FUN_004a24a0(int param_1,int param_2)
{
  .set noreorder
  .word 0x2783af20
  .word 0x3c080096
  .word 0xaca30010
  .word 0x25080070
  .word 0x3c030078
  .word 0x2463dec0
  .word 0xaca3000c
  .word 0x8c87002c
  .word 0x2403ff00
  .word 0x8ca6000c
  .word 0xacc70008
  .word 0x8ca6000c
  .word 0xacc0000c
  .word 0x8ca6000c
  .word 0xacc00000
  .word 0x8f89bb60
  .word 0x8caa000c
  .word 0x90870024
  .word 0x01094021
  .word 0x8d460000
  .word 0x00e83821
  .word 0x90e70027
  .word 0x00c31824
  .word 0x00671825
  .word 0xad430000
  .word 0x8c830028
  .word 0x1060000c
  .word 0x00000000
  .word 0x8ca60010
  .word 0x3c030078
  .word 0x2463dee0
  .word 0xacc00004
  .word 0x8ca5000c
  .word 0xaca30018
  .word 0x8c830028
  .word 0xaca30010
  .word 0x8c83002c
  .word 0x10000006
  .word 0xaca30014
  .word 0x8ca6000c
  .word 0x8cc30000
  .word 0x34630100
  .word 0x1000fff1
  .word 0xacc30000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A2560
asm void FUN_004a2560(u64 param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8c900008
  .word 0x0240282d
  .word 0x0c128928
  .word 0x0200202d
  .word 0x3c030007
  .word 0x3c020096
  .word 0x3463fff8
  .word 0xae430014
  .word 0x8c420070
  .word 0x8e050004
  .word 0x10a0002c
  .word 0x24460020
  .word 0x0c130bcc
  .word 0x8e240000
  .word 0x8e030000
  .word 0x30630004
  .word 0x14600028
  .word 0x24020001
  .word 0x8e43000c
  .word 0x0002103c
  .word 0x24060001
  .word 0x8c670000
  .word 0x30e30001
  .word 0x10660023
  .word 0x0002103f
  .word 0x30e300ff
  .word 0x10600025
  .word 0x00000000
  .word 0x30e30002
  .word 0x24050002
  .word 0x10650021
  .word 0x00000000
  .word 0x30e40010
  .word 0x24030010
  .word 0x10830023
  .word 0x00000000
  .word 0x30e40008
  .word 0x24030008
  .word 0x14830006
  .word 0x00000000
  .word 0xa2450029
  .word 0x9383be04
  .word 0x34630010
  .word 0x10000005
  .word 0xa2430028
  .word 0xa2460029
  .word 0x9383be04
  .word 0x34630014
  .word 0xa2430028
  .word 0x24030002
  .word 0x14430018
  .word 0x00000000
  .word 0x24020001
  .word 0x10000019
  .word 0xa242002a
  .word 0x1000ffd6
  .word 0xae260000
  .word 0x1000ffd8
  .word 0x24020002
  .word 0x24030004
  .word 0xa2430029
  .word 0x9383be04
  .word 0x1000fff2
  .word 0xa2430028
  .word 0x24030003
  .word 0xa2430029
  .word 0x9383be04
  .word 0x34630004
  .word 0x1000ffec
  .word 0xa2430028
  .word 0x24030004
  .word 0xa2430029
  .word 0x9383be04
  .word 0x1000ffe7
  .word 0xa2430028
  .word 0x92420028
  .word 0x34420002
  .word 0x1000ffe6
  .word 0xa2420028
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

#pragma schedule on
// FUN_004A26D0
asm int FUN_004a26d0(int param_1,int *param_2,int param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x00e0802d
  .word 0x0000202d
  .word 0x0c135674
  .word 0x24050080
  .word 0x26240018
  .word 0x0c1357f8
  .word 0x0000282d
  .word 0xae420000
  .word 0x8e420000
  .word 0xac400004
  .word 0x8e420000
  .word 0xac400000
  .word 0x8e630008
  .word 0x8e420000
  .word 0xac43000c
  .word 0x8e420000
  .word 0xac510008
  .word 0x8e420000
  .word 0xac400010
  .word 0x8e420000
  .word 0xac500014
  .word 0x8e420000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x08128aec
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x27bdffe0
  .word 0x2405000d
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c135674
  .word 0x0000202d
  .word 0x3c021000
  .word 0x0000182d
  .word 0x3442000a
  .word 0x70623389
  .word 0x8f84bd04
  .word 0x3c036c01
  .word 0x3c020100
  .word 0x346303fa
  .word 0x34420404
  .word 0x0003183c
  .word 0x0000282d
  .word 0x00431025
  .word 0x7c860000
  .word 0x70451389
  .word 0x7c820010
  .word 0x8f83bd04
  .word 0x8f82bdc8
  .word 0x24630020
  .word 0xaf83bd04
  .word 0x92040047
  .word 0x388400ff
  .word 0x0004202b
  .word 0x00821025
  .word 0x10400005
  .word 0xaf84bdc4
  .word 0xdf82b0d0
  .word 0x34420040
  .word 0x10000005
  .word 0xff82b0d0
  .word 0xdf84b0d0
  .word 0x2402ffbf
  .word 0x00821024
  .word 0xff82b0d0
  .word 0x3c020096
  .word 0x3c04fc00
  .word 0xdc4758a0
  .word 0xdf85b0d0
  .word 0x34827fff
  .word 0x92040029
  .word 0x0002303c
  .word 0x3402ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00463025
  .word 0x3c020096
  .word 0x0004203c
  .word 0xdc4258a8
  .word 0x0004203f
  .word 0x00a42025
  .word 0x0004203c
  .word 0x0004203f
  .word 0x70063389
  .word 0x308407ff
  .word 0x00e63024
  .word 0x000423fc
  .word 0x00c42025
  .word 0x70443389
  .word 0x3c020096
  .word 0x0003203c
  .word 0x7c4658a0
  .word 0x0004203f
  .word 0x3c026c01
  .word 0x7c860000
  .word 0x344203fb
  .word 0x0000302d
  .word 0x0002183c
  .word 0x3c020100
  .word 0x34420404
  .word 0x00431025
  .word 0x70461389
  .word 0x7c820010
  .word 0x8f83bd04
  .word 0x30a20010
  .word 0x24630020
  .word 0x10400006
  .word 0xaf83bd04
  .word 0x3c023b01
  .word 0x34421b50
  .word 0x44826000
  .word 0x10000005
  .word 0x26040044
  .word 0x3c023b80
  .word 0x34428081
  .word 0x44826000
  .word 0x26040044
  .word 0x0c1272ac
  .word 0x00000000
  .word 0x3c036c01
  .word 0x3c020100
  .word 0x346303fc
  .word 0x34420404
  .word 0x0003183c
  .word 0x0000202d
  .word 0x00431025
  .word 0x70441b89
  .word 0x8f82bd04
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0x24430010
  .word 0xaf83bd04
  .word 0xc60c001c
  .word 0x0c1272f4
  .word 0x8e04003c
  .word 0x92040028
  .word 0x3c026c03
  .word 0x344303fd
  .word 0x0000282d
  .word 0x3c020100
  .word 0x0003183c
  .word 0x34420404
  .word 0x00431825
  .word 0x30820007
  .word 0x70652389
  .word 0x8f83bd04
  .word 0x7c640000
  .word 0x8f83be14
  .word 0x10600004
  .word 0x00000000
  .word 0x30430004
  .word 0x10600007
  .word 0x00000000
  .word 0x8f83b0f8
  .word 0x1060006c
  .word 0x00000000
  .word 0x30430004
  .word 0x10600069
  .word 0x00000000
  .word 0x3c040096
  .word 0x8f85bd04
  .word 0x78845930
  .word 0x3c030096
  .word 0x34420008
  .word 0x7ca40010
  .word 0x78635940
  .word 0x7ca30020
  .word 0x8f83bd04
  .word 0x24630030
  .word 0xaf83bd04
  .word 0x8f86bdbc
  .word 0x24050003
  .word 0xaf80be0c
  .word 0x10c50064
  .word 0x0000202d
  .word 0x9f85be10
  .word 0x0004203c
  .word 0x0002103c
  .word 0x0004203e
  .word 0x0002103e
  .word 0x0005283c
  .word 0x00a42025
  .word 0x70822389
  .word 0x0003103c
  .word 0x0002103f
  .word 0x7c440000
  .word 0x8f82bd04
  .word 0x24430010
  .word 0xaf83bd04
  .word 0x92020028
  .word 0x30430020
  .word 0x30420018
  .word 0x00031943
  .word 0x00021083
  .word 0x00621025
  .word 0xa202002b
  .word 0x8e030004
  .word 0x9204002b
  .word 0x8f82be08
  .word 0x8c630018
  .word 0x00042080
  .word 0x00641821
  .word 0x8c640000
  .word 0x1044000e
  .word 0x00000000
  .word 0x0004103c
  .word 0x0000282d
  .word 0x0002103e
  .word 0x0002183c
  .word 0x3c025000
  .word 0x00621025
  .word 0x70a21b89
  .word 0x8f82bd04
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0xaf84be08
  .word 0x24430010
  .word 0xaf83bd04
  .word 0x8e030030
  .word 0x24040001
  .word 0x3c060200
  .word 0x3c050300
  .word 0x3c025000
  .word 0x8c630000
  .word 0xac64001c
  .word 0x8e040030
  .word 0x8e030004
  .word 0x8c880000
  .word 0x8c670014
  .word 0x25040018
  .word 0x9d030020
  .word 0x00e63025
  .word 0x0006303c
  .word 0x00c52825
  .word 0x0003183c
  .word 0x00621025
  .word 0x70a22b89
  .word 0x8f83bd04
  .word 0x3c020001
  .word 0x7c650000
  .word 0x8f83bd04
  .word 0x24630010
  .word 0xaf83bd04
  .word 0x42000039
  .word 0x0000040f
  .word 0x40036000
  .word 0x00621824
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x8c820000
  .word 0x24420001
  .word 0xac820000
  .word 0x42000038
  .word 0x24020001
  .word 0x8c830004
  .word 0x24630001
  .word 0xac830004
  .word 0x8c830004
  .word 0x10620011
  .word 0x00000000
  .word 0x10000013
  .word 0x24020001
  .word 0x3c030096
  .word 0x8f85bd04
  .word 0x78645910
  .word 0x3c030096
  .word 0x7ca40010
  .word 0x78635920
  .word 0x7ca30020
  .word 0x8f83bd04
  .word 0x24630030
  .word 0x1000ff99
  .word 0xaf83bd04
  .word 0x24040020
  .word 0x1000ff9b
  .word 0xaf84be0c
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000ffed
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x24020001
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule off

// FUN_004A2BB0
asm u32 FUN_004a2bb0(int param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830030
  .word 0x8c82000c
  .word 0x8c860008
  .word 0x8c630000
  .word 0x8c470000
  .word 0x8c720024
  .word 0x30e20002
  .word 0x1040000c
  .word 0x24650018
  .word 0x3c03007c
  .word 0x3c02007c
  .word 0x9079cae7
  .word 0x3c0c007c
  .word 0x904fcae8
  .word 0x3c0b007c
  .word 0x3c0a007c
  .word 0x258ccae9
  .word 0x256bcaec
  .word 0x1000000b
  .word 0x254acaef
  .word 0x3c03007c
  .word 0x3c02007c
  .word 0x9079cae2
  .word 0x3c0c007c
  .word 0x904fcae3
  .word 0x3c0b007c
  .word 0x3c0a007c
  .word 0x258ccae4
  .word 0x256bcae5
  .word 0x254acae6
  .word 0x30e20001
  .word 0x144000f9
  .word 0x00000000
  .word 0x30e20008
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x240d0001
  .word 0x0000682d
  .word 0x30e20100
  .word 0x14400007
  .word 0x00000000
  .word 0x8c82002c
  .word 0x0180182d
  .word 0x0160602d
  .word 0x8c490000
  .word 0x10000003
  .word 0x0060582d
  .word 0x3c09007c
  .word 0x2529cae0
  .word 0x8c820034
  .word 0x30420010
  .word 0x1040004a
  .word 0x00000000
  .word 0x8cc20000
  .word 0x30420008
  .word 0x10400046
  .word 0x00000000
  .word 0x8ca70098
  .word 0x0000702d
  .word 0x8ca20008
  .word 0x01e0c02d
  .word 0x8cc3000c
  .word 0x0240882d
  .word 0x00073900
  .word 0x00474021
  .word 0x1a40003c
  .word 0x0100382d
  .word 0x27a20084
  .word 0x27b70088
  .word 0x8cb00018
  .word 0x0211082a
  .word 0x14200008
  .word 0x00000000
  .word 0x84a700a4
  .word 0x0220802d
  .word 0x0000882d
  .word 0x00073900
  .word 0x01074023
  .word 0x10000005
  .word 0x0100382d
  .word 0x8cb00090
  .word 0x020d9823
  .word 0x02338823
  .word 0x00000000
  .word 0x0200982d
  .word 0x126000c4
  .word 0x2610ffff
  .word 0x00000000
  .word 0x018e9821
  .word 0x92760000
  .word 0x016e9821
  .word 0x02d8b004
  .word 0x92750000
  .word 0x0016b040
  .word 0x0136b021
  .word 0x014e9821
  .word 0x02b8a804
  .word 0x92740000
  .word 0x000e7040
  .word 0x01d97006
  .word 0x31ce0003
  .word 0x0314c021
  .word 0x0200982d
  .word 0x96d40000
  .word 0x2610ffff
  .word 0x02b4a021
  .word 0x3295ffff
  .word 0x0015a0c0
  .word 0x0295a021
  .word 0x0014a080
  .word 0x0074a021
  .word 0xc6810004
  .word 0xc6800008
  .word 0xc6820000
  .word 0xe7a10084
  .word 0xe7a00088
  .word 0xc4410000
  .word 0xc6e00000
  .word 0xe4e20000
  .word 0xe7a20080
  .word 0xe4e10004
  .word 0xe4e00008
  .word 0x1660ffdd
  .word 0x24e7000c
  .word 0x1000009e
  .word 0x84a700a0
  .word 0x8c820034
  .word 0x30420080
  .word 0x10400043
  .word 0x00000000
  .word 0x8cc20000
  .word 0x30420001
  .word 0x1040003f
  .word 0x00000000
  .word 0x8ca300c8
  .word 0x0000882d
  .word 0x8ca20008
  .word 0x01e0982d
  .word 0x8cc8000c
  .word 0x0240802d
  .word 0x00031900
  .word 0x0043a821
  .word 0x1a400035
  .word 0x02a0a02d
  .word 0x8ca20018
  .word 0x0050082a
  .word 0x14200009
  .word 0x00000000
  .word 0x84a200d4
  .word 0x0200702d
  .word 0x0000802d
  .word 0x00021100
  .word 0x02a2a823
  .word 0x10000006
  .word 0x02a0a02d
  .word 0x00000000
  .word 0x8cae00c0
  .word 0x01cd1023
  .word 0x02028023
  .word 0x00000000
  .word 0x01c0102d
  .word 0x10400080
  .word 0x25ceffff
  .word 0x00000000
  .word 0x01911021
  .word 0x90470000
  .word 0x01c0b02d
  .word 0x25ceffff
  .word 0x01711021
  .word 0x00f33804
  .word 0x90430000
  .word 0x00073840
  .word 0x01273821
  .word 0x01511021
  .word 0x00731804
  .word 0x90420000
  .word 0x00118840
  .word 0x02398806
  .word 0x32310003
  .word 0x02629821
  .word 0x94e20000
  .word 0x00621021
  .word 0x3043ffff
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021080
  .word 0x01021021
  .word 0xc440001c
  .word 0xe6800000
  .word 0xc4400020
  .word 0xe6800004
  .word 0x16c0ffe4
  .word 0x26940008
  .word 0x10000061
  .word 0x84a200d0
  .word 0x00000000
  .word 0x8c820034
  .word 0x30420040
  .word 0x10400069
  .word 0x00000000
  .word 0x8cc20000
  .word 0x30420010
  .word 0x10400065
  .word 0x00000000
  .word 0x8ca300f8
  .word 0x0000802d
  .word 0x8ca20008
  .word 0x8cc8000c
  .word 0x00031900
  .word 0x00439821
  .word 0x1a40005d
  .word 0x0260882d
  .word 0x27a7008d
  .word 0x27a6008e
  .word 0x27a4008f
  .word 0x8ca20018
  .word 0x0052082a
  .word 0x14200008
  .word 0x00000000
  .word 0x84a20104
  .word 0x0240702d
  .word 0x0000902d
  .word 0x00021100
  .word 0x02629823
  .word 0x10000005
  .word 0x0260882d
  .word 0x8cae00f0
  .word 0x01cd1023
  .word 0x02429023
  .word 0x00000000
  .word 0x01c0102d
  .word 0x10400042
  .word 0x25ceffff
  .word 0x00000000
  .word 0x01901021
  .word 0x90430000
  .word 0x0150a021
  .word 0x92950000
  .word 0x006f1804
  .word 0x01701021
  .word 0x00031840
  .word 0x90420000
  .word 0x01231821
  .word 0x00108040
  .word 0x94630000
  .word 0x02198006
  .word 0x01c0a02d
  .word 0x32100003
  .word 0x25ceffff
  .word 0x004f1004
  .word 0x01f57821
  .word 0x00431021
  .word 0x3043ffff
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021080
  .word 0x01021021
  .word 0x9056000c
  .word 0x9055000d
  .word 0x9043000e
  .word 0xa3b6008c
  .word 0xa3b5008d
  .word 0x9042000f
  .word 0xa3a3008e
  .word 0x90f60000
  .word 0x90c30000
  .word 0x93b5008c
  .word 0xa3a2008f
  .word 0x90820000
  .word 0x0016b200
  .word 0x00031c00
  .word 0x02b6a825
  .word 0x00751825
  .word 0x00021600
  .word 0x00431025
  .word 0xae220000
  .word 0x1680ffd5
  .word 0x26310004
  .word 0x10000014
  .word 0x84a20100
  .word 0x1000ff0d
  .word 0x240d0002
  .word 0x84a700a0
  .word 0x030dc023
  .word 0x00073900
  .word 0x01074021
  .word 0x1e20ff26
  .word 0x0100382d
  .word 0x1000ff5d
  .word 0x00000000
  .word 0x84a200d0
  .word 0x026d9823
  .word 0x00021100
  .word 0x02a2a821
  .word 0x1e00ff69
  .word 0x02a0a02d
  .word 0x1000ff9b
  .word 0x00000000
  .word 0x84a20100
  .word 0x01ed7823
  .word 0x00021100
  .word 0x02629821
  .word 0x1e40ffa8
  .word 0x0260882d
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x24020001
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A30D0
asm u64 FUN_004a30d0(int param_1)
{
  .set noreorder
  .word 0x27bdfa80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c910014
  .word 0x0c13cfdc
  .word 0x0000802d
  .word 0x104000fd
  .word 0x00000000
  .word 0x8c430038
  .word 0xa22300b6
  .word 0x922300b6
  .word 0x1060004e
  .word 0x00000000
  .word 0x8c430030
  .word 0xae2300bc
  .word 0x8c430034
  .word 0xae2301f4
  .word 0x8c43003c
  .word 0xae2300b0
  .word 0x8e2300b0
  .word 0x10600047
  .word 0x00000000
  .word 0xa22000b5
  .word 0x0000902d
  .word 0x0040c82d
  .word 0x0220c02d
  .word 0x3c0c6800
  .word 0x3c0b6d00
  .word 0x3c0a6400
  .word 0x3c096500
  .word 0x3c086e00
  .word 0x3c076000
  .word 0x3c0eff00
  .word 0x3c0d6c00
  .word 0x24030004
  .word 0x24040003
  .word 0x24050002
  .word 0x24060001
  .word 0x8f2f0000
  .word 0x11e000d9
  .word 0x00000000
  .word 0x8df40008
  .word 0x32930001
  .word 0x16600033
  .word 0x26100001
  .word 0x328f0010
  .word 0x11e00089
  .word 0x00000000
  .word 0xaf140020
  .word 0x8f0f0020
  .word 0x01ee7824
  .word 0x11ed0016
  .word 0x00000000
  .word 0x11ec0012
  .word 0x00000000
  .word 0x11eb000e
  .word 0x00000000
  .word 0x11ea000c
  .word 0x00000000
  .word 0x11e90008
  .word 0x00000000
  .word 0x11e80006
  .word 0x00000000
  .word 0x11e70004
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x00000000
  .word 0x10000007
  .word 0xaf060024
  .word 0x10000005
  .word 0xaf050024
  .word 0x10000003
  .word 0xaf040024
  .word 0xaf030024
  .word 0x00000000
  .word 0x26520001
  .word 0x2e4f000a
  .word 0x27390004
  .word 0x15e0ffd6
  .word 0x27180008
  .word 0x00000000
  .word 0x104000ba
  .word 0x00000000
  .word 0x120000b8
  .word 0x00000000
  .word 0x0c12731c
  .word 0x0220202d
  .word 0x100000b6
  .word 0xdfbf0050
  .word 0x100000b3
  .word 0x0000102d
  .word 0x24030003
  .word 0x1000ffb8
  .word 0xae2300b0
  .word 0xaf140020
  .word 0x8df30008
  .word 0x32730010
  .word 0x1660002b
  .word 0x00000000
  .word 0x8f130020
  .word 0x026e9824
  .word 0x126d0015
  .word 0x00000000
  .word 0x126c0011
  .word 0x00000000
  .word 0x126b000d
  .word 0x00000000
  .word 0x126a000b
  .word 0x00000000
  .word 0x12690007
  .word 0x00000000
  .word 0x12680005
  .word 0x00000000
  .word 0x12670003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x10000007
  .word 0xaf060024
  .word 0x10000005
  .word 0xaf050024
  .word 0x10000003
  .word 0xaf040024
  .word 0xaf030024
  .word 0x00000000
  .word 0x8df40008
  .word 0x32930006
  .word 0x1260001f
  .word 0x00000000
  .word 0x32932000
  .word 0x16600013
  .word 0x00000000
  .word 0x922f00b5
  .word 0x000f7880
  .word 0x022f7821
  .word 0xade00080
  .word 0x922f00b5
  .word 0x25ef0001
  .word 0x1000ffc0
  .word 0xa22f00b5
  .word 0x00000000
  .word 0x3c020096
  .word 0x8de60000
  .word 0x3c050078
  .word 0x8c420134
  .word 0x27a40480
  .word 0x0040f809
  .word 0x24a5df00
  .word 0x10000078
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c050078
  .word 0x8de60000
  .word 0x27a40380
  .word 0x8c420134
  .word 0x0040f809
  .word 0x24a5df80
  .word 0x1000006f
  .word 0x0000102d
  .word 0x2e410006
  .word 0x1020000d
  .word 0x00000000
  .word 0x32930008
  .word 0x1260ffa7
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c050078
  .word 0x8de60000
  .word 0x27a40180
  .word 0x8c420134
  .word 0x0040f809
  .word 0x24a5e010
  .word 0x10000060
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c050078
  .word 0x8de60000
  .word 0x27a40280
  .word 0x8c420134
  .word 0x0040f809
  .word 0x24a5e0e0
  .word 0x10000057
  .word 0x0000102d
  .word 0x2e41000a
  .word 0x1020003a
  .word 0x00000000
  .word 0x3c03007c
  .word 0x00121080
  .word 0x2463cb00
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af28
  .word 0x10000032
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af30
  .word 0x1000002d
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af38
  .word 0x10000028
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af3c
  .word 0x10000023
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af40
  .word 0x1000001e
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af48
  .word 0x10000019
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af50
  .word 0x10000014
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af58
  .word 0x1000000f
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af60
  .word 0x1000000a
  .word 0x00000000
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x2785af68
  .word 0x10000005
  .word 0x00000000
  .word 0x3c050078
  .word 0x27a40060
  .word 0x0c14909c
  .word 0x24a5e170
  .word 0x3c020096
  .word 0x3c050078
  .word 0x8c420134
  .word 0x27a40080
  .word 0x24a5e180
  .word 0x0040f809
  .word 0x27a60060
  .word 0x1000000e
  .word 0x0000102d
  .word 0x1000ff4a
  .word 0xaf000020
  .word 0x00000000
  .word 0x24030004
  .word 0xa22300b6
  .word 0x24030100
  .word 0xae2300bc
  .word 0x24030040
  .word 0xae2301f4
  .word 0x24030003
  .word 0x1000ff46
  .word 0xae2300b0
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0580
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A3540
asm void FUN_004a3540(int param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0c128c34
  .word 0x8c900014
  .word 0x14400003
  .word 0x00000000
  .word 0x10000010
  .word 0xdfbf0010
  .word 0x3c040078
  .word 0x24030020
  .word 0x2484f130
  .word 0xae040018
  .word 0xae03001c
  .word 0x24040114
  .word 0xae040014
  .word 0x240334f9
  .word 0xae000000
  .word 0xae000004
  .word 0xae000008
  .word 0xae00000c
  .word 0xae000010
  .word 0xae030328
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x03e00008
  .word 0x0000102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A35C0
asm long FUN_004a35c0(long param_1,long param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x1240004f
  .word 0x00c0802d
  .word 0x1220004f
  .word 0x00000000
  .word 0x2e01000a
  .word 0x1020004e
  .word 0x00000000
  .word 0x2e010006
  .word 0x1020003d
  .word 0x00000000
  .word 0x3c03007c
  .word 0x00101080
  .word 0x2463cb30
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e230008
  .word 0x3c026800
  .word 0x00621024
  .word 0x14400041
  .word 0x00000000
  .word 0x100000a6
  .word 0x0000102d
  .word 0x8e230008
  .word 0x3c026c00
  .word 0x00621024
  .word 0x14400044
  .word 0x00000000
  .word 0x1000009f
  .word 0x0000102d
  .word 0x8e230008
  .word 0x3c026400
  .word 0x00621024
  .word 0x14400047
  .word 0x00000000
  .word 0x10000098
  .word 0x0000102d
  .word 0x8e230008
  .word 0x3c026c00
  .word 0x00621024
  .word 0x1440004a
  .word 0x00000000
  .word 0x10000091
  .word 0x0000102d
  .word 0x8e230008
  .word 0x3c026e00
  .word 0x00621024
  .word 0x1040004d
  .word 0x00000000
  .word 0x30624000
  .word 0x1040004a
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c05007d
  .word 0x8e24000c
  .word 0x8c420158
  .word 0x0040f809
  .word 0x24a5dc60
  .word 0x1040000a
  .word 0x00000000
  .word 0x10000041
  .word 0x0000102d
  .word 0x8e230008
  .word 0x3c026e00
  .word 0x00621024
  .word 0x1440003e
  .word 0x00000000
  .word 0x10000078
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c05007d
  .word 0x8e24000c
  .word 0x8c420158
  .word 0x0040f809
  .word 0x24a5dc60
  .word 0x1040003e
  .word 0x00000000
  .word 0x1000006e
  .word 0x0240102d
  .word 0x1000006c
  .word 0x0000102d
  .word 0x1000006a
  .word 0x0000102d
  .word 0x10000068
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c05007d
  .word 0x8e24000c
  .word 0x8c420158
  .word 0x0040f809
  .word 0x24a5dc60
  .word 0x1040ffe9
  .word 0x00000000
  .word 0x1000ffb7
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c05007d
  .word 0x8e24000c
  .word 0x8c420158
  .word 0x0040f809
  .word 0x24a5dc60
  .word 0x1040ffdf
  .word 0x00000000
  .word 0x1000ffb4
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c05007d
  .word 0x8e24000c
  .word 0x8c420158
  .word 0x0040f809
  .word 0x24a5dc60
  .word 0x1040ffd5
  .word 0x00000000
  .word 0x1000ffb1
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c05007d
  .word 0x8e24000c
  .word 0x8c420158
  .word 0x0040f809
  .word 0x24a5dc60
  .word 0x1040ffcb
  .word 0x00000000
  .word 0x1000ffae
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003e
  .word 0xdfbf0030
  .word 0x3c020096
  .word 0x3c05007d
  .word 0x8e24000c
  .word 0x8c420158
  .word 0x0040f809
  .word 0x24a5dc60
  .word 0x1040ffbe
  .word 0x00000000
  .word 0x1000ffba
  .word 0x00000000
  .word 0x0c13cfdc
  .word 0x0240202d
  .word 0x10400005
  .word 0x00000000
  .word 0x00101880
  .word 0x00431021
  .word 0x1000ffbc
  .word 0xac510000
  .word 0x0240202d
  .word 0x0c13cfb0
  .word 0x24050040
  .word 0x10400020
  .word 0x00000000
  .word 0x0000282d
  .word 0x0040202d
  .word 0xac800000
  .word 0x24a50005
  .word 0xac800004
  .word 0x2ca3000a
  .word 0xac800008
  .word 0xac80000c
  .word 0xac800010
  .word 0x1460fff8
  .word 0x24840014
  .word 0xac40003c
  .word 0x24030004
  .word 0xac430038
  .word 0x24050001
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430034
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430030
  .word 0x14a00005
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x1000fffb
  .word 0x0000282d
  .word 0x0c13cfdc
  .word 0x0240202d
  .word 0x1000ffd4
  .word 0x00101880
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A38F0
asm long FUN_004a38f0(long param_1,long param_2,long param_3,long param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x1260000a
  .word 0x00e0802d
  .word 0x1a40000a
  .word 0x00000000
  .word 0x2a220003
  .word 0x14400009
  .word 0x00000000
  .word 0x1e000009
  .word 0x00000000
  .word 0x10000048
  .word 0x0000102d
  .word 0x10000046
  .word 0x0000102d
  .word 0x10000044
  .word 0x0000102d
  .word 0x10000042
  .word 0x0000102d
  .word 0x0c13cfdc
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8c43003c
  .word 0x3063001c
  .word 0x10600003
  .word 0x00000000
  .word 0x10000038
  .word 0x0000102d
  .word 0x1040000c
  .word 0x00000000
  .word 0x00101840
  .word 0x00701821
  .word 0x02431818
  .word 0xac430034
  .word 0x72321818
  .word 0xac430030
  .word 0x24030003
  .word 0xac520038
  .word 0xac43003c
  .word 0x1000002b
  .word 0x0260102d
  .word 0x0260202d
  .word 0x0c13cfb0
  .word 0x24050040
  .word 0x10400020
  .word 0x00000000
  .word 0x0000282d
  .word 0x0040202d
  .word 0xac800000
  .word 0x24a50005
  .word 0xac800004
  .word 0x2ca3000a
  .word 0xac800008
  .word 0xac80000c
  .word 0xac800010
  .word 0x1460fff8
  .word 0x24840014
  .word 0xac40003c
  .word 0x24030004
  .word 0xac430038
  .word 0x24050001
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430034
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430030
  .word 0x14a00005
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x1000fffb
  .word 0x0000282d
  .word 0x0c13cfdc
  .word 0x0260202d
  .word 0x1000ffcd
  .word 0x00101840
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

// FUN_004A3A80
asm long FUN_004a3a80(long param_1,long param_2,long param_3,long param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x1260000a
  .word 0x00e0802d
  .word 0x1a40000a
  .word 0x00000000
  .word 0x2a220002
  .word 0x14400009
  .word 0x00000000
  .word 0x1e000009
  .word 0x00000000
  .word 0x10000047
  .word 0x0000102d
  .word 0x10000045
  .word 0x0000102d
  .word 0x10000043
  .word 0x0000102d
  .word 0x10000041
  .word 0x0000102d
  .word 0x0c13cfdc
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8c43003c
  .word 0x30630013
  .word 0x10600003
  .word 0x00000000
  .word 0x10000037
  .word 0x0000102d
  .word 0x1040000b
  .word 0x00000000
  .word 0x00101840
  .word 0x02431818
  .word 0xac430034
  .word 0x72321818
  .word 0xac430030
  .word 0x2403000c
  .word 0xac520038
  .word 0xac43003c
  .word 0x1000002b
  .word 0x0260102d
  .word 0x0260202d
  .word 0x0c13cfb0
  .word 0x24050040
  .word 0x10400020
  .word 0x00000000
  .word 0x0000282d
  .word 0x0040202d
  .word 0xac800000
  .word 0x24a50005
  .word 0xac800004
  .word 0x2ca3000a
  .word 0xac800008
  .word 0xac80000c
  .word 0xac800010
  .word 0x1460fff8
  .word 0x24840014
  .word 0xac40003c
  .word 0x24030004
  .word 0xac430038
  .word 0x24050001
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430034
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430030
  .word 0x14a00005
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x1000fffb
  .word 0x0000282d
  .word 0x0c13cfdc
  .word 0x0260202d
  .word 0x1000ffce
  .word 0x00101840
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A3C10
asm long FUN_004a3c10(long param_1,long param_2,long param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x12400007
  .word 0x00c0802d
  .word 0x1a200007
  .word 0x00000000
  .word 0x1e000007
  .word 0x00000000
  .word 0x10000042
  .word 0x0000102d
  .word 0x10000040
  .word 0x0000102d
  .word 0x1000003e
  .word 0x0000102d
  .word 0x0c13cfdc
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8c43003c
  .word 0x3063000f
  .word 0x10600003
  .word 0x00000000
  .word 0x10000034
  .word 0x0000102d
  .word 0x10400008
  .word 0x00000000
  .word 0x02112018
  .word 0x24030010
  .word 0xac440034
  .word 0xac510038
  .word 0xac43003c
  .word 0x1000002b
  .word 0x0240102d
  .word 0x0240202d
  .word 0x0c13cfb0
  .word 0x24050040
  .word 0x10400020
  .word 0x00000000
  .word 0x0000282d
  .word 0x0040202d
  .word 0xac800000
  .word 0x24a50005
  .word 0xac800004
  .word 0x2ca3000a
  .word 0xac800008
  .word 0xac80000c
  .word 0xac800010
  .word 0x1460fff8
  .word 0x24840014
  .word 0xac40003c
  .word 0x24030004
  .word 0xac430038
  .word 0x24050001
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430034
  .word 0x8c440038
  .word 0x00041900
  .word 0x00641821
  .word 0x00031880
  .word 0x00641821
  .word 0xac430030
  .word 0x14a00005
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x1000fffb
  .word 0x0000282d
  .word 0x0c13cfdc
  .word 0x0240202d
  .word 0x1000ffd1
  .word 0x02112018
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A3D70
asm long FUN_004a3d70(long param_1,u32 param_2)
{
  .set noreorder
  .word 0x10800007
  .word 0x00000000
  .word 0x8c820014
  .word 0x10400006
  .word 0x00000000
  .word 0xac450014
  .word 0x10000004
  .word 0x0080102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A3DB0
asm long FUN_004a3db0(long param_1,long param_2,long param_3)
{
  .set noreorder
  .word 0x1080000a
  .word 0x00000000
  .word 0x8c870014
  .word 0x10e00009
  .word 0x00000000
  .word 0x10a0000e
  .word 0x00000000
  .word 0x14c00007
  .word 0x00000000
  .word 0x10000011
  .word 0x0000102d
  .word 0x1000000f
  .word 0x0000102d
  .word 0x1000000d
  .word 0x0000102d
  .word 0xace50018
  .word 0x8c820014
  .word 0xac46001c
  .word 0x10000008
  .word 0x0080102d
  .word 0x3c020078
  .word 0x24030020
  .word 0x2442f130
  .word 0xace20018
  .word 0x8c820014
  .word 0x1000fff8
  .word 0xac43001c
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A3E30
asm long FUN_004a3e30(long param_1,int param_2,long param_3)
{
  .set noreorder
  .word 0x1080002c
  .word 0x00000000
  .word 0x8c830014
  .word 0x1060002b
  .word 0x00000000
  .word 0x24020005
  .word 0x10a20021
  .word 0x00000000
  .word 0x24020004
  .word 0x10a20019
  .word 0x00000000
  .word 0x24020003
  .word 0x10a20011
  .word 0x00000000
  .word 0x24020002
  .word 0x10a20009
  .word 0x00000000
  .word 0x24020001
  .word 0x10a20003
  .word 0x00000000
  .word 0x10000016
  .word 0x0000102d
  .word 0xac660000
  .word 0x1000001e
  .word 0x0080102d
  .word 0x10c00017
  .word 0x00000000
  .word 0xac660004
  .word 0x10000019
  .word 0x0080102d
  .word 0x10c00014
  .word 0x00000000
  .word 0xac660008
  .word 0x10000014
  .word 0x0080102d
  .word 0x10c00011
  .word 0x00000000
  .word 0xac66000c
  .word 0x1000000f
  .word 0x0080102d
  .word 0xac660010
  .word 0x1000000c
  .word 0x0080102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x10000006
  .word 0x0000102d
  .word 0x10000004
  .word 0x0000102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
}

// FUN_004A3F10
#pragma optimization_level 3

u8 ** FUN_004a3f10(void)
{
  return PTR_s_PS2AllMat_csl_0077e1e0;
}
#pragma optimization_level 2

// FUN_004A3F20
asm u64 FUN_004a3f20(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x90820002
  .word 0x30420002
  .word 0x14400003
  .word 0x0080802d
  .word 0x10000008
  .word 0x0200102d
  .word 0x3c023f80
  .word 0x0000282d
  .word 0x44826000
  .word 0x0c127fc4
  .word 0x46006346
  .word 0x1000fff8
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004A3F70
asm void FUN_004a3f70(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x24030002
  .word 0xaca30000
  .word 0x3c030096
  .word 0x8f87bdb4
  .word 0x8c680070
  .word 0x24030006
  .word 0x01073821
  .word 0x2466ffff
  .word 0x1060002f
  .word 0x24e70060
  .word 0x44801000
  .word 0x24030001
  .word 0x90eb0012
  .word 0xc4e10004
  .word 0x90ea0010
  .word 0xc4e40000
  .word 0x90e90011
  .word 0xc4e60008
  .word 0xc4e0000c
  .word 0x006b6023
  .word 0x006a5823
  .word 0x000c5040
  .word 0x014c6021
  .word 0x00695023
  .word 0x000c6080
  .word 0x000b4840
  .word 0x012b4821
  .word 0x01845821
  .word 0x00094880
  .word 0xc5670068
  .word 0x01245821
  .word 0x000a4840
  .word 0x012a4821
  .word 0x00094880
  .word 0x01244821
  .word 0xc5230064
  .word 0xc5650060
  .word 0x4601181a
  .word 0x4604281e
  .word 0x4606385c
  .word 0x46000801
  .word 0x46020036
  .word 0x45000002
  .word 0x0060402d
  .word 0x0000402d
  .word 0x39080001
  .word 0x15000004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000006
  .word 0xaca30000
  .word 0x00c0402d
  .word 0x24e70014
  .word 0x1500ffd6
  .word 0x24c6ffff
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A4060
asm u32 FUN_004a4060(int param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8c910008
  .word 0x8e220078
  .word 0xac82000c
  .word 0x8f82bb98
  .word 0x02222021
  .word 0x8c820000
  .word 0x10400007
  .word 0x0000282d
  .word 0x8e63000c
  .word 0x8c420000
  .word 0x94630004
  .word 0x14620002
  .word 0x00000000
  .word 0x24050001
  .word 0x10a00003
  .word 0x00000000
  .word 0x10000006
  .word 0x8c830000
  .word 0x8e62000c
  .word 0x0c127968
  .word 0x94450004
  .word 0x0040202d
  .word 0x8c830000
  .word 0x3c100096
  .word 0x26100074
  .word 0x3c020100
  .word 0xae630010
  .word 0x8e030000
  .word 0x8c630008
  .word 0x00621024
  .word 0x10400035
  .word 0x00000000
  .word 0x3c020096
  .word 0x0220202d
  .word 0x8c420070
  .word 0x27a5005c
  .word 0x24420020
  .word 0x0c128fdc
  .word 0xae420000
  .word 0x8e63000c
  .word 0x24060001
  .word 0x8c670000
  .word 0x30e30001
  .word 0x10660049
  .word 0x8fa2005c
  .word 0x30e300ff
  .word 0x1060004b
  .word 0x00000000
  .word 0x30e30002
  .word 0x24050002
  .word 0x10650047
  .word 0x00000000
  .word 0x30e40010
  .word 0x24030010
  .word 0x10830049
  .word 0x00000000
  .word 0x30e40008
  .word 0x24030008
  .word 0x14830006
  .word 0x00000000
  .word 0xa2650029
  .word 0x9383be04
  .word 0x34630010
  .word 0x10000005
  .word 0xa2630028
  .word 0xa2660029
  .word 0x9383be04
  .word 0x34630014
  .word 0xa2630028
  .word 0x24030002
  .word 0x1443003e
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c420008
  .word 0x30420040
  .word 0x0002102b
  .word 0xa262002a
  .word 0x8e020000
  .word 0x8c420008
  .word 0x30420020
  .word 0x14400038
  .word 0x8e710008
  .word 0x10000041
  .word 0x24020001
  .word 0x8e64000c
  .word 0x3062009d
  .word 0x304300ff
  .word 0x00031c00
  .word 0x2402fffe
  .word 0x94840006
  .word 0x00831825
  .word 0xae630018
  .word 0x8e630014
  .word 0x00621024
  .word 0xae620014
  .word 0x8e620010
  .word 0x8c420004
  .word 0x1040ffbe
  .word 0x00000000
  .word 0x8c440028
  .word 0x8e620018
  .word 0x1044ffba
  .word 0x00000000
  .word 0x00021c02
  .word 0x00041402
  .word 0x306300ff
  .word 0x304200ff
  .word 0x10620005
  .word 0x00000000
  .word 0x8e620014
  .word 0x34420008
  .word 0x1000ffb0
  .word 0xae620014
  .word 0x8e620014
  .word 0x34420004
  .word 0x1000ffac
  .word 0xae620014
  .word 0x24030004
  .word 0xa2630029
  .word 0x9383be04
  .word 0x1000ffcc
  .word 0xa2630028
  .word 0x24030003
  .word 0xa2630029
  .word 0x9383be04
  .word 0x34630004
  .word 0x1000ffc6
  .word 0xa2630028
  .word 0x24030004
  .word 0xa2630029
  .word 0x9383be04
  .word 0x1000ffc1
  .word 0xa2630028
  .word 0x92620028
  .word 0x34420002
  .word 0x1000ffc0
  .word 0xa2620028
  .word 0x3c04004a
  .word 0x0000282d
  .word 0x0c126708
  .word 0x24843f20
  .word 0x3c05004a
  .word 0x0220202d
  .word 0x24a53f20
  .word 0x0c126728
  .word 0x0000302d
  .word 0x1000ffbf
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

// FUN_004A42F0 NONMATCHING

u32 FUN_004a42f0(int param_1)

{
  u8 bVar1;
  short sVar3;
  int iVar4;
  int iVar5;
  u8 *puVar6;
  int iVar7;
  int iVar8;
  u32 *puVar9;
  u32 *puVar10;
  int iVar11;
  u32 uVar12;
  u32 uVar13;
  int iVar14;
  u8 *puVar15;
  u8 *pbVar16;
  u8 *puVar17;
  int iVar18;
  u8 *puVar19;
  u8 *puVar20;
  u8 *puVar21;
  u8 *puVar22;
  u32 *puVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  u32 *puVar27;
  int iVar28;
  int iVar29;
  u32 uVar30;
  u8 bVar2;
  
  iVar7 = DAT_00960074;
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = **(int **)(param_1 + 0x30);
  uVar13 = **(u32 **)(param_1 + 0xc);
  iVar8 = *(int *)(iVar5 + 0x24);
  if ((uVar13 & 2) == 0) {
    puVar21 = (u8 *)0x7bcb54;
    puVar20 = (u8 *)0x7bcb55;
    puVar19 = (u8 *)0x7bcb56;
    bVar1 = DAT_007bcb52;
    bVar2 = DAT_007bcb53;
  }
  else {
    puVar21 = (u8 *)DAT_007bcb59;
    puVar20 = (u8 *)DAT_007bcb5c;
    puVar19 = (u8 *)DAT_007bcb5f;
    bVar1 = DAT_007bcb57;
    bVar2 = DAT_007bcb58;
  }
  uVar30 = (u32)bVar2;
  if ((uVar13 & 1) == 0) {
    if ((uVar13 & 8) == 0) {
      iVar29 = 0;
    }
    else {
      iVar29 = 1;
    }
  }
  else {
    iVar29 = 2;
  }
  if ((uVar13 & 0x100) == 0) {
    iVar18 = **(int **)(param_1 + 0x2c);
    puVar22 = puVar20;
    puVar20 = puVar21;
  }
  else {
    iVar18 = 0x7bcb50;
    puVar22 = puVar21;
  }
  if ((((*(u32 *)(param_1 + 0x34) & 0x10) != 0) &&
      (uVar13 = *(u32 *)(*(int *)(param_1 + 4) + 0x20), (uVar13 & 1) != 0)) && ((uVar13 & 8) == 0))
  {
    uVar13 = 0;
    iVar11 = *(int *)(iVar4 + 8);
    puVar10 = (u32 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0xb0) * 0x10);
    iVar24 = iVar8;
    uVar12 = uVar30;
    while (0 < iVar24) {
      if (*(int *)(iVar5 + 0x30) < iVar24) {
        iVar14 = *(int *)(iVar5 + 0xa8);
        iVar25 = iVar24 - (iVar14 - iVar29);
      }
      else {
        iVar25 = 0;
        puVar10 = puVar10 + *(short *)(iVar5 + 0xbc) * -4;
        iVar14 = iVar24;
      }
      puVar9 = puVar10;
      if (iVar14 == 0) {
        sVar3 = *(short *)(iVar5 + 0xb8);
      }
      else {
        do {
          iVar14 = iVar14 + -1;
          iVar26 = uVar12 << ((u8)puVar22[uVar13] & 0x1f);
          pbVar16 = puVar19 + uVar13;
          iVar24 = uVar12 << ((u8)puVar20[uVar13] & 0x1f);
          uVar13 = bVar1 >> (uVar13 << 1) & 3;
          uVar12 = uVar12 + *pbVar16;
          puVar23 = (u32 *)
                    (iVar11 + (iVar24 + (u32)*(u16 *)(iVar18 + iVar26 * 2) & 0xffff) * 0xc);
          *puVar9 = *puVar23;
          puVar9[1] = puVar23[1];
          puVar9[2] = puVar23[2];
          puVar9 = puVar9 + 3;
        } while (iVar14 != 0);
        sVar3 = *(short *)(iVar5 + 0xb8);
      }
      uVar12 = uVar12 - iVar29;
      puVar10 = puVar10 + sVar3 * 4;
      iVar24 = iVar25;
    }
  }
  if ((((*(u32 *)(param_1 + 0x34) & 0x10) != 0) &&
      (uVar13 = *(u32 *)(*(int *)(param_1 + 4) + 0x28), (uVar13 & 1) != 0)) && ((uVar13 & 8) == 0))
  {
    uVar12 = 0;
    iVar11 = *(int *)(iVar4 + 8);
    puVar10 = (u32 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 200) * 0x10);
    iVar24 = iVar8;
    uVar13 = uVar30;
    while (0 < iVar24) {
      if (*(int *)(iVar5 + 0x30) < iVar24) {
        iVar14 = *(int *)(iVar5 + 0xc0);
        iVar24 = iVar24 - (iVar14 - iVar29);
        puVar9 = puVar10;
      }
      else {
        puVar10 = puVar10 + *(short *)(iVar5 + 0xd4) * -4;
        iVar14 = iVar24;
        puVar9 = puVar10;
        iVar24 = 0;
      }
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        iVar26 = uVar13 << ((u8)puVar22[uVar12] & 0x1f);
        pbVar16 = puVar19 + uVar12;
        iVar25 = uVar13 << ((u8)puVar20[uVar12] & 0x1f);
        uVar12 = bVar1 >> (uVar12 << 1) & 3;
        uVar13 = uVar13 + *pbVar16;
        puVar23 = (u32 *)
                  (iVar11 + (iVar25 + (u32)*(u16 *)(iVar18 + iVar26 * 2) & 0xffff) * 0xc);
        *puVar10 = *puVar23;
        puVar10[1] = puVar23[1];
        puVar10[2] = puVar23[2];
        puVar10[3] = 0;
        puVar10 = puVar10 + 4;
      }
      uVar13 = uVar13 - iVar29;
      puVar10 = puVar9 + *(short *)(iVar5 + 0xd0) * 4;
    }
  }
  if ((((*(u32 *)(param_1 + 0x34) & 0x180) != 0) &&
      (uVar13 = *(u32 *)(*(int *)(param_1 + 4) + 0x30), (uVar13 & 1) != 0)) &&
     (((uVar13 & 8) == 0 && ((*(u32 *)(iVar7 + 8) & 0x84) != 0)))) {
    uVar12 = 0;
    iVar11 = *(int *)(iVar4 + 0x10);
    puVar10 = (u32 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0xe0) * 0x10);
    iVar24 = iVar8;
    uVar13 = uVar30;
    while (0 < iVar24) {
      if (*(int *)(iVar5 + 0x30) < iVar24) {
        iVar14 = *(int *)(iVar5 + 0xd8);
        iVar24 = iVar24 - (iVar14 - iVar29);
        puVar9 = puVar10;
      }
      else {
        puVar10 = puVar10 + *(short *)(iVar5 + 0xec) * -4;
        iVar14 = iVar24;
        puVar9 = puVar10;
        iVar24 = 0;
      }
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        iVar26 = uVar13 << ((u8)puVar22[uVar12] & 0x1f);
        pbVar16 = puVar19 + uVar12;
        iVar25 = uVar13 << ((u8)puVar20[uVar12] & 0x1f);
        uVar12 = bVar1 >> (uVar12 << 1) & 3;
        uVar13 = uVar13 + *pbVar16;
        puVar23 = (u32 *)
                  (iVar11 + (iVar25 + (u32)*(u16 *)(iVar18 + iVar26 * 2) & 0xffff) * 8);
        *puVar10 = *puVar23;
        puVar10[1] = puVar23[1];
        puVar10 = puVar10 + 2;
      }
      uVar13 = uVar13 - iVar29;
      puVar10 = puVar9 + *(short *)(iVar5 + 0xe8) * 4;
    }
  }
  if (((((*(u32 *)(param_1 + 0x34) & 0x180) != 0) &&
       (uVar13 = *(u32 *)(*(int *)(param_1 + 4) + 0x38), (uVar13 & 1) != 0)) && ((uVar13 & 8) == 0)
      ) && ((*(u32 *)(iVar7 + 8) & 0x84) != 0)) {
    iVar11 = *(int *)(iVar4 + 0x10);
    puVar10 = (u32 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0xf8) * 0x10);
    iVar24 = iVar11;
    if ((*(u32 *)(iVar7 + 8) & 0x80) != 0) {
      iVar24 = *(int *)(iVar4 + 0x14);
    }
    uVar12 = 0;
    iVar14 = iVar8;
    uVar13 = uVar30;
    while (0 < iVar14) {
      if (*(int *)(iVar5 + 0x30) < iVar14) {
        iVar25 = *(int *)(iVar5 + 0xf0);
        iVar26 = iVar14 - (iVar25 - iVar29);
      }
      else {
        iVar26 = 0;
        puVar10 = puVar10 + *(short *)(iVar5 + 0x104) * -4;
        iVar25 = iVar14;
      }
      puVar9 = puVar10;
      if (iVar25 == 0) {
        sVar3 = *(short *)(iVar5 + 0x100);
      }
      else {
        do {
          iVar25 = iVar25 + -1;
          iVar28 = uVar13 << ((u8)puVar22[uVar12] & 0x1f);
          pbVar16 = puVar19 + uVar12;
          iVar14 = uVar13 << ((u8)puVar20[uVar12] & 0x1f);
          uVar12 = bVar1 >> (uVar12 << 1) & 3;
          uVar13 = uVar13 + *pbVar16;
          iVar14 = (iVar14 + (u32)*(u16 *)(iVar18 + iVar28 * 2) & 0xffff) * 8;
          puVar27 = (u32 *)(iVar11 + iVar14);
          puVar23 = (u32 *)(iVar24 + iVar14);
          *puVar9 = *puVar27;
          puVar9[1] = puVar27[1];
          puVar9[2] = *puVar23;
          puVar9[3] = puVar23[1];
          puVar9 = puVar9 + 4;
        } while (iVar25 != 0);
        sVar3 = *(short *)(iVar5 + 0x100);
      }
      uVar13 = uVar13 - iVar29;
      puVar10 = puVar10 + sVar3 * 4;
      iVar14 = iVar26;
    }
  }
  if ((((*(u32 *)(param_1 + 0x34) & 0x40) != 0) &&
      (uVar13 = *(u32 *)(*(int *)(param_1 + 4) + 0x40), (uVar13 & 1) != 0)) && ((uVar13 & 8) == 0))
  {
    uVar12 = 0;
    iVar11 = *(int *)(iVar4 + 0x30);
    puVar10 = (u32 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x110) * 0x10);
    iVar24 = iVar8;
    uVar13 = uVar30;
    while (0 < iVar24) {
      if (*(int *)(iVar5 + 0x30) < iVar24) {
        iVar14 = *(int *)(iVar5 + 0x108);
        iVar25 = iVar24 - (iVar14 - iVar29);
      }
      else {
        iVar25 = 0;
        puVar10 = puVar10 + *(short *)(iVar5 + 0x11c) * -4;
        iVar14 = iVar24;
      }
      puVar9 = puVar10;
      if ((*(u32 *)(iVar7 + 8) & 8) == 0) {
        for (; iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar9 = 0xff000000;
          puVar9 = puVar9 + 1;
        }
      }
      else {
        for (; iVar14 != 0; iVar14 = iVar14 + -1) {
          iVar26 = uVar13 << ((u8)puVar22[uVar12] & 0x1f);
          pbVar16 = puVar19 + uVar12;
          iVar24 = uVar13 << ((u8)puVar20[uVar12] & 0x1f);
          uVar12 = bVar1 >> (uVar12 << 1) & 3;
          uVar13 = uVar13 + *pbVar16;
          *puVar9 = *(u32 *)
                     (iVar11 + (iVar24 + (u32)*(u16 *)(iVar18 + iVar26 * 2) & 0xffff) * 4);
          puVar9 = puVar9 + 1;
        }
      }
      uVar13 = uVar13 - iVar29;
      puVar10 = puVar10 + *(short *)(iVar5 + 0x118) * 4;
      iVar24 = iVar25;
    }
  }
  if ((((*(u32 *)(param_1 + 0x34) & 0x20) != 0) &&
      (uVar13 = *(u32 *)(*(int *)(param_1 + 4) + 0x48), (uVar13 & 1) != 0)) && ((uVar13 & 8) == 0))
  {
    uVar13 = 0;
    iVar4 = *(int *)(iVar4 + 0xc);
    puVar15 = (u8 *)(*(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x128) * 0x10);
    while (0 < iVar8) {
      if (*(int *)(iVar5 + 0x30) < iVar8) {
        iVar11 = *(int *)(iVar5 + 0x120);
        iVar24 = iVar8 - (iVar11 - iVar29);
      }
      else {
        iVar24 = 0;
        puVar15 = puVar15 + *(short *)(iVar5 + 0x134) * -0x10;
        iVar11 = iVar8;
      }
      if ((*(u32 *)(iVar7 + 8) & 0x10) == 0) {
        puVar6 = puVar15;
        if ((*(u32 *)(*(int *)(param_1 + 4) + 0x48) & 0x2000) == 0) {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6 = puVar6 + 4;
          }
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6 = puVar6 + 3;
          }
        }
      }
      else {
        puVar6 = puVar15;
        if ((*(u32 *)(*(int *)(param_1 + 4) + 0x48) & 0x2000) == 0) {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            pbVar16 = puVar19 + uVar13;
            iVar8 = uVar30 << ((u8)puVar22[uVar13] & 0x1f);
            iVar14 = uVar30 << ((u8)puVar20[uVar13] & 0x1f);
            uVar13 = bVar1 >> (uVar13 << 1) & 3;
            uVar30 = uVar30 + *pbVar16;
            puVar17 = (u8 *)(iVar4 + (iVar14 + (u32)*(u16 *)(iVar18 + iVar8 * 2)) * 4);
            *puVar6 = *puVar17;
            puVar6[1] = puVar17[1];
            puVar6[2] = puVar17[2];
            puVar6[3] = 0;
            puVar6 = puVar6 + 4;
          }
        }
        else {
          for (; iVar11 != 0; iVar11 = iVar11 + -1) {
            pbVar16 = puVar19 + uVar13;
            iVar8 = uVar30 << ((u8)puVar22[uVar13] & 0x1f);
            iVar14 = uVar30 << ((u8)puVar20[uVar13] & 0x1f);
            uVar13 = bVar1 >> (uVar13 << 1) & 3;
            uVar30 = uVar30 + *pbVar16;
            puVar17 = (u8 *)(iVar4 + (iVar14 + (u32)*(u16 *)(iVar18 + iVar8 * 2)) * 4);
            *puVar6 = *puVar17;
            puVar6[1] = puVar17[1];
            puVar6[2] = puVar17[2];
            puVar6 = puVar6 + 3;
          }
        }
      }
      uVar30 = uVar30 - iVar29;
      puVar15 = puVar15 + *(short *)(iVar5 + 0x130) * 0x10;
      iVar8 = iVar24;
    }
  }
  return 1;
}

// FUN_004A4D60
asm u64 FUN_004a4d60(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x02051021
  .word 0x8c440000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c12793c
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_004A4DA0
asm u64 FUN_004a4da0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c850054
  .word 0x10a00019
  .word 0x0080802d
  .word 0x8f82bba0
  .word 0x02022021
  .word 0x8c820000
  .word 0x10400006
  .word 0x0000302d
  .word 0x8c420000
  .word 0x94a30004
  .word 0x14620002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c820000
  .word 0x0c127968
  .word 0x94a50004
  .word 0x0040202d
  .word 0x8c820000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x10000005
  .word 0x0200102d
  .word 0x8f82bba0
  .word 0x02021021
  .word 0x1000fffb
  .word 0xac400000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A4E40
asm u64 FUN_004a4e40(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c820018
  .word 0x8c450054
  .word 0x10a0001d
  .word 0x0080802d
  .word 0x8c420018
  .word 0x28410002
  .word 0x14200019
  .word 0x00000000
  .word 0x8f82bb9c
  .word 0x02022021
  .word 0x8c820000
  .word 0x10400006
  .word 0x0000302d
  .word 0x8c420000
  .word 0x94a30004
  .word 0x14620002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c820000
  .word 0x0c127968
  .word 0x94a50004
  .word 0x0040202d
  .word 0x8c820000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x10000005
  .word 0x0200102d
  .word 0x8f82bb9c
  .word 0x02021021
  .word 0x1000fffb
  .word 0xac400000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_004A4EF0
asm u64 FUN_004a4ef0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c850078
  .word 0x10a00019
  .word 0x0080802d
  .word 0x8f82bb98
  .word 0x02022021
  .word 0x8c820000
  .word 0x10400006
  .word 0x0000302d
  .word 0x8c420000
  .word 0x94a30004
  .word 0x14620002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c820000
  .word 0x0c127968
  .word 0x94a50004
  .word 0x0040202d
  .word 0x8c820000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x10000005
  .word 0x0200102d
  .word 0x8f82bb98
  .word 0x02021021
  .word 0x1000fffb
  .word 0xac400000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A4F90
asm u32 FUN_004a4f90(int param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c830018
  .word 0x8c660054
  .word 0x10c0001b
  .word 0x00000000
  .word 0x8c620018
  .word 0x24050001
  .word 0x14450019
  .word 0x00000000
  .word 0x8f82bba0
  .word 0x00622021
  .word 0x8c820000
  .word 0x10400006
  .word 0x0000382d
  .word 0x8c420000
  .word 0x94c30004
  .word 0x14620002
  .word 0x00000000
  .word 0x00a0382d
  .word 0x10e00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c820000
  .word 0x0c127968
  .word 0x94c50004
  .word 0x0040202d
  .word 0x8c820000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000018
  .word 0x0000102d
  .word 0x10000016
  .word 0x24020001
  .word 0x8f82bb9c
  .word 0x00822021
  .word 0x8c820000
  .word 0x10400006
  .word 0x0000382d
  .word 0x8c420000
  .word 0x94c30004
  .word 0x14620002
  .word 0x00000000
  .word 0x00a0382d
  .word 0x10e00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c820000
  .word 0x0c127968
  .word 0x94c50004
  .word 0x0040202d
  .word 0x8c820000
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A5080
asm u32 FUN_004a5080(int param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c850078
  .word 0x10a00017
  .word 0x00000000
  .word 0x8f82bb98
  .word 0x00822021
  .word 0x8c820000
  .word 0x10400006
  .word 0x0000302d
  .word 0x8c420000
  .word 0x94a30004
  .word 0x14620002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c820000
  .word 0x0c127968
  .word 0x94a50004
  .word 0x0040202d
  .word 0x8c820000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000002
  .word 0x0000102d
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_004A5100
asm u8 FUN_004a5100(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c06004a
  .word 0xffbf0020
  .word 0x3c07004a
  .word 0x7fb10010
  .word 0x3c08004a
  .word 0x7fb00000
  .word 0x24040004
  .word 0x2405050f
  .word 0x24c64d50
  .word 0x24e74d60
  .word 0x25084da0
  .word 0x0000802d
  .word 0x0c124f14
  .word 0x0000882d
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x3c08004a
  .word 0xaf82bba0
  .word 0x24040004
  .word 0x2405050f
  .word 0x24c64d50
  .word 0x24e74d60
  .word 0x0c124b0c
  .word 0x25084e40
  .word 0x3c06004a
  .word 0x3c07004a
  .word 0x3c08004a
  .word 0xaf82bb9c
  .word 0x24040004
  .word 0x2405050f
  .word 0x24c64d50
  .word 0x24e74d60
  .word 0x0c126494
  .word 0x25084ef0
  .word 0x3c05004a
  .word 0xaf82bb98
  .word 0x2404050f
  .word 0x0c124b30
  .word 0x24a54f90
  .word 0x3c05004a
  .word 0x02228825
  .word 0x2404050f
  .word 0x0c1264ac
  .word 0x24a55080
  .word 0x02222825
  .word 0x8f84bba0
  .word 0x8f83bb9c
  .word 0x8f82bb98
  .word 0x00831825
  .word 0x00431025
  .word 0x00a21025
  .word 0x04400002
  .word 0x00000000
  .word 0x24100001
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_004A5200
int FUN_004a5200(void)
{
  return FUN_0049c620(0);
}
#pragma optimization_level 2

// FUN_004A5210
asm u32 FUN_004a5210(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0x0c11aa24
  .word 0x24041001
  .word 0x8f84be38
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0x10400005
  .word 0xac62005c
  .word 0x0c127188
  .word 0x0040202d
  .word 0x1000000e
  .word 0x24020001
  .word 0x0c127188
  .word 0x0000202d
  .word 0x24030002
  .word 0x3c028000
  .word 0x3c050078
  .word 0xafa30018
  .word 0x34440006
  .word 0x0c130744
  .word 0x24a5e300
  .word 0xafa2001c
  .word 0x0c130714
  .word 0x27a40018
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_004A5290
int FUN_004a5290(void)
{
  return FUN_0049c560(0);
}
#pragma optimization_level 2

// FUN_004A52A0
asm u32 FUN_004a52a0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0x0c11aa24
  .word 0x24041003
  .word 0x8f84be38
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0x10400005
  .word 0xac620058
  .word 0x0c127158
  .word 0x0040202d
  .word 0x1000000e
  .word 0x24020001
  .word 0x0c127158
  .word 0x0000202d
  .word 0x24030002
  .word 0x3c028000
  .word 0x3c050078
  .word 0xafa30018
  .word 0x34440006
  .word 0x0c130744
  .word 0x24a5e320
  .word 0xafa2001c
  .word 0x0c130714
  .word 0x27a40018
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_004A5320
int FUN_004a5320(void)
{
  return FUN_0049c5c0(0);
}
#pragma optimization_level 2

// FUN_004A5330
asm u32 FUN_004a5330(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0000
  .word 0x0c11aa24
  .word 0x24041002
  .word 0x8f84be38
  .word 0x3c030096
  .word 0x24630070
  .word 0x00641821
  .word 0x10400005
  .word 0xac620054
  .word 0x0c127170
  .word 0x0040202d
  .word 0x1000000e
  .word 0x24020001
  .word 0x0c127170
  .word 0x0000202d
  .word 0x24030002
  .word 0x3c028000
  .word 0x3c050078
  .word 0xafa30018
  .word 0x34440006
  .word 0x0c130744
  .word 0x24a5e340
  .word 0xafa2001c
  .word 0x0c130714
  .word 0x27a40018
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A53B0
asm void FUN_004a53b0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c020096
  .word 0xffbf0000
  .word 0x0c130f0c
  .word 0x8c44ed60
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac40ed60
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x8c64ed64
  .word 0x3c030096
  .word 0xac60ed64
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma schedule on
// FUN_004A5400
asm u32 FUN_004a5400(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c030004
  .word 0xffbf0000
  .word 0x3c020096
  .word 0x8c420178
  .word 0x24042400
  .word 0x0040f809
  .word 0x34650190
  .word 0x8f85af74
  .word 0x3c030096
  .word 0x8f87af78
  .word 0x3c080096
  .word 0xac62ed64
  .word 0x24040078
  .word 0x3c020004
  .word 0x24060010
  .word 0x2508e7d0
  .word 0x0c130ed8
  .word 0x344901a2
  .word 0x3c030096
  .word 0xac62ed60
  .word 0xdfbf0000
  .word 0x24020001
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule off

// FUN_004A5470
asm long FUN_004a5470(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c44ed60
  .word 0x3c020003
  .word 0x344501a2
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x12000021
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060078
  .word 0x240200ff
  .word 0x27a5002c
  .word 0x0200202d
  .word 0xa3a2002c
  .word 0xa3a2002d
  .word 0x00a0302d
  .word 0xa3a2002e
  .word 0x00a0382d
  .word 0xa3a2002f
  .word 0x0c129774
  .word 0x00a0402d
  .word 0x27a50020
  .word 0x0200202d
  .word 0x00a0302d
  .word 0x00a0382d
  .word 0x00a0402d
  .word 0xafa00020
  .word 0x0c129880
  .word 0xafa00024
  .word 0x0200202d
  .word 0x0c1298b8
  .word 0x0000282d
  .word 0x3c023f00
  .word 0x24030001
  .word 0xae020070
  .word 0x0200102d
  .word 0x10000002
  .word 0xae030074
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_004A5540
asm u32 FUN_004a5540(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c820074
  .word 0x0080802d
  .word 0x2442ffff
  .word 0x18400003
  .word 0xac820074
  .word 0x1000000d
  .word 0x0000102d
  .word 0x8e040068
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c44ed60
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0200282d
  .word 0x24020001
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A55B0 NONMATCHING

u64
FUN_004a55b0(u64 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)param_1;
  fVar3 = *param_5 * *param_6 + *param_7 + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    *pfVar1 = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    *pfVar1 = fVar3;
  }
  fVar3 = param_5[1] * param_6[1] + param_7[1] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[1] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[1] = fVar3;
  }
  fVar3 = param_5[2] * param_6[2] + param_7[2] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[2] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[2] = fVar3;
  }
  fVar3 = param_5[3] * param_6[3] + param_7[3] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[3] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[3] = fVar3;
  }
  fVar3 = *param_4 * *param_6 + *param_7 + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[6] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[6] = fVar3;
  }
  fVar3 = param_4[1] * param_6[1] + param_7[1] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[7] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[7] = fVar3;
  }
  fVar3 = param_4[2] * param_6[2] + param_7[2] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[8] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[8] = fVar3;
  }
  fVar3 = param_4[3] * param_6[3] + param_7[3] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[9] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[9] = fVar3;
  }
  fVar3 = *param_2 * *param_6 + *param_7 + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0xc] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0xc] = fVar3;
  }
  fVar3 = param_2[1] * param_6[1] + param_7[1] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0xd] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0xd] = fVar3;
  }
  fVar3 = param_2[2] * param_6[2] + param_7[2] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0xe] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0xe] = fVar3;
  }
  fVar3 = param_2[3] * param_6[3] + param_7[3] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0xf] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0xf] = fVar3;
  }
  fVar3 = *param_3 * *param_6 + *param_7 + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0x12] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0x12] = fVar3;
  }
  fVar3 = param_3[1] * param_6[1] + param_7[1] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0x13] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0x13] = fVar3;
  }
  fVar3 = param_3[2] * param_6[2] + param_7[2] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0x14] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0x14] = fVar3;
  }
  fVar3 = param_3[3] * param_6[3] + param_7[3] + 0.0;
  fVar2 = fVar3;
  if (255.0 < fVar3) {
    fVar2 = 255.0;
  }
  if (fVar2 <= 0.0) {
    pfVar1[0x15] = 0.0;
  }
  else {
    if (255.0 < fVar3) {
      fVar3 = 255.0;
    }
    pfVar1[0x15] = fVar3;
  }
  *(char *)(pfVar1 + 0x18) = (char)(int)*pfVar1;
  *(char *)((int)pfVar1 + 0x61) = (char)(int)pfVar1[1];
  *(char *)((int)pfVar1 + 0x62) = (char)(int)pfVar1[2];
  *(char *)((int)pfVar1 + 99) = (char)(int)pfVar1[3];
  return param_1;
}

// FUN_004A5DD0
asm u64 FUN_004a5dd0(u64 param_1,u8 *param_2,u8 *param_3,u8 *param_4,u64 param_5)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x91020000
  .word 0x04400004
  .word 0x0080802d
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000000
  .word 0x91020001
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000004
  .word 0x91020002
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000008
  .word 0x91020003
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600000c
  .word 0x90e20000
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000018
  .word 0x90e20001
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600001c
  .word 0x90e20002
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000020
  .word 0x90e20003
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000024
  .word 0xc6010018
  .word 0xc6000000
  .word 0x46000801
  .word 0xe6000018
  .word 0xc6010004
  .word 0xc600001c
  .word 0x46010001
  .word 0xe600001c
  .word 0xc6010008
  .word 0xc6000020
  .word 0x46010001
  .word 0xe6000020
  .word 0xc601000c
  .word 0xc6000024
  .word 0x46010001
  .word 0xe6000024
  .word 0x90a20000
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000030
  .word 0x90a20001
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000034
  .word 0x90a20002
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000038
  .word 0x90a20003
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600003c
  .word 0x90c20000
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000048
  .word 0x90c20001
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe600004c
  .word 0x90c20002
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000050
  .word 0x90c20003
  .word 0x04400004
  .word 0x00000000
  .word 0x44820000
  .word 0x10000008
  .word 0x46800020
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe6000054
  .word 0x0100282d
  .word 0xc6010030
  .word 0x26040060
  .word 0xc6000048
  .word 0x24060004
  .word 0x46010001
  .word 0xe6000048
  .word 0xc6010034
  .word 0xc600004c
  .word 0x46010001
  .word 0xe600004c
  .word 0xc6010038
  .word 0xc6000050
  .word 0x46010001
  .word 0xe6000050
  .word 0xc601003c
  .word 0xc6000054
  .word 0x46010001
  .word 0x0c148494
  .word 0xe6000054
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004A6200
asm u64 FUN_004a6200(u64 param_1,float *param_2,float *param_3,float *param_4,float *param_5)
{
  .set noreorder
  .word 0xc5020000
  .word 0xc5000004
  .word 0x44800800
  .word 0xe4820010
  .word 0xe4800014
  .word 0xc4e20000
  .word 0xc5000000
  .word 0x46001001
  .word 0xe4800028
  .word 0xc4e20004
  .word 0xc5000004
  .word 0x46001001
  .word 0xe480002c
  .word 0xc4a20000
  .word 0xc4a00004
  .word 0xe4820040
  .word 0xe4800044
  .word 0xc4c20000
  .word 0xc4a00000
  .word 0x46001001
  .word 0xe4800058
  .word 0xc4c20004
  .word 0xc4a00004
  .word 0x46001001
  .word 0xe480005c
  .word 0xc4800028
  .word 0x46000832
  .word 0x45010006
  .word 0x00000000
  .word 0x8c820064
  .word 0x34420002
  .word 0xac820064
  .word 0x10000012
  .word 0x0080102d
  .word 0xc480002c
  .word 0x46000832
  .word 0x4500fff8
  .word 0x00000000
  .word 0xc4800058
  .word 0x46000832
  .word 0x4500fff4
  .word 0x00000000
  .word 0xc480005c
  .word 0x46000832
  .word 0x4500fff0
  .word 0x00000000
  .word 0x8c830064
  .word 0x2402fffd
  .word 0x00621024
  .word 0x1000ffee
  .word 0xac820064
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A62E0
asm u64 FUN_004a62e0(u64 param_1,long param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x1200000f
  .word 0x0080882d
  .word 0x8e220064
  .word 0x34420002
  .word 0xae220064
  .word 0x8e020054
  .word 0x24420001
  .word 0xae020054
  .word 0x8e240068
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae300068
  .word 0x10000006
  .word 0x0220102d
  .word 0x8e230064
  .word 0x2402fffd
  .word 0x00621024
  .word 0x1000fff4
  .word 0xae220064
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_004A6360
asm u64 FUN_004a6360(u64 param_1,int param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x26250004
  .word 0x0c148494
  .word 0x24060010
  .word 0xc6210014
  .word 0x26440018
  .word 0xc6200018
  .word 0x2625001c
  .word 0x24060010
  .word 0xe6410010
  .word 0x0c148494
  .word 0xe6400014
  .word 0xc621002c
  .word 0x26440030
  .word 0xc6200030
  .word 0x26250034
  .word 0x24060010
  .word 0xe6410028
  .word 0x0c148494
  .word 0xe640002c
  .word 0xc6210044
  .word 0x26440048
  .word 0xc6200048
  .word 0x2625004c
  .word 0x24060010
  .word 0xe6410040
  .word 0x0c148494
  .word 0xe6400044
  .word 0xc621005c
  .word 0xc6200060
  .word 0xe6410058
  .word 0xe640005c
  .word 0xc6400000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa2420060
  .word 0xc6400004
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa2420061
  .word 0xc6400008
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa2420062
  .word 0xc640000c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa2420063
  .word 0x8e220064
  .word 0xae420064
  .word 0xc6200068
  .word 0xe6400070
  .word 0x8e22006c
  .word 0x14400003
  .word 0x00000000
  .word 0x1000002a
  .word 0x0240102d
  .word 0x0200202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0c130580
  .word 0x0000382d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000021
  .word 0x0000102d
  .word 0x0c1320f0
  .word 0x0200202d
  .word 0x10400018
  .word 0x00000000
  .word 0x8c430000
  .word 0x10600015
  .word 0x00000000
  .word 0x8c650010
  .word 0x8c64000c
  .word 0x24a3ffff
  .word 0x00a31824
  .word 0x00601826
  .word 0x2c630001
  .word 0x10600005
  .word 0x00000000
  .word 0x2483ffff
  .word 0x00831824
  .word 0x00601826
  .word 0x2c630001
  .word 0x14600007
  .word 0x00000000
  .word 0x8c440050
  .word 0x3c03ffff
  .word 0x346300ff
  .word 0x00831824
  .word 0x34633300
  .word 0xac430050
  .word 0xae420068
  .word 0x8e420064
  .word 0x34420002
  .word 0x1000ffd6
  .word 0xae420064
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_004A6530
asm u64 FUN_004a6530(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x24060070
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0200202d
  .word 0x0c131494
  .word 0x27a50030
  .word 0x24030070
  .word 0x1443001b
  .word 0x00000000
  .word 0xc6200000
  .word 0x24020001
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa2230060
  .word 0xc6200004
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa2230061
  .word 0xc6200008
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa2230062
  .word 0xc620000c
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa2230063
  .word 0x8fa30030
  .word 0x10620005
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x10000005
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0200302d
  .word 0x0c1298d8
  .word 0x27a50030
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00a0
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_004A6600

u64 FUN_004a6600(u64 param_1,u64 param_2)

{
  FUN_0046bd00(param_1,param_2);
  return param_1;
}
#pragma optimization_level 2

// FUN_004A6630
asm int FUN_004a6630(int param_1,float *param_2,int param_3,int *param_4,int *param_5)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x00a0a02d
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xafa4011c
  .word 0xe7b40000
  .word 0xafa60118
  .word 0x8cb7006c
  .word 0xafa70114
  .word 0x12e0012b
  .word 0xafa80110
  .word 0x86e20018
  .word 0x24420001
  .word 0xa6e20018
  .word 0x8fa2011c
  .word 0xafa0013c
  .word 0xafa00100
  .word 0xafa000f0
  .word 0xafa000e0
  .word 0x8c500014
  .word 0x8e020004
  .word 0x2403ffff
  .word 0x14430003
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e040000
  .word 0x8fa30100
  .word 0x2444fffd
  .word 0x00621821
  .word 0xafa30100
  .word 0x8fa300f0
  .word 0x00641821
  .word 0xafa300f0
  .word 0x8fa3013c
  .word 0x0062082b
  .word 0x14200131
  .word 0x00000000
  .word 0x8fa2011c
  .word 0x8e100014
  .word 0x8c420014
  .word 0x1602ffeb
  .word 0x00000000
  .word 0x8fa4013c
  .word 0x1080002c
  .word 0x00000000
  .word 0x3c020096
  .word 0x00041840
  .word 0x8c42f580
  .word 0x00641821
  .word 0x0043082b
  .word 0x1020001c
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c44f57c
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c020096
  .word 0x8fa4013c
  .word 0xac40f580
  .word 0x3c020003
  .word 0x34450190
  .word 0x3c020096
  .word 0x8c420178
  .word 0x00041840
  .word 0x00641821
  .word 0x0040f809
  .word 0x00032080
  .word 0x3c030096
  .word 0x1040010e
  .word 0xac62f57c
  .word 0x8fa4013c
  .word 0x3c020096
  .word 0x00041840
  .word 0x00641821
  .word 0xac43f580
  .word 0x3c020096
  .word 0x00041840
  .word 0x8c42f57c
  .word 0x00641821
  .word 0x00033080
  .word 0x0000282d
  .word 0xafa200e0
  .word 0x0c148502
  .word 0x0040202d
  .word 0x3c020096
  .word 0xc455ef58
  .word 0x8fa200f0
  .word 0x104000c9
  .word 0x00000000
  .word 0x8fa20100
  .word 0x104000c6
  .word 0x00000000
  .word 0x8fa20114
  .word 0x8c520000
  .word 0x8fa20118
  .word 0x00123840
  .word 0x00f24021
  .word 0x00084080
  .word 0x8c49005c
  .word 0x8fa20110
  .word 0x8d270014
  .word 0x8c460000
  .word 0x00e88821
  .word 0x8fa20118
  .word 0x000630c0
  .word 0x8c44002c
  .word 0x8c450030
  .word 0x8c430034
  .word 0x00869821
  .word 0x001220c0
  .word 0x00121080
  .word 0x0064b021
  .word 0x00a28021
  .word 0x8fa2011c
  .word 0x8c420014
  .word 0xafa200d0
  .word 0x8fa200d0
  .word 0xc4540010
  .word 0x8c430004
  .word 0x2402ffff
  .word 0x14620006
  .word 0x00000000
  .word 0x8fa200d0
  .word 0x0c130824
  .word 0x8c440000
  .word 0x10000004
  .word 0x0040a82d
  .word 0x8fa200d0
  .word 0x8c420000
  .word 0x0040a82d
  .word 0x8fa200d0
  .word 0x8c5e0004
  .word 0x2402ffff
  .word 0x17c20005
  .word 0x00000000
  .word 0x8fa200d0
  .word 0x0c130848
  .word 0x8c440000
  .word 0x0040f02d
  .word 0x27c3fffd
  .word 0x025e1021
  .word 0xafa3013c
  .word 0x2442ffff
  .word 0xc6a00004
  .word 0x7fa200b0
  .word 0x27a20128
  .word 0x8fa400d0
  .word 0x27a50120
  .word 0xe4400000
  .word 0xe7a00120
  .word 0x27a2012c
  .word 0xc6a00008
  .word 0xe4400000
  .word 0x27a20124
  .word 0x0c12b008
  .word 0xe4400000
  .word 0x27a20128
  .word 0x0000282d
  .word 0xc4440000
  .word 0xc7a30120
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x460320c1
  .word 0x27a2012c
  .word 0xc4410000
  .word 0x460311c3
  .word 0x27a20124
  .word 0xc4400000
  .word 0x46000801
  .word 0x00000000
  .word 0x46001203
  .word 0x00000000
  .word 0x00000000
  .word 0x001e082b
  .word 0x1020005f
  .word 0x00000000
  .word 0x44802000
  .word 0x240300ff
  .word 0xc6a00004
  .word 0x27a20124
  .word 0xc6a1000c
  .word 0xc6a20010
  .word 0x46002018
  .word 0x4614081d
  .word 0xe6200000
  .word 0xc6a00008
  .word 0x46141082
  .word 0x46020001
  .word 0xe6200004
  .word 0xe6350008
  .word 0xc6230000
  .word 0x8e840064
  .word 0xc7a20120
  .word 0xc4400000
  .word 0xc6210004
  .word 0x46021881
  .word 0x30820001
  .word 0x46000801
  .word 0x46071142
  .word 0x1040008c
  .word 0x46080182
  .word 0xc6830048
  .word 0xc6890054
  .word 0xc68a0050
  .word 0xc68b001c
  .word 0xc6810030
  .word 0xc682004c
  .word 0x460518c2
  .word 0x460118c0
  .word 0xc6800034
  .word 0x46051042
  .word 0x46000880
  .word 0x46054b42
  .word 0xc680003c
  .word 0x46055382
  .word 0xc6810038
  .word 0xc68a0020
  .word 0x46055c02
  .word 0x460553c2
  .word 0xc68c0018
  .word 0x46006800
  .word 0xc6890024
  .word 0x46056342
  .word 0xc68c0000
  .word 0x46017040
  .word 0x46054b82
  .word 0xc68b0004
  .word 0x460c6b40
  .word 0xc68a0008
  .word 0x460b8300
  .word 0xc689000c
  .word 0x460a7ac0
  .word 0x46026301
  .word 0x46097280
  .word 0x46036a41
  .word 0x46064a42
  .word 0x46034a40
  .word 0x460660c2
  .word 0x46015ac1
  .word 0x460218c0
  .word 0x46065882
  .word 0x46005281
  .word 0x46011080
  .word 0x46065042
  .word 0x46000840
  .word 0x46004824
  .word 0x44020000
  .word 0x46001824
  .word 0xa2020000
  .word 0x44020000
  .word 0x46001024
  .word 0xa2020001
  .word 0x44020000
  .word 0x46000824
  .word 0xa2020002
  .word 0x44020000
  .word 0x00000000
  .word 0xa2020003
  .word 0x26100004
  .word 0x00000000
  .word 0x8e820068
  .word 0x14400054
  .word 0x00000000
  .word 0x00000000
  .word 0x24a50001
  .word 0x00be102b
  .word 0x26b50018
  .word 0x1440ffa6
  .word 0x2631000c
  .word 0x00000000
  .word 0x8fa400d0
  .word 0x8fa600e0
  .word 0x0c12c3e8
  .word 0x27a5013c
  .word 0x27c2fffd
  .word 0x0002102b
  .word 0x1440005f
  .word 0xafa000c0
  .word 0x7ba200b0
  .word 0x24520001
  .word 0x8fa200d0
  .word 0x8c420014
  .word 0xafa200d0
  .word 0x8fa2011c
  .word 0x8c430014
  .word 0x8fa200d0
  .word 0x1443ff54
  .word 0x00000000
  .word 0x0c125330
  .word 0x02e0202d
  .word 0x8fa30114
  .word 0x8fa2011c
  .word 0x8c640000
  .word 0x8fa30100
  .word 0x00832021
  .word 0x8fa30114
  .word 0xac640000
  .word 0x8fa30110
  .word 0x8c640000
  .word 0x8fa300f0
  .word 0x00832021
  .word 0x8fa30110
  .word 0x10000060
  .word 0xac640000
  .word 0x0c1252f8
  .word 0x00000000
  .word 0x8e850068
  .word 0x10a00003
  .word 0x0040b82d
  .word 0x0c125354
  .word 0x02e0202d
  .word 0x8e820064
  .word 0x30420001
  .word 0x1440000b
  .word 0x00000000
  .word 0x92850060
  .word 0x92840061
  .word 0x92830062
  .word 0x92820063
  .word 0xa2e50004
  .word 0xa2e40005
  .word 0xa2e30006
  .word 0xa2e20007
  .word 0x1000fec5
  .word 0xae97006c
  .word 0xc780af7c
  .word 0xe7a00138
  .word 0x93a50138
  .word 0x93a40139
  .word 0x93a3013a
  .word 0x93a2013b
  .word 0xa2e50004
  .word 0xa2e40005
  .word 0xa2e30006
  .word 0x1000fff4
  .word 0xa2e20007
  .word 0x1000fecf
  .word 0xafa4013c
  .word 0x1000003c
  .word 0x0000102d
  .word 0xa2030000
  .word 0xa2030001
  .word 0xa2030002
  .word 0xa2030003
  .word 0x1000ffab
  .word 0x26100004
  .word 0xc68a0058
  .word 0xc6830040
  .word 0xc689005c
  .word 0xc6820044
  .word 0xc6810028
  .word 0xc680002c
  .word 0x46055282
  .word 0x46035280
  .word 0x460548c2
  .word 0x46021a40
  .word 0x460508c2
  .word 0x46050082
  .word 0xc6810010
  .word 0xc6800014
  .word 0x46011840
  .word 0x46001000
  .word 0x460a0841
  .word 0x46090001
  .word 0x46060842
  .word 0x46060002
  .word 0x460a0840
  .word 0x46090000
  .word 0xe6c10000
  .word 0xe6c00004
  .word 0x1000ff95
  .word 0x26d60008
  .word 0x8fb500e0
  .word 0x8ea60000
  .word 0x0260282d
  .word 0x8ea30004
  .word 0x8ea20008
  .word 0x8fa40118
  .word 0x02463021
  .word 0x02431821
  .word 0x30c6ffff
  .word 0x02421021
  .word 0x3067ffff
  .word 0x0c124c84
  .word 0x3048ffff
  .word 0x8fa40118
  .word 0x0260282d
  .word 0x0c124c8c
  .word 0x02e0302d
  .word 0x8fa200c0
  .word 0x27c3fffd
  .word 0x26730008
  .word 0x24420001
  .word 0xafa200c0
  .word 0x0043102b
  .word 0x1440ffe9
  .word 0x26b5000c
  .word 0x1000ff89
  .word 0x7ba200b0
  .word 0xdfbf00a0
  .word 0xc7b50004
  .word 0x7bbe0090
  .word 0xc7b40000
  .word 0x7bb70080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd0140
  .word 0x00000000
}

// FUN_004A6CE0
asm long FUN_004a6ce0(u32 param_1,long param_2,u8 *param_3,u32 *param_4,
                 u64 param_5)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x00e0b02d
  .word 0x7fb40050
  .word 0x0080a82d
  .word 0x7fb30040
  .word 0x00a0a02d
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x00c0802d
  .word 0x12a00052
  .word 0x46006506
  .word 0x0c130824
  .word 0x8ea40134
  .word 0x0040b82d
  .word 0x8ea20010
  .word 0x30420002
  .word 0x10400005
  .word 0x00000000
  .word 0x24130002
  .word 0x641100ff
  .word 0x10000004
  .word 0x24120001
  .word 0x24130001
  .word 0x0000882d
  .word 0x0000902d
  .word 0x0c12aa98
  .word 0x00000000
  .word 0xc60d0004
  .word 0x0c12ab80
  .word 0xc60c0000
  .word 0x4600a306
  .word 0x0c12ab68
  .word 0x4600a346
  .word 0xc6a00008
  .word 0x44806000
  .word 0x0c12ab80
  .word 0x46000347
  .word 0x02921021
  .word 0x323100ff
  .word 0x90430000
  .word 0x92820000
  .word 0x02231824
  .word 0x00031a00
  .word 0x00431825
  .word 0x1860002d
  .word 0x00000000
  .word 0x28620080
  .word 0x1440000e
  .word 0x00000000
  .word 0x8ea20124
  .word 0x00621823
  .word 0x0460002a
  .word 0x00000000
  .word 0x8ea20128
  .word 0x0062082a
  .word 0x10200026
  .word 0x00000000
  .word 0x8ea2012c
  .word 0x00031840
  .word 0x00431021
  .word 0x10000005
  .word 0x84420000
  .word 0x00031040
  .word 0x02a21021
  .word 0x84420024
  .word 0x00000000
  .word 0x0440000f
  .word 0x0293a021
  .word 0x00021140
  .word 0x02e28021
  .word 0x8e020004
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e040018
  .word 0x0c12b39c
  .word 0x02c0282d
  .word 0xc6010000
  .word 0xc6a0000c
  .word 0x44806800
  .word 0x0c12ab80
  .word 0x46000b00
  .word 0x00000000
  .word 0x02541021
  .word 0x90430000
  .word 0x92820000
  .word 0x02231824
  .word 0x00031a00
  .word 0x00431825
  .word 0x1c60ffd5
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x10000003
  .word 0x02a0102d
  .word 0x1000ffe3
  .word 0x2402ffff
  .word 0xdfbf0090
  .word 0x7bb70080
  .word 0xc7b40000
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd00a0
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A6EB0
asm long FUN_004a6eb0(float param_1,long param_2,u8 *param_3,float *param_4,float *param_5)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0x3c020096
  .word 0xffbf00b0
  .word 0x7fbe00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x0080a82d
  .word 0x7fb30050
  .word 0x00a0a02d
  .word 0x7fb20040
  .word 0x00e0982d
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b80010
  .word 0xafa600fc
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0xc455ef58
  .word 0x12a0018f
  .word 0x46006606
  .word 0x0c130824
  .word 0x8ea40134
  .word 0x7fa200d0
  .word 0x8ea20010
  .word 0x30420002
  .word 0x10400006
  .word 0x00000000
  .word 0x24020002
  .word 0x641000ff
  .word 0xafa200e0
  .word 0x10000005
  .word 0x24170001
  .word 0x24020001
  .word 0x0000802d
  .word 0xafa200e0
  .word 0x0000b82d
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x8fa200fc
  .word 0xc44d0004
  .word 0x0c12ab80
  .word 0xc44c0000
  .word 0x4600c306
  .word 0x0c12ab68
  .word 0x4600c346
  .word 0xc6a00008
  .word 0x44806000
  .word 0x0c12ab80
  .word 0x46000347
  .word 0x0c12ab98
  .word 0x00000000
  .word 0x0040f02d
  .word 0x02a0202d
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0c12a558
  .word 0x0280282d
  .word 0x320200ff
  .word 0x02971821
  .word 0x7fa200c0
  .word 0x4480a000
  .word 0x3c023f80
  .word 0x90650000
  .word 0x44820800
  .word 0x92840000
  .word 0x0000902d
  .word 0x0000882d
  .word 0x46000d83
  .word 0x3c020096
  .word 0x8c42ed64
  .word 0x7ba300c0
  .word 0x00651824
  .word 0x00031a00
  .word 0x00832025
  .word 0x18800137
  .word 0x4600a5c6
  .word 0x3c160096
  .word 0x26d60090
  .word 0x28830080
  .word 0x1460000e
  .word 0x00000000
  .word 0x8ea30124
  .word 0x00832023
  .word 0x04800150
  .word 0x00000000
  .word 0x8ea30128
  .word 0x0083082a
  .word 0x1020014c
  .word 0x00000000
  .word 0x8ea3012c
  .word 0x00042040
  .word 0x00641821
  .word 0x10000005
  .word 0x84640000
  .word 0x00041840
  .word 0x02a31821
  .word 0x84640024
  .word 0x00000000
  .word 0x8fa300e0
  .word 0x04800114
  .word 0x0283a021
  .word 0x7ba300d0
  .word 0x00042140
  .word 0x00648021
  .word 0x8e030004
  .word 0x1072013c
  .word 0x00000000
  .word 0x00000000
  .word 0x1620013f
  .word 0x00000000
  .word 0x8e020004
  .word 0x1052000c
  .word 0x00000000
  .word 0x90450050
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x24040009
  .word 0x8e030004
  .word 0x8ec20000
  .word 0x8c650000
  .word 0x0040f809
  .word 0x24040001
  .word 0x8e120004
  .word 0x00000000
  .word 0x3c020096
  .word 0x8e630068
  .word 0x8c42ed64
  .word 0x10600008
  .word 0x0000882d
  .word 0x8e640064
  .word 0x30830002
  .word 0x10600004
  .word 0x00000000
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae630064
  .word 0x27a30134
  .word 0xac600000
  .word 0xe4570000
  .word 0x27a30138
  .word 0xe4750000
  .word 0xc7a10134
  .word 0xc7a00138
  .word 0xe4410004
  .word 0xe4400008
  .word 0xc6000008
  .word 0xe440001c
  .word 0xc6000014
  .word 0xe4400020
  .word 0x8e630064
  .word 0x30630001
  .word 0x10600020
  .word 0xe7b70130
  .word 0xc6620048
  .word 0x4616a182
  .word 0xc6610030
  .word 0x46061082
  .word 0xc665004c
  .word 0x46011080
  .word 0xc6600034
  .word 0x46062842
  .word 0x46000840
  .word 0x46001024
  .word 0x44040000
  .word 0xc6640050
  .word 0x46000824
  .word 0xc6630054
  .word 0x44030000
  .word 0xc6610038
  .word 0x46062102
  .word 0xc660003c
  .word 0x460618c2
  .word 0x46012080
  .word 0xa044000c
  .word 0xa043000d
  .word 0x46001840
  .word 0x46001024
  .word 0x44030000
  .word 0x46000824
  .word 0xa043000e
  .word 0x44030000
  .word 0x1000000a
  .word 0xa043000f
  .word 0x00000000
  .word 0x92630060
  .word 0xa043000c
  .word 0x92630061
  .word 0xa043000d
  .word 0x92630062
  .word 0xa043000e
  .word 0x92630063
  .word 0xa043000f
  .word 0x27a30128
  .word 0xe4750000
  .word 0x3c043f80
  .word 0x27a30124
  .word 0xac640000
  .word 0xc7a00128
  .word 0xc7a10124
  .word 0xe4570024
  .word 0xe4410028
  .word 0xe440002c
  .word 0xc6000008
  .word 0xe4400040
  .word 0xc600000c
  .word 0xe4400044
  .word 0x8e630064
  .word 0x30630001
  .word 0x1060001f
  .word 0xe7b70120
  .word 0xc6620018
  .word 0x4616a182
  .word 0xc6610000
  .word 0x46061082
  .word 0xc665001c
  .word 0x46011080
  .word 0xc6600004
  .word 0x46062842
  .word 0x46000840
  .word 0x46001024
  .word 0x44040000
  .word 0xc6640020
  .word 0x46000824
  .word 0xc6630024
  .word 0x44030000
  .word 0xc6610008
  .word 0x46062102
  .word 0xc660000c
  .word 0x460618c2
  .word 0x46012080
  .word 0xa0440030
  .word 0xa0430031
  .word 0x46001840
  .word 0x46001024
  .word 0x44030000
  .word 0x46000824
  .word 0xa0430032
  .word 0x44030000
  .word 0x10000009
  .word 0xa0430033
  .word 0x92630060
  .word 0xa0430030
  .word 0x92630061
  .word 0xa0430031
  .word 0x92630062
  .word 0xa0430032
  .word 0x92630063
  .word 0xa0430033
  .word 0x27a30114
  .word 0xc6020000
  .word 0xac600000
  .word 0x27a30118
  .word 0xe4750000
  .word 0xc7a10114
  .word 0xc7a00118
  .word 0x4602b880
  .word 0xe4420048
  .word 0xe441004c
  .word 0xe4400050
  .word 0xc6000010
  .word 0xe4400064
  .word 0xc6000014
  .word 0xe4400068
  .word 0x8e630064
  .word 0x30630001
  .word 0x10600022
  .word 0xe7a20110
  .word 0xc6050000
  .word 0xc6640048
  .word 0xc6620050
  .word 0xc6600030
  .word 0xc6610054
  .word 0xc663004c
  .word 0x4605a140
  .word 0x4605b182
  .word 0x46062102
  .word 0x46002000
  .word 0x46061142
  .word 0x46060902
  .word 0x46000024
  .word 0x44030000
  .word 0xc6620034
  .word 0x460618c2
  .word 0xc6610038
  .word 0x460218c0
  .word 0xc660003c
  .word 0x46012880
  .word 0x46002040
  .word 0xa0430054
  .word 0x46001824
  .word 0x44030000
  .word 0x46001024
  .word 0xa0430055
  .word 0x44030000
  .word 0x46000824
  .word 0xa0430056
  .word 0x44030000
  .word 0x1000000a
  .word 0xa0430057
  .word 0x00000000
  .word 0x92630060
  .word 0xa0430054
  .word 0x92630061
  .word 0xa0430055
  .word 0x92630062
  .word 0xa0430056
  .word 0x92630063
  .word 0xa0430057
  .word 0x3c043f80
  .word 0xc6020000
  .word 0x27a30104
  .word 0xac640000
  .word 0x27a30108
  .word 0xe4750000
  .word 0xc7a10104
  .word 0xc7a00108
  .word 0x4602b880
  .word 0xe442006c
  .word 0xe4410070
  .word 0xe4400074
  .word 0xc6000010
  .word 0xe4400088
  .word 0xc600000c
  .word 0xe440008c
  .word 0x8e630064
  .word 0x30630001
  .word 0x10600021
  .word 0xe7a20100
  .word 0xc6050000
  .word 0xc6640018
  .word 0xc6620020
  .word 0xc6600000
  .word 0xc6610024
  .word 0xc663001c
  .word 0x4605a140
  .word 0x4605b182
  .word 0x46062102
  .word 0x46002000
  .word 0x46061142
  .word 0x46060902
  .word 0x46000024
  .word 0x44030000
  .word 0xc6620004
  .word 0x460618c2
  .word 0xc6610008
  .word 0x460218c0
  .word 0xc660000c
  .word 0x46012880
  .word 0x46002040
  .word 0xa0430078
  .word 0x46001824
  .word 0x44030000
  .word 0x46001024
  .word 0xa0430079
  .word 0x44030000
  .word 0x46000824
  .word 0xa043007a
  .word 0x44030000
  .word 0x10000009
  .word 0xa043007b
  .word 0x92630060
  .word 0xa0430078
  .word 0x92630061
  .word 0xa0430079
  .word 0x92630062
  .word 0xa043007a
  .word 0x92630063
  .word 0xa043007b
  .word 0x24420090
  .word 0xc6010000
  .word 0x26310006
  .word 0xc6a0000c
  .word 0x46000800
  .word 0x4600bdc0
  .word 0x4600a500
  .word 0x00000000
  .word 0x02f41821
  .word 0x90650000
  .word 0x92840000
  .word 0x7ba300c0
  .word 0x00651824
  .word 0x00031a00
  .word 0x00832025
  .word 0x1c80fece
  .word 0x00000000
  .word 0x00000000
  .word 0x12200018
  .word 0x00000000
  .word 0x3c030096
  .word 0x3c0538e3
  .word 0x8c64ed64
  .word 0x34a38e39
  .word 0x00441023
  .word 0x00620018
  .word 0x00021fc2
  .word 0x00000000
  .word 0x00001010
  .word 0x03c0302d
  .word 0x24070005
  .word 0x000210c3
  .word 0x0c13c7b4
  .word 0x00432821
  .word 0x10400008
  .word 0x00000000
  .word 0x3c050096
  .word 0x0220302d
  .word 0x24040003
  .word 0x0c13c7f4
  .word 0x24a5ea60
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x8fa200fc
  .word 0x44800000
  .word 0xc4410000
  .word 0x46010018
  .word 0x4618b81c
  .word 0x0c12ab54
  .word 0xe4400000
  .word 0x10000023
  .word 0x02a0102d
  .word 0x1000febd
  .word 0x2404ffff
  .word 0x2a21017b
  .word 0x1420fee0
  .word 0x00000000
  .word 0x1000fec2
  .word 0x00000000
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c64ed64
  .word 0x3c0338e3
  .word 0x00441023
  .word 0x34638e39
  .word 0x00620018
  .word 0x00021fc2
  .word 0x00000000
  .word 0x00001010
  .word 0x03c0302d
  .word 0x24070005
  .word 0x000210c3
  .word 0x0c13c7b4
  .word 0x00432821
  .word 0x1040feb3
  .word 0x00000000
  .word 0x3c050096
  .word 0x0220302d
  .word 0x24040003
  .word 0x0c13c7f4
  .word 0x24a5ea60
  .word 0x0c13c7e0
  .word 0x00000000
  .word 0x1000feaa
  .word 0x00000000
  .word 0x00000000
  .word 0xdfbf00b0
  .word 0x7bbe00a0
  .word 0xc7b80010
  .word 0x7bb70090
  .word 0xc7b7000c
  .word 0x7bb60080
  .word 0xc7b60008
  .word 0x7bb50070
  .word 0xc7b50004
  .word 0x7bb40060
  .word 0xc7b40000
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x03e00008
  .word 0x27bd0140
  .word 0x00000000
}

// FUN_004A7620
asm u64 FUN_004a7620(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x0000302d
  .word 0xffbf0040
  .word 0x0000382d
  .word 0x7fb30030
  .word 0x0000402d
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c840130
  .word 0x0004082a
  .word 0x10200015
  .word 0x3412ffff
  .word 0x3c020096
  .word 0x24030001
  .word 0x8c45f984
  .word 0x8ca20000
  .word 0x1840000b
  .word 0x00000000
  .word 0x0052082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040902d
  .word 0x00c2082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0040302d
  .word 0x0060382d
  .word 0x00000000
  .word 0x25080001
  .word 0x0104102a
  .word 0x1440fff0
  .word 0x24a50004
  .word 0x1ce00003
  .word 0x00000000
  .word 0x10000054
  .word 0x0260102d
  .word 0x3c020003
  .word 0x00d28023
  .word 0x34450190
  .word 0x26110001
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00112040
  .word 0x10400049
  .word 0x00000000
  .word 0x0011082a
  .word 0x1020002c
  .word 0x0000302d
  .word 0x2a210009
  .word 0x1420001b
  .word 0x2605fff9
  .word 0x0220082a
  .word 0x14200007
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0221082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24030001
  .word 0x10600010
  .word 0x00000000
  .word 0x0040382d
  .word 0x2404ffff
  .word 0xa4e40000
  .word 0x24c60008
  .word 0xa4e40002
  .word 0x00c5182a
  .word 0xa4e40004
  .word 0xa4e40006
  .word 0xa4e40008
  .word 0xa4e4000a
  .word 0xa4e4000c
  .word 0xa4e4000e
  .word 0x1460fff5
  .word 0x24e70010
  .word 0x00000000
  .word 0x00d1082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x00061840
  .word 0x26050001
  .word 0x00433821
  .word 0x2404ffff
  .word 0x24c60001
  .word 0xa4e40000
  .word 0x00c5182a
  .word 0x24e70002
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x8e630130
  .word 0x0003082a
  .word 0x10200013
  .word 0x0000282d
  .word 0x0000302d
  .word 0x3c030096
  .word 0x8c64f984
  .word 0x00862021
  .word 0x8c840000
  .word 0x18800006
  .word 0x00000000
  .word 0x00922023
  .word 0x00042040
  .word 0x00442021
  .word 0xa4850000
  .word 0x00000000
  .word 0x8e640130
  .word 0x24a50001
  .word 0x00a4202a
  .word 0x1480fff2
  .word 0x24c60004
  .word 0x00000000
  .word 0xae710128
  .word 0xae720124
  .word 0x1000ffad
  .word 0xae62012c
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_004A7820
asm long FUN_004a7820(long param_1,u64 param_2,u32 param_3,u32 param_4)
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
  .word 0x00a0a02d
  .word 0x7fb20030
  .word 0x0080982d
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xafa60114
  .word 0xafa70110
  .word 0x0c13447c
  .word 0xe7b40000
  .word 0xafa2010c
  .word 0x3c020096
  .word 0x0c134474
  .word 0x8c44ed80
  .word 0xae600000
  .word 0x0260b02d
  .word 0x8e720130
  .word 0x16400002
  .word 0x0000882d
  .word 0x24120100
  .word 0x26620024
  .word 0x8e640134
  .word 0x7fa200d0
  .word 0x0240282d
  .word 0x3c020096
  .word 0x8c50f984
  .word 0x3c020003
  .word 0x0c1307dc
  .word 0x34460190
  .word 0x0c130824
  .word 0x8e640134
  .word 0x0040b82d
  .word 0x00123140
  .word 0x02e0202d
  .word 0x0c148502
  .word 0x0000282d
  .word 0x8fa40110
  .word 0x8fa60114
  .word 0x0c130154
  .word 0x24050100
  .word 0x3c020096
  .word 0x3c150096
  .word 0x24420174
  .word 0x26b5f584
  .word 0xafa200e0
  .word 0x2785af80
  .word 0x8fa40110
  .word 0x0280302d
  .word 0x8c420000
  .word 0x0040f809
  .word 0x02a0382d
  .word 0x0040f02d
  .word 0x27c2ffff
  .word 0x2c410002
  .word 0x10200137
  .word 0x00000000
  .word 0x3c020096
  .word 0x0c133170
  .word 0x8c44ed6c
  .word 0x24020001
  .word 0x17c20018
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c1e0096
  .word 0x8c46ed6c
  .word 0x27de0134
  .word 0x02a0202d
  .word 0x2785af88
  .word 0x8fc20000
  .word 0x0040f809
  .word 0x0280382d
  .word 0x0c1301b0
  .word 0x02a0202d
  .word 0x1040009c
  .word 0x00000000
  .word 0x8fc20000
  .word 0x02a0202d
  .word 0x2785af90
  .word 0x0040f809
  .word 0x0280302d
  .word 0x0280202d
  .word 0x0c134498
  .word 0x02a0282d
  .word 0x10000005
  .word 0xafa20108
  .word 0x0280202d
  .word 0x0c134498
  .word 0x02a0282d
  .word 0xafa20108
  .word 0x8fa20108
  .word 0x10400112
  .word 0x00000000
  .word 0xae620014
  .word 0x8c420000
  .word 0x8fa40110
  .word 0x8fa60114
  .word 0x8c54000c
  .word 0x8c550010
  .word 0x0c130154
  .word 0x24050100
  .word 0x8fa200e0
  .word 0x2785af94
  .word 0x8fa40110
  .word 0x8c420000
  .word 0x0040f809
  .word 0x27a6012c
  .word 0x44940000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x0000f02d
  .word 0x46800020
  .word 0xafa000f0
  .word 0x3c020096
  .word 0x24420178
  .word 0x7fa200c0
  .word 0x3c020096
  .word 0x2442017c
  .word 0x46000d43
  .word 0x7fa200b0
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000d03
  .word 0x16d300d2
  .word 0x00000000
  .word 0x8fa40110
  .word 0x8fa60114
  .word 0x0c130154
  .word 0x24050100
  .word 0x104000cc
  .word 0x00000000
  .word 0x8fa200e0
  .word 0x3c050078
  .word 0x8fa40110
  .word 0x24a5e360
  .word 0x27a60128
  .word 0x27a70124
  .word 0x27a8011c
  .word 0x27a90120
  .word 0x8c420000
  .word 0x0040f809
  .word 0x27aa0118
  .word 0x24030005
  .word 0x1443ffeb
  .word 0x00000000
  .word 0x8fa20128
  .word 0x3c010001
  .word 0x0041082a
  .word 0x14200003
  .word 0x00000000
  .word 0x1000ffe4
  .word 0x0000b02d
  .word 0x3c020096
  .word 0x8c42f988
  .word 0x0222082a
  .word 0x1020004f
  .word 0x00000000
  .word 0x00000000
  .word 0x8fa20128
  .word 0x28410080
  .word 0x102000a5
  .word 0x00000000
  .word 0x00021840
  .word 0x7ba200d0
  .word 0x00431021
  .word 0xa4510000
  .word 0x00111140
  .word 0xc7a00124
  .word 0x02e23821
  .word 0x3c023f00
  .word 0x26310001
  .word 0x44820800
  .word 0x27de0004
  .word 0x0232182a
  .word 0x8fa200f0
  .word 0x46800020
  .word 0x24420020
  .word 0xafa200f0
  .word 0x46000800
  .word 0x8fa20108
  .word 0x46150002
  .word 0xe4e00008
  .word 0xc7a0011c
  .word 0x46800020
  .word 0x46000800
  .word 0x46140002
  .word 0xe4e0000c
  .word 0xc7a00120
  .word 0x46800020
  .word 0x46000800
  .word 0x46150002
  .word 0xe4e00010
  .word 0xc7a00118
  .word 0x46800020
  .word 0x46000800
  .word 0x46140002
  .word 0xe4e00014
  .word 0xace20004
  .word 0x8fa60120
  .word 0x8fa50124
  .word 0x8fa40118
  .word 0x8fa2011c
  .word 0x00c52823
  .word 0x44850000
  .word 0x00821023
  .word 0x46800060
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0xe4e00000
  .word 0x1460ffa6
  .word 0xa0e0001c
  .word 0x8e640134
  .word 0x3c020003
  .word 0x24050020
  .word 0x0c1307dc
  .word 0x34460190
  .word 0x0c130824
  .word 0x8e640134
  .word 0x0040b82d
  .word 0x0000282d
  .word 0x8fa200f0
  .word 0x24060400
  .word 0x26520020
  .word 0x0c148502
  .word 0x02e22021
  .word 0x1000ff96
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c134498
  .word 0x0000282d
  .word 0x1000ff6f
  .word 0xafa20108
  .word 0x24540020
  .word 0x3c020003
  .word 0x34450190
  .word 0x7ba200c0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00142080
  .word 0x0040a82d
  .word 0x0200282d
  .word 0x3c020096
  .word 0x02a0202d
  .word 0x8c42f988
  .word 0x0c148494
  .word 0x00023080
  .word 0x3c020096
  .word 0x8c42f988
  .word 0x0054082a
  .word 0x10200039
  .word 0x00000000
  .word 0x02821823
  .word 0x28610009
  .word 0x14200027
  .word 0x2685fff8
  .word 0x0282082a
  .word 0x0000202d
  .word 0x1420003d
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0281082a
  .word 0x10200038
  .word 0x00000000
  .word 0x10000036
  .word 0x24030001
  .word 0x00000000
  .word 0x3c030096
  .word 0x8c63f988
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0061082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24040001
  .word 0x10800011
  .word 0x00000000
  .word 0x00021880
  .word 0x2404ffff
  .word 0x02a33021
  .word 0x00000000
  .word 0xacc40000
  .word 0xacc40004
  .word 0x24420008
  .word 0xacc40008
  .word 0x0045182a
  .word 0xacc4000c
  .word 0xacc40010
  .word 0xacc40014
  .word 0xacc40018
  .word 0xacc4001c
  .word 0x1460fff5
  .word 0x24c60020
  .word 0x0054082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x00021880
  .word 0x2404ffff
  .word 0x02a32821
  .word 0x24420001
  .word 0xaca40000
  .word 0x0054182a
  .word 0x24a50004
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x12000005
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x3c030096
  .word 0x3c020096
  .word 0x02a0802d
  .word 0xac75f984
  .word 0x1000ff5d
  .word 0xac54f988
  .word 0x1060ffd3
  .word 0x00000000
  .word 0x1000ffc9
  .word 0x00000000
  .word 0x8e630010
  .word 0x021e1021
  .word 0x34630002
  .word 0xae630010
  .word 0x8fa30128
  .word 0x1000ff5a
  .word 0xac430000
  .word 0x00000000
  .word 0x16d3001f
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c129d88
  .word 0xae710130
  .word 0x3c020096
  .word 0x8c44f984
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x2405ffff
  .word 0x8c42f988
  .word 0x0c148502
  .word 0x00023080
  .word 0x8fa40118
  .word 0x3c020047
  .word 0x8fa3011c
  .word 0x2442bfb0
  .word 0x00831823
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0xe6600004
  .word 0xc7a1012c
  .word 0xc6600004
  .word 0x46800860
  .word 0x46000803
  .word 0xe6600008
  .word 0xae60000c
  .word 0x10000002
  .word 0xae620138
  .word 0x0000b02d
  .word 0x0c134474
  .word 0x8fa4010c
  .word 0x02c0102d
  .word 0xdfbf00a0
  .word 0x7bbe0090
  .word 0xc7b50004
  .word 0x7bb70080
  .word 0xc7b40000
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd0130
  .word 0x00000000
}

// FUN_004A7E40 NONMATCHING

u32 * FUN_004a7e40(u32 *param_1,u32 param_2,u32 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  u8 bVar5;
  u8 bVar6;
  u32 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  u64 uVar13;
  int iVar14;
  u32 uVar15;
  u32 *puVar16;
  float *pfVar17;
  int iVar18;
  char *pcVar19;
  u32 unaff_s3;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  int *piStack_130;
  u32 uStack_12c;
  int iStack_d0;
  int iStack_c0;
  int iStack_b0;
  int iStack_a0;
  int iStack_78;
  int iStack_74;
  u32 *puStack_5c;
  int iStack_54;
  int iStack_50;
  u32 uStack_40;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_4;
  
  uStack_40 = 0;
  uVar7 = ((code)FUN_004d11f0)();
  ((code)FUN_004d11d0)(DAT_0095ed80);
  *param_1 = 0;
  iVar14 = DAT_0095f984;
  iVar20 = 0;
  iStack_50 = param_1[0x4c];
  if (iStack_50 == 0) {
    iStack_50 = 0x100;
  }
  ((code)FUN_004c1f70)(param_1[0x4d],iStack_50,0x30190);
  iStack_54 = ((code)FUN_004c2090)(param_1[0x4d]);
  ((code)FUN_00521408)(iStack_54,0,iStack_50 << 5);
  iStack_10 = 0;
  iStack_18 = 0;
  iStack_14 = 0;
  iStack_a0 = 0;
  iStack_b0 = 0;
  puStack_5c = param_1;
LAB_004a7f58:
  do {
    while( 1 ) {
      pcVar19 = (char *)0x0;
      if ((((3 < uStack_40) || (lVar12 = ((code)FUN_004c0550)(param_4,0x100,param_3), lVar12 == 0)) ||
          (lVar12 = (*DAT_00960174)(param_4,0x7cdc70,param_2,(u8 *)DAT_0095f584), lVar12 == 0)) ||
         ((lVar12 != 1 && (lVar12 != 2)))) {
        if (iStack_10 != 0) {
          ((code)FUN_004cbeb0)(iStack_10);
        }
        if (puStack_5c == param_1) {
          param_1[0x4c] = iVar20;
          ((code)FUN_004a7620)(param_1);
          if (DAT_0095f984 != 0) {
            ((code)FUN_00521408)(DAT_0095f984,0xffffffffffffffff,DAT_0095f988 << 2);
          }
          param_1[0x4e] = (u32)(FUN_0046bfb0);
        }
        ((code)FUN_004d11d0)(uVar7);
        return puStack_5c;
      }
      ((code)FUN_004cc5c0)(DAT_0095ed6c);
      if (lVar12 == 1) {
        uVar13 = ((code)FUN_004d1260)(param_2,0);
        piStack_130 = (int *)uVar13;
        uStack_12c = (u32)((u32)uVar13 >> 0x20);
      }
      else {
        uVar13 = ((code)FUN_004d1260)(param_2,(u8 *)DAT_0095f584);
        piStack_130 = (int *)uVar13;
        uStack_12c = (u32)((u32)uVar13 >> 0x20);
      }
      if (CONCAT44(uStack_12c,piStack_130) != 0) break;
      puStack_5c = (u32 *)0x0;
      uStack_40 = 4;
    }
    param_1[uStack_40 + 5] = (u32)(piStack_130);
    iVar2 = *piStack_130;
    iVar3 = *(int *)(iVar2 + 0x10);
    iVar4 = *(int *)(iVar2 + 0xc);
    if (iStack_10 != 0) {
      if (iStack_14 == iVar4) {
        if (iStack_18 != iVar3) {
          ((code)FUN_004cbeb0)(iStack_10);
          iStack_10 = 0;
        }
      }
      else {
        ((code)FUN_004cbeb0)(iStack_10);
        iStack_10 = 0;
      }
    }
    if (iStack_10 == 0) {
      uVar13 = ((code)FUN_004cbe00)(iVar4,iVar3,0x20);
      iStack_10 = (int)uVar13;
      ((code)FUN_004cbf20)(uVar13);
    }
    ((code)FUN_004cdc70)(iStack_10,iVar2);
    fVar22 = 1.0 / (float)iVar3;
    ((code)FUN_004c0550)(param_4,0x100,param_3);
    (*DAT_00960174)(param_4,0x7cdc84,&iStack_4);
    iStack_74 = 0;
    iVar9 = 1;
    iVar2 = *(int *)(iStack_10 + 0x14);
    iVar8 = *(int *)(iStack_10 + 0xc) >> 3;
    iVar21 = iStack_74;
    if (1 < iVar3) {
      do {
        lVar12 = ((code)FUN_005211b8)(iVar2,iVar2 + *(int *)(iStack_10 + 0x10) * iVar9,iVar8);
        iVar21 = iVar9;
        if (lVar12 == 0) break;
        iVar9 = iVar9 + 1;
        iVar21 = iStack_74;
      } while (iVar9 < iVar3);
    }
    iStack_74 = iVar21;
    iStack_18 = iVar3;
    iStack_14 = iVar4;
    if (0 < iStack_74) {
      iStack_d0 = 0;
LAB_004a815c:
      if ((iStack_d0 < iVar3) && (puStack_5c == param_1)) {
        iStack_78 = 0;
        iVar21 = 1;
        fVar23 = ((float)iStack_d0 + 2.5) * fVar22;
        iStack_c0 = iVar8;
        do {
          if ((iVar4 <= iVar21) || (puStack_5c != param_1)) goto LAB_004a8870;
          lVar12 = ((code)FUN_005211b8)(iVar2,iVar2 + *(int *)(iStack_10 + 0x10) * iStack_d0 + iStack_c0,
                                iVar8);
          uVar15 = unaff_s3;
          if (lVar12 == 0) {
            if (iVar21 - iStack_78 == 1) goto LAB_004a8870;
            if (((pcVar19 == (char *)0x0) || (*pcVar19 == '\n')) || (*pcVar19 == '\0')) {
              ((code)FUN_004c0550)(param_4,0x100,param_3);
              pcVar19 = param_4;
            }
            else if ((int)pcVar19 - (int)param_4 < 0x80) {
              if (0x7f < (int)pcVar19 - (int)param_4) {
                iVar9 = (*DAT_00960164)(pcVar19);
                ((code)FUN_00521250)(param_4,pcVar19,iVar9 + 1);
                if (param_4[iVar9 + -1] == '\n') {
                  iVar9 = iVar9 + -1;
                }
                ((code)FUN_004c0550)(param_4 + iVar9,0x100 - iVar9,param_3);
                pcVar19 = param_4;
              }
            }
            else {
              iVar9 = (*DAT_00960164)(pcVar19);
              if (pcVar19 + (iVar9 - (int)param_4) == (char *)0xff) {
                ((code)FUN_00521250)(param_4,pcVar19,iVar9 + 1);
                if (param_4[iVar9 + -1] == '\n') {
                  iVar9 = iVar9 + -1;
                }
                ((code)FUN_004c0550)(param_4 + iVar9,0x100 - iVar9,param_3);
                pcVar19 = param_4;
              }
            }
            iVar9 = DAT_0095f988;
            cVar1 = *pcVar19;
            uVar15 = (u32)cVar1;
            if ((uVar15 & 0x80) == 0) {
              iVar11 = 1;
            }
            else if ((uVar15 & 0xe0) == 0xc0) {
              iVar11 = 2;
              uVar15 = (long)(int)(((int)cVar1 & 0x1fU) << 6) | (long)pcVar19[1] & 0x3fU;
            }
            else if ((uVar15 & 0xf0) == 0xe0) {
              iVar11 = 3;
              uVar15 = (long)pcVar19[2] & 0x3fU |
                       (long)(int)(((int)cVar1 & 0xfU) << 0xc | ((int)pcVar19[1] & 0x3fU) << 6);
            }
            else if ((uVar15 & 0xf8) == 0xf0) {
              iVar11 = 4;
              uVar15 = (long)pcVar19[3] & 0x3fU |
                       (long)(int)(((int)pcVar19[2] & 0x3fU) << 6 |
                                  ((int)cVar1 & 7U) << 0x12 | ((int)pcVar19[1] & 0x3fU) << 0xc);
            }
            else if ((uVar15 & 0xfc) == 0xf8) {
              iVar11 = 5;
              uVar15 = (long)pcVar19[4] & 0x3fU |
                       (long)(int)(((int)pcVar19[3] & 0x3fU) << 6 |
                                  ((int)pcVar19[2] & 0x3fU) << 0xc |
                                  ((int)cVar1 & 3U) << 0x18 | ((int)pcVar19[1] & 0x3fU) << 0x12);
            }
            else if ((uVar15 & 0xfe) == 0xfc) {
              iVar11 = 6;
              uVar15 = (long)pcVar19[5] & 0x3fU |
                       (long)(int)(((int)pcVar19[4] & 0x3fU) << 6 |
                                  ((int)pcVar19[3] & 0x3fU) << 0xc |
                                  ((int)pcVar19[2] & 0x3fU) << 0x12 |
                                  ((int)cVar1 & 1U) << 0x1e | ((int)pcVar19[1] & 0x3fU) << 0x18);
            }
            else {
              iVar11 = -1;
              uVar15 = unaff_s3;
            }
            if ((iVar11 < 1) || (0xffff < (long)uVar15)) {
              uStack_40 = 4;
              puStack_5c = (u32 *)0x0;
              iStack_78 = iVar21;
            }
            else {
              pcVar19 = pcVar19 + iVar11;
              iVar11 = DAT_0095f984;
              iVar18 = DAT_0095f988;
              iVar10 = iVar14;
              if (DAT_0095f988 <= iVar20) {
                iVar18 = DAT_0095f988 + 0x20;
                iVar10 = (*DAT_00960178)(iVar18 * 4,0x30190);
                ((code)FUN_00521250)(iVar10,iVar14,DAT_0095f988 << 2);
                if (DAT_0095f988 < iVar18) {
                  iVar11 = DAT_0095f988;
                  if (8 < iVar18 - DAT_0095f988) {
                    bVar5 = 0;
                    bVar6 = 0;
                    if ((DAT_0095f988 <= iVar18) && (iVar18 < 0x7fffffff)) {
                      bVar6 = 1;
                    }
                    if ((bVar6) && (DAT_0095f988 < 0x7fffffff)) {
                      bVar5 = 1;
                    }
                    if (bVar5) {
                      puVar16 = (u32 *)(iVar10 + DAT_0095f988 * 4);
                      do {
                        *puVar16 = 0xffffffff;
                        puVar16[1] = 0xffffffff;
                        iVar11 = iVar11 + 8;
                        puVar16[2] = 0xffffffff;
                        puVar16[3] = 0xffffffff;
                        puVar16[4] = 0xffffffff;
                        puVar16[5] = 0xffffffff;
                        puVar16[6] = 0xffffffff;
                        puVar16[7] = 0xffffffff;
                        puVar16 = puVar16 + 8;
                      } while (iVar11 < iVar9 + 0x18);
                    }
                  }
                  if (iVar11 < iVar18) {
                    puVar16 = (u32 *)(iVar10 + iVar11 * 4);
                    do {
                      iVar11 = iVar11 + 1;
                      *puVar16 = 0xffffffff;
                      puVar16 = puVar16 + 1;
                    } while (iVar11 < iVar18);
                  }
                }
                iVar11 = iVar10;
                if (iVar14 != 0) {
                  (*DAT_0096017c)(iVar14);
                }
              }
              DAT_0095f988 = iVar18;
              DAT_0095f984 = iVar11;
              if ((long)uVar15 < 0x80) {
                *(short *)((int)param_1 + (int)uVar15 * 2 + 0x24) = (short)iVar20;
              }
              else {
                param_1[4] = param_1[4] | 2;
                *(int *)(iVar10 + iStack_a0) = (int)uVar15;
              }
              iVar14 = iVar20 * 0x20;
              iVar20 = iVar20 + 1;
              pfVar17 = (float *)(iStack_54 + iVar14);
              pfVar17[2] = ((float)iStack_78 + 2.5) * (1.0 / (float)iVar4);
              iStack_a0 = iStack_a0 + 4;
              iStack_b0 = iStack_b0 + 0x20;
              pfVar17[3] = fVar23;
              pfVar17[4] = ((float)iVar21 - 0.5) * (1.0 / (float)iVar4);
              pfVar17[5] = ((float)(iStack_d0 + iStack_74) - 0.5) * fVar22;
              pfVar17[1] = (float)(int)piStack_130;
                         (float)(((iStack_d0 + iStack_74) - iStack_d0) + -3);
              *(char *)(pfVar17 + 7) = (char)uStack_40;
              iStack_78 = iVar21;
              iVar14 = iVar10;
              if (iStack_50 <= iVar20) {
                ((code)FUN_004c1f70)(param_1[0x4d],0x20,0x30190);
                iStack_54 = ((code)FUN_004c2090)(param_1[0x4d]);
                iStack_50 = iStack_50 + 0x20;
                ((code)FUN_00521408)(iStack_54 + iStack_b0,0,0x400);
              }
            }
          }
          iVar21 = iVar21 + 1;
          iStack_c0 = iStack_c0 + iVar8;
          unaff_s3 = uVar15;
        } while( 1 );
      }
      param_1[1] = (float)iStack_74 - 3.0;
      uStack_40 = uStack_40 + 1;
      param_1[2] = (float)iStack_4 / (float)param_1[1];
      param_1[3] = 0;
      goto LAB_004a7f58;
    }
    puStack_5c = (u32 *)0x0;
    uStack_40 = 4;
  } while( 1 );
LAB_004a8870:
  iStack_d0 = iStack_d0 + iStack_74;
  goto LAB_004a815c;
}

// FUN_004A8980
asm u32 * FUN_004a8980(u32 *param_1,u64 param_2,u32 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdfe40
  .word 0x24020001
  .word 0xffbf0090
  .word 0x24050100
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00e0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0xac820000
  .word 0x0000802d
  .word 0x3c023f80
  .word 0xafa6011c
  .word 0xac820004
  .word 0xac800008
  .word 0xac80000c
  .word 0x0260202d
  .word 0x0c130154
  .word 0xafb40118
  .word 0x8e820130
  .word 0x0000b02d
  .word 0x14400003
  .word 0xafa20100
  .word 0x24020100
  .word 0xafa20100
  .word 0x26820024
  .word 0x8fa50100
  .word 0x7fa200c0
  .word 0x3c020096
  .word 0x8e840134
  .word 0x8c51f984
  .word 0x3c020003
  .word 0x0c1307dc
  .word 0x34460190
  .word 0x0c130824
  .word 0x8e840134
  .word 0xafa200fc
  .word 0x0000282d
  .word 0x8fa20100
  .word 0x8fa400fc
  .word 0x0c148502
  .word 0x00023140
  .word 0x3c170096
  .word 0x0260202d
  .word 0x26f70174
  .word 0x2785af98
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x27a60120
  .word 0x24030001
  .word 0x14430181
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c1e0096
  .word 0x24420178
  .word 0x0000902d
  .word 0x7fa200b0
  .word 0x27de0158
  .word 0x3c020096
  .word 0xafa000e0
  .word 0x2442017c
  .word 0xafa000d0
  .word 0x7fa200a0
  .word 0x8fa20118
  .word 0x14540173
  .word 0x00000000
  .word 0x8fa6011c
  .word 0x0260202d
  .word 0x0c130154
  .word 0x24050100
  .word 0x1040016d
  .word 0x00000000
  .word 0x16400075
  .word 0x00000000
  .word 0x82640001
  .word 0x30820080
  .word 0x1040006b
  .word 0x00000000
  .word 0x308300e0
  .word 0x240200c0
  .word 0x14620009
  .word 0x00000000
  .word 0x82630002
  .word 0x3082001f
  .word 0x00022180
  .word 0x24020002
  .word 0x3063003f
  .word 0x10000058
  .word 0x00839025
  .word 0x00000000
  .word 0x308300f0
  .word 0x240200e0
  .word 0x1462000d
  .word 0x00000000
  .word 0x82650002
  .word 0x3082000f
  .word 0x82630003
  .word 0x00022300
  .word 0x24020003
  .word 0x30a5003f
  .word 0x00052980
  .word 0x3063003f
  .word 0x00852025
  .word 0x10000048
  .word 0x00649025
  .word 0x00000000
  .word 0x308300f8
  .word 0x240200f0
  .word 0x14620011
  .word 0x00000000
  .word 0x30820007
  .word 0x82660002
  .word 0x82640003
  .word 0x00022c80
  .word 0x82630004
  .word 0x24020004
  .word 0x30c6003f
  .word 0x00063300
  .word 0x3084003f
  .word 0x00a62825
  .word 0x00042180
  .word 0x00852025
  .word 0x3063003f
  .word 0x10000034
  .word 0x00649025
  .word 0x00000000
  .word 0x308300fc
  .word 0x240200f8
  .word 0x14620015
  .word 0x00000000
  .word 0x82670002
  .word 0x30820003
  .word 0x82650003
  .word 0x00023600
  .word 0x82640004
  .word 0x24020005
  .word 0x82630005
  .word 0x30e7003f
  .word 0x00073c80
  .word 0x30a5003f
  .word 0x3084003f
  .word 0x00c73025
  .word 0x00052b00
  .word 0x00042180
  .word 0x00a62825
  .word 0x3063003f
  .word 0x00852025
  .word 0x1000001c
  .word 0x00649025
  .word 0x00000000
  .word 0x308300fe
  .word 0x240200fc
  .word 0x14620023
  .word 0x00000000
  .word 0x82680002
  .word 0x30820001
  .word 0x82660003
  .word 0x00023f80
  .word 0x82650004
  .word 0x24020006
  .word 0x82640005
  .word 0x82630006
  .word 0x3108003f
  .word 0x00084600
  .word 0x30c6003f
  .word 0x30a5003f
  .word 0x00e83825
  .word 0x00063480
  .word 0x3084003f
  .word 0x00c73025
  .word 0x00052b00
  .word 0x00a62825
  .word 0x00042180
  .word 0x00852025
  .word 0x3063003f
  .word 0x00649025
  .word 0x04400005
  .word 0x00000000
  .word 0x3c010001
  .word 0x0241082a
  .word 0x1420ff8a
  .word 0x00000000
  .word 0x1000ff88
  .word 0xafa00118
  .word 0x0080902d
  .word 0x1000fff6
  .word 0x24020001
  .word 0x00000000
  .word 0x1000fff3
  .word 0x2402ffff
  .word 0x8fc20000
  .word 0x0260202d
  .word 0x0040f809
  .word 0x2785afa0
  .word 0x10400045
  .word 0x00000000
  .word 0x8fc20000
  .word 0x0260202d
  .word 0x0040f809
  .word 0x2785afa8
  .word 0x10400047
  .word 0x00000000
  .word 0x1200ff74
  .word 0x00000000
  .word 0x8ee20000
  .word 0x3c050078
  .word 0x0260202d
  .word 0x24a5e370
  .word 0x27a601b0
  .word 0x0040f809
  .word 0x27a701a0
  .word 0x24030002
  .word 0x104300d3
  .word 0x00000000
  .word 0x8ee20000
  .word 0x3c050078
  .word 0x0260202d
  .word 0x24a5e380
  .word 0x27a601b0
  .word 0x0040f809
  .word 0x27a701a0
  .word 0x24030002
  .word 0x104300cf
  .word 0x00000000
  .word 0x8ee20000
  .word 0x3c050078
  .word 0x0260202d
  .word 0x24a5e390
  .word 0x27a601b0
  .word 0x27a701a0
  .word 0x27a801b4
  .word 0x27a901a4
  .word 0x27aa01b8
  .word 0x0040f809
  .word 0x27ab01a8
  .word 0x24030006
  .word 0x1443000f
  .word 0x00000000
  .word 0x27a201b4
  .word 0xc44e0000
  .word 0xc7ac01b0
  .word 0xc7ad01a0
  .word 0x27a201a4
  .word 0xc44f0000
  .word 0x27a201b8
  .word 0xc4500000
  .word 0x27a201a8
  .word 0xc4510000
  .word 0x0c12ad04
  .word 0x0200202d
  .word 0x1000ff45
  .word 0x8fa20118
  .word 0x8fc20000
  .word 0x3c050078
  .word 0x0260202d
  .word 0x0040f809
  .word 0x24a5e3b0
  .word 0x1440ff3d
  .word 0x00000000
  .word 0x0c12ada8
  .word 0x0200202d
  .word 0x1000ff39
  .word 0x00000000
  .word 0x00000000
  .word 0x0c12b15c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c12b17c
  .word 0x0200202d
  .word 0x1000ff31
  .word 0x00000000
  .word 0x00000000
  .word 0x0c12b090
  .word 0x0200202d
  .word 0xafa20114
  .word 0x0c12b1c4
  .word 0x0040202d
  .word 0x3c020096
  .word 0x8c42f988
  .word 0x02c2082a
  .word 0x10200035
  .word 0x00000000
  .word 0x2a420080
  .word 0x14400008
  .word 0x00000000
  .word 0x8e830010
  .word 0x8fa200e0
  .word 0x34630002
  .word 0x02221021
  .word 0xae830010
  .word 0x10000005
  .word 0xac520000
  .word 0x7ba200c0
  .word 0x00121840
  .word 0x00431021
  .word 0xa4560000
  .word 0x8fa200fc
  .word 0x00161940
  .word 0x0000902d
  .word 0x26d60001
  .word 0x0000802d
  .word 0x00431821
  .word 0x8fa20114
  .word 0xac620018
  .word 0x8fa200e0
  .word 0xc7a001b0
  .word 0x24420004
  .word 0xafa200e0
  .word 0x8fa200d0
  .word 0x24420020
  .word 0xafa200d0
  .word 0x8fa20100
  .word 0x02c2102a
  .word 0x1440ff05
  .word 0xe4600000
  .word 0x8e840134
  .word 0x3c020003
  .word 0x24050020
  .word 0x0c1307dc
  .word 0x34460190
  .word 0x0c130824
  .word 0x8e840134
  .word 0xafa200fc
  .word 0x0000282d
  .word 0x8fa20100
  .word 0x24060400
  .word 0x8fa300fc
  .word 0x24420020
  .word 0xafa20100
  .word 0x8fa200d0
  .word 0x0c148502
  .word 0x00622021
  .word 0x1000fef2
  .word 0x00000000
  .word 0x24500020
  .word 0x3c020003
  .word 0x34450190
  .word 0x7ba200b0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00102080
  .word 0x0040a82d
  .word 0x0220282d
  .word 0x3c020096
  .word 0x02a0202d
  .word 0x8c42f988
  .word 0x0c148494
  .word 0x00023080
  .word 0x3c020096
  .word 0x8c42f988
  .word 0x0050082a
  .word 0x10200038
  .word 0x00000000
  .word 0x02021823
  .word 0x28610009
  .word 0x14200026
  .word 0x2605fff8
  .word 0x0202082a
  .word 0x0000202d
  .word 0x1420003c
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0201082a
  .word 0x10200037
  .word 0x00000000
  .word 0x10000035
  .word 0x24030001
  .word 0x3c030096
  .word 0x8c63f988
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0061082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24040001
  .word 0x10800011
  .word 0x00000000
  .word 0x00021880
  .word 0x2404ffff
  .word 0x02a33021
  .word 0x00000000
  .word 0xacc40000
  .word 0xacc40004
  .word 0x24420008
  .word 0xacc40008
  .word 0x0045182a
  .word 0xacc4000c
  .word 0xacc40010
  .word 0xacc40014
  .word 0xacc40018
  .word 0xacc4001c
  .word 0x1460fff5
  .word 0x24c60020
  .word 0x0050082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x00021880
  .word 0x2404ffff
  .word 0x02a32821
  .word 0x24420001
  .word 0xaca40000
  .word 0x0050182a
  .word 0x24a50004
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x12200005
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x8c420000
  .word 0x0040f809
  .word 0x0220202d
  .word 0x3c030096
  .word 0x3c020096
  .word 0x02a0882d
  .word 0xac75f984
  .word 0x1000ff77
  .word 0xac50f988
  .word 0x1060ffd3
  .word 0x00000000
  .word 0x1000ffc9
  .word 0x00000000
  .word 0xc7ac01b0
  .word 0xc7ad01a0
  .word 0x0c12ac80
  .word 0x0200202d
  .word 0x1000fe92
  .word 0x00000000
  .word 0xc7ac01b0
  .word 0xc7ad01a0
  .word 0x0c12acb0
  .word 0x0200202d
  .word 0x1000fe8c
  .word 0x00000000
  .word 0x8fa20118
  .word 0x10540003
  .word 0x00000000
  .word 0x10000011
  .word 0x8fa20118
  .word 0x0280202d
  .word 0x0c129d88
  .word 0xae960130
  .word 0x3c020096
  .word 0x8c44f984
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x2405ffff
  .word 0x8c42f988
  .word 0x0c148502
  .word 0x00023080
  .word 0x3c02004a
  .word 0x24426ce0
  .word 0x1000ffef
  .word 0xae820138
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
  .word 0x27bd01c0
  .word 0x00000000
}

// FUN_004A90F0
asm u32 * FUN_004a90f0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c44ed68
  .word 0x3c020003
  .word 0x34450199
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200002b
  .word 0x00000000
  .word 0x24030001
  .word 0x3c023f80
  .word 0xae030000
  .word 0x24040020
  .word 0xae020004
  .word 0xae000008
  .word 0x3c020003
  .word 0xae00000c
  .word 0x34450190
  .word 0xae000010
  .word 0xae000014
  .word 0xae000018
  .word 0xae00001c
  .word 0xae000020
  .word 0xae000128
  .word 0xae000130
  .word 0xae000124
  .word 0x0c130754
  .word 0xae00012c
  .word 0xae020134
  .word 0x0000282d
  .word 0x3c02004a
  .word 0x0200202d
  .word 0x24426eb0
  .word 0x2403ffff
  .word 0xae020138
  .word 0xae00013c
  .word 0xae000140
  .word 0xa4830024
  .word 0x24a50008
  .word 0xa4830026
  .word 0x28a20080
  .word 0xa4830028
  .word 0xa483002a
  .word 0xa483002c
  .word 0xa483002e
  .word 0xa4830030
  .word 0xa4830032
  .word 0x1440fff5
  .word 0x24840010
  .word 0x10000002
  .word 0x0200102d
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A91F0
asm void FUN_004a91f0(void)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020096
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c53ed78
  .word 0x12600013
  .word 0x00000000
  .word 0x3c110096
  .word 0x3c100096
  .word 0x2631017c
  .word 0x2610018c
  .word 0x8e220000
  .word 0x0040f809
  .word 0x8e640000
  .word 0x0c12a5ac
  .word 0x8e640004
  .word 0x3c020096
  .word 0x8e030000
  .word 0x8c44ed74
  .word 0x8e720008
  .word 0x0060f809
  .word 0x0260282d
  .word 0x1640fff4
  .word 0x0240982d
  .word 0x00000000
  .word 0x3c020096
  .word 0xac40ed78
  .word 0x3c020096
  .word 0x8c44ed7c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c134344
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac40ed7c
  .word 0x3c020096
  .word 0x8c44ed74
  .word 0x0c130f0c
  .word 0xac60ed80
  .word 0x3c020096
  .word 0x3c030096
  .word 0x8c44ed68
  .word 0x0c130f0c
  .word 0xac60ed74
  .word 0x3c040096
  .word 0x3c030096
  .word 0xac80ed68
  .word 0x8c64f984
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c040096
  .word 0x3c030096
  .word 0xac80f984
  .word 0x8c64ed6c
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c030096
  .word 0xaf80bba4
  .word 0xac60ed6c
  .word 0x3c030096
  .word 0xac60ed70
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_004A9330
asm u32 FUN_004a9330(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c080096
  .word 0xffbf0000
  .word 0x3c020004
  .word 0x8f85afb0
  .word 0x24040144
  .word 0x8f87afb4
  .word 0x24060004
  .word 0x2508e830
  .word 0x0c130ed8
  .word 0x34490199
  .word 0x3c030096
  .word 0x10400040
  .word 0xac62ed68
  .word 0x8f85afb8
  .word 0x3c080096
  .word 0x8f87afbc
  .word 0x3c020004
  .word 0x2404000c
  .word 0x24060004
  .word 0x2508e800
  .word 0x0c130ed8
  .word 0x34490190
  .word 0x3c030096
  .word 0x10400036
  .word 0xac62ed74
  .word 0x3c020104
  .word 0x34450190
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24040051
  .word 0x3c030096
  .word 0x1040002f
  .word 0xac62ed6c
  .word 0x24030051
  .word 0x3c020096
  .word 0xac43ed70
  .word 0x0c12a524
  .word 0x2784afc0
  .word 0x3c050096
  .word 0x0000382d
  .word 0x24a5ea60
  .word 0x0000302d
  .word 0x30c3ffff
  .word 0xa4a60000
  .word 0x24620002
  .word 0x24640003
  .word 0xa4a20002
  .word 0x24630001
  .word 0xa4a40004
  .word 0x24c20004
  .word 0xa4a60006
  .word 0x24e70006
  .word 0xa4a40008
  .word 0x3046ffff
  .word 0xa4a3000a
  .word 0x28e20180
  .word 0x1440fff1
  .word 0x24a5000c
  .word 0x3c020096
  .word 0x0c13430c
  .word 0xac40ed78
  .word 0x3c030096
  .word 0x3c040096
  .word 0xac62ed7c
  .word 0xac82ed80
  .word 0x3c030096
  .word 0x3c020096
  .word 0x3c04004b
  .word 0xac60f984
  .word 0x248498a0
  .word 0x0c12a554
  .word 0xac40f988
  .word 0x24020001
  .word 0x10000006
  .word 0xaf82bba4
  .word 0x10000004
  .word 0x0000102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A9490
asm long FUN_004a9490(long param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x0080882d
  .word 0x12200023
  .word 0x7fb00000
  .word 0x3c020096
  .word 0x8c420164
  .word 0x0040f809
  .word 0x00000000
  .word 0x24500001
  .word 0x3c020096
  .word 0x8c42ed70
  .word 0x0050082b
  .word 0x1020000f
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c44ed6c
  .word 0x3c020104
  .word 0x34460190
  .word 0x3c020096
  .word 0x8c420180
  .word 0x0040f809
  .word 0x0200282d
  .word 0x1040000d
  .word 0x00000000
  .word 0x3c040096
  .word 0x3c030096
  .word 0xac82ed6c
  .word 0xac70ed70
  .word 0x3c020096
  .word 0x8c44ed6c
  .word 0x3c020096
  .word 0x8c42013c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x10000004
  .word 0x0220102d
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}


#pragma optimization_level 3
// FUN_004A9550
u32 FUN_004a9550(u32 param_1)
{
  *(u32 *)0x0095f478 = param_1;
  return 1;
}
#pragma optimization_level 2

// FUN_004A9560
asm float FUN_004a9560(float param_1,int param_2,u8 *param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x0080882d
  .word 0xe7b50004
  .word 0x00a0802d
  .word 0xe7b40000
  .word 0x8c840134
  .word 0x4480a000
  .word 0x0c130824
  .word 0x46006546
  .word 0x8e230010
  .word 0x30630002
  .word 0x10600005
  .word 0x00000000
  .word 0x24050002
  .word 0x640300ff
  .word 0x10000004
  .word 0x24040001
  .word 0x24050001
  .word 0x0000182d
  .word 0x0000202d
  .word 0x02043021
  .word 0x306300ff
  .word 0x90c70000
  .word 0x92060000
  .word 0x00673824
  .word 0x00073a00
  .word 0x00c74025
  .word 0x19000027
  .word 0x00000000
  .word 0x2406ffff
  .word 0x29070080
  .word 0x14e0000f
  .word 0x00000000
  .word 0x8e270124
  .word 0x01074023
  .word 0x05000021
  .word 0x00000000
  .word 0x8e270128
  .word 0x0107082a
  .word 0x1020001d
  .word 0x00000000
  .word 0x8e27012c
  .word 0x00084040
  .word 0x00e83821
  .word 0x10000006
  .word 0x84e70000
  .word 0x00000000
  .word 0x00083840
  .word 0x02273821
  .word 0x84e70024
  .word 0x00000000
  .word 0x04e00007
  .word 0x02058021
  .word 0x00073940
  .word 0x00473821
  .word 0xc4e10000
  .word 0xc620000c
  .word 0x46000800
  .word 0x4600a500
  .word 0x00903821
  .word 0x90e80000
  .word 0x92070000
  .word 0x00684024
  .word 0x00084200
  .word 0x00e84025
  .word 0x1d00ffdc
  .word 0x00000000
  .word 0x10000003
  .word 0x4615a002
  .word 0x1000ffed
  .word 0x00c0382d
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0xc7b50004
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A96B0
asm u32 FUN_004a96b0(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x12000036
  .word 0x00000000
  .word 0x8e040134
  .word 0x10800016
  .word 0x00000000
  .word 0x0c130824
  .word 0x00000000
  .word 0x8e030130
  .word 0x0003082b
  .word 0x1020000e
  .word 0x0000902d
  .word 0x0040882d
  .word 0x8e240018
  .word 0x10800004
  .word 0x00000000
  .word 0x0c12b0e4
  .word 0x00000000
  .word 0xae200018
  .word 0x8e020130
  .word 0x26520001
  .word 0x0242102b
  .word 0x1440fff6
  .word 0x26310020
  .word 0x00000000
  .word 0x0c13082c
  .word 0x8e040134
  .word 0xae000134
  .word 0x8e04012c
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae00012c
  .word 0x0000882d
  .word 0x0200902d
  .word 0x8e440014
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0x26310001
  .word 0xae400014
  .word 0x2e220004
  .word 0x1440fff7
  .word 0x26520004
  .word 0x3c020096
  .word 0x8c44ed68
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0200282d
  .word 0x10000002
  .word 0x24020001
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
}

// FUN_004A97C0
asm void FUN_004a97c0(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020096
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x0000202d
  .word 0x7fb00000
  .word 0x3c110096
  .word 0x8c52ed6c
  .word 0x26310144
  .word 0x0000102d
  .word 0x82500000
  .word 0x2403003b
  .word 0x1203000c
  .word 0x00000000
  .word 0x1200000a
  .word 0x00000000
  .word 0x02641821
  .word 0xa0700000
  .word 0x24840001
  .word 0x12000003
  .word 0x26520001
  .word 0x1040fff4
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x02641021
  .word 0x0280282d
  .word 0xa0400000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x0260202d
  .word 0x8e220000
  .word 0x0260202d
  .word 0x0040f809
  .word 0x2785afc8
  .word 0x0260202d
  .word 0x0c130090
  .word 0x2785afd0
  .word 0x1000ffec
  .word 0x0000202d
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
}

// FUN_004A98A0
asm long FUN_004a98a0(u64 param_1)
{
  .set noreorder
  .word 0x27bdfe20
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c12a43c
  .word 0x0080802d
  .word 0x0040a02d
  .word 0x1280004a
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c110096
  .word 0x8c44ed6c
  .word 0x26310164
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e230000
  .word 0x0200202d
  .word 0x0060f809
  .word 0x0040882d
  .word 0x02221821
  .word 0x3c020001
  .word 0x34450190
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24640005
  .word 0x0040882d
  .word 0x12200045
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c12a5f0
  .word 0x0220282d
  .word 0x0040902d
  .word 0x12400024
  .word 0x0000982d
  .word 0x27a40060
  .word 0x24050100
  .word 0x0c130154
  .word 0x0240302d
  .word 0x3c100096
  .word 0x3c050078
  .word 0x26100158
  .word 0x27a40060
  .word 0x8e020000
  .word 0x0040f809
  .word 0x24a5e3c0
  .word 0x10400024
  .word 0x00000000
  .word 0x8e020000
  .word 0x3c050078
  .word 0x27a40060
  .word 0x0040f809
  .word 0x24a5e3d0
  .word 0x10400024
  .word 0x00000000
  .word 0x8e020000
  .word 0x3c050078
  .word 0x27a40060
  .word 0x0040f809
  .word 0x24a5e3e0
  .word 0x14400007
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50160
  .word 0x0240302d
  .word 0x0c12a260
  .word 0x27a70060
  .word 0x0040982d
  .word 0x0c1300dc
  .word 0x0240202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0220202d
  .word 0x12740004
  .word 0x00000000
  .word 0x0c12a5ac
  .word 0x0280202d
  .word 0x0000a02d
  .word 0x10000015
  .word 0x0280102d
  .word 0x10000013
  .word 0x0000102d
  .word 0x0280202d
  .word 0x27a50160
  .word 0x0240302d
  .word 0x0c129e08
  .word 0x27a70060
  .word 0x1000ffeb
  .word 0x0040982d
  .word 0x0280202d
  .word 0x27a50160
  .word 0x0240302d
  .word 0x0c129f90
  .word 0x27a70060
  .word 0x1000ffe4
  .word 0x0040982d
  .word 0x0c12a5ac
  .word 0x0280202d
  .word 0x1000ffeb
  .word 0x0000a02d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd01e0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_004A9A70
void FUN_004a9a70(int param_1)
{
  ((void (*)(void))*(u32 *)(param_1 + 0x138))();
}
#pragma optimization_level 2

// FUN_004A9A80
asm u32 * FUN_004a9a80(u64 param_1)
{
  .set noreorder
  .word 0x27bdff40
  .word 0x3c020096
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c50ed78
  .word 0x1200000e
  .word 0x0080902d
  .word 0x3c110096
  .word 0x26310158
  .word 0x8e050000
  .word 0x8e220000
  .word 0x0040f809
  .word 0x0240202d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e100008
  .word 0x1600fff6
  .word 0x00000000
  .word 0x0000802d
  .word 0x12000003
  .word 0x00000000
  .word 0x10000033
  .word 0x0200102d
  .word 0x3c110096
  .word 0x0c1331ac
  .word 0x2631013c
  .word 0x0040282d
  .word 0x8e220000
  .word 0x0040f809
  .word 0x27a40040
  .word 0x3c020096
  .word 0x8c42f478
  .word 0x0040f809
  .word 0x0240202d
  .word 0x0040802d
  .word 0x12000023
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c44ed74
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x34650190
  .word 0xac500004
  .word 0x0040802d
  .word 0x3c020096
  .word 0x8c420164
  .word 0x0040f809
  .word 0x0240202d
  .word 0x24440001
  .word 0x3c020003
  .word 0x34450190
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae020000
  .word 0x8e220000
  .word 0x8e040000
  .word 0x0040f809
  .word 0x0240282d
  .word 0x3c030096
  .word 0x3c020096
  .word 0x8c63ed78
  .word 0xae030008
  .word 0xac50ed78
  .word 0x0c133170
  .word 0x27a40040
  .word 0x1000ffcf
  .word 0x00000000
  .word 0x1000fffb
  .word 0x0000802d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
}


#pragma optimization_level 3
// FUN_004A9BD0
u8 FUN_004a9bd0(int param_1)
{
  return (*(u32 *)(param_1 + 0x10) & 2) != 0;
}
#pragma optimization_level 2

// FUN_004A9BE0
#pragma push
#pragma schedule on
#pragma tailcall on
void FUN_004a9be0(void)
{
  ((void (*)(void))(uintptr_t)DAT_0095efd0_abs[0])();
}
#pragma pop

// FUN_004A9BF0
asm u32 FUN_004a9bf0(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c030096
  .word 0x7fb20020
  .word 0x3c020096
  .word 0x7fb10010
  .word 0x2463edf0
  .word 0x7fb00000
  .word 0x3c043f80
  .word 0x8c42ee70
  .word 0x3c100096
  .word 0x3c190096
  .word 0x3c180096
  .word 0x3c0f0096
  .word 0x3c0e0096
  .word 0x3c0d0096
  .word 0x3c0c0096
  .word 0x3c0b0096
  .word 0x3c0a0096
  .word 0x3c090096
  .word 0x3c080096
  .word 0x00021080
  .word 0x3c070096
  .word 0x00622821
  .word 0x3c060096
  .word 0x8cb20000
  .word 0x3c020002
  .word 0x34510003
  .word 0x24020001
  .word 0xae440028
  .word 0x3c050096
  .word 0x8e10ee70
  .word 0x00108080
  .word 0x00708021
  .word 0x8e100000
  .word 0xae040014
  .word 0x8f30ee70
  .word 0x00108080
  .word 0x00708021
  .word 0x8e100000
  .word 0xae040000
  .word 0x8f04ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800010
  .word 0x8de4ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800008
  .word 0x8dc4ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800004
  .word 0x8da4ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800024
  .word 0x8d84ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800020
  .word 0x8d64ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800018
  .word 0x8d44ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800038
  .word 0x8d24ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800034
  .word 0x8d04ee70
  .word 0x00042080
  .word 0x00642021
  .word 0x8c840000
  .word 0xac800030
  .word 0x8ce4ee70
  .word 0x00042080
  .word 0x00641821
  .word 0x8c640000
  .word 0x8c83000c
  .word 0x00711825
  .word 0xac83000c
  .word 0xacc0ef50
  .word 0xaca0ef64
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_004A9D80
asm u32 FUN_004a9d80(float *param_1,float *param_2,float *param_3)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x3c020096
  .word 0xffbf0080
  .word 0x24030002
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x0080902d
  .word 0x7fb00020
  .word 0x00a0882d
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c42ef84
  .word 0x8c420014
  .word 0x14430005
  .word 0x00c0802d
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x10000003
  .word 0x00000000
  .word 0x3c020096
  .word 0xc455ef58
  .word 0x3c030096
  .word 0x3c020096
  .word 0xc474ee74
  .word 0xc458ee78
  .word 0x3c030096
  .word 0x3c020096
  .word 0xc456ee80
  .word 0x0c12ab98
  .word 0xc477ee7c
  .word 0x00000000
  .word 0x00000000
  .word 0x4617a003
  .word 0x3c150096
  .word 0x26b5eed0
  .word 0x27a40090
  .word 0x27b40094
  .word 0x27b30098
  .word 0x0080282d
  .word 0x02a0302d
  .word 0xae800000
  .word 0xae600000
  .word 0x4600a847
  .word 0x46000802
  .word 0x0c131b18
  .word 0xe7a00090
  .word 0x00000000
  .word 0x00000000
  .word 0x4616c003
  .word 0x27a40090
  .word 0x02a0302d
  .word 0x0080282d
  .word 0xc7a10090
  .word 0x4600a802
  .word 0xe6410000
  .word 0xc6810000
  .word 0xe6410004
  .word 0xe6800000
  .word 0xafa00090
  .word 0x0c131b18
  .word 0xae600000
  .word 0x3c023f00
  .word 0x27a40090
  .word 0xc7a30090
  .word 0x02a0302d
  .word 0x44821000
  .word 0x0080282d
  .word 0x4600c007
  .word 0x46141042
  .word 0x46001002
  .word 0xe6230000
  .word 0xc6820000
  .word 0x46150842
  .word 0xe6220004
  .word 0x46150002
  .word 0xae600000
  .word 0xe7a10090
  .word 0x0c131af8
  .word 0xe6800000
  .word 0xc7a00090
  .word 0x24020001
  .word 0xe6000000
  .word 0xc6800000
  .word 0xe6000004
  .word 0xdfbf0080
  .word 0xc7b80010
  .word 0x7bb50070
  .word 0xc7b7000c
  .word 0x7bb40060
  .word 0xc7b60008
  .word 0x7bb30050
  .word 0xc7b50004
  .word 0x7bb20040
  .word 0xc7b40000
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x03e00008
  .word 0x27bd00a0
}

// FUN_004A9F20
asm u32 FUN_004a9f20(float param_1,float param_2,float param_3,float param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x3c043f80
  .word 0xffbf0070
  .word 0x3c020096
  .word 0x7fb40060
  .word 0x3c030096
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
  .word 0xac44edd8
  .word 0x460065c6
  .word 0x3c020096
  .word 0xac64edc4
  .word 0xac44edb0
  .word 0x3c030096
  .word 0x3c020096
  .word 0xac60edc0
  .word 0xac40edb8
  .word 0x3c030096
  .word 0x3c020096
  .word 0xac60edb4
  .word 0xac40edd4
  .word 0x3c030096
  .word 0x3c020096
  .word 0xac60edd0
  .word 0xac40edc8
  .word 0x3c030096
  .word 0x3c020096
  .word 0xac60ede8
  .word 0xac40ede4
  .word 0x3c030096
  .word 0x3c020096
  .word 0xac60ede0
  .word 0x8c44edbc
  .word 0x3c030002
  .word 0x34630003
  .word 0x46006d86
  .word 0x46007546
  .word 0x46007d06
  .word 0x3c020096
  .word 0x00831825
  .word 0x0c12aa98
  .word 0xac43edbc
  .word 0x3c020096
  .word 0x3c033f80
  .word 0x8c44ee70
  .word 0x3c120096
  .word 0x3c110096
  .word 0x3c100096
  .word 0x3c190096
  .word 0x3c180096
  .word 0x3c0f0096
  .word 0x3c0e0096
  .word 0x3c0d0096
  .word 0x3c0c0096
  .word 0x3c0b0096
  .word 0x3c0a0096
  .word 0x3c020096
  .word 0x00042080
  .word 0x2442edf0
  .word 0x3c090096
  .word 0x00442021
  .word 0x3c080096
  .word 0x8c940000
  .word 0x3c070096
  .word 0x27a500a0
  .word 0x27a60098
  .word 0xae830028
  .word 0x3c040002
  .word 0x8e52ee70
  .word 0x34930003
  .word 0x27a400a8
  .word 0x00129080
  .word 0x00529021
  .word 0x8e520000
  .word 0xae430014
  .word 0x8e31ee70
  .word 0x00118880
  .word 0x00518821
  .word 0x8e310000
  .word 0xae230000
  .word 0x8e03ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600010
  .word 0x8f23ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600008
  .word 0x8f03ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600004
  .word 0x8de3ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600024
  .word 0x8dc3ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600020
  .word 0x8da3ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600018
  .word 0x8d83ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600038
  .word 0x8d63ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600034
  .word 0x8d43ee70
  .word 0x00031880
  .word 0x00431821
  .word 0x8c630000
  .word 0xac600030
  .word 0x8d23ee70
  .word 0x00031880
  .word 0x00431021
  .word 0x8c430000
  .word 0x8c62000c
  .word 0x00531025
  .word 0xac62000c
  .word 0xad00ef50
  .word 0x0c12a760
  .word 0xace0ef64
  .word 0x3c030096
  .word 0x3c020096
  .word 0xc467ee7c
  .word 0x27b00090
  .word 0xc446ee80
  .word 0x3c040096
  .word 0xc7a10098
  .word 0x27b1008c
  .word 0xc7a0009c
  .word 0xae000000
  .word 0xc7a500a8
  .word 0x2484edb0
  .word 0xc7a300a0
  .word 0x27a50088
  .word 0x461539c3
  .word 0x27a300ac
  .word 0x27a200a4
  .word 0x24060001
  .word 0x46143183
  .word 0xe7a10088
  .word 0x46072842
  .word 0x460618c2
  .word 0xc4640000
  .word 0xe6200000
  .word 0xc4420000
  .word 0xe7a100a8
  .word 0xe7a300a0
  .word 0x46072002
  .word 0x4600001a
  .word 0xe4600000
  .word 0x46061002
  .word 0x4601085c
  .word 0xe4400000
  .word 0x4600001a
  .word 0x4603181c
  .word 0x46010644
  .word 0x00000000
  .word 0x00000000
  .word 0x46000604
  .word 0x00000000
  .word 0x00000000
  .word 0x0c130d74
  .word 0x00000000
  .word 0x3c023f80
  .word 0x3c040096
  .word 0x2484edb0
  .word 0xae020000
  .word 0x27a50088
  .word 0x24060001
  .word 0xe7b90088
  .word 0x0c130cf4
  .word 0xe6380000
  .word 0x4600b807
  .word 0x3c040096
  .word 0xe7a00088
  .word 0x2484edb0
  .word 0x4600b007
  .word 0x27a50088
  .word 0xe6200000
  .word 0x24060001
  .word 0x0c130d74
  .word 0xae000000
  .word 0x3c030096
  .word 0x3c020096
  .word 0xe477ef70
  .word 0xe456ef74
  .word 0x3c030096
  .word 0x3c020096
  .word 0xe475ef78
  .word 0x0c12ab54
  .word 0xe454ef7c
  .word 0x3c030096
  .word 0x24020001
  .word 0xac60ef50
  .word 0xdfbf0070
  .word 0xc7b90014
  .word 0x7bb40060
  .word 0xc7b80010
  .word 0x7bb30050
  .word 0xc7b7000c
  .word 0x7bb20040
  .word 0xc7b60008
  .word 0x7bb10030
  .word 0xc7b50004
  .word 0x7bb00020
  .word 0xc7b40000
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
}

// FUN_004AA2C0
asm float FUN_004aa2c0(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020096
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c42ef64
  .word 0x10400004
  .word 0x00000000
  .word 0x3c020096
  .word 0x10000024
  .word 0xc440ef60
  .word 0x0c12ab98
  .word 0x00000000
  .word 0x3c030096
  .word 0x3c020096
  .word 0xc463ee74
  .word 0x27a40030
  .word 0xc442ee7c
  .word 0x3c060096
  .word 0x27b10034
  .word 0x27b00038
  .word 0x0080282d
  .word 0x24c6eed0
  .word 0xae200000
  .word 0xae000000
  .word 0x3c030096
  .word 0x46021883
  .word 0x3c020096
  .word 0xc461ef58
  .word 0xc440ef5c
  .word 0x46020842
  .word 0x46010002
  .word 0x0c131b18
  .word 0xe7a00030
  .word 0xc6220000
  .word 0x3c030096
  .word 0xc7a00030
  .word 0x24040001
  .word 0xc6010000
  .word 0x3c020096
  .word 0xac44ef64
  .word 0x4602101a
  .word 0x4600001e
  .word 0x4601081c
  .word 0x1000ffdb
  .word 0xe460ef60
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_004AA390
asm u8 FUN_004aa390(float param_1)
{
  .set noreorder
  .word 0x44800000
  .word 0x00000000
  .word 0x46006036
  .word 0x45000003
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac40ef64
  .word 0xe46cef5c
  .word 0x24020001
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AA3D0
asm u8 FUN_004aa3d0(float param_1)
{
  .set noreorder
  .word 0x44800000
  .word 0x00000000
  .word 0x46006036
  .word 0x45000003
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac40ef50
  .word 0xe46cef58
  .word 0x24020001
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AA410
asm u32 FUN_004aa410(int param_1)
{
  .set noreorder
  .word 0x10800045
  .word 0x00000000
  .word 0x8c820060
  .word 0x10400037
  .word 0x00000000
  .word 0xc4400010
  .word 0x3c07004b
  .word 0xc442000c
  .word 0x3c050096
  .word 0x3c060096
  .word 0x3c030096
  .word 0x24e79be0
  .word 0x46800020
  .word 0x3c024000
  .word 0xe4a0ee80
  .word 0x46801020
  .word 0xe4c0ee7c
  .word 0xc4800068
  .word 0x44820800
  .word 0x3c020096
  .word 0x46000802
  .word 0xe460ee74
  .word 0xc480006c
  .word 0x46000802
  .word 0xe440ee78
  .word 0x8c83001c
  .word 0x10670008
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42ef84
  .word 0x10440004
  .word 0x00000000
  .word 0x3c020096
  .word 0xac43efd0
  .word 0xac87001c
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac44ef84
  .word 0x3c020096
  .word 0xac60ef50
  .word 0xac40ef70
  .word 0x3c030096
  .word 0x3c020096
  .word 0xc441ee78
  .word 0x3c020096
  .word 0xc440ee74
  .word 0x46010036
  .word 0x4501000d
  .word 0xac60ef74
  .word 0x00000000
  .word 0x00000000
  .word 0x46010003
  .word 0x3c030096
  .word 0x3c043f80
  .word 0x3c020096
  .word 0xac44ef7c
  .word 0xe460ef78
  .word 0x1000000f
  .word 0x24020001
  .word 0x1000000d
  .word 0x0000102d
  .word 0x00000000
  .word 0x00000000
  .word 0x46000803
  .word 0x3c020096
  .word 0x3c043f80
  .word 0x3c030096
  .word 0xac64ef78
  .word 0x1000fff4
  .word 0xe440ef7c
  .word 0x3c020096
  .word 0x1000fff3
  .word 0xac44ef84
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AA540
#pragma optimization_level 3

u32 FUN_004aa540(void)

{
  return *(u32 *)0x95ef84;
}
#pragma optimization_level 2

// FUN_004AA550
asm void FUN_004aa550(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c12c424
  .word 0xac40ef54
  .word 0x0c12b21c
  .word 0x00000000
  .word 0x0c129500
  .word 0x00000000
  .word 0x0c12a4cc
  .word 0x00000000
  .word 0x0c12b6e0
  .word 0x00000000
  .word 0x0c12a9b0
  .word 0x00000000
  .word 0x0c12c440
  .word 0x00000000
  .word 0x0c12a904
  .word 0x0200202d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AA5C0
asm void FUN_004aa5c0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x0c12c468
  .word 0x00000000
  .word 0x0c12a988
  .word 0x00000000
  .word 0x0c12b6d4
  .word 0x00000000
  .word 0x0c12a47c
  .word 0x00000000
  .word 0x0c1294ec
  .word 0x00000000
  .word 0x0c12b1fc
  .word 0x00000000
  .word 0x0c12c414
  .word 0x00000000
  .word 0x0c12a904
  .word 0x0000202d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AA620
asm void FUN_004aa620(void)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0000882d
  .word 0x3c100096
  .word 0x2610e860
  .word 0x8e040590
  .word 0x10800005
  .word 0x00000000
  .word 0x0c130e20
  .word 0x00000000
  .word 0xae000590
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230020
  .word 0x1460fff6
  .word 0x26100004
  .word 0x3c040096
  .word 0x3c030096
  .word 0xac80ee70
  .word 0x8c64f57c
  .word 0x10800009
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c040096
  .word 0x3c030096
  .word 0xac80f57c
  .word 0xac60f580
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AA6C0
asm u32 FUN_004aa6c0(void)
{
  .set noreorder
  .word 0x27bdfeb0
  .word 0x3c020096
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
  .word 0x0c130e30
  .word 0xac40ee70
  .word 0x3c040096
  .word 0x3c060002
  .word 0xac82edf0
  .word 0x34d50003
  .word 0x3c020096
  .word 0x3c033f80
  .word 0x8c45ee70
  .word 0x3c040096
  .word 0x3c140096
  .word 0x3c130096
  .word 0x3c120096
  .word 0x3c110096
  .word 0x3c100096
  .word 0x3c190096
  .word 0x3c180096
  .word 0x3c0f0096
  .word 0x3c0e0096
  .word 0x3c0d0096
  .word 0x3c020096
  .word 0x00052880
  .word 0x2442edf0
  .word 0x3c0c0096
  .word 0x00452821
  .word 0x3c0b0096
  .word 0x8ca50000
  .word 0x3c070096
  .word 0x3c090096
  .word 0x3c060096
  .word 0x3c170096
  .word 0x3c1e0096
  .word 0x3c0a0096
  .word 0x3c080096
  .word 0xaca30028
  .word 0x8c84ee70
  .word 0x3c050096
  .word 0x7fa50140
  .word 0x3c050096
  .word 0x7fa50130
  .word 0x3c050096
  .word 0x7fa50120
  .word 0x00042080
  .word 0x3c050096
  .word 0x0044b021
  .word 0x7fa50110
  .word 0x8ed60000
  .word 0x3c050096
  .word 0x7fa50100
  .word 0x3c040096
  .word 0x3c050096
  .word 0x2484e860
  .word 0x7fa500f0
  .word 0x3c050096
  .word 0x7fa500e0
  .word 0xaec30014
  .word 0x3c050096
  .word 0x8e94ee70
  .word 0x7fa500d0
  .word 0x3c050096
  .word 0x7fa500c0
  .word 0x3c050096
  .word 0x7fa500b0
  .word 0x0014a080
  .word 0x3c050096
  .word 0x0054a021
  .word 0x7fa500a0
  .word 0x8e940000
  .word 0x0000282d
  .word 0xae830000
  .word 0x8e73ee70
  .word 0x00139880
  .word 0x00539821
  .word 0x8e730000
  .word 0xae600010
  .word 0x8e52ee70
  .word 0x00129080
  .word 0x00529021
  .word 0x8e520000
  .word 0xae400008
  .word 0x8e31ee70
  .word 0x00118880
  .word 0x00518821
  .word 0x8e310000
  .word 0xae200004
  .word 0x8e10ee70
  .word 0x00108080
  .word 0x00508021
  .word 0x8e100000
  .word 0xae000024
  .word 0x8f30ee70
  .word 0x00108080
  .word 0x00508021
  .word 0x8e100000
  .word 0xae000020
  .word 0x8f10ee70
  .word 0x00108080
  .word 0x00508021
  .word 0x8e100000
  .word 0xae000018
  .word 0x8defee70
  .word 0x000f7880
  .word 0x004f7821
  .word 0x8def0000
  .word 0xade00038
  .word 0x8dceee70
  .word 0x000e7080
  .word 0x004e7021
  .word 0x8dce0000
  .word 0xadc00034
  .word 0x8dadee70
  .word 0x000d6880
  .word 0x004d6821
  .word 0x8dad0000
  .word 0xada00030
  .word 0x8d8cee70
  .word 0x000c6080
  .word 0x004c1021
  .word 0x8c4c0000
  .word 0x8d82000c
  .word 0x00551025
  .word 0xad82000c
  .word 0x3c023f00
  .word 0xad23ef58
  .word 0xad62ef5c
  .word 0x24020007
  .word 0xacc3edd8
  .word 0xace2ef68
  .word 0x7ba20140
  .word 0xaee3edc4
  .word 0xafc3edb0
  .word 0xad40ef64
  .word 0xad00ef50
  .word 0xac40edc0
  .word 0x7ba20130
  .word 0xac40edb8
  .word 0x7ba20120
  .word 0xac40edb4
  .word 0x7ba20110
  .word 0xac40edd4
  .word 0x7ba20100
  .word 0xac40edd0
  .word 0x7ba200f0
  .word 0xac40edc8
  .word 0x7ba200e0
  .word 0xac40ede8
  .word 0x7ba200d0
  .word 0xac40ede4
  .word 0x7ba200c0
  .word 0xac40ede0
  .word 0x7ba200b0
  .word 0x8c42edbc
  .word 0x00551825
  .word 0x7ba200a0
  .word 0xac43edbc
  .word 0xa4850000
  .word 0x24a20001
  .word 0xa4820002
  .word 0x24a20002
  .word 0xa4820004
  .word 0x24a20003
  .word 0xa4820006
  .word 0x24a20004
  .word 0xa4820008
  .word 0x24a20005
  .word 0xa482000a
  .word 0x24a20006
  .word 0xa482000c
  .word 0x24a20007
  .word 0xa482000e
  .word 0x24a50008
  .word 0x28a20100
  .word 0x1440ffee
  .word 0x24840010
  .word 0x3c040096
  .word 0x24030001
  .word 0x2484e864
  .word 0xac800590
  .word 0x24630006
  .word 0xac800594
  .word 0x2862001a
  .word 0xac800598
  .word 0xac80059c
  .word 0xac8005a0
  .word 0xac8005a4
  .word 0x1440fff7
  .word 0x24840018
  .word 0x3c020096
  .word 0x00031880
  .word 0x2442edf0
  .word 0x00431821
  .word 0xac600000
  .word 0x3c020096
  .word 0xac40ef84
  .word 0x3c030096
  .word 0x3c020096
  .word 0xac60ef70
  .word 0xac40ef74
  .word 0x3c033f80
  .word 0x3c020096
  .word 0xac43ef78
  .word 0x3c020096
  .word 0xac43ef7c
  .word 0x3c020096
  .word 0xac40f57c
  .word 0x3c020096
  .word 0xac40f580
  .word 0xdfbf0090
  .word 0x24020001
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
  .word 0x27bd0150
}

// FUN_004AAA60
asm u8 FUN_004aaa60(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c42ee70
  .word 0x2850001f
  .word 0x1200001f
  .word 0x00000000
  .word 0x24430001
  .word 0x3c020096
  .word 0xac43ee70
  .word 0x3c020096
  .word 0x00031880
  .word 0x2442edf0
  .word 0x00431021
  .word 0x8c420000
  .word 0x10400017
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c030096
  .word 0x8c45ee70
  .word 0x2463edec
  .word 0x24040008
  .word 0x3c020096
  .word 0x00052880
  .word 0x2442edf0
  .word 0x00651821
  .word 0x00451021
  .word 0x8c660000
  .word 0x8c450000
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x1000000b
  .word 0x0200102d
  .word 0x0c130e30
  .word 0x00000000
  .word 0x3c030096
  .word 0x3c040096
  .word 0x8c63ee70
  .word 0x2484edf0
  .word 0x00031880
  .word 0x00831821
  .word 0x1000ffe1
  .word 0xac620000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AAB40
asm u8 FUN_004aab40(long param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020096
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c42ee70
  .word 0x2850001f
  .word 0x1200003a
  .word 0x0080882d
  .word 0x24430001
  .word 0x3c020096
  .word 0xac43ee70
  .word 0x3c020096
  .word 0x00031880
  .word 0x2442edf0
  .word 0x00431021
  .word 0x8c420000
  .word 0x10400012
  .word 0x00000000
  .word 0x1220001a
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c030096
  .word 0x8c44ee70
  .word 0x2463edf0
  .word 0x3c020096
  .word 0x00042080
  .word 0x2442edec
  .word 0x00641821
  .word 0x00441021
  .word 0x8c640000
  .word 0x8c460000
  .word 0x0c130bcc
  .word 0x0220282d
  .word 0x1000001f
  .word 0x00000000
  .word 0x0c130e30
  .word 0x00000000
  .word 0x3c030096
  .word 0x3c040096
  .word 0x8c63ee70
  .word 0x2484edf0
  .word 0x00031880
  .word 0x00831821
  .word 0x1000ffe6
  .word 0xac620000
  .word 0x3c020096
  .word 0x3c030096
  .word 0x8c45ee70
  .word 0x2463edec
  .word 0x24040008
  .word 0x3c020096
  .word 0x00052880
  .word 0x2442edf0
  .word 0x00651821
  .word 0x00451021
  .word 0x8c660000
  .word 0x8c450000
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x3c030096
  .word 0x0200102d
  .word 0xac60ef50
  .word 0x3c030096
  .word 0xac60ef64
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_004AAC70
asm u8 FUN_004aac70(u32 *param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020096
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c42ee70
  .word 0x2850001f
  .word 0x1200001b
  .word 0x0080882d
  .word 0x24430001
  .word 0x3c020096
  .word 0xac43ee70
  .word 0x3c020096
  .word 0x00031880
  .word 0x2442edf0
  .word 0x00431021
  .word 0x8c420000
  .word 0x10400017
  .word 0x00000000
  .word 0x3c020096
  .word 0x3c030096
  .word 0x8c42ee70
  .word 0x2463edf0
  .word 0x24040008
  .word 0x00021080
  .word 0x00621021
  .word 0x8c450000
  .word 0x8e230000
  .word 0x2484ffff
  .word 0x8e220004
  .word 0xaca30000
  .word 0x26310008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x3c030096
  .word 0x0200102d
  .word 0xac60ef50
  .word 0x3c030096
  .word 0x1000000b
  .word 0xac60ef64
  .word 0x0c130e30
  .word 0x00000000
  .word 0x3c030096
  .word 0x3c040096
  .word 0x8c63ee70
  .word 0x2484edf0
  .word 0x00031880
  .word 0x00831821
  .word 0x1000ffe1
  .word 0xac620000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_004AAD50
asm void FUN_004aad50(void)
{
  .set noreorder
  .word 0x3c020096
  .word 0x8c43ee70
  .word 0x0003102a
  .word 0x14400003
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x2464ffff
  .word 0x3c030096
  .word 0xac64ee70
  .word 0x3c030096
  .word 0xac60ef50
  .word 0x3c030096
  .word 0x1000fff7
  .word 0xac60ef64
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AADA0
asm u32 FUN_004aada0(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c023f80
  .word 0xffbf0000
  .word 0x27a50010
  .word 0xafa20018
  .word 0xe7ac0010
  .word 0x3c020096
  .word 0x24060001
  .word 0x8c43ee70
  .word 0x3c020096
  .word 0x00031880
  .word 0x2442edf0
  .word 0x00431021
  .word 0x8c440000
  .word 0x0c130cf4
  .word 0xe7ad0014
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac40ef50
  .word 0xac60ef64
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004AAE00
asm u32 FUN_004aae00(u32 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0000
  .word 0x27a50010
  .word 0x8c43ee70
  .word 0xe7ac0010
  .word 0xe7ad0014
  .word 0x24060001
  .word 0x3c020096
  .word 0x00031880
  .word 0x2442edf0
  .word 0x00431021
  .word 0x8c440000
  .word 0x0c130d74
  .word 0xafa00018
  .word 0x3c020096
  .word 0x3c030096
  .word 0xac40ef50
  .word 0xac60ef64
  .word 0x24020001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_004AAE60
asm u8 * FUN_004aae60(void)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x3c020096
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c42ef50
  .word 0x1440007a
  .word 0x00000000
  .word 0x3c020096
  .word 0x24030002
  .word 0x8c42ef84
  .word 0x8c420014
  .word 0x14430005
  .word 0x00000000
  .word 0x3c023f80
  .word 0x4482b000
  .word 0x10000003
  .word 0x00000000
  .word 0x3c020096
  .word 0xc456ef58
  .word 0x3c020096
  .word 0x3c030096
  .word 0x8c42ee70
  .word 0x3c060096
  .word 0x2463edf0
  .word 0x27a40040
  .word 0x00021080
  .word 0x00621021
  .word 0x8c450000
  .word 0x0c130bcc
  .word 0x24c6edb0
  .word 0x3c020096
  .word 0x27b10094
  .word 0xc454ee74
  .word 0x27b00098
  .word 0x27a40040
  .word 0x27a50090
  .word 0x24060002
  .word 0xe7b60090
  .word 0xe6360000
  .word 0x3c020096
  .word 0xc455ee78
  .word 0x3c023f80
  .word 0x0c130cf4
  .word 0xae020000
  .word 0x4615a034
  .word 0x45000003
  .word 0x00000000
  .word 0x10000002
  .word 0x4600a006
  .word 0x4600a806
  .word 0xe6200000
  .word 0x3c023f80
  .word 0x46000007
  .word 0xae020000
  .word 0xe7a00090
  .word 0x27a40040
  .word 0x27a50090
  .word 0x0c130cf4
  .word 0x24060002
  .word 0x3c023f00
  .word 0x27a40040
  .word 0x44820000
  .word 0x27a50080
  .word 0x24060002
  .word 0xafa00088
  .word 0x46140042
  .word 0x46150002
  .word 0x46160002
  .word 0x46160842
  .word 0x46000007
  .word 0xe7a10080
  .word 0x0c130d74
  .word 0xe7a00084
  .word 0xc7a00040
  .word 0x3c070096
  .word 0xc7a40044
  .word 0x3c030096
  .word 0xc7a10050
  .word 0x3c050096
  .word 0xc7a30048
  .word 0x3c060096
  .word 0xc7a20054
  .word 0x3c040096
  .word 0x8fa8004c
  .word 0x3c020096
  .word 0xe4e0ee90
  .word 0xc7a00058
  .word 0x8fa7006c
  .word 0xe4a1eea0
  .word 0xe4c3ee98
  .word 0x3c050096
  .word 0xe482eea4
  .word 0x8fa6005c
  .word 0xe464ee94
  .word 0xac48ee9c
  .word 0x3c030096
  .word 0x3c020096
  .word 0xe460eea8
  .word 0x3c040096
  .word 0xc7a10060
  .word 0x3c030096
  .word 0xc7a00068
  .word 0xac46eeac
  .word 0xc7a30064
  .word 0x3c020096
  .word 0x8fa6007c
  .word 0xac47eebc
  .word 0xc7a20070
  .word 0x3c020096
  .word 0xe481eeb0
  .word 0xe460eeb8
  .word 0x3c040096
  .word 0xc7a10074
  .word 0x3c030096
  .word 0xc7a00078
  .word 0xac46eecc
  .word 0xe4a3eeb4
  .word 0x3c050096
  .word 0xe482eec0
  .word 0x3c040096
  .word 0xe4a1eec4
  .word 0x2484eed0
  .word 0x27a50040
  .word 0x0c130ca8
  .word 0xe460eec8
  .word 0x24030001
  .word 0x3c020096
  .word 0xac43ef50
  .word 0x3c020096
  .word 0x8c42ef84
  .word 0x0c132cbc
  .word 0x8c440004
  .word 0x3c040096
  .word 0x3c050096
  .word 0x0040302d
  .word 0x2484ef10
  .word 0x0c130bcc
  .word 0x24a5ee90
  .word 0xdfbf0030
  .word 0xc7b60008
  .word 0x7bb10020
  .word 0xc7b50004
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x3c020096
  .word 0x2442ef10
  .word 0x03e00008
  .word 0x27bd00a0
}

#pragma schedule on
// FUN_004AB0C0
u32 FUN_004ab0c0(void)
{
  return DAT_0095edf0_abs[DAT_0095ee70_abs[0]];
}

// FUN_004AB0E0
asm int FUN_004ab0e0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c900014
  .word 0x8c840000
  .word 0x1080000d
  .word 0x00000000
  .word 0x8e230004
  .word 0x2402ffff
  .word 0x14620005
  .word 0x00000000
  .word 0x0c13082c
  .word 0x00000000
  .word 0x10000006
  .word 0xae200000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae200000
  .word 0x3c030096
  .word 0x3c020096
  .word 0x8c64ed84
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AB170

void FUN_004ab170(u32 *param_1)

{
  FUN_004c1e60_typed(*param_1);
  param_1[2] = 0;
  param_1[3] = 1;
  return;
}

// FUN_004AB1B0
asm u64 FUN_004ab1b0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c12b0e4
  .word 0x8c840014
  .word 0xae000014
  .word 0x0c130798
  .word 0x8e040000
  .word 0xae000008
  .word 0x24020001
  .word 0xae02000c
  .word 0xae100018
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AB200
asm u64 FUN_004ab200(u32 param_1,u32 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0x0080802d
  .word 0xe7b40000
  .word 0x8c820018
  .word 0x46006546
  .word 0x8c440000
  .word 0x0c130848
  .word 0x46006d06
  .word 0x1440000d
  .word 0x00000000
  .word 0x8e030018
  .word 0x3c020003
  .word 0x8c640000
  .word 0x0c13079c
  .word 0x34450190
  .word 0xac400000
  .word 0xe4550004
  .word 0xe4540008
  .word 0xac40000c
  .word 0xac400010
  .word 0x1000000f
  .word 0xac400014
  .word 0x0c12b15c
  .word 0x00000000
  .word 0x8e030018
  .word 0xac620014
  .word 0x8e020018
  .word 0x0c12b17c
  .word 0x8c440014
  .word 0x8e020018
  .word 0x4600ab06
  .word 0x4600a346
  .word 0x0200202d
  .word 0x8c420014
  .word 0x0c12ac80
  .word 0xae020018
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AB2C0
asm u64 FUN_004ab2c0(float param_1,float param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0x0080802d
  .word 0xe7b40000
  .word 0x8c820018
  .word 0x46006546
  .word 0x8c440000
  .word 0x0c130848
  .word 0x46006d06
  .word 0x8e030018
  .word 0x0040882d
  .word 0x3c020003
  .word 0x8c640000
  .word 0x0c13079c
  .word 0x34450190
  .word 0x24030001
  .word 0xac430000
  .word 0x44800000
  .word 0xe4550004
  .word 0xe4540008
  .word 0xc441ffec
  .word 0xc442fff0
  .word 0x461508c1
  .word 0x4602a081
  .word 0x4603181a
  .word 0x4602105c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001042
  .word 0x2a210002
  .word 0x46001802
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc440fffc
  .word 0x46040000
  .word 0x14200011
  .word 0xe4400014
  .word 0xc445fff4
  .word 0x3c033f80
  .word 0xc442000c
  .word 0xc443fff8
  .word 0xc4410010
  .word 0x44830000
  .word 0x46022900
  .word 0x46011880
  .word 0x4602181a
  .word 0x4604285c
  .word 0x46010003
  .word 0x46002042
  .word 0x46001002
  .word 0xe441fff4
  .word 0x10000005
  .word 0xe440fff8
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe441fff4
  .word 0xe440fff8
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0xc7b50004
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AB410
asm u64 FUN_004ab410(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            u64 param_7)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0xe7b90014
  .word 0x0080802d
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c820018
  .word 0x46006646
  .word 0x46006e06
  .word 0x460075c6
  .word 0x46007d86
  .word 0x46008546
  .word 0x8c440000
  .word 0x0c130848
  .word 0x46008d06
  .word 0x8e030018
  .word 0x0040882d
  .word 0x3c020003
  .word 0x24050003
  .word 0x8c640000
  .word 0x0c1307dc
  .word 0x34460190
  .word 0x24030002
  .word 0xac430000
  .word 0x44800000
  .word 0xe4590004
  .word 0xe4580008
  .word 0xc441ffec
  .word 0xc442fff0
  .word 0x461908c1
  .word 0x4602c081
  .word 0x4603181a
  .word 0x4602105c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001042
  .word 0x2a210002
  .word 0x46001802
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc440fffc
  .word 0x46040000
  .word 0x14200011
  .word 0xe4400014
  .word 0xc445fff4
  .word 0x3c033f80
  .word 0xc442000c
  .word 0xc443fff8
  .word 0xc4410010
  .word 0x44830000
  .word 0x46022900
  .word 0x46011880
  .word 0x4602181a
  .word 0x4604285c
  .word 0x46010003
  .word 0x46002042
  .word 0x46001002
  .word 0xe441fff4
  .word 0x10000005
  .word 0xe440fff8
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe441fff4
  .word 0xe440fff8
  .word 0x24030002
  .word 0xac430018
  .word 0x44800000
  .word 0xe457001c
  .word 0xe4560020
  .word 0xc4410004
  .word 0xc4420008
  .word 0x461708c1
  .word 0x4602b081
  .word 0x4603181a
  .word 0x4602105c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001042
  .word 0x24030002
  .word 0x46001802
  .word 0xe4410024
  .word 0xe4400028
  .word 0xc4410014
  .word 0x44800000
  .word 0x00000000
  .word 0x46040840
  .word 0xe441002c
  .word 0xac430030
  .word 0xe4550034
  .word 0xe4540038
  .word 0xc441001c
  .word 0xc4420020
  .word 0x461508c1
  .word 0x4602a081
  .word 0x4603181a
  .word 0x4602105c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001042
  .word 0x46001802
  .word 0xe441003c
  .word 0xe4400040
  .word 0xc440002c
  .word 0x46040000
  .word 0xe4400044
  .word 0x8e030018
  .word 0x0200102d
  .word 0xac60000c
  .word 0xdfbf0040
  .word 0xc7b90014
  .word 0x7bb10030
  .word 0xc7b80010
  .word 0x7bb00020
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_004AB6A0
asm u64 FUN_004ab6a0(u64 param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x0080982d
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8c910018
  .word 0x0c130848
  .word 0x8e240000
  .word 0x8e240000
  .word 0x0c130824
  .word 0x0040902d
  .word 0x8e240000
  .word 0x0040802d
  .word 0x0c13086c
  .word 0x2645ffff
  .word 0xc6030008
  .word 0x27a3006c
  .word 0xc6040004
  .word 0xc4420004
  .word 0xc4410008
  .word 0x44800000
  .word 0xe7a3006c
  .word 0xc4740000
  .word 0x46041081
  .word 0x4601a041
  .word 0x46010032
  .word 0x45000004
  .word 0xe7a40068
  .word 0x46020032
  .word 0x45010048
  .word 0x00000000
  .word 0x8e620018
  .word 0x0c130848
  .word 0x8c440000
  .word 0x8e630018
  .word 0x0040802d
  .word 0x3c020003
  .word 0x8c640000
  .word 0x0c13079c
  .word 0x34450190
  .word 0xc7a30068
  .word 0x24030001
  .word 0xac430000
  .word 0x44800000
  .word 0xe4430004
  .word 0xe4540008
  .word 0xc441ffec
  .word 0xc442fff0
  .word 0x460308c1
  .word 0x4602a081
  .word 0x4603181a
  .word 0x4602105c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001042
  .word 0x2a010002
  .word 0x46001802
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc440fffc
  .word 0x46040000
  .word 0x14200011
  .word 0xe4400014
  .word 0xc445fff4
  .word 0x3c033f80
  .word 0xc442000c
  .word 0xc443fff8
  .word 0xc4410010
  .word 0x44830000
  .word 0x46022900
  .word 0x46011880
  .word 0x4602181a
  .word 0x4604285c
  .word 0x46010003
  .word 0x46002042
  .word 0x46001002
  .word 0xe441fff4
  .word 0x10000005
  .word 0xe440fff8
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe441fff4
  .word 0xe440fff8
  .word 0x0c130824
  .word 0x8e240000
  .word 0x8e240000
  .word 0x0240282d
  .word 0x0c13086c
  .word 0x0040802d
  .word 0xc605000c
  .word 0x3c033f80
  .word 0xc442000c
  .word 0x44830000
  .word 0xc6030010
  .word 0xc4410010
  .word 0x24030001
  .word 0x46022900
  .word 0x46011880
  .word 0x4602181a
  .word 0x4604285c
  .word 0x46010003
  .word 0x46002042
  .word 0x46001002
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe601000c
  .word 0x0260102d
  .word 0xe6000010
  .word 0xae230008
  .word 0xdfbf0050
  .word 0xc7b40000
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}

// FUN_004AB8C0
asm u32 * FUN_004ab8c0(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c50ed88
  .word 0x0c12b0e4
  .word 0x8e040014
  .word 0xae000014
  .word 0x0c130798
  .word 0x8e040000
  .word 0xae000008
  .word 0x24020001
  .word 0xae02000c
  .word 0xae100018
  .word 0x3c020096
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x8c42ed88
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_004AB910
asm void FUN_004ab910(float *param_1,float *param_2,float *param_3)
{
  .set noreorder
  .word 0xc4870008
  .word 0x3c033f00
  .word 0xc4890010
  .word 0xc4820000
  .word 0x44830000
  .word 0xc484000c
  .word 0xc4830004
  .word 0xc4850014
  .word 0x46093980
  .word 0x46003202
  .word 0x46071080
  .word 0xc4860018
  .word 0xc481001c
  .word 0x460418c0
  .word 0x46020082
  .word 0x46093180
  .word 0x46052100
  .word 0x46050840
  .word 0xe4a20008
  .word 0x46030082
  .word 0x46010142
  .word 0xe4a2000c
  .word 0x46060182
  .word 0xe4c60010
  .word 0xe4c50014
  .word 0xc4a50008
  .word 0x460021c2
  .word 0xc4a6000c
  .word 0x46082940
  .word 0x46050142
  .word 0x46073180
  .word 0xe4a50010
  .word 0x46060142
  .word 0xe4a50014
  .word 0xc4c50010
  .word 0xc4c60014
  .word 0xc4840000
  .word 0xc4830004
  .word 0xc4820018
  .word 0xc481001c
  .word 0x46082940
  .word 0x46050142
  .word 0x46073180
  .word 0xe4c50008
  .word 0x46060142
  .word 0xe4c5000c
  .word 0xc4a60010
  .word 0xc4c50008
  .word 0xc4a80014
  .word 0xc4c7000c
  .word 0x46053140
  .word 0x46050142
  .word 0x460741c0
  .word 0x46070002
  .word 0xe4a50018
  .word 0xe4a0001c
  .word 0xe4a40000
  .word 0xe4a30004
  .word 0xc4a30018
  .word 0xc4a0001c
  .word 0xe4c30000
  .word 0xe4c00004
  .word 0xe4c20018
  .word 0x03e00008
  .word 0xe4c1001c
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004ABA20
asm void FUN_004aba20(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x00c0882d
  .word 0x7fb00000
  .word 0x2631ffff
  .word 0x0220102a
  .word 0x1440006f
  .word 0x00a0802d
  .word 0xc6050004
  .word 0x3c020096
  .word 0xc602001c
  .word 0xc444ef60
  .word 0xc6060000
  .word 0xc6010008
  .word 0xc6030018
  .word 0xc600000c
  .word 0x460511c1
  .word 0x46060881
  .word 0x460618c1
  .word 0x4607381a
  .word 0x46050041
  .word 0x46031a1c
  .word 0x4607081a
  .word 0x4603101c
  .word 0x4601081a
  .word 0x4602105c
  .word 0x46040841
  .word 0x46000002
  .word 0x46014042
  .word 0x46000834
  .word 0x45010002
  .word 0x24020001
  .word 0x0000102d
  .word 0x10400010
  .word 0x00000000
  .word 0xc6000014
  .word 0xc6010010
  .word 0x46050001
  .word 0x46060841
  .word 0x4607001a
  .word 0x4603089c
  .word 0x4600001a
  .word 0x4601081c
  .word 0x46040001
  .word 0x46004042
  .word 0x46021002
  .word 0x46000834
  .word 0x45010002
  .word 0x24020001
  .word 0x0000102d
  .word 0x10400084
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e440000
  .word 0x8e440000
  .word 0x0040882d
  .word 0x3c020003
  .word 0x0c13079c
  .word 0x34450190
  .word 0xc6040018
  .word 0x24030001
  .word 0xc603001c
  .word 0xac430000
  .word 0x44800000
  .word 0xe4440004
  .word 0xe4430008
  .word 0xc442fff0
  .word 0xc441ffec
  .word 0x46021881
  .word 0x460408c1
  .word 0x4603181a
  .word 0x4602105c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001042
  .word 0x2a210002
  .word 0x46001802
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc440fffc
  .word 0x46040000
  .word 0x14200011
  .word 0xe4400014
  .word 0xc445fff4
  .word 0x3c033f80
  .word 0xc442000c
  .word 0xc443fff8
  .word 0xc4410010
  .word 0x44830000
  .word 0x46022900
  .word 0x46011880
  .word 0x4602181a
  .word 0x4604285c
  .word 0x46010003
  .word 0x46002042
  .word 0x46001002
  .word 0xe441fff4
  .word 0x10000005
  .word 0xe440fff8
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe441fff4
  .word 0xe440fff8
  .word 0x1000004f
  .word 0xdfbf0030
  .word 0x0c130848
  .word 0x8e440000
  .word 0x8e440000
  .word 0x0040882d
  .word 0x3c020003
  .word 0x0c13079c
  .word 0x34450190
  .word 0xc6040018
  .word 0x24030001
  .word 0xc603001c
  .word 0xac430000
  .word 0x44800000
  .word 0xe4440004
  .word 0xe4430008
  .word 0xc442fff0
  .word 0xc441ffec
  .word 0x46021881
  .word 0x460408c1
  .word 0x4603181a
  .word 0x4602105c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001042
  .word 0x2a210002
  .word 0x46001802
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc440fffc
  .word 0x46040000
  .word 0x14200011
  .word 0xe4400014
  .word 0xc445fff4
  .word 0x3c033f80
  .word 0xc442000c
  .word 0xc443fff8
  .word 0xc4410010
  .word 0x44830000
  .word 0x46022900
  .word 0x46011880
  .word 0x4602181a
  .word 0x4604285c
  .word 0x46010003
  .word 0x46002042
  .word 0x46001002
  .word 0xe441fff4
  .word 0x1000ffc3
  .word 0xe440fff8
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe441fff4
  .word 0x1000ffbe
  .word 0xe440fff8
  .word 0x0200202d
  .word 0x27a50060
  .word 0x0c12ae44
  .word 0x27a60040
  .word 0x0240202d
  .word 0x0c12ae88
  .word 0x0220302d
  .word 0x0240202d
  .word 0x0220302d
  .word 0x0c12ae88
  .word 0x27a50040
  .word 0x1000ffb1
  .word 0x00000000
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0080
}

// FUN_004ABD50
asm u64 FUN_004abd50(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdff40
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
  .word 0x7fb10010
  .word 0x0c12a8b0
  .word 0x7fb00000
  .word 0x8e830004
  .word 0x3c020096
  .word 0xe440ef60
  .word 0x2402ffff
  .word 0x14620005
  .word 0x00000000
  .word 0x0c130824
  .word 0x8e840000
  .word 0x10000003
  .word 0x8e910004
  .word 0x8e820000
  .word 0x8e910004
  .word 0x0040982d
  .word 0x2402ffff
  .word 0x16220004
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e840000
  .word 0x0040882d
  .word 0x0011082a
  .word 0x10200062
  .word 0x0000902d
  .word 0x27b600a8
  .word 0x27b700b0
  .word 0x27be00b8
  .word 0x8e630000
  .word 0x24020002
  .word 0x10620060
  .word 0x00000000
  .word 0x24020001
  .word 0x14620044
  .word 0x00000000
  .word 0x0c130848
  .word 0x8ea40000
  .word 0x8ea40000
  .word 0x0040802d
  .word 0x3c020003
  .word 0x0c13079c
  .word 0x34450190
  .word 0x24030001
  .word 0xac430000
  .word 0x44800000
  .word 0xc6610004
  .word 0xe4410004
  .word 0xc6610008
  .word 0xe4410008
  .word 0xc442ffec
  .word 0xc6610004
  .word 0xc6640008
  .word 0xc443fff0
  .word 0x46011081
  .word 0x460320c1
  .word 0x4602101a
  .word 0x4603185c
  .word 0x46010104
  .word 0x00000000
  .word 0x00000000
  .word 0x46002036
  .word 0x45010009
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46040003
  .word 0x00000000
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x46002006
  .word 0x46001842
  .word 0x2a010002
  .word 0x46001002
  .word 0xe441000c
  .word 0xe4400010
  .word 0xc440fffc
  .word 0x46040000
  .word 0x14200011
  .word 0xe4400014
  .word 0xc445fff4
  .word 0x3c033f80
  .word 0xc442000c
  .word 0xc443fff8
  .word 0xc4410010
  .word 0x44830000
  .word 0x46022900
  .word 0x46011880
  .word 0x4602181a
  .word 0x4604285c
  .word 0x46010003
  .word 0x46002042
  .word 0x46001002
  .word 0xe441fff4
  .word 0x10000016
  .word 0xe440fff8
  .word 0xc441000c
  .word 0xc4400010
  .word 0xe441fff4
  .word 0x10000011
  .word 0xe440fff8
  .word 0x8ea40000
  .word 0x3c020003
  .word 0x0c13079c
  .word 0x344501a1
  .word 0xc6630000
  .word 0xc6620004
  .word 0xc6610008
  .word 0xc660000c
  .word 0xe4430000
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0xc6610010
  .word 0xc6600014
  .word 0xe4410010
  .word 0xe4400014
  .word 0x26520001
  .word 0x0251102a
  .word 0x1440ffa3
  .word 0x26730018
  .word 0x8e820008
  .word 0x1440001b
  .word 0x00000000
  .word 0x1000001d
  .word 0x02a0102d
  .word 0xc661ffec
  .word 0x3c020096
  .word 0xc660fff0
  .word 0x8c46ef68
  .word 0x27a500a0
  .word 0x02a0202d
  .word 0xe7a100a0
  .word 0xe7a000a4
  .word 0xc6610004
  .word 0xc6600008
  .word 0xe6c10000
  .word 0xe6c00004
  .word 0xc661001c
  .word 0xc6600020
  .word 0xe6e10000
  .word 0xe6e00004
  .word 0xc6610034
  .word 0xc6600038
  .word 0xe7c10000
  .word 0x0c12ae88
  .word 0xe7c00004
  .word 0x26520002
  .word 0x1000ffe0
  .word 0x26730030
  .word 0x0c12ada8
  .word 0x02a0202d
  .word 0x1000ffe3
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
  .word 0x03e00008
  .word 0x27bd00c0
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AC020
asm u64 FUN_004ac020(int *param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x8c830004
  .word 0xffbf0030
  .word 0x2402ffff
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x14620005
  .word 0x00a0802d
  .word 0x0c130824
  .word 0x8e440000
  .word 0x10000003
  .word 0x0040882d
  .word 0x8e420000
  .word 0x0040882d
  .word 0x2403ffff
  .word 0x8e420004
  .word 0x14430003
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e440000
  .word 0x0002082a
  .word 0x1020001a
  .word 0x0000202d
  .word 0xc6210004
  .word 0xc6000000
  .word 0x46000834
  .word 0x45010017
  .word 0x00000000
  .word 0xc6000008
  .word 0x46000836
  .word 0x45010003
  .word 0x00000000
  .word 0xe6010008
  .word 0x00000000
  .word 0xc6210008
  .word 0xc6000004
  .word 0x46000834
  .word 0x4501000e
  .word 0x00000000
  .word 0xc600000c
  .word 0x46000836
  .word 0x45010002
  .word 0x00000000
  .word 0xe601000c
  .word 0x24840001
  .word 0x0082182a
  .word 0x1460ffe8
  .word 0x26310018
  .word 0x10000005
  .word 0x0200102d
  .word 0x1000ffef
  .word 0xe6010000
  .word 0x1000fff7
  .word 0xe6010004
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AC120
asm int * FUN_004ac120(int *param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x2402ffff
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c830004
  .word 0x14620005
  .word 0x00a0882d
  .word 0x0c130824
  .word 0x8e440000
  .word 0x10000003
  .word 0xc4400004
  .word 0x8e420000
  .word 0xc4400004
  .word 0x0240802d
  .word 0xe6200008
  .word 0xe6200000
  .word 0xc4400008
  .word 0xe620000c
  .word 0x1240000b
  .word 0xe6200004
  .word 0x8e02000c
  .word 0x10400012
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c12b008
  .word 0x0220282d
  .word 0x8e100014
  .word 0x1600fff8
  .word 0x00000000
  .word 0x00000000
  .word 0x0240102d
  .word 0xc6210008
  .word 0xc6200000
  .word 0x46000801
  .word 0xe6200008
  .word 0xc6210004
  .word 0xc620000c
  .word 0x46010001
  .word 0x10000013
  .word 0xe620000c
  .word 0x3c020096
  .word 0x8c53ed88
  .word 0x0c12b0e4
  .word 0x8e640014
  .word 0x0260202d
  .word 0x0c12ac5c
  .word 0xae600014
  .word 0xae730018
  .word 0x3c020096
  .word 0x8c53ed88
  .word 0x0200282d
  .word 0x0c12af54
  .word 0x0260202d
  .word 0x0260202d
  .word 0x0c12b008
  .word 0x0220282d
  .word 0x1000ffe1
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AC240
asm int * FUN_004ac240(int *param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080882d
  .word 0x12200044
  .word 0x7fb00000
  .word 0x8e300014
  .word 0x12000024
  .word 0x00000000
  .word 0x8e130014
  .word 0x12600018
  .word 0x00000000
  .word 0x8e720014
  .word 0x1240000c
  .word 0x00000000
  .word 0x0c12b090
  .word 0x8e440014
  .word 0xae420014
  .word 0x0c130848
  .word 0x8e440000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0240202d
  .word 0x0040902d
  .word 0xae720014
  .word 0x0c130848
  .word 0x8e640000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0260202d
  .word 0x0040982d
  .word 0xae130014
  .word 0x0c130848
  .word 0x8e040000
  .word 0x24030001
  .word 0x14430004
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0200202d
  .word 0x0040802d
  .word 0xae300014
  .word 0x0c130848
  .word 0x8e240000
  .word 0x24030001
  .word 0x14430018
  .word 0x00000000
  .word 0x8e240000
  .word 0x1080000d
  .word 0x8e300014
  .word 0x8e230004
  .word 0x2402ffff
  .word 0x14620005
  .word 0x00000000
  .word 0x0c13082c
  .word 0x00000000
  .word 0x10000006
  .word 0xae200000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae200000
  .word 0x3c030096
  .word 0x3c020096
  .word 0x8c64ed84
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x0200882d
  .word 0x0220102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_004AC390
asm u8 FUN_004ac390(long param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0004802b
  .word 0x16000003
  .word 0x00000000
  .word 0x10000013
  .word 0x0200102d
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x1040fffb
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x1040fff7
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x1040fff3
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x0c12b0e4
  .word 0x0040202d
  .word 0x1000ffed
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AC410
asm void FUN_004ac410(int *param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x2403ffff
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c840004
  .word 0x10830040
  .word 0x00000000
  .word 0x8e040000
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000000
  .word 0xae000004
  .word 0x8e110014
  .word 0x1220003c
  .word 0x00000000
  .word 0x8e240004
  .word 0x2403ffff
  .word 0x10830034
  .word 0x00000000
  .word 0x8e240000
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae200000
  .word 0xae200004
  .word 0x8e240014
  .word 0x10800010
  .word 0x00000000
  .word 0x0c12b104
  .word 0x00000000
  .word 0x8e240014
  .word 0x1080000a
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x0040202d
  .word 0x10800005
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x0c12b0e4
  .word 0x0040202d
  .word 0xae200014
  .word 0x8e040014
  .word 0x1080000f
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x0040202d
  .word 0x1080000a
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x0040202d
  .word 0x10800005
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x0c12b0e4
  .word 0x0040202d
  .word 0xae000014
  .word 0x1000000a
  .word 0xdfbf0020
  .word 0x0c13082c
  .word 0x8e040000
  .word 0x1000ffc6
  .word 0xae000000
  .word 0x0c13082c
  .word 0x8e240000
  .word 0x1000ffd2
  .word 0xae200000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AC570
asm long FUN_004ac570(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c44ed84
  .word 0x3c020003
  .word 0x344501a1
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200000b
  .word 0x00000000
  .word 0xae000000
  .word 0x24020001
  .word 0xae000004
  .word 0x0200202d
  .word 0xae000008
  .word 0xae02000c
  .word 0xae000014
  .word 0xae100018
  .word 0x0c12b17c
  .word 0xae000010
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AC5F0
asm long FUN_004ac5f0(long param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x12600035
  .word 0x7fb00000
  .word 0x8e630004
  .word 0x2402ffff
  .word 0x10620031
  .word 0x00000000
  .word 0x3c020003
  .word 0x24040018
  .word 0x0c130754
  .word 0x344501a1
  .word 0x0040902d
  .word 0x1240002c
  .word 0x00000000
  .word 0x8e630004
  .word 0x2402ffff
  .word 0x14620005
  .word 0x00000000
  .word 0x0c130824
  .word 0x8e640000
  .word 0x10000003
  .word 0x8e700004
  .word 0x8e620000
  .word 0x8e700004
  .word 0x0040882d
  .word 0x2402ffff
  .word 0x16020004
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e640000
  .word 0x0040802d
  .word 0x12000012
  .word 0x00000000
  .word 0x3c020003
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c1307dc
  .word 0x344601a1
  .word 0x10400007
  .word 0x00000000
  .word 0x0040202d
  .word 0x0220282d
  .word 0x00101040
  .word 0x00501021
  .word 0x0c148494
  .word 0x000230c0
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0220202d
  .word 0x2402ffff
  .word 0xae620004
  .word 0xae720000
  .word 0x0c12b17c
  .word 0x8e640014
  .word 0x10000003
  .word 0x0260102d
  .word 0x1000fffd
  .word 0x0000982d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_004AC710
asm long FUN_004ac710(long param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x1200002a
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402ffff
  .word 0x14620026
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e040000
  .word 0x8e040000
  .word 0x0c13084c
  .word 0x0040882d
  .word 0xae020000
  .word 0xae110004
  .word 0x8e120014
  .word 0x1240001c
  .word 0x00000000
  .word 0x8e430004
  .word 0x2402ffff
  .word 0x14620018
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e440000
  .word 0x8e440000
  .word 0x0c13084c
  .word 0x0040882d
  .word 0xae420000
  .word 0xae510004
  .word 0x8e520014
  .word 0x1240000e
  .word 0x00000000
  .word 0x8e430004
  .word 0x2402ffff
  .word 0x1462000a
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e440000
  .word 0x8e440000
  .word 0x0c13084c
  .word 0x0040882d
  .word 0xae420000
  .word 0xae510004
  .word 0x0c12b1c4
  .word 0x8e440014
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
}

// FUN_004AC7F0
asm void FUN_004ac7f0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c020096
  .word 0xffbf0000
  .word 0x8c44ed88
  .word 0x1080000d
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x10400005
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x0c12b0e4
  .word 0x0040202d
  .word 0x3c020096
  .word 0x0c130f0c
  .word 0x8c44ed84
  .word 0x3c030096
  .word 0xac60ed84
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AC860
#pragma optimization_level 3

void FUN_004ac860(u32 param_1,u32 param_2)

{
  DAT_007cdcc4 = param_1;
  DAT_007cdcc8 = param_2;
  return;
}
#pragma optimization_level 2

// FUN_004AC870
asm u32 FUN_004ac870(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c080096
  .word 0xffbf0010
  .word 0x3c020004
  .word 0x7fb00000
  .word 0x2404001c
  .word 0x8f85afd4
  .word 0x24060004
  .word 0x8f87afd8
  .word 0x2508f990
  .word 0x0c130ed8
  .word 0x344901a1
  .word 0x3c030096
  .word 0x0040202d
  .word 0xac62ed84
  .word 0x3c020003
  .word 0x344501a1
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200000b
  .word 0x00000000
  .word 0xae000000
  .word 0x24020001
  .word 0xae000004
  .word 0x0200202d
  .word 0xae000008
  .word 0xae02000c
  .word 0xae000014
  .word 0xae100018
  .word 0x0c12b17c
  .word 0xae000010
  .word 0x3c020096
  .word 0x0200202d
  .word 0x0c12b17c
  .word 0xac50ed88
  .word 0xdfbf0010
  .word 0x24020001
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_004AC920
asm u64 FUN_004ac920(u64 param_1,int param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x2402ffff
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8c830004
  .word 0x10620048
  .word 0x00c0882d
  .word 0x8e640000
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600000
  .word 0xae600004
  .word 0x8e640014
  .word 0x1080000f
  .word 0x00000000
  .word 0x0c12b104
  .word 0x00000000
  .word 0x8e640014
  .word 0x10800009
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x0c12b0e4
  .word 0x0040202d
  .word 0xae600014
  .word 0xae730018
  .word 0x3c020003
  .word 0x8e430004
  .word 0x344501a1
  .word 0x3c020096
  .word 0xae630004
  .word 0x8e430008
  .word 0x30630001
  .word 0x0003182b
  .word 0xae630008
  .word 0x8e430008
  .word 0x30630002
  .word 0x0003182b
  .word 0xae63000c
  .word 0xc640000c
  .word 0xe6600010
  .word 0x8e640004
  .word 0x8c420178
  .word 0x00041840
  .word 0x00641821
  .word 0x0040f809
  .word 0x000320c0
  .word 0x0040802d
  .word 0x12000019
  .word 0x00000000
  .word 0x8e630004
  .word 0x14600018
  .word 0x00000000
  .word 0xae700000
  .word 0x8e420008
  .word 0x30420004
  .word 0x1440001e
  .word 0x00000000
  .word 0x8e620014
  .word 0x10400028
  .word 0x00000000
  .word 0xac530018
  .word 0x8c420014
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x10000020
  .word 0x0260102d
  .word 0x0c13082c
  .word 0x8e640000
  .word 0x1000ffbe
  .word 0xae600000
  .word 0x1000001a
  .word 0x0000102d
  .word 0x00031040
  .word 0x0220202d
  .word 0x00431021
  .word 0x0200282d
  .word 0x0002a0c0
  .word 0x0c131494
  .word 0x0280302d
  .word 0x1282ffe1
  .word 0x00000000
  .word 0x1000000f
  .word 0x0000102d
  .word 0x0220202d
  .word 0x240501a1
  .word 0x0000302d
  .word 0x0c130580
  .word 0x0000382d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x0c12b2e4
  .word 0x0220202d
  .word 0x1000ffd7
  .word 0xae620014
  .word 0x0260102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_004ACB10
asm u64 FUN_004acb10(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x24060010
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0200202d
  .word 0x0c131494
  .word 0x27a50030
  .word 0x24030010
  .word 0x14430007
  .word 0x00000000
  .word 0x8fa30030
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10000009
  .word 0x0220102d
  .word 0x10000007
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0200302d
  .word 0x0c12b248
  .word 0x27a50030
  .word 0x1000fff7
  .word 0x0040882d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
}

// FUN_004ACB90
asm long FUN_004acb90(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c030003
  .word 0xffbf0030
  .word 0x3c020096
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c44ed84
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x346501a1
  .word 0x0040802d
  .word 0x12000017
  .word 0x00000000
  .word 0xae000000
  .word 0x24020001
  .word 0xae000004
  .word 0x0200202d
  .word 0xae000008
  .word 0xae02000c
  .word 0xae000014
  .word 0xae100018
  .word 0x0c12b17c
  .word 0xae000010
  .word 0x1000000c
  .word 0x0220202d
  .word 0x10000005
  .word 0x0000902d
  .word 0x8fa30040
  .word 0x24020001
  .word 0x1062000f
  .word 0x00000000
  .word 0x12400013
  .word 0x00000000
  .word 0x10000021
  .word 0x0240102d
  .word 0x0220202d
  .word 0x27a50040
  .word 0x24060010
  .word 0x0c131494
  .word 0x0200902d
  .word 0x24030010
  .word 0x1043fff1
  .word 0x00000000
  .word 0x1000ffed
  .word 0x00000000
  .word 0x0220302d
  .word 0x0200202d
  .word 0x0c12b248
  .word 0x27a50040
  .word 0x1000ffed
  .word 0x0040902d
  .word 0x1200ffed
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0200202d
  .word 0x1040ffe9
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x1040ffe5
  .word 0x00000000
  .word 0x0c12ac38
  .word 0x0040202d
  .word 0x0c12b0e4
  .word 0x0040202d
  .word 0x1000ffdf
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_004ACCC0
asm u8 FUN_004accc0(float *param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x2402ffff
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8ca30004
  .word 0x14620005
  .word 0x0000802d
  .word 0x0c130824
  .word 0x8e840000
  .word 0x10000003
  .word 0x0040982d
  .word 0x8e820000
  .word 0x0040982d
  .word 0x0040902d
  .word 0x0000882d
  .word 0x8e820004
  .word 0x2403ffff
  .word 0x10430003
  .word 0x00000000
  .word 0x10000004
  .word 0x2442ffff
  .word 0x0c130848
  .word 0x8e840000
  .word 0x2442ffff
  .word 0x0222082a
  .word 0x10200038
  .word 0x00000000
  .word 0x26520018
  .word 0xc6460008
  .word 0xc6610008
  .word 0x46060836
  .word 0x45000003
  .word 0x00000000
  .word 0x10000002
  .word 0x46000806
  .word 0x46003006
  .word 0xc6a20004
  .word 0x46001036
  .word 0x45010026
  .word 0x00000000
  .word 0x46060834
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x46000806
  .word 0x46003006
  .word 0x46001036
  .word 0x4500001d
  .word 0x00000000
  .word 0xc6440004
  .word 0xc6650004
  .word 0x46042834
  .word 0x45010003
  .word 0x00000000
  .word 0x10000002
  .word 0x46002806
  .word 0x46002006
  .word 0xc6a30000
  .word 0x46001836
  .word 0x45000011
  .word 0x00000000
  .word 0x46060832
  .word 0x4501000e
  .word 0x00000000
  .word 0x46011081
  .word 0x46013001
  .word 0x46052041
  .word 0x46011042
  .word 0x46000803
  .word 0x46042832
  .word 0x00000000
  .word 0x00000000
  .word 0x45010007
  .word 0x46002800
  .word 0x46001836
  .word 0x45010004
  .word 0x00000000
  .word 0x26730018
  .word 0x1000ffc0
  .word 0x26310001
  .word 0x1000fffc
  .word 0x26100001
  .word 0x06010004
  .word 0x32020001
  .word 0x10400002
  .word 0x00000000
  .word 0x2442fffe
  .word 0xdfbf0060
  .word 0x0002102b
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
}



// FUN_004ace60 thunk_FUN_004accc0
asm u8 thunk_FUN_004accc0(float *param_1,int *param_2)
{
  .set noreorder
  .word 0x0812b330
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}



// FUN_004ace70 thunk_FUN_0046bab0
asm long thunk_FUN_0046bab0(long param_1,u64 param_2)
{
  .set noreorder
  .word 0x0811aeac
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004ACE80
asm int FUN_004ace80(int param_1,float *param_2,u64 param_3,u32 *param_4,int *param_5)
{
  .set noreorder
  .word 0x27bdfef0
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x00c0b82d
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xafa40108
  .word 0xe7b50004
  .word 0xafa70104
  .word 0xe7b40000
  .word 0xafa80100
  .word 0x8cbe006c
  .word 0x13c000f1
  .word 0x00a0802d
  .word 0x87c20018
  .word 0x24420001
  .word 0xa7c20018
  .word 0x8fa20108
  .word 0xafa000f0
  .word 0xafa000e0
  .word 0x8c510014
  .word 0x8e220004
  .word 0x2403ffff
  .word 0x14430003
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e240000
  .word 0x00021840
  .word 0x8e310014
  .word 0x8fa200f0
  .word 0x00431021
  .word 0xafa200f0
  .word 0x2463fffe
  .word 0x8fa200e0
  .word 0x00431021
  .word 0xafa200e0
  .word 0x8fa20108
  .word 0x8c420014
  .word 0x1622ffee
  .word 0xafa200d0
  .word 0x3c020096
  .word 0xc455ef58
  .word 0x8fa200e0
  .word 0x104000c2
  .word 0xc6140070
  .word 0x8fa200f0
  .word 0x104000bf
  .word 0x00000000
  .word 0x8fa20104
  .word 0x8ee9005c
  .word 0x8ee3002c
  .word 0x8ee40030
  .word 0x8c550000
  .word 0x8fa20100
  .word 0x00153840
  .word 0x00f54021
  .word 0x00152880
  .word 0x8d270014
  .word 0x00084080
  .word 0x00859821
  .word 0x8c460000
  .word 0x00e8a021
  .word 0x8ee20034
  .word 0x000630c0
  .word 0x0066b021
  .word 0x001518c0
  .word 0x00439021
  .word 0x8fa200d0
  .word 0xc4560010
  .word 0x8c430004
  .word 0x2402ffff
  .word 0x14620006
  .word 0x00000000
  .word 0x8fa200d0
  .word 0x0c130824
  .word 0x8c440000
  .word 0x10000004
  .word 0x0040882d
  .word 0x8fa200d0
  .word 0x8c420000
  .word 0x0040882d
  .word 0x2403ffff
  .word 0x8fa200d0
  .word 0x8c420004
  .word 0x14430005
  .word 0x7fa200c0
  .word 0x8fa200d0
  .word 0x0c130848
  .word 0x8c440000
  .word 0x7fa200c0
  .word 0x7ba200c0
  .word 0x00021840
  .word 0x3c023f80
  .word 0x44820800
  .word 0x02a31021
  .word 0x2442ffff
  .word 0x7fa200b0
  .word 0x7ba200c0
  .word 0x00621021
  .word 0x000218c0
  .word 0x02231821
  .word 0x0000102d
  .word 0xc460fffc
  .word 0x460008c3
  .word 0x00000000
  .word 0x7ba300c0
  .word 0x0003082b
  .word 0x10200073
  .word 0x00000000
  .word 0x4616a080
  .word 0x240400ff
  .word 0x4616a041
  .word 0x44800000
  .word 0xc6240004
  .word 0xc625000c
  .word 0xc6260010
  .word 0x46040018
  .word 0x4602291d
  .word 0xe6840000
  .word 0xc6240008
  .word 0x46023182
  .word 0x46062101
  .word 0xe6840004
  .word 0xe6950008
  .word 0x8e030064
  .word 0x30630001
  .word 0x1060009f
  .word 0x00000000
  .word 0xc6290014
  .word 0xc6080018
  .word 0xc6060020
  .word 0xc6040000
  .word 0xc6050024
  .word 0xc607001c
  .word 0x46034a82
  .word 0x460a4202
  .word 0x46044100
  .word 0x460a3242
  .word 0x460a2a02
  .word 0x46002124
  .word 0x44032000
  .word 0xc6060004
  .word 0x460a39c2
  .word 0xc6050008
  .word 0x460639c0
  .word 0xc604000c
  .word 0x46054980
  .word 0x46044140
  .word 0xa2630000
  .word 0x46003924
  .word 0x44032000
  .word 0x46003124
  .word 0xa2630001
  .word 0x44032000
  .word 0x46002924
  .word 0xa2630002
  .word 0x44032000
  .word 0x00000000
  .word 0xa2630003
  .word 0x26730004
  .word 0x00000000
  .word 0x8e030064
  .word 0x30630002
  .word 0x14600081
  .word 0x00000000
  .word 0xc6240004
  .word 0xc6260010
  .word 0xc625000c
  .word 0x46040018
  .word 0x46013182
  .word 0x4601291c
  .word 0xe684000c
  .word 0xc6240008
  .word 0x46062100
  .word 0xe6840010
  .word 0xe6950014
  .word 0x8e030064
  .word 0x30630001
  .word 0x10600080
  .word 0x00000000
  .word 0xc6290014
  .word 0xc6080048
  .word 0xc6060050
  .word 0xc6040030
  .word 0xc6050054
  .word 0xc607004c
  .word 0x46034a82
  .word 0x460a4202
  .word 0x46044100
  .word 0x460a3242
  .word 0x460a2a02
  .word 0x46002124
  .word 0x44032000
  .word 0xc6060034
  .word 0x460a39c2
  .word 0xc6050038
  .word 0x460639c0
  .word 0xc604003c
  .word 0x46054980
  .word 0x46044140
  .word 0xa2630000
  .word 0x46003924
  .word 0x44032000
  .word 0x46003124
  .word 0xa2630001
  .word 0x44032000
  .word 0x46002924
  .word 0xa2630002
  .word 0x44032000
  .word 0x00000000
  .word 0xa2630003
  .word 0x26730004
  .word 0x00000000
  .word 0x8e030064
  .word 0x30630002
  .word 0x14600061
  .word 0x00000000
  .word 0x7ba300c0
  .word 0x24420001
  .word 0x26940018
  .word 0x0043182b
  .word 0x1460ff93
  .word 0x26310018
  .word 0x7ba200c0
  .word 0x2442ffff
  .word 0x0002102b
  .word 0x14400064
  .word 0x0000882d
  .word 0x7ba200b0
  .word 0x24550001
  .word 0x8fa200d0
  .word 0x8c420014
  .word 0xafa200d0
  .word 0x8fa20108
  .word 0x8c430014
  .word 0x8fa200d0
  .word 0x1443ff56
  .word 0x00000000
  .word 0x0c125330
  .word 0x03c0202d
  .word 0x8fa30104
  .word 0x8fa20108
  .word 0x8c640000
  .word 0x8fa300f0
  .word 0x00832021
  .word 0x8fa30104
  .word 0xac640000
  .word 0x8fa30100
  .word 0x8c640000
  .word 0x8fa300e0
  .word 0x00832021
  .word 0x8fa30100
  .word 0x1000006c
  .word 0xac640000
  .word 0x0c1252f8
  .word 0x00000000
  .word 0x8e050068
  .word 0x10a00003
  .word 0x0040f02d
  .word 0x0c125354
  .word 0x03c0202d
  .word 0x8e020064
  .word 0x30420001
  .word 0x1440000b
  .word 0x00000000
  .word 0x92050060
  .word 0x92040061
  .word 0x92030062
  .word 0x92020063
  .word 0xa3c50004
  .word 0xa3c40005
  .word 0xa3c30006
  .word 0xa3c20007
  .word 0x1000feff
  .word 0xae1e006c
  .word 0xc780afdc
  .word 0xe7a0010c
  .word 0x93a5010c
  .word 0x93a4010d
  .word 0x93a3010e
  .word 0x93a2010f
  .word 0xa3c50004
  .word 0xa3c40005
  .word 0xa3c30006
  .word 0x1000fff4
  .word 0xa3c20007
  .word 0xa2640000
  .word 0xa2640001
  .word 0xa2640002
  .word 0xa2640003
  .word 0x1000ff7e
  .word 0x26730004
  .word 0x00000000
  .word 0xc6280014
  .word 0xc6070028
  .word 0xc606002c
  .word 0xc6050010
  .word 0xc6040014
  .word 0x46034202
  .word 0x460839c2
  .word 0x46083182
  .word 0x46053940
  .word 0x46043100
  .word 0xe6450000
  .word 0xe6440004
  .word 0x1000ff73
  .word 0x26520008
  .word 0xa2640000
  .word 0xa2640001
  .word 0xa2640002
  .word 0xa2640003
  .word 0x1000ff9d
  .word 0x26730004
  .word 0xc6280014
  .word 0xc6070058
  .word 0xc606005c
  .word 0xc6050040
  .word 0xc6040044
  .word 0x46034202
  .word 0x460839c2
  .word 0x46083182
  .word 0x46053940
  .word 0x46043100
  .word 0xe6450000
  .word 0xe6440004
  .word 0x1000ff93
  .word 0x26520008
  .word 0x26a30001
  .word 0x26a20002
  .word 0x32a6ffff
  .word 0x3067ffff
  .word 0x3048ffff
  .word 0x02e0202d
  .word 0x0c124c84
  .word 0x02c0282d
  .word 0x02e0202d
  .word 0x02c0282d
  .word 0x0c124c8c
  .word 0x03c0302d
  .word 0x26a20003
  .word 0x26a30001
  .word 0x3047ffff
  .word 0x3066ffff
  .word 0x26a20002
  .word 0x02e0202d
  .word 0x3048ffff
  .word 0x0c124c84
  .word 0x26c50008
  .word 0x02e0202d
  .word 0x26c50008
  .word 0x0c124c8c
  .word 0x03c0302d
  .word 0x7ba200c0
  .word 0x26310001
  .word 0x26d60010
  .word 0x2442ffff
  .word 0x0222102b
  .word 0x1440ffe1
  .word 0x26b50002
  .word 0x1000ff7d
  .word 0x7ba200b0
  .word 0xdfbf00a0
  .word 0xc7b60008
  .word 0x7bbe0090
  .word 0xc7b50004
  .word 0x7bb70080
  .word 0xc7b40000
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd0110
  .word 0x00000000
}

// FUN_004AD480
asm u64 FUN_004ad480(u64 param_1,char *param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820010
  .word 0x8c440004
  .word 0x0c12a6f4
  .word 0x00a0902d
  .word 0x10400021
  .word 0x00000000
  .word 0x0240182d
  .word 0x0000882d
  .word 0x80620000
  .word 0x10400005
  .word 0x00000000
  .word 0x26310002
  .word 0x1000fffb
  .word 0x24630002
  .word 0x00000000
  .word 0x80620001
  .word 0x00000000
  .word 0x1440fff9
  .word 0x00000000
  .word 0x3c020003
  .word 0x26300002
  .word 0x344501a7
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0200202d
  .word 0xae620000
  .word 0x8e640000
  .word 0x10800007
  .word 0x00000000
  .word 0x0240282d
  .word 0x0c148494
  .word 0x0200302d
  .word 0xae710008
  .word 0x10000019
  .word 0x0260102d
  .word 0x10000017
  .word 0x0000102d
  .word 0x3c020096
  .word 0x8c420164
  .word 0x0040f809
  .word 0x0240202d
  .word 0x0040882d
  .word 0x3c020003
  .word 0x344501a7
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x26240001
  .word 0xae620000
  .word 0x8e640000
  .word 0x10800007
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42013c
  .word 0x0040f809
  .word 0x0240282d
  .word 0x1000ffe8
  .word 0xae710008
  .word 0x0000102d
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

// FUN_004AD5B0
asm u64 FUN_004ad5b0(u64 param_1,long param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c033f80
  .word 0xffbf0030
  .word 0x2402fffe
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0xac8300bc
  .word 0x00c0802d
  .word 0x8c830008
  .word 0x00621024
  .word 0x0c12951c
  .word 0xac820008
  .word 0xae4200b4
  .word 0x8e4200b4
  .word 0x14400003
  .word 0x00000000
  .word 0x10000022
  .word 0x0000102d
  .word 0x0200282d
  .word 0x0c12b5c0
  .word 0x0240202d
  .word 0x1040000e
  .word 0x00000000
  .word 0x12200018
  .word 0x00000000
  .word 0x0220282d
  .word 0x0c12b520
  .word 0x264400b0
  .word 0x14400005
  .word 0x00000000
  .word 0x0c129550
  .word 0x8e4400b4
  .word 0x10000012
  .word 0x0000102d
  .word 0x10000010
  .word 0x0240102d
  .word 0x24020190
  .word 0x0000202d
  .word 0x0c130744
  .word 0xafa20048
  .word 0xafa2004c
  .word 0x0c130714
  .word 0x27a40048
  .word 0x8e430008
  .word 0x3c020100
  .word 0x00621025
  .word 0x1000ffe8
  .word 0xae420008
  .word 0xae4000b0
  .word 0x1000fff0
  .word 0xae4000b8
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_004AD6A0
asm u64 FUN_004ad6a0(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c8400b0
  .word 0x10800005
  .word 0x24100001
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e2400b4
  .word 0x10800004
  .word 0x00000000
  .word 0x0c129550
  .word 0x00000000
  .word 0x0040802d
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_004AD700
asm u64 FUN_004ad700(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x0080882d
  .word 0x7fb00000
  .word 0x00a0202d
  .word 0x0c12a6a0
  .word 0x0220802d
  .word 0x10400004
  .word 0x00000000
  .word 0xae2200c0
  .word 0x10000003
  .word 0x0200102d
  .word 0x1000fffc
  .word 0x0000802d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_004AD750
asm u64 FUN_004ad750(u64 param_1)
{
  .set noreorder
  .word 0x27bdff30
  .word 0x3c020100
  .word 0xffbf0050
  .word 0x34430004
  .word 0x7fb40040
  .word 0x24020004
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c840008
  .word 0x00831824
  .word 0x10620003
  .word 0x00000000
  .word 0x10000064
  .word 0x0200102d
  .word 0x27a300c8
  .word 0x10600008
  .word 0x24020008
  .word 0xa0600000
  .word 0x2442ffff
  .word 0x24630001
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x8e030008
  .word 0x24020002
  .word 0x30630002
  .word 0x10620042
  .word 0x00000000
  .word 0x0c12ab1c
  .word 0x26040050
  .word 0x27a400b0
  .word 0x26050090
  .word 0x0c148494
  .word 0x24060010
  .word 0x27a400a0
  .word 0x260500a0
  .word 0x0c148494
  .word 0x24060010
  .word 0x8e1100b4
  .word 0x27a40060
  .word 0x24060010
  .word 0x0c148494
  .word 0x26250030
  .word 0x27b20070
  .word 0x26250048
  .word 0x0240202d
  .word 0x0c148494
  .word 0x24060010
  .word 0x27b30080
  .word 0x26250018
  .word 0x0260202d
  .word 0x0c148494
  .word 0x24060010
  .word 0x27b40090
  .word 0x0220282d
  .word 0x0280202d
  .word 0x0c148494
  .word 0x24060010
  .word 0x0220202d
  .word 0x27a50060
  .word 0x0240302d
  .word 0x0260382d
  .word 0x0280402d
  .word 0x27a900b0
  .word 0x0c12956c
  .word 0x27aa00a0
  .word 0x8e0200c0
  .word 0xc60c00bc
  .word 0x8e0500b0
  .word 0x27a600c8
  .word 0x8c440004
  .word 0x0c12a69c
  .word 0x0220382d
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x26240030
  .word 0x27a50060
  .word 0x0c148494
  .word 0x24060010
  .word 0x0240282d
  .word 0x26240048
  .word 0x0c148494
  .word 0x24060010
  .word 0x0260282d
  .word 0x26240018
  .word 0x0c148494
  .word 0x24060010
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c148494
  .word 0x24060010
  .word 0x1000ffaf
  .word 0x00000000
  .word 0x0c12aad0
  .word 0x26040010
  .word 0x0c12ac30
  .word 0x00000000
  .word 0x26060050
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x8e030008
  .word 0x2402fffd
  .word 0x00621024
  .word 0x1000ffaf
  .word 0xae020008
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00d0
}

// FUN_004AD940
asm u64 FUN_004ad940(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x24060004
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x0280202d
  .word 0x7fb10010
  .word 0x27a50084
  .word 0x7fb00000
  .word 0x0c131494
  .word 0x0000902d
  .word 0x24060004
  .word 0x10460003
  .word 0x00000000
  .word 0x10000067
  .word 0x0000102d
  .word 0x0280202d
  .word 0x0c131494
  .word 0x27a5007c
  .word 0x24030004
  .word 0x1443fff9
  .word 0x00000000
  .word 0x3c100096
  .word 0x8fa40084
  .word 0x26100178
  .word 0x3c030001
  .word 0x8e020000
  .word 0x346501a7
  .word 0x0040f809
  .word 0x24840003
  .word 0x0040982d
  .word 0x1260003e
  .word 0x00000000
  .word 0x8fa20084
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24510001
  .word 0x0c131494
  .word 0x0220302d
  .word 0x16220036
  .word 0x00000000
  .word 0x0280202d
  .word 0x27a50080
  .word 0x0c131494
  .word 0x24060004
  .word 0x24030004
  .word 0x1443002f
  .word 0x00000000
  .word 0x8fa20084
  .word 0x00531021
  .word 0xa0400001
  .word 0x8fa20084
  .word 0x00531021
  .word 0xa0400002
  .word 0x8fa20080
  .word 0x1440002c
  .word 0x0000882d
  .word 0x24110001
  .word 0x1220001f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0260282d
  .word 0x0c12b56c
  .word 0x0240302d
  .word 0x10400019
  .word 0x00000000
  .word 0x0280202d
  .word 0x240501a2
  .word 0x27a6008c
  .word 0x0c130580
  .word 0x27a70088
  .word 0x10400012
  .word 0x00000000
  .word 0x8ea400b4
  .word 0x0c12994c
  .word 0x0280282d
  .word 0x1040000d
  .word 0x00000000
  .word 0xc7a0007c
  .word 0x3c100096
  .word 0x2610017c
  .word 0xe6a000bc
  .word 0x8e020000
  .word 0x0040f809
  .word 0x0240202d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x0260202d
  .word 0x1000001d
  .word 0x02a0102d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0240202d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0260202d
  .word 0x1000ffab
  .word 0x00000000
  .word 0x24440001
  .word 0x3c030001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x346501a7
  .word 0x0040902d
  .word 0x1240ffcf
  .word 0x00000000
  .word 0x8fa20080
  .word 0x0280202d
  .word 0x0240282d
  .word 0x24500001
  .word 0x0c131494
  .word 0x0200302d
  .word 0x1602ffc7
  .word 0x00000000
  .word 0x1000ffc5
  .word 0x24110001
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
}

#pragma schedule on
// FUN_004ADB50

void FUN_004adb50(void)
{
  FUN_004c3c30_typed(DAT_0095ed8c_abs[0]);
  DAT_0095ed8c_abs[0] = 0;
  return;
}

// FUN_004ADB80
asm u32 FUN_004adb80(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c080096
  .word 0xffbf0000
  .word 0x3c020004
  .word 0x8f85afe0
  .word 0x24040110
  .word 0x8f87afe4
  .word 0x24060010
  .word 0x2508f9c0
  .word 0x0c130ed8
  .word 0x344901a3
  .word 0x3c030096
  .word 0xac62ed8c
  .word 0xdfbf0000
  .word 0x24020001
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004ADBD0
asm u64 FUN_004adbd0(int *param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x24020004
  .word 0xffbf0000
  .word 0x8c830000
  .word 0x1062001c
  .word 0x00000000
  .word 0x24020003
  .word 0x10620015
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620007
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000011
  .word 0x0000102d
  .word 0x1000000f
  .word 0x0000102d
  .word 0x0c12b938
  .word 0x00000000
  .word 0x1000000c
  .word 0xdfbf0000
  .word 0x0c12be50
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0c12b878
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c12b5a8
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

#pragma tailcall on
 
// FUN_004ADC70

void FUN_004adc70(u64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004adc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_0096018c_abs)(DAT_0095ed8c_abs[0],param_1);
  return;
}
#pragma tailcall off

#pragma optimization_level 3
// FUN_004ADC90

void FUN_004adc90(u64 param_1,u64 param_2)

{
  FUN_00521250_copy(param_1,param_2,0x110);
  return;
}
#pragma optimization_level 2

// FUN_004ADCA0
asm void FUN_004adca0(void)
{
  .set noreorder
  .word 0x3c020096
  .word 0x8c44ed8c
  .word 0x3c020003
  .word 0x344501a3
  .word 0x3c020096
  .word 0x8c420188
  .word 0x00400008
  .word 0x00000000
}

// FUN_004ADCC0
asm u64 FUN_004adcc0(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x2402029a
  .word 0xffbf0010
  .word 0x3c083f80
  .word 0x7fb00000
  .word 0x24060060
  .word 0xac850000
  .word 0x0080802d
  .word 0xac820004
  .word 0x0000282d
  .word 0xac880038
  .word 0x3c020002
  .word 0xac880024
  .word 0x34470003
  .word 0xac880010
  .word 0x24020006
  .word 0xac800020
  .word 0xac800018
  .word 0xac800014
  .word 0xac800034
  .word 0xac800030
  .word 0xac800028
  .word 0xac800048
  .word 0xac800044
  .word 0xac800040
  .word 0x8c83001c
  .word 0x00671825
  .word 0xac83001c
  .word 0xac880078
  .word 0xac880064
  .word 0xac880050
  .word 0xac800060
  .word 0xac800058
  .word 0xac800054
  .word 0xac800074
  .word 0xac800070
  .word 0xac800068
  .word 0xac800088
  .word 0xac800084
  .word 0xac800080
  .word 0x8c83005c
  .word 0x00671825
  .word 0xac83005c
  .word 0xac880090
  .word 0xac880094
  .word 0xac880098
  .word 0xac88009c
  .word 0xac8000a0
  .word 0xac8000a4
  .word 0xac8000a8
  .word 0xac8000ac
  .word 0xac820008
  .word 0x0c148502
  .word 0x260400b0
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_004ADDB0
asm u64 FUN_004addb0(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x2406002c
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0200202d
  .word 0x0c131494
  .word 0x27a50030
  .word 0x2403002c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000024
  .word 0x0000102d
  .word 0x0200202d
  .word 0x2405000d
  .word 0x0000302d
  .word 0x0c130580
  .word 0x0000382d
  .word 0x14400003
  .word 0x00000000
  .word 0x1000001b
  .word 0x0000102d
  .word 0x0200202d
  .word 0x0c13067c
  .word 0x26250010
  .word 0x8fa40034
  .word 0x24030006
  .word 0x0220102d
  .word 0xae240000
  .word 0x8fa40038
  .word 0xae240004
  .word 0xc7a3003c
  .word 0xc7a20040
  .word 0xc7a10044
  .word 0xc7a00048
  .word 0xe6230090
  .word 0xe6220094
  .word 0xe6210098
  .word 0xe620009c
  .word 0xc7a3004c
  .word 0xc7a20050
  .word 0xc7a10054
  .word 0xc7a00058
  .word 0xe62300a0
  .word 0xe62200a4
  .word 0xe62100a8
  .word 0xe62000ac
  .word 0xae230008
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_004ADE90
asm u64 FUN_004ade90(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24020004
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c830000
  .word 0x10620018
  .word 0x0080802d
  .word 0x24020003
  .word 0x10620011
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000010
  .word 0x0000102d
  .word 0x0c12bafc
  .word 0x00000000
  .word 0x1000000c
  .word 0x0200102d
  .word 0x0c12bff8
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0c12b89c
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c12b650
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004ADF30
asm u64 FUN_004adf30(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24020004
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c830000
  .word 0x1062001a
  .word 0x0080802d
  .word 0x24020003
  .word 0x10620013
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000c
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600011
  .word 0x00000000
  .word 0x1000000f
  .word 0x0000802d
  .word 0x0c12ba58
  .word 0x00000000
  .word 0x1000000c
  .word 0x0200102d
  .word 0x0c12be74
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0c12b8bc
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c12b5d4
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_004ADFD0
asm u64 FUN_004adfd0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x24020001
  .word 0x14a20005
  .word 0x00000000
  .word 0x8c820008
  .word 0x34420004
  .word 0x10000005
  .word 0xac820008
  .word 0x8c830008
  .word 0x2402fffb
  .word 0x00621024
  .word 0xac820008
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AE010
#pragma optimization_level 3

u32 FUN_004ae010(int param_1)
{
  return *(u32 *)(param_1 + 8) & 4;
}
#pragma optimization_level 2

// FUN_004AE020
asm u64 FUN_004ae020(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x24870010
  .word 0x24060008
  .word 0x8ca30000
  .word 0x24c6ffff
  .word 0x8ca20004
  .word 0xace30000
  .word 0x24a50008
  .word 0xace20004
  .word 0x1cc0fff9
  .word 0x24e70008
  .word 0x8c830008
  .word 0x0080102d
  .word 0x34630002
  .word 0x03e00008
  .word 0xac830008
  .word 0x00000000
}

// FUN_004AE060
#pragma optimization_level 3

void FUN_004ae060(int param_1)

{
  *(u32 *)(param_1 + 8) = *(u32 *)(param_1 + 8) | 2;
  return;
}
#pragma optimization_level 2

// FUN_004AE070
asm u64 FUN_004ae070(u32 param_1,u32 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c023f80
  .word 0xffbf0010
  .word 0x27a50020
  .word 0x7fb00000
  .word 0x24060001
  .word 0x0080802d
  .word 0xafa20028
  .word 0xe7ac0020
  .word 0x26040010
  .word 0x0c130cf4
  .word 0xe7ad0024
  .word 0x8e030008
  .word 0x0200102d
  .word 0x34630002
  .word 0xae030008
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_004AE0C0
asm u64 FUN_004ae0c0(u32 param_1,u32 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24060001
  .word 0xffbf0010
  .word 0x27a50020
  .word 0x7fb00000
  .word 0x0080802d
  .word 0xafa00028
  .word 0xe7ac0020
  .word 0x26040010
  .word 0x0c130d74
  .word 0xe7ad0024
  .word 0x8e030008
  .word 0x0200102d
  .word 0x34630002
  .word 0xae030008
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

#pragma schedule on
// FUN_004AE110

u32 FUN_004ae110(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00521250_u32(param_1 + 0x90,(u32)param_2,0x10);
  *(u32 *)(iVar1 + 8) = *(u32 *)(iVar1 + 8) | 8;
  return (u32)param_1;
}
#pragma schedule off

// FUN_004AE150
asm u64 FUN_004ae150(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24060010
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c148494
  .word 0x260400a0
  .word 0xc60000a0
  .word 0x3c03437f
  .word 0x44830800
  .word 0x0200102d
  .word 0x46010002
  .word 0xe60000a0
  .word 0xc60000a4
  .word 0x46010002
  .word 0xe60000a4
  .word 0xc60000a8
  .word 0x46010002
  .word 0xe60000a8
  .word 0xc60000ac
  .word 0x46010002
  .word 0xe60000ac
  .word 0x8e030008
  .word 0x34630008
  .word 0xae030008
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AE1D0

#pragma schedule on
u32 FUN_004ae1d0(u32 param_1,u32 param_2)

{
  *(u32 *)((int)param_1 + 4) = param_2;
  return param_1;
}
#pragma schedule off

#pragma schedule on
#pragma tailcall on
// FUN_004AE1E0

u8 FUN_004ae1e0(int param_1)

{
  return FUN_004ac390(*(int *)(param_1 + 0xb0));
}
#pragma tailcall off
#pragma schedule off

// FUN_004AE1F0
asm u64 FUN_004ae1f0(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x24020004
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c830008
  .word 0x30630004
  .word 0x10620003
  .word 0x0080802d
  .word 0x10000011
  .word 0x0000102d
  .word 0xc4a00000
  .word 0x27a40028
  .word 0x260600d0
  .word 0xe7a00038
  .word 0xc4a00004
  .word 0xe7a0003c
  .word 0x27a50038
  .word 0x0c131af8
  .word 0xafa00040
  .word 0xc7a10028
  .word 0xc7a0002c
  .word 0xe7a10048
  .word 0xe7a0004c
  .word 0x8e0500b0
  .word 0x0c12b398
  .word 0x27a40048
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 2
// FUN_004AE270
asm u32 FUN_004ae270(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0c12b15c
  .word 0x00a0802d
  .word 0xae2200b0
  .word 0x0200202d
  .word 0x8e230008
  .word 0x2402fffe
  .word 0x240501a1
  .word 0x27a6003c
  .word 0x27a70038
  .word 0x00621024
  .word 0x0c130580
  .word 0xae220008
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x0000102d
  .word 0x8e2400b0
  .word 0x0c12b2c4
  .word 0x0200282d
  .word 0x0002880a
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}
#pragma schedule off
#pragma optimization_level 0

// FUN_004AE2F0
asm u64 FUN_004ae2f0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24020004
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c840008
  .word 0x30830004
  .word 0x14620009
  .word 0x00000000
  .word 0x30830002
  .word 0x24020002
  .word 0x10620007
  .word 0x00000000
  .word 0x0c12ab1c
  .word 0x26040050
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x10000017
  .word 0x0200102d
  .word 0x0c12aad0
  .word 0x26040010
  .word 0x0c12ac30
  .word 0x00000000
  .word 0x26060050
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x260400d0
  .word 0x0c130ca8
  .word 0x26050050
  .word 0x8e030008
  .word 0x2402fffd
  .word 0x00621024
  .word 0x1000ffe7
  .word 0xae020008
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AE3B0
asm u64 FUN_004ae3b0(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x24060004
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x7fb10010
  .word 0x0240202d
  .word 0x27a5005c
  .word 0x0c130644
  .word 0x7fb00000
  .word 0x10400009
  .word 0x00000000
  .word 0x8fa2005c
  .word 0xae620004
  .word 0x8fa2005c
  .word 0x14400006
  .word 0x00000000
  .word 0xae600000
  .word 0x1000002d
  .word 0x0260102d
  .word 0x1000002b
  .word 0x0000102d
  .word 0x00022080
  .word 0x3c020003
  .word 0x34450190
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xae620000
  .word 0x8e620000
  .word 0x10400015
  .word 0x00000000
  .word 0x8fa2005c
  .word 0x0002082b
  .word 0x1020ffee
  .word 0x0000882d
  .word 0x0000802d
  .word 0x0c12bdd8
  .word 0x0240202d
  .word 0x8e630000
  .word 0x00701821
  .word 0x14400003
  .word 0xac620000
  .word 0x10000013
  .word 0x0000102d
  .word 0x8fa2005c
  .word 0x26310001
  .word 0x0222102b
  .word 0x1440fff4
  .word 0x26100004
  .word 0x1000ffde
  .word 0x00000000
  .word 0x8fa3005c
  .word 0x24020190
  .word 0xafa20050
  .word 0x3c028000
  .word 0x34440013
  .word 0x0c130744
  .word 0x00032880
  .word 0xafa20054
  .word 0x0c130714
  .word 0x27a40050
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AE4E0
asm u8 FUN_004ae4e0(int param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c8400b8
  .word 0x10800004
  .word 0x24100001
  .word 0x0c13082c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c130824
  .word 0x8e2400b0
  .word 0x8e2500b4
  .word 0x8e2400b0
  .word 0x00051900
  .word 0x00651821
  .word 0x00031900
  .word 0x0c130824
  .word 0x00439021
  .word 0x0040982d
  .word 0x1272000a
  .word 0x00000000
  .word 0x0010802b
  .word 0x12000004
  .word 0x00000000
  .word 0x0c12b6f4
  .word 0x0260202d
  .word 0x0002802b
  .word 0x26730110
  .word 0x1672fff8
  .word 0x00000000
  .word 0x0010102b
  .word 0x10400004
  .word 0x00000000
  .word 0x0c13082c
  .word 0x8e2400b0
  .word 0x0002102b
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_004AE5A0
asm u8 FUN_004ae5a0(long param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0011802b
  .word 0x12000029
  .word 0x00000000
  .word 0x8e2400b8
  .word 0x10800004
  .word 0x24100001
  .word 0x0c13082c
  .word 0x00000000
  .word 0x0040802d
  .word 0x0c130824
  .word 0x8e2400b0
  .word 0x8e2500b4
  .word 0x8e2400b0
  .word 0x00051900
  .word 0x00651821
  .word 0x00031900
  .word 0x0c130824
  .word 0x00439021
  .word 0x0040982d
  .word 0x1272000b
  .word 0x00000000
  .word 0x0010802b
  .word 0x12000004
  .word 0x00000000
  .word 0x0c12b6f4
  .word 0x0260202d
  .word 0x0002802b
  .word 0x26730110
  .word 0x1672fff8
  .word 0x00000000
  .word 0x00000000
  .word 0x0010802b
  .word 0x12000004
  .word 0x00000000
  .word 0x0c13082c
  .word 0x8e2400b0
  .word 0x0002802b
  .word 0x3c020096
  .word 0x8c44ed8c
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x0200102d
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

// FUN_004AE690
asm u64 FUN_004ae690(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c130824
  .word 0x8c8400b8
  .word 0x8e0300b4
  .word 0x000318c0
  .word 0x00433021
  .word 0x1046000c
  .word 0x00000000
  .word 0x1046000c
  .word 0x0040202d
  .word 0x8c830000
  .word 0x8c630004
  .word 0xac830004
  .word 0x24840008
  .word 0x00000000
  .word 0x1486fffa
  .word 0x00000000
  .word 0x10000004
  .word 0x24c5fff8
  .word 0x10000025
  .word 0x0200102d
  .word 0x24c5fff8
  .word 0x0045082b
  .word 0x10200013
  .word 0x00000000
  .word 0x24470008
  .word 0x00e6082b
  .word 0x1020000b
  .word 0x00000000
  .word 0x8c440004
  .word 0x8ce30004
  .word 0x0064082a
  .word 0x1420000c
  .word 0x00000000
  .word 0x00000000
  .word 0x24e70008
  .word 0x00e6182b
  .word 0x1460fff7
  .word 0x00000000
  .word 0x24420008
  .word 0x0045182b
  .word 0x1460ffef
  .word 0x00000000
  .word 0x1000000d
  .word 0x0200102d
  .word 0xc4430000
  .word 0xc4420004
  .word 0xc4e10000
  .word 0xc4e00004
  .word 0xe7a30028
  .word 0xe7a2002c
  .word 0xe4410000
  .word 0xe4400004
  .word 0xe4e30000
  .word 0x1000ffec
  .word 0xe4e20004
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_004AE790
asm u64 FUN_004ae790(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x24020001
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830008
  .word 0x30630001
  .word 0x10620003
  .word 0x0080902d
  .word 0x10000044
  .word 0x0240102d
  .word 0x3c020003
  .word 0x24040110
  .word 0x0c130754
  .word 0x344501a3
  .word 0x8e4400b0
  .word 0x0c130824
  .word 0x0040802d
  .word 0x8e4300b4
  .word 0x00031880
  .word 0x00439821
  .word 0x10530010
  .word 0x0040882d
  .word 0x3c020003
  .word 0x0200202d
  .word 0x0c13079c
  .word 0x344501a3
  .word 0x8e250000
  .word 0x10a00005
  .word 0x00000000
  .word 0x0c12b724
  .word 0x0040202d
  .word 0x0c12b71c
  .word 0x8e240000
  .word 0x26310004
  .word 0x1633fff3
  .word 0x00000000
  .word 0x00000000
  .word 0x0c13082c
  .word 0x8e4400b0
  .word 0xae5000b0
  .word 0x3c020003
  .word 0x8e460008
  .word 0x2403fffe
  .word 0x34450190
  .word 0x24040008
  .word 0x00c31024
  .word 0x0c130754
  .word 0xae420008
  .word 0xae4200b8
  .word 0x8e4500b4
  .word 0x10a0ffd5
  .word 0x00000000
  .word 0x8e4400b8
  .word 0x3c020003
  .word 0x0c1307dc
  .word 0x34460190
  .word 0x0c130824
  .word 0x8e4400b8
  .word 0x8e4400b0
  .word 0x0c130824
  .word 0x0040802d
  .word 0x8e4300b4
  .word 0x000318c0
  .word 0x02031821
  .word 0x12030008
  .word 0x00000000
  .word 0xae020000
  .word 0x26100008
  .word 0x24420110
  .word 0x00000000
  .word 0x00000000
  .word 0x1603fffa
  .word 0x00000000
  .word 0x0c12b9a4
  .word 0x0240202d
  .word 0x1000ffbc
  .word 0xae4000bc
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_004AE8F0
#pragma optimization_level 3

u32 FUN_004ae8f0(int param_1)
{
  return *(u32 *)(param_1 + 0xb4);
}
#pragma optimization_level 2

#pragma optimization_level 3
#pragma schedule on
// FUN_004AE900

#pragma no_branch_likely on
u32 FUN_004ae900(int param_1)

{
  u32 *puVar1;
  u32 uVar2;
  
  if ((*(u32 *)(param_1 + 8) & 1) == 1) {
    puVar1 = FUN_004c21b0_typed(*(u32 *)(param_1 + 0xb0));
    uVar2 = *puVar1;
  }
  else {
    uVar2 = (u32)FUN_004c21b0_typed(*(u32 *)(param_1 + 0xb0));
  }
  return uVar2;
}
#pragma optimization_level 2
#pragma schedule off

#pragma no_branch_likely off
// FUN_004AE940
asm void FUN_004ae940(u64 param_1)
{
  .set noreorder
  .word 0x3c05007c
  .word 0x3c06007c
  .word 0x24a5cb70
  .word 0x0812ba58
  .word 0x24c6cb80
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AE960
asm u64 FUN_004ae960(u64 param_1,float *param_2,float *param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x24020004
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x0000902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8c840008
  .word 0x30830004
  .word 0x14620049
  .word 0x00c0802d
  .word 0x30830002
  .word 0x24020002
  .word 0x10620047
  .word 0x00000000
  .word 0x0c12ab1c
  .word 0x26640050
  .word 0xc6610090
  .word 0x3c02437f
  .word 0xc6290000
  .word 0xc6280004
  .word 0xc6270008
  .word 0xc626000c
  .word 0x44822800
  .word 0xc6000000
  .word 0x46090842
  .word 0xe7a10060
  .word 0xc6640094
  .word 0x44801800
  .word 0xc6020004
  .word 0x46001818
  .word 0xc6010008
  .word 0xc600000c
  .word 0x46082102
  .word 0xe7a40064
  .word 0xc6640098
  .word 0x46072102
  .word 0xe7a40068
  .word 0xc664009c
  .word 0x46062102
  .word 0xe7a4006c
  .word 0xc66400a0
  .word 0x46052103
  .word 0x4609211c
  .word 0xe7a40050
  .word 0x46021818
  .word 0xc66200a4
  .word 0x46051083
  .word 0x4608109c
  .word 0xe7a20054
  .word 0x46011818
  .word 0xc66100a8
  .word 0x46050843
  .word 0x4607085c
  .word 0x46001818
  .word 0xe7a10058
  .word 0xc66000ac
  .word 0x46050003
  .word 0x4606001c
  .word 0xe7a0005c
  .word 0x0c130824
  .word 0x8e6400b8
  .word 0x0040882d
  .word 0x8e6300b4
  .word 0x8e6200bc
  .word 0x000318c0
  .word 0x14400026
  .word 0x02238021
  .word 0x1230000c
  .word 0x00000000
  .word 0x16400026
  .word 0x00000000
  .word 0x00000000
  .word 0x8e240000
  .word 0x27a50060
  .word 0x0c12b7cc
  .word 0x27a60050
  .word 0x26310008
  .word 0x1630fff7
  .word 0x00000000
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x1000001f
  .word 0x0260102d
  .word 0x0c12aad0
  .word 0x26640010
  .word 0x0c12ac30
  .word 0x00000000
  .word 0x26660050
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x8e630008
  .word 0x2402fffd
  .word 0x24120001
  .word 0x00621024
  .word 0x1000ffa9
  .word 0xae620008
  .word 0x0c12b9a4
  .word 0x0260202d
  .word 0x1000ffd8
  .word 0xae6000bc
  .word 0x8e230000
  .word 0x8c620008
  .word 0x34420002
  .word 0x1000ffd8
  .word 0xac620008
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AEB60
asm u64 FUN_004aeb60(u64 param_1,code *param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8c8400b0
  .word 0x0c130824
  .word 0x00c0882d
  .word 0x8e6400b4
  .word 0x00041900
  .word 0x00641821
  .word 0x00031900
  .word 0x0043a021
  .word 0x10540008
  .word 0x0040802d
  .word 0x0200202d
  .word 0x0260282d
  .word 0x0240f809
  .word 0x0220302d
  .word 0x26100110
  .word 0x1614fffa
  .word 0x00000000
  .word 0x0260102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_004AEBF0
asm u64 FUN_004aebf0(u64 param_1,u64 param_2,long param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x0080802d
  .word 0x27a5006c
  .word 0x0240202d
  .word 0x24060004
  .word 0x0c131494
  .word 0xafa0006c
  .word 0x24040004
  .word 0x10440003
  .word 0x00000000
  .word 0x10000092
  .word 0x0000102d
  .word 0x8fb3006c
  .word 0x3c020003
  .word 0x34450190
  .word 0x0c130754
  .word 0xae1300b4
  .word 0x1260000c
  .word 0xae0200b0
  .word 0x8e0400b0
  .word 0x3c020003
  .word 0x0260282d
  .word 0x0c1307dc
  .word 0x34460190
  .word 0x0c130824
  .word 0x8e0400b0
  .word 0x00133080
  .word 0x0040202d
  .word 0x0c148502
  .word 0x0000282d
  .word 0xae0000b8
  .word 0x0200202d
  .word 0xae0000bc
  .word 0x8e020008
  .word 0x34420001
  .word 0x0c12b9e4
  .word 0xae020008
  .word 0x12200031
  .word 0x00000000
  .word 0x8e0400b0
  .word 0xafb20060
  .word 0x0c130824
  .word 0xafb10064
  .word 0x8e0400b4
  .word 0x00041900
  .word 0x00641821
  .word 0x00031900
  .word 0x00439021
  .word 0x1052000c
  .word 0x0040882d
  .word 0x1052000a
  .word 0x27b30060
  .word 0x8e650000
  .word 0x0c12b76c
  .word 0x0220202d
  .word 0x14400018
  .word 0x00000000
  .word 0x26310110
  .word 0x1632fff9
  .word 0x00000000
  .word 0x00000000
  .word 0x0c130824
  .word 0x8e0400b8
  .word 0x8e0300b4
  .word 0x0040902d
  .word 0x8e0400b0
  .word 0x000318c0
  .word 0x0c130824
  .word 0x00438821
  .word 0x1251004f
  .word 0x00000000
  .word 0xae420000
  .word 0x26520008
  .word 0x24420110
  .word 0x00000000
  .word 0x00000000
  .word 0x1651fffa
  .word 0x00000000
  .word 0x10000047
  .word 0x0200202d
  .word 0x8e650000
  .word 0x8e660004
  .word 0x0c12b7a4
  .word 0x0220202d
  .word 0x1000ffe4
  .word 0x00000000
  .word 0x00000000
  .word 0x27a40058
  .word 0x0c12b8ec
  .word 0x0240282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000040
  .word 0x0000102d
  .word 0x8e0400b0
  .word 0x27a20058
  .word 0xafa20054
  .word 0x0c130824
  .word 0xafb20050
  .word 0x8e0400b4
  .word 0x00041900
  .word 0x00641821
  .word 0x00031900
  .word 0x00439021
  .word 0x1052000c
  .word 0x0040882d
  .word 0x1052000a
  .word 0x27b30050
  .word 0x8e650000
  .word 0x0c12b76c
  .word 0x0220202d
  .word 0x14400018
  .word 0x00000000
  .word 0x26310110
  .word 0x1632fff9
  .word 0x00000000
  .word 0x00000000
  .word 0x27b1005c
  .word 0x8e220000
  .word 0x1040ffc5
  .word 0x00000000
  .word 0x0002082b
  .word 0x10200014
  .word 0x0000982d
  .word 0x0000902d
  .word 0x8fa20058
  .word 0x00521021
  .word 0x0c12bc4c
  .word 0x8c440000
  .word 0x8e220000
  .word 0x26730001
  .word 0x0262102b
  .word 0x1440fff8
  .word 0x26520004
  .word 0x10000008
  .word 0x00000000
  .word 0x8e650000
  .word 0x8e660004
  .word 0x0c12b7a4
  .word 0x0220202d
  .word 0x1000ffe4
  .word 0x00000000
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x8fa40058
  .word 0x1000ffa9
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c12b9a4
  .word 0x00000000
  .word 0x8e040008
  .word 0x2403fffe
  .word 0x0200102d
  .word 0x00831824
  .word 0xae030008
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}

// FUN_004AEEA0
asm long FUN_004aeea0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c12b728
  .word 0x0080802d
  .word 0x0040882d
  .word 0x24050001
  .word 0x0c12b730
  .word 0x0220202d
  .word 0x0220202d
  .word 0x0c12b76c
  .word 0x0200282d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000016
  .word 0x0000102d
  .word 0x0200282d
  .word 0x0220202d
  .word 0x0c12bafc
  .word 0x0000302d
  .word 0x0040802d
  .word 0x12000003
  .word 0x00000000
  .word 0x1000000d
  .word 0x0200102d
  .word 0x1220fffd
  .word 0x00000000
  .word 0x0c12b938
  .word 0x0220202d
  .word 0x3c020096
  .word 0x8c44ed8c
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x1000fff3
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_004AEF50
#pragma schedule on
u32 FUN_004aef50(u32 param_1)

{
  *(u32 *)((int)param_1 + 0xbc) = 1;
  return param_1;
}
#pragma schedule off

// FUN_004AEF60
asm u64 FUN_004aef60(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x24020002
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830008
  .word 0x30630002
  .word 0x1062002b
  .word 0x0000882d
  .word 0x0c12ab1c
  .word 0x26640050
  .word 0x0c130824
  .word 0x8e6400b8
  .word 0x8e6300b4
  .word 0x000318c0
  .word 0x00438021
  .word 0x1050001e
  .word 0x0040902d
  .word 0x24020001
  .word 0x12220033
  .word 0x00000000
  .word 0x8e440000
  .word 0x24020001
  .word 0x8c830000
  .word 0x10620034
  .word 0x00000000
  .word 0x8c830008
  .word 0x24020002
  .word 0x30630002
  .word 0x10620033
  .word 0x00000000
  .word 0x0c12ab1c
  .word 0x24840050
  .word 0x8e450000
  .word 0x24020003
  .word 0x8ca30000
  .word 0x14620004
  .word 0x00000000
  .word 0x24a400d0
  .word 0x0c130ca8
  .word 0x24a50050
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x26520008
  .word 0x1650ffe5
  .word 0x00000000
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x10000035
  .word 0x0260102d
  .word 0x0c12aad0
  .word 0x26640010
  .word 0x0c12ac30
  .word 0x00000000
  .word 0x26660050
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x8e630008
  .word 0x2402fffd
  .word 0x24110001
  .word 0x00621024
  .word 0x1000ffc5
  .word 0xae620008
  .word 0x8e430000
  .word 0x8c620008
  .word 0x34420002
  .word 0x1000ffca
  .word 0xac620008
  .word 0x00000000
  .word 0x0c12bbd8
  .word 0x00000000
  .word 0x1000ffd9
  .word 0x00000000
  .word 0x0c12aad0
  .word 0x24840010
  .word 0x0c12ac30
  .word 0x00000000
  .word 0x8e430000
  .word 0x24050008
  .word 0x24660050
  .word 0x00000000
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x8e440000
  .word 0x2402fffd
  .word 0x8c830008
  .word 0x00621024
  .word 0x1000ffbb
  .word 0xac820008
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AF130
asm u32 FUN_004af130(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820004
  .word 0x0080802d
  .word 0x2442ffff
  .word 0x10400003
  .word 0xac820004
  .word 0x10000023
  .word 0x0000102d
  .word 0x0c130848
  .word 0x8e040000
  .word 0x8e040000
  .word 0x0c130824
  .word 0x0040882d
  .word 0x0011082a
  .word 0x0040902d
  .word 0x1020000d
  .word 0x0000982d
  .word 0x8e440004
  .word 0x10800006
  .word 0x00000000
  .word 0x0c12b0e4
  .word 0x00000000
  .word 0x0c129550
  .word 0x8e440008
  .word 0x00000000
  .word 0x26730001
  .word 0x0271102a
  .word 0x1440fff5
  .word 0x2652000c
  .word 0x0c13082c
  .word 0x8e040000
  .word 0x8e040008
  .word 0x10800004
  .word 0x00000000
  .word 0x0c124ed8
  .word 0x00000000
  .word 0xae000008
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x24020001
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

// FUN_004AF210
asm long FUN_004af210(int *param_1,int *param_2,u32 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x8c820000
  .word 0x14400013
  .word 0x0000882d
  .word 0x1220000f
  .word 0x00000000
  .word 0x8e30005c
  .word 0x27a50050
  .word 0x0c124b88
  .word 0x0200202d
  .word 0xc7a30050
  .word 0x0220202d
  .word 0xc7a20054
  .word 0xc7a10058
  .word 0xc7a0005c
  .word 0xe6030004
  .word 0xe6020008
  .word 0xe601000c
  .word 0x0c124cf4
  .word 0xe6000010
  .word 0x10000028
  .word 0x0220102d
  .word 0x8c82000c
  .word 0x00e0302d
  .word 0x8c850008
  .word 0x0c124dc4
  .word 0x0040202d
  .word 0x0012082b
  .word 0x0040882d
  .word 0xafa0006c
  .word 0x0000802d
  .word 0x1020ffe4
  .word 0xafa00068
  .word 0x8e620000
  .word 0x10400014
  .word 0x00000000
  .word 0x8c440014
  .word 0x8e620010
  .word 0x30420001
  .word 0x10400009
  .word 0x00000000
  .word 0x8e650014
  .word 0x0220302d
  .word 0x27a7006c
  .word 0x0c12998c
  .word 0x27a80068
  .word 0x10000008
  .word 0x00000000
  .word 0x00000000
  .word 0x8e650014
  .word 0x0220302d
  .word 0x27a7006c
  .word 0x0c12b3a0
  .word 0x27a80068
  .word 0x00000000
  .word 0x26100001
  .word 0x0212102b
  .word 0x1440ffe7
  .word 0x26730018
  .word 0x1000ffc8
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
  .word 0x00000000
}

// FUN_004AF340
asm u64 FUN_004af340(u32 *param_1)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0090
  .word 0x27a500b8
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x0080b82d
  .word 0x7fb50050
  .word 0x27a400bc
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c126390
  .word 0x7fb00000
  .word 0x0c130848
  .word 0x8ee40000
  .word 0x8ee40000
  .word 0x0c130824
  .word 0x0040a82d
  .word 0x0040a02d
  .word 0x00151040
  .word 0x00551821
  .word 0x3c020003
  .word 0x34450190
  .word 0x00031080
  .word 0x0282f021
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x000320c0
  .word 0x0040982d
  .word 0x27b600a4
  .word 0x27a200ac
  .word 0xafb300a0
  .word 0xac400000
  .word 0x27a200b0
  .word 0xaed50000
  .word 0xac400000
  .word 0x27a200a8
  .word 0x129e0082
  .word 0xac400000
  .word 0x0260902d
  .word 0x8e900004
  .word 0xae400000
  .word 0xae400008
  .word 0xae400004
  .word 0xae40000c
  .word 0x8e820008
  .word 0xae420014
  .word 0x8e820000
  .word 0xae420010
  .word 0x8e820000
  .word 0x30420001
  .word 0x10400032
  .word 0x00000000
  .word 0x1200005d
  .word 0x00000000
  .word 0x8e020008
  .word 0x10400028
  .word 0x00000000
  .word 0x0c12b15c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e02000c
  .word 0x14400091
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c12af54
  .word 0x0200282d
  .word 0x8e220004
  .word 0x2403ffff
  .word 0x14430005
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e240000
  .word 0x10000001
  .word 0x00000000
  .word 0xc6000010
  .word 0x2444fffd
  .word 0x00041840
  .word 0x00641821
  .word 0xe6200010
  .word 0x8e450008
  .word 0x00a21021
  .word 0xae420008
  .word 0x8e420004
  .word 0x00441021
  .word 0xae420004
  .word 0x8e42000c
  .word 0x00431021
  .word 0xae42000c
  .word 0x8e420000
  .word 0x10400086
  .word 0x00000000
  .word 0x8c420014
  .word 0xae220014
  .word 0x8e420000
  .word 0xac510014
  .word 0xae510000
  .word 0x8e100014
  .word 0x1600ffd4
  .word 0x00000000
  .word 0x1000002f
  .word 0x27a200ac
  .word 0x1200002c
  .word 0x00000000
  .word 0x0c12b15c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e02000c
  .word 0x14400076
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c12af54
  .word 0x0200282d
  .word 0x8e220004
  .word 0x2403ffff
  .word 0x14430005
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e240000
  .word 0x10000001
  .word 0x00000000
  .word 0xc6000010
  .word 0x00022840
  .word 0x24a4fffe
  .word 0x00041040
  .word 0x00441821
  .word 0xe6200010
  .word 0x8e420008
  .word 0x00451021
  .word 0xae420008
  .word 0x8e420004
  .word 0x00441021
  .word 0xae420004
  .word 0x8e42000c
  .word 0x00431021
  .word 0xae42000c
  .word 0x8e420000
  .word 0x1040006a
  .word 0x00000000
  .word 0x8c420014
  .word 0xae220014
  .word 0x8e420000
  .word 0xac510014
  .word 0xae510000
  .word 0x8e100014
  .word 0x1600ffd6
  .word 0x00000000
  .word 0x27a200ac
  .word 0x8e450008
  .word 0x8c460000
  .word 0x2694000c
  .word 0x27a200a8
  .word 0x00c52821
  .word 0x8c440000
  .word 0x27a200b0
  .word 0x8c430000
  .word 0x27a200ac
  .word 0xac450000
  .word 0x8e420004
  .word 0x00822021
  .word 0x27a200a8
  .word 0xac440000
  .word 0x8e42000c
  .word 0x00621821
  .word 0x26520018
  .word 0x27a200b0
  .word 0x169eff81
  .word 0xac430000
  .word 0x02a0302d
  .word 0x27a400a0
  .word 0x0260282d
  .word 0x0c12bc84
  .word 0x2407006f
  .word 0x0040882d
  .word 0x8fa200a0
  .word 0x1040001d
  .word 0x00000000
  .word 0x8ec20000
  .word 0x0002082b
  .word 0x10200015
  .word 0x0000802d
  .word 0x8e620000
  .word 0x8c440014
  .word 0x8c82000c
  .word 0x1040003d
  .word 0x00000000
  .word 0x00000000
  .word 0x8e620000
  .word 0x8c840014
  .word 0x24430014
  .word 0x8c420014
  .word 0x1482fff7
  .word 0x00000000
  .word 0x0c12b0e4
  .word 0xac600000
  .word 0x8ec20000
  .word 0x26100001
  .word 0x0202102b
  .word 0x1440ffee
  .word 0x26730018
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x8fa400a0
  .word 0xaef10008
  .word 0x1000002a
  .word 0x0220102d
  .word 0x0c13082c
  .word 0x8e240000
  .word 0x8e020000
  .word 0x2403ffff
  .word 0xae220000
  .word 0x8e020004
  .word 0xae220004
  .word 0x8e020008
  .word 0xae220008
  .word 0xae20000c
  .word 0x8e020004
  .word 0x14430003
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e040000
  .word 0x1000ff6c
  .word 0xc6000010
  .word 0x1000ff7e
  .word 0xae310014
  .word 0x0c13082c
  .word 0x8e240000
  .word 0x8e020000
  .word 0x2403ffff
  .word 0xae220000
  .word 0x8e020004
  .word 0xae220004
  .word 0x8e020008
  .word 0xae220008
  .word 0xae20000c
  .word 0x8e020004
  .word 0x14430003
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e040000
  .word 0x1000ff87
  .word 0xc6000010
  .word 0x1000ff9a
  .word 0xae310014
  .word 0x1000ffc4
  .word 0xac800000
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
  .word 0x03e00008
  .word 0x27bd00c0
}

// FUN_004AF760
asm u64 FUN_004af760(u64 param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x24060008
  .word 0xffbf0050
  .word 0x27a50068
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c131494
  .word 0x7fb00000
  .word 0x24030008
  .word 0x10430003
  .word 0x00000000
  .word 0x1000005e
  .word 0x0000102d
  .word 0x3c020003
  .word 0x27b1006c
  .word 0x34450190
  .word 0x8e300000
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x2404000c
  .word 0x24030001
  .word 0x0040902d
  .word 0xac430004
  .word 0x2404000c
  .word 0x3c020003
  .word 0x0c130754
  .word 0x344501a4
  .word 0xae420000
  .word 0x12000006
  .word 0xae400008
  .word 0x8e440000
  .word 0x3c020003
  .word 0x0200282d
  .word 0x0c1307dc
  .word 0x344601a4
  .word 0x0c130824
  .word 0x8e440000
  .word 0x0040982d
  .word 0x8e220000
  .word 0x0002082a
  .word 0x10200017
  .word 0x0000802d
  .word 0x0280202d
  .word 0x27a5007c
  .word 0x0c131494
  .word 0x24060004
  .word 0x24060004
  .word 0x10460003
  .word 0x00000000
  .word 0x10000037
  .word 0x0000102d
  .word 0x8fa2007c
  .word 0x30420004
  .word 0x1440000f
  .word 0x00000000
  .word 0xae600004
  .word 0xae600008
  .word 0x00000000
  .word 0x8e220000
  .word 0x26100001
  .word 0x0202102a
  .word 0x1440ffec
  .word 0x2673000c
  .word 0x00000000
  .word 0x0c12bcd0
  .word 0x0240202d
  .word 0xae420008
  .word 0x10000025
  .word 0x0240102d
  .word 0x0280202d
  .word 0x0c130644
  .word 0x0260282d
  .word 0x0280202d
  .word 0x240501a1
  .word 0x27a60078
  .word 0x0c130580
  .word 0x27a70074
  .word 0x10400018
  .word 0x00000000
  .word 0x0c12b15c
  .word 0x00000000
  .word 0xae620004
  .word 0x0c12b1c4
  .word 0x8e640004
  .word 0x8e640004
  .word 0x0c12b2c4
  .word 0x0280282d
  .word 0x0280202d
  .word 0x240501a2
  .word 0x27a60078
  .word 0x0c130580
  .word 0x27a70074
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c12951c
  .word 0x00000000
  .word 0xae620008
  .word 0x8e640008
  .word 0x0c12994c
  .word 0x0280282d
  .word 0x1000ffd5
  .word 0x00000000
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0080
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AF940
asm u32 FUN_004af940(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0c12bc4c
  .word 0x8c8400b0
  .word 0x8e2400b8
  .word 0x1080000a
  .word 0x00000000
  .word 0x8c900004
  .word 0x12000005
  .word 0x00000000
  .word 0x0c124b44
  .word 0x0000282d
  .word 0x0c132be0
  .word 0x0200202d
  .word 0x0c1246a0
  .word 0x8e2400b8
  .word 0x8e2400b4
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae2000b4
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

// FUN_004AF9D0
asm u64 FUN_004af9d0(u64 param_1,float *param_2,float *param_3)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820008
  .word 0x30420004
  .word 0x104000f1
  .word 0x0080a82d
  .word 0xc6a00090
  .word 0x3c02437f
  .word 0xc4a90000
  .word 0x27ae00d4
  .word 0xc4a80004
  .word 0x27ad00d8
  .word 0xc4a70008
  .word 0x27ac00dc
  .word 0xc4a6000c
  .word 0x27ab00c4
  .word 0xc4c40000
  .word 0x27aa00c8
  .word 0x44822800
  .word 0x27a900cc
  .word 0x46090002
  .word 0xe7a000d0
  .word 0xc6a00094
  .word 0xc4c30004
  .word 0xc4c20008
  .word 0xc4c1000c
  .word 0x46080002
  .word 0xe5c00000
  .word 0xc6a00098
  .word 0x46070002
  .word 0xe5a00000
  .word 0xc6a0009c
  .word 0x46060002
  .word 0xe5800000
  .word 0xc6a000a0
  .word 0x4609001a
  .word 0x4604281c
  .word 0xe7a000c0
  .word 0xc6a000a4
  .word 0x4608001a
  .word 0x4603281c
  .word 0xe5600000
  .word 0xc6a000a8
  .word 0x4607001a
  .word 0x4602281c
  .word 0xe5400000
  .word 0xc6a000ac
  .word 0x4606001a
  .word 0x4601281c
  .word 0xe5200000
  .word 0x8ea200b8
  .word 0x104000c4
  .word 0x00000000
  .word 0x8ea200b0
  .word 0x8c480008
  .word 0x8d070024
  .word 0x0007082b
  .word 0x102000a4
  .word 0x0000902d
  .word 0x44801800
  .word 0x0000782d
  .word 0x27a600ed
  .word 0x27a500ee
  .word 0x27a400ef
  .word 0x240200ff
  .word 0x8ea300b4
  .word 0x006f1821
  .word 0x90700000
  .word 0x06000004
  .word 0xc7a200d0
  .word 0x44900000
  .word 0x10000008
  .word 0x46800060
  .word 0x00108842
  .word 0x32100001
  .word 0x02308825
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc7a000c0
  .word 0x90700001
  .word 0x46001818
  .word 0x4601101c
  .word 0x46000024
  .word 0x44110000
  .word 0x06000004
  .word 0x00000000
  .word 0x44900000
  .word 0x10000008
  .word 0x468000a0
  .word 0x00109842
  .word 0x32100001
  .word 0x02709825
  .word 0x44930000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021080
  .word 0xc5600000
  .word 0x90730002
  .word 0xc5c10000
  .word 0x46001818
  .word 0x4602081c
  .word 0x46000024
  .word 0x44100000
  .word 0x06600004
  .word 0x00000000
  .word 0x44930000
  .word 0x10000008
  .word 0x468000a0
  .word 0x0013a042
  .word 0x32730001
  .word 0x0293a025
  .word 0x44940000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021080
  .word 0xc5400000
  .word 0x90730003
  .word 0xc5a10000
  .word 0x46001818
  .word 0x4602081c
  .word 0x46000024
  .word 0x44030000
  .word 0x06600004
  .word 0x00000000
  .word 0x44930000
  .word 0x10000008
  .word 0x468000a0
  .word 0x0013a042
  .word 0x32730001
  .word 0x0293a025
  .word 0x44940000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021080
  .word 0xc5200000
  .word 0x2a210100
  .word 0xc5810000
  .word 0x46001818
  .word 0x4602081c
  .word 0x46000024
  .word 0x44140000
  .word 0x14200003
  .word 0x00000000
  .word 0x10000002
  .word 0x0040982d
  .word 0x0220982d
  .word 0x0013082a
  .word 0x10200007
  .word 0x00000000
  .word 0x2a210100
  .word 0x14200002
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000003
  .word 0x2a010100
  .word 0x0000882d
  .word 0x2a010100
  .word 0x14200003
  .word 0xa3b100ec
  .word 0x10000002
  .word 0x0040882d
  .word 0x0200882d
  .word 0x0011082a
  .word 0x10200007
  .word 0x00000000
  .word 0x2a010100
  .word 0x14200002
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000003
  .word 0x28610100
  .word 0x0000802d
  .word 0x28610100
  .word 0x14200003
  .word 0xa0d00000
  .word 0x10000002
  .word 0x0040802d
  .word 0x0060802d
  .word 0x0010082a
  .word 0x10200007
  .word 0x00000000
  .word 0x28610100
  .word 0x14200002
  .word 0x00000000
  .word 0x0040182d
  .word 0x10000003
  .word 0x2a810100
  .word 0x0000182d
  .word 0x2a810100
  .word 0x14200003
  .word 0xa0a30000
  .word 0x10000002
  .word 0x0040182d
  .word 0x0280182d
  .word 0x0003082a
  .word 0x10200007
  .word 0x00000000
  .word 0x2a810100
  .word 0x14200002
  .word 0x00000000
  .word 0x0040a02d
  .word 0x10000003
  .word 0x8d160020
  .word 0x0000a02d
  .word 0x8d160020
  .word 0x26520001
  .word 0xa0940000
  .word 0x0247182b
  .word 0x93b400ec
  .word 0x93b300ed
  .word 0x93b100ee
  .word 0x93b000ef
  .word 0x02cfb021
  .word 0x8ed60000
  .word 0x25ef0004
  .word 0xa2d40004
  .word 0xa2d30005
  .word 0xa2d10006
  .word 0x1460ff64
  .word 0xa2d00007
  .word 0x8ea40008
  .word 0x2403fff7
  .word 0x24020002
  .word 0x00831824
  .word 0xaea30008
  .word 0x8ea30008
  .word 0x30630002
  .word 0x10620077
  .word 0x00000000
  .word 0x0c12ab1c
  .word 0x26a40050
  .word 0x0c12ab98
  .word 0x00000000
  .word 0x0040282d
  .word 0x8ea200b8
  .word 0x8c440004
  .word 0x0c132dfc
  .word 0x0000302d
  .word 0x8ea400b8
  .word 0x8c820048
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c12ab54
  .word 0x00000000
  .word 0x10000079
  .word 0x02a0102d
  .word 0x8ea30008
  .word 0x24020002
  .word 0x30630002
  .word 0x1062004e
  .word 0x00000000
  .word 0x0c12ab1c
  .word 0x26a40050
  .word 0x8ea200b0
  .word 0x0c130824
  .word 0x8c440000
  .word 0x0040a02d
  .word 0x8ea200b0
  .word 0x0c130848
  .word 0x8c440000
  .word 0x00021840
  .word 0x00621021
  .word 0x00021080
  .word 0x0282b021
  .word 0x1296ffe9
  .word 0x00000000
  .word 0x27b20090
  .word 0x27b100a0
  .word 0x27b000b0
  .word 0x8e930008
  .word 0x27a40080
  .word 0x24060010
  .word 0x0c148494
  .word 0x26650030
  .word 0x0240202d
  .word 0x26650048
  .word 0x0c148494
  .word 0x24060010
  .word 0x0220202d
  .word 0x26650018
  .word 0x0c148494
  .word 0x24060010
  .word 0x0200202d
  .word 0x0260282d
  .word 0x0c148494
  .word 0x24060010
  .word 0x0260202d
  .word 0x27a50080
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x27a900d0
  .word 0x0c12956c
  .word 0x27aa00c0
  .word 0x8e820000
  .word 0x30420001
  .word 0x10400006
  .word 0x00000000
  .word 0x8e840004
  .word 0x0c129980
  .word 0x0260282d
  .word 0x10000005
  .word 0x00000000
  .word 0x8e840004
  .word 0x0c12b39c
  .word 0x0260282d
  .word 0x00000000
  .word 0x26640030
  .word 0x27a50080
  .word 0x0c148494
  .word 0x24060010
  .word 0x26640048
  .word 0x0240282d
  .word 0x0c148494
  .word 0x24060010
  .word 0x26640018
  .word 0x0220282d
  .word 0x0c148494
  .word 0x24060010
  .word 0x0260202d
  .word 0x0200282d
  .word 0x0c148494
  .word 0x24060010
  .word 0x2694000c
  .word 0x1696ffc8
  .word 0x00000000
  .word 0x1000ffab
  .word 0x00000000
  .word 0x0c12aad0
  .word 0x26a40010
  .word 0x0c12ac30
  .word 0x00000000
  .word 0x26a60050
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x8ea30008
  .word 0x2402fffd
  .word 0x00621024
  .word 0x1000ffa3
  .word 0xaea20008
  .word 0x0c12aad0
  .word 0x26a40010
  .word 0x0c12ac30
  .word 0x00000000
  .word 0x26a60050
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x8ea30008
  .word 0x2402fffd
  .word 0x00621024
  .word 0x1000ff7a
  .word 0xaea20008
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00f0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004AFFE0
asm u64 FUN_004affe0(u64 param_1,u64 param_2,long param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0802d
  .word 0x12000035
  .word 0x0080882d
  .word 0x00a0202d
  .word 0x24060004
  .word 0x0c131494
  .word 0x27a5005c
  .word 0x24030004
  .word 0x1443002c
  .word 0x00000000
  .word 0x8fa3005c
  .word 0x8e020000
  .word 0x00031880
  .word 0x00431021
  .word 0x8c500000
  .word 0x8e230008
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae220008
  .word 0x8e130008
  .word 0x8e720024
  .word 0x16400025
  .word 0x00000000
  .word 0x0000102d
  .word 0x120000a5
  .word 0xae2200b4
  .word 0xae3000b0
  .word 0x8e020004
  .word 0x24420001
  .word 0xae020004
  .word 0x8e220008
  .word 0x34420001
  .word 0x0c132bc4
  .word 0xae220008
  .word 0x0c12ab98
  .word 0x0040902d
  .word 0x0040282d
  .word 0x0240202d
  .word 0x0c132dfc
  .word 0x0000302d
  .word 0x0c124620
  .word 0x00000000
  .word 0x0040982d
  .word 0x0240282d
  .word 0x0c124b44
  .word 0x0260202d
  .word 0x8e050008
  .word 0x0260202d
  .word 0x0c12466c
  .word 0x0000302d
  .word 0xae3300b8
  .word 0x1000009c
  .word 0x0220102d
  .word 0x1000009a
  .word 0x0000102d
  .word 0x0c12bdd8
  .word 0x00a0202d
  .word 0x1000ffd5
  .word 0x0040802d
  .word 0x3c020003
  .word 0x34450190
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00122080
  .word 0x0012082b
  .word 0x10200079
  .word 0x0000302d
  .word 0x2e410009
  .word 0x14200060
  .word 0x2643fff8
  .word 0x0000282d
  .word 0x0040202d
  .word 0x8e680020
  .word 0x24c60008
  .word 0x00c3382b
  .word 0x01054021
  .word 0x8d080000
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b0000
  .word 0xa08a0001
  .word 0xa0890002
  .word 0xa0880003
  .word 0x8e680020
  .word 0x01054021
  .word 0x8d080004
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b0004
  .word 0xa08a0005
  .word 0xa0890006
  .word 0xa0880007
  .word 0x8e680020
  .word 0x01054021
  .word 0x8d080008
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b0008
  .word 0xa08a0009
  .word 0xa089000a
  .word 0xa088000b
  .word 0x8e680020
  .word 0x01054021
  .word 0x8d08000c
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b000c
  .word 0xa08a000d
  .word 0xa089000e
  .word 0xa088000f
  .word 0x8e680020
  .word 0x01054021
  .word 0x8d080010
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b0010
  .word 0xa08a0011
  .word 0xa0890012
  .word 0xa0880013
  .word 0x8e680020
  .word 0x01054021
  .word 0x8d080014
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b0014
  .word 0xa08a0015
  .word 0xa0890016
  .word 0xa0880017
  .word 0x8e680020
  .word 0x01054021
  .word 0x8d080018
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b0018
  .word 0xa08a0019
  .word 0xa089001a
  .word 0xa088001b
  .word 0x8e680020
  .word 0x01054021
  .word 0x8d08001c
  .word 0x24a50020
  .word 0x910b0004
  .word 0x910a0005
  .word 0x91090006
  .word 0x91080007
  .word 0xa08b001c
  .word 0xa08a001d
  .word 0xa089001e
  .word 0xa088001f
  .word 0x14e0ffa4
  .word 0x24840020
  .word 0x00d2082b
  .word 0x10200014
  .word 0x00000000
  .word 0x00065080
  .word 0x004a4821
  .word 0x8e640020
  .word 0x24c60001
  .word 0x00d2182b
  .word 0x008a2021
  .word 0x8c840000
  .word 0x254a0004
  .word 0x90880004
  .word 0x90870005
  .word 0x90850006
  .word 0x90840007
  .word 0xa1280000
  .word 0xa1270001
  .word 0xa1250002
  .word 0xa1240003
  .word 0x1460fff1
  .word 0x25290004
  .word 0x00000000
  .word 0x1000ff5b
  .word 0x00000000
  .word 0x3c020003
  .word 0x34450190
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x2404000c
  .word 0x24030001
  .word 0x0040902d
  .word 0xac430004
  .word 0x2404000c
  .word 0x3c020003
  .word 0x0c130754
  .word 0x344501a4
  .word 0xae420000
  .word 0xae400008
  .word 0xae3200b0
  .word 0x1000ff4f
  .word 0xae2000b4
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
