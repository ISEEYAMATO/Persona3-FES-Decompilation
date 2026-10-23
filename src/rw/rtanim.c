#include "temporary.h"

/* auto-extern (generated) */
extern u32* pcGpffffba74;
extern u32* puGpffffbd04;
extern void* FUN_0046b510(int param_1,u64 param_2);
extern float fRam0000000c;
extern u64 thunk_FUN_004687e0(int *param_1,int *param_2);
extern u8 LAB_00464760;
extern u8 LAB_00465660;
extern u8 LAB_004657d0;
extern u8 LAB_00486100;
extern u8 LAB_00486980;
extern u8 LAB_00486ae0;
extern u8 LAB_00486ec0;
extern u8 LAB_00487520;
extern u8 LAB_00487990;
extern u8 LAB_00487ac0;
extern u8 LAB_00487e80;
extern u8 LAB_00487ef0;
extern u8 LAB_004880b0;
extern u8 LAB_00488260;
extern u8 LAB_004882f0;
extern u8 LAB_00488390;
extern u8 LAB_00488410;
extern u8 LAB_004884a0;
extern u8 LAB_00488b80;
extern u8 LAB_00488b90;

extern char s_G3_2DStroke_Node_c_006b5770[];
extern char s_G3_2DFont_Node_c_006b58c0[];
extern char s_G3_2DFill_Node_c_006b5a10[];
extern u32 stack0x00000000;
extern u32 lVar11;
extern u32 LAB_004745f4;

typedef int (*code)(...);
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
extern u32 iGpffffba40;
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
u64 FUN_00469060(u64 param_1,int *param_2);
u64 FUN_00469280(u64 param_1,u32 param_2);
u64 FUN_004692e0(float param_1,u64 param_2);
u64 FUN_00469400(u64 param_1,int param_2);
u64 FUN_004694b0(u64 param_1,u32 param_2);
u64 FUN_00469510(u64 param_1,u32 param_2);
u64 FUN_00469590(u32 param_1,u64 param_2);
u32 FUN_00469770(u32 param_1,int param_2);
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
#pragma alias FUN_0046b8e0_u64 FUN_0046b8e0
extern u64 FUN_0046b8e0_u64(u64 param_1);
#pragma alias FUN_004a0e00_u64 FUN_004a0e00
extern u64 FUN_004a0e00_u64(u64 param_1);
#pragma alias FUN_0046c5b0_u64 FUN_0046c5b0
extern u64 FUN_0046c5b0_u64(u64 param_1);
#pragma alias FUN_0046cd90_u64 FUN_0046cd90
extern u64 FUN_0046cd90_u64(u64 param_1);
#pragma alias FUN_0046d6f0_u64 FUN_0046d6f0
extern u64 FUN_0046d6f0_u64(u64 param_1);
#pragma alias FUN_0046e170_u64 FUN_0046e170
extern u64 FUN_0046e170_u64(u64 param_1);
#pragma alias FUN_00472270_u64 FUN_00472270
extern u64 FUN_00472270_u64(u64 param_1);
#pragma alias FUN_00472970_u64 FUN_00472970
extern u64 FUN_00472970_u64(u64 param_1);
u64 FUN_004734d0(u64 param_1);
u64 FUN_00474160(u64 param_1);
u32 FUN_004747f0(int *param_1);
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
u64 FUN_0048d370(u32 *param_1,int param_2,float *param_3);
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
u8 FUN_00488fe0(void);
u8 FUN_0048ad20(void);
int FUN_0048dcf0(void);
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
void FUN_0046ea80(int param_1);
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

extern u32 DAT_006b5150;
extern u32 DAT_006b5158;
extern u32 DAT_006b5160;
extern u32 DAT_006b5168;
extern u32 DAT_0077abc0;
extern u32 DAT_0077abc4;
extern u32 DAT_0077abc8;
extern u32 DAT_0077abcc;
extern u32 DAT_0077abd0;
extern u32 DAT_0077abd4;
extern u32 DAT_0077abd8;
extern u32 DAT_0077abdc;
extern u32 DAT_0077abe0;
extern u32 DAT_0077ac10;
extern u32 DAT_0077ac50;
extern u32 DAT_0077ac58;
extern u32 DAT_0077dcb0;
extern u32 DAT_0077dcb4;
extern u32 DAT_0077dcb8;
extern u32 DAT_007bc900;
extern u32 DAT_007bc904;
extern u32 DAT_007bc908;
extern u32 DAT_007bc90c;
extern u32 DAT_007bc910;
extern u32 DAT_007bc914;
extern u32 DAT_007bc918;
extern u32 DAT_007bc91c;
extern u32 DAT_007bc920;
extern u32 DAT_007cdb18;
extern u32 DAT_007cdb1c;
extern u32 DAT_007cdb20;
extern u32 DAT_007cdb24;
extern u32 DAT_007cdb30;
extern u32 DAT_007cdb34;
extern u32 DAT_007cdb38;
extern u32 DAT_007cdb3c;
extern u32 DAT_007cdbb8;
extern u32 DAT_007cdbc0;
extern u32 DAT_007cdbc1;
extern u32 DAT_007cdbc2;
extern u32 DAT_007cdbc3;
extern u32 DAT_007cddc0;
extern u32 DAT_007cdde8;
extern u32 DAT_007ce730;
extern u32 DAT_007ce734;
extern u32 DAT_007ce738;
extern u32 DAT_007ce73c;
extern u32 DAT_007ce740;
extern u32 DAT_007ce770;
extern u32 DAT_007ce774;
extern u32 DAT_007ce77c;
extern u32 DAT_007ce780;
extern u32 DAT_007ce784;
extern u32 DAT_007ce788;
extern u32 DAT_007ce78c;
extern u32 DAT_007ce790;
extern u32 DAT_007ce794;
extern u32 DAT_007ce798;
extern u32 DAT_007ce88c;
extern u32 DAT_007ce890;
extern u32* DAT_007ce9f4;
extern u32 DAT_007cea30;
extern u32 DAT_007cea40;
extern u32 DAT_007cea50;
extern u32 DAT_007cea58;
extern u32 DAT_007cea60;
extern u32 DAT_007cea68;
extern u32 DAT_007ceaa4;
extern u32 DAT_007ceaa8;
extern u32 DAT_007ceaac;
extern u32 DAT_007ceab4;
extern u32 DAT_007ceab8;
extern u32 DAT_007ceabc;
extern u32 DAT_007ceaf4;
extern u32 DAT_007ceaf8;
extern u32 DAT_007ceafc;
extern u32 DAT_007ceb00;
extern u32 DAT_007ceb04;
extern u32 DAT_0095c3fc;
extern u32 DAT_0095c400;
extern u32 DAT_0095c440;
extern u32 DAT_0095c448;
#pragma alias DAT_0095c448_abs DAT_0095c448
extern u32 DAT_0095c448_abs[];
#pragma alias DAT_0095de38_abs DAT_0095de38
extern u32* DAT_0095de38_abs[];
extern u32 DAT_0095c44c;
extern u32 DAT_0095c45c;
extern u32 DAT_0095c460;
extern u32 DAT_0095c46c;
extern u32 DAT_0095d3a8;
extern u32 DAT_0095d3b8;
extern u32 DAT_0095d3c8;
extern u32 DAT_0095d3d8;
extern u32 DAT_0095d3e8;
extern u32 DAT_0095d3f8;
extern u32 DAT_0095d408;
extern u32 DAT_0095de14;
extern u32 DAT_0095de18;
extern u32 DAT_0095de1c;
extern code DAT_0095de34;
extern u32* DAT_0095de38;
extern u32 DAT_0095ed64;
extern u32 DAT_0095ef58;
extern u32 DAT_0095ef84;
extern u32* DAT_0095ef88;
extern u32* DAT_0095ef8c;
extern u32 DAT_0095ef94;
extern u32 DAT_0095ef98;
extern u32 DAT_0095ef9c;
extern u32 DAT_0095efa0;
extern u32 DAT_0095efa4;
extern u32 DAT_0095efa8;
extern u32 DAT_0095efac;
extern u32 DAT_0095efb0;
extern u32 DAT_0095efbc;
extern u32 DAT_0095efc0;
extern u32 DAT_0095efc4;
extern u32 DAT_0095efc8;
extern u32 DAT_0095f040;
extern u32 DAT_0095f048;
extern u32 DAT_0095f050;
extern u32 DAT_00960070;
extern u32 DAT_00960078;
extern u32 DAT_0096007a;
extern code DAT_00960090;
extern code DAT_00960094;
extern u32 DAT_0096009c;
extern u32 DAT_0096012c;
extern code DAT_0096013c;
extern code DAT_00960164;
extern code DAT_00960178;
extern code DAT_0096017c;
extern code DAT_00960180;
extern code DAT_00960188;
extern code DAT_0096018c;
extern u32* DAT_009658a0;
extern u32 DAT_009658a8;
extern u32 DAT_009658ac;
extern u32* DAT_00965910;
extern u32 DAT_00965914;
extern u32 DAT_00965918;
extern u32 DAT_0096591c;
extern u32 DAT_00965920;
extern u32 DAT_00965924;
extern u32 DAT_00965928;
extern u32 DAT_0096592c;
extern u32* DAT_00965930;
extern u32 DAT_00965940;
extern u32 DAT_00965944;
extern u32 DAT_00965948;
extern u32 DAT_0096594c;
extern u32 DAT_70000000;
extern u32 DAT_700002c0;
extern u32 DAT_70000300;
extern u32 DAT_700005c0;
extern u32 DAT_70000840;
extern u32 DAT_70000cc0;
extern u32 DAT_70000f00;
extern u32 DAT_70001140;
extern u32 DAT_70001340;
extern u32 DAT_70001550;
extern u32 DAT_70001fc0;
extern u32 DAT_70003f00;
extern u32 DAT_70003f04;
extern u32 DAT_70003f08;
extern u32 DAT_70003f10;
extern u32 DAT_70003f14;
extern u32 DAT_70003f18;
extern u32 DAT_70003f20;
extern u32 DAT_70003f24;
extern u32 DAT_70003f28;
extern u32 DAT_70003f2c;
extern u32 DAT_70003f30;
extern u32 DAT_70003f34;
extern u32 DAT_70003f38;
extern u32 DAT_70003f3c;
extern u32 DAT_70003f40;
extern u32 DAT_70003f44;
extern u32 DAT_70003f48;
extern u32 DAT_70003f4c;
extern u32 DAT_70003f50;
extern u32 DAT_70003f54;
extern u32 DAT_70003f58;
extern u32 DAT_70003f60;
extern u32 DAT_70003f64;
extern u32 DAT_70003f68;
extern u32 DAT_70003f6c;
extern u32 DAT_70003f70;
extern u32 DAT_70003f74;
extern u32 DAT_70003f78;
extern u32 DAT_70003f7c;
extern u32 DAT_70003f90;
extern u32 DAT_70003f94;
extern u32 DAT_70003fa0;
extern u32 DAT_70003fa4;
extern u32 DAT_70003fa8;
extern u32 DAT_70003fac;
extern u32 DAT_70003fb0;
extern u32 DAT_70003fb4;
extern u32 PTR_FUN_006b4ee4;
#pragma alias PTR_FUN_006b4ee4_abs PTR_FUN_006b4ee4
extern u8 PTR_FUN_006b4ee4_abs[];
extern u32 PTR_FUN_0077b250;
extern u32 PTR_FUN_0077b254;
extern u32 REG_DMAC_8_SPR_FROM_CHCR;
extern u32 REG_DMAC_8_SPR_FROM_MADR;
extern u32 REG_DMAC_8_SPR_FROM_QWC;
extern u32 REG_DMAC_8_SPR_FROM_SADR;
extern u32 REG_DMAC_9_SPR_TO_CHCR;
extern u32 REG_DMAC_9_SPR_TO_MADR;
extern u32 REG_DMAC_9_SPR_TO_QWC;
extern u32 REG_DMAC_9_SPR_TO_SADR;
extern u32 REG_DMAC_PCR;
extern u32 REG_DMAC_STAT;
extern u32 Status;
extern Vec128 _DAT_00965910;
extern Vec128 _DAT_00965920;
extern Vec128 _DAT_00965930;
extern Vec128 _DAT_00965940;
extern u32 _DAT_70000000;
extern u32 bGpffffbe04;
extern u32 iGpffffb0f8;
extern u32 iGpffffba48;
extern u32 iGpffffba44;
extern u32 iGpffffba4c;
extern u32 iGpffffba50;
extern u32 iGpffffba54;
extern u32 iGpffffba58;
extern u32 iGpffffba70;
extern u32 iGpffffba80;
extern u32 iGpffffba84;
extern u32 iGpffffbb60;
extern u32 iGpffffbb04;
extern u32 iGpffffbb9c;
extern u32 iGpffffbba0;
extern u32 iGpffffbdb4;
extern u32 iGpffffbdb8;
extern u32 iGpffffbdbc;
extern u32 iGpffffbdc8;
extern u32 iGpffffbdcc;
extern u32 iGpffffbe14;
extern u32 iRam00000008;
extern u32 iRam007ce820;
extern u32 uGpffffb0d0;
extern u32 uGpffffba48;
extern u32 uGpffffba4c;
extern u32 uGpffffba50;
extern u32 uGpffffba54;
extern u32 uGpffffba58;
extern u32 uGpffffba78;
extern u32 uGpffffba80;
extern u32 uGpffffba84;
extern u32 uGpffffbd40;
extern u32 uGpffffbd50;
extern u32 uGpffffbd60;
extern u32 uGpffffbd68;
extern u32 uGpffffbd70;
extern u32 uGpffffbdc4;
extern u32 uGpffffbdc8;
extern u32 uGpffffbdcc;
extern u32 uGpffffbe04;
extern u32 uGpffffbe08;
extern u32 uGpffffbe0c;
extern u32 uGpffffbe10;
extern u32 uRam00000000;
extern u32 uRam00000004;
extern u32 uRam00000008;
extern u32 uRam0000000c;
extern u32 uRam70003f0c;
extern u32 uRam70003f1c;
extern u32 uRam70003f5c;
extern u32 uRam70003f98;
extern u32 uRam70003fb8;
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
#pragma alias FUN_004c17f0_typed FUN_004c17f0
extern long FUN_004c17f0_typed(u64 param_1,void *param_2,int param_3);
#pragma alias FUN_004c3c30_typed FUN_004c3c30
extern u32 FUN_004c3c30_typed(u32 param_1);
#pragma alias FUN_004c47e0_typed FUN_004c47e0
extern void FUN_004c47e0_typed(u32 param_1);
extern code FUN_004c1820;
extern code FUN_004c1850;
extern code FUN_004c18b0;
extern code FUN_004c1910;
extern code FUN_004c19f0;
extern code FUN_004c1c50;
extern code FUN_004c1cd0;
extern code FUN_004c1d10;
extern code FUN_004c1d50;
#pragma alias FUN_004c1d10_typed FUN_004c1d10
extern u32 FUN_004c1d10_typed(u32 errorCode,...);
#pragma alias FUN_004c1c50_typed FUN_004c1c50
extern void FUN_004c1c50_typed(void *error);
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
#pragma alias FUN_004ca520_typed FUN_004ca520
extern int FUN_004ca520_typed(int,int,u8*,u8*);
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
#pragma alias FUN_0052e6d8_float FUN_0052e6d8
extern float FUN_0052e6d8_float(u32 param_1);
#pragma alias FUN_0052e878_float FUN_0052e878
extern float FUN_0052e878_float(u32 param_1);
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
u64 FUN_00469060(u64 param_1,int *param_2);
u64 FUN_00469280(u64 param_1,u32 param_2);
u64 FUN_004692e0(float param_1,u64 param_2);
u64 FUN_00469400(u64 param_1,int param_2);
u64 FUN_004694b0(u64 param_1,u32 param_2);
u64 FUN_00469510(u64 param_1,u32 param_2);
u64 FUN_00469590(u32 param_1,u64 param_2);
u32 FUN_00469770(u32 param_1,int param_2);
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
u32 FUN_004747f0(int *param_1);
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
u64 FUN_0048d370(u32 *param_1,int param_2,float *param_3);
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
u8 FUN_00488fe0(void);
u8 FUN_0048ad20(void);
int FUN_0048dcf0(void);
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
void FUN_0046ea80(int param_1);
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

// FUN_00464850
asm void FUN_00464850(float param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xc4a4000c
  .word 0xc4c3000c
  .word 0xc4a50004
  .word 0xc4c20004
  .word 0xc4a80008
  .word 0xc4c70008
  .word 0xc4a10018
  .word 0x4603201a
  .word 0xc4c00018
  .word 0x46051101
  .word 0x46056081
  .word 0x46041083
  .word 0xc4aa0010
  .word 0xc4c90010
  .word 0x4607401e
  .word 0xc4ad0014
  .word 0xc4cb0014
  .word 0x46010001
  .word 0x4609501e
  .word 0x44803000
  .word 0x460b68dc
  .word 0x46013018
  .word 0x4600101c
  .word 0xe4800018
  .word 0xc4a1001c
  .word 0xc4c0001c
  .word 0x46061834
  .word 0x46013018
  .word 0x46010001
  .word 0x4600101c
  .word 0xe480001c
  .word 0xc4a10020
  .word 0xc4c00020
  .word 0x46013018
  .word 0x46010001
  .word 0x4600101c
  .word 0x450100b8
  .word 0xe4800020
  .word 0x3c073f80
  .word 0x3c033f7f
  .word 0x44870000
  .word 0x3463be77
  .word 0x44832000
  .word 0x00000000
  .word 0x46041834
  .word 0x4500009a
  .word 0x46020041
  .word 0xe7a3000c
  .word 0x3c013f80
  .word 0x8fa7000c
  .word 0x0007187c
  .word 0x0003187e
  .word 0x0061082a
  .word 0x102000b5
  .word 0x00000000
  .word 0x3c013f00
  .word 0x0061082a
  .word 0x102000bb
  .word 0x00000000
  .word 0x3c012300
  .word 0x34210001
  .word 0x0061082a
  .word 0x10200006
  .word 0x00000000
  .word 0x3c033fc9
  .word 0x34630fdb
  .word 0x44836800
  .word 0x10000041
  .word 0x3c032f2e
  .word 0x3c033811
  .word 0x3467ef08
  .word 0x3c033a4f
  .word 0x346a7f04
  .word 0x3c03bd24
  .word 0x34681146
  .word 0x3c033e4e
  .word 0x34690aa8
  .word 0x46031c42
  .word 0x3c03bea6
  .word 0x44878000
  .word 0x448a7800
  .word 0x3467b090
  .word 0x44807000
  .word 0x3c033e2a
  .word 0x44886800
  .word 0x460f7018
  .word 0x3468aaab
  .word 0x461183dc
  .word 0x3c033d9d
  .word 0x44875800
  .word 0x460d7018
  .word 0x3467c62e
  .word 0x3c03bf30
  .word 0x34633361
  .word 0x44834000
  .word 0x44896000
  .word 0x460f8b5c
  .word 0x3c034001
  .word 0x460c7018
  .word 0x460d8b1c
  .word 0x460b7018
  .word 0x44874800
  .word 0x44885000
  .word 0x3467572d
  .word 0x460c8adc
  .word 0x3c03c019
  .word 0x460a7018
  .word 0x3463d139
  .word 0x460b8a9c
  .word 0x46087018
  .word 0x44833000
  .word 0x44873800
  .word 0x46114a1c
  .word 0x3c0333a2
  .word 0x46077018
  .word 0x34672168
  .word 0x460889dc
  .word 0x3c033fc9
  .word 0x46067018
  .word 0x34630fda
  .word 0x4607899c
  .word 0x46007018
  .word 0x460a8a82
  .word 0x4606881c
  .word 0x46005003
  .word 0x44872800
  .word 0x44832000
  .word 0x00000000
  .word 0x46057018
  .word 0x4600181d
  .word 0x46001801
  .word 0x46002341
  .word 0x3c032f2e
  .word 0x3468c9d3
  .word 0x460d6942
  .word 0x3c03b2d7
  .word 0x346a2f34
  .word 0x3c033638
  .word 0x3467ef1b
  .word 0x3c03b950
  .word 0x34690d01
  .word 0x448a5800
  .word 0x3c033c08
  .word 0x44805000
  .word 0x44886000
  .word 0x460b5018
  .word 0x34688889
  .word 0x44874800
  .word 0x3c03be2a
  .word 0x4605611c
  .word 0x3467aaab
  .word 0x46095018
  .word 0x3c033f80
  .word 0x44894000
  .word 0x4604291c
  .word 0x46085018
  .word 0x44883800
  .word 0x4604291c
  .word 0x46075018
  .word 0x44873000
  .word 0x4604291c
  .word 0x46065018
  .word 0x4604291c
  .word 0x460d28c2
  .word 0x460d5018
  .word 0x460418dc
  .word 0x44830000
  .word 0x460d1102
  .word 0x46030143
  .word 0x460d08c2
  .word 0x46031882
  .word 0x460b5018
  .word 0x4602601c
  .word 0x46095018
  .word 0x4600101c
  .word 0x46085018
  .word 0x4600101c
  .word 0x46075018
  .word 0x4600101c
  .word 0x46065018
  .word 0x4600105c
  .word 0x46031002
  .word 0x46035018
  .word 0x4601001c
  .word 0x46050042
  .word 0x460420c2
  .word 0x460b5018
  .word 0x4603601c
  .word 0x46095018
  .word 0x4600181c
  .word 0x46085018
  .word 0x4600181c
  .word 0x46075018
  .word 0x4600181c
  .word 0x46065018
  .word 0x4600189c
  .word 0x46041802
  .word 0x46045018
  .word 0x4602001c
  .word 0x46050082
  .word 0xc4c00008
  .word 0xc4a30008
  .word 0x4600101a
  .word 0x4603081c
  .word 0xe4800008
  .word 0xc4c0000c
  .word 0xc4a3000c
  .word 0x4600101a
  .word 0x4603081c
  .word 0xe480000c
  .word 0xc4c00010
  .word 0xc4a30010
  .word 0x4600101a
  .word 0x4603081c
  .word 0xe4800010
  .word 0xc4c00014
  .word 0xc4a30014
  .word 0x4600101a
  .word 0x4603081c
  .word 0x100000ab
  .word 0xe4800014
  .word 0xc4c00008
  .word 0x460018c7
  .word 0x46000007
  .word 0xe4c00008
  .word 0xc4c0000c
  .word 0x46000007
  .word 0xe4c0000c
  .word 0xc4c00010
  .word 0x46000007
  .word 0xe4c00010
  .word 0xc4c00014
  .word 0x46000007
  .word 0x1000ff3c
  .word 0xe4c00014
  .word 0x18e00004
  .word 0x00000000
  .word 0x44806800
  .word 0x1000ff95
  .word 0x00000000
  .word 0x3c034049
  .word 0x34630fdb
  .word 0x44836800
  .word 0x1000ff90
  .word 0x00000000
  .word 0x04e0004a
  .word 0x00000000
  .word 0x460300c1
  .word 0x3c093f00
  .word 0x3c073811
  .word 0x2403f000
  .word 0x34e8ef08
  .word 0x3c073a4f
  .word 0x44892000
  .word 0x34ef7f04
  .word 0x3c07bd24
  .word 0x460323c2
  .word 0x34e91146
  .word 0x3c073e4e
  .word 0x34ee0aa8
  .word 0x3c073e2a
  .word 0x34ecaaab
  .word 0x44887000
  .word 0x3c07bf30
  .word 0x460f0404
  .word 0x34ea3361
  .word 0x3c08bea6
  .word 0x3c074001
  .word 0x350db090
  .word 0x3c083d9d
  .word 0x350bc62e
  .word 0x44895800
  .word 0x448f6800
  .word 0x34e9572d
  .word 0x44806000
  .word 0x3c07c019
  .word 0x34e8d139
  .word 0x460d6018
  .word 0x3c074000
  .word 0x460f735c
  .word 0x460b6018
  .word 0x448e5000
  .word 0x460d7adc
  .word 0x460a6018
  .word 0x448d2800
  .word 0x460b7a9c
  .word 0x46056018
  .word 0x448c4800
  .word 0x460a7a9c
  .word 0x46096018
  .word 0x460a7a5c
  .word 0x448a3800
  .word 0x448b4000
  .word 0x46076018
  .word 0x44893000
  .word 0x460f41dc
  .word 0x46066018
  .word 0x44882000
  .word 0x4607799c
  .word 0x46046018
  .word 0x4606791c
  .word 0x46006018
  .word 0x4604781c
  .word 0x46097a42
  .word 0x46004983
  .word 0x44871800
  .word 0xe7b00008
  .word 0x8fa70008
  .word 0x460f6018
  .word 0x00e31824
  .word 0xafa30004
  .word 0xc7a50004
  .word 0x46058000
  .word 0x4605291d
  .word 0x46002003
  .word 0x46006018
  .word 0x4610301c
  .word 0x46002800
  .word 0x1000ff45
  .word 0x46001b42
  .word 0x460300c0
  .word 0x3c093f00
  .word 0x3c073811
  .word 0x3c033a4f
  .word 0x34e8ef08
  .word 0x346a7f04
  .word 0x3c07bd24
  .word 0x3c033e4e
  .word 0x44892000
  .word 0x34ed1146
  .word 0x448a7800
  .word 0x46032442
  .word 0x34690aa8
  .word 0x3c03bea6
  .word 0x346cb090
  .word 0x3c033e2a
  .word 0x44807000
  .word 0x44888000
  .word 0x460f7018
  .word 0x3468aaab
  .word 0x3c033d9d
  .word 0x3467c62e
  .word 0x3c03bf30
  .word 0x346b3361
  .word 0x3c034001
  .word 0x346a572d
  .word 0x44874800
  .word 0x3c03c019
  .word 0x44896000
  .word 0x448d6800
  .word 0x3c074000
  .word 0x3469d139
  .word 0x461183dc
  .word 0x3c0333a2
  .word 0x460d7018
  .word 0x460f8b5c
  .word 0x460c7018
  .word 0x44885000
  .word 0x448c5800
  .word 0x460d8b1c
  .word 0x34682168
  .word 0x460b7018
  .word 0x3c034049
  .word 0x460c8adc
  .word 0x34630fda
  .word 0x460a7018
  .word 0x460b8a9c
  .word 0x448b4000
  .word 0x448a3800
  .word 0x46087018
  .word 0x46114a1c
  .word 0x46077018
  .word 0x44893000
  .word 0x460889dc
  .word 0x46067018
  .word 0x4607899c
  .word 0x46007018
  .word 0x460a8a82
  .word 0x4606881c
  .word 0x46110484
  .word 0x46005003
  .word 0x44831800
  .word 0x46120002
  .word 0x44882800
  .word 0x44872000
  .word 0x00000000
  .word 0x46050001
  .word 0x46009000
  .word 0x46037018
  .word 0x1000fefe
  .word 0x4600235d
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

// FUN_00464E80
asm void FUN_00464e80(float param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xc4a4000c
  .word 0xc4c1000c
  .word 0xc4a60008
  .word 0xc4c50008
  .word 0xc4a20018
  .word 0xc4c00018
  .word 0xc4a80010
  .word 0x4601201a
  .word 0xc4c70010
  .word 0x4605301e
  .word 0xc4aa0014
  .word 0xc4c90014
  .word 0x46020001
  .word 0x4607401e
  .word 0x44801800
  .word 0x4609505c
  .word 0x46021818
  .word 0x4600601c
  .word 0xe4800018
  .word 0xc4a2001c
  .word 0xc4c0001c
  .word 0x46030834
  .word 0x46021818
  .word 0x46020001
  .word 0x4600601c
  .word 0xe480001c
  .word 0xc4a20020
  .word 0xc4c00020
  .word 0x46021818
  .word 0x46020001
  .word 0x4600601c
  .word 0x450100b7
  .word 0xe4800020
  .word 0x3c073f80
  .word 0x3c033f7f
  .word 0x44870000
  .word 0x3463be77
  .word 0x44831800
  .word 0x00000000
  .word 0x46030834
  .word 0x45000099
  .word 0x460c0081
  .word 0xe7a1000c
  .word 0x3c013f80
  .word 0x8fa7000c
  .word 0x0007187c
  .word 0x0003187e
  .word 0x0061082a
  .word 0x102000b4
  .word 0x00000000
  .word 0x3c013f00
  .word 0x0061082a
  .word 0x102000ba
  .word 0x00000000
  .word 0x3c012300
  .word 0x34210001
  .word 0x0061082a
  .word 0x10200006
  .word 0x00000000
  .word 0x3c033fc9
  .word 0x34630fdb
  .word 0x44837000
  .word 0x10000040
  .word 0x3c032f2e
  .word 0x3c033811
  .word 0x3467ef08
  .word 0x3c033a4f
  .word 0x346a7f04
  .word 0x3c03bd24
  .word 0x34681146
  .word 0x3c033e4e
  .word 0x34690aa8
  .word 0x46010c42
  .word 0x3c03bea6
  .word 0x44878000
  .word 0x448a7800
  .word 0x3467b090
  .word 0x44807000
  .word 0x3c033e2a
  .word 0x44886800
  .word 0x460f7018
  .word 0x3468aaab
  .word 0x461183dc
  .word 0x3c033d9d
  .word 0x44875000
  .word 0x460d7018
  .word 0x3467c62e
  .word 0x3c03bf30
  .word 0x34633361
  .word 0x44833800
  .word 0x44895800
  .word 0x460f8b5c
  .word 0x3c034001
  .word 0x460b7018
  .word 0x460d8adc
  .word 0x460a7018
  .word 0x44874000
  .word 0x44884800
  .word 0x3467572d
  .word 0x460b8a9c
  .word 0x3c03c019
  .word 0x46097018
  .word 0x3463d139
  .word 0x460a8a5c
  .word 0x46077018
  .word 0x44832800
  .word 0x44873000
  .word 0x461141dc
  .word 0x3c0333a2
  .word 0x46067018
  .word 0x34672168
  .word 0x4607899c
  .word 0x3c033fc9
  .word 0x46057018
  .word 0x34630fda
  .word 0x4606895c
  .word 0x46007018
  .word 0x46098a42
  .word 0x4605881c
  .word 0x46004803
  .word 0x44872000
  .word 0x44831800
  .word 0x46047018
  .word 0x4600081d
  .word 0x46000801
  .word 0x46001b81
  .word 0x3c032f2e
  .word 0x3468c9d3
  .word 0x460e7102
  .word 0x3c03b2d7
  .word 0x346a2f34
  .word 0x3c033638
  .word 0x3467ef1b
  .word 0x3c03b950
  .word 0x34690d01
  .word 0x448a5800
  .word 0x3c033c08
  .word 0x44805000
  .word 0x44886800
  .word 0x460b5018
  .word 0x34688889
  .word 0x44874800
  .word 0x3c03be2a
  .word 0x460468dc
  .word 0x3467aaab
  .word 0x46095018
  .word 0x3c033f80
  .word 0x44894000
  .word 0x460320dc
  .word 0x46085018
  .word 0x44883800
  .word 0x460320dc
  .word 0x46075018
  .word 0x44873000
  .word 0x460320dc
  .word 0x46065018
  .word 0x460320dc
  .word 0x460e2042
  .word 0x460e5018
  .word 0x4603085c
  .word 0x44830000
  .word 0x460e10c2
  .word 0x46010143
  .word 0x46031882
  .word 0x460b5018
  .word 0x4602681c
  .word 0x46095018
  .word 0x4600101c
  .word 0x46085018
  .word 0x4600101c
  .word 0x46075018
  .word 0x4600101c
  .word 0x46065018
  .word 0x4600105c
  .word 0x46031002
  .word 0x46035018
  .word 0x4601001c
  .word 0x460e6102
  .word 0x46050082
  .word 0x460420c2
  .word 0x460b5018
  .word 0x4603681c
  .word 0x46095018
  .word 0x4600181c
  .word 0x46085018
  .word 0x4600181c
  .word 0x46075018
  .word 0x4600181c
  .word 0x46065018
  .word 0x4600185c
  .word 0x46041802
  .word 0x46045018
  .word 0x4601001c
  .word 0x46050302
  .word 0xc4c00008
  .word 0xc4a10008
  .word 0x4600601a
  .word 0x4601101c
  .word 0xe4800008
  .word 0xc4c0000c
  .word 0xc4a1000c
  .word 0x4600601a
  .word 0x4601101c
  .word 0xe480000c
  .word 0xc4c00010
  .word 0xc4a10010
  .word 0x4600601a
  .word 0x4601101c
  .word 0xe4800010
  .word 0xc4c00014
  .word 0xc4a10014
  .word 0x4600601a
  .word 0x4601101c
  .word 0x100000ae
  .word 0xe4800014
  .word 0xc4c00008
  .word 0x46000847
  .word 0x46000007
  .word 0xe4c00008
  .word 0xc4c0000c
  .word 0x46000007
  .word 0xe4c0000c
  .word 0xc4c00010
  .word 0x46000007
  .word 0xe4c00010
  .word 0xc4c00014
  .word 0x46000007
  .word 0x1000ff3d
  .word 0xe4c00014
  .word 0x18e00004
  .word 0x00000000
  .word 0x44807000
  .word 0x1000ff95
  .word 0x00000000
  .word 0x3c034049
  .word 0x34630fdb
  .word 0x44837000
  .word 0x1000ff90
  .word 0x00000000
  .word 0x04e0004c
  .word 0x00000000
  .word 0x46010041
  .word 0x3c093f00
  .word 0x3c073811
  .word 0x2403f000
  .word 0x34e8ef08
  .word 0x3c073a4f
  .word 0x44891800
  .word 0x34ef7f04
  .word 0x3c07bd24
  .word 0x46011bc2
  .word 0x34e91146
  .word 0x3c073e4e
  .word 0x34ee0aa8
  .word 0x3c073e2a
  .word 0x34ecaaab
  .word 0x44887000
  .word 0x3c07bf30
  .word 0x460f0404
  .word 0x34ea3361
  .word 0x3c08bea6
  .word 0x3c074001
  .word 0x350db090
  .word 0x3c083d9d
  .word 0x350bc62e
  .word 0x44895000
  .word 0x448f6800
  .word 0x34e9572d
  .word 0x44805800
  .word 0x3c07c019
  .word 0x34e8d139
  .word 0x460d5818
  .word 0x3c074000
  .word 0x460f735c
  .word 0x460a5818
  .word 0x448e4800
  .word 0x460d7a9c
  .word 0x46095818
  .word 0x448d2000
  .word 0x460a7a5c
  .word 0x46045818
  .word 0x448c4000
  .word 0x00000000
  .word 0x46097a5c
  .word 0x46085818
  .word 0x46097a1c
  .word 0x448a3000
  .word 0x448b3800
  .word 0x00000000
  .word 0x46065818
  .word 0x44892800
  .word 0x460f399c
  .word 0x46055818
  .word 0x44881800
  .word 0x4606795c
  .word 0x46035818
  .word 0x460578dc
  .word 0x46005818
  .word 0x4603781c
  .word 0x46087a02
  .word 0x46004143
  .word 0x44870800
  .word 0xe7b00008
  .word 0x8fa70008
  .word 0x460f5818
  .word 0x00e31824
  .word 0xafa30004
  .word 0xc7a40004
  .word 0x46048000
  .word 0x460420dd
  .word 0x46001803
  .word 0x46005818
  .word 0x4610281c
  .word 0x46002000
  .word 0x1000ff43
  .word 0x46000b82
  .word 0x46010040
  .word 0x3c093f00
  .word 0x3c073811
  .word 0x3c033a4f
  .word 0x34e8ef08
  .word 0x346a7f04
  .word 0x3c07bd24
  .word 0x3c033e4e
  .word 0x44891800
  .word 0x34ed1146
  .word 0x448a7800
  .word 0x46011c42
  .word 0x34690aa8
  .word 0x3c03bea6
  .word 0x346cb090
  .word 0x3c033e2a
  .word 0x44807000
  .word 0x44888000
  .word 0x460f7018
  .word 0x3468aaab
  .word 0x3c033d9d
  .word 0x3467c62e
  .word 0x3c03bf30
  .word 0x346b3361
  .word 0x3c034001
  .word 0x346a572d
  .word 0x44874000
  .word 0x3c03c019
  .word 0x44895800
  .word 0x448d6800
  .word 0x3c074000
  .word 0x3469d139
  .word 0x461183dc
  .word 0x3c0333a2
  .word 0x460d7018
  .word 0x460f8b5c
  .word 0x460b7018
  .word 0x44884800
  .word 0x448c5000
  .word 0x460d8adc
  .word 0x34682168
  .word 0x460a7018
  .word 0x3c034049
  .word 0x460b8a9c
  .word 0x34630fda
  .word 0x46097018
  .word 0x460a8a5c
  .word 0x448b3800
  .word 0x448a3000
  .word 0x00000000
  .word 0x46077018
  .word 0x461141dc
  .word 0x46067018
  .word 0x44892800
  .word 0x4607899c
  .word 0x46057018
  .word 0x4606895c
  .word 0x46007018
  .word 0x46098a42
  .word 0x4605881c
  .word 0x46110484
  .word 0x46004803
  .word 0x44830800
  .word 0x00000000
  .word 0x46120002
  .word 0x44882000
  .word 0x44871800
  .word 0x46040001
  .word 0x46009000
  .word 0x46017018
  .word 0x1000fefb
  .word 0x46001b9d
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_004654A0
asm u64 FUN_004654a0(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8ca20004
  .word 0x8cb00010
  .word 0x0002102a
  .word 0x14400003
  .word 0x0000902d
  .word 0x10000023
  .word 0x0260102d
  .word 0x0200882d
  .word 0x0280202d
  .word 0x26250004
  .word 0x0c13062c
  .word 0x24060020
  .word 0x14400003
  .word 0x00000000
  .word 0x1000001a
  .word 0x0000102d
  .word 0x0280202d
  .word 0x27a5006c
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400013
  .word 0x00000000
  .word 0x8fa3006c
  .word 0x3c0238e3
  .word 0x34428e39
  .word 0x00430019
  .word 0x00001010
  .word 0x26520001
  .word 0x000218c2
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021080
  .word 0x02021021
  .word 0xae220000
  .word 0x8e620004
  .word 0x0242102a
  .word 0x1440ffe3
  .word 0x26310024
  .word 0x1000ffde
  .word 0x00000000
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
  .word 0x00000000
}

// FUN_00465590
asm u32 FUN_00465590(int param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x8c820004
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0002102a
  .word 0x8c900010
  .word 0x14400003
  .word 0x0000902d
  .word 0x1000001b
  .word 0x24020001
  .word 0x0200882d
  .word 0x0260202d
  .word 0x26250004
  .word 0x0c1305d4
  .word 0x24060020
  .word 0x14400003
  .word 0x00000000
  .word 0x10000012
  .word 0x0000102d
  .word 0x8e220000
  .word 0x0260202d
  .word 0x27a5006c
  .word 0x24060004
  .word 0x00501023
  .word 0x0c1305fc
  .word 0xafa2006c
  .word 0x10400008
  .word 0x00000000
  .word 0x8e820004
  .word 0x26520001
  .word 0x0242102a
  .word 0x1440ffeb
  .word 0x26310024
  .word 0x1000ffe6
  .word 0x00000000
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
  .word 0x00000000
  .word 0x8c820004
  .word 0x24030024
  .word 0x03e00008
  .word 0x00621018
}

// FUN_00465670
asm void FUN_00465670(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xc4a5000c
  .word 0xc4a40008
  .word 0xc4a30010
  .word 0xc4a20014
  .word 0xc7a80014
  .word 0x4605281a
  .word 0x4604201e
  .word 0x4603181e
  .word 0xc7a90018
  .word 0xc7aa001c
  .word 0x44800000
  .word 0x4602105c
  .word 0x46000836
  .word 0x4501000a
  .word 0xc7a70010
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46010003
  .word 0x46001282
  .word 0x46000007
  .word 0x460021c2
  .word 0x46002a02
  .word 0x46001a42
  .word 0xc4830014
  .word 0xc485000c
  .word 0xc4860008
  .word 0xc4840010
  .word 0x44801000
  .word 0x00000000
  .word 0x46035002
  .word 0x4605401a
  .word 0x4606381e
  .word 0x4604485c
  .word 0x46010001
  .word 0x4604401a
  .word 0xe4800014
  .word 0x4605481d
  .word 0xe4800008
  .word 0x4606481a
  .word 0x4604381d
  .word 0xe480000c
  .word 0x4605381a
  .word 0x4606401d
  .word 0xe4800010
  .word 0xc4800008
  .word 0xe7a60000
  .word 0xe7a50004
  .word 0xe7a40008
  .word 0xe7a3000c
  .word 0x46001018
  .word 0x460a301c
  .word 0xe4800008
  .word 0xc480000c
  .word 0x46001018
  .word 0x460a281c
  .word 0xe480000c
  .word 0xc4800010
  .word 0x46001018
  .word 0x460a201c
  .word 0xe4800010
  .word 0xc4800008
  .word 0x46001018
  .word 0x4603381c
  .word 0xe4800008
  .word 0xc480000c
  .word 0x46001018
  .word 0x4603401c
  .word 0xe480000c
  .word 0xc4800010
  .word 0x46001018
  .word 0x4603481c
  .word 0xe4800010
  .word 0xc4a10018
  .word 0xc4800018
  .word 0x46010001
  .word 0xe4800018
  .word 0xc4a1001c
  .word 0xc480001c
  .word 0x46010001
  .word 0xe480001c
  .word 0xc4a10020
  .word 0xc4800020
  .word 0x46010001
  .word 0xe4800020
  .word 0x03e00008
  .word 0x27bd0020
  .word 0xc4a20014
  .word 0xc4c10014
  .word 0xc4a4000c
  .word 0xc4c3000c
  .word 0xc4a60008
  .word 0xc4c50008
  .word 0xc4a80010
  .word 0xc4c70010
  .word 0x46011042
  .word 0x4603201a
  .word 0x4605301e
  .word 0x460740dc
  .word 0x46030841
  .word 0xe4810014
  .word 0xc4a2000c
  .word 0xc4c10010
  .word 0xc4a40010
  .word 0xc4c3000c
  .word 0x44800000
  .word 0x00000000
  .word 0x4601101a
  .word 0x4603205d
  .word 0xe4810008
  .word 0xc4a20010
  .word 0xc4c10008
  .word 0xc4a40008
  .word 0xc4c30010
  .word 0x4601101a
  .word 0x4603205d
  .word 0xe481000c
  .word 0xc4a20008
  .word 0xc4c1000c
  .word 0xc4a4000c
  .word 0xc4c30008
  .word 0x4601101a
  .word 0x4603205d
  .word 0xe4810010
  .word 0xc4810008
  .word 0xc4c30008
  .word 0xc4a20014
  .word 0x46010018
  .word 0x4602185c
  .word 0xe4810008
  .word 0xc481000c
  .word 0xc4c3000c
  .word 0xc4a20014
  .word 0x46010018
  .word 0x4602185c
  .word 0xe481000c
  .word 0xc4810010
  .word 0xc4c30010
  .word 0xc4a20014
  .word 0x46010018
  .word 0x4602185c
  .word 0xe4810010
  .word 0xc4810008
  .word 0xc4a30008
  .word 0xc4c20014
  .word 0x46010018
  .word 0x4602185c
  .word 0xe4810008
  .word 0xc481000c
  .word 0xc4a3000c
  .word 0xc4c20014
  .word 0x46010018
  .word 0x4602185c
  .word 0xe481000c
  .word 0xc4810010
  .word 0xc4a30010
  .word 0xc4c20014
  .word 0x46010018
  .word 0x4602181c
  .word 0xe4800010
  .word 0xc4a10018
  .word 0xc4c00018
  .word 0x46000800
  .word 0xe4800018
  .word 0xc4a1001c
  .word 0xc4c0001c
  .word 0x46000800
  .word 0xe480001c
  .word 0xc4a10020
  .word 0xc4c00020
  .word 0x46000800
  .word 0x03e00008
  .word 0xe4800020
  .word 0x00000000
  .word 0x00000000
}

// FUN_00465930
asm u64 FUN_00465930(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8ca20004
  .word 0x0002082a
  .word 0x1020000f
  .word 0x0000882d
  .word 0x0000802d
  .word 0x8e420010
  .word 0x0050a821
  .word 0x8eb40000
  .word 0x0c1199c8
  .word 0x0260202d
  .word 0x12820010
  .word 0x00000000
  .word 0x8e420004
  .word 0x26310001
  .word 0x0222102a
  .word 0x1440fff5
  .word 0x26100010
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x0260202d
  .word 0x3c050046
  .word 0x0240302d
  .word 0x0260202d
  .word 0x0c132db8
  .word 0x24a55930
  .word 0x10000004
  .word 0x0260102d
  .word 0x1000fff0
  .word 0xaeb3000c
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
  .word 0x00000000
}

// FUN_00465A00
asm u64 FUN_00465a00(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c080096
  .word 0xffbf0010
  .word 0x3c020004
  .word 0x7fb00000
  .word 0x24060004
  .word 0x8f85ae28
  .word 0x0080802d
  .word 0x8f87ae2c
  .word 0x24040024
  .word 0x2508c3d0
  .word 0x0c130ed8
  .word 0x3449011e
  .word 0x10400023
  .word 0xaf82ba44
  .word 0x24020001
  .word 0x3c030046
  .word 0xafa20020
  .word 0x24634760
  .word 0x24020024
  .word 0xafa3002c
  .word 0xafa20024
  .word 0x3c030046
  .word 0xafa20028
  .word 0x24634850
  .word 0x3c020046
  .word 0xafa30034
  .word 0x24424e80
  .word 0x3c030046
  .word 0xafa20030
  .word 0x24635670
  .word 0x3c020046
  .word 0xafa3003c
  .word 0x244257d0
  .word 0x3c030046
  .word 0xafa20038
  .word 0x24635590
  .word 0x3c020046
  .word 0xafa30044
  .word 0x244254a0
  .word 0x27a40020
  .word 0xafa20040
  .word 0x3c020046
  .word 0xafa0004c
  .word 0x24425660
  .word 0x0c12d9a0
  .word 0xafa20048
  .word 0x10000003
  .word 0x0200102d
  .word 0x1000ffdd
  .word 0x0000802d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

#pragma schedule on
// FUN_00465AE0

#pragma no_branch_likely on
u64 FUN_00465ae0(u64 param_1)

{
  if (iGpffffba44 != 0) {
    FUN_004c3c30_typed(iGpffffba44);
    iGpffffba44 = 0;
  }
  return param_1;
}
#pragma schedule off

#pragma schedule on
#pragma no_branch_likely off
// FUN_00465B20
int FUN_00465b20(int param_1)
{
  int result;

  result = param_1;
  param_1 = param_1 + iGpffffba40;
  *(u32 *)(param_1 + 4) = 0;
  *(u32 *)param_1 = 0xffffffff;
  return result;
}

// FUN_00465B40
asm int FUN_00465b40(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82ba40
  .word 0x02228021
  .word 0x8e040004
  .word 0x10800013
  .word 0x00000000
  .word 0x8c820004
  .word 0x0002082a
  .word 0x1020000b
  .word 0x0000282d
  .word 0x0000182d
  .word 0x8c820010
  .word 0x24a50001
  .word 0x00431021
  .word 0xac40000c
  .word 0x8c820004
  .word 0x00a2102a
  .word 0x1440fff9
  .word 0x24630010
  .word 0x00000000
  .word 0x8c820014
  .word 0x10510006
  .word 0x00000000
  .word 0xae000004
  .word 0x2403ffff
  .word 0x0220102d
  .word 0x10000005
  .word 0xae030000
  .word 0x0c1198f4
  .word 0x00000000
  .word 0x1000fff9
  .word 0xae000004
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00465BF0
asm u64 FUN_00465bf0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8f82ba40
  .word 0x00a21821
  .word 0x02428821
  .word 0x8c620000
  .word 0x8c700004
  .word 0x1200002c
  .word 0xae220000
  .word 0x8e070000
  .word 0x30e20001
  .word 0x14400028
  .word 0x00000000
  .word 0x8e020020
  .word 0x0000282d
  .word 0x8e040004
  .word 0x8c480020
  .word 0x0c119898
  .word 0x0000302d
  .word 0x8c430004
  .word 0x0003082a
  .word 0x1020001c
  .word 0x0000202d
  .word 0x0000182d
  .word 0x8c450010
  .word 0x24840001
  .word 0x00a32821
  .word 0xaca0000c
  .word 0x8e060010
  .word 0x8c450010
  .word 0x00c33021
  .word 0x8cc60008
  .word 0x00a32821
  .word 0xaca60008
  .word 0x8e060010
  .word 0x8c450010
  .word 0x00c33021
  .word 0x8cc60004
  .word 0x00a32821
  .word 0xaca60004
  .word 0x8e060010
  .word 0x8c450010
  .word 0x00c33021
  .word 0x8cc60000
  .word 0x00a32821
  .word 0xaca60000
  .word 0x8c450004
  .word 0x0085282a
  .word 0x14a0ffe7
  .word 0x24630010
  .word 0xae220004
  .word 0xac520014
  .word 0x0240102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_00465CF0
asm u64 FUN_00465cf0(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x24020100
  .word 0xffbf0040
  .word 0x27a5005c
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0802d
  .word 0xafa2005c
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000058
  .word 0x0000102d
  .word 0x8f82ba40
  .word 0x0260202d
  .word 0x24060004
  .word 0x02028021
  .word 0x0c1305fc
  .word 0x0200282d
  .word 0x10400010
  .word 0x00000000
  .word 0x8e100004
  .word 0x12000045
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x14400041
  .word 0x00000000
  .word 0x0260202d
  .word 0x26050004
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400005
  .word 0x00000000
  .word 0x10000041
  .word 0x0000102d
  .word 0x1000003f
  .word 0x0000102d
  .word 0x0260202d
  .word 0x0200282d
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000037
  .word 0x0000102d
  .word 0x8e020020
  .word 0x0260202d
  .word 0x24060004
  .word 0x0c1305fc
  .word 0x24450020
  .word 0x10400022
  .word 0x00000000
  .word 0x8e020004
  .word 0x8e110010
  .word 0x0002082a
  .word 0x1020001b
  .word 0x0000902d
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000023
  .word 0x0000102d
  .word 0x0260202d
  .word 0x26250004
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x10400011
  .word 0x00000000
  .word 0x0260202d
  .word 0x26250008
  .word 0x0c1305fc
  .word 0x24060004
  .word 0x1040000d
  .word 0x00000000
  .word 0x8e020004
  .word 0x26520001
  .word 0x0242102a
  .word 0x1440ffe8
  .word 0x26310010
  .word 0x00000000
  .word 0x1000000f
  .word 0x0260102d
  .word 0x1000000d
  .word 0x0000102d
  .word 0x1000000b
  .word 0x0000102d
  .word 0x10000009
  .word 0x0000102d
  .word 0x0260202d
  .word 0x27a50058
  .word 0x24060004
  .word 0x0c1305fc
  .word 0xafa00058
  .word 0x1440fff2
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x00000000
}

// FUN_00465EB0
asm u64 FUN_00465eb0(u64 param_1,u64 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x27a50068
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x24060004
  .word 0x7fb00000
  .word 0x8f82ba40
  .word 0x0080802d
  .word 0x0c130644
  .word 0x02628821
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa30068
  .word 0x24020100
  .word 0x10620005
  .word 0x00000000
  .word 0x10000080
  .word 0x0000102d
  .word 0x1000007e
  .word 0x0000102d
  .word 0x0200202d
  .word 0x0220282d
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000076
  .word 0x0000102d
  .word 0x0200202d
  .word 0x27a5006c
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400006
  .word 0x00000000
  .word 0x8fa2006c
  .word 0x1c400005
  .word 0x00000000
  .word 0x1000006b
  .word 0x0200102d
  .word 0x10000069
  .word 0x0000102d
  .word 0x0200202d
  .word 0x27a50064
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000061
  .word 0x0000102d
  .word 0x0200202d
  .word 0x27a50060
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000059
  .word 0x0000102d
  .word 0x3c020003
  .word 0x3445011e
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x8f84ba44
  .word 0x0040902d
  .word 0x0000282d
  .word 0x0240202d
  .word 0x0c148502
  .word 0x24060024
  .word 0x12400039
  .word 0x00000000
  .word 0x8fa50060
  .word 0x0c12db84
  .word 0x8fa4006c
  .word 0xae420020
  .word 0x8fa20064
  .word 0xae420000
  .word 0xae530014
  .word 0x8fa2006c
  .word 0xae420004
  .word 0xae520018
  .word 0x8e420000
  .word 0x30420002
  .word 0x1040002d
  .word 0x00000000
  .word 0xae400008
  .word 0xae40000c
  .word 0x3c020003
  .word 0x8fa3006c
  .word 0x3445011e
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00032100
  .word 0xae420010
  .word 0x8e420004
  .word 0x8e530010
  .word 0x0002082a
  .word 0x1020001c
  .word 0x0000a02d
  .word 0x0200202d
  .word 0x0260282d
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x10000027
  .word 0x0000102d
  .word 0x0200202d
  .word 0x26650004
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040001e
  .word 0x00000000
  .word 0x0200202d
  .word 0x26650008
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040001a
  .word 0x00000000
  .word 0xae60000c
  .word 0x26940001
  .word 0x8e420004
  .word 0x0282102a
  .word 0x1440ffe7
  .word 0x26730010
  .word 0x00000000
  .word 0x1000ffa6
  .word 0xae320004
  .word 0x3c020003
  .word 0x8fa3006c
  .word 0x3445011e
  .word 0x3c020096
  .word 0x8c420178
  .word 0x00031980
  .word 0x0040f809
  .word 0x2464000f
  .word 0x2444000f
  .word 0x2403fff0
  .word 0x00831824
  .word 0xae430008
  .word 0x1000ffc9
  .word 0xae42000c
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
  .word 0x27bd0070
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f82ba40
  .word 0x00821821
  .word 0x8c620000
  .word 0x00401027
  .word 0x0002102b
  .word 0x14400003
  .word 0x00000000
  .word 0x8c620004
  .word 0x0002102b
  .word 0x10400011
  .word 0x00000000
  .word 0x8c640004
  .word 0x24020004
  .word 0x1080000e
  .word 0x24420008
  .word 0x8c830000
  .word 0x30630001
  .word 0x1460000a
  .word 0x00000000
  .word 0x8c830004
  .word 0x24440008
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x00821021
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004661B0
asm u8 FUN_004661b0(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060046
  .word 0x3c070046
  .word 0xffbf0000
  .word 0x0000202d
  .word 0x2405011e
  .word 0x24c65a00
  .word 0x0c132948
  .word 0x24e75ae0
  .word 0x04410003
  .word 0x00000000
  .word 0x1000001a
  .word 0x0000102d
  .word 0x3c060046
  .word 0x3c070046
  .word 0x3c080046
  .word 0x24040008
  .word 0x2405011e
  .word 0x24c65b20
  .word 0x24e75b40
  .word 0x0c132e7c
  .word 0x25085bf0
  .word 0x3c050046
  .word 0x3c060046
  .word 0x3c070046
  .word 0xaf82ba40
  .word 0x2404011e
  .word 0x24a55eb0
  .word 0x24c65cf0
  .word 0x0c131f40
  .word 0x24e76130
  .word 0x0040102a
  .word 0x38420001
  .word 0x10400004
  .word 0x00000000
  .word 0x8f82ba40
  .word 0x0040102a
  .word 0x38420001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00466260
asm u64 FUN_00466260(u32 param_1,u32 *param_2,u32 *param_3,u32 param_4,u64 param_5)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020003
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0100a02d
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x7fb10010
  .word 0x3445011e
  .word 0x7fb00000
  .word 0x3c020096
  .word 0x8f84ba44
  .word 0x8c420188
  .word 0x00c0882d
  .word 0x0040f809
  .word 0x00e0802d
  .word 0x0280282d
  .word 0x0260202d
  .word 0x0c12db84
  .word 0x0040a02d
  .word 0xae820020
  .word 0xae900000
  .word 0x32020002
  .word 0xae930004
  .word 0x1040002a
  .word 0xae800014
  .word 0xae800008
  .word 0xae80000c
  .word 0x3c020003
  .word 0x3445011e
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00132100
  .word 0x0013082a
  .word 0xae820010
  .word 0x1020001b
  .word 0x0000382d
  .word 0x0000302d
  .word 0x0220282d
  .word 0x0240202d
  .word 0x8e820010
  .word 0x00461021
  .word 0x12200006
  .word 0xac40000c
  .word 0x8e820010
  .word 0x8ca30000
  .word 0x00461021
  .word 0xac430000
  .word 0x00000000
  .word 0x8e820010
  .word 0x00461021
  .word 0x12400005
  .word 0xac470004
  .word 0x8e820010
  .word 0x8c830000
  .word 0x00461021
  .word 0xac430008
  .word 0x24e70001
  .word 0x00f3102a
  .word 0x24c60010
  .word 0x24a50004
  .word 0x1440ffea
  .word 0x24840004
  .word 0xae940018
  .word 0x1000000e
  .word 0x0280102d
  .word 0x3c020003
  .word 0x00131980
  .word 0x3445011e
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x2464000f
  .word 0x2444000f
  .word 0x2403fff0
  .word 0x00831824
  .word 0xae830008
  .word 0x1000ffcd
  .word 0xae82000c
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

// FUN_004663D0
asm u64 FUN_004663d0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830000
  .word 0x8c900014
  .word 0x30620001
  .word 0x1440000c
  .word 0x0080882d
  .word 0x30620002
  .word 0x14400005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x8e24000c
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x8e240010
  .word 0xae20000c
  .word 0xae200008
  .word 0xae200010
  .word 0x0c12dbac
  .word 0x8e240020
  .word 0x3c020096
  .word 0x8f84ba44
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x12000004
  .word 0x00000000
  .word 0x8f82ba40
  .word 0x02021021
  .word 0xac400004
  .word 0xdfbf0020
  .word 0x0000102d
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma schedule on
// FUN_00466480
asm u64 FUN_00466480(u32 param_1,int param_2,u32 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x00e0a82d
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x24110001
  .word 0x8c820010
  .word 0x00138100
  .word 0x00502021
  .word 0x8c820008
  .word 0x30420001
  .word 0x14400003
  .word 0x0000282d
  .word 0x0220282d
  .word 0x24840010
  .word 0x10a0000f
  .word 0x00000000
  .word 0x8c830008
  .word 0x30620002
  .word 0x10400003
  .word 0x00000000
  .word 0x24a50001
  .word 0x00000000
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x24a5ffff
  .word 0x26310001
  .word 0x14a0fff4
  .word 0x24840010
  .word 0x00000000
  .word 0x3c020096
  .word 0x8f84ba44
  .word 0x3c030003
  .word 0x8c420188
  .word 0x0040f809
  .word 0x3465011e
  .word 0x36430001
  .word 0x02a0382d
  .word 0xac430000
  .word 0x0040902d
  .word 0xac510004
  .word 0x0220302d
  .word 0x8e840020
  .word 0x0c12dd74
  .word 0x0260282d
  .word 0x1260002b
  .word 0xae420020
  .word 0x0013082a
  .word 0x27a60070
  .word 0x2405ffff
  .word 0x10200016
  .word 0x0000382d
  .word 0x8e830010
  .word 0x0000202d
  .word 0x00641021
  .word 0x8c420008
  .word 0x30420002
  .word 0x14400022
  .word 0x00000000
  .word 0x8e820010
  .word 0x00441021
  .word 0x8c420008
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0x24c6fffc
  .word 0x10000002
  .word 0x8cc50000
  .word 0x00e0282d
  .word 0x24e70001
  .word 0x00f3102a
  .word 0x1440ffee
  .word 0x24840010
  .word 0xae45001c
  .word 0x8e830010
  .word 0x00132180
  .word 0x0240102d
  .word 0x02031821
  .word 0x8c63000c
  .word 0xae430014
  .word 0x8e830008
  .word 0x00641821
  .word 0xae430008
  .word 0xae40000c
  .word 0x8e830010
  .word 0x00701821
  .word 0xae430010
  .word 0x10000007
  .word 0xae540018
  .word 0x2402ffff
  .word 0x1000ffef
  .word 0xae42001c
  .word 0xacc50000
  .word 0x1000ffdd
  .word 0x24c60004
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00f0
}
#pragma schedule off

// FUN_00466640
asm u64 FUN_00466640(u64 param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c820004
  .word 0x8c920014
  .word 0x0002082a
  .word 0x1020000f
  .word 0x0000882d
  .word 0x0000802d
  .word 0x8e620010
  .word 0x0050a821
  .word 0x8eb40000
  .word 0x0c1199c8
  .word 0x0240202d
  .word 0x12820010
  .word 0x00000000
  .word 0x8e620004
  .word 0x26310001
  .word 0x0222102a
  .word 0x1440fff5
  .word 0x26100010
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x0240202d
  .word 0x3c050046
  .word 0x0240202d
  .word 0x24a55930
  .word 0x0c132db8
  .word 0x0260302d
  .word 0x10000004
  .word 0x0260102d
  .word 0x1000fff0
  .word 0xaeb2000c
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
  .word 0x00000000
}

// FUN_00466710

#pragma optimization_level 3
u32 FUN_00466710(int param_1)
{
  return *(u32 *)(param_1 + iGpffffba40 + 4);
}
#pragma optimization_level 2

// FUN_00466720

#pragma optimization_level 3
u32 FUN_00466720(int param_1)
{
  return *(u32 *)(param_1 + iGpffffba40);
}
#pragma optimization_level 2

// FUN_00466730
asm u32 FUN_00466730(u32 *param_1)
{
  .set noreorder
  .word 0x27bdf650
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
  .word 0x8c820014
  .word 0x8c930000
  .word 0x8c500004
  .word 0x12000154
  .word 0x0080a82d
  .word 0x0c132b8c
  .word 0x0200202d
  .word 0x10400142
  .word 0x00000000
  .word 0x26060010
  .word 0x27a50170
  .word 0x24040008
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x8e140004
  .word 0x12800047
  .word 0x00000000
  .word 0x27b20174
  .word 0x27b10134
  .word 0x27b00178
  .word 0x27b60138
  .word 0x27b7017c
  .word 0x27be013c
  .word 0x27a20180
  .word 0x8ee70000
  .word 0xc4430000
  .word 0x27a40170
  .word 0xc6040000
  .word 0xc7a60170
  .word 0xc6450000
  .word 0xafc70000
  .word 0x27a2018c
  .word 0x8c460000
  .word 0xe6c40000
  .word 0xe7a60130
  .word 0xe6250000
  .word 0x27a20184
  .word 0xc4420000
  .word 0x27a2019c
  .word 0x8c450000
  .word 0x27a20188
  .word 0xc4410000
  .word 0x27a201ac
  .word 0x8c430000
  .word 0x27a20190
  .word 0xc4400000
  .word 0x27a2014c
  .word 0xac460000
  .word 0x27a20140
  .word 0x26860010
  .word 0xe4430000
  .word 0x27a2015c
  .word 0xac450000
  .word 0x27a20144
  .word 0x27a50130
  .word 0xe4420000
  .word 0x27a2016c
  .word 0xac430000
  .word 0x27a20148
  .word 0xe4410000
  .word 0x27a20150
  .word 0xe4400000
  .word 0x27a20194
  .word 0xc4440000
  .word 0x27a20198
  .word 0xc4430000
  .word 0x27a201a0
  .word 0xc4420000
  .word 0x27a201a4
  .word 0xc4410000
  .word 0x27a201a8
  .word 0xc4400000
  .word 0x27a20154
  .word 0xe4440000
  .word 0x27a20158
  .word 0xe4430000
  .word 0x27a20160
  .word 0xe4420000
  .word 0x27a20164
  .word 0xe4410000
  .word 0x27a20168
  .word 0x0c130bcc
  .word 0xe4400000
  .word 0x8e940004
  .word 0x1680ffc2
  .word 0x00000000
  .word 0x00000000
  .word 0x32742000
  .word 0x1280001c
  .word 0x00000000
  .word 0x8ea20014
  .word 0x8c4300a0
  .word 0x90620003
  .word 0x30420003
  .word 0x14400016
  .word 0x00000000
  .word 0x3c040096
  .word 0x2484012c
  .word 0x8c820000
  .word 0xac620008
  .word 0x8ea20014
  .word 0x8c4200a0
  .word 0xac44000c
  .word 0x8ea30014
  .word 0x8c820000
  .word 0x8c6300a0
  .word 0x24630008
  .word 0xac430004
  .word 0x8ea20014
  .word 0x8c4200a0
  .word 0x24420008
  .word 0xac820000
  .word 0x8ea20014
  .word 0x8c4300a0
  .word 0x90620003
  .word 0x34420002
  .word 0xa0620003
  .word 0x8ea20020
  .word 0x27b201f0
  .word 0x8ea30004
  .word 0x0000b02d
  .word 0x8eb10010
  .word 0x8c57003c
  .word 0x2450004c
  .word 0x0003082a
  .word 0x8c420024
  .word 0x102000c3
  .word 0x7fa200a0
  .word 0x327e1000
  .word 0x3c020046
  .word 0x24424760
  .word 0x105700e1
  .word 0x00000000
  .word 0x27a400f0
  .word 0x02e0f809
  .word 0x0200282d
  .word 0x27a400b0
  .word 0x27a500f0
  .word 0x0c130bcc
  .word 0x27a60170
  .word 0x8e33000c
  .word 0x12600133
  .word 0x00000000
  .word 0x17c00120
  .word 0x00000000
  .word 0x1280012f
  .word 0x00000000
  .word 0x27a600b0
  .word 0x26650050
  .word 0x24040008
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x92630003
  .word 0x2402fffb
  .word 0x00621024
  .word 0x34420008
  .word 0x1000011e
  .word 0xa2620003
  .word 0x27a200b4
  .word 0xc4450000
  .word 0xc7a600b0
  .word 0x27a200b8
  .word 0xc4440000
  .word 0xe7a60170
  .word 0x27a200bc
  .word 0x8c460000
  .word 0x27a200c0
  .word 0xc4430000
  .word 0x27a200cc
  .word 0x8c450000
  .word 0x27a200c4
  .word 0xc4420000
  .word 0x27a200dc
  .word 0x8c440000
  .word 0x27a200c8
  .word 0xc4410000
  .word 0x27a200ec
  .word 0x8c430000
  .word 0x27a200d0
  .word 0xc4400000
  .word 0x27a20174
  .word 0xe4450000
  .word 0x27a2017c
  .word 0xac460000
  .word 0x27a20178
  .word 0xe4440000
  .word 0x27a2018c
  .word 0xac450000
  .word 0x27a20180
  .word 0xe4430000
  .word 0x27a2019c
  .word 0xac440000
  .word 0x27a20184
  .word 0xe4420000
  .word 0x27a201ac
  .word 0xac430000
  .word 0x27a20188
  .word 0xe4410000
  .word 0x27a20190
  .word 0xe4400000
  .word 0x27a200d4
  .word 0xc4440000
  .word 0x27a200d8
  .word 0xc4430000
  .word 0x27a200e0
  .word 0xc4420000
  .word 0x27a200e4
  .word 0xc4410000
  .word 0x27a200e8
  .word 0xc4400000
  .word 0x27a20194
  .word 0xe4440000
  .word 0x27a20198
  .word 0xe4430000
  .word 0x27a201a0
  .word 0xe4420000
  .word 0x27a201a4
  .word 0xe4410000
  .word 0x27a201a8
  .word 0x10000059
  .word 0xe4400000
  .word 0x2652ffc0
  .word 0x27a50170
  .word 0x24040008
  .word 0x0240302d
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24c60008
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x1000004c
  .word 0x7ba200a0
  .word 0x27a60170
  .word 0x24040008
  .word 0x0240282d
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24c60008
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x27a200b4
  .word 0x26520040
  .word 0xc4450000
  .word 0xc7a600b0
  .word 0x27a200b8
  .word 0xc4440000
  .word 0xe7a60170
  .word 0x27a200c0
  .word 0xc4430000
  .word 0x27a200bc
  .word 0x8c460000
  .word 0x27a200c4
  .word 0xc4420000
  .word 0x27a200cc
  .word 0x8c450000
  .word 0x27a200c8
  .word 0xc4410000
  .word 0x27a200dc
  .word 0x8c440000
  .word 0x27a200d0
  .word 0xc4400000
  .word 0x27a200ec
  .word 0x8c430000
  .word 0x27a20174
  .word 0xe4450000
  .word 0x27a20178
  .word 0xe4440000
  .word 0x27a2017c
  .word 0xac460000
  .word 0x27a20180
  .word 0xe4430000
  .word 0x27a2018c
  .word 0xac450000
  .word 0x27a20184
  .word 0xe4420000
  .word 0x27a2019c
  .word 0xac440000
  .word 0x27a20188
  .word 0xe4410000
  .word 0x27a201ac
  .word 0xac430000
  .word 0x27a20190
  .word 0xe4400000
  .word 0x27a200d4
  .word 0xc4440000
  .word 0x27a200d8
  .word 0xc4430000
  .word 0x27a200e0
  .word 0xc4420000
  .word 0x27a200e4
  .word 0xc4410000
  .word 0x27a200e8
  .word 0xc4400000
  .word 0x27a20194
  .word 0xe4440000
  .word 0x27a20198
  .word 0xe4430000
  .word 0x27a201a0
  .word 0xe4420000
  .word 0x27a201a4
  .word 0xe4410000
  .word 0x27a201a8
  .word 0xe4400000
  .word 0x7ba200a0
  .word 0x26d60001
  .word 0x02028021
  .word 0x8ea20004
  .word 0x02c2102a
  .word 0x1440ff40
  .word 0x26310010
  .word 0x1000008d
  .word 0x24020001
  .word 0x0c132cbc
  .word 0x0200202d
  .word 0x27a60170
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x1000ff06
  .word 0x00000000
  .word 0x3c033f80
  .word 0x3c020002
  .word 0xafa30198
  .word 0x34420003
  .word 0xafa30184
  .word 0xafa30170
  .word 0x8fa3017c
  .word 0xafa00180
  .word 0xafa00178
  .word 0xafa00174
  .word 0xafa00194
  .word 0xafa00190
  .word 0x00621025
  .word 0xafa00188
  .word 0xafa001a8
  .word 0xafa001a4
  .word 0xafa001a0
  .word 0x1000fef3
  .word 0xafa2017c
  .word 0xc6080008
  .word 0x3c024000
  .word 0xc607000c
  .word 0x24030003
  .word 0xc6020010
  .word 0xc6010014
  .word 0x44823000
  .word 0x46084102
  .word 0x3c023f80
  .word 0x46021002
  .word 0x46023b02
  .word 0x460812c2
  .word 0x44822800
  .word 0x46074282
  .word 0x27a200fc
  .word 0xac430000
  .word 0x27a20120
  .word 0xac400000
  .word 0x46080a42
  .word 0x27a20124
  .word 0xac400000
  .word 0x27a20128
  .word 0xac400000
  .word 0x27a200f4
  .word 0x460738c2
  .word 0x46070a02
  .word 0x46020882
  .word 0x460019c0
  .word 0x46002040
  .word 0x46032000
  .word 0x460250c0
  .word 0x46025081
  .word 0x460330c2
  .word 0x44802000
  .word 0xe4430000
  .word 0x46023082
  .word 0x27a20100
  .word 0xe4420000
  .word 0x46052018
  .word 0x27a20104
  .word 0x4607309d
  .word 0x46052018
  .word 0x4601305d
  .word 0xe4410000
  .word 0x46052018
  .word 0x27a20118
  .word 0x4600301d
  .word 0xe4400000
  .word 0x46085841
  .word 0x27a200f8
  .word 0x46085800
  .word 0x46013042
  .word 0xe4410000
  .word 0x46096040
  .word 0x27a20110
  .word 0x46003002
  .word 0xe4400000
  .word 0x46096001
  .word 0x27a20108
  .word 0x46013042
  .word 0xe4410000
  .word 0x46003002
  .word 0x27a20114
  .word 0xe4400000
  .word 0xe7a200f0
  .word 0x27a20120
  .word 0xc6000018
  .word 0xe4400000
  .word 0xc600001c
  .word 0x27a20124
  .word 0xe4400000
  .word 0xc6000020
  .word 0x27a20128
  .word 0x1000fed9
  .word 0xe4400000
  .word 0x27a600f0
  .word 0x26650010
  .word 0x24040008
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x1680fed5
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x0260202d
  .word 0x1000fed1
  .word 0x00000000
  .word 0x8e230008
  .word 0x24020003
  .word 0x30630003
  .word 0x1062ff76
  .word 0x00000000
  .word 0x24020002
  .word 0x1062ff29
  .word 0x00000000
  .word 0x24020001
  .word 0x1062ff18
  .word 0x00000000
  .word 0x1060fed7
  .word 0x00000000
  .word 0x1000ff6c
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
  .word 0x27bd09b0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00466EF0
asm u64 FUN_00466ef0(u32 *param_1)
{
  .set noreorder
  .word 0x27bdfda0
  .word 0x0000382d
  .word 0xffbf0090
  .word 0x0000302d
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c940000
  .word 0x32820002
  .word 0x144000cf
  .word 0x0080982d
  .word 0x32820001
  .word 0x144000d0
  .word 0x00000000
  .word 0x32824000
  .word 0x144000dd
  .word 0x00000000
  .word 0x8e660014
  .word 0x24070001
  .word 0x27b60220
  .word 0x10e0005d
  .word 0x00000000
  .word 0x10c000fc
  .word 0x00000000
  .word 0x8cd00004
  .word 0x120000f9
  .word 0x00000000
  .word 0x0c132b8c
  .word 0x0200202d
  .word 0x104000e7
  .word 0x00000000
  .word 0x26060010
  .word 0x27a50220
  .word 0x24040008
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x8e120004
  .word 0x12400046
  .word 0x00000000
  .word 0x27b10224
  .word 0x27b00124
  .word 0x27b50228
  .word 0x27b70128
  .word 0x27be022c
  .word 0x27a20230
  .word 0x8fc70000
  .word 0xc4430000
  .word 0x27a40220
  .word 0xc6a40000
  .word 0xc7a60220
  .word 0xc6250000
  .word 0x27a2023c
  .word 0x8c460000
  .word 0xe6e40000
  .word 0xe7a60120
  .word 0xe6050000
  .word 0x27a20234
  .word 0xc4420000
  .word 0x27a2024c
  .word 0x8c450000
  .word 0x27a20238
  .word 0xc4410000
  .word 0x27a2025c
  .word 0x8c430000
  .word 0x27a20240
  .word 0xc4400000
  .word 0x27a2012c
  .word 0xac470000
  .word 0x27a2013c
  .word 0xac460000
  .word 0x27a20130
  .word 0x26460010
  .word 0xe4430000
  .word 0x27a2014c
  .word 0xac450000
  .word 0x27a20134
  .word 0x27a50120
  .word 0xe4420000
  .word 0x27a2015c
  .word 0xac430000
  .word 0x27a20138
  .word 0xe4410000
  .word 0x27a20140
  .word 0xe4400000
  .word 0x27a20244
  .word 0xc4440000
  .word 0x27a20248
  .word 0xc4430000
  .word 0x27a20250
  .word 0xc4420000
  .word 0x27a20254
  .word 0xc4410000
  .word 0x27a20258
  .word 0xc4400000
  .word 0x27a20144
  .word 0xe4440000
  .word 0x27a20148
  .word 0xe4430000
  .word 0x27a20150
  .word 0xe4420000
  .word 0x27a20154
  .word 0xe4410000
  .word 0x27a20158
  .word 0x0c130bcc
  .word 0xe4400000
  .word 0x8e520004
  .word 0x1640ffc1
  .word 0x00000000
  .word 0x32952000
  .word 0x12a0001c
  .word 0x00000000
  .word 0x8e620014
  .word 0x8c4300a0
  .word 0x90620003
  .word 0x30420003
  .word 0x14400016
  .word 0x00000000
  .word 0x3c040096
  .word 0x2484012c
  .word 0x8c820000
  .word 0xac620008
  .word 0x8e620014
  .word 0x8c4200a0
  .word 0xac44000c
  .word 0x8e630014
  .word 0x8c820000
  .word 0x8c6300a0
  .word 0x24630008
  .word 0xac430004
  .word 0x8e620014
  .word 0x8c4200a0
  .word 0x24420008
  .word 0xac820000
  .word 0x8e620014
  .word 0x8c4300a0
  .word 0x90620003
  .word 0x34420002
  .word 0xa0620003
  .word 0x8e640020
  .word 0x27b20164
  .word 0x8e630004
  .word 0x0000f02d
  .word 0x8e770010
  .word 0x8e710008
  .word 0x8c82003c
  .word 0x2490004c
  .word 0x0003082a
  .word 0x7fa200d0
  .word 0x8c820024
  .word 0x1020003b
  .word 0x7fa200c0
  .word 0x32821000
  .word 0x7fa200b0
  .word 0x32824000
  .word 0x7fa200a0
  .word 0x7ba200d0
  .word 0x3c030046
  .word 0x24634760
  .word 0x10620081
  .word 0x00000000
  .word 0x27a400e0
  .word 0x0040f809
  .word 0x0200282d
  .word 0x0220202d
  .word 0x27a500e0
  .word 0x0c130bcc
  .word 0x02c0302d
  .word 0x8ef4000c
  .word 0x128000d9
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x144000bf
  .word 0x00000000
  .word 0x12a000d4
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x144000cb
  .word 0x00000000
  .word 0x26850050
  .word 0x24040008
  .word 0x0220302d
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x92830003
  .word 0x2402fffb
  .word 0x00621024
  .word 0x34420008
  .word 0x100000c0
  .word 0xa2820003
  .word 0x2652fffc
  .word 0x10000004
  .word 0x8e560000
  .word 0xae560000
  .word 0x26520004
  .word 0x0220b02d
  .word 0x7ba200c0
  .word 0x27de0001
  .word 0x26310040
  .word 0x02028021
  .word 0x8e620004
  .word 0x03c2102a
  .word 0x1440ffcb
  .word 0x26f70010
  .word 0x100000bd
  .word 0x24020001
  .word 0x0c1199cc
  .word 0x00000000
  .word 0x100000ba
  .word 0xdfbf0090
  .word 0x8e63001c
  .word 0x2402ffff
  .word 0x1062ff2e
  .word 0x00000000
  .word 0x8e650018
  .word 0x00032180
  .word 0x32822000
  .word 0x8ca30008
  .word 0x1040ff2e
  .word 0x0064b021
  .word 0x32824000
  .word 0x1040ff2b
  .word 0x00000000
  .word 0x8ca60014
  .word 0x1000ff28
  .word 0x24070001
  .word 0x3c043f80
  .word 0x3c020002
  .word 0xafa40208
  .word 0x34430003
  .word 0xafa401f4
  .word 0x32822000
  .word 0xafa401e0
  .word 0x27b601e0
  .word 0x8fa401ec
  .word 0xafa001f0
  .word 0xafa001e8
  .word 0xafa001e4
  .word 0xafa00204
  .word 0xafa00200
  .word 0x00831825
  .word 0xafa001f8
  .word 0xafa00218
  .word 0xafa00214
  .word 0xafa00210
  .word 0x1040ff13
  .word 0xafa301ec
  .word 0x8e660014
  .word 0x1000ff10
  .word 0x24070001
  .word 0x0c132cbc
  .word 0x0200202d
  .word 0x27a60220
  .word 0x24050008
  .word 0x8c440000
  .word 0x24a5ffff
  .word 0x8c430004
  .word 0xacc40000
  .word 0x24420008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x1000ff60
  .word 0x00000000
  .word 0x3c033f80
  .word 0x3c020002
  .word 0xafa30248
  .word 0x34420003
  .word 0xafa30234
  .word 0xafa30220
  .word 0x8fa3022c
  .word 0xafa00230
  .word 0xafa00228
  .word 0xafa00224
  .word 0xafa00244
  .word 0xafa00240
  .word 0x00621025
  .word 0xafa00238
  .word 0xafa00258
  .word 0xafa00254
  .word 0xafa00250
  .word 0x1000ff4d
  .word 0xafa2022c
  .word 0xc6080008
  .word 0x3c024000
  .word 0xc607000c
  .word 0x24030003
  .word 0xc6020010
  .word 0xc6010014
  .word 0x44823000
  .word 0x46084102
  .word 0x3c023f80
  .word 0x46021002
  .word 0x46023b02
  .word 0x460812c2
  .word 0x44822800
  .word 0x46074282
  .word 0x27a200ec
  .word 0xac430000
  .word 0x27a20110
  .word 0xac400000
  .word 0x46080a42
  .word 0x27a20114
  .word 0xac400000
  .word 0x27a20118
  .word 0xac400000
  .word 0x27a200e4
  .word 0x460738c2
  .word 0x46070a02
  .word 0x46020882
  .word 0x460019c0
  .word 0x46002040
  .word 0x46032000
  .word 0x460250c0
  .word 0x46025081
  .word 0x460330c2
  .word 0x44802000
  .word 0xe4430000
  .word 0x46023082
  .word 0x27a200f0
  .word 0xe4420000
  .word 0x46052018
  .word 0x27a200f4
  .word 0x4607309d
  .word 0x46052018
  .word 0x4601305d
  .word 0xe4410000
  .word 0x46052018
  .word 0x27a20108
  .word 0x4600301d
  .word 0xe4400000
  .word 0x46085841
  .word 0x27a200e8
  .word 0x46085800
  .word 0x46013042
  .word 0xe4410000
  .word 0x46096040
  .word 0x27a20100
  .word 0x46003002
  .word 0xe4400000
  .word 0x46096001
  .word 0x27a200f8
  .word 0x46013042
  .word 0xe4410000
  .word 0x46003002
  .word 0x27a20104
  .word 0xe4400000
  .word 0xe7a200e0
  .word 0x27a20110
  .word 0xc6000018
  .word 0xe4400000
  .word 0xc600001c
  .word 0x27a20114
  .word 0xe4400000
  .word 0xc6000020
  .word 0x27a20118
  .word 0x1000ff39
  .word 0xe4400000
  .word 0x27a600e0
  .word 0x26850010
  .word 0x24040008
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x16a0ff36
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x0280202d
  .word 0x1000ff32
  .word 0x00000000
  .word 0x26840050
  .word 0x0220282d
  .word 0x0c130bcc
  .word 0x27a60220
  .word 0x1000ff3d
  .word 0x92830003
  .word 0x8ee30008
  .word 0x24020003
  .word 0x30630003
  .word 0x1062ff43
  .word 0x00000000
  .word 0x24020002
  .word 0x1062ff3d
  .word 0x00000000
  .word 0x24020001
  .word 0x1062ff37
  .word 0x00000000
  .word 0x1000ff3b
  .word 0x0223b00a
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
  .word 0x27bd0260
  .word 0x00000000
}

// FUN_00467590
asm u64 FUN_00467590(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c030096
  .word 0xffbf0010
  .word 0x3c020096
  .word 0x7fb00000
  .word 0x8c63c3fc
  .word 0x0080802d
  .word 0x2463ffff
  .word 0x1060000b
  .word 0xac43c3fc
  .word 0x3c020096
  .word 0x8c44c400
  .word 0x10800005
  .word 0x00000000
  .word 0x0c130f0c
  .word 0x00000000
  .word 0x3c020096
  .word 0xac40c400
  .word 0x10000005
  .word 0x0200102d
  .word 0x0c11a73c
  .word 0x00000000
  .word 0x1000fff3
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_00467600
asm u64 FUN_00467600(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c42c3fc
  .word 0x10400008
  .word 0x0080802d
  .word 0x3c030096
  .word 0x0200102d
  .word 0x8c64c3fc
  .word 0x3c030096
  .word 0x24840001
  .word 0x10000014
  .word 0xac64c3fc
  .word 0x8f85ae30
  .word 0x3c080096
  .word 0x8f87ae34
  .word 0x3c020004
  .word 0x24040090
  .word 0x24060010
  .word 0x2508c410
  .word 0x0c130ed8
  .word 0x34490120
  .word 0x3c030096
  .word 0x10400007
  .word 0xac62c400
  .word 0x0c11a738
  .word 0x00000000
  .word 0x1440ffea
  .word 0x00000000
  .word 0x10000002
  .word 0x0000102d
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba48
  .word 0x0080102d
  .word 0x00831821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004676C0
asm u64 FUN_004676c0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x0000882d
  .word 0x322300ff
  .word 0x24020005
  .word 0x00031980
  .word 0x02438021
  .word 0x8e030020
  .word 0x1062002d
  .word 0x00000000
  .word 0x24020004
  .word 0x10620022
  .word 0x00000000
  .word 0x24020002
  .word 0x10620017
  .word 0x00000000
  .word 0x24020001
  .word 0x10620006
  .word 0x00000000
  .word 0x10600024
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x00000000
  .word 0x8e040004
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0x00000000
  .word 0x8e040008
  .word 0x10800018
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x00000000
  .word 0x8e040004
  .word 0x10800010
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x00000000
  .word 0x8e040000
  .word 0x10800008
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x00000000
  .word 0xae000000
  .word 0xae000004
  .word 0x26220001
  .word 0x305100ff
  .word 0x2a220002
  .word 0x1440ffc7
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060090
  .word 0x0240102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
}

// FUN_004677F0
asm u64 FUN_004677f0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba48
  .word 0x0080802d
  .word 0x02021021
  .word 0x8c510000
  .word 0x1220000c
  .word 0x00000000
  .word 0x0c119db0
  .word 0x0220202d
  .word 0x3c020096
  .word 0x8c44c400
  .word 0x3c020096
  .word 0x8c42018c
  .word 0x0040f809
  .word 0x0220282d
  .word 0x8f82ba48
  .word 0x02021021
  .word 0xac400000
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_00467860
asm u64 FUN_00467860(u64 param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x0080f02d
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00a0882d
  .word 0xe7b40000
  .word 0x8f83ba48
  .word 0x02231021
  .word 0x8c570000
  .word 0x12e0007f
  .word 0x03c0802d
  .word 0x02031021
  .word 0x8c530000
  .word 0x1260007d
  .word 0x00000000
  .word 0x1260008f
  .word 0x00000000
  .word 0x8ee50080
  .word 0x0c11a3a8
  .word 0x0200202d
  .word 0x0000a82d
  .word 0x32a300ff
  .word 0x24020005
  .word 0x00032180
  .word 0x02e4a021
  .word 0x8e830020
  .word 0x1062005d
  .word 0x00000000
  .word 0x24020004
  .word 0x10620048
  .word 0x00000000
  .word 0x24020002
  .word 0x10620029
  .word 0x00000000
  .word 0x24020001
  .word 0x10620006
  .word 0x00000000
  .word 0x1060005c
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x00000000
  .word 0x02649021
  .word 0x0c11a4d0
  .word 0x0220202d
  .word 0x0040b02d
  .word 0x0c11a4e8
  .word 0x0220202d
  .word 0x46000506
  .word 0x02c0282d
  .word 0x0c11a4a0
  .word 0x0200202d
  .word 0x4600a306
  .word 0x0c11a4b8
  .word 0x0200202d
  .word 0x8e820004
  .word 0xae420004
  .word 0x8e820008
  .word 0xae420008
  .word 0x8e430004
  .word 0x10600005
  .word 0x00000000
  .word 0x8c620054
  .word 0x24420001
  .word 0xac620054
  .word 0x00000000
  .word 0x8e430008
  .word 0x1060003e
  .word 0x00000000
  .word 0x8c620054
  .word 0x24420001
  .word 0x1000003a
  .word 0xac620054
  .word 0x00000000
  .word 0x0c11a57c
  .word 0x0220202d
  .word 0x0040a02d
  .word 0x0c11a594
  .word 0x0220202d
  .word 0x0040902d
  .word 0x0c11a5c4
  .word 0x0220202d
  .word 0x46000506
  .word 0x0c11a5ac
  .word 0x0220202d
  .word 0x12800004
  .word 0x0040b02d
  .word 0x0280282d
  .word 0x0c11a500
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0c11a52c
  .word 0x0200202d
  .word 0x02c0282d
  .word 0x0c11a544
  .word 0x0200202d
  .word 0x4600a306
  .word 0x0c11a564
  .word 0x0200202d
  .word 0x1000001e
  .word 0x00000000
  .word 0x00000000
  .word 0x0c11a638
  .word 0x0220202d
  .word 0x0040902d
  .word 0x0220202d
  .word 0x27a500cc
  .word 0x0c11a650
  .word 0x27a600c8
  .word 0x12400004
  .word 0x00000000
  .word 0x0240282d
  .word 0x0c11a5dc
  .word 0x0200202d
  .word 0x8fa500cc
  .word 0x8fa600c8
  .word 0x0c11a610
  .word 0x0200202d
  .word 0x1000000b
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a500c0
  .word 0x0c11a684
  .word 0x27a600b0
  .word 0x8fa500c0
  .word 0x0200202d
  .word 0x8fa600b0
  .word 0x0c11a66c
  .word 0x0040882d
  .word 0x0040802d
  .word 0x26a20001
  .word 0x305500ff
  .word 0x2aa20002
  .word 0x1440ff8f
  .word 0x00000000
  .word 0x10000018
  .word 0x03c0102d
  .word 0x10000016
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c44c400
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x34650120
  .word 0x0040982d
  .word 0x12600009
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060090
  .word 0x8f82ba48
  .word 0x02021021
  .word 0x1000ff73
  .word 0xac530000
  .word 0x1000ff71
  .word 0x0000982d
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
  .word 0x27bd00d0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00467B40
asm u64 FUN_00467b40(u64 param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x24060004
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x0080802d
  .word 0x0c130644
  .word 0x27a5003c
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa2003c
  .word 0x14400006
  .word 0x00000000
  .word 0xae200000
  .word 0x10000020
  .word 0x0200102d
  .word 0x1000001e
  .word 0x0000102d
  .word 0x0200202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0c130580
  .word 0x0000382d
  .word 0x14400003
  .word 0x00000000
  .word 0x10000015
  .word 0x0000102d
  .word 0x0c130734
  .word 0x27a40030
  .word 0x0c1320f0
  .word 0x0200202d
  .word 0xae220000
  .word 0x8e220000
  .word 0x1440ffec
  .word 0x00000000
  .word 0x0c130734
  .word 0x27a40030
  .word 0x8fa30034
  .word 0x3c028000
  .word 0x1062ffe6
  .word 0x00000000
  .word 0x24020016
  .word 0x1062ffe3
  .word 0x00000000
  .word 0x0c130714
  .word 0x27a40030
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

// FUN_00467C20
asm long FUN_00467c20(long param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x27a5007c
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba48
  .word 0x0080802d
  .word 0x00c21021
  .word 0x8c520000
  .word 0x24060004
  .word 0x8e420080
  .word 0x0c1305fc
  .word 0xafa2007c
  .word 0x14400003
  .word 0x00000000
  .word 0x100000cf
  .word 0x0000102d
  .word 0x0000a02d
  .word 0x328200ff
  .word 0x0200202d
  .word 0x00028980
  .word 0x27a50078
  .word 0x02511021
  .word 0x24060004
  .word 0x8c420020
  .word 0x0c1305fc
  .word 0xafa20078
  .word 0x14400003
  .word 0x00000000
  .word 0x100000c1
  .word 0x0000102d
  .word 0x8fa30078
  .word 0x24060004
  .word 0x10660065
  .word 0x00000000
  .word 0x24020002
  .word 0x1062003e
  .word 0x00000000
  .word 0x24020001
  .word 0x10620009
  .word 0x00000000
  .word 0x24020005
  .word 0x10620082
  .word 0x00000000
  .word 0x10600080
  .word 0x00000000
  .word 0x1000007f
  .word 0x26820001
  .word 0x00000000
  .word 0x02519821
  .word 0xc660000c
  .word 0x0200202d
  .word 0x27a50074
  .word 0x46000007
  .word 0x0c1305d4
  .word 0xe7a00074
  .word 0x1040007b
  .word 0x00000000
  .word 0x8e710004
  .word 0x0200202d
  .word 0x27a50070
  .word 0x24060004
  .word 0x0011102b
  .word 0x0c1305fc
  .word 0xafa20070
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0x8fa20070
  .word 0x1440006f
  .word 0x00000000
  .word 0x00000000
  .word 0x0200102d
  .word 0x00000000
  .word 0x10400071
  .word 0x00000000
  .word 0x8e710008
  .word 0x0200202d
  .word 0x27a5006c
  .word 0x24060004
  .word 0x0011102b
  .word 0x0c1305fc
  .word 0xafa2006c
  .word 0x14400004
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x00000000
  .word 0x8fa2006c
  .word 0x14400064
  .word 0x00000000
  .word 0x00000000
  .word 0x0200102d
  .word 0x00000000
  .word 0x1440004d
  .word 0x00000000
  .word 0x1000007d
  .word 0x0000102d
  .word 0x02518821
  .word 0x0200202d
  .word 0x0c1305d4
  .word 0x26250008
  .word 0x1040005f
  .word 0x00000000
  .word 0x8e22000c
  .word 0x0200202d
  .word 0x27a5007c
  .word 0x24060004
  .word 0x0c1305fc
  .word 0xafa2007c
  .word 0x10400059
  .word 0x00000000
  .word 0x8e310004
  .word 0x0200202d
  .word 0x27a50068
  .word 0x24060004
  .word 0x0011102b
  .word 0x0c1305fc
  .word 0xafa20068
  .word 0x14400004
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x00000000
  .word 0x8fa20068
  .word 0x1440004c
  .word 0x00000000
  .word 0x00000000
  .word 0x0200102d
  .word 0x00000000
  .word 0x14400029
  .word 0x00000000
  .word 0x10000059
  .word 0x0000102d
  .word 0x02518821
  .word 0x0200202d
  .word 0x8e220004
  .word 0x27a5007c
  .word 0x0c1305fc
  .word 0xafa2007c
  .word 0x10400045
  .word 0x00000000
  .word 0x8e220008
  .word 0x0200202d
  .word 0x27a5007c
  .word 0x24060004
  .word 0x0c1305fc
  .word 0xafa2007c
  .word 0x1040003f
  .word 0x00000000
  .word 0x8e310000
  .word 0x0200202d
  .word 0x27a50064
  .word 0x24060004
  .word 0x0011102b
  .word 0x0c1305fc
  .word 0xafa20064
  .word 0x14400004
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x00000000
  .word 0x8fa20064
  .word 0x14400032
  .word 0x00000000
  .word 0x00000000
  .word 0x0200102d
  .word 0x00000000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000033
  .word 0x0000102d
  .word 0x26820001
  .word 0x305400ff
  .word 0x2a820002
  .word 0x1440ff61
  .word 0x00000000
  .word 0x1000002c
  .word 0x0200102d
  .word 0x1000002a
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0c132090
  .word 0x0200282d
  .word 0x1440ff8f
  .word 0x00000000
  .word 0x1000ff8f
  .word 0x0000102d
  .word 0x10000021
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0c132090
  .word 0x0200282d
  .word 0x1440ff9a
  .word 0x00000000
  .word 0x1000ff9a
  .word 0x0000102d
  .word 0x00000000
  .word 0x10000017
  .word 0x0000102d
  .word 0x10000015
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0c132090
  .word 0x0200282d
  .word 0x1440ffb2
  .word 0x00000000
  .word 0x1000ffb2
  .word 0x0000102d
  .word 0x00000000
  .word 0x1000000b
  .word 0x0000102d
  .word 0x10000009
  .word 0x0000102d
  .word 0x0220202d
  .word 0x0c132090
  .word 0x0200282d
  .word 0x1440ffcc
  .word 0x00000000
  .word 0x1000ffcc
  .word 0x0000102d
  .word 0x00000000
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
}

// FUN_00467FD0
asm u64 FUN_00467fd0(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba48
  .word 0x00c0802d
  .word 0x02021021
  .word 0x8c530000
  .word 0x1260000b
  .word 0x0080882d
  .word 0x1260001d
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a5009c
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400019
  .word 0x00000000
  .word 0x100000be
  .word 0x0000102d
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c44c400
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x34650120
  .word 0x0040982d
  .word 0x12600009
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060090
  .word 0x8f82ba48
  .word 0x02021021
  .word 0x1000ffe5
  .word 0xac530000
  .word 0x1000ffe3
  .word 0x0000982d
  .word 0x100000a8
  .word 0x0000102d
  .word 0x8fa5009c
  .word 0x0c11a3a8
  .word 0x0200202d
  .word 0x0000a82d
  .word 0x27b20074
  .word 0x0220202d
  .word 0x27a50098
  .word 0x0c130644
  .word 0x24060004
  .word 0x14400003
  .word 0x00000000
  .word 0x1000009b
  .word 0x0000102d
  .word 0x8fa30098
  .word 0x24060004
  .word 0x10660056
  .word 0x00000000
  .word 0x24020002
  .word 0x10620033
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x24020005
  .word 0x10620065
  .word 0x00000000
  .word 0x10600063
  .word 0x00000000
  .word 0x10000061
  .word 0x00000000
  .word 0x32a200ff
  .word 0x00021180
  .word 0x0220202d
  .word 0x0262a021
  .word 0x27a50094
  .word 0xafa00090
  .word 0x0c13062c
  .word 0xafa0008c
  .word 0x1040005e
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c119ed0
  .word 0x27a50090
  .word 0x1040005b
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c119ed0
  .word 0x27a5008c
  .word 0x10400058
  .word 0x00000000
  .word 0x8fa20090
  .word 0x1040005c
  .word 0x00000000
  .word 0xae820004
  .word 0x3c023f80
  .word 0x44820000
  .word 0x8fa2008c
  .word 0xae820008
  .word 0x8e820004
  .word 0x8c420000
  .word 0xc441000c
  .word 0x46800860
  .word 0x46010003
  .word 0xe6800010
  .word 0xc7ac0094
  .word 0x0c11a4b8
  .word 0x0200202d
  .word 0x1000003a
  .word 0x00000000
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50088
  .word 0x0c13062c
  .word 0xafa00080
  .word 0x10400053
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50084
  .word 0x0c130644
  .word 0x24060004
  .word 0x1040004f
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c119ed0
  .word 0x27a50080
  .word 0x1040004c
  .word 0x00000000
  .word 0x8fa50080
  .word 0x10a00005
  .word 0x00000000
  .word 0x0c11a500
  .word 0x0200202d
  .word 0x0c1343c0
  .word 0x8fa40080
  .word 0xc7ac0088
  .word 0x0c11a564
  .word 0x0200202d
  .word 0x8fa50084
  .word 0x0c11a544
  .word 0x0200202d
  .word 0x10000019
  .word 0x00000000
  .word 0x0220202d
  .word 0x27a50070
  .word 0x24060008
  .word 0x0c130644
  .word 0xafa0007c
  .word 0x10400038
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c119ed0
  .word 0x27a5007c
  .word 0x10400035
  .word 0x00000000
  .word 0x8fa5007c
  .word 0x10a00006
  .word 0x00000000
  .word 0x0c11a5dc
  .word 0x0200202d
  .word 0x0c1343c0
  .word 0x8fa4007c
  .word 0x00000000
  .word 0x8fa50070
  .word 0x8e460000
  .word 0x0c11a610
  .word 0x0200202d
  .word 0x26a20001
  .word 0x305500ff
  .word 0x2aa20002
  .word 0x1440ff83
  .word 0x00000000
  .word 0x10000023
  .word 0x0220102d
  .word 0x10000021
  .word 0x0000102d
  .word 0x1000001f
  .word 0x0000102d
  .word 0x8fa40090
  .word 0x10800003
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0x10000018
  .word 0x0000102d
  .word 0x8fa5008c
  .word 0x10a00008
  .word 0x00000000
  .word 0x0c11a418
  .word 0x0200202d
  .word 0x0c1343c0
  .word 0x8fa4008c
  .word 0x1000ffa8
  .word 0x00000000
  .word 0x00000000
  .word 0xae800004
  .word 0x1000ffa4
  .word 0xae800008
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
}

// FUN_00468350
asm int FUN_00468350(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba48
  .word 0x00821021
  .word 0x8c500000
  .word 0x12000048
  .word 0x00000000
  .word 0x8e020080
  .word 0x10400045
  .word 0x00000000
  .word 0x24020004
  .word 0x0000982d
  .word 0x326300ff
  .word 0x24120004
  .word 0x00031980
  .word 0x02038821
  .word 0x8e240020
  .word 0x1092002b
  .word 0x24420004
  .word 0x24030002
  .word 0x1083001e
  .word 0x00000000
  .word 0x24030001
  .word 0x10830009
  .word 0x00000000
  .word 0x24030005
  .word 0x1083002c
  .word 0x00000000
  .word 0x1080002a
  .word 0x00000000
  .word 0x10000028
  .word 0x00000000
  .word 0x00000000
  .word 0x8e240004
  .word 0x10800006
  .word 0x24540004
  .word 0x0c132074
  .word 0x00000000
  .word 0x2442000c
  .word 0x02429021
  .word 0x00000000
  .word 0x8e240008
  .word 0x02929021
  .word 0x10800005
  .word 0x24110004
  .word 0x0c132074
  .word 0x00000000
  .word 0x2442000c
  .word 0x02228821
  .word 0x10000015
  .word 0x02511021
  .word 0x8e240004
  .word 0x10800006
  .word 0x24540008
  .word 0x0c132074
  .word 0x00000000
  .word 0x2442000c
  .word 0x02429021
  .word 0x00000000
  .word 0x1000000b
  .word 0x02921021
  .word 0x8e240000
  .word 0x10800006
  .word 0x24540008
  .word 0x0c132074
  .word 0x00000000
  .word 0x2442000c
  .word 0x02429021
  .word 0x00000000
  .word 0x02921021
  .word 0x00000000
  .word 0x26630001
  .word 0x307300ff
  .word 0x2a630002
  .word 0x1460ffc1
  .word 0x00000000
  .word 0x10000003
  .word 0xdfbf0050
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x8f83ba4c
  .word 0x0080102d
  .word 0x00831821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba4c
  .word 0x0080102d
  .word 0x00831821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba4c
  .word 0x00a31021
  .word 0x8c420000
  .word 0x14400003
  .word 0x00831821
  .word 0x10000004
  .word 0x0080102d
  .word 0x24020001
  .word 0x1000fffc
  .word 0xac620000
  .word 0x03e00008
  .word 0x00000000
}

#pragma schedule on
// FUN_00468530

void FUN_00468530(u64 param_1,u64 param_2,int param_3)

{
  u32 uStack_4;
  
  uStack_4 = *(u32 *)(param_3 + iGpffffba4c);
  FUN_004c17f0_typed(param_1,&uStack_4,4);
  return;
}
#pragma schedule off

// FUN_00468560
asm u64 FUN_00468560(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x27a5003c
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400006
  .word 0x00000000
  .word 0x8fa2003c
  .word 0x14400005
  .word 0x00000000
  .word 0x10000007
  .word 0x0220102d
  .word 0x10000005
  .word 0x0000102d
  .word 0x0c11a370
  .word 0x0200202d
  .word 0x1000fff9
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x8f85ba4c
  .word 0x0000102d
  .word 0x24030004
  .word 0x00852021
  .word 0x8c840000
  .word 0x03e00008
  .word 0x0064100b
  .word 0x00000000
  .word 0x8f83ba50
  .word 0x0080102d
  .word 0x00831821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba50
  .word 0x0080102d
  .word 0x00831821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba50
  .word 0x00a31021
  .word 0x8c420000
  .word 0x14400003
  .word 0x00831821
  .word 0x10000004
  .word 0x0080102d
  .word 0x24020001
  .word 0x1000fffc
  .word 0xac620000
  .word 0x03e00008
  .word 0x00000000
}

#pragma schedule on
// FUN_00468660

void FUN_00468660(u64 param_1,u64 param_2,int param_3)

{
  u32 uStack_4;
  
  uStack_4 = *(u32 *)(param_3 + iGpffffba50);
  FUN_004c17f0_typed(param_1,&uStack_4,4);
  return;
}
#pragma schedule off

// FUN_00468690
asm u64 FUN_00468690(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x27a5003c
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00c0802d
  .word 0x0c130644
  .word 0x24060004
  .word 0x10400006
  .word 0x00000000
  .word 0x8fa2003c
  .word 0x14400005
  .word 0x00000000
  .word 0x10000007
  .word 0x0220102d
  .word 0x10000005
  .word 0x0000102d
  .word 0x0c11a38c
  .word 0x0200202d
  .word 0x1000fff9
  .word 0x00000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x8f85ba50
  .word 0x0000102d
  .word 0x24030004
  .word 0x00852021
  .word 0x8c840000
  .word 0x03e00008
  .word 0x0064100b
  .word 0x00000000
}

// FUN_00468720
asm void FUN_00468720(char *param_1,long param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x10a0001a
  .word 0x0000502d
  .word 0x24a50010
  .word 0x24c30010
  .word 0xafa50008
  .word 0xafa3000c
  .word 0x27a7000c
  .word 0x27a60008
  .word 0x2941001e
  .word 0x1020001f
  .word 0x00000000
  .word 0x8fa30008
  .word 0x80630000
  .word 0x10600017
  .word 0x00000000
  .word 0x0000482d
  .word 0x00c0402d
  .word 0x8d050000
  .word 0x80a30000
  .word 0x1460000b
  .word 0x00000000
  .word 0x25290001
  .word 0x29230002
  .word 0x1460fff9
  .word 0x25080004
  .word 0x1000ffef
  .word 0x2941001e
  .word 0x24c30010
  .word 0xafa3000c
  .word 0x1000ffe8
  .word 0xafa30008
  .word 0xa0830000
  .word 0x254a0001
  .word 0x24a30001
  .word 0x24840001
  .word 0x1000fff1
  .word 0xad030000
  .word 0x8ce30000
  .word 0x80630000
  .word 0x1460ffe7
  .word 0x00000000
  .word 0xa0800000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004687E0
asm u64 FUN_004687e0(long param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff20
  .word 0x24060020
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x0000b02d
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8cb00000
  .word 0xafa500ac
  .word 0x8e17000c
  .word 0x8e1e0010
  .word 0x02e0202d
  .word 0x0c132f80
  .word 0x03c0282d
  .word 0x0040902d
  .word 0x0c132fc8
  .word 0x0240202d
  .word 0x0240202d
  .word 0x0c13371c
  .word 0x0200282d
  .word 0x12a00068
  .word 0x00000000
  .word 0x8eb60000
  .word 0x24060020
  .word 0x8ed4000c
  .word 0x8ed30010
  .word 0x0280202d
  .word 0x0c132f80
  .word 0x0260282d
  .word 0x0040882d
  .word 0x0c132fc8
  .word 0x0220202d
  .word 0x0220202d
  .word 0x0c13371c
  .word 0x02c0282d
  .word 0x169700c3
  .word 0x00000000
  .word 0x167e00c1
  .word 0x00000000
  .word 0x0c133028
  .word 0x0240202d
  .word 0x0220202d
  .word 0x0c133074
  .word 0x0240282d
  .word 0x0220202d
  .word 0x24050004
  .word 0x27a600dc
  .word 0x27a700d8
  .word 0x27a800d4
  .word 0x0c133754
  .word 0x27a900d0
  .word 0x12a00004
  .word 0x00000000
  .word 0x92c20023
  .word 0x10000003
  .word 0x00021200
  .word 0x92020023
  .word 0x00021200
  .word 0x30428000
  .word 0x144000b9
  .word 0x00000000
  .word 0x8fa500d8
  .word 0x8fa600d4
  .word 0x8fa700d0
  .word 0x0c13383c
  .word 0x8fa400dc
  .word 0x0040802d
  .word 0x0220282d
  .word 0x0c133738
  .word 0x0200202d
  .word 0x0c134390
  .word 0x0200202d
  .word 0x12a000b0
  .word 0x0040802d
  .word 0x8ea30050
  .word 0x3406f000
  .word 0x3062f000
  .word 0x00023b02
  .word 0x30620f00
  .word 0x00021202
  .word 0x14470003
  .word 0x306400ff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000382d
  .word 0x00071b00
  .word 0x00072a00
  .word 0x00661824
  .word 0x30a50f00
  .word 0x8e060050
  .word 0x00a33825
  .word 0x3c05ffff
  .word 0x308200ff
  .word 0x34a500ff
  .word 0x2403ff00
  .word 0x0220202d
  .word 0x00c52824
  .word 0x00a72825
  .word 0xae050050
  .word 0x8e050050
  .word 0x00a31824
  .word 0x00621025
  .word 0x0c132fac
  .word 0xae020050
  .word 0x0c132fac
  .word 0x0240202d
  .word 0x27a300b0
  .word 0x10600008
  .word 0x24020020
  .word 0xa0600000
  .word 0x2442ffff
  .word 0x24630001
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x8fa600ac
  .word 0x02a0282d
  .word 0x0c11a1c8
  .word 0x27a400b0
  .word 0x0200202d
  .word 0x0c1343f4
  .word 0x27a500b0
  .word 0x1000008b
  .word 0x0200102d
  .word 0x8e14000c
  .word 0x24060020
  .word 0x8e130010
  .word 0x0280202d
  .word 0x0c132f80
  .word 0x0260282d
  .word 0x0040882d
  .word 0x0c132fc8
  .word 0x0220202d
  .word 0x0013082a
  .word 0x1020ff9b
  .word 0x0000302d
  .word 0x2402ffff
  .word 0x24030001
  .word 0x2684fff8
  .word 0x0014082a
  .word 0x10200053
  .word 0x0000382d
  .word 0x2a810009
  .word 0x14200042
  .word 0x00000000
  .word 0x0280082a
  .word 0x14200007
  .word 0x0000282d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0281082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0060282d
  .word 0x10a00037
  .word 0x00000000
  .word 0x0000282d
  .word 0x00000000
  .word 0x8e280010
  .word 0x01064818
  .word 0x8e280014
  .word 0x01094021
  .word 0x01054021
  .word 0xad020000
  .word 0x8e280010
  .word 0x71064818
  .word 0x8e280014
  .word 0x01094021
  .word 0x01054021
  .word 0xad020004
  .word 0x8e280010
  .word 0x01064818
  .word 0x8e280014
  .word 0x01094021
  .word 0x01054021
  .word 0xad020008
  .word 0x8e280010
  .word 0x71064818
  .word 0x8e280014
  .word 0x01094021
  .word 0x01054021
  .word 0xad02000c
  .word 0x8e280010
  .word 0x01064818
  .word 0x8e280014
  .word 0x01094021
  .word 0x01054021
  .word 0xad020010
  .word 0x8e280010
  .word 0x71064818
  .word 0x8e280014
  .word 0x01094021
  .word 0x01054021
  .word 0xad020014
  .word 0x8e280010
  .word 0x01064818
  .word 0x8e280014
  .word 0x01094021
  .word 0x01054021
  .word 0xad020018
  .word 0x8e280010
  .word 0x71065018
  .word 0x8e290014
  .word 0x24e70008
  .word 0x00e4402a
  .word 0x012a4821
  .word 0x01254821
  .word 0xad22001c
  .word 0x1500ffcd
  .word 0x24a50020
  .word 0x00f4082a
  .word 0x1020000c
  .word 0x00000000
  .word 0x00075080
  .word 0x8e250010
  .word 0x00a64818
  .word 0x8e280014
  .word 0x24e70001
  .word 0x00f4282a
  .word 0x01094021
  .word 0x010a4021
  .word 0xad020000
  .word 0x14a0fff7
  .word 0x254a0004
  .word 0x24c60001
  .word 0x00d3282a
  .word 0x14a0ffa8
  .word 0x00000000
  .word 0x1000ff3d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c132f80
  .word 0x24060020
  .word 0x0040982d
  .word 0x0c132fc8
  .word 0x0260202d
  .word 0x0260202d
  .word 0x0c133b04
  .word 0x0240282d
  .word 0x0c132fac
  .word 0x0240202d
  .word 0x1000ff33
  .word 0x0260902d
  .word 0x8fa200d0
  .word 0x34429000
  .word 0x1000ff45
  .word 0xafa200d0
  .word 0x8fa200ac
  .word 0x3406f000
  .word 0x8c430050
  .word 0x3062f000
  .word 0x00023b02
  .word 0x30620f00
  .word 0x00021202
  .word 0x14470003
  .word 0x306400ff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000382d
  .word 0x1000ff50
  .word 0x00071b00
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
  .word 0x27bd00e0
  .word 0x00000000
  .word 0x00000000
}

// FUN_00468C50
asm u8 FUN_00468c50(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060046
  .word 0x3c070046
  .word 0xffbf0000
  .word 0x0000202d
  .word 0x24050120
  .word 0x24c67600
  .word 0x0c132948
  .word 0x24e77590
  .word 0x04410003
  .word 0x00000000
  .word 0x1000004a
  .word 0x0000102d
  .word 0x3c060046
  .word 0x3c070046
  .word 0x3c080046
  .word 0x24040004
  .word 0x24050120
  .word 0x24c676a0
  .word 0x24e777f0
  .word 0x0c12536c
  .word 0x25087860
  .word 0x04410003
  .word 0xaf82ba48
  .word 0x1000003d
  .word 0x0000102d
  .word 0x3c050046
  .word 0x3c060046
  .word 0x3c070047
  .word 0x24040120
  .word 0x24a57fd0
  .word 0x24c67c20
  .word 0x0c125378
  .word 0x24e78350
  .word 0x04410003
  .word 0x00000000
  .word 0x10000031
  .word 0x0000102d
  .word 0x3c060047
  .word 0x3c070047
  .word 0x3c080047
  .word 0x24040004
  .word 0x24050120
  .word 0x24c684c0
  .word 0x24e784e0
  .word 0x0c124b0c
  .word 0x25088500
  .word 0x04410003
  .word 0xaf82ba4c
  .word 0x10000024
  .word 0x0000102d
  .word 0x3c050047
  .word 0x3c060047
  .word 0x3c070047
  .word 0x24040120
  .word 0x24a58560
  .word 0x24c68530
  .word 0x0c124b24
  .word 0x24e785d0
  .word 0x04410003
  .word 0x00000000
  .word 0x10000018
  .word 0x0000102d
  .word 0x3c060047
  .word 0x3c070047
  .word 0x3c080047
  .word 0x24040004
  .word 0x24050120
  .word 0x24c685f0
  .word 0x24e78610
  .word 0x0c126494
  .word 0x25088630
  .word 0x04410003
  .word 0xaf82ba50
  .word 0x1000000b
  .word 0x0000102d
  .word 0x3c050047
  .word 0x3c060047
  .word 0x3c070047
  .word 0x24040120
  .word 0x24a58690
  .word 0x24c68660
  .word 0x0c1264a0
  .word 0x24e78700
  .word 0x0040102a
  .word 0x38420001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00468DC0
asm u64 FUN_00468dc0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82ba4c
  .word 0x02228021
  .word 0x8e020000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000009
  .word 0x0220102d
  .word 0x0c11a758
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000fff8
  .word 0xae020000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00468E30
asm u64 FUN_00468e30(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82ba50
  .word 0x02228021
  .word 0x8e020000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000009
  .word 0x0220102d
  .word 0x0c11a740
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000fff8
  .word 0xae020000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00468EA0
asm u64 FUN_00468ea0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8f82ba48
  .word 0x02421021
  .word 0x8c500000
  .word 0x12000038
  .word 0x00a0882d
  .word 0x1200004a
  .word 0x00000000
  .word 0x1220004a
  .word 0x00000000
  .word 0x8e020080
  .word 0x10400003
  .word 0x00000000
  .word 0x14510045
  .word 0x00000000
  .word 0xae110080
  .word 0x8e020080
  .word 0x2c410007
  .word 0x10200025
  .word 0x00000000
  .word 0x3c03007c
  .word 0x00021080
  .word 0x2463c840
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001b
  .word 0xae020020
  .word 0x24020002
  .word 0x10000018
  .word 0xae020020
  .word 0x24030001
  .word 0x24020002
  .word 0xae030020
  .word 0x10000013
  .word 0xae020060
  .word 0x24020004
  .word 0x0240202d
  .word 0xae020020
  .word 0x24050005
  .word 0x0c11a610
  .word 0x24060006
  .word 0x1000000c
  .word 0x0240202d
  .word 0x24020005
  .word 0x10000008
  .word 0xae020020
  .word 0x24050005
  .word 0x24020004
  .word 0xae050020
  .word 0x0240202d
  .word 0xae020060
  .word 0x0c11a610
  .word 0x24060006
  .word 0x0240202d
  .word 0x0c11a6a8
  .word 0x00000000
  .word 0x1000001b
  .word 0x0240102d
  .word 0x3c020096
  .word 0x3c030003
  .word 0x8c44c400
  .word 0x3c020096
  .word 0x8c420188
  .word 0x0040f809
  .word 0x34650120
  .word 0x0040802d
  .word 0x12000009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060090
  .word 0x8f82ba48
  .word 0x02421021
  .word 0x1000ffb8
  .word 0xac500000
  .word 0x1000ffb6
  .word 0x0000802d
  .word 0x10000005
  .word 0x0000102d
  .word 0x0c119db0
  .word 0x0200202d
  .word 0x1000ffba
  .word 0xae110080
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469030
asm u32 FUN_00469030(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x00821021
  .word 0x8c420000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000002
  .word 0x0000102d
  .word 0x8c420080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469060
asm u64 FUN_00469060(u64 param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x0000282d
  .word 0x8f82ba48
  .word 0x02621021
  .word 0x8c440000
  .word 0x24030001
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00828821
  .word 0x8e220020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8e240008
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000882d
  .word 0x8e240008
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae200008
  .word 0x8e240004
  .word 0x10800005
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae200004
  .word 0xae200010
  .word 0x1240004a
  .word 0x00000000
  .word 0xae320008
  .word 0x8e230008
  .word 0x8c620054
  .word 0x24420001
  .word 0xac620054
  .word 0x8e420000
  .word 0x8c42000c
  .word 0x00401026
  .word 0x2c420001
  .word 0x14400007
  .word 0x8e700000
  .word 0x12000005
  .word 0x00000000
  .word 0x8e020000
  .word 0x8c42000c
  .word 0x00401026
  .word 0x2c420001
  .word 0x14400026
  .word 0x00000000
  .word 0x27a30060
  .word 0x10600008
  .word 0x24020020
  .word 0xa0600000
  .word 0x2442ffff
  .word 0x24630001
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x27a40060
  .word 0x0200282d
  .word 0x0c11a1c8
  .word 0x0240302d
  .word 0x0c13447c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x12800005
  .word 0xae200004
  .word 0x0280202d
  .word 0x0c13445c
  .word 0x27a50060
  .word 0xae220004
  .word 0x8e230004
  .word 0x1060000e
  .word 0x00000000
  .word 0x8c620054
  .word 0x24420001
  .word 0xac620054
  .word 0x8e230004
  .word 0x3c023f80
  .word 0x44820000
  .word 0x8c620000
  .word 0xc441000c
  .word 0x46800860
  .word 0x46010003
  .word 0xe6200010
  .word 0x1000001b
  .word 0x0260102d
  .word 0x0200202d
  .word 0x0c11a770
  .word 0x0240282d
  .word 0xae220004
  .word 0x8e250004
  .word 0x10a00007
  .word 0x00000000
  .word 0x1280ffee
  .word 0x00000000
  .word 0x0c134444
  .word 0x0280202d
  .word 0x1000ffeb
  .word 0x8e230004
  .word 0x1000000c
  .word 0x0000102d
  .word 0x8e630000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x8c620000
  .word 0xc441000c
  .word 0x46800860
  .word 0x46010003
  .word 0x00000000
  .word 0x00000000
  .word 0x1000ffe5
  .word 0xe6200010
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

// FUN_00469280
asm u64 FUN_00469280(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000382d
  .word 0x00821021
  .word 0x8c460000
  .word 0x24030001
  .word 0x30e200ff
  .word 0x00021180
  .word 0x00c24021
  .word 0x8d020020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xad050000
  .word 0x24e20001
  .word 0x304700ff
  .word 0x28e20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000402d
  .word 0xad050000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_004692E0
asm u64 FUN_004692e0(float param_1,u64 param_2)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000302d
  .word 0x00821021
  .word 0x8c450000
  .word 0x24030001
  .word 0x30c200ff
  .word 0x00021180
  .word 0x00a23821
  .word 0x8ce20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x46006007
  .word 0x24c20001
  .word 0x304600ff
  .word 0x28c20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000382d
  .word 0x46006007
  .word 0x0080102d
  .word 0x03e00008
  .word 0xe4e0000c
  .word 0x00000000
}

// FUN_00469340
asm u32 FUN_00469340(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x00821021
  .word 0x8c440000
  .word 0x24030001
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00823021
  .word 0x8cc20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8cc20000
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0x8cc20000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004693A0
asm float FUN_004693a0(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x00821021
  .word 0x8c440000
  .word 0x24030001
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00823021
  .word 0x8cc20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xc4c0000c
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0xc4c0000c
  .word 0x03e00008
  .word 0x46000007
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469400
asm u64 FUN_00469400(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x02421021
  .word 0x8c440000
  .word 0x24030002
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00828021
  .word 0x8e020020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8e220054
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e220054
  .word 0x24420001
  .word 0xae220054
  .word 0x8e040004
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae000004
  .word 0xae110004
  .word 0x0240102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_004694B0
asm u64 FUN_004694b0(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000382d
  .word 0x00821021
  .word 0x8c460000
  .word 0x24030002
  .word 0x30e200ff
  .word 0x00021180
  .word 0x00c24021
  .word 0x8d020020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xad050000
  .word 0x24e20001
  .word 0x304700ff
  .word 0x28e20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000402d
  .word 0xad050000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469510
asm u64 FUN_00469510(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x0000302d
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f82ba48
  .word 0x0080802d
  .word 0x02021021
  .word 0x8c440000
  .word 0x24030002
  .word 0x30c200ff
  .word 0x00021180
  .word 0x00823821
  .word 0x8ce20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xace5000c
  .word 0x24c20001
  .word 0x304600ff
  .word 0x28c20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000382d
  .word 0xace5000c
  .word 0x0c11a6d4
  .word 0x0200202d
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_00469590
asm u64 FUN_00469590(u32 param_1,u64 param_2)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000302d
  .word 0x00821021
  .word 0x8c450000
  .word 0x24030002
  .word 0x30c200ff
  .word 0x00021180
  .word 0x00a23821
  .word 0x8ce20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xe4ec0008
  .word 0x24c20001
  .word 0x304600ff
  .word 0x28c20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000382d
  .word 0xe4ec0008
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
}

// FUN_004695F0
asm u32 FUN_004695f0(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x00821021
  .word 0x8c440000
  .word 0x24030002
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00823021
  .word 0x8cc20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8cc20004
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0x8cc20004
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469650
asm u32 FUN_00469650(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x00821021
  .word 0x8c440000
  .word 0x24030002
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00823021
  .word 0x8cc20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8cc20000
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0x8cc20000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004696B0
asm u32 FUN_004696b0(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x00821021
  .word 0x8c440000
  .word 0x24030002
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00823021
  .word 0x8cc20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8cc2000c
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0x8cc2000c
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469710
asm u32 FUN_00469710(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x00821021
  .word 0x8c440000
  .word 0x24030002
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00823021
  .word 0x8cc20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xc4c00008
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0xc4c00008
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469770
asm u32 FUN_00469770(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x02421021
  .word 0x8c440000
  .word 0x24030004
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00828021
  .word 0x8e020020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8e220054
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000802d
  .word 0x8e220054
  .word 0x24420001
  .word 0xae220054
  .word 0x8e040000
  .word 0x10800004
  .word 0x00000000
  .word 0x0c1343c0
  .word 0x00000000
  .word 0xae000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c11a6a4
  .word 0xae110000
  .word 0x0200202d
  .word 0x0c11a6a4
  .word 0x24050001
  .word 0x0240102d
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

// FUN_00469840
asm u64 FUN_00469840(u64 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x0000382d
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba48
  .word 0x0080802d
  .word 0x02021021
  .word 0x8c440000
  .word 0x24030004
  .word 0x30e200ff
  .word 0x00021180
  .word 0x00828821
  .word 0x8e220020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xae250004
  .word 0x24e20001
  .word 0x304700ff
  .word 0x28e20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000882d
  .word 0xae250004
  .word 0x0220202d
  .word 0xae260008
  .word 0x0c11a6a4
  .word 0x2405000a
  .word 0x0220202d
  .word 0x0c11a6a4
  .word 0x2405000b
  .word 0x0c11a6f0
  .word 0x0200202d
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_004698E0
asm u32 FUN_004698e0(int param_1)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000282d
  .word 0x00821021
  .word 0x8c440000
  .word 0x24030004
  .word 0x30a200ff
  .word 0x00021180
  .word 0x00823021
  .word 0x8cc20020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8cc20000
  .word 0x24a20001
  .word 0x304500ff
  .word 0x28a20002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000302d
  .word 0x8cc20000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469940
asm u64 FUN_00469940(u64 param_1,u32 *param_2,u32 *param_3)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000402d
  .word 0x00821021
  .word 0x8c470000
  .word 0x24030004
  .word 0x310200ff
  .word 0x00021180
  .word 0x00e24821
  .word 0x8d220020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0x8d230004
  .word 0x25020001
  .word 0x304800ff
  .word 0x29020002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000482d
  .word 0x8d230004
  .word 0x0080102d
  .word 0xaca30000
  .word 0x8d230008
  .word 0x03e00008
  .word 0xacc30000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004699B0
asm u64 FUN_004699b0(u64 param_1,u32 param_2,u32 param_3)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000402d
  .word 0x00821021
  .word 0x8c470000
  .word 0x24030005
  .word 0x310200ff
  .word 0x00021180
  .word 0x00e24821
  .word 0x8d220020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000008
  .word 0xad250000
  .word 0x25020001
  .word 0x304800ff
  .word 0x29020002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000482d
  .word 0xad250000
  .word 0x0080102d
  .word 0x03e00008
  .word 0xad260004
  .word 0x00000000
}

// FUN_00469A10
asm u64 FUN_00469a10(u64 param_1,long param_2,long param_3)
{
  .set noreorder
  .word 0x8f82ba48
  .word 0x0000402d
  .word 0x00821021
  .word 0x8c470000
  .word 0x24030005
  .word 0x310200ff
  .word 0x00021180
  .word 0x00e24821
  .word 0x8d220020
  .word 0x14430003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x25020001
  .word 0x304800ff
  .word 0x29020002
  .word 0x1440fff4
  .word 0x00000000
  .word 0x0000482d
  .word 0x10a00003
  .word 0x00000000
  .word 0x8d220000
  .word 0xaca20000
  .word 0x10c00003
  .word 0x00000000
  .word 0x8d220004
  .word 0xacc20000
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_00469A90
u32 FUN_00469a90(void)
{
  return 1;
}
#pragma optimization_level 3

// FUN_00469AA0
asm void FUN_00469aa0(int param_1)
{
  .set noreorder
  .word 0x8f83ba48
  .word 0x00831821
  .word 0x8c650000
  .word 0x8ca30080
  .word 0x2c610007
  .word 0x10200023
  .word 0x00000000
  .word 0x3c04007c
  .word 0x00031880
  .word 0x2484c860
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24030058
  .word 0xfca30068
  .word 0xfca00070
  .word 0xfca00078
  .word 0x24040080
  .word 0x24030048
  .word 0x0004203c
  .word 0x00641825
  .word 0xfca30028
  .word 0xfca00030
  .word 0x10000010
  .word 0xfca00038
  .word 0x24040080
  .word 0x24030068
  .word 0x0004203c
  .word 0x00641825
  .word 0xfca30028
  .word 0xfca00030
  .word 0x10000008
  .word 0xfca00038
  .word 0x3c030100
  .word 0xfca30030
  .word 0x10000004
  .word 0xfca00038
  .word 0x3c030100
  .word 0xfca30070
  .word 0xfca00078
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469B50
asm void FUN_00469b50(int param_1)
{
  .set noreorder
  .word 0x8f85ba48
  .word 0x24030003
  .word 0x00852021
  .word 0x8c870000
  .word 0x8ce40080
  .word 0x1483000a
  .word 0x00000000
  .word 0x8ce6004c
  .word 0x24040080
  .word 0x24030068
  .word 0x0004203c
  .word 0x24050058
  .word 0x00641825
  .word 0x0066280a
  .word 0x10000009
  .word 0xfce50068
  .word 0x8ce6000c
  .word 0x24040080
  .word 0x24030068
  .word 0x0004203c
  .word 0x24050058
  .word 0x00641825
  .word 0x0066280a
  .word 0xfce50028
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00469BC0
asm void FUN_00469bc0(int param_1)
{
  .set noreorder
  .word 0x8f85ba48
  .word 0x24030004
  .word 0x00852021
  .word 0x8c870000
  .word 0x8ce40080
  .word 0x14830003
  .word 0x00000000
  .word 0x10000002
  .word 0x0000182d
  .word 0x24030001
  .word 0x00033180
  .word 0x00e62821
  .word 0x8ca30004
  .word 0x2c610009
  .word 0x10200012
  .word 0x00000000
  .word 0x3c04007c
  .word 0x00031880
  .word 0x2484c8b0
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x1000000a
  .word 0x0000402d
  .word 0x10000008
  .word 0x24080001
  .word 0x10000006
  .word 0x24080002
  .word 0x10000004
  .word 0x24080003
  .word 0x10000002
  .word 0x24080004
  .word 0x24080005
  .word 0x8ca30008
  .word 0x2c610009
  .word 0x10200012
  .word 0x00000000
  .word 0x3c04007c
  .word 0x00031880
  .word 0x2484c880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x1000000a
  .word 0x0000282d
  .word 0x10000008
  .word 0x24050001
  .word 0x10000006
  .word 0x24050002
  .word 0x10000004
  .word 0x24050003
  .word 0x10000002
  .word 0x24050004
  .word 0x24050005
  .word 0x00052040
  .word 0x00c71821
  .word 0x00852021
  .word 0x3c05006b
  .word 0x00043040
  .word 0x24a54eb0
  .word 0x24040080
  .word 0x00a62821
  .word 0x0004203c
  .word 0x01052821
  .word 0x90a50000
  .word 0x00a42025
  .word 0x03e00008
  .word 0xfc640028
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_00469CE0
u32 FUN_00469ce0(void)
{
  return 1;
}
#pragma optimization_level 2

#pragma optimization_level 3
// FUN_00469CF0
u32 FUN_00469cf0(void)
{
  return 1;
}
#pragma optimization_level 2

// FUN_00469D00
asm u64 FUN_00469d00(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0c12685c
  .word 0x0080802d
  .word 0x8c420008
  .word 0x30420080
  .word 0x10400006
  .word 0x00000000
  .word 0x3c020001
  .word 0x0c11aa24
  .word 0x34441010
  .word 0x10000005
  .word 0xae02007c
  .word 0x3c020001
  .word 0x0c11aa24
  .word 0x3444100f
  .word 0xae02007c
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_00469D60
asm u64 FUN_00469d60(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c820018
  .word 0x8c420008
  .word 0x30420080
  .word 0x10400006
  .word 0x0080802d
  .word 0x3c020001
  .word 0x0c11aa24
  .word 0x3444100e
  .word 0x10000005
  .word 0xae02006c
  .word 0x3c020001
  .word 0x0c11aa24
  .word 0x3444100d
  .word 0xae02006c
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}



// FUN_00469dc0 thunk_FUN_004687e0
asm u64 thunk_FUN_004687e0(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x0811a1f8
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba64
  .word 0x0080102d
  .word 0x24630001
  .word 0x03e00008
  .word 0xaf83ba64
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba64
  .word 0x0080102d
  .word 0x2463ffff
  .word 0x03e00008
  .word 0xaf83ba64
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f83ba54
  .word 0x0080102d
  .word 0x00831821
  .word 0xac600000
  .word 0xac600004
  .word 0x03e00008
  .word 0xac600008
  .word 0x00000000
}

// FUN_00469E30
asm u64 FUN_00469e30(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x8ca20018
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8f83ba54
  .word 0x00a32021
  .word 0x02438821
  .word 0x8c830008
  .word 0x10620006
  .word 0x2650004c
  .word 0xae200000
  .word 0xae200004
  .word 0xae200008
  .word 0x10000053
  .word 0x0240102d
  .word 0x8c820000
  .word 0xc4800004
  .word 0xae220000
  .word 0xe6200004
  .word 0xae230008
  .word 0x8e220000
  .word 0x1040fff7
  .word 0x00000000
  .word 0x84420004
  .word 0xa6020004
  .word 0x8e020000
  .word 0x34420003
  .word 0xae020000
  .word 0x8e020000
  .word 0x30420004
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400006
  .word 0x00000000
  .word 0x8e440004
  .word 0x10800003
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x8e220000
  .word 0x84420006
  .word 0xa6020006
  .word 0x8e020000
  .word 0x34420003
  .word 0xae020000
  .word 0x8e020000
  .word 0x30420004
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400006
  .word 0x00000000
  .word 0x8e440004
  .word 0x10800003
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x8e230000
  .word 0x3c023f80
  .word 0x44820800
  .word 0xc4600008
  .word 0xe6000008
  .word 0x8e220000
  .word 0xc4400008
  .word 0x46000803
  .word 0xe600000c
  .word 0x8e020000
  .word 0x34420003
  .word 0xae020000
  .word 0x8e020000
  .word 0x30420004
  .word 0x0002102b
  .word 0x38420001
  .word 0x10400006
  .word 0x00000000
  .word 0x8e440004
  .word 0x10800003
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x00000000
  .word 0xc6200004
  .word 0xe6000010
  .word 0x8e020000
  .word 0x34420003
  .word 0xae020000
  .word 0x8e020000
  .word 0x30420004
  .word 0x0002102b
  .word 0x38420001
  .word 0x1040ffb4
  .word 0x00000000
  .word 0x8e440004
  .word 0x1080ffb1
  .word 0x00000000
  .word 0x0c132c9c
  .word 0x00000000
  .word 0x1000ffad
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

// FUN_00469FE0
asm u64 FUN_00469fe0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82ba58
  .word 0x02228021
  .word 0x8e040008
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000008
  .word 0x0220102d
  .word 0xae000000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046A040
asm u64 FUN_0046a040(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba58
  .word 0x00a28021
  .word 0x8e040000
  .word 0x1c800003
  .word 0x02628821
  .word 0x10000018
  .word 0x0260102d
  .word 0x3c020003
  .word 0x00041880
  .word 0x34450105
  .word 0x00641821
  .word 0x3c020096
  .word 0x00039080
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0240202d
  .word 0xae220008
  .word 0x8e220008
  .word 0x14400003
  .word 0x00000000
  .word 0x10000009
  .word 0x0000102d
  .word 0x8e020000
  .word 0x8e050008
  .word 0xae220000
  .word 0x8e240008
  .word 0x0c148494
  .word 0x0240302d
  .word 0x1000ffe8
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_0046A0F0
asm u64 FUN_0046a0f0(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0080
  .word 0x27a500ac
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba58
  .word 0x0080802d
  .word 0x00c29821
  .word 0x8e620000
  .word 0x24060004
  .word 0x0c1305fc
  .word 0xafa200ac
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa200ac
  .word 0x0002102a
  .word 0x14400005
  .word 0x0000a82d
  .word 0x1000002c
  .word 0x0200102d
  .word 0x1000002a
  .word 0x0000102d
  .word 0x0000a02d
  .word 0x27b20094
  .word 0x27b10098
  .word 0x27b6009c
  .word 0x27b700a0
  .word 0x8e650008
  .word 0x3c026666
  .word 0x34426667
  .word 0x24060014
  .word 0x00b42021
  .word 0x8c830000
  .word 0xafa30090
  .word 0x84830004
  .word 0xae430000
  .word 0x84830006
  .word 0xae230000
  .word 0xc4800008
  .word 0xe6c00000
  .word 0x8c830010
  .word 0x00651823
  .word 0x00430018
  .word 0x00031fc2
  .word 0x00000000
  .word 0x00001010
  .word 0x0200202d
  .word 0x27a50090
  .word 0x000210c3
  .word 0x00431021
  .word 0x0c1314fc
  .word 0xaee20000
  .word 0x14400003
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x8fa200ac
  .word 0x26b50001
  .word 0x02a2102a
  .word 0x1440ffdf
  .word 0x26940014
  .word 0x1000ffd4
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
  .word 0x27bd00b0
}

// FUN_0046A230
asm u64 FUN_0046a230(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0080
  .word 0x27a500ac
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x8f82ba58
  .word 0x0080802d
  .word 0x24060004
  .word 0x0c130644
  .word 0x02229821
  .word 0x10400006
  .word 0x00000000
  .word 0x8fa500ac
  .word 0x1ca00005
  .word 0x00000000
  .word 0x10000040
  .word 0x0200102d
  .word 0x1000003e
  .word 0x0000102d
  .word 0x0c11a91c
  .word 0x0220202d
  .word 0x10400039
  .word 0x00000000
  .word 0x8fa200ac
  .word 0x0002082a
  .word 0x1020fff5
  .word 0x0000a82d
  .word 0x0000a02d
  .word 0x27b20094
  .word 0x27b60098
  .word 0x27b1009c
  .word 0x27b700a0
  .word 0x0200202d
  .word 0x27a50090
  .word 0x0c131494
  .word 0x24060014
  .word 0x24030014
  .word 0x10430003
  .word 0x00000000
  .word 0x10000028
  .word 0x0000102d
  .word 0x3c023f80
  .word 0x8fa30090
  .word 0x44820800
  .word 0x26b50001
  .word 0x8e620008
  .word 0x00541021
  .word 0xac430000
  .word 0x8e620008
  .word 0x8e430000
  .word 0x00541021
  .word 0xa4430004
  .word 0x8e620008
  .word 0x8ec30000
  .word 0x00541021
  .word 0xa4430006
  .word 0x8e620008
  .word 0xc6200000
  .word 0x00541021
  .word 0xe4400008
  .word 0xc6200000
  .word 0x8e620008
  .word 0x46000803
  .word 0x00541021
  .word 0xe440000c
  .word 0x8ee40000
  .word 0x8e650008
  .word 0x00041880
  .word 0x00641821
  .word 0x00b41021
  .word 0x00031880
  .word 0x00a31821
  .word 0xac430010
  .word 0x8fa200ac
  .word 0x02a2102a
  .word 0x1440ffd4
  .word 0x26940014
  .word 0x1000ffc1
  .word 0x00000000
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
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
  .word 0x00000000
  .word 0x8f82ba58
  .word 0x00821021
  .word 0x8c440000
  .word 0x10800007
  .word 0x00000000
  .word 0x00041080
  .word 0x24030004
  .word 0x00441021
  .word 0x00021080
  .word 0x10000002
  .word 0x00621021
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f82ba54
  .word 0x44800800
  .word 0x00821821
  .word 0x8c620000
  .word 0xc4400008
  .word 0x46006001
  .word 0x46010034
  .word 0x45000002
  .word 0x00000000
  .word 0x46000806
  .word 0x8c420010
  .word 0x03e00008
  .word 0xac620000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8f85ba58
  .word 0x0080102d
  .word 0x3c030047
  .word 0x2463a400
  .word 0x00852021
  .word 0xac800000
  .word 0xac800008
  .word 0x03e00008
  .word 0xac830004
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046A470
asm u64 FUN_0046a470(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f82ba58
  .word 0x02628021
  .word 0x8e040008
  .word 0x10800007
  .word 0x00a0902d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000000
  .word 0xae000008
  .word 0x3c020003
  .word 0x00121880
  .word 0x34450105
  .word 0x00721821
  .word 0x3c020096
  .word 0x00038880
  .word 0x8c420178
  .word 0x0040f809
  .word 0x0220202d
  .word 0xae020008
  .word 0x8e020008
  .word 0x14400003
  .word 0x00000000
  .word 0x10000007
  .word 0x0000102d
  .word 0xae120000
  .word 0x0220302d
  .word 0x8e040008
  .word 0x0c148502
  .word 0x0000282d
  .word 0x0260102d
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

// FUN_0046A530
asm u8 FUN_0046a530(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060047
  .word 0x3c070047
  .word 0xffbf0000
  .word 0x0000202d
  .word 0x24050105
  .word 0x24c69dd0
  .word 0x0c132948
  .word 0x24e79df0
  .word 0x04410003
  .word 0x00000000
  .word 0x10000024
  .word 0x0000102d
  .word 0x3c060047
  .word 0x3c080047
  .word 0x24c69e10
  .word 0x2404000c
  .word 0x24050105
  .word 0x25089e30
  .word 0x0c124b0c
  .word 0x00c0382d
  .word 0x04410003
  .word 0xaf82ba54
  .word 0x10000018
  .word 0x0000102d
  .word 0x3c060047
  .word 0x3c070047
  .word 0x3c080047
  .word 0x2404000c
  .word 0x24050105
  .word 0x24c6a440
  .word 0x24e79fe0
  .word 0x0c124f14
  .word 0x2508a040
  .word 0x04410003
  .word 0xaf82ba58
  .word 0x1000000b
  .word 0x0000102d
  .word 0x3c050047
  .word 0x3c060047
  .word 0x3c070047
  .word 0x24040105
  .word 0x24a5a230
  .word 0x24c6a0f0
  .word 0x0c124f20
  .word 0x24e7a3c0
  .word 0x0040102a
  .word 0x38420001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_0046A600
asm u64 FUN_0046a600(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c020096
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8c42c448
  .word 0x10400008
  .word 0x0080802d
  .word 0x3c030096
  .word 0x0200102d
  .word 0x8c64c448
  .word 0x3c030096
  .word 0x24840001
  .word 0x10000006
  .word 0xac64c448
  .word 0x3c040096
  .word 0x0c11ab0c
  .word 0x2484c44c
  .word 0x1000fff5
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_0046A660
asm u64 FUN_0046a660(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c030096
  .word 0xffbf0010
  .word 0x3c020096
  .word 0x7fb00000
  .word 0x8c63c448
  .word 0x0080802d
  .word 0x2463ffff
  .word 0x10600003
  .word 0xac43c448
  .word 0x10000006
  .word 0x0200102d
  .word 0x3c040096
  .word 0x0c11aa78
  .word 0x2484c44c
  .word 0x1000fffa
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma optimization_level 3
// FUN_0046A6C0

u32 FUN_0046a6c0(int param_1,u64 param_2,u64 param_3,u64 param_4)

{
  u32 uVar1;
  
  uVar1 = FUN_0046a890(param_4);
  *(u32 *)(param_1 + 8) = uVar1;
  return 1;
}
#pragma optimization_level 2

#pragma optimization_level 3
// FUN_0046A6F0

u32 FUN_0046a6f0(int param_1,u64 param_2,u64 param_3,u64 param_4)

{
  u32 uVar1;
  
  uVar1 = FUN_0046a890(param_4);
  *(u32 *)(param_1 + 0x6c) = uVar1;
  return 1;
}
#pragma optimization_level 2

#pragma optimization_level 3
// FUN_0046A720

u32 FUN_0046a720(int param_1,u64 param_2,u64 param_3,u64 param_4)

{
  u32 uVar1;
  
  uVar1 = FUN_0046a890(param_4);
  *(u32 *)(param_1 + 0x7c) = uVar1;
  return 1;
}
#pragma optimization_level 2

// FUN_0046A750
asm u32 FUN_0046a750(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x3c040096
  .word 0x0200282d
  .word 0x0c11aa5c
  .word 0x2484c44c
  .word 0x3c020096
  .word 0x3c060047
  .word 0x3c070047
  .word 0x0000202d
  .word 0xac50c45c
  .word 0x24050131
  .word 0x24c6a600
  .word 0x0c132948
  .word 0x24e7a660
  .word 0x3c030096
  .word 0x0000202d
  .word 0xac62c440
  .word 0x24050131
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c12536c
  .word 0x0000402d
  .word 0x0000202d
  .word 0x24050131
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c124b0c
  .word 0x0000402d
  .word 0x0000202d
  .word 0x24050131
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c126494
  .word 0x0000402d
  .word 0x3c050047
  .word 0x24040131
  .word 0x0c125384
  .word 0x24a5a6c0
  .word 0x3c050047
  .word 0x24040131
  .word 0x0c124b38
  .word 0x24a5a6f0
  .word 0x3c050047
  .word 0x24040131
  .word 0x0c1264b4
  .word 0x24a5a720
  .word 0xdfbf0010
  .word 0x24020001
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046A830
asm u64 FUN_0046a830(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x3c040096
  .word 0x2484c44c
  .word 0x8c820000
  .word 0x10400005
  .word 0x00000000
  .word 0x0c11aaa0
  .word 0x0200282d
  .word 0x10000006
  .word 0x0200102d
  .word 0x3c020096
  .word 0x0c11aa5c
  .word 0x8c45c45c
  .word 0x1000fff8
  .word 0x0040202d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046A890
asm u32 FUN_0046a890(u64 param_1)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x0080282d
  .word 0x3c040096
  .word 0xffbf0000
  .word 0x0c11ab48
  .word 0x2484c44c
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x8c420010
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046A8D0
asm void FUN_0046a8d0(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24030002
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c84000c
  .word 0x1483001d
  .word 0x00000000
  .word 0x8e060004
  .word 0x10c00018
  .word 0x8e040000
  .word 0x8ca30004
  .word 0x0003082b
  .word 0x1020000c
  .word 0x0000382d
  .word 0x8ca50000
  .word 0x8ca20008
  .word 0x14c20004
  .word 0x00000000
  .word 0x8ca20010
  .word 0x10000005
  .word 0xac820010
  .word 0x24e70001
  .word 0x00e3102b
  .word 0x1440fff7
  .word 0x24a50014
  .word 0x0c11abe8
  .word 0x00000000
  .word 0xae020010
  .word 0x8e040008
  .word 0x8e030010
  .word 0xac640030
  .word 0x10000004
  .word 0xdfbf0010
  .word 0x1000fff7
  .word 0xac800010
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
}

// FUN_0046A970
asm u64 FUN_0046a970(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x10a00003
  .word 0x0080882d
  .word 0x10000002
  .word 0x00a0802d
  .word 0x24100009
  .word 0x3c020104
  .word 0x00101880
  .word 0x34450131
  .word 0x00701821
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00032080
  .word 0xae220000
  .word 0xae300008
  .word 0x0220102d
  .word 0xae200004
  .word 0xae20000c
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_0046A9E0
asm void FUN_0046a9e0(int *param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c820004
  .word 0x0002082b
  .word 0x1020000f
  .word 0x0000882d
  .word 0x0000802d
  .word 0x8e420000
  .word 0x00501021
  .word 0x8c440010
  .word 0x10800003
  .word 0x00000000
  .word 0x0c13cc04
  .word 0x00000000
  .word 0x8e420004
  .word 0x26310001
  .word 0x0222102b
  .word 0x1440fff5
  .word 0x26100014
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x8e440000
  .word 0xae400008
  .word 0xae400004
  .word 0xae400000
  .word 0xae40000c
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046AA80
asm u64 FUN_0046aa80(u64 param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x0000302d
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c840004
  .word 0x0004082b
  .word 0x1020000a
  .word 0x00a0882d
  .word 0x8e450000
  .word 0x8e230008
  .word 0x8ca20008
  .word 0x10620005
  .word 0x00000000
  .word 0x24c60001
  .word 0x00c4102b
  .word 0x1440fffa
  .word 0x24a50014
  .word 0x00c4102b
  .word 0x14400037
  .word 0x00000000
  .word 0x8e420008
  .word 0x1082003d
  .word 0x00000000
  .word 0x8e440004
  .word 0x24830001
  .word 0x00041080
  .word 0x00441021
  .word 0xae430004
  .word 0x00022080
  .word 0x8e430000
  .word 0x8e220008
  .word 0x00648021
  .word 0xae020008
  .word 0x8e22000c
  .word 0xae02000c
  .word 0x8e220000
  .word 0xae020000
  .word 0x8e220004
  .word 0xae020004
  .word 0xae000010
  .word 0x8e42000c
  .word 0x1040001d
  .word 0x00000000
  .word 0x8e03000c
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24040001
  .word 0x10640003
  .word 0x00000000
  .word 0x1000000f
  .word 0x24020131
  .word 0x14640012
  .word 0x00000000
  .word 0x0c11ab60
  .word 0x8e040000
  .word 0xae020010
  .word 0x8e030008
  .word 0x8e020010
  .word 0x1000000b
  .word 0xac430030
  .word 0x0200202d
  .word 0x0c11aa34
  .word 0x0240282d
  .word 0x10000007
  .word 0x0240102d
  .word 0x0c130744
  .word 0xafa20040
  .word 0xafa20044
  .word 0x0c130714
  .word 0x27a40040
  .word 0x0240102d
  .word 0x10000018
  .word 0xdfbf0030
  .word 0x24020131
  .word 0x24040002
  .word 0x0c130744
  .word 0xafa20048
  .word 0xafa2004c
  .word 0x0c130714
  .word 0x27a40048
  .word 0x1000fff5
  .word 0x0000902d
  .word 0x00021840
  .word 0xae430008
  .word 0x3c020104
  .word 0x8e450008
  .word 0x34460131
  .word 0x3c020096
  .word 0x8e440000
  .word 0x8c420180
  .word 0x00051880
  .word 0x00651821
  .word 0x0040f809
  .word 0x00032880
  .word 0x1000ffb7
  .word 0xae420000
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046AC30
asm u64 FUN_0046ac30(u64 param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830004
  .word 0x0003082b
  .word 0x1020000e
  .word 0x0000902d
  .word 0x0000882d
  .word 0x8e630000
  .word 0x24020001
  .word 0x00718021
  .word 0x8e03000c
  .word 0x1062000e
  .word 0x00000000
  .word 0x8e630004
  .word 0x26520001
  .word 0x0243102b
  .word 0x1440fff6
  .word 0x26310014
  .word 0x00000000
  .word 0x0003102b
  .word 0x1440000c
  .word 0x0000802d
  .word 0x24030001
  .word 0x0260102d
  .word 0x10000014
  .word 0xae63000c
  .word 0x0c11ab60
  .word 0x8e040000
  .word 0xae020010
  .word 0x8e030008
  .word 0x8e020010
  .word 0x1000ffed
  .word 0xac430030
  .word 0x0000882d
  .word 0x8e620000
  .word 0x0260282d
  .word 0x0c11aa34
  .word 0x00512021
  .word 0x8e620004
  .word 0x26100001
  .word 0x0202102b
  .word 0x1440fff8
  .word 0x26310014
  .word 0x1000ffeb
  .word 0x24030001
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

// FUN_0046AD20
asm int FUN_0046ad20(int *param_1,int param_2)
{
  .set noreorder
  .word 0x8c860004
  .word 0x0006082b
  .word 0x1020000f
  .word 0x0000382d
  .word 0x8c830000
  .word 0x0060202d
  .word 0x8c820008
  .word 0x14a20006
  .word 0x00000000
  .word 0x00071080
  .word 0x00471021
  .word 0x00021080
  .word 0x10000006
  .word 0x00621021
  .word 0x24e70001
  .word 0x00e6102b
  .word 0x1440fff5
  .word 0x24840014
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046AD80
asm u64 FUN_0046ad80(u32 *param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c13cbdc
  .word 0x7fb00000
  .word 0x8e830000
  .word 0x0040a82d
  .word 0x02a0202d
  .word 0xac43002c
  .word 0x8e830004
  .word 0x0c13d190
  .word 0xac430030
  .word 0x0c128fc4
  .word 0x0040802d
  .word 0x0040982d
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0260302d
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x8e650000
  .word 0x0040b02d
  .word 0x02c0202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0040902d
  .word 0x0000882d
  .word 0x0280802d
  .word 0x2e21000a
  .word 0x1020004d
  .word 0x00000000
  .word 0x8e050008
  .word 0x10a0004a
  .word 0x00000000
  .word 0x8e06000c
  .word 0x0c128d70
  .word 0x0240202d
  .word 0x26100008
  .word 0x1000fff5
  .word 0x26310001
  .word 0x00000000
  .word 0x8e85005c
  .word 0x8e860060
  .word 0x8e870064
  .word 0x0c128ea0
  .word 0x0240202d
  .word 0x10000016
  .word 0x02c0202d
  .word 0x8e85005c
  .word 0x8e860060
  .word 0x8e870064
  .word 0x0c128e3c
  .word 0x0240202d
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e85005c
  .word 0x8e860060
  .word 0x0c128f04
  .word 0x0240202d
  .word 0x10000008
  .word 0x00000000
  .word 0x24020131
  .word 0x0000202d
  .word 0x0c130744
  .word 0xafa20088
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x02c0202d
  .word 0x0c13cfe0
  .word 0x00000000
  .word 0x8e650000
  .word 0x0040202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x8e850068
  .word 0x0c128f5c
  .word 0x0040202d
  .word 0x0040802d
  .word 0x8e82006c
  .word 0x8c450000
  .word 0x8c460004
  .word 0x0c128f6c
  .word 0x0200202d
  .word 0x8e860070
  .word 0x0200202d
  .word 0x0c128f8c
  .word 0x24050001
  .word 0x8e860074
  .word 0x0040202d
  .word 0x0c128f8c
  .word 0x24050002
  .word 0x8e860078
  .word 0x0040202d
  .word 0x0c128f8c
  .word 0x24050003
  .word 0x8e86007c
  .word 0x0040202d
  .word 0x0c128f8c
  .word 0x24050004
  .word 0x8e860080
  .word 0x0040202d
  .word 0x0c128f8c
  .word 0x24050005
  .word 0x1000000c
  .word 0x02a0102d
  .word 0x8e830058
  .word 0x2c610007
  .word 0x1020ffcf
  .word 0x00000000
  .word 0x3c04007c
  .word 0x00031880
  .word 0x2484c8e0
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
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
  .word 0x27bd0090
  .word 0x00000000
}

// FUN_0046AFA0
asm u64 FUN_0046afa0(u32 *param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x0c13cbdc
  .word 0x7fb00000
  .word 0x8e430000
  .word 0x0040882d
  .word 0x0220202d
  .word 0xac43002c
  .word 0x8e430004
  .word 0x0c13d190
  .word 0xac430030
  .word 0x0c127fc0
  .word 0x0040802d
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0040802d
  .word 0x0000382d
  .word 0x0c13d254
  .word 0x0200302d
  .word 0x0c13cfe0
  .word 0x0040202d
  .word 0x8e050000
  .word 0x0040202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x8e460008
  .word 0x0040202d
  .word 0x0c127f90
  .word 0x24050001
  .word 0x8e46000c
  .word 0x0040202d
  .word 0x0c127f90
  .word 0x24050002
  .word 0x8e450010
  .word 0x0c127fb0
  .word 0x0040202d
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_0046B060
asm int FUN_0046b060(int param_1,u32 *param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x1260002d
  .word 0x7fb00000
  .word 0x3c020096
  .word 0x8cd10008
  .word 0x94500078
  .word 0x8f82ba74
  .word 0x1222002b
  .word 0x00000000
  .word 0x0c132cbc
  .word 0x0260202d
  .word 0x92240000
  .word 0x240300ff
  .word 0x1083002d
  .word 0x00000000
  .word 0x0040282d
  .word 0x0c130ca8
  .word 0x27a40050
  .word 0x0c132cbc
  .word 0x8e240004
  .word 0x3c040096
  .word 0x0040282d
  .word 0x2484c460
  .word 0x0c130bcc
  .word 0x27a60050
  .word 0x3c020096
  .word 0x24030003
  .word 0x8c42c46c
  .word 0x30420003
  .word 0x14430023
  .word 0x00000000
  .word 0xaf91ba74
  .word 0xff90ba78
  .word 0xaf93ba70
  .word 0x3c050096
  .word 0x24040008
  .word 0x24a5c460
  .word 0x8ca30000
  .word 0x2484ffff
  .word 0x8ca20004
  .word 0xae430000
  .word 0x24a50008
  .word 0xae420004
  .word 0x1c80fff9
  .word 0x26520008
  .word 0x10000019
  .word 0x0260102d
  .word 0x3c020096
  .word 0x8c420070
  .word 0x1000ffd1
  .word 0x8c530004
  .word 0x8f82ba70
  .word 0x1662ffd4
  .word 0x00000000
  .word 0xdf82ba78
  .word 0x1202ffea
  .word 0x00000000
  .word 0x1000ffcf
  .word 0x00000000
  .word 0x3c040096
  .word 0x0040282d
  .word 0x0c130ca8
  .word 0x2484c460
  .word 0x1000ffd9
  .word 0x00000000
  .word 0x3c040096
  .word 0x2484c460
  .word 0x0c130bec
  .word 0x0080282d
  .word 0x1000ffda
  .word 0xaf91ba74
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
}

// FUN_0046B1B0
asm void FUN_0046b1b0(u32 *param_1,int param_2,u32 *param_3)
{
  .set noreorder
  .word 0x8c880000
  .word 0x8ca50018
  .word 0x8c840004
  .word 0x0004082a
  .word 0x102000d1
  .word 0x0000382d
  .word 0x28810009
  .word 0x142000b2
  .word 0x2483fff8
  .word 0x0080082a
  .word 0x14200007
  .word 0x0000482d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0081082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24090001
  .word 0x112000a7
  .word 0x00000000
  .word 0x950a0000
  .word 0x24e70008
  .word 0x00e3482a
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00000
  .word 0x950a0000
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00004
  .word 0x950a0000
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00008
  .word 0x950a0000
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0000c
  .word 0x950a0002
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00010
  .word 0x950a0002
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00014
  .word 0x950a0002
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00018
  .word 0x950a0002
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0001c
  .word 0x950a0004
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00020
  .word 0x950a0004
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00024
  .word 0x950a0004
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00028
  .word 0x950a0004
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0002c
  .word 0x950a0006
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00030
  .word 0x950a0006
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00034
  .word 0x950a0006
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00038
  .word 0x950a0006
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0003c
  .word 0x950a0008
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00040
  .word 0x950a0008
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00044
  .word 0x950a0008
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00048
  .word 0x950a0008
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0004c
  .word 0x950a000a
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00050
  .word 0x950a000a
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00054
  .word 0x950a000a
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00058
  .word 0x950a000a
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0005c
  .word 0x950a000c
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00060
  .word 0x950a000c
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00064
  .word 0x950a000c
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00068
  .word 0x950a000c
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0006c
  .word 0x950a000e
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400000
  .word 0xe4c00070
  .word 0x950a000e
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400004
  .word 0xe4c00074
  .word 0x950a000e
  .word 0x000a5100
  .word 0x00aa5021
  .word 0xc5400008
  .word 0xe4c00078
  .word 0x950a000e
  .word 0x000a5100
  .word 0x25080010
  .word 0x00aa5021
  .word 0xc540000c
  .word 0xe4c0007c
  .word 0x1520ff5c
  .word 0x24c60080
  .word 0x00000000
  .word 0x00e4082a
  .word 0x1020001a
  .word 0x00000000
  .word 0x95090000
  .word 0x24e70001
  .word 0x00e4182a
  .word 0x00094900
  .word 0x00a94821
  .word 0xc5200000
  .word 0xe4c00000
  .word 0x95090000
  .word 0x00094900
  .word 0x00a94821
  .word 0xc5200004
  .word 0xe4c00004
  .word 0x95090000
  .word 0x00094900
  .word 0x00a94821
  .word 0xc5200008
  .word 0xe4c00008
  .word 0x95090000
  .word 0x00094900
  .word 0x25080002
  .word 0x00a94821
  .word 0xc520000c
  .word 0xe4c0000c
  .word 0x1460ffe8
  .word 0x24c60010
  .word 0x03e00008
  .word 0x00000000
}

// FUN_0046b510
asm void* FUN_0046b510(int param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdfed0
  .word 0x3c030096
  .word 0xffbf0060
  .word 0x3c020096
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x8c63de14
  .word 0x8c51de1c
  .word 0x02431021
  .word 0x8c550000
  .word 0x12a000bd
  .word 0x00000000
  .word 0x8eb40004
  .word 0x8eb30008
  .word 0x0c1228f8
  .word 0x00a0202d
  .word 0x8ea30000
  .word 0x0040802d
  .word 0x30620002
  .word 0x1040004d
  .word 0x00000000
  .word 0x8eb30010
  .word 0xafa000fc
  .word 0x8e440004
  .word 0x0c132cbc
  .word 0xafa000bc
  .word 0x0040282d
  .word 0x0c130ca8
  .word 0x27a400f0
  .word 0x0014082a
  .word 0x102000c4
  .word 0x0000902d
  .word 0x00121100
  .word 0x02621021
  .word 0x0c132cbc
  .word 0x8c44000c
  .word 0x00122980
  .word 0x27a400b0
  .word 0x02051821
  .word 0xd8610000
  .word 0xd8620010
  .word 0xd8630020
  .word 0xd8640030
  .word 0xd8450000
  .word 0xd8460010
  .word 0xd8470020
  .word 0xd8480030
  .word 0x4be129bc
  .word 0x4be130bd
  .word 0x4be13a4a
  .word 0x4be229bc
  .word 0x4be230bd
  .word 0x4be23a8a
  .word 0x4be329bc
  .word 0x4be330bd
  .word 0x4be33aca
  .word 0x4be429bc
  .word 0x4be430bd
  .word 0x4be438be
  .word 0x4be0430b
  .word 0xf8890000
  .word 0xf88a0010
  .word 0xf88b0020
  .word 0xf88c0030
  .word 0x02251021
  .word 0x27a300f0
  .word 0xd8810000
  .word 0xd8820010
  .word 0xd8830020
  .word 0xd8840030
  .word 0xd8650000
  .word 0xd8660010
  .word 0xd8670020
  .word 0xd8680030
  .word 0x4be129bc
  .word 0x4be130bd
  .word 0x4be13a4a
  .word 0x4be229bc
  .word 0x4be230bd
  .word 0x4be23a8a
  .word 0x4be329bc
  .word 0x4be330bd
  .word 0x4be33aca
  .word 0x4be429bc
  .word 0x4be430bd
  .word 0x4be438be
  .word 0x4be0430b
  .word 0xf8490000
  .word 0xf84a0010
  .word 0xf84b0020
  .word 0xf84c0030
  .word 0x26520001
  .word 0x0254102a
  .word 0x1440ffc2
  .word 0x00000000
  .word 0x10000083
  .word 0x00000000
  .word 0x30624000
  .word 0x10400027
  .word 0x00000000
  .word 0x24020040
  .word 0x02820818
  .word 0x02002820
  .word 0x02602020
  .word 0x02201820
  .word 0x00610820
  .word 0xd8a10000
  .word 0xd8a20010
  .word 0xd8a30020
  .word 0xd8a40030
  .word 0xd8850000
  .word 0xd8860010
  .word 0xd8870020
  .word 0xd8880030
  .word 0x4be129bc
  .word 0x4be130bd
  .word 0x4be13a4a
  .word 0x4be229bc
  .word 0x4be230bd
  .word 0x4be23a8a
  .word 0x4be329bc
  .word 0x4be330bd
  .word 0x4be33aca
  .word 0x4be429bc
  .word 0x4be430bd
  .word 0x4be438be
  .word 0x4be0430b
  .word 0xf8690000
  .word 0xf86a0010
  .word 0xf86b0020
  .word 0xf86c0030
  .word 0x20630040
  .word 0x00a22820
  .word 0x00822020
  .word 0x1423ffe3
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0xafa0007c
  .word 0x0c132cbc
  .word 0x8e440004
  .word 0x0040282d
  .word 0x0c130ca8
  .word 0x27a40070
  .word 0x27a30070
  .word 0x24020040
  .word 0x02820818
  .word 0x02003020
  .word 0x02602820
  .word 0x02202020
  .word 0xd86d0000
  .word 0xd86e0010
  .word 0xd86f0020
  .word 0xd8700030
  .word 0x00810820
  .word 0xd8c10000
  .word 0xd8c20010
  .word 0xd8c30020
  .word 0xd8c40030
  .word 0xd8a50000
  .word 0xd8a60010
  .word 0xd8a70020
  .word 0xd8a80030
  .word 0x4be129bc
  .word 0x4be130bd
  .word 0x4be13a4a
  .word 0x4be229bc
  .word 0x4be230bd
  .word 0x4be23a8a
  .word 0x4be329bc
  .word 0x4be330bd
  .word 0x4be33aca
  .word 0x4be429bc
  .word 0x4be430bd
  .word 0x4be438be
  .word 0x4be0430b
  .word 0x4be969bc
  .word 0x4be970bd
  .word 0x4be9784a
  .word 0x4bea69bc
  .word 0x4bea70bd
  .word 0x4bea788a
  .word 0x4beb69bc
  .word 0x4beb70bd
  .word 0x4beb78ca
  .word 0x4bec69bc
  .word 0x4bec70bd
  .word 0x4bec78be
  .word 0x4be0810b
  .word 0xf8810000
  .word 0xf8820010
  .word 0xf8830020
  .word 0xf8840030
  .word 0x20840040
  .word 0x00c23020
  .word 0x00a22820
  .word 0x1424ffd6
  .word 0x00000000
  .word 0x1000001c
  .word 0x00000000
  .word 0x8ca60000
  .word 0x0006082b
  .word 0x10200018
  .word 0x0000402d
  .word 0x3c020002
  .word 0x0220382d
  .word 0x3c053f80
  .word 0x34440003
  .word 0xace50028
  .word 0x25080001
  .word 0xace50014
  .word 0x0106102b
  .word 0xace50000
  .word 0xace00010
  .word 0xace00008
  .word 0xace00004
  .word 0xace00024
  .word 0xace00020
  .word 0xace00018
  .word 0xace00038
  .word 0xace00034
  .word 0xace00030
  .word 0x8ce3000c
  .word 0x00641825
  .word 0xace3000c
  .word 0x1440ffee
  .word 0x24e70040
  .word 0x0220102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0130
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046B8E0
asm u64 FUN_0046b8e0(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020096
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c51de38
  .word 0x8c85000c
  .word 0x8c83002c
  .word 0x3c022aaa
  .word 0x3442aaab
  .word 0x24a40010
  .word 0x00641823
  .word 0x00430018
  .word 0x00031fc2
  .word 0x00000000
  .word 0x00001010
  .word 0x8e300000
  .word 0x0000202d
  .word 0x00021043
  .word 0x00439821
  .word 0x00109080
  .word 0x26540001
  .word 0x0c135674
  .word 0x26850002
  .word 0x1680003a
  .word 0x00000000
  .word 0x324200ff
  .word 0x8e250010
  .word 0x00022400
  .word 0x00133040
  .word 0x3c026c00
  .word 0x8f88bd04
  .word 0x344302bc
  .word 0x3c020100
  .word 0x00831825
  .word 0x34420101
  .word 0x0000202d
  .word 0x70623cc8
  .word 0x00a61821
  .word 0x0000282d
  .word 0x90620000
  .word 0x70a424c8
  .word 0x90650001
  .word 0x70e41cc8
  .word 0x7d030000
  .word 0x25040010
  .word 0x0005082b
  .word 0x00023840
  .word 0x10200032
  .word 0x0000402d
  .word 0x3c090096
  .word 0x8e220014
  .word 0x00471021
  .word 0x90430001
  .word 0x90420000
  .word 0x0003082b
  .word 0x10200026
  .word 0x0000302d
  .word 0x00000000
  .word 0x8d2bde1c
  .word 0x00465021
  .word 0x000a6180
  .word 0x8e2a000c
  .word 0x016c5821
  .word 0x796f0010
  .word 0x796e0020
  .word 0x796d0030
  .word 0x004a5021
  .word 0x01465021
  .word 0x914c0000
  .word 0x24c60001
  .word 0x796b0000
  .word 0x000c6180
  .word 0x00c3502b
  .word 0x008c6021
  .word 0x7d8b0000
  .word 0x7d8f0010
  .word 0x7d8e0020
  .word 0x1540ffec
  .word 0x7d8d0030
  .word 0x1000000f
  .word 0x25080001
  .word 0x00000000
  .word 0x0014183c
  .word 0x0003183e
  .word 0x3c021000
  .word 0x00621825
  .word 0x0000202d
  .word 0x8f82bd04
  .word 0x70831b89
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0x24420010
  .word 0x1000ffbc
  .word 0xaf82bd04
  .word 0x25080001
  .word 0x0105102b
  .word 0x1440ffd1
  .word 0x24e70002
  .word 0x00101180
  .word 0x00821821
  .word 0xaf83bd04
  .word 0x24020001
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

// FUN_0046BAB0
asm long FUN_0046bab0(long param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x12a0006f
  .word 0x7fb00000
  .word 0x8ea2000c
  .word 0x14400007
  .word 0x02a0802d
  .word 0x0c12ae30
  .word 0x00000000
  .word 0x0040802d
  .word 0x02a0282d
  .word 0x0c12af54
  .word 0x0200202d
  .word 0x8e030004
  .word 0x2402ffff
  .word 0x14620005
  .word 0x00000000
  .word 0x0c130824
  .word 0x8e040000
  .word 0x10000002
  .word 0x0040982d
  .word 0x8e130000
  .word 0x8e120004
  .word 0x2402ffff
  .word 0x16420004
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e040000
  .word 0x0040902d
  .word 0x8e840068
  .word 0x10800055
  .word 0x00000000
  .word 0x8c830050
  .word 0x3062f000
  .word 0x00028b02
  .word 0x30620f00
  .word 0x00021202
  .word 0x14510003
  .word 0x307600ff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x3c100096
  .word 0x8c850000
  .word 0x26100090
  .word 0x8e020000
  .word 0x0040f809
  .word 0x24040001
  .word 0x8e020000
  .word 0x02c0282d
  .word 0x0040f809
  .word 0x24040009
  .word 0x8e020000
  .word 0x0220282d
  .word 0x0040f809
  .word 0x24040002
  .word 0x00121040
  .word 0x3c040096
  .word 0x00521021
  .word 0x3c030096
  .word 0x000228c0
  .word 0x00b32821
  .word 0x3c020096
  .word 0xc4a1fffc
  .word 0xc6a00010
  .word 0xe480efa0
  .word 0xac74ef88
  .word 0x0c13c9c4
  .word 0xe441efa4
  .word 0x3c030096
  .word 0x2647ffd8
  .word 0x18e00033
  .word 0xac73ef98
  .word 0x3c03d20d
  .word 0x24060027
  .word 0x346320d3
  .word 0x00670018
  .word 0x00072fc2
  .word 0x00000000
  .word 0x00002010
  .word 0x3c030096
  .word 0x00872021
  .word 0x00042143
  .word 0x00852021
  .word 0x24840001
  .word 0xac64efc8
  .word 0x00e6001a
  .word 0x00001810
  .word 0x14600004
  .word 0x00000000
  .word 0x2484ffff
  .word 0x3c030096
  .word 0xac64efc8
  .word 0x3c030096
  .word 0x3c070096
  .word 0x8c69efc8
  .word 0x3c040096
  .word 0x24080014
  .word 0x2445000c
  .word 0x02494821
  .word 0x3c030096
  .word 0xace9efc4
  .word 0xa4490000
  .word 0x8c84ed64
  .word 0xac440004
  .word 0xac480008
  .word 0x8c64f040
  .word 0x0c13cb9c
  .word 0x0000302d
  .word 0x10400010
  .word 0x00000000
  .word 0x8ea40014
  .word 0x0c11aeac
  .word 0x0280282d
  .word 0x1000000c
  .word 0x02a0102d
  .word 0x3c020096
  .word 0x24040001
  .word 0x8c420090
  .word 0x0040f809
  .word 0x0000282d
  .word 0x1000ffbf
  .word 0x00121040
  .word 0x3c030096
  .word 0x1000ffe0
  .word 0xac60efc8
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
  .word 0x27bd0080
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046BD00
asm long FUN_0046bd00(long param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdff50
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
  .word 0x12a00087
  .word 0x7fb00000
  .word 0x8ea20008
  .word 0x10400081
  .word 0x00000000
  .word 0x8ea2000c
  .word 0x14400007
  .word 0x02a0982d
  .word 0x0c12ae30
  .word 0x00000000
  .word 0x0040982d
  .word 0x02a0282d
  .word 0x0c12af54
  .word 0x0260202d
  .word 0x8e630004
  .word 0x2402ffff
  .word 0x14620005
  .word 0x00000000
  .word 0x0c130824
  .word 0x8e640000
  .word 0x10000002
  .word 0x0040882d
  .word 0x8e710000
  .word 0x8e620004
  .word 0x2403ffff
  .word 0x14430003
  .word 0x00000000
  .word 0x0c130848
  .word 0x8e640000
  .word 0x2452ffff
  .word 0x2a410003
  .word 0x10200002
  .word 0x00000000
  .word 0x24120003
  .word 0x8e840068
  .word 0x2643ffff
  .word 0x00031040
  .word 0x00431021
  .word 0x000210c0
  .word 0x10800062
  .word 0x0222f021
  .word 0x8c830050
  .word 0x3062f000
  .word 0x0002b302
  .word 0x30620f00
  .word 0x00021202
  .word 0x14560003
  .word 0x307700ff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000b02d
  .word 0x3c100096
  .word 0x8c850000
  .word 0x26100090
  .word 0x8e020000
  .word 0x0040f809
  .word 0x24040001
  .word 0x8e020000
  .word 0x02e0282d
  .word 0x0040f809
  .word 0x24040009
  .word 0x8e020000
  .word 0x02c0282d
  .word 0x0040f809
  .word 0x24040002
  .word 0xc6200004
  .word 0x27b000a8
  .word 0x0260202d
  .word 0x27b600a4
  .word 0x27b300ac
  .word 0x27a500a0
  .word 0xe6000000
  .word 0xe7a000a0
  .word 0xc6200008
  .word 0xe6600000
  .word 0x0c12b008
  .word 0xe6c00000
  .word 0xc6030000
  .word 0x3c0a3f80
  .word 0xc7a400a0
  .word 0x3c020096
  .word 0xc6c10000
  .word 0x3c070096
  .word 0xc6600000
  .word 0x3c090096
  .word 0x448a1000
  .word 0x3c080096
  .word 0x3c060096
  .word 0x3c050096
  .word 0x3c040096
  .word 0x3c030096
  .word 0x460418c1
  .word 0x46010001
  .word 0xe4e1efb0
  .word 0x46031043
  .word 0x46001003
  .word 0xe444efac
  .word 0xe521efbc
  .word 0x3c020096
  .word 0xe500efc0
  .word 0xc6a00010
  .word 0xe4c0efa0
  .word 0xacb4ef88
  .word 0xc6a00010
  .word 0xe480efa0
  .word 0xac4aefa4
  .word 0x0c13c9c4
  .word 0xac74ef88
  .word 0x32430001
  .word 0x10600002
  .word 0x00000000
  .word 0x26520001
  .word 0x3c030096
  .word 0x3c050096
  .word 0xac71ef98
  .word 0x3c040096
  .word 0x3c030096
  .word 0xacb2efc4
  .word 0xac7eef9c
  .word 0x24070014
  .word 0xa4520000
  .word 0x3c030096
  .word 0x8c84ed64
  .word 0x2445000c
  .word 0xac440004
  .word 0xac470008
  .word 0x8c64f050
  .word 0x0c13cb9c
  .word 0x0000302d
  .word 0x14400003
  .word 0x00000000
  .word 0x1000000d
  .word 0x0000102d
  .word 0x8ea40014
  .word 0x0c11af40
  .word 0x0280282d
  .word 0x10000008
  .word 0x02a0102d
  .word 0x3c020096
  .word 0x24040001
  .word 0x8c420090
  .word 0x0040f809
  .word 0x0000282d
  .word 0x1000ffb2
  .word 0xc6200004
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

// FUN_0046BFB0
asm long FUN_0046bfb0(float param_1,long param_2,u8 *param_3,float *param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x0080a82d
  .word 0x7fb30040
  .word 0x00a0a02d
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00e0882d
  .word 0xe7b50004
  .word 0xafa600c8
  .word 0xe7b40000
  .word 0x12a000bf
  .word 0x46006546
  .word 0x128000bd
  .word 0x00000000
  .word 0x0c130824
  .word 0x8ea40134
  .word 0x7fa200b0
  .word 0x8ea20010
  .word 0x30420002
  .word 0x10400005
  .word 0x00000000
  .word 0x241e0002
  .word 0x641000ff
  .word 0x10000004
  .word 0x24160001
  .word 0x241e0001
  .word 0x0000802d
  .word 0x0000b02d
  .word 0x0c12aa98
  .word 0x00000000
  .word 0x8fa200c8
  .word 0xc44d0004
  .word 0x0c12ab80
  .word 0xc44c0000
  .word 0x4600ab06
  .word 0x0c12ab68
  .word 0x4600ab46
  .word 0xc6a00008
  .word 0x44806000
  .word 0x0c12ab80
  .word 0x46000347
  .word 0x0c12ab98
  .word 0x00000000
  .word 0x3c023f80
  .word 0x02a0202d
  .word 0x44826000
  .word 0x0c12a558
  .word 0x0280282d
  .word 0x3c020096
  .word 0xac40efa0
  .word 0x4480a000
  .word 0x3c020096
  .word 0xac51ef88
  .word 0x3c020096
  .word 0xe440efa4
  .word 0x3c020096
  .word 0x0c13c9c4
  .word 0xac55ef8c
  .word 0x3c030096
  .word 0x92860000
  .word 0x8c69ed64
  .word 0x24080014
  .word 0x321700ff
  .word 0x0040882d
  .word 0x3c050096
  .word 0x3c040096
  .word 0x0000982d
  .word 0x02961821
  .word 0x90670000
  .word 0xac490004
  .word 0x0000182d
  .word 0xac480008
  .word 0x02e71024
  .word 0xaca0efa8
  .word 0x00021200
  .word 0x00c22825
  .word 0x18a0005a
  .word 0xac94ef94
  .word 0x3c100096
  .word 0x26100090
  .word 0x28a20080
  .word 0x1440000f
  .word 0x00000000
  .word 0x8ea20124
  .word 0x00a22023
  .word 0x04800069
  .word 0x00000000
  .word 0x8ea20128
  .word 0x0082082a
  .word 0x10200065
  .word 0x00000000
  .word 0x8ea2012c
  .word 0x00042040
  .word 0x00441021
  .word 0x10000006
  .word 0x84420000
  .word 0x00000000
  .word 0x00051040
  .word 0x02a21021
  .word 0x84420024
  .word 0x00000000
  .word 0x04400035
  .word 0x00000000
  .word 0x00022140
  .word 0x7ba200b0
  .word 0x00449021
  .word 0x8e420004
  .word 0x1043002b
  .word 0x00000000
  .word 0x1060001d
  .word 0x00000000
  .word 0x3c022aaa
  .word 0x3442aaab
  .word 0x00530018
  .word 0x00133fc2
  .word 0x00000000
  .word 0x00003010
  .word 0x3c030096
  .word 0xac73efc4
  .word 0x3c040096
  .word 0x3c020096
  .word 0x2625000c
  .word 0x00061843
  .word 0x00671821
  .word 0xac83efc8
  .word 0xa6330000
  .word 0x8c44f048
  .word 0x0c13cb9c
  .word 0x0000302d
  .word 0x1040003f
  .word 0x00000000
  .word 0x3c020096
  .word 0x0014183c
  .word 0xe454efa8
  .word 0x0003183f
  .word 0x3c020096
  .word 0x0000982d
  .word 0xac43ef94
  .word 0x00000000
  .word 0x8e430004
  .word 0x8e020000
  .word 0x90650050
  .word 0x0040f809
  .word 0x24040009
  .word 0x8e430004
  .word 0x8e020000
  .word 0x8c650000
  .word 0x0040f809
  .word 0x24040001
  .word 0x8e430004
  .word 0x00000000
  .word 0xc6410000
  .word 0xc6a0000c
  .word 0x46000800
  .word 0x4600a500
  .word 0x0014103c
  .word 0x0002103f
  .word 0x005ea021
  .word 0x02d42021
  .word 0x92820000
  .word 0x90840000
  .word 0x02e42024
  .word 0x00042200
  .word 0x00442825
  .word 0x1ca0ffab
  .word 0x26730001
  .word 0x00000000
  .word 0x1a60001b
  .word 0x00000000
  .word 0x3c022aaa
  .word 0x3442aaab
  .word 0x00530018
  .word 0x00133fc2
  .word 0x00000000
  .word 0x00003010
  .word 0x3c030096
  .word 0xac73efc4
  .word 0x3c040096
  .word 0x3c020096
  .word 0x2625000c
  .word 0x00061843
  .word 0x00671821
  .word 0xac83efc8
  .word 0xa6330000
  .word 0x8c44f048
  .word 0x0c13cb9c
  .word 0x0000302d
  .word 0x14400007
  .word 0x00000000
  .word 0x1000000d
  .word 0x0000102d
  .word 0x1000ffa5
  .word 0x2402ffff
  .word 0x10000009
  .word 0x0000102d
  .word 0x8fa200c8
  .word 0x44800000
  .word 0xc4410000
  .word 0x46010018
  .word 0x4615a01c
  .word 0x0c12ab54
  .word 0xe4400000
  .word 0x02a0102d
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
  .word 0x27bd00d0
}

// FUN_0046C330
asm u64 FUN_0046c330(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x0000202d
  .word 0x00101080
  .word 0x00509021
  .word 0x0c135674
  .word 0x26450002
  .word 0x26430001
  .word 0x8f86bd04
  .word 0x00031400
  .word 0x0010082b
  .word 0x0002203c
  .word 0x0003183c
  .word 0x0004203e
  .word 0x3c026c00
  .word 0x00822025
  .word 0x0003183e
  .word 0x348502ff
  .word 0x3c020100
  .word 0x34440404
  .word 0x0005283c
  .word 0x3c021000
  .word 0x00a42025
  .word 0x00621025
  .word 0x0000282d
  .word 0x70821389
  .word 0x7cc20000
  .word 0x0000182d
  .word 0x0010103c
  .word 0x24c40020
  .word 0x0002103e
  .word 0x70621389
  .word 0x10200070
  .word 0x7cc20010
  .word 0x2e010009
  .word 0x14200057
  .word 0x2602fff8
  .word 0x0220182d
  .word 0x78670000
  .word 0x24a50008
  .word 0x00a2302b
  .word 0x7c870000
  .word 0x78670010
  .word 0x7c870010
  .word 0x78670020
  .word 0x7c870020
  .word 0x78670030
  .word 0x7c870030
  .word 0x78670040
  .word 0x7c870040
  .word 0x78670050
  .word 0x7c870050
  .word 0x78670060
  .word 0x7c870060
  .word 0x78670070
  .word 0x7c870070
  .word 0x78670080
  .word 0x7c870080
  .word 0x78670090
  .word 0x7c870090
  .word 0x786700a0
  .word 0x7c8700a0
  .word 0x786700b0
  .word 0x7c8700b0
  .word 0x786700c0
  .word 0x7c8700c0
  .word 0x786700d0
  .word 0x7c8700d0
  .word 0x786700e0
  .word 0x7c8700e0
  .word 0x786700f0
  .word 0x7c8700f0
  .word 0x78670100
  .word 0x7c870100
  .word 0x78670110
  .word 0x7c870110
  .word 0x78670120
  .word 0x7c870120
  .word 0x78670130
  .word 0x7c870130
  .word 0x78670140
  .word 0x7c870140
  .word 0x78670150
  .word 0x7c870150
  .word 0x78670160
  .word 0x7c870160
  .word 0x78670170
  .word 0x7c870170
  .word 0x78670180
  .word 0x7c870180
  .word 0x78670190
  .word 0x7c870190
  .word 0x786701a0
  .word 0x7c8701a0
  .word 0x786701b0
  .word 0x7c8701b0
  .word 0x786701c0
  .word 0x7c8701c0
  .word 0x786701d0
  .word 0x7c8701d0
  .word 0x786701e0
  .word 0x7c8701e0
  .word 0x786701f0
  .word 0x7c8701f0
  .word 0x78670200
  .word 0x7c870200
  .word 0x78670210
  .word 0x7c870210
  .word 0x78670220
  .word 0x7c870220
  .word 0x78670230
  .word 0x7c870230
  .word 0x78670240
  .word 0x7c870240
  .word 0x78670250
  .word 0x7c870250
  .word 0x78670260
  .word 0x7c870260
  .word 0x78670270
  .word 0x7c870270
  .word 0x24630280
  .word 0x14c0ffac
  .word 0x24840280
  .word 0x00b0082b
  .word 0x10200014
  .word 0x00000000
  .word 0x00051080
  .word 0x00451021
  .word 0x00021100
  .word 0x02223021
  .word 0x78c30000
  .word 0x24a50001
  .word 0x00b0102b
  .word 0x7c830000
  .word 0x78c30010
  .word 0x7c830010
  .word 0x78c30020
  .word 0x7c830020
  .word 0x78c30030
  .word 0x7c830030
  .word 0x78c30040
  .word 0x7c830040
  .word 0x24c60050
  .word 0x1440fff2
  .word 0x24840050
  .word 0xaf84bd04
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046C5B0
asm u64 FUN_0046c5b0(int param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0030
  .word 0x27a50040
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c83002c
  .word 0x0080802d
  .word 0x8f82ba48
  .word 0x0200302d
  .word 0x8c710008
  .word 0x02221021
  .word 0x8c420000
  .word 0xc441000c
  .word 0x8c520004
  .word 0xc4400010
  .word 0x8c440000
  .word 0x46000802
  .word 0x0c11ac18
  .word 0xe7a0008c
  .word 0x3c020096
  .word 0x8c420070
  .word 0xc780ae44
  .word 0xc4420084
  .word 0x46001032
  .word 0x45010009
  .word 0x00000000
  .word 0xc4410080
  .word 0xe782ae44
  .word 0x46011041
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010003
  .word 0xe780ae40
  .word 0x12400196
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x0c13c3cc
  .word 0x8e440000
  .word 0xae120040
  .word 0x8e110040
  .word 0x12200002
  .word 0x0000902d
  .word 0x8e320000
  .word 0xaf80bdc8
  .word 0x1240000c
  .word 0x0000102d
  .word 0x92430023
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
  .word 0x12420187
  .word 0x00000000
  .word 0x1240017c
  .word 0x00000000
  .word 0xdf82b0d0
  .word 0x0240202d
  .word 0x0000282d
  .word 0x34420010
  .word 0x0c13c408
  .word 0xff82b0d0
  .word 0x1220017d
  .word 0xaf92bdcc
  .word 0x0c127294
  .word 0x92240050
  .word 0xff80bd68
  .word 0x24020003
  .word 0x8e230050
  .word 0x30630f00
  .word 0x00031a02
  .word 0x10620170
  .word 0x00000000
  .word 0x8e230050
  .word 0x24020003
  .word 0x3063f000
  .word 0x00031b02
  .word 0x1462016e
  .word 0x00000000
  .word 0xdf82bd68
  .word 0x34420004
  .word 0x1000016a
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
  .word 0x24050021
  .word 0x3c021000
  .word 0x9f87ae44
  .word 0x0000202d
  .word 0x3443001a
  .word 0x70834b89
  .word 0x8f88bd04
  .word 0x0002303c
  .word 0x3c036c0a
  .word 0x3c020100
  .word 0x346403bc
  .word 0x34430101
  .word 0x9f85ae40
  .word 0x708354c8
  .word 0x7d090000
  .word 0x34440404
  .word 0x0000482d
  .word 0x0000402d
  .word 0x9fa3008c
  .word 0x712844c8
  .word 0x8f82bd04
  .word 0x714844c8
  .word 0x0007383c
  .word 0x7c480010
  .word 0x00e52825
  .word 0x240b0042
  .word 0x70a31b89
  .word 0x24470010
  .word 0x7c430020
  .word 0x24e500b0
  .word 0x34038002
  .word 0x00668825
  .word 0x2407000e
  .word 0x70f11b89
  .word 0x24060080
  .word 0x7c430030
  .word 0x0006383c
  .word 0x3c080007
  .word 0x24060002
  .word 0x240a0047
  .word 0x00c73025
  .word 0x71663389
  .word 0x7c460040
  .word 0x24060048
  .word 0xdf89bd50
  .word 0x00c73825
  .word 0x3c066c01
  .word 0x34c603fa
  .word 0x0006303c
  .word 0x00862025
  .word 0x01283024
  .word 0x71463389
  .word 0x7c460050
  .word 0x71675b89
  .word 0x7c430060
  .word 0x0000382d
  .word 0x7c4b0070
  .word 0x70872389
  .word 0x7c460080
  .word 0x7ba30040
  .word 0x7c430090
  .word 0x7ba30050
  .word 0x7c4300a0
  .word 0x7ba30060
  .word 0x7c4300b0
  .word 0xaf85bd04
  .word 0x7c4400c0
  .word 0x8f83bd04
  .word 0x8f82bdc8
  .word 0x24650010
  .word 0xaf85bd04
  .word 0x92030047
  .word 0x386300ff
  .word 0x0003182b
  .word 0x00621025
  .word 0x10400005
  .word 0xaf83bdc4
  .word 0xdf82b0d0
  .word 0x34420040
  .word 0x10000005
  .word 0xff82b0d0
  .word 0xdf83b0d0
  .word 0x2402ffbf
  .word 0x00621024
  .word 0xff82b0d0
  .word 0x3c020096
  .word 0x92070029
  .word 0xdc4458a0
  .word 0x3c03fc00
  .word 0x0005283c
  .word 0xdf88b0d0
  .word 0x0005283f
  .word 0x0007383c
  .word 0x34627fff
  .word 0x0007383f
  .word 0x0002183c
  .word 0x01073825
  .word 0x3402ffff
  .word 0x00021438
  .word 0x3442ffff
  .word 0x00431825
  .word 0x70031b89
  .word 0x00834824
  .word 0x3c020096
  .word 0x3c036c01
  .word 0xdc4658a8
  .word 0x346403fb
  .word 0x3c030100
  .word 0x0004203c
  .word 0x34630404
  .word 0x00642025
  .word 0x0007183c
  .word 0x0003183f
  .word 0x3c020096
  .word 0x306707ff
  .word 0x00073bfc
  .word 0x31030010
  .word 0x01273825
  .word 0x0000402d
  .word 0x70c73389
  .word 0x7c4658a0
  .word 0x70882389
  .word 0x7ca60000
  .word 0x7ca40010
  .word 0x8f82bd04
  .word 0x24450020
  .word 0x10600006
  .word 0xaf85bd04
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
  .word 0x00431825
  .word 0x8f82bd04
  .word 0x70641b89
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0x24450010
  .word 0xaf85bd04
  .word 0xc60c001c
  .word 0x0c1272f4
  .word 0x8e04003c
  .word 0x3c026c03
  .word 0x92040028
  .word 0x344303fd
  .word 0x3c020100
  .word 0x0003183c
  .word 0x34420404
  .word 0x00431025
  .word 0x0000182d
  .word 0x70432b89
  .word 0x8f83bd04
  .word 0x7c650000
  .word 0x8f83be14
  .word 0x10600004
  .word 0x30820007
  .word 0x30430004
  .word 0x10600007
  .word 0x00000000
  .word 0x8f83b0f8
  .word 0x106000b7
  .word 0x00000000
  .word 0x30430004
  .word 0x106000b4
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
  .word 0x24650030
  .word 0xaf85bd04
  .word 0x8f86bdbc
  .word 0x24040003
  .word 0xaf80be0c
  .word 0x10c400af
  .word 0x0000182d
  .word 0x9f86be10
  .word 0x0003203c
  .word 0x0002183c
  .word 0x0004203e
  .word 0x0005103c
  .word 0x0003183e
  .word 0x0002103f
  .word 0x0006283c
  .word 0x00a42025
  .word 0x70831b89
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0x24450010
  .word 0xaf85bd04
  .word 0x8e020040
  .word 0x104000a1
  .word 0x00000000
  .word 0x3c025000
  .word 0x0005303c
  .word 0x34420004
  .word 0x0000182d
  .word 0x0002103c
  .word 0x0006303f
  .word 0x70431389
  .word 0x7cc20000
  .word 0x2405000e
  .word 0x3c021000
  .word 0x24040047
  .word 0x0002183c
  .word 0x34028003
  .word 0x00431025
  .word 0x70a21389
  .word 0x7cc20010
  .word 0x24030014
  .word 0xdf85bd50
  .word 0x24020008
  .word 0x70852389
  .word 0x7cc40020
  .word 0xdf84bd70
  .word 0x70641b89
  .word 0x7cc30030
  .word 0xdf83bd68
  .word 0x70431389
  .word 0x7cc20040
  .word 0x8f82bd04
  .word 0x24450050
  .word 0xaf85bd04
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
  .word 0x00621825
  .word 0x8f82bd04
  .word 0x70a31b89
  .word 0x7c430000
  .word 0x8f82bd04
  .word 0xaf84be08
  .word 0x24450010
  .word 0xaf85bd04
  .word 0x8e060030
  .word 0x3c080200
  .word 0x8e040004
  .word 0x3c070300
  .word 0x8f83bd04
  .word 0x3c055000
  .word 0x3c020001
  .word 0x8cc60000
  .word 0x8c890014
  .word 0x24c40018
  .word 0x01284025
  .word 0x9cc60020
  .word 0x0008403c
  .word 0x01073825
  .word 0x0006303c
  .word 0x00c52825
  .word 0x70e52b89
  .word 0x7c650000
  .word 0x8f83bd04
  .word 0x24650010
  .word 0xaf85bd04
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
  .word 0x14620003
  .word 0x00000000
  .word 0x0c135470
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c135674
  .word 0x24050004
  .word 0x3c025000
  .word 0x0000182d
  .word 0x34420003
  .word 0x0000202d
  .word 0x704344c8
  .word 0x8f86bd04
  .word 0x2402000e
  .word 0x3c031000
  .word 0x70513b89
  .word 0x34620003
  .word 0x24050042
  .word 0x708214c8
  .word 0x710214c8
  .word 0x7cc20000
  .word 0x24040047
  .word 0x7cc70010
  .word 0x24020001
  .word 0xdf83bd78
  .word 0x70a31b89
  .word 0x7cc30020
  .word 0xdf83bd50
  .word 0x70831b89
  .word 0x7cc30030
  .word 0x8f83bd04
  .word 0x24650040
  .word 0x10000038
  .word 0xaf85bd04
  .word 0x1000fe6a
  .word 0x8e320000
  .word 0xdf83b0d0
  .word 0x2402ffef
  .word 0x00621024
  .word 0x1000fe87
  .word 0xff82b0d0
  .word 0xdf82bd68
  .word 0x34420001
  .word 0x1000fe8e
  .word 0xff82bd68
  .word 0x8f82bdc8
  .word 0x1040fe98
  .word 0x00000000
  .word 0x1000fe93
  .word 0xdf82bd50
  .word 0x3c030096
  .word 0x8f85bd04
  .word 0x78645910
  .word 0x3c030096
  .word 0x7ca40010
  .word 0x78635920
  .word 0x7ca30020
  .word 0x8f83bd04
  .word 0x24650030
  .word 0x1000ff4e
  .word 0xaf85bd04
  .word 0x24030020
  .word 0x1000ff50
  .word 0xaf83be0c
  .word 0x0005283c
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
  .word 0x24450050
  .word 0x1000ff66
  .word 0xaf85bd04
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
  .word 0x00000000
}

// FUN_0046CD90 NONMATCHING



u64 FUN_0046cd90(int param_1)

{
  u8 bVar1;
  int *piVar2;
  int *piVar3;
  u32 *puVar4;
  u32 uVar5;
  int iVar6;
  u8 bVar7;
  Vec128 auVar8;
  Vec128 auVar9;
  Vec128 auVar10;
  Vec128 auVar11;
  Vec128 auVar12;
  Vec128 auVar13;
  Vec128 auVar14;
  Vec128 auVar15;
  Vec128 auVar16;
  Vec128 auVar17;
  Vec128 auVar18;
  Vec128 auVar19;
  Vec128 auVar20;
  Vec128 auVar21;
  Vec128 auVar22;
  Vec128 auVar23;
  Vec128 auVar24;
  u32 *puVar25;
  u64 uVar26;
  u32 in_zero_lo;
  u32 in_zero_hi;
  u32 in_zero_udw;
  u32 in_register_0000000c;
  u32 uVar27;
  u64 uVar28;
  u64 extraout_v0_udw;
  Vec128 auVar29;
  Vec128 auVar30;
  Vec128 auVar31;
  Vec128 auVar32;
  u64 extraout_v0_udw_00;
  Vec128 auVar33;
  Vec128 auVar34;
  u64 extraout_v0_udw_01;
  Vec128 auVar35;
  Vec128 auVar36;
  Vec128 auVar37;
  Vec128 auVar38;
  Vec128 auVar39;
  Vec128 auVar40;
  Vec128 auVar41;
  Vec128 auVar42;
  u32 *puVar43;
  u32 uVar44;
  u32 in_v1_udw;
  Vec128 auVar45;
  u64 uVar59;
  Vec128 auVar46;
  Vec128 auVar47;
  Vec128 auVar48;
  Vec128 auVar49;
  Vec128 auVar50;
  Vec128 auVar51;
  Vec128 auVar52;
  Vec128 auVar53;
  Vec128 auVar54;
  Vec128 auVar55;
  Vec128 auVar56;
  Vec128 auVar57;
  Vec128 auVar58;
  u64 in_a0_udw;
  Vec128 auVar60;
  u32 uVar68;
  Vec128 auVar61;
  Vec128 auVar62;
  Vec128 auVar63;
  Vec128 auVar64;
  Vec128 auVar65;
  Vec128 auVar66;
  Vec128 auVar67;
  u64 in_a1_udw;
  Vec128 auVar69;
  Vec128 auVar70;
  Vec128 auVar71;
  u64 uVar76;
  Vec128 auVar72;
  Vec128 auVar73;
  Vec128 auVar74;
  Vec128 auVar75;
  u64 in_a2_udw;
  Vec128 auVar77;
  Vec128 auVar78;
  Vec128 auVar79;
  Vec128 auVar80;
  Vec128 auVar81;
  Vec128 auVar82;
  Vec128 auVar83;
  Vec128 auVar84;
  Vec128 auVar85;
  u64 in_t2_udw;
  Vec128 auVar86;
  Vec128 auVar87;
  Vec128 auVar88;
  Vec128 auVar89;
  Vec128 auVar90;
  u64 in_t4_udw;
  Vec128 auVar91;
  Vec128 auVar92;
  u64 in_t5_udw;
  Vec128 auVar93;
  Vec128 auVar94;
  u64 in_t6_udw;
  u64 in_t7_udw;
  u32 in_s0_udw;
  u32 in_register_0000010c;
  u32 uVar95;
  u32 in_s2_udw;
  u32 in_register_0000012c;
  u32 in_s3_udw;
  u32 in_register_0000013c;
  u32 in_s5_udw;
  u32 in_register_0000015c;
  u32 in_s6_udw;
  u32 in_register_0000016c;
  u32 in_s7_udw;
  u32 in_register_0000017c;
  u32 in_t8_udw;
  u8 auStack_60 [8];
  u32 uStack_58;
  u32 uStack_54;
  u64 uStack_50;
  u32 uStack_48;
  u32 uStack_44;
  u64 uStack_40;
  u32 uStack_38;
  u64 uStack_20;
  u64 uStack_18;
  u64 uStack_10;
  u32 uStack_4;
  
  uVar26 = DAT_007cea30;
  auVar83._0_8_ = (long)(int)auStack_60;
  auVar83._8_8_ = in_a1_udw;
  uVar95 = 0;
  piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 8);
  uVar5 = (u32)DAT_007cea40;
  piVar3 = (int *)*piVar2;
  puVar4 = *(u32 **)((int)piVar2 + DAT_007ce738);
  uStack_4 = puVar4[2];
  piVar2 = (int *)puVar4[1];
  uVar59 = *(u64 *)(puVar4 + 10);
  uVar76 = *(u64 *)(puVar4 + 0xc);
  uVar28 = *(u64 *)(puVar4 + 0xe);
  uStack_10 = 0;
  ((code)FUN_0046b060)(*puVar4,auVar83._0_8_);
  uStack_18 = 0;
  uStack_20 = 0;
  DAT_007ceab8 = 0;
  if ((piVar3 != (int *)0x0) && (((code)FUN_004f0f30)(*piVar3), (*(u8 *)(*piVar3 + 0x23) & 0xf) != 6)) {
    DAT_007ceab8 = 1;
  }
  uVar44 = auVar83._8_8_;
  if (piVar2 != (int *)0x0) {
    ((code)FUN_004f0f30)(*piVar2);
    uVar44 = auVar83._8_8_;
    ((code)FUN_004f1020)(*piVar2,1);
  }
  if (piVar3 != (int *)0x0) {
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar44;
    auVar80._0_8_ = auVar80._0_8_ << 0x40;
    ((code)FUN_004f1020)(*piVar3,0);
    uVar44 = auVar80._8_8_;
  }
  if ((piVar2 != (int *)0x0) && (*(int *)(*piVar2 + DAT_007ceaa8 + 0x58) == 0)) {
    ((code)FUN_004f1020)(*piVar2,1);
  }
  if ((piVar3 != (int *)0x0) && (*(int *)(*piVar3 + DAT_007ceaa8 + 0x58) == 0)) {
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar44;
    auVar84._0_8_ = auVar84._0_8_ << 0x40;
    ((code)FUN_004f1020)(*piVar3,0);
    uVar44 = auVar84._8_8_;
  }
  if (piVar3 == (int *)0x0) {
    DAT_007ceabc = 0;
    DAT_007cddc0 = DAT_007cddc0 & 0xffffffffffffffef;
  }
  else {
    DAT_007cddc0 = DAT_007cddc0 | 0x10;
    DAT_007ceabc = *piVar3;
    ((code)FUN_004f1e20)(*piVar3,(int)&uStack_18 + 4,&uStack_18);
    ((code)FUN_004f1e40)(*piVar3,0x7cea60,(char)piVar3[0x14]);
    DAT_007cea58 = (u32)((piVar3[0x14] & 0xf00U) == 0x300);
    if ((piVar3[0x14] & 0xf000U) == 0x3000) {
      DAT_007cea58 = DAT_007cea58 | 4;
    }
  }
  DAT_007cea40 = DAT_007cea40 | 1;
  if (piVar2 != (int *)0x0) {
    ((code)FUN_004f1e20)(*piVar2,(int)&uStack_20 + 4,&uStack_20);
    ((code)FUN_004f1e40)(*piVar2,&uStack_10,(char)piVar2[0x14]);
    uVar95 = (u32)((piVar2[0x14] & 0xf00U) == 0x300);
    if ((piVar2[0x14] & 0xf000U) == 0x3000) {
      uVar95 = uVar95 | 4;
    }
  }
  if ((((piVar3 != (int *)0x0) && (*(int *)(*piVar3 + 0x14) < 9)) && (piVar2 != (int *)0x0)) &&
     (*(int *)(*piVar2 + 0x14) < 9)) {
    DAT_007ceabc = -1;
  }
  ((code)FUN_004d59d0)(0,0x28);
  puVar4 = (u32 *)(DAT_007ce9f4);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar44;
  auVar53._8_8_ = in_v1_udw;
  auVar53._0_8_ = 0x10000022;
  auVar83 = _pcpyld(auVar21 << 0x40,auVar53);
  auVar91._8_8_ = in_t4_udw;
  auVar91._0_8_ = DAT_006b5150;
  auVar73._8_8_ = uVar44;
  auVar73._0_8_ = 0x6c0b03bc;
  auVar35._8_8_ = extraout_v0_udw_01;
  auVar35._0_8_ = 0x1000101;
  auVar80 = _ppacw(auVar73,auVar35);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar83 + 0));
  puVar4[1] = auVar83._4_4_;
  puVar4[2] = auVar83._8_4_;
  puVar4[3] = auVar83._12_4_;
  puVar25 = (u32 *)(DAT_007ce9f4);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar44;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = in_v1_udw;
  auVar84 = _ppacw(auVar22 << 0x40,auVar23 << 0x40);
  auVar74._8_8_ = uVar44;
  auVar74._0_8_ = 0xe;
  auVar83 = _ppacw(auVar80,auVar84);
  DAT_007ce9f4[4] = (*(u32*)((u8*)&auVar83 + 0));
  DAT_007ce9f4[5] = (*(u32*)((u8*)&auVar83 + 4));
  DAT_007ce9f4[6] = (*(u32*)((u8*)&auVar83 + 8));
  DAT_007ce9f4[7] = (*(u32*)((u8*)&auVar83 + 12));
  auVar54._8_8_ = auVar83._8_8_;
  auVar54._0_8_ = 0x3d;
  auVar81._8_8_ = auVar80._8_8_;
  auVar81._0_8_ = 0x1000000000008002;
  auVar80 = _pcpyld(auVar74,auVar81);
  auVar82._8_4_ = in_s5_udw;
  auVar82._0_8_ = uVar76;
  auVar82._12_4_ = in_register_0000015c;
  auVar83 = _pcpyld(auVar54,auVar82);
  DAT_007ce9f4[8] = (*(u32*)((u8*)&auVar80 + 0));
  DAT_007ce9f4[9] = (*(u32*)((u8*)&auVar80 + 4));
  DAT_007ce9f4[10] = (*(u32*)((u8*)&auVar80 + 8));
  DAT_007ce9f4[0xb] = (*(u32*)((u8*)&auVar80 + 12));
  DAT_007ce9f4[0xc] = (*(u32*)((u8*)&auVar83 + 0));
  DAT_007ce9f4[0xd] = (*(u32*)((u8*)&auVar83 + 4));
  DAT_007ce9f4[0xe] = (*(u32*)((u8*)&auVar83 + 8));
  DAT_007ce9f4[0xf] = (*(u32*)((u8*)&auVar83 + 12));
  auVar36._8_8_ = extraout_v0_udw_01;
  auVar36._0_8_ = 7;
  auVar89._8_8_ = auVar83._8_8_;
  auVar93._8_8_ = in_t5_udw;
  auVar93._0_8_ = DAT_006b5158;
  auVar92._8_4_ = in_s5_udw;
  auVar92._0_8_ = uStack_20;
  auVar92._12_4_ = in_register_0000015c;
  auVar83 = _pcpyld(auVar36,auVar92);
  DAT_007ce9f4[0x10] = (*(u32*)((u8*)&auVar83 + 0));
  DAT_007ce9f4[0x11] = (*(u32*)((u8*)&auVar83 + 4));
  DAT_007ce9f4[0x12] = (*(u32*)((u8*)&auVar83 + 8));
  DAT_007ce9f4[0x13] = (*(u32*)((u8*)&auVar83 + 12));
  DAT_007ce9f4[0x14] = (*(u32*)((u8*)&auVar80 + 0));
  DAT_007ce9f4[0x15] = (*(u32*)((u8*)&auVar80 + 4));
  DAT_007ce9f4[0x16] = (*(u32*)((u8*)&auVar80 + 8));
  DAT_007ce9f4[0x17] = (*(u32*)((u8*)&auVar80 + 12));
  auVar37._8_8_ = auVar83._8_8_;
  auVar37._0_8_ = DAT_007cea50;
  auVar89._0_8_ = 0x50000006;
  auVar94._8_8_ = 0;
  auVar94._0_8_ = in_t8_udw;
  auVar80 = _ppacw(auVar89,auVar94 << 0x40);
  auVar83 = _pcpyld(auVar54,auVar37);
  DAT_007ce9f4[0x18] = (*(u32*)((u8*)&auVar83 + 0));
  DAT_007ce9f4[0x19] = (*(u32*)((u8*)&auVar83 + 4));
  DAT_007ce9f4[0x1a] = (*(u32*)((u8*)&auVar83 + 8));
  DAT_007ce9f4[0x1b] = (*(u32*)((u8*)&auVar83 + 12));
  auVar38._8_8_ = auVar37._8_8_;
  auVar38._0_8_ = 0x1000000000008005;
  auVar55._8_8_ = auVar83._8_8_;
  auVar55._0_8_ = uStack_18;
  auVar92 = _pcpyld(auVar93,auVar91);
  auVar94 = _pcpyld(auVar74,auVar38);
  auVar82 = _ppacw(auVar80,auVar84);
  auVar90._8_4_ = in_s3_udw;
  auVar90._0_8_ = 6;
  auVar90._12_4_ = in_register_0000013c;
  auVar83 = _pcpyld(auVar90,auVar55);
  auVar66._8_8_ = in_a0_udw;
  auVar66._0_8_ = 0x43;
  auVar39._8_8_ = auVar37._8_8_;
  auVar39._0_8_ = 9;
  auVar85._8_4_ = in_s0_udw;
  auVar85._0_8_ = uVar59;
  auVar85._12_4_ = in_register_0000010c;
  auVar90 = _pcpyld(auVar66,auVar85);
  DAT_007ce9f4[0x1c] = (*(u32*)((u8*)&auVar83 + 0));
  DAT_007ce9f4[0x1d] = (*(u32*)((u8*)&auVar83 + 4));
  DAT_007ce9f4[0x1e] = (*(u32*)((u8*)&auVar83 + 8));
  DAT_007ce9f4[0x1f] = (*(u32*)((u8*)&auVar83 + 12));
  auVar10._4_4_ = 0;
  auVar10._0_4_ = uVar95;
  auVar10._8_4_ = in_s2_udw;
  auVar10._12_4_ = in_register_0000012c;
  auVar85 = _pcpyld(auVar39,auVar10);
  auVar67._8_8_ = in_a0_udw;
  auVar67._0_8_ = 0x48;
  auVar56._8_8_ = auVar83._8_8_;
  auVar56._0_8_ = 0x4f;
  auVar11._4_4_ = (int)((u32)uVar28 >> 0x20);
  auVar11._0_4_ = uVar5 & 0x70000 | (u32)uVar28;
  auVar11._8_4_ = in_s6_udw;
  auVar11._12_4_ = in_register_0000016c;
  auVar83 = _pcpyld(auVar67,auVar11);
  auVar12._8_4_ = in_s7_udw;
  auVar12._0_8_ = uVar26;
  auVar12._12_4_ = in_register_0000017c;
  auVar84 = _pcpyld(auVar56,auVar12);
  auVar40._8_8_ = auVar37._8_8_;
  auVar40._0_8_ = 0x15;
  auVar57._8_8_ = auVar56._8_8_;
  auVar57._0_8_ = 0x6c0103fa01000404;
  auVar86._0_8_ =
       (((long)(int)(*(u8 *)(param_1 + 0x28) & 1) << 5 | 600U | (u32)*(u8 *)(param_1 + 0x29))
        << 0xf | 0x30004000) << 0x20;
  auVar86._8_8_ = in_t2_udw;
  auVar9._8_8_ = in_t7_udw;
  auVar9._0_8_ = 0x412;
  auVar80 = _pcpyld(auVar9,auVar86);
  DAT_007ce9f4[0x20] = (*(u32*)((u8*)&auVar80 + 0));
  DAT_007ce9f4[0x21] = (*(u32*)((u8*)&auVar80 + 4));
  DAT_007ce9f4[0x22] = (*(u32*)((u8*)&auVar80 + 8));
  DAT_007ce9f4[0x23] = (*(u32*)((u8*)&auVar80 + 12));
  auVar24._4_4_ = in_register_0000013c;
  auVar24._0_4_ = in_s3_udw;
  auVar24._8_8_ = 0;
  auVar80 = _pcpyld(auVar57,auVar24 << 0x40);
  DAT_007ce9f4[0x24] = (*(u32*)((u8*)&auStack_60 + 0));
  DAT_007ce9f4[0x25] = (*(u32*)((u8*)&auStack_60 + 4));
  DAT_007ce9f4[0x26] = uStack_58;
  DAT_007ce9f4[0x27] = uStack_54;
  auVar87._12_4_ = uStack_44;
  auVar87._8_4_ = uStack_48;
  DAT_007ce9f4[0x28] = (int)uStack_50;
  DAT_007ce9f4[0x29] = (int)((u32)uStack_50 >> 0x20);
  DAT_007ce9f4[0x2a] = uStack_48;
  DAT_007ce9f4[0x2b] = uStack_44;
  auVar87._0_8_ = uStack_40;
  auVar88._4_4_ = uStack_4;
  auVar88._0_4_ = uStack_38;
  auVar88._8_8_ = in_t6_udw;
  auVar88 = _pcpyld(auVar88,auVar87);
  DAT_007ce9f4[0x2c] = (*(u32*)((u8*)&auVar88 + 0));
  DAT_007ce9f4[0x2d] = (*(u32*)((u8*)&auVar88 + 4));
  DAT_007ce9f4[0x2e] = (*(u32*)((u8*)&auVar88 + 8));
  DAT_007ce9f4[0x2f] = (*(u32*)((u8*)&auVar88 + 12));
  DAT_007ce9f4[0x30] = (*(u32*)((u8*)&auVar92 + 0));
  DAT_007ce9f4[0x31] = (*(u32*)((u8*)&auVar92 + 4));
  DAT_007ce9f4[0x32] = (*(u32*)((u8*)&auVar92 + 8));
  DAT_007ce9f4[0x33] = (*(u32*)((u8*)&auVar92 + 12));
  DAT_007ce9f4[0x34] = (*(u32*)((u8*)&auVar82 + 0));
  DAT_007ce9f4[0x35] = (*(u32*)((u8*)&auVar82 + 4));
  DAT_007ce9f4[0x36] = (*(u32*)((u8*)&auVar82 + 8));
  DAT_007ce9f4[0x37] = (*(u32*)((u8*)&auVar82 + 12));
  DAT_007ce9f4[0x38] = (*(u32*)((u8*)&auVar94 + 0));
  DAT_007ce9f4[0x39] = (*(u32*)((u8*)&auVar94 + 4));
  DAT_007ce9f4[0x3a] = (*(u32*)((u8*)&auVar94 + 8));
  DAT_007ce9f4[0x3b] = (*(u32*)((u8*)&auVar94 + 12));
  DAT_007ce9f4[0x3c] = (*(u32*)((u8*)&auVar90 + 0));
  DAT_007ce9f4[0x3d] = (*(u32*)((u8*)&auVar90 + 4));
  DAT_007ce9f4[0x3e] = (*(u32*)((u8*)&auVar90 + 8));
  DAT_007ce9f4[0x3f] = (*(u32*)((u8*)&auVar90 + 12));
  DAT_007ce9f4[0x40] = (*(u32*)((u8*)&auVar85 + 0));
  DAT_007ce9f4[0x41] = (*(u32*)((u8*)&auVar85 + 4));
  DAT_007ce9f4[0x42] = (*(u32*)((u8*)&auVar85 + 8));
  DAT_007ce9f4[0x43] = (*(u32*)((u8*)&auVar85 + 12));
  DAT_007ce9f4[0x44] = (*(u32*)((u8*)&auVar83 + 0));
  DAT_007ce9f4[0x45] = (*(u32*)((u8*)&auVar83 + 4));
  DAT_007ce9f4[0x46] = (*(u32*)((u8*)&auVar83 + 8));
  DAT_007ce9f4[0x47] = (*(u32*)((u8*)&auVar83 + 12));
  auVar75._8_8_ = auVar83._8_8_;
  auVar75._0_8_ = uStack_10;
  auVar83 = _pcpyld(auVar40,auVar75);
  DAT_007ce9f4[0x48] = (*(u32*)((u8*)&auVar83 + 0));
  DAT_007ce9f4[0x49] = (*(u32*)((u8*)&auVar83 + 4));
  DAT_007ce9f4[0x4a] = (*(u32*)((u8*)&auVar83 + 8));
  DAT_007ce9f4[0x4b] = (*(u32*)((u8*)&auVar83 + 12));
  DAT_007ce9f4[0x4c] = (*(u32*)((u8*)&auVar84 + 0));
  DAT_007ce9f4[0x4d] = (*(u32*)((u8*)&auVar84 + 4));
  DAT_007ce9f4[0x4e] = (*(u32*)((u8*)&auVar84 + 8));
  DAT_007ce9f4[0x4f] = (*(u32*)((u8*)&auVar84 + 12));
  puVar4 = (u32 *)(DAT_007ce9f4 + 0x50);
  DAT_007ce9f4 = DAT_007ce9f4 + 0x50;
  *puVar4 = auVar80._0_4_;
  puVar25[0x51] = auVar80._4_4_;
  puVar25[0x52] = auVar80._8_4_;
  puVar25[0x53] = auVar80._12_4_;
  puVar4 = (u32 *)(DAT_007ce9f4);
  auVar45._8_8_ = auVar80._8_8_;
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  bVar7 = *(char *)(param_1 + 0x47) != -1;
  DAT_007ceab4 = (u32)bVar7;
  if (bVar7 || DAT_007ceab8 != 0) {
    DAT_007cddc0 = DAT_007cddc0 | 0x40;
  }
  else {
    DAT_007cddc0 = DAT_007cddc0 & 0xffffffffffffffbf;
  }
  auVar78._8_8_ = auVar82._8_8_;
  auVar60._8_8_ = auVar84._8_8_;
  auVar45._0_8_ = 0xfc007fffffffffff;
  auVar8._4_4_ = in_zero_hi;
  auVar8._0_4_ = in_zero_lo;
  auVar8._8_4_ = in_zero_udw;
  auVar8._12_4_ = in_register_0000000c;
  auVar83 = _pcpyld(auVar8,auVar45);
  uVar59 = auVar83._8_8_;
  auVar77._4_4_ = DAT_009658ac;
  auVar77._0_4_ = DAT_009658a8;
  auVar77._8_8_ = in_a2_udw;
  auVar60._0_8_ = 0x6c0103fb01000404;
  uVar44 = DAT_007cddc0 & 0x10;
  auVar78._0_8_ =
       CONCAT44((*(u32*)((u8*)&DAT_009658a0 + 4)),(u32)DAT_009658a0) & (*(u64*)((u8*)&auVar83 + 0)) |
       ((long)(int)((u32)DAT_007cddc0 | (u32)*(u8 *)(param_1 + 0x29)) & 0x7ffU) << 0x2f;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar85._8_8_;
  auVar80 = _pcpyld(auVar77,auVar78);
  (*(u32*)((u8*)&DAT_009658a0 + 0)) = (*(u32*)((u8*)&auVar80 + 0));
  auVar83 = _pcpyld(auVar60,auVar17 << 0x40);
  (*(u32*)((u8*)&DAT_009658a0 + 4)) = (*(u32*)((u8*)&auVar80 + 4));
  DAT_009658a8 = auVar80._8_4_;
  DAT_009658ac = auVar80._12_4_;
  *DAT_007ce9f4 = (u32)DAT_009658a0;
  puVar4[5] = auVar80._4_4_;
  puVar4[6] = auVar80._8_4_;
  puVar4[7] = auVar80._12_4_;
  puVar4[8] = auVar83._0_4_;
  puVar4[9] = auVar83._4_4_;
  puVar4[10] = auVar83._8_4_;
  puVar4[0xb] = auVar83._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 8;
  uVar68 = auVar83._8_8_;
  if (uVar44 == 0) {
    uVar27 = 0x3b808081;
  }
  else {
    uVar27 = 0x3b011b50;
  }
  ((code)FUN_0049cab0)(uVar27,param_1 + 0x44);
  puVar4 = (u32 *)(DAT_007ce9f4);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar68;
  auVar46._8_8_ = uVar59;
  auVar46._0_8_ = 0x6c0103fc01000404;
  auVar83 = _pcpyld(auVar46,auVar18 << 0x40);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar83 + 0));
  puVar4[1] = auVar83._4_4_;
  puVar4[2] = auVar83._8_4_;
  puVar4[3] = auVar83._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  ((code)FUN_0049cbd0)(*(u32 *)(param_1 + 0x1c),*(u32 *)(param_1 + 0x3c));
  puVar4 = (u32 *)(DAT_007ce9f4);
  bVar1 = *(u8 *)(param_1 + 0x28);
  auVar29._8_8_ = extraout_v0_udw;
  auVar29._0_8_ = 0x6c0303fd01000404;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar83._8_8_;
  auVar84 = _pcpyld(auVar29,auVar19 << 0x40);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar84 + 0));
  puVar4[1] = auVar84._4_4_;
  puVar4[2] = auVar84._8_4_;
  puVar4[3] = auVar84._12_4_;
  auVar80 = _DAT_00965930;
  auVar83 = _DAT_00965910;
  puVar4 = (u32 *)(DAT_007ce9f4);
  uVar44 = (u32)bVar1 & 7;
  auVar69._8_8_ = auVar84._8_8_;
  if (((DAT_007ceb04 == 0) || ((bVar1 & 4) != 0)) && ((DAT_007cdde8 == 0 || ((bVar1 & 4) == 0)))) {
    DAT_007ce9f4[4] = (u32)(DAT_00965910);
    puVar4[5] = auVar83._4_4_;
    puVar4[6] = auVar83._8_4_;
    puVar4[7] = auVar83._12_4_;
    auVar80 = _DAT_00965920;
    puVar4[8] = DAT_00965920;
    puVar4[9] = auVar80._4_4_;
    puVar4[10] = auVar80._8_4_;
    puVar4[0xb] = auVar80._12_4_;
    uVar59 = auVar80._8_8_;
    puVar4 = (u32 *)(DAT_007ce9f4);
  }
  else {
    uVar44 = uVar44 | 8;
    DAT_007ce9f4[4] = (u32)(DAT_00965930);
    puVar4[5] = auVar80._4_4_;
    puVar4[6] = auVar80._8_4_;
    puVar4[7] = auVar80._12_4_;
    auVar83 = _DAT_00965940;
    puVar4[8] = DAT_00965940;
    puVar4[9] = auVar83._4_4_;
    puVar4[10] = auVar83._8_4_;
    puVar4[0xb] = auVar83._12_4_;
    uVar59 = auVar83._8_8_;
    auVar83 = auVar80;
    puVar4 = (u32 *)(DAT_007ce9f4);
  }
  DAT_007ce9f4 = (u32 *)((u32)(puVar4 + 0xc));
  auVar61._8_8_ = auVar83._8_8_;
  DAT_007ceafc = 0;
  uVar68 = 0;
  if (DAT_007ceaac == 3) {
    uVar68 = 0x20;
    DAT_007ceafc = 0x20;
  }
  auVar47._8_8_ = uVar59;
  auVar47._0_8_ = uVar44;
  auVar61._0_8_ = (u32)DAT_007ceb00 << 0x20 | uVar68;
  auVar83 = _pcpyld(auVar61,auVar47);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar83 + 0));
  puVar4[0xd] = auVar83._4_4_;
  puVar4[0xe] = auVar83._8_4_;
  puVar4[0xf] = auVar83._12_4_;
  puVar4 = (u32 *)(DAT_007ce9f4);
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  auVar48._8_8_ = auVar83._8_8_;
  if (*(int *)(param_1 + 0x40) == 0) {
    auVar70._0_8_ = (long)(int)DAT_007ce9f4;
    auVar70._8_8_ = auVar69._8_8_;
    *DAT_007ce9f4 = in_zero_lo;
    puVar4[5] = in_zero_hi;
    puVar4[6] = in_zero_udw;
    puVar4[7] = in_register_0000000c;
    auVar41._8_8_ = extraout_v0_udw;
    auVar41._0_8_ = 0x5000000200000000;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar48._8_8_;
    puVar4[8] = in_zero_lo;
    puVar4[9] = in_zero_hi;
    puVar4[10] = in_zero_udw;
    puVar4[0xb] = in_register_0000000c;
    auVar83 = _pcpyld(auVar41,auVar16 << 0x40);
    puVar4[0xc] = auVar83._0_4_;
    puVar4[0xd] = auVar83._4_4_;
    puVar4[0xe] = auVar83._8_4_;
    puVar4[0xf] = auVar83._12_4_;
    auVar63._8_8_ = auVar61._8_8_;
    auVar63._0_8_ = 0xe;
    auVar42._8_8_ = auVar83._8_8_;
    auVar58._8_8_ = auVar48._8_8_;
    auVar58._0_8_ = 0x1000000000008001;
    auVar83 = _pcpyld(auVar63,auVar58);
    puVar4[0x10] = auVar83._0_4_;
    puVar4[0x11] = auVar83._4_4_;
    puVar4[0x12] = auVar83._8_4_;
    puVar4[0x13] = auVar83._12_4_;
    auVar42._0_8_ = 0x47;
    auVar49._8_8_ = auVar83._8_8_;
    auVar49._0_8_ = DAT_007cea40;
    auVar83 = _pcpyld(auVar42,auVar49);
    puVar4[0x14] = auVar83._0_4_;
    puVar4[0x15] = auVar83._4_4_;
    puVar4[0x16] = auVar83._8_4_;
    puVar4[0x17] = auVar83._12_4_;
  }
  else {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar48._8_8_;
    auVar30._8_8_ = extraout_v0_udw;
    auVar30._0_8_ = 0x5000000400000000;
    auVar83 = _pcpyld(auVar30,auVar13 << 0x40);
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar83 + 0));
    puVar4[5] = auVar83._4_4_;
    puVar4[6] = auVar83._8_4_;
    puVar4[7] = auVar83._12_4_;
    auVar69._0_8_ = 0xe;
    auVar31._8_8_ = auVar83._8_8_;
    auVar62._8_8_ = auVar61._8_8_;
    auVar62._0_8_ = 0x47;
    auVar31._0_8_ = 0x1000000000008003;
    auVar83 = _pcpyld(auVar69,auVar31);
    puVar4[8] = auVar83._0_4_;
    puVar4[9] = auVar83._4_4_;
    puVar4[10] = auVar83._8_4_;
    puVar4[0xb] = auVar83._12_4_;
    auVar48._0_8_ = 0x14;
    auVar70._8_8_ = auVar69._8_8_;
    auVar70._0_8_ = DAT_007cea40;
    auVar32._8_8_ = auVar83._8_8_;
    auVar32._0_8_ = 8;
    auVar83 = _pcpyld(auVar62,auVar70);
    puVar4[0xc] = auVar83._0_4_;
    puVar4[0xd] = auVar83._4_4_;
    puVar4[0xe] = auVar83._8_4_;
    puVar4[0xf] = auVar83._12_4_;
    auVar63._8_8_ = auVar83._8_8_;
    auVar63._0_8_ = DAT_007cea60;
    auVar83 = _pcpyld(auVar48,auVar63);
    puVar4[0x10] = auVar83._0_4_;
    puVar4[0x11] = auVar83._4_4_;
    puVar4[0x12] = auVar83._8_4_;
    puVar4[0x13] = auVar83._12_4_;
    auVar49._8_8_ = auVar83._8_8_;
    auVar49._0_8_ = DAT_007cea58;
    auVar83 = _pcpyld(auVar32,auVar49);
    puVar4[0x14] = auVar83._0_4_;
    puVar4[0x15] = auVar83._4_4_;
    puVar4[0x16] = auVar83._8_4_;
    puVar4[0x17] = auVar83._12_4_;
  }
  DAT_007ce9f4 = DAT_007ce9f4 + 0x14;
  auVar51._8_8_ = auVar49._8_8_;
  *(u8 *)(param_1 + 0x2b) =
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x20) >> 5) |
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x18) >> 2);
  puVar4 = (u32 *)(DAT_007ce9f4);
  uVar59 = auVar63._8_8_;
  puVar43 = (u32 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + (u32)*(u8 *)(param_1 + 0x2b) * 4);
  auVar51._0_8_ = (long)(int)puVar43;
  uVar5 = *puVar43;
  if (DAT_007ceaf8 != uVar5) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar70._8_8_;
    auVar70._0_8_ = auVar14._0_8_ << 0x40;
    auVar50._0_8_ = (u32)uVar5 << 0x20 | 0x50000000;
    auVar50._8_8_ = auVar51._8_8_;
    auVar51 = _pcpyld(auVar70,auVar50);
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar51 + 0));
    puVar4[1] = auVar51._4_4_;
    puVar4[2] = auVar51._8_4_;
    puVar4[3] = auVar51._12_4_;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    DAT_007ceaf8 = uVar5;
  }
  puVar4 = (u32 *)(DAT_007ce9f4);
  auVar79._8_8_ = auVar78._8_8_;
  uVar44 = auVar51._8_8_;
  auVar71._8_8_ = auVar70._8_8_;
  iVar6 = **(int **)(param_1 + 0x30);
  auVar79._0_8_ = ((long)*(int *)(*(int *)(param_1 + 4) + 0x14) | 0x2000000U) << 0x20 | 0x3000000;
  auVar71._0_8_ = (u32)*(u32 *)(iVar6 + 0x20) << 0x20 | 0x50000000;
  auVar83 = _pcpyld(auVar79,auVar71);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar83 + 0));
  puVar4[1] = auVar83._4_4_;
  puVar4[2] = auVar83._8_4_;
  puVar4[3] = auVar83._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
  EI();
  *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
  if (*(int *)(iVar6 + 0x1c) == 1) {
    ((code)FUN_004d51c0)();
  }
  uVar76 = auVar83._8_8_;
  ((code)FUN_004d59d0)(0,3);
  puVar4 = (u32 *)(DAT_007ce9f4);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar44;
  auVar33._8_8_ = extraout_v0_udw_00;
  auVar33._0_8_ = 0x50000002;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = auVar79._8_8_;
  auVar80 = _ppacw(auVar33,auVar20 << 0x40);
  auVar72._8_8_ = uVar76;
  auVar72._0_8_ = 0xe;
  auVar64._8_8_ = uVar59;
  auVar64._0_8_ = 0x10000002;
  auVar83 = _ppacw(auVar15 << 0x40,auVar64);
  auVar83 = _ppacw(auVar80,auVar83);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar83 + 0));
  puVar4[1] = auVar83._4_4_;
  puVar4[2] = auVar83._8_4_;
  puVar4[3] = auVar83._12_4_;
  auVar65._8_8_ = uVar59;
  auVar65._0_8_ = 0x3d;
  auVar34._8_8_ = auVar83._8_8_;
  auVar34._0_8_ = 0x1000000000008001;
  auVar83 = _pcpyld(auVar72,auVar34);
  puVar4[4] = auVar83._0_4_;
  puVar4[5] = auVar83._4_4_;
  puVar4[6] = auVar83._8_4_;
  puVar4[7] = auVar83._12_4_;
  auVar52._8_8_ = uVar44;
  auVar52._0_8_ = DAT_007cea50;
  auVar83 = _pcpyld(auVar65,auVar52);
  puVar4[8] = auVar83._0_4_;
  puVar4[9] = auVar83._4_4_;
  puVar4[10] = auVar83._8_4_;
  puVar4[0xb] = auVar83._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 0xc;
  return 1;
}

// FUN_0046D6F0 NONMATCHING



u64 FUN_0046d6f0(int param_1)

{
  u8 bVar1;
  u32 *puVar2;
  u32 *puVar3;
  int *piVar4;
  u32 uVar5;
  int iVar6;
  u8 bVar7;
  Vec128 auVar8;
  Vec128 auVar9;
  Vec128 auVar10;
  Vec128 auVar11;
  Vec128 auVar12;
  Vec128 auVar13;
  Vec128 auVar14;
  Vec128 auVar15;
  Vec128 auVar16;
  Vec128 auVar17;
  Vec128 auVar18;
  Vec128 auVar19;
  Vec128 auVar20;
  Vec128 auVar21;
  Vec128 auVar22;
  Vec128 auVar23;
  u32 in_zero_lo;
  u32 in_zero_hi;
  u32 in_zero_udw;
  u32 in_register_0000000c;
  u32 uVar24;
  u64 uVar25;
  u64 extraout_v0_udw;
  Vec128 auVar26;
  Vec128 auVar27;
  Vec128 auVar28;
  Vec128 auVar29;
  u64 extraout_v0_udw_00;
  Vec128 auVar30;
  Vec128 auVar31;
  u32 extraout_v0_udw_01;
  Vec128 auVar32;
  Vec128 auVar33;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  Vec128 auVar37;
  Vec128 auVar38;
  u32 *puVar39;
  u32 uVar40;
  u64 in_v1_udw;
  Vec128 auVar41;
  u64 uVar54;
  Vec128 auVar42;
  u64 uVar55;
  Vec128 auVar43;
  Vec128 auVar44;
  Vec128 auVar45;
  Vec128 auVar46;
  Vec128 auVar47;
  Vec128 auVar48;
  Vec128 auVar49;
  Vec128 auVar50;
  Vec128 auVar51;
  Vec128 auVar52;
  Vec128 auVar53;
  u64 in_a0_udw;
  Vec128 auVar56;
  Vec128 auVar57;
  Vec128 auVar58;
  Vec128 auVar59;
  Vec128 auVar60;
  Vec128 auVar61;
  Vec128 auVar62;
  Vec128 auVar63;
  Vec128 auVar64;
  Vec128 auVar65;
  u64 in_a1_udw;
  Vec128 auVar66;
  Vec128 auVar67;
  Vec128 auVar68;
  Vec128 auVar69;
  Vec128 auVar70;
  Vec128 auVar71;
  u64 in_a2_udw;
  Vec128 auVar72;
  Vec128 auVar73;
  u32 uVar79;
  Vec128 auVar74;
  Vec128 auVar75;
  Vec128 auVar76;
  Vec128 auVar77;
  Vec128 auVar78;
  u64 in_a3_udw;
  Vec128 auVar80;
  Vec128 auVar81;
  Vec128 auVar82;
  Vec128 auVar83;
  Vec128 auVar84;
  Vec128 auVar85;
  Vec128 auVar86;
  u32 in_t0_udw;
  Vec128 auVar87;
  Vec128 auVar88;
  Vec128 auVar89;
  Vec128 auVar90;
  Vec128 auVar91;
  Vec128 auVar92;
  Vec128 auVar93;
  Vec128 auVar94;
  Vec128 auVar95;
  Vec128 auVar96;
  u64 in_t5_udw;
  Vec128 auVar97;
  Vec128 auVar98;
  Vec128 auVar99;
  u64 in_t6_udw;
  Vec128 auVar100;
  Vec128 auVar101;
  u64 in_t7_udw;
  Vec128 auVar102;
  Vec128 auVar103;
  Vec128 auVar104;
  Vec128 auVar105;
  u32 uVar106;
  u32 in_s1_udw;
  u32 in_register_0000011c;
  u32 in_s2_udw;
  u32 in_register_0000012c;
  int *piVar107;
  u32 in_s3_udw;
  u32 in_register_0000013c;
  u32 in_s5_udw;
  u32 in_register_0000015c;
  u8 in_s6_qw [16];
  Vec128 auVar108;
  u32 in_s7_udw;
  u32 in_register_0000017c;
  u64 in_t8_udw;
  u64 in_t9_udw;
  u32 in_s8_udw;
  u32 in_register_000001ec;
  float fVar109;
  u8 auStack_a0 [8];
  u32 uStack_98;
  u32 uStack_94;
  u64 uStack_90;
  u32 uStack_88;
  u32 uStack_84;
  u64 uStack_80;
  u32 uStack_78;
  u8 auStack_60 [8];
  u32 uStack_58;
  u32 uStack_54;
  u64 uStack_50;
  u32 uStack_48;
  u32 uStack_44;
  u64 uStack_40;
  u32 uStack_38;
  u32 uStack_34;
  u64 uStack_20;
  u64 uStack_18;
  u64 uStack_10;
  float fStack_8;
  u32 uStack_4;
  
  uVar55 = DAT_007cea30;
  puVar2 = *(u32 **)(*(int *)(param_1 + 0x2c) + 8);
  puVar3 = *(u32 **)((int)puVar2 + DAT_007ce738);
  piVar107 = (int *)puVar3[1];
  fStack_8 = (float)puVar3[3] * (float)puVar3[4];
  if (piVar107 == (int *)0x0) {
    piVar107 = (int *)*puVar2;
  }
  uStack_4 = puVar3[0x12];
  piVar4 = (int *)puVar3[0x11];
  uVar24 = puVar3[0x10];
  uVar54 = *(u64 *)(puVar3 + 0x1a);
  (*(u64*)((u8*)&auVar65 + 8)) = (*(u64*)((u8*)&in_s6_qw + 8));
  auVar65._0_8_ = *(u64 *)(puVar3 + 0x1c);
  uVar106 = 0;
  uVar25 = *(u64 *)(puVar3 + 0x1e);
  uVar5 = (u32)DAT_007cea40;
  uStack_10 = 0;
  ((code)FUN_0046b060)(*puVar3,auStack_60);
  auVar94._0_8_ = (long)(int)auStack_a0;
  auVar94._8_8_ = in_a1_udw;
  ((code)FUN_0046b060)(uVar24,auVar94._0_8_);
  fVar109 = *(float *)(DAT_00960070 + 0x84);
  if (fVar109 != DAT_007cdb3c) {
    DAT_007cdb38 = 1.0 / (fVar109 - *(float *)(DAT_00960070 + 0x80));
    DAT_007cdb3c = fVar109;
  }
  uStack_18 = 0;
  uStack_20 = 0;
  DAT_007ceab8 = 0;
  if ((piVar107 != (int *)0x0) &&
     (((code)FUN_004f0f30)(*piVar107), (*(u8 *)(*piVar107 + 0x23) & 0xf) != 6)) {
    DAT_007ceab8 = 1;
  }
  uVar40 = auVar94._8_8_;
  if (piVar4 != (int *)0x0) {
    ((code)FUN_004f0f30)(*piVar4);
    uVar40 = auVar94._8_8_;
    ((code)FUN_004f1020)(*piVar4,1);
  }
  if (piVar107 != (int *)0x0) {
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar40;
    auVar87._0_8_ = auVar87._0_8_ << 0x40;
    ((code)FUN_004f1020)(*piVar107,0);
    uVar40 = auVar87._8_8_;
  }
  if ((piVar4 != (int *)0x0) && (*(int *)(*piVar4 + DAT_007ceaa8 + 0x58) == 0)) {
    ((code)FUN_004f1020)(*piVar4,1);
  }
  if ((piVar107 != (int *)0x0) && (*(int *)(*piVar107 + DAT_007ceaa8 + 0x58) == 0)) {
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar40;
    auVar84._0_8_ = auVar84._0_8_ << 0x40;
    ((code)FUN_004f1020)(*piVar107,0);
    uVar40 = auVar84._8_8_;
  }
  if (piVar107 == (int *)0x0) {
    DAT_007ceabc = 0;
    DAT_007cddc0 = DAT_007cddc0 & 0xffffffffffffffef;
  }
  else {
    DAT_007cddc0 = DAT_007cddc0 | 0x10;
    DAT_007ceabc = *piVar107;
    ((code)FUN_004f1e20)(*piVar107,(int)&uStack_18 + 4,&uStack_18);
    ((code)FUN_004f1e40)(*piVar107,0x7cea60,(char)piVar107[0x14]);
    DAT_007cea58 = (u32)((piVar107[0x14] & 0xf00U) == 0x300);
    if ((piVar107[0x14] & 0xf000U) == 0x3000) {
      DAT_007cea58 = DAT_007cea58 | 4;
    }
  }
  DAT_007cea40 = DAT_007cea40 | 1;
  if (piVar4 != (int *)0x0) {
    ((code)FUN_004f1e20)(*piVar4,(int)&uStack_20 + 4,&uStack_20);
    ((code)FUN_004f1e40)(*piVar4,&uStack_10,(char)piVar4[0x14]);
    uVar106 = (u32)((piVar4[0x14] & 0xf00U) == 0x300);
    if ((piVar4[0x14] & 0xf000U) == 0x3000) {
      uVar106 = uVar106 | 4;
    }
  }
  if ((((piVar107 != (int *)0x0) && (*(int *)(*piVar107 + 0x14) < 9)) && (piVar4 != (int *)0x0)) &&
     (*(int *)(*piVar4 + 0x14) < 9)) {
    DAT_007ceabc = -1;
  }
  ((code)FUN_004d59d0)(0,0x33);
  puVar2 = (u32 *)(DAT_007ce9f4);
  fVar109 = DAT_007cdb3c;
  auVar108._8_8_ = 0;
  auVar108._0_8_ = uVar40;
  auVar62._8_8_ = in_a0_udw;
  auVar62._0_8_ = 0x1000002b;
  auVar94 = _pcpyld(auVar108 << 0x40,auVar62);
  auVar82._4_4_ = 0;
  auVar82._0_4_ = fStack_8;
  auVar82._8_8_ = in_a3_udw;
  auVar71._8_8_ = uVar40;
  auVar71._0_8_ = 0x6c1403bc;
  auVar63._8_8_ = in_a0_udw;
  auVar63._0_8_ = 0x1000101;
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar94 + 0));
  puVar2[1] = auVar94._4_4_;
  puVar2[2] = auVar94._8_4_;
  puVar2[3] = auVar94._12_4_;
  puVar3 = (u32 *)(DAT_007ce9f4);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = in_t0_udw;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = extraout_v0_udw_01;
  auVar95 = _ppacw(auVar20 << 0x40,auVar21 << 0x40);
  auVar94 = _ppacw(auVar71,auVar63);
  auVar87 = _ppacw(auVar94,auVar95);
  auVar90._8_8_ = auVar94._8_8_;
  auVar32._4_4_ = fVar109;
  auVar32._0_4_ = DAT_007cdb38;
  auVar32._8_8_ = extraout_v0_udw_01;
  auVar97._8_8_ = in_t5_udw;
  auVar97._0_8_ = 0x48;
  auVar102._8_8_ = in_t7_udw;
  auVar102._0_8_ = 0x47;
  auVar94 = _pcpyld(auVar32,auVar82);
  DAT_007ce9f4[4] = (*(u32*)((u8*)&auVar87 + 0));
  DAT_007ce9f4[5] = (*(u32*)((u8*)&auVar87 + 4));
  DAT_007ce9f4[6] = (*(u32*)((u8*)&auVar87 + 8));
  DAT_007ce9f4[7] = (*(u32*)((u8*)&auVar87 + 12));
  DAT_007ce9f4[8] = (*(u32*)((u8*)&auVar94 + 0));
  DAT_007ce9f4[9] = (*(u32*)((u8*)&auVar94 + 4));
  DAT_007ce9f4[10] = (*(u32*)((u8*)&auVar94 + 8));
  DAT_007ce9f4[0xb] = (*(u32*)((u8*)&auVar94 + 12));
  auVar88._8_8_ = auVar87._8_8_;
  auVar33._8_8_ = auVar94._8_8_;
  auVar64._8_8_ = in_a0_udw;
  auVar64._0_8_ = 0xe;
  auVar75._8_8_ = in_a2_udw;
  auVar75._0_8_ = 0x1000000000008004;
  auVar88._0_8_ = 0x1000000000008002;
  auVar33._0_8_ = 0x8000000002;
  auVar94 = _pcpyld(auVar64,auVar75);
  DAT_007ce9f4[0xc] = (*(u32*)((u8*)&auVar94 + 0));
  DAT_007ce9f4[0xd] = (*(u32*)((u8*)&auVar94 + 4));
  DAT_007ce9f4[0xe] = (*(u32*)((u8*)&auVar94 + 8));
  DAT_007ce9f4[0xf] = (*(u32*)((u8*)&auVar94 + 12));
  auVar89._8_4_ = in_s2_udw;
  auVar89._0_8_ = 0x42;
  auVar89._12_4_ = in_register_0000012c;
  auVar94 = _pcpyld(auVar89,auVar33);
  DAT_007ce9f4[0x10] = (*(u32*)((u8*)&auVar94 + 0));
  DAT_007ce9f4[0x11] = (*(u32*)((u8*)&auVar94 + 4));
  DAT_007ce9f4[0x12] = (*(u32*)((u8*)&auVar94 + 8));
  DAT_007ce9f4[0x13] = (*(u32*)((u8*)&auVar94 + 12));
  auVar83._8_8_ = in_a3_udw;
  auVar83._0_8_ = 0x8000000048;
  auVar34._8_8_ = auVar94._8_8_;
  auVar34._0_8_ = 0x3d;
  auVar87 = _pcpyld(auVar34,auVar65);
  auVar101._4_4_ = (int)((u32)uVar25 >> 0x20);
  auVar101._0_4_ = uVar5 & 0x70000 | (u32)uVar25;
  auVar101._8_4_ = in_s7_udw;
  auVar101._12_4_ = in_register_0000017c;
  auVar108 = _pcpyld(auVar97,auVar101);
  auVar91._8_4_ = in_s2_udw;
  auVar91._0_8_ = 0x42;
  auVar91._12_4_ = in_register_0000012c;
  auVar84 = _pcpyld(auVar91,auVar83);
  auVar89 = _pcpyld(auVar64,auVar88);
  auVar90._0_8_ = DAT_007cea40 & 0x70000;
  auVar91 = _pcpyld(auVar102,auVar90);
  auVar103._8_8_ = in_t7_udw;
  auVar103._0_8_ = DAT_006b5168;
  DAT_007ce9f4[0x14] = (*(u32*)((u8*)&auVar91 + 0));
  DAT_007ce9f4[0x15] = (*(u32*)((u8*)&auVar91 + 4));
  DAT_007ce9f4[0x16] = (*(u32*)((u8*)&auVar91 + 8));
  DAT_007ce9f4[0x17] = (*(u32*)((u8*)&auVar91 + 12));
  auVar100._8_8_ = in_t6_udw;
  auVar100._0_8_ = DAT_006b5160;
  auVar99._8_4_ = in_s3_udw;
  auVar99._0_8_ = DAT_007cea50;
  auVar99._12_4_ = in_register_0000013c;
  auVar94 = _pcpyld(auVar34,auVar99);
  DAT_007ce9f4[0x18] = (*(u32*)((u8*)&auVar94 + 0));
  DAT_007ce9f4[0x19] = (*(u32*)((u8*)&auVar94 + 4));
  DAT_007ce9f4[0x1a] = (*(u32*)((u8*)&auVar94 + 8));
  DAT_007ce9f4[0x1b] = (*(u32*)((u8*)&auVar94 + 12));
  auVar35._8_8_ = auVar94._8_8_;
  auVar35._0_8_ = 0x1000000000008005;
  auVar65 = _pcpyld(auVar64,auVar35);
  auVar51._8_8_ = in_v1_udw;
  auVar51._0_8_ = 9;
  auVar98._8_8_ = in_t5_udw;
  auVar98._0_8_ = 0x50000006;
  auVar22._4_4_ = in_register_0000017c;
  auVar22._0_4_ = in_s7_udw;
  auVar22._8_8_ = 0;
  auVar94 = _ppacw(auVar98,auVar22 << 0x40);
  auVar99 = _ppacw(auVar94,auVar95);
  auVar96._8_8_ = auVar95._8_8_;
  auVar96._0_8_ = uStack_18;
  auVar101 = _pcpyld(auVar103,auVar100);
  auVar104._8_8_ = in_t7_udw;
  auVar104._0_8_ = 0x43;
  auVar105._8_4_ = in_s5_udw;
  auVar105._0_8_ = uVar54;
  auVar105._12_4_ = in_register_0000015c;
  auVar94 = _pcpyld(auVar104,auVar105);
  auVar95._4_4_ = 0;
  auVar95._0_4_ = uVar106;
  auVar95._8_4_ = in_s1_udw;
  auVar95._12_4_ = in_register_0000011c;
  auVar105 = _pcpyld(auVar51,auVar95);
  auVar52._8_8_ = in_v1_udw;
  auVar52._0_8_ = 0x15;
  auVar9._8_8_ = in_t8_udw;
  auVar9._0_8_ = 6;
  auVar95 = _pcpyld(auVar9,auVar96);
  DAT_007ce9f4[0x1c] = (*(u32*)((u8*)&auVar95 + 0));
  DAT_007ce9f4[0x1d] = (*(u32*)((u8*)&auVar95 + 4));
  DAT_007ce9f4[0x1e] = (*(u32*)((u8*)&auVar95 + 8));
  DAT_007ce9f4[0x1f] = (*(u32*)((u8*)&auVar95 + 12));
  DAT_007ce9f4[0x20] = (*(u32*)((u8*)&auVar89 + 0));
  DAT_007ce9f4[0x21] = (*(u32*)((u8*)&auVar89 + 4));
  DAT_007ce9f4[0x22] = (*(u32*)((u8*)&auVar89 + 8));
  DAT_007ce9f4[0x23] = (*(u32*)((u8*)&auVar89 + 12));
  DAT_007ce9f4[0x24] = (*(u32*)((u8*)&auVar84 + 0));
  DAT_007ce9f4[0x25] = (*(u32*)((u8*)&auVar84 + 4));
  DAT_007ce9f4[0x26] = (*(u32*)((u8*)&auVar84 + 8));
  DAT_007ce9f4[0x27] = (*(u32*)((u8*)&auVar84 + 12));
  DAT_007ce9f4[0x28] = (*(u32*)((u8*)&auVar91 + 0));
  DAT_007ce9f4[0x29] = (*(u32*)((u8*)&auVar91 + 4));
  DAT_007ce9f4[0x2a] = (*(u32*)((u8*)&auVar91 + 8));
  DAT_007ce9f4[0x2b] = (*(u32*)((u8*)&auVar91 + 12));
  auVar92._8_8_ = auVar91._8_8_;
  auVar92._0_8_ = 0x4f;
  auVar11._8_4_ = in_s8_udw;
  auVar11._0_8_ = uVar55;
  auVar11._12_4_ = in_register_000001ec;
  auVar95 = _pcpyld(auVar92,auVar11);
  auVar93._8_8_ = auVar92._8_8_;
  auVar93._0_8_ = 0x6c0103fa01000404;
  DAT_007ce9f4[0x2c] = (*(u32*)((u8*)&auStack_60 + 0));
  DAT_007ce9f4[0x2d] = (*(u32*)((u8*)&auStack_60 + 4));
  DAT_007ce9f4[0x2e] = uStack_58;
  DAT_007ce9f4[0x2f] = uStack_54;
  auVar23._4_4_ = in_register_0000011c;
  auVar23._0_4_ = in_s1_udw;
  auVar23._8_8_ = 0;
  auVar84 = _pcpyld(auVar93,auVar23 << 0x40);
  DAT_007ce9f4[0x30] = (int)uStack_50;
  DAT_007ce9f4[0x31] = (int)((u32)uStack_50 >> 0x20);
  DAT_007ce9f4[0x32] = uStack_48;
  DAT_007ce9f4[0x33] = uStack_44;
  uVar55 = CONCAT44(uStack_34,uStack_38);
  DAT_007ce9f4[0x34] = (int)uStack_40;
  DAT_007ce9f4[0x35] = (int)((u32)uStack_40 >> 0x20);
  DAT_007ce9f4[0x36] = uStack_38;
  DAT_007ce9f4[0x37] = uStack_34;
  DAT_007ce9f4[0x38] = (*(u32*)((u8*)&auVar89 + 0));
  DAT_007ce9f4[0x39] = (*(u32*)((u8*)&auVar89 + 4));
  DAT_007ce9f4[0x3a] = (*(u32*)((u8*)&auVar89 + 8));
  DAT_007ce9f4[0x3b] = (*(u32*)((u8*)&auVar89 + 12));
  DAT_007ce9f4[0x3c] = (*(u32*)((u8*)&auVar87 + 0));
  DAT_007ce9f4[0x3d] = (*(u32*)((u8*)&auVar87 + 4));
  DAT_007ce9f4[0x3e] = (*(u32*)((u8*)&auVar87 + 8));
  DAT_007ce9f4[0x3f] = (*(u32*)((u8*)&auVar87 + 12));
  auVar76._8_8_ = auVar87._8_8_;
  auVar76._0_8_ = uStack_20;
  auVar10._8_8_ = in_t9_udw;
  auVar10._0_8_ = 7;
  auVar87 = _pcpyld(auVar10,auVar76);
  DAT_007ce9f4[0x40] = (*(u32*)((u8*)&auVar87 + 0));
  DAT_007ce9f4[0x41] = (*(u32*)((u8*)&auVar87 + 4));
  DAT_007ce9f4[0x42] = (*(u32*)((u8*)&auVar87 + 8));
  DAT_007ce9f4[0x43] = (*(u32*)((u8*)&auVar87 + 12));
  auVar77._8_8_ = auVar87._8_8_;
  auVar85._0_8_ =
       (((long)(int)(*(u8 *)(param_1 + 0x28) & 1) << 5 | 600U | (u32)*(u8 *)(param_1 + 0x29))
        << 0xf | 0x30004000) << 0x20;
  auVar85._8_8_ = uVar55;
  auVar77._0_8_ = 0x412;
  auVar87 = _pcpyld(auVar77,auVar85);
  DAT_007ce9f4[0x44] = (*(u32*)((u8*)&auVar87 + 0));
  DAT_007ce9f4[0x45] = (*(u32*)((u8*)&auVar87 + 4));
  DAT_007ce9f4[0x46] = (*(u32*)((u8*)&auVar87 + 8));
  DAT_007ce9f4[0x47] = (*(u32*)((u8*)&auVar87 + 12));
  DAT_007ce9f4[0x48] = (*(u32*)((u8*)&auStack_a0 + 0));
  DAT_007ce9f4[0x49] = (*(u32*)((u8*)&auStack_a0 + 4));
  DAT_007ce9f4[0x4a] = uStack_98;
  DAT_007ce9f4[0x4b] = uStack_94;
  auVar78._12_4_ = uStack_84;
  auVar78._8_4_ = uStack_88;
  DAT_007ce9f4[0x4c] = (int)uStack_90;
  DAT_007ce9f4[0x4d] = (int)((u32)uStack_90 >> 0x20);
  DAT_007ce9f4[0x4e] = uStack_88;
  DAT_007ce9f4[0x4f] = uStack_84;
  auVar78._0_8_ = uStack_80;
  auVar86._4_4_ = uStack_4;
  auVar86._0_4_ = uStack_78;
  auVar86._8_8_ = uVar55;
  auVar87 = _pcpyld(auVar86,auVar78);
  DAT_007ce9f4[0x50] = (*(u32*)((u8*)&auVar87 + 0));
  DAT_007ce9f4[0x51] = (*(u32*)((u8*)&auVar87 + 4));
  DAT_007ce9f4[0x52] = (*(u32*)((u8*)&auVar87 + 8));
  DAT_007ce9f4[0x53] = (*(u32*)((u8*)&auVar87 + 12));
  DAT_007ce9f4[0x54] = (*(u32*)((u8*)&auVar101 + 0));
  DAT_007ce9f4[0x55] = (*(u32*)((u8*)&auVar101 + 4));
  DAT_007ce9f4[0x56] = (*(u32*)((u8*)&auVar101 + 8));
  DAT_007ce9f4[0x57] = (*(u32*)((u8*)&auVar101 + 12));
  DAT_007ce9f4[0x58] = (*(u32*)((u8*)&auVar99 + 0));
  DAT_007ce9f4[0x59] = (*(u32*)((u8*)&auVar99 + 4));
  DAT_007ce9f4[0x5a] = (*(u32*)((u8*)&auVar99 + 8));
  DAT_007ce9f4[0x5b] = (*(u32*)((u8*)&auVar99 + 12));
  DAT_007ce9f4[0x5c] = (*(u32*)((u8*)&auVar65 + 0));
  DAT_007ce9f4[0x5d] = (*(u32*)((u8*)&auVar65 + 4));
  DAT_007ce9f4[0x5e] = (*(u32*)((u8*)&auVar65 + 8));
  DAT_007ce9f4[0x5f] = (*(u32*)((u8*)&auVar65 + 12));
  DAT_007ce9f4[0x60] = (*(u32*)((u8*)&auVar94 + 0));
  DAT_007ce9f4[0x61] = (*(u32*)((u8*)&auVar94 + 4));
  DAT_007ce9f4[0x62] = (*(u32*)((u8*)&auVar94 + 8));
  DAT_007ce9f4[99] = (*(u32*)((u8*)&auVar94 + 12));
  DAT_007ce9f4[100] = (*(u32*)((u8*)&auVar105 + 0));
  DAT_007ce9f4[0x65] = (*(u32*)((u8*)&auVar105 + 4));
  DAT_007ce9f4[0x66] = (*(u32*)((u8*)&auVar105 + 8));
  DAT_007ce9f4[0x67] = (*(u32*)((u8*)&auVar105 + 12));
  DAT_007ce9f4[0x68] = (*(u32*)((u8*)&auVar108 + 0));
  DAT_007ce9f4[0x69] = (*(u32*)((u8*)&auVar108 + 4));
  DAT_007ce9f4[0x6a] = (*(u32*)((u8*)&auVar108 + 8));
  DAT_007ce9f4[0x6b] = (*(u32*)((u8*)&auVar108 + 12));
  auVar36._8_8_ = auVar94._8_8_;
  auVar36._0_8_ = uStack_10;
  auVar94 = _pcpyld(auVar52,auVar36);
  DAT_007ce9f4[0x6c] = (*(u32*)((u8*)&auVar94 + 0));
  DAT_007ce9f4[0x6d] = (*(u32*)((u8*)&auVar94 + 4));
  DAT_007ce9f4[0x6e] = (*(u32*)((u8*)&auVar94 + 8));
  DAT_007ce9f4[0x6f] = (*(u32*)((u8*)&auVar94 + 12));
  DAT_007ce9f4[0x70] = (*(u32*)((u8*)&auVar95 + 0));
  DAT_007ce9f4[0x71] = (*(u32*)((u8*)&auVar95 + 4));
  DAT_007ce9f4[0x72] = (*(u32*)((u8*)&auVar95 + 8));
  DAT_007ce9f4[0x73] = (*(u32*)((u8*)&auVar95 + 12));
  puVar2 = (u32 *)(DAT_007ce9f4 + 0x74);
  DAT_007ce9f4 = DAT_007ce9f4 + 0x74;
  *puVar2 = auVar84._0_4_;
  puVar3[0x75] = auVar84._4_4_;
  puVar3[0x76] = auVar84._8_4_;
  puVar3[0x77] = auVar84._12_4_;
  puVar2 = (u32 *)(DAT_007ce9f4);
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  bVar7 = *(char *)(param_1 + 0x47) != -1;
  DAT_007ceab4 = (u32)bVar7;
  if (bVar7 || DAT_007ceab8 != 0) {
    DAT_007cddc0 = DAT_007cddc0 | 0x40;
  }
  else {
    DAT_007cddc0 = DAT_007cddc0 & 0xffffffffffffffbf;
  }
  auVar56._8_8_ = auVar65._8_8_;
  auVar41._8_8_ = in_v1_udw;
  auVar41._0_8_ = 0xfc007fffffffffff;
  auVar8._4_4_ = in_zero_hi;
  auVar8._0_4_ = in_zero_lo;
  auVar8._8_4_ = in_zero_udw;
  auVar8._12_4_ = in_register_0000000c;
  auVar94 = _pcpyld(auVar8,auVar41);
  uVar54 = auVar94._8_8_;
  auVar72._8_8_ = auVar87._8_8_;
  auVar72._4_4_ = DAT_009658ac;
  auVar72._0_4_ = DAT_009658a8;
  auVar56._0_8_ = 0x6c0103fb01000404;
  uVar40 = DAT_007cddc0 & 0x10;
  auVar80._0_8_ =
       CONCAT44((*(u32*)((u8*)&DAT_009658a0 + 4)),(u32)DAT_009658a0) & (*(u64*)((u8*)&auVar94 + 0)) |
       ((long)(int)((u32)DAT_007cddc0 | (u32)*(u8 *)(param_1 + 0x29)) & 0x7ffU) << 0x2f;
  auVar80._8_8_ = uVar55;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = auVar89._8_8_;
  auVar73 = _pcpyld(auVar72,auVar80);
  (*(u32*)((u8*)&DAT_009658a0 + 0)) = (*(u32*)((u8*)&auVar73 + 0));
  auVar94 = _pcpyld(auVar56,auVar15 << 0x40);
  (*(u32*)((u8*)&DAT_009658a0 + 4)) = (*(u32*)((u8*)&auVar73 + 4));
  DAT_009658a8 = auVar73._8_4_;
  DAT_009658ac = auVar73._12_4_;
  *DAT_007ce9f4 = (u32)DAT_009658a0;
  puVar2[5] = auVar73._4_4_;
  puVar2[6] = auVar73._8_4_;
  puVar2[7] = auVar73._12_4_;
  puVar2[8] = auVar94._0_4_;
  puVar2[9] = auVar94._4_4_;
  puVar2[10] = auVar94._8_4_;
  puVar2[0xb] = auVar94._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 8;
  uVar79 = auVar94._8_8_;
  if (uVar40 == 0) {
    uVar24 = 0x3b808081;
  }
  else {
    uVar24 = 0x3b011b50;
  }
  ((code)FUN_0049cab0)(uVar24,param_1 + 0x44);
  puVar2 = (u32 *)(DAT_007ce9f4);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar79;
  auVar42._8_8_ = uVar54;
  auVar42._0_8_ = 0x6c0103fc01000404;
  auVar94 = _pcpyld(auVar42,auVar16 << 0x40);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar94 + 0));
  puVar2[1] = auVar94._4_4_;
  puVar2[2] = auVar94._8_4_;
  puVar2[3] = auVar94._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  ((code)FUN_0049cbd0)(*(u32 *)(param_1 + 0x1c),*(u32 *)(param_1 + 0x3c));
  puVar2 = (u32 *)(DAT_007ce9f4);
  bVar1 = *(u8 *)(param_1 + 0x28);
  auVar26._8_8_ = extraout_v0_udw;
  auVar26._0_8_ = 0x6c0303fd01000404;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar94._8_8_;
  auVar87 = _pcpyld(auVar26,auVar17 << 0x40);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar87 + 0));
  puVar2[1] = auVar87._4_4_;
  puVar2[2] = auVar87._8_4_;
  puVar2[3] = auVar87._12_4_;
  auVar65 = _DAT_00965930;
  auVar94 = _DAT_00965910;
  puVar2 = (u32 *)(DAT_007ce9f4);
  uVar40 = (u32)bVar1 & 7;
  auVar66._8_8_ = auVar87._8_8_;
  if (((DAT_007ceb04 == 0) || ((bVar1 & 4) != 0)) && ((DAT_007cdde8 == 0 || ((bVar1 & 4) == 0)))) {
    DAT_007ce9f4[4] = (u32)(DAT_00965910);
    puVar2[5] = auVar94._4_4_;
    puVar2[6] = auVar94._8_4_;
    puVar2[7] = auVar94._12_4_;
    auVar65 = _DAT_00965920;
    puVar2[8] = DAT_00965920;
    puVar2[9] = auVar65._4_4_;
    puVar2[10] = auVar65._8_4_;
    puVar2[0xb] = auVar65._12_4_;
    uVar55 = auVar65._8_8_;
    puVar2 = (u32 *)(DAT_007ce9f4);
  }
  else {
    uVar40 = uVar40 | 8;
    DAT_007ce9f4[4] = (u32)(DAT_00965930);
    puVar2[5] = auVar65._4_4_;
    puVar2[6] = auVar65._8_4_;
    puVar2[7] = auVar65._12_4_;
    auVar94 = _DAT_00965940;
    puVar2[8] = DAT_00965940;
    puVar2[9] = auVar94._4_4_;
    puVar2[10] = auVar94._8_4_;
    puVar2[0xb] = auVar94._12_4_;
    uVar55 = auVar94._8_8_;
    auVar94 = auVar65;
    puVar2 = (u32 *)(DAT_007ce9f4);
  }
  DAT_007ce9f4 = (u32 *)((u32)(puVar2 + 0xc));
  auVar57._8_8_ = auVar94._8_8_;
  DAT_007ceafc = 0;
  uVar79 = 0;
  if (DAT_007ceaac == 3) {
    uVar79 = 0x20;
    DAT_007ceafc = 0x20;
  }
  auVar43._8_8_ = uVar55;
  auVar43._0_8_ = uVar40;
  auVar57._0_8_ = (u32)DAT_007ceb00 << 0x20 | uVar79;
  auVar94 = _pcpyld(auVar57,auVar43);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar94 + 0));
  puVar2[0xd] = auVar94._4_4_;
  puVar2[0xe] = auVar94._8_4_;
  puVar2[0xf] = auVar94._12_4_;
  puVar2 = (u32 *)(DAT_007ce9f4);
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  auVar44._8_8_ = auVar94._8_8_;
  if (*(int *)(param_1 + 0x40) == 0) {
    auVar67._0_8_ = (long)(int)DAT_007ce9f4;
    auVar67._8_8_ = auVar66._8_8_;
    *DAT_007ce9f4 = in_zero_lo;
    puVar2[5] = in_zero_hi;
    puVar2[6] = in_zero_udw;
    puVar2[7] = in_register_0000000c;
    auVar37._8_8_ = extraout_v0_udw;
    auVar37._0_8_ = 0x5000000200000000;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar44._8_8_;
    puVar2[8] = in_zero_lo;
    puVar2[9] = in_zero_hi;
    puVar2[10] = in_zero_udw;
    puVar2[0xb] = in_register_0000000c;
    auVar94 = _pcpyld(auVar37,auVar14 << 0x40);
    puVar2[0xc] = auVar94._0_4_;
    puVar2[0xd] = auVar94._4_4_;
    puVar2[0xe] = auVar94._8_4_;
    puVar2[0xf] = auVar94._12_4_;
    auVar59._8_8_ = auVar57._8_8_;
    auVar59._0_8_ = 0xe;
    auVar38._8_8_ = auVar94._8_8_;
    auVar53._8_8_ = auVar44._8_8_;
    auVar53._0_8_ = 0x1000000000008001;
    auVar94 = _pcpyld(auVar59,auVar53);
    puVar2[0x10] = auVar94._0_4_;
    puVar2[0x11] = auVar94._4_4_;
    puVar2[0x12] = auVar94._8_4_;
    puVar2[0x13] = auVar94._12_4_;
    auVar38._0_8_ = 0x47;
    auVar45._8_8_ = auVar94._8_8_;
    auVar45._0_8_ = DAT_007cea40;
    auVar94 = _pcpyld(auVar38,auVar45);
    puVar2[0x14] = auVar94._0_4_;
    puVar2[0x15] = auVar94._4_4_;
    puVar2[0x16] = auVar94._8_4_;
    puVar2[0x17] = auVar94._12_4_;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar44._8_8_;
    auVar27._8_8_ = extraout_v0_udw;
    auVar27._0_8_ = 0x5000000400000000;
    auVar73._0_8_ = (long)(int)DAT_007ce9f4;
    auVar94 = _pcpyld(auVar27,auVar12 << 0x40);
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar94 + 0));
    puVar2[5] = auVar94._4_4_;
    puVar2[6] = auVar94._8_4_;
    puVar2[7] = auVar94._12_4_;
    auVar66._0_8_ = 0xe;
    auVar28._8_8_ = auVar94._8_8_;
    auVar58._8_8_ = auVar57._8_8_;
    auVar58._0_8_ = 0x47;
    auVar28._0_8_ = 0x1000000000008003;
    auVar94 = _pcpyld(auVar66,auVar28);
    puVar2[8] = auVar94._0_4_;
    puVar2[9] = auVar94._4_4_;
    puVar2[10] = auVar94._8_4_;
    puVar2[0xb] = auVar94._12_4_;
    auVar44._0_8_ = 0x14;
    auVar67._8_8_ = auVar66._8_8_;
    auVar67._0_8_ = DAT_007cea40;
    auVar29._8_8_ = auVar94._8_8_;
    auVar29._0_8_ = 8;
    auVar94 = _pcpyld(auVar58,auVar67);
    puVar2[0xc] = auVar94._0_4_;
    puVar2[0xd] = auVar94._4_4_;
    puVar2[0xe] = auVar94._8_4_;
    puVar2[0xf] = auVar94._12_4_;
    auVar59._8_8_ = auVar94._8_8_;
    auVar59._0_8_ = DAT_007cea60;
    auVar94 = _pcpyld(auVar44,auVar59);
    puVar2[0x10] = auVar94._0_4_;
    puVar2[0x11] = auVar94._4_4_;
    puVar2[0x12] = auVar94._8_4_;
    puVar2[0x13] = auVar94._12_4_;
    auVar45._8_8_ = auVar94._8_8_;
    auVar45._0_8_ = DAT_007cea58;
    auVar94 = _pcpyld(auVar29,auVar45);
    puVar2[0x14] = auVar94._0_4_;
    puVar2[0x15] = auVar94._4_4_;
    puVar2[0x16] = auVar94._8_4_;
    puVar2[0x17] = auVar94._12_4_;
  }
  DAT_007ce9f4 = DAT_007ce9f4 + 0x14;
  auVar47._8_8_ = auVar45._8_8_;
  *(u8 *)(param_1 + 0x2b) =
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x20) >> 5) |
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x18) >> 2);
  puVar2 = (u32 *)(DAT_007ce9f4);
  uVar55 = auVar59._8_8_;
  puVar39 = (u32 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + (u32)*(u8 *)(param_1 + 0x2b) * 4);
  auVar47._0_8_ = (long)(int)puVar39;
  uVar5 = *puVar39;
  if (DAT_007ceaf8 != uVar5) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar67._8_8_;
    auVar67._0_8_ = auVar13._0_8_ << 0x40;
    auVar46._0_8_ = (u32)uVar5 << 0x20 | 0x50000000;
    auVar46._8_8_ = auVar47._8_8_;
    auVar47 = _pcpyld(auVar67,auVar46);
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar47 + 0));
    puVar2[1] = auVar47._4_4_;
    puVar2[2] = auVar47._8_4_;
    puVar2[3] = auVar47._12_4_;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    DAT_007ceaf8 = uVar5;
  }
  puVar2 = (u32 *)(DAT_007ce9f4);
  uVar79 = auVar73._8_8_;
  auVar81._8_8_ = auVar80._8_8_;
  uVar40 = auVar47._8_8_;
  auVar68._8_8_ = auVar67._8_8_;
  iVar6 = **(int **)(param_1 + 0x30);
  auVar81._0_8_ = ((long)*(int *)(*(int *)(param_1 + 4) + 0x14) | 0x2000000U) << 0x20 | 0x3000000;
  auVar68._0_8_ = (u32)*(u32 *)(iVar6 + 0x20) << 0x20 | 0x50000000;
  auVar94 = _pcpyld(auVar81,auVar68);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar94 + 0));
  puVar2[1] = auVar94._4_4_;
  puVar2[2] = auVar94._8_4_;
  puVar2[3] = auVar94._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
  EI();
  *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
  if (*(int *)(iVar6 + 0x1c) == 1) {
    ((code)FUN_004d51c0)();
  }
  uVar54 = auVar94._8_8_;
  ((code)FUN_004d59d0)(0,5);
  puVar2 = (u32 *)(DAT_007ce9f4);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar40;
  auVar30._8_8_ = extraout_v0_udw_00;
  auVar30._0_8_ = 0x50000004;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar79;
  auVar65 = _ppacw(auVar30,auVar18 << 0x40);
  auVar60._8_8_ = uVar55;
  auVar60._0_8_ = 0xe;
  auVar69._8_8_ = uVar54;
  auVar69._0_8_ = 0x10000004;
  auVar94 = _ppacw(auVar19 << 0x40,auVar69);
  auVar94 = _ppacw(auVar65,auVar94);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar94 + 0));
  puVar2[1] = auVar94._4_4_;
  puVar2[2] = auVar94._8_4_;
  puVar2[3] = auVar94._12_4_;
  auVar74._8_8_ = uVar79;
  auVar74._0_8_ = 0x42;
  auVar31._8_8_ = auVar94._8_8_;
  auVar70._8_8_ = uVar54;
  auVar70._0_8_ = 0x47;
  auVar31._0_8_ = 0x1000000000008003;
  auVar94 = _pcpyld(auVar60,auVar31);
  puVar2[4] = auVar94._0_4_;
  puVar2[5] = auVar94._4_4_;
  puVar2[6] = auVar94._8_4_;
  puVar2[7] = auVar94._12_4_;
  auVar61._8_8_ = uVar55;
  auVar61._0_8_ = 0x3d;
  auVar48._8_8_ = uVar40;
  auVar48._0_8_ = DAT_007cea68;
  auVar94 = _pcpyld(auVar74,auVar48);
  puVar2[8] = auVar94._0_4_;
  puVar2[9] = auVar94._4_4_;
  puVar2[10] = auVar94._8_4_;
  puVar2[0xb] = auVar94._12_4_;
  auVar49._8_8_ = auVar94._8_8_;
  auVar49._0_8_ = DAT_007cea40;
  auVar94 = _pcpyld(auVar70,auVar49);
  puVar2[0xc] = auVar94._0_4_;
  puVar2[0xd] = auVar94._4_4_;
  puVar2[0xe] = auVar94._8_4_;
  puVar2[0xf] = auVar94._12_4_;
  auVar50._8_8_ = auVar94._8_8_;
  auVar50._0_8_ = DAT_007cea50;
  auVar94 = _pcpyld(auVar61,auVar50);
  puVar2[0x10] = auVar94._0_4_;
  puVar2[0x11] = auVar94._4_4_;
  puVar2[0x12] = auVar94._8_4_;
  puVar2[0x13] = auVar94._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 0x14;
  return 1;
}

// FUN_0046E170 NONMATCHING



u64 FUN_0046e170(int param_1)

{
  u8 bVar1;
  int *piVar2;
  u32 *puVar3;
  int *piVar4;
  int iVar5;
  u8 bVar6;
  Vec128 auVar7;
  long lVar8;
  Vec128 auVar9;
  Vec128 auVar10;
  Vec128 auVar11;
  Vec128 auVar12;
  Vec128 auVar13;
  Vec128 auVar14;
  Vec128 auVar15;
  Vec128 auVar16;
  Vec128 auVar17;
  Vec128 auVar18;
  Vec128 auVar19;
  Vec128 auVar20;
  Vec128 auVar21;
  Vec128 auVar22;
  u32 uVar23;
  u32 *puVar24;
  u32 in_zero_lo;
  u32 in_zero_hi;
  u32 in_zero_udw;
  u32 in_register_0000000c;
  u32 uVar25;
  u64 uVar26;
  u64 extraout_v0_udw;
  Vec128 auVar27;
  Vec128 auVar28;
  Vec128 auVar29;
  Vec128 auVar30;
  u64 extraout_v0_udw_00;
  Vec128 auVar31;
  Vec128 auVar32;
  u32 extraout_v0_udw_01;
  Vec128 auVar33;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  Vec128 auVar37;
  u32 *puVar38;
  u32 uVar39;
  u64 in_v1_udw;
  Vec128 auVar40;
  u64 uVar51;
  Vec128 auVar41;
  Vec128 auVar42;
  Vec128 auVar43;
  Vec128 auVar44;
  Vec128 auVar45;
  Vec128 auVar46;
  Vec128 auVar47;
  Vec128 auVar48;
  Vec128 auVar49;
  Vec128 auVar50;
  u32 in_a0_udw;
  Vec128 auVar52;
  u32 uVar61;
  Vec128 auVar53;
  Vec128 auVar54;
  Vec128 auVar55;
  Vec128 auVar56;
  Vec128 auVar57;
  Vec128 auVar58;
  Vec128 auVar59;
  Vec128 auVar60;
  u8 in_a1_qw [16];
  Vec128 auVar62;
  Vec128 auVar63;
  Vec128 auVar64;
  u64 uVar68;
  Vec128 auVar65;
  Vec128 auVar66;
  Vec128 auVar67;
  Vec128 auVar69;
  Vec128 auVar70;
  Vec128 auVar71;
  Vec128 auVar72;
  Vec128 auVar73;
  Vec128 auVar74;
  u64 in_t0_udw;
  Vec128 auVar75;
  Vec128 auVar76;
  u64 in_t1_udw;
  Vec128 auVar77;
  Vec128 auVar78;
  Vec128 auVar79;
  Vec128 auVar80;
  u64 in_t2_udw;
  Vec128 auVar81;
  Vec128 auVar82;
  Vec128 auVar83;
  Vec128 auVar84;
  u64 in_t3_udw;
  u64 in_t4_udw;
  u64 in_t5_udw;
  Vec128 auVar85;
  Vec128 auVar86;
  Vec128 auVar87;
  u64 in_t7_udw;
  Vec128 auVar88;
  Vec128 auVar89;
  long lVar90;
  Vec128 auVar91;
  u32 uVar92;
  u32 in_s1_udw;
  u32 in_register_0000011c;
  u32 uVar93;
  u32 in_s2_udw;
  u32 in_register_0000012c;
  u32 in_s3_udw;
  u32 in_register_0000013c;
  u32 in_s5_udw;
  u32 in_register_0000015c;
  u32 in_s6_udw;
  u32 in_register_0000016c;
  u32 in_s7_udw;
  u32 in_register_0000017c;
  u64 uStack_18;
  u64 uStack_10;
  u64 uStack_8;
  
  uVar68 = DAT_007cea30;
  piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 8);
  puVar3 = (u32 *)*piVar2;
  lVar90 = (long)(int)puVar3;
  piVar2 = *(int **)((int)piVar2 + DAT_007ce738);
  lVar8 = *(long *)(piVar2 + 0xc);
  uVar25 = (u32)lVar8;
  uVar92 = (u32)((u32)lVar8 >> 0x20);
  piVar4 = (int *)*piVar2;
  uVar51 = *(u64 *)(piVar2 + 10);
  uVar93 = 0;
  if (lVar8 == 0x1000000) {
    uVar25 = (u32)DAT_007cea50;
    uVar92 = (u32)((u32)DAT_007cea50 >> 0x20);
  }
  uVar26 = *(u64 *)(piVar2 + 0xe);
  uStack_8 = 0;
  uVar23 = (u32)DAT_007cea40;
  uStack_10 = 0;
  uStack_18 = 0;
  DAT_007ceab8 = 0;
  if ((lVar90 != 0) && (((code)FUN_004f0f30)(*puVar3), (*(u8 *)(*(int *)lVar90 + 0x23) & 0xf) != 6)) {
    DAT_007ceab8 = 1;
  }
  uVar39 = (*(u64*)((u8*)&in_a1_qw + 8));
  if (piVar4 != (int *)0x0) {
    ((code)FUN_004f0f30)(*piVar4);
    uVar39 = (*(u64*)((u8*)&in_a1_qw + 8));
    ((code)FUN_004f1020)(*piVar4,1);
  }
  if (lVar90 != 0) {
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar39;
    auVar59._0_8_ = auVar59._0_8_ << 0x40;
    ((code)FUN_004f1020)(*(u32 *)lVar90,0);
    uVar39 = auVar59._8_8_;
  }
  if ((piVar4 != (int *)0x0) && (*(int *)(*piVar4 + DAT_007ceaa8 + 0x58) == 0)) {
    ((code)FUN_004f1020)(*piVar4,1);
  }
  if ((lVar90 != 0) && (*(int *)(*(int *)lVar90 + DAT_007ceaa8 + 0x58) == 0)) {
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar39;
    auVar70._0_8_ = auVar70._0_8_ << 0x40;
    ((code)FUN_004f1020)(*(int *)lVar90,0);
    uVar39 = auVar70._8_8_;
  }
  if (lVar90 == 0) {
    DAT_007ceabc = 0;
    DAT_007cddc0 = DAT_007cddc0 & 0xffffffffffffffef;
  }
  else {
    DAT_007cddc0 = DAT_007cddc0 | 0x10;
    DAT_007ceabc = *(u32 *)lVar90;
    ((code)FUN_004f1e20)(*(u32 *)lVar90,(int)&uStack_10 + 4,&uStack_10);
    ((code)FUN_004f1e40)(*(u32 *)lVar90,0x7cea60,*(u8 *)((u32 *)lVar90 + 0x14));
    DAT_007cea58 = (u32)((*(u32 *)((int)lVar90 + 0x50) & 0xf00) == 0x300);
    if ((*(u32 *)((int)lVar90 + 0x50) & 0xf000) == 0x3000) {
      DAT_007cea58 = DAT_007cea58 | 4;
    }
  }
  DAT_007cea40 = DAT_007cea40 | 1;
  if (piVar4 != (int *)0x0) {
    ((code)FUN_004f1e20)(*piVar4,(int)&uStack_18 + 4,&uStack_18);
    ((code)FUN_004f1e40)(*piVar4,&uStack_8,(char)piVar4[0x14]);
    uVar93 = (u32)((piVar4[0x14] & 0xf00U) == 0x300);
    if ((piVar4[0x14] & 0xf000U) == 0x3000) {
      uVar93 = uVar93 | 4;
    }
  }
  if ((((lVar90 != 0) && (*(int *)(*(int *)lVar90 + 0x14) < 9)) && (piVar4 != (int *)0x0)) &&
     (*(int *)(*piVar4 + 0x14) < 9)) {
    DAT_007ceabc = 0xffffffff;
  }
  ((code)FUN_004d59d0)(0,0x24);
  puVar3 = (u32 *)(DAT_007ce9f4);
  auVar89._8_8_ = 0;
  auVar89._0_8_ = in_a0_udw;
  auVar48._8_8_ = in_v1_udw;
  auVar48._0_8_ = 0x1000001e;
  auVar74 = _pcpyld(auVar89 << 0x40,auVar48);
  auVar58._8_8_ = in_a0_udw;
  auVar58._0_8_ = 0x6c0703bc;
  auVar49._8_8_ = in_v1_udw;
  auVar49._0_8_ = 0x1000101;
  auVar88._8_8_ = in_t7_udw;
  auVar88._0_8_ = 0xe;
  auVar70 = _ppacw(auVar58,auVar49);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar74 + 0));
  puVar3[1] = auVar74._4_4_;
  puVar3[2] = auVar74._8_4_;
  puVar3[3] = auVar74._12_4_;
  puVar24 = (u32 *)(DAT_007ce9f4);
  auVar91._8_8_ = 0;
  auVar91._0_8_ = in_a0_udw;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = extraout_v0_udw_01;
  auVar59 = _ppacw(auVar91 << 0x40,auVar20 << 0x40);
  auVar70 = _ppacw(auVar70,auVar59);
  auVar72._8_8_ = auVar74._8_8_;
  DAT_007ce9f4[4] = (*(u32*)((u8*)&auVar70 + 0));
  DAT_007ce9f4[5] = (*(u32*)((u8*)&auVar70 + 4));
  DAT_007ce9f4[6] = (*(u32*)((u8*)&auVar70 + 8));
  DAT_007ce9f4[7] = (*(u32*)((u8*)&auVar70 + 12));
  auVar66._8_8_ = uVar39;
  auVar66._0_8_ = 0x1000000000008002;
  auVar74 = _pcpyld(auVar88,auVar66);
  auVar67._8_8_ = in_t4_udw;
  auVar67._0_8_ = 0x3d;
  auVar80._4_4_ = uVar92;
  auVar80._0_4_ = uVar25;
  auVar80._8_4_ = in_s1_udw;
  auVar80._12_4_ = in_register_0000011c;
  auVar67 = _pcpyld(auVar67,auVar80);
  auVar33._8_8_ = extraout_v0_udw_01;
  auVar33._0_8_ = 0x412;
  auVar85._8_8_ = in_t5_udw;
  auVar85._0_8_ = 6;
  auVar81._8_8_ = in_t2_udw;
  auVar81._0_8_ = 0x50000006;
  auVar21._4_4_ = in_register_0000013c;
  auVar21._0_4_ = in_s3_udw;
  auVar21._8_8_ = 0;
  auVar82 = _ppacw(auVar81,auVar21 << 0x40);
  auVar70 = _ppacw(auVar82,auVar59);
  auVar83._8_8_ = auVar82._8_8_;
  auVar83._0_8_ = 0x1000000000008005;
  auVar91 = _pcpyld(auVar88,auVar83);
  auVar77._8_8_ = in_t1_udw;
  auVar77._0_8_ = 0x43;
  auVar84._0_8_ =
       ((u32)((*(u8 *)(param_1 + 0x28) & 1) << 5 | 600 | (u32)*(u8 *)(param_1 + 0x29)) << 0xf
       | 0x30004000) << 0x20;
  auVar84._8_8_ = auVar83._8_8_;
  auVar87._8_4_ = in_s5_udw;
  auVar87._0_8_ = uVar51;
  auVar87._12_4_ = in_register_0000015c;
  auVar89 = _pcpyld(auVar77,auVar87);
  auVar59 = _pcpyld(auVar33,auVar84);
  DAT_007ce9f4[8] = (*(u32*)((u8*)&auVar59 + 0));
  DAT_007ce9f4[9] = (*(u32*)((u8*)&auVar59 + 4));
  DAT_007ce9f4[10] = (*(u32*)((u8*)&auVar59 + 8));
  DAT_007ce9f4[0xb] = (*(u32*)((u8*)&auVar59 + 12));
  auVar78._8_8_ = in_t1_udw;
  auVar78._0_8_ = 9;
  auVar86._4_4_ = 0;
  auVar86._0_4_ = uVar93;
  auVar86._8_4_ = in_s2_udw;
  auVar86._12_4_ = in_register_0000012c;
  auVar87 = _pcpyld(auVar78,auVar86);
  DAT_007ce9f4[0xc] = (*(u32*)((u8*)&auVar74 + 0));
  DAT_007ce9f4[0xd] = (*(u32*)((u8*)&auVar74 + 4));
  DAT_007ce9f4[0xe] = (*(u32*)((u8*)&auVar74 + 8));
  DAT_007ce9f4[0xf] = (*(u32*)((u8*)&auVar74 + 12));
  auVar34._8_8_ = auVar59._8_8_;
  auVar34._0_8_ = 0x48;
  auVar75._8_8_ = in_t0_udw;
  auVar75._0_8_ = 0x6c0103fa01000404;
  auVar79._8_8_ = in_t1_udw;
  auVar79._0_8_ = 0x4f;
  auVar10._4_4_ = (int)((u32)uVar26 >> 0x20);
  auVar10._0_4_ = uVar23 & 0x70000 | (u32)uVar26;
  auVar10._8_4_ = in_s6_udw;
  auVar10._12_4_ = in_register_0000016c;
  auVar59 = _pcpyld(auVar34,auVar10);
  auVar35._8_8_ = auVar34._8_8_;
  auVar35._0_8_ = 0x15;
  auVar11._8_4_ = in_s7_udw;
  auVar11._0_8_ = uVar68;
  auVar11._12_4_ = in_register_0000017c;
  auVar80 = _pcpyld(auVar79,auVar11);
  auVar9._8_4_ = in_s2_udw;
  auVar9._0_8_ = uStack_10;
  auVar9._12_4_ = in_register_0000012c;
  auVar82 = _pcpyld(auVar85,auVar9);
  DAT_007ce9f4[0x10] = (*(u32*)((u8*)&auVar82 + 0));
  DAT_007ce9f4[0x11] = (*(u32*)((u8*)&auVar82 + 4));
  DAT_007ce9f4[0x12] = (*(u32*)((u8*)&auVar82 + 8));
  DAT_007ce9f4[0x13] = (*(u32*)((u8*)&auVar82 + 12));
  auVar22._4_4_ = in_register_0000013c;
  auVar22._0_4_ = in_s3_udw;
  auVar22._8_8_ = 0;
  auVar86 = _pcpyld(auVar75,auVar22 << 0x40);
  auVar76._8_8_ = in_t0_udw;
  auVar76._0_8_ = DAT_007cea50;
  auVar82._8_8_ = in_t4_udw;
  auVar82._0_8_ = 0x3d;
  auVar82 = _pcpyld(auVar82,auVar76);
  DAT_007ce9f4[0x14] = (*(u32*)((u8*)&auVar82 + 0));
  DAT_007ce9f4[0x15] = (*(u32*)((u8*)&auVar82 + 4));
  DAT_007ce9f4[0x16] = (*(u32*)((u8*)&auVar82 + 8));
  DAT_007ce9f4[0x17] = (*(u32*)((u8*)&auVar82 + 12));
  DAT_007ce9f4[0x18] = (*(u32*)((u8*)&auVar74 + 0));
  DAT_007ce9f4[0x19] = (*(u32*)((u8*)&auVar74 + 4));
  DAT_007ce9f4[0x1a] = (*(u32*)((u8*)&auVar74 + 8));
  DAT_007ce9f4[0x1b] = (*(u32*)((u8*)&auVar74 + 12));
  auVar71._8_8_ = auVar74._8_8_;
  auVar71._0_8_ = uStack_18;
  auVar74._8_8_ = in_t3_udw;
  auVar74._0_8_ = 7;
  auVar74 = _pcpyld(auVar74,auVar71);
  DAT_007ce9f4[0x1c] = (*(u32*)((u8*)&auVar74 + 0));
  DAT_007ce9f4[0x1d] = (*(u32*)((u8*)&auVar74 + 4));
  DAT_007ce9f4[0x1e] = (*(u32*)((u8*)&auVar74 + 8));
  DAT_007ce9f4[0x1f] = (*(u32*)((u8*)&auVar74 + 12));
  DAT_007ce9f4[0x20] = (*(u32*)((u8*)&auVar67 + 0));
  DAT_007ce9f4[0x21] = (*(u32*)((u8*)&auVar67 + 4));
  DAT_007ce9f4[0x22] = (*(u32*)((u8*)&auVar67 + 8));
  DAT_007ce9f4[0x23] = (*(u32*)((u8*)&auVar67 + 12));
  DAT_007ce9f4[0x24] = (*(u32*)((u8*)&auVar70 + 0));
  DAT_007ce9f4[0x25] = (*(u32*)((u8*)&auVar70 + 4));
  DAT_007ce9f4[0x26] = (*(u32*)((u8*)&auVar70 + 8));
  DAT_007ce9f4[0x27] = (*(u32*)((u8*)&auVar70 + 12));
  DAT_007ce9f4[0x28] = (*(u32*)((u8*)&auVar91 + 0));
  DAT_007ce9f4[0x29] = (*(u32*)((u8*)&auVar91 + 4));
  DAT_007ce9f4[0x2a] = (*(u32*)((u8*)&auVar91 + 8));
  DAT_007ce9f4[0x2b] = (*(u32*)((u8*)&auVar91 + 12));
  DAT_007ce9f4[0x2c] = (*(u32*)((u8*)&auVar89 + 0));
  DAT_007ce9f4[0x2d] = (*(u32*)((u8*)&auVar89 + 4));
  DAT_007ce9f4[0x2e] = (*(u32*)((u8*)&auVar89 + 8));
  DAT_007ce9f4[0x2f] = (*(u32*)((u8*)&auVar89 + 12));
  DAT_007ce9f4[0x30] = (*(u32*)((u8*)&auVar87 + 0));
  DAT_007ce9f4[0x31] = (*(u32*)((u8*)&auVar87 + 4));
  DAT_007ce9f4[0x32] = (*(u32*)((u8*)&auVar87 + 8));
  DAT_007ce9f4[0x33] = (*(u32*)((u8*)&auVar87 + 12));
  DAT_007ce9f4[0x34] = (*(u32*)((u8*)&auVar59 + 0));
  DAT_007ce9f4[0x35] = (*(u32*)((u8*)&auVar59 + 4));
  DAT_007ce9f4[0x36] = (*(u32*)((u8*)&auVar59 + 8));
  DAT_007ce9f4[0x37] = (*(u32*)((u8*)&auVar59 + 12));
  auVar52._8_8_ = auVar70._8_8_;
  auVar60._8_8_ = auVar52._8_8_;
  auVar60._0_8_ = uStack_8;
  auVar59 = _pcpyld(auVar35,auVar60);
  DAT_007ce9f4[0x38] = (*(u32*)((u8*)&auVar59 + 0));
  DAT_007ce9f4[0x39] = (*(u32*)((u8*)&auVar59 + 4));
  DAT_007ce9f4[0x3a] = (*(u32*)((u8*)&auVar59 + 8));
  DAT_007ce9f4[0x3b] = (*(u32*)((u8*)&auVar59 + 12));
  DAT_007ce9f4[0x3c] = (*(u32*)((u8*)&auVar80 + 0));
  DAT_007ce9f4[0x3d] = (*(u32*)((u8*)&auVar80 + 4));
  DAT_007ce9f4[0x3e] = (*(u32*)((u8*)&auVar80 + 8));
  DAT_007ce9f4[0x3f] = (*(u32*)((u8*)&auVar80 + 12));
  puVar3 = (u32 *)(DAT_007ce9f4 + 0x40);
  DAT_007ce9f4 = DAT_007ce9f4 + 0x40;
  *puVar3 = auVar86._0_4_;
  puVar24[0x41] = auVar86._4_4_;
  puVar24[0x42] = auVar86._8_4_;
  puVar24[0x43] = auVar86._12_4_;
  puVar3 = (u32 *)(DAT_007ce9f4);
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  bVar6 = *(char *)(param_1 + 0x47) != -1;
  DAT_007ceab4 = (u32)bVar6;
  if (bVar6 || DAT_007ceab8 != 0) {
    DAT_007cddc0 = DAT_007cddc0 | 0x40;
  }
  else {
    DAT_007cddc0 = DAT_007cddc0 & 0xffffffffffffffbf;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = auVar82._8_8_;
  auVar40._8_8_ = in_v1_udw;
  auVar40._0_8_ = 0xfc007fffffffffff;
  auVar7._4_4_ = in_zero_hi;
  auVar7._0_4_ = in_zero_lo;
  auVar7._8_4_ = in_zero_udw;
  auVar7._12_4_ = in_register_0000000c;
  auVar59 = _pcpyld(auVar7,auVar40);
  uVar51 = auVar59._8_8_;
  auVar69._8_8_ = auVar74._8_8_;
  auVar69._4_4_ = DAT_009658ac;
  auVar69._0_4_ = DAT_009658a8;
  auVar52._0_8_ = 0x6c0103fb01000404;
  uVar39 = DAT_007cddc0 & 0x10;
  auVar72._0_8_ =
       CONCAT44((*(u32*)((u8*)&DAT_009658a0 + 4)),(u32)DAT_009658a0) & (*(u64*)((u8*)&auVar59 + 0)) |
       ((long)(int)((u32)DAT_007cddc0 | (u32)*(u8 *)(param_1 + 0x29)) & 0x7ffU) << 0x2f;
  auVar70 = _pcpyld(auVar69,auVar72);
  (*(u32*)((u8*)&DAT_009658a0 + 0)) = (*(u32*)((u8*)&auVar70 + 0));
  auVar59 = _pcpyld(auVar52,auVar15 << 0x40);
  (*(u32*)((u8*)&DAT_009658a0 + 4)) = (*(u32*)((u8*)&auVar70 + 4));
  DAT_009658a8 = auVar70._8_4_;
  DAT_009658ac = auVar70._12_4_;
  *DAT_007ce9f4 = (u32)DAT_009658a0;
  puVar3[5] = auVar70._4_4_;
  puVar3[6] = auVar70._8_4_;
  puVar3[7] = auVar70._12_4_;
  puVar3[8] = auVar59._0_4_;
  puVar3[9] = auVar59._4_4_;
  puVar3[10] = auVar59._8_4_;
  puVar3[0xb] = auVar59._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 8;
  uVar61 = auVar59._8_8_;
  if (uVar39 == 0) {
    uVar25 = 0x3b808081;
  }
  else {
    uVar25 = 0x3b011b50;
  }
  ((code)FUN_0049cab0)(uVar25,param_1 + 0x44);
  puVar3 = (u32 *)(DAT_007ce9f4);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar61;
  auVar41._8_8_ = uVar51;
  auVar41._0_8_ = 0x6c0103fc01000404;
  auVar59 = _pcpyld(auVar41,auVar16 << 0x40);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar59 + 0));
  puVar3[1] = auVar59._4_4_;
  puVar3[2] = auVar59._8_4_;
  puVar3[3] = auVar59._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  ((code)FUN_0049cbd0)(*(u32 *)(param_1 + 0x1c),*(u32 *)(param_1 + 0x3c));
  puVar3 = (u32 *)(DAT_007ce9f4);
  bVar1 = *(u8 *)(param_1 + 0x28);
  auVar27._8_8_ = extraout_v0_udw;
  auVar27._0_8_ = 0x6c0303fd01000404;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = auVar59._8_8_;
  auVar74 = _pcpyld(auVar27,auVar17 << 0x40);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar74 + 0));
  puVar3[1] = auVar74._4_4_;
  puVar3[2] = auVar74._8_4_;
  puVar3[3] = auVar74._12_4_;
  auVar70 = _DAT_00965930;
  auVar59 = _DAT_00965910;
  puVar3 = (u32 *)(DAT_007ce9f4);
  uVar39 = (u32)bVar1 & 7;
  auVar62._8_8_ = auVar74._8_8_;
  if (((DAT_007ceb04 == 0) || ((bVar1 & 4) != 0)) && ((DAT_007cdde8 == 0 || ((bVar1 & 4) == 0)))) {
    DAT_007ce9f4[4] = (u32)(DAT_00965910);
    puVar3[5] = auVar59._4_4_;
    puVar3[6] = auVar59._8_4_;
    puVar3[7] = auVar59._12_4_;
    auVar70 = _DAT_00965920;
    puVar3[8] = DAT_00965920;
    puVar3[9] = auVar70._4_4_;
    puVar3[10] = auVar70._8_4_;
    puVar3[0xb] = auVar70._12_4_;
    uVar51 = auVar70._8_8_;
    puVar3 = (u32 *)(DAT_007ce9f4);
  }
  else {
    uVar39 = uVar39 | 8;
    DAT_007ce9f4[4] = (u32)(DAT_00965930);
    puVar3[5] = auVar70._4_4_;
    puVar3[6] = auVar70._8_4_;
    puVar3[7] = auVar70._12_4_;
    auVar59 = _DAT_00965940;
    puVar3[8] = DAT_00965940;
    puVar3[9] = auVar59._4_4_;
    puVar3[10] = auVar59._8_4_;
    puVar3[0xb] = auVar59._12_4_;
    uVar51 = auVar59._8_8_;
    auVar59 = auVar70;
    puVar3 = (u32 *)(DAT_007ce9f4);
  }
  DAT_007ce9f4 = (u32 *)((u32)(puVar3 + 0xc));
  auVar53._8_8_ = auVar59._8_8_;
  DAT_007ceafc = 0;
  uVar61 = 0;
  if (DAT_007ceaac == 3) {
    uVar61 = 0x20;
    DAT_007ceafc = 0x20;
  }
  auVar42._8_8_ = uVar51;
  auVar42._0_8_ = uVar39;
  auVar53._0_8_ = (u32)DAT_007ceb00 << 0x20 | uVar61;
  auVar59 = _pcpyld(auVar53,auVar42);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar59 + 0));
  puVar3[0xd] = auVar59._4_4_;
  puVar3[0xe] = auVar59._8_4_;
  puVar3[0xf] = auVar59._12_4_;
  puVar3 = (u32 *)(DAT_007ce9f4);
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  auVar43._8_8_ = auVar59._8_8_;
  if (*(int *)(param_1 + 0x40) == 0) {
    auVar63._0_8_ = (long)(int)DAT_007ce9f4;
    auVar63._8_8_ = auVar62._8_8_;
    *DAT_007ce9f4 = in_zero_lo;
    puVar3[5] = in_zero_hi;
    puVar3[6] = in_zero_udw;
    puVar3[7] = in_register_0000000c;
    auVar36._8_8_ = extraout_v0_udw;
    auVar36._0_8_ = 0x5000000200000000;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar43._8_8_;
    puVar3[8] = in_zero_lo;
    puVar3[9] = in_zero_hi;
    puVar3[10] = in_zero_udw;
    puVar3[0xb] = in_register_0000000c;
    auVar59 = _pcpyld(auVar36,auVar14 << 0x40);
    puVar3[0xc] = auVar59._0_4_;
    puVar3[0xd] = auVar59._4_4_;
    puVar3[0xe] = auVar59._8_4_;
    puVar3[0xf] = auVar59._12_4_;
    auVar55._8_8_ = auVar53._8_8_;
    auVar55._0_8_ = 0xe;
    auVar37._8_8_ = auVar59._8_8_;
    auVar50._8_8_ = auVar43._8_8_;
    auVar50._0_8_ = 0x1000000000008001;
    auVar59 = _pcpyld(auVar55,auVar50);
    puVar3[0x10] = auVar59._0_4_;
    puVar3[0x11] = auVar59._4_4_;
    puVar3[0x12] = auVar59._8_4_;
    puVar3[0x13] = auVar59._12_4_;
    auVar37._0_8_ = 0x47;
    auVar44._8_8_ = auVar59._8_8_;
    auVar44._0_8_ = DAT_007cea40;
    auVar59 = _pcpyld(auVar37,auVar44);
    puVar3[0x14] = auVar59._0_4_;
    puVar3[0x15] = auVar59._4_4_;
    puVar3[0x16] = auVar59._8_4_;
    puVar3[0x17] = auVar59._12_4_;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar43._8_8_;
    auVar28._8_8_ = extraout_v0_udw;
    auVar28._0_8_ = 0x5000000400000000;
    auVar59 = _pcpyld(auVar28,auVar12 << 0x40);
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar59 + 0));
    puVar3[5] = auVar59._4_4_;
    puVar3[6] = auVar59._8_4_;
    puVar3[7] = auVar59._12_4_;
    auVar62._0_8_ = 0xe;
    auVar29._8_8_ = auVar59._8_8_;
    auVar54._8_8_ = auVar53._8_8_;
    auVar54._0_8_ = 0x47;
    auVar29._0_8_ = 0x1000000000008003;
    auVar59 = _pcpyld(auVar62,auVar29);
    puVar3[8] = auVar59._0_4_;
    puVar3[9] = auVar59._4_4_;
    puVar3[10] = auVar59._8_4_;
    puVar3[0xb] = auVar59._12_4_;
    auVar43._0_8_ = 0x14;
    auVar63._8_8_ = auVar62._8_8_;
    auVar63._0_8_ = DAT_007cea40;
    auVar30._8_8_ = auVar59._8_8_;
    auVar30._0_8_ = 8;
    auVar59 = _pcpyld(auVar54,auVar63);
    puVar3[0xc] = auVar59._0_4_;
    puVar3[0xd] = auVar59._4_4_;
    puVar3[0xe] = auVar59._8_4_;
    puVar3[0xf] = auVar59._12_4_;
    auVar55._8_8_ = auVar59._8_8_;
    auVar55._0_8_ = DAT_007cea60;
    auVar59 = _pcpyld(auVar43,auVar55);
    puVar3[0x10] = auVar59._0_4_;
    puVar3[0x11] = auVar59._4_4_;
    puVar3[0x12] = auVar59._8_4_;
    puVar3[0x13] = auVar59._12_4_;
    auVar44._8_8_ = auVar59._8_8_;
    auVar44._0_8_ = DAT_007cea58;
    auVar59 = _pcpyld(auVar30,auVar44);
    puVar3[0x14] = auVar59._0_4_;
    puVar3[0x15] = auVar59._4_4_;
    puVar3[0x16] = auVar59._8_4_;
    puVar3[0x17] = auVar59._12_4_;
  }
  DAT_007ce9f4 = DAT_007ce9f4 + 0x14;
  auVar46._8_8_ = auVar44._8_8_;
  *(u8 *)(param_1 + 0x2b) =
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x20) >> 5) |
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x18) >> 2);
  puVar3 = (u32 *)(DAT_007ce9f4);
  uVar51 = auVar55._8_8_;
  puVar38 = (u32 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + (u32)*(u8 *)(param_1 + 0x2b) * 4);
  auVar46._0_8_ = (long)(int)puVar38;
  uVar93 = *puVar38;
  if (DAT_007ceaf8 != uVar93) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar63._8_8_;
    auVar63._0_8_ = auVar13._0_8_ << 0x40;
    auVar45._0_8_ = (u32)uVar93 << 0x20 | 0x50000000;
    auVar45._8_8_ = auVar46._8_8_;
    auVar46 = _pcpyld(auVar63,auVar45);
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar46 + 0));
    puVar3[1] = auVar46._4_4_;
    puVar3[2] = auVar46._8_4_;
    puVar3[3] = auVar46._12_4_;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    DAT_007ceaf8 = uVar93;
  }
  puVar3 = (u32 *)(DAT_007ce9f4);
  uVar39 = auVar46._8_8_;
  auVar64._8_8_ = auVar63._8_8_;
  iVar5 = **(int **)(param_1 + 0x30);
  auVar73._0_8_ = ((long)*(int *)(*(int *)(param_1 + 4) + 0x14) | 0x2000000U) << 0x20 | 0x3000000;
  auVar73._8_8_ = auVar72._8_8_;
  auVar64._0_8_ = (u32)*(u32 *)(iVar5 + 0x20) << 0x20 | 0x50000000;
  auVar59 = _pcpyld(auVar73,auVar64);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar59 + 0));
  puVar3[1] = auVar59._4_4_;
  puVar3[2] = auVar59._8_4_;
  puVar3[3] = auVar59._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 4;
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
  EI();
  *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + 1;
  if (*(int *)(iVar5 + 0x1c) == 1) {
    ((code)FUN_004d51c0)();
  }
  uVar68 = auVar59._8_8_;
  ((code)FUN_004d59d0)(0,3);
  puVar3 = (u32 *)(DAT_007ce9f4);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar39;
  auVar31._8_8_ = extraout_v0_udw_00;
  auVar31._0_8_ = 0x50000002;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar72._8_8_;
  auVar70 = _ppacw(auVar31,auVar18 << 0x40);
  auVar65._8_8_ = uVar68;
  auVar65._0_8_ = 0xe;
  auVar56._8_8_ = uVar51;
  auVar56._0_8_ = 0x10000002;
  auVar59 = _ppacw(auVar19 << 0x40,auVar56);
  auVar59 = _ppacw(auVar70,auVar59);
  *DAT_007ce9f4 = (*(u32*)((u8*)&auVar59 + 0));
  puVar3[1] = auVar59._4_4_;
  puVar3[2] = auVar59._8_4_;
  puVar3[3] = auVar59._12_4_;
  auVar57._8_8_ = uVar51;
  auVar57._0_8_ = 0x3d;
  auVar32._8_8_ = auVar59._8_8_;
  auVar32._0_8_ = 0x1000000000008001;
  auVar59 = _pcpyld(auVar65,auVar32);
  puVar3[4] = auVar59._0_4_;
  puVar3[5] = auVar59._4_4_;
  puVar3[6] = auVar59._8_4_;
  puVar3[7] = auVar59._12_4_;
  auVar47._8_8_ = uVar39;
  auVar47._0_8_ = DAT_007cea50;
  auVar59 = _pcpyld(auVar57,auVar47);
  puVar3[8] = auVar59._0_4_;
  puVar3[9] = auVar59._4_4_;
  puVar3[10] = auVar59._8_4_;
  puVar3[0xb] = auVar59._12_4_;
  DAT_007ce9f4 = DAT_007ce9f4 + 0xc;
  return 1;
}

// FUN_0046EA80
asm void FUN_0046ea80(int param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c83002c
  .word 0x8f82ba48
  .word 0x8c630008
  .word 0x00621021
  .word 0x8c420000
  .word 0x10400003
  .word 0x0080802d
  .word 0x10000002
  .word 0x8c420080
  .word 0x0000102d
  .word 0x8e060004
  .word 0x00022900
  .word 0x00021880
  .word 0x3c02006b
  .word 0x24424ee4
  .word 0x00431021
  .word 0x8cd10018
  .word 0x02251821
  .word 0xacc30018
  .word 0x8c420000
  .word 0x0040f809
  .word 0x0200202d
  .word 0x8e030004
  .word 0xac710018
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0046EB10
asm u32 FUN_0046eb10(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x3c020100
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c830008
  .word 0x00a0802d
  .word 0x8c650018
  .word 0x8ca30008
  .word 0x00621024
  .word 0x10400003
  .word 0x0080882d
  .word 0x1000000c
  .word 0x24020001
  .word 0x3c020096
  .word 0x8c42de18
  .word 0x00a21021
  .word 0x0c12850c
  .word 0x8c520000
  .word 0x8e24002c
  .word 0x8e060000
  .word 0x0c11ac6c
  .word 0x0240282d
  .word 0x1000fff4
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
}

// FUN_0046EB90 NONMATCHING

u64 FUN_0046eb90(int param_1,u32 *param_2)

{
  u8 bVar1;
  int iVar2;
  u32 *puVar3;
  u32 uVar4;
  u32 uVar5;
  u32 *puVar6;
  u32 *puVar7;
  u64 uVar8;
  Vec128 auVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uVar12;
  int *piVar13;
  u32 uVar14;
  float *pfVar15;
  u64 *puVar16;
  int iVar17;
  float *pfVar18;
  u64 uVar19;
  u64 extraout_v0_udw;
  Vec128 auVar20;
  Vec128 auVar21;
  u64 in_a0_udw;
  u32 in_a1_udw;
  u32 in_register_0000005c;
  u32 uVar22;
  u32 uVar23;
  Vec128 auVar24;
  u32 uVar25;
  u32 uVar26;
  u32 uVar27;
  u32 uVar28;
  u32 uVar29;
  u32 uVar30;
  int iVar31;
  u32 uVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int aiStack_70 [12];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_20;
  float fStack_1c;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar33 = *(int *)(iVar2 + 0x18);
  puVar3 = *(u32 **)(iVar33 + DAT_0095de18);
  uVar4 = *puVar3;
  *(u32 *)(param_1 + 0xc) = *(u32 *)(iVar33 + 0x54);
  if (*(int *)(iVar33 + 0x18) == 1) {
    piVar13 = (int *)(iVar33 + DAT_007ce890);
    bVar1 = 0;
    if (((u32 *)*piVar13 != (u32 *)0x0) &&
       ((u32)*(u16 *)(*(int *)(iVar33 + 0x54) + 4) == *(u32 *)*piVar13)) {
      bVar1 = 1;
    }
    if (bVar1) {
      iVar33 = *piVar13;
    }
    else {
      piVar13 = (int *)((code)FUN_0049e5a0)((short)piVar13,*(u16 *)(*(int *)(iVar33 + 0x54) + 4));
      iVar33 = *piVar13;
    }
    *(int *)(param_1 + 0x10) = iVar33;
  }
  else {
    piVar13 = (int *)(iVar2 + DAT_007ce88c);
    bVar1 = 0;
    if (((u32 *)*piVar13 != (u32 *)0x0) &&
       ((u32)*(u16 *)(*(int *)(iVar33 + 0x54) + 4) == *(u32 *)*piVar13)) {
      bVar1 = 1;
    }
    if (bVar1) {
      iVar33 = *piVar13;
    }
    else {
      piVar13 = (int *)((code)FUN_0049e5a0)((short)piVar13,*(u16 *)(*(int *)(iVar33 + 0x54) + 4));
      iVar33 = *piVar13;
    }
    *(int *)(param_1 + 0x10) = iVar33;
  }
  if (*(short *)(*(int *)(param_1 + 0xc) + 4) == 0) {
    uVar19 = 0;
  }
  else {
    *(u32 *)(param_1 + 0x20) = *(u32 *)(*(int *)(iVar2 + 0x18) + 0x18);
    if (1 < *(int *)(param_1 + 0x20)) {
      *(float *)(param_1 + 0x1c) = *(float *)(iVar2 + 0x58) * *(float *)(iVar2 + 0x5c);
    }
    iVar33 = *(int *)(iVar2 + 0x18);
    if ((*(u32 *)(iVar33 + 8) & 0x1000000) == 0) {
      *(u32 *)(param_1 + 0x18) =
           CONCAT22((u16)(((u32)*(u8 *)(iVar33 + 0x18) << 0x18) >> 0x10) |
                    (u16)*(u32 *)(iVar33 + 8) & 0x9f,
                    *(u16 *)(*(int *)(param_1 + 0xc) + 6));
      *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) & 0xfffffffe;
      iVar31 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      if (iVar31 != 0) {
        uVar32 = *(u32 *)(iVar31 + 0x28);
        uVar5 = *(u32 *)(param_1 + 0x18);
        if (uVar5 != uVar32) {
          if (((uVar5 >> 0x10 & 0xff) == (uVar32 >> 0x10 & 0xff)) &&
             (uVar5 >> 0x18 == uVar32 >> 0x18)) {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 4;
          }
          else {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 8;
          }
        }
        if (*(u16 *)(iVar33 + 0xc) != 0) {
          if ((*(u16 *)(iVar33 + 0xc) & 1) == 0) {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 2;
            *(u32 *)(param_1 + 0x14) =
                 *(u32 *)(param_1 + 0x14) | (u32)*(u16 *)(iVar33 + 0xc) << 3;
          }
          else {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 8;
          }
        }
        if (((*(u32 *)(iVar2 + 0x4c) & 1) != 0) &&
           (((long)*(int *)(iVar31 + 0x40) != (long)*(short *)(iVar2 + 0x52) ||
            ((long)*(int *)(iVar31 + 0x3c) != (long)*(short *)(iVar2 + 0x50))))) {
          *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 4;
        }
      }
    }
    *(u16 *)(*(int *)(iVar2 + 0x18) + 0xc) = 0;
    *(u32 *)(iVar2 + 0x4c) = *(u32 *)(iVar2 + 0x4c) & 0xfffffffe;
    iVar33 = DAT_00960070 + 0x20;
    uVar14 = ((code)FUN_004cb2f0)((short)*(u32 *)(iVar2 + 4));
    ((code)FUN_004c2f30)((short)*param_2,uVar14,iVar33);
    iVar31 = 2;
    pfVar15 = (float *)((code)FUN_004912b0)((short)iVar2);
    iVar33 = 5;
    pfVar18 = (float *)(DAT_00960070 + DAT_007ceaa4 + 0x60);
    do {
      if (-pfVar15[3] <
          (pfVar15[2] * pfVar18[2] + *pfVar15 * *pfVar18 + pfVar15[1] * pfVar18[1]) - pfVar18[3]) {
        iVar31 = 1;
        break;
      }
      pfVar18 = pfVar18 + 5;
      bVar1 = iVar33 != 0;
      iVar33 = iVar33 + -1;
    } while (bVar1);
    uVar32 = **(u32 **)(param_1 + 0xc);
    if ((uVar32 & 1) == 1) {
      *(u8 *)(param_1 + 0x29) = 4;
      *(u8 *)(param_1 + 0x28) = DAT_007ceaf4;
    }
    else if (((uVar32 & 0xff) == 0) || ((uVar32 & 2) == 2)) {
      *(u8 *)(param_1 + 0x29) = 3;
      *(u8 *)(param_1 + 0x28) = DAT_007ceaf4 | 4;
    }
    else if ((uVar32 & 0x10) == 0x10) {
      *(u8 *)(param_1 + 0x29) = 4;
      *(u8 *)(param_1 + 0x28) = DAT_007ceaf4;
    }
    else if ((uVar32 & 8) == 8) {
      *(u8 *)(param_1 + 0x29) = 2;
      *(u8 *)(param_1 + 0x28) = DAT_007ceaf4 | 0x10;
    }
    else {
      *(u8 *)(param_1 + 0x29) = 1;
      *(u8 *)(param_1 + 0x28) = DAT_007ceaf4 | 0x14;
    }
    if (iVar31 != 2) {
      *(u8 *)(param_1 + 0x28) = *(u8 *)(param_1 + 0x28) | 2;
    }
    *(u8 *)(param_1 + 0x2a) = (*(u32 *)(*(int *)(iVar2 + 0x18) + 8) & 0x40) != 0;
    if (DAT_0095de34 == (code)0) {
      iVar33 = *(int *)(param_1 + 8);
      iVar31 = *(int *)(iVar33 + 0x18);
      if ((*(u32 *)(iVar31 + 8) & 0x20) != 0) {
        DAT_0096007a = DAT_0096007a + 1;
        iVar17 = ((code)FUN_004cb2f0)((short)*(u32 *)(iVar33 + 4));
        ((code)FUN_004c32a0)((short)&stack0x00000000 + -0x60,iVar17);
        if ((*(u32 *)(iVar17 + 0xc) & 3) == 3) {
          fStack_20 = 1.0;
          fStack_1c = 1.0;
        }
        else {
          fStack_20 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
          fStack_1c = fStack_20;
          if (0.0 < fStack_20) {
            fStack_1c = 1.0 / fStack_20;
          }
        }
        iVar31 = *(int *)(iVar31 + 0x54);
        aiStack_70[0] = *(int *)(*(int *)(iVar31 + 0xc) + iVar31 + 0x18) + 0xc;
        ((code)FUN_00499c20)(0x430,aiStack_70);
        for (puVar6 = *(u32 **)(iVar33 + 100); puVar6 != (u32 *)(iVar33 + 100);
            puVar6 = (u32 *)*puVar6) {
          iVar31 = puVar6[2];
          for (puVar7 = *(u32 **)(iVar31 + 0x40); puVar7 != (u32 *)(iVar31 + 0x40);
              puVar7 = (u32 *)*puVar7) {
            iVar17 = puVar7[2];
            if (((iVar17 != 0) && (*(short *)(iVar17 + 0x3c) != DAT_0096007a)) &&
               ((*(u8 *)(iVar17 + 2) & 1) != 0)) {
              *(short *)(iVar17 + 0x3c) = DAT_0096007a;
              iVar17 = ((code)FUN_004cb2f0)((short)*(u32 *)(puVar7[2] + 4));
              pfVar18 = (float *)((code)FUN_004912b0)((short)iVar33);
              fVar36 = pfVar18[1] - *(float *)(iVar17 + 0x34);
              fVar37 = *pfVar18 - *(float *)(iVar17 + 0x30);
              fVar34 = pfVar18[2] - *(float *)(iVar17 + 0x38);
              fVar35 = pfVar18[3] + *(float *)(puVar7[2] + 0x14);
              if (fVar34 * fVar34 + fVar37 * fVar37 + fVar36 * fVar36 < fVar35 * fVar35) {
                ((code)FUN_004a0430)((short)puVar7[2],aiStack_70);
              }
            }
          }
        }
      }
    }
    else {
      (*DAT_0095de34)(1,*(u32 *)(param_1 + 8));
    }
    puVar16 = (u64 *)((code)FUN_0046b510)((short)iVar2,puVar3);
    uVar32 = uVar4 * 4;
    ((code)FUN_004d59d0)(0,uVar32 + 2);
    auVar24._8_8_ = extraout_v0_udw;
    auVar24._0_8_ = 0x1000101;
    (*(u16*)((u8*)&auVar21 + 2)) = (u16)uVar32 & 0xff | 0x6c00;
    (*(u16*)((u8*)&auVar21 + 0)) = 700;
    auVar21._4_4_ = 0;
    auVar21._8_8_ = in_a0_udw;
    auVar24 = _ppacw(auVar21,auVar24);
    auVar20._0_8_ = (u32)uVar32 | 0x10000000;
    auVar20._8_8_ = extraout_v0_udw;
    auVar9._4_4_ = in_register_0000005c;
    auVar9._0_4_ = in_a1_udw;
    auVar9._8_8_ = 0;
    auVar21 = _ppacw(auVar9 << 0x40,auVar20);
    auVar21 = _ppacw(auVar24,auVar21);
    puVar6 = (u32 *)(DAT_007ce9f4 + 4);
    uVar32 = 0;
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar21 + 0));
    DAT_007ce9f4[1] = (*(u32*)((u8*)&auVar21 + 4));
    DAT_007ce9f4[2] = (*(u32*)((u8*)&auVar21 + 8));
    DAT_007ce9f4[3] = (*(u32*)((u8*)&auVar21 + 12));
    if (uVar4 != 0) {
      if (8 < uVar4) {
        do {
          uVar27 = *(u32 *)(puVar16 + 2);
          uVar28 = *(u32 *)((int)puVar16 + 0x14);
          uVar29 = *(u32 *)(puVar16 + 3);
          uVar30 = *(u32 *)((int)puVar16 + 0x1c);
          uVar32 = uVar32 + 8;
          uVar19 = puVar16[4];
          uVar25 = *(u32 *)(puVar16 + 5);
          uVar26 = *(u32 *)((int)puVar16 + 0x2c);
          uVar14 = *(u32 *)(puVar16 + 6);
          uVar10 = *(u32 *)((int)puVar16 + 0x34);
          uVar11 = *(u32 *)(puVar16 + 7);
          uVar12 = *(u32 *)((int)puVar16 + 0x3c);
          uVar8 = *puVar16;
          uVar22 = *(u32 *)(puVar16 + 1);
          uVar23 = *(u32 *)((int)puVar16 + 0xc);
          *puVar6 = (int)uVar8;
          puVar6[1] = (int)((u32)uVar8 >> 0x20);
          puVar6[2] = uVar22;
          puVar6[3] = uVar23;
          puVar6[4] = uVar27;
          puVar6[5] = uVar28;
          puVar6[6] = uVar29;
          puVar6[7] = uVar30;
          puVar6[8] = (int)uVar19;
          puVar6[9] = (int)((u32)uVar19 >> 0x20);
          puVar6[10] = uVar25;
          puVar6[0xb] = uVar26;
          puVar6[0xc] = uVar14;
          puVar6[0xd] = uVar10;
          puVar6[0xe] = uVar11;
          puVar6[0xf] = uVar12;
          uVar27 = *(u32 *)(puVar16 + 10);
          uVar28 = *(u32 *)((int)puVar16 + 0x54);
          uVar29 = *(u32 *)(puVar16 + 0xb);
          uVar30 = *(u32 *)((int)puVar16 + 0x5c);
          uVar19 = puVar16[0xc];
          uVar25 = *(u32 *)(puVar16 + 0xd);
          uVar26 = *(u32 *)((int)puVar16 + 0x6c);
          uVar14 = *(u32 *)(puVar16 + 0xe);
          uVar10 = *(u32 *)((int)puVar16 + 0x74);
          uVar11 = *(u32 *)(puVar16 + 0xf);
          uVar12 = *(u32 *)((int)puVar16 + 0x7c);
          uVar8 = puVar16[8];
          uVar22 = *(u32 *)(puVar16 + 9);
          uVar23 = *(u32 *)((int)puVar16 + 0x4c);
          puVar6[0x10] = (int)uVar8;
          puVar6[0x11] = (int)((u32)uVar8 >> 0x20);
          puVar6[0x12] = uVar22;
          puVar6[0x13] = uVar23;
          puVar6[0x14] = uVar27;
          puVar6[0x15] = uVar28;
          puVar6[0x16] = uVar29;
          puVar6[0x17] = uVar30;
          puVar6[0x18] = (int)uVar19;
          puVar6[0x19] = (int)((u32)uVar19 >> 0x20);
          puVar6[0x1a] = uVar25;
          puVar6[0x1b] = uVar26;
          puVar6[0x1c] = uVar14;
          puVar6[0x1d] = uVar10;
          puVar6[0x1e] = uVar11;
          puVar6[0x1f] = uVar12;
          uVar27 = *(u32 *)(puVar16 + 0x12);
          uVar28 = *(u32 *)((int)puVar16 + 0x94);
          uVar29 = *(u32 *)(puVar16 + 0x13);
          uVar30 = *(u32 *)((int)puVar16 + 0x9c);
          uVar19 = puVar16[0x14];
          uVar25 = *(u32 *)(puVar16 + 0x15);
          uVar26 = *(u32 *)((int)puVar16 + 0xac);
          uVar14 = *(u32 *)(puVar16 + 0x16);
          uVar10 = *(u32 *)((int)puVar16 + 0xb4);
          uVar11 = *(u32 *)(puVar16 + 0x17);
          uVar12 = *(u32 *)((int)puVar16 + 0xbc);
          uVar8 = puVar16[0x10];
          uVar22 = *(u32 *)(puVar16 + 0x11);
          uVar23 = *(u32 *)((int)puVar16 + 0x8c);
          puVar6[0x20] = (int)uVar8;
          puVar6[0x21] = (int)((u32)uVar8 >> 0x20);
          puVar6[0x22] = uVar22;
          puVar6[0x23] = uVar23;
          puVar6[0x24] = uVar27;
          puVar6[0x25] = uVar28;
          puVar6[0x26] = uVar29;
          puVar6[0x27] = uVar30;
          puVar6[0x28] = (int)uVar19;
          puVar6[0x29] = (int)((u32)uVar19 >> 0x20);
          puVar6[0x2a] = uVar25;
          puVar6[0x2b] = uVar26;
          puVar6[0x2c] = uVar14;
          puVar6[0x2d] = uVar10;
          puVar6[0x2e] = uVar11;
          puVar6[0x2f] = uVar12;
          uVar27 = *(u32 *)(puVar16 + 0x1a);
          uVar28 = *(u32 *)((int)puVar16 + 0xd4);
          uVar29 = *(u32 *)(puVar16 + 0x1b);
          uVar30 = *(u32 *)((int)puVar16 + 0xdc);
          uVar19 = puVar16[0x1c];
          uVar25 = *(u32 *)(puVar16 + 0x1d);
          uVar26 = *(u32 *)((int)puVar16 + 0xec);
          uVar14 = *(u32 *)(puVar16 + 0x1e);
          uVar10 = *(u32 *)((int)puVar16 + 0xf4);
          uVar11 = *(u32 *)(puVar16 + 0x1f);
          uVar12 = *(u32 *)((int)puVar16 + 0xfc);
          uVar8 = puVar16[0x18];
          uVar22 = *(u32 *)(puVar16 + 0x19);
          uVar23 = *(u32 *)((int)puVar16 + 0xcc);
          puVar6[0x30] = (int)uVar8;
          puVar6[0x31] = (int)((u32)uVar8 >> 0x20);
          puVar6[0x32] = uVar22;
          puVar6[0x33] = uVar23;
          puVar6[0x34] = uVar27;
          puVar6[0x35] = uVar28;
          puVar6[0x36] = uVar29;
          puVar6[0x37] = uVar30;
          puVar6[0x38] = (int)uVar19;
          puVar6[0x39] = (int)((u32)uVar19 >> 0x20);
          puVar6[0x3a] = uVar25;
          puVar6[0x3b] = uVar26;
          puVar6[0x3c] = uVar14;
          puVar6[0x3d] = uVar10;
          puVar6[0x3e] = uVar11;
          puVar6[0x3f] = uVar12;
          uVar27 = *(u32 *)(puVar16 + 0x22);
          uVar28 = *(u32 *)((int)puVar16 + 0x114);
          uVar29 = *(u32 *)(puVar16 + 0x23);
          uVar30 = *(u32 *)((int)puVar16 + 0x11c);
          uVar19 = puVar16[0x24];
          uVar25 = *(u32 *)(puVar16 + 0x25);
          uVar26 = *(u32 *)((int)puVar16 + 300);
          uVar14 = *(u32 *)(puVar16 + 0x26);
          uVar10 = *(u32 *)((int)puVar16 + 0x134);
          uVar11 = *(u32 *)(puVar16 + 0x27);
          uVar12 = *(u32 *)((int)puVar16 + 0x13c);
          uVar8 = puVar16[0x20];
          uVar22 = *(u32 *)(puVar16 + 0x21);
          uVar23 = *(u32 *)((int)puVar16 + 0x10c);
          puVar6[0x40] = (int)uVar8;
          puVar6[0x41] = (int)((u32)uVar8 >> 0x20);
          puVar6[0x42] = uVar22;
          puVar6[0x43] = uVar23;
          puVar6[0x44] = uVar27;
          puVar6[0x45] = uVar28;
          puVar6[0x46] = uVar29;
          puVar6[0x47] = uVar30;
          puVar6[0x48] = (int)uVar19;
          puVar6[0x49] = (int)((u32)uVar19 >> 0x20);
          puVar6[0x4a] = uVar25;
          puVar6[0x4b] = uVar26;
          puVar6[0x4c] = uVar14;
          puVar6[0x4d] = uVar10;
          puVar6[0x4e] = uVar11;
          puVar6[0x4f] = uVar12;
          uVar27 = *(u32 *)(puVar16 + 0x2a);
          uVar28 = *(u32 *)((int)puVar16 + 0x154);
          uVar29 = *(u32 *)(puVar16 + 0x2b);
          uVar30 = *(u32 *)((int)puVar16 + 0x15c);
          uVar19 = puVar16[0x2c];
          uVar25 = *(u32 *)(puVar16 + 0x2d);
          uVar26 = *(u32 *)((int)puVar16 + 0x16c);
          uVar14 = *(u32 *)(puVar16 + 0x2e);
          uVar10 = *(u32 *)((int)puVar16 + 0x174);
          uVar11 = *(u32 *)(puVar16 + 0x2f);
          uVar12 = *(u32 *)((int)puVar16 + 0x17c);
          uVar8 = puVar16[0x28];
          uVar22 = *(u32 *)(puVar16 + 0x29);
          uVar23 = *(u32 *)((int)puVar16 + 0x14c);
          puVar6[0x50] = (int)uVar8;
          puVar6[0x51] = (int)((u32)uVar8 >> 0x20);
          puVar6[0x52] = uVar22;
          puVar6[0x53] = uVar23;
          puVar6[0x54] = uVar27;
          puVar6[0x55] = uVar28;
          puVar6[0x56] = uVar29;
          puVar6[0x57] = uVar30;
          puVar6[0x58] = (int)uVar19;
          puVar6[0x59] = (int)((u32)uVar19 >> 0x20);
          puVar6[0x5a] = uVar25;
          puVar6[0x5b] = uVar26;
          puVar6[0x5c] = uVar14;
          puVar6[0x5d] = uVar10;
          puVar6[0x5e] = uVar11;
          puVar6[0x5f] = uVar12;
          uVar27 = *(u32 *)(puVar16 + 0x32);
          uVar28 = *(u32 *)((int)puVar16 + 0x194);
          uVar29 = *(u32 *)(puVar16 + 0x33);
          uVar30 = *(u32 *)((int)puVar16 + 0x19c);
          uVar19 = puVar16[0x34];
          uVar25 = *(u32 *)(puVar16 + 0x35);
          uVar26 = *(u32 *)((int)puVar16 + 0x1ac);
          uVar14 = *(u32 *)(puVar16 + 0x36);
          uVar10 = *(u32 *)((int)puVar16 + 0x1b4);
          uVar11 = *(u32 *)(puVar16 + 0x37);
          uVar12 = *(u32 *)((int)puVar16 + 0x1bc);
          uVar8 = puVar16[0x30];
          uVar22 = *(u32 *)(puVar16 + 0x31);
          uVar23 = *(u32 *)((int)puVar16 + 0x18c);
          puVar6[0x60] = (int)uVar8;
          puVar6[0x61] = (int)((u32)uVar8 >> 0x20);
          puVar6[0x62] = uVar22;
          puVar6[99] = uVar23;
          puVar6[100] = uVar27;
          puVar6[0x65] = uVar28;
          puVar6[0x66] = uVar29;
          puVar6[0x67] = uVar30;
          puVar6[0x68] = (int)uVar19;
          puVar6[0x69] = (int)((u32)uVar19 >> 0x20);
          puVar6[0x6a] = uVar25;
          puVar6[0x6b] = uVar26;
          puVar6[0x6c] = uVar14;
          puVar6[0x6d] = uVar10;
          puVar6[0x6e] = uVar11;
          puVar6[0x6f] = uVar12;
          uVar27 = *(u32 *)(puVar16 + 0x3a);
          uVar28 = *(u32 *)((int)puVar16 + 0x1d4);
          uVar29 = *(u32 *)(puVar16 + 0x3b);
          uVar30 = *(u32 *)((int)puVar16 + 0x1dc);
          uVar19 = puVar16[0x3c];
          uVar25 = *(u32 *)(puVar16 + 0x3d);
          uVar26 = *(u32 *)((int)puVar16 + 0x1ec);
          uVar14 = *(u32 *)(puVar16 + 0x3e);
          uVar10 = *(u32 *)((int)puVar16 + 500);
          uVar11 = *(u32 *)(puVar16 + 0x3f);
          uVar12 = *(u32 *)((int)puVar16 + 0x1fc);
          uVar8 = puVar16[0x38];
          uVar22 = *(u32 *)(puVar16 + 0x39);
          uVar23 = *(u32 *)((int)puVar16 + 0x1cc);
          puVar6[0x70] = (int)uVar8;
          puVar6[0x71] = (int)((u32)uVar8 >> 0x20);
          puVar6[0x72] = uVar22;
          puVar6[0x73] = uVar23;
          puVar16 = puVar16 + 0x40;
          puVar6[0x74] = uVar27;
          puVar6[0x75] = uVar28;
          puVar6[0x76] = uVar29;
          puVar6[0x77] = uVar30;
          puVar6[0x78] = (int)uVar19;
          puVar6[0x79] = (int)((u32)uVar19 >> 0x20);
          puVar6[0x7a] = uVar25;
          puVar6[0x7b] = uVar26;
          puVar6[0x7c] = uVar14;
          puVar6[0x7d] = uVar10;
          puVar6[0x7e] = uVar11;
          puVar6[0x7f] = uVar12;
          puVar6 = puVar6 + 0x80;
        } while (uVar32 < uVar4 - 8);
      }
      for (; uVar32 < uVar4; uVar32 = uVar32 + 1) {
        uVar19 = puVar16[2];
        uVar28 = *(u32 *)(puVar16 + 3);
        uVar29 = *(u32 *)((int)puVar16 + 0x1c);
        uVar14 = *(u32 *)(puVar16 + 4);
        uVar10 = *(u32 *)((int)puVar16 + 0x24);
        uVar11 = *(u32 *)(puVar16 + 5);
        uVar12 = *(u32 *)((int)puVar16 + 0x2c);
        uVar8 = puVar16[6];
        uVar26 = *(u32 *)(puVar16 + 7);
        uVar27 = *(u32 *)((int)puVar16 + 0x3c);
        uVar22 = *(u32 *)((int)puVar16 + 4);
        uVar23 = *(u32 *)(puVar16 + 1);
        uVar25 = *(u32 *)((int)puVar16 + 0xc);
        *puVar6 = *(u32 *)puVar16;
        puVar6[1] = uVar22;
        puVar6[2] = uVar23;
        puVar6[3] = uVar25;
        puVar16 = puVar16 + 8;
        puVar6[4] = (int)uVar19;
        puVar6[5] = (int)((u32)uVar19 >> 0x20);
        puVar6[6] = uVar28;
        puVar6[7] = uVar29;
        puVar6[8] = uVar14;
        puVar6[9] = uVar10;
        puVar6[10] = uVar11;
        puVar6[0xb] = uVar12;
        puVar6[0xc] = (int)uVar8;
        puVar6[0xd] = (int)((u32)uVar8 >> 0x20);
        puVar6[0xe] = uVar26;
        puVar6[0xf] = uVar27;
        puVar6 = puVar6 + 0x10;
      }
    }
    uVar19 = 1;
    DAT_007ce9f4 = (u32 *)((u32)(puVar6));
  }
  return uVar19;
}

// FUN_0046F400 NONMATCHING

u64 FUN_0046f400(u32 *param_1,u32 *param_2)

{
  long lVar1;
  u8 bVar2;
  Vec128 auVar3;
  float *pfVar4;
  float fVar5;
  u64 in_v0_udw;
  u32 in_v1_udw;
  u32 in_register_0000003c;
  u32 *puVar6;
  u64 in_a0_udw;
  Vec128 auVar7;
  Vec128 auVar8;
  u32 *puVar9;
  u32 in_a1_udw;
  u32 in_register_0000005c;
  Vec128 auVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar14 = 0;
  iVar12 = DAT_0095ef98;
  iVar13 = DAT_0095efc4;
  if (0 < DAT_0095efc8) {
    do {
      iVar15 = 0;
      do {
        iVar11 = iVar12;
        puVar6 = param_1;
        puVar9 = param_2;
        iVar15 = iVar15 + 7;
        *puVar6 = *(u32 *)(iVar11 + 4);
        puVar6[1] = *(u32 *)(iVar11 + 8);
        *puVar9 = *(u32 *)(iVar11 + 0xc);
        puVar9[1] = *(u32 *)(iVar11 + 0x10);
        puVar9[2] = *(u32 *)(iVar11 + 0x14);
        puVar6[2] = *(u32 *)(iVar11 + 0x1c);
        puVar6[3] = *(u32 *)(iVar11 + 0x20);
        puVar9[3] = *(u32 *)(iVar11 + 0x24);
        puVar9[4] = *(u32 *)(iVar11 + 0x28);
        puVar9[5] = *(u32 *)(iVar11 + 0x2c);
        puVar6[4] = *(u32 *)(iVar11 + 0x34);
        puVar6[5] = *(u32 *)(iVar11 + 0x38);
        puVar9[6] = *(u32 *)(iVar11 + 0x3c);
        puVar9[7] = *(u32 *)(iVar11 + 0x40);
        puVar9[8] = *(u32 *)(iVar11 + 0x44);
        puVar6[6] = *(u32 *)(iVar11 + 0x4c);
        puVar6[7] = *(u32 *)(iVar11 + 0x50);
        puVar9[9] = *(u32 *)(iVar11 + 0x54);
        puVar9[10] = *(u32 *)(iVar11 + 0x58);
        puVar9[0xb] = *(u32 *)(iVar11 + 0x5c);
        puVar6[8] = *(u32 *)(iVar11 + 100);
        puVar6[9] = *(u32 *)(iVar11 + 0x68);
        puVar9[0xc] = *(u32 *)(iVar11 + 0x6c);
        puVar9[0xd] = *(u32 *)(iVar11 + 0x70);
        puVar9[0xe] = *(u32 *)(iVar11 + 0x74);
        puVar6[10] = *(u32 *)(iVar11 + 0x7c);
        puVar6[0xb] = *(u32 *)(iVar11 + 0x80);
        puVar9[0xf] = *(u32 *)(iVar11 + 0x84);
        puVar9[0x10] = *(u32 *)(iVar11 + 0x88);
        puVar9[0x11] = *(u32 *)(iVar11 + 0x8c);
        puVar6[0xc] = *(u32 *)(iVar11 + 0x94);
        puVar6[0xd] = *(u32 *)(iVar11 + 0x98);
        puVar9[0x12] = *(u32 *)(iVar11 + 0x9c);
        puVar9[0x13] = *(u32 *)(iVar11 + 0xa0);
        puVar9[0x14] = *(u32 *)(iVar11 + 0xa4);
        param_2 = puVar9 + 0x15;
        param_1 = puVar6 + 0xe;
        iVar12 = iVar11 + 0xa8;
      } while (iVar15 < 0x20);
      iVar14 = iVar14 + 1;
      iVar12 = iVar11 + 0x108;
      iVar13 = iVar13 + -0x28;
      puVar6[0xe] = *(u32 *)(iVar11 + 0xac);
      puVar6[0xf] = *(u32 *)(iVar11 + 0xb0);
      puVar9[0x15] = *(u32 *)(iVar11 + 0xb4);
      puVar9[0x16] = *(u32 *)(iVar11 + 0xb8);
      puVar9[0x17] = *(u32 *)(iVar11 + 0xbc);
      puVar6[0x10] = *(u32 *)(iVar11 + 0xc4);
      puVar6[0x11] = *(u32 *)(iVar11 + 200);
      puVar9[0x18] = *(u32 *)(iVar11 + 0xcc);
      puVar9[0x19] = *(u32 *)(iVar11 + 0xd0);
      puVar9[0x1a] = *(u32 *)(iVar11 + 0xd4);
      puVar6[0x12] = *(u32 *)(iVar11 + 0xdc);
      puVar6[0x13] = *(u32 *)(iVar11 + 0xe0);
      puVar9[0x1b] = *(u32 *)(iVar11 + 0xe4);
      puVar9[0x1c] = *(u32 *)(iVar11 + 0xe8);
      puVar9[0x1d] = *(u32 *)(iVar11 + 0xec);
      puVar6[0x14] = *(u32 *)(iVar11 + 0xf4);
      puVar6[0x15] = *(u32 *)(iVar11 + 0xf8);
      puVar9[0x1e] = *(u32 *)(iVar11 + 0xfc);
      puVar9[0x1f] = *(u32 *)(iVar11 + 0x100);
      puVar9[0x20] = *(u32 *)(iVar11 + 0x104);
      puVar6[0x16] = *(u32 *)(iVar11 + 0x10c);
      puVar6[0x17] = *(u32 *)(iVar11 + 0x110);
      param_1 = puVar6 + 0x18;
      puVar9[0x21] = *(u32 *)(iVar11 + 0x114);
      puVar9[0x22] = *(u32 *)(iVar11 + 0x118);
      puVar9[0x23] = *(u32 *)(iVar11 + 0x11c);
      param_2 = puVar9 + 0x24;
    } while (iVar14 < DAT_0095efc8);
  }
  iVar14 = 0;
  if (0 < iVar13) {
    if (8 < iVar13) {
      bVar2 = 0;
      if ((-1 < iVar13) && (iVar13 < 0x7fffffff)) {
        bVar2 = 1;
      }
      if (bVar2) {
        do {
          iVar14 = iVar14 + 8;
          *param_1 = *(u32 *)(iVar12 + 4);
          param_1[1] = *(u32 *)(iVar12 + 8);
          *param_2 = *(u32 *)(iVar12 + 0xc);
          param_2[1] = *(u32 *)(iVar12 + 0x10);
          param_2[2] = *(u32 *)(iVar12 + 0x14);
          param_1[2] = *(u32 *)(iVar12 + 0x1c);
          param_1[3] = *(u32 *)(iVar12 + 0x20);
          param_2[3] = *(u32 *)(iVar12 + 0x24);
          param_2[4] = *(u32 *)(iVar12 + 0x28);
          param_2[5] = *(u32 *)(iVar12 + 0x2c);
          param_1[4] = *(u32 *)(iVar12 + 0x34);
          param_1[5] = *(u32 *)(iVar12 + 0x38);
          param_2[6] = *(u32 *)(iVar12 + 0x3c);
          param_2[7] = *(u32 *)(iVar12 + 0x40);
          param_2[8] = *(u32 *)(iVar12 + 0x44);
          param_1[6] = *(u32 *)(iVar12 + 0x4c);
          param_1[7] = *(u32 *)(iVar12 + 0x50);
          param_2[9] = *(u32 *)(iVar12 + 0x54);
          param_2[10] = *(u32 *)(iVar12 + 0x58);
          param_2[0xb] = *(u32 *)(iVar12 + 0x5c);
          param_1[8] = *(u32 *)(iVar12 + 100);
          param_1[9] = *(u32 *)(iVar12 + 0x68);
          param_2[0xc] = *(u32 *)(iVar12 + 0x6c);
          param_2[0xd] = *(u32 *)(iVar12 + 0x70);
          param_2[0xe] = *(u32 *)(iVar12 + 0x74);
          param_1[10] = *(u32 *)(iVar12 + 0x7c);
          param_1[0xb] = *(u32 *)(iVar12 + 0x80);
          param_2[0xf] = *(u32 *)(iVar12 + 0x84);
          param_2[0x10] = *(u32 *)(iVar12 + 0x88);
          param_2[0x11] = *(u32 *)(iVar12 + 0x8c);
          param_1[0xc] = *(u32 *)(iVar12 + 0x94);
          param_1[0xd] = *(u32 *)(iVar12 + 0x98);
          param_2[0x12] = *(u32 *)(iVar12 + 0x9c);
          param_2[0x13] = *(u32 *)(iVar12 + 0xa0);
          param_2[0x14] = *(u32 *)(iVar12 + 0xa4);
          param_1[0xe] = *(u32 *)(iVar12 + 0xac);
          param_1[0xf] = *(u32 *)(iVar12 + 0xb0);
          param_1 = param_1 + 0x10;
          param_2[0x15] = *(u32 *)(iVar12 + 0xb4);
          param_2[0x16] = *(u32 *)(iVar12 + 0xb8);
          param_2[0x17] = *(u32 *)(iVar12 + 0xbc);
          iVar12 = iVar12 + 0xc0;
          param_2 = param_2 + 0x18;
        } while (iVar14 < iVar13 + -8);
      }
    }
    for (; iVar14 < iVar13; iVar14 = iVar14 + 1) {
      *param_1 = *(u32 *)(iVar12 + 4);
      param_1[1] = *(u32 *)(iVar12 + 8);
      param_1 = param_1 + 2;
      *param_2 = *(u32 *)(iVar12 + 0xc);
      param_2[1] = *(u32 *)(iVar12 + 0x10);
      param_2[2] = *(u32 *)(iVar12 + 0x14);
      iVar12 = iVar12 + 0x18;
      param_2 = param_2 + 3;
    }
  }
  lVar1 = ((code)FUN_004d59d0)(0,0xb);
  pfVar4 = (float *)DAT_007ce9f4;
  if (lVar1 == 0) {
    ((code)FUN_005225a8)(0x6b5750,s_G3_2DStroke_Node_c_006b5770,0x10a);
  }
  else {
    auVar8._8_8_ = in_v0_udw;
    auVar8._0_8_ = 0x1000101;
    auVar10._8_4_ = in_v1_udw;
    auVar10._0_8_ = 0x6c0903cf;
    auVar10._12_4_ = in_register_0000003c;
    auVar10 = _ppacw(auVar10,auVar8);
    auVar7._8_8_ = in_a0_udw;
    auVar7._0_8_ = 0x10000009;
    auVar3._4_4_ = in_register_0000005c;
    auVar3._0_4_ = in_a1_udw;
    auVar3._8_8_ = 0;
    auVar8 = _ppacw(auVar3 << 0x40,auVar7);
    auVar8 = _ppacw(auVar10,auVar8);
    *DAT_007ce9f4 = (*(u32*)((u8*)&auVar8 + 0));
    pfVar4[1] = auVar8._4_4_;
    pfVar4[2] = auVar8._8_4_;
    pfVar4[3] = auVar8._12_4_;
    fVar16 = DAT_0095efa4;
    fVar19 = DAT_0095efa0;
    fVar5 = DAT_0095ef58;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    *DAT_007ce9f4 = DAT_0095ef88[0x1c];
    pfVar4[5] = fVar19;
    pfVar4[6] = fVar5;
    pfVar4[7] = fVar16;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    if (DAT_0095ef88[0x1a] == 0.0) {
      fVar5 = 1.0;
      fVar19 = *DAT_0095ef88;
    }
    else {
      fVar5 = 0.50235295;
      fVar19 = *DAT_0095ef88;
    }
    fVar17 = DAT_0095ef88[1];
    fVar18 = DAT_0095ef88[2];
    fVar16 = DAT_0095ef88[3];
    *DAT_007ce9f4 = fVar19 * fVar5;
    pfVar4[5] = fVar17 * fVar5;
    pfVar4[6] = fVar18 * fVar5;
    pfVar4[7] = fVar16 * 0.50235295;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    fVar16 = DAT_0095ef88[7];
    fVar17 = DAT_0095ef88[8];
    fVar19 = DAT_0095ef88[9];
    *DAT_007ce9f4 = DAT_0095ef88[6] * fVar5;
    pfVar4[5] = fVar16 * fVar5;
    pfVar4[6] = fVar17 * fVar5;
    pfVar4[7] = fVar19 * 0.50235295;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    fVar16 = DAT_0095ef88[0xd];
    fVar17 = DAT_0095ef88[0xe];
    fVar19 = DAT_0095ef88[0xf];
    *DAT_007ce9f4 = DAT_0095ef88[0xc] * fVar5;
    pfVar4[5] = fVar16 * fVar5;
    pfVar4[6] = fVar17 * fVar5;
    pfVar4[7] = fVar19 * 0.50235295;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    fVar19 = DAT_0095ef88[0x15];
    fVar16 = DAT_0095ef88[0x13];
    fVar17 = DAT_0095ef88[0x14];
    *DAT_007ce9f4 = DAT_0095ef88[0x12] * fVar5;
    pfVar4[5] = fVar16 * fVar5;
    pfVar4[6] = fVar17 * fVar5;
    pfVar4[7] = fVar19 * 0.50235295;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    fVar5 = DAT_0095ef88[5];
    *DAT_007ce9f4 = DAT_0095ef88[4];
    pfVar4[5] = fVar5;
    pfVar4[6] = 0.0;
    pfVar4[7] = 0.0;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    fVar5 = DAT_0095ef88[0xb];
    *DAT_007ce9f4 = DAT_0095ef88[10];
    pfVar4[5] = fVar5;
    pfVar4[6] = 0.0;
    pfVar4[7] = 0.0;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    fVar5 = DAT_0095ef88[0x11];
    *DAT_007ce9f4 = DAT_0095ef88[0x10];
    pfVar4[5] = fVar5;
    pfVar4[6] = 0.0;
    pfVar4[7] = 0.0;
    pfVar4 = (float *)DAT_007ce9f4;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
    fVar5 = DAT_0095ef88[0x17];
    *DAT_007ce9f4 = DAT_0095ef88[0x16];
    pfVar4[5] = fVar5;
    pfVar4[6] = 0.0;
    pfVar4[7] = 0.0;
    DAT_007ce9f4 = DAT_007ce9f4 + 4;
  }
  return 1;
}

// FUN_0046FDD0
asm u64 FUN_0046fdd0(int param_1)
{
  .set noreorder
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
  .word 0x70623b89
  .word 0x8f85bd04
  .word 0x3c026c01
  .word 0x240400fe
  .word 0x344303fa
  .word 0x0000302d
  .word 0x3c020100
  .word 0x0003183c
  .word 0x34420404
  .word 0x00431025
  .word 0x7ca70000
  .word 0x8f83bd04
  .word 0x24630010
  .word 0xaf83bd04
  .word 0xa2040047
  .word 0x70461b89
  .word 0x8f82bd04
  .word 0x7c430000
  .word 0x8f83bd04
  .word 0x8f82bdc8
  .word 0x24630010
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
  .word 0x1060006b
  .word 0x00000000
  .word 0x30430004
  .word 0x10600068
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
  .word 0x10c50063
  .word 0x0000202d
  .word 0x9f85be10
  .word 0x0004203c
  .word 0x0002103c
  .word 0x0004203e
  .word 0x0002103e
  .word 0x0005283c
  .word 0x00a42025
  .word 0x70822389
  .word 0x0003183c
  .word 0x3c020096
  .word 0x0003183f
  .word 0x7c640000
  .word 0x8f83bd04
  .word 0x8c42ef84
  .word 0x24630010
  .word 0xaf83bd04
  .word 0x8c420014
  .word 0x38420001
  .word 0x0002102b
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
  .word 0x1000ff9a
  .word 0xaf83bd04
  .word 0x24040020
  .word 0x1000ff9c
  .word 0xaf84be0c
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000ffed
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00470200
asm u64 FUN_00470200(float *param_1,float *param_2)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x3c020096
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x0080902d
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x8c50ef8c
  .word 0x8e040134
  .word 0x0c130824
  .word 0x00a0882d
  .word 0x8e030010
  .word 0x30630002
  .word 0x10600005
  .word 0x00000000
  .word 0x24080002
  .word 0x640600ff
  .word 0x10000004
  .word 0x24070001
  .word 0x24080001
  .word 0x0000302d
  .word 0x0000382d
  .word 0x3c030096
  .word 0x8c69efc4
  .word 0x4480a000
  .word 0x3c030096
  .word 0x8c63efc8
  .word 0x0003082a
  .word 0x10200046
  .word 0x0000502d
  .word 0x00082040
  .word 0x30c300ff
  .word 0x00882021
  .word 0x240fffff
  .word 0x00042080
  .word 0x3c0c0096
  .word 0x3c0e0096
  .word 0x3c0d0096
  .word 0x8dc5ef94
  .word 0x0000582d
  .word 0x00a42821
  .word 0xada5ef94
  .word 0x00a82823
  .word 0x00e5c021
  .word 0x93190000
  .word 0x90b80000
  .word 0x0079c824
  .word 0x0019ca00
  .word 0x0319c825
  .word 0x2b380080
  .word 0x1700000e
  .word 0x00000000
  .word 0x8e180124
  .word 0x0338c823
  .word 0x072000fe
  .word 0x00000000
  .word 0x8e180128
  .word 0x0338082a
  .word 0x102000fa
  .word 0x00000000
  .word 0x8e18012c
  .word 0x0019c840
  .word 0x0319c021
  .word 0x10000005
  .word 0x87180000
  .word 0x0019c040
  .word 0x0218c021
  .word 0x87180024
  .word 0x00000000
  .word 0x070000f1
  .word 0x00000000
  .word 0x0018c140
  .word 0x0058c021
  .word 0xc7000008
  .word 0xe6400000
  .word 0xc700000c
  .word 0xe6400004
  .word 0xc7000000
  .word 0xe6400008
  .word 0xc7000010
  .word 0x2652000c
  .word 0xe6200000
  .word 0xc7000014
  .word 0xe6200004
  .word 0xc7010000
  .word 0x26310008
  .word 0xc600000c
  .word 0x46000800
  .word 0x4600a500
  .word 0x256b0001
  .word 0x2978000c
  .word 0x1700ffcf
  .word 0x00a82823
  .word 0x8d85efc8
  .word 0x254a0001
  .word 0x0145282a
  .word 0x14a0ffc5
  .word 0x2529fff4
  .word 0x00000000
  .word 0x01285018
  .word 0x3c030096
  .word 0x8c65ef94
  .word 0x0009082a
  .word 0x0000202d
  .word 0x3c030096
  .word 0x00aa2821
  .word 0xac65ef94
  .word 0x10200035
  .word 0x00a82823
  .word 0x30c300ff
  .word 0x2406ffff
  .word 0x00e55821
  .word 0x90aa0000
  .word 0x916b0000
  .word 0x006b5824
  .word 0x000b5a00
  .word 0x014b5825
  .word 0x296a0080
  .word 0x1540000e
  .word 0x00000000
  .word 0x8e0a0124
  .word 0x016a5823
  .word 0x056000c6
  .word 0x00000000
  .word 0x8e0a0128
  .word 0x016a082a
  .word 0x102000c2
  .word 0x00000000
  .word 0x8e0a012c
  .word 0x000b5840
  .word 0x014b5021
  .word 0x10000005
  .word 0x854a0000
  .word 0x000b5040
  .word 0x020a5021
  .word 0x854a0024
  .word 0x00000000
  .word 0x054000b9
  .word 0x00000000
  .word 0x000a5140
  .word 0x004a5021
  .word 0xc5400008
  .word 0xe6400000
  .word 0xc540000c
  .word 0xe6400004
  .word 0xc5400000
  .word 0xe6400008
  .word 0xc5400010
  .word 0x2652000c
  .word 0xe6200000
  .word 0xc5400014
  .word 0xe6200004
  .word 0xc5410000
  .word 0x26310008
  .word 0xc600000c
  .word 0x46000800
  .word 0x4600a500
  .word 0x24840001
  .word 0x0089502a
  .word 0x1540ffcf
  .word 0x00a82823
  .word 0x0000202d
  .word 0x0c135674
  .word 0x24050009
  .word 0x104000a8
  .word 0x00000000
  .word 0x3c026c07
  .word 0x3c031000
  .word 0x344403cf
  .word 0x0000282d
  .word 0x3c020100
  .word 0x24090412
  .word 0x34420101
  .word 0x3c080096
  .word 0x708234c8
  .word 0xafa00058
  .word 0xafa0005c
  .word 0x34640007
  .word 0x8f82bd04
  .word 0x70a424c8
  .word 0x70c424c8
  .word 0x7c440000
  .word 0x3c030096
  .word 0x3c020096
  .word 0x8f84bd04
  .word 0xc440efa0
  .word 0x8c63ef88
  .word 0x3c070096
  .word 0x3c060096
  .word 0x3c050096
  .word 0x3c020096
  .word 0xc442ef58
  .word 0xe7a000a4
  .word 0x3c020096
  .word 0xc441efa4
  .word 0xe7a200a8
  .word 0x3c023f00
  .word 0x34429a34
  .word 0x44820000
  .word 0x00000000
  .word 0xe7a100ac
  .word 0x24820010
  .word 0xaf82bd04
  .word 0x3c040096
  .word 0xc4620070
  .word 0x3c02302d
  .word 0x3442c000
  .word 0x8f8abd04
  .word 0x0002103c
  .word 0x71221389
  .word 0xe7a200a0
  .word 0x3c030096
  .word 0x7ba900a0
  .word 0x7d490000
  .word 0x8d09ef88
  .word 0x8f88bd04
  .word 0x25080010
  .word 0xaf88bd04
  .word 0xc5240000
  .word 0x8f88bd04
  .word 0xc5230004
  .word 0xc5220008
  .word 0xc521000c
  .word 0x46040102
  .word 0x460300c2
  .word 0x46020082
  .word 0x46010042
  .word 0xe7a40090
  .word 0xe7a30094
  .word 0xe7a20098
  .word 0xe7a1009c
  .word 0x7ba90090
  .word 0x7d090000
  .word 0x8ce8ef88
  .word 0x8f87bd04
  .word 0x24e70010
  .word 0xaf87bd04
  .word 0xc5040018
  .word 0x8f87bd04
  .word 0xc503001c
  .word 0xc5020020
  .word 0xc5010024
  .word 0x46040102
  .word 0x460300c2
  .word 0x46020082
  .word 0x46010042
  .word 0xe7a40080
  .word 0xe7a30084
  .word 0xe7a20088
  .word 0xe7a1008c
  .word 0x7ba80080
  .word 0x7ce80000
  .word 0x8cc7ef88
  .word 0x8f86bd04
  .word 0x24c60010
  .word 0xaf86bd04
  .word 0xc4e40030
  .word 0x8f86bd04
  .word 0xc4e30034
  .word 0xc4e20038
  .word 0xc4e1003c
  .word 0x46040102
  .word 0x460300c2
  .word 0x46020082
  .word 0x46010042
  .word 0xe7a40070
  .word 0xe7a30074
  .word 0xe7a20078
  .word 0xe7a1007c
  .word 0x7ba70070
  .word 0x7cc70000
  .word 0x8ca6ef88
  .word 0x8f85bd04
  .word 0x24a50010
  .word 0xaf85bd04
  .word 0xc4c40048
  .word 0x8f85bd04
  .word 0xc4c3004c
  .word 0xc4c20050
  .word 0xc4c10054
  .word 0x46040102
  .word 0x460300c2
  .word 0x46020082
  .word 0x46010002
  .word 0xe7a40060
  .word 0xe7a30064
  .word 0xe7a20068
  .word 0xe7a0006c
  .word 0x7ba60060
  .word 0x7ca60000
  .word 0xc460efa8
  .word 0x8c84ef8c
  .word 0x8f83bd04
  .word 0xe7a00054
  .word 0x24630010
  .word 0xaf83bd04
  .word 0xc480000c
  .word 0xe7a00050
  .word 0x8f84bd04
  .word 0x7ba30050
  .word 0x7c830000
  .word 0x7c820010
  .word 0x8f82bd04
  .word 0x24420020
  .word 0xaf82bd04
  .word 0x3c030096
  .word 0x24020001
  .word 0x10000021
  .word 0xe474efa8
  .word 0x1000ff0f
  .word 0x01e0c02d
  .word 0xae400000
  .word 0xae400004
  .word 0xae400008
  .word 0xae200000
  .word 0x2652000c
  .word 0xae200004
  .word 0xc600000c
  .word 0x26310008
  .word 0x1000ff19
  .word 0x4600a500
  .word 0x1000ff47
  .word 0x00c0502d
  .word 0xae400000
  .word 0xae400004
  .word 0xae400008
  .word 0xae200000
  .word 0x2652000c
  .word 0xae200004
  .word 0xc600000c
  .word 0x26310008
  .word 0x1000ff51
  .word 0x4600a500
  .word 0x3c04006b
  .word 0x3c05006b
  .word 0x248458a0
  .word 0x24a558c0
  .word 0x0c14896a
  .word 0x2406014a
  .word 0x1000ffdd
  .word 0x00000000
  .word 0xdfbf0040
  .word 0xc7b40000
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca40000
  .word 0x0811c080
  .word 0x8ca50004
  .word 0x00000000
  .word 0x27bdffb0
  .word 0x3c030096
  .word 0xffbf0030
  .word 0x3c020096
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8c900008
  .word 0x9463efc4
  .word 0xae03002c
  .word 0x9442efc4
  .word 0x0c12ab98
  .word 0xae020008
  .word 0xae020004
  .word 0x3c030078
  .word 0x3c020096
  .word 0x3c050096
  .word 0x8c47ef54
  .word 0x24060006
  .word 0x2784af20
  .word 0x2463dec0
  .word 0x24a50070
  .word 0xae070000
  .word 0x2402ff00
  .word 0xae000020
  .word 0xae060024
  .word 0xae000028
  .word 0xae440010
  .word 0xae43000c
  .word 0x8e04002c
  .word 0x8e43000c
  .word 0xac640008
  .word 0x8e43000c
  .word 0xac60000c
  .word 0x8e43000c
  .word 0xac600000
  .word 0x8f86bb60
  .word 0x8e47000c
  .word 0x92040024
  .word 0x00a62821
  .word 0x8ce30000
  .word 0x00852021
  .word 0x90840027
  .word 0x00621024
  .word 0x00441025
  .word 0xace20000
  .word 0x8e020028
  .word 0x1040003d
  .word 0x00000000
  .word 0x8e450010
  .word 0x3c04006b
  .word 0x3c030007
  .word 0x248458e0
  .word 0x3463fff8
  .word 0x3c020096
  .word 0xaca00004
  .word 0x8e45000c
  .word 0xaca40018
  .word 0x8e040028
  .word 0xaca40010
  .word 0x8e04002c
  .word 0xaca40014
  .word 0xae430014
  .word 0x8c420070
  .word 0x8e050004
  .word 0x10a00030
  .word 0x24460020
  .word 0x0c130bcc
  .word 0x8e240000
  .word 0x8e030000
  .word 0x30630004
  .word 0x1460002c
  .word 0x24020001
  .word 0x8e43000c
  .word 0x0002103c
  .word 0x24060001
  .word 0x8c670000
  .word 0x30e30001
  .word 0x10660027
  .word 0x0002103f
  .word 0x30e300ff
  .word 0x10600029
  .word 0x00000000
  .word 0x30e30002
  .word 0x24050002
  .word 0x10650025
  .word 0x00000000
  .word 0x30e40010
  .word 0x24030010
  .word 0x10830027
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
  .word 0x1443001c
  .word 0x00000000
  .word 0x1000001e
  .word 0x24020001
  .word 0x8e43000c
  .word 0x8c620000
  .word 0x34420100
  .word 0x1000ffc0
  .word 0xac620000
  .word 0x1000ffd2
  .word 0xae260000
  .word 0x1000ffd4
  .word 0x24020002
  .word 0x24030004
  .word 0xa2430029
  .word 0x9383be04
  .word 0x1000ffee
  .word 0xa2430028
  .word 0x24030003
  .word 0xa2430029
  .word 0x9383be04
  .word 0x34630004
  .word 0x1000ffe8
  .word 0xa2430028
  .word 0x24030004
  .word 0xa2430029
  .word 0x9383be04
  .word 0x1000ffe3
  .word 0xa2430028
  .word 0x92420028
  .word 0x34420002
  .word 0x1000ffe2
  .word 0xa2420028
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
}

// FUN_004709E0
asm u64 FUN_004709e0(int param_1)
{
  .set noreorder
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
  .word 0x70623b89
  .word 0x8f85bd04
  .word 0x3c026c01
  .word 0x240400fe
  .word 0x344303fa
  .word 0x0000302d
  .word 0x3c020100
  .word 0x0003183c
  .word 0x34420404
  .word 0x00431025
  .word 0x7ca70000
  .word 0x8f83bd04
  .word 0x24630010
  .word 0xaf83bd04
  .word 0xa2040047
  .word 0x70461b89
  .word 0x8f82bd04
  .word 0x7c430000
  .word 0x8f83bd04
  .word 0x8f82bdc8
  .word 0x24630010
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
  .word 0x1060006b
  .word 0x00000000
  .word 0x30430004
  .word 0x10600068
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
  .word 0x10c50063
  .word 0x0000202d
  .word 0x9f85be10
  .word 0x0004203c
  .word 0x0002103c
  .word 0x0004203e
  .word 0x0002103e
  .word 0x0005283c
  .word 0x00a42025
  .word 0x70822389
  .word 0x0003183c
  .word 0x3c020096
  .word 0x0003183f
  .word 0x7c640000
  .word 0x8f83bd04
  .word 0x8c42ef84
  .word 0x24630010
  .word 0xaf83bd04
  .word 0x8c420014
  .word 0x38420001
  .word 0x0002102b
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
  .word 0x1000ff9a
  .word 0xaf83bd04
  .word 0x24040020
  .word 0x1000ff9c
  .word 0xaf84be0c
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000ffed
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00470E10
asm u64 FUN_00470e10(u32 *param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x3c020096
  .word 0xffbf0000
  .word 0x8c47ef98
  .word 0x3c020096
  .word 0x8c46ef9c
  .word 0x3c020096
  .word 0x8c42efc4
  .word 0x00021043
  .word 0x0002082a
  .word 0x1020001b
  .word 0x0000402d
  .word 0x3c020096
  .word 0xc4e00004
  .word 0x25080001
  .word 0xe4800000
  .word 0xc4e00008
  .word 0xe4800004
  .word 0xc4e0000c
  .word 0xe4a00000
  .word 0xc4e00010
  .word 0xe4a00004
  .word 0x24e70018
  .word 0xc4c00004
  .word 0xe4800008
  .word 0xc4c00008
  .word 0xe480000c
  .word 0xc4c0000c
  .word 0x24840010
  .word 0xe4a00008
  .word 0xc4c00010
  .word 0xe4a0000c
  .word 0x24c6ffe8
  .word 0x8c43efc4
  .word 0x00031843
  .word 0x0103182a
  .word 0x1460ffe8
  .word 0x24a50010
  .word 0x0000202d
  .word 0x0c135674
  .word 0x2405000c
  .word 0x104000c9
  .word 0x00000000
  .word 0x3c036c0a
  .word 0x3c020100
  .word 0x346303cf
  .word 0x34420101
  .word 0x706234c8
  .word 0x3c031000
  .word 0x0000282d
  .word 0x3464000a
  .word 0x8f82bd04
  .word 0x70a424c8
  .word 0x70c424c8
  .word 0x7c440000
  .word 0x3c030096
  .word 0x3c020096
  .word 0x8f84bd04
  .word 0xc442efa0
  .word 0x8c63ef88
  .word 0x248c0010
  .word 0x3c020096
  .word 0xaf8cbd04
  .word 0xc441ef58
  .word 0xe7a200a4
  .word 0x3c020096
  .word 0xc440efa4
  .word 0xe7a100a8
  .word 0xe7a000ac
  .word 0x3c020096
  .word 0xc4600070
  .word 0xe7a000a0
  .word 0x8f83bd04
  .word 0x7ba400a0
  .word 0x7c640000
  .word 0x8c43ef88
  .word 0x8f82bd04
  .word 0x244c0010
  .word 0xaf8cbd04
  .word 0x8c620068
  .word 0x10400006
  .word 0x00000000
  .word 0x3c023f00
  .word 0x34429a34
  .word 0x44820000
  .word 0x10000004
  .word 0xc4640000
  .word 0x3c023f80
  .word 0x44820000
  .word 0xc4640000
  .word 0x000c683c
  .word 0xc4630004
  .word 0x3c023f00
  .word 0xc4620008
  .word 0x344e9a34
  .word 0xc461000c
  .word 0x000d683f
  .word 0x448e2800
  .word 0x3c0c0096
  .word 0x3c0b0096
  .word 0x3c0a0096
  .word 0x46002102
  .word 0x3c090096
  .word 0xafa00058
  .word 0x3c080096
  .word 0xafa0005c
  .word 0x3c070096
  .word 0xafa00048
  .word 0x3c060096
  .word 0xafa0004c
  .word 0x3c050096
  .word 0x460018c2
  .word 0xafa00038
  .word 0xafa0003c
  .word 0x3c040096
  .word 0xafa00028
  .word 0x3c030096
  .word 0xafa0002c
  .word 0x3c020096
  .word 0x46001082
  .word 0x46012842
  .word 0xe7a40090
  .word 0xe7a30094
  .word 0xe7a20098
  .word 0xe7a1009c
  .word 0x7bae0090
  .word 0x7dae0000
  .word 0x8d8def88
  .word 0x8f8cbd04
  .word 0x258c0010
  .word 0xaf8cbd04
  .word 0xc5a40018
  .word 0x8f8cbd04
  .word 0xc5a3001c
  .word 0xc5a20020
  .word 0xc5a10024
  .word 0x46002102
  .word 0x460018c2
  .word 0x46001082
  .word 0x46012842
  .word 0xe7a40080
  .word 0xe7a30084
  .word 0xe7a20088
  .word 0xe7a1008c
  .word 0x7bad0080
  .word 0x7d8d0000
  .word 0x8d6def88
  .word 0x8f8bbd04
  .word 0x256c0010
  .word 0xaf8cbd04
  .word 0xc5a40030
  .word 0x8f8bbd04
  .word 0xc5a30034
  .word 0xc5a20038
  .word 0xc5a1003c
  .word 0x46002102
  .word 0x460018c2
  .word 0x46001082
  .word 0x46012842
  .word 0xe7a40070
  .word 0xe7a30074
  .word 0xe7a20078
  .word 0xe7a1007c
  .word 0x7bac0070
  .word 0x7d6c0000
  .word 0x8d4bef88
  .word 0x8f8abd04
  .word 0x254c0010
  .word 0xaf8cbd04
  .word 0xc5610054
  .word 0x8f8abd04
  .word 0xc5640048
  .word 0xc563004c
  .word 0xc5620050
  .word 0x46012842
  .word 0xe7a1006c
  .word 0x46002102
  .word 0x46001842
  .word 0x46001002
  .word 0xe7a40060
  .word 0xe7a10064
  .word 0xe7a00068
  .word 0x7bab0060
  .word 0x7d4b0000
  .word 0x8d2aef88
  .word 0x8f89bd04
  .word 0x252c0010
  .word 0xaf8cbd04
  .word 0xc5410010
  .word 0x8f89bd04
  .word 0xc5400014
  .word 0xe7a10050
  .word 0xe7a00054
  .word 0x7baa0050
  .word 0x7d2a0000
  .word 0x8d09ef88
  .word 0x8f88bd04
  .word 0x250c0010
  .word 0xaf8cbd04
  .word 0xc5210028
  .word 0x8f88bd04
  .word 0xc520002c
  .word 0xe7a10040
  .word 0xe7a00044
  .word 0x7ba90040
  .word 0x7d090000
  .word 0x8ce8ef88
  .word 0x8f87bd04
  .word 0x24ec0010
  .word 0xaf8cbd04
  .word 0xc5010040
  .word 0x8f87bd04
  .word 0xc5000044
  .word 0xe7a10030
  .word 0xe7a00034
  .word 0x7ba80030
  .word 0x7ce80000
  .word 0x8f87bd04
  .word 0x8cc6ef88
  .word 0x24ec0010
  .word 0xaf8cbd04
  .word 0xc4c10058
  .word 0x8f87bd04
  .word 0xc4c0005c
  .word 0xe7a10020
  .word 0xe7a00024
  .word 0x7ba60020
  .word 0x7ce60000
  .word 0xc4a3efac
  .word 0xc482efb0
  .word 0xc461efbc
  .word 0xc440efc0
  .word 0xe7a30010
  .word 0xe7a20014
  .word 0xe7a10018
  .word 0xe7a0001c
  .word 0x7ba20010
  .word 0x7ce20010
  .word 0x8f82bd04
  .word 0x244c0020
  .word 0xaf8cbd04
  .word 0x10000009
  .word 0x24020001
  .word 0x3c04006b
  .word 0x3c05006b
  .word 0x248459f0
  .word 0x24a55a10
  .word 0x0c14896a
  .word 0x240600f3
  .word 0x1000fff7
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd00b0
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca40000
  .word 0x0811c384
  .word 0x8ca50004
  .word 0x00000000
  .word 0x27bdffb0
  .word 0x3c030096
  .word 0xffbf0030
  .word 0x3c020096
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8c900008
  .word 0x9463efc4
  .word 0xae03002c
  .word 0x9442efc4
  .word 0x0c12ab98
  .word 0xae020008
  .word 0xae020004
  .word 0x3c030078
  .word 0x3c020096
  .word 0x3c050096
  .word 0x8c47ef54
  .word 0x24060004
  .word 0x2784af20
  .word 0x2463dec0
  .word 0x24a50070
  .word 0xae070000
  .word 0x2402ff00
  .word 0xae000020
  .word 0xae060024
  .word 0xae000028
  .word 0xae440010
  .word 0xae43000c
  .word 0x8e04002c
  .word 0x8e43000c
  .word 0xac640008
  .word 0x8e43000c
  .word 0xac60000c
  .word 0x8e43000c
  .word 0xac600000
  .word 0x8f86bb60
  .word 0x8e47000c
  .word 0x92040024
  .word 0x00a62821
  .word 0x8ce30000
  .word 0x00852021
  .word 0x90840027
  .word 0x00621024
  .word 0x00441025
  .word 0xace20000
  .word 0x8e020028
  .word 0x1040003d
  .word 0x00000000
  .word 0x8e450010
  .word 0x3c04006b
  .word 0x3c030007
  .word 0x24845a30
  .word 0x3463fff8
  .word 0x3c020096
  .word 0xaca00004
  .word 0x8e45000c
  .word 0xaca40018
  .word 0x8e040028
  .word 0xaca40010
  .word 0x8e04002c
  .word 0xaca40014
  .word 0xae430014
  .word 0x8c420070
  .word 0x8e050004
  .word 0x10a00030
  .word 0x24460020
  .word 0x0c130bcc
  .word 0x8e240000
  .word 0x8e030000
  .word 0x30630004
  .word 0x1460002c
  .word 0x24020001
  .word 0x8e43000c
  .word 0x0002103c
  .word 0x24060001
  .word 0x8c670000
  .word 0x30e30001
  .word 0x10660027
  .word 0x0002103f
  .word 0x30e300ff
  .word 0x10600029
  .word 0x00000000
  .word 0x30e30002
  .word 0x24050002
  .word 0x10650025
  .word 0x00000000
  .word 0x30e40010
  .word 0x24030010
  .word 0x10830027
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
  .word 0x1443001c
  .word 0x00000000
  .word 0x1000001e
  .word 0x24020001
  .word 0x8e43000c
  .word 0x8c620000
  .word 0x34420100
  .word 0x1000ffc0
  .word 0xac620000
  .word 0x1000ffd2
  .word 0xae260000
  .word 0x1000ffd4
  .word 0x24020002
  .word 0x24030004
  .word 0xa2430029
  .word 0x9383be04
  .word 0x1000ffee
  .word 0xa2430028
  .word 0x24030003
  .word 0xa2430029
  .word 0x9383be04
  .word 0x34630004
  .word 0x1000ffe8
  .word 0xa2430028
  .word 0x24030004
  .word 0xa2430029
  .word 0x9383be04
  .word 0x1000ffe3
  .word 0xa2430028
  .word 0x92420028
  .word 0x34420002
  .word 0x1000ffe2
  .word 0xa2420028
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
  .word 0x00000000
}

// FUN_00471470
asm u64 FUN_00471470(int param_1)
{
  .set noreorder
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
  .word 0x70623b89
  .word 0x8f85bd04
  .word 0x3c026c01
  .word 0x240400fe
  .word 0x344303fa
  .word 0x0000302d
  .word 0x3c020100
  .word 0x0003183c
  .word 0x34420404
  .word 0x00431025
  .word 0x7ca70000
  .word 0x8f83bd04
  .word 0x24630010
  .word 0xaf83bd04
  .word 0xa2040047
  .word 0x70461b89
  .word 0x8f82bd04
  .word 0x7c430000
  .word 0x8f83bd04
  .word 0x8f82bdc8
  .word 0x24630010
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
  .word 0x1060006b
  .word 0x00000000
  .word 0x30430004
  .word 0x10600068
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
  .word 0x10c50063
  .word 0x0000202d
  .word 0x9f85be10
  .word 0x0004203c
  .word 0x0002103c
  .word 0x0004203e
  .word 0x0002103e
  .word 0x0005283c
  .word 0x00a42025
  .word 0x70822389
  .word 0x0003183c
  .word 0x3c020096
  .word 0x0003183f
  .word 0x7c640000
  .word 0x8f83bd04
  .word 0x8c42ef84
  .word 0x24630010
  .word 0xaf83bd04
  .word 0x8c420014
  .word 0x38420001
  .word 0x0002102b
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
  .word 0x1000ff9a
  .word 0xaf83bd04
  .word 0x24040020
  .word 0x1000ff9c
  .word 0xaf84be0c
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000ffed
  .word 0x00000000
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004718A0 NONMATCHING

u64 FUN_004718a0(int param_1,u32 *param_2)

{
  u8 bVar1;
  int iVar2;
  u32 *puVar3;
  u32 uVar4;
  u32 uVar5;
  u32 *puVar6;
  u32 *puVar7;
  u64 uVar8;
  Vec128 auVar9;
  u32 uVar10;
  u32 uVar11;
  u32 uVar12;
  int *piVar13;
  u32 uVar14;
  float *pfVar15;
  u64 *puVar16;
  int iVar17;
  float *pfVar18;
  u64 uVar19;
  u64 extraout_v0_udw;
  Vec128 auVar20;
  Vec128 auVar21;
  u64 in_a0_udw;
  u32 in_a1_udw;
  u32 in_register_0000005c;
  u32 uVar22;
  u32 uVar23;
  Vec128 auVar24;
  u32 uVar25;
  u32 uVar26;
  u32 uVar27;
  u32 uVar28;
  u32 uVar29;
  u32 uVar30;
  int iVar31;
  u32 uVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int aiStack_70 [12];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_20;
  float fStack_1c;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar33 = *(int *)(iVar2 + 0x18);
  puVar3 = *(u32 **)(iVar33 + DAT_0095de18);
  uVar4 = *puVar3;
  *(u32 *)(param_1 + 0xc) = *(u32 *)(iVar33 + 0x54);
  if (*(int *)(iVar33 + 0x18) == 1) {
    piVar13 = (int *)(iVar33 + iGpffffbba0);
    bVar1 = 0;
    if (((u32 *)*piVar13 != (u32 *)0x0) &&
       ((u32)*(u16 *)(*(int *)(iVar33 + 0x54) + 4) == *(u32 *)*piVar13)) {
      bVar1 = 1;
    }
    if (bVar1) {
      iVar33 = *piVar13;
    }
    else {
      piVar13 = (int *)((code)FUN_0049e5a0)((short)piVar13,*(u16 *)(*(int *)(iVar33 + 0x54) + 4));
      iVar33 = *piVar13;
    }
    *(int *)(param_1 + 0x10) = iVar33;
  }
  else {
    piVar13 = (int *)(iVar2 + iGpffffbb9c);
    bVar1 = 0;
    if (((u32 *)*piVar13 != (u32 *)0x0) &&
       ((u32)*(u16 *)(*(int *)(iVar33 + 0x54) + 4) == *(u32 *)*piVar13)) {
      bVar1 = 1;
    }
    if (bVar1) {
      iVar33 = *piVar13;
    }
    else {
      piVar13 = (int *)((code)FUN_0049e5a0)((short)piVar13,*(u16 *)(*(int *)(iVar33 + 0x54) + 4));
      iVar33 = *piVar13;
    }
    *(int *)(param_1 + 0x10) = iVar33;
  }
  if (*(short *)(*(int *)(param_1 + 0xc) + 4) == 0) {
    uVar19 = 0;
  }
  else {
    *(u32 *)(param_1 + 0x20) = *(u32 *)(*(int *)(iVar2 + 0x18) + 0x18);
    if (1 < *(int *)(param_1 + 0x20)) {
      *(float *)(param_1 + 0x1c) = *(float *)(iVar2 + 0x58) * *(float *)(iVar2 + 0x5c);
    }
    iVar33 = *(int *)(iVar2 + 0x18);
    if ((*(u32 *)(iVar33 + 8) & 0x1000000) == 0) {
      *(u32 *)(param_1 + 0x18) =
           CONCAT22((u16)(((u32)*(u8 *)(iVar33 + 0x18) << 0x18) >> 0x10) |
                    (u16)*(u32 *)(iVar33 + 8) & 0x9f,
                    *(u16 *)(*(int *)(param_1 + 0xc) + 6));
      *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) & 0xfffffffe;
      iVar31 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      if (iVar31 != 0) {
        uVar32 = *(u32 *)(iVar31 + 0x28);
        uVar5 = *(u32 *)(param_1 + 0x18);
        if (uVar5 != uVar32) {
          if (((uVar5 >> 0x10 & 0xff) == (uVar32 >> 0x10 & 0xff)) &&
             (uVar5 >> 0x18 == uVar32 >> 0x18)) {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 4;
          }
          else {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 8;
          }
        }
        if (*(u16 *)(iVar33 + 0xc) != 0) {
          if ((*(u16 *)(iVar33 + 0xc) & 1) == 0) {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 2;
            *(u32 *)(param_1 + 0x14) =
                 *(u32 *)(param_1 + 0x14) | (u32)*(u16 *)(iVar33 + 0xc) << 3;
          }
          else {
            *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 8;
          }
        }
        if (((*(u32 *)(iVar2 + 0x4c) & 1) != 0) &&
           (((long)*(int *)(iVar31 + 0x40) != (long)*(short *)(iVar2 + 0x52) ||
            ((long)*(int *)(iVar31 + 0x3c) != (long)*(short *)(iVar2 + 0x50))))) {
          *(u32 *)(param_1 + 0x14) = *(u32 *)(param_1 + 0x14) | 4;
        }
      }
    }
    *(u16 *)(*(int *)(iVar2 + 0x18) + 0xc) = 0;
    *(u32 *)(iVar2 + 0x4c) = *(u32 *)(iVar2 + 0x4c) & 0xfffffffe;
    iVar33 = DAT_00960070 + 0x20;
    uVar14 = ((code)FUN_004cb2f0)((short)*(u32 *)(iVar2 + 4));
    ((code)FUN_004c2f30)((short)*param_2,uVar14,iVar33);
    iVar31 = 2;
    pfVar15 = (float *)((code)FUN_004912b0)((short)iVar2);
    iVar33 = 5;
    pfVar18 = (float *)(DAT_00960070 + iGpffffbdb4 + 0x60);
    do {
      if (-pfVar15[3] <
          (pfVar15[2] * pfVar18[2] + *pfVar15 * *pfVar18 + pfVar15[1] * pfVar18[1]) - pfVar18[3]) {
        iVar31 = 1;
        break;
      }
      pfVar18 = pfVar18 + 5;
      bVar1 = iVar33 != 0;
      iVar33 = iVar33 + -1;
    } while (bVar1);
    uVar32 = **(u32 **)(param_1 + 0xc);
    if ((uVar32 & 1) == 1) {
      *(u8 *)(param_1 + 0x29) = 4;
      *(u8 *)(param_1 + 0x28) = bGpffffbe04;
    }
    else if (((uVar32 & 0xff) == 0) || ((uVar32 & 2) == 2)) {
      *(u8 *)(param_1 + 0x29) = 3;
      *(u8 *)(param_1 + 0x28) = bGpffffbe04 | 4;
    }
    else if ((uVar32 & 0x10) == 0x10) {
      *(u8 *)(param_1 + 0x29) = 4;
      *(u8 *)(param_1 + 0x28) = bGpffffbe04;
    }
    else if ((uVar32 & 8) == 8) {
      *(u8 *)(param_1 + 0x29) = 2;
      *(u8 *)(param_1 + 0x28) = bGpffffbe04 | 0x10;
    }
    else {
      *(u8 *)(param_1 + 0x29) = 1;
      *(u8 *)(param_1 + 0x28) = bGpffffbe04 | 0x14;
    }
    if (iVar31 != 2) {
      *(u8 *)(param_1 + 0x28) = *(u8 *)(param_1 + 0x28) | 2;
    }
    *(u8 *)(param_1 + 0x2a) = (*(u32 *)(*(int *)(iVar2 + 0x18) + 8) & 0x40) != 0;
    if (DAT_0095de34 == (code)0) {
      iVar33 = *(int *)(param_1 + 8);
      iVar31 = *(int *)(iVar33 + 0x18);
      if ((*(u32 *)(iVar31 + 8) & 0x20) != 0) {
        DAT_0096007a = DAT_0096007a + 1;
        iVar17 = ((code)FUN_004cb2f0)((short)*(u32 *)(iVar33 + 4));
        ((code)FUN_004c32a0)((short)&stack0x00000000 + -0x60,iVar17);
        if ((*(u32 *)(iVar17 + 0xc) & 3) == 3) {
          fStack_20 = 1.0;
          fStack_1c = 1.0;
        }
        else {
          fStack_20 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
          fStack_1c = fStack_20;
          if (0.0 < fStack_20) {
            fStack_1c = 1.0 / fStack_20;
          }
        }
        iVar31 = *(int *)(iVar31 + 0x54);
        aiStack_70[0] = *(int *)(*(int *)(iVar31 + 0xc) + iVar31 + 0x18) + 0xc;
        ((code)FUN_00499c20)(0x430,aiStack_70);
        for (puVar6 = *(u32 **)(iVar33 + 100); puVar6 != (u32 *)(iVar33 + 100);
            puVar6 = (u32 *)*puVar6) {
          iVar31 = puVar6[2];
          for (puVar7 = *(u32 **)(iVar31 + 0x40); puVar7 != (u32 *)(iVar31 + 0x40);
              puVar7 = (u32 *)*puVar7) {
            iVar17 = puVar7[2];
            if (((iVar17 != 0) && (*(short *)(iVar17 + 0x3c) != DAT_0096007a)) &&
               ((*(u8 *)(iVar17 + 2) & 1) != 0)) {
              *(short *)(iVar17 + 0x3c) = DAT_0096007a;
              iVar17 = ((code)FUN_004cb2f0)((short)*(u32 *)(puVar7[2] + 4));
              pfVar18 = (float *)((code)FUN_004912b0)((short)iVar33);
              fVar36 = pfVar18[1] - *(float *)(iVar17 + 0x34);
              fVar37 = *pfVar18 - *(float *)(iVar17 + 0x30);
              fVar34 = pfVar18[2] - *(float *)(iVar17 + 0x38);
              fVar35 = pfVar18[3] + *(float *)(puVar7[2] + 0x14);
              if (fVar34 * fVar34 + fVar37 * fVar37 + fVar36 * fVar36 < fVar35 * fVar35) {
                ((code)FUN_004a0430)((short)puVar7[2],aiStack_70);
              }
            }
          }
        }
      }
    }
    else {
      (*DAT_0095de34)(1,*(u32 *)(param_1 + 8));
    }
    puVar16 = (u64 *)((code)FUN_0046b510)((short)iVar2,puVar3);
    if (puVar3[0xc] == 0) {
      uVar32 = uVar4 * 4;
      ((code)FUN_004d59d0)(0,uVar32 + 2);
      auVar24._8_8_ = extraout_v0_udw;
      auVar24._0_8_ = 0x1000101;
      (*(u16*)((u8*)&auVar21 + 2)) = (u16)uVar32 & 0xff | 0x6c00;
      (*(u16*)((u8*)&auVar21 + 0)) = 700;
      auVar21._4_4_ = 0;
      auVar21._8_8_ = in_a0_udw;
      auVar24 = _ppacw(auVar21,auVar24);
      auVar20._0_8_ = (u32)uVar32 | 0x10000000;
      auVar20._8_8_ = extraout_v0_udw;
      auVar9._4_4_ = in_register_0000005c;
      auVar9._0_4_ = in_a1_udw;
      auVar9._8_8_ = 0;
      auVar21 = _ppacw(auVar9 << 0x40,auVar20);
      auVar21 = _ppacw(auVar24,auVar21);
      puVar6 = puGpffffbd04 + 4;
      uVar32 = 0;
      *puGpffffbd04 = auVar21._0_4_;
      puGpffffbd04[1] = auVar21._4_4_;
      puGpffffbd04[2] = auVar21._8_4_;
      puGpffffbd04[3] = auVar21._12_4_;
      if (uVar4 != 0) {
        if (8 < uVar4) {
          do {
            uVar27 = *(u32 *)(puVar16 + 2);
            uVar28 = *(u32 *)((int)puVar16 + 0x14);
            uVar29 = *(u32 *)(puVar16 + 3);
            uVar30 = *(u32 *)((int)puVar16 + 0x1c);
            uVar32 = uVar32 + 8;
            uVar19 = puVar16[4];
            uVar25 = *(u32 *)(puVar16 + 5);
            uVar26 = *(u32 *)((int)puVar16 + 0x2c);
            uVar14 = *(u32 *)(puVar16 + 6);
            uVar10 = *(u32 *)((int)puVar16 + 0x34);
            uVar11 = *(u32 *)(puVar16 + 7);
            uVar12 = *(u32 *)((int)puVar16 + 0x3c);
            uVar8 = *puVar16;
            uVar22 = *(u32 *)(puVar16 + 1);
            uVar23 = *(u32 *)((int)puVar16 + 0xc);
            *puVar6 = (int)uVar8;
            puVar6[1] = (int)((u32)uVar8 >> 0x20);
            puVar6[2] = uVar22;
            puVar6[3] = uVar23;
            puVar6[4] = uVar27;
            puVar6[5] = uVar28;
            puVar6[6] = uVar29;
            puVar6[7] = uVar30;
            puVar6[8] = (int)uVar19;
            puVar6[9] = (int)((u32)uVar19 >> 0x20);
            puVar6[10] = uVar25;
            puVar6[0xb] = uVar26;
            puVar6[0xc] = uVar14;
            puVar6[0xd] = uVar10;
            puVar6[0xe] = uVar11;
            puVar6[0xf] = uVar12;
            uVar27 = *(u32 *)(puVar16 + 10);
            uVar28 = *(u32 *)((int)puVar16 + 0x54);
            uVar29 = *(u32 *)(puVar16 + 0xb);
            uVar30 = *(u32 *)((int)puVar16 + 0x5c);
            uVar19 = puVar16[0xc];
            uVar25 = *(u32 *)(puVar16 + 0xd);
            uVar26 = *(u32 *)((int)puVar16 + 0x6c);
            uVar14 = *(u32 *)(puVar16 + 0xe);
            uVar10 = *(u32 *)((int)puVar16 + 0x74);
            uVar11 = *(u32 *)(puVar16 + 0xf);
            uVar12 = *(u32 *)((int)puVar16 + 0x7c);
            uVar8 = puVar16[8];
            uVar22 = *(u32 *)(puVar16 + 9);
            uVar23 = *(u32 *)((int)puVar16 + 0x4c);
            puVar6[0x10] = (int)uVar8;
            puVar6[0x11] = (int)((u32)uVar8 >> 0x20);
            puVar6[0x12] = uVar22;
            puVar6[0x13] = uVar23;
            puVar6[0x14] = uVar27;
            puVar6[0x15] = uVar28;
            puVar6[0x16] = uVar29;
            puVar6[0x17] = uVar30;
            puVar6[0x18] = (int)uVar19;
            puVar6[0x19] = (int)((u32)uVar19 >> 0x20);
            puVar6[0x1a] = uVar25;
            puVar6[0x1b] = uVar26;
            puVar6[0x1c] = uVar14;
            puVar6[0x1d] = uVar10;
            puVar6[0x1e] = uVar11;
            puVar6[0x1f] = uVar12;
            uVar27 = *(u32 *)(puVar16 + 0x12);
            uVar28 = *(u32 *)((int)puVar16 + 0x94);
            uVar29 = *(u32 *)(puVar16 + 0x13);
            uVar30 = *(u32 *)((int)puVar16 + 0x9c);
            uVar19 = puVar16[0x14];
            uVar25 = *(u32 *)(puVar16 + 0x15);
            uVar26 = *(u32 *)((int)puVar16 + 0xac);
            uVar14 = *(u32 *)(puVar16 + 0x16);
            uVar10 = *(u32 *)((int)puVar16 + 0xb4);
            uVar11 = *(u32 *)(puVar16 + 0x17);
            uVar12 = *(u32 *)((int)puVar16 + 0xbc);
            uVar8 = puVar16[0x10];
            uVar22 = *(u32 *)(puVar16 + 0x11);
            uVar23 = *(u32 *)((int)puVar16 + 0x8c);
            puVar6[0x20] = (int)uVar8;
            puVar6[0x21] = (int)((u32)uVar8 >> 0x20);
            puVar6[0x22] = uVar22;
            puVar6[0x23] = uVar23;
            puVar6[0x24] = uVar27;
            puVar6[0x25] = uVar28;
            puVar6[0x26] = uVar29;
            puVar6[0x27] = uVar30;
            puVar6[0x28] = (int)uVar19;
            puVar6[0x29] = (int)((u32)uVar19 >> 0x20);
            puVar6[0x2a] = uVar25;
            puVar6[0x2b] = uVar26;
            puVar6[0x2c] = uVar14;
            puVar6[0x2d] = uVar10;
            puVar6[0x2e] = uVar11;
            puVar6[0x2f] = uVar12;
            uVar27 = *(u32 *)(puVar16 + 0x1a);
            uVar28 = *(u32 *)((int)puVar16 + 0xd4);
            uVar29 = *(u32 *)(puVar16 + 0x1b);
            uVar30 = *(u32 *)((int)puVar16 + 0xdc);
            uVar19 = puVar16[0x1c];
            uVar25 = *(u32 *)(puVar16 + 0x1d);
            uVar26 = *(u32 *)((int)puVar16 + 0xec);
            uVar14 = *(u32 *)(puVar16 + 0x1e);
            uVar10 = *(u32 *)((int)puVar16 + 0xf4);
            uVar11 = *(u32 *)(puVar16 + 0x1f);
            uVar12 = *(u32 *)((int)puVar16 + 0xfc);
            uVar8 = puVar16[0x18];
            uVar22 = *(u32 *)(puVar16 + 0x19);
            uVar23 = *(u32 *)((int)puVar16 + 0xcc);
            puVar6[0x30] = (int)uVar8;
            puVar6[0x31] = (int)((u32)uVar8 >> 0x20);
            puVar6[0x32] = uVar22;
            puVar6[0x33] = uVar23;
            puVar6[0x34] = uVar27;
            puVar6[0x35] = uVar28;
            puVar6[0x36] = uVar29;
            puVar6[0x37] = uVar30;
            puVar6[0x38] = (int)uVar19;
            puVar6[0x39] = (int)((u32)uVar19 >> 0x20);
            puVar6[0x3a] = uVar25;
            puVar6[0x3b] = uVar26;
            puVar6[0x3c] = uVar14;
            puVar6[0x3d] = uVar10;
            puVar6[0x3e] = uVar11;
            puVar6[0x3f] = uVar12;
            uVar27 = *(u32 *)(puVar16 + 0x22);
            uVar28 = *(u32 *)((int)puVar16 + 0x114);
            uVar29 = *(u32 *)(puVar16 + 0x23);
            uVar30 = *(u32 *)((int)puVar16 + 0x11c);
            uVar19 = puVar16[0x24];
            uVar25 = *(u32 *)(puVar16 + 0x25);
            uVar26 = *(u32 *)((int)puVar16 + 300);
            uVar14 = *(u32 *)(puVar16 + 0x26);
            uVar10 = *(u32 *)((int)puVar16 + 0x134);
            uVar11 = *(u32 *)(puVar16 + 0x27);
            uVar12 = *(u32 *)((int)puVar16 + 0x13c);
            uVar8 = puVar16[0x20];
            uVar22 = *(u32 *)(puVar16 + 0x21);
            uVar23 = *(u32 *)((int)puVar16 + 0x10c);
            puVar6[0x40] = (int)uVar8;
            puVar6[0x41] = (int)((u32)uVar8 >> 0x20);
            puVar6[0x42] = uVar22;
            puVar6[0x43] = uVar23;
            puVar6[0x44] = uVar27;
            puVar6[0x45] = uVar28;
            puVar6[0x46] = uVar29;
            puVar6[0x47] = uVar30;
            puVar6[0x48] = (int)uVar19;
            puVar6[0x49] = (int)((u32)uVar19 >> 0x20);
            puVar6[0x4a] = uVar25;
            puVar6[0x4b] = uVar26;
            puVar6[0x4c] = uVar14;
            puVar6[0x4d] = uVar10;
            puVar6[0x4e] = uVar11;
            puVar6[0x4f] = uVar12;
            uVar27 = *(u32 *)(puVar16 + 0x2a);
            uVar28 = *(u32 *)((int)puVar16 + 0x154);
            uVar29 = *(u32 *)(puVar16 + 0x2b);
            uVar30 = *(u32 *)((int)puVar16 + 0x15c);
            uVar19 = puVar16[0x2c];
            uVar25 = *(u32 *)(puVar16 + 0x2d);
            uVar26 = *(u32 *)((int)puVar16 + 0x16c);
            uVar14 = *(u32 *)(puVar16 + 0x2e);
            uVar10 = *(u32 *)((int)puVar16 + 0x174);
            uVar11 = *(u32 *)(puVar16 + 0x2f);
            uVar12 = *(u32 *)((int)puVar16 + 0x17c);
            uVar8 = puVar16[0x28];
            uVar22 = *(u32 *)(puVar16 + 0x29);
            uVar23 = *(u32 *)((int)puVar16 + 0x14c);
            puVar6[0x50] = (int)uVar8;
            puVar6[0x51] = (int)((u32)uVar8 >> 0x20);
            puVar6[0x52] = uVar22;
            puVar6[0x53] = uVar23;
            puVar6[0x54] = uVar27;
            puVar6[0x55] = uVar28;
            puVar6[0x56] = uVar29;
            puVar6[0x57] = uVar30;
            puVar6[0x58] = (int)uVar19;
            puVar6[0x59] = (int)((u32)uVar19 >> 0x20);
            puVar6[0x5a] = uVar25;
            puVar6[0x5b] = uVar26;
            puVar6[0x5c] = uVar14;
            puVar6[0x5d] = uVar10;
            puVar6[0x5e] = uVar11;
            puVar6[0x5f] = uVar12;
            uVar27 = *(u32 *)(puVar16 + 0x32);
            uVar28 = *(u32 *)((int)puVar16 + 0x194);
            uVar29 = *(u32 *)(puVar16 + 0x33);
            uVar30 = *(u32 *)((int)puVar16 + 0x19c);
            uVar19 = puVar16[0x34];
            uVar25 = *(u32 *)(puVar16 + 0x35);
            uVar26 = *(u32 *)((int)puVar16 + 0x1ac);
            uVar14 = *(u32 *)(puVar16 + 0x36);
            uVar10 = *(u32 *)((int)puVar16 + 0x1b4);
            uVar11 = *(u32 *)(puVar16 + 0x37);
            uVar12 = *(u32 *)((int)puVar16 + 0x1bc);
            uVar8 = puVar16[0x30];
            uVar22 = *(u32 *)(puVar16 + 0x31);
            uVar23 = *(u32 *)((int)puVar16 + 0x18c);
            puVar6[0x60] = (int)uVar8;
            puVar6[0x61] = (int)((u32)uVar8 >> 0x20);
            puVar6[0x62] = uVar22;
            puVar6[99] = uVar23;
            puVar6[100] = uVar27;
            puVar6[0x65] = uVar28;
            puVar6[0x66] = uVar29;
            puVar6[0x67] = uVar30;
            puVar6[0x68] = (int)uVar19;
            puVar6[0x69] = (int)((u32)uVar19 >> 0x20);
            puVar6[0x6a] = uVar25;
            puVar6[0x6b] = uVar26;
            puVar6[0x6c] = uVar14;
            puVar6[0x6d] = uVar10;
            puVar6[0x6e] = uVar11;
            puVar6[0x6f] = uVar12;
            uVar27 = *(u32 *)(puVar16 + 0x3a);
            uVar28 = *(u32 *)((int)puVar16 + 0x1d4);
            uVar29 = *(u32 *)(puVar16 + 0x3b);
            uVar30 = *(u32 *)((int)puVar16 + 0x1dc);
            uVar19 = puVar16[0x3c];
            uVar25 = *(u32 *)(puVar16 + 0x3d);
            uVar26 = *(u32 *)((int)puVar16 + 0x1ec);
            uVar14 = *(u32 *)(puVar16 + 0x3e);
            uVar10 = *(u32 *)((int)puVar16 + 500);
            uVar11 = *(u32 *)(puVar16 + 0x3f);
            uVar12 = *(u32 *)((int)puVar16 + 0x1fc);
            uVar8 = puVar16[0x38];
            uVar22 = *(u32 *)(puVar16 + 0x39);
            uVar23 = *(u32 *)((int)puVar16 + 0x1cc);
            puVar6[0x70] = (int)uVar8;
            puVar6[0x71] = (int)((u32)uVar8 >> 0x20);
            puVar6[0x72] = uVar22;
            puVar6[0x73] = uVar23;
            puVar16 = puVar16 + 0x40;
            puVar6[0x74] = uVar27;
            puVar6[0x75] = uVar28;
            puVar6[0x76] = uVar29;
            puVar6[0x77] = uVar30;
            puVar6[0x78] = (int)uVar19;
            puVar6[0x79] = (int)((u32)uVar19 >> 0x20);
            puVar6[0x7a] = uVar25;
            puVar6[0x7b] = uVar26;
            puVar6[0x7c] = uVar14;
            puVar6[0x7d] = uVar10;
            puVar6[0x7e] = uVar11;
            puVar6[0x7f] = uVar12;
            puVar6 = puVar6 + 0x80;
          } while (uVar32 < uVar4 - 8);
        }
        for (; uVar32 < uVar4; uVar32 = uVar32 + 1) {
          uVar19 = puVar16[2];
          uVar28 = *(u32 *)(puVar16 + 3);
          uVar29 = *(u32 *)((int)puVar16 + 0x1c);
          uVar14 = *(u32 *)(puVar16 + 4);
          uVar10 = *(u32 *)((int)puVar16 + 0x24);
          uVar11 = *(u32 *)(puVar16 + 5);
          uVar12 = *(u32 *)((int)puVar16 + 0x2c);
          uVar8 = puVar16[6];
          uVar26 = *(u32 *)(puVar16 + 7);
          uVar27 = *(u32 *)((int)puVar16 + 0x3c);
          uVar22 = *(u32 *)((int)puVar16 + 4);
          uVar23 = *(u32 *)(puVar16 + 1);
          uVar25 = *(u32 *)((int)puVar16 + 0xc);
          *puVar6 = *(u32 *)puVar16;
          puVar6[1] = uVar22;
          puVar6[2] = uVar23;
          puVar6[3] = uVar25;
          puVar16 = puVar16 + 8;
          puVar6[4] = (int)uVar19;
          puVar6[5] = (int)((u32)uVar19 >> 0x20);
          puVar6[6] = uVar28;
          puVar6[7] = uVar29;
          puVar6[8] = uVar14;
          puVar6[9] = uVar10;
          puVar6[10] = uVar11;
          puVar6[0xb] = uVar12;
          puVar6[0xc] = (int)uVar8;
          puVar6[0xd] = (int)((u32)uVar8 >> 0x20);
          puVar6[0xe] = uVar26;
          puVar6[0xf] = uVar27;
          puVar6 = puVar6 + 0x10;
        }
      }
      DAT_0095de38 = (u32)((u32 *)0x0);
      puGpffffbd04 = puVar6;
    }
    else {
      DAT_0095de38 = (u32 *)((u32)(puVar3 + 0xb));
    }
    uVar19 = 1;
  }
  return uVar19;
}

#pragma schedule on
// FUN_00472130

void FUN_00472130(u64 param_1)

{
  if (*(u32 **)DAT_0095de38_abs != 0) {
    FUN_0046b8e0_u64(param_1);
  }
  FUN_004a0e00_u64(param_1);
  return;
}
#pragma schedule off

#pragma schedule on
// FUN_00472170

void FUN_00472170(u64 param_1)

{
  if (*(u32 **)DAT_0095de38_abs != 0) {
    FUN_0046b8e0_u64(param_1);
  }
  FUN_0046c5b0_u64(param_1);
  return;
}
#pragma schedule off

#pragma schedule on
// FUN_004721B0

void FUN_004721b0(u64 param_1)

{
  if (*(u32 **)DAT_0095de38_abs != 0) {
    FUN_0046b8e0_u64(param_1);
  }
  FUN_0046cd90_u64(param_1);
  return;
}
#pragma schedule off

#pragma schedule on
// FUN_004721F0

void FUN_004721f0(u64 param_1)

{
  if (*(u32 **)DAT_0095de38_abs != 0) {
    FUN_0046b8e0_u64(param_1);
  }
  FUN_0046d6f0_u64(param_1);
  return;
}
#pragma schedule off

#pragma schedule on
// FUN_00472230

void FUN_00472230(u64 param_1)

{
  if (*(u32 **)DAT_0095de38_abs != 0) {
    FUN_0046b8e0_u64(param_1);
  }
  FUN_0046e170_u64(param_1);
  return;
}
#pragma schedule off

// FUN_00472270
asm u64 FUN_00472270(int param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c83002c
  .word 0x8f82ba48
  .word 0x8c630008
  .word 0x00621021
  .word 0x8c420000
  .word 0x8c520000
  .word 0x1240015f
  .word 0x0080982d
  .word 0x8e620040
  .word 0x10400003
  .word 0x00000000
  .word 0x0c13c3cc
  .word 0x8c440000
  .word 0x8e700040
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
  .word 0x12220162
  .word 0x00000000
  .word 0x12200157
  .word 0x00000000
  .word 0xdf82b0d0
  .word 0x0220202d
  .word 0x0000282d
  .word 0x34420010
  .word 0x0c13c408
  .word 0xff82b0d0
  .word 0x12000158
  .word 0xaf91bdcc
  .word 0x0c127294
  .word 0x92040050
  .word 0xff80bd68
  .word 0x24020003
  .word 0x8e030050
  .word 0x30630f00
  .word 0x00031a02
  .word 0x1062014b
  .word 0x00000000
  .word 0x8e030050
  .word 0x24020003
  .word 0x3063f000
  .word 0x00031b02
  .word 0x14620149
  .word 0x00000000
  .word 0xdf82bd68
  .word 0x34420004
  .word 0x10000145
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
  .word 0x24050004
  .word 0x3c036c03
  .word 0x3c020100
  .word 0x346403bc
  .word 0x34430404
  .word 0x0004203c
  .word 0x3c021000
  .word 0x00641825
  .word 0x34420003
  .word 0x70621389
  .word 0x8f83bd04
  .word 0x0000202d
  .word 0x7c620000
  .word 0xde420000
  .word 0x70821389
  .word 0x7c620010
  .word 0xde420010
  .word 0x70821389
  .word 0x7c620020
  .word 0xde420030
  .word 0x70821389
  .word 0x7c620030
  .word 0x24050012
  .word 0x24630040
  .word 0x0c135674
  .word 0xaf83bd04
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
  .word 0x92640047
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
  .word 0x92640029
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
  .word 0x26640044
  .word 0x3c023b80
  .word 0x34428081
  .word 0x44826000
  .word 0x26640044
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
  .word 0xc66c001c
  .word 0x0c1272f4
  .word 0x8e64003c
  .word 0x92640028
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
  .word 0x106000ab
  .word 0x00000000
  .word 0x30430004
  .word 0x106000a8
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
  .word 0x10c500a3
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
  .word 0x8e620040
  .word 0x10400095
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
  .word 0x92620028
  .word 0x30430020
  .word 0x30420018
  .word 0x00031943
  .word 0x00021083
  .word 0x00621025
  .word 0xa262002b
  .word 0x8e630004
  .word 0x9264002b
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
  .word 0x8e640030
  .word 0x3c060200
  .word 0x8e630004
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
  .word 0x1062004c
  .word 0x00000000
  .word 0x1000004e
  .word 0x24020001
  .word 0x3c033f80
  .word 0x3c020002
  .word 0xafa30078
  .word 0x34420003
  .word 0xafa30064
  .word 0x27b20050
  .word 0xafa30050
  .word 0x8fa3005c
  .word 0xafa00060
  .word 0xafa00058
  .word 0xafa00054
  .word 0xafa00074
  .word 0xafa00070
  .word 0x00621025
  .word 0xafa00068
  .word 0xafa00088
  .word 0xafa00084
  .word 0xafa00080
  .word 0x1000fe8f
  .word 0xafa2005c
  .word 0xdf83b0d0
  .word 0x2402ffef
  .word 0x00621024
  .word 0x1000feac
  .word 0xff82b0d0
  .word 0xdf82bd68
  .word 0x34420001
  .word 0x1000feb3
  .word 0xff82bd68
  .word 0x8f82bdc8
  .word 0x1040febd
  .word 0x00000000
  .word 0x1000feb8
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
  .word 0x1000ff5a
  .word 0xaf83bd04
  .word 0x24040020
  .word 0x1000ff5c
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
  .word 0x1000ff72
  .word 0xaf83bd04
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000ffb2
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0090
}

// FUN_00472970 NONMATCHING



u64 FUN_00472970(int param_1)

{
  u8 bVar1;
  int *piVar2;
  u32 *puVar3;
  u32 uVar4;
  u32 uVar5;
  int iVar6;
  u8 bVar7;
  Vec128 auVar8;
  long lVar9;
  Vec128 auVar10;
  Vec128 auVar11;
  Vec128 auVar12;
  Vec128 auVar13;
  Vec128 auVar14;
  Vec128 auVar15;
  Vec128 auVar16;
  Vec128 auVar17;
  Vec128 auVar18;
  Vec128 auVar19;
  Vec128 auVar20;
  Vec128 auVar21;
  Vec128 auVar22;
  Vec128 auVar23;
  Vec128 auVar24;
  Vec128 auVar25;
  Vec128 auVar26;
  u32 in_zero_lo;
  u32 in_zero_hi;
  u32 in_zero_udw;
  u32 in_register_0000000c;
  u32 uVar27;
  u32 uVar28;
  u32 in_v0_udw;
  u32 in_register_0000002c;
  u64 extraout_v0_udw;
  Vec128 auVar29;
  Vec128 auVar30;
  Vec128 auVar31;
  Vec128 auVar32;
  u64 extraout_v0_udw_00;
  Vec128 auVar33;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  u32 *puVar37;
  u64 uVar38;
  u32 uVar39;
  u32 in_v1_udw;
  Vec128 auVar40;
  u64 uVar56;
  Vec128 auVar41;
  Vec128 auVar42;
  Vec128 auVar43;
  Vec128 auVar44;
  Vec128 auVar45;
  Vec128 auVar46;
  Vec128 auVar47;
  Vec128 auVar48;
  Vec128 auVar49;
  Vec128 auVar50;
  Vec128 auVar51;
  Vec128 auVar52;
  Vec128 auVar53;
  Vec128 auVar54;
  Vec128 auVar55;
  u32 in_a0_udw;
  Vec128 auVar57;
  Vec128 auVar58;
  Vec128 auVar59;
  Vec128 auVar60;
  Vec128 auVar61;
  Vec128 auVar62;
  Vec128 auVar63;
  Vec128 auVar64;
  Vec128 auVar65;
  Vec128 auVar66;
  Vec128 auVar67;
  Vec128 auVar68;
  Vec128 auVar69;
  Vec128 auVar70;
  u64 uVar73;
  Vec128 auVar71;
  Vec128 auVar72;
  u32 *puVar74;
  Vec128 auVar75;
  Vec128 auVar76;
  Vec128 auVar77;
  Vec128 auVar78;
  Vec128 auVar79;
  Vec128 auVar80;
  Vec128 auVar81;
  u64 in_t0_udw;
  Vec128 auVar82;
  Vec128 auVar83;
  Vec128 auVar84;
  Vec128 auVar85;
  u64 in_t1_udw;
  u64 in_t2_udw;
  Vec128 auVar86;
  u64 in_t3_udw;
  Vec128 auVar87;
  Vec128 auVar88;
  Vec128 auVar89;
  u64 in_t4_udw;
  Vec128 auVar90;
  Vec128 auVar91;
  u64 in_t5_udw;
  u64 in_t6_udw;
  Vec128 auVar92;
  Vec128 auVar93;
  u32 in_t7_udw;
  u32 in_register_000000fc;
  long lVar94;
  u8 in_s0_qw [16];
  u64 uVar97;
  Vec128 auVar95;
  Vec128 auVar96;
  u64 *puVar98;
  u64 *puVar99;
  long lVar100;
  Vec128 auVar101;
  u8 in_s5_qw [16];
  Vec128 auVar102;
  u32 uVar103;
  u32 in_s6_udw;
  u32 in_register_0000016c;
  u32 in_s7_udw;
  u32 in_register_0000017c;
  u32 in_s8_udw;
  u32 in_register_000001ec;
  u32 uStack_60;
  u32 uStack_5c;
  u32 uStack_58;
  u32 uStack_54;
  u32 uStack_50;
  u32 uStack_4c;
  u32 uStack_48;
  u32 uStack_40;
  u32 uStack_3c;
  u32 uStack_38;
  u32 uStack_30;
  u32 uStack_2c;
  u32 uStack_28;
  u64 uStack_18;
  u64 uStack_10;
  u64 uStack_8;
  
  uVar73 = uGpffffbd40;
  piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 8);
  puVar3 = (u32 *)*piVar2;
  uVar97 = (*(u64*)((u8*)&in_s0_qw + 8));
  lVar94 = (long)(int)puVar3;
  piVar2 = *(int **)((int)piVar2 + iGpffffba48);
  lVar9 = *(long *)(piVar2 + 0x1c);
  uVar27 = (u32)lVar9;
  uVar103 = (u32)((u32)lVar9 >> 0x20);
  lVar100 = (long)piVar2[0x10];
  uVar56 = *(u64 *)(piVar2 + 0x1a);
  auVar76._8_8_ = 0;
  (*(u64*)((u8*)&auVar76 + 0)) = (*(u64*)((u8*)&in_s5_qw + 8));
  auVar88._0_8_ = auVar76._0_8_ << 0x40;
  if (lVar9 == 0x1000000) {
    uVar27 = (u32)uGpffffbd60;
    uVar103 = (u32)((u32)uGpffffbd60 >> 0x20);
  }
  uVar38 = *(u64 *)(piVar2 + 0x1e);
  uStack_8 = 0;
  puVar99 = (u64 *)*piVar2;
  puVar98 = (u64 *)piVar2[1];
  uVar5 = (u32)uGpffffbd50;
  if ((puVar99 == (u64 *)0x0) || (puVar98 == (u64 *)0x0)) {
    if (puVar99 == (u64 *)0x0) {
      puVar99 = (u64 *)&uStack_60;
    }
    if (puVar98 == (u64 *)0x0) {
      puVar98 = (u64 *)&uStack_60;
    }
    uStack_38 = 0x3f800000;
    uStack_4c = 0x3f800000;
    uStack_60 = 0x3f800000;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_54 = uStack_54 | 0x20003;
    uStack_48 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
  }
  uStack_10 = 0;
  uStack_18 = 0;
  iGpffffbdc8 = 0;
  if ((lVar94 != 0) && (((code)FUN_004f0f30)(*puVar3), (*(u8 *)(*(int *)lVar94 + 0x23) & 0xf) != 6)) {
    iGpffffbdc8 = 1;
  }
  if (lVar100 != 0) {
    ((code)FUN_004f0f30)(*(u32 *)lVar100);
    ((code)FUN_004f1020)(*(u32 *)lVar100,1);
  }
  if (lVar94 != 0) {
    ((code)FUN_004f1020)(*(u32 *)lVar94,0);
  }
  if ((lVar100 != 0) && (*(int *)(*(int *)lVar100 + iGpffffbdb8 + 0x58) == 0)) {
    ((code)FUN_004f1020)(*(int *)lVar100,1);
  }
  if ((lVar94 != 0) && (*(int *)(*(int *)lVar94 + iGpffffbdb8 + 0x58) == 0)) {
    ((code)FUN_004f1020)(*(int *)lVar94,0);
  }
  if (lVar94 == 0) {
    uGpffffbdcc = 0;
    uGpffffb0d0 = uGpffffb0d0 & 0xffffffffffffffef;
  }
  else {
    uGpffffb0d0 = uGpffffb0d0 | 0x10;
    uGpffffbdcc = *(u32 *)lVar94;
    ((code)FUN_004f1e20)(*(u32 *)lVar94,(int)&uStack_10 + 4,&uStack_10);
    ((code)FUN_004f1e40)(*(u32 *)lVar94,(u8 *)uGpffffbd70,*(u8 *)((u32 *)lVar94 + 0x14));
    uGpffffbd68 = (u32)((*(u32 *)((int)lVar94 + 0x50) & 0xf00) == 0x300);
    if ((*(u32 *)((int)lVar94 + 0x50) & 0xf000) == 0x3000) {
      uGpffffbd68 = uGpffffbd68 | 4;
    }
  }
  uGpffffbd50 = uGpffffbd50 | 1;
  if (lVar100 != 0) {
    ((code)FUN_004f1e20)(*(u32 *)lVar100,(int)&uStack_18 + 4,&uStack_18);
    ((code)FUN_004f1e40)(*(u32 *)lVar100,&uStack_8,*(u8 *)((u32 *)lVar100 + 0x14));
    uVar4 = *(u32 *)((int)lVar100 + 0x50);
    auVar72._8_8_ = auVar88._8_8_;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = auVar72._8_8_;
    auVar88._0_8_ = auVar79._0_8_ << 0x40;
    if ((uVar4 & 0xf00) == 0x300) {
      auVar72._0_8_ = 1;
      auVar88 = auVar72;
    }
    if ((uVar4 & 0xf000) == 0x3000) {
      auVar88._0_8_ = auVar88._0_8_ | 4;
    }
  }
  if ((((lVar94 != 0) && (*(int *)(*(int *)lVar94 + 0x14) < 9)) && (lVar100 != 0)) &&
     (*(int *)(*(int *)lVar100 + 0x14) < 9)) {
    uGpffffbdcc = 0xffffffff;
  }
  ((code)FUN_004d59d0)(0,0x27);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = in_a0_udw;
  auVar48._8_8_ = in_v1_udw;
  auVar48._0_8_ = 0x10000021;
  auVar79 = _pcpyld(auVar20 << 0x40,auVar48);
  auVar63._8_8_ = in_a0_udw;
  auVar63._0_8_ = 0x6c0a03bc;
  auVar49._8_8_ = in_v1_udw;
  auVar49._0_8_ = 0x1000101;
  auVar86._8_8_ = in_t2_udw;
  auVar86._0_8_ = 0x3d;
  auVar76 = _ppacw(auVar63,auVar49);
  *puGpffffbd04 = auVar79._0_4_;
  puGpffffbd04[1] = auVar79._4_4_;
  puGpffffbd04[2] = auVar79._8_4_;
  puGpffffbd04[3] = auVar79._12_4_;
  auVar80._8_8_ = auVar79._8_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = in_a0_udw;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = in_v1_udw;
  auVar72 = _ppacw(auVar21 << 0x40,auVar22 << 0x40);
  auVar76 = _ppacw(auVar76,auVar72);
  puGpffffbd04[4] = auVar76._0_4_;
  puGpffffbd04[5] = auVar76._4_4_;
  puGpffffbd04[6] = auVar76._8_4_;
  puGpffffbd04[7] = auVar76._12_4_;
  auVar75._8_8_ = auVar76._8_8_;
  auVar50._8_8_ = in_v1_udw;
  auVar50._0_8_ = 0x1000000000008002;
  auVar81._8_8_ = in_t5_udw;
  auVar81._0_8_ = 0xe;
  auVar79 = _pcpyld(auVar81,auVar50);
  auVar102._4_4_ = uVar103;
  auVar102._0_4_ = uVar27;
  auVar102._8_4_ = in_s6_udw;
  auVar102._12_4_ = in_register_0000016c;
  auVar76 = _pcpyld(auVar86,auVar102);
  auVar92._8_8_ = in_t6_udw;
  auVar92._0_8_ = 0x412;
  auVar87._8_8_ = in_t3_udw;
  auVar87._0_8_ = 6;
  auVar82._8_8_ = in_t0_udw;
  auVar82._0_8_ = 0x50000006;
  auVar23._4_4_ = in_register_0000016c;
  auVar23._0_4_ = in_s6_udw;
  auVar23._8_8_ = 0;
  auVar83 = _ppacw(auVar82,auVar23 << 0x40);
  auVar72 = _ppacw(auVar83,auVar72);
  auVar84._8_8_ = auVar83._8_8_;
  auVar90._8_8_ = in_t4_udw;
  auVar90._0_8_ = 0x1000000000008005;
  auVar84._0_8_ = 0x43;
  auVar25._8_4_ = in_register_000000fc;
  auVar25._0_8_ =
       CONCAT44(in_t7_udw,
                ((*(u8 *)(param_1 + 0x28) & 1) << 5 | 600 | (u32)*(u8 *)(param_1 + 0x29)) <<
                0xf) | 0x30004000;
  auVar25._12_4_ = 0;
  auVar83 = _pcpyld(auVar92,auVar25 << 0x20);
  puGpffffbd04[8] = auVar83._0_4_;
  puGpffffbd04[9] = auVar83._4_4_;
  puGpffffbd04[10] = auVar83._8_4_;
  puGpffffbd04[0xb] = auVar83._12_4_;
  auVar85._8_8_ = in_t5_udw;
  auVar85._0_8_ = 0xe;
  auVar91 = _pcpyld(auVar85,auVar90);
  puGpffffbd04[0xc] = auVar79._0_4_;
  puGpffffbd04[0xd] = auVar79._4_4_;
  puGpffffbd04[0xe] = auVar79._8_4_;
  puGpffffbd04[0xf] = auVar79._12_4_;
  auVar93._8_8_ = auVar83._8_8_;
  auVar93._0_8_ = uStack_10;
  auVar96._8_8_ = in_t5_udw;
  auVar96._0_8_ = 9;
  auVar102 = _pcpyld(auVar96,auVar88);
  auVar101._8_8_ = in_t5_udw;
  auVar101._0_8_ = 0x48;
  auVar11._4_4_ = (int)((u32)uVar38 >> 0x20);
  auVar11._0_4_ = uVar5 & 0x70000 | (u32)uVar38;
  auVar11._8_4_ = in_s8_udw;
  auVar11._12_4_ = in_register_000001ec;
  auVar101 = _pcpyld(auVar101,auVar11);
  auVar24._4_4_ = in_register_0000002c;
  auVar24._0_4_ = in_v0_udw;
  auVar26._8_4_ = in_v0_udw;
  auVar26._0_8_ = uVar73;
  auVar26._12_4_ = in_register_0000002c;
  auVar95._8_8_ = uVar97;
  auVar95._0_8_ = 0x4f;
  auVar10._8_4_ = in_s7_udw;
  auVar10._0_8_ = uVar56;
  auVar10._12_4_ = in_register_0000017c;
  auVar85 = _pcpyld(auVar84,auVar10);
  auVar80._0_8_ = 0x6c0103fa01000404;
  auVar88 = _pcpyld(auVar87,auVar93);
  puGpffffbd04[0x10] = auVar88._0_4_;
  puGpffffbd04[0x11] = auVar88._4_4_;
  puGpffffbd04[0x12] = auVar88._8_4_;
  puGpffffbd04[0x13] = auVar88._12_4_;
  auVar89._8_8_ = auVar88._8_8_;
  auVar89._0_8_ = uGpffffbd60;
  auVar96 = _pcpyld(auVar95,auVar26);
  auVar24._8_8_ = 0;
  auVar81 = _pcpyld(auVar80,auVar24 << 0x40);
  auVar88 = _pcpyld(auVar86,auVar89);
  puGpffffbd04[0x14] = auVar88._0_4_;
  puGpffffbd04[0x15] = auVar88._4_4_;
  puGpffffbd04[0x16] = auVar88._8_4_;
  puGpffffbd04[0x17] = auVar88._12_4_;
  puGpffffbd04[0x18] = auVar79._0_4_;
  puGpffffbd04[0x19] = auVar79._4_4_;
  puGpffffbd04[0x1a] = auVar79._8_4_;
  puGpffffbd04[0x1b] = auVar79._12_4_;
  auVar64._8_8_ = auVar79._8_8_;
  auVar64._0_8_ = uStack_18;
  auVar83._8_8_ = in_t1_udw;
  auVar83._0_8_ = 7;
  auVar88 = _pcpyld(auVar83,auVar64);
  puGpffffbd04[0x1c] = auVar88._0_4_;
  puGpffffbd04[0x1d] = auVar88._4_4_;
  puGpffffbd04[0x1e] = auVar88._8_4_;
  puGpffffbd04[0x1f] = auVar88._12_4_;
  puGpffffbd04[0x20] = auVar76._0_4_;
  puGpffffbd04[0x21] = auVar76._4_4_;
  puGpffffbd04[0x22] = auVar76._8_4_;
  puGpffffbd04[0x23] = auVar76._12_4_;
  auVar57._8_8_ = auVar88._8_8_;
  auVar65._0_8_ = *puVar99;
  auVar65._8_8_ = auVar57._8_8_;
  auVar51._8_8_ = auVar76._8_8_;
  auVar51._0_8_ = *puVar98;
  auVar76 = _pcpyld(auVar51,auVar65);
  puGpffffbd04[0x24] = auVar76._0_4_;
  puGpffffbd04[0x25] = auVar76._4_4_;
  puGpffffbd04[0x26] = auVar76._8_4_;
  puGpffffbd04[0x27] = auVar76._12_4_;
  auVar66._0_8_ = puVar98[2];
  auVar66._8_8_ = auVar57._8_8_;
  auVar52._8_8_ = auVar76._8_8_;
  auVar52._0_8_ = puVar99[2];
  auVar76 = _pcpyld(auVar66,auVar52);
  puGpffffbd04[0x28] = auVar76._0_4_;
  puGpffffbd04[0x29] = auVar76._4_4_;
  puGpffffbd04[0x2a] = auVar76._8_4_;
  puGpffffbd04[0x2b] = auVar76._12_4_;
  auVar67._0_8_ = puVar98[6];
  auVar67._8_8_ = auVar57._8_8_;
  auVar53._8_8_ = auVar76._8_8_;
  auVar53._0_8_ = puVar99[6];
  auVar76 = _pcpyld(auVar67,auVar53);
  puGpffffbd04[0x2c] = auVar76._0_4_;
  puGpffffbd04[0x2d] = auVar76._4_4_;
  puGpffffbd04[0x2e] = auVar76._8_4_;
  puGpffffbd04[0x2f] = auVar76._12_4_;
  puGpffffbd04[0x30] = auVar72._0_4_;
  puGpffffbd04[0x31] = auVar72._4_4_;
  puGpffffbd04[0x32] = auVar72._8_4_;
  puGpffffbd04[0x33] = auVar72._12_4_;
  puGpffffbd04[0x34] = auVar91._0_4_;
  puGpffffbd04[0x35] = auVar91._4_4_;
  puGpffffbd04[0x36] = auVar91._8_4_;
  puGpffffbd04[0x37] = auVar91._12_4_;
  puGpffffbd04[0x38] = auVar85._0_4_;
  puGpffffbd04[0x39] = auVar85._4_4_;
  puGpffffbd04[0x3a] = auVar85._8_4_;
  puGpffffbd04[0x3b] = auVar85._12_4_;
  puGpffffbd04[0x3c] = auVar102._0_4_;
  puGpffffbd04[0x3d] = auVar102._4_4_;
  puGpffffbd04[0x3e] = auVar102._8_4_;
  puGpffffbd04[0x3f] = auVar102._12_4_;
  puGpffffbd04[0x40] = auVar101._0_4_;
  puGpffffbd04[0x41] = auVar101._4_4_;
  puGpffffbd04[0x42] = auVar101._8_4_;
  puGpffffbd04[0x43] = auVar101._12_4_;
  auVar54._8_8_ = auVar76._8_8_;
  auVar54._0_8_ = uStack_8;
  auVar91._8_8_ = in_t5_udw;
  auVar91._0_8_ = 0x15;
  auVar76 = _pcpyld(auVar91,auVar54);
  puGpffffbd04[0x44] = auVar76._0_4_;
  puGpffffbd04[0x45] = auVar76._4_4_;
  puGpffffbd04[0x46] = auVar76._8_4_;
  puGpffffbd04[0x47] = auVar76._12_4_;
  puGpffffbd04[0x48] = auVar96._0_4_;
  puGpffffbd04[0x49] = auVar96._4_4_;
  puGpffffbd04[0x4a] = auVar96._8_4_;
  puGpffffbd04[0x4b] = auVar96._12_4_;
  puGpffffbd04[0x4c] = auVar81._0_4_;
  puGpffffbd04[0x4d] = auVar81._4_4_;
  puGpffffbd04[0x4e] = auVar81._8_4_;
  puGpffffbd04[0x4f] = auVar81._12_4_;
  auVar40._8_8_ = auVar76._8_8_;
  bVar7 = *(char *)(param_1 + 0x47) != -1;
  uGpffffbdc4 = (u32)bVar7;
  if (bVar7 || iGpffffbdc8 != 0) {
    uGpffffb0d0 = uGpffffb0d0 | 0x40;
  }
  else {
    uGpffffb0d0 = uGpffffb0d0 & 0xffffffffffffffbf;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = auVar85._8_8_;
  auVar40._0_8_ = 0xfc007fffffffffff;
  auVar8._4_4_ = in_zero_hi;
  auVar8._0_4_ = in_zero_lo;
  auVar8._8_4_ = in_zero_udw;
  auVar8._12_4_ = in_register_0000000c;
  auVar76 = _pcpyld(auVar8,auVar40);
  uVar56 = auVar76._8_8_;
  auVar77._8_8_ = auVar81._8_8_;
  auVar77._4_4_ = DAT_009658ac;
  auVar77._0_4_ = DAT_009658a8;
  auVar57._0_8_ = 0x6c0103fb01000404;
  auVar75._0_8_ =
       CONCAT44((*(u32*)((u8*)&DAT_009658a0 + 4)),(u32)DAT_009658a0) & (*(u64*)((u8*)&auVar76 + 0)) |
       ((long)(int)((u32)uGpffffb0d0 | (u32)*(u8 *)(param_1 + 0x29)) & 0x7ffU) << 0x2f;
  auVar88 = _pcpyld(auVar77,auVar75);
  (*(u32*)((u8*)&DAT_009658a0 + 0)) = (*(u32*)((u8*)&auVar88 + 0));
  auVar76 = _pcpyld(auVar57,auVar16 << 0x40);
  (*(u32*)((u8*)&DAT_009658a0 + 4)) = (*(u32*)((u8*)&auVar88 + 4));
  DAT_009658a8 = auVar88._8_4_;
  DAT_009658ac = auVar88._12_4_;
  puGpffffbd04[0x50] = (u32)DAT_009658a0;
  puGpffffbd04[0x51] = auVar88._4_4_;
  puGpffffbd04[0x52] = auVar88._8_4_;
  puGpffffbd04[0x53] = auVar88._12_4_;
  puGpffffbd04[0x54] = auVar76._0_4_;
  puGpffffbd04[0x55] = auVar76._4_4_;
  puGpffffbd04[0x56] = auVar76._8_4_;
  puGpffffbd04[0x57] = auVar76._12_4_;
  puGpffffbd04 = puGpffffbd04 + 0x58;
  uVar28 = auVar76._8_8_;
  if ((uGpffffb0d0 & 0x10) == 0) {
    uVar27 = 0x3b808081;
  }
  else {
    uVar27 = 0x3b011b50;
  }
  ((code)FUN_0049cab0)(uVar27,param_1 + 0x44);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar28;
  auVar41._8_8_ = uVar56;
  auVar41._0_8_ = 0x6c0103fc01000404;
  auVar76 = _pcpyld(auVar41,auVar17 << 0x40);
  *puGpffffbd04 = auVar76._0_4_;
  puGpffffbd04[1] = auVar76._4_4_;
  puGpffffbd04[2] = auVar76._8_4_;
  puGpffffbd04[3] = auVar76._12_4_;
  puGpffffbd04 = puGpffffbd04 + 4;
  ((code)FUN_0049cbd0)(*(u32 *)(param_1 + 0x1c),*(u32 *)(param_1 + 0x3c));
  puVar3 = puGpffffbd04;
  bVar1 = *(u8 *)(param_1 + 0x28);
  auVar29._8_8_ = extraout_v0_udw;
  auVar29._0_8_ = 0x6c0303fd01000404;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = auVar76._8_8_;
  auVar79 = _pcpyld(auVar29,auVar18 << 0x40);
  *puGpffffbd04 = auVar79._0_4_;
  puGpffffbd04[1] = auVar79._4_4_;
  puGpffffbd04[2] = auVar79._8_4_;
  puGpffffbd04[3] = auVar79._12_4_;
  auVar88 = _DAT_00965930;
  auVar76 = _DAT_00965910;
  uVar28 = (u32)bVar1 & 7;
  auVar68._8_8_ = auVar79._8_8_;
  if (((iGpffffbe14 == 0) || ((bVar1 & 4) != 0)) && ((iGpffffb0f8 == 0 || ((bVar1 & 4) == 0)))) {
    puGpffffbd04[4] = (u32)(DAT_00965910);
    puGpffffbd04[5] = auVar76._4_4_;
    puGpffffbd04[6] = auVar76._8_4_;
    puGpffffbd04[7] = auVar76._12_4_;
    auVar88 = _DAT_00965920;
    puGpffffbd04[8] = DAT_00965920;
    puGpffffbd04[9] = auVar88._4_4_;
    puGpffffbd04[10] = auVar88._8_4_;
    puGpffffbd04[0xb] = auVar88._12_4_;
    uVar56 = auVar88._8_8_;
  }
  else {
    uVar28 = uVar28 | 8;
    puGpffffbd04[4] = (u32)(DAT_00965930);
    puGpffffbd04[5] = auVar88._4_4_;
    puGpffffbd04[6] = auVar88._8_4_;
    puGpffffbd04[7] = auVar88._12_4_;
    auVar76 = _DAT_00965940;
    puGpffffbd04[8] = DAT_00965940;
    puGpffffbd04[9] = auVar76._4_4_;
    puGpffffbd04[10] = auVar76._8_4_;
    puGpffffbd04[0xb] = auVar76._12_4_;
    uVar56 = auVar76._8_8_;
    auVar76 = auVar88;
  }
  auVar58._8_8_ = auVar76._8_8_;
  uGpffffbe0c = 0;
  uVar39 = 0;
  if (iGpffffbdbc == 3) {
    uVar39 = 0x20;
    uGpffffbe0c = 0x20;
  }
  auVar42._8_8_ = uVar56;
  auVar42._0_8_ = uVar28;
  auVar58._0_8_ = (u32)uGpffffbe10 << 0x20 | uVar39;
  auVar76 = _pcpyld(auVar58,auVar42);
  puGpffffbd04[0xc] = auVar76._0_4_;
  puGpffffbd04[0xd] = auVar76._4_4_;
  puGpffffbd04[0xe] = auVar76._8_4_;
  puGpffffbd04[0xf] = auVar76._12_4_;
  puVar74 = puGpffffbd04 + 0x10;
  auVar43._8_8_ = auVar76._8_8_;
  if (*(int *)(param_1 + 0x40) == 0) {
    auVar69._0_8_ = (long)(int)puVar74;
    auVar69._8_8_ = auVar68._8_8_;
    *puVar74 = in_zero_lo;
    puGpffffbd04[0x11] = in_zero_hi;
    puGpffffbd04[0x12] = in_zero_udw;
    puGpffffbd04[0x13] = in_register_0000000c;
    auVar35._8_8_ = extraout_v0_udw;
    auVar35._0_8_ = 0x5000000200000000;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar43._8_8_;
    puGpffffbd04[0x14] = in_zero_lo;
    puGpffffbd04[0x15] = in_zero_hi;
    puGpffffbd04[0x16] = in_zero_udw;
    puGpffffbd04[0x17] = in_register_0000000c;
    auVar76 = _pcpyld(auVar35,auVar15 << 0x40);
    puGpffffbd04[0x18] = auVar76._0_4_;
    puGpffffbd04[0x19] = auVar76._4_4_;
    puGpffffbd04[0x1a] = auVar76._8_4_;
    puGpffffbd04[0x1b] = auVar76._12_4_;
    auVar60._8_8_ = auVar58._8_8_;
    auVar60._0_8_ = 0xe;
    auVar36._8_8_ = auVar76._8_8_;
    auVar55._8_8_ = auVar43._8_8_;
    auVar55._0_8_ = 0x1000000000008001;
    auVar76 = _pcpyld(auVar60,auVar55);
    puGpffffbd04[0x1c] = auVar76._0_4_;
    puGpffffbd04[0x1d] = auVar76._4_4_;
    puGpffffbd04[0x1e] = auVar76._8_4_;
    puGpffffbd04[0x1f] = auVar76._12_4_;
    auVar36._0_8_ = 0x47;
    auVar44._8_8_ = auVar76._8_8_;
    auVar44._0_8_ = uGpffffbd50;
    auVar76 = _pcpyld(auVar36,auVar44);
    puGpffffbd04[0x20] = auVar76._0_4_;
    puGpffffbd04[0x21] = auVar76._4_4_;
    puGpffffbd04[0x22] = auVar76._8_4_;
    puGpffffbd04[0x23] = auVar76._12_4_;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar43._8_8_;
    auVar30._8_8_ = extraout_v0_udw;
    auVar30._0_8_ = 0x5000000400000000;
    auVar76 = _pcpyld(auVar30,auVar12 << 0x40);
    *puVar74 = auVar76._0_4_;
    puGpffffbd04[0x11] = auVar76._4_4_;
    puGpffffbd04[0x12] = auVar76._8_4_;
    puGpffffbd04[0x13] = auVar76._12_4_;
    auVar68._0_8_ = 0xe;
    auVar31._8_8_ = auVar76._8_8_;
    auVar59._8_8_ = auVar58._8_8_;
    auVar59._0_8_ = 0x47;
    auVar31._0_8_ = 0x1000000000008003;
    auVar76 = _pcpyld(auVar68,auVar31);
    puGpffffbd04[0x14] = auVar76._0_4_;
    puGpffffbd04[0x15] = auVar76._4_4_;
    puGpffffbd04[0x16] = auVar76._8_4_;
    puGpffffbd04[0x17] = auVar76._12_4_;
    auVar43._0_8_ = 0x14;
    auVar69._8_8_ = auVar68._8_8_;
    auVar69._0_8_ = uGpffffbd50;
    auVar32._8_8_ = auVar76._8_8_;
    auVar32._0_8_ = 8;
    auVar76 = _pcpyld(auVar59,auVar69);
    puGpffffbd04[0x18] = auVar76._0_4_;
    puGpffffbd04[0x19] = auVar76._4_4_;
    puGpffffbd04[0x1a] = auVar76._8_4_;
    puGpffffbd04[0x1b] = auVar76._12_4_;
    auVar60._8_8_ = auVar76._8_8_;
    auVar60._0_8_ = uGpffffbd70;
    auVar76 = _pcpyld(auVar43,auVar60);
    puGpffffbd04[0x1c] = auVar76._0_4_;
    puGpffffbd04[0x1d] = auVar76._4_4_;
    puGpffffbd04[0x1e] = auVar76._8_4_;
    puGpffffbd04[0x1f] = auVar76._12_4_;
    auVar44._8_8_ = auVar76._8_8_;
    auVar44._0_8_ = uGpffffbd68;
    auVar76 = _pcpyld(auVar32,auVar44);
    puGpffffbd04[0x20] = auVar76._0_4_;
    puGpffffbd04[0x21] = auVar76._4_4_;
    puGpffffbd04[0x22] = auVar76._8_4_;
    puGpffffbd04[0x23] = auVar76._12_4_;
  }
  puGpffffbd04 = puGpffffbd04 + 0x24;
  auVar46._8_8_ = auVar44._8_8_;
  *(u8 *)(param_1 + 0x2b) =
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x20) >> 5) |
       (u8)((int)(*(u8 *)(param_1 + 0x28) & 0x18) >> 2);
  uVar56 = auVar60._8_8_;
  puVar37 = (u32 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + (u32)*(u8 *)(param_1 + 0x2b) * 4);
  auVar46._0_8_ = (long)(int)puVar37;
  uVar5 = *puVar37;
  if (uGpffffbe08 != uVar5) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = auVar69._8_8_;
    auVar69._0_8_ = auVar13._0_8_ << 0x40;
    auVar45._0_8_ = (u32)uVar5 << 0x20 | 0x50000000;
    auVar45._8_8_ = auVar46._8_8_;
    auVar46 = _pcpyld(auVar69,auVar45);
    *puGpffffbd04 = auVar46._0_4_;
    puVar3[0x25] = auVar46._4_4_;
    puVar3[0x26] = auVar46._8_4_;
    puVar3[0x27] = auVar46._12_4_;
    puGpffffbd04 = puVar3 + 0x28;
    uGpffffbe08 = uVar5;
  }
  auVar78._8_8_ = auVar77._8_8_;
  uVar28 = auVar46._8_8_;
  auVar70._8_8_ = auVar69._8_8_;
  iVar6 = **(int **)(param_1 + 0x30);
  auVar78._0_8_ = ((long)*(int *)(*(int *)(param_1 + 4) + 0x14) | 0x2000000U) << 0x20 | 0x3000000;
  auVar70._0_8_ = (u32)*(u32 *)(iVar6 + 0x20) << 0x20 | 0x50000000;
  auVar76 = _pcpyld(auVar78,auVar70);
  *puGpffffbd04 = auVar76._0_4_;
  puGpffffbd04[1] = auVar76._4_4_;
  puGpffffbd04[2] = auVar76._8_4_;
  puGpffffbd04[3] = auVar76._12_4_;
  puGpffffbd04 = puGpffffbd04 + 4;
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
  EI();
  *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
  if (*(int *)(iVar6 + 0x1c) == 1) {
    ((code)FUN_004d51c0)();
  }
  uVar73 = auVar76._8_8_;
  ((code)FUN_004d59d0)(0,3);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar28;
  auVar33._8_8_ = extraout_v0_udw_00;
  auVar33._0_8_ = 0x50000002;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auVar78._8_8_;
  auVar88 = _ppacw(auVar33,auVar19 << 0x40);
  auVar71._8_8_ = uVar73;
  auVar71._0_8_ = 0xe;
  auVar61._8_8_ = uVar56;
  auVar61._0_8_ = 0x10000002;
  auVar76 = _ppacw(auVar14 << 0x40,auVar61);
  auVar76 = _ppacw(auVar88,auVar76);
  *puGpffffbd04 = auVar76._0_4_;
  puGpffffbd04[1] = auVar76._4_4_;
  puGpffffbd04[2] = auVar76._8_4_;
  puGpffffbd04[3] = auVar76._12_4_;
  auVar62._8_8_ = uVar56;
  auVar62._0_8_ = 0x3d;
  auVar34._8_8_ = auVar76._8_8_;
  auVar34._0_8_ = 0x1000000000008001;
  auVar76 = _pcpyld(auVar71,auVar34);
  puGpffffbd04[4] = auVar76._0_4_;
  puGpffffbd04[5] = auVar76._4_4_;
  puGpffffbd04[6] = auVar76._8_4_;
  puGpffffbd04[7] = auVar76._12_4_;
  auVar47._8_8_ = uVar28;
  auVar47._0_8_ = uGpffffbd60;
  auVar76 = _pcpyld(auVar62,auVar47);
  puGpffffbd04[8] = auVar76._0_4_;
  puGpffffbd04[9] = auVar76._4_4_;
  puGpffffbd04[10] = auVar76._8_4_;
  puGpffffbd04[0xb] = auVar76._12_4_;
  puGpffffbd04 = puGpffffbd04 + 0xc;
  return 1;
}

#pragma schedule on
// FUN_00473340

void FUN_00473340(u64 param_1)

{
  if (*(u32 **)DAT_0095de38_abs != 0) {
    FUN_0046b8e0_u64(param_1);
  }
  FUN_00472270_u64(param_1);
  return;
}
#pragma schedule off

#pragma schedule on
// FUN_00473380

void FUN_00473380(u64 param_1)

{
  if (*(u32 **)DAT_0095de38_abs != 0) {
    FUN_0046b8e0_u64(param_1);
  }
  FUN_00472970_u64(param_1);
  return;
}
#pragma schedule off

// FUN_004733C0
asm u64 FUN_004733c0(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x0000202d
  .word 0x24050004
  .word 0x0c135674
  .word 0x7fb00000
  .word 0x3c026c03
  .word 0x8f90bd04
  .word 0x344302fd
  .word 0x3c020100
  .word 0x0003183c
  .word 0x34420404
  .word 0x00431825
  .word 0x3c021000
  .word 0x34420003
  .word 0x70621389
  .word 0x7e020000
  .word 0xc6430018
  .word 0xc642001c
  .word 0xc6410020
  .word 0xc6400024
  .word 0xe7a30040
  .word 0xe7a20044
  .word 0xe7a10048
  .word 0xe7a0004c
  .word 0x7ba20040
  .word 0x7e020010
  .word 0xc6230018
  .word 0xc622001c
  .word 0xc6210020
  .word 0xc6200024
  .word 0xe7a30040
  .word 0xe7a20044
  .word 0xe7a10048
  .word 0xe7a0004c
  .word 0x7ba20040
  .word 0x7e020020
  .word 0x0c132cbc
  .word 0x8e240004
  .word 0xc4420020
  .word 0x26030040
  .word 0xc4410024
  .word 0xc4400028
  .word 0xe7a20050
  .word 0xe7a10054
  .word 0xe7a00058
  .word 0x24020001
  .word 0x7ba40050
  .word 0x7e040030
  .word 0xaf83bd04
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
  .word 0x8f83ba80
  .word 0x0080102d
  .word 0x00831821
  .word 0x03e00008
  .word 0xac600000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004734D0
asm u64 FUN_004734d0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x8f82ba80
  .word 0x0080802d
  .word 0x02021021
  .word 0x8c420000
  .word 0x10400020
  .word 0x00000000
  .word 0x8e020018
  .word 0x8c420020
  .word 0x8c440000
  .word 0x0c125354
  .word 0x0000282d
  .word 0x8f82ba80
  .word 0x02021021
  .word 0x8c420000
  .word 0x8c42000c
  .word 0x1040000c
  .word 0x00000000
  .word 0x0c11d72c
  .word 0x0200202d
  .word 0x0c11d708
  .word 0x0200202d
  .word 0x8f83ba80
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x02031821
  .word 0x8c630000
  .word 0x0040f809
  .word 0x8c64000c
  .word 0x8f83ba80
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x02031821
  .word 0x0040f809
  .word 0x8c640000
  .word 0x8f82ba80
  .word 0x02021021
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

// FUN_00473590
asm u8 FUN_00473590(void)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0x3c060047
  .word 0x3c070047
  .word 0xffbf0000
  .word 0x24040004
  .word 0x2405012f
  .word 0x24c64bb0
  .word 0x0c132948
  .word 0x24e74c60
  .word 0x04410003
  .word 0xaf82ba84
  .word 0x1000000c
  .word 0x0000102d
  .word 0x3c060047
  .word 0x3c070047
  .word 0x24040004
  .word 0x2405012f
  .word 0x24c634b0
  .word 0x24e734d0
  .word 0x0c124b0c
  .word 0x0000402d
  .word 0xaf82ba80
  .word 0x0040102a
  .word 0x38420001
  .word 0xdfbf0000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_00473600
asm u32 FUN_00473600(int *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0x30a20001
  .word 0xffbf0090
  .word 0x38430001
  .word 0x7fbe0080
  .word 0x30a20002
  .word 0x7fb70070
  .word 0x38420002
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x2c740001
  .word 0x2c530001
  .word 0x7fb20020
  .word 0x30a20004
  .word 0x7fb10010
  .word 0x38430004
  .word 0x7fb00000
  .word 0x30a20008
  .word 0x2c720001
  .word 0x38420008
  .word 0x8c8600a8
  .word 0x2c510001
  .word 0xafa000b0
  .word 0x30a20010
  .word 0x38430010
  .word 0x30a20020
  .word 0x2c700001
  .word 0x38420020
  .word 0x2c560001
  .word 0x30a20040
  .word 0x38430040
  .word 0x30a20080
  .word 0x2c770001
  .word 0x38420080
  .word 0x2c5e0001
  .word 0x30a20100
  .word 0x38430100
  .word 0x2405fe00
  .word 0x2c630001
  .word 0x00c52824
  .word 0x7fa300a0
  .word 0x0000102d
  .word 0xac8500a8
  .word 0x24030001
  .word 0xac8000a0
  .word 0x1283004c
  .word 0xac80003c
  .word 0x24030001
  .word 0x12230055
  .word 0x00000000
  .word 0x24030001
  .word 0x1203005e
  .word 0x00000000
  .word 0x24030001
  .word 0x12430067
  .word 0x00000000
  .word 0x24030001
  .word 0x12630070
  .word 0x00000000
  .word 0x24030001
  .word 0x12e30079
  .word 0x00000000
  .word 0x24030001
  .word 0x12c30082
  .word 0x00000000
  .word 0x24030001
  .word 0x13c3008b
  .word 0x00000000
  .word 0x7ba300a0
  .word 0x24040001
  .word 0x10640093
  .word 0x00000000
  .word 0x24440010
  .word 0x3c020003
  .word 0x3445012f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x10400028
  .word 0x00000000
  .word 0x2444000f
  .word 0x2403fff0
  .word 0x00831824
  .word 0x24050001
  .word 0x12850090
  .word 0x0000202d
  .word 0x24050001
  .word 0x12250096
  .word 0x00000000
  .word 0x24050001
  .word 0x1205009d
  .word 0x00000000
  .word 0x24050001
  .word 0x124500a4
  .word 0x00000000
  .word 0x24050001
  .word 0x126500ab
  .word 0x00000000
  .word 0x24050001
  .word 0x12e500b2
  .word 0x00000000
  .word 0x24050001
  .word 0x12c500b9
  .word 0x00000000
  .word 0x24050001
  .word 0x13c500c0
  .word 0x00000000
  .word 0x7ba500a0
  .word 0x24060001
  .word 0x14a60005
  .word 0x00000000
  .word 0x00642021
  .word 0x24030020
  .word 0xaea40094
  .word 0xaea30098
  .word 0xaea000a4
  .word 0x24030001
  .word 0xafa300b0
  .word 0xaea2000c
  .word 0x100000bc
  .word 0x8fa200b0
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c900
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630001
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ffaa
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c904
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630008
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ffa1
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c908
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630010
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ff98
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c90c
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630004
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ff8f
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c910
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630002
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ff86
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c914
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630040
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ff7d
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c918
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630020
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ff74
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c91c
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630080
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ff6b
  .word 0x00431021
  .word 0x3c03007c
  .word 0x8ea500a0
  .word 0x8c64c920
  .word 0x24a30001
  .word 0xaea300a0
  .word 0x8ea300a8
  .word 0x34630100
  .word 0xaea300a8
  .word 0x8ea30000
  .word 0x00831818
  .word 0x1000ff63
  .word 0x00431021
  .word 0xaea30054
  .word 0x2405000c
  .word 0xaea50058
  .word 0x3c05007c
  .word 0x8ca6c900
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff69
  .word 0x00852021
  .word 0x00642821
  .word 0x24060040
  .word 0xaea5005c
  .word 0x3c05007c
  .word 0xaea60060
  .word 0x8ca6c904
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff62
  .word 0x00852021
  .word 0x00642821
  .word 0x2406000c
  .word 0xaea50064
  .word 0x3c05007c
  .word 0xaea60068
  .word 0x8ca6c908
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff5b
  .word 0x00852021
  .word 0x00642821
  .word 0x24060008
  .word 0xaea5006c
  .word 0x3c05007c
  .word 0xaea60070
  .word 0x8ca6c90c
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff54
  .word 0x00852021
  .word 0x00642821
  .word 0x24060004
  .word 0xaea50074
  .word 0x3c05007c
  .word 0xaea60078
  .word 0x8ca6c910
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff4d
  .word 0x00852021
  .word 0x00642821
  .word 0x24060010
  .word 0xaea5007c
  .word 0x3c05007c
  .word 0xaea60080
  .word 0x8ca6c914
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff46
  .word 0x00852021
  .word 0x00642821
  .word 0x24060004
  .word 0xaea50084
  .word 0x3c05007c
  .word 0xaea60088
  .word 0x8ca6c918
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff3f
  .word 0x00852021
  .word 0x00642821
  .word 0x24060010
  .word 0xaea5008c
  .word 0x3c05007c
  .word 0xaea60090
  .word 0x8ca6c91c
  .word 0x8ea50000
  .word 0x00c52818
  .word 0x1000ff38
  .word 0x00852021
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

// FUN_00473B10
asm u32 FUN_00473b10(int *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff40
  .word 0x30a20001
  .word 0xffbf0090
  .word 0x38430001
  .word 0x7fbe0080
  .word 0x30a20002
  .word 0x7fb70070
  .word 0x38420002
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x2c740001
  .word 0x2c530001
  .word 0x7fb20020
  .word 0x30a20004
  .word 0x7fb10010
  .word 0x38430004
  .word 0x7fb00000
  .word 0x30a20008
  .word 0x2c720001
  .word 0x38420008
  .word 0x8c8600a8
  .word 0x2c510001
  .word 0xafa000b0
  .word 0x30a20010
  .word 0x38430010
  .word 0x30a20020
  .word 0x2c700001
  .word 0x38420020
  .word 0x2c560001
  .word 0x30a20040
  .word 0x38430040
  .word 0x30a20080
  .word 0x2c770001
  .word 0x38420080
  .word 0x2c5e0001
  .word 0x30a20100
  .word 0x38430100
  .word 0x2405fe00
  .word 0x2c630001
  .word 0x00c52824
  .word 0x7fa300a0
  .word 0x0000102d
  .word 0xac8500a8
  .word 0x24030001
  .word 0x12830051
  .word 0xac8000a0
  .word 0x24030001
  .word 0x12230058
  .word 0x00000000
  .word 0x24030001
  .word 0x1203005f
  .word 0x00000000
  .word 0x24030001
  .word 0x12430066
  .word 0x00000000
  .word 0x24030001
  .word 0x1263006d
  .word 0x00000000
  .word 0x24030001
  .word 0x12e30074
  .word 0x00000000
  .word 0x24030001
  .word 0x12c3007b
  .word 0x00000000
  .word 0x24030001
  .word 0x13c30082
  .word 0x00000000
  .word 0x7ba300a0
  .word 0x24040001
  .word 0x10640088
  .word 0x00000000
  .word 0x12200004
  .word 0x00000000
  .word 0x2443000f
  .word 0x2402fff0
  .word 0x00621024
  .word 0xaea200a4
  .word 0x8ea30000
  .word 0x00431818
  .word 0x3c050003
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24640010
  .word 0x10400027
  .word 0x00000000
  .word 0x2444000f
  .word 0x2403fff0
  .word 0x00831824
  .word 0x24050001
  .word 0x1285007d
  .word 0x0000202d
  .word 0x24050001
  .word 0x12250081
  .word 0x00000000
  .word 0x24050001
  .word 0x12050086
  .word 0x00000000
  .word 0x24050001
  .word 0x1245008b
  .word 0x00000000
  .word 0x24050001
  .word 0x12650090
  .word 0x00000000
  .word 0x24050001
  .word 0x12e50095
  .word 0x00000000
  .word 0x24050001
  .word 0x12c5009a
  .word 0x00000000
  .word 0x24050001
  .word 0x13c5009f
  .word 0x00000000
  .word 0x7ba500a0
  .word 0x24060001
  .word 0x14a60005
  .word 0x00000000
  .word 0x00641821
  .word 0xaea30094
  .word 0x8ea300a4
  .word 0xaea30098
  .word 0xaea2000c
  .word 0x24020001
  .word 0xafa200b0
  .word 0x1000009a
  .word 0x8fa200b0
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c900
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630001
  .word 0x1000ffa7
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c904
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630008
  .word 0x1000ffa0
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c908
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630010
  .word 0x1000ff99
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c90c
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630004
  .word 0x1000ff92
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c910
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630002
  .word 0x1000ff8b
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c914
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630040
  .word 0x1000ff84
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c918
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630020
  .word 0x1000ff7d
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c91c
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630080
  .word 0x1000ff76
  .word 0xaea300a8
  .word 0x8ea400a0
  .word 0x3c03007c
  .word 0x8c63c920
  .word 0x24840001
  .word 0xaea400a0
  .word 0x00431021
  .word 0x8ea300a8
  .word 0x34630100
  .word 0x1000ff70
  .word 0xaea300a8
  .word 0xaea30054
  .word 0x3c05007c
  .word 0x8ca5c900
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff7e
  .word 0xaea60058
  .word 0x00643021
  .word 0x3c05007c
  .word 0xaea6005c
  .word 0x8ca5c904
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff79
  .word 0xaea60060
  .word 0x00643021
  .word 0x3c05007c
  .word 0xaea60064
  .word 0x8ca5c908
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff74
  .word 0xaea60068
  .word 0x00643021
  .word 0x3c05007c
  .word 0xaea6006c
  .word 0x8ca5c90c
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff6f
  .word 0xaea60070
  .word 0x00643021
  .word 0x3c05007c
  .word 0xaea60074
  .word 0x8ca5c910
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff6a
  .word 0xaea60078
  .word 0x00643021
  .word 0x3c05007c
  .word 0xaea6007c
  .word 0x8ca5c914
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff65
  .word 0xaea60080
  .word 0x00643021
  .word 0x3c05007c
  .word 0xaea60084
  .word 0x8ca5c918
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff60
  .word 0xaea60088
  .word 0x00643021
  .word 0x3c05007c
  .word 0xaea6008c
  .word 0x8ca5c91c
  .word 0x8ea600a4
  .word 0x00852021
  .word 0x1000ff5b
  .word 0xaea60090
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

// FUN_00473FB0
asm u32 FUN_00473fb0(u32 param_1)
{
  .set noreorder
  .word 0x30820001
  .word 0x3c0e0002
  .word 0x38430001
  .word 0x008e6024
  .word 0x30820004
  .word 0x018e7026
  .word 0x38420004
  .word 0x3c0d0004
  .word 0x2c4a0001
  .word 0x008d6024
  .word 0x2c6b0001
  .word 0x30820008
  .word 0x38430008
  .word 0x018d6026
  .word 0x30820020
  .word 0x2dd80001
  .word 0x38420020
  .word 0x2c690001
  .word 0x2c480001
  .word 0x2d8f0001
  .word 0x30820040
  .word 0x3c0e0008
  .word 0x38430040
  .word 0x008e6024
  .word 0x30820080
  .word 0x018e7026
  .word 0x38420080
  .word 0x3c0d0010
  .word 0x2c460001
  .word 0x008d6024
  .word 0x30820100
  .word 0x2c670001
  .word 0x38420100
  .word 0x018d6026
  .word 0x2d8d0001
  .word 0x30838000
  .word 0x2c450001
  .word 0x240c0001
  .word 0x38628000
  .word 0x2dce0001
  .word 0x152c0004
  .word 0x2c420001
  .word 0x144c0002
  .word 0x00000000
  .word 0x0060202d
  .word 0x24020001
  .word 0x15020005
  .word 0x00000000
  .word 0x17020003
  .word 0x00000000
  .word 0x3c020002
  .word 0x00822024
  .word 0x24020001
  .word 0x14e20005
  .word 0x00000000
  .word 0x15e20003
  .word 0x00000000
  .word 0x3c020004
  .word 0x00822024
  .word 0x24020001
  .word 0x14c20005
  .word 0x00000000
  .word 0x15c20003
  .word 0x00000000
  .word 0x3c020008
  .word 0x00822024
  .word 0x24020001
  .word 0x14a20005
  .word 0x00000000
  .word 0x15a20003
  .word 0x00000000
  .word 0x3c020010
  .word 0x00822024
  .word 0x24020001
  .word 0x15220005
  .word 0x00000000
  .word 0x15620003
  .word 0x00000000
  .word 0x2402fffe
  .word 0x00822024
  .word 0x24020001
  .word 0x15220005
  .word 0x00000000
  .word 0x15420003
  .word 0x00000000
  .word 0x2402fffb
  .word 0x00822024
  .word 0x24020001
  .word 0x15220005
  .word 0x00000000
  .word 0x15020003
  .word 0x00000000
  .word 0x2402ffdf
  .word 0x00822024
  .word 0x15200004
  .word 0x00000000
  .word 0x15600002
  .word 0x00000000
  .word 0x34840001
  .word 0x3c023000
  .word 0x00821024
  .word 0x14400003
  .word 0x00000000
  .word 0x3c021000
  .word 0x00822025
  .word 0x03e00008
  .word 0x0080102d
  .word 0x00000000
}

// FUN_00474160
asm u64 FUN_00474160(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8f82ba80
  .word 0x02221021
  .word 0x8c520000
  .word 0x8e460004
  .word 0x0006082a
  .word 0x10200016
  .word 0x24100001
  .word 0x8e42001c
  .word 0x10400005
  .word 0x00000000
  .word 0x8e470040
  .word 0x0040f809
  .word 0x26450050
  .word 0xae400040
  .word 0x8e420020
  .word 0x10400006
  .word 0x00000000
  .word 0x8e460004
  .word 0x0220202d
  .word 0x0040f809
  .word 0x26450050
  .word 0x0040802d
  .word 0x24020001
  .word 0x16020004
  .word 0x00000000
  .word 0x8e420010
  .word 0x0040f809
  .word 0x0220202d
  .word 0x0220102d
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

// FUN_00474210
asm void FUN_00474210(u64 param_1,u64 param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x00c0c82d
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c11cfec
  .word 0x00a0202d
  .word 0x3c070078
  .word 0x0200202d
  .word 0x0320302d
  .word 0x0040282d
  .word 0x0c11d098
  .word 0x24e7b1d0
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00474260
asm long FUN_00474260(u32 param_1,u32 param_2,u64 param_3,u64 param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x00e0b02d
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x0000902d
  .word 0x0c124620
  .word 0x7fb00000
  .word 0x0040882d
  .word 0x122000d4
  .word 0x00000000
  .word 0x3c020003
  .word 0x3445012f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24040140
  .word 0x0040802d
  .word 0x120000cb
  .word 0x00000000
  .word 0x8e230048
  .word 0x3c020047
  .word 0x24424160
  .word 0xae030010
  .word 0xae220048
  .word 0x8e220048
  .word 0x10400021
  .word 0x00000000
  .word 0xae150000
  .word 0x2402ffff
  .word 0xae000004
  .word 0x02c0282d
  .word 0xae1400a8
  .word 0x26040014
  .word 0xae130044
  .word 0x24060010
  .word 0xae020040
  .word 0xae00003c
  .word 0xae00000c
  .word 0x8f82ba80
  .word 0x02221021
  .word 0x0c148494
  .word 0xac500000
  .word 0x8e020014
  .word 0x10400013
  .word 0x00000000
  .word 0x8e050000
  .word 0x26040050
  .word 0x0280302d
  .word 0x0040f809
  .word 0x0260382d
  .word 0xae02000c
  .word 0x24020001
  .word 0x1242001a
  .word 0x00000000
  .word 0x8e02000c
  .word 0x104000a5
  .word 0x00000000
  .word 0x10000016
  .word 0x8e060000
  .word 0x3c020049
  .word 0x24420860
  .word 0x1000ffdd
  .word 0xae220048
  .word 0x3c032000
  .word 0x02831024
  .word 0x14430007
  .word 0x00000000
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c11cec4
  .word 0x0260302d
  .word 0x1000ffeb
  .word 0x0040902d
  .word 0x0200202d
  .word 0x0280282d
  .word 0x0c11cd80
  .word 0x0260302d
  .word 0x1000ffe5
  .word 0x0040902d
  .word 0x8e060000
  .word 0x0280382d
  .word 0x8e020018
  .word 0x0260402d
  .word 0x0220202d
  .word 0x0040f809
  .word 0x26050050
  .word 0x24030001
  .word 0x14430085
  .word 0x00000000
  .word 0x27a300b0
  .word 0x10600008
  .word 0x24020008
  .word 0xa0600000
  .word 0x2442ffff
  .word 0x24630001
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x3c020078
  .word 0x3c030078
  .word 0xc445abc0
  .word 0x9384aed3
  .word 0xc460abcc
  .word 0x9385aed2
  .word 0x9387aed0
  .word 0x9386aed1
  .word 0x3c020078
  .word 0xa3a400bf
  .word 0xc441abc4
  .word 0xa3a500be
  .word 0xe7a0008c
  .word 0xa3a700bc
  .word 0xa3a600bd
  .word 0xe7a50080
  .word 0x0000282d
  .word 0x3c020078
  .word 0xc444abc8
  .word 0xe7a10084
  .word 0x3c020078
  .word 0xc443abd0
  .word 0xe7a40088
  .word 0x3c020078
  .word 0xc442abd4
  .word 0xe7a30090
  .word 0x3c020078
  .word 0xc441abd8
  .word 0xe7a20094
  .word 0x3c020078
  .word 0xc440abdc
  .word 0xe7a10098
  .word 0x8e220018
  .word 0x8c420020
  .word 0x8c440000
  .word 0x0c125354
  .word 0xe7a0009c
  .word 0xdf8aaec8
  .word 0x3c020002
  .word 0x34480003
  .word 0x3c120096
  .word 0xc7a100b0
  .word 0x3c093f80
  .word 0xc7a000b4
  .word 0x93a700bc
  .word 0x93a600bd
  .word 0xc7a70080
  .word 0x93a300be
  .word 0xc7a60084
  .word 0xffaa00a8
  .word 0xc7a50088
  .word 0xc7a300a8
  .word 0x93a200bf
  .word 0xc7a200ac
  .word 0x26520094
  .word 0xc7a4008c
  .word 0x2404000a
  .word 0xe60300c0
  .word 0xe60200c4
  .word 0xae0000c8
  .word 0xc7a30090
  .word 0xe60100b8
  .word 0xe60000bc
  .word 0xae090128
  .word 0xc7a20094
  .word 0xae090114
  .word 0xc7a10098
  .word 0xae090100
  .word 0xc7a0009c
  .word 0xae000110
  .word 0xae000108
  .word 0xae000104
  .word 0xae000124
  .word 0xae000120
  .word 0xae000118
  .word 0xae000138
  .word 0xae000134
  .word 0xae000130
  .word 0x8e09010c
  .word 0x01284025
  .word 0xae08010c
  .word 0xa20700cc
  .word 0xa20600cd
  .word 0xa20300ce
  .word 0xa20200cf
  .word 0xa20700d0
  .word 0xa20600d1
  .word 0xa20300d2
  .word 0xa20200d3
  .word 0xa20700d4
  .word 0xa20600d5
  .word 0xa20300d6
  .word 0xa20200d7
  .word 0xa20700d8
  .word 0xa20600d9
  .word 0xa20300da
  .word 0xa20200db
  .word 0xa20700dc
  .word 0xa20600dd
  .word 0xa20300de
  .word 0xa20200df
  .word 0xe60700e0
  .word 0xe60600e4
  .word 0xe60500e8
  .word 0xe60400ec
  .word 0xe60300f0
  .word 0xe60200f4
  .word 0xe60100f8
  .word 0xe60000fc
  .word 0x8e420000
  .word 0x0040f809
  .word 0x260500ac
  .word 0x8e420000
  .word 0x2404000b
  .word 0x0040f809
  .word 0x260500b0
  .word 0x8e420000
  .word 0x260500b4
  .word 0x0040f809
  .word 0x2404000c
  .word 0x10000004
  .word 0x0220102d
  .word 0x0c1246a0
  .word 0x0220202d
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
  .word 0x27bd00c0
  .word 0x00000000
  .word 0x00000000
}



// FUN_00474630 thunk_FUN_00491a80
asm u32 thunk_FUN_00491a80(u64 param_1)
{
  .set noreorder
  .word 0x081246a0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00474640
asm u32 FUN_00474640(int param_1,int *param_2,u32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x8f82ba80
  .word 0x00821021
  .word 0x8c420000
  .word 0x24430050
  .word 0x8c4200a8
  .word 0x00461024
  .word 0x1040005d
  .word 0x00000000
  .word 0x24020100
  .word 0x10c20043
  .word 0x00000000
  .word 0x24020080
  .word 0x10c2003b
  .word 0x00000000
  .word 0x24020040
  .word 0x10c20033
  .word 0x00000000
  .word 0x24020020
  .word 0x10c2002b
  .word 0x00000000
  .word 0x24020010
  .word 0x10c20023
  .word 0x00000000
  .word 0x24020008
  .word 0x10c2001b
  .word 0x00000000
  .word 0x24020004
  .word 0x10c20013
  .word 0x00000000
  .word 0x24020002
  .word 0x10c2000b
  .word 0x00000000
  .word 0x24020001
  .word 0x10c20003
  .word 0x00000000
  .word 0x1000002e
  .word 0x8c620054
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe4a10000
  .word 0x10000028
  .word 0xe4a00004
  .word 0xc4610024
  .word 0xc4600028
  .word 0xe4a10000
  .word 0x10000023
  .word 0xe4a00004
  .word 0xc461001c
  .word 0xc4600020
  .word 0xe4a10000
  .word 0x1000001e
  .word 0xe4a00004
  .word 0xc461000c
  .word 0xc4600010
  .word 0xe4a10000
  .word 0x10000019
  .word 0xe4a00004
  .word 0xc4610014
  .word 0xc4600018
  .word 0xe4a10000
  .word 0x10000014
  .word 0xe4a00004
  .word 0xc4610034
  .word 0xc4600038
  .word 0xe4a10000
  .word 0x1000000f
  .word 0xe4a00004
  .word 0xc461002c
  .word 0xc4600030
  .word 0xe4a10000
  .word 0x1000000a
  .word 0xe4a00004
  .word 0xc461003c
  .word 0xc4600040
  .word 0xe4a10000
  .word 0x10000005
  .word 0xe4a00004
  .word 0xc4610044
  .word 0xc4600048
  .word 0xe4a10000
  .word 0xe4a00004
  .word 0x8c620054
  .word 0x14400015
  .word 0x00000000
  .word 0x8ca20000
  .word 0x1040000c
  .word 0x00000000
  .word 0x3c034000
  .word 0x00e31024
  .word 0x14430008
  .word 0x00000000
  .word 0x8f82ba80
  .word 0x00e62825
  .word 0x00821021
  .word 0x8c430000
  .word 0x8c62003c
  .word 0x00451025
  .word 0xac62003c
  .word 0x10000007
  .word 0x24020001
  .word 0xaca00000
  .word 0x0000102d
  .word 0x10000003
  .word 0xaca00004
  .word 0x1000ffeb
  .word 0xaca20004
  .word 0x03e00008
  .word 0x00000000
}

#pragma schedule on
// FUN_004747F0
u32 FUN_004747f0(int *param_1)
{
  u32 result;
  u32 *ptr;

  result = (u32)param_1;
  ptr = (u32 *)((u8 *)param_1 + iGpffffba80);
  ptr = (u32 *)*ptr;
  ptr[0x10] = ptr[0x10] | ptr[0xf];
  ptr[0xf] = 0;
  return result;
}
#pragma schedule off

// FUN_00474820
asm u64 FUN_00474820(int param_1,long param_2,u32 param_3)
{
  .set noreorder
  .word 0x8f83ba80
  .word 0x24020002
  .word 0x00831821
  .word 0x8c680000
  .word 0x10a20015
  .word 0x8d07009c
  .word 0x24020001
  .word 0x10a20003
  .word 0x00000000
  .word 0x1000001a
  .word 0x0000102d
  .word 0x0006283c
  .word 0x3404ff00
  .word 0x0005283e
  .word 0x00042438
  .word 0x00a42024
  .word 0x3c02efff
  .word 0x30c300ff
  .word 0x00042238
  .word 0x00641825
  .word 0x3442ffff
  .word 0xfce300b8
  .word 0x8d030040
  .word 0x00621024
  .word 0x1000000a
  .word 0xad020040
  .word 0xdce400c8
  .word 0x3c02ffff
  .word 0x70021389
  .word 0x30c3ffff
  .word 0x00821024
  .word 0xfce200c8
  .word 0xdce200c8
  .word 0x00431025
  .word 0xfce200c8
  .word 0x24020001
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004748C0
asm u64 FUN_004748c0(int param_1,long param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c020007
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c91004c
  .word 0xdf83bd50
  .word 0xde2400c8
  .word 0x00621024
  .word 0x1260001e
  .word 0x00829025
  .word 0x8e700000
  .word 0x24050001
  .word 0x0c13c408
  .word 0x0200202d
  .word 0x10400015
  .word 0x00000000
  .word 0x92660050
  .word 0x0200202d
  .word 0x0c13c790
  .word 0x262500d0
  .word 0x92030023
  .word 0x24020006
  .word 0x3063000f
  .word 0x10620003
  .word 0x00000000
  .word 0x10000004
  .word 0x36520001
  .word 0x2402fffe
  .word 0x70021389
  .word 0x02429024
  .word 0x8e020014
  .word 0x28410009
  .word 0x10200003
  .word 0x00000000
  .word 0x2402ffff
  .word 0xaf82bdcc
  .word 0xfe3200c8
  .word 0x10000006
  .word 0x24020001
  .word 0x2402fffe
  .word 0xfe2000d0
  .word 0x70021389
  .word 0x1000fff9
  .word 0x02429024
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_004749A0
asm u64 FUN_004749a0(int param_1,long param_2)
{
  .set noreorder
  .word 0x10a00032
  .word 0x0000382d
  .word 0x8c86004c
  .word 0x24020004
  .word 0x8ca40050
  .word 0x30830f00
  .word 0x00031a02
  .word 0x10620012
  .word 0x00000000
  .word 0x24020002
  .word 0x1062000f
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000008
  .word 0x0000102d
  .word 0x2402fffc
  .word 0x70021389
  .word 0x10000006
  .word 0x00e23824
  .word 0x10000004
  .word 0x34e70001
  .word 0x0000102d
  .word 0x1000001a
  .word 0x00000000
  .word 0x3083f000
  .word 0x24020004
  .word 0x00031b02
  .word 0x10620014
  .word 0x00000000
  .word 0x24020002
  .word 0x10620011
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x1000000a
  .word 0x0000102d
  .word 0x2402fff3
  .word 0x70021389
  .word 0x10000002
  .word 0x00e23824
  .word 0x34e70004
  .word 0xfcc700c0
  .word 0x10000002
  .word 0x24020001
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
}

// FUN_00474A80
asm u32 FUN_00474a80(int param_1)
{
  .set noreorder
  .word 0x8c83005c
  .word 0x2c610009
  .word 0x10200014
  .word 0x8c82004c
  .word 0x3c05007c
  .word 0x00031880
  .word 0x24a5c960
  .word 0x00651821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x1000000c
  .word 0x0000402d
  .word 0x1000000a
  .word 0x24080001
  .word 0x10000008
  .word 0x24080002
  .word 0x10000006
  .word 0x24080003
  .word 0x10000004
  .word 0x24080004
  .word 0x10000002
  .word 0x24080005
  .word 0x24080002
  .word 0x8c830060
  .word 0x2c610009
  .word 0x10200014
  .word 0x00000000
  .word 0x3c04007c
  .word 0x00031880
  .word 0x2484c930
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x1000000c
  .word 0x0000382d
  .word 0x1000000a
  .word 0x24070001
  .word 0x10000008
  .word 0x24070002
  .word 0x10000006
  .word 0x24070003
  .word 0x10000004
  .word 0x24070004
  .word 0x10000002
  .word 0x24070005
  .word 0x24070003
  .word 0x00071840
  .word 0x3c050078
  .word 0x00671821
  .word 0x24a5b140
  .word 0x000330c0
  .word 0x00082080
  .word 0x00a62821
  .word 0x3403ffff
  .word 0x00852021
  .word 0x00031c38
  .word 0x9c840000
  .word 0x3463ffff
  .word 0x1083000c
  .word 0x00000000
  .word 0x24030001
  .word 0x15030006
  .word 0x00000000
  .word 0x14e30004
  .word 0x00000000
  .word 0x24030080
  .word 0x0003183c
  .word 0x00832025
  .word 0xfc4400b8
  .word 0x10000002
  .word 0x24020001
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
}

// FUN_00474BB0
asm u64 FUN_00474bb0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020004
  .word 0xffbf0020
  .word 0x3445012f
  .word 0x7fb10010
  .word 0x3c020096
  .word 0x7fb00000
  .word 0x8c420178
  .word 0x0080802d
  .word 0x0040f809
  .word 0x24040018
  .word 0x0040882d
  .word 0x12200016
  .word 0x00000000
  .word 0x8f83ba84
  .word 0x3c020096
  .word 0x24420070
  .word 0x0220202d
  .word 0x00431021
  .word 0xac510000
  .word 0xae200004
  .word 0xae200008
  .word 0xae20000c
  .word 0xae200010
  .word 0x0c11e8f4
  .word 0xae200014
  .word 0x0c11e40c
  .word 0x0220202d
  .word 0x0c11eadc
  .word 0x00000000
  .word 0x0c11ec68
  .word 0xae220000
  .word 0xae220014
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
  .word 0x00000000
}

// FUN_00474C60
asm u64 FUN_00474c60(u64 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x3c020096
  .word 0xffbf0020
  .word 0x24420070
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83ba84
  .word 0x00431021
  .word 0x8c510000
  .word 0x12200023
  .word 0x0080802d
  .word 0x8e240008
  .word 0x10800003
  .word 0x00000000
  .word 0x0c13cc04
  .word 0x00000000
  .word 0x8e240004
  .word 0x10800003
  .word 0x00000000
  .word 0x0c13cc04
  .word 0x00000000
  .word 0x8e240010
  .word 0x10800003
  .word 0x00000000
  .word 0x0c13cc04
  .word 0x00000000
  .word 0x8e24000c
  .word 0x10800003
  .word 0x00000000
  .word 0x0c13cc04
  .word 0x00000000
  .word 0x8e240014
  .word 0x10800003
  .word 0x00000000
  .word 0x0c13cc04
  .word 0x00000000
  .word 0x8e240000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c13cc04
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0220202d
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
}

// FUN_00474D30
asm void FUN_00474d30(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x00051940
  .word 0x7fbe0080
  .word 0x00641821
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c6f0004
  .word 0x8c730004
  .word 0x8c940124
  .word 0x8c8500fc
  .word 0x8c920130
  .word 0x788e0040
  .word 0x788d0050
  .word 0x8c830128
  .word 0x2690ffff
  .word 0x788c0060
  .word 0x788b0070
  .word 0x78910080
  .word 0x0253a821
  .word 0xdc8a0090
  .word 0xdc890098
  .word 0xdc8800a0
  .word 0xdc8700a8
  .word 0xdc8600b0
  .word 0x8ca50018
  .word 0x0283a018
  .word 0x3c163000
  .word 0x3c121000
  .word 0x0016b03c
  .word 0x3c170400
  .word 0x241e0005
  .word 0x02b4a821
  .word 0x3c031400
  .word 0x3c140100
  .word 0x0003983c
  .word 0x36940101
  .word 0x3c031700
  .word 0x26b5fff0
  .word 0x0296b025
  .word 0x0015a03c
  .word 0x0003183c
  .word 0x0014a03e
  .word 0x36550002
  .word 0x0014a03c
  .word 0x02929025
  .word 0x7272cb89
  .word 0x7072c389
  .word 0x3c144b00
  .word 0x3c031100
  .word 0x0014903c
  .word 0x0003183c
  .word 0x02929025
  .word 0x01a9982d
  .word 0x72d5ab89
  .word 0x7df50000
  .word 0x72529389
  .word 0x7df20010
  .word 0x01caa02d
  .word 0x8c9600fc
  .word 0x0188902d
  .word 0x25f50070
  .word 0x9ed60010
  .word 0x0167202d
  .word 0x02d7b025
  .word 0x7076b389
  .word 0x7df60020
  .word 0x7dee0030
  .word 0x7ded0040
  .word 0x7dec0050
  .word 0x10be001a
  .word 0x7deb0060
  .word 0x7eb90000
  .word 0x260dffff
  .word 0x12000012
  .word 0x26b50010
  .word 0x240c0005
  .word 0x7eb40000
  .word 0x7eb30010
  .word 0x028aa02d
  .word 0x7eb20020
  .word 0x0269982d
  .word 0x7ea40030
  .word 0x0248902d
  .word 0x26b50040
  .word 0x10ac000f
  .word 0x0087202d
  .word 0x7eb80000
  .word 0x01a0582d
  .word 0x26b50010
  .word 0x1560fff2
  .word 0x25adffff
  .word 0x00000000
  .word 0x3c046000
  .word 0x70641b89
  .word 0x10000009
  .word 0x7ea30000
  .word 0x7eb10000
  .word 0x26b50010
  .word 0x1000ffe4
  .word 0x0226882d
  .word 0x7eb10000
  .word 0x26b50010
  .word 0x1000ffef
  .word 0x0226882d
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
  .word 0x27bd0090
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00474F20
asm void FUN_00474f20(int param_1,u32 param_2)
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
  .word 0x8f83ba80
  .word 0x00a0802d
  .word 0x00831821
  .word 0x8c650000
  .word 0x8cb4009c
  .word 0x8ca400a8
  .word 0x8e8300d8
  .word 0x10600066
  .word 0x24b50050
  .word 0x0000982d
  .word 0x0280902d
  .word 0x0000882d
  .word 0x3c035000
  .word 0x3c040300
  .word 0xae430000
  .word 0xae500004
  .word 0x3c030200
  .word 0xae440008
  .word 0x8e8400fc
  .word 0x9c840014
  .word 0x00831825
  .word 0x0003183c
  .word 0x0003183f
  .word 0xae43000c
  .word 0xae400010
  .word 0xae400014
  .word 0x8e840130
  .word 0x8e830128
  .word 0x02042021
  .word 0x00641821
  .word 0x2463ffe0
  .word 0xae430018
  .word 0xae43001c
  .word 0x8e840124
  .word 0x8e830128
  .word 0x00832018
  .word 0x8e8500fc
  .word 0x8e830130
  .word 0x02031821
  .word 0x00648021
  .word 0x8ca30018
  .word 0x0003082b
  .word 0x1020002b
  .word 0x0000402d
  .word 0x0000382d
  .word 0x0280302d
  .word 0x02912021
  .word 0x00000000
  .word 0x00a71821
  .word 0x8c630024
  .word 0x00032880
  .word 0x00854821
  .word 0xad300140
  .word 0x02852821
  .word 0xacd00044
  .word 0x8cac0100
  .word 0x11800007
  .word 0x00000000
  .word 0x8e8500fc
  .word 0x00a74821
  .word 0x8d29002c
  .word 0x00094900
  .word 0x10000009
  .word 0x02098021
  .word 0x8e8500fc
  .word 0x8e890124
  .word 0x00a75821
  .word 0x00095100
  .word 0x8d690028
  .word 0x012a4818
  .word 0x02098021
  .word 0x00000000
  .word 0x2463fffd
  .word 0x2c610002
  .word 0x10200005
  .word 0x00000000
  .word 0x15800003
  .word 0x00000000
  .word 0x26100040
  .word 0x00000000
  .word 0x8ca30018
  .word 0x25080001
  .word 0x24e70018
  .word 0x0103182b
  .word 0x1460ffdb
  .word 0x24c60010
  .word 0x0280202d
  .word 0x0c11d34c
  .word 0x0260282d
  .word 0x8e8300e8
  .word 0x26730001
  .word 0x26520020
  .word 0x0073082b
  .word 0x1020ffae
  .word 0x26310024
  .word 0x0000282d
  .word 0x8e840140
  .word 0x24a50003
  .word 0x2ca30009
  .word 0xaea40004
  .word 0x8e840144
  .word 0xaea4000c
  .word 0x8e840148
  .word 0xaea40014
  .word 0x2694000c
  .word 0x1460fff6
  .word 0x26b50018
  .word 0x00000000
  .word 0x100000ac
  .word 0xdfbf0060
  .word 0x3c032000
  .word 0x00831824
  .word 0x1060001e
  .word 0x00000000
  .word 0x30830001
  .word 0x14600039
  .word 0x00000000
  .word 0x30830008
  .word 0x14600039
  .word 0x00000000
  .word 0x30830010
  .word 0x1460003b
  .word 0x00000000
  .word 0x30830004
  .word 0x1460003d
  .word 0x00000000
  .word 0x30830002
  .word 0x1460003f
  .word 0x00000000
  .word 0x30830040
  .word 0x14600041
  .word 0x00000000
  .word 0x30830020
  .word 0x14600043
  .word 0x00000000
  .word 0x30830080
  .word 0x14600045
  .word 0x00000000
  .word 0x30830100
  .word 0x1060ffe0
  .word 0x00000000
  .word 0x1000ffde
  .word 0xaeb00044
  .word 0x8ca30000
  .word 0x30850001
  .word 0x14a00041
  .word 0x00000000
  .word 0x30850008
  .word 0x14a00045
  .word 0x00000000
  .word 0x30850010
  .word 0x14a0004b
  .word 0x00000000
  .word 0x30850004
  .word 0x14a00051
  .word 0x00000000
  .word 0x30850002
  .word 0x14a00057
  .word 0x00000000
  .word 0x30850040
  .word 0x14a0005d
  .word 0x00000000
  .word 0x30850020
  .word 0x14a00063
  .word 0x00000000
  .word 0x30850080
  .word 0x14a00069
  .word 0x00000000
  .word 0x30830100
  .word 0x1060ffc2
  .word 0x00000000
  .word 0x1000ffc0
  .word 0xaeb00044
  .word 0xaeb00004
  .word 0x1000ffc6
  .word 0x26100010
  .word 0x3c03007c
  .word 0xaeb0000c
  .word 0x8c63c904
  .word 0x1000ffc4
  .word 0x00708021
  .word 0x3c03007c
  .word 0xaeb00014
  .word 0x8c63c908
  .word 0x1000ffc2
  .word 0x00708021
  .word 0x3c03007c
  .word 0xaeb0001c
  .word 0x8c63c90c
  .word 0x1000ffc0
  .word 0x00708021
  .word 0x3c03007c
  .word 0xaeb00024
  .word 0x8c63c910
  .word 0x1000ffbe
  .word 0x00708021
  .word 0x3c03007c
  .word 0xaeb0002c
  .word 0x8c63c914
  .word 0x1000ffbc
  .word 0x00708021
  .word 0x3c03007c
  .word 0xaeb00034
  .word 0x8c63c918
  .word 0x1000ffba
  .word 0x00708021
  .word 0x3c03007c
  .word 0xaeb0003c
  .word 0x8c63c91c
  .word 0x1000ffb8
  .word 0x00708021
  .word 0x00032900
  .word 0xaeb00004
  .word 0x24a6000f
  .word 0x2405fff0
  .word 0x02063021
  .word 0x1000ffba
  .word 0x00c58024
  .word 0x3c05007c
  .word 0xaeb0000c
  .word 0x8ca5c904
  .word 0x00653018
  .word 0x24c6000f
  .word 0x2405fff0
  .word 0x02063021
  .word 0x1000ffb4
  .word 0x00c58024
  .word 0x3c05007c
  .word 0xaeb00014
  .word 0x8ca5c908
  .word 0x00653018
  .word 0x24c6000f
  .word 0x2405fff0
  .word 0x02063021
  .word 0x1000ffae
  .word 0x00c58024
  .word 0x3c05007c
  .word 0xaeb0001c
  .word 0x8ca5c90c
  .word 0x00653018
  .word 0x24c6004f
  .word 0x2405fff0
  .word 0x02063021
  .word 0x1000ffa8
  .word 0x00c58024
  .word 0x3c05007c
  .word 0xaeb00024
  .word 0x8ca5c910
  .word 0x00653018
  .word 0x24c6004f
  .word 0x2405fff0
  .word 0x02063021
  .word 0x1000ffa2
  .word 0x00c58024
  .word 0x3c05007c
  .word 0xaeb0002c
  .word 0x8ca5c914
  .word 0x00653018
  .word 0x24c6000f
  .word 0x2405fff0
  .word 0x02063021
  .word 0x1000ff9c
  .word 0x00c58024
  .word 0x3c05007c
  .word 0xaeb00034
  .word 0x8ca5c918
  .word 0x00653018
  .word 0x24c6000f
  .word 0x2405fff0
  .word 0x02063021
  .word 0x1000ff96
  .word 0x00c58024
  .word 0x3c05007c
  .word 0xaeb0003c
  .word 0x8ca5c91c
  .word 0x00652818
  .word 0x24a5000f
  .word 0x2403fff0
  .word 0x02052821
  .word 0x1000ff90
  .word 0x00a38024
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

// FUN_004753D0
asm int FUN_004753d0(int param_1,u32 param_2)
{
  .set noreorder
  .word 0x30a30001
  .word 0x10600006
  .word 0x0000102d
  .word 0x00043100
  .word 0x2403fff0
  .word 0x24c6000f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30008
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c904
  .word 0x00833018
  .word 0x2403fff0
  .word 0x24c6000f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30010
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c908
  .word 0x00833018
  .word 0x2403fff0
  .word 0x24c6000f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30004
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c90c
  .word 0x00833018
  .word 0x2403fff0
  .word 0x24c6004f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30002
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c910
  .word 0x00833018
  .word 0x2403fff0
  .word 0x24c6004f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30040
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c914
  .word 0x00833018
  .word 0x2403fff0
  .word 0x24c6000f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30020
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c918
  .word 0x00833018
  .word 0x2403fff0
  .word 0x24c6000f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30080
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c91c
  .word 0x00833018
  .word 0x2403fff0
  .word 0x24c6000f
  .word 0x00c31824
  .word 0x00431021
  .word 0x30a30100
  .word 0x10600008
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c920
  .word 0x00832018
  .word 0x2403fff0
  .word 0x2484000f
  .word 0x00831824
  .word 0x00431021
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00475540
asm int FUN_00475540(int param_1,u64 param_2,u64 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x0000b82d
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x00e0a02d
  .word 0x7fb20020
  .word 0x32820004
  .word 0x7fb10010
  .word 0x0002102b
  .word 0x7fb00000
  .word 0x384e0001
  .word 0x8c860058
  .word 0x30cc0001
  .word 0x30cd0008
  .word 0x398f0001
  .word 0x30c30010
  .word 0x2df10001
  .word 0x30cb0004
  .word 0x39af0008
  .word 0x30ca0002
  .word 0x2df00001
  .word 0x30c90040
  .word 0x386f0010
  .word 0x02308021
  .word 0x2def0001
  .word 0x30c20020
  .word 0x01f08821
  .word 0x30c80080
  .word 0x396f0004
  .word 0x30c70100
  .word 0x2df00001
  .word 0x394f0002
  .word 0x02118021
  .word 0x2def0001
  .word 0x01f08821
  .word 0x392f0040
  .word 0x2df00001
  .word 0x384f0020
  .word 0x02118021
  .word 0x2def0001
  .word 0x01f08821
  .word 0x390f0080
  .word 0x2df00001
  .word 0x38ef0100
  .word 0x02118021
  .word 0x2def0001
  .word 0x01f07821
  .word 0x11c00009
  .word 0xac8f0050
  .word 0x3c04eee1
  .word 0x3484fe18
  .word 0x00c42024
  .word 0x0004202b
  .word 0x38840001
  .word 0x10800002
  .word 0x00000000
  .word 0x24170001
  .word 0x328f0002
  .word 0x24160002
  .word 0x240e0001
  .word 0x32840010
  .word 0x14800067
  .word 0x01cfb00a
  .word 0x16e0006c
  .word 0x00000000
  .word 0x3c042000
  .word 0x00c42024
  .word 0x10800148
  .word 0x00000000
  .word 0x11800002
  .word 0x0000202d
  .word 0x24840010
  .word 0x11a00004
  .word 0x00000000
  .word 0x3c0c007c
  .word 0x8d8cc904
  .word 0x008c2021
  .word 0x10600004
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c908
  .word 0x00832021
  .word 0x11600004
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c90c
  .word 0x00832021
  .word 0x11400004
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c910
  .word 0x00832021
  .word 0x11200004
  .word 0x00000000
  .word 0x3c03007c
  .word 0x8c63c914
  .word 0x00832021
  .word 0x10400004
  .word 0x00000000
  .word 0x3c02007c
  .word 0x8c42c918
  .word 0x00822021
  .word 0x11000004
  .word 0x00000000
  .word 0x3c02007c
  .word 0x8c42c91c
  .word 0x00822021
  .word 0x10e00004
  .word 0x00000000
  .word 0x3c02007c
  .word 0x8c42c920
  .word 0x00822021
  .word 0x30c20009
  .word 0x10400004
  .word 0x00000000
  .word 0x2483000f
  .word 0x2402fff0
  .word 0x00622024
  .word 0xaea40054
  .word 0x0000182d
  .word 0x02a0302d
  .word 0xacc40008
  .word 0x24630003
  .word 0xacc40010
  .word 0x2c620009
  .word 0xacc40018
  .word 0x1440fffa
  .word 0x24c60018
  .word 0x00a41018
  .word 0x32830008
  .word 0x10600009
  .word 0x00000000
  .word 0x3c020003
  .word 0x3445012f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24040190
  .word 0x10000009
  .word 0x0040982d
  .word 0x24440190
  .word 0x3c020003
  .word 0x3445012f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0x0040982d
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060190
  .word 0x2ec30002
  .word 0xae7700d8
  .word 0x26c4ffff
  .word 0x38630001
  .word 0xae6400e8
  .word 0x32820001
  .word 0xae6300e0
  .word 0x2403000e
  .word 0x14400100
  .word 0xfe6300c8
  .word 0xaeb3004c
  .word 0x10000100
  .word 0x0260102d
  .word 0x3c020078
  .word 0x02a0202d
  .word 0x8c42b250
  .word 0x0040f809
  .word 0x0280382d
  .word 0x100000fa
  .word 0xdfbf0090
  .word 0x3c0d0078
  .word 0xaea00054
  .word 0x0000702d
  .word 0x25adabe0
  .word 0x02a0602d
  .word 0x8da40000
  .word 0x25ce0003
  .word 0x2dc30009
  .word 0xad840008
  .word 0x8da40004
  .word 0xad840010
  .word 0x8da40008
  .word 0xad840018
  .word 0x25ad000c
  .word 0x1460fff6
  .word 0x258c0018
  .word 0x3c040004
  .word 0x34840040
  .word 0x00c42024
  .word 0x10800002
  .word 0x0000182d
  .word 0x24630001
  .word 0x3c040010
  .word 0x34840100
  .word 0x00c42024
  .word 0x10800002
  .word 0x00000000
  .word 0x24630002
  .word 0x3c040002
  .word 0x34840020
  .word 0x00c42024
  .word 0x10800002
  .word 0x00000000
  .word 0x24630004
  .word 0x24a4ffff
  .word 0x0002102b
  .word 0x00032880
  .word 0xafa000c0
  .word 0x00a31821
  .word 0x0000882d
  .word 0x00033140
  .word 0x3c050078
  .word 0x32830020
  .word 0x24a5ac40
  .word 0x0003182b
  .word 0x00a69021
  .word 0x7fa300b0
  .word 0x0000802d
  .word 0x8e430010
  .word 0x0083001b
  .word 0x0009202b
  .word 0x38840001
  .word 0xafa400d4
  .word 0x00001812
  .word 0x38440001
  .word 0xafa400d8
  .word 0x0008202b
  .word 0x8e420018
  .word 0x38840001
  .word 0x247e0001
  .word 0xafa400dc
  .word 0x0007202b
  .word 0x38840001
  .word 0xafa400e0
  .word 0x000b202b
  .word 0x38840001
  .word 0xafa400cc
  .word 0x000a202b
  .word 0x38840001
  .word 0xafa400d0
  .word 0x24440001
  .word 0x00042100
  .word 0x11600002
  .word 0x7fa400a0
  .word 0x26100040
  .word 0x11400002
  .word 0x00000000
  .word 0x26100040
  .word 0x0002082b
  .word 0x10200083
  .word 0x0000202d
  .word 0x0240282d
  .word 0x8ca30024
  .word 0x00031880
  .word 0x007d1821
  .word 0x8c6300c0
  .word 0x10600005
  .word 0x00000000
  .word 0x8ca3002c
  .word 0x00031900
  .word 0x10000005
  .word 0x02038021
  .word 0x8ca30028
  .word 0x00031900
  .word 0x02238821
  .word 0x00000000
  .word 0x24840001
  .word 0x0082182b
  .word 0x1460ffef
  .word 0x24a50018
  .word 0x1000006f
  .word 0x7ba200a0
  .word 0x3445012f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24040190
  .word 0x10000008
  .word 0x0040982d
  .word 0x3c020003
  .word 0x3445012f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24640190
  .word 0x0040982d
  .word 0x12600069
  .word 0x00000000
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060190
  .word 0xae7200fc
  .word 0x24020040
  .word 0xae7e0124
  .word 0x26640100
  .word 0xae620130
  .word 0x27a500c0
  .word 0x7ba200a0
  .word 0x24060024
  .word 0xae700134
  .word 0xae620128
  .word 0x0c148494
  .word 0xae71012c
  .word 0x7ba200b0
  .word 0x00021080
  .word 0x00521021
  .word 0x8c42001c
  .word 0xae6200f8
  .word 0x8e440018
  .word 0x2c810002
  .word 0x14200015
  .word 0x24050001
  .word 0x3c030078
  .word 0x26460018
  .word 0x2463ac10
  .word 0x8cc20024
  .word 0x00022080
  .word 0x009d1021
  .word 0x8c4200c0
  .word 0x10400003
  .word 0x00000000
  .word 0x10000003
  .word 0x0000202d
  .word 0x00641021
  .word 0x8c440000
  .word 0x02651021
  .word 0xa04400f3
  .word 0x24a50001
  .word 0x8e440018
  .word 0x00a4102b
  .word 0x1440fff0
  .word 0x24c60018
  .word 0x0004082b
  .word 0x1020ff47
  .word 0x0000182d
  .word 0x0240302d
  .word 0x0260282d
  .word 0x0260202d
  .word 0x3c023000
  .word 0x8cc70024
  .word 0x00073880
  .word 0x00fd3821
  .word 0x8ce700c0
  .word 0x10e0000b
  .word 0x00000000
  .word 0x9cc7002c
  .word 0x00e23825
  .word 0x0007383c
  .word 0x0007383f
  .word 0xaca70040
  .word 0x8cc70034
  .word 0xaca7004c
  .word 0x10000010
  .word 0xfc800090
  .word 0x00000000
  .word 0x9cc70028
  .word 0x00e23825
  .word 0x0007383c
  .word 0x0007383f
  .word 0xaca70040
  .word 0x8cc70030
  .word 0xaca7004c
  .word 0x8cc70028
  .word 0x00073900
  .word 0x0007383c
  .word 0x0007383e
  .word 0x0007383c
  .word 0xfc870090
  .word 0x00000000
  .word 0x8cc70038
  .word 0x24630001
  .word 0x24840008
  .word 0xaca70048
  .word 0x24c60018
  .word 0x8e470018
  .word 0x0067382b
  .word 0x14e0ffda
  .word 0x24a50010
  .word 0x1000ff1b
  .word 0x2ec30002
  .word 0x7ba200a0
  .word 0x26030040
  .word 0x00511021
  .word 0x03c21018
  .word 0x00621021
  .word 0x02c21818
  .word 0x32820008
  .word 0x1040ff92
  .word 0x00000000
  .word 0x1000ff89
  .word 0x3c020003
  .word 0x10000019
  .word 0x0000102d
  .word 0x3c080078
  .word 0xaea00054
  .word 0x0000202d
  .word 0x2508abe0
  .word 0x02a0382d
  .word 0x8d030000
  .word 0x24840003
  .word 0x2c820009
  .word 0xace30008
  .word 0x8d030004
  .word 0xace30010
  .word 0x8d030008
  .word 0xace30018
  .word 0x2508000c
  .word 0x1440fff6
  .word 0x24e70018
  .word 0x00a0202d
  .word 0x0c11d4f4
  .word 0x00c0282d
  .word 0x1000fee2
  .word 0x32830008
  .word 0x24020001
  .word 0x1000feff
  .word 0xae6200dc
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
  .word 0x00000000
  .word 0x00000000
}

// FUN_00475C20
asm void FUN_00475c20(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83ba80
  .word 0x00831821
  .word 0x8c640000
  .word 0x8c830044
  .word 0x30630010
  .word 0x14600011
  .word 0x00000000
  .word 0x8c90009c
  .word 0x0000902d
  .word 0x0200882d
  .word 0x8e240138
  .word 0x10800005
  .word 0x00000000
  .word 0x0c1311f8
  .word 0x00000000
  .word 0xae200138
  .word 0x00000000
  .word 0x8e0300e8
  .word 0x26520001
  .word 0x0072082b
  .word 0x1020fff5
  .word 0x26310004
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

// FUN_00475CB0
asm void FUN_00475cb0(int param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83ba80
  .word 0x00831821
  .word 0x8c640000
  .word 0x8c830044
  .word 0x30630010
  .word 0x14600011
  .word 0x00000000
  .word 0x8c90009c
  .word 0x8e0300d8
  .word 0x1060000d
  .word 0x00000000
  .word 0x0000902d
  .word 0x0200882d
  .word 0x8e230010
  .word 0x1460000a
  .word 0x00000000
  .word 0x00000000
  .word 0x8e0300e8
  .word 0x26520001
  .word 0x0072082b
  .word 0x1020fff8
  .word 0x26310020
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x0c13537c
  .word 0x00000000
  .word 0x0c13537c
  .word 0x00000000
  .word 0x1000fff3
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

// FUN_00475D60
asm long FUN_00475d60(u64 param_1,u64 param_2,u64 param_3,u32 param_4,
                 u32 param_5)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x3c02cff7
  .word 0xffbf0060
  .word 0x3443ff78
  .word 0x7fb50050
  .word 0x3c02cee1
  .word 0x7fb40040
  .word 0x34427e10
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x0100a82d
  .word 0x7fb00000
  .word 0x00e0882d
  .word 0x8cb0004c
  .word 0x02231824
  .word 0x02221024
  .word 0x0003182b
  .word 0x0002102b
  .word 0x00c0902d
  .word 0x38440001
  .word 0x24020004
  .word 0x38650001
  .word 0x32a30004
  .word 0x14620004
  .word 0x32a60010
  .word 0x0000282d
  .word 0x0000202d
  .word 0x0000302d
  .word 0x14c00038
  .word 0x00000000
  .word 0x8e0200d8
  .word 0x14400047
  .word 0x00000000
  .word 0x14a00086
  .word 0x00000000
  .word 0x10800017
  .word 0x00000000
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c11e884
  .word 0x0280202d
  .word 0x0040882d
  .word 0x24020001
  .word 0x16220026
  .word 0x00000000
  .word 0x0c11efe0
  .word 0x0280202d
  .word 0x8f83ba80
  .word 0x3c020048
  .word 0x24429170
  .word 0x26050190
  .word 0x0280202d
  .word 0x02831821
  .word 0x8c630000
  .word 0xac620024
  .word 0x0c11d3c8
  .word 0xac600038
  .word 0x10000019
  .word 0x0220102d
  .word 0x26050190
  .word 0x0c11d3c8
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c1218d0
  .word 0x0280202d
  .word 0x0040882d
  .word 0x1220000e
  .word 0x00000000
  .word 0x8f84ba84
  .word 0x3c020096
  .word 0x24420070
  .word 0x3c030049
  .word 0x24638b90
  .word 0x00441021
  .word 0x8c420000
  .word 0x8c420014
  .word 0xae82006c
  .word 0x8f82ba80
  .word 0x02821021
  .word 0x8c420000
  .word 0xac430020
  .word 0x0220102d
  .word 0x10000096
  .word 0xdfbf0060
  .word 0x8f82ba80
  .word 0x3c050078
  .word 0x24a5b250
  .word 0x24060010
  .word 0x02821021
  .word 0x8c420000
  .word 0x0c148494
  .word 0x24440014
  .word 0x3c020078
  .word 0x0280202d
  .word 0x8c42b254
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0040f809
  .word 0x02a0402d
  .word 0x10000083
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c124dc4
  .word 0x0000302d
  .word 0x0040882d
  .word 0x1220000d
  .word 0x00000000
  .word 0x8e23005c
  .word 0x3c023f80
  .word 0x0220202d
  .word 0xac600004
  .word 0xac600008
  .word 0xac60000c
  .word 0x0c124cf4
  .word 0xac620010
  .word 0x14400005
  .word 0x00000000
  .word 0x10000070
  .word 0x0000102d
  .word 0x1000006e
  .word 0x0000102d
  .word 0x0280202d
  .word 0x0220282d
  .word 0x0c12466c
  .word 0x0000302d
  .word 0x0c124ed8
  .word 0x0220202d
  .word 0x0c1252f8
  .word 0x00000000
  .word 0x0040902d
  .word 0x26240020
  .word 0x0c1254d0
  .word 0x0240282d
  .word 0x0c125330
  .word 0x0240202d
  .word 0x8f84ba80
  .word 0x3c030048
  .word 0x3c020096
  .word 0x2463a510
  .word 0x24420070
  .word 0x02842021
  .word 0x8c840000
  .word 0xac83001c
  .word 0xac800024
  .word 0xac800028
  .word 0xac80002c
  .word 0xac800030
  .word 0xac800034
  .word 0xac800038
  .word 0x8f83ba84
  .word 0x00431021
  .word 0x8c420000
  .word 0x8c420000
  .word 0xae82006c
  .word 0x8c820044
  .word 0x30420008
  .word 0x10400003
  .word 0x00000000
  .word 0x1000ffb0
  .word 0x24110001
  .word 0x26050190
  .word 0x0c11d3c8
  .word 0x0280202d
  .word 0x1000fffa
  .word 0x00000000
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c11e3a0
  .word 0x0280202d
  .word 0x0040882d
  .word 0x24020001
  .word 0x1622ffa3
  .word 0x00000000
  .word 0x8f82ba80
  .word 0x3c050047
  .word 0x3c040047
  .word 0x24a57150
  .word 0x24847610
  .word 0x24030004
  .word 0x02821021
  .word 0x8c420000
  .word 0xac450024
  .word 0xac440028
  .word 0x8e640058
  .word 0x30840004
  .word 0x14830005
  .word 0x00000000
  .word 0x3c030048
  .word 0x24638280
  .word 0x10000004
  .word 0xac430034
  .word 0x3c030048
  .word 0x24638100
  .word 0xac430034
  .word 0x8e650058
  .word 0x24030080
  .word 0x30a40080
  .word 0x1083001c
  .word 0x00000000
  .word 0x3c040008
  .word 0x00a41824
  .word 0x14640005
  .word 0x00000000
  .word 0x3c030047
  .word 0x24637c90
  .word 0x10000002
  .word 0xac43002c
  .word 0xac40002c
  .word 0x8e640058
  .word 0x24030002
  .word 0x30840002
  .word 0x14830005
  .word 0x00000000
  .word 0x3c030047
  .word 0x24637a20
  .word 0x10000004
  .word 0xac430030
  .word 0x3c030047
  .word 0x24637810
  .word 0xac430030
  .word 0xac400038
  .word 0x26050190
  .word 0x0c11d3c8
  .word 0x0280202d
  .word 0x1000ff6e
  .word 0x00000000
  .word 0x3c030047
  .word 0x24637eb0
  .word 0x1000ffeb
  .word 0xac43002c
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
  .word 0x00000000
}

// FUN_00476140
asm void FUN_00476140(u32 *param_1,long param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x04a10003
  .word 0x00058903
  .word 0x24a2000f
  .word 0x00028903
  .word 0x00111100
  .word 0x0000202d
  .word 0x0c140cf8
  .word 0x00a28023
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800076
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x1480007e
  .word 0x00000000
  .word 0xafb20050
  .word 0x3c057000
  .word 0xafb20054
  .word 0x0000302d
  .word 0xafb20058
  .word 0xafb2005c
  .word 0x7ba40050
  .word 0x7ca40000
  .word 0x24c60008
  .word 0x7ca40010
  .word 0x28c30400
  .word 0x7ca40020
  .word 0x7ca40030
  .word 0x7ca40040
  .word 0x7ca40050
  .word 0x7ca40060
  .word 0x7ca40070
  .word 0x1460fff5
  .word 0x24a50080
  .word 0x2a210401
  .word 0x1420008b
  .word 0x00000000
  .word 0x24050100
  .word 0x3c031001
  .word 0x24040400
  .word 0x8c66d000
  .word 0x30c60100
  .word 0x14c00076
  .word 0x00000000
  .word 0x00000000
  .word 0xac65e010
  .word 0xac60d080
  .word 0xac73d010
  .word 0xac64d020
  .word 0xac65d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2631fc00
  .word 0x2a210401
  .word 0x1020fff1
  .word 0x26734000
  .word 0x10000076
  .word 0x00000000
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800076
  .word 0x00000000
  .word 0x24040100
  .word 0x3c031001
  .word 0xac64e010
  .word 0xac60d080
  .word 0xac73d010
  .word 0xac71d020
  .word 0xac64d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00111900
  .word 0x02639821
  .word 0x12000033
  .word 0x00000000
  .word 0x0010082a
  .word 0x10200030
  .word 0x0000382d
  .word 0x2a010009
  .word 0x14200021
  .word 0x2606fff8
  .word 0x0200082a
  .word 0x14200007
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x0201082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24030001
  .word 0x10600016
  .word 0x00000000
  .word 0x3c037000
  .word 0x8c650000
  .word 0x24e70008
  .word 0x00e6202a
  .word 0xae650000
  .word 0x8c650000
  .word 0xae650004
  .word 0x8c650000
  .word 0xae650008
  .word 0x8c650000
  .word 0xae65000c
  .word 0x8c650000
  .word 0xae650010
  .word 0x8c650000
  .word 0xae650014
  .word 0x8c650000
  .word 0xae650018
  .word 0x8c650000
  .word 0xae65001c
  .word 0x1480ffed
  .word 0x26730020
  .word 0x00f0082a
  .word 0x1020000a
  .word 0x00000000
  .word 0x3c037000
  .word 0x8c650000
  .word 0x24e70001
  .word 0x00f0202a
  .word 0xae650000
  .word 0x26730004
  .word 0x1480fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x10000042
  .word 0xdfbf0040
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff80
  .word 0x3c031001
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff70
  .word 0xafb20050
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff80
  .word 0x00000000
  .word 0x00000000
  .word 0x1220ff99
  .word 0x00000000
  .word 0x1000ff88
  .word 0x3c031001
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff80
  .word 0x24040100
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

// FUN_00476490
asm void FUN_00476490(u64 *param_1,long param_2,u64 *param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00c0902d
  .word 0x7fb00000
  .word 0x04a10003
  .word 0x00058903
  .word 0x24a2000f
  .word 0x00028903
  .word 0x00111100
  .word 0x0000202d
  .word 0x0c140cf8
  .word 0x00a28023
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800042
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x1480004a
  .word 0x00000000
  .word 0xde430000
  .word 0x3c057000
  .word 0x0000302d
  .word 0xffa30050
  .word 0xffa30058
  .word 0x7ba40050
  .word 0x7ca40000
  .word 0x24c60008
  .word 0x7ca40010
  .word 0x28c30400
  .word 0x7ca40020
  .word 0x7ca40030
  .word 0x7ca40040
  .word 0x7ca40050
  .word 0x7ca40060
  .word 0x7ca40070
  .word 0x1460fff5
  .word 0x24a50080
  .word 0x2a210401
  .word 0x14200058
  .word 0x00000000
  .word 0x24050100
  .word 0x3c031001
  .word 0x24040400
  .word 0x8c66d000
  .word 0x30c60100
  .word 0x14c00043
  .word 0x00000000
  .word 0xac65e010
  .word 0xac60d080
  .word 0xac73d010
  .word 0xac64d020
  .word 0xac65d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2631fc00
  .word 0x2a210401
  .word 0x1020fff2
  .word 0x26734000
  .word 0x10000044
  .word 0x00000000
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800044
  .word 0x00000000
  .word 0x24040100
  .word 0x3c031001
  .word 0xac64e010
  .word 0xac60d080
  .word 0xac73d010
  .word 0xac71d020
  .word 0xac64d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00111900
  .word 0x02639821
  .word 0x16000044
  .word 0x00000000
  .word 0x10000046
  .word 0xdfbf0040
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ffb4
  .word 0x3c031001
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ffa4
  .word 0xde430000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ffb2
  .word 0x00000000
  .word 0x00000000
  .word 0x1220ffcb
  .word 0x00000000
  .word 0x1000ffba
  .word 0x3c031001
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ffb2
  .word 0x24040100
  .word 0x3c037000
  .word 0xdc630000
  .word 0x1000ffba
  .word 0xfe630000
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

// FUN_00476720
asm void FUN_00476720(int param_1,long param_2,u64 *param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x04a10003
  .word 0x00058103
  .word 0x24a2000f
  .word 0x00028103
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x14800050
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800060
  .word 0x00000000
  .word 0x3c057000
  .word 0x0000302d
  .word 0x7a240000
  .word 0x24c60008
  .word 0x28c30400
  .word 0x7ca40000
  .word 0x7a240000
  .word 0x7ca40010
  .word 0x7a240000
  .word 0x7ca40020
  .word 0x7a240000
  .word 0x7ca40030
  .word 0x7a240000
  .word 0x7ca40040
  .word 0x7a240000
  .word 0x7ca40050
  .word 0x7a240000
  .word 0x7ca40060
  .word 0x7a240000
  .word 0x7ca40070
  .word 0x1460ffed
  .word 0x24a50080
  .word 0x2a010401
  .word 0x14200015
  .word 0x00000000
  .word 0x24050100
  .word 0x3c031001
  .word 0x24040400
  .word 0x8c66d000
  .word 0x30c60100
  .word 0x14c0004d
  .word 0x00000000
  .word 0x00000000
  .word 0xac65e010
  .word 0xac60d080
  .word 0xac72d010
  .word 0xac64d020
  .word 0xac65d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2610fc00
  .word 0x2a010401
  .word 0x1020fff1
  .word 0x26524000
  .word 0x00000000
  .word 0x1200004b
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x24040100
  .word 0x3c031001
  .word 0xac64e010
  .word 0xac60d080
  .word 0xac72d010
  .word 0xac70d020
  .word 0xac64d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x10000030
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff9e
  .word 0x3c031001
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff96
  .word 0x3c057000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ffaa
  .word 0x00000000
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

// FUN_00476980
asm void FUN_00476980(int param_1,long param_2,u64 *param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00c0882d
  .word 0x04a10003
  .word 0x00058103
  .word 0x24a2000f
  .word 0x00028103
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x14800060
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800070
  .word 0x00000000
  .word 0x3c057000
  .word 0x0000302d
  .word 0x7a240000
  .word 0x24c60008
  .word 0x28c30200
  .word 0x7ca40000
  .word 0x7a240010
  .word 0x7ca40010
  .word 0x7a240000
  .word 0x7ca40020
  .word 0x7a240010
  .word 0x7ca40030
  .word 0x7a240000
  .word 0x7ca40040
  .word 0x7a240010
  .word 0x7ca40050
  .word 0x7a240000
  .word 0x7ca40060
  .word 0x7a240010
  .word 0x7ca40070
  .word 0x7a240000
  .word 0x7ca40080
  .word 0x7a240010
  .word 0x7ca40090
  .word 0x7a240000
  .word 0x7ca400a0
  .word 0x7a240010
  .word 0x7ca400b0
  .word 0x7a240000
  .word 0x7ca400c0
  .word 0x7a240010
  .word 0x7ca400d0
  .word 0x7a240000
  .word 0x7ca400e0
  .word 0x7a240010
  .word 0x7ca400f0
  .word 0x1460ffdd
  .word 0x24a50100
  .word 0x2a010401
  .word 0x14200015
  .word 0x00000000
  .word 0x24050100
  .word 0x3c031001
  .word 0x24040400
  .word 0x8c66d000
  .word 0x30c60100
  .word 0x14c0004d
  .word 0x00000000
  .word 0x00000000
  .word 0xac65e010
  .word 0xac60d080
  .word 0xac72d010
  .word 0xac64d020
  .word 0xac65d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2610fc00
  .word 0x2a010401
  .word 0x1020fff1
  .word 0x26524000
  .word 0x00000000
  .word 0x1200004b
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x24040100
  .word 0x3c031001
  .word 0xac64e010
  .word 0xac60d080
  .word 0xac72d010
  .word 0xac70d020
  .word 0xac64d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x10000030
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff8e
  .word 0x3c031001
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff86
  .word 0x3c057000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ffaa
  .word 0x00000000
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

// FUN_00476C20
asm void FUN_00476c20(int param_1,int param_2,long param_3)
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
  .word 0x04c10003
  .word 0x00068903
  .word 0x24c2000f
  .word 0x00028903
  .word 0x00111100
  .word 0x0000202d
  .word 0x0c140cf8
  .word 0x00c28023
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800057
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x1480005f
  .word 0x00000000
  .word 0x2a210401
  .word 0x142000aa
  .word 0x00000000
  .word 0x3c031001
  .word 0x24070200
  .word 0x24060400
  .word 0x24050100
  .word 0x8c64d400
  .word 0x30840100
  .word 0x14800069
  .word 0x00000000
  .word 0x00000000
  .word 0xac67e010
  .word 0xac60d480
  .word 0xac72d410
  .word 0xac66d420
  .word 0xac65d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800072
  .word 0x00000000
  .word 0x00000000
  .word 0x8c64d400
  .word 0x30840100
  .word 0x1480007b
  .word 0x00000000
  .word 0xac65e010
  .word 0xac60d080
  .word 0xac73d010
  .word 0xac66d020
  .word 0xac65d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2631fc00
  .word 0x26524000
  .word 0x2a210401
  .word 0x1020ffe0
  .word 0x26734000
  .word 0x10000083
  .word 0x00000000
  .word 0x8c64d400
  .word 0x30840100
  .word 0x14800083
  .word 0x00000000
  .word 0x24050200
  .word 0x3c031001
  .word 0xac65e010
  .word 0x24040100
  .word 0xac60d480
  .word 0xac72d410
  .word 0xac71d420
  .word 0xac64d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8c64d400
  .word 0x30840100
  .word 0x1480008a
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800099
  .word 0x00000000
  .word 0x24040100
  .word 0x3c031001
  .word 0xac64e010
  .word 0xac60d080
  .word 0xac73d010
  .word 0xac71d020
  .word 0xac64d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00111900
  .word 0x02439021
  .word 0x02639821
  .word 0x16000098
  .word 0x00000000
  .word 0x1000009c
  .word 0xdfbf0040
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff9f
  .word 0x3c031001
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff8f
  .word 0x2a210401
  .word 0xac67e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff86
  .word 0x00000000
  .word 0x00000000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff84
  .word 0x00000000
  .word 0x00000000
  .word 0xac67e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff72
  .word 0x00000000
  .word 0x00000000
  .word 0x1220ffa0
  .word 0x00000000
  .word 0x1000ff7b
  .word 0x3c031001
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff6b
  .word 0x24050200
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff65
  .word 0x3c031001
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff5d
  .word 0x24040100
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0c148494
  .word 0x0200302d
  .word 0x1000ff64
  .word 0x00000000
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
}

// FUN_00477050
asm u8 FUN_00477050(int param_1)
{
  .set noreorder
  .word 0x8f82ba80
  .word 0x00821021
  .word 0x8c420000
  .word 0x8c44009c
  .word 0x24450050
  .word 0x8c8200d8
  .word 0x10400034
  .word 0x00000000
  .word 0x8c8300e4
  .word 0x8c8200e8
  .word 0x0062082a
  .word 0x10200005
  .word 0x00000000
  .word 0x8c8200e4
  .word 0x24420001
  .word 0x10000002
  .word 0xac8200e4
  .word 0xac8000e4
  .word 0x8c8200e8
  .word 0x10400020
  .word 0x00000000
  .word 0x0000182d
  .word 0x0000102d
  .word 0x8c8800e4
  .word 0x24630003
  .word 0x2c660009
  .word 0x000838c0
  .word 0x00e83821
  .word 0x00073880
  .word 0x00873821
  .word 0x00e23821
  .word 0x8ce70140
  .word 0xaca70004
  .word 0x8c8800e4
  .word 0x000838c0
  .word 0x00e83821
  .word 0x00073880
  .word 0x00873821
  .word 0x00e23821
  .word 0x8ce70144
  .word 0xaca7000c
  .word 0x8c8800e4
  .word 0x000838c0
  .word 0x00e83821
  .word 0x00073880
  .word 0x00873821
  .word 0x00e23821
  .word 0x8ce70148
  .word 0x2442000c
  .word 0xaca70014
  .word 0x14c0ffe4
  .word 0x24a50018
  .word 0x8c8200e4
  .word 0x00021140
  .word 0x00441021
  .word 0x8c420010
  .word 0x00401026
  .word 0x10000002
  .word 0x2c420001
  .word 0x24020001
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00477150
asm void FUN_00477150(int *param_1,int param_2,u64 param_3,u64 param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x24030001
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x00c0a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8cd0004c
  .word 0x8e0400e0
  .word 0x14830031
  .word 0x0100882d
  .word 0x8e1400e4
  .word 0x26830001
  .word 0xae0300e4
  .word 0x8e0400e4
  .word 0x8e0300e8
  .word 0x0064082a
  .word 0x14200079
  .word 0x00000000
  .word 0x8e440018
  .word 0x8f83bba0
  .word 0x00832021
  .word 0x8c830000
  .word 0x10600006
  .word 0x0000302d
  .word 0x8c650000
  .word 0x24030001
  .word 0x14a30002
  .word 0x00000000
  .word 0x0060302d
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8e0300e4
  .word 0x0c127968
  .word 0x24050001
  .word 0x0040202d
  .word 0x8e0300e4
  .word 0x8c860000
  .word 0x00031880
  .word 0x00701821
  .word 0x8cc50004
  .word 0x8c630138
  .word 0x10600008
  .word 0xacc30004
  .word 0x8cc30004
  .word 0x24c40004
  .word 0xac640010
  .word 0x8e0300e4
  .word 0x00031880
  .word 0x00701821
  .word 0xac600138
  .word 0x00141880
  .word 0x00701821
  .word 0xac650138
  .word 0x10a00003
  .word 0x24640138
  .word 0x8c830000
  .word 0xac640010
  .word 0x3c031000
  .word 0x02231824
  .word 0x1460004f
  .word 0x8e1400e4
  .word 0x8e440018
  .word 0x8f83bba0
  .word 0x00832021
  .word 0x8c830000
  .word 0x10600006
  .word 0x0000302d
  .word 0x8c650000
  .word 0x24030001
  .word 0x14a30002
  .word 0x00000000
  .word 0x0060302d
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c830000
  .word 0x0c127968
  .word 0x24050001
  .word 0x0040202d
  .word 0x8c830000
  .word 0x8c630004
  .word 0x1060003d
  .word 0x00000000
  .word 0x0c1357a4
  .word 0x00000000
  .word 0x32230002
  .word 0x38630002
  .word 0x2c630001
  .word 0x14600004
  .word 0x00000000
  .word 0x32232000
  .word 0x38632000
  .word 0x2c630001
  .word 0xae630008
  .word 0x32230080
  .word 0x38630080
  .word 0x2c630001
  .word 0x14600005
  .word 0x00000000
  .word 0x3c040008
  .word 0x02241824
  .word 0x00641826
  .word 0x2c630001
  .word 0xae630004
  .word 0x24030001
  .word 0xae630000
  .word 0x32230004
  .word 0x38630004
  .word 0x2c630001
  .word 0x14600004
  .word 0x00000000
  .word 0x32234000
  .word 0x38634000
  .word 0x2c630001
  .word 0xae63000c
  .word 0x8e630000
  .word 0x14600027
  .word 0x00000000
  .word 0x8e630008
  .word 0x1460002d
  .word 0x00000000
  .word 0x8e630004
  .word 0x14600033
  .word 0x00000000
  .word 0x8e63000c
  .word 0x10600039
  .word 0x00000000
  .word 0x001420c0
  .word 0x24030008
  .word 0x00942021
  .word 0x00042080
  .word 0x00902021
  .word 0x8c84014c
  .word 0xae640028
  .word 0xae63002c
  .word 0x10000030
  .word 0xdfbf0060
  .word 0x1000ff87
  .word 0xae0000e4
  .word 0x0c11d2a0
  .word 0x02a0202d
  .word 0x1000ffb0
  .word 0x8e440018
  .word 0xae600008
  .word 0xae600004
  .word 0xae600000
  .word 0xae60000c
  .word 0xae600010
  .word 0xae600014
  .word 0xae600020
  .word 0xae600024
  .word 0xae600018
  .word 0xae60001c
  .word 0xae600028
  .word 0x1000ffec
  .word 0xae60002c
  .word 0x001420c0
  .word 0x24030010
  .word 0x00942021
  .word 0x00042080
  .word 0x00902021
  .word 0x8c840140
  .word 0xae640010
  .word 0x1000ffd2
  .word 0xae630014
  .word 0x001420c0
  .word 0x24030004
  .word 0x00942021
  .word 0x00042080
  .word 0x00902021
  .word 0x8c840150
  .word 0xae640020
  .word 0x1000ffcc
  .word 0xae630024
  .word 0x001420c0
  .word 0x24030010
  .word 0x00942021
  .word 0x00042080
  .word 0x00902021
  .word 0x8c84015c
  .word 0xae640018
  .word 0x1000ffc6
  .word 0xae63001c
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

// FUN_00477470
asm void FUN_00477470(int *param_1,u64 param_2,u64 param_3,u64 param_4,
                 u32 param_5)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0x3c021000
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0100902d
  .word 0x7fb00000
  .word 0x02421024
  .word 0x8cd1004c
  .word 0x8e3000e4
  .word 0x10400003
  .word 0x0080982d
  .word 0x0c11d2a0
  .word 0x00c0202d
  .word 0x0c1357a4
  .word 0x00000000
  .word 0x32430002
  .word 0x38630002
  .word 0x2c630001
  .word 0x14600004
  .word 0x00000000
  .word 0x32432000
  .word 0x38632000
  .word 0x2c630001
  .word 0xae630008
  .word 0x32430080
  .word 0x38630080
  .word 0x2c630001
  .word 0x14600005
  .word 0x00000000
  .word 0x3c040008
  .word 0x02441824
  .word 0x00641826
  .word 0x2c630001
  .word 0xae630004
  .word 0x24030001
  .word 0xae630000
  .word 0x32430004
  .word 0x38630004
  .word 0x2c630001
  .word 0x14600004
  .word 0x00000000
  .word 0x32434000
  .word 0x38634000
  .word 0x2c630001
  .word 0xae63000c
  .word 0x8e630000
  .word 0x1460000c
  .word 0x00000000
  .word 0x8e630008
  .word 0x14600012
  .word 0x00000000
  .word 0x8e630004
  .word 0x14600018
  .word 0x00000000
  .word 0x8e63000c
  .word 0x1460001e
  .word 0x00000000
  .word 0x10000025
  .word 0xdfbf0040
  .word 0x001020c0
  .word 0x24030010
  .word 0x00902021
  .word 0x00042080
  .word 0x00912021
  .word 0x8c840140
  .word 0xae640010
  .word 0x1000ffed
  .word 0xae630014
  .word 0x001020c0
  .word 0x24030004
  .word 0x00902021
  .word 0x00042080
  .word 0x00912021
  .word 0x8c840150
  .word 0xae640020
  .word 0x1000ffe7
  .word 0xae630024
  .word 0x001020c0
  .word 0x24030010
  .word 0x00902021
  .word 0x00042080
  .word 0x00912021
  .word 0x8c84015c
  .word 0xae640018
  .word 0x1000ffe1
  .word 0xae63001c
  .word 0x001020c0
  .word 0x24030008
  .word 0x00902021
  .word 0x00042080
  .word 0x00912021
  .word 0x8c84014c
  .word 0xae640028
  .word 0x1000ffdb
  .word 0xae63002c
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0050
  .word 0x00000000
}

// FUN_00477610
asm void FUN_00477610(int *param_1,u64 param_2,u64 param_3,int param_4,int param_5)
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
  .word 0x8d050004
  .word 0x8d060008
  .word 0x8c830004
  .word 0x10c30065
  .word 0x8c880000
  .word 0x0007082a
  .word 0x10200060
  .word 0x0000202d
  .word 0x28e10009
  .word 0x1420004f
  .word 0x24f6fff8
  .word 0x00e0082a
  .word 0x14200007
  .word 0x0000482d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00e1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24090001
  .word 0x11200044
  .word 0x00000000
  .word 0xc4a00000
  .word 0x00a6a021
  .word 0x0103a821
  .word 0x02869021
  .word 0x02a39821
  .word 0x02468021
  .word 0x02638821
  .word 0x0206c021
  .word 0x0223c821
  .word 0x03067021
  .word 0x03237821
  .word 0x01c66021
  .word 0xe5000000
  .word 0x01e36821
  .word 0xc4a00004
  .word 0x24840008
  .word 0x01865021
  .word 0x01a35821
  .word 0x0096482a
  .word 0xe5000004
  .word 0xc4a00008
  .word 0xe5000008
  .word 0x01462821
  .word 0xc6800000
  .word 0x01634021
  .word 0xe6a00000
  .word 0xc6800004
  .word 0xe6a00004
  .word 0xc6800008
  .word 0xe6a00008
  .word 0xc6400000
  .word 0xe6600000
  .word 0xc6400004
  .word 0xe6600004
  .word 0xc6400008
  .word 0xe6600008
  .word 0xc6000000
  .word 0xe6200000
  .word 0xc6000004
  .word 0xe6200004
  .word 0xc6000008
  .word 0xe6200008
  .word 0xc7000000
  .word 0xe7200000
  .word 0xc7000004
  .word 0xe7200004
  .word 0xc7000008
  .word 0xe7200008
  .word 0xc5c00000
  .word 0xe5e00000
  .word 0xc5c00004
  .word 0xe5e00004
  .word 0xc5c00008
  .word 0xe5e00008
  .word 0xc5800000
  .word 0xe5a00000
  .word 0xc5800004
  .word 0xe5a00004
  .word 0xc5800008
  .word 0xe5a00008
  .word 0xc5400000
  .word 0xe5600000
  .word 0xc5400004
  .word 0xe5600004
  .word 0xc5400008
  .word 0x1520ffbe
  .word 0xe5600008
  .word 0x0087082a
  .word 0x1020000c
  .word 0x00000000
  .word 0xc4a00000
  .word 0x24840001
  .word 0x0087482a
  .word 0xe5000000
  .word 0xc4a00004
  .word 0xe5000004
  .word 0xc4a00008
  .word 0xe5000008
  .word 0x00a62821
  .word 0x1520fff6
  .word 0x01034021
  .word 0x10000006
  .word 0xdfbf0070
  .word 0x00e33018
  .word 0x0c11db08
  .word 0x0100202d
  .word 0x1000fffa
  .word 0x00000000
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

// FUN_00477810
asm void FUN_00477810(u32 *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x24030004
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c870000
  .word 0x8c840004
  .word 0x1083006f
  .word 0x00000000
  .word 0x0005082a
  .word 0x1020006a
  .word 0x0000402d
  .word 0x28a10009
  .word 0x14200057
  .word 0x24a3fff8
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000482d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24090001
  .word 0x1120004c
  .word 0x00000000
  .word 0x90cd007c
  .word 0x00e49021
  .word 0x90cc007d
  .word 0x02448821
  .word 0x90cb007e
  .word 0x02248021
  .word 0x90ca007f
  .word 0x0204c821
  .word 0x0324c021
  .word 0x25080008
  .word 0x03047821
  .word 0x0103482a
  .word 0x01e47021
  .word 0xa0ed0000
  .word 0xa0ec0001
  .word 0xa0eb0002
  .word 0xa0ea0003
  .word 0x90cd007c
  .word 0x01c43821
  .word 0x90cc007d
  .word 0x90cb007e
  .word 0x90ca007f
  .word 0xa24d0000
  .word 0xa24c0001
  .word 0xa24b0002
  .word 0xa24a0003
  .word 0x90cd007c
  .word 0x90cc007d
  .word 0x90cb007e
  .word 0x90ca007f
  .word 0xa22d0000
  .word 0xa22c0001
  .word 0xa22b0002
  .word 0xa22a0003
  .word 0x90cd007c
  .word 0x90cc007d
  .word 0x90cb007e
  .word 0x90ca007f
  .word 0xa20d0000
  .word 0xa20c0001
  .word 0xa20b0002
  .word 0xa20a0003
  .word 0x90cd007c
  .word 0x90cc007d
  .word 0x90cb007e
  .word 0x90ca007f
  .word 0xa32d0000
  .word 0xa32c0001
  .word 0xa32b0002
  .word 0xa32a0003
  .word 0x90cd007c
  .word 0x90cc007d
  .word 0x90cb007e
  .word 0x90ca007f
  .word 0xa30d0000
  .word 0xa30c0001
  .word 0xa30b0002
  .word 0xa30a0003
  .word 0x90cd007c
  .word 0x90cc007d
  .word 0x90cb007e
  .word 0x90ca007f
  .word 0xa1ed0000
  .word 0xa1ec0001
  .word 0xa1eb0002
  .word 0xa1ea0003
  .word 0x90cd007c
  .word 0x90cc007d
  .word 0x90cb007e
  .word 0x90ca007f
  .word 0xa1cd0000
  .word 0xa1cc0001
  .word 0xa1cb0002
  .word 0x1520ffb6
  .word 0xa1ca0003
  .word 0x0105082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x90cc007c
  .word 0x25080001
  .word 0x90cb007d
  .word 0x0105182a
  .word 0x90ca007e
  .word 0x90c9007f
  .word 0xa0ec0000
  .word 0xa0eb0001
  .word 0xa0ea0002
  .word 0xa0e90003
  .word 0x1460fff5
  .word 0x00e43821
  .word 0x00000000
  .word 0x10000007
  .word 0xdfbf0030
  .word 0x00a42818
  .word 0x8cc6007c
  .word 0x0c11d850
  .word 0x00e0202d
  .word 0x1000fff9
  .word 0x00000000
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_00477A20
asm void FUN_00477a20(u32 *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff40
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
  .word 0x8c830004
  .word 0x8cd60028
  .word 0x8cc70024
  .word 0x12c3007b
  .word 0x8c880000
  .word 0x0005082a
  .word 0x10200076
  .word 0x0000b82d
  .word 0x24a4fff8
  .word 0x28a10009
  .word 0x14200062
  .word 0x7fa400b0
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000202d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24040001
  .word 0x10800057
  .word 0x00000000
  .word 0x90f50000
  .word 0x00f68821
  .word 0x90f40001
  .word 0x0236c821
  .word 0x90f30002
  .word 0x01039021
  .word 0x90fe0003
  .word 0x02438021
  .word 0x0203c021
  .word 0x03367821
  .word 0x01f66821
  .word 0x03037021
  .word 0x01b65821
  .word 0x01c36021
  .word 0x01764821
  .word 0x01835021
  .word 0x01362021
  .word 0x26f70008
  .word 0xa1150000
  .word 0x01433021
  .word 0xa1140001
  .word 0x00963821
  .word 0xa1130002
  .word 0x7bb300b0
  .word 0xa11e0003
  .word 0x92350000
  .word 0x92340001
  .word 0x02f3982a
  .word 0x7fb300a0
  .word 0x92330002
  .word 0x92310003
  .word 0xa2550000
  .word 0xa2540001
  .word 0xa2530002
  .word 0xa2510003
  .word 0x93340000
  .word 0x93330001
  .word 0x93320002
  .word 0x93310003
  .word 0xa2140000
  .word 0xa2130001
  .word 0xa2120002
  .word 0xa2110003
  .word 0x91f20000
  .word 0x91f10001
  .word 0x91f00002
  .word 0x91ef0003
  .word 0xa3120000
  .word 0xa3110001
  .word 0xa3100002
  .word 0xa30f0003
  .word 0x91b10000
  .word 0x91b00001
  .word 0x91af0002
  .word 0x91ad0003
  .word 0xa1d10000
  .word 0xa1d00001
  .word 0xa1cf0002
  .word 0xa1cd0003
  .word 0x916f0000
  .word 0x916e0001
  .word 0x916d0002
  .word 0x916b0003
  .word 0xa18f0000
  .word 0xa18e0001
  .word 0xa18d0002
  .word 0xa18b0003
  .word 0x912d0000
  .word 0x912c0001
  .word 0x912b0002
  .word 0x91290003
  .word 0xa14d0000
  .word 0xa14c0001
  .word 0xa14b0002
  .word 0xa1490003
  .word 0x908b0000
  .word 0x908a0001
  .word 0x90890002
  .word 0x90840003
  .word 0xa0cb0000
  .word 0xa0ca0001
  .word 0xa0c90002
  .word 0xa0c40003
  .word 0x7ba400a0
  .word 0x1480ffab
  .word 0x00c34021
  .word 0x02e5082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x90eb0000
  .word 0x26f70001
  .word 0x90ea0001
  .word 0x02e5202a
  .word 0x90e90002
  .word 0x90e60003
  .word 0xa10b0000
  .word 0x00f63821
  .word 0xa10a0001
  .word 0xa1090002
  .word 0xa1060003
  .word 0x1480fff4
  .word 0x01034021
  .word 0x10000007
  .word 0xdfbf0090
  .word 0x00a33018
  .word 0x0100202d
  .word 0x0c11db08
  .word 0x00e0282d
  .word 0x1000fff9
  .word 0x00000000
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

// FUN_00477C90
asm void FUN_00477c90(int *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24030010
  .word 0xffbf0000
  .word 0x24d80090
  .word 0x8c8e0004
  .word 0x8c8f0000
  .word 0x11c3006f
  .word 0x24cd0098
  .word 0x0005082a
  .word 0x1020006a
  .word 0x0000c82d
  .word 0x28a10009
  .word 0x14200057
  .word 0x24acfff8
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24030001
  .word 0x1060004c
  .word 0x00000000
  .word 0xc7000000
  .word 0x01ee5821
  .word 0x016e5021
  .word 0x27390008
  .word 0x014e4821
  .word 0x032c182a
  .word 0x012e4021
  .word 0x010e3821
  .word 0x00ee3021
  .word 0xe5e00000
  .word 0x00ce2021
  .word 0xc7000004
  .word 0xe5e00004
  .word 0xc5a00000
  .word 0xe5e00008
  .word 0xc5a00004
  .word 0xe5e0000c
  .word 0xc7000000
  .word 0x008e7821
  .word 0xe5600000
  .word 0xc7000004
  .word 0xe5600004
  .word 0xc5a00000
  .word 0xe5600008
  .word 0xc5a00004
  .word 0xe560000c
  .word 0xc7000000
  .word 0xe5400000
  .word 0xc7000004
  .word 0xe5400004
  .word 0xc5a00000
  .word 0xe5400008
  .word 0xc5a00004
  .word 0xe540000c
  .word 0xc7000000
  .word 0xe5200000
  .word 0xc7000004
  .word 0xe5200004
  .word 0xc5a00000
  .word 0xe5200008
  .word 0xc5a00004
  .word 0xe520000c
  .word 0xc7000000
  .word 0xe5000000
  .word 0xc7000004
  .word 0xe5000004
  .word 0xc5a00000
  .word 0xe5000008
  .word 0xc5a00004
  .word 0xe500000c
  .word 0xc7000000
  .word 0xe4e00000
  .word 0xc7000004
  .word 0xe4e00004
  .word 0xc5a00000
  .word 0xe4e00008
  .word 0xc5a00004
  .word 0xe4e0000c
  .word 0xc7000000
  .word 0xe4c00000
  .word 0xc7000004
  .word 0xe4c00004
  .word 0xc5a00000
  .word 0xe4c00008
  .word 0xc5a00004
  .word 0xe4c0000c
  .word 0xc7000000
  .word 0xe4800000
  .word 0xc7000004
  .word 0xe4800004
  .word 0xc5a00000
  .word 0xe4800008
  .word 0xc5a00004
  .word 0x1460ffb6
  .word 0xe480000c
  .word 0x0325082a
  .word 0x1020000e
  .word 0x00000000
  .word 0xc7000000
  .word 0x27390001
  .word 0x0325182a
  .word 0xe5e00000
  .word 0xc7000004
  .word 0xe5e00004
  .word 0xc5a00000
  .word 0xe5e00008
  .word 0xc5a00004
  .word 0xe5e0000c
  .word 0x1460fff5
  .word 0x01ee7821
  .word 0x00000000
  .word 0x1000000f
  .word 0xdfbf0000
  .word 0xc4c00090
  .word 0xe7a00010
  .word 0xc4c00094
  .word 0xe7a00014
  .word 0xc4c00098
  .word 0xe7a00018
  .word 0xc4c0009c
  .word 0xe7a0001c
  .word 0x00ae2818
  .word 0x01e0202d
  .word 0x0c11d9c8
  .word 0x27a60010
  .word 0x1000fff1
  .word 0x00000000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_00477EB0
asm void FUN_00477eb0(int *param_1,int param_2,int param_3)
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
  .word 0x8c880000
  .word 0x8cc30040
  .word 0x8c840004
  .word 0x10640077
  .word 0x8cc7003c
  .word 0x0005082a
  .word 0x10200072
  .word 0x0000302d
  .word 0x28a10009
  .word 0x1420005f
  .word 0x24b6fff8
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000482d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24090001
  .word 0x11200054
  .word 0x00000000
  .word 0xc4e00000
  .word 0x00e3a021
  .word 0x0104a821
  .word 0x02839021
  .word 0x02a49821
  .word 0x02438021
  .word 0x02648821
  .word 0x0203c021
  .word 0x0224c821
  .word 0x03037021
  .word 0x03247821
  .word 0x01c36021
  .word 0xe5000000
  .word 0x01e46821
  .word 0xc4e00004
  .word 0x24c60008
  .word 0x01835021
  .word 0x01a45821
  .word 0x00d6482a
  .word 0xe5000004
  .word 0xc4e00008
  .word 0xe5000008
  .word 0xc4e0000c
  .word 0xe500000c
  .word 0x01433821
  .word 0xc6800000
  .word 0x01644021
  .word 0xe6a00000
  .word 0xc6800004
  .word 0xe6a00004
  .word 0xc6800008
  .word 0xe6a00008
  .word 0xc680000c
  .word 0xe6a0000c
  .word 0xc6400000
  .word 0xe6600000
  .word 0xc6400004
  .word 0xe6600004
  .word 0xc6400008
  .word 0xe6600008
  .word 0xc640000c
  .word 0xe660000c
  .word 0xc6000000
  .word 0xe6200000
  .word 0xc6000004
  .word 0xe6200004
  .word 0xc6000008
  .word 0xe6200008
  .word 0xc600000c
  .word 0xe620000c
  .word 0xc7000000
  .word 0xe7200000
  .word 0xc7000004
  .word 0xe7200004
  .word 0xc7000008
  .word 0xe7200008
  .word 0xc700000c
  .word 0xe720000c
  .word 0xc5c00000
  .word 0xe5e00000
  .word 0xc5c00004
  .word 0xe5e00004
  .word 0xc5c00008
  .word 0xe5e00008
  .word 0xc5c0000c
  .word 0xe5e0000c
  .word 0xc5800000
  .word 0xe5a00000
  .word 0xc5800004
  .word 0xe5a00004
  .word 0xc5800008
  .word 0xe5a00008
  .word 0xc580000c
  .word 0xe5a0000c
  .word 0xc5400000
  .word 0xe5600000
  .word 0xc5400004
  .word 0xe5600004
  .word 0xc5400008
  .word 0xe5600008
  .word 0xc540000c
  .word 0x1520ffae
  .word 0xe560000c
  .word 0x00c5082a
  .word 0x1020000e
  .word 0x00000000
  .word 0xc4e00000
  .word 0x24c60001
  .word 0x00c5482a
  .word 0xe5000000
  .word 0xc4e00004
  .word 0xe5000004
  .word 0xc4e00008
  .word 0xe5000008
  .word 0xc4e0000c
  .word 0xe500000c
  .word 0x00e33821
  .word 0x1520fff4
  .word 0x01044021
  .word 0x10000007
  .word 0xdfbf0070
  .word 0x00a43018
  .word 0x0100202d
  .word 0x0c11db08
  .word 0x00e0282d
  .word 0x1000fff9
  .word 0x00000000
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
}

// FUN_00478100
asm void FUN_00478100(int *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x24030008
  .word 0xffbf0000
  .word 0x8c8e0004
  .word 0x11c3004b
  .word 0x8c8f0000
  .word 0x0005082a
  .word 0x10200046
  .word 0x0000c02d
  .word 0x28a10009
  .word 0x14200037
  .word 0x24adfff8
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000182d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24030001
  .word 0x1060002c
  .word 0x00000000
  .word 0xc4c10070
  .word 0x01ee6021
  .word 0xc4c00074
  .word 0x018e5821
  .word 0x016e5021
  .word 0x27180008
  .word 0x014e4821
  .word 0x030d182a
  .word 0x012e4021
  .word 0x010e3821
  .word 0x00ee2021
  .word 0xe5e10000
  .word 0xe5e00004
  .word 0xc4c10070
  .word 0x008e7821
  .word 0xc4c00074
  .word 0xe5810000
  .word 0xe5800004
  .word 0xc4c10070
  .word 0xc4c00074
  .word 0xe5610000
  .word 0xe5600004
  .word 0xc4c10070
  .word 0xc4c00074
  .word 0xe5410000
  .word 0xe5400004
  .word 0xc4c10070
  .word 0xc4c00074
  .word 0xe5210000
  .word 0xe5200004
  .word 0xc4c10070
  .word 0xc4c00074
  .word 0xe5010000
  .word 0xe5000004
  .word 0xc4c10070
  .word 0xc4c00074
  .word 0xe4e10000
  .word 0xe4e00004
  .word 0xc4c10070
  .word 0xc4c00074
  .word 0xe4810000
  .word 0x1460ffd6
  .word 0xe4800004
  .word 0x0305082a
  .word 0x1020000a
  .word 0x00000000
  .word 0xc4c10070
  .word 0x27180001
  .word 0xc4c00074
  .word 0x0305182a
  .word 0xe5e10000
  .word 0xe5e00004
  .word 0x1460fff9
  .word 0x01ee7821
  .word 0x00000000
  .word 0x1000000c
  .word 0xdfbf0000
  .word 0xc4c10070
  .word 0x27a20018
  .word 0xc4c00074
  .word 0xe7a10018
  .word 0xe7a0001c
  .word 0x00ae2818
  .word 0x01e0202d
  .word 0x0c11d924
  .word 0x0040302d
  .word 0x1000fff4
  .word 0x00000000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00478280
asm void FUN_00478280(int *param_1,int param_2,int param_3)
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
  .word 0x8c880000
  .word 0x8cc30020
  .word 0x8c840004
  .word 0x10640054
  .word 0x8cc7001c
  .word 0x0005082a
  .word 0x1020004f
  .word 0x0000302d
  .word 0x28a10009
  .word 0x14200040
  .word 0x24b5fff8
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000482d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24090001
  .word 0x11200035
  .word 0x00000000
  .word 0xc4e10000
  .word 0x0104a021
  .word 0xc4e00004
  .word 0x02849821
  .word 0x02648821
  .word 0x24c60008
  .word 0x0224c821
  .word 0x00d5482a
  .word 0x03247821
  .word 0x01e46821
  .word 0x01a45821
  .word 0xe5010000
  .word 0x00e33821
  .word 0xe5000004
  .word 0x00e39021
  .word 0xc4e10000
  .word 0x02438021
  .word 0xc4e00004
  .word 0x0203c021
  .word 0x03037021
  .word 0x01644021
  .word 0x01c36021
  .word 0x01835021
  .word 0xe6810000
  .word 0x01433821
  .word 0xe6800004
  .word 0xc6410000
  .word 0xc6400004
  .word 0xe6610000
  .word 0xe6600004
  .word 0xc6010000
  .word 0xc6000004
  .word 0xe6210000
  .word 0xe6200004
  .word 0xc7010000
  .word 0xc7000004
  .word 0xe7210000
  .word 0xe7200004
  .word 0xc5c10000
  .word 0xc5c00004
  .word 0xe5e10000
  .word 0xe5e00004
  .word 0xc5810000
  .word 0xc5800004
  .word 0xe5a10000
  .word 0xe5a00004
  .word 0xc5410000
  .word 0xc5400004
  .word 0xe5610000
  .word 0x1520ffce
  .word 0xe5600004
  .word 0x00000000
  .word 0x00c5082a
  .word 0x1020000a
  .word 0x00000000
  .word 0xc4e10000
  .word 0x24c60001
  .word 0xc4e00004
  .word 0x00c5482a
  .word 0xe5010000
  .word 0x00e33821
  .word 0xe5000004
  .word 0x1520fff8
  .word 0x01044021
  .word 0x10000007
  .word 0xdfbf0060
  .word 0x00a43018
  .word 0x0100202d
  .word 0x0c11db08
  .word 0x00e0282d
  .word 0x1000fff9
  .word 0x00000000
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

// FUN_00478440
asm u32 FUN_00478440(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c02efff
  .word 0xffbf0010
  .word 0x3c060047
  .word 0x7fb00000
  .word 0x3447ffff
  .word 0x8c83002c
  .word 0x24c67470
  .word 0x8f88ba80
  .word 0x8caa000c
  .word 0x8c840008
  .word 0x00881021
  .word 0x8c500000
  .word 0x8e02009c
  .word 0x8c4900e4
  .word 0x000940c0
  .word 0x01094021
  .word 0x00084080
  .word 0x01024021
  .word 0xad0a0140
  .word 0x8c4900e4
  .word 0x8caa0000
  .word 0x000940c0
  .word 0x01094021
  .word 0x00084080
  .word 0x01024021
  .word 0xad0a0150
  .word 0x8c4900e4
  .word 0x8caa0004
  .word 0x000940c0
  .word 0x01094021
  .word 0x00084080
  .word 0x01024021
  .word 0xad0a014c
  .word 0x8c4900e4
  .word 0x8caa0008
  .word 0x000940c0
  .word 0x01094021
  .word 0x00084080
  .word 0x01021021
  .word 0xac4a015c
  .word 0xae060024
  .word 0x8c660004
  .word 0x0c12186c
  .word 0x26050050
  .word 0x3c030047
  .word 0x24020001
  .word 0x24637150
  .word 0xae030024
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00478520
asm u64 FUN_00478520(int param_1)
{
  .set noreorder
  .word 0x27bdff00
  .word 0x3c020096
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x0000f02d
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x0000b02d
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c920008
  .word 0x8c830004
  .word 0x8c550070
  .word 0x8f84ba80
  .word 0x246201f0
  .word 0x8eb70060
  .word 0x7fa200d0
  .word 0x8c6301f8
  .word 0x02441021
  .word 0x8c440000
  .word 0x8c910004
  .word 0x2462ffff
  .word 0x8c93009c
  .word 0x02221021
  .word 0x0043001b
  .word 0x8e6300dc
  .word 0x00000000
  .word 0x00008012
  .word 0x24020001
  .word 0x1462000a
  .word 0xffa000e8
  .word 0x8e820030
  .word 0x8c420000
  .word 0x24430018
  .word 0x8c420024
  .word 0x16220113
  .word 0x00000000
  .word 0x8c62001c
  .word 0x14500110
  .word 0x00000000
  .word 0x8e850040
  .word 0x10a00002
  .word 0x00000000
  .word 0x24160001
  .word 0x8f82ba80
  .word 0x02421021
  .word 0x8c420000
  .word 0x0c11d268
  .word 0x24440050
  .word 0x8f82ba80
  .word 0x8e850040
  .word 0x02421021
  .word 0x8c420000
  .word 0x0c11d230
  .word 0x24440050
  .word 0xde6200b8
  .word 0x0000202d
  .word 0x2405000c
  .word 0x7fa200c0
  .word 0xde6200c8
  .word 0x7fa200b0
  .word 0xde6200c0
  .word 0x0c135674
  .word 0x7fa200a0
  .word 0x104000fc
  .word 0x00000000
  .word 0x3c036c0a
  .word 0x3c020100
  .word 0x346403c6
  .word 0x34430404
  .word 0x0004203c
  .word 0x3c021000
  .word 0x00641825
  .word 0x3442000a
  .word 0x70622b89
  .word 0xafb000f8
  .word 0x8f83bd04
  .word 0x3c023e80
  .word 0x44821000
  .word 0x2604ffff
  .word 0x7c650000
  .word 0x8f82bd04
  .word 0x24430010
  .word 0xaf83bd04
  .word 0xc6e10010
  .word 0x7ba200d0
  .word 0xc6a00074
  .word 0xc6e4000c
  .word 0xc6a30070
  .word 0x46800860
  .word 0x8c420008
  .word 0x46000802
  .word 0x46802060
  .word 0x46030842
  .word 0x46011042
  .word 0x46001002
  .word 0x46000847
  .word 0x46000007
  .word 0xe7a100f0
  .word 0xe7a000f4
  .word 0x00822818
  .word 0x8f86bd04
  .word 0x3c030096
  .word 0x02252823
  .word 0x3c020096
  .word 0xafa500fc
  .word 0x24040001
  .word 0x7ba500f0
  .word 0x7cc50000
  .word 0x78635910
  .word 0x7cc30010
  .word 0x78425920
  .word 0x7cc20020
  .word 0x8f82bd04
  .word 0x24430030
  .word 0xaf83bd04
  .word 0x92820028
  .word 0x30420001
  .word 0x14440002
  .word 0x00000000
  .word 0x0080f02d
  .word 0x8f84ba80
  .word 0x24020001
  .word 0x02442021
  .word 0x8c840000
  .word 0x8c8400b4
  .word 0x14820002
  .word 0x00000000
  .word 0xffa200e8
  .word 0xdfa200e8
  .word 0x3c060004
  .word 0x34c62412
  .word 0x000221b8
  .word 0x001e1178
  .word 0x34840200
  .word 0x00822825
  .word 0x00162138
  .word 0x3c025000
  .word 0x00852025
  .word 0x34424000
  .word 0x3484000e
  .word 0x0004203c
  .word 0x0004203f
  .word 0x000423c0
  .word 0x0004203c
  .word 0x0004203e
  .word 0x00821025
  .word 0x0002103c
  .word 0x70c21389
  .word 0x0003283c
  .word 0x2404000e
  .word 0x0005283f
  .word 0x7ca20000
  .word 0x3c021000
  .word 0x0002183c
  .word 0x34028005
  .word 0x00431025
  .word 0x70821389
  .word 0x7ca20010
  .word 0x24030043
  .word 0x7ba200c0
  .word 0x70621389
  .word 0x7ca20020
  .word 0x24030009
  .word 0x7ba200a0
  .word 0x70621389
  .word 0x7ca20030
  .word 0x24030048
  .word 0x7ba200b0
  .word 0x70621389
  .word 0x7ca20040
  .word 0x24040015
  .word 0x8f82bd04
  .word 0x24430050
  .word 0xaf83bd04
  .word 0xde6200d0
  .word 0x70821389
  .word 0x8f84bd04
  .word 0x2403004f
  .word 0x7c820000
  .word 0xdf82bd40
  .word 0x70621389
  .word 0x7c820010
  .word 0x24050005
  .word 0x8f82bd04
  .word 0x0000202d
  .word 0x24430020
  .word 0x0c135674
  .word 0xaf83bd04
  .word 0x3c021000
  .word 0x0000182d
  .word 0x34420002
  .word 0x70623389
  .word 0x8f84bd04
  .word 0x3c036c01
  .word 0x3c020100
  .word 0x346303fb
  .word 0x34420404
  .word 0x0003183c
  .word 0x0000282d
  .word 0x00431025
  .word 0x7c860000
  .word 0x70451389
  .word 0x7c820010
  .word 0x8f82bd04
  .word 0x24430020
  .word 0x12c00006
  .word 0xaf83bd04
  .word 0x3c023b01
  .word 0x34421b50
  .word 0x44826000
  .word 0x10000005
  .word 0x26840044
  .word 0x3c023b80
  .word 0x34428081
  .word 0x44826000
  .word 0x26840044
  .word 0x0c1272ac
  .word 0x00000000
  .word 0x8e6200dc
  .word 0x24040001
  .word 0x10440008
  .word 0x00000000
  .word 0x8f82ba80
  .word 0x02421021
  .word 0x8c420000
  .word 0x8c430004
  .word 0x8c420000
  .word 0x1462000a
  .word 0x00000000
  .word 0x92830028
  .word 0x24020001
  .word 0x30630001
  .word 0x14620003
  .word 0x00000000
  .word 0x1000000c
  .word 0xa280002b
  .word 0x1000000a
  .word 0xa282002b
  .word 0x92820028
  .word 0x30420001
  .word 0x14440004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000003
  .word 0xa282002b
  .word 0x24020003
  .word 0xa282002b
  .word 0x8e830004
  .word 0x9284002b
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
  .word 0x8e840030
  .word 0x3c060200
  .word 0x8e830004
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
  .word 0x1062000b
  .word 0x00000000
  .word 0x1000000d
  .word 0x24020001
  .word 0xac71000c
  .word 0x0280202d
  .word 0x0c12771c
  .word 0xac70001c
  .word 0x1000feed
  .word 0x8e850040
  .word 0x10000005
  .word 0x0000102d
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000fff3
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
  .word 0x27bd0100
}

// FUN_00478A70
asm u64 FUN_00478a70(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c13cbdc
  .word 0x7fb00000
  .word 0x0040882d
  .word 0x12200082
  .word 0x00000000
  .word 0x0c13d190
  .word 0x0220202d
  .word 0x0c128fc4
  .word 0x0040802d
  .word 0x0040902d
  .word 0x1240007d
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0240302d
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x8e450000
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x3c040096
  .word 0x3c050078
  .word 0x0040882d
  .word 0x2484d3d0
  .word 0x24a5e2e0
  .word 0x0c148494
  .word 0x24060010
  .word 0x3c036c00
  .word 0x3c020096
  .word 0xac43d3a8
  .word 0x3c040096
  .word 0x3c020096
  .word 0x3c050078
  .word 0x8c43d3d8
  .word 0x2484d3c0
  .word 0x24a5e2c0
  .word 0x24060010
  .word 0x34630004
  .word 0x3c020096
  .word 0x34630001
  .word 0x34630008
  .word 0x0c148494
  .word 0xac43d3d8
  .word 0x3c020096
  .word 0x3c040096
  .word 0x8c47d3c8
  .word 0x2403dfff
  .word 0x3c050078
  .word 0x2484d3b0
  .word 0x24a5e2e0
  .word 0x24060010
  .word 0x00e31824
  .word 0x3c020096
  .word 0x34630004
  .word 0x34630001
  .word 0x34630008
  .word 0x0c148494
  .word 0xac43d3c8
  .word 0x3c036400
  .word 0x3c040096
  .word 0x34630004
  .word 0x3c050078
  .word 0x34630001
  .word 0x3c020096
  .word 0x34630008
  .word 0x2484d3a0
  .word 0x24a5e2f0
  .word 0x24060010
  .word 0x0c148494
  .word 0xac43d3b8
  .word 0x3c036c00
  .word 0x3c050096
  .word 0x34630004
  .word 0x3c020096
  .word 0x34630001
  .word 0x0220202d
  .word 0x34630008
  .word 0x24a5d3d0
  .word 0x24060008
  .word 0x0c128d70
  .word 0xac43d3a8
  .word 0x3c050096
  .word 0x0220202d
  .word 0x24a5d3c0
  .word 0x0c128d70
  .word 0x24060004
  .word 0x3c050096
  .word 0x0220202d
  .word 0x24a5d3b0
  .word 0x0c128d70
  .word 0x24060006
  .word 0x3c050096
  .word 0x0220202d
  .word 0x24a5d3a0
  .word 0x0c128d70
  .word 0x24060007
  .word 0x0220202d
  .word 0x24050004
  .word 0x0c128f04
  .word 0x24060035
  .word 0x0c13cfe0
  .word 0x0200202d
  .word 0x8e450000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0040802d
  .word 0x240500d4
  .word 0x0c128f5c
  .word 0x0200202d
  .word 0x3c050078
  .word 0x0200202d
  .word 0x24a5b1e0
  .word 0x0c128f6c
  .word 0x24060004
  .word 0x3c06004a
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c128f8c
  .word 0x24c60ce0
  .word 0x3c060048
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c128f8c
  .word 0x24c68440
  .word 0x3c060048
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c128f8c
  .word 0x24c68520
  .word 0x10000002
  .word 0x0220102d
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_00478CC0
asm void FUN_00478cc0(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020096
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8c910008
  .word 0x8c420070
  .word 0x8e250018
  .word 0x24500020
  .word 0x8ca20054
  .word 0xac82000c
  .word 0x8f82bba0
  .word 0x00a22021
  .word 0x8c820000
  .word 0x10400007
  .word 0x0000302d
  .word 0x8ca30054
  .word 0x8c420000
  .word 0x94630004
  .word 0x14620002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000006
  .word 0x8c830000
  .word 0x8ca20054
  .word 0x0c127968
  .word 0x94450004
  .word 0x0040202d
  .word 0x8c830000
  .word 0x2402fffe
  .word 0xae630010
  .word 0x24040008
  .word 0x8e630014
  .word 0x00621024
  .word 0xae620014
  .word 0x8e450000
  .word 0x8e030000
  .word 0x2484ffff
  .word 0x8e020004
  .word 0xaca30000
  .word 0x26100008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x0220202d
  .word 0x0c1244ac
  .word 0x24100002
  .word 0x3c030096
  .word 0x8f84bdb4
  .word 0x8c650070
  .word 0x24030006
  .word 0x00a42021
  .word 0x2466ffff
  .word 0x1060001c
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
  .word 0x10000005
  .word 0x24100001
  .word 0x00c0102d
  .word 0x24840014
  .word 0x1440ffec
  .word 0x24c6ffff
  .word 0x24040004
  .word 0xa2640029
  .word 0x0010183c
  .word 0x9384be04
  .word 0x0003183f
  .word 0x24020002
  .word 0x14620004
  .word 0xa2640028
  .word 0x24020001
  .word 0x10000005
  .word 0xa262002a
  .word 0x92620028
  .word 0x34420002
  .word 0x1000fffa
  .word 0xa2620028
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

// FUN_00478E80
asm u32 FUN_00478e80(u64 param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x0000302d
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c124dc4
  .word 0x7fb00000
  .word 0x0040902d
  .word 0x1240000d
  .word 0x00000000
  .word 0x8e43005c
  .word 0x3c023f80
  .word 0x0240202d
  .word 0xac600004
  .word 0xac600008
  .word 0xac60000c
  .word 0x0c124cf4
  .word 0xac620010
  .word 0x14400005
  .word 0x00000000
  .word 0x10000049
  .word 0x0000102d
  .word 0x10000047
  .word 0x0000102d
  .word 0x0c1252f8
  .word 0x00000000
  .word 0x3c033e99
  .word 0x0040882d
  .word 0x3465999a
  .word 0x2404001c
  .word 0x3c033f80
  .word 0xac45000c
  .word 0xac430010
  .word 0xafa50060
  .word 0xafa30068
  .word 0xafa30064
  .word 0x0c125670
  .word 0xac430014
  .word 0x8f87bb60
  .word 0x3c060096
  .word 0x8c450000
  .word 0x24c60070
  .word 0x2404ff00
  .word 0x24030001
  .word 0x0040802d
  .word 0x00c73021
  .word 0x00a42024
  .word 0x90c5002d
  .word 0x00852025
  .word 0xac440000
  .word 0x8c440000
  .word 0x34840100
  .word 0xac440000
  .word 0x0c125960
  .word 0xa4430004
  .word 0xa6020006
  .word 0x3c030096
  .word 0xae00000c
  .word 0x24630070
  .word 0xae000008
  .word 0xae130014
  .word 0xae000010
  .word 0xae110018
  .word 0xae500054
  .word 0x8f84ba84
  .word 0x8e020018
  .word 0x00641821
  .word 0x8c630000
  .word 0x8c630004
  .word 0xac430008
  .word 0x8e020018
  .word 0x10400015
  .word 0x00000000
  .word 0x26440020
  .word 0x0c1254d0
  .word 0x0220282d
  .word 0x0c125330
  .word 0x0220202d
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0c12466c
  .word 0x0000302d
  .word 0x8f83ba84
  .word 0x3c020096
  .word 0x24420070
  .word 0x0240202d
  .word 0x00431021
  .word 0x8c420000
  .word 0x8c420008
  .word 0x0c124ed8
  .word 0xae82006c
  .word 0x10000002
  .word 0x24020001
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
}

// FUN_00479030
asm u8 FUN_00479030(int param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x0c11e29c
  .word 0x0000882d
  .word 0xae420004
  .word 0x8e530004
  .word 0x12600030
  .word 0x00000000
  .word 0x0c13cbdc
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200002f
  .word 0x00000000
  .word 0x0c13d190
  .word 0x0200202d
  .word 0x0040a02d
  .word 0x12800028
  .word 0x00000000
  .word 0x0c127fc0
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x02a0302d
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x8ea50000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0c13cfe0
  .word 0x0280202d
  .word 0x10400016
  .word 0x00000000
  .word 0x8ea50000
  .word 0x0040202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0040a02d
  .word 0x3c060048
  .word 0x24050001
  .word 0x0280202d
  .word 0x0c127f90
  .word 0x24c68cc0
  .word 0x0280202d
  .word 0x0c127fb0
  .word 0x0260282d
  .word 0xae500008
  .word 0x8e420008
  .word 0x10400002
  .word 0x00000000
  .word 0x24110001
  .word 0x10000005
  .word 0x0220102d
  .word 0x0c13cc04
  .word 0x0200202d
  .word 0x1000fff6
  .word 0x0000802d
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
  .word 0x00000000
}

// FUN_00479170
asm void FUN_00479170(int *param_1,int param_2,u64 param_3,u64 param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x24030001
  .word 0xffbf00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x00a0b82d
  .word 0x7fb50070
  .word 0x0100b02d
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x0080a02d
  .word 0x7fb20040
  .word 0x00c0982d
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0x26910030
  .word 0xe7ba0018
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8cd2004c
  .word 0x8e4400e0
  .word 0x14830031
  .word 0x2690003c
  .word 0x8e5500e4
  .word 0x26a30001
  .word 0xae4300e4
  .word 0x8e4400e4
  .word 0x8e4300e8
  .word 0x0064082a
  .word 0x14200080
  .word 0x00000000
  .word 0x8ee40018
  .word 0x8f83bba0
  .word 0x00832021
  .word 0x8c830000
  .word 0x10600006
  .word 0x0000302d
  .word 0x8c650000
  .word 0x24030001
  .word 0x14a30002
  .word 0x00000000
  .word 0x0060302d
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8e4300e4
  .word 0x0c127968
  .word 0x24050001
  .word 0x0040202d
  .word 0x8e4300e4
  .word 0x8c860000
  .word 0x00031880
  .word 0x00721821
  .word 0x8cc50004
  .word 0x8c630138
  .word 0x10600008
  .word 0xacc30004
  .word 0x8cc30004
  .word 0x24c40004
  .word 0xac640010
  .word 0x8e4300e4
  .word 0x00031880
  .word 0x00721821
  .word 0xac600138
  .word 0x00151880
  .word 0x00721821
  .word 0xac650138
  .word 0x10a00003
  .word 0x24640138
  .word 0x8c830000
  .word 0xac640010
  .word 0x3c031000
  .word 0x02c31824
  .word 0x14600056
  .word 0x8e5500e4
  .word 0x8ee40018
  .word 0x8f83bba0
  .word 0x00832021
  .word 0x8c830000
  .word 0x10600006
  .word 0x0000302d
  .word 0x8c650000
  .word 0x24030001
  .word 0x14a30002
  .word 0x00000000
  .word 0x0060302d
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000005
  .word 0x8c830000
  .word 0x0c127968
  .word 0x24050001
  .word 0x0040202d
  .word 0x8c830000
  .word 0x8c630004
  .word 0x10600044
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c420070
  .word 0x0c132cbc
  .word 0x8c440004
  .word 0x8e650058
  .word 0x34038000
  .word 0x30a48000
  .word 0x10830048
  .word 0x00000000
  .word 0x3c040002
  .word 0x00a41824
  .word 0x10640051
  .word 0x00000000
  .word 0xc4400000
  .word 0x46000007
  .word 0xe6200000
  .word 0xc4400004
  .word 0x46000007
  .word 0xe6200004
  .word 0xc4400008
  .word 0x46000007
  .word 0xe6200008
  .word 0xc4400010
  .word 0xe6000000
  .word 0xc4400014
  .word 0xe6000004
  .word 0xc4400018
  .word 0xe6000008
  .word 0x0c1357a4
  .word 0x00000000
  .word 0x3c04fffb
  .word 0x3c03ffe7
  .word 0x3484dfbd
  .word 0x3463fe7f
  .word 0x02c42024
  .word 0x02c31824
  .word 0x0004282b
  .word 0x0003202b
  .word 0xae850008
  .word 0x24030001
  .word 0xae840004
  .word 0xae830000
  .word 0x8e830000
  .word 0x14600053
  .word 0x00000000
  .word 0x8e830008
  .word 0x14600059
  .word 0x00000000
  .word 0x8e830004
  .word 0x1060005f
  .word 0x00000000
  .word 0x001520c0
  .word 0x24030008
  .word 0x00952021
  .word 0x00042080
  .word 0x00922021
  .word 0x8c840160
  .word 0xae840018
  .word 0xae83001c
  .word 0x10000056
  .word 0xdfbf00a0
  .word 0x1000ff80
  .word 0xae4000e4
  .word 0x0c11d2a0
  .word 0x0260202d
  .word 0x1000ffa9
  .word 0x8ee40018
  .word 0xae800008
  .word 0xae800004
  .word 0xae800000
  .word 0xae80000c
  .word 0xae800010
  .word 0xae800014
  .word 0xae800020
  .word 0xae800024
  .word 0xae800018
  .word 0xae80001c
  .word 0xae800028
  .word 0x1000ffec
  .word 0xae80002c
  .word 0xc66200b0
  .word 0xc66100b4
  .word 0xc66000b8
  .word 0xe6220000
  .word 0xe6210004
  .word 0xe6200008
  .word 0xc66200c0
  .word 0xc66100c4
  .word 0xc66000c8
  .word 0xe6020000
  .word 0xe6010004
  .word 0x1000ffc0
  .word 0xe6000008
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xc45a0010
  .word 0xc4590014
  .word 0xc4580018
  .word 0xc66c0078
  .word 0x46001507
  .word 0x46000d47
  .word 0x0c14ba1e
  .word 0x46000587
  .word 0xc66c0078
  .word 0x0c14b9b6
  .word 0x460005c6
  .word 0x4600b887
  .word 0x461a101a
  .word 0x4614005c
  .word 0xe6210000
  .word 0x4619101a
  .word 0x4615005c
  .word 0xe6210004
  .word 0x4618101a
  .word 0x4616005c
  .word 0xe6210008
  .word 0x461a001a
  .word 0x4614b85c
  .word 0xe6010000
  .word 0x4619001a
  .word 0x4615b85c
  .word 0x4618001a
  .word 0x4616b81c
  .word 0xe6010004
  .word 0x1000ff9e
  .word 0xe6000008
  .word 0x001520c0
  .word 0x24030010
  .word 0x00952021
  .word 0x00042080
  .word 0x00922021
  .word 0x8c840140
  .word 0xae840010
  .word 0x1000ffa6
  .word 0xae830014
  .word 0x001520c0
  .word 0x24030004
  .word 0x00952021
  .word 0x00042080
  .word 0x00922021
  .word 0x8c840154
  .word 0xae840020
  .word 0x1000ffa0
  .word 0xae830024
  .word 0xdfbf00a0
  .word 0xc7ba0018
  .word 0x7bb70090
  .word 0xc7b90014
  .word 0x7bb60080
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
  .word 0x27bd00b0
}

// FUN_00479590
asm void FUN_00479590(int *param_1,u64 param_2,u64 param_3,u64 param_4,
                 u32 param_5)
{
  .set noreorder
  .word 0x27bdff70
  .word 0x3c020096
  .word 0xffbf0080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x0080982d
  .word 0x7fb10030
  .word 0x00c0902d
  .word 0x7fb00020
  .word 0x0100882d
  .word 0xe7ba0018
  .word 0x26750030
  .word 0xe7b90014
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8c420070
  .word 0x8cd0004c
  .word 0x8c440004
  .word 0x0c132cbc
  .word 0x2674003c
  .word 0x8e450058
  .word 0x34038000
  .word 0x30a48000
  .word 0x10830033
  .word 0x00000000
  .word 0x3c040002
  .word 0x00a41824
  .word 0x1064003c
  .word 0x00000000
  .word 0xc4400000
  .word 0x46000007
  .word 0xe6a00000
  .word 0xc4400004
  .word 0x46000007
  .word 0xe6a00004
  .word 0xc4400008
  .word 0x46000007
  .word 0xe6a00008
  .word 0xc4400010
  .word 0xe6800000
  .word 0xc4400014
  .word 0xe6800004
  .word 0xc4400018
  .word 0xe6800008
  .word 0x3c021000
  .word 0x02221024
  .word 0x10400003
  .word 0x8e1400e4
  .word 0x0c11d2a0
  .word 0x0240202d
  .word 0x0c1357a4
  .word 0x00000000
  .word 0x3c04fffb
  .word 0x3c03ffe7
  .word 0x3484dfbd
  .word 0x3463fe7f
  .word 0x02242024
  .word 0x02231824
  .word 0x0004282b
  .word 0x0003202b
  .word 0xae650008
  .word 0x24030001
  .word 0xae640004
  .word 0xae630000
  .word 0x8e630000
  .word 0x14600038
  .word 0x00000000
  .word 0x8e630008
  .word 0x1460003e
  .word 0x00000000
  .word 0x8e630004
  .word 0x14600044
  .word 0x00000000
  .word 0x1000004b
  .word 0xdfbf0080
  .word 0xc64200b0
  .word 0xc64100b4
  .word 0xc64000b8
  .word 0xe6a20000
  .word 0xe6a10004
  .word 0xe6a00008
  .word 0xc64200c0
  .word 0xc64100c4
  .word 0xc64000c8
  .word 0xe6820000
  .word 0xe6810004
  .word 0x1000ffd5
  .word 0xe6800008
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xc45a0010
  .word 0xc4590014
  .word 0xc4580018
  .word 0xc64c0078
  .word 0x46001507
  .word 0x46000d47
  .word 0x0c14ba1e
  .word 0x46000587
  .word 0xc64c0078
  .word 0x0c14b9b6
  .word 0x460005c6
  .word 0x4600b887
  .word 0x461a101a
  .word 0x4614005c
  .word 0xe6a10000
  .word 0x4619101a
  .word 0x4615005c
  .word 0xe6a10004
  .word 0x4618101a
  .word 0x4616005c
  .word 0xe6a10008
  .word 0x461a001a
  .word 0x4614b85c
  .word 0xe6810000
  .word 0x4619001a
  .word 0x4615b85c
  .word 0x4618001a
  .word 0x4616b81c
  .word 0xe6810004
  .word 0x1000ffb3
  .word 0xe6800008
  .word 0x001420c0
  .word 0x24030010
  .word 0x00942021
  .word 0x00042080
  .word 0x00902021
  .word 0x8c840140
  .word 0xae640010
  .word 0x1000ffc1
  .word 0xae630014
  .word 0x001420c0
  .word 0x24030004
  .word 0x00942021
  .word 0x00042080
  .word 0x00902021
  .word 0x8c840154
  .word 0xae640020
  .word 0x1000ffbb
  .word 0xae630024
  .word 0x001420c0
  .word 0x24030008
  .word 0x00942021
  .word 0x00042080
  .word 0x00902021
  .word 0x8c840160
  .word 0xae640018
  .word 0x1000ffb5
  .word 0xae63001c
  .word 0xc7ba0018
  .word 0x7bb50070
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
  .word 0x27bd0090
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00479840
asm u32 FUN_00479840(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0x3c02efff
  .word 0xffbf0010
  .word 0x3c060048
  .word 0x7fb00000
  .word 0x3447ffff
  .word 0x8c83002c
  .word 0x24c69590
  .word 0x8f88ba80
  .word 0x8caa0004
  .word 0x8c840008
  .word 0x00881021
  .word 0x8c500000
  .word 0x8e02009c
  .word 0x8c4900e4
  .word 0x000940c0
  .word 0x01094021
  .word 0x00084080
  .word 0x01024021
  .word 0xad0a0140
  .word 0x8c4900e4
  .word 0x8caa0000
  .word 0x000940c0
  .word 0x01094021
  .word 0x00084080
  .word 0x01024021
  .word 0xad0a0154
  .word 0x8c4900e4
  .word 0x8caa0008
  .word 0x000940c0
  .word 0x01094021
  .word 0x26050050
  .word 0x00084080
  .word 0x01021021
  .word 0xac4a0160
  .word 0xae060024
  .word 0x8c620004
  .word 0x0c12186c
  .word 0x00023082
  .word 0x3c030048
  .word 0x24020001
  .word 0x24639170
  .word 0xae030024
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
}

// FUN_00479900
asm u64 FUN_00479900(int param_1)
{
  .set noreorder
  .word 0x27bdff00
  .word 0x3c020096
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x0000f02d
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x0000b02d
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c920008
  .word 0x8c830004
  .word 0x8c550070
  .word 0x8f84ba80
  .word 0x246201f0
  .word 0x8eb70060
  .word 0x7fa200d0
  .word 0x8c6301f8
  .word 0x02441021
  .word 0x8c440000
  .word 0x8c93009c
  .word 0x2462ffff
  .word 0x8c840004
  .word 0x00048880
  .word 0x02221021
  .word 0x0043001b
  .word 0x8e6300dc
  .word 0x00000000
  .word 0x00008012
  .word 0x24020001
  .word 0x1462000a
  .word 0xffa000e8
  .word 0x8e820030
  .word 0x8c420000
  .word 0x24430018
  .word 0x8c420024
  .word 0x16220112
  .word 0x00000000
  .word 0x8c62001c
  .word 0x1450010f
  .word 0x00000000
  .word 0x8e850040
  .word 0x10a00002
  .word 0x00000000
  .word 0x24160001
  .word 0x8f82ba80
  .word 0x02421021
  .word 0x8c420000
  .word 0x0c11d268
  .word 0x24440050
  .word 0x8f82ba80
  .word 0x8e850040
  .word 0x02421021
  .word 0x8c420000
  .word 0x0c11d230
  .word 0x24440050
  .word 0xde6200b8
  .word 0x0000202d
  .word 0x2405000c
  .word 0x7fa200c0
  .word 0xde6200c8
  .word 0x7fa200b0
  .word 0xde6200c0
  .word 0x0c135674
  .word 0x7fa200a0
  .word 0x104000fb
  .word 0x00000000
  .word 0x3c036c0a
  .word 0x3c020100
  .word 0x346403c6
  .word 0x34430404
  .word 0x0004203c
  .word 0x3c021000
  .word 0x00641825
  .word 0x3442000a
  .word 0x70622b89
  .word 0xafb000f8
  .word 0x8f83bd04
  .word 0x3c023f00
  .word 0x44821000
  .word 0x2604ffff
  .word 0x7c650000
  .word 0x8f82bd04
  .word 0x24430010
  .word 0xaf83bd04
  .word 0xc6e10010
  .word 0x7ba200d0
  .word 0xc6a00074
  .word 0xc6e4000c
  .word 0xc6a30070
  .word 0x46800860
  .word 0x8c420008
  .word 0x46000802
  .word 0x46802060
  .word 0x46030842
  .word 0x46011042
  .word 0x46001002
  .word 0x46000847
  .word 0x46000007
  .word 0xe7a100f0
  .word 0xe7a000f4
  .word 0x00822818
  .word 0x8f86bd04
  .word 0x3c030096
  .word 0x02252823
  .word 0x3c020096
  .word 0xafa500fc
  .word 0x24040001
  .word 0x7ba500f0
  .word 0x7cc50000
  .word 0x78635910
  .word 0x7cc30010
  .word 0x78425920
  .word 0x7cc20020
  .word 0x8f82bd04
  .word 0x24430030
  .word 0xaf83bd04
  .word 0x92820028
  .word 0x30420001
  .word 0x14440002
  .word 0x00000000
  .word 0x0080f02d
  .word 0x8f84ba80
  .word 0x24020001
  .word 0x02442021
  .word 0x8c840000
  .word 0x8c8400b4
  .word 0x14820002
  .word 0x00000000
  .word 0xffa200e8
  .word 0xdfa200e8
  .word 0x24050412
  .word 0x000221b8
  .word 0x001e1178
  .word 0x34840200
  .word 0x00822025
  .word 0x00161138
  .word 0x00442025
  .word 0x3484000c
  .word 0x3c023000
  .word 0x0004203c
  .word 0x34424000
  .word 0x0004203f
  .word 0x000423c0
  .word 0x0004203c
  .word 0x0004203e
  .word 0x00821025
  .word 0x0002103c
  .word 0x70a21389
  .word 0x0003283c
  .word 0x2404000e
  .word 0x0005283f
  .word 0x7ca20000
  .word 0x3c021000
  .word 0x0002183c
  .word 0x34028005
  .word 0x00431025
  .word 0x70821389
  .word 0x7ca20010
  .word 0x24030043
  .word 0x7ba200c0
  .word 0x70621389
  .word 0x7ca20020
  .word 0x24030009
  .word 0x7ba200a0
  .word 0x70621389
  .word 0x7ca20030
  .word 0x24030048
  .word 0x7ba200b0
  .word 0x70621389
  .word 0x7ca20040
  .word 0x24040015
  .word 0x8f82bd04
  .word 0x24430050
  .word 0xaf83bd04
  .word 0xde6200d0
  .word 0x70821389
  .word 0x8f84bd04
  .word 0x2403004f
  .word 0x7c820000
  .word 0xdf82bd40
  .word 0x70621389
  .word 0x7c820010
  .word 0x24050005
  .word 0x8f82bd04
  .word 0x0000202d
  .word 0x24430020
  .word 0x0c135674
  .word 0xaf83bd04
  .word 0x3c021000
  .word 0x0000182d
  .word 0x34420002
  .word 0x70623389
  .word 0x8f84bd04
  .word 0x3c036c01
  .word 0x3c020100
  .word 0x346303fb
  .word 0x34420404
  .word 0x0003183c
  .word 0x0000282d
  .word 0x00431025
  .word 0x7c860000
  .word 0x70451389
  .word 0x7c820010
  .word 0x8f82bd04
  .word 0x24430020
  .word 0x12c00006
  .word 0xaf83bd04
  .word 0x3c023b01
  .word 0x34421b50
  .word 0x44826000
  .word 0x10000005
  .word 0x26840044
  .word 0x3c023b80
  .word 0x34428081
  .word 0x44826000
  .word 0x26840044
  .word 0x0c1272ac
  .word 0x00000000
  .word 0x8e6200dc
  .word 0x24040001
  .word 0x10440008
  .word 0x00000000
  .word 0x8f82ba80
  .word 0x02421021
  .word 0x8c420000
  .word 0x8c430004
  .word 0x8c420000
  .word 0x1462000a
  .word 0x00000000
  .word 0x92830028
  .word 0x24020001
  .word 0x30630001
  .word 0x14620003
  .word 0x00000000
  .word 0x1000000c
  .word 0xa280002b
  .word 0x1000000a
  .word 0xa282002b
  .word 0x92820028
  .word 0x30420001
  .word 0x14440004
  .word 0x00000000
  .word 0x24020002
  .word 0x10000003
  .word 0xa282002b
  .word 0x24020003
  .word 0xa282002b
  .word 0x8e830004
  .word 0x9284002b
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
  .word 0x8e840030
  .word 0x3c060200
  .word 0x8e830004
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
  .word 0x1062000b
  .word 0x00000000
  .word 0x1000000d
  .word 0x24020001
  .word 0xac71000c
  .word 0x0280202d
  .word 0x0c12771c
  .word 0xac70001c
  .word 0x1000feee
  .word 0x8e850040
  .word 0x10000005
  .word 0x0000102d
  .word 0x0c135470
  .word 0x00000000
  .word 0x1000fff3
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
  .word 0x27bd0100
}

// FUN_00479E50
asm u64 FUN_00479e50(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c13cbdc
  .word 0x7fb00000
  .word 0x0040882d
  .word 0x1220006d
  .word 0x00000000
  .word 0x0c13d190
  .word 0x0220202d
  .word 0x0c128fc4
  .word 0x0040802d
  .word 0x0040902d
  .word 0x12400068
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0240302d
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x8e450000
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x3c040096
  .word 0x3c050078
  .word 0x0040882d
  .word 0x2484d400
  .word 0x24a5e290
  .word 0x0c148494
  .word 0x24060010
  .word 0x3c036c00
  .word 0x3c040096
  .word 0x34630004
  .word 0x3c050078
  .word 0x34630001
  .word 0x3c020096
  .word 0x34630008
  .word 0x2484d3f0
  .word 0x24a5e2c0
  .word 0x24060010
  .word 0x0c148494
  .word 0xac43d408
  .word 0x3c020096
  .word 0x3c040096
  .word 0x8c47d3f8
  .word 0x2403dfff
  .word 0x3c050078
  .word 0x2484d3e0
  .word 0x24a5e2f0
  .word 0x24060010
  .word 0x00e31824
  .word 0x3c020096
  .word 0x34630004
  .word 0x34630001
  .word 0x34630008
  .word 0x0c148494
  .word 0xac43d3f8
  .word 0x3c036400
  .word 0x3c050096
  .word 0x34630004
  .word 0x3c020096
  .word 0x34630001
  .word 0x0220202d
  .word 0x34630008
  .word 0x24a5d3f0
  .word 0x24060004
  .word 0x0c128d70
  .word 0xac43d3e8
  .word 0x3c050096
  .word 0x0220202d
  .word 0x24a5d400
  .word 0x0c128d70
  .word 0x24060006
  .word 0x3c050096
  .word 0x0220202d
  .word 0x24a5d3e0
  .word 0x0c128d70
  .word 0x24060007
  .word 0x0220202d
  .word 0x24050003
  .word 0x0c128f04
  .word 0x24060050
  .word 0x0c13cfe0
  .word 0x0200202d
  .word 0x8e450000
  .word 0x0040882d
  .word 0x0220202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0040802d
  .word 0x240500f0
  .word 0x0c128f5c
  .word 0x0200202d
  .word 0x3c050078
  .word 0x0200202d
  .word 0x24a5b1f0
  .word 0x0c128f6c
  .word 0x24060004
  .word 0x3c06004a
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c128f8c
  .word 0x24c60ce0
  .word 0x3c060048
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c128f8c
  .word 0x24c69840
  .word 0x3c060048
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c128f8c
  .word 0x24c69900
  .word 0x10000002
  .word 0x0220102d
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
}

// FUN_0047A050
asm void FUN_0047a050(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c020096
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8c910008
  .word 0x8c420070
  .word 0x8e250018
  .word 0x24500020
  .word 0x8ca20054
  .word 0xac82000c
  .word 0x8f82bba0
  .word 0x00a22021
  .word 0x8c820000
  .word 0x10400007
  .word 0x0000302d
  .word 0x8ca30054
  .word 0x8c420000
  .word 0x94630004
  .word 0x14620002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000006
  .word 0x8c830000
  .word 0x8ca20054
  .word 0x0c127968
  .word 0x94450004
  .word 0x0040202d
  .word 0x8c830000
  .word 0x2402fffe
  .word 0xae630010
  .word 0x24040008
  .word 0x8e630014
  .word 0x00621024
  .word 0xae620014
  .word 0x8e450000
  .word 0x8e030000
  .word 0x2484ffff
  .word 0x8e020004
  .word 0xaca30000
  .word 0x26100008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x0220202d
  .word 0x0c1244ac
  .word 0x24100002
  .word 0x3c030096
  .word 0x8f84bdb4
  .word 0x8c650070
  .word 0x24030006
  .word 0x00a42021
  .word 0x2466ffff
  .word 0x1060001c
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
  .word 0x10000005
  .word 0x24100001
  .word 0x00c0102d
  .word 0x24840014
  .word 0x1440ffec
  .word 0x24c6ffff
  .word 0x24040004
  .word 0xa2640029
  .word 0x0010183c
  .word 0x9384be04
  .word 0x0003183f
  .word 0x24020002
  .word 0x14620004
  .word 0xa2640028
  .word 0x24020001
  .word 0x10000005
  .word 0xa262002a
  .word 0x92620028
  .word 0x34420002
  .word 0x1000fffa
  .word 0xa2620028
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

// FUN_0047A210
asm u32 FUN_0047a210(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x0000302d
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0c124dc4
  .word 0x7fb00000
  .word 0x0040902d
  .word 0x1240000d
  .word 0x00000000
  .word 0x8e43005c
  .word 0x3c023f80
  .word 0x0240202d
  .word 0xac600004
  .word 0xac600008
  .word 0xac60000c
  .word 0x0c124cf4
  .word 0xac620010
  .word 0x14400005
  .word 0x00000000
  .word 0x1000004a
  .word 0x0000102d
  .word 0x10000048
  .word 0x0000102d
  .word 0x0c1252f8
  .word 0x00000000
  .word 0x3c033e99
  .word 0x0040882d
  .word 0x3465999a
  .word 0x2404001c
  .word 0x3c033f80
  .word 0xac45000c
  .word 0xac430010
  .word 0xafa50060
  .word 0xafa30068
  .word 0xafa30064
  .word 0x0c125670
  .word 0xac430014
  .word 0x8f87bb60
  .word 0x3c060096
  .word 0x8c450000
  .word 0x24c60070
  .word 0x2404ff00
  .word 0x24030001
  .word 0x0040802d
  .word 0x00c73021
  .word 0x00a42024
  .word 0x90c5002d
  .word 0x00852025
  .word 0xac440000
  .word 0x8c440000
  .word 0x34840100
  .word 0xac440000
  .word 0x0c125960
  .word 0xa4430004
  .word 0xa6020006
  .word 0x3c030096
  .word 0xae00000c
  .word 0x00131080
  .word 0xae000008
  .word 0x24630070
  .word 0xae020014
  .word 0xae000010
  .word 0xae110018
  .word 0xae500054
  .word 0x8f84ba84
  .word 0x8e020018
  .word 0x00641821
  .word 0x8c630000
  .word 0x8c63000c
  .word 0xac430008
  .word 0x8e020018
  .word 0x10400015
  .word 0x00000000
  .word 0x26440020
  .word 0x0c1254d0
  .word 0x0220282d
  .word 0x0c125330
  .word 0x0220202d
  .word 0x0280202d
  .word 0x0240282d
  .word 0x0c12466c
  .word 0x0000302d
  .word 0x8f83ba84
  .word 0x3c020096
  .word 0x24420070
  .word 0x0240202d
  .word 0x00431021
  .word 0x8c420000
  .word 0x8c420010
  .word 0x0c124ed8
  .word 0xae82006c
  .word 0x10000002
  .word 0x24020001
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
  .word 0x00000000
  .word 0x00000000
}

// FUN_0047A3D0
asm u8 FUN_0047a3d0(int param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x0c11e794
  .word 0x0000882d
  .word 0xae42000c
  .word 0x8e53000c
  .word 0x12600030
  .word 0x00000000
  .word 0x0c13cbdc
  .word 0x00000000
  .word 0x0040802d
  .word 0x1200002f
  .word 0x00000000
  .word 0x0c13d190
  .word 0x0200202d
  .word 0x0040a02d
  .word 0x12800028
  .word 0x00000000
  .word 0x0c127fc0
  .word 0x00000000
  .word 0x0040a82d
  .word 0x0280202d
  .word 0x0000282d
  .word 0x02a0302d
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x8ea50000
  .word 0x0040a02d
  .word 0x0280202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0c13cfe0
  .word 0x0280202d
  .word 0x10400016
  .word 0x00000000
  .word 0x8ea50000
  .word 0x0040202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0040a02d
  .word 0x3c060048
  .word 0x24050001
  .word 0x0280202d
  .word 0x0c127f90
  .word 0x24c6a050
  .word 0x0280202d
  .word 0x0c127fb0
  .word 0x0260282d
  .word 0xae500010
  .word 0x8e420010
  .word 0x10400002
  .word 0x00000000
  .word 0x24110001
  .word 0x10000005
  .word 0x0220102d
  .word 0x0c13cc04
  .word 0x0200202d
  .word 0x1000fff6
  .word 0x0000802d
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
  .word 0x00000000
}

// FUN_0047A510
asm u32 FUN_0047a510(u64 param_1,u64 param_2,u64 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24020001
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x8ca4004c
  .word 0x8c8300e0
  .word 0x14620015
  .word 0x00e0802d
  .word 0x8c8300e4
  .word 0x8c8200e8
  .word 0x0062082a
  .word 0x10200067
  .word 0x00000000
  .word 0x24620001
  .word 0x00021080
  .word 0x00441821
  .word 0x8c6200ec
  .word 0x00501025
  .word 0xac6200ec
  .word 0x8c8200e4
  .word 0x00021080
  .word 0x00441021
  .word 0x244300ec
  .word 0x8c4200ec
  .word 0x10400003
  .word 0x00000000
  .word 0xac600000
  .word 0x02028025
  .word 0x12000054
  .word 0x00000000
  .word 0x3c021000
  .word 0x02021024
  .word 0x14400054
  .word 0x00000000
  .word 0x3c030008
  .word 0x02031024
  .word 0x10400009
  .word 0x00000000
  .word 0x8e220058
  .word 0x00431024
  .word 0x10400005
  .word 0x00000000
  .word 0x8e24003c
  .word 0x26250090
  .word 0x0c148494
  .word 0x24060010
  .word 0x3c030010
  .word 0x02031024
  .word 0x10400009
  .word 0x00000000
  .word 0x8e220058
  .word 0x00431024
  .word 0x10400005
  .word 0x00000000
  .word 0x8e240044
  .word 0x26250090
  .word 0x0c148494
  .word 0x24060020
  .word 0x32022000
  .word 0x10400010
  .word 0x00000000
  .word 0x8e230058
  .word 0x3c020004
  .word 0x34420042
  .word 0x00621024
  .word 0x1440000a
  .word 0x00000000
  .word 0x8e260024
  .word 0x9225007c
  .word 0x9224007d
  .word 0x9223007e
  .word 0x9222007f
  .word 0xa0c50000
  .word 0xa0c40001
  .word 0xa0c30002
  .word 0xa0c20003
  .word 0x3c030004
  .word 0x02031024
  .word 0x10400009
  .word 0x00000000
  .word 0x8e220058
  .word 0x00431024
  .word 0x10400005
  .word 0x00000000
  .word 0x8e24002c
  .word 0x26250080
  .word 0x0c148494
  .word 0x24060010
  .word 0x3c030002
  .word 0x02031024
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e220058
  .word 0x00431024
  .word 0x10400006
  .word 0x00000000
  .word 0x8e220034
  .word 0xc6200078
  .word 0xe4400000
  .word 0xc6200078
  .word 0xe4400004
  .word 0x32024000
  .word 0x1040000a
  .word 0x00000000
  .word 0x8e220058
  .word 0x30420004
  .word 0x14400006
  .word 0x00000000
  .word 0x8e22001c
  .word 0xc6210070
  .word 0xc6200074
  .word 0xe4410000
  .word 0xe4400004
  .word 0x10000007
  .word 0x24020001
  .word 0x1000ff9a
  .word 0x0000102d
  .word 0x0c11d2a0
  .word 0x0220202d
  .word 0x1000ffab
  .word 0x3c030008
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_0047A710
asm u64 FUN_0047a710(u64 param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff20
  .word 0x3c020096
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c520070
  .word 0x8cb00000
  .word 0x8f83ba80
  .word 0x8e560060
  .word 0x02031021
  .word 0x8c420000
  .word 0x8c53009c
  .word 0x24540050
  .word 0x8c440004
  .word 0x8e6300fc
  .word 0x2482ffff
  .word 0x8c630010
  .word 0x0043001b
  .word 0x00008812
  .word 0x02231818
  .word 0x8e6200dc
  .word 0x144000c5
  .word 0x0083b823
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x26460020
  .word 0x27a500a0
  .word 0x24040008
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x27a400a0
  .word 0x0000282d
  .word 0x0c13b0ac
  .word 0x0000302d
  .word 0x8e020018
  .word 0x0280202d
  .word 0x8c420020
  .word 0x8c550000
  .word 0x8eb00000
  .word 0x0c11d268
  .word 0x0200282d
  .word 0x0280202d
  .word 0x0c11d230
  .word 0x0200282d
  .word 0x0000202d
  .word 0x0c135674
  .word 0x24050012
  .word 0x104000c4
  .word 0x00000000
  .word 0x8f86bd04
  .word 0x3c036c05
  .word 0x3c020100
  .word 0x346303eb
  .word 0x34450101
  .word 0x0003183c
  .word 0x3c021000
  .word 0x3c074000
  .word 0x00a31825
  .word 0x3442000f
  .word 0x70621389
  .word 0x7cc20000
  .word 0x44870800
  .word 0x926900f4
  .word 0x27a40094
  .word 0x926d00f5
  .word 0x3c07be80
  .word 0x44872000
  .word 0x926c00f6
  .word 0x27a30098
  .word 0x926b00f7
  .word 0x27a2009c
  .word 0x262a0001
  .word 0x3c080096
  .word 0x3c070096
  .word 0xafa90090
  .word 0x3c096c02
  .word 0xac8d0000
  .word 0x352903fa
  .word 0xac6c0000
  .word 0x0009483c
  .word 0xac4b0000
  .word 0x00a92825
  .word 0x0000582d
  .word 0x7ba90090
  .word 0x70ab5b89
  .word 0x7cc90010
  .word 0xc6800068
  .word 0xc682006c
  .word 0xe7a00090
  .word 0x46000802
  .word 0xe4600000
  .word 0x46020802
  .word 0xe4820000
  .word 0xe4400000
  .word 0x7ba50090
  .word 0x7cc50020
  .word 0xc6c3000c
  .word 0xac6a0000
  .word 0xc6c10010
  .word 0xac570000
  .word 0xc6420070
  .word 0xc6400074
  .word 0x468018e0
  .word 0x46800860
  .word 0x460320c2
  .word 0x46012042
  .word 0x46021882
  .word 0x46000802
  .word 0xe7a20090
  .word 0xe4800000
  .word 0x7ba20090
  .word 0x7cc20030
  .word 0x79025910
  .word 0x7cc20040
  .word 0x78e25920
  .word 0x7cc20050
  .word 0x7ccb0060
  .word 0x8e6300fc
  .word 0x1200007f
  .word 0xdc640000
  .word 0x3c020008
  .word 0x0002103c
  .word 0x1000007b
  .word 0x00822025
  .word 0x0002103c
  .word 0x00822025
  .word 0x8e820064
  .word 0x10400004
  .word 0x00000000
  .word 0x3c020020
  .word 0x0002103c
  .word 0x00822025
  .word 0xdc620008
  .word 0x70441389
  .word 0x12000006
  .word 0x7cc20070
  .word 0x3c023b01
  .word 0x34421b50
  .word 0x44826000
  .word 0x10000005
  .word 0x24c20080
  .word 0x3c023b80
  .word 0x34428081
  .word 0x44826000
  .word 0x24c20080
  .word 0x26a40004
  .word 0x0c1272ac
  .word 0xaf82bd04
  .word 0x3c025000
  .word 0x8f8abd04
  .word 0x34430006
  .word 0x0000202d
  .word 0x0003183c
  .word 0x2405000e
  .word 0x70643389
  .word 0x3c041000
  .word 0x34038005
  .word 0x0004203c
  .word 0x24090043
  .word 0x00641825
  .word 0x7d460000
  .word 0x70a31b89
  .word 0x7d430010
  .word 0x24080009
  .word 0xde6400b8
  .word 0x24070048
  .word 0x24060015
  .word 0x2405004f
  .word 0x71242389
  .word 0x7d440020
  .word 0xde6400c0
  .word 0x71042389
  .word 0x7d440030
  .word 0xde6400c8
  .word 0x70e42389
  .word 0x7d440040
  .word 0xde6400d0
  .word 0x70c42389
  .word 0x7d440050
  .word 0xdf84bd40
  .word 0x70a42389
  .word 0x7d440060
  .word 0x8e6500f8
  .word 0x8f84be08
  .word 0x1085000a
  .word 0x25430070
  .word 0x0005203c
  .word 0xaf85be08
  .word 0x0004203e
  .word 0x0000282d
  .word 0x0004203c
  .word 0x00821025
  .word 0x70a21389
  .word 0x7c620000
  .word 0x24630010
  .word 0x8e6400e4
  .word 0x24620010
  .word 0x00042140
  .word 0x02648021
  .word 0x7a040000
  .word 0x7c640000
  .word 0x0c1434e8
  .word 0xaf82bd04
  .word 0x8e020010
  .word 0x24420001
  .word 0x0c1434fc
  .word 0xae020010
  .word 0x8e030014
  .word 0x24620001
  .word 0x1060002a
  .word 0xae020014
  .word 0x1000002c
  .word 0x24020001
  .word 0x8e6400e4
  .word 0x3c031000
  .word 0x00111100
  .word 0x00042140
  .word 0x00932021
  .word 0x8c840018
  .word 0xac830000
  .word 0xac800008
  .word 0x8e6300fc
  .word 0x8e6400e4
  .word 0x8c630018
  .word 0x00042140
  .word 0x00932021
  .word 0x24630001
  .word 0x00623018
  .word 0x8c85001c
  .word 0x0017183c
  .word 0x3c020400
  .word 0x0003183e
  .word 0x00621025
  .word 0x3c042000
  .word 0x0002103c
  .word 0x00a61821
  .word 0x0002103f
  .word 0xac640000
  .word 0xac620008
  .word 0x8e6200e4
  .word 0x00021140
  .word 0x00531021
  .word 0x1000ff1e
  .word 0xac430018
  .word 0x1000000b
  .word 0x0000102d
  .word 0xdf82b0d0
  .word 0x30420020
  .word 0x1040ff85
  .word 0x00000000
  .word 0x1000ff81
  .word 0x3c020010
  .word 0x0c135470
  .word 0x26040010
  .word 0x1000ffd4
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
  .word 0x27bd00e0
  .word 0x00000000
}

// FUN_0047AB70
asm long FUN_0047ab70(void)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x0c13cbdc
  .word 0x7fb00000
  .word 0x0040802d
  .word 0x12000013
  .word 0x00000000
  .word 0x0c13d190
  .word 0x0200202d
  .word 0x1040000d
  .word 0x00000000
  .word 0x3c060078
  .word 0x0040202d
  .word 0x0000282d
  .word 0x24c6b210
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x0c13cfe0
  .word 0x0040202d
  .word 0x10400003
  .word 0x00000000
  .word 0x10000004
  .word 0x0200102d
  .word 0x0c13cc04
  .word 0x0200202d
  .word 0x0000102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
}

// FUN_0047ABF0
asm u32 FUN_0047abf0(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdff10
  .word 0x3c020096
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x00a0902d
  .word 0x7fb00000
  .word 0x8c910008
  .word 0x8c420070
  .word 0x8e250018
  .word 0x24500020
  .word 0x8ca20054
  .word 0xac82000c
  .word 0x8f82bba0
  .word 0x00a22021
  .word 0x8c820000
  .word 0x10400007
  .word 0x0000302d
  .word 0x8ca30054
  .word 0x8c420000
  .word 0x94630004
  .word 0x14620002
  .word 0x00000000
  .word 0x24060001
  .word 0x10c00003
  .word 0x00000000
  .word 0x10000006
  .word 0x8c830000
  .word 0x8ca20054
  .word 0x0c127968
  .word 0x94450004
  .word 0x0040202d
  .word 0x8c830000
  .word 0x3c020100
  .word 0xae630010
  .word 0x8e240018
  .word 0x8c830008
  .word 0x00621024
  .word 0x104000d6
  .word 0x00000000
  .word 0x8e230018
  .word 0x2402fffe
  .word 0x24040008
  .word 0xa460000c
  .word 0x8e23004c
  .word 0x00621024
  .word 0xae22004c
  .word 0x8e450000
  .word 0x8e030000
  .word 0x2484ffff
  .word 0x8e020004
  .word 0xaca30000
  .word 0x26100008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x0220202d
  .word 0x0c1244ac
  .word 0x24100002
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
  .word 0x24100001
  .word 0x00c0102d
  .word 0x24840014
  .word 0x1440ffec
  .word 0x24c6ffff
  .word 0x00000000
  .word 0x8e63000c
  .word 0x0010103c
  .word 0x24060001
  .word 0x8c670000
  .word 0x30e30001
  .word 0x106600e4
  .word 0x0002103f
  .word 0x30e300ff
  .word 0x106000e6
  .word 0x00000000
  .word 0x30e30002
  .word 0x24050002
  .word 0x106500e2
  .word 0x00000000
  .word 0x30e40010
  .word 0x24030010
  .word 0x108300e4
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
  .word 0x144300d9
  .word 0x00000000
  .word 0x92620028
  .word 0x34420002
  .word 0xa2620028
  .word 0x8e220018
  .word 0x8c420008
  .word 0x30420040
  .word 0x0002102b
  .word 0xa262002a
  .word 0x8e750008
  .word 0x8eb00018
  .word 0x8e020008
  .word 0x30420020
  .word 0x1040006d
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
  .word 0x12960037
  .word 0x00000000
  .word 0x8e820008
  .word 0x8c530040
  .word 0x24510040
  .word 0x1271002e
  .word 0x00000000
  .word 0x00000000
  .word 0x8e650008
  .word 0x10a00026
  .word 0x00000000
  .word 0x96440000
  .word 0x94a2003c
  .word 0x10440022
  .word 0x24a3003c
  .word 0x90a20002
  .word 0x30420001
  .word 0x1040001e
  .word 0x00000000
  .word 0xa4640000
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
  .word 0x45000003
  .word 0x00000000
  .word 0x0c12810c
  .word 0x27a50080
  .word 0x8e730000
  .word 0x1671ffd6
  .word 0x00000000
  .word 0x00000000
  .word 0x8e940000
  .word 0x1696ffcc
  .word 0x00000000
  .word 0x00000000
  .word 0x10000061
  .word 0x24020001
  .word 0x8e66000c
  .word 0x3062009f
  .word 0x90830018
  .word 0x304200ff
  .word 0x00022c00
  .word 0x2402fffe
  .word 0x94c60006
  .word 0x00031e00
  .word 0x00c52825
  .word 0x00651825
  .word 0xae630018
  .word 0x8e630014
  .word 0x00621024
  .word 0xae620014
  .word 0x8e620010
  .word 0x8c420004
  .word 0x1040ff1a
  .word 0x00000000
  .word 0x8c480028
  .word 0x24430018
  .word 0x8e670018
  .word 0x10e80014
  .word 0x2622004c
  .word 0x00073402
  .word 0x00082c02
  .word 0x30c600ff
  .word 0x30a500ff
  .word 0x14c5000b
  .word 0x00000000
  .word 0x00073602
  .word 0x00082e02
  .word 0x30c600ff
  .word 0x30a500ff
  .word 0x14c50005
  .word 0x00000000
  .word 0x8e650014
  .word 0x34a50004
  .word 0x10000004
  .word 0xae650014
  .word 0x8e650014
  .word 0x34a50008
  .word 0xae650014
  .word 0x9485000c
  .word 0x10a00010
  .word 0x00000000
  .word 0x30a50001
  .word 0x10a00005
  .word 0x00000000
  .word 0x8e640014
  .word 0x34840008
  .word 0x10000009
  .word 0xae640014
  .word 0x8e650014
  .word 0x34a50002
  .word 0xae650014
  .word 0x9485000c
  .word 0x8e640014
  .word 0x000528c0
  .word 0x00852025
  .word 0xae640014
  .word 0x8c440000
  .word 0x30840001
  .word 0x1080feec
  .word 0x00000000
  .word 0x8c650028
  .word 0x84440006
  .word 0x14a40005
  .word 0x00000000
  .word 0x8c630024
  .word 0x84420004
  .word 0x1062fee4
  .word 0x00000000
  .word 0x8e620014
  .word 0x34420004
  .word 0x1000fee0
  .word 0xae620014
  .word 0x24030004
  .word 0xa2630029
  .word 0x9383be04
  .word 0x1000ff31
  .word 0xa2630028
  .word 0x24030003
  .word 0xa2630029
  .word 0x9383be04
  .word 0x34630004
  .word 0x1000ff2b
  .word 0xa2630028
  .word 0x24030004
  .word 0xa2630029
  .word 0x9383be04
  .word 0x1000ff26
  .word 0xa2630028
  .word 0x92620028
  .word 0x34420002
  .word 0x1000ff25
  .word 0xa2620028
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
}

// FUN_0047B1A0
asm long FUN_0047b1a0(void)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0c13cbdc
  .word 0x7fb00000
  .word 0x0040902d
  .word 0x12400026
  .word 0x00000000
  .word 0x0c13d190
  .word 0x0240202d
  .word 0x0040802d
  .word 0x1200001f
  .word 0x00000000
  .word 0x0c127fc0
  .word 0x00000000
  .word 0x0040882d
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0220302d
  .word 0x0c13d254
  .word 0x0000382d
  .word 0x8e250000
  .word 0x0040802d
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x0c13cfe0
  .word 0x0200202d
  .word 0x1040000d
  .word 0x00000000
  .word 0x8e250000
  .word 0x0040202d
  .word 0x0000302d
  .word 0x0c13d20c
  .word 0x0000382d
  .word 0x3c060048
  .word 0x0040202d
  .word 0x24050001
  .word 0x0c127f90
  .word 0x24c6abf0
  .word 0x10000004
  .word 0x0240102d
  .word 0x0c13cc04
  .word 0x0240202d
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

// FUN_0047B280
asm u64 FUN_0047b280(u64 param_1,float *param_2,u32 param_3,u8 *param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x3c150096
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x26b5c4a0
  .word 0x12600098
  .word 0x7fb00000
  .word 0x8e9e006c
  .word 0x0013082b
  .word 0x0000b82d
  .word 0x1020008f
  .word 0x0000902d
  .word 0x0013082b
  .word 0x1020008c
  .word 0x2696001c
  .word 0x00a0882d
  .word 0x00e0802d
  .word 0x27a400a0
  .word 0x02c0282d
  .word 0x0c131af8
  .word 0x0220302d
  .word 0x8e23000c
  .word 0x24020003
  .word 0x30630003
  .word 0x10620087
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
  .word 0x27a200ac
  .word 0xc6c0000c
  .word 0x46010002
  .word 0xe4400000
  .word 0x3c020096
  .word 0x24040006
  .word 0x8c420070
  .word 0x24030002
  .word 0x2485ffff
  .word 0x10800059
  .word 0x24460094
  .word 0x27a200a4
  .word 0x24040001
  .word 0xc4470000
  .word 0xc7a600a0
  .word 0x27a200a8
  .word 0xc4450000
  .word 0x27a200ac
  .word 0xc4440000
  .word 0xc4c10004
  .word 0xc4c20000
  .word 0xc4c30008
  .word 0xc4c0000c
  .word 0x4601381a
  .word 0x4602301e
  .word 0x4603285c
  .word 0x46000801
  .word 0x46040036
  .word 0x45000002
  .word 0x0080102d
  .word 0x0000102d
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x10000040
  .word 0x0000182d
  .word 0x00a0102d
  .word 0x24c60014
  .word 0x1440ffec
  .word 0x24a5ffff
  .word 0x1000003b
  .word 0x0003203c
  .word 0x8f84bdb4
  .word 0x8c450070
  .word 0x24020006
  .word 0x00a42021
  .word 0x2446ffff
  .word 0x10400020
  .word 0x24850060
  .word 0x27a200a4
  .word 0x24040001
  .word 0xc4470000
  .word 0xc7a600a0
  .word 0x27a200a8
  .word 0xc4450000
  .word 0x27a200ac
  .word 0xc4400000
  .word 0x46000107
  .word 0xc4a10004
  .word 0xc4a20000
  .word 0xc4a30008
  .word 0xc4a0000c
  .word 0x4601381a
  .word 0x4602301e
  .word 0x4603285c
  .word 0x46000801
  .word 0x46040036
  .word 0x45000002
  .word 0x0080102d
  .word 0x0000102d
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x10000006
  .word 0x24030001
  .word 0x00c0102d
  .word 0x24a50014
  .word 0x1440ffec
  .word 0x24c6ffff
  .word 0x00000000
  .word 0x0003403c
  .word 0x0008403f
  .word 0x15000017
  .word 0x00000000
  .word 0x26f70001
  .word 0x26310040
  .word 0x02f3102b
  .word 0x1440ff78
  .word 0x26100004
  .word 0x1640007b
  .word 0x00000000
  .word 0x10000082
  .word 0x0280102d
  .word 0x10000080
  .word 0x0280102d
  .word 0xc6c0000c
  .word 0x27a200ac
  .word 0x1000ffa2
  .word 0xe4400000
  .word 0x0003203c
  .word 0x24020002
  .word 0x0004203f
  .word 0x1482ffe9
  .word 0x00000000
  .word 0x1000ffc1
  .word 0x3c020096
  .word 0x00121080
  .word 0x24050008
  .word 0x00521021
  .word 0x0220382d
  .word 0x00021100
  .word 0x02a21021
  .word 0x0040302d
  .word 0x8ce40000
  .word 0x24a5ffff
  .word 0x8ce30004
  .word 0xacc40000
  .word 0x24e70008
  .word 0xacc30004
  .word 0x1ca0fff9
  .word 0x24c60008
  .word 0x31030001
  .word 0xac43003c
  .word 0x92030000
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
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0xe4400040
  .word 0x92030001
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
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0xe4400044
  .word 0x92030002
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
  .word 0x3c03437f
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x00000000
  .word 0xe4400048
  .word 0x92030003
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
  .word 0x3c03437f
  .word 0x26520001
  .word 0x44830000
  .word 0x00000000
  .word 0x46000803
  .word 0x24030030
  .word 0x00000000
  .word 0x00000000
  .word 0x1643ff8a
  .word 0xe440004c
  .word 0x02a0202d
  .word 0x0c11b0cc
  .word 0x0240282d
  .word 0x0040a82d
  .word 0x03c0202d
  .word 0x0280282d
  .word 0x0c13cb9c
  .word 0x24060001
  .word 0x1000ff80
  .word 0x0000902d
  .word 0x02a0202d
  .word 0x0c11b0cc
  .word 0x0240282d
  .word 0x03c0202d
  .word 0x0280282d
  .word 0x0c13cb9c
  .word 0x24060001
  .word 0x1000ff7e
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

// FUN_0047B750
asm u64 FUN_0047b750(u64 param_1,float *param_2,u32 param_3,float *param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0090
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x0000b82d
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x00e0a82d
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00c0982d
  .word 0x7fb10010
  .word 0x3c120096
  .word 0x7fb00000
  .word 0x0013082b
  .word 0x8c9e006c
  .word 0x2652c4a0
  .word 0x1020008c
  .word 0x0000882d
  .word 0x0013082b
  .word 0x10200089
  .word 0x2696001c
  .word 0x00a0802d
  .word 0x27a400a0
  .word 0x02c0282d
  .word 0x0c131af8
  .word 0x0200302d
  .word 0x8e03000c
  .word 0x24020003
  .word 0x30630003
  .word 0x10620083
  .word 0x00000000
  .word 0xc6050004
  .word 0xc6040000
  .word 0xc6030008
  .word 0xc6020014
  .word 0xc6010010
  .word 0xc6000018
  .word 0x4605281a
  .word 0x4604201e
  .word 0x4603191c
  .word 0x4602101a
  .word 0x4601081e
  .word 0x460000dc
  .word 0xc6020024
  .word 0xc6010020
  .word 0xc6000028
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
  .word 0x27a200ac
  .word 0xc6c0000c
  .word 0x46010002
  .word 0xe4400000
  .word 0x3c020096
  .word 0x24040006
  .word 0x8c420070
  .word 0x24030002
  .word 0x2485ffff
  .word 0x10800055
  .word 0x24460094
  .word 0x27a200a4
  .word 0x24040001
  .word 0xc4470000
  .word 0xc7a600a0
  .word 0x27a200a8
  .word 0xc4450000
  .word 0x27a200ac
  .word 0xc4440000
  .word 0xc4c10004
  .word 0xc4c20000
  .word 0xc4c30008
  .word 0xc4c0000c
  .word 0x4601381a
  .word 0x4602301e
  .word 0x4603285c
  .word 0x46000801
  .word 0x46040036
  .word 0x45000002
  .word 0x0080102d
  .word 0x0000102d
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x1000003c
  .word 0x0000182d
  .word 0x00a0102d
  .word 0x24c60014
  .word 0x1440ffec
  .word 0x24a5ffff
  .word 0x10000037
  .word 0x0003203c
  .word 0x8f84bdb4
  .word 0x8c450070
  .word 0x24020006
  .word 0x00a42021
  .word 0x2446ffff
  .word 0x1040001f
  .word 0x24850060
  .word 0x27a200a4
  .word 0x24040001
  .word 0xc4470000
  .word 0xc7a600a0
  .word 0x27a200a8
  .word 0xc4450000
  .word 0x27a200ac
  .word 0xc4400000
  .word 0x46000107
  .word 0xc4a10004
  .word 0xc4a20000
  .word 0xc4a30008
  .word 0xc4a0000c
  .word 0x4601381a
  .word 0x4602301e
  .word 0x4603285c
  .word 0x46000801
  .word 0x46040036
  .word 0x45000002
  .word 0x0080102d
  .word 0x0000102d
  .word 0x38420001
  .word 0x14400003
  .word 0x00000000
  .word 0x10000005
  .word 0x24030001
  .word 0x00c0102d
  .word 0x24a50014
  .word 0x1440ffec
  .word 0x24c6ffff
  .word 0x0003403c
  .word 0x0008403f
  .word 0x15000014
  .word 0x00000000
  .word 0x26f70001
  .word 0x02f3102b
  .word 0x1440ff7a
  .word 0x26100040
  .word 0x16200044
  .word 0x00000000
  .word 0x1000004b
  .word 0x0280102d
  .word 0xc6c0000c
  .word 0x27a200ac
  .word 0x1000ffa6
  .word 0xe4400000
  .word 0x0003203c
  .word 0x24020002
  .word 0x0004203f
  .word 0x1482ffec
  .word 0x00000000
  .word 0x1000ffc5
  .word 0x3c020096
  .word 0x00111080
  .word 0x24040008
  .word 0x00511021
  .word 0x0200302d
  .word 0x00021100
  .word 0x02423821
  .word 0x00e0282d
  .word 0x8cc30000
  .word 0x2484ffff
  .word 0x8cc20004
  .word 0xaca30000
  .word 0x24c60008
  .word 0xaca20004
  .word 0x1c80fff9
  .word 0x24a50008
  .word 0x31020001
  .word 0x26310001
  .word 0xace2003c
  .word 0xc6aa0004
  .word 0x24020030
  .word 0xc4e50014
  .word 0xc6a90000
  .word 0xc4e60010
  .word 0xc6a80008
  .word 0xc4e70018
  .word 0xc4e00024
  .word 0x460a281a
  .word 0xc4e30020
  .word 0x4609301e
  .word 0xc4e40028
  .word 0x4608395c
  .word 0x460a001a
  .word 0xc4e00004
  .word 0x4609181e
  .word 0xc4e10000
  .word 0x460820dc
  .word 0xc4e20008
  .word 0x460a001a
  .word 0x4609081e
  .word 0x4608101c
  .word 0xe4e00040
  .word 0xe4e50044
  .word 0x1622ffc2
  .word 0xe4e30048
  .word 0x0240202d
  .word 0x0c11b0cc
  .word 0x0220282d
  .word 0x0040902d
  .word 0x03c0202d
  .word 0x0280282d
  .word 0x0c13cb9c
  .word 0x24060001
  .word 0x1000ffb8
  .word 0x0000882d
  .word 0x0240202d
  .word 0x0c11b0cc
  .word 0x0220282d
  .word 0x03c0202d
  .word 0x0280282d
  .word 0x0c13cb9c
  .word 0x24060001
  .word 0x1000ffb5
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

// FUN_0047BB40
asm long FUN_0047bb40(int param_1,int param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0x2403000c
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00138980
  .word 0x26220010
  .word 0x30d00002
  .word 0x12000003
  .word 0x00621821
  .word 0x00131080
  .word 0x00621821
  .word 0x3c020003
  .word 0x3445012f
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x24640010
  .word 0x0040902d
  .word 0x1240003b
  .word 0x00000000
  .word 0x2643000f
  .word 0x2402fff0
  .word 0x0062a824
  .word 0x26840004
  .word 0xaea00004
  .word 0x0000282d
  .word 0xaea00008
  .word 0x24060048
  .word 0xaea00000
  .word 0x0c148502
  .word 0xae95004c
  .word 0x26a3000c
  .word 0x2402fff0
  .word 0x2463000f
  .word 0x24040040
  .word 0x00621024
  .word 0x0013082a
  .word 0xae82000c
  .word 0x24030001
  .word 0xae840010
  .word 0x24020008
  .word 0xae830050
  .word 0x0000402d
  .word 0xae800054
  .word 0xae820058
  .word 0xc681000c
  .word 0xc6800010
  .word 0xe7a10078
  .word 0x1020001f
  .word 0xe7a0007c
  .word 0x27a2007c
  .word 0x3c073f80
  .word 0x8c440000
  .word 0x3c020002
  .word 0x34450003
  .word 0x8fa60078
  .word 0x25080001
  .word 0x0113102a
  .word 0xacc70028
  .word 0x00c41821
  .word 0xacc70014
  .word 0xacc70000
  .word 0xacc00010
  .word 0xacc00008
  .word 0xacc00004
  .word 0xacc00024
  .word 0xacc00020
  .word 0xacc00018
  .word 0xacc00038
  .word 0xacc00034
  .word 0xafa30078
  .word 0xacc00030
  .word 0x8cc3000c
  .word 0x00651825
  .word 0x1440ffec
  .word 0xacc3000c
  .word 0x10000003
  .word 0x00000000
  .word 0x10000016
  .word 0x0000102d
  .word 0x16000003
  .word 0x00000000
  .word 0x10000012
  .word 0x0240102d
  .word 0x8e83000c
  .word 0x24020004
  .word 0x00133080
  .word 0x00711821
  .word 0xae830024
  .word 0xae820028
  .word 0x8e820050
  .word 0x24420001
  .word 0xae820050
  .word 0x8e820058
  .word 0x34420002
  .word 0xae820058
  .word 0x8e840024
  .word 0x0c148502
  .word 0x240500ff
  .word 0x1000ffee
  .word 0x00000000
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
  .word 0x00000000
}

// FUN_0047BD20
asm u32 FUN_0047bd20(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x0000282d
  .word 0xffbf0030
  .word 0x0000302d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x0c124dc4
  .word 0x0000202d
  .word 0x0040902d
  .word 0x1240000d
  .word 0x00000000
  .word 0x8e43005c
  .word 0x3c023f80
  .word 0x0240202d
  .word 0xac600004
  .word 0xac600008
  .word 0xac60000c
  .word 0x0c124cf4
  .word 0xac620010
  .word 0x14400005
  .word 0x00000000
  .word 0x1000001b
  .word 0x0000102d
  .word 0x10000019
  .word 0x0000102d
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0c12466c
  .word 0x0000302d
  .word 0x0c124ed8
  .word 0x0240202d
  .word 0x0c1252f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x26440020
  .word 0x0c1254d0
  .word 0x0220282d
  .word 0x0c125330
  .word 0x0220202d
  .word 0x8f83ba80
  .word 0x24020001
  .word 0x02031821
  .word 0x8c630000
  .word 0xac600024
  .word 0xac600028
  .word 0xac60002c
  .word 0xac600030
  .word 0xac600034
  .word 0xac600038
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

// FUN_0047BE10
asm u64 FUN_0047be10(int param_1,int param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x00a0a02d
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8f83ba80
  .word 0x8ca20064
  .word 0x00831821
  .word 0x8c630000
  .word 0x8c72009c
  .word 0x1440001d
  .word 0x00c0982d
  .word 0x8e820058
  .word 0x30420002
  .word 0x10400008
  .word 0x00000000
  .word 0x8e440000
  .word 0x8e85000c
  .word 0x8e870024
  .word 0x0c11eca0
  .word 0x0260302d
  .word 0x1000000e
  .word 0x8e820064
  .word 0x8e420008
  .word 0x0c132cbc
  .word 0x8c440004
  .word 0x8e440004
  .word 0x8e450008
  .word 0x0c11ccf0
  .word 0x0040802d
  .word 0x8e440000
  .word 0x0260302d
  .word 0x8e85000c
  .word 0x0c11edd4
  .word 0x26070020
  .word 0x8e820064
  .word 0x1440001d
  .word 0x00000000
  .word 0x10000027
  .word 0x0000102d
  .word 0x3c110096
  .word 0x2404000c
  .word 0x26310090
  .word 0x8e220000
  .word 0x0040f809
  .word 0x24050001
  .word 0x3c100096
  .word 0x2404000a
  .word 0x26100094
  .word 0x8e020000
  .word 0x0040f809
  .word 0x27a5006c
  .word 0x8e85005c
  .word 0x8e220000
  .word 0x0040f809
  .word 0x2404000a
  .word 0x8e020000
  .word 0x2404000b
  .word 0x0040f809
  .word 0x27a50068
  .word 0x8e220000
  .word 0x8e850060
  .word 0x0040f809
  .word 0x2404000b
  .word 0x1000ffcc
  .word 0x8e820058
  .word 0x3c100096
  .word 0x8fa5006c
  .word 0x26100090
  .word 0x8e020000
  .word 0x0040f809
  .word 0x2404000a
  .word 0x8e020000
  .word 0x8fa50068
  .word 0x0040f809
  .word 0x2404000b
  .word 0x1000ffd9
  .word 0x00000000
  .word 0xdfbf0050
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

// FUN_0047BF80
asm void FUN_0047bf80(int param_1)
{
  .set noreorder
  .word 0x8f86ba80
  .word 0x3c030049
  .word 0x24638550
  .word 0x24050008
  .word 0x00862021
  .word 0x8c840000
  .word 0xac830024
  .word 0x8c8700a8
  .word 0x30e60008
  .word 0x14c5000d
  .word 0x24830050
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a53170
  .word 0x10000050
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a52a50
  .word 0x1000004c
  .word 0xac850028
  .word 0x30e68000
  .word 0x34058000
  .word 0x14c5000d
  .word 0x00000000
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a5c8c0
  .word 0x10000040
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a5c240
  .word 0x1000003c
  .word 0xac850028
  .word 0x30e60020
  .word 0x24050020
  .word 0x14c5001d
  .word 0x00000000
  .word 0x30e60004
  .word 0x24050004
  .word 0x14c5000d
  .word 0x00000000
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a51860
  .word 0x1000002c
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a5e9e0
  .word 0x10000028
  .word 0xac850028
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a5fb10
  .word 0x10000020
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a5cfd0
  .word 0x1000001c
  .word 0xac850028
  .word 0x30e60004
  .word 0x24050004
  .word 0x14c5000d
  .word 0x00000000
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a50c30
  .word 0x10000010
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a5de30
  .word 0x1000000c
  .word 0xac850028
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a5c8c0
  .word 0x10000004
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a5c240
  .word 0xac850028
  .word 0x8c670058
  .word 0x24050080
  .word 0x30e60080
  .word 0x10c5002f
  .word 0x00000000
  .word 0x30e60100
  .word 0x24050100
  .word 0x10c5002f
  .word 0x00000000
  .word 0x3c060008
  .word 0x00e62824
  .word 0x10a6002f
  .word 0x00000000
  .word 0x3c060010
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a55ff0
  .word 0x10000002
  .word 0xac85002c
  .word 0xac80002c
  .word 0x8c670058
  .word 0x24050002
  .word 0x30e60002
  .word 0x10c50025
  .word 0x00000000
  .word 0x30e60040
  .word 0x24050040
  .word 0x10c50025
  .word 0x00000000
  .word 0x3c060004
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a55110
  .word 0x10000004
  .word 0xac850030
  .word 0x3c050048
  .word 0x24a55440
  .word 0xac850030
  .word 0x8c650058
  .word 0x24030010
  .word 0x30a50010
  .word 0x10a30019
  .word 0x00000000
  .word 0x3c030049
  .word 0x24638b80
  .word 0x10000019
  .word 0xac830038
  .word 0x3c050048
  .word 0x24a55750
  .word 0x1000ffe0
  .word 0xac85002c
  .word 0x3c050048
  .word 0x24a55e20
  .word 0x1000ffdc
  .word 0xac85002c
  .word 0x3c050048
  .word 0x24a55ef0
  .word 0x1000ffd8
  .word 0xac85002c
  .word 0x3c050048
  .word 0x24a538e0
  .word 0x1000ffe8
  .word 0xac850030
  .word 0x3c050048
  .word 0x24a55070
  .word 0x1000ffe4
  .word 0xac850030
  .word 0x3c030048
  .word 0x24636100
  .word 0x1000ffe5
  .word 0xac830034
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0047C240
asm void FUN_0047c240(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0x3c033f00
  .word 0xffbf0030
  .word 0x44833800
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x00e0902d
  .word 0x7fb00000
  .word 0xc5020070
  .word 0x8d070008
  .word 0xc5010074
  .word 0x8c830004
  .word 0xc4a50000
  .word 0x8d110004
  .word 0xc4a30008
  .word 0x8c900000
  .word 0xc4c00000
  .word 0xc4a40004
  .word 0x46023982
  .word 0x46013882
  .word 0x46062842
  .word 0xe7a10050
  .word 0x46061842
  .word 0x46020002
  .word 0xe7a10058
  .word 0xe7a00040
  .word 0xc4c10004
  .word 0xc4c00008
  .word 0x46062102
  .word 0x46020842
  .word 0x46020002
  .word 0xe7a40054
  .word 0xe7a10044
  .word 0x14e3015d
  .word 0xe7a00048
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x2a4100cd
  .word 0x1420009d
  .word 0x00000000
  .word 0x3c0d7000
  .word 0x3c061001
  .word 0x27ab0050
  .word 0x27aa0040
  .word 0x24050100
  .word 0x24040200
  .word 0x240300cc
  .word 0x24080cc0
  .word 0x35ac0cc0
  .word 0x24070330
  .word 0x8cc9d000
  .word 0x31290100
  .word 0x1120000d
  .word 0x00000000
  .word 0xacc5e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x11200015
  .word 0x00000000
  .word 0xacc4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xacc4e010
  .word 0xacc0d480
  .word 0xacd1d410
  .word 0xacc3d420
  .word 0xacc5d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x11200014
  .word 0x00000000
  .word 0xacc4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x01a0782d
  .word 0x0180702d
  .word 0x0000c02d
  .word 0x00000000
  .word 0xd9e10000
  .word 0xd9620000
  .word 0xd9430000
  .word 0x4bc2092c
  .word 0x4bc20968
  .word 0x4bc209a8
  .word 0x4bc209ec
  .word 0x4bc3212c
  .word 0x4bc3296c
  .word 0x4bc331a8
  .word 0x4bc339e8
  .word 0xf9c40000
  .word 0xf9c50010
  .word 0xf9c60020
  .word 0xf9c70030
  .word 0x27180001
  .word 0x25ce0040
  .word 0x2b0900cc
  .word 0x1520ffed
  .word 0x25ef0010
  .word 0x8cc9d000
  .word 0x31290100
  .word 0x1120000d
  .word 0x00000000
  .word 0xacc5e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x11200015
  .word 0x00000000
  .word 0xacc4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xacc5e010
  .word 0xacc8d080
  .word 0xacd0d010
  .word 0xacc7d020
  .word 0xacc5d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2652ff34
  .word 0x26310cc0
  .word 0x2a4100cd
  .word 0x1020ff6f
  .word 0x26103300
  .word 0x124000b5
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24050200
  .word 0x3c031001
  .word 0x24040100
  .word 0xac65e010
  .word 0xac60d480
  .word 0xac71d410
  .word 0xac72d420
  .word 0xac64d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800013
  .word 0x00000000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x3c0f7000
  .word 0x0012082a
  .word 0x35ee0cc0
  .word 0x10200018
  .word 0x0000302d
  .word 0x27a50050
  .word 0x27a40040
  .word 0xd9e10000
  .word 0xd8a20000
  .word 0xd8830000
  .word 0x4bc2092c
  .word 0x4bc20968
  .word 0x4bc209a8
  .word 0x4bc209ec
  .word 0x4bc3212c
  .word 0x4bc3296c
  .word 0x4bc331a8
  .word 0x4bc339e8
  .word 0xf9c40000
  .word 0xf9c50010
  .word 0xf9c60020
  .word 0xf9c70030
  .word 0x24c60001
  .word 0x25ce0040
  .word 0x00d2182a
  .word 0x1460ffed
  .word 0x25ef0010
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24060100
  .word 0x3c031001
  .word 0x24050cc0
  .word 0xac66e010
  .word 0x00122080
  .word 0xac65d080
  .word 0xac70d010
  .word 0xac64d020
  .word 0xac66d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x1000001c
  .word 0x00000000
  .word 0x0012082a
  .word 0x10200019
  .word 0x0000402d
  .word 0x00032080
  .word 0x27a60050
  .word 0x27a50040
  .word 0xda210000
  .word 0xd8c20000
  .word 0xd8a30000
  .word 0x4bc2092c
  .word 0x4bc20968
  .word 0x4bc209a8
  .word 0x4bc209ec
  .word 0x4bc3212c
  .word 0x4bc3296c
  .word 0x4bc331a8
  .word 0x4bc339e8
  .word 0xfa040000
  .word 0xfa050010
  .word 0xfa060020
  .word 0xfa070030
  .word 0x25080001
  .word 0x02048021
  .word 0x0112182a
  .word 0x1460ffed
  .word 0x02278821
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0060
}

// FUN_0047C8C0
asm void FUN_0047c8c0(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff90
  .word 0x3c033f00
  .word 0xffbf0030
  .word 0x44831000
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x00e0902d
  .word 0x7fb00000
  .word 0xc5010070
  .word 0x8d090008
  .word 0xc5000074
  .word 0x8c830004
  .word 0xc4a90000
  .word 0x8d110004
  .word 0xc4a80004
  .word 0x8c900000
  .word 0xc4a70008
  .word 0xc4c50000
  .word 0x46011042
  .word 0x46001182
  .word 0x46014802
  .word 0xe7a00060
  .word 0x46014002
  .word 0xe7a00064
  .word 0x46013802
  .word 0xe7a00068
  .word 0x46062802
  .word 0xc4c40004
  .word 0xe7a00050
  .word 0xc501006c
  .word 0xc4c30008
  .word 0xc5020068
  .word 0x46062002
  .word 0xe7a00054
  .word 0x46061802
  .word 0x4605081a
  .word 0xe7a00058
  .word 0x4609101c
  .word 0xe7a00040
  .word 0x4604081a
  .word 0x4608101c
  .word 0x4603081a
  .word 0xe7a00044
  .word 0x4607101c
  .word 0x15230170
  .word 0xe7a00048
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x2a4100cd
  .word 0x142000a2
  .word 0x00000000
  .word 0x3c0e7000
  .word 0x3c061001
  .word 0x27ac0060
  .word 0x27ab0050
  .word 0x27aa0040
  .word 0x24050100
  .word 0x24040200
  .word 0x240300cc
  .word 0x35cd0cc0
  .word 0x24080cc0
  .word 0x24070330
  .word 0x8cc9d000
  .word 0x31290100
  .word 0x1120000d
  .word 0x00000000
  .word 0xacc5e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x11200015
  .word 0x00000000
  .word 0xacc4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xacc4e010
  .word 0xacc0d480
  .word 0xacd1d410
  .word 0xacc3d420
  .word 0xacc5d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x11200014
  .word 0x00000000
  .word 0xacc4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x01c0c02d
  .word 0x01a0782d
  .word 0x0000c82d
  .word 0x00000000
  .word 0xdb010000
  .word 0xd9820000
  .word 0xd9630000
  .word 0xd9480000
  .word 0x4bc2092c
  .word 0x4bc20968
  .word 0x4bc209a8
  .word 0x4bc209ec
  .word 0x4bc3212c
  .word 0x4bc3296c
  .word 0x4bc331a8
  .word 0x4bc339e8
  .word 0x4bc82128
  .word 0x4bc82968
  .word 0x4bc831a8
  .word 0x4bc839e8
  .word 0xf9e40000
  .word 0xf9e50010
  .word 0xf9e60020
  .word 0xf9e70030
  .word 0x27390001
  .word 0x25ef0040
  .word 0x2b2900cc
  .word 0x1520ffe8
  .word 0x27180010
  .word 0x8cc9d000
  .word 0x31290100
  .word 0x1120000c
  .word 0x00000000
  .word 0xacc5e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x11200015
  .word 0x00000000
  .word 0xacc4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8cc9d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xacc5e010
  .word 0xacc8d080
  .word 0xacd0d010
  .word 0xacc7d020
  .word 0xacc5d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2652ff34
  .word 0x26310cc0
  .word 0x2a4100cd
  .word 0x1020ff6b
  .word 0x26103300
  .word 0x124000c1
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24050200
  .word 0x3c031001
  .word 0x24040100
  .word 0xac65e010
  .word 0xac60d480
  .word 0xac71d410
  .word 0xac72d420
  .word 0xac64d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800013
  .word 0x00000000
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x3c187000
  .word 0x0012082a
  .word 0x370f0cc0
  .word 0x1020001e
  .word 0x0000382d
  .word 0x27a60060
  .word 0x27a50050
  .word 0x27a40040
  .word 0xdb010000
  .word 0xd8c20000
  .word 0xd8a30000
  .word 0xd8880000
  .word 0x4bc2092c
  .word 0x4bc20968
  .word 0x4bc209a8
  .word 0x4bc209ec
  .word 0x4bc3212c
  .word 0x4bc3296c
  .word 0x4bc331a8
  .word 0x4bc339e8
  .word 0x4bc82128
  .word 0x4bc82968
  .word 0x4bc831a8
  .word 0x4bc839e8
  .word 0xf9e40000
  .word 0xf9e50010
  .word 0xf9e60020
  .word 0xf9e70030
  .word 0x24e70001
  .word 0x25ef0040
  .word 0x00f2182a
  .word 0x1460ffe8
  .word 0x27180010
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24060100
  .word 0x3c031001
  .word 0x24050cc0
  .word 0xac66e010
  .word 0x00122080
  .word 0xac65d080
  .word 0xac70d010
  .word 0xac64d020
  .word 0xac66d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x10000022
  .word 0x00000000
  .word 0x0012082a
  .word 0x1020001f
  .word 0x0000402d
  .word 0x00032080
  .word 0x27a70060
  .word 0x27a60050
  .word 0x27a50040
  .word 0xda210000
  .word 0xd8e20000
  .word 0xd8c30000
  .word 0xd8a80000
  .word 0x4bc2092c
  .word 0x4bc20968
  .word 0x4bc209a8
  .word 0x4bc209ec
  .word 0x4bc3212c
  .word 0x4bc3296c
  .word 0x4bc331a8
  .word 0x4bc339e8
  .word 0x4bc82128
  .word 0x4bc82968
  .word 0x4bc831a8
  .word 0x4bc839e8
  .word 0xfa040000
  .word 0xfa050010
  .word 0xfa060020
  .word 0xfa070030
  .word 0x25080001
  .word 0x02048021
  .word 0x0112182a
  .word 0x1460ffe8
  .word 0x02298821
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0070
}

// FUN_0047CFD0 NONMATCHING

float FUN_0047cfd0(u32 *param_1,u8 (*param_2) [12],u8 (*param_3) [12],
                  int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  u32 uVar5;
  u8 (*pauVar6) [16];
  int iVar7;
  float *pfVar8;
  u8 (*pauVar9) [16];
  float *pfVar10;
  u64 *puVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  u8 (*pauVar17) [16];
  float *pfVar18;
  u8 (*pauVar19) [16];
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
  Vec128 in_vf0;
  Vec128 auVar30;
  Vec128 auVar31;
  Vec128 auVar32;
  Vec128 auVar33;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  Vec128 auVar37;
  Vec128 auVar38;
  Vec128 auVar39;
  Vec128 extraout_vf10;
  Vec128 auVar40;
  Vec128 extraout_vf11;
  Vec128 auVar41;
  Vec128 extraout_vf12;
  Vec128 auVar42;
  Vec128 extraout_vf13;
  Vec128 auVar43;
  Vec128 auVar44;
  Vec128 auVar45;
  Vec128 auVar46;
  Vec128 auVar47;
  u32 in_vuI;
  u32 uStack_c;
  u32 uStack_4;
  
  iVar1 = *(int *)(param_5 + 0x38);
  fVar20 = *(float *)(param_5 + 0x74);
  iVar2 = *(int *)(param_5 + 8);
  iVar3 = param_1[1];
  pauVar19 = *(u8 (**) [16])(param_5 + 4);
  pfVar18 = *(float **)(param_5 + 0x34);
  pauVar17 = (u8 (*) [16])*param_1;
  fVar29 = *(float *)(param_5 + 0x70) * 0.5;
  fVar28 = fVar20 * 0.5;
  if (iVar2 == iVar3) {
    FlushCache(0);
    uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
    }
    uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
      do {
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar5 & 0x100) != 0);
    }
    DAT_70003f00 = *(u32 *)*param_2;
    DAT_70003f04 = *(u32 *)(*param_2 + 4);
    DAT_70003f08 = *(u32 *)(*param_2 + 8);
    DAT_70003f10 = *(u32 *)*param_3;
    DAT_70003f14 = *(u32 *)(*param_3 + 4);
    DAT_70003f18 = *(u32 *)(*param_3 + 8);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    _ctc2(0x3fc90fdb);
    _vnop();
    _vnop();
    auVar40 = _vaddi(extraout_vf10,in_vuI);
    _ctc2(0x40490fdb);
    _vnop();
    _vnop();
    auVar40 = _vaddi(auVar40,in_vuI);
    _ctc2(0x40090fdb);
    _vnop();
    _vnop();
    auVar40 = _vaddi(auVar40,in_vuI);
    _ctc2(0xc0490fdb);
    _vnop();
    _vnop();
    auVar41 = _vaddi(extraout_vf11,in_vuI);
    fVar20 = -4.1415925;
    _ctc2(0xc08487ed);
    _vnop();
    _vnop();
    auVar41 = _vaddi(auVar41,in_vuI);
    _ctc2(0xb94fb21f);
    _vnop();
    _vnop();
    auVar41 = _vaddi(auVar41,in_vuI);
    _ctc2(0xbe2aaaa4);
    _vnop();
    _vnop();
    auVar42 = _vaddi(extraout_vf12,in_vuI);
    _ctc2(0x3c08873e);
    _vnop();
    _vnop();
    auVar42 = _vaddi(auVar42,in_vuI);
    _ctc2(0x362e9c14);
    _vnop();
    _vnop();
    auVar42 = _vaddi(auVar42,in_vuI);
    _ctc2(0x3f800000);
    _vnop();
    _vnop();
    auVar43 = _vaddi(extraout_vf13,in_vuI);
    EI();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    auVar30._12_4_ = uRam70003f0c;
    auVar30._0_4_ = *(u32 *)*param_2;
    auVar30._4_4_ = *(u32 *)(*param_2 + 4);
    auVar30._8_4_ = *(u32 *)(*param_2 + 8 + 8);
    auVar30 = _lqc2(auVar30);
    auVar33._4_4_ = fVar29;
    auVar33._0_4_ = fVar29;
    auVar33._8_4_ = fVar29;
    auVar33._12_4_ = fVar29;
    auVar33 = _lqc2(auVar33);
    auVar31._12_4_ = uRam70003f1c;
    auVar31._0_4_ = *(u32 *)*param_3;
    auVar31._4_4_ = *(u32 *)(*param_3 + 4);
    auVar31._8_4_ = *(u32 *)(*param_3 + 8 + 8);
    auVar31 = _lqc2(auVar31);
    auVar34._4_4_ = fVar28;
    auVar34._0_4_ = fVar28;
    auVar34._8_4_ = fVar28;
    auVar34._12_4_ = fVar28;
    auVar34 = _lqc2(auVar34);
    _vnop();
    auVar39 = _vmul(auVar30,auVar33);
    auVar33 = _vmul(auVar31,auVar33);
    auVar30 = _vmul(auVar30,auVar34);
    auVar31 = _vmul(auVar31,auVar34);
    EI();
    DAT_70003f30 = fVar29;
    DAT_70003f34 = fVar29;
    DAT_70003f38 = fVar29;
    DAT_70003f3c = fVar29;
    DAT_70003f40 = fVar28;
    DAT_70003f44 = fVar28;
    DAT_70003f48 = fVar28;
    DAT_70003f4c = fVar28;
    if (0xbf < param_4) {
      do {
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(pfVar18);
        REG_DMAC_9_SPR_TO_QWC = 0x30;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x300;
        REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar19);
        REG_DMAC_9_SPR_TO_QWC = 0xc0;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        puVar11 = (u64 *)(u8 *)DAT_70000000;
        iVar14 = 0;
        pauVar6 = (u8 (*) [16])(u8 *)DAT_70000f00;
        pauVar9 = (u8 (*) [16])(u8 *)DAT_70000300;
        do {
          DAT_70003f20 = *(u32 *)puVar11;
          DAT_70003f24 = *(u32 *)((int)puVar11 + 4);
          DAT_70003f28 = *(u32 *)puVar11;
          fVar20 = *(float *)((int)puVar11 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar37._8_4_ = DAT_70003f28;
          auVar37._0_8_ = *puVar11;
          auVar37._12_4_ = fVar20;
          auVar34 = _lqc2(auVar37);
          auVar45 = _lqc2(*pauVar9);
          auVar47 = _lqc2(pauVar9[1]);
          auVar37 = _vabs(auVar34);
          _vaddabc(in_vf0,auVar40);
          _vmsubbc(auVar37,in_vf0);
          _vaddabc(in_vf0,auVar40);
          _vaddabc(in_vf0,auVar40);
          auVar37 = _vmsubbc(auVar34,in_vf0);
          _vaddabc(in_vf0,auVar41);
          _vaddabc(in_vf0,auVar41);
          auVar32 = _vmsubbc(auVar34,in_vf0);
          auVar34 = _vmini(auVar34,auVar37);
          auVar38 = _vmax(auVar34,auVar32);
          auVar34 = _vmul(auVar38,auVar38);
          auVar36 = _vmulbc(auVar38,auVar41);
          auVar32 = _vmulbc(auVar38,auVar42);
          auVar35 = _vmulbc(auVar38,auVar42);
          auVar37 = _vmul(auVar34,auVar34);
          auVar36 = _vmul(auVar36,auVar34);
          _vmula(auVar32,auVar34);
          auVar32 = _vmulbc(auVar38,auVar42);
          auVar34 = _vmul(auVar37,auVar37);
          _vmadda(auVar36,auVar37);
          _vmadda(auVar35,auVar37);
          _vmaddabc(auVar38,auVar43);
          auVar36 = _vmadd(auVar32,auVar34);
          auVar34 = _vmulbc(auVar39,auVar36);
          auVar37 = _vmulbc(auVar33,auVar36);
          auVar32 = _vmulbc(auVar30,auVar36);
          auVar35 = _vmulbc(auVar31,auVar36);
          auVar38 = _vsub(auVar34,auVar37);
          auVar44 = _vadd(auVar32,auVar35);
          auVar34 = _vmulbc(auVar39,auVar36);
          auVar37 = _vmulbc(auVar33,auVar36);
          auVar32 = _vmulbc(auVar30,auVar36);
          auVar35 = _vmulbc(auVar31,auVar36);
          auVar36 = _vsub(auVar34,auVar37);
          auVar46 = _vadd(auVar32,auVar35);
          auVar34 = _vsub(auVar45,auVar38);
          auVar37 = _vadd(auVar45,auVar38);
          auVar32 = _vadd(auVar45,auVar38);
          auVar35 = _vsub(auVar45,auVar38);
          auVar34 = _vsub(auVar34,auVar44);
          auVar37 = _vsub(auVar37,auVar44);
          auVar32 = _vadd(auVar32,auVar44);
          auVar35 = _vadd(auVar35,auVar44);
          auVar38 = _vsub(auVar47,auVar36);
          auVar44 = _vadd(auVar47,auVar36);
          auVar45 = _vadd(auVar47,auVar36);
          auVar47 = _vsub(auVar47,auVar36);
          auVar36 = _vsub(auVar38,auVar46);
          auVar38 = _vsub(auVar44,auVar46);
          auVar44 = _vadd(auVar45,auVar46);
          auVar45 = _vadd(auVar47,auVar46);
          auVar34 = _sqc2(auVar34);
          DAT_70003f2c = fVar20;
          *(Vec128 *)pauVar6 = auVar34;
          auVar34 = _sqc2(auVar37);
          ((Vec128 *)pauVar6)[1] = auVar34;
          auVar34 = _sqc2(auVar32);
          ((Vec128 *)pauVar6)[2] = auVar34;
          auVar34 = _sqc2(auVar35);
          ((Vec128 *)pauVar6)[3] = auVar34;
          auVar34 = _sqc2(auVar36);
          ((Vec128 *)pauVar6)[4] = auVar34;
          auVar34 = _sqc2(auVar38);
          ((Vec128 *)pauVar6)[5] = auVar34;
          auVar34 = _sqc2(auVar44);
          ((Vec128 *)pauVar6)[6] = auVar34;
          auVar34 = _sqc2(auVar45);
          ((Vec128 *)pauVar6)[7] = auVar34;
          EI();
          iVar14 = iVar14 + 2;
          pauVar9 = pauVar9 + 2;
          puVar11 = puVar11 + 1;
          pauVar6 = pauVar6 + 8;
        } while (iVar14 < 0xc0);
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = 0xf00;
        REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar17);
        REG_DMAC_8_SPR_FROM_QWC = 0x300;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        param_4 = param_4 + -0xc0;
        pauVar19 = pauVar19 + 0xc0;
        pauVar17 = pauVar17 + 0x300;
        pfVar18 = pfVar18 + 0xc0;
      } while (0xbf < param_4);
    }
    if (3 < param_4) {
      iVar14 = param_4;
      if (param_4 < 0) {
        iVar14 = param_4 + 3;
      }
      iVar14 = iVar14 >> 2;
      iVar12 = iVar14 * 4;
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      iVar15 = iVar12 >> 2;
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0;
      REG_DMAC_9_SPR_TO_MADR = (u32)(pfVar18);
      iVar16 = iVar15;
      if (iVar12 < 0) {
        iVar16 = iVar12 + 3 >> 2;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar16;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = iVar16 << 4;
      REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar19);
      REG_DMAC_9_SPR_TO_QWC = iVar12;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      puVar11 = (u64 *)(u8 *)DAT_70000000;
      iVar7 = iVar15;
      if (iVar12 < 0) {
        iVar7 = iVar12 + 3 >> 2;
      }
      pauVar9 = (u8 (*) [16])(iVar16 << 4 | 0x70000000);
      pauVar6 = (u8 (*) [16])((iVar12 + iVar7) * 0x10 | 0x70000000);
      iVar16 = 0;
      if (0 < iVar12) {
        do {
          DAT_70003f20 = *(u32 *)puVar11;
          DAT_70003f24 = *(u32 *)((int)puVar11 + 4);
          DAT_70003f28 = *(u32 *)puVar11;
          fVar20 = *(float *)((int)puVar11 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar32._8_4_ = DAT_70003f28;
          auVar32._0_8_ = *puVar11;
          auVar32._12_4_ = fVar20;
          auVar34 = _lqc2(auVar32);
          auVar45 = _lqc2(*pauVar9);
          auVar47 = _lqc2(pauVar9[1]);
          auVar37 = _vabs(auVar34);
          _vaddabc(in_vf0,auVar40);
          _vmsubbc(auVar37,in_vf0);
          _vaddabc(in_vf0,auVar40);
          _vaddabc(in_vf0,auVar40);
          auVar37 = _vmsubbc(auVar34,in_vf0);
          _vaddabc(in_vf0,auVar41);
          _vaddabc(in_vf0,auVar41);
          auVar32 = _vmsubbc(auVar34,in_vf0);
          auVar34 = _vmini(auVar34,auVar37);
          auVar38 = _vmax(auVar34,auVar32);
          auVar34 = _vmul(auVar38,auVar38);
          auVar36 = _vmulbc(auVar38,auVar41);
          auVar32 = _vmulbc(auVar38,auVar42);
          auVar35 = _vmulbc(auVar38,auVar42);
          auVar37 = _vmul(auVar34,auVar34);
          auVar36 = _vmul(auVar36,auVar34);
          _vmula(auVar32,auVar34);
          auVar32 = _vmulbc(auVar38,auVar42);
          auVar34 = _vmul(auVar37,auVar37);
          _vmadda(auVar36,auVar37);
          _vmadda(auVar35,auVar37);
          _vmaddabc(auVar38,auVar43);
          auVar36 = _vmadd(auVar32,auVar34);
          auVar34 = _vmulbc(auVar39,auVar36);
          auVar37 = _vmulbc(auVar33,auVar36);
          auVar32 = _vmulbc(auVar30,auVar36);
          auVar35 = _vmulbc(auVar31,auVar36);
          auVar38 = _vsub(auVar34,auVar37);
          auVar44 = _vadd(auVar32,auVar35);
          auVar34 = _vmulbc(auVar39,auVar36);
          auVar37 = _vmulbc(auVar33,auVar36);
          auVar32 = _vmulbc(auVar30,auVar36);
          auVar35 = _vmulbc(auVar31,auVar36);
          auVar36 = _vsub(auVar34,auVar37);
          auVar46 = _vadd(auVar32,auVar35);
          auVar34 = _vsub(auVar45,auVar38);
          auVar37 = _vadd(auVar45,auVar38);
          auVar32 = _vadd(auVar45,auVar38);
          auVar35 = _vsub(auVar45,auVar38);
          auVar34 = _vsub(auVar34,auVar44);
          auVar37 = _vsub(auVar37,auVar44);
          auVar32 = _vadd(auVar32,auVar44);
          auVar35 = _vadd(auVar35,auVar44);
          auVar38 = _vsub(auVar47,auVar36);
          auVar44 = _vadd(auVar47,auVar36);
          auVar45 = _vadd(auVar47,auVar36);
          auVar47 = _vsub(auVar47,auVar36);
          auVar36 = _vsub(auVar38,auVar46);
          auVar38 = _vsub(auVar44,auVar46);
          auVar44 = _vadd(auVar45,auVar46);
          auVar45 = _vadd(auVar47,auVar46);
          auVar34 = _sqc2(auVar34);
          DAT_70003f2c = fVar20;
          *(Vec128 *)pauVar6 = auVar34;
          auVar34 = _sqc2(auVar37);
          ((Vec128 *)pauVar6)[1] = auVar34;
          auVar34 = _sqc2(auVar32);
          ((Vec128 *)pauVar6)[2] = auVar34;
          auVar34 = _sqc2(auVar35);
          ((Vec128 *)pauVar6)[3] = auVar34;
          auVar34 = _sqc2(auVar36);
          ((Vec128 *)pauVar6)[4] = auVar34;
          auVar34 = _sqc2(auVar38);
          ((Vec128 *)pauVar6)[5] = auVar34;
          auVar34 = _sqc2(auVar44);
          ((Vec128 *)pauVar6)[6] = auVar34;
          auVar34 = _sqc2(auVar45);
          ((Vec128 *)pauVar6)[7] = auVar34;
          EI();
          iVar16 = iVar16 + 2;
          pauVar9 = pauVar9 + 2;
          puVar11 = puVar11 + 1;
          pauVar6 = pauVar6 + 8;
        } while (iVar16 < iVar12);
      }
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x100;
      if (iVar12 < 0) {
        iVar15 = iVar12 + 3 >> 2;
      }
      REG_DMAC_8_SPR_FROM_SADR = (iVar12 + iVar15) * 0x10;
      REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar17);
      REG_DMAC_8_SPR_FROM_QWC = iVar14 << 4;
      REG_DMAC_8_SPR_FROM_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      pfVar18 = pfVar18 + iVar15 * 4;
      pauVar17 = pauVar17 + iVar14 * 0x10;
      param_4 = param_4 + iVar14 * -4;
      pauVar19 = pauVar19 + iVar14 * 4;
    }
    iVar14 = 0;
    if (0 < param_4) {
      do {
        fVar20 = *pfVar18;
        auVar35._4_4_ = uStack_c;
        auVar35._0_4_ = fVar20;
        auVar35._8_4_ = fVar20;
        auVar35._12_4_ = uStack_4;
        auVar34 = _lqc2(auVar35);
        auVar44 = _lqc2(*pauVar19);
        auVar37 = _vabs(auVar34);
        _vaddabc(in_vf0,auVar40);
        _vmsubbc(auVar37,in_vf0);
        _vaddabc(in_vf0,auVar40);
        _vaddabc(in_vf0,auVar40);
        auVar37 = _vmsubbc(auVar34,in_vf0);
        _vaddabc(in_vf0,auVar41);
        _vaddabc(in_vf0,auVar41);
        auVar32 = _vmsubbc(auVar34,in_vf0);
        auVar34 = _vmini(auVar34,auVar37);
        auVar38 = _vmax(auVar34,auVar32);
        auVar34 = _vmul(auVar38,auVar38);
        auVar36 = _vmulbc(auVar38,auVar41);
        auVar32 = _vmulbc(auVar38,auVar42);
        auVar35 = _vmulbc(auVar38,auVar42);
        auVar37 = _vmul(auVar34,auVar34);
        auVar36 = _vmul(auVar36,auVar34);
        _vmula(auVar32,auVar34);
        auVar32 = _vmulbc(auVar38,auVar42);
        auVar34 = _vmul(auVar37,auVar37);
        _vmadda(auVar36,auVar37);
        _vmadda(auVar35,auVar37);
        _vmaddabc(auVar38,auVar43);
        auVar35 = _vmadd(auVar32,auVar34);
        auVar34 = _vmulbc(auVar39,auVar35);
        auVar37 = _vmulbc(auVar33,auVar35);
        auVar32 = _vmulbc(auVar30,auVar35);
        auVar35 = _vmulbc(auVar31,auVar35);
        auVar34 = _vsub(auVar34,auVar37);
        auVar37 = _vadd(auVar32,auVar35);
        auVar32 = _vsub(auVar44,auVar34);
        auVar35 = _vadd(auVar44,auVar34);
        auVar36 = _vadd(auVar44,auVar34);
        auVar38 = _vsub(auVar44,auVar34);
        auVar34 = _vsub(auVar32,auVar37);
        auVar32 = _vsub(auVar35,auVar37);
        auVar35 = _vadd(auVar36,auVar37);
        auVar37 = _vadd(auVar38,auVar37);
        auVar34 = _sqc2(auVar34);
        *(Vec128 *)pauVar17 = auVar34;
        auVar34 = _sqc2(auVar32);
        ((Vec128 *)pauVar17)[1] = auVar34;
        auVar34 = _sqc2(auVar35);
        ((Vec128 *)pauVar17)[2] = auVar34;
        auVar34 = _sqc2(auVar37);
        ((Vec128 *)pauVar17)[3] = auVar34;
        EI();
        iVar14 = iVar14 + 1;
        pauVar19 = (u8 (*) [16])(*pauVar19 + iVar2);
        pfVar18 = (float *)((int)pfVar18 + iVar1);
        pauVar17 = (u8 (*) [16])(*pauVar17 + iVar3 * 4);
      } while (iVar14 < param_4);
    }
  }
  else {
    iVar14 = 0;
    if (0 < param_4) {
      do {
        fVar20 = (float)((code)FUN_0052e878)(*pfVar18);
        fVar21 = (float)((code)FUN_0052e6d8)(*pfVar18);
        pfVar13 = (float *)(*pauVar17 + iVar3);
        pfVar10 = (float *)((int)pfVar13 + iVar3);
        fVar22 = -fVar20;
        pfVar8 = (float *)((int)pfVar10 + iVar3);
        iVar14 = iVar14 + 1;
        fVar25 = (fVar21 * *(float *)*param_2 + fVar22 * *(float *)*param_3) * fVar29;
        pfVar18 = (float *)((int)pfVar18 + iVar1);
        fVar27 = (fVar21 * *(float *)(*param_2 + 4) + fVar22 * *(float *)(*param_3 + 4)) * fVar29;
        fVar24 = (fVar20 * *(float *)(*param_2 + 4) + fVar21 * *(float *)(*param_3 + 4)) * fVar28;
        fVar23 = (fVar20 * *(float *)*param_2 + fVar21 * *(float *)*param_3) * fVar28;
        fVar26 = (fVar20 * *(float *)(*param_2 + 8) + fVar21 * *(float *)(*param_3 + 8)) * fVar28;
        fVar20 = (fVar21 * *(float *)(*param_2 + 8) + fVar22 * *(float *)(*param_3 + 8)) * fVar29;
        *(float *)*pauVar17 = *(float *)*pauVar19 + (-fVar25 - fVar23);
        *(float *)(*pauVar17 + 4) = *(float *)(*pauVar19 + 4) + (-fVar27 - fVar24);
        *(float *)(*pauVar17 + 8) = *(float *)(*pauVar19 + 8) + (-fVar20 - fVar26);
        pauVar17 = (u8 (*) [16])((int)pfVar8 + iVar3);
        *pfVar13 = *(float *)*pauVar19 + (fVar25 - fVar23);
        pfVar13[1] = *(float *)(*pauVar19 + 4) + (fVar27 - fVar24);
        pfVar13[2] = *(float *)(*pauVar19 + 8) + (fVar20 - fVar26);
        *pfVar10 = *(float *)*pauVar19 + fVar25 + fVar23;
        pfVar10[1] = *(float *)(*pauVar19 + 4) + fVar27 + fVar24;
        pfVar10[2] = *(float *)(*pauVar19 + 8) + fVar20 + fVar26;
        *pfVar8 = *(float *)*pauVar19 + -fVar25 + fVar23;
        pfVar8[1] = *(float *)(*pauVar19 + 4) + -fVar27 + fVar24;
        fVar20 = *(float *)(*pauVar19 + 8) + -fVar20 + fVar26;
        pauVar19 = (u8 (*) [16])(*pauVar19 + iVar2);
        pfVar8[2] = fVar20;
      } while (iVar14 < param_4);
    }
  }
  return fVar20;
}

// FUN_0047DE30 NONMATCHING

u32
FUN_0047de30(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  u32 uVar5;
  u8 (*pauVar6) [16];
  int iVar7;
  u8 (*pauVar8) [16];
  u8 (*pauVar9) [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  u8 (*pauVar14) [16];
  u64 *puVar15;
  u8 (*pauVar16) [16];
  u8 (*pauVar17) [12];
  u8 (*pauVar18) [12];
  u32 uVar19;
  Vec128 auVar20;
  Vec128 auVar21;
  Vec128 auVar22;
  Vec128 auVar23;
  Vec128 auVar24;
  Vec128 auVar25;
  Vec128 auVar26;
  Vec128 auVar27;
  Vec128 auVar28;
  Vec128 auVar29;
  Vec128 auVar30;
  Vec128 auVar31;
  Vec128 auVar32;
  Vec128 auVar33;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  Vec128 auVar37;
  Vec128 auVar38;
  Vec128 auVar39;
  u32 in_vuI;
  u64 uStack_38;
  Vec128 auStack_30;
  Vec128 auStack_20;
  u64 uStack_8;
  
  iVar1 = *(int *)(param_5 + 8);
  iVar2 = param_1[1];
  pauVar16 = *(u8 (**) [16])(param_5 + 4);
  puVar15 = *(u64 **)(param_5 + 0x1c);
  iVar3 = *(int *)(param_5 + 0x20);
  pauVar14 = (u8 (*) [16])*param_1;
  if (iVar1 == iVar2) {
    FlushCache(0);
    uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
    }
    uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
      do {
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar5 & 0x100) != 0);
    }
    pauVar18 = (u8 (*) [12])param_2;
    DAT_70003f50 = *(u32 *)*pauVar18;
    DAT_70003f54 = *(u32 *)(*pauVar18 + 4);
    DAT_70003f58 = *(u32 *)(*pauVar18 + 8);
    pauVar17 = (u8 (*) [12])param_3;
    DAT_70003f60 = *(u32 *)*pauVar17;
    DAT_70003f64 = *(u32 *)(*pauVar17 + 4);
    DAT_70003f68 = *(u32 *)(*pauVar17 + 8);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    uVar19 = 0x3f000000;
    _ctc2(0x3f000000);
    _vnop();
    _vnop();
    auVar20._12_4_ = uRam70003f5c;
    auVar20._0_4_ = *(u32 *)*pauVar18;
    auVar20._4_4_ = *(u32 *)(*pauVar18 + 4);
    auVar20._8_4_ = *(u32 *)(*pauVar18 + 8 + 8);
    auVar20 = _lqc2(auVar20);
    auVar21._12_4_ = DAT_70003f6c;
    auVar21._0_4_ = *(u32 *)*pauVar17;
    auVar21._4_4_ = *(u32 *)(*pauVar17 + 4);
    auVar21._8_4_ = *(u32 *)(*pauVar17 + 8 + 8);
    auVar21 = _lqc2(auVar21);
    auVar20 = _vmuli(auVar20,in_vuI);
    auVar21 = _vmuli(auVar21,in_vuI);
    EI();
    if (0xb7 < param_4) {
      do {
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar15);
        REG_DMAC_9_SPR_TO_QWC = 0x5c;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x5c0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar16);
        REG_DMAC_9_SPR_TO_QWC = 0xb8;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        pauVar9 = (u8 (*) [16])(u8 *)DAT_70000000;
        iVar12 = 0;
        pauVar6 = (u8 (*) [16])(u8 *)DAT_70001140;
        pauVar8 = (u8 (*) [16])(u8 *)DAT_700005c0;
        do {
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar22 = _lqc2(*pauVar9);
          auVar23 = _vmulbc(auVar20,auVar22);
          auVar24 = _vmulbc(auVar21,auVar22);
          auVar29 = _vmulbc(auVar20,auVar22);
          auVar30 = _vmulbc(auVar21,auVar22);
          auVar25 = _lqc2(*pauVar8);
          auVar31 = _lqc2(pauVar8[1]);
          auVar34 = _lqc2(pauVar8[2]);
          auVar22 = _lqc2(pauVar9[1]);
          auVar38 = _lqc2(pauVar8[3]);
          auVar32 = _vmulbc(auVar20,auVar22);
          auVar33 = _vmulbc(auVar21,auVar22);
          auVar36 = _vmulbc(auVar20,auVar22);
          auVar37 = _vmulbc(auVar21,auVar22);
          auVar22 = _vsub(auVar25,auVar23);
          auVar26 = _vadd(auVar25,auVar23);
          auVar27 = _vadd(auVar25,auVar23);
          auVar28 = _vsub(auVar25,auVar23);
          auVar22 = _vsub(auVar22,auVar24);
          auVar23 = _vsub(auVar26,auVar24);
          auVar25 = _vadd(auVar27,auVar24);
          auVar24 = _vadd(auVar28,auVar24);
          auVar26 = _vsub(auVar31,auVar29);
          auVar27 = _vadd(auVar31,auVar29);
          auVar28 = _vadd(auVar31,auVar29);
          auVar29 = _vsub(auVar31,auVar29);
          auVar26 = _vsub(auVar26,auVar30);
          auVar27 = _vsub(auVar27,auVar30);
          auVar28 = _vadd(auVar28,auVar30);
          auVar29 = _vadd(auVar29,auVar30);
          auVar30 = _vsub(auVar34,auVar32);
          auVar31 = _vadd(auVar34,auVar32);
          auVar35 = _vadd(auVar34,auVar32);
          auVar34 = _vsub(auVar34,auVar32);
          auVar30 = _vsub(auVar30,auVar33);
          auVar31 = _vsub(auVar31,auVar33);
          auVar32 = _vadd(auVar35,auVar33);
          auVar33 = _vadd(auVar34,auVar33);
          auVar34 = _vsub(auVar38,auVar36);
          auVar35 = _vadd(auVar38,auVar36);
          auVar39 = _vadd(auVar38,auVar36);
          auVar38 = _vsub(auVar38,auVar36);
          auVar34 = _vsub(auVar34,auVar37);
          auVar35 = _vsub(auVar35,auVar37);
          auVar36 = _vadd(auVar39,auVar37);
          auVar37 = _vadd(auVar38,auVar37);
          auVar22 = _sqc2(auVar22);
          *(Vec128 *)pauVar6 = auVar22;
          auVar22 = _sqc2(auVar23);
          ((Vec128 *)pauVar6)[1] = auVar22;
          auVar22 = _sqc2(auVar25);
          ((Vec128 *)pauVar6)[2] = auVar22;
          auVar22 = _sqc2(auVar24);
          ((Vec128 *)pauVar6)[3] = auVar22;
          auVar22 = _sqc2(auVar26);
          ((Vec128 *)pauVar6)[4] = auVar22;
          auVar22 = _sqc2(auVar27);
          ((Vec128 *)pauVar6)[5] = auVar22;
          auVar22 = _sqc2(auVar28);
          ((Vec128 *)pauVar6)[6] = auVar22;
          auVar22 = _sqc2(auVar29);
          ((Vec128 *)pauVar6)[7] = auVar22;
          auVar22 = _sqc2(auVar30);
          ((Vec128 *)pauVar6)[8] = auVar22;
          auVar22 = _sqc2(auVar31);
          ((Vec128 *)pauVar6)[9] = auVar22;
          auVar22 = _sqc2(auVar32);
          ((Vec128 *)pauVar6)[10] = auVar22;
          auVar22 = _sqc2(auVar33);
          ((Vec128 *)pauVar6)[0xb] = auVar22;
          auVar22 = _sqc2(auVar34);
          ((Vec128 *)pauVar6)[0xc] = auVar22;
          auVar22 = _sqc2(auVar35);
          ((Vec128 *)pauVar6)[0xd] = auVar22;
          auVar22 = _sqc2(auVar36);
          ((Vec128 *)pauVar6)[0xe] = auVar22;
          auVar22 = _sqc2(auVar37);
          ((Vec128 *)pauVar6)[0xf] = auVar22;
          EI();
          iVar12 = iVar12 + 4;
          pauVar9 = pauVar9 + 2;
          pauVar6 = pauVar6 + 0x10;
          pauVar8 = pauVar8 + 4;
        } while (iVar12 < 0xb8);
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = 0x1140;
        REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar14);
        REG_DMAC_8_SPR_FROM_QWC = 0x2e0;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        param_4 = param_4 + -0xb8;
        pauVar16 = pauVar16 + 0xb8;
        pauVar14 = pauVar14 + 0x2e0;
        puVar15 = puVar15 + 0xb8;
      } while (0xb7 < param_4);
    }
    if (3 < param_4) {
      iVar12 = param_4;
      if (param_4 < 0) {
        iVar12 = param_4 + 3;
      }
      iVar12 = iVar12 >> 2;
      iVar13 = iVar12 * 4;
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      iVar10 = iVar13 >> 1;
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar15);
      iVar11 = iVar10;
      if (iVar13 < 0) {
        iVar11 = iVar13 + 1 >> 1;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar11;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = iVar11 << 4;
      REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar16);
      REG_DMAC_9_SPR_TO_QWC = iVar13;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      pauVar6 = (u8 (*) [16])(u8 *)DAT_70000000;
      iVar7 = iVar10;
      if (iVar13 < 0) {
        iVar7 = iVar13 + 1 >> 1;
      }
      pauVar9 = (u8 (*) [16])(iVar11 << 4 | 0x70000000);
      pauVar8 = (u8 (*) [16])((iVar13 + iVar7) * 0x10 | 0x70000000);
      iVar11 = 0;
      if (0 < iVar13) {
        do {
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar22 = _lqc2(*pauVar6);
          auVar23 = _vmulbc(auVar20,auVar22);
          auVar24 = _vmulbc(auVar21,auVar22);
          auVar29 = _vmulbc(auVar20,auVar22);
          auVar30 = _vmulbc(auVar21,auVar22);
          auVar25 = _lqc2(*pauVar9);
          auVar31 = _lqc2(pauVar9[1]);
          auVar34 = _lqc2(pauVar9[2]);
          auVar22 = _lqc2(pauVar6[1]);
          auVar38 = _lqc2(pauVar9[3]);
          auVar32 = _vmulbc(auVar20,auVar22);
          auVar33 = _vmulbc(auVar21,auVar22);
          auVar36 = _vmulbc(auVar20,auVar22);
          auVar37 = _vmulbc(auVar21,auVar22);
          auVar22 = _vsub(auVar25,auVar23);
          auVar26 = _vadd(auVar25,auVar23);
          auVar27 = _vadd(auVar25,auVar23);
          auVar28 = _vsub(auVar25,auVar23);
          auVar22 = _vsub(auVar22,auVar24);
          auVar23 = _vsub(auVar26,auVar24);
          auVar25 = _vadd(auVar27,auVar24);
          auVar24 = _vadd(auVar28,auVar24);
          auVar26 = _vsub(auVar31,auVar29);
          auVar27 = _vadd(auVar31,auVar29);
          auVar28 = _vadd(auVar31,auVar29);
          auVar29 = _vsub(auVar31,auVar29);
          auVar26 = _vsub(auVar26,auVar30);
          auVar27 = _vsub(auVar27,auVar30);
          auVar28 = _vadd(auVar28,auVar30);
          auVar29 = _vadd(auVar29,auVar30);
          auVar30 = _vsub(auVar34,auVar32);
          auVar31 = _vadd(auVar34,auVar32);
          auVar35 = _vadd(auVar34,auVar32);
          auVar34 = _vsub(auVar34,auVar32);
          auVar30 = _vsub(auVar30,auVar33);
          auVar31 = _vsub(auVar31,auVar33);
          auVar32 = _vadd(auVar35,auVar33);
          auVar33 = _vadd(auVar34,auVar33);
          auVar34 = _vsub(auVar38,auVar36);
          auVar35 = _vadd(auVar38,auVar36);
          auVar39 = _vadd(auVar38,auVar36);
          auVar38 = _vsub(auVar38,auVar36);
          auVar34 = _vsub(auVar34,auVar37);
          auVar35 = _vsub(auVar35,auVar37);
          auVar36 = _vadd(auVar39,auVar37);
          auVar37 = _vadd(auVar38,auVar37);
          auVar22 = _sqc2(auVar22);
          *(Vec128 *)pauVar8 = auVar22;
          auVar22 = _sqc2(auVar23);
          ((Vec128 *)pauVar8)[1] = auVar22;
          auVar22 = _sqc2(auVar25);
          ((Vec128 *)pauVar8)[2] = auVar22;
          auVar22 = _sqc2(auVar24);
          ((Vec128 *)pauVar8)[3] = auVar22;
          auVar22 = _sqc2(auVar26);
          ((Vec128 *)pauVar8)[4] = auVar22;
          auVar22 = _sqc2(auVar27);
          ((Vec128 *)pauVar8)[5] = auVar22;
          auVar22 = _sqc2(auVar28);
          ((Vec128 *)pauVar8)[6] = auVar22;
          auVar22 = _sqc2(auVar29);
          ((Vec128 *)pauVar8)[7] = auVar22;
          auVar22 = _sqc2(auVar30);
          ((Vec128 *)pauVar8)[8] = auVar22;
          auVar22 = _sqc2(auVar31);
          ((Vec128 *)pauVar8)[9] = auVar22;
          auVar22 = _sqc2(auVar32);
          ((Vec128 *)pauVar8)[10] = auVar22;
          auVar22 = _sqc2(auVar33);
          ((Vec128 *)pauVar8)[0xb] = auVar22;
          auVar22 = _sqc2(auVar34);
          ((Vec128 *)pauVar8)[0xc] = auVar22;
          auVar22 = _sqc2(auVar35);
          ((Vec128 *)pauVar8)[0xd] = auVar22;
          auVar22 = _sqc2(auVar36);
          ((Vec128 *)pauVar8)[0xe] = auVar22;
          auVar22 = _sqc2(auVar37);
          ((Vec128 *)pauVar8)[0xf] = auVar22;
          EI();
          iVar11 = iVar11 + 4;
          pauVar6 = pauVar6 + 2;
          pauVar8 = pauVar8 + 0x10;
          pauVar9 = pauVar9 + 4;
        } while (iVar11 < iVar13);
      }
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x100;
      if (iVar13 < 0) {
        iVar10 = iVar13 + 1 >> 1;
      }
      REG_DMAC_8_SPR_FROM_SADR = (iVar13 + iVar10) * 0x10;
      REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar14);
      REG_DMAC_8_SPR_FROM_QWC = iVar12 << 4;
      REG_DMAC_8_SPR_FROM_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      puVar15 = puVar15 + iVar10 * 2;
      pauVar14 = pauVar14 + iVar12 * 0x10;
      param_4 = param_4 + iVar12 * -4;
      pauVar16 = pauVar16 + iVar12 * 4;
    }
    iVar12 = 0;
    if (0 < param_4) {
      do {
        uVar19 = *(u32 *)((int)puVar15 + 4);
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar23._8_8_ = uStack_8;
        auVar23._0_8_ = *puVar15;
        auVar22 = _lqc2(auVar23);
        auVar23 = _vmulbc(auVar20,auVar22);
        auVar22 = _vmulbc(auVar21,auVar22);
        auVar24 = _lqc2(*pauVar16);
        auVar25 = _vsub(auVar24,auVar23);
        auVar26 = _vadd(auVar24,auVar23);
        auVar27 = _vadd(auVar24,auVar23);
        auVar28 = _vsub(auVar24,auVar23);
        auVar23 = _vsub(auVar25,auVar22);
        auVar24 = _vsub(auVar26,auVar22);
        auVar25 = _vadd(auVar27,auVar22);
        auVar26 = _vadd(auVar28,auVar22);
        auVar22 = _sqc2(auVar23);
        *(Vec128 *)pauVar14 = auVar22;
        auVar22 = _sqc2(auVar24);
        ((Vec128 *)pauVar14)[1] = auVar22;
        auVar22 = _sqc2(auVar25);
        ((Vec128 *)pauVar14)[2] = auVar22;
        auVar22 = _sqc2(auVar26);
        ((Vec128 *)pauVar14)[3] = auVar22;
        EI();
        iVar12 = iVar12 + 1;
        puVar15 = (u64 *)((int)puVar15 + iVar3);
        pauVar14 = (u8 (*) [16])(*pauVar14 + iVar2 * 4);
        pauVar16 = (u8 (*) [16])(*pauVar16 + iVar1);
      } while (iVar12 < param_4);
    }
  }
  else {
    ((code)FUN_00521250)(auStack_20,param_2,0xc);
    ((code)FUN_00521250)(auStack_30,param_3,0xc);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    uVar19 = 0x3f000000;
    _ctc2(0x3f000000);
    _vnop();
    _vnop();
    auVar20 = _lqc2(auStack_20);
    auVar21 = _lqc2(auStack_30);
    auVar20 = _vmuli(auVar20,in_vuI);
    auVar21 = _vmuli(auVar21,in_vuI);
    EI();
    iVar12 = 0;
    if (0 < param_4) {
      do {
        uVar19 = *(u32 *)((int)puVar15 + 4);
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar22._8_8_ = uStack_38;
        auVar22._0_8_ = *puVar15;
        auVar22 = _lqc2(auVar22);
        auVar23 = _vmulbc(auVar20,auVar22);
        auVar22 = _vmulbc(auVar21,auVar22);
        auVar24 = _lqc2(*pauVar16);
        auVar25 = _vsub(auVar24,auVar23);
        auVar26 = _vadd(auVar24,auVar23);
        auVar27 = _vadd(auVar24,auVar23);
        auVar28 = _vsub(auVar24,auVar23);
        auVar23 = _vsub(auVar25,auVar22);
        auVar24 = _vsub(auVar26,auVar22);
        auVar25 = _vadd(auVar27,auVar22);
        auVar26 = _vadd(auVar28,auVar22);
        auVar22 = _sqc2(auVar23);
        *(Vec128 *)pauVar14 = auVar22;
        auVar22 = _sqc2(auVar24);
        ((Vec128 *)pauVar14)[1] = auVar22;
        auVar22 = _sqc2(auVar25);
        ((Vec128 *)pauVar14)[2] = auVar22;
        auVar22 = _sqc2(auVar26);
        ((Vec128 *)pauVar14)[3] = auVar22;
        EI();
        iVar12 = iVar12 + 1;
        puVar15 = (u64 *)((int)puVar15 + iVar3);
        pauVar14 = (u8 (*) [16])(*pauVar14 + iVar2 * 4);
        pauVar16 = (u8 (*) [16])(*pauVar16 + iVar1);
      } while (iVar12 < param_4);
    }
  }
  return uVar19;
}

// FUN_0047E9E0 NONMATCHING

u32 FUN_0047e9e0(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  u32 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  u8 (*pauVar11) [16];
  u32 *puVar12;
  u8 (*pauVar13) [16];
  u32 *puVar14;
  u8 (*pauVar15) [16];
  u64 *puVar16;
  int iVar17;
  u8 (*pauVar18) [16];
  u8 (*pauVar19) [16];
  u32 uVar20;
  Vec128 in_vf0;
  Vec128 auVar21;
  Vec128 auVar22;
  Vec128 auVar23;
  Vec128 auVar24;
  Vec128 auVar25;
  Vec128 auVar26;
  Vec128 auVar27;
  Vec128 auVar28;
  Vec128 in_vf10;
  Vec128 extraout_vf10;
  Vec128 auVar29;
  Vec128 in_vf11;
  Vec128 extraout_vf11;
  Vec128 auVar30;
  Vec128 in_vf12;
  Vec128 extraout_vf12;
  Vec128 auVar31;
  Vec128 in_vf13;
  Vec128 extraout_vf13;
  Vec128 auVar32;
  Vec128 auVar33;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  u32 in_vuI;
  u32 uStack_14;
  u32 uStack_4;
  
  iVar1 = *(int *)(param_5 + 8);
  pauVar13 = (u8 (*) [16])*param_1;
  pauVar15 = *(u8 (**) [16])(param_5 + 4);
  puVar14 = *(u32 **)(param_5 + 0x34);
  puVar12 = *(u32 **)(param_5 + 0x1c);
  iVar2 = *(int *)(param_5 + 0x38);
  iVar3 = *(int *)(param_5 + 0x20);
  iVar4 = param_1[1];
  if (iVar1 == iVar4) {
    FlushCache(0);
    uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar6 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar5 = getCopCondition(0,0);
      } while (cVar5 == '\0');
    }
    uVar6 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar6 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar5 = getCopCondition(0,0);
      } while (cVar5 == '\0');
      do {
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar6 & 0x100) != 0);
    }
    DAT_70003f40 = *param_2 * 0.5;
    DAT_70003f44 = param_2[1] * 0.5;
    DAT_70003f48 = param_2[2] * 0.5;
    DAT_70003f50 = *param_3 * 0.5;
    DAT_70003f54 = param_3[1] * 0.5;
    DAT_70003f58 = param_3[2] * 0.5;
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    _ctc2(0x3fc90fdb);
    _vnop();
    _vnop();
    auVar29 = _vaddi(extraout_vf10,in_vuI);
    _ctc2(0x40490fdb);
    _vnop();
    _vnop();
    auVar29 = _vaddi(auVar29,in_vuI);
    _ctc2(0x40090fdb);
    _vnop();
    _vnop();
    auVar29 = _vaddi(auVar29,in_vuI);
    _ctc2(0xc0490fdb);
    _vnop();
    _vnop();
    auVar30 = _vaddi(extraout_vf11,in_vuI);
    uVar20 = 0xc08487ed;
    _ctc2(0xc08487ed);
    _vnop();
    _vnop();
    auVar30 = _vaddi(auVar30,in_vuI);
    _ctc2(0xb94fb21f);
    _vnop();
    _vnop();
    auVar30 = _vaddi(auVar30,in_vuI);
    _ctc2(0xbe2aaaa4);
    _vnop();
    _vnop();
    auVar31 = _vaddi(extraout_vf12,in_vuI);
    _ctc2(0x3c08873e);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0x362e9c14);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0x3f800000);
    _vnop();
    _vnop();
    auVar32 = _vaddi(extraout_vf13,in_vuI);
    EI();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    auVar25._4_4_ = DAT_70003f44;
    auVar25._0_4_ = DAT_70003f40;
    auVar25._8_4_ = DAT_70003f48;
    auVar25._12_4_ = DAT_70003f4c;
    auVar27 = _lqc2(auVar25);
    auVar22._4_4_ = DAT_70003f54;
    auVar22._0_4_ = DAT_70003f50;
    auVar22._8_4_ = DAT_70003f58;
    auVar22._12_4_ = uRam70003f5c;
    auVar28 = _lqc2(auVar22);
    EI();
    if (0xaf < param_4) {
      do {
        uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
        }
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar14);
        REG_DMAC_9_SPR_TO_QWC = 0x2c;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x2c0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar12);
        REG_DMAC_9_SPR_TO_QWC = 0x58;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x840;
        REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar15);
        REG_DMAC_9_SPR_TO_QWC = 0xb0;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        puVar16 = (u64 *)(u8 *)DAT_70000000;
        iVar17 = 0;
        pauVar11 = (u8 (*) [16])(u8 *)DAT_70001340;
        pauVar18 = (u8 (*) [16])(u8 *)DAT_70000840;
        pauVar19 = (u8 (*) [16])(u8 *)DAT_700002c0;
        do {
          DAT_70003f60 = *(u32 *)puVar16;
          DAT_70003f64 = *(u32 *)((int)puVar16 + 4);
          DAT_70003f68 = *(u32 *)puVar16;
          uVar20 = *(u32 *)((int)puVar16 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar23._8_4_ = DAT_70003f68;
          auVar23._0_8_ = *puVar16;
          auVar23._12_4_ = uVar20;
          auVar21 = _lqc2(auVar23);
          auVar25 = _vabs(auVar21);
          _vaddabc(in_vf0,auVar29);
          _vmsubbc(auVar25,in_vf0);
          _vaddabc(in_vf0,auVar29);
          _vaddabc(in_vf0,auVar29);
          auVar25 = _vmsubbc(auVar21,in_vf0);
          _vaddabc(in_vf0,auVar30);
          _vaddabc(in_vf0,auVar30);
          auVar22 = _vmsubbc(auVar21,in_vf0);
          auVar21 = _vmini(auVar21,auVar25);
          auVar26 = _vmax(auVar21,auVar22);
          auVar21 = _vmul(auVar26,auVar26);
          auVar24 = _vmulbc(auVar26,auVar30);
          auVar22 = _vmulbc(auVar26,auVar31);
          auVar23 = _vmulbc(auVar26,auVar31);
          auVar25 = _vmul(auVar21,auVar21);
          auVar24 = _vmul(auVar24,auVar21);
          _vmula(auVar22,auVar21);
          auVar22 = _vmulbc(auVar26,auVar31);
          auVar21 = _vmul(auVar25,auVar25);
          _vmadda(auVar24,auVar25);
          _vmadda(auVar23,auVar25);
          _vmaddabc(auVar26,auVar32);
          auVar21 = _vmadd(auVar22,auVar21);
          auVar24 = _lqc2(*pauVar18);
          auVar35 = _lqc2(pauVar18[1]);
          auVar25 = _lqc2(*pauVar19);
          _vmulabc(auVar27,auVar21);
          auVar22 = _vmsubbc(auVar28,auVar21);
          _vmulabc(auVar28,auVar21);
          auVar23 = _vmaddbc(auVar27,auVar21);
          _vmulabc(auVar27,auVar21);
          auVar26 = _vmsubbc(auVar28,auVar21);
          _vmulabc(auVar28,auVar21);
          auVar34 = _vmaddbc(auVar27,auVar21);
          auVar21 = _vmulbc(auVar22,auVar25);
          auVar22 = _vmulbc(auVar23,auVar25);
          auVar33 = _vmulbc(auVar26,auVar25);
          auVar34 = _vmulbc(auVar34,auVar25);
          auVar25 = _vsub(auVar24,auVar21);
          auVar23 = _vadd(auVar24,auVar21);
          auVar26 = _vadd(auVar24,auVar21);
          auVar24 = _vsub(auVar24,auVar21);
          auVar21 = _vsub(auVar25,auVar22);
          auVar25 = _vsub(auVar23,auVar22);
          auVar23 = _vadd(auVar26,auVar22);
          auVar22 = _vadd(auVar24,auVar22);
          auVar24 = _vsub(auVar35,auVar33);
          auVar26 = _vadd(auVar35,auVar33);
          auVar36 = _vadd(auVar35,auVar33);
          auVar35 = _vsub(auVar35,auVar33);
          auVar24 = _vsub(auVar24,auVar34);
          auVar26 = _vsub(auVar26,auVar34);
          auVar33 = _vadd(auVar36,auVar34);
          auVar34 = _vadd(auVar35,auVar34);
          auVar21 = _sqc2(auVar21);
          DAT_70003f6c = uVar20;
          *(Vec128 *)pauVar11 = auVar21;
          auVar21 = _sqc2(auVar25);
          ((Vec128 *)pauVar11)[1] = auVar21;
          auVar21 = _sqc2(auVar23);
          ((Vec128 *)pauVar11)[2] = auVar21;
          auVar21 = _sqc2(auVar22);
          ((Vec128 *)pauVar11)[3] = auVar21;
          auVar21 = _sqc2(auVar24);
          ((Vec128 *)pauVar11)[4] = auVar21;
          auVar21 = _sqc2(auVar26);
          ((Vec128 *)pauVar11)[5] = auVar21;
          auVar21 = _sqc2(auVar33);
          ((Vec128 *)pauVar11)[6] = auVar21;
          auVar21 = _sqc2(auVar34);
          ((Vec128 *)pauVar11)[7] = auVar21;
          EI();
          iVar17 = iVar17 + 2;
          pauVar18 = pauVar18 + 2;
          pauVar19 = pauVar19 + 1;
          puVar16 = puVar16 + 1;
          pauVar11 = pauVar11 + 8;
        } while (iVar17 < 0xb0);
        uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
        }
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = 0x1340;
        REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar13);
        REG_DMAC_8_SPR_FROM_QWC = 0x2c0;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        param_4 = param_4 + -0xb0;
        pauVar15 = pauVar15 + 0xb0;
        pauVar13 = pauVar13 + 0x2c0;
        puVar14 = puVar14 + 0xb0;
        puVar12 = puVar12 + 0x160;
      } while (0xaf < param_4);
    }
    if (3 < param_4) {
      iVar17 = param_4;
      if (param_4 < 0) {
        iVar17 = param_4 + 3;
      }
      iVar17 = iVar17 >> 2;
      uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
      iVar7 = iVar17 * 4;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
      }
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      iVar8 = iVar7 >> 2;
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar14);
      iVar9 = iVar8;
      if (iVar7 < 0) {
        iVar9 = iVar7 + 3 >> 2;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar9;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0x2c0;
      iVar10 = iVar7 >> 1;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar12);
      iVar9 = iVar10;
      if (iVar7 < 0) {
        iVar9 = iVar7 + 1 >> 1;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar9;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0x840;
      REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar15);
      REG_DMAC_9_SPR_TO_QWC = iVar7;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      puVar16 = (u64 *)(u8 *)DAT_70000000;
      pauVar19 = (u8 (*) [16])(u8 *)DAT_700002c0;
      pauVar18 = (u8 (*) [16])(u8 *)DAT_70000840;
      pauVar11 = (u8 (*) [16])(u8 *)DAT_70001340;
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          DAT_70003f60 = *(u32 *)puVar16;
          DAT_70003f64 = *(u32 *)((int)puVar16 + 4);
          DAT_70003f68 = *(u32 *)puVar16;
          uVar20 = *(u32 *)((int)puVar16 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar24._8_4_ = DAT_70003f68;
          auVar24._0_8_ = *puVar16;
          auVar24._12_4_ = uVar20;
          auVar21 = _lqc2(auVar24);
          auVar25 = _vabs(auVar21);
          _vaddabc(in_vf0,auVar29);
          _vmsubbc(auVar25,in_vf0);
          _vaddabc(in_vf0,auVar29);
          _vaddabc(in_vf0,auVar29);
          auVar25 = _vmsubbc(auVar21,in_vf0);
          _vaddabc(in_vf0,auVar30);
          _vaddabc(in_vf0,auVar30);
          auVar22 = _vmsubbc(auVar21,in_vf0);
          auVar21 = _vmini(auVar21,auVar25);
          auVar26 = _vmax(auVar21,auVar22);
          auVar21 = _vmul(auVar26,auVar26);
          auVar24 = _vmulbc(auVar26,auVar30);
          auVar22 = _vmulbc(auVar26,auVar31);
          auVar23 = _vmulbc(auVar26,auVar31);
          auVar25 = _vmul(auVar21,auVar21);
          auVar24 = _vmul(auVar24,auVar21);
          _vmula(auVar22,auVar21);
          auVar22 = _vmulbc(auVar26,auVar31);
          auVar21 = _vmul(auVar25,auVar25);
          _vmadda(auVar24,auVar25);
          _vmadda(auVar23,auVar25);
          _vmaddabc(auVar26,auVar32);
          auVar21 = _vmadd(auVar22,auVar21);
          auVar24 = _lqc2(*pauVar18);
          auVar35 = _lqc2(pauVar18[1]);
          auVar25 = _lqc2(*pauVar19);
          _vmulabc(auVar27,auVar21);
          auVar22 = _vmsubbc(auVar28,auVar21);
          _vmulabc(auVar28,auVar21);
          auVar23 = _vmaddbc(auVar27,auVar21);
          _vmulabc(auVar27,auVar21);
          auVar26 = _vmsubbc(auVar28,auVar21);
          _vmulabc(auVar28,auVar21);
          auVar34 = _vmaddbc(auVar27,auVar21);
          auVar21 = _vmulbc(auVar22,auVar25);
          auVar22 = _vmulbc(auVar23,auVar25);
          auVar33 = _vmulbc(auVar26,auVar25);
          auVar34 = _vmulbc(auVar34,auVar25);
          auVar25 = _vsub(auVar24,auVar21);
          auVar23 = _vadd(auVar24,auVar21);
          auVar26 = _vadd(auVar24,auVar21);
          auVar24 = _vsub(auVar24,auVar21);
          auVar21 = _vsub(auVar25,auVar22);
          auVar25 = _vsub(auVar23,auVar22);
          auVar23 = _vadd(auVar26,auVar22);
          auVar22 = _vadd(auVar24,auVar22);
          auVar24 = _vsub(auVar35,auVar33);
          auVar26 = _vadd(auVar35,auVar33);
          auVar36 = _vadd(auVar35,auVar33);
          auVar35 = _vsub(auVar35,auVar33);
          auVar24 = _vsub(auVar24,auVar34);
          auVar26 = _vsub(auVar26,auVar34);
          auVar33 = _vadd(auVar36,auVar34);
          auVar34 = _vadd(auVar35,auVar34);
          auVar21 = _sqc2(auVar21);
          DAT_70003f6c = uVar20;
          *(Vec128 *)pauVar11 = auVar21;
          auVar21 = _sqc2(auVar25);
          ((Vec128 *)pauVar11)[1] = auVar21;
          auVar21 = _sqc2(auVar23);
          ((Vec128 *)pauVar11)[2] = auVar21;
          auVar21 = _sqc2(auVar22);
          ((Vec128 *)pauVar11)[3] = auVar21;
          auVar21 = _sqc2(auVar24);
          ((Vec128 *)pauVar11)[4] = auVar21;
          auVar21 = _sqc2(auVar26);
          ((Vec128 *)pauVar11)[5] = auVar21;
          auVar21 = _sqc2(auVar33);
          ((Vec128 *)pauVar11)[6] = auVar21;
          auVar21 = _sqc2(auVar34);
          ((Vec128 *)pauVar11)[7] = auVar21;
          EI();
          iVar9 = iVar9 + 2;
          pauVar18 = pauVar18 + 2;
          pauVar19 = pauVar19 + 1;
          puVar16 = puVar16 + 1;
          pauVar11 = pauVar11 + 8;
        } while (iVar9 < iVar7);
      }
      uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
      }
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x100;
      REG_DMAC_8_SPR_FROM_SADR = 0x1340;
      REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar13);
      REG_DMAC_8_SPR_FROM_QWC = iVar17 << 4;
      REG_DMAC_8_SPR_FROM_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      pauVar13 = pauVar13 + iVar17 * 0x10;
      pauVar15 = pauVar15 + iVar17 * 4;
      if (iVar7 < 0) {
        iVar8 = iVar7 + 3 >> 2;
      }
      puVar14 = puVar14 + iVar8 * 4;
      if (iVar7 < 0) {
        iVar10 = iVar7 + 1 >> 1;
      }
      param_4 = param_4 + iVar17 * -4;
      puVar12 = puVar12 + iVar10 * 4;
    }
    iVar17 = 0;
    if (0 < param_4) {
      do {
        DAT_70003f60 = *puVar14;
        DAT_70003f64 = *puVar12;
        DAT_70003f68 = *puVar14;
        uVar20 = puVar12[1];
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar26._4_4_ = DAT_70003f64;
        auVar26._0_4_ = DAT_70003f60;
        auVar26._8_4_ = DAT_70003f68;
        auVar26._12_4_ = uVar20;
        auVar21 = _lqc2(auVar26);
        auVar25 = _vabs(auVar21);
        _vaddabc(in_vf0,auVar29);
        _vmsubbc(auVar25,in_vf0);
        _vaddabc(in_vf0,auVar29);
        _vaddabc(in_vf0,auVar29);
        auVar25 = _vmsubbc(auVar21,in_vf0);
        _vaddabc(in_vf0,auVar30);
        _vaddabc(in_vf0,auVar30);
        auVar22 = _vmsubbc(auVar21,in_vf0);
        auVar25 = _vmini(auVar21,auVar25);
        auVar33 = _vmax(auVar25,auVar22);
        auVar25 = _vmul(auVar33,auVar33);
        auVar26 = _vmulbc(auVar33,auVar30);
        auVar23 = _vmulbc(auVar33,auVar31);
        auVar24 = _vmulbc(auVar33,auVar31);
        auVar22 = _vmul(auVar25,auVar25);
        auVar26 = _vmul(auVar26,auVar25);
        _vmula(auVar23,auVar25);
        auVar23 = _vmulbc(auVar33,auVar31);
        auVar25 = _vmul(auVar22,auVar22);
        _vmadda(auVar26,auVar22);
        _vmadda(auVar24,auVar22);
        _vmaddabc(auVar33,auVar32);
        auVar25 = _vmadd(auVar23,auVar25);
        auVar23 = _lqc2(*pauVar15);
        _vmulabc(auVar27,auVar25);
        auVar22 = _vmsubbc(auVar28,auVar25);
        auVar22 = _vmulbc(auVar22,auVar21);
        _vmulabc(auVar28,auVar25);
        auVar25 = _vmaddbc(auVar27,auVar25);
        auVar21 = _vmulbc(auVar25,auVar21);
        auVar25 = _vsub(auVar23,auVar22);
        auVar24 = _vadd(auVar23,auVar22);
        auVar26 = _vadd(auVar23,auVar22);
        auVar33 = _vsub(auVar23,auVar22);
        auVar25 = _vsub(auVar25,auVar21);
        auVar22 = _vsub(auVar24,auVar21);
        auVar23 = _vadd(auVar26,auVar21);
        auVar24 = _vadd(auVar33,auVar21);
        auVar21 = _sqc2(auVar25);
        DAT_70003f6c = uVar20;
        *(Vec128 *)pauVar13 = auVar21;
        auVar21 = _sqc2(auVar22);
        ((Vec128 *)pauVar13)[1] = auVar21;
        auVar21 = _sqc2(auVar23);
        ((Vec128 *)pauVar13)[2] = auVar21;
        auVar21 = _sqc2(auVar24);
        ((Vec128 *)pauVar13)[3] = auVar21;
        EI();
        iVar17 = iVar17 + 1;
        pauVar15 = (u8 (*) [16])(*pauVar15 + iVar1);
        puVar12 = (u32 *)((int)puVar12 + iVar3);
        puVar14 = (u32 *)((int)puVar14 + iVar2);
        pauVar13 = (u8 (*) [16])(*pauVar13 + iVar4 * 4);
      } while (iVar17 < param_4);
    }
  }
  else {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    _ctc2(0x3fc90fdb);
    _vnop();
    _vnop();
    auVar29 = _vaddi(in_vf10,in_vuI);
    _ctc2(0x40490fdb);
    _vnop();
    _vnop();
    auVar29 = _vaddi(auVar29,in_vuI);
    _ctc2(0x40090fdb);
    _vnop();
    _vnop();
    auVar29 = _vaddi(auVar29,in_vuI);
    _ctc2(0xc0490fdb);
    _vnop();
    _vnop();
    auVar30 = _vaddi(in_vf11,in_vuI);
    uVar20 = 0xc08487ed;
    _ctc2(0xc08487ed);
    _vnop();
    _vnop();
    auVar30 = _vaddi(auVar30,in_vuI);
    _ctc2(0xb94fb21f);
    _vnop();
    _vnop();
    auVar30 = _vaddi(auVar30,in_vuI);
    _ctc2(0xbe2aaaa4);
    _vnop();
    _vnop();
    auVar31 = _vaddi(in_vf12,in_vuI);
    _ctc2(0x3c08873e);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0x362e9c14);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0x3f800000);
    _vnop();
    _vnop();
    auVar32 = _vaddi(in_vf13,in_vuI);
    EI();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    auVar28._4_4_ = param_2[1] * 0.5;
    auVar28._0_4_ = *param_2 * 0.5;
    auVar28._8_4_ = param_2[2] * 0.5;
    auVar28._12_4_ = uStack_4;
    auVar28 = _lqc2(auVar28);
    auVar27._4_4_ = param_3[1] * 0.5;
    auVar27._0_4_ = *param_3 * 0.5;
    auVar27._8_4_ = param_3[2] * 0.5;
    auVar27._12_4_ = uStack_14;
    auVar27 = _lqc2(auVar27);
    EI();
    iVar17 = 0;
    if (0 < param_4) {
      do {
        uVar20 = puVar12[1];
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar21._4_4_ = *puVar12;
        auVar21._0_4_ = *puVar14;
        auVar21._8_4_ = *puVar14;
        auVar21._12_4_ = uVar20;
        auVar21 = _lqc2(auVar21);
        auVar25 = _vabs(auVar21);
        _vaddabc(in_vf0,auVar29);
        _vmsubbc(auVar25,in_vf0);
        _vaddabc(in_vf0,auVar29);
        _vaddabc(in_vf0,auVar29);
        auVar25 = _vmsubbc(auVar21,in_vf0);
        _vaddabc(in_vf0,auVar30);
        _vaddabc(in_vf0,auVar30);
        auVar22 = _vmsubbc(auVar21,in_vf0);
        auVar25 = _vmini(auVar21,auVar25);
        auVar33 = _vmax(auVar25,auVar22);
        auVar25 = _vmul(auVar33,auVar33);
        auVar26 = _vmulbc(auVar33,auVar30);
        auVar23 = _vmulbc(auVar33,auVar31);
        auVar24 = _vmulbc(auVar33,auVar31);
        auVar22 = _vmul(auVar25,auVar25);
        auVar26 = _vmul(auVar26,auVar25);
        _vmula(auVar23,auVar25);
        auVar23 = _vmulbc(auVar33,auVar31);
        auVar25 = _vmul(auVar22,auVar22);
        _vmadda(auVar26,auVar22);
        _vmadda(auVar24,auVar22);
        _vmaddabc(auVar33,auVar32);
        auVar25 = _vmadd(auVar23,auVar25);
        auVar23 = _lqc2(*pauVar15);
        _vmulabc(auVar28,auVar25);
        auVar22 = _vmsubbc(auVar27,auVar25);
        auVar22 = _vmulbc(auVar22,auVar21);
        _vmulabc(auVar27,auVar25);
        auVar25 = _vmaddbc(auVar28,auVar25);
        auVar21 = _vmulbc(auVar25,auVar21);
        auVar25 = _vsub(auVar23,auVar22);
        auVar24 = _vadd(auVar23,auVar22);
        auVar26 = _vadd(auVar23,auVar22);
        auVar33 = _vsub(auVar23,auVar22);
        auVar25 = _vsub(auVar25,auVar21);
        auVar22 = _vsub(auVar24,auVar21);
        auVar23 = _vadd(auVar26,auVar21);
        auVar24 = _vadd(auVar33,auVar21);
        auVar21 = _sqc2(auVar25);
        *(Vec128 *)pauVar13 = auVar21;
        auVar21 = _sqc2(auVar22);
        ((Vec128 *)pauVar13)[1] = auVar21;
        auVar21 = _sqc2(auVar23);
        ((Vec128 *)pauVar13)[2] = auVar21;
        auVar21 = _sqc2(auVar24);
        ((Vec128 *)pauVar13)[3] = auVar21;
        EI();
        iVar17 = iVar17 + 1;
        pauVar15 = (u8 (*) [16])(*pauVar15 + iVar1);
        puVar12 = (u32 *)((int)puVar12 + iVar3);
        puVar14 = (u32 *)((int)puVar14 + iVar2);
        pauVar13 = (u8 (*) [16])(*pauVar13 + iVar4 * 4);
      } while (iVar17 < param_4);
    }
  }
  return uVar20;
}

// FUN_0047FB10 NONMATCHING

u32
FUN_0047fb10(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  u32 uVar5;
  u8 (*pauVar6) [16];
  u8 (*pauVar7) [16];
  u64 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  u8 (*pauVar13) [16];
  u32 *puVar14;
  u8 (*pauVar15) [16];
  u8 (*pauVar16) [12];
  u8 (*pauVar17) [12];
  u32 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  Vec128 in_vf0;
  Vec128 auVar23;
  Vec128 auVar24;
  Vec128 auVar25;
  Vec128 auVar26;
  Vec128 auVar27;
  Vec128 auVar28;
  Vec128 auVar29;
  Vec128 auVar30;
  Vec128 auVar31;
  Vec128 auVar32;
  Vec128 extraout_vf10;
  Vec128 auVar33;
  Vec128 extraout_vf10_00;
  Vec128 extraout_vf11;
  Vec128 auVar34;
  Vec128 extraout_vf11_00;
  Vec128 extraout_vf12;
  Vec128 auVar35;
  Vec128 extraout_vf12_00;
  Vec128 extraout_vf13;
  Vec128 auVar36;
  Vec128 extraout_vf13_00;
  Vec128 auVar37;
  Vec128 auVar38;
  Vec128 auVar39;
  Vec128 auVar40;
  Vec128 auVar41;
  u32 in_vuI;
  u32 uStack_5c;
  u32 uStack_54;
  Vec128 auStack_30;
  Vec128 auStack_20;
  float fStack_10;
  float fStack_c;
  
  iVar1 = param_1[1];
  iVar2 = *(int *)(param_5 + 8);
  pauVar15 = *(u8 (**) [16])(param_5 + 4);
  puVar14 = *(u32 **)(param_5 + 0x34);
  iVar3 = *(int *)(param_5 + 0x38);
  pauVar13 = (u8 (*) [16])*param_1;
  fVar21 = *(float *)(param_5 + 0x70) * 0.5;
  fVar22 = *(float *)(param_5 + 0x74) * 0.5;
  if (iVar2 == iVar1) {
    FlushCache(0);
    uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
    }
    uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
      do {
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar5 & 0x100) != 0);
    }
    DAT_70003f70 = *(float *)(param_5 + 0x68) * (1.0 / fVar21) - 1.0;
    DAT_70003f74 = *(float *)(param_5 + 0x6c) * (1.0 / fVar22) - 1.0;
    DAT_70003f78 = *(float *)(param_5 + 0x68) * (1.0 / fVar21) + 1.0;
    DAT_70003f7c = *(float *)(param_5 + 0x6c) * (1.0 / fVar22) + 1.0;
    pauVar17 = (u8 (*) [12])param_2;
    DAT_70003f00 = *(u32 *)*pauVar17;
    DAT_70003f04 = *(u32 *)(*pauVar17 + 4);
    DAT_70003f08 = *(u32 *)(*pauVar17 + 8);
    pauVar16 = (u8 (*) [12])param_3;
    DAT_70003f10 = *(u32 *)*pauVar16;
    DAT_70003f14 = *(u32 *)(*pauVar16 + 4);
    DAT_70003f18 = *(u32 *)(*pauVar16 + 8);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    _ctc2(0x3fc90fdb);
    _vnop();
    _vnop();
    auVar33 = _vaddi(extraout_vf10,in_vuI);
    _ctc2(0x40490fdb);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0x40090fdb);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0xc0490fdb);
    _vnop();
    _vnop();
    auVar34 = _vaddi(extraout_vf11,in_vuI);
    uVar18 = 0xc08487ed;
    _ctc2(0xc08487ed);
    _vnop();
    _vnop();
    auVar34 = _vaddi(auVar34,in_vuI);
    _ctc2(0xb94fb21f);
    _vnop();
    _vnop();
    auVar34 = _vaddi(auVar34,in_vuI);
    _ctc2(0xbe2aaaa4);
    _vnop();
    _vnop();
    auVar35 = _vaddi(extraout_vf12,in_vuI);
    _ctc2(0x3c08873e);
    _vnop();
    _vnop();
    auVar35 = _vaddi(auVar35,in_vuI);
    _ctc2(0x362e9c14);
    _vnop();
    _vnop();
    auVar35 = _vaddi(auVar35,in_vuI);
    _ctc2(0x3f800000);
    _vnop();
    _vnop();
    auVar36 = _vaddi(extraout_vf13,in_vuI);
    EI();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    auVar27._12_4_ = uRam70003f0c;
    auVar27._0_4_ = *(u32 *)*pauVar17;
    auVar27._4_4_ = *(u32 *)(*pauVar17 + 4);
    auVar27._8_4_ = *(u32 *)(*pauVar17 + 8 + 8);
    auVar23 = _lqc2(auVar27);
    auVar37._4_4_ = fVar21;
    auVar37._0_4_ = fVar21;
    auVar37._8_4_ = fVar21;
    auVar37._12_4_ = fVar21;
    auVar26 = _lqc2(auVar37);
    auVar32._12_4_ = uRam70003f1c;
    auVar32._0_4_ = *(u32 *)*pauVar16;
    auVar32._4_4_ = *(u32 *)(*pauVar16 + 4);
    auVar32._8_4_ = *(u32 *)(*pauVar16 + 8 + 8);
    auVar24 = _lqc2(auVar32);
    auVar25._4_4_ = fVar22;
    auVar25._0_4_ = fVar22;
    auVar25._8_4_ = fVar22;
    auVar25._12_4_ = fVar22;
    auVar27 = _lqc2(auVar25);
    auVar28._4_4_ = DAT_70003f74;
    auVar28._0_4_ = DAT_70003f70;
    auVar28._8_4_ = DAT_70003f78;
    auVar28._12_4_ = DAT_70003f7c;
    auVar37 = _lqc2(auVar28);
    auVar32 = _vmul(auVar23,auVar26);
    auVar26 = _vmul(auVar24,auVar26);
    auVar23 = _vmul(auVar23,auVar27);
    auVar24 = _vmul(auVar24,auVar27);
    EI();
    DAT_70003f30 = fVar21;
    DAT_70003f34 = fVar21;
    DAT_70003f38 = fVar21;
    DAT_70003f3c = fVar21;
    DAT_70003f40 = fVar22;
    DAT_70003f44 = fVar22;
    DAT_70003f48 = fVar22;
    DAT_70003f4c = fVar22;
    if (0xbf < param_4) {
      do {
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar14);
        REG_DMAC_9_SPR_TO_QWC = 0x30;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x300;
        REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar15);
        REG_DMAC_9_SPR_TO_QWC = 0xc0;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        puVar8 = (u64 *)(u8 *)DAT_70000000;
        iVar10 = 0;
        pauVar6 = (u8 (*) [16])(u8 *)DAT_70000f00;
        pauVar7 = (u8 (*) [16])(u8 *)DAT_70000300;
        do {
          DAT_70003f20 = *(u32 *)puVar8;
          DAT_70003f24 = *(u32 *)((int)puVar8 + 4);
          DAT_70003f28 = *(u32 *)puVar8;
          uVar18 = *(u32 *)((int)puVar8 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar29._8_4_ = DAT_70003f28;
          auVar29._0_8_ = *puVar8;
          auVar29._12_4_ = uVar18;
          auVar27 = _lqc2(auVar29);
          auVar39 = _lqc2(*pauVar7);
          auVar41 = _lqc2(pauVar7[1]);
          auVar30 = _vabs(auVar27);
          _vaddabc(in_vf0,auVar33);
          _vmsubbc(auVar30,in_vf0);
          _vaddabc(in_vf0,auVar33);
          _vaddabc(in_vf0,auVar33);
          auVar30 = _vmsubbc(auVar27,in_vf0);
          _vaddabc(in_vf0,auVar34);
          _vaddabc(in_vf0,auVar34);
          auVar25 = _vmsubbc(auVar27,in_vf0);
          auVar27 = _vmini(auVar27,auVar30);
          auVar31 = _vmax(auVar27,auVar25);
          auVar27 = _vmul(auVar31,auVar31);
          auVar29 = _vmulbc(auVar31,auVar34);
          auVar25 = _vmulbc(auVar31,auVar35);
          auVar28 = _vmulbc(auVar31,auVar35);
          auVar30 = _vmul(auVar27,auVar27);
          auVar29 = _vmul(auVar29,auVar27);
          _vmula(auVar25,auVar27);
          auVar25 = _vmulbc(auVar31,auVar35);
          auVar27 = _vmul(auVar30,auVar30);
          _vmadda(auVar29,auVar30);
          _vmadda(auVar28,auVar30);
          _vmaddabc(auVar31,auVar36);
          auVar29 = _vmadd(auVar25,auVar27);
          auVar27 = _vmulbc(auVar32,auVar29);
          auVar30 = _vmulbc(auVar26,auVar29);
          auVar25 = _vmulbc(auVar23,auVar29);
          auVar28 = _vmulbc(auVar24,auVar29);
          auVar31 = _vsub(auVar27,auVar30);
          auVar27 = _vmulbc(auVar32,auVar29);
          auVar30 = _vmulbc(auVar26,auVar29);
          auVar38 = _vadd(auVar25,auVar28);
          auVar25 = _vmulbc(auVar23,auVar29);
          auVar28 = _vmulbc(auVar24,auVar29);
          auVar29 = _vsub(auVar27,auVar30);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar27 = _vmaddbc(auVar39,in_vf0);
          auVar40 = _vadd(auVar25,auVar28);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar30 = _vmaddbc(auVar39,in_vf0);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar25 = _vmaddbc(auVar39,in_vf0);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar28 = _vmaddbc(auVar39,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar31 = _vmaddbc(auVar41,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar38 = _vmaddbc(auVar41,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar39 = _vmaddbc(auVar41,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar29 = _vmaddbc(auVar41,in_vf0);
          auVar27 = _sqc2(auVar27);
          DAT_70003f2c = uVar18;
          *(Vec128 *)pauVar6 = auVar27;
          auVar27 = _sqc2(auVar30);
          ((Vec128 *)pauVar6)[1] = auVar27;
          auVar27 = _sqc2(auVar25);
          ((Vec128 *)pauVar6)[2] = auVar27;
          auVar27 = _sqc2(auVar28);
          ((Vec128 *)pauVar6)[3] = auVar27;
          auVar27 = _sqc2(auVar31);
          ((Vec128 *)pauVar6)[4] = auVar27;
          auVar27 = _sqc2(auVar38);
          ((Vec128 *)pauVar6)[5] = auVar27;
          auVar27 = _sqc2(auVar39);
          ((Vec128 *)pauVar6)[6] = auVar27;
          auVar27 = _sqc2(auVar29);
          ((Vec128 *)pauVar6)[7] = auVar27;
          EI();
          iVar10 = iVar10 + 2;
          pauVar7 = pauVar7 + 2;
          puVar8 = puVar8 + 1;
          pauVar6 = pauVar6 + 8;
        } while (iVar10 < 0xc0);
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = 0xf00;
        REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar13);
        REG_DMAC_8_SPR_FROM_QWC = 0x300;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        param_4 = param_4 + -0xc0;
        pauVar15 = pauVar15 + 0xc0;
        pauVar13 = pauVar13 + 0x300;
        puVar14 = puVar14 + 0xc0;
      } while (0xbf < param_4);
    }
    if (3 < param_4) {
      iVar10 = param_4;
      if (param_4 < 0) {
        iVar10 = param_4 + 3;
      }
      iVar10 = iVar10 >> 2;
      iVar9 = iVar10 * 4;
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      iVar11 = iVar9 >> 2;
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar14);
      iVar12 = iVar11;
      if (iVar9 < 0) {
        iVar12 = iVar9 + 3 >> 2;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar12;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0x300;
      REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar15);
      REG_DMAC_9_SPR_TO_QWC = iVar9;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      puVar8 = (u64 *)(u8 *)DAT_70000000;
      pauVar7 = (u8 (*) [16])(u8 *)DAT_70000300;
      pauVar6 = (u8 (*) [16])(u8 *)DAT_70000f00;
      iVar12 = 0;
      if (0 < iVar9) {
        do {
          DAT_70003f20 = *(u32 *)puVar8;
          DAT_70003f24 = *(u32 *)((int)puVar8 + 4);
          DAT_70003f28 = *(u32 *)puVar8;
          uVar18 = *(u32 *)((int)puVar8 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar31._8_4_ = DAT_70003f28;
          auVar31._0_8_ = *puVar8;
          auVar31._12_4_ = uVar18;
          auVar27 = _lqc2(auVar31);
          auVar39 = _lqc2(*pauVar7);
          auVar41 = _lqc2(pauVar7[1]);
          auVar30 = _vabs(auVar27);
          _vaddabc(in_vf0,auVar33);
          _vmsubbc(auVar30,in_vf0);
          _vaddabc(in_vf0,auVar33);
          _vaddabc(in_vf0,auVar33);
          auVar30 = _vmsubbc(auVar27,in_vf0);
          _vaddabc(in_vf0,auVar34);
          _vaddabc(in_vf0,auVar34);
          auVar25 = _vmsubbc(auVar27,in_vf0);
          auVar27 = _vmini(auVar27,auVar30);
          auVar31 = _vmax(auVar27,auVar25);
          auVar27 = _vmul(auVar31,auVar31);
          auVar29 = _vmulbc(auVar31,auVar34);
          auVar25 = _vmulbc(auVar31,auVar35);
          auVar28 = _vmulbc(auVar31,auVar35);
          auVar30 = _vmul(auVar27,auVar27);
          auVar29 = _vmul(auVar29,auVar27);
          _vmula(auVar25,auVar27);
          auVar25 = _vmulbc(auVar31,auVar35);
          auVar27 = _vmul(auVar30,auVar30);
          _vmadda(auVar29,auVar30);
          _vmadda(auVar28,auVar30);
          _vmaddabc(auVar31,auVar36);
          auVar29 = _vmadd(auVar25,auVar27);
          auVar27 = _vmulbc(auVar32,auVar29);
          auVar30 = _vmulbc(auVar26,auVar29);
          auVar25 = _vmulbc(auVar23,auVar29);
          auVar28 = _vmulbc(auVar24,auVar29);
          auVar31 = _vsub(auVar27,auVar30);
          auVar27 = _vmulbc(auVar32,auVar29);
          auVar30 = _vmulbc(auVar26,auVar29);
          auVar38 = _vadd(auVar25,auVar28);
          auVar25 = _vmulbc(auVar23,auVar29);
          auVar28 = _vmulbc(auVar24,auVar29);
          auVar29 = _vsub(auVar27,auVar30);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar27 = _vmaddbc(auVar39,in_vf0);
          auVar40 = _vadd(auVar25,auVar28);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar30 = _vmaddbc(auVar39,in_vf0);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar25 = _vmaddbc(auVar39,in_vf0);
          _vmulabc(auVar38,auVar37);
          _vmaddabc(auVar31,auVar37);
          auVar28 = _vmaddbc(auVar39,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar31 = _vmaddbc(auVar41,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar38 = _vmaddbc(auVar41,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar39 = _vmaddbc(auVar41,in_vf0);
          _vmulabc(auVar40,auVar37);
          _vmaddabc(auVar29,auVar37);
          auVar29 = _vmaddbc(auVar41,in_vf0);
          auVar27 = _sqc2(auVar27);
          DAT_70003f2c = uVar18;
          *(Vec128 *)pauVar6 = auVar27;
          auVar27 = _sqc2(auVar30);
          ((Vec128 *)pauVar6)[1] = auVar27;
          auVar27 = _sqc2(auVar25);
          ((Vec128 *)pauVar6)[2] = auVar27;
          auVar27 = _sqc2(auVar28);
          ((Vec128 *)pauVar6)[3] = auVar27;
          auVar27 = _sqc2(auVar31);
          ((Vec128 *)pauVar6)[4] = auVar27;
          auVar27 = _sqc2(auVar38);
          ((Vec128 *)pauVar6)[5] = auVar27;
          auVar27 = _sqc2(auVar39);
          ((Vec128 *)pauVar6)[6] = auVar27;
          auVar27 = _sqc2(auVar29);
          ((Vec128 *)pauVar6)[7] = auVar27;
          EI();
          iVar12 = iVar12 + 2;
          pauVar7 = pauVar7 + 2;
          puVar8 = puVar8 + 1;
          pauVar6 = pauVar6 + 8;
        } while (iVar12 < iVar9);
      }
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x100;
      REG_DMAC_8_SPR_FROM_SADR = 0xf00;
      REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar13);
      REG_DMAC_8_SPR_FROM_QWC = iVar10 << 4;
      REG_DMAC_8_SPR_FROM_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      pauVar13 = pauVar13 + iVar10 * 0x10;
      pauVar15 = pauVar15 + iVar10 * 4;
      if (iVar9 < 0) {
        iVar11 = iVar9 + 3 >> 2;
      }
      param_4 = param_4 + iVar10 * -4;
      puVar14 = puVar14 + iVar11 * 4;
    }
    iVar10 = 0;
    if (0 < param_4) {
      do {
        DAT_70003f20 = *puVar14;
        uVar18 = *puVar14;
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar38._4_4_ = DAT_70003f24;
        auVar38._0_4_ = DAT_70003f20;
        auVar38._8_4_ = uVar18;
        auVar38._12_4_ = DAT_70003f2c;
        auVar27 = _lqc2(auVar38);
        auVar38 = _lqc2(*pauVar15);
        auVar30 = _vabs(auVar27);
        _vaddabc(in_vf0,auVar33);
        _vmsubbc(auVar30,in_vf0);
        _vaddabc(in_vf0,auVar33);
        _vaddabc(in_vf0,auVar33);
        auVar30 = _vmsubbc(auVar27,in_vf0);
        _vaddabc(in_vf0,auVar34);
        _vaddabc(in_vf0,auVar34);
        auVar25 = _vmsubbc(auVar27,in_vf0);
        auVar27 = _vmini(auVar27,auVar30);
        auVar31 = _vmax(auVar27,auVar25);
        auVar27 = _vmul(auVar31,auVar31);
        auVar29 = _vmulbc(auVar31,auVar34);
        auVar25 = _vmulbc(auVar31,auVar35);
        auVar28 = _vmulbc(auVar31,auVar35);
        auVar30 = _vmul(auVar27,auVar27);
        auVar29 = _vmul(auVar29,auVar27);
        _vmula(auVar25,auVar27);
        auVar25 = _vmulbc(auVar31,auVar35);
        auVar27 = _vmul(auVar30,auVar30);
        _vmadda(auVar29,auVar30);
        _vmadda(auVar28,auVar30);
        _vmaddabc(auVar31,auVar36);
        auVar28 = _vmadd(auVar25,auVar27);
        auVar27 = _vmulbc(auVar32,auVar28);
        auVar30 = _vmulbc(auVar26,auVar28);
        auVar25 = _vmulbc(auVar23,auVar28);
        auVar28 = _vmulbc(auVar24,auVar28);
        auVar27 = _vsub(auVar27,auVar30);
        auVar30 = _vadd(auVar25,auVar28);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar27,auVar37);
        auVar25 = _vmaddbc(auVar38,in_vf0);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar27,auVar37);
        auVar28 = _vmaddbc(auVar38,in_vf0);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar27,auVar37);
        auVar29 = _vmaddbc(auVar38,in_vf0);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar27,auVar37);
        auVar30 = _vmaddbc(auVar38,in_vf0);
        auVar27 = _sqc2(auVar25);
        DAT_70003f28 = uVar18;
        *(Vec128 *)pauVar13 = auVar27;
        auVar27 = _sqc2(auVar28);
        ((Vec128 *)pauVar13)[1] = auVar27;
        auVar27 = _sqc2(auVar29);
        ((Vec128 *)pauVar13)[2] = auVar27;
        auVar27 = _sqc2(auVar30);
        ((Vec128 *)pauVar13)[3] = auVar27;
        EI();
        iVar10 = iVar10 + 1;
        pauVar15 = (u8 (*) [16])(*pauVar15 + iVar2);
        puVar14 = (u32 *)((int)puVar14 + iVar3);
        pauVar13 = (u8 (*) [16])(*pauVar13 + iVar1 * 4);
      } while (iVar10 < param_4);
    }
  }
  else {
    fVar19 = 1.0 / fVar21;
    fStack_10 = *(float *)(param_5 + 0x68) * fVar19;
    fVar20 = 1.0 / fVar22;
    fStack_c = *(float *)(param_5 + 0x6c) * fVar20;
    ((code)FUN_00521250)(auStack_20,param_2,0xc);
    ((code)FUN_00521250)(auStack_30,param_3,0xc);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    _ctc2(0x3fc90fdb);
    _vnop();
    _vnop();
    auVar33 = _vaddi(extraout_vf10_00,in_vuI);
    _ctc2(0x40490fdb);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0x40090fdb);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0xc0490fdb);
    _vnop();
    _vnop();
    auVar34 = _vaddi(extraout_vf11_00,in_vuI);
    uVar18 = 0xc08487ed;
    _ctc2(0xc08487ed);
    _vnop();
    _vnop();
    auVar34 = _vaddi(auVar34,in_vuI);
    _ctc2(0xb94fb21f);
    _vnop();
    _vnop();
    auVar34 = _vaddi(auVar34,in_vuI);
    _ctc2(0xbe2aaaa4);
    _vnop();
    _vnop();
    auVar35 = _vaddi(extraout_vf12_00,in_vuI);
    _ctc2(0x3c08873e);
    _vnop();
    _vnop();
    auVar35 = _vaddi(auVar35,in_vuI);
    _ctc2(0x362e9c14);
    _vnop();
    _vnop();
    auVar35 = _vaddi(auVar35,in_vuI);
    _ctc2(0x3f800000);
    _vnop();
    _vnop();
    auVar36 = _vaddi(extraout_vf13_00,in_vuI);
    EI();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    auVar27 = _lqc2(auStack_20);
    auVar24._4_4_ = fVar21;
    auVar24._0_4_ = fVar21;
    auVar24._8_4_ = fVar21;
    auVar24._12_4_ = fVar21;
    auVar32 = _lqc2(auVar24);
    auVar24 = _lqc2(auStack_30);
    auVar23._4_4_ = fVar22;
    auVar23._0_4_ = fVar22;
    auVar23._8_4_ = fVar22;
    auVar23._12_4_ = fVar22;
    auVar23 = _lqc2(auVar23);
    auVar26._4_4_ = *(float *)(param_5 + 0x6c) * fVar20 - 1.0;
    auVar26._0_4_ = *(float *)(param_5 + 0x68) * fVar19 - 1.0;
    auVar26._8_4_ = *(float *)(param_5 + 0x68) * fVar19 + 1.0;
    auVar26._12_4_ = *(float *)(param_5 + 0x6c) * fVar20 + 1.0;
    auVar37 = _lqc2(auVar26);
    auVar26 = _vmul(auVar27,auVar32);
    auVar32 = _vmul(auVar24,auVar32);
    auVar27 = _vmul(auVar27,auVar23);
    auVar23 = _vmul(auVar24,auVar23);
    EI();
    iVar10 = 0;
    if (0 < param_4) {
      do {
        uVar18 = *puVar14;
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar30._4_4_ = uStack_5c;
        auVar30._0_4_ = uVar18;
        auVar30._8_4_ = uVar18;
        auVar30._12_4_ = uStack_54;
        auVar24 = _lqc2(auVar30);
        auVar38 = _lqc2(*pauVar15);
        auVar30 = _vabs(auVar24);
        _vaddabc(in_vf0,auVar33);
        _vmsubbc(auVar30,in_vf0);
        _vaddabc(in_vf0,auVar33);
        _vaddabc(in_vf0,auVar33);
        auVar30 = _vmsubbc(auVar24,in_vf0);
        _vaddabc(in_vf0,auVar34);
        _vaddabc(in_vf0,auVar34);
        auVar25 = _vmsubbc(auVar24,in_vf0);
        auVar24 = _vmini(auVar24,auVar30);
        auVar31 = _vmax(auVar24,auVar25);
        auVar24 = _vmul(auVar31,auVar31);
        auVar29 = _vmulbc(auVar31,auVar34);
        auVar25 = _vmulbc(auVar31,auVar35);
        auVar28 = _vmulbc(auVar31,auVar35);
        auVar30 = _vmul(auVar24,auVar24);
        auVar29 = _vmul(auVar29,auVar24);
        _vmula(auVar25,auVar24);
        auVar25 = _vmulbc(auVar31,auVar35);
        auVar24 = _vmul(auVar30,auVar30);
        _vmadda(auVar29,auVar30);
        _vmadda(auVar28,auVar30);
        _vmaddabc(auVar31,auVar36);
        auVar28 = _vmadd(auVar25,auVar24);
        auVar24 = _vmulbc(auVar26,auVar28);
        auVar30 = _vmulbc(auVar32,auVar28);
        auVar25 = _vmulbc(auVar27,auVar28);
        auVar28 = _vmulbc(auVar23,auVar28);
        auVar24 = _vsub(auVar24,auVar30);
        auVar30 = _vadd(auVar25,auVar28);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar24,auVar37);
        auVar25 = _vmaddbc(auVar38,in_vf0);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar24,auVar37);
        auVar28 = _vmaddbc(auVar38,in_vf0);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar24,auVar37);
        auVar29 = _vmaddbc(auVar38,in_vf0);
        _vmulabc(auVar30,auVar37);
        _vmaddabc(auVar24,auVar37);
        auVar30 = _vmaddbc(auVar38,in_vf0);
        auVar24 = _sqc2(auVar25);
        *(Vec128 *)pauVar13 = auVar24;
        auVar24 = _sqc2(auVar28);
        ((Vec128 *)pauVar13)[1] = auVar24;
        auVar24 = _sqc2(auVar29);
        ((Vec128 *)pauVar13)[2] = auVar24;
        auVar24 = _sqc2(auVar30);
        ((Vec128 *)pauVar13)[3] = auVar24;
        EI();
        iVar10 = iVar10 + 1;
        pauVar15 = (u8 (*) [16])(*pauVar15 + iVar2);
        puVar14 = (u32 *)((int)puVar14 + iVar3);
        pauVar13 = (u8 (*) [16])(*pauVar13 + iVar1 * 4);
      } while (iVar10 < param_4);
    }
  }
  return uVar18;
}

// FUN_00480C30 NONMATCHING

u32
FUN_00480c30(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  u32 uVar5;
  u8 (*pauVar6) [16];
  int iVar7;
  u8 (*pauVar8) [16];
  u8 (*pauVar9) [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  u8 (*pauVar14) [16];
  u64 *puVar15;
  u8 (*pauVar16) [16];
  u8 (*pauVar17) [12];
  u8 (*pauVar18) [12];
  u32 uVar19;
  Vec128 in_vf0;
  Vec128 auVar20;
  Vec128 auVar21;
  Vec128 auVar22;
  Vec128 auVar23;
  Vec128 auVar24;
  Vec128 auVar25;
  Vec128 auVar26;
  Vec128 auVar27;
  Vec128 auVar28;
  Vec128 auVar29;
  Vec128 auVar30;
  Vec128 auVar31;
  Vec128 auVar32;
  Vec128 auVar33;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  Vec128 auVar37;
  Vec128 auVar38;
  u32 in_vuI;
  u64 uStack_48;
  Vec128 auStack_40;
  Vec128 auStack_30;
  u64 uStack_18;
  u64 uStack_8;
  
  iVar1 = param_1[1];
  iVar2 = *(int *)(param_5 + 8);
  pauVar16 = *(u8 (**) [16])(param_5 + 4);
  puVar15 = *(u64 **)(param_5 + 0x1c);
  iVar3 = *(int *)(param_5 + 0x20);
  pauVar14 = (u8 (*) [16])*param_1;
  if (iVar2 == iVar1) {
    FlushCache(0);
    uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
    }
    uVar5 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar5 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
      do {
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar5 & 0x100) != 0);
    }
    pauVar18 = (u8 (*) [12])param_2;
    DAT_70003f50 = *(u32 *)*pauVar18;
    DAT_70003f54 = *(u32 *)(*pauVar18 + 4);
    DAT_70003f58 = *(u32 *)(*pauVar18 + 8);
    pauVar17 = (u8 (*) [12])param_3;
    DAT_70003f60 = *(u32 *)*pauVar17;
    DAT_70003f64 = *(u32 *)(*pauVar17 + 4);
    DAT_70003f68 = *(u32 *)(*pauVar17 + 8);
    DAT_70003f90 = *(u32 *)(param_5 + 0x68);
    DAT_70003f94 = *(u32 *)(param_5 + 0x6c);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    uVar19 = 0x3f000000;
    _ctc2(0x3f000000);
    _vnop();
    _vnop();
    auVar21._12_4_ = uRam70003f5c;
    auVar21._0_4_ = *(u32 *)*pauVar18;
    auVar21._4_4_ = *(u32 *)(*pauVar18 + 4);
    auVar21._8_4_ = *(u32 *)(*pauVar18 + 8 + 8);
    auVar20 = _lqc2(auVar21);
    auVar23._12_4_ = DAT_70003f6c;
    auVar23._0_4_ = *(u32 *)*pauVar17;
    auVar23._4_4_ = *(u32 *)(*pauVar17 + 4);
    auVar23._8_4_ = *(u32 *)(*pauVar17 + 8 + 8);
    auVar21 = _lqc2(auVar23);
    auVar24._8_8_ = uRam70003f98;
    auVar24._0_8_ = *(u64 *)(param_5 + 0x68);
    auVar22 = _lqc2(auVar24);
    _vmulabc(auVar20,auVar22);
    _vmaddabc(auVar21,auVar22);
    auVar22 = _vmadd(in_vf0,in_vf0);
    auVar20 = _vmuli(auVar20,in_vuI);
    auVar21 = _vmuli(auVar21,in_vuI);
    EI();
    if (0xb7 < param_4) {
      do {
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar15);
        REG_DMAC_9_SPR_TO_QWC = 0x5c;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x5c0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar16);
        REG_DMAC_9_SPR_TO_QWC = 0xb8;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        pauVar9 = (u8 (*) [16])(u8 *)DAT_70000000;
        iVar12 = 0;
        pauVar6 = (u8 (*) [16])(u8 *)DAT_70001140;
        pauVar8 = (u8 (*) [16])(u8 *)DAT_700005c0;
        do {
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar23 = _lqc2(*pauVar9);
          auVar24 = _vmulbc(auVar20,auVar23);
          auVar25 = _vmulbc(auVar21,auVar23);
          auVar29 = _vmulbc(auVar20,auVar23);
          auVar30 = _vmulbc(auVar21,auVar23);
          auVar23 = _lqc2(*pauVar8);
          auVar26 = _vadd(auVar23,auVar22);
          auVar23 = _lqc2(pauVar8[1]);
          auVar31 = _vadd(auVar23,auVar22);
          auVar23 = _lqc2(pauVar8[2]);
          auVar34 = _vadd(auVar23,auVar22);
          auVar23 = _lqc2(pauVar9[1]);
          auVar37 = _lqc2(pauVar8[3]);
          auVar38 = _vadd(auVar37,auVar22);
          auVar32 = _vmulbc(auVar20,auVar23);
          auVar33 = _vmulbc(auVar21,auVar23);
          auVar35 = _vmulbc(auVar20,auVar23);
          auVar36 = _vmulbc(auVar21,auVar23);
          auVar23 = _vsub(auVar26,auVar24);
          auVar37 = _vadd(auVar26,auVar24);
          auVar27 = _vadd(auVar26,auVar24);
          auVar28 = _vsub(auVar26,auVar24);
          auVar23 = _vsub(auVar23,auVar25);
          auVar24 = _vsub(auVar37,auVar25);
          auVar26 = _vadd(auVar27,auVar25);
          auVar25 = _vadd(auVar28,auVar25);
          auVar37 = _vsub(auVar31,auVar29);
          auVar27 = _vadd(auVar31,auVar29);
          auVar28 = _vadd(auVar31,auVar29);
          auVar29 = _vsub(auVar31,auVar29);
          auVar37 = _vsub(auVar37,auVar30);
          auVar27 = _vsub(auVar27,auVar30);
          auVar28 = _vadd(auVar28,auVar30);
          auVar29 = _vadd(auVar29,auVar30);
          auVar23 = _sqc2(auVar23);
          *(Vec128 *)pauVar6 = auVar23;
          auVar23 = _sqc2(auVar24);
          ((Vec128 *)pauVar6)[1] = auVar23;
          auVar23 = _sqc2(auVar26);
          ((Vec128 *)pauVar6)[2] = auVar23;
          auVar23 = _sqc2(auVar25);
          ((Vec128 *)pauVar6)[3] = auVar23;
          auVar23 = _sqc2(auVar37);
          ((Vec128 *)pauVar6)[4] = auVar23;
          auVar23 = _sqc2(auVar27);
          ((Vec128 *)pauVar6)[5] = auVar23;
          auVar23 = _sqc2(auVar28);
          ((Vec128 *)pauVar6)[6] = auVar23;
          auVar23 = _sqc2(auVar29);
          ((Vec128 *)pauVar6)[7] = auVar23;
          auVar23 = _vsub(auVar34,auVar32);
          auVar24 = _vadd(auVar34,auVar32);
          auVar25 = _vadd(auVar34,auVar32);
          auVar26 = _vsub(auVar34,auVar32);
          auVar23 = _vsub(auVar23,auVar33);
          auVar24 = _vsub(auVar24,auVar33);
          auVar25 = _vadd(auVar25,auVar33);
          auVar26 = _vadd(auVar26,auVar33);
          auVar37 = _vsub(auVar38,auVar35);
          auVar27 = _vadd(auVar38,auVar35);
          auVar28 = _vadd(auVar38,auVar35);
          auVar29 = _vsub(auVar38,auVar35);
          auVar37 = _vsub(auVar37,auVar36);
          auVar27 = _vsub(auVar27,auVar36);
          auVar28 = _vadd(auVar28,auVar36);
          auVar29 = _vadd(auVar29,auVar36);
          auVar23 = _sqc2(auVar23);
          ((Vec128 *)pauVar6)[8] = auVar23;
          auVar23 = _sqc2(auVar24);
          ((Vec128 *)pauVar6)[9] = auVar23;
          auVar23 = _sqc2(auVar25);
          ((Vec128 *)pauVar6)[10] = auVar23;
          auVar23 = _sqc2(auVar26);
          ((Vec128 *)pauVar6)[0xb] = auVar23;
          auVar23 = _sqc2(auVar37);
          ((Vec128 *)pauVar6)[0xc] = auVar23;
          auVar23 = _sqc2(auVar27);
          ((Vec128 *)pauVar6)[0xd] = auVar23;
          auVar23 = _sqc2(auVar28);
          ((Vec128 *)pauVar6)[0xe] = auVar23;
          auVar23 = _sqc2(auVar29);
          ((Vec128 *)pauVar6)[0xf] = auVar23;
          EI();
          iVar12 = iVar12 + 4;
          pauVar9 = pauVar9 + 2;
          pauVar6 = pauVar6 + 0x10;
          pauVar8 = pauVar8 + 4;
        } while (iVar12 < 0xb8);
        uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar5 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar5 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar5 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = 0x1140;
        REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar14);
        REG_DMAC_8_SPR_FROM_QWC = 0x2e0;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        param_4 = param_4 + -0xb8;
        pauVar16 = pauVar16 + 0xb8;
        pauVar14 = pauVar14 + 0x2e0;
        puVar15 = puVar15 + 0xb8;
      } while (0xb7 < param_4);
    }
    if (3 < param_4) {
      iVar12 = param_4;
      if (param_4 < 0) {
        iVar12 = param_4 + 3;
      }
      iVar12 = iVar12 >> 2;
      iVar13 = iVar12 * 4;
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      iVar10 = iVar13 >> 1;
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar15);
      iVar11 = iVar10;
      if (iVar13 < 0) {
        iVar11 = iVar13 + 1 >> 1;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar11;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = iVar11 << 4;
      REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar16);
      REG_DMAC_9_SPR_TO_QWC = iVar13;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      pauVar6 = (u8 (*) [16])(u8 *)DAT_70000000;
      iVar7 = iVar10;
      if (iVar13 < 0) {
        iVar7 = iVar13 + 1 >> 1;
      }
      pauVar9 = (u8 (*) [16])(iVar11 << 4 | 0x70000000);
      pauVar8 = (u8 (*) [16])((iVar13 + iVar7) * 0x10 | 0x70000000);
      iVar11 = 0;
      if (0 < iVar13) {
        do {
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar23 = _lqc2(*pauVar6);
          auVar24 = _vmulbc(auVar20,auVar23);
          auVar25 = _vmulbc(auVar21,auVar23);
          auVar29 = _vmulbc(auVar20,auVar23);
          auVar30 = _vmulbc(auVar21,auVar23);
          auVar23 = _lqc2(*pauVar9);
          auVar26 = _vadd(auVar23,auVar22);
          auVar23 = _lqc2(pauVar9[1]);
          auVar31 = _vadd(auVar23,auVar22);
          auVar23 = _lqc2(pauVar9[2]);
          auVar34 = _vadd(auVar23,auVar22);
          auVar23 = _lqc2(pauVar6[1]);
          auVar37 = _lqc2(pauVar9[3]);
          auVar38 = _vadd(auVar37,auVar22);
          auVar32 = _vmulbc(auVar20,auVar23);
          auVar33 = _vmulbc(auVar21,auVar23);
          auVar35 = _vmulbc(auVar20,auVar23);
          auVar36 = _vmulbc(auVar21,auVar23);
          auVar23 = _vsub(auVar26,auVar24);
          auVar37 = _vadd(auVar26,auVar24);
          auVar27 = _vadd(auVar26,auVar24);
          auVar28 = _vsub(auVar26,auVar24);
          auVar23 = _vsub(auVar23,auVar25);
          auVar24 = _vsub(auVar37,auVar25);
          auVar26 = _vadd(auVar27,auVar25);
          auVar25 = _vadd(auVar28,auVar25);
          auVar37 = _vsub(auVar31,auVar29);
          auVar27 = _vadd(auVar31,auVar29);
          auVar28 = _vadd(auVar31,auVar29);
          auVar29 = _vsub(auVar31,auVar29);
          auVar37 = _vsub(auVar37,auVar30);
          auVar27 = _vsub(auVar27,auVar30);
          auVar28 = _vadd(auVar28,auVar30);
          auVar29 = _vadd(auVar29,auVar30);
          auVar23 = _sqc2(auVar23);
          *(Vec128 *)pauVar8 = auVar23;
          auVar23 = _sqc2(auVar24);
          ((Vec128 *)pauVar8)[1] = auVar23;
          auVar23 = _sqc2(auVar26);
          ((Vec128 *)pauVar8)[2] = auVar23;
          auVar23 = _sqc2(auVar25);
          ((Vec128 *)pauVar8)[3] = auVar23;
          auVar23 = _sqc2(auVar37);
          ((Vec128 *)pauVar8)[4] = auVar23;
          auVar23 = _sqc2(auVar27);
          ((Vec128 *)pauVar8)[5] = auVar23;
          auVar23 = _sqc2(auVar28);
          ((Vec128 *)pauVar8)[6] = auVar23;
          auVar23 = _sqc2(auVar29);
          ((Vec128 *)pauVar8)[7] = auVar23;
          auVar23 = _vsub(auVar34,auVar32);
          auVar24 = _vadd(auVar34,auVar32);
          auVar25 = _vadd(auVar34,auVar32);
          auVar26 = _vsub(auVar34,auVar32);
          auVar23 = _vsub(auVar23,auVar33);
          auVar24 = _vsub(auVar24,auVar33);
          auVar25 = _vadd(auVar25,auVar33);
          auVar26 = _vadd(auVar26,auVar33);
          auVar37 = _vsub(auVar38,auVar35);
          auVar27 = _vadd(auVar38,auVar35);
          auVar28 = _vadd(auVar38,auVar35);
          auVar29 = _vsub(auVar38,auVar35);
          auVar37 = _vsub(auVar37,auVar36);
          auVar27 = _vsub(auVar27,auVar36);
          auVar28 = _vadd(auVar28,auVar36);
          auVar29 = _vadd(auVar29,auVar36);
          auVar23 = _sqc2(auVar23);
          ((Vec128 *)pauVar8)[8] = auVar23;
          auVar23 = _sqc2(auVar24);
          ((Vec128 *)pauVar8)[9] = auVar23;
          auVar23 = _sqc2(auVar25);
          ((Vec128 *)pauVar8)[10] = auVar23;
          auVar23 = _sqc2(auVar26);
          ((Vec128 *)pauVar8)[0xb] = auVar23;
          auVar23 = _sqc2(auVar37);
          ((Vec128 *)pauVar8)[0xc] = auVar23;
          auVar23 = _sqc2(auVar27);
          ((Vec128 *)pauVar8)[0xd] = auVar23;
          auVar23 = _sqc2(auVar28);
          ((Vec128 *)pauVar8)[0xe] = auVar23;
          auVar23 = _sqc2(auVar29);
          ((Vec128 *)pauVar8)[0xf] = auVar23;
          EI();
          iVar11 = iVar11 + 4;
          pauVar6 = pauVar6 + 2;
          pauVar8 = pauVar8 + 0x10;
          pauVar9 = pauVar9 + 4;
        } while (iVar11 < iVar13);
      }
      uVar5 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar5 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar5 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar5 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar5 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x100;
      if (iVar13 < 0) {
        iVar10 = iVar13 + 1 >> 1;
      }
      REG_DMAC_8_SPR_FROM_SADR = (iVar13 + iVar10) * 0x10;
      REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar14);
      REG_DMAC_8_SPR_FROM_QWC = iVar12 << 4;
      REG_DMAC_8_SPR_FROM_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      puVar15 = puVar15 + iVar10 * 2;
      pauVar14 = pauVar14 + iVar12 * 0x10;
      param_4 = param_4 + iVar12 * -4;
      pauVar16 = pauVar16 + iVar12 * 4;
    }
    iVar12 = 0;
    if (0 < param_4) {
      do {
        uVar19 = *(u32 *)((int)puVar15 + 4);
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar25._8_8_ = uStack_8;
        auVar25._0_8_ = *puVar15;
        auVar23 = _lqc2(auVar25);
        auVar24 = _vmulbc(auVar20,auVar23);
        auVar23 = _vmulbc(auVar21,auVar23);
        auVar25 = _lqc2(*pauVar16);
        auVar25 = _vadd(auVar25,auVar22);
        auVar26 = _vsub(auVar25,auVar24);
        auVar37 = _vadd(auVar25,auVar24);
        auVar27 = _vadd(auVar25,auVar24);
        auVar28 = _vsub(auVar25,auVar24);
        auVar24 = _vsub(auVar26,auVar23);
        auVar25 = _vsub(auVar37,auVar23);
        auVar26 = _vadd(auVar27,auVar23);
        auVar37 = _vadd(auVar28,auVar23);
        auVar23 = _sqc2(auVar24);
        *(Vec128 *)pauVar14 = auVar23;
        auVar23 = _sqc2(auVar25);
        ((Vec128 *)pauVar14)[1] = auVar23;
        auVar23 = _sqc2(auVar26);
        ((Vec128 *)pauVar14)[2] = auVar23;
        auVar23 = _sqc2(auVar37);
        ((Vec128 *)pauVar14)[3] = auVar23;
        EI();
        iVar12 = iVar12 + 1;
        puVar15 = (u64 *)((int)puVar15 + iVar3);
        pauVar14 = (u8 (*) [16])(*pauVar14 + iVar1 * 4);
        pauVar16 = (u8 (*) [16])(*pauVar16 + iVar2);
      } while (iVar12 < param_4);
    }
  }
  else {
    ((code)FUN_00521250)(auStack_30,param_2,0xc);
    ((code)FUN_00521250)(auStack_40,param_3,0xc);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    uVar19 = 0x3f000000;
    _ctc2(0x3f000000);
    _vnop();
    _vnop();
    auVar21 = _lqc2(auStack_30);
    auVar22 = _lqc2(auStack_40);
    auVar20._8_8_ = uStack_18;
    auVar20._0_8_ = *(u64 *)(param_5 + 0x68);
    auVar20 = _lqc2(auVar20);
    _vmulabc(auVar21,auVar20);
    _vmaddabc(auVar22,auVar20);
    auVar23 = _vmadd(in_vf0,in_vf0);
    auVar20 = _vmuli(auVar21,in_vuI);
    auVar21 = _vmuli(auVar22,in_vuI);
    EI();
    iVar12 = 0;
    if (0 < param_4) {
      do {
        uVar19 = *(u32 *)((int)puVar15 + 4);
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar22._8_8_ = uStack_48;
        auVar22._0_8_ = *puVar15;
        auVar22 = _lqc2(auVar22);
        auVar24 = _vmulbc(auVar20,auVar22);
        auVar22 = _vmulbc(auVar21,auVar22);
        auVar25 = _lqc2(*pauVar16);
        auVar25 = _vadd(auVar25,auVar23);
        auVar26 = _vsub(auVar25,auVar24);
        auVar37 = _vadd(auVar25,auVar24);
        auVar27 = _vadd(auVar25,auVar24);
        auVar28 = _vsub(auVar25,auVar24);
        auVar24 = _vsub(auVar26,auVar22);
        auVar25 = _vsub(auVar37,auVar22);
        auVar26 = _vadd(auVar27,auVar22);
        auVar37 = _vadd(auVar28,auVar22);
        auVar22 = _sqc2(auVar24);
        *(Vec128 *)pauVar14 = auVar22;
        auVar22 = _sqc2(auVar25);
        ((Vec128 *)pauVar14)[1] = auVar22;
        auVar22 = _sqc2(auVar26);
        ((Vec128 *)pauVar14)[2] = auVar22;
        auVar22 = _sqc2(auVar37);
        ((Vec128 *)pauVar14)[3] = auVar22;
        EI();
        iVar12 = iVar12 + 1;
        puVar15 = (u64 *)((int)puVar15 + iVar3);
        pauVar14 = (u8 (*) [16])(*pauVar14 + iVar1 * 4);
        pauVar16 = (u8 (*) [16])(*pauVar16 + iVar2);
      } while (iVar12 < param_4);
    }
  }
  return uVar19;
}

// FUN_00481860 NONMATCHING




u32 FUN_00481860(u32 *param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  u32 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  u64 *puVar11;
  u8 (*pauVar12) [16];
  u32 *puVar13;
  u8 (*pauVar14) [16];
  u8 (*pauVar15) [16];
  u64 *puVar16;
  int iVar17;
  u8 (*pauVar18) [16];
  u8 (*pauVar19) [16];
  u32 uVar20;
  float fVar21;
  float fVar22;
  Vec128 in_vf0;
  Vec128 auVar23;
  Vec128 auVar24;
  Vec128 auVar25;
  Vec128 auVar26;
  Vec128 auVar27;
  Vec128 auVar28;
  Vec128 auVar29;
  Vec128 auVar30;
  Vec128 in_vf10;
  Vec128 extraout_vf10;
  Vec128 auVar31;
  Vec128 in_vf11;
  Vec128 extraout_vf11;
  Vec128 auVar32;
  Vec128 in_vf12;
  Vec128 extraout_vf12;
  Vec128 auVar33;
  Vec128 in_vf13;
  Vec128 extraout_vf13;
  Vec128 auVar34;
  Vec128 auVar35;
  Vec128 auVar36;
  Vec128 auVar37;
  Vec128 auVar38;
  Vec128 auVar39;
  Vec128 auVar40;
  Vec128 auVar41;
  Vec128 auVar42;
  u32 in_vuI;
  u32 uStack_3c;
  u32 uStack_34;
  u32 uStack_14;
  u32 uStack_4;
  
  iVar1 = *(int *)(param_5 + 8);
  pauVar12 = (u8 (*) [16])*param_1;
  pauVar14 = *(u8 (**) [16])(param_5 + 4);
  puVar13 = *(u32 **)(param_5 + 0x34);
  puVar11 = *(u64 **)(param_5 + 0x1c);
  iVar2 = *(int *)(param_5 + 0x38);
  iVar3 = *(int *)(param_5 + 0x20);
  iVar4 = param_1[1];
  if (iVar1 == iVar4) {
    FlushCache(0);
    uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar6 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar5 = getCopCondition(0,0);
      } while (cVar5 == '\0');
    }
    uVar6 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar6 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar5 = getCopCondition(0,0);
      } while (cVar5 == '\0');
      do {
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar6 & 0x100) != 0);
    }
    DAT_70003f40 = *param_2 * 0.5;
    DAT_70003f44 = param_2[1] * 0.5;
    DAT_70003f48 = param_2[2] * 0.5;
    DAT_70003f50 = *param_3 * 0.5;
    DAT_70003f54 = param_3[1] * 0.5;
    DAT_70003f58 = param_3[2] * 0.5;
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    _ctc2(0x3fc90fdb);
    _vnop();
    _vnop();
    auVar31 = _vaddi(extraout_vf10,in_vuI);
    _ctc2(0x40490fdb);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0x40090fdb);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0xc0490fdb);
    _vnop();
    _vnop();
    auVar32 = _vaddi(extraout_vf11,in_vuI);
    uVar20 = 0xc08487ed;
    _ctc2(0xc08487ed);
    _vnop();
    _vnop();
    auVar32 = _vaddi(auVar32,in_vuI);
    _ctc2(0xb94fb21f);
    _vnop();
    _vnop();
    auVar32 = _vaddi(auVar32,in_vuI);
    _ctc2(0xbe2aaaa4);
    _vnop();
    _vnop();
    auVar33 = _vaddi(extraout_vf12,in_vuI);
    _ctc2(0x3c08873e);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0x362e9c14);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0x3f800000);
    _vnop();
    _vnop();
    auVar34 = _vaddi(extraout_vf13,in_vuI);
    EI();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    auVar24._4_4_ = DAT_70003f44;
    auVar24._0_4_ = DAT_70003f40;
    auVar24._8_4_ = DAT_70003f48;
    auVar24._12_4_ = DAT_70003f4c;
    auVar29 = _lqc2(auVar24);
    auVar25._4_4_ = DAT_70003f54;
    auVar25._0_4_ = DAT_70003f50;
    auVar25._8_4_ = DAT_70003f58;
    auVar25._12_4_ = uRam70003f5c;
    auVar30 = _lqc2(auVar25);
    auVar26._4_4_ = DAT_70003f64;
    auVar26._0_4_ = DAT_70003f60;
    auVar26._8_4_ = DAT_70003f68;
    auVar26._12_4_ = DAT_70003f6c;
    auVar35 = _lqc2(auVar26);
    EI();
    DAT_70003f60 = *(u32 *)(param_5 + 0x68);
    DAT_70003f64 = *(u32 *)(param_5 + 0x6c);
    DAT_70003f68 = *(u32 *)(param_5 + 0x68);
    DAT_70003f6c = *(u32 *)(param_5 + 0x6c);
    if (0xaf < param_4) {
      do {
        uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
        }
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar13);
        REG_DMAC_9_SPR_TO_QWC = 0x2c;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x2c0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar11);
        REG_DMAC_9_SPR_TO_QWC = 0x58;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0x840;
        REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar14);
        REG_DMAC_9_SPR_TO_QWC = 0xb0;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        puVar16 = (u64 *)(u8 *)DAT_70000000;
        iVar17 = 0;
        pauVar18 = (u8 (*) [16])(u8 *)DAT_70001340;
        pauVar19 = (u8 (*) [16])(u8 *)DAT_70000840;
        pauVar15 = (u8 (*) [16])(u8 *)DAT_700002c0;
        do {
          DAT_70003fa0 = *(u32 *)puVar16;
          DAT_70003fa4 = *(u32 *)((int)puVar16 + 4);
          DAT_70003fa8 = *(u32 *)puVar16;
          uVar20 = *(u32 *)((int)puVar16 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar28._8_4_ = DAT_70003fa8;
          auVar28._0_8_ = *puVar16;
          auVar28._12_4_ = uVar20;
          auVar23 = _lqc2(auVar28);
          auVar27 = _vabs(auVar23);
          _vaddabc(in_vf0,auVar31);
          _vmsubbc(auVar27,in_vf0);
          _vaddabc(in_vf0,auVar31);
          _vaddabc(in_vf0,auVar31);
          auVar27 = _vmsubbc(auVar23,in_vf0);
          _vaddabc(in_vf0,auVar32);
          _vaddabc(in_vf0,auVar32);
          auVar24 = _vmsubbc(auVar23,in_vf0);
          auVar23 = _vmini(auVar23,auVar27);
          auVar28 = _vmax(auVar23,auVar24);
          auVar23 = _vmul(auVar28,auVar28);
          auVar26 = _vmulbc(auVar28,auVar32);
          auVar24 = _vmulbc(auVar28,auVar33);
          auVar25 = _vmulbc(auVar28,auVar33);
          auVar27 = _vmul(auVar23,auVar23);
          auVar26 = _vmul(auVar26,auVar23);
          _vmula(auVar24,auVar23);
          auVar24 = _vmulbc(auVar28,auVar33);
          auVar23 = _vmul(auVar27,auVar27);
          _vmadda(auVar26,auVar27);
          _vmadda(auVar25,auVar27);
          _vmaddabc(auVar28,auVar34);
          auVar24 = _vmadd(auVar24,auVar23);
          auVar28 = _lqc2(*pauVar19);
          auVar40 = _lqc2(pauVar19[1]);
          auVar27 = _lqc2(*pauVar15);
          _vmulabc(auVar29,auVar24);
          auVar25 = _vmsubbc(auVar30,auVar24);
          auVar23 = _vadd(auVar35,auVar27);
          auVar27 = _vsub(auVar35,auVar27);
          _vmulabc(auVar30,auVar24);
          auVar26 = _vmaddbc(auVar29,auVar24);
          _vmulabc(auVar29,auVar24);
          auVar38 = _vmsubbc(auVar30,auVar24);
          _vmulabc(auVar30,auVar24);
          auVar39 = _vmaddbc(auVar29,auVar24);
          _vmulabc(auVar25,auVar27);
          auVar24 = _vmaddbc(auVar26,auVar27);
          _vmulabc(auVar25,auVar23);
          auVar36 = _vmaddbc(auVar26,auVar27);
          _vmulabc(auVar25,auVar23);
          auVar37 = _vmaddbc(auVar26,auVar23);
          _vmulabc(auVar25,auVar27);
          auVar25 = _vmaddbc(auVar26,auVar23);
          _vmulabc(auVar38,auVar27);
          auVar26 = _vmaddbc(auVar39,auVar27);
          _vmulabc(auVar38,auVar23);
          auVar41 = _vmaddbc(auVar39,auVar27);
          _vmulabc(auVar38,auVar23);
          auVar42 = _vmaddbc(auVar39,auVar23);
          _vmulabc(auVar38,auVar27);
          auVar38 = _vmaddbc(auVar39,auVar23);
          auVar23 = _vadd(auVar24,auVar28);
          auVar27 = _vadd(auVar36,auVar28);
          auVar24 = _vadd(auVar37,auVar28);
          auVar25 = _vadd(auVar25,auVar28);
          auVar26 = _vadd(auVar26,auVar40);
          auVar28 = _vadd(auVar41,auVar40);
          auVar36 = _vadd(auVar42,auVar40);
          auVar37 = _vadd(auVar38,auVar40);
          auVar23 = _sqc2(auVar23);
          DAT_70003fac = uVar20;
          *(Vec128 *)pauVar18 = auVar23;
          auVar23 = _sqc2(auVar27);
          ((Vec128 *)pauVar18)[1] = auVar23;
          auVar23 = _sqc2(auVar24);
          ((Vec128 *)pauVar18)[2] = auVar23;
          auVar23 = _sqc2(auVar25);
          ((Vec128 *)pauVar18)[3] = auVar23;
          auVar23 = _sqc2(auVar26);
          ((Vec128 *)pauVar18)[4] = auVar23;
          auVar23 = _sqc2(auVar28);
          ((Vec128 *)pauVar18)[5] = auVar23;
          auVar23 = _sqc2(auVar36);
          ((Vec128 *)pauVar18)[6] = auVar23;
          auVar23 = _sqc2(auVar37);
          ((Vec128 *)pauVar18)[7] = auVar23;
          EI();
          iVar17 = iVar17 + 2;
          pauVar19 = pauVar19 + 2;
          pauVar15 = pauVar15 + 1;
          puVar16 = puVar16 + 1;
          pauVar18 = pauVar18 + 8;
        } while (iVar17 < 0xb0);
        uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
        }
        uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar6 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar5 = getCopCondition(0,0);
          } while (cVar5 == '\0');
          do {
            uVar6 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar6 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = 0x1340;
        REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar12);
        REG_DMAC_8_SPR_FROM_QWC = 0x2c0;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        param_4 = param_4 + -0xb0;
        pauVar14 = pauVar14 + 0xb0;
        pauVar12 = pauVar12 + 0x2c0;
        puVar13 = puVar13 + 0xb0;
        puVar11 = puVar11 + 0xb0;
      } while (0xaf < param_4);
    }
    if (3 < param_4) {
      iVar17 = param_4;
      if (param_4 < 0) {
        iVar17 = param_4 + 3;
      }
      iVar17 = iVar17 >> 2;
      uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
      iVar7 = iVar17 * 4;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
      }
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      iVar8 = iVar7 >> 2;
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar13);
      iVar9 = iVar8;
      if (iVar7 < 0) {
        iVar9 = iVar7 + 3 >> 2;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar9;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0x2c0;
      iVar10 = iVar7 >> 1;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar11);
      iVar9 = iVar10;
      if (iVar7 < 0) {
        iVar9 = iVar7 + 1 >> 1;
      }
      REG_DMAC_9_SPR_TO_QWC = iVar9;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0x840;
      REG_DMAC_9_SPR_TO_MADR = (u32)(pauVar14);
      REG_DMAC_9_SPR_TO_QWC = iVar7;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      puVar16 = (u64 *)(u8 *)DAT_70000000;
      pauVar18 = (u8 (*) [16])(u8 *)DAT_700002c0;
      pauVar15 = (u8 (*) [16])(u8 *)DAT_70000840;
      pauVar19 = (u8 (*) [16])(u8 *)DAT_70001340;
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          DAT_70003fa0 = *(u32 *)puVar16;
          DAT_70003fa4 = *(u32 *)((int)puVar16 + 4);
          DAT_70003fa8 = *(u32 *)puVar16;
          uVar20 = *(u32 *)((int)puVar16 + 4);
          do {
            DI();
            SYNC(0x10);
          } while ((Status & 0x10000) != 0);
          auVar36._8_4_ = DAT_70003fa8;
          auVar36._0_8_ = *puVar16;
          auVar36._12_4_ = uVar20;
          auVar23 = _lqc2(auVar36);
          auVar27 = _vabs(auVar23);
          _vaddabc(in_vf0,auVar31);
          _vmsubbc(auVar27,in_vf0);
          _vaddabc(in_vf0,auVar31);
          _vaddabc(in_vf0,auVar31);
          auVar27 = _vmsubbc(auVar23,in_vf0);
          _vaddabc(in_vf0,auVar32);
          _vaddabc(in_vf0,auVar32);
          auVar24 = _vmsubbc(auVar23,in_vf0);
          auVar23 = _vmini(auVar23,auVar27);
          auVar28 = _vmax(auVar23,auVar24);
          auVar23 = _vmul(auVar28,auVar28);
          auVar26 = _vmulbc(auVar28,auVar32);
          auVar24 = _vmulbc(auVar28,auVar33);
          auVar25 = _vmulbc(auVar28,auVar33);
          auVar27 = _vmul(auVar23,auVar23);
          auVar26 = _vmul(auVar26,auVar23);
          _vmula(auVar24,auVar23);
          auVar24 = _vmulbc(auVar28,auVar33);
          auVar23 = _vmul(auVar27,auVar27);
          _vmadda(auVar26,auVar27);
          _vmadda(auVar25,auVar27);
          _vmaddabc(auVar28,auVar34);
          auVar24 = _vmadd(auVar24,auVar23);
          auVar28 = _lqc2(*pauVar15);
          auVar40 = _lqc2(pauVar15[1]);
          auVar27 = _lqc2(*pauVar18);
          _vmulabc(auVar29,auVar24);
          auVar25 = _vmsubbc(auVar30,auVar24);
          auVar23 = _vadd(auVar35,auVar27);
          auVar27 = _vsub(auVar35,auVar27);
          _vmulabc(auVar30,auVar24);
          auVar26 = _vmaddbc(auVar29,auVar24);
          _vmulabc(auVar29,auVar24);
          auVar38 = _vmsubbc(auVar30,auVar24);
          _vmulabc(auVar30,auVar24);
          auVar39 = _vmaddbc(auVar29,auVar24);
          _vmulabc(auVar25,auVar27);
          auVar24 = _vmaddbc(auVar26,auVar27);
          _vmulabc(auVar25,auVar23);
          auVar36 = _vmaddbc(auVar26,auVar27);
          _vmulabc(auVar25,auVar23);
          auVar37 = _vmaddbc(auVar26,auVar23);
          _vmulabc(auVar25,auVar27);
          auVar25 = _vmaddbc(auVar26,auVar23);
          _vmulabc(auVar38,auVar27);
          auVar26 = _vmaddbc(auVar39,auVar27);
          _vmulabc(auVar38,auVar23);
          auVar41 = _vmaddbc(auVar39,auVar27);
          _vmulabc(auVar38,auVar23);
          auVar42 = _vmaddbc(auVar39,auVar23);
          _vmulabc(auVar38,auVar27);
          auVar38 = _vmaddbc(auVar39,auVar23);
          auVar23 = _vadd(auVar24,auVar28);
          auVar27 = _vadd(auVar36,auVar28);
          auVar24 = _vadd(auVar37,auVar28);
          auVar25 = _vadd(auVar25,auVar28);
          auVar26 = _vadd(auVar26,auVar40);
          auVar28 = _vadd(auVar41,auVar40);
          auVar36 = _vadd(auVar42,auVar40);
          auVar37 = _vadd(auVar38,auVar40);
          auVar23 = _sqc2(auVar23);
          DAT_70003fac = uVar20;
          *(Vec128 *)pauVar19 = auVar23;
          auVar23 = _sqc2(auVar27);
          ((Vec128 *)pauVar19)[1] = auVar23;
          auVar23 = _sqc2(auVar24);
          ((Vec128 *)pauVar19)[2] = auVar23;
          auVar23 = _sqc2(auVar25);
          ((Vec128 *)pauVar19)[3] = auVar23;
          auVar23 = _sqc2(auVar26);
          ((Vec128 *)pauVar19)[4] = auVar23;
          auVar23 = _sqc2(auVar28);
          ((Vec128 *)pauVar19)[5] = auVar23;
          auVar23 = _sqc2(auVar36);
          ((Vec128 *)pauVar19)[6] = auVar23;
          auVar23 = _sqc2(auVar37);
          ((Vec128 *)pauVar19)[7] = auVar23;
          EI();
          iVar9 = iVar9 + 2;
          pauVar15 = pauVar15 + 2;
          pauVar18 = pauVar18 + 1;
          puVar16 = puVar16 + 1;
          pauVar19 = pauVar19 + 8;
        } while (iVar9 < iVar7);
      }
      uVar6 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
      }
      uVar6 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar6 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar5 = getCopCondition(0,0);
        } while (cVar5 == '\0');
        do {
          uVar6 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar6 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x100;
      REG_DMAC_8_SPR_FROM_SADR = 0x1340;
      REG_DMAC_8_SPR_FROM_MADR = (u32)(pauVar12);
      REG_DMAC_8_SPR_FROM_QWC = iVar17 << 4;
      REG_DMAC_8_SPR_FROM_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      pauVar12 = pauVar12 + iVar17 * 0x10;
      pauVar14 = pauVar14 + iVar17 * 4;
      if (iVar7 < 0) {
        iVar8 = iVar7 + 3 >> 2;
      }
      puVar13 = puVar13 + iVar8 * 4;
      if (iVar7 < 0) {
        iVar10 = iVar7 + 1 >> 1;
      }
      param_4 = param_4 + iVar17 * -4;
      puVar11 = puVar11 + iVar10 * 2;
    }
    iVar17 = 0;
    if (0 < param_4) {
      do {
        DAT_70003fa0 = *puVar13;
        DAT_70003fa8 = *puVar13;
        DAT_70003f60 = *(u32 *)puVar11;
        uVar20 = *(u32 *)((int)puVar11 + 4);
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar37._4_4_ = DAT_70003fa4;
        auVar37._0_4_ = DAT_70003fa0;
        auVar37._8_4_ = DAT_70003fa8;
        auVar37._12_4_ = DAT_70003fac;
        auVar23 = _lqc2(auVar37);
        auVar27 = _vabs(auVar23);
        _vaddabc(in_vf0,auVar31);
        _vmsubbc(auVar27,in_vf0);
        _vaddabc(in_vf0,auVar31);
        _vaddabc(in_vf0,auVar31);
        auVar27 = _vmsubbc(auVar23,in_vf0);
        _vaddabc(in_vf0,auVar32);
        _vaddabc(in_vf0,auVar32);
        auVar24 = _vmsubbc(auVar23,in_vf0);
        auVar23 = _vmini(auVar23,auVar27);
        auVar28 = _vmax(auVar23,auVar24);
        auVar23 = _vmul(auVar28,auVar28);
        auVar26 = _vmulbc(auVar28,auVar32);
        auVar24 = _vmulbc(auVar28,auVar33);
        auVar25 = _vmulbc(auVar28,auVar33);
        auVar27 = _vmul(auVar23,auVar23);
        auVar26 = _vmul(auVar26,auVar23);
        _vmula(auVar24,auVar23);
        auVar24 = _vmulbc(auVar28,auVar33);
        auVar23 = _vmul(auVar27,auVar27);
        _vmadda(auVar26,auVar27);
        _vmadda(auVar25,auVar27);
        _vmaddabc(auVar28,auVar34);
        auVar24 = _vmadd(auVar24,auVar23);
        auVar26 = _lqc2(*pauVar14);
        auVar38._8_4_ = DAT_70003f68;
        auVar38._0_8_ = *puVar11;
        auVar38._12_4_ = DAT_70003f6c;
        auVar27 = _lqc2(auVar38);
        _vmulabc(auVar29,auVar24);
        auVar25 = _vmsubbc(auVar30,auVar24);
        auVar23 = _vadd(auVar35,auVar27);
        auVar27 = _vsub(auVar35,auVar27);
        _vmulabc(auVar30,auVar24);
        auVar24 = _vmaddbc(auVar29,auVar24);
        _vmulabc(auVar25,auVar27);
        auVar28 = _vmaddbc(auVar24,auVar27);
        _vmulabc(auVar25,auVar23);
        auVar36 = _vmaddbc(auVar24,auVar27);
        _vmulabc(auVar25,auVar23);
        auVar37 = _vmaddbc(auVar24,auVar23);
        _vmulabc(auVar25,auVar27);
        auVar25 = _vmaddbc(auVar24,auVar23);
        auVar23 = _vadd(auVar28,auVar26);
        auVar27 = _vadd(auVar36,auVar26);
        auVar24 = _vadd(auVar37,auVar26);
        auVar25 = _vadd(auVar25,auVar26);
        auVar23 = _sqc2(auVar23);
        DAT_70003f64 = uVar20;
        *(Vec128 *)pauVar12 = auVar23;
        auVar23 = _sqc2(auVar27);
        ((Vec128 *)pauVar12)[1] = auVar23;
        auVar23 = _sqc2(auVar24);
        ((Vec128 *)pauVar12)[2] = auVar23;
        auVar23 = _sqc2(auVar25);
        ((Vec128 *)pauVar12)[3] = auVar23;
        EI();
        iVar17 = iVar17 + 1;
        pauVar14 = (u8 (*) [16])(*pauVar14 + iVar1);
        puVar11 = (u64 *)((int)puVar11 + iVar3);
        puVar13 = (u32 *)((int)puVar13 + iVar2);
        pauVar12 = (u8 (*) [16])(*pauVar12 + iVar4 * 4);
      } while (iVar17 < param_4);
    }
  }
  else {
    fVar21 = *(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x68);
    fVar22 = *(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x6c);
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    _ctc2(0x3fc90fdb);
    _vnop();
    _vnop();
    auVar31 = _vaddi(in_vf10,in_vuI);
    _ctc2(0x40490fdb);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0x40090fdb);
    _vnop();
    _vnop();
    auVar31 = _vaddi(auVar31,in_vuI);
    _ctc2(0xc0490fdb);
    _vnop();
    _vnop();
    auVar32 = _vaddi(in_vf11,in_vuI);
    uVar20 = 0xc08487ed;
    _ctc2(0xc08487ed);
    _vnop();
    _vnop();
    auVar32 = _vaddi(auVar32,in_vuI);
    _ctc2(0xb94fb21f);
    _vnop();
    _vnop();
    auVar32 = _vaddi(auVar32,in_vuI);
    _ctc2(0xbe2aaaa4);
    _vnop();
    _vnop();
    auVar33 = _vaddi(in_vf12,in_vuI);
    _ctc2(0x3c08873e);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0x362e9c14);
    _vnop();
    _vnop();
    auVar33 = _vaddi(auVar33,in_vuI);
    _ctc2(0x3f800000);
    _vnop();
    _vnop();
    auVar34 = _vaddi(in_vf13,in_vuI);
    EI();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    auVar35._4_4_ = param_2[1] * 0.5;
    auVar35._0_4_ = *param_2 * 0.5;
    auVar35._8_4_ = param_2[2] * 0.5;
    auVar35._12_4_ = uStack_4;
    auVar35 = _lqc2(auVar35);
    auVar30._4_4_ = param_3[1] * 0.5;
    auVar30._0_4_ = *param_3 * 0.5;
    auVar30._8_4_ = param_3[2] * 0.5;
    auVar30._12_4_ = uStack_14;
    auVar30 = _lqc2(auVar30);
    auVar29._4_4_ = fVar22;
    auVar29._0_4_ = fVar21;
    auVar29._8_4_ = fVar21;
    auVar29._12_4_ = fVar22;
    auVar29 = _lqc2(auVar29);
    EI();
    iVar17 = 0;
    if (0 < param_4) {
      do {
        uVar20 = *(u32 *)((int)puVar11 + 4);
        do {
          DI();
          SYNC(0x10);
        } while ((Status & 0x10000) != 0);
        auVar23._4_4_ = uStack_3c;
        auVar23._0_4_ = *puVar13;
        auVar23._8_4_ = *puVar13;
        auVar23._12_4_ = uStack_34;
        auVar23 = _lqc2(auVar23);
        auVar27 = _vabs(auVar23);
        _vaddabc(in_vf0,auVar31);
        _vmsubbc(auVar27,in_vf0);
        _vaddabc(in_vf0,auVar31);
        _vaddabc(in_vf0,auVar31);
        auVar27 = _vmsubbc(auVar23,in_vf0);
        _vaddabc(in_vf0,auVar32);
        _vaddabc(in_vf0,auVar32);
        auVar24 = _vmsubbc(auVar23,in_vf0);
        auVar23 = _vmini(auVar23,auVar27);
        auVar28 = _vmax(auVar23,auVar24);
        auVar23 = _vmul(auVar28,auVar28);
        auVar26 = _vmulbc(auVar28,auVar32);
        auVar24 = _vmulbc(auVar28,auVar33);
        auVar25 = _vmulbc(auVar28,auVar33);
        auVar27 = _vmul(auVar23,auVar23);
        auVar26 = _vmul(auVar26,auVar23);
        _vmula(auVar24,auVar23);
        auVar24 = _vmulbc(auVar28,auVar33);
        auVar23 = _vmul(auVar27,auVar27);
        _vmadda(auVar26,auVar27);
        _vmadda(auVar25,auVar27);
        _vmaddabc(auVar28,auVar34);
        auVar24 = _vmadd(auVar24,auVar23);
        auVar26 = _lqc2(*pauVar14);
        auVar27._8_4_ = fVar21;
        auVar27._0_8_ = *puVar11;
        auVar27._12_4_ = fVar22;
        auVar27 = _lqc2(auVar27);
        _vmulabc(auVar35,auVar24);
        auVar25 = _vmsubbc(auVar30,auVar24);
        auVar23 = _vadd(auVar29,auVar27);
        auVar27 = _vsub(auVar29,auVar27);
        _vmulabc(auVar30,auVar24);
        auVar24 = _vmaddbc(auVar35,auVar24);
        _vmulabc(auVar25,auVar27);
        auVar28 = _vmaddbc(auVar24,auVar27);
        _vmulabc(auVar25,auVar23);
        auVar36 = _vmaddbc(auVar24,auVar27);
        _vmulabc(auVar25,auVar23);
        auVar37 = _vmaddbc(auVar24,auVar23);
        _vmulabc(auVar25,auVar27);
        auVar25 = _vmaddbc(auVar24,auVar23);
        auVar23 = _vadd(auVar28,auVar26);
        auVar27 = _vadd(auVar36,auVar26);
        auVar24 = _vadd(auVar37,auVar26);
        auVar25 = _vadd(auVar25,auVar26);
        auVar23 = _sqc2(auVar23);
        *(Vec128 *)pauVar12 = auVar23;
        auVar23 = _sqc2(auVar27);
        ((Vec128 *)pauVar12)[1] = auVar23;
        auVar23 = _sqc2(auVar24);
        ((Vec128 *)pauVar12)[2] = auVar23;
        auVar23 = _sqc2(auVar25);
        ((Vec128 *)pauVar12)[3] = auVar23;
        EI();
        iVar17 = iVar17 + 1;
        pauVar14 = (u8 (*) [16])(*pauVar14 + iVar1);
        puVar11 = (u64 *)((int)puVar11 + iVar3);
        puVar13 = (u32 *)((int)puVar13 + iVar2);
        pauVar12 = (u8 (*) [16])(*pauVar12 + iVar4 * 4);
      } while (iVar17 < param_4);
    }
  }
  return uVar20;
}

// FUN_00482A50
asm u32 FUN_00482a50(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c920000
  .word 0x00e0802d
  .word 0x8d070010
  .word 0x8c840004
  .word 0x00041880
  .word 0x14e30184
  .word 0x8d11000c
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x3c030001
  .word 0x42000039
  .word 0x0000040f
  .word 0x40046000
  .word 0x00832024
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x3c033f00
  .word 0x44830000
  .word 0x44030000
  .word 0x48c3a800
  .word 0x4a0002ff
  .word 0x4a0002ff
  .word 0x42000038
  .word 0x2a03007f
  .word 0x146000a3
  .word 0x00000000
  .word 0x3c0c7000
  .word 0x3c071001
  .word 0x3c0a0001
  .word 0x24050100
  .word 0x24040200
  .word 0x240301fc
  .word 0x358b1fc0
  .word 0x24081fc0
  .word 0x8ce6d000
  .word 0x30c60100
  .word 0x10c0000d
  .word 0x00000000
  .word 0xace5e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ce6d400
  .word 0x30c60100
  .word 0x10c00015
  .word 0x00000000
  .word 0xace4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ce6d400
  .word 0x30c60100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14c0fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xace4e010
  .word 0xace0d480
  .word 0xacf1d410
  .word 0xace3d420
  .word 0xace5d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8ce6d400
  .word 0x30c60100
  .word 0x10c00014
  .word 0x00000000
  .word 0xace4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ce6d400
  .word 0x30c60100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14c0fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x0180702d
  .word 0x0160682d
  .word 0x0000302d
  .word 0x00000000
  .word 0x42000039
  .word 0x0000040f
  .word 0x40096000
  .word 0x012a4824
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0xd9c10000
  .word 0xd9c20010
  .word 0xd9c30020
  .word 0xd9c40030
  .word 0x4be0099e
  .word 0x4be011de
  .word 0x4be72228
  .word 0x4be642a8
  .word 0x4be152ec
  .word 0x4be2532c
  .word 0x4be25b6c
  .word 0xf9aa0030
  .word 0xf9ab0020
  .word 0xf9ac0000
  .word 0xf9ad0010
  .word 0x25ce0040
  .word 0x25ad0040
  .word 0x42000038
  .word 0x24c60001
  .word 0x28c9007f
  .word 0x1520ffe4
  .word 0x00000000
  .word 0x8ce6d000
  .word 0x30c60100
  .word 0x10c0000c
  .word 0x00000000
  .word 0xace5e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ce6d400
  .word 0x30c60100
  .word 0x10c00015
  .word 0x00000000
  .word 0xace4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ce6d400
  .word 0x30c60100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14c0fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xace5e010
  .word 0xace8d080
  .word 0xacf2d010
  .word 0xace3d020
  .word 0xace5d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2610ff81
  .word 0x26311fc0
  .word 0x2a01007f
  .word 0x1020ff67
  .word 0x26521fc0
  .word 0x120000d7
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24060200
  .word 0x3c031001
  .word 0x00102880
  .word 0xac66e010
  .word 0x24040100
  .word 0xac60d480
  .word 0xac71d410
  .word 0xac65d420
  .word 0xac64d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0xac66e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x3c0e7000
  .word 0x0010082a
  .word 0x35cd1fc0
  .word 0x10200020
  .word 0x0000302d
  .word 0x3c040001
  .word 0x42000039
  .word 0x0000040f
  .word 0x40036000
  .word 0x00641824
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0xd9c10000
  .word 0xd9c20010
  .word 0xd9c30020
  .word 0xd9c40030
  .word 0x4be0099e
  .word 0x4be011de
  .word 0x4be72228
  .word 0x4be642a8
  .word 0x4be152ec
  .word 0x4be2532c
  .word 0x4be25b6c
  .word 0xf9aa0030
  .word 0xf9ab0020
  .word 0xf9ac0000
  .word 0xf9ad0010
  .word 0x25ce0040
  .word 0x25ad0040
  .word 0x42000038
  .word 0x24c60001
  .word 0x00d0182a
  .word 0x1460ffe4
  .word 0x00000000
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24060100
  .word 0x3c031001
  .word 0x24051fc0
  .word 0xac66e010
  .word 0x00102080
  .word 0xac65d080
  .word 0xac72d010
  .word 0xac64d020
  .word 0xac66d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x10000034
  .word 0x00000000
  .word 0x3c030001
  .word 0x42000039
  .word 0x0000040f
  .word 0x40056000
  .word 0x00a32824
  .word 0x00000000
  .word 0x14a0fffa
  .word 0x00000000
  .word 0x3c033f00
  .word 0x44830000
  .word 0x44030000
  .word 0x48c3a800
  .word 0x4a0002ff
  .word 0x4a0002ff
  .word 0x42000038
  .word 0x0010082a
  .word 0x10200022
  .word 0x0000302d
  .word 0x00042080
  .word 0x3c050001
  .word 0x00000000
  .word 0x42000039
  .word 0x0000040f
  .word 0x40036000
  .word 0x00651824
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0xda210000
  .word 0xda220010
  .word 0xda230020
  .word 0xda240030
  .word 0x4be0099e
  .word 0x4be011de
  .word 0x4be72228
  .word 0x4be642a8
  .word 0x4be152ec
  .word 0x4be2532c
  .word 0x4be25b6c
  .word 0xfa4a0030
  .word 0xfa4b0020
  .word 0xfa4c0000
  .word 0xfa4d0010
  .word 0x02278821
  .word 0x02449021
  .word 0x42000038
  .word 0x24c60001
  .word 0x00d0182a
  .word 0x1460ffe3
  .word 0x00000000
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
}

// FUN_00483170
asm u32 FUN_00483170(u32 *param_1,u64 param_2,u64 param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x00e0982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c850004
  .word 0x8d060010
  .word 0x8c910000
  .word 0x8d10000c
  .word 0x00051880
  .word 0x14c3018c
  .word 0x0100902d
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x3c057000
  .word 0xc6400068
  .word 0x34a43fb0
  .word 0x3c030001
  .word 0xe4a03fb0
  .word 0xc640006c
  .word 0xe4a03fb4
  .word 0x42000039
  .word 0x0000040f
  .word 0x40056000
  .word 0x00a32824
  .word 0x00000000
  .word 0x14a0fffa
  .word 0x00000000
  .word 0x3c033f00
  .word 0x44830000
  .word 0x44030000
  .word 0x48c3a800
  .word 0x4a0002ff
  .word 0x4a0002ff
  .word 0xd8810000
  .word 0x4be00962
  .word 0x42000038
  .word 0x2a63007f
  .word 0x146000a3
  .word 0x00000000
  .word 0x3c0a7000
  .word 0x3c051001
  .word 0x3c080001
  .word 0x24040100
  .word 0x24030200
  .word 0x240b01fc
  .word 0x35491fc0
  .word 0x24061fc0
  .word 0x8ca7d000
  .word 0x30e70100
  .word 0x10e0000d
  .word 0x00000000
  .word 0xaca4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca7d400
  .word 0x30e70100
  .word 0x10e00015
  .word 0x00000000
  .word 0xaca3e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca7d400
  .word 0x30e70100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14e0fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xaca3e010
  .word 0xaca0d480
  .word 0xacb0d410
  .word 0xacabd420
  .word 0xaca4d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8ca7d400
  .word 0x30e70100
  .word 0x10e00014
  .word 0x00000000
  .word 0xaca3e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca7d400
  .word 0x30e70100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14e0fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x0140682d
  .word 0x0120602d
  .word 0x0000702d
  .word 0x00000000
  .word 0x42000039
  .word 0x0000040f
  .word 0x40076000
  .word 0x00e83824
  .word 0x00000000
  .word 0x14e0fffa
  .word 0x00000000
  .word 0xd9a10000
  .word 0xd9a20010
  .word 0xd9a30020
  .word 0xd9a40030
  .word 0x4be50998
  .word 0x4be511d9
  .word 0x4be72228
  .word 0x4be642a8
  .word 0x4be152ec
  .word 0x4be2532c
  .word 0x4be25b6c
  .word 0xf98a0030
  .word 0xf98b0020
  .word 0xf98c0000
  .word 0xf98d0010
  .word 0x25ad0040
  .word 0x258c0040
  .word 0x42000038
  .word 0x25ce0001
  .word 0x29c7007f
  .word 0x14e0ffe4
  .word 0x00000000
  .word 0x8ca7d000
  .word 0x30e70100
  .word 0x10e0000c
  .word 0x00000000
  .word 0xaca4e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca7d400
  .word 0x30e70100
  .word 0x10e00015
  .word 0x00000000
  .word 0xaca3e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8ca7d400
  .word 0x30e70100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x14e0fffa
  .word 0x00000000
  .word 0x00000000
  .word 0xaca4e010
  .word 0xaca6d080
  .word 0xacb1d010
  .word 0xacabd020
  .word 0xaca4d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2673ff81
  .word 0x26101fc0
  .word 0x2a61007f
  .word 0x1020ff67
  .word 0x26311fc0
  .word 0x126000dd
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24060200
  .word 0x3c031001
  .word 0x00132880
  .word 0xac66e010
  .word 0x24040100
  .word 0xac60d480
  .word 0xac70d410
  .word 0xac65d420
  .word 0xac64d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0xac66e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x3c0d7000
  .word 0x0013082a
  .word 0x35ac1fc0
  .word 0x10200020
  .word 0x0000282d
  .word 0x3c040001
  .word 0x42000039
  .word 0x0000040f
  .word 0x40036000
  .word 0x00641824
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0xd9a10000
  .word 0xd9a20010
  .word 0xd9a30020
  .word 0xd9a40030
  .word 0x4be50998
  .word 0x4be511d9
  .word 0x4be72228
  .word 0x4be642a8
  .word 0x4be152ec
  .word 0x4be2532c
  .word 0x4be25b6c
  .word 0xf98a0030
  .word 0xf98b0020
  .word 0xf98c0000
  .word 0xf98d0010
  .word 0x25ad0040
  .word 0x258c0040
  .word 0x42000038
  .word 0x24a50001
  .word 0x00b3182a
  .word 0x1460ffe4
  .word 0x00000000
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1080000c
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800014
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x24060100
  .word 0x3c031001
  .word 0x24051fc0
  .word 0xac66e010
  .word 0x00132080
  .word 0xac65d080
  .word 0xac71d010
  .word 0xac64d020
  .word 0xac66d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x1000003a
  .word 0x00000000
  .word 0xc6410068
  .word 0x3c030001
  .word 0xc640006c
  .word 0xe7a10050
  .word 0xe7a00054
  .word 0x42000039
  .word 0x0000040f
  .word 0x40046000
  .word 0x00832024
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x3c033f00
  .word 0x27a40050
  .word 0x44830000
  .word 0x44030000
  .word 0x48c3a800
  .word 0x4a0002ff
  .word 0x4a0002ff
  .word 0xd8810000
  .word 0x4be00962
  .word 0x42000038
  .word 0x0013082a
  .word 0x10200021
  .word 0x0000382d
  .word 0x00052080
  .word 0x3c050001
  .word 0x42000039
  .word 0x0000040f
  .word 0x40036000
  .word 0x00651824
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0xda010000
  .word 0xda020010
  .word 0xda030020
  .word 0xda040030
  .word 0x4be50998
  .word 0x4be511d9
  .word 0x4be72228
  .word 0x4be642a8
  .word 0x4be152ec
  .word 0x4be2532c
  .word 0x4be25b6c
  .word 0xfa2a0030
  .word 0xfa2b0020
  .word 0xfa2c0000
  .word 0xfa2d0010
  .word 0x02068021
  .word 0x02248821
  .word 0x42000038
  .word 0x24e70001
  .word 0x00f3182a
  .word 0x1460ffe4
  .word 0x00000000
  .word 0x00000000
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

// FUN_004838E0 NONMATCHING

void FUN_004838e0(u32 *param_1,int param_2,int param_3)

{
  u8 uVar1;
  u8 uVar2;
  u8 uVar3;
  char cVar4;
  u8 bVar5;
  u32 *puVar6;
  u32 *puVar7;
  int iVar8;
  u32 *puVar9;
  u32 *puVar10;
  u32 *puVar11;
  u32 *puVar12;
  u32 *puVar13;
  u8 *puVar14;
  u32 *puVar15;
  u32 *puVar16;
  int iVar17;
  u32 *puVar18;
  u32 *puVar19;
  u32 *puVar20;
  u32 *puVar21;
  u32 *puVar22;
  u32 *puVar23;
  u32 *puVar24;
  u32 *puVar25;
  u32 *puVar26;
  u32 *puVar27;
  u32 *puVar28;
  u32 *puVar29;
  u32 *puVar30;
  u32 *puVar31;
  u32 *puVar32;
  u32 *puVar33;
  u32 *puVar34;
  u32 *puVar35;
  u32 *puVar36;
  u32 *puVar37;
  u32 *puVar38;
  u32 *puVar39;
  u32 *puVar40;
  u32 *puVar41;
  int iVar42;
  u32 *puVar43;
  u32 *puVar44;
  u32 *puVar45;
  float fVar46;
  u32 uVar47;
  
  iVar17 = param_1[1];
  iVar8 = *(int *)(param_3 + 0x28);
  param_1 = (u32 *)*param_1;
  puVar38 = *(u32 **)(param_3 + 0x24);
  if (iVar8 == iVar17) {
    FlushCache(0);
    uVar47 = REG_DMAC_8_SPR_FROM_CHCR;
    if ((uVar47 & 0x100) != 0) {
      REG_DMAC_PCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
    }
    uVar47 = REG_DMAC_9_SPR_TO_CHCR;
    if ((uVar47 & 0x100) != 0) {
      REG_DMAC_PCR = 0x200;
      SYNC(0);
      SYNC(0x10);
      do {
        cVar4 = getCopCondition(0,0);
      } while (cVar4 == '\0');
      do {
        uVar47 = REG_DMAC_9_SPR_TO_CHCR;
      } while ((uVar47 & 0x100) != 0);
    }
    if (0x330 < param_2) {
      do {
        uVar47 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar47 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar47 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar47 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar47 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar47 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x200;
        REG_DMAC_9_SPR_TO_SADR = 0;
        REG_DMAC_9_SPR_TO_MADR = (u32)(puVar38);
        REG_DMAC_9_SPR_TO_QWC = 0xcc;
        REG_DMAC_9_SPR_TO_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        uVar47 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar47 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar47 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar47 & 0x100) != 0);
        }
        puVar6 = (u32 *)((u8 *)DAT_70000000);
        iVar17 = 0;
        puVar14 = (u8 *)DAT_70000cc0;
        do {
          uVar1 = *(u8 *)((int)puVar6 + 1);
          iVar17 = iVar17 + 8;
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          *puVar14 = *(u8 *)puVar6;
          puVar14[1] = uVar1;
          puVar14[2] = uVar2;
          puVar14[3] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 1);
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          puVar14[4] = *(u8 *)puVar6;
          puVar14[5] = uVar1;
          puVar14[6] = uVar2;
          puVar14[7] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 1);
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          puVar14[8] = *(u8 *)puVar6;
          puVar14[9] = uVar1;
          puVar14[10] = uVar2;
          puVar14[0xb] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 1);
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          puVar14[0xc] = *(u8 *)puVar6;
          puVar14[0xd] = uVar1;
          puVar14[0xe] = uVar2;
          puVar14[0xf] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 5);
          uVar2 = *(u8 *)((int)puVar6 + 6);
          uVar3 = *(u8 *)((int)puVar6 + 7);
          puVar14[0x10] = *(u8 *)(puVar6 + 1);
          puVar14[0x11] = uVar1;
          puVar14[0x12] = uVar2;
          puVar14[0x13] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 5);
          uVar2 = *(u8 *)((int)puVar6 + 6);
          uVar3 = *(u8 *)((int)puVar6 + 7);
          puVar14[0x14] = *(u8 *)(puVar6 + 1);
          puVar14[0x15] = uVar1;
          puVar14[0x16] = uVar2;
          puVar14[0x17] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 5);
          uVar2 = *(u8 *)((int)puVar6 + 6);
          uVar3 = *(u8 *)((int)puVar6 + 7);
          puVar14[0x18] = *(u8 *)(puVar6 + 1);
          puVar14[0x19] = uVar1;
          puVar14[0x1a] = uVar2;
          puVar14[0x1b] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 5);
          uVar2 = *(u8 *)((int)puVar6 + 6);
          uVar3 = *(u8 *)((int)puVar6 + 7);
          puVar14[0x1c] = *(u8 *)(puVar6 + 1);
          puVar14[0x1d] = uVar1;
          puVar14[0x1e] = uVar2;
          puVar14[0x1f] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 9);
          uVar2 = *(u8 *)((int)puVar6 + 10);
          uVar3 = *(u8 *)((int)puVar6 + 0xb);
          puVar14[0x20] = *(u8 *)(puVar6 + 2);
          puVar14[0x21] = uVar1;
          puVar14[0x22] = uVar2;
          puVar14[0x23] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 9);
          uVar2 = *(u8 *)((int)puVar6 + 10);
          uVar3 = *(u8 *)((int)puVar6 + 0xb);
          puVar14[0x24] = *(u8 *)(puVar6 + 2);
          puVar14[0x25] = uVar1;
          puVar14[0x26] = uVar2;
          puVar14[0x27] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 9);
          uVar2 = *(u8 *)((int)puVar6 + 10);
          uVar3 = *(u8 *)((int)puVar6 + 0xb);
          puVar14[0x28] = *(u8 *)(puVar6 + 2);
          puVar14[0x29] = uVar1;
          puVar14[0x2a] = uVar2;
          puVar14[0x2b] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 9);
          uVar2 = *(u8 *)((int)puVar6 + 10);
          uVar3 = *(u8 *)((int)puVar6 + 0xb);
          puVar14[0x2c] = *(u8 *)(puVar6 + 2);
          puVar14[0x2d] = uVar1;
          puVar14[0x2e] = uVar2;
          puVar14[0x2f] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0xd);
          uVar2 = *(u8 *)((int)puVar6 + 0xe);
          uVar3 = *(u8 *)((int)puVar6 + 0xf);
          puVar14[0x30] = *(u8 *)(puVar6 + 3);
          puVar14[0x31] = uVar1;
          puVar14[0x32] = uVar2;
          puVar14[0x33] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0xd);
          uVar2 = *(u8 *)((int)puVar6 + 0xe);
          uVar3 = *(u8 *)((int)puVar6 + 0xf);
          puVar14[0x34] = *(u8 *)(puVar6 + 3);
          puVar14[0x35] = uVar1;
          puVar14[0x36] = uVar2;
          puVar14[0x37] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0xd);
          uVar2 = *(u8 *)((int)puVar6 + 0xe);
          uVar3 = *(u8 *)((int)puVar6 + 0xf);
          puVar14[0x38] = *(u8 *)(puVar6 + 3);
          puVar14[0x39] = uVar1;
          puVar14[0x3a] = uVar2;
          puVar14[0x3b] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0xd);
          uVar2 = *(u8 *)((int)puVar6 + 0xe);
          uVar3 = *(u8 *)((int)puVar6 + 0xf);
          puVar14[0x3c] = *(u8 *)(puVar6 + 3);
          puVar14[0x3d] = uVar1;
          puVar14[0x3e] = uVar2;
          puVar14[0x3f] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x11);
          uVar2 = *(u8 *)((int)puVar6 + 0x12);
          uVar3 = *(u8 *)((int)puVar6 + 0x13);
          puVar14[0x40] = *(u8 *)(puVar6 + 4);
          puVar14[0x41] = uVar1;
          puVar14[0x42] = uVar2;
          puVar14[0x43] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x11);
          uVar2 = *(u8 *)((int)puVar6 + 0x12);
          uVar3 = *(u8 *)((int)puVar6 + 0x13);
          puVar14[0x44] = *(u8 *)(puVar6 + 4);
          puVar14[0x45] = uVar1;
          puVar14[0x46] = uVar2;
          puVar14[0x47] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x11);
          uVar2 = *(u8 *)((int)puVar6 + 0x12);
          uVar3 = *(u8 *)((int)puVar6 + 0x13);
          puVar14[0x48] = *(u8 *)(puVar6 + 4);
          puVar14[0x49] = uVar1;
          puVar14[0x4a] = uVar2;
          puVar14[0x4b] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x11);
          uVar2 = *(u8 *)((int)puVar6 + 0x12);
          uVar3 = *(u8 *)((int)puVar6 + 0x13);
          puVar14[0x4c] = *(u8 *)(puVar6 + 4);
          puVar14[0x4d] = uVar1;
          puVar14[0x4e] = uVar2;
          puVar14[0x4f] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x15);
          uVar2 = *(u8 *)((int)puVar6 + 0x16);
          uVar3 = *(u8 *)((int)puVar6 + 0x17);
          puVar14[0x50] = *(u8 *)(puVar6 + 5);
          puVar14[0x51] = uVar1;
          puVar14[0x52] = uVar2;
          puVar14[0x53] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x15);
          uVar2 = *(u8 *)((int)puVar6 + 0x16);
          uVar3 = *(u8 *)((int)puVar6 + 0x17);
          puVar14[0x54] = *(u8 *)(puVar6 + 5);
          puVar14[0x55] = uVar1;
          puVar14[0x56] = uVar2;
          puVar14[0x57] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x15);
          uVar2 = *(u8 *)((int)puVar6 + 0x16);
          uVar3 = *(u8 *)((int)puVar6 + 0x17);
          puVar14[0x58] = *(u8 *)(puVar6 + 5);
          puVar14[0x59] = uVar1;
          puVar14[0x5a] = uVar2;
          puVar14[0x5b] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x15);
          uVar2 = *(u8 *)((int)puVar6 + 0x16);
          uVar3 = *(u8 *)((int)puVar6 + 0x17);
          puVar14[0x5c] = *(u8 *)(puVar6 + 5);
          puVar14[0x5d] = uVar1;
          puVar14[0x5e] = uVar2;
          puVar14[0x5f] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x19);
          uVar2 = *(u8 *)((int)puVar6 + 0x1a);
          uVar3 = *(u8 *)((int)puVar6 + 0x1b);
          puVar14[0x60] = *(u8 *)(puVar6 + 6);
          puVar14[0x61] = uVar1;
          puVar14[0x62] = uVar2;
          puVar14[99] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x19);
          uVar2 = *(u8 *)((int)puVar6 + 0x1a);
          uVar3 = *(u8 *)((int)puVar6 + 0x1b);
          puVar14[100] = *(u8 *)(puVar6 + 6);
          puVar14[0x65] = uVar1;
          puVar14[0x66] = uVar2;
          puVar14[0x67] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x19);
          uVar2 = *(u8 *)((int)puVar6 + 0x1a);
          uVar3 = *(u8 *)((int)puVar6 + 0x1b);
          puVar14[0x68] = *(u8 *)(puVar6 + 6);
          puVar14[0x69] = uVar1;
          puVar14[0x6a] = uVar2;
          puVar14[0x6b] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x19);
          uVar2 = *(u8 *)((int)puVar6 + 0x1a);
          uVar3 = *(u8 *)((int)puVar6 + 0x1b);
          puVar14[0x6c] = *(u8 *)(puVar6 + 6);
          puVar14[0x6d] = uVar1;
          puVar14[0x6e] = uVar2;
          puVar14[0x6f] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x1d);
          uVar2 = *(u8 *)((int)puVar6 + 0x1e);
          uVar3 = *(u8 *)((int)puVar6 + 0x1f);
          puVar14[0x70] = *(u8 *)(puVar6 + 7);
          puVar14[0x71] = uVar1;
          puVar14[0x72] = uVar2;
          puVar14[0x73] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x1d);
          uVar2 = *(u8 *)((int)puVar6 + 0x1e);
          uVar3 = *(u8 *)((int)puVar6 + 0x1f);
          puVar14[0x74] = *(u8 *)(puVar6 + 7);
          puVar14[0x75] = uVar1;
          puVar14[0x76] = uVar2;
          puVar14[0x77] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x1d);
          uVar2 = *(u8 *)((int)puVar6 + 0x1e);
          uVar3 = *(u8 *)((int)puVar6 + 0x1f);
          puVar14[0x78] = *(u8 *)(puVar6 + 7);
          puVar14[0x79] = uVar1;
          puVar14[0x7a] = uVar2;
          puVar14[0x7b] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 0x1d);
          uVar2 = *(u8 *)((int)puVar6 + 0x1e);
          uVar3 = *(u8 *)((int)puVar6 + 0x1f);
          puVar14[0x7c] = *(u8 *)(puVar6 + 7);
          puVar6 = puVar6 + 8;
          puVar14[0x7d] = uVar1;
          puVar14[0x7e] = uVar2;
          puVar14[0x7f] = uVar3;
          puVar14 = puVar14 + 0x80;
        } while (iVar17 < 0x330);
        uVar47 = REG_DMAC_8_SPR_FROM_CHCR;
        if ((uVar47 & 0x100) != 0) {
          REG_DMAC_PCR = 0x100;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
        }
        uVar47 = REG_DMAC_9_SPR_TO_CHCR;
        if ((uVar47 & 0x100) != 0) {
          REG_DMAC_PCR = 0x200;
          SYNC(0);
          SYNC(0x10);
          do {
            cVar4 = getCopCondition(0,0);
          } while (cVar4 == '\0');
          do {
            uVar47 = REG_DMAC_9_SPR_TO_CHCR;
          } while ((uVar47 & 0x100) != 0);
        }
        REG_DMAC_STAT = 0x100;
        REG_DMAC_8_SPR_FROM_SADR = 0xcc0;
        REG_DMAC_8_SPR_FROM_MADR = (u32)(param_1);
        REG_DMAC_8_SPR_FROM_QWC = 0x330;
        REG_DMAC_8_SPR_FROM_CHCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        param_2 = param_2 + -0x330;
        puVar38 = puVar38 + 0x330;
        param_1 = param_1 + 0xcc0;
      } while (0x330 < param_2);
    }
    if (3 < param_2) {
      iVar17 = param_2;
      if (param_2 < 0) {
        iVar17 = param_2 + 3;
      }
      iVar17 = iVar17 >> 2;
      iVar8 = iVar17 * 4;
      uVar47 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar47 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar47 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar47 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar47 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar47 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x200;
      REG_DMAC_9_SPR_TO_SADR = 0;
      REG_DMAC_9_SPR_TO_MADR = (u32)(puVar38);
      fVar46 = (float)iVar8 * 0.25;
      if (fVar46 < 2.1474836e+09) {
        uVar47 = (u32)fVar46;
      }
      else {
        uVar47 = (int)(fVar46 - 2.1474836e+09) | 0x80000000;
      }
      REG_DMAC_9_SPR_TO_QWC = uVar47;
      REG_DMAC_9_SPR_TO_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      uVar47 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar47 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar47 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar47 & 0x100) != 0);
      }
      puVar6 = (u32 *)((u8 *)DAT_70000000);
      iVar42 = 0;
      puVar14 = (u8 *)DAT_70000cc0;
      if (0 < iVar8) {
        if (8 < iVar8) {
          bVar5 = 0;
          if ((-1 < iVar8) && (iVar8 < 0x7fffffff)) {
            bVar5 = 1;
          }
          if (bVar5) {
            do {
              iVar42 = iVar42 + 8;
              uVar1 = *(u8 *)((int)puVar6 + 1);
              uVar2 = *(u8 *)((int)puVar6 + 2);
              uVar3 = *(u8 *)((int)puVar6 + 3);
              *puVar14 = *(u8 *)puVar6;
              puVar14[1] = uVar1;
              puVar14[2] = uVar2;
              puVar14[3] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 1);
              uVar2 = *(u8 *)((int)puVar6 + 2);
              uVar3 = *(u8 *)((int)puVar6 + 3);
              puVar14[4] = *(u8 *)puVar6;
              puVar14[5] = uVar1;
              puVar14[6] = uVar2;
              puVar14[7] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 1);
              uVar2 = *(u8 *)((int)puVar6 + 2);
              uVar3 = *(u8 *)((int)puVar6 + 3);
              puVar14[8] = *(u8 *)puVar6;
              puVar14[9] = uVar1;
              puVar14[10] = uVar2;
              puVar14[0xb] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 1);
              uVar2 = *(u8 *)((int)puVar6 + 2);
              uVar3 = *(u8 *)((int)puVar6 + 3);
              puVar14[0xc] = *(u8 *)puVar6;
              puVar14[0xd] = uVar1;
              puVar14[0xe] = uVar2;
              puVar14[0xf] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 5);
              uVar2 = *(u8 *)((int)puVar6 + 6);
              uVar3 = *(u8 *)((int)puVar6 + 7);
              puVar14[0x10] = *(u8 *)(puVar6 + 1);
              puVar14[0x11] = uVar1;
              puVar14[0x12] = uVar2;
              puVar14[0x13] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 5);
              uVar2 = *(u8 *)((int)puVar6 + 6);
              uVar3 = *(u8 *)((int)puVar6 + 7);
              puVar14[0x14] = *(u8 *)(puVar6 + 1);
              puVar14[0x15] = uVar1;
              puVar14[0x16] = uVar2;
              puVar14[0x17] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 5);
              uVar2 = *(u8 *)((int)puVar6 + 6);
              uVar3 = *(u8 *)((int)puVar6 + 7);
              puVar14[0x18] = *(u8 *)(puVar6 + 1);
              puVar14[0x19] = uVar1;
              puVar14[0x1a] = uVar2;
              puVar14[0x1b] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 5);
              uVar2 = *(u8 *)((int)puVar6 + 6);
              uVar3 = *(u8 *)((int)puVar6 + 7);
              puVar14[0x1c] = *(u8 *)(puVar6 + 1);
              puVar14[0x1d] = uVar1;
              puVar14[0x1e] = uVar2;
              puVar14[0x1f] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 9);
              uVar2 = *(u8 *)((int)puVar6 + 10);
              uVar3 = *(u8 *)((int)puVar6 + 0xb);
              puVar14[0x20] = *(u8 *)(puVar6 + 2);
              puVar14[0x21] = uVar1;
              puVar14[0x22] = uVar2;
              puVar14[0x23] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 9);
              uVar2 = *(u8 *)((int)puVar6 + 10);
              uVar3 = *(u8 *)((int)puVar6 + 0xb);
              puVar14[0x24] = *(u8 *)(puVar6 + 2);
              puVar14[0x25] = uVar1;
              puVar14[0x26] = uVar2;
              puVar14[0x27] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 9);
              uVar2 = *(u8 *)((int)puVar6 + 10);
              uVar3 = *(u8 *)((int)puVar6 + 0xb);
              puVar14[0x28] = *(u8 *)(puVar6 + 2);
              puVar14[0x29] = uVar1;
              puVar14[0x2a] = uVar2;
              puVar14[0x2b] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 9);
              uVar2 = *(u8 *)((int)puVar6 + 10);
              uVar3 = *(u8 *)((int)puVar6 + 0xb);
              puVar14[0x2c] = *(u8 *)(puVar6 + 2);
              puVar14[0x2d] = uVar1;
              puVar14[0x2e] = uVar2;
              puVar14[0x2f] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0xd);
              uVar2 = *(u8 *)((int)puVar6 + 0xe);
              uVar3 = *(u8 *)((int)puVar6 + 0xf);
              puVar14[0x30] = *(u8 *)(puVar6 + 3);
              puVar14[0x31] = uVar1;
              puVar14[0x32] = uVar2;
              puVar14[0x33] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0xd);
              uVar2 = *(u8 *)((int)puVar6 + 0xe);
              uVar3 = *(u8 *)((int)puVar6 + 0xf);
              puVar14[0x34] = *(u8 *)(puVar6 + 3);
              puVar14[0x35] = uVar1;
              puVar14[0x36] = uVar2;
              puVar14[0x37] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0xd);
              uVar2 = *(u8 *)((int)puVar6 + 0xe);
              uVar3 = *(u8 *)((int)puVar6 + 0xf);
              puVar14[0x38] = *(u8 *)(puVar6 + 3);
              puVar14[0x39] = uVar1;
              puVar14[0x3a] = uVar2;
              puVar14[0x3b] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0xd);
              uVar2 = *(u8 *)((int)puVar6 + 0xe);
              uVar3 = *(u8 *)((int)puVar6 + 0xf);
              puVar14[0x3c] = *(u8 *)(puVar6 + 3);
              puVar14[0x3d] = uVar1;
              puVar14[0x3e] = uVar2;
              puVar14[0x3f] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x11);
              uVar2 = *(u8 *)((int)puVar6 + 0x12);
              uVar3 = *(u8 *)((int)puVar6 + 0x13);
              puVar14[0x40] = *(u8 *)(puVar6 + 4);
              puVar14[0x41] = uVar1;
              puVar14[0x42] = uVar2;
              puVar14[0x43] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x11);
              uVar2 = *(u8 *)((int)puVar6 + 0x12);
              uVar3 = *(u8 *)((int)puVar6 + 0x13);
              puVar14[0x44] = *(u8 *)(puVar6 + 4);
              puVar14[0x45] = uVar1;
              puVar14[0x46] = uVar2;
              puVar14[0x47] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x11);
              uVar2 = *(u8 *)((int)puVar6 + 0x12);
              uVar3 = *(u8 *)((int)puVar6 + 0x13);
              puVar14[0x48] = *(u8 *)(puVar6 + 4);
              puVar14[0x49] = uVar1;
              puVar14[0x4a] = uVar2;
              puVar14[0x4b] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x11);
              uVar2 = *(u8 *)((int)puVar6 + 0x12);
              uVar3 = *(u8 *)((int)puVar6 + 0x13);
              puVar14[0x4c] = *(u8 *)(puVar6 + 4);
              puVar14[0x4d] = uVar1;
              puVar14[0x4e] = uVar2;
              puVar14[0x4f] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x15);
              uVar2 = *(u8 *)((int)puVar6 + 0x16);
              uVar3 = *(u8 *)((int)puVar6 + 0x17);
              puVar14[0x50] = *(u8 *)(puVar6 + 5);
              puVar14[0x51] = uVar1;
              puVar14[0x52] = uVar2;
              puVar14[0x53] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x15);
              uVar2 = *(u8 *)((int)puVar6 + 0x16);
              uVar3 = *(u8 *)((int)puVar6 + 0x17);
              puVar14[0x54] = *(u8 *)(puVar6 + 5);
              puVar14[0x55] = uVar1;
              puVar14[0x56] = uVar2;
              puVar14[0x57] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x15);
              uVar2 = *(u8 *)((int)puVar6 + 0x16);
              uVar3 = *(u8 *)((int)puVar6 + 0x17);
              puVar14[0x58] = *(u8 *)(puVar6 + 5);
              puVar14[0x59] = uVar1;
              puVar14[0x5a] = uVar2;
              puVar14[0x5b] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x15);
              uVar2 = *(u8 *)((int)puVar6 + 0x16);
              uVar3 = *(u8 *)((int)puVar6 + 0x17);
              puVar14[0x5c] = *(u8 *)(puVar6 + 5);
              puVar14[0x5d] = uVar1;
              puVar14[0x5e] = uVar2;
              puVar14[0x5f] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x19);
              uVar2 = *(u8 *)((int)puVar6 + 0x1a);
              uVar3 = *(u8 *)((int)puVar6 + 0x1b);
              puVar14[0x60] = *(u8 *)(puVar6 + 6);
              puVar14[0x61] = uVar1;
              puVar14[0x62] = uVar2;
              puVar14[99] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x19);
              uVar2 = *(u8 *)((int)puVar6 + 0x1a);
              uVar3 = *(u8 *)((int)puVar6 + 0x1b);
              puVar14[100] = *(u8 *)(puVar6 + 6);
              puVar14[0x65] = uVar1;
              puVar14[0x66] = uVar2;
              puVar14[0x67] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x19);
              uVar2 = *(u8 *)((int)puVar6 + 0x1a);
              uVar3 = *(u8 *)((int)puVar6 + 0x1b);
              puVar14[0x68] = *(u8 *)(puVar6 + 6);
              puVar14[0x69] = uVar1;
              puVar14[0x6a] = uVar2;
              puVar14[0x6b] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x19);
              uVar2 = *(u8 *)((int)puVar6 + 0x1a);
              uVar3 = *(u8 *)((int)puVar6 + 0x1b);
              puVar14[0x6c] = *(u8 *)(puVar6 + 6);
              puVar14[0x6d] = uVar1;
              puVar14[0x6e] = uVar2;
              puVar14[0x6f] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x1d);
              uVar2 = *(u8 *)((int)puVar6 + 0x1e);
              uVar3 = *(u8 *)((int)puVar6 + 0x1f);
              puVar14[0x70] = *(u8 *)(puVar6 + 7);
              puVar14[0x71] = uVar1;
              puVar14[0x72] = uVar2;
              puVar14[0x73] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x1d);
              uVar2 = *(u8 *)((int)puVar6 + 0x1e);
              uVar3 = *(u8 *)((int)puVar6 + 0x1f);
              puVar14[0x74] = *(u8 *)(puVar6 + 7);
              puVar14[0x75] = uVar1;
              puVar14[0x76] = uVar2;
              puVar14[0x77] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x1d);
              uVar2 = *(u8 *)((int)puVar6 + 0x1e);
              uVar3 = *(u8 *)((int)puVar6 + 0x1f);
              puVar14[0x78] = *(u8 *)(puVar6 + 7);
              puVar14[0x79] = uVar1;
              puVar14[0x7a] = uVar2;
              puVar14[0x7b] = uVar3;
              uVar1 = *(u8 *)((int)puVar6 + 0x1d);
              uVar2 = *(u8 *)((int)puVar6 + 0x1e);
              uVar3 = *(u8 *)((int)puVar6 + 0x1f);
              puVar14[0x7c] = *(u8 *)(puVar6 + 7);
              puVar6 = puVar6 + 8;
              puVar14[0x7d] = uVar1;
              puVar14[0x7e] = uVar2;
              puVar14[0x7f] = uVar3;
              puVar14 = puVar14 + 0x80;
            } while (iVar42 < iVar8 + -8);
          }
        }
        for (; iVar42 < iVar8; iVar42 = iVar42 + 1) {
          uVar1 = *(u8 *)((int)puVar6 + 1);
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          *puVar14 = *(u8 *)puVar6;
          puVar14[1] = uVar1;
          puVar14[2] = uVar2;
          puVar14[3] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 1);
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          puVar14[4] = *(u8 *)puVar6;
          puVar14[5] = uVar1;
          puVar14[6] = uVar2;
          puVar14[7] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 1);
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          puVar14[8] = *(u8 *)puVar6;
          puVar14[9] = uVar1;
          puVar14[10] = uVar2;
          puVar14[0xb] = uVar3;
          uVar1 = *(u8 *)((int)puVar6 + 1);
          uVar2 = *(u8 *)((int)puVar6 + 2);
          uVar3 = *(u8 *)((int)puVar6 + 3);
          puVar14[0xc] = *(u8 *)puVar6;
          puVar6 = puVar6 + 1;
          puVar14[0xd] = uVar1;
          puVar14[0xe] = uVar2;
          puVar14[0xf] = uVar3;
          puVar14 = puVar14 + 0x10;
        }
      }
      uVar47 = REG_DMAC_8_SPR_FROM_CHCR;
      if ((uVar47 & 0x100) != 0) {
        REG_DMAC_PCR = 0x100;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
      }
      uVar47 = REG_DMAC_9_SPR_TO_CHCR;
      if ((uVar47 & 0x100) != 0) {
        REG_DMAC_PCR = 0x200;
        SYNC(0);
        SYNC(0x10);
        do {
          cVar4 = getCopCondition(0,0);
        } while (cVar4 == '\0');
        do {
          uVar47 = REG_DMAC_9_SPR_TO_CHCR;
        } while ((uVar47 & 0x100) != 0);
      }
      REG_DMAC_STAT = 0x100;
      REG_DMAC_8_SPR_FROM_SADR = 0xcc0;
      REG_DMAC_8_SPR_FROM_MADR = (u32)(param_1);
      REG_DMAC_8_SPR_FROM_QWC = iVar8;
      REG_DMAC_8_SPR_FROM_CHCR = 0x100;
      SYNC(0);
      SYNC(0x10);
      if (2.1474836e+09 <= fVar46) {
        fVar46 = fVar46 - 2.1474836e+09;
      }
      puVar38 = puVar38 + (int)fVar46 * 4;
      param_1 = param_1 + iVar17 * 0x10;
      param_2 = param_2 + iVar17 * -4;
    }
    if ((param_2 != 0) && (iVar17 = 0, 0 < param_2)) {
      if (8 < param_2) {
        bVar5 = 0;
        if ((-1 < param_2) && (param_2 < 0x7fffffff)) {
          bVar5 = 1;
        }
        if (bVar5) {
          do {
            iVar17 = iVar17 + 8;
            uVar1 = *(u8 *)((int)puVar38 + 1);
            uVar2 = *(u8 *)((int)puVar38 + 2);
            uVar3 = *(u8 *)((int)puVar38 + 3);
            *(u8 *)param_1 = *(u8 *)puVar38;
            *(u8 *)((int)param_1 + 1) = uVar1;
            *(u8 *)((int)param_1 + 2) = uVar2;
            *(u8 *)((int)param_1 + 3) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 1);
            uVar2 = *(u8 *)((int)puVar38 + 2);
            uVar3 = *(u8 *)((int)puVar38 + 3);
            *(u8 *)(param_1 + 1) = *(u8 *)puVar38;
            *(u8 *)((int)param_1 + 5) = uVar1;
            *(u8 *)((int)param_1 + 6) = uVar2;
            *(u8 *)((int)param_1 + 7) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 1);
            uVar2 = *(u8 *)((int)puVar38 + 2);
            uVar3 = *(u8 *)((int)puVar38 + 3);
            *(u8 *)(param_1 + 2) = *(u8 *)puVar38;
            *(u8 *)((int)param_1 + 9) = uVar1;
            *(u8 *)((int)param_1 + 10) = uVar2;
            *(u8 *)((int)param_1 + 0xb) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 1);
            uVar2 = *(u8 *)((int)puVar38 + 2);
            uVar3 = *(u8 *)((int)puVar38 + 3);
            *(u8 *)(param_1 + 3) = *(u8 *)puVar38;
            *(u8 *)((int)param_1 + 0xd) = uVar1;
            *(u8 *)((int)param_1 + 0xe) = uVar2;
            *(u8 *)((int)param_1 + 0xf) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 5);
            uVar2 = *(u8 *)((int)puVar38 + 6);
            uVar3 = *(u8 *)((int)puVar38 + 7);
            *(u8 *)(param_1 + 4) = *(u8 *)(puVar38 + 1);
            *(u8 *)((int)param_1 + 0x11) = uVar1;
            *(u8 *)((int)param_1 + 0x12) = uVar2;
            *(u8 *)((int)param_1 + 0x13) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 5);
            uVar2 = *(u8 *)((int)puVar38 + 6);
            uVar3 = *(u8 *)((int)puVar38 + 7);
            *(u8 *)(param_1 + 5) = *(u8 *)(puVar38 + 1);
            *(u8 *)((int)param_1 + 0x15) = uVar1;
            *(u8 *)((int)param_1 + 0x16) = uVar2;
            *(u8 *)((int)param_1 + 0x17) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 5);
            uVar2 = *(u8 *)((int)puVar38 + 6);
            uVar3 = *(u8 *)((int)puVar38 + 7);
            *(u8 *)(param_1 + 6) = *(u8 *)(puVar38 + 1);
            *(u8 *)((int)param_1 + 0x19) = uVar1;
            *(u8 *)((int)param_1 + 0x1a) = uVar2;
            *(u8 *)((int)param_1 + 0x1b) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 5);
            uVar2 = *(u8 *)((int)puVar38 + 6);
            uVar3 = *(u8 *)((int)puVar38 + 7);
            *(u8 *)(param_1 + 7) = *(u8 *)(puVar38 + 1);
            *(u8 *)((int)param_1 + 0x1d) = uVar1;
            *(u8 *)((int)param_1 + 0x1e) = uVar2;
            *(u8 *)((int)param_1 + 0x1f) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 9);
            uVar2 = *(u8 *)((int)puVar38 + 10);
            uVar3 = *(u8 *)((int)puVar38 + 0xb);
            *(u8 *)(param_1 + 8) = *(u8 *)(puVar38 + 2);
            *(u8 *)((int)param_1 + 0x21) = uVar1;
            *(u8 *)((int)param_1 + 0x22) = uVar2;
            *(u8 *)((int)param_1 + 0x23) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 9);
            uVar2 = *(u8 *)((int)puVar38 + 10);
            uVar3 = *(u8 *)((int)puVar38 + 0xb);
            *(u8 *)(param_1 + 9) = *(u8 *)(puVar38 + 2);
            *(u8 *)((int)param_1 + 0x25) = uVar1;
            *(u8 *)((int)param_1 + 0x26) = uVar2;
            *(u8 *)((int)param_1 + 0x27) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 9);
            uVar2 = *(u8 *)((int)puVar38 + 10);
            uVar3 = *(u8 *)((int)puVar38 + 0xb);
            *(u8 *)(param_1 + 10) = *(u8 *)(puVar38 + 2);
            *(u8 *)((int)param_1 + 0x29) = uVar1;
            *(u8 *)((int)param_1 + 0x2a) = uVar2;
            *(u8 *)((int)param_1 + 0x2b) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 9);
            uVar2 = *(u8 *)((int)puVar38 + 10);
            uVar3 = *(u8 *)((int)puVar38 + 0xb);
            *(u8 *)(param_1 + 0xb) = *(u8 *)(puVar38 + 2);
            *(u8 *)((int)param_1 + 0x2d) = uVar1;
            *(u8 *)((int)param_1 + 0x2e) = uVar2;
            *(u8 *)((int)param_1 + 0x2f) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0xd);
            uVar2 = *(u8 *)((int)puVar38 + 0xe);
            uVar3 = *(u8 *)((int)puVar38 + 0xf);
            *(u8 *)(param_1 + 0xc) = *(u8 *)(puVar38 + 3);
            *(u8 *)((int)param_1 + 0x31) = uVar1;
            *(u8 *)((int)param_1 + 0x32) = uVar2;
            *(u8 *)((int)param_1 + 0x33) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0xd);
            uVar2 = *(u8 *)((int)puVar38 + 0xe);
            uVar3 = *(u8 *)((int)puVar38 + 0xf);
            *(u8 *)(param_1 + 0xd) = *(u8 *)(puVar38 + 3);
            *(u8 *)((int)param_1 + 0x35) = uVar1;
            *(u8 *)((int)param_1 + 0x36) = uVar2;
            *(u8 *)((int)param_1 + 0x37) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0xd);
            uVar2 = *(u8 *)((int)puVar38 + 0xe);
            uVar3 = *(u8 *)((int)puVar38 + 0xf);
            *(u8 *)(param_1 + 0xe) = *(u8 *)(puVar38 + 3);
            *(u8 *)((int)param_1 + 0x39) = uVar1;
            *(u8 *)((int)param_1 + 0x3a) = uVar2;
            *(u8 *)((int)param_1 + 0x3b) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0xd);
            uVar2 = *(u8 *)((int)puVar38 + 0xe);
            uVar3 = *(u8 *)((int)puVar38 + 0xf);
            *(u8 *)(param_1 + 0xf) = *(u8 *)(puVar38 + 3);
            *(u8 *)((int)param_1 + 0x3d) = uVar1;
            *(u8 *)((int)param_1 + 0x3e) = uVar2;
            *(u8 *)((int)param_1 + 0x3f) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x11);
            uVar2 = *(u8 *)((int)puVar38 + 0x12);
            uVar3 = *(u8 *)((int)puVar38 + 0x13);
            *(u8 *)(param_1 + 0x10) = *(u8 *)(puVar38 + 4);
            *(u8 *)((int)param_1 + 0x41) = uVar1;
            *(u8 *)((int)param_1 + 0x42) = uVar2;
            *(u8 *)((int)param_1 + 0x43) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x11);
            uVar2 = *(u8 *)((int)puVar38 + 0x12);
            uVar3 = *(u8 *)((int)puVar38 + 0x13);
            *(u8 *)(param_1 + 0x11) = *(u8 *)(puVar38 + 4);
            *(u8 *)((int)param_1 + 0x45) = uVar1;
            *(u8 *)((int)param_1 + 0x46) = uVar2;
            *(u8 *)((int)param_1 + 0x47) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x11);
            uVar2 = *(u8 *)((int)puVar38 + 0x12);
            uVar3 = *(u8 *)((int)puVar38 + 0x13);
            *(u8 *)(param_1 + 0x12) = *(u8 *)(puVar38 + 4);
            *(u8 *)((int)param_1 + 0x49) = uVar1;
            *(u8 *)((int)param_1 + 0x4a) = uVar2;
            *(u8 *)((int)param_1 + 0x4b) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x11);
            uVar2 = *(u8 *)((int)puVar38 + 0x12);
            uVar3 = *(u8 *)((int)puVar38 + 0x13);
            *(u8 *)(param_1 + 0x13) = *(u8 *)(puVar38 + 4);
            *(u8 *)((int)param_1 + 0x4d) = uVar1;
            *(u8 *)((int)param_1 + 0x4e) = uVar2;
            *(u8 *)((int)param_1 + 0x4f) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x15);
            uVar2 = *(u8 *)((int)puVar38 + 0x16);
            uVar3 = *(u8 *)((int)puVar38 + 0x17);
            *(u8 *)(param_1 + 0x14) = *(u8 *)(puVar38 + 5);
            *(u8 *)((int)param_1 + 0x51) = uVar1;
            *(u8 *)((int)param_1 + 0x52) = uVar2;
            *(u8 *)((int)param_1 + 0x53) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x15);
            uVar2 = *(u8 *)((int)puVar38 + 0x16);
            uVar3 = *(u8 *)((int)puVar38 + 0x17);
            *(u8 *)(param_1 + 0x15) = *(u8 *)(puVar38 + 5);
            *(u8 *)((int)param_1 + 0x55) = uVar1;
            *(u8 *)((int)param_1 + 0x56) = uVar2;
            *(u8 *)((int)param_1 + 0x57) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x15);
            uVar2 = *(u8 *)((int)puVar38 + 0x16);
            uVar3 = *(u8 *)((int)puVar38 + 0x17);
            *(u8 *)(param_1 + 0x16) = *(u8 *)(puVar38 + 5);
            *(u8 *)((int)param_1 + 0x59) = uVar1;
            *(u8 *)((int)param_1 + 0x5a) = uVar2;
            *(u8 *)((int)param_1 + 0x5b) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x15);
            uVar2 = *(u8 *)((int)puVar38 + 0x16);
            uVar3 = *(u8 *)((int)puVar38 + 0x17);
            *(u8 *)(param_1 + 0x17) = *(u8 *)(puVar38 + 5);
            *(u8 *)((int)param_1 + 0x5d) = uVar1;
            *(u8 *)((int)param_1 + 0x5e) = uVar2;
            *(u8 *)((int)param_1 + 0x5f) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x19);
            uVar2 = *(u8 *)((int)puVar38 + 0x1a);
            uVar3 = *(u8 *)((int)puVar38 + 0x1b);
            *(u8 *)(param_1 + 0x18) = *(u8 *)(puVar38 + 6);
            *(u8 *)((int)param_1 + 0x61) = uVar1;
            *(u8 *)((int)param_1 + 0x62) = uVar2;
            *(u8 *)((int)param_1 + 99) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x19);
            uVar2 = *(u8 *)((int)puVar38 + 0x1a);
            uVar3 = *(u8 *)((int)puVar38 + 0x1b);
            *(u8 *)(param_1 + 0x19) = *(u8 *)(puVar38 + 6);
            *(u8 *)((int)param_1 + 0x65) = uVar1;
            *(u8 *)((int)param_1 + 0x66) = uVar2;
            *(u8 *)((int)param_1 + 0x67) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x19);
            uVar2 = *(u8 *)((int)puVar38 + 0x1a);
            uVar3 = *(u8 *)((int)puVar38 + 0x1b);
            *(u8 *)(param_1 + 0x1a) = *(u8 *)(puVar38 + 6);
            *(u8 *)((int)param_1 + 0x69) = uVar1;
            *(u8 *)((int)param_1 + 0x6a) = uVar2;
            *(u8 *)((int)param_1 + 0x6b) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x19);
            uVar2 = *(u8 *)((int)puVar38 + 0x1a);
            uVar3 = *(u8 *)((int)puVar38 + 0x1b);
            *(u8 *)(param_1 + 0x1b) = *(u8 *)(puVar38 + 6);
            *(u8 *)((int)param_1 + 0x6d) = uVar1;
            *(u8 *)((int)param_1 + 0x6e) = uVar2;
            *(u8 *)((int)param_1 + 0x6f) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x1d);
            uVar2 = *(u8 *)((int)puVar38 + 0x1e);
            uVar3 = *(u8 *)((int)puVar38 + 0x1f);
            *(u8 *)(param_1 + 0x1c) = *(u8 *)(puVar38 + 7);
            *(u8 *)((int)param_1 + 0x71) = uVar1;
            *(u8 *)((int)param_1 + 0x72) = uVar2;
            *(u8 *)((int)param_1 + 0x73) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x1d);
            uVar2 = *(u8 *)((int)puVar38 + 0x1e);
            uVar3 = *(u8 *)((int)puVar38 + 0x1f);
            *(u8 *)(param_1 + 0x1d) = *(u8 *)(puVar38 + 7);
            *(u8 *)((int)param_1 + 0x75) = uVar1;
            *(u8 *)((int)param_1 + 0x76) = uVar2;
            *(u8 *)((int)param_1 + 0x77) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x1d);
            uVar2 = *(u8 *)((int)puVar38 + 0x1e);
            uVar3 = *(u8 *)((int)puVar38 + 0x1f);
            *(u8 *)(param_1 + 0x1e) = *(u8 *)(puVar38 + 7);
            *(u8 *)((int)param_1 + 0x79) = uVar1;
            *(u8 *)((int)param_1 + 0x7a) = uVar2;
            *(u8 *)((int)param_1 + 0x7b) = uVar3;
            uVar1 = *(u8 *)((int)puVar38 + 0x1d);
            uVar2 = *(u8 *)((int)puVar38 + 0x1e);
            uVar3 = *(u8 *)((int)puVar38 + 0x1f);
            *(u8 *)(param_1 + 0x1f) = *(u8 *)(puVar38 + 7);
            puVar38 = puVar38 + 8;
            *(u8 *)((int)param_1 + 0x7d) = uVar1;
            *(u8 *)((int)param_1 + 0x7e) = uVar2;
            *(u8 *)((int)param_1 + 0x7f) = uVar3;
            param_1 = param_1 + 0x20;
          } while (iVar17 < param_2 + -8);
        }
      }
      for (; iVar17 < param_2; iVar17 = iVar17 + 1) {
        uVar1 = *(u8 *)((int)puVar38 + 1);
        uVar2 = *(u8 *)((int)puVar38 + 2);
        uVar3 = *(u8 *)((int)puVar38 + 3);
        *(u8 *)param_1 = *(u8 *)puVar38;
        *(u8 *)((int)param_1 + 1) = uVar1;
        *(u8 *)((int)param_1 + 2) = uVar2;
        *(u8 *)((int)param_1 + 3) = uVar3;
        uVar1 = *(u8 *)((int)puVar38 + 1);
        uVar2 = *(u8 *)((int)puVar38 + 2);
        uVar3 = *(u8 *)((int)puVar38 + 3);
        *(u8 *)(param_1 + 1) = *(u8 *)puVar38;
        *(u8 *)((int)param_1 + 5) = uVar1;
        *(u8 *)((int)param_1 + 6) = uVar2;
        *(u8 *)((int)param_1 + 7) = uVar3;
        uVar1 = *(u8 *)((int)puVar38 + 1);
        uVar2 = *(u8 *)((int)puVar38 + 2);
        uVar3 = *(u8 *)((int)puVar38 + 3);
        *(u8 *)(param_1 + 2) = *(u8 *)puVar38;
        *(u8 *)((int)param_1 + 9) = uVar1;
        *(u8 *)((int)param_1 + 10) = uVar2;
        *(u8 *)((int)param_1 + 0xb) = uVar3;
        uVar1 = *(u8 *)((int)puVar38 + 1);
        uVar2 = *(u8 *)((int)puVar38 + 2);
        uVar3 = *(u8 *)((int)puVar38 + 3);
        *(u8 *)(param_1 + 3) = *(u8 *)puVar38;
        puVar38 = puVar38 + 1;
        *(u8 *)((int)param_1 + 0xd) = uVar1;
        *(u8 *)((int)param_1 + 0xe) = uVar2;
        *(u8 *)((int)param_1 + 0xf) = uVar3;
        param_1 = param_1 + 4;
      }
    }
  }
  else {
    iVar42 = 0;
    if (0 < param_2) {
      if (8 < param_2) {
        bVar5 = 0;
        if ((-1 < param_2) && (param_2 < 0x7fffffff)) {
          bVar5 = 1;
        }
        if (bVar5) {
          do {
            puVar11 = (u32 *)((int)param_1 + iVar17 + iVar17);
            puVar40 = (u32 *)((int)puVar38 + iVar8);
            puVar6 = (u32 *)((int)puVar11 + iVar17);
            puVar21 = (u32 *)((int)puVar40 + iVar8);
            puVar41 = (u32 *)((int)puVar6 + iVar17);
            puVar18 = (u32 *)((int)puVar21 + iVar8);
            puVar39 = (u32 *)((int)puVar41 + iVar17);
            puVar15 = (u32 *)((int)puVar18 + iVar8);
            puVar44 = (u32 *)((int)puVar39 + iVar17);
            puVar13 = (u32 *)((int)puVar15 + iVar8);
            puVar43 = (u32 *)((int)puVar44 + iVar17);
            *param_1 = *puVar38;
            puVar22 = (u32 *)((int)puVar43 + iVar17);
            puVar20 = (u32 *)((int)puVar22 + iVar17);
            puVar10 = (u32 *)((int)puVar13 + iVar8);
            puVar19 = (u32 *)((int)puVar20 + iVar17);
            iVar42 = iVar42 + 8;
            puVar23 = (u32 *)((int)puVar19 + iVar17);
            puVar9 = (u32 *)((int)puVar10 + iVar8);
            puVar24 = (u32 *)((int)puVar23 + iVar17);
            *(u32 *)((int)param_1 + iVar17) = *puVar38;
            *puVar11 = *puVar38;
            puVar25 = (u32 *)((int)puVar24 + iVar17);
            puVar16 = (u32 *)((int)puVar25 + iVar17);
            puVar26 = (u32 *)((int)puVar16 + iVar17);
            puVar27 = (u32 *)((int)puVar26 + iVar17);
            puVar28 = (u32 *)((int)puVar27 + iVar17);
            puVar29 = (u32 *)((int)puVar28 + iVar17);
            puVar30 = (u32 *)((int)puVar29 + iVar17);
            puVar31 = (u32 *)((int)puVar30 + iVar17);
            puVar12 = (u32 *)((int)puVar31 + iVar17);
            puVar32 = (u32 *)((int)puVar12 + iVar17);
            *puVar6 = *puVar38;
            puVar33 = (u32 *)((int)puVar32 + iVar17);
            puVar34 = (u32 *)((int)puVar33 + iVar17);
            puVar35 = (u32 *)((int)puVar34 + iVar17);
            puVar36 = (u32 *)((int)puVar35 + iVar17);
            puVar37 = (u32 *)((int)puVar36 + iVar17);
            puVar45 = (u32 *)((int)puVar37 + iVar17);
            puVar38 = (u32 *)((int)puVar9 + iVar8);
            puVar6 = (u32 *)((int)puVar45 + iVar17);
            puVar11 = (u32 *)((int)puVar6 + iVar17);
            puVar7 = (u32 *)((int)puVar11 + iVar17);
            param_1 = (u32 *)((int)puVar7 + iVar17);
            *puVar41 = *puVar40;
            *puVar39 = *puVar40;
            *puVar44 = *puVar40;
            *puVar43 = *puVar40;
            *puVar22 = *puVar21;
            *puVar20 = *puVar21;
            *puVar19 = *puVar21;
            *puVar23 = *puVar21;
            *puVar24 = *puVar18;
            *puVar25 = *puVar18;
            *puVar16 = *puVar18;
            *puVar26 = *puVar18;
            *puVar27 = *puVar15;
            *puVar28 = *puVar15;
            *puVar29 = *puVar15;
            *puVar30 = *puVar15;
            *puVar31 = *puVar13;
            *puVar12 = *puVar13;
            *puVar32 = *puVar13;
            *puVar33 = *puVar13;
            *puVar34 = *puVar10;
            *puVar35 = *puVar10;
            *puVar36 = *puVar10;
            *puVar37 = *puVar10;
            *puVar45 = *puVar9;
            *puVar6 = *puVar9;
            *puVar11 = *puVar9;
            *puVar7 = *puVar9;
          } while (iVar42 < param_2 + -8);
        }
      }
      for (; iVar42 < param_2; iVar42 = iVar42 + 1) {
        puVar7 = (u32 *)((int)param_1 + iVar17);
        puVar11 = (u32 *)((int)puVar7 + iVar17);
        puVar6 = (u32 *)((int)puVar11 + iVar17);
        *param_1 = *puVar38;
        param_1 = (u32 *)((int)puVar6 + iVar17);
        *puVar7 = *puVar38;
        *puVar11 = *puVar38;
        *puVar6 = *puVar38;
        puVar38 = (u32 *)((int)puVar38 + iVar8);
      }
    }
  }
  return;
}

// FUN_00485070
asm void FUN_00485070(u32 *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c8a0004
  .word 0x8cc90030
  .word 0x8ccb002c
  .word 0x000a1880
  .word 0x11230017
  .word 0x8c8c0000
  .word 0x0005082a
  .word 0x10200012
  .word 0x0000702d
  .word 0x0160682d
  .word 0x018a4021
  .word 0x8da40000
  .word 0x010a3821
  .word 0x25ce0001
  .word 0x00ea3021
  .word 0x01c5182a
  .word 0x01695821
  .word 0xad840000
  .word 0x8da40004
  .word 0x00ca6021
  .word 0xad040000
  .word 0x8da40008
  .word 0xace40000
  .word 0x8da4000c
  .word 0x1460fff0
  .word 0xacc40000
  .word 0x10000008
  .word 0xdfbf0000
  .word 0x00aa1018
  .word 0x0180202d
  .word 0x00023080
  .word 0x0c11db08
  .word 0x0160282d
  .word 0x1000fff8
  .word 0x00000000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_00485110
asm void FUN_00485110(u32 *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfe80
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
  .word 0x8c830000
  .word 0x8c960004
  .word 0x24040004
  .word 0x12c400a3
  .word 0x00000000
  .word 0x0005082a
  .word 0x1020009e
  .word 0x0000b82d
  .word 0x24a4fff8
  .word 0x28a10009
  .word 0x14200088
  .word 0x7fa40160
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000202d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24040001
  .word 0x1080007d
  .word 0x00000000
  .word 0x8cca0080
  .word 0x00764821
  .word 0x01363821
  .word 0x7ba80160
  .word 0x00f62021
  .word 0x26f70008
  .word 0x0096a821
  .word 0x02b6a021
  .word 0x02969821
  .word 0xac6a0000
  .word 0x02769021
  .word 0x8cc30084
  .word 0x02568821
  .word 0x02368021
  .word 0x02e8402a
  .word 0x0216c821
  .word 0x7fa800b0
  .word 0x0336c021
  .word 0x03167821
  .word 0x01f67021
  .word 0xad230000
  .word 0x01d66821
  .word 0x8cde0088
  .word 0x01b66021
  .word 0x01965821
  .word 0x01765021
  .word 0x01564821
  .word 0x01364021
  .word 0x01161821
  .word 0xacfe0000
  .word 0x7fa30140
  .word 0x00763821
  .word 0x00f61821
  .word 0x8cde008c
  .word 0x7fa30130
  .word 0x00761821
  .word 0x7fa30120
  .word 0x00761821
  .word 0x7fa30110
  .word 0x00761821
  .word 0xac9e0000
  .word 0x7fa30100
  .word 0x00761821
  .word 0x7fa300f0
  .word 0x00761821
  .word 0x7fa300e0
  .word 0x0076f021
  .word 0x8cc30080
  .word 0x7fa30150
  .word 0x7ba40150
  .word 0x03d61821
  .word 0x7fa300a0
  .word 0x00761821
  .word 0x7fa300d0
  .word 0x00761821
  .word 0x7fa300c0
  .word 0xaea40000
  .word 0x8cc40084
  .word 0xae840000
  .word 0x8cc40088
  .word 0xae640000
  .word 0x8cc4008c
  .word 0xae440000
  .word 0x8cc40080
  .word 0xae240000
  .word 0x8cc40084
  .word 0xae040000
  .word 0x8cc40088
  .word 0xaf240000
  .word 0x8cc4008c
  .word 0xaf040000
  .word 0x8cc40080
  .word 0xade40000
  .word 0x8cc40084
  .word 0xadc40000
  .word 0x8cc40088
  .word 0xada40000
  .word 0x8cc4008c
  .word 0xad840000
  .word 0x8cc40080
  .word 0xad640000
  .word 0x8cc40084
  .word 0xad440000
  .word 0x8cc40088
  .word 0xad240000
  .word 0x8cc4008c
  .word 0xad040000
  .word 0x8cc80080
  .word 0x7ba40140
  .word 0xac880000
  .word 0x8cc40084
  .word 0xace40000
  .word 0x8cc70088
  .word 0x7ba40130
  .word 0xac870000
  .word 0x8cc7008c
  .word 0x7ba40120
  .word 0xac870000
  .word 0x8cc70080
  .word 0x7ba40110
  .word 0xac870000
  .word 0x8cc70084
  .word 0x7ba40100
  .word 0xac870000
  .word 0x8cc70088
  .word 0x7ba400f0
  .word 0xac870000
  .word 0x8cc7008c
  .word 0x7ba400e0
  .word 0xac870000
  .word 0x8cc40080
  .word 0xafc40000
  .word 0x8cc70084
  .word 0x7ba400a0
  .word 0xac870000
  .word 0x8cc70088
  .word 0x7ba400d0
  .word 0xac870000
  .word 0x8cc7008c
  .word 0x7ba400c0
  .word 0xac870000
  .word 0x7ba400b0
  .word 0x1480ff85
  .word 0x00761821
  .word 0x02e5082a
  .word 0x10200010
  .word 0x00000000
  .word 0x8cc70080
  .word 0x00765021
  .word 0x01564821
  .word 0x26f70001
  .word 0x01364021
  .word 0x02e5202a
  .word 0xac670000
  .word 0x8cc70084
  .word 0x01161821
  .word 0xad470000
  .word 0x8cc70088
  .word 0xad270000
  .word 0x8cc7008c
  .word 0x1480fff2
  .word 0xad070000
  .word 0x10000010
  .word 0xdfbf0090
  .word 0x8cc20080
  .word 0xafa20170
  .word 0x8cc20084
  .word 0xafa20174
  .word 0x8cc20088
  .word 0xafa20178
  .word 0x8cc2008c
  .word 0xafa2017c
  .word 0x00b61018
  .word 0x0060202d
  .word 0x27a60170
  .word 0x0c11d9c8
  .word 0x00022880
  .word 0x1000fff0
  .word 0x00000000
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
  .word 0x27bd0180
}

// FUN_00485440
asm void FUN_00485440(u32 *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfe90
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
  .word 0x8c830000
  .word 0x8c960004
  .word 0x24040004
  .word 0x12c400a3
  .word 0x00000000
  .word 0x0005082a
  .word 0x1020009e
  .word 0x0000b82d
  .word 0x24a4fff8
  .word 0x28a10009
  .word 0x14200088
  .word 0x7fa40160
  .word 0x00a0082a
  .word 0x14200007
  .word 0x0000202d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x00a1082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24040001
  .word 0x1080007d
  .word 0x00000000
  .word 0x8cca007c
  .word 0x00764821
  .word 0x01363821
  .word 0x7ba80160
  .word 0x00f62021
  .word 0x26f70008
  .word 0x0096a821
  .word 0x02b6a021
  .word 0x02969821
  .word 0xac6a0000
  .word 0x02769021
  .word 0x8cc3007c
  .word 0x02568821
  .word 0x02368021
  .word 0x02e8402a
  .word 0x0216c821
  .word 0x7fa800b0
  .word 0x0336c021
  .word 0x03167821
  .word 0x01f67021
  .word 0xad230000
  .word 0x01d66821
  .word 0x8cde007c
  .word 0x01b66021
  .word 0x01965821
  .word 0x01765021
  .word 0x01564821
  .word 0x01364021
  .word 0x01161821
  .word 0xacfe0000
  .word 0x7fa30140
  .word 0x00763821
  .word 0x00f61821
  .word 0x8cde007c
  .word 0x7fa30130
  .word 0x00761821
  .word 0x7fa30120
  .word 0x00761821
  .word 0x7fa30110
  .word 0x00761821
  .word 0xac9e0000
  .word 0x7fa30100
  .word 0x00761821
  .word 0x7fa300f0
  .word 0x00761821
  .word 0x7fa300e0
  .word 0x0076f021
  .word 0x8cc3007c
  .word 0x7fa30150
  .word 0x7ba40150
  .word 0x03d61821
  .word 0x7fa300a0
  .word 0x00761821
  .word 0x7fa300d0
  .word 0x00761821
  .word 0x7fa300c0
  .word 0xaea40000
  .word 0x8cc4007c
  .word 0xae840000
  .word 0x8cc4007c
  .word 0xae640000
  .word 0x8cc4007c
  .word 0xae440000
  .word 0x8cc4007c
  .word 0xae240000
  .word 0x8cc4007c
  .word 0xae040000
  .word 0x8cc4007c
  .word 0xaf240000
  .word 0x8cc4007c
  .word 0xaf040000
  .word 0x8cc4007c
  .word 0xade40000
  .word 0x8cc4007c
  .word 0xadc40000
  .word 0x8cc4007c
  .word 0xada40000
  .word 0x8cc4007c
  .word 0xad840000
  .word 0x8cc4007c
  .word 0xad640000
  .word 0x8cc4007c
  .word 0xad440000
  .word 0x8cc4007c
  .word 0xad240000
  .word 0x8cc4007c
  .word 0xad040000
  .word 0x8cc8007c
  .word 0x7ba40140
  .word 0xac880000
  .word 0x8cc4007c
  .word 0xace40000
  .word 0x8cc7007c
  .word 0x7ba40130
  .word 0xac870000
  .word 0x8cc7007c
  .word 0x7ba40120
  .word 0xac870000
  .word 0x8cc7007c
  .word 0x7ba40110
  .word 0xac870000
  .word 0x8cc7007c
  .word 0x7ba40100
  .word 0xac870000
  .word 0x8cc7007c
  .word 0x7ba400f0
  .word 0xac870000
  .word 0x8cc7007c
  .word 0x7ba400e0
  .word 0xac870000
  .word 0x8cc4007c
  .word 0xafc40000
  .word 0x8cc7007c
  .word 0x7ba400a0
  .word 0xac870000
  .word 0x8cc7007c
  .word 0x7ba400d0
  .word 0xac870000
  .word 0x8cc7007c
  .word 0x7ba400c0
  .word 0xac870000
  .word 0x7ba400b0
  .word 0x1480ff85
  .word 0x00761821
  .word 0x02e5082a
  .word 0x10200010
  .word 0x00000000
  .word 0x8cc7007c
  .word 0x00765021
  .word 0x01564821
  .word 0x26f70001
  .word 0x01364021
  .word 0x02e5202a
  .word 0xac670000
  .word 0x8cc7007c
  .word 0x01161821
  .word 0xad470000
  .word 0x8cc7007c
  .word 0xad270000
  .word 0x8cc7007c
  .word 0x1480fff2
  .word 0xad070000
  .word 0x10000008
  .word 0xdfbf0090
  .word 0x00b61018
  .word 0x8cc6007c
  .word 0x0060202d
  .word 0x0c11d850
  .word 0x00022880
  .word 0x1000fff8
  .word 0x00000000
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
  .word 0x27bd0170
}

// FUN_00485750
asm void FUN_00485750(int *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c890004
  .word 0x8cc80040
  .word 0x8c910000
  .word 0x8cd0003c
  .word 0x00091840
  .word 0x11030021
  .word 0x00a0902d
  .word 0x0012082a
  .word 0x1020001c
  .word 0x0000582d
  .word 0x0200502d
  .word 0x26070008
  .word 0xc5400000
  .word 0x02293021
  .word 0x00c92821
  .word 0x256b0001
  .word 0x00a92021
  .word 0x0172182a
  .word 0x02088021
  .word 0xe6200000
  .word 0xc4e00004
  .word 0xe6200004
  .word 0xc4e00000
  .word 0x00898821
  .word 0xe4c00000
  .word 0xc4e00004
  .word 0xe4c00004
  .word 0xc4e00000
  .word 0xe4a00000
  .word 0xc5400004
  .word 0xe4a00004
  .word 0xc5400000
  .word 0xe4800000
  .word 0xc5400004
  .word 0x1460ffe7
  .word 0xe4800004
  .word 0x00000000
  .word 0x10000183
  .word 0xdfbf0030
  .word 0x0c140cf8
  .word 0x0000202d
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x1480008e
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x14800096
  .word 0x00000000
  .word 0x2a410156
  .word 0x1420004e
  .word 0x00000000
  .word 0x3c047000
  .word 0x3c081001
  .word 0x24070200
  .word 0x24050100
  .word 0x24060155
  .word 0x240b1550
  .word 0x34831550
  .word 0x240a02aa
  .word 0x8d09d000
  .word 0x31290100
  .word 0x1520009c
  .word 0x00000000
  .word 0x00000000
  .word 0x8d09d400
  .word 0x31290100
  .word 0x152000a5
  .word 0x00000000
  .word 0xad07e010
  .word 0xad00d480
  .word 0xad10d410
  .word 0xad06d420
  .word 0xad05d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8d09d400
  .word 0x31290100
  .word 0x152000b0
  .word 0x00000000
  .word 0x00000000
  .word 0x0080702d
  .word 0x0060682d
  .word 0x0000c02d
  .word 0x00000000
  .word 0x01c0782d
  .word 0xc5e00000
  .word 0x25cc0008
  .word 0x27180001
  .word 0x25ce0010
  .word 0x2b090155
  .word 0xe5a00000
  .word 0xc5800004
  .word 0xe5a00004
  .word 0xc5800000
  .word 0xe5a00008
  .word 0xc5800004
  .word 0xe5a0000c
  .word 0xc5800000
  .word 0xe5a00010
  .word 0xc5e00004
  .word 0xe5a00014
  .word 0xc5e00000
  .word 0xe5a00018
  .word 0xc5e00004
  .word 0xe5a0001c
  .word 0x1520ffea
  .word 0x25ad0020
  .word 0x8d09d000
  .word 0x31290100
  .word 0x152000a6
  .word 0x00000000
  .word 0x00000000
  .word 0x8d09d400
  .word 0x31290100
  .word 0x152000af
  .word 0x00000000
  .word 0xad05e010
  .word 0xad0bd080
  .word 0xad11d010
  .word 0xad0ad020
  .word 0xad05d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x2652feab
  .word 0x26101550
  .word 0x2a410156
  .word 0x1020ffbc
  .word 0x26312aa0
  .word 0x1240ffa1
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x148000b2
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x148000ba
  .word 0x00000000
  .word 0x24050200
  .word 0x3c031001
  .word 0xac65e010
  .word 0x24040100
  .word 0xac60d480
  .word 0xac70d410
  .word 0xac72d420
  .word 0xac64d400
  .word 0x0000000f
  .word 0x0000040f
  .word 0x8c64d400
  .word 0x30840100
  .word 0x148000c1
  .word 0x00000000
  .word 0x3c087000
  .word 0x0012082a
  .word 0x0000302d
  .word 0x102000d0
  .word 0x35071550
  .word 0x0100282d
  .word 0x25040008
  .word 0xc4a00000
  .word 0x24c60001
  .word 0x00d2182a
  .word 0x25080010
  .word 0xe4e00000
  .word 0xc4800004
  .word 0xe4e00004
  .word 0xc4800000
  .word 0xe4e00008
  .word 0xc4800004
  .word 0xe4e0000c
  .word 0xc4800000
  .word 0xe4e00010
  .word 0xc4a00004
  .word 0xe4e00014
  .word 0xc4a00000
  .word 0xe4e00018
  .word 0xc4a00004
  .word 0xe4e0001c
  .word 0x1460ffea
  .word 0x24e70020
  .word 0x100000b8
  .word 0x3c031001
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff68
  .word 0x3c031001
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff58
  .word 0x2a410156
  .word 0xad05e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff5a
  .word 0x00000000
  .word 0x00000000
  .word 0xad07e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8d09d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x1000ff48
  .word 0x00000000
  .word 0x00000000
  .word 0xad07e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8d09d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x1000ff3e
  .word 0x00000000
  .word 0x00000000
  .word 0xad05e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff50
  .word 0x00000000
  .word 0x00000000
  .word 0xad07e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x8d09d400
  .word 0x31290100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1520fffa
  .word 0x00000000
  .word 0x1000ff3e
  .word 0x00000000
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ff44
  .word 0x3c031001
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff34
  .word 0x24050200
  .word 0xac65e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x1000ff2e
  .word 0x3c087000
  .word 0x3c031001
  .word 0x8c64d000
  .word 0x30840100
  .word 0x14800027
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x10800015
  .word 0x00000000
  .word 0x24040200
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x3c031001
  .word 0x8c64d400
  .word 0x30840100
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x1480fffa
  .word 0x00000000
  .word 0x00000000
  .word 0x24060100
  .word 0x3c031001
  .word 0x24051550
  .word 0xac66e010
  .word 0x00122040
  .word 0xac65d080
  .word 0xac71d010
  .word 0xac64d020
  .word 0xac66d000
  .word 0x0000000f
  .word 0x0000040f
  .word 0x1000fe8a
  .word 0x00000000
  .word 0x24040100
  .word 0xac64e020
  .word 0x0000000f
  .word 0x0000040f
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x4100fffa
  .word 0x00000000
  .word 0x1000ffcf
  .word 0x3c031001
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_00485E20
asm void FUN_00485e20(int *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c8c0004
  .word 0x8ccb0048
  .word 0x8cce0044
  .word 0x000c1880
  .word 0x11630023
  .word 0x8c8f0000
  .word 0x0005082a
  .word 0x1020001e
  .word 0x0000c02d
  .word 0x01c0682d
  .word 0x01ec3821
  .word 0xc5a00000
  .word 0x00ec3021
  .word 0x27180001
  .word 0x25ca0008
  .word 0x25c90010
  .word 0x25c80018
  .word 0x00cc2021
  .word 0x0305182a
  .word 0x01cb7021
  .word 0xe5e00000
  .word 0xc5a00004
  .word 0xe5e00004
  .word 0xc5400000
  .word 0x008c7821
  .word 0xe4e00000
  .word 0xc5400004
  .word 0xe4e00004
  .word 0xc5200000
  .word 0xe4c00000
  .word 0xc5200004
  .word 0xe4c00004
  .word 0xc5000000
  .word 0xe4800000
  .word 0xc5000004
  .word 0x1460ffe5
  .word 0xe4800004
  .word 0x00000000
  .word 0x10000008
  .word 0xdfbf0000
  .word 0x00ac1018
  .word 0x01e0202d
  .word 0x00023080
  .word 0x0c11db08
  .word 0x01c0282d
  .word 0x1000fff8
  .word 0x00000000
  .word 0x03e00008
  .word 0x27bd0010
  .word 0x00000000
}

// FUN_00485EF0
asm void FUN_00485ef0(int *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24030010
  .word 0xffbf0000
  .word 0x8c880004
  .word 0x11030021
  .word 0x00000000
  .word 0x8c8b0000
  .word 0x0005082a
  .word 0x24ca0090
  .word 0x24c90098
  .word 0x10200019
  .word 0x0000602d
  .word 0xc5400000
  .word 0x01683821
  .word 0x00e83021
  .word 0x258c0001
  .word 0x00c82021
  .word 0x0185182a
  .word 0xe5600000
  .word 0xc5200004
  .word 0xe5600004
  .word 0xc5200000
  .word 0x00885821
  .word 0xe4e00000
  .word 0xc5200004
  .word 0xe4e00004
  .word 0xc5200000
  .word 0xe4c00000
  .word 0xc5400004
  .word 0xe4c00004
  .word 0xc5400000
  .word 0xe4800000
  .word 0xc5400004
  .word 0x1460ffea
  .word 0xe4800004
  .word 0x00000000
  .word 0x10000019
  .word 0xdfbf0000
  .word 0xc4c00090
  .word 0xe7a00010
  .word 0xc4c0009c
  .word 0xe7a00014
  .word 0xc4c00098
  .word 0xe7a00018
  .word 0xc4c0009c
  .word 0xe7a0001c
  .word 0xc4c00098
  .word 0xe7a00020
  .word 0xc4c00094
  .word 0xe7a00024
  .word 0xc4c00090
  .word 0xe7a00028
  .word 0xc4c00094
  .word 0xe7a0002c
  .word 0x8c820004
  .word 0x00451018
  .word 0x8c840000
  .word 0x27a60010
  .word 0x0c11da60
  .word 0x00022880
  .word 0x1000ffe7
  .word 0x00000000
  .word 0x03e00008
  .word 0x27bd0030
}

// FUN_00485FF0
asm void FUN_00485ff0(int *param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0x24030008
  .word 0xffbf0000
  .word 0x8c890004
  .word 0x11230023
  .word 0x00000000
  .word 0x8c8d0000
  .word 0x0005082a
  .word 0x24c80090
  .word 0x24cc0098
  .word 0x24cb00a0
  .word 0x24ca00a8
  .word 0x10200019
  .word 0x0000702d
  .word 0xc5000000
  .word 0x01a93821
  .word 0x00e93021
  .word 0x25ce0001
  .word 0x00c92021
  .word 0x01c5182a
  .word 0xe5a00000
  .word 0xc5000004
  .word 0xe5a00004
  .word 0xc5800000
  .word 0x00896821
  .word 0xe4e00000
  .word 0xc5800004
  .word 0xe4e00004
  .word 0xc5600000
  .word 0xe4c00000
  .word 0xc5600004
  .word 0xe4c00004
  .word 0xc5400000
  .word 0xe4800000
  .word 0xc5400004
  .word 0x1460ffea
  .word 0xe4800004
  .word 0x00000000
  .word 0x10000019
  .word 0xdfbf0000
  .word 0xc4c00090
  .word 0xe7a00010
  .word 0xc4c00094
  .word 0xe7a00014
  .word 0xc4c00098
  .word 0xe7a00018
  .word 0xc4c0009c
  .word 0xe7a0001c
  .word 0xc4c000a0
  .word 0xe7a00020
  .word 0xc4c000a4
  .word 0xe7a00024
  .word 0xc4c000a8
  .word 0xe7a00028
  .word 0xc4c000ac
  .word 0xe7a0002c
  .word 0x8c820004
  .word 0x00451018
  .word 0x8c840000
  .word 0x27a60010
  .word 0x0c11da60
  .word 0x00022880
  .word 0x1000ffe7
  .word 0x00000000
  .word 0x03e00008
  .word 0x27bd0030
  .word 0x00000000
  .word 0x00000000
  .word 0x8c8b0000
  .word 0x0005082a
  .word 0x8c890004
  .word 0x8cca0014
  .word 0x8cc80018
  .word 0x10200022
  .word 0x0000602d
  .word 0xc5400000
  .word 0x01693821
  .word 0x00e93021
  .word 0x258c0001
  .word 0x00c92021
  .word 0x0185182a
  .word 0xe5600000
  .word 0xc5400004
  .word 0xe5600004
  .word 0xc5400008
  .word 0xe5600008
  .word 0xc5400000
  .word 0x00895821
  .word 0xe4e00000
  .word 0xc5400004
  .word 0xe4e00004
  .word 0xc5400008
  .word 0xe4e00008
  .word 0xc5400000
  .word 0xe4c00000
  .word 0xc5400004
  .word 0xe4c00004
  .word 0xc5400008
  .word 0xe4c00008
  .word 0xc5400000
  .word 0xe4800000
  .word 0xc5400004
  .word 0xe4800004
  .word 0xc5400008
  .word 0xe4800008
  .word 0x1460ffe1
  .word 0x01485021
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004861B0
asm u32 FUN_004861b0(u64 param_1,u64 param_2,u32 param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0x3c02001e
  .word 0xffbf0050
  .word 0x34428000
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x0080a02d
  .word 0x7fb20020
  .word 0x00a0982d
  .word 0x00e0902d
  .word 0x7fb10010
  .word 0x02421024
  .word 0x10400006
  .word 0x7fb00000
  .word 0x8f82ba80
  .word 0x02821021
  .word 0x8c420000
  .word 0x10000002
  .word 0x8c500000
  .word 0x00c0802d
  .word 0x8f82ba80
  .word 0x02821021
  .word 0x8c510000
  .word 0x8e220024
  .word 0x14400036
  .word 0x00000000
  .word 0x8e230028
  .word 0x1060000a
  .word 0x00000000
  .word 0x27a40070
  .word 0x8c820000
  .word 0x10400006
  .word 0x00000000
  .word 0x27a50090
  .word 0x27a6009c
  .word 0x0200382d
  .word 0x0060f809
  .word 0x0260402d
  .word 0x8e23002c
  .word 0x10600008
  .word 0x00000000
  .word 0x27a40078
  .word 0x8c820000
  .word 0x10400004
  .word 0x00000000
  .word 0x0200282d
  .word 0x0060f809
  .word 0x0260302d
  .word 0x8e230030
  .word 0x10600008
  .word 0x00000000
  .word 0x27a40080
  .word 0x8c820000
  .word 0x10400004
  .word 0x00000000
  .word 0x0200282d
  .word 0x0060f809
  .word 0x0260302d
  .word 0x8e230034
  .word 0x10600008
  .word 0x00000000
  .word 0x27a40088
  .word 0x8c820000
  .word 0x10400004
  .word 0x00000000
  .word 0x0200282d
  .word 0x0060f809
  .word 0x0260302d
  .word 0x8e220038
  .word 0x10400007
  .word 0x00000000
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0200382d
  .word 0x0240402d
  .word 0x0040f809
  .word 0x27a40060
  .word 0x1000000e
  .word 0x24020001
  .word 0x27a40060
  .word 0x0000282d
  .word 0x0c148502
  .word 0x24060048
  .word 0x8e220024
  .word 0x27a40060
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0200382d
  .word 0x0040f809
  .word 0x0240402d
  .word 0x1000ffc0
  .word 0x8e230028
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd00b0
}

// FUN_00486340
asm u32 FUN_00486340(u32 param_1,int param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff00
  .word 0x30c30010
  .word 0xffbf0090
  .word 0x24020010
  .word 0x7fbe0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0xafa400dc
  .word 0x7fb00000
  .word 0x24040006
  .word 0x14620003
  .word 0xafa500d8
  .word 0x10000002
  .word 0x34830070
  .word 0x34830008
  .word 0x3c020004
  .word 0x34420042
  .word 0x00c21024
  .word 0x10400002
  .word 0x00000000
  .word 0x34630008
  .word 0x8fa200d8
  .word 0x0060302d
  .word 0x00022080
  .word 0x0c124dc4
  .word 0x00022840
  .word 0x0c1252f8
  .word 0x0040a82d
  .word 0x3c033e99
  .word 0xafa200d4
  .word 0x3464999a
  .word 0x0000f02d
  .word 0x3c033f80
  .word 0xac44000c
  .word 0xac430010
  .word 0xac430014
  .word 0x8ea2005c
  .word 0x8eb10034
  .word 0x8eb00030
  .word 0x8eb2002c
  .word 0xafa400f0
  .word 0xafa300f8
  .word 0x8c540014
  .word 0x8c530018
  .word 0xafa200c0
  .word 0x8fa200d8
  .word 0x0002082a
  .word 0x10200083
  .word 0xafa300f4
  .word 0x24020001
  .word 0x0000b02d
  .word 0xafa200b0
  .word 0x24170002
  .word 0x24020003
  .word 0xafa200a0
  .word 0xae800000
  .word 0xae800004
  .word 0xae800008
  .word 0xae200000
  .word 0x12000007
  .word 0xae200004
  .word 0xa2000000
  .word 0x240200ff
  .word 0xa2000001
  .word 0xa2000002
  .word 0xa2020003
  .word 0x26100004
  .word 0x12600007
  .word 0x00000000
  .word 0x3c023f80
  .word 0xae620000
  .word 0xae600004
  .word 0xae600008
  .word 0x2673000c
  .word 0x00000000
  .word 0xae80000c
  .word 0xae800010
  .word 0x3c023f80
  .word 0xae800014
  .word 0xae200008
  .word 0x12000008
  .word 0xae22000c
  .word 0xa2000000
  .word 0x240200ff
  .word 0xa2000001
  .word 0xa2000002
  .word 0xa2020003
  .word 0x26100004
  .word 0x00000000
  .word 0x12600007
  .word 0x00000000
  .word 0x3c023f80
  .word 0xae620000
  .word 0xae600004
  .word 0xae600008
  .word 0x2673000c
  .word 0x00000000
  .word 0xae800018
  .word 0xae80001c
  .word 0x3c023f80
  .word 0xae800020
  .word 0xae220010
  .word 0x12000008
  .word 0xae220014
  .word 0xa2000000
  .word 0x240200ff
  .word 0xa2000001
  .word 0xa2000002
  .word 0xa2020003
  .word 0x26100004
  .word 0x00000000
  .word 0x12600007
  .word 0x00000000
  .word 0x3c023f80
  .word 0xae620000
  .word 0xae600004
  .word 0xae600008
  .word 0x2673000c
  .word 0x00000000
  .word 0xae800024
  .word 0xae800028
  .word 0x3c023f80
  .word 0xae80002c
  .word 0xae220018
  .word 0x26940030
  .word 0xae20001c
  .word 0x12000008
  .word 0x26310020
  .word 0xa2000000
  .word 0x240200ff
  .word 0xa2000001
  .word 0xa2000002
  .word 0xa2020003
  .word 0x26100004
  .word 0x00000000
  .word 0x12600007
  .word 0x00000000
  .word 0x3c023f80
  .word 0xae620000
  .word 0xae600004
  .word 0xae600008
  .word 0x2673000c
  .word 0x00000000
  .word 0x97a200b0
  .word 0x32e6ffff
  .word 0x32c8ffff
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0c124c84
  .word 0x0040382d
  .word 0x8fa600d4
  .word 0x0240282d
  .word 0x02a0202d
  .word 0x0c124c8c
  .word 0x26520008
  .word 0x97a200a0
  .word 0x32e7ffff
  .word 0x32c8ffff
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0c124c84
  .word 0x0040302d
  .word 0x8fa600d4
  .word 0x0240282d
  .word 0x02a0202d
  .word 0x0c124c8c
  .word 0x26520008
  .word 0x8fa200b0
  .word 0x27de0001
  .word 0x26d60004
  .word 0x24420004
  .word 0xafa200b0
  .word 0x8fa200a0
  .word 0x24420004
  .word 0xafa200a0
  .word 0x8fa200d8
  .word 0x03c2102a
  .word 0x1440ff85
  .word 0x26f70004
  .word 0x8fa400c0
  .word 0x0c124b88
  .word 0x27a500e0
  .word 0xc7a200e0
  .word 0x8fa200c0
  .word 0xc7a100e4
  .word 0x3c033f80
  .word 0xc7a000e8
  .word 0xafa300ec
  .word 0x02a0202d
  .word 0xe4420004
  .word 0xe4410008
  .word 0xe440000c
  .word 0x0c124cf4
  .word 0xac430010
  .word 0x8fa400dc
  .word 0x02a0282d
  .word 0x0c12466c
  .word 0x0000302d
  .word 0x0c124ed8
  .word 0x02a0202d
  .word 0x0c125330
  .word 0x8fa400d4
  .word 0x0c1219b0
  .word 0x8fa400dc
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
  .word 0x27bd0100
  .word 0x00000000
  .word 0x00000000
}

// FUN_004866C0
asm void FUN_004866c0(int param_1)
{
  .set noreorder
  .word 0x8f86ba80
  .word 0x3c030049
  .word 0x24638550
  .word 0x24050008
  .word 0x00862021
  .word 0x8c840000
  .word 0xac830024
  .word 0x8c8700a8
  .word 0x30e60008
  .word 0x14c5000d
  .word 0x24830050
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a57ac0
  .word 0x10000050
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a57990
  .word 0x1000004c
  .word 0xac850028
  .word 0x30e68000
  .word 0x34058000
  .word 0x14c5000d
  .word 0x00000000
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a56ae0
  .word 0x10000040
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a56980
  .word 0x1000003c
  .word 0xac850028
  .word 0x30e60020
  .word 0x24050020
  .word 0x14c5001d
  .word 0x00000000
  .word 0x30e60004
  .word 0x24050004
  .word 0x14c5000d
  .word 0x00000000
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a576f0
  .word 0x1000002c
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a57030
  .word 0x10000028
  .word 0xac850028
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a57280
  .word 0x10000020
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a56c80
  .word 0x1000001c
  .word 0xac850028
  .word 0x30e60004
  .word 0x24050004
  .word 0x14c5000d
  .word 0x00000000
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a57520
  .word 0x10000010
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a56ec0
  .word 0x1000000c
  .word 0xac850028
  .word 0x3c060100
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a56ae0
  .word 0x10000004
  .word 0xac850028
  .word 0x3c050048
  .word 0x24a56980
  .word 0xac850028
  .word 0x8c670058
  .word 0x24050080
  .word 0x30e60080
  .word 0x10c50034
  .word 0x00000000
  .word 0x30e60100
  .word 0x24050100
  .word 0x10c50034
  .word 0x00000000
  .word 0x3c060008
  .word 0x00e62824
  .word 0x10a60034
  .word 0x00000000
  .word 0x3c060010
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050049
  .word 0x24a58410
  .word 0x10000002
  .word 0xac85002c
  .word 0xac80002c
  .word 0x8c670058
  .word 0x24050002
  .word 0x30e60002
  .word 0x10c5002a
  .word 0x00000000
  .word 0x30e60040
  .word 0x24050040
  .word 0x10c5002a
  .word 0x00000000
  .word 0x3c060004
  .word 0x00e62824
  .word 0x14a60005
  .word 0x00000000
  .word 0x3c050048
  .word 0x24a57ef0
  .word 0x10000004
  .word 0xac850030
  .word 0x3c050049
  .word 0x24a580b0
  .word 0xac850030
  .word 0x8c650058
  .word 0x24030010
  .word 0x30a50010
  .word 0x14a30005
  .word 0x00000000
  .word 0x3c030049
  .word 0x246384a0
  .word 0x10000002
  .word 0xac830034
  .word 0xac800034
  .word 0x3c030049
  .word 0x24638b80
  .word 0x10000015
  .word 0xac830038
  .word 0x3c050049
  .word 0x24a58260
  .word 0x1000ffdb
  .word 0xac85002c
  .word 0x3c050049
  .word 0x24a582f0
  .word 0x1000ffd7
  .word 0xac85002c
  .word 0x3c050049
  .word 0x24a58390
  .word 0x1000ffd3
  .word 0xac85002c
  .word 0x3c050048
  .word 0x24a57bf0
  .word 0x1000ffe3
  .word 0xac850030
  .word 0x3c050048
  .word 0x24a57e80
  .word 0x1000ffdf
  .word 0xac850030
  .word 0x03e00008
  .word 0x00000000
  .word 0xc5050070
  .word 0x3c033f00
  .word 0x44833000
  .word 0x8d0b0004
  .word 0xc4a20008
  .word 0x8d090008
  .word 0xc5010074
  .word 0x8c8a0000
  .word 0xc4a30004
  .word 0x0007082a
  .word 0xc4a40000
  .word 0x0000602d
  .word 0x46053142
  .word 0x8c880004
  .word 0x46051302
  .word 0x460519c2
  .word 0xc4c00000
  .word 0x46013182
  .word 0x46052342
  .word 0xc4c20008
  .word 0xc4c30004
  .word 0x46060102
  .word 0x46006847
  .word 0x46061202
  .word 0x46061942
  .word 0x46003887
  .word 0x460060c7
  .word 0x46040801
  .word 0x46040a40
  .word 0x46051041
  .word 0x46051280
  .word 0x46081881
  .word 0x46081ac0
  .word 0x460468c1
  .word 0x46046980
  .word 0x46053901
  .word 0x460539c0
  .word 0x46086141
  .word 0x1020002d
  .word 0x46086200
  .word 0xc56c0000
  .word 0x01483021
  .word 0x00c82821
  .word 0x258c0001
  .word 0x00a82021
  .word 0x0187182a
  .word 0x46006300
  .word 0xe54c0000
  .word 0xc56c0004
  .word 0x46016300
  .word 0xe54c0004
  .word 0xc56c0008
  .word 0x46026300
  .word 0xe54c0008
  .word 0xc56c0000
  .word 0x00885021
  .word 0x46036300
  .word 0xe4cc0000
  .word 0xc56c0004
  .word 0x46046300
  .word 0xe4cc0004
  .word 0xc56c0008
  .word 0x46056300
  .word 0xe4cc0008
  .word 0xc56c0000
  .word 0x46066300
  .word 0xe4ac0000
  .word 0xc56c0004
  .word 0x46076300
  .word 0xe4ac0004
  .word 0xc56c0008
  .word 0x46086300
  .word 0xe4ac0008
  .word 0xc56c0000
  .word 0x46096300
  .word 0xe48c0000
  .word 0xc56c0004
  .word 0x460a6300
  .word 0xe48c0004
  .word 0xc56c0008
  .word 0x460b6300
  .word 0x01695821
  .word 0x1460ffd5
  .word 0xe48c0008
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0xc5000070
  .word 0x3c033f00
  .word 0x44830800
  .word 0x8d0c0004
  .word 0xc4c60000
  .word 0x8d0a0008
  .word 0xc50a006c
  .word 0x8c8b0000
  .word 0xc4a70000
  .word 0x8c890004
  .word 0xc5090068
  .word 0x0007082a
  .word 0xc4c80004
  .word 0x0000682d
  .word 0xc4a30008
  .word 0x46000882
  .word 0x4606501a
  .word 0x46074bdc
  .word 0xc4c40008
  .word 0xc4a50004
  .word 0x4608501a
  .word 0x460239c2
  .word 0x4605485c
  .word 0x4604501a
  .word 0x46021b42
  .word 0x46022b82
  .word 0x46022302
  .word 0x4603481c
  .word 0x46023182
  .word 0x46024202
  .word 0x460038c7
  .word 0x46061881
  .word 0x460618c0
  .word 0x46037a40
  .word 0x46007107
  .word 0x460820c1
  .word 0x46082100
  .word 0x46040a80
  .word 0x46006947
  .word 0x460c2901
  .word 0x460c2940
  .word 0x460502c0
  .word 0x46063941
  .word 0x46063980
  .word 0x460679c0
  .word 0x46087181
  .word 0x46087200
  .word 0x460308c0
  .word 0x46060980
  .word 0x46080a00
  .word 0x460c6841
  .word 0x46040100
  .word 0x460c6b00
  .word 0x46010040
  .word 0x46027880
  .word 0x46057940
  .word 0x1020002d
  .word 0x460c0000
  .word 0xc58c0000
  .word 0x01693021
  .word 0x00c92821
  .word 0x25ad0001
  .word 0x00a92021
  .word 0x01a7182a
  .word 0x46026300
  .word 0xe56c0000
  .word 0xc58c0004
  .word 0x46036300
  .word 0xe56c0004
  .word 0xc58c0008
  .word 0x46046300
  .word 0xe56c0008
  .word 0xc58c0000
  .word 0x00895821
  .word 0x46056300
  .word 0xe4cc0000
  .word 0xc58c0004
  .word 0x46066300
  .word 0xe4cc0004
  .word 0xc58c0008
  .word 0x46016300
  .word 0xe4cc0008
  .word 0xc58c0000
  .word 0x46076300
  .word 0xe4ac0000
  .word 0xc58c0004
  .word 0x46086300
  .word 0xe4ac0004
  .word 0xc58c0008
  .word 0x46006300
  .word 0xe4ac0008
  .word 0xc58c0000
  .word 0x46096300
  .word 0xe48c0000
  .word 0xc58c0004
  .word 0x460a6300
  .word 0xe48c0004
  .word 0xc58c0008
  .word 0x460b6300
  .word 0x018a6021
  .word 0x1460ffd5
  .word 0xe48c0008
  .word 0x03e00008
  .word 0x00000000
}
// FUN_00486C80
asm void FUN_00486c80(int *param_1,float *param_2,float *param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff40
  .word 0x3c033f00
  .word 0xffbf00a0
  .word 0x44831000
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x00e0b82d
  .word 0x7fb50060
  .word 0x0000b02d
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00a0882d
  .word 0xe7b60008
  .word 0x00c0802d
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0xc5010070
  .word 0x8d030038
  .word 0xc5000074
  .word 0x8d150004
  .word 0x8d1e0008
  .word 0x8d140034
  .word 0x8c930000
  .word 0x8c920004
  .word 0x46011582
  .word 0x7fa300b0
  .word 0x0017182a
  .word 0x14600003
  .word 0x46001542
  .word 0x1000005e
  .word 0xdfbf00a0
  .word 0x0c14ba1e
  .word 0xc68c0000
  .word 0xc68c0000
  .word 0x0c14b9b6
  .word 0x46000506
  .word 0xc6090000
  .word 0x02723021
  .word 0xc6220000
  .word 0x00d22821
  .word 0x4600a0c7
  .word 0x7ba300b0
  .word 0xc6080004
  .word 0x00b22021
  .word 0xc6270004
  .word 0x26d60001
  .word 0xc6050008
  .word 0x4609181a
  .word 0x4602005c
  .word 0x46160982
  .word 0x0283a021
  .word 0x02d7182a
  .word 0x4608181a
  .word 0x4607005c
  .word 0xc6240008
  .word 0x4605181a
  .word 0x46160a82
  .word 0x460400dc
  .word 0x4609001a
  .word 0x4602a09c
  .word 0x4608001a
  .word 0x4607a05c
  .word 0x4605001a
  .word 0x461509c2
  .word 0x4604a01c
  .word 0x46151142
  .word 0x46150202
  .word 0x46003087
  .word 0x46051001
  .word 0xc6a10000
  .word 0x46161a42
  .word 0x46000800
  .word 0xe6600000
  .word 0x46005047
  .word 0x46070801
  .word 0xc6a30004
  .word 0x46051080
  .word 0x46070840
  .word 0x46001800
  .word 0xe6600004
  .word 0x46004807
  .word 0x460800c1
  .word 0xc6a40008
  .word 0x46080000
  .word 0x460320c0
  .word 0xe6630008
  .word 0x460530c1
  .word 0x00929821
  .word 0xc6a40000
  .word 0x46053140
  .word 0x460320c0
  .word 0xe4c30000
  .word 0xc6a60004
  .word 0x460750c1
  .word 0x46075100
  .word 0x460330c0
  .word 0xe4c30004
  .word 0xc6a70008
  .word 0x46084981
  .word 0x460848c0
  .word 0x46063980
  .word 0xe4c60008
  .word 0xc6a60000
  .word 0x46053140
  .word 0xe4a50000
  .word 0xc6a50004
  .word 0x46042900
  .word 0xe4a40004
  .word 0xc6a40008
  .word 0x460320c0
  .word 0xe4a30008
  .word 0xc6a30000
  .word 0x46021880
  .word 0xe4820000
  .word 0xc6a20004
  .word 0x46011040
  .word 0xe4810004
  .word 0xc6a10008
  .word 0x46000800
  .word 0x02bea821
  .word 0x1460ffa6
  .word 0xe4800008
  .word 0x1000ffa2
  .word 0x00000000
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
  .word 0x27bd00c0
  .word 0x00000000
  .word 0x00000000
  .word 0x8d0f0004
  .word 0x0007082a
  .word 0x8d0c0008
  .word 0x8d0e001c
  .word 0x8d0b0020
  .word 0x8c8d0000
  .word 0x8c8a0004
  .word 0x10200050
  .word 0x0000c02d
  .word 0x3c033f00
  .word 0x44831000
  .word 0xc5c60000
  .word 0x01aa4821
  .word 0xc5c40004
  .word 0x012a4021
  .word 0x27180001
  .word 0x010a2021
  .word 0xc4a50000
  .word 0x0307182a
  .word 0xc4a10004
  .word 0xc4a00008
  .word 0x46061182
  .word 0x01cb7021
  .word 0x46041202
  .word 0xc4c30000
  .word 0x46062b02
  .word 0xc4c70004
  .word 0x46060842
  .word 0x46060002
  .word 0xc4c60008
  .word 0x46081ac2
  .word 0x46006147
  .word 0x460b28c1
  .word 0xc5e40000
  .word 0x46083242
  .word 0x460320c0
  .word 0xe5a30000
  .word 0x46083a82
  .word 0x46000907
  .word 0x460a20c1
  .word 0xc5e60004
  .word 0x460b2940
  .word 0x460a2100
  .word 0x460330c0
  .word 0xe5a30004
  .word 0x460000c7
  .word 0x46091981
  .word 0xc5e70008
  .word 0x460918c0
  .word 0x46063980
  .word 0xe5a60008
  .word 0xc5e80000
  .word 0x008a6821
  .word 0x460b61c1
  .word 0x460b6180
  .word 0x460741c0
  .word 0xe5270000
  .word 0x460a09c1
  .word 0xc5e80004
  .word 0x460a0840
  .word 0x460741c0
  .word 0xe5270004
  .word 0x460901c1
  .word 0xc5e80008
  .word 0x46090000
  .word 0x460741c0
  .word 0xe5270008
  .word 0xc5e70000
  .word 0x46063980
  .word 0xe5060000
  .word 0xc5e60004
  .word 0x46013040
  .word 0xe5010004
  .word 0xc5e10008
  .word 0x46000800
  .word 0xe5000008
  .word 0xc5e00000
  .word 0x46050000
  .word 0xe4800000
  .word 0xc5e00004
  .word 0x46040000
  .word 0xe4800004
  .word 0xc5e00008
  .word 0x46030000
  .word 0x01ec7821
  .word 0x1460ffb5
  .word 0xe4800008
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00487030
asm void FUN_00487030(int *param_1,float *param_2,float *param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x00e0f02d
  .word 0x7fb60070
  .word 0x0000b82d
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x00a0902d
  .word 0x7fb00010
  .word 0x001e282a
  .word 0xe7b40000
  .word 0x00c0882d
  .word 0x8d030008
  .word 0x8d100004
  .word 0x8d160034
  .word 0x8d15001c
  .word 0x8c940000
  .word 0x8c930004
  .word 0x7fa300d0
  .word 0x8d030038
  .word 0x7fa300c0
  .word 0x8d030020
  .word 0x14a00003
  .word 0x7fa300b0
  .word 0x10000067
  .word 0xdfbf00a0
  .word 0x0c14ba1e
  .word 0xc6cc0000
  .word 0xc6cc0000
  .word 0x0c14b9b6
  .word 0x46000506
  .word 0xc62b0000
  .word 0x7ba300c0
  .word 0xc6480000
  .word 0x02933821
  .word 0xc6270004
  .word 0x00f33021
  .word 0xc6460004
  .word 0x26f70001
  .word 0xc6240008
  .word 0x00d32821
  .word 0x4600a047
  .word 0x02fe202a
  .word 0x460b081a
  .word 0x02c3b021
  .word 0x4608029c
  .word 0x3c033f00
  .word 0x4607081a
  .word 0x4606025c
  .word 0x4604081a
  .word 0xc6430008
  .word 0xc6a10000
  .word 0x44832800
  .word 0x7ba300b0
  .word 0x4603009c
  .word 0x460b001a
  .word 0x4608a2dc
  .word 0x4607001a
  .word 0x4606a1dc
  .word 0x4604001a
  .word 0x46012802
  .word 0x46005182
  .word 0x46004a82
  .word 0x46001242
  .word 0xc6a20004
  .word 0x4603a21c
  .word 0xc6030000
  .word 0x46003107
  .word 0x46005047
  .word 0x46004807
  .word 0x46022882
  .word 0x02a3a821
  .word 0x7ba300d0
  .word 0x46025942
  .word 0x460239c2
  .word 0x46024202
  .word 0x46052081
  .word 0x46021880
  .word 0xe6820000
  .word 0x46052080
  .word 0x460708c1
  .word 0xc6040004
  .word 0x46070840
  .word 0x460320c0
  .word 0xe6830004
  .word 0x460800c1
  .word 0xc6040008
  .word 0x46080000
  .word 0x460320c0
  .word 0xe6830008
  .word 0x460530c1
  .word 0x00b3a021
  .word 0xc6040000
  .word 0x46053140
  .word 0x460320c0
  .word 0xe4e30000
  .word 0xc6060004
  .word 0x460750c1
  .word 0x46075100
  .word 0x460330c0
  .word 0xe4e30004
  .word 0xc6070008
  .word 0x46084981
  .word 0x460848c0
  .word 0x46063980
  .word 0xe4e60008
  .word 0xc6060000
  .word 0x46053140
  .word 0xe4c50000
  .word 0xc6050004
  .word 0x46042900
  .word 0xe4c40004
  .word 0xc6040008
  .word 0x460320c0
  .word 0xe4c30008
  .word 0xc6030000
  .word 0x46021880
  .word 0xe4a20000
  .word 0xc6020004
  .word 0x46011040
  .word 0xe4a10004
  .word 0xc6010008
  .word 0x46000800
  .word 0x02038021
  .word 0x1480ff9d
  .word 0xe4a00008
  .word 0x1000ff99
  .word 0x00000000
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
  .word 0x27bd00e0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00487280
asm void FUN_00487280(int *param_1,float *param_2,float *param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff30
  .word 0x3c033f00
  .word 0xffbf00a0
  .word 0x44831000
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x00e0f02d
  .word 0x7fb60070
  .word 0x0100b82d
  .word 0x7fb50060
  .word 0x0000b02d
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x00a0882d
  .word 0xe7b60008
  .word 0x00c0802d
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8d030008
  .word 0xc5010070
  .word 0xc5000074
  .word 0x8d150004
  .word 0x8d140034
  .word 0x8c930000
  .word 0x8c920004
  .word 0x7fa300c0
  .word 0x46011582
  .word 0x8d030038
  .word 0x7fa300b0
  .word 0x001e182a
  .word 0x14600003
  .word 0x46001542
  .word 0x10000073
  .word 0xdfbf00a0
  .word 0x0c14ba1e
  .word 0xc68c0000
  .word 0xc68c0000
  .word 0x0c14b9b6
  .word 0x46000506
  .word 0xc6070000
  .word 0x7ba300b0
  .word 0xc6230000
  .word 0x26d60001
  .word 0xc6060004
  .word 0x02723021
  .word 0xc6210004
  .word 0x02de202a
  .word 0xc6050008
  .word 0x4600a087
  .word 0x4607101a
  .word 0x0283a021
  .word 0x4603029c
  .word 0x00d21821
  .word 0x4606101a
  .word 0x00722821
  .word 0x4601025c
  .word 0x4605101a
  .word 0xc6240008
  .word 0xc6e2006c
  .word 0x46165382
  .word 0x4604021c
  .word 0x4607001a
  .word 0x4603a0dc
  .word 0x4606001a
  .word 0x4601a05c
  .word 0x4605001a
  .word 0x4604a1dc
  .word 0xc6e00068
  .word 0x4603101a
  .word 0x46151b42
  .word 0x460a019c
  .word 0x4601101a
  .word 0x4609015c
  .word 0x4607101a
  .word 0x4608011c
  .word 0x46164082
  .word 0x461648c2
  .word 0xc6a80000
  .word 0x46153802
  .word 0x46007247
  .word 0x460d49c1
  .word 0x46064200
  .word 0x460741c0
  .word 0xe6670000
  .word 0xc6aa0004
  .word 0x46150842
  .word 0x46001a07
  .word 0x460141c1
  .word 0x46055280
  .word 0x460751c0
  .word 0xe6670004
  .word 0xc6ab0008
  .word 0x460011c7
  .word 0x46003a81
  .word 0x46045ac0
  .word 0x460a5a80
  .word 0xe66a0008
  .word 0xc6ac0000
  .word 0x00b29821
  .word 0x460d72c1
  .word 0x46014200
  .word 0x46066300
  .word 0x460b62c0
  .word 0xe4cb0000
  .word 0x46011ac1
  .word 0xc6ac0004
  .word 0x46011840
  .word 0x460039c0
  .word 0x460560c0
  .word 0x460b18c0
  .word 0xe4c30004
  .word 0x460010c1
  .word 0xc6ab0008
  .word 0x46001000
  .word 0x460d7280
  .word 0x46045880
  .word 0x46031080
  .word 0xe4c20008
  .word 0xc6a20000
  .word 0x460d4a40
  .word 0x46061080
  .word 0x460a1080
  .word 0xe4620000
  .word 0xc6a20004
  .word 0x46051080
  .word 0x46011040
  .word 0xe4610004
  .word 0xc6a10008
  .word 0x46040840
  .word 0x46000800
  .word 0xe4600008
  .word 0xc6a00000
  .word 0x7ba300c0
  .word 0x46060000
  .word 0x46090000
  .word 0xe4a00000
  .word 0xc6a00004
  .word 0x46050000
  .word 0x46080000
  .word 0xe4a00004
  .word 0xc6a00008
  .word 0x46040000
  .word 0x02a3a821
  .word 0x46070000
  .word 0x1480ff91
  .word 0xe4a00008
  .word 0x1000ff8d
  .word 0x00000000
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
  .word 0x27bd00d0
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0xc509006c
  .word 0x8d0f0004
  .word 0xc4c40000
  .word 0x8d0c0008
  .word 0xc5080068
  .word 0x8d0e001c
  .word 0xc4a50000
  .word 0x8d0b0020
  .word 0xc4c20004
  .word 0x8c8d0000
  .word 0xc4a30004
  .word 0x8c8a0004
  .word 0xc4c00008
  .word 0x0007082a
  .word 0x4604481a
  .word 0x0000c02d
  .word 0xc4a10008
  .word 0x4605419c
  .word 0x4602481a
  .word 0x460341dc
  .word 0x4600481a
  .word 0x1020005c
  .word 0x4601421c
  .word 0x3c033f00
  .word 0x44832800
  .word 0xc5c10004
  .word 0x01aa4821
  .word 0xc5c90000
  .word 0x012a4021
  .word 0xc5ea0000
  .word 0x27180001
  .word 0xc4c00000
  .word 0x010a2021
  .word 0xc4a40000
  .word 0x0307182a
  .word 0xc4a30004
  .word 0x46012b02
  .word 0x01cb7021
  .word 0x46092a42
  .word 0xc4a20008
  .word 0x460c0382
  .word 0x46092102
  .word 0xc4c10004
  .word 0xc4c00008
  .word 0x460918c2
  .word 0x46091082
  .word 0x460022c7
  .word 0x460e5a41
  .word 0x46065280
  .word 0x46095240
  .word 0x460c0842
  .word 0x460c0002
  .word 0xe5a90000
  .word 0xc5ec0004
  .word 0x46001a87
  .word 0x46015241
  .word 0x46076300
  .word 0x46096240
  .word 0xe5a90004
  .word 0xc5ed0008
  .word 0x46001247
  .word 0x46004b01
  .word 0x46086b40
  .word 0x460c6b00
  .word 0xe5ac0008
  .word 0xc5ed0000
  .word 0x008a6821
  .word 0x460e2301
  .word 0x46015280
  .word 0x46066b40
  .word 0x460c6b00
  .word 0xe52c0000
  .word 0x46011b01
  .word 0xc5ed0004
  .word 0x46011840
  .word 0x46004a40
  .word 0x460768c0
  .word 0x460c18c0
  .word 0xe5230004
  .word 0x460010c1
  .word 0xc5ec0008
  .word 0x46001000
  .word 0x460e2100
  .word 0x46086080
  .word 0x46031080
  .word 0xe5220008
  .word 0xc5e20000
  .word 0x460e5ac0
  .word 0x46061080
  .word 0x46041080
  .word 0xe5020000
  .word 0xc5e20004
  .word 0x46071080
  .word 0x46011040
  .word 0xe5010004
  .word 0xc5e10008
  .word 0x46080840
  .word 0x46000800
  .word 0xe5000008
  .word 0xc5e00000
  .word 0x46060000
  .word 0x460b0000
  .word 0xe4800000
  .word 0xc5e00004
  .word 0x46070000
  .word 0x460a0000
  .word 0xe4800004
  .word 0xc5e00008
  .word 0x46080000
  .word 0x01ec7821
  .word 0x46090000
  .word 0x1460ffa9
  .word 0xe4800008
  .word 0x00000000
  .word 0x03e00008
  .word 0x00000000
}

// FUN_004876F0
asm void FUN_004876f0(int *param_1,float *param_2,float *param_3,long param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff10
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x0100f02d
  .word 0x7fb60070
  .word 0x0000b82d
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x00a0982d
  .word 0x7fb10020
  .word 0x00c0902d
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0xafa700ec
  .word 0x8d030008
  .word 0x8d110004
  .word 0x8d100034
  .word 0x8d16001c
  .word 0x8c950000
  .word 0x8c940004
  .word 0x7fa300d0
  .word 0x00e0182d
  .word 0x0003282a
  .word 0x8d030038
  .word 0x7fa300c0
  .word 0x8d030020
  .word 0x14a00003
  .word 0x7fa300b0
  .word 0x1000007c
  .word 0xdfbf00a0
  .word 0x0c14ba1e
  .word 0xc60c0000
  .word 0xc60c0000
  .word 0x0c14b9b6
  .word 0x46000506
  .word 0xc6490000
  .word 0x7ba300c0
  .word 0xc6660000
  .word 0x02b43821
  .word 0xc6450004
  .word 0x00f43021
  .word 0xc6640004
  .word 0x00d42821
  .word 0xc6420008
  .word 0x26f70001
  .word 0x4600a1c7
  .word 0x4609381a
  .word 0x02038021
  .word 0x460602dc
  .word 0x3c033f00
  .word 0x4605381a
  .word 0x4604035c
  .word 0x4602381a
  .word 0xc6610008
  .word 0x44831800
  .word 0xc7c8006c
  .word 0x8fa300ec
  .word 0xc7c70068
  .word 0x460103dc
  .word 0x4609001a
  .word 0x4606a19c
  .word 0x4605001a
  .word 0x02e3202a
  .word 0x4604a29c
  .word 0x7ba300b0
  .word 0x4602001a
  .word 0x4601a25c
  .word 0xc6c20000
  .word 0xc6c10004
  .word 0x4606401a
  .word 0x460b391c
  .word 0xc6200000
  .word 0x460a401a
  .word 0x46021942
  .word 0x02c3b021
  .word 0x7ba300d0
  .word 0x46011842
  .word 0x46055b82
  .word 0x460132c2
  .word 0x460d38dc
  .word 0x46040180
  .word 0x4609401a
  .word 0x460f389c
  .word 0x46015302
  .word 0x46014802
  .word 0x46056b42
  .word 0x46057842
  .word 0x460071c7
  .word 0x460b3941
  .word 0x46053140
  .word 0xe6a50000
  .word 0xc6280004
  .word 0x46006987
  .word 0x460c3141
  .word 0x46034200
  .word 0x46054140
  .word 0xe6a50004
  .word 0xc6290008
  .word 0x46000947
  .word 0x46002a01
  .word 0x46024a40
  .word 0x46084a00
  .word 0xe6a80008
  .word 0xc62a0000
  .word 0x00b4a821
  .word 0x460b7201
  .word 0x460b39c0
  .word 0x46045280
  .word 0x46085200
  .word 0xe4e80000
  .word 0x460b7240
  .word 0xc62b0004
  .word 0x460c6a81
  .word 0x46002940
  .word 0x46035ac0
  .word 0x460a5a80
  .word 0xe4ea0004
  .word 0x46000a81
  .word 0xc62b0008
  .word 0x46000800
  .word 0x460c6a00
  .word 0x46025840
  .word 0x460a0840
  .word 0xe4e10008
  .word 0xc6210000
  .word 0x460c3180
  .word 0x46040840
  .word 0x46090840
  .word 0xe4c10000
  .word 0xc6210004
  .word 0x46030840
  .word 0x46080840
  .word 0xe4c10004
  .word 0xc6210008
  .word 0x46020840
  .word 0x46000800
  .word 0xe4c00008
  .word 0xc6200000
  .word 0x46040000
  .word 0x46070000
  .word 0xe4a00000
  .word 0xc6200004
  .word 0x46030000
  .word 0x46060000
  .word 0xe4a00004
  .word 0xc6200008
  .word 0x46020000
  .word 0x02238821
  .word 0x46050000
  .word 0x1480ff88
  .word 0xe4a00008
  .word 0x1000ff84
  .word 0x00000000
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
  .word 0x8c8c0000
  .word 0x0007082a
  .word 0x8c8a0004
  .word 0x8d0b000c
  .word 0x8d090010
  .word 0x10200042
  .word 0x0000682d
  .word 0x3c033f00
  .word 0x44830000
  .word 0xc5660000
  .word 0x018a3021
  .word 0xc5640008
  .word 0x00ca2821
  .word 0xc5630010
  .word 0x25ad0001
  .word 0xc5650004
  .word 0x25680030
  .word 0xc5620014
  .word 0x00aa2021
  .word 0xc5610018
  .word 0x01a7182a
  .word 0x46060182
  .word 0x460300c2
  .word 0x01695821
  .word 0x46040202
  .word 0x46050142
  .word 0x46020082
  .word 0x460331c0
  .word 0x46033101
  .word 0x46010042
  .word 0x46022980
  .word 0x460228c1
  .word 0x46014140
  .word 0x46014081
  .word 0xc5010000
  .word 0x46040840
  .word 0xe5810000
  .word 0xc5010004
  .word 0x46030840
  .word 0xe5810004
  .word 0xc5010008
  .word 0x46020840
  .word 0xe5810008
  .word 0xc5010000
  .word 0x008a6021
  .word 0x46070841
  .word 0xe4c10000
  .word 0xc5010004
  .word 0x46060841
  .word 0xe4c10004
  .word 0xc5010008
  .word 0x46050841
  .word 0xe4c10008
  .word 0xc5010000
  .word 0x46040841
  .word 0xe4a10000
  .word 0xc5010004
  .word 0x46030841
  .word 0xe4a10004
  .word 0xc5010008
  .word 0x46020841
  .word 0xe4a10008
  .word 0xc5010000
  .word 0x46070840
  .word 0xe4810000
  .word 0xc5010004
  .word 0x46060840
  .word 0xe4810004
  .word 0xc5010008
  .word 0x46050840
  .word 0x1460ffc2
  .word 0xe4810008
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0xc5020068
  .word 0x8d0a000c
  .word 0xc501006c
  .word 0x8c8b0000
  .word 0x8c890004
  .word 0x0007082a
  .word 0x8d080010
  .word 0x10200042
  .word 0x0000602d
  .word 0x3c033f00
  .word 0x44830000
  .word 0x44806000
  .word 0xc5430030
  .word 0x01693021
  .word 0xc5460010
  .word 0x00c92821
  .word 0xc5450000
  .word 0x258c0001
  .word 0xc5500014
  .word 0x00a92021
  .word 0xc54a0004
  .word 0x0187182a
  .word 0xc54e0018
  .word 0x46036018
  .word 0xc5490008
  .word 0x460628c1
  .word 0x46030202
  .word 0x461050c0
  .word 0x460303c2
  .word 0x460e48c0
  .word 0x46030342
  .word 0x461050c1
  .word 0x460301c2
  .word 0x46062900
  .word 0x4602281e
  .word 0x46040442
  .word 0x460e48c1
  .word 0x460132dc
  .word 0x46030182
  .word 0xc5450034
  .word 0xc5440038
  .word 0x460858c0
  .word 0x46056018
  .word 0x4602501e
  .word 0x01485021
  .word 0x4601829c
  .word 0x46046018
  .word 0xe5630000
  .word 0x460750c0
  .word 0x4602481e
  .word 0x4601725c
  .word 0xe5630004
  .word 0x460648c0
  .word 0xe5630008
  .word 0x461158c1
  .word 0x00895821
  .word 0xe4c30000
  .word 0x460f50c1
  .word 0xe4c30004
  .word 0x460d48c1
  .word 0xe4c30008
  .word 0x46085a01
  .word 0x460751c1
  .word 0xe4a80000
  .word 0x46064981
  .word 0xe4a70004
  .word 0x46115940
  .word 0xe4a60008
  .word 0x460f5100
  .word 0xe4850000
  .word 0x460d48c0
  .word 0xe4840004
  .word 0x1460ffc3
  .word 0xe4830008
  .word 0x03e00008
  .word 0x00000000
}

// FUN_00487BF0 NONMATCHING

void FUN_00487bf0(u32 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  u32 uVar3;
  u8 bVar4;
  u32 *puVar5;
  u32 *puVar6;
  u32 *puVar7;
  u32 *puVar8;
  u32 *puVar9;
  u32 *puVar10;
  u32 *puVar11;
  u32 *puVar12;
  u32 *puVar13;
  u32 *puVar14;
  u32 *puVar15;
  u32 *puVar16;
  u32 *puVar17;
  u32 *puVar18;
  u32 *puVar19;
  u32 *puVar20;
  int iVar21;
  u32 *puVar22;
  u32 *puVar23;
  u32 *puVar24;
  u32 *puVar25;
  u32 *puVar26;
  u32 *puVar27;
  u32 *puVar28;
  u32 *puVar29;
  u32 *puVar30;
  
  puVar6 = (u32 *)*param_1;
  iVar1 = param_1[1];
  puVar20 = *(u32 **)(param_3 + 0x24);
  iVar2 = *(int *)(param_3 + 0x28);
  iVar21 = 0;
  if (0 < param_2) {
    if (8 < param_2) {
      bVar4 = 0;
      if ((-1 < param_2) && (param_2 < 0x7fffffff)) {
        bVar4 = 1;
      }
      if (bVar4) {
        do {
          uVar3 = *puVar20;
          puVar8 = (u32 *)((int)puVar6 + iVar1 + iVar1);
          puVar7 = (u32 *)((int)puVar8 + iVar1);
          puVar9 = (u32 *)((int)puVar20 + iVar2 + iVar2);
          puVar18 = (u32 *)((int)puVar9 + iVar2);
          puVar13 = (u32 *)((int)puVar7 + iVar1);
          puVar28 = (u32 *)((int)puVar18 + iVar2);
          puVar11 = (u32 *)((int)puVar13 + iVar1);
          puVar12 = (u32 *)((int)puVar28 + iVar2);
          puVar10 = (u32 *)((int)puVar11 + iVar1);
          *puVar6 = uVar3;
          puVar5 = (u32 *)((int)puVar12 + iVar2);
          *(u32 *)((int)puVar6 + iVar1) = uVar3;
          puVar19 = (u32 *)((int)puVar10 + iVar1);
          *puVar8 = uVar3;
          iVar21 = iVar21 + 8;
          *puVar7 = uVar3;
          puVar8 = (u32 *)((int)puVar19 + iVar1);
          uVar3 = *(u32 *)((int)puVar20 + iVar2);
          puVar7 = (u32 *)((int)puVar8 + iVar1);
          puVar6 = (u32 *)((int)puVar7 + iVar1);
          puVar22 = (u32 *)((int)puVar6 + iVar1);
          puVar29 = (u32 *)((int)puVar22 + iVar1);
          puVar17 = (u32 *)((int)puVar29 + iVar1);
          puVar16 = (u32 *)((int)puVar17 + iVar1);
          *puVar13 = uVar3;
          *puVar11 = uVar3;
          *puVar10 = uVar3;
          *puVar19 = uVar3;
          uVar3 = *puVar9;
          puVar14 = (u32 *)((int)puVar5 + iVar2);
          puVar20 = (u32 *)((int)puVar14 + iVar2);
          *puVar8 = uVar3;
          *puVar7 = uVar3;
          *puVar6 = uVar3;
          *puVar22 = uVar3;
          puVar15 = (u32 *)((int)puVar16 + iVar1);
          puVar22 = (u32 *)((int)puVar15 + iVar1);
          puVar19 = (u32 *)((int)puVar22 + iVar1);
          puVar13 = (u32 *)((int)puVar19 + iVar1);
          puVar11 = (u32 *)((int)puVar13 + iVar1);
          puVar10 = (u32 *)((int)puVar11 + iVar1);
          puVar30 = (u32 *)((int)puVar10 + iVar1);
          puVar24 = (u32 *)((int)puVar30 + iVar1);
          puVar25 = (u32 *)((int)puVar24 + iVar1);
          puVar26 = (u32 *)((int)puVar25 + iVar1);
          puVar27 = (u32 *)((int)puVar26 + iVar1);
          uVar3 = *puVar18;
          puVar9 = (u32 *)((int)puVar27 + iVar1);
          puVar8 = (u32 *)((int)puVar9 + iVar1);
          puVar7 = (u32 *)((int)puVar8 + iVar1);
          puVar23 = (u32 *)((int)puVar7 + iVar1);
          *puVar29 = uVar3;
          puVar18 = (u32 *)((int)puVar23 + iVar1);
          *puVar17 = uVar3;
          puVar6 = (u32 *)((int)puVar18 + iVar1);
          *puVar16 = uVar3;
          *puVar15 = uVar3;
          uVar3 = *puVar28;
          *puVar22 = uVar3;
          *puVar19 = uVar3;
          *puVar13 = uVar3;
          *puVar11 = uVar3;
          uVar3 = *puVar12;
          *puVar10 = uVar3;
          *puVar30 = uVar3;
          *puVar24 = uVar3;
          *puVar25 = uVar3;
          uVar3 = *puVar5;
          *puVar26 = uVar3;
          *puVar27 = uVar3;
          *puVar9 = uVar3;
          *puVar8 = uVar3;
          uVar3 = *puVar14;
          *puVar7 = uVar3;
          *puVar23 = uVar3;
          *puVar18 = uVar3;
          *puVar6 = uVar3;
          puVar6 = (u32 *)((int)puVar6 + iVar1);
        } while (iVar21 < param_2 + -8);
      }
    }
    for (; iVar21 < param_2; iVar21 = iVar21 + 1) {
      uVar3 = *puVar20;
      puVar7 = (u32 *)((int)puVar6 + iVar1 + iVar1);
      puVar5 = (u32 *)((int)puVar7 + iVar1);
      *puVar6 = uVar3;
      puVar20 = (u32 *)((int)puVar20 + iVar2);
      *(u32 *)((int)puVar6 + iVar1) = uVar3;
      puVar6 = (u32 *)((int)puVar5 + iVar1);
      *puVar7 = uVar3;
      *puVar5 = uVar3;
    }
  }
  return;
}

// FUN_00488550
asm void FUN_00488550(int *param_1,int param_2,int param_3,int param_4,u32 param_5)
{
  .set noreorder
  .word 0x27bdff30
  .word 0x3c030080
  .word 0xffbf00b0
  .word 0x7fbe00a0
  .word 0x7fb70090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x0080a02d
  .word 0x7fb20040
  .word 0x00c0982d
  .word 0x7fb10030
  .word 0x00e0902d
  .word 0x7fb00020
  .word 0x0100882d
  .word 0xe7ba0018
  .word 0x02231024
  .word 0xe7b90014
  .word 0x26960030
  .word 0xe7b80010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8cb00018
  .word 0x1043005a
  .word 0x2697003c
  .word 0x3c020096
  .word 0x8c420070
  .word 0x0c132cbc
  .word 0x8c440004
  .word 0x8e650058
  .word 0x34038000
  .word 0x30a48000
  .word 0x10830106
  .word 0x00000000
  .word 0x3c040002
  .word 0x00a41824
  .word 0x1064010f
  .word 0x00000000
  .word 0xc4400000
  .word 0x46000007
  .word 0xe6c00000
  .word 0xc4400004
  .word 0x46000007
  .word 0xe6c00004
  .word 0xc4400008
  .word 0x46000007
  .word 0xe6c00008
  .word 0xc4400010
  .word 0xe6e00000
  .word 0xc4400014
  .word 0xe6e00004
  .word 0xc4400018
  .word 0xe6e00008
  .word 0x32230002
  .word 0x38630002
  .word 0x2c630001
  .word 0x14600004
  .word 0x00000000
  .word 0x32232000
  .word 0x38632000
  .word 0x2c630001
  .word 0x14600004
  .word 0x00000000
  .word 0x32230040
  .word 0x38630040
  .word 0x2c630001
  .word 0x14600005
  .word 0x00000000
  .word 0x3c040004
  .word 0x02241824
  .word 0x00641826
  .word 0x2c630001
  .word 0xae830008
  .word 0x32230080
  .word 0x38630080
  .word 0x2c630001
  .word 0x14600004
  .word 0x00000000
  .word 0x32230100
  .word 0x38630100
  .word 0x2c630001
  .word 0x14600005
  .word 0x00000000
  .word 0x3c040008
  .word 0x02241824
  .word 0x00641826
  .word 0x2c630001
  .word 0x14600005
  .word 0x00000000
  .word 0x3c040010
  .word 0x02241824
  .word 0x00641826
  .word 0x2c630001
  .word 0xae830004
  .word 0x24040001
  .word 0x32230010
  .word 0xae840000
  .word 0x38630010
  .word 0x2c630001
  .word 0xae83000c
  .word 0x8e830000
  .word 0x146000f0
  .word 0x8e11005c
  .word 0x8e830008
  .word 0x146000f5
  .word 0x00000000
  .word 0x8e830004
  .word 0x146000fa
  .word 0x00000000
  .word 0x8e83000c
  .word 0x146000ff
  .word 0x00000000
  .word 0x10000105
  .word 0xdfbf00b0
  .word 0x3c020078
  .word 0x8f83ba80
  .word 0xc442dcb0
  .word 0x8e1e005c
  .word 0x0200202d
  .word 0x3c020078
  .word 0xc441dcb4
  .word 0xe7a200c0
  .word 0x3c020078
  .word 0xc440dcb8
  .word 0xe7a100c4
  .word 0x00a31021
  .word 0x8c420000
  .word 0x24050002
  .word 0x8c550000
  .word 0x0c124cdc
  .word 0xe7a000c8
  .word 0x0255082a
  .word 0x1020ff94
  .word 0x8fc40014
  .word 0x02b21023
  .word 0x28410009
  .word 0x1420007e
  .word 0x26a3fff8
  .word 0x02b2082a
  .word 0x0000282d
  .word 0x14200096
  .word 0x0000102d
  .word 0x3c017fff
  .word 0x3421ffff
  .word 0x02a1082a
  .word 0x10200091
  .word 0x00000000
  .word 0x1000008f
  .word 0x24020001
  .word 0x3421ffff
  .word 0x0241082a
  .word 0x10200002
  .word 0x00000000
  .word 0x24050001
  .word 0x10a0006c
  .word 0x00000000
  .word 0xc7a200c0
  .word 0x00121040
  .word 0xc7a100c4
  .word 0x00521021
  .word 0xc7a000c8
  .word 0x00021100
  .word 0x00822821
  .word 0xe4a20000
  .word 0x26520008
  .word 0xe4a10004
  .word 0x0243102a
  .word 0xe4a00008
  .word 0xe4a2000c
  .word 0xe4a10010
  .word 0xe4a00014
  .word 0xe4a20018
  .word 0xe4a1001c
  .word 0xe4a00020
  .word 0xe4a20024
  .word 0xe4a10028
  .word 0xe4a0002c
  .word 0xe4a20030
  .word 0xe4a10034
  .word 0xe4a00038
  .word 0xe4a2003c
  .word 0xe4a10040
  .word 0xe4a00044
  .word 0xe4a20048
  .word 0xe4a1004c
  .word 0xe4a00050
  .word 0xe4a20054
  .word 0xe4a10058
  .word 0xe4a0005c
  .word 0xe4a20060
  .word 0xe4a10064
  .word 0xe4a00068
  .word 0xe4a2006c
  .word 0xe4a10070
  .word 0xe4a00074
  .word 0xe4a20078
  .word 0xe4a1007c
  .word 0xe4a00080
  .word 0xe4a20084
  .word 0xe4a10088
  .word 0xe4a0008c
  .word 0xe4a20090
  .word 0xe4a10094
  .word 0xe4a00098
  .word 0xe4a2009c
  .word 0xe4a100a0
  .word 0xe4a000a4
  .word 0xe4a200a8
  .word 0xe4a100ac
  .word 0xe4a000b0
  .word 0xe4a200b4
  .word 0xe4a100b8
  .word 0xe4a000bc
  .word 0xe4a200c0
  .word 0xe4a100c4
  .word 0xe4a000c8
  .word 0xe4a200cc
  .word 0xe4a100d0
  .word 0xe4a000d4
  .word 0xe4a200d8
  .word 0xe4a100dc
  .word 0xe4a000e0
  .word 0xe4a200e4
  .word 0xe4a100e8
  .word 0xe4a000ec
  .word 0xe4a200f0
  .word 0xe4a100f4
  .word 0xe4a000f8
  .word 0xe4a200fc
  .word 0xe4a10100
  .word 0xe4a00104
  .word 0xe4a20108
  .word 0xe4a1010c
  .word 0xe4a00110
  .word 0xe4a20114
  .word 0xe4a10118
  .word 0xe4a0011c
  .word 0xe4a20120
  .word 0xe4a10124
  .word 0xe4a00128
  .word 0xe4a2012c
  .word 0xe4a10130
  .word 0xe4a00134
  .word 0xe4a20138
  .word 0xe4a1013c
  .word 0xe4a00140
  .word 0xe4a20144
  .word 0xe4a10148
  .word 0xe4a0014c
  .word 0xe4a20150
  .word 0xe4a10154
  .word 0xe4a00158
  .word 0xe4a2015c
  .word 0xe4a10160
  .word 0xe4a00164
  .word 0xe4a20168
  .word 0xe4a1016c
  .word 0xe4a00170
  .word 0xe4a20174
  .word 0xe4a10178
  .word 0xe4a0017c
  .word 0x1440ff9d
  .word 0x24a50180
  .word 0x0255082a
  .word 0x1020ff10
  .word 0x00000000
  .word 0xc7a200c0
  .word 0x00121040
  .word 0xc7a100c4
  .word 0x00521021
  .word 0xc7a000c8
  .word 0x00021100
  .word 0x00821821
  .word 0xe4620000
  .word 0x26520001
  .word 0xe4610004
  .word 0x0255102a
  .word 0xe4600008
  .word 0xe462000c
  .word 0xe4610010
  .word 0xe4600014
  .word 0xe4620018
  .word 0xe461001c
  .word 0xe4600020
  .word 0xe4620024
  .word 0xe4610028
  .word 0xe460002c
  .word 0x1440fff1
  .word 0x24630030
  .word 0x1000fef7
  .word 0x00000000
  .word 0x1040ff76
  .word 0x00000000
  .word 0x1000ff6f
  .word 0x3c017fff
  .word 0xc66200b0
  .word 0xc66100b4
  .word 0xc66000b8
  .word 0xe6c20000
  .word 0xe6c10004
  .word 0xe6c00008
  .word 0xc66200c0
  .word 0xc66100c4
  .word 0xc66000c8
  .word 0xe6e20000
  .word 0xe6e10004
  .word 0x1000ff02
  .word 0xe6e00008
  .word 0xc4420000
  .word 0xc4410004
  .word 0xc4400008
  .word 0xc45a0010
  .word 0xc4590014
  .word 0xc4580018
  .word 0xc66c0078
  .word 0x46001507
  .word 0x46000d47
  .word 0x0c14ba1e
  .word 0x46000587
  .word 0xc66c0078
  .word 0x0c14b9b6
  .word 0x460005c6
  .word 0x4600b887
  .word 0x461a101a
  .word 0x4614005c
  .word 0xe6c10000
  .word 0x4619101a
  .word 0x4615005c
  .word 0xe6c10004
  .word 0x4618101a
  .word 0x4616005c
  .word 0xe6c10008
  .word 0x461a001a
  .word 0x4614b85c
  .word 0xe6e10000
  .word 0x4619001a
  .word 0x4615b85c
  .word 0x4618001a
  .word 0x4616b81c
  .word 0xe6e10004
  .word 0x1000fee0
  .word 0xe6e00008
  .word 0x0200202d
  .word 0x0c124cdc
  .word 0x24050002
  .word 0x8e240014
  .word 0x2403000c
  .word 0xae840010
  .word 0x1000ff0a
  .word 0xae830014
  .word 0x0200202d
  .word 0x0c124cdc
  .word 0x24050008
  .word 0x8e040030
  .word 0x24030004
  .word 0xae840020
  .word 0x1000ff05
  .word 0xae830024
  .word 0x0200202d
  .word 0x0c124cdc
  .word 0x24050010
  .word 0x8e040034
  .word 0x24030008
  .word 0xae840018
  .word 0x1000ff00
  .word 0xae83001c
  .word 0x0200202d
  .word 0x0c124cdc
  .word 0x24050004
  .word 0x8e240018
  .word 0x2403000c
  .word 0xae840028
  .word 0x1000fefb
  .word 0xae83002c
  .word 0xc7ba0018
  .word 0x7bbe00a0
  .word 0xc7b90014
  .word 0x7bb70090
  .word 0xc7b80010
  .word 0x7bb60080
  .word 0xc7b7000c
  .word 0x7bb50070
  .word 0xc7b60008
  .word 0x7bb40060
  .word 0xc7b50004
  .word 0x7bb30050
  .word 0xc7b40000
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x03e00008
  .word 0x27bd00d0
  .word 0x00000000
  .word 0x08124cf4
  .word 0x8ca40018
  .word 0x00000000
  .word 0x00000000
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x3c100096
  .word 0x2404000b
  .word 0x26100094
  .word 0x8e020000
  .word 0x0040f809
  .word 0x27a50048
  .word 0x8e020000
  .word 0x2404000a
  .word 0x0040f809
  .word 0x27a5004c
  .word 0x8e220064
  .word 0x14400003
  .word 0x00000000
  .word 0x1000001a
  .word 0x24020001
  .word 0x3c100096
  .word 0x8e250060
  .word 0x26100090
  .word 0x8e020000
  .word 0x0040f809
  .word 0x2404000b
  .word 0x8e25005c
  .word 0x8e020000
  .word 0x0040f809
  .word 0x2404000a
  .word 0x8f82ba80
  .word 0x02421021
  .word 0x8c420000
  .word 0x8c420010
  .word 0x0040f809
  .word 0x0240202d
  .word 0x8fa50048
  .word 0x8e020000
  .word 0x0040f809
  .word 0x2404000b
  .word 0x8e020000
  .word 0x8fa5004c
  .word 0x0040f809
  .word 0x2404000a
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

// FUN_0048D270
asm u64 FUN_0048d270(int param_1,int param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x06200026
  .word 0x00c0802d
  .word 0x8e43000c
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24040001
  .word 0x10640003
  .word 0x00000000
  .word 0x10000007
  .word 0x24020102
  .word 0x8e420008
  .word 0x1000000a
  .word 0x2442fffe
  .word 0x8e420008
  .word 0x10000007
  .word 0x2442fffd
  .word 0x0c130744
  .word 0xafa20040
  .word 0xafa20044
  .word 0x0c130714
  .word 0x27a40040
  .word 0x0000102d
  .word 0x0222082a
  .word 0x1020000e
  .word 0x00000000
  .word 0x8e430014
  .word 0x00111040
  .word 0x00512021
  .word 0x00042080
  .word 0x0200102d
  .word 0x00641821
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe6020000
  .word 0xe6010004
  .word 0x1000000c
  .word 0xe6000008
  .word 0x24030102
  .word 0x3c028000
  .word 0x3c050078
  .word 0xafa30048
  .word 0x34440003
  .word 0x0c130744
  .word 0x24a5dcc0
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
}

#pragma schedule on
// FUN_0048D370
asm u64 FUN_0048d370(u32 *param_1,int param_2,float *param_3)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x0620002b
  .word 0x00c0802d
  .word 0x8e43000c
  .word 0x24020002
  .word 0x10620009
  .word 0x00000000
  .word 0x24040001
  .word 0x10640003
  .word 0x00000000
  .word 0x10000008
  .word 0x24020102
  .word 0x8e420008
  .word 0x1000000b
  .word 0x2442fffe
  .word 0x8e420008
  .word 0x10000008
  .word 0x2442fffd
  .word 0x24020102
  .word 0x0c130744
  .word 0xafa20040
  .word 0xafa20044
  .word 0x0c130714
  .word 0x27a40040
  .word 0x0000102d
  .word 0x0222082a
  .word 0x10200012
  .word 0x00000000
  .word 0x8e420014
  .word 0x00111840
  .word 0xc6020000
  .word 0x00711821
  .word 0xc6010004
  .word 0x00031880
  .word 0xc6000008
  .word 0x00431021
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x8e450014
  .word 0x0c122e44
  .word 0x0240202d
  .word 0x0002900a
  .word 0x1000000c
  .word 0x0240102d
  .word 0x24030102
  .word 0x3c028000
  .word 0x3c050078
  .word 0xafa30048
  .word 0x34440003
  .word 0x0c130744
  .word 0x24a5dcc0
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
}
#pragma schedule off

// FUN_0048D480
asm u64 FUN_0048d480(float param_1,int param_2,long param_3,u64 param_4,long param_5)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x24830038
  .word 0xffbf0020
  .word 0x44800000
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x46006034
  .word 0x00e0802d
  .word 0x8c870008
  .word 0x45010003
  .word 0x00c0882d
  .word 0x10000003
  .word 0x8c84000c
  .word 0x46006307
  .word 0x8c84000c
  .word 0x24020002
  .word 0x14820024
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46006036
  .word 0x4501001e
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x460c0036
  .word 0x45010005
  .word 0x00000000
  .word 0x46006024
  .word 0x44060000
  .word 0x10000007
  .word 0x00000000
  .word 0x46006001
  .word 0x3c028000
  .word 0x46000024
  .word 0x44060000
  .word 0x00000000
  .word 0x00c23025
  .word 0x04c00004
  .word 0x00000000
  .word 0x44860000
  .word 0x10000008
  .word 0x46800020
  .word 0x00062042
  .word 0x30c20001
  .word 0x00822025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x46006301
  .word 0x2402000b
  .word 0x10a20006
  .word 0x00000000
  .word 0x2402000a
  .word 0x10a20018
  .word 0x00000000
  .word 0x1000002d
  .word 0x24020102
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46006036
  .word 0x45000004
  .word 0x00000000
  .word 0x460c6000
  .word 0x1000000d
  .word 0x46006302
  .word 0x3c04c000
  .word 0x3c024080
  .word 0x44840000
  .word 0x44821800
  .word 0x460c0082
  .word 0x3c02bf80
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x460c101e
  .word 0x460c1b1c
  .word 0x3c023f80
  .word 0x44821000
  .word 0x00000000
  .word 0x460c1032
  .word 0x450100d6
  .word 0x00000000
  .word 0x24e4fffd
  .word 0x3c024380
  .word 0x44840800
  .word 0x44820000
  .word 0x00000000
  .word 0x46800860
  .word 0x460c0882
  .word 0x46001064
  .word 0x44050800
  .word 0x46800860
  .word 0x46011041
  .word 0x46010042
  .word 0x46000824
  .word 0x44020000
  .word 0x46800020
  .word 0x10000009
  .word 0x46000881
  .word 0x24040001
  .word 0x0c130744
  .word 0xafa20038
  .word 0xafa2003c
  .word 0x0c130714
  .word 0x27a40038
  .word 0x100000c0
  .word 0x0000102d
  .word 0x8f8aba98
  .word 0x00052040
  .word 0x00852021
  .word 0x00021080
  .word 0x8f89ba94
  .word 0x00042080
  .word 0x00644021
  .word 0x8f85ba90
  .word 0x8f84ba8c
  .word 0x44800800
  .word 0x2507000c
  .word 0x25060018
  .word 0x01425021
  .word 0x25030024
  .word 0xc5470000
  .word 0x01224821
  .word 0xc5460004
  .word 0x00a22821
  .word 0xc5250000
  .word 0x00822021
  .word 0xc5240004
  .word 0xc4a30000
  .word 0xc4a00004
  .word 0x46070818
  .word 0x46073181
  .word 0x460611dc
  .word 0x46052101
  .word 0x46050818
  .word 0x4604119c
  .word 0x46030001
  .word 0x46030818
  .word 0xc5030000
  .word 0x4600115c
  .word 0xc4840000
  .word 0xc4800004
  .word 0x460718c2
  .word 0xe6230000
  .word 0xc5030004
  .word 0x46040001
  .word 0x46040818
  .word 0x460718c2
  .word 0xe6230004
  .word 0xc5030008
  .word 0x4600101c
  .word 0x460718c2
  .word 0xe6230008
  .word 0xc6230000
  .word 0xc504000c
  .word 0x46030818
  .word 0x460620dc
  .word 0xe6230000
  .word 0xc6230004
  .word 0xc5040010
  .word 0x46030818
  .word 0x460620dc
  .word 0xe6230004
  .word 0xc6230008
  .word 0xc5040014
  .word 0x46030818
  .word 0x460620dc
  .word 0xe6230008
  .word 0xc6230000
  .word 0xc5040018
  .word 0x46030818
  .word 0x460520dc
  .word 0xe6230000
  .word 0xc6230004
  .word 0xc504001c
  .word 0x46030818
  .word 0x460520dc
  .word 0xe6230004
  .word 0xc6230008
  .word 0xc5040020
  .word 0x46030818
  .word 0x460520dc
  .word 0xe6230008
  .word 0xc6230000
  .word 0xc5040024
  .word 0x46030818
  .word 0x460020dc
  .word 0xe6230000
  .word 0xc6230004
  .word 0xc5040028
  .word 0x46030818
  .word 0x460020dc
  .word 0xe6230004
  .word 0xc6230008
  .word 0xc504002c
  .word 0x46030818
  .word 0x4600201c
  .word 0x1200005f
  .word 0xe6200008
  .word 0x8f8cbaa8
  .word 0xc5000000
  .word 0x8f8bbaa4
  .word 0x0200202d
  .word 0x8f8abaa0
  .word 0x0200282d
  .word 0x8f89ba9c
  .word 0x01826021
  .word 0xc5880000
  .word 0x01625821
  .word 0xc5870004
  .word 0x01425021
  .word 0xc5660000
  .word 0x01221021
  .word 0xc5650004
  .word 0xc5440000
  .word 0xc5430004
  .word 0x46080818
  .word 0x460839c1
  .word 0x460711dc
  .word 0x46062941
  .word 0x46060818
  .word 0x4605119c
  .word 0x460418c1
  .word 0x46040818
  .word 0x4603115c
  .word 0x460700c2
  .word 0xc4440000
  .word 0xc4400004
  .word 0x46040818
  .word 0x46040001
  .word 0x4600101c
  .word 0xe6030000
  .word 0xc5020004
  .word 0x46071082
  .word 0xe6020004
  .word 0xc5020008
  .word 0x46071082
  .word 0xe6020008
  .word 0xc6020000
  .word 0xc4e30000
  .word 0x46020818
  .word 0x4606189c
  .word 0xe6020000
  .word 0xc6020004
  .word 0xc4e30004
  .word 0x46020818
  .word 0x4606189c
  .word 0xe6020004
  .word 0xc6020008
  .word 0xc4e30008
  .word 0x46020818
  .word 0x4606189c
  .word 0xe6020008
  .word 0xc6020000
  .word 0xc4c30000
  .word 0x46020818
  .word 0x4605189c
  .word 0xe6020000
  .word 0xc6020004
  .word 0xc4c30004
  .word 0x46020818
  .word 0x4605189c
  .word 0xe6020004
  .word 0xc6020008
  .word 0xc4c30008
  .word 0x46020818
  .word 0x4605189c
  .word 0xe6020008
  .word 0xc6020000
  .word 0xc4630000
  .word 0x46020818
  .word 0x4600189c
  .word 0xe6020000
  .word 0xc6020004
  .word 0xc4630004
  .word 0x46020818
  .word 0x4600189c
  .word 0xe6020004
  .word 0xc6020008
  .word 0xc4630008
  .word 0x46020818
  .word 0x4600181c
  .word 0x0c131a5c
  .word 0xe6000008
  .word 0x44800800
  .word 0x00000000
  .word 0x46000832
  .word 0x45000005
  .word 0x00000000
  .word 0xe6010000
  .word 0x3c023f80
  .word 0xae020004
  .word 0xe6010008
  .word 0x10000004
  .word 0x0220102d
  .word 0x24e5fffc
  .word 0x1000ff42
  .word 0x240200ff
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048D960
asm u64 FUN_0048d960(u64 param_1)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0x0080302d
  .word 0xffbf0020
  .word 0x24040002
  .word 0x7fb10010
  .word 0x24050001
  .word 0x7fb00000
  .word 0x0c131628
  .word 0x0000802d
  .word 0x0040882d
  .word 0x12200022
  .word 0x00000000
  .word 0x0220202d
  .word 0x2405000c
  .word 0x0000302d
  .word 0x0c130580
  .word 0x27a7003c
  .word 0x10400018
  .word 0x00000000
  .word 0x8fa3003c
  .word 0x3c020003
  .word 0x34425000
  .word 0x0062102b
  .word 0x1440000a
  .word 0x00000000
  .word 0x3c010003
  .word 0x34217003
  .word 0x0061082b
  .word 0x10200005
  .word 0x00000000
  .word 0x0c123438
  .word 0x0220202d
  .word 0x10000009
  .word 0x0040802d
  .word 0x24030102
  .word 0x3c028000
  .word 0xafa30030
  .word 0x0c130744
  .word 0x34440004
  .word 0xafa20034
  .word 0x0c130714
  .word 0x27a40030
  .word 0x0220202d
  .word 0x0c1315e0
  .word 0x0000282d
  .word 0x0200102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0040
  .word 0x00000000
}

// FUN_0048DA30
asm u32 FUN_0048da30(u64 param_1)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c840014
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000014
  .word 0x8e040010
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae000010
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0xdfbf0010
  .word 0x24020001
  .word 0x7bb00000
  .word 0x03e00008
  .word 0x27bd0020
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0048DAB0
asm long FUN_0048dab0(int param_1,long param_2,u64 param_3)
{
  .set noreorder
  .word 0x27bdff60
  .word 0x24020002
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x00c0b02d
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x12220019
  .word 0x7fb00000
  .word 0x24040001
  .word 0x12240003
  .word 0x00000000
  .word 0x10000043
  .word 0x24020102
  .word 0x3c020003
  .word 0x3c130096
  .word 0x3454000c
  .word 0x26430001
  .word 0x00031040
  .word 0x26730178
  .word 0x00431021
  .word 0x0280282d
  .word 0x00021080
  .word 0x24550044
  .word 0x8e620000
  .word 0x0040f809
  .word 0x02a0202d
  .word 0x0040802d
  .word 0x1200003a
  .word 0x00000000
  .word 0x26420002
  .word 0x10000013
  .word 0xae020008
  .word 0x3c020003
  .word 0x3c130096
  .word 0x3454000c
  .word 0x26430002
  .word 0x00031040
  .word 0x26730178
  .word 0x00431021
  .word 0x0280282d
  .word 0x00021080
  .word 0x24550044
  .word 0x8e620000
  .word 0x0040f809
  .word 0x02a0202d
  .word 0x0040802d
  .word 0x12000032
  .word 0x00000000
  .word 0x26420003
  .word 0xae020008
  .word 0xae000010
  .word 0x2402000c
  .word 0xa2000018
  .word 0x0200202d
  .word 0xae11000c
  .word 0x02c0282d
  .word 0x0c122e44
  .word 0xa2020000
  .word 0x10400031
  .word 0x00000000
  .word 0x2402000c
  .word 0x0280282d
  .word 0xa2020000
  .word 0x00121040
  .word 0x00521821
  .word 0x8e620000
  .word 0x00038880
  .word 0x0040f809
  .word 0x0220202d
  .word 0x1040002c
  .word 0xae020014
  .word 0x8e040014
  .word 0x00121040
  .word 0x00521021
  .word 0x02c0282d
  .word 0x0c148494
  .word 0x00023080
  .word 0x10000032
  .word 0x0200102d
  .word 0x0c130744
  .word 0xafa20088
  .word 0xafa2008c
  .word 0x0c130714
  .word 0x27a40088
  .word 0x1000002b
  .word 0x0000102d
  .word 0x24020102
  .word 0x02a0282d
  .word 0xafa20098
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa2009c
  .word 0x0c130714
  .word 0x27a40098
  .word 0x10000020
  .word 0x0000102d
  .word 0x24020102
  .word 0x02a0282d
  .word 0xafa20090
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa20094
  .word 0x0c130714
  .word 0x27a40090
  .word 0x10000015
  .word 0x0000102d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x1000000f
  .word 0x0000102d
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x0200202d
  .word 0x24020102
  .word 0x0220282d
  .word 0xafa20080
  .word 0x3c028000
  .word 0x0c130744
  .word 0x34440013
  .word 0xafa20084
  .word 0x0c130714
  .word 0x27a40080
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
  .word 0x27bd00a0
}

#pragma schedule on
// FUN_0048DCF0

int FUN_0048dcf0(void)

{
  int lVar1;
  
  lVar1 = FUN_004ca520_typed(0,0x102,(u8*)FUN_0048cfa0,(u8*)FUN_0048cf00);
  return lVar1 >= 0;
}
#pragma schedule off
#pragma optimization_level 2

#pragma schedule on
// FUN_0048DD30
int FUN_0048dd30(int param_1)
{
  iGpffffbb04 = iGpffffbb04 + 1;
  return param_1;
}

// FUN_0048DD50
int FUN_0048dd50(int param_1)
{
  iGpffffbb04 = iGpffffbb04 - 1;
  return param_1;
}
#pragma schedule off

// FUN_0048DD70
asm void FUN_0048dd70(int *param_1)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x0080982d
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c840000
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae600000
  .word 0x8e640004
  .word 0x24030003
  .word 0x14830014
  .word 0x00000000
  .word 0x8e630008
  .word 0x8e71000c
  .word 0x0003082a
  .word 0x1020000f
  .word 0x0000902d
  .word 0x3c100096
  .word 0x2610017c
  .word 0x8e240000
  .word 0x10800004
  .word 0x00000000
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e630008
  .word 0x26520001
  .word 0x0243182a
  .word 0x1460fff6
  .word 0x26310004
  .word 0x00000000
  .word 0x8e64000c
  .word 0x10800006
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42017c
  .word 0x0040f809
  .word 0x00000000
  .word 0xae60000c
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

// FUN_0048DE50
asm void FUN_0048de50(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x0080a82d
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8ca30004
  .word 0xac830004
  .word 0x8ca30008
  .word 0xac830008
  .word 0x8ca30000
  .word 0x10600018
  .word 0x00a0902d
  .word 0xaea00000
  .word 0x8e440000
  .word 0x10800014
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c420164
  .word 0x0040f809
  .word 0x00000000
  .word 0x24440001
  .word 0x3c020003
  .word 0x34450002
  .word 0x3c020096
  .word 0x8c420178
  .word 0x0040f809
  .word 0x00000000
  .word 0xaea20000
  .word 0x8ea40000
  .word 0x10800005
  .word 0x00000000
  .word 0x3c020096
  .word 0x8c42013c
  .word 0x0040f809
  .word 0x8e450000
  .word 0x8e43000c
  .word 0x10600040
  .word 0x00000000
  .word 0x0c123bf8
  .word 0x8ea40004
  .word 0x8ea30008
  .word 0x00628018
  .word 0x3c110096
  .word 0x26310178
  .word 0x8e220000
  .word 0x3c030003
  .word 0x3465011f
  .word 0x0040f809
  .word 0x0200202d
  .word 0xaea2000c
  .word 0x24030003
  .word 0x8ea40004
  .word 0x1483002c
  .word 0x00000000
  .word 0x8e53000c
  .word 0x8ea30008
  .word 0x8eb2000c
  .word 0x0003082a
  .word 0x1020002a
  .word 0x0000a02d
  .word 0x3c100096
  .word 0x3c160096
  .word 0x26100164
  .word 0x26d6013c
  .word 0x8e630000
  .word 0x1060001d
  .word 0x00000000
  .word 0xae400000
  .word 0x8e640000
  .word 0x10800011
  .word 0x00000000
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24440001
  .word 0x3c020003
  .word 0x34450002
  .word 0x8e220000
  .word 0x0040f809
  .word 0x00000000
  .word 0xae420000
  .word 0x8e440000
  .word 0x10800004
  .word 0x00000000
  .word 0x8ec20000
  .word 0x0040f809
  .word 0x8e650000
  .word 0x8ea30008
  .word 0x26940001
  .word 0x26730004
  .word 0x0283182a
  .word 0x1460ffe4
  .word 0x26520004
  .word 0x10000008
  .word 0xdfbf0070
  .word 0x1000fff7
  .word 0xae400000
  .word 0x8ea4000c
  .word 0x8e45000c
  .word 0x0c148494
  .word 0x0200302d
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
