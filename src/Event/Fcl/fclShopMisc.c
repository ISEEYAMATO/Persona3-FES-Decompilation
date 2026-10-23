#include "Kernel/Kwln/kwlnTask.h"
#include "sce/eetypes.h"
typedef struct FclShopDispatchResult {
  u32 value;
  u32 value_aux;
  s16 field08;
  s16 field0a;
  s16 field0c;
  s16 field0e;
  s16 field10;
  s16 field12;
  s16 field14;
  s16 field16;
  s16 field18;
  u16 field1a;
} FclShopDispatchResult;
typedef union FclShopFloatPair {
  f32 f[2];
  u32 u[2];
} FclShopFloatPair;

typedef struct FclShopDispatchSource {
  FclShopDispatchResult alternate[18];
  u8 pad1f8[8];
  FclShopDispatchResult primary[18];
  u8 pad3f8[8];
} FclShopDispatchSource;

typedef struct FclShopDispatchOutput {
  FclShopDispatchResult result;
  u8 pad1c[4];
} FclShopDispatchOutput;

typedef struct FclShopDispatchStack {
  FclShopDispatchSource source[8];
  FclShopDispatchOutput output[16];
} FclShopDispatchStack;
typedef struct FclShopDispatchRegion {
  FclShopDispatchResult result[18];
  u8 pad[0x118];
} FclShopDispatchRegion;

typedef struct FclShopDispatchStorage {
  FclShopDispatchResult tail0;
  u8 tail_gap[0x2f4];
  FclShopDispatchResult tail1;
  u8 tail_path_gap[0x2f4];
  FclShopDispatchRegion path[28];
  FclShopDispatchOutput output[30];
} FclShopDispatchStorage;

extern u32 D_006AF3E0[];
extern int FUN_003dffc0(int *param_1,int param_2,s32 param_3);
extern u32 fclCombineList003df100();

#define FCL_SHOP_DISPATCH_BUILD(SRC, OUT, OWNER, ID, COPY_OFFSET) do { \
  u32 *copy_src = D_006AF3E0; \
  u32 *copy_dst = (u32 *)(SRC); \
  int copy_count = 0x3f; \
  u32 copy_value0; \
  u32 copy_value1; \
  do { \
    copy_value0 = copy_src[0]; \
    copy_value1 = copy_src[1]; \
    copy_src += 2; \
    copy_count = copy_count - 1; \
    copy_dst[0] = copy_value0; \
    copy_dst[1] = copy_value1; \
    copy_dst += 2; \
  } while (copy_count > 0); \
  (SRC)[0].value = (ID); \
  (SRC)[0].field18 = 0; \
  (SRC)[1].value = (ID); \
  (SRC)[1].field18 = 0; \
  (SRC)[2].value = (ID); \
  (SRC)[2].field18 = 0; \
  (SRC)[3].value = (ID); \
  (SRC)[3].field18 = 0; \
  (SRC)[4].value = (ID); \
  (SRC)[4].field18 = 0; \
  (SRC)[5].value = (ID); \
  (SRC)[5].field18 = 0; \
  (SRC)[6].value = (ID); \
  (SRC)[6].field18 = 0; \
  (SRC)[7].value = (ID); \
  (SRC)[7].field18 = 0; \
  (SRC)[8].value = (ID); \
  (SRC)[8].field18 = 0; \
  (SRC)[9].value = (ID); \
  (SRC)[9].field18 = 0; \
  (SRC)[10].value = (ID); \
  (SRC)[10].field18 = 0; \
  (SRC)[11].value = (ID); \
  (SRC)[11].field18 = 0; \
  (SRC)[12].value = (ID); \
  (SRC)[12].field18 = 0; \
  (SRC)[13].value = (ID); \
  (SRC)[13].field18 = 0; \
  (SRC)[14].value = (ID); \
  (SRC)[14].field18 = 0; \
  (SRC)[15].value = (ID); \
  (SRC)[15].field18 = 0; \
  (SRC)[16].value = (ID); \
  (SRC)[16].field18 = 0; \
  (SRC)[17].value = (ID); \
  (SRC)[17].field18 = 0; \
  memcpy((OUT), (SRC) + (COPY_OFFSET), 0x1c); \
  fclCombineList003df100( \
      FUN_003dffc0((int *)(OWNER), (ID), *((volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ u32 *)((u8 *)(OUT) + 4))), \
      (OUT)); \
} while (0)
#define FCL_SHOP_MISC_BUILD(SRC, OUT, OWNER, ID, VALUE, FIELD, COPY_OFFSET) do { \
    u32 *copy_src = D_006AF3E0; \
    u32 *copy_dst = (u32 *)(SRC); \
    int copy_count = 0x62; \
    u32 copy_value0; \
    u32 copy_value1; \
    do { \
        copy_value0 = *copy_src++; \
        copy_value1 = *copy_src++; \
        copy_count--; \
        copy_dst[0] = copy_value0; \
        copy_dst[1] = copy_value1; \
        copy_dst += 2; \
    } while (copy_count > 0); \
    (SRC)[0].value = (VALUE); (SRC)[0].field18 = (FIELD); \
    (SRC)[1].value = (VALUE); (SRC)[1].field18 = (FIELD); \
    (SRC)[2].value = (VALUE); (SRC)[2].field18 = (FIELD); \
    (SRC)[3].value = (VALUE); (SRC)[3].field18 = (FIELD); \
    (SRC)[4].value = (VALUE); (SRC)[4].field18 = (FIELD); \
    (SRC)[5].value = (VALUE); (SRC)[5].field18 = (FIELD); \
    (SRC)[6].value = (VALUE); (SRC)[6].field18 = (FIELD); \
    (SRC)[7].value = (VALUE); (SRC)[7].field18 = (FIELD); \
    (SRC)[8].value = (VALUE); (SRC)[8].field18 = (FIELD); \
    (SRC)[9].value = (VALUE); (SRC)[9].field18 = (FIELD); \
    (SRC)[10].value = (VALUE); (SRC)[10].field18 = (FIELD); \
    (SRC)[11].value = (VALUE); (SRC)[11].field18 = (FIELD); \
    (SRC)[12].value = (VALUE); (SRC)[12].field18 = (FIELD); \
    (SRC)[13].value = (VALUE); (SRC)[13].field18 = (FIELD); \
    (SRC)[14].value = (VALUE); (SRC)[14].field18 = (FIELD); \
    (SRC)[15].value = (VALUE); (SRC)[15].field18 = (FIELD); \
    (SRC)[16].value = (VALUE); (SRC)[16].field18 = (FIELD); \
    (SRC)[17].value = (VALUE); (SRC)[17].field18 = (FIELD); \
    (SRC)[18].value = (VALUE); (SRC)[18].field18 = (FIELD); \
    (SRC)[19].value = (VALUE); (SRC)[19].field18 = (FIELD); \
    (SRC)[20].value = (VALUE); (SRC)[20].field18 = (FIELD); \
    (SRC)[21].value = (VALUE); (SRC)[21].field18 = (FIELD); \
    (SRC)[22].value = (VALUE); (SRC)[22].field18 = (FIELD); \
    (SRC)[23].value = (VALUE); (SRC)[23].field18 = (FIELD); \
    (SRC)[24].value = (VALUE); (SRC)[24].field18 = (FIELD); \
    (SRC)[25].value = (VALUE); (SRC)[25].field18 = (FIELD); \
    (SRC)[26].value = (VALUE); (SRC)[26].field18 = (FIELD); \
    (SRC)[27].value = (VALUE); (SRC)[27].field18 = (FIELD); \
    memcpy((OUT), (SRC) + (COPY_OFFSET), 0x1c); \
    fclCombineList003df100( \
        FUN_003dffc0((int *)(OWNER), (ID), \
            *((volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ u32 *)((u8 *)(OUT) + 4))), (OUT)); \
} while (0)
#define FCL_SHOP_MISC_AT(OFFSET) \
    ((volatile /* Removing this file's qualifier batch loses 2 MATCH(es) and worsens 0 other function(s) - measured W170. */ FclShopDispatchResult *)((u8 *)source + (OFFSET)))
u32 datSocialLinkLevelIsNotZero(s16 socialLink);
extern char DAT_007cd954;
u64 FUN_00172660(s32 socialLink);
extern u8 DAT_006aede8[];
extern u8 DAT_006aede8_abs[];
#pragma alias DAT_006aede8_abs DAT_006aede8
#pragma alias DAT_006aeff0_abs DAT_006aeff0
extern s16 DAT_006aeff0_abs[];
extern char DAT_006af340[];
extern char DAT_006af360[];
extern char DAT_006af380[];
extern u32 gp0xffffac10;
extern u32 gp0xfffface0;
typedef int (*code)();
float fGpffff8084;
float fGpffff808c;
float fGpffff8090;
float fGpffff8110;
float fGpffff8230;
float fGpffff8234;
float fGpffff8238;
float fGpffff823c;
int *iGpffffabf8;
int iGpffffabfc;
int iGpffffac00;
u8 *iGpffffb730;
int *iGpffffb7f4;
int iGpffffb7f8;
extern u8 *pbGpffffabe8;
short *psGpffffabd0;
short *psGpffffabf0;
u32 *puGpffffabe0;
u32 uGpffffabd4;
u32 uGpffffabe4;
extern u32 uGpffffabec;
u32 uGpffffabf4;
u32 fGpffffacf0;
u32 fGpffffacf4;
u32 fGpffffacf8;
u32 fGpffffacfc;
u32 fGpffffad00;
u32 fGpffffad04;
u32 uGpffffb9a8;
/* FUSION_EXACT_PROTOS */
extern float sinf(float);
extern float cosf(float);
#pragma alias FUN_0040e3f0_f32 FUN_0040e3f0
extern void FUN_0040e3f0_f32(float,float,float,float,int,int,int,int,int,int,int);
void FUN_003c45f0(int param_1);
u32 datGetScenarioMode(void);
u16 FUN_001752b0(void);
void FUN_003c9e30(u32 param_1,int param_2,s8 param_3);
f32 func_00171510(s16 row, s16 column);
void FUN_003eff00(u64 param_1,u8 *param_2);
u8 func_0016f810(s16 pcId, s32 equipmentIdx);
u8 * FUN_003efff0(int param_1);
#pragma alias FUN_003efff0_u64 FUN_003efff0
u8 * FUN_003efff0_u64(u64 param_1);
s16 FUN_003f0090(int param_1);
s16 FUN_003f00b0(int param_1);
int FUN_003f00d0(int *param_1,int param_2,int *param_3);
 #pragma alias FUN_003f00d0_i FUN_003f00d0
 int *FUN_003f00d0_i(int *param_1,int param_2,int *param_3);
 #pragma alias FUN_003f25e0_i FUN_003f25e0
 u32 FUN_003f25e0_i(u32 param_1,int *param_2,u32 param_3);
 #pragma alias FUN_003f2940_i FUN_003f2940
 u32 FUN_003f2940_i(u32 param_1,short *param_2,int param_3,u32 param_4);
 #pragma alias FUN_003f2320_i FUN_003f2320
 u32 FUN_003f2320_i(u32 param_1,int *param_2);
void FUN_003f01d0(int param_1,int param_2,int *param_3);
u32 FUN_003f0240(int param_1);
int FUN_003f0350(int param_1,int *param_2);
char FUN_003f03e0(int param_1);
#pragma alias FUN_003f03e0_u64 FUN_003f03e0
char FUN_003f03e0_u64(u64 param_1);
#pragma alias FUN_003f03e0_u32 FUN_003f03e0
u32 FUN_003f03e0_u32(u32 param_1);
u32 FUN_003f04f0(u32 param_1,int param_2);
u32 * FUN_003f06e0(int *param_1,u32 param_2);
short FUN_003f0830(int param_1);
short FUN_003f0ac0(int param_1);
long FUN_003f0d60(int param_1,u64 param_2);
u32 FUN_003f0ec0(u16 param_1);
#pragma alias FUN_003f0ec0_s16 FUN_003f0ec0
u32 FUN_003f0ec0_s16(s16 param_1);
s16 FUN_003f10b0(int param_1,u16 param_2);
short FUN_003f12a0(int param_1,int param_2);
u64 FUN_003f1470(int param_1);
void FUN_003f1520(int param_1);
int FUN_003f15d0(int param_1,int param_2);
int FUN_003f1690(u64 param_1);
#pragma alias FUN_003f1690_i FUN_003f1690
int FUN_003f1690_i(int param_1);
int clndIsDateInRangeFromStart(s8 month, s8 day, u32 range);
#pragma alias clndIsDateInRangeFromStart_long clndIsDateInRangeFromStart
int clndIsDateInRangeFromStart_long(long month,long day,u32 range);
#pragma alias clndIsDateInRange_long clndIsDateInRange
int clndIsDateInRange_long(long startMonth,long startDay,long endMonth,long endDay);
void FUN_0017c220(u16 *param_1);
u32 FUN_003f1720(u32 param_1,short param_2);
u32 FUN_003f1830(short *param_1,int param_2);
u32 FUN_003f1910(u64 param_1);
u32 FUN_003f1a10(u32 param_1);
void FUN_003f1ba0(int param_1,u32 param_2);
u32 FUN_003f1dc0(long param_1,int param_2,int param_3);
u8 FUN_003f2240(int param_1,long param_2);
u64 FUN_003f2320(int param_1,int param_2);
u32 FUN_003f2510(void);
u32 FUN_003f25e0(int param_1,int *param_2,u32 param_3);
u32 FUN_003f2940(int param_1,short *param_2,int param_3,u32 param_4);
u64 FUN_003f2d60(int param_1);
u64 FUN_003f2dc0(int param_1,int param_2);
u32 FUN_003f2f70(u32 param_1,int param_2,u32 param_3);
#pragma alias FUN_003f2f70_i FUN_003f2f70
u32 FUN_003f2f70_i(int param_1,int param_2,int param_3);
 #pragma alias FUN_003f33d0_i FUN_003f33d0
 u32 FUN_003f33d0_i(int param_1,u32 param_2);
 #pragma alias FUN_003f3970_i FUN_003f3970
 u32 FUN_003f3970_i(int param_1,u32 param_2);
 #pragma alias FUN_003f39a0_i FUN_003f39a0
 u32 FUN_003f39a0_i(int param_1,int param_2,u32 param_3);
 #pragma alias FUN_003f3e60_i FUN_003f3e60
 u32 FUN_003f3e60_i(u32 param_1,int *param_2);
 #pragma alias FUN_003f3dc0_i FUN_003f3dc0
 void FUN_003f3dc0_i(int param_1,u32 param_2);
 #pragma alias FUN_003c58f0_i FUN_003c58f0
 u32 FUN_003c58f0_i(u32 param_1,int param_2,u32 param_3,u32 param_4);
 #pragma alias FUN_0019d3f0_fcl FUN_0019d3f0
 void FUN_0019d3f0_fcl(const char *param_1,int param_2);
#pragma alias fclShopNmlistFind FUN_003c4bf0
extern int fclShopNmlistFind(int *list,int *head,int id);
#pragma alias fclShopNmlistRemove FUN_003c49e0
extern int fclShopNmlistRemove(int *list,int *head,int node);
// Measured FUN_00400740: direct call nd8; alias alone nd8; typed byte-pointer a1 nd0 (object 432).
#pragma alias FUN_003c49e0_ro FUN_003c49e0
extern int FUN_003c49e0_ro(int *list,int *head,int node);
u32 FUN_003f33d0(int param_1,u32 param_2);
u64 FUN_003f3970(long param_1,u32 param_2);
u64 FUN_003f39a0(long param_1,long param_2,u32 param_3);
void FUN_003f3dc0(int param_1,int *param_2);
u32 FUN_003f3e60(int param_1,int *param_2);
u32 FUN_003f3f00(u64 param_1);
void FUN_003f3fc0(int param_1,int param_2,u32 param_3,int param_4);
void FUN_003f4350(int param_1,int param_2,int param_3,int param_4);
void FUN_003f45e0(int param_1,int param_2,int param_3,int param_4);
void FUN_003f4870(int param_1,int param_2,int param_3,int param_4);
int FUN_003f4a90(int param_1,int param_2,int param_3,int param_4,int param_5,short *param_6);
void FUN_003f4de0(int param_1,int param_2,u32 param_3,int param_4);
void FUN_003f55b0(int param_1,int param_2,int param_3,int param_4,int param_5, u32 param_6);
#pragma alias FUN_003f55b0_i FUN_003f55b0
void FUN_003f55b0_i(int,int,int,int,int,int);
void FUN_003f5830(int param_1,int param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_003f5ab0(u32 param_1,u32 param_2,u32 param_3,u64 param_4, int param_5);
#pragma alias FUN_003f5ab0_i FUN_003f5ab0
void FUN_003f5ab0_i(int,int,int,int,int);
void FUN_003f5d10(u32 param_1,u32 param_2,u32 param_3,u64 param_4, int param_5);
void FUN_003f5f50(u32 param_1,u32 param_2,u8 param_3,u64 param_4, int param_5);
void FUN_003f61d0(int param_1,int param_2,u32 param_3,u64 param_4,int param_5);
#pragma alias FUN_003f61d0_i FUN_003f61d0
void FUN_003f61d0_i(int,int,int,int,int);
void FUN_003f67e0(int param_1,int param_2,u32 param_3,int param_4,int param_5, int param_6);
void FUN_003f6f20(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_003f7390(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7730(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7890(int param_1,int param_2,u8 param_3,int param_4,int param_5,int param_6);
void FUN_003f7a80(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7c60(u32 param_1,u32 param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7d50(int param_1,int param_2,u32 param_3,int param_4, int param_5);
#pragma alias FUN_003f7d50_i FUN_003f7d50
void FUN_003f7d50_i(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f7fe0(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
#pragma alias FUN_003f7fe0_i FUN_003f7fe0
void FUN_003f7fe0_i(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003f8180(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f85a0(int param_1,int param_2,u32 param_3,int param_4, int param_5);
void FUN_003f86a0(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f8a00(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f8e10(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f9220(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
void FUN_003f9510(int param_1,int param_2,u32 param_3,int param_4,int param_5 );
u32 FUN_003f98f0(u16 param_1);
u64 FUN_003f99d0(u32 param_1,u32 param_2);
u64 FUN_003f9b20(u64 param_1,int param_2);
s32 FUN_003f9cb0(u32 *param_1, u32 *param_2);
u32 FUN_003f9e30(int param_1);
u32 FUN_003fa0d0(u64 param_1);
u64 FUN_003fa190(int param_1);
u64 FUN_003fa1b0(int param_1);
u8 FUN_003fa1e0(void);
#pragma alias FUN_003fa1e0_u32 FUN_003fa1e0
u32 FUN_003fa1e0_u32(void);
void FUN_003fa210(int param_1);
void FUN_003fa520(int param_1);
void FUN_003fa800(int param_1);
void FUN_003faae0(int param_1);
void FUN_003fadc0(int param_1);
void FUN_003fb0c0(u32 param_1,u32 param_2);
int FUN_003fb2f0(u32 *param_1);
int FUN_003fb530(u32 *param_1);
int FUN_003fb6b0(u64 param_1);
u32 FUN_003fbc00(u32 *param_1);
void FUN_003fbe70(u8 *param_1,u8 *param_2);
void FUN_003fbf10(u16 *param_1);
u64 FUN_003fbf20(short *param_1);
u64 FUN_003fc060(int param_1);
#pragma alias FUN_003fc060_u32 FUN_003fc060
u32 FUN_003fc060_u32(int param_1);
#pragma alias FUN_003fc540_u32 FUN_003fc540
u32 FUN_003fc540_u32(int param_1);
u64 FUN_003fc540(int param_1);
u32 FUN_003fc980(int param_1);
void FUN_003fca00(u64 param_1,u64 param_2,u32 param_3);
void FUN_003fcad0(u64 param_1,u64 param_2,u32 param_3,int param_4);
void FUN_003fcbe0(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fcdc0(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fd010(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fd030(u64 param_1,u64 param_2,u32 param_3,int param_4);
void FUN_003fd140(int param_1,int param_2,u32 param_3,int param_4,int param_5);
void FUN_003fd320(int param_1,int param_2,u32 param_3,int param_4,int param_5);
u64 FUN_003fd570(int param_1,u32 *param_2);
u64 FUN_003fd730(u64 param_1,int param_2);
u64 FUN_003fd7e0(u64 param_1,int param_2);
int * FUN_003fd820(int param_1);
void FUN_003fd8a0(u32 *param_1);
void FUN_003fd8e0(int *param_1);
u64 FUN_003fd990(int *param_1);
void FUN_003fdcc0(int *param_3,int param_2,int param_1);
u64 FUN_003fdf80(u32 *param_1);
u32 FUN_003fe020(int param_1,u64 param_2);
u32 FUN_003fe1f0(u64 param_1);
u32 FUN_003fe2b0(void);
u32 FUN_003fe3e0(u16 param_1);
u32 FUN_003fe5d0(u64 param_1);
u64 FUN_003fe690(u32 param_1,u8 *param_2);
#pragma alias FUN_003fe690_p FUN_003fe690
u64 FUN_003fe690_p(u32 param_1,u64 param_2,int param_3);
#pragma alias FUN_003fe690_3 FUN_003fe690
u64 FUN_003fe690_3(u64 param_1,u64 param_2,int param_3);
#pragma alias FUN_003c5e80_p FUN_003c5e80
void FUN_003c5e80_p(u32 param_1,code param_2);
#pragma alias FUN_003c5e20_p FUN_003c5e20
void FUN_003c5e20_p(u32 param_1,code param_2);
#pragma alias FUN_003c5ee0_p FUN_003c5ee0
void FUN_003c5ee0_p(u32 param_1,code param_2);
u64 FUN_003fe7d0(u64 param_1,int param_2);
#pragma alias FUN_003fe7d0_i FUN_003fe7d0
u64 FUN_003fe7d0_i(u32 param_1,int param_2);
u32 FUN_003fe850(u16 param_1,u64 param_2);
#pragma alias FUN_003fea10_3 FUN_003fea10
u64 FUN_003fea10_3(int param_1,u32 *param_2,int param_3);
u32 FUN_003fe950(u64 param_1);
u64 FUN_003fea10(u32 param_1,u32 *param_2);
u64 FUN_003feb30(u32 param_1,int param_2);
u64 FUN_003fee40(int param_1);
#pragma alias FUN_003ff150_i FUN_003ff150
u64 FUN_003ff150_i(int param_1,int param_2);
#pragma alias FUN_003ff150_u32 FUN_003ff150
u32 FUN_003ff150_u32(int param_1,int param_2);
u32 FUN_003fef30(int param_1,int param_2);
u64 FUN_003ff150(int param_1,int param_2);
void FUN_003ff460(int param_1,u32 param_2);
u32 FUN_003ff570(u64 param_1);
void FUN_003ff630(u32 param_1,u64 param_2,u64 param_3,u64 param_4, u8 param_5,short param_6,short param_7,u32 param_8);
#pragma alias FUN_003ff630_f32 FUN_003ff630
void FUN_003ff630_f32(float param_1,int param_2,int param_3,int param_4,int param_5,short param_6,short param_7,u32 param_8);
u8 FUN_003ffa20(u64 param_1,u64 param_2,int param_3);
#pragma alias FUN_003ffa20_3 FUN_003ffa20
int FUN_003ffa20_3(u64 param_1,u64 param_2,short *param_3);
void FUN_003ffbb0(int param_1,int param_2);
void FUN_003ffe00(int param_1);
int * FUN_003ffe60(int param_1);
void FUN_004003a0(int param_1);
u32 FUN_004003f0(int *param_1);
u64 FUN_00400690(u32 *param_1);
void FUN_004006c0(int param_1,int param_2,int param_3,int param_4);
void FUN_00400740(int param_1,int param_2,int param_3,int param_4);
void FUN_004008f0(int param_1,int param_2,u8 param_3,int param_4);
void FUN_00400a90(int param_1,int param_2,int param_3,int param_4,u32 *param_5);
void FUN_00400b90(int param_1,int param_2,int param_3,int param_4,u32 *param_5);
void FUN_00400e30(int param_1);
int FUN_00400d60(void);
u32 FUN_00401210(int param_1);
void FUN_00401170(int param_1);
u64 FUN_004012c0(int param_1);
u64 FUN_00401370(int param_1);
void FUN_00401420(int param_1,int param_2);
u32 FUN_004014e0(u32 param_1);
void FUN_004015a0(u32 *param_1,u32 param_2);
u8 FUN_004015e0(u32 *param_1);
int FUN_00401600(u64 param_1,u64 param_2,int param_3);
u32 FUN_004016d0(u32 param_1);
int FUN_00401800(short param_1);
u32 FUN_00401890(short param_1);
u32 FUN_00401950(u16 param_1);
u32 FUN_00401a00(u16 param_1,u16 *param_2,short *param_3);
#pragma alias FUN_00401a00_i FUN_00401a00
u32 FUN_00401a00_i(short param_1,int param_2,short *param_3);
u8 * FUN_00401c90(u32 *param_1,int param_2);
u8 * FUN_00401cf0(int param_1);
short * FUN_00401d90(int param_1);
u32 FUN_00401de0(u32 param_1,int param_2,int param_3);
void FUN_00402400(int param_1,u16 *param_2);
u32 FUN_00402480(u16 *param_1);
u32 FUN_00402510(u32 param_1,long param_2,u32 param_3,short param_4);
u32 FUN_004026b0(int param_1,int param_2,u32 param_3);
void FUN_00402800(int param_1);
void FUN_00402c80(int param_1);
s16 FUN_004030b0(u16 param_1);
s16 FUN_004030f0(u16 param_1);
void FUN_00403130(u64 param_1,u64 param_2,int param_3,u64 param_4, u64 param_5,u64 param_6,s16 param_7);
void FUN_00403220(u64 param_1,u64 param_2,int param_3,u64 param_4, u64 param_5,u64 param_6,s16 param_7);
void FUN_004032f0(u64 param_1);
void FUN_00403340(u16 param_1);
u8 FUN_00403380(u64 param_1);
#pragma alias FUN_00403380_i FUN_00403380
int FUN_00403380_i(u64 param_1);
u8 FUN_00403410(short param_1);
u32 FUN_00403520(void);
int FUN_00403610(void);
s16 FUN_00403740(short param_1);
s16 FUN_00403760(short param_1);
s16 FUN_00403780(short param_1);
s16 FUN_004037a0(short param_1);
s16 FUN_004037c0(short param_1);
int FUN_004037e0(short param_1);
long FUN_00403800(short param_1);
long FUN_00403830(short param_1);
int FUN_00403860(short param_1);
int FUN_00403880(short param_1);
u32 FUN_004038a0(short param_1);
u32 FUN_004038e0(short param_1);
#pragma alias FUN_00403740_i FUN_00403740
int FUN_00403740_i(int param_1);
#pragma alias FUN_00403800_i FUN_00403800
int FUN_00403800_i(int param_1);
#pragma alias FUN_00403830_i FUN_00403830
int FUN_00403830_i(int param_1);
#pragma alias FUN_00403860_i FUN_00403860
int FUN_00403860_i(int param_1);
#pragma alias FUN_00403880_i FUN_00403880
int FUN_00403880_i(int param_1);
#pragma alias FUN_004038e0_i FUN_004038e0
int FUN_004038e0_i(int param_1);
s16 FUN_00403900(short param_1);
u32 FUN_00403920(short param_1,short param_2);
u32 FUN_00403970(short param_1);
u32 FUN_00403e40(int param_1,int param_2);
u32 FUN_00403f20(short param_1,int param_2);
u32 FUN_00404120(short param_1,int param_2);
void FUN_00404470(short param_1);
#pragma alias FUN_00404470_alt FUN_00404470
void FUN_00404470_alt(short param_1,int param_2);
#pragma alias FUN_00404470_long FUN_00404470
void FUN_00404470_long(long param_1,int param_2);
void FUN_004044c0(short param_1);
void FUN_004045d0(u64 param_1);
#pragma alias FUN_004045d0_u32 FUN_004045d0
void FUN_004045d0_u32(u32 param_1);
void FUN_00404750(u32 param_1,u32 param_2,u32 param_3);
u64 FUN_00405970(u64 param_1,int param_2);
void FUN_00405a90(u64 param_1,int param_2);
u32 FUN_00405ac0(u64 param_1,long param_2);
void FUN_00405d60(int param_1);
void FUN_00405e00(u64 param_1);
#pragma alias FUN_00405e00_u32 FUN_00405e00
void FUN_00405e00_u32(u32 param_1);
extern int FUN_00405db0(u32* param_1, u32* param_2);
u32 FUN_00405e30(u32 param_1);
void FUN_00405f70(s32 param_1,s32 param_2,s32 param_3,int param_4,u64 param_5, int param_6,int param_7);
#pragma alias FUN_00405f70_i FUN_00405f70
void FUN_00405f70_i(s32 param_1,s32 param_2,s32 param_3,int param_4,int param_5,
                    int param_6,int param_7);
void FUN_004064e0(int param_1,int param_2,int param_3,int param_4);
void FUN_00406aa0(int param_1,int param_2,u32 param_3);
void FUN_00406ca0(int param_1,int param_2,int *param_3);
void FUN_00407180(u32 param_1,u32 param_2,u16 param_3,int param_4);
void FUN_00407210(u32 param_1,u32 param_2,u16 param_3,int param_4,int param_5);
void FUN_004072d0(int param_1,long param_2,long param_3);
 #pragma alias FUN_004072d0_i FUN_004072d0
 void FUN_004072d0_i(u32 param_1,int param_2,int param_3);
u32 FUN_00409c80(u32 param_1);
 #pragma alias FUN_00409c80_i FUN_00409c80
 u32 FUN_00409c80_i(u32 param_1);
u32 FUN_00409e90(void);
void FUN_00409f20(u64 param_1,int param_2);
u32 FUN_00409f50(u32 param_1,int param_2);
void FUN_0040a200(int param_1);
void FUN_0040a260(int param_1);
u32 FUN_0040a2b0(u32 param_1);
u32 FUN_0040a490(u32 param_1);
void FUN_0040a6d0(u32 param_1,int param_2);
 #pragma alias FUN_0040a6d0_i FUN_0040a6d0
 void FUN_0040a6d0_i(u32 param_1,int param_2);
 #pragma alias FUN_00174a90_fcl FUN_00174a90
 u32 FUN_00174a90_fcl(short param_1);
void FUN_0040a7c0(u64 param_1,u64 param_2,u8 param_3);
void FUN_0040ec20_y2(float scale,int x,int y,u32 color,int type,const void *text,int width,int shadow,code callback);
void FUN_0040a7f0(u64 param_1,int param_2,int *param_3);
void FUN_0040b3a0(u64 param_1,int param_2,int param_3);
void FUN_0040b630(u32 param_1,u32 param_2,u16 param_3,int param_4);
void FUN_0040b780(u32 param_1,u32 param_2,u16 param_3,int param_4,int param_5);
void FUN_0040b840(int param_1);
u32 FUN_0040b910(u32 param_1);
void FUN_0040c150(u32 param_1);
u32 FUN_0040c170(void);
void FUN_0040c1e0(int param_1,int param_2,int param_3);
#pragma alias FUN_0040c1e0_2 FUN_0040c1e0
void FUN_0040c1e0_2(int param_1,int param_2);
void FUN_0040c310(int param_1);
void FUN_0040c460(u64 param_1,int param_2);
void FUN_0040c490(u64 param_1);
void FUN_0040c520(u64 param_1);
void FUN_0040c5b0(u64 param_1);
void FUN_0040c650(u64 param_1);
void FUN_0040c6a0(u64 param_1);
int FUN_0040c6f0(int param_1);
void FUN_0040c9a0(int param_1);
u32 FUN_0040ca00(int param_1);
void FUN_0040cad0(int param_1);
void FUN_0040cc30(u64 param_1,int param_2,int *param_3);
void FUN_0040d330(int param_1);
void FUN_0040d3b0(u32 param_1,u32 param_2,u16 param_3,int param_4);
void FUN_0040d400(void);
u32 FUN_0040d410(void);
u32 FUN_0040d490(void);
u32 FUN_0040d540(void);
void FUN_0040d5b0(int param_1,int param_2,int param_3,int param_4,u32 param_5);
void FUN_0040d5e0(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_0040d610(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6,long param_7);
void FUN_0040d640(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6, long param_7,long param_8);
void FUN_0040dcc0(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6, u32 param_7,int param_8,long param_9);
#pragma alias datGetFlag_s32 datGetFlag
s32 datGetFlag_s32(s32 param_1);
#pragma alias datGetFlag_u32 datGetFlag
u32 datGetFlag_u32();
#pragma alias datGetFlag_u32_arg datGetFlag
u32 datGetFlag_u32_arg(int param_1);
#pragma alias datSocialLinkLevelIsNotZero_s32 datSocialLinkLevelIsNotZero
u32 datSocialLinkLevelIsNotZero_s32(s32 socialLink);
void FUN_001725a0(u64 socialLink);
#pragma alias datGetEquipmentIdx_s16 datGetEquipmentIdx
s16 datGetEquipmentIdx_s16(s16 param_1,s16 param_2);
#pragma alias FUN_0017c610_u64 FUN_0017c610
s32 FUN_0017c610_u64(u64 param_1);
#pragma alias FUN_004037e0_u64 FUN_004037e0
int FUN_004037e0_u64(u64 param_1);
#pragma alias FUN_003f04f0_u32 FUN_003f04f0
u32 FUN_003f04f0_u32(u32 param_1,int param_2);
#pragma alias FUN_003f1dc0_u32 FUN_003f1dc0
u32 FUN_003f1dc0_u32(s32 param_1,void *param_2,s32 param_3);
#pragma alias FUN_003f1dc0_u64 FUN_003f1dc0
u32 FUN_003f1dc0_u64(u64 param_1,void *param_2,s32 param_3);
#pragma alias FUN_003f2240_u32 FUN_003f2240
u32 FUN_003f2240_u32();
#pragma alias FUN_0040e3c0_f32 FUN_0040e3c0
void FUN_0040e3c0_f32(float param_1,int param_2,int param_3,u8 param_4,int param_5,int param_6);
#pragma alias FUN_0040e3c0_u32 FUN_0040e3c0
void FUN_0040e3c0_u32(float param_1,int param_2,int param_3,u32 param_4,int param_5,int param_6);
#pragma alias FUN_0040e3c0_i FUN_0040e3c0
void FUN_0040e3c0_i(s32 x,s32 y,f32 scale,u8 color,s32 type,s32 value);
#pragma alias FUN_003b2cb0_f32 FUN_003b2cb0
void FUN_003b2cb0_f32(f32 scale,s32 x,s32 y,u32 color,s8 font,s32 align,const void *text,s32 width,s32 shadow);
#pragma alias FUN_003b2cb0_i FUN_003b2cb0
void FUN_003b2cb0_i(s32 x,s32 y,f32 scale,u32 color,u32 font,u32 align,const void *text,u32 width,u32 shadow);
#pragma alias FUN_003b32d0_f32 FUN_003b32d0
void FUN_003b32d0_f32(f32 scale,s32 x,s32 y,u32 color,s8 font,s32 align,const void *text,s32 width,s32 shadow);
#pragma alias FUN_003b32d0_i FUN_003b32d0
void FUN_003b32d0_i(s32 x,s32 y,f32 scale,u32 color,s8 font,s32 align,const void *text,s32 width,s32 shadow);
#pragma alias FUN_0040eb50_f32 FUN_0040eb50
s32 FUN_0040eb50_f32(f32 scale,s32 x,s32 y,u8 color,s32 font,const void *text,s32 width);
#pragma alias FUN_0040eb50_i FUN_0040eb50
s32 FUN_0040eb50_i(s32 x,s32 y,f32 scale,u8 color,s32 font,const void *text,s32 width);
#pragma alias FUN_0040ebc0_f32 FUN_0040ebc0
s32 FUN_0040ebc0_f32(f32 scale,s32 x,s32 y,u32 color,s32 font,const void *text,s32 width);
#pragma alias func_00171110_ptr func_00171110
const char *func_00171110_ptr(s16 id,s16 field);
#pragma alias FUN_003c7e20_f32 FUN_003c7e20
void FUN_003c7e20_f32(f32 p1,s32 p2,s32 p3,u32 p4,s32 p5,s32 p6,s32 p7,u32 p8);
#pragma alias FUN_003c7e20_f32_u64 FUN_003c7e20
void FUN_003c7e20_f32_u64(f32 p1,u64 p2,u64 p3,u64 p4,u64 p5,u64 p6,s32 p7,u32 p8);
#pragma alias FUN_003c7e20_mid FUN_003c7e20
void FUN_003c7e20_mid(u64 p1,u64 p2,f32 p3,u64 p4,u64 p5,u64 p6,s32 p7,u32 p8);
#pragma alias FUN_003c6270_u32 FUN_003c6270
u32 FUN_003c6270_u32(u32 param_1);
#pragma alias FUN_003c6ce0_u32 FUN_003c6ce0
u32 FUN_003c6ce0_u32(u32 param_1);
#pragma alias FUN_003c6d10_u32 FUN_003c6d10
u32 FUN_003c6d10_u32(u32 param_1);
#pragma alias FUN_003c6ca0_u32 FUN_003c6ca0
u32 FUN_003c6ca0_u32(u32 param_1);
#pragma alias FUN_003c6cc0_u32 FUN_003c6cc0
u32 FUN_003c6cc0_u32(u32 param_1);
#pragma alias FUN_0017c700_u32 FUN_0017c700
u32 FUN_0017c700_u32(void);
#pragma alias FUN_00175410_u32 FUN_00175410
u32 FUN_00175410_u32(void);
#pragma alias datPersonaGetHeroPersona_u32 datPersonaGetHeroPersona
u32 datPersonaGetHeroPersona_u32(s16 param_1);
#pragma alias datGetPersonaByCompendium_ptr datGetPersonaByCompendium
void *datGetPersonaByCompendium_ptr(s32 idx);
#pragma alias datPersonaGetTotalStat_u16 datPersonaGetTotalStat
u16 datPersonaGetTotalStat_u16(void *persona,u16 statId);
#pragma alias FUN_0017ca10_u32 FUN_0017ca10
u32 FUN_0017ca10_u32(u32 param_1);
#pragma alias FUN_00173a00_u32 FUN_00173a00
u32 FUN_00173a00_u32(u32 param_1,u32 param_2);
#pragma alias FUN_00173a00_s32 FUN_00173a00
s32 FUN_00173a00_s32(u32 param_1,u32 param_2);
#pragma alias FUN_003e0680_typed FUN_003e0680
void FUN_003e0680_typed(int param_1,code param_2,void *param_3);
#pragma alias memset_typed memset
void memset_typed(void *param_1,int param_2,u32 param_3);
#pragma alias memcpy_typed memcpy
void memcpy_typed(void *param_1,const void *param_2,u32 param_3);
#pragma alias H_Maestro_00111c50_i H_Maestro_00111c50
void H_Maestro_00111c50_i(u64 param_1);
#pragma alias H_Maestro_SetAlphaMult_f32 H_Maestro_SetAlphaMult
void H_Maestro_SetAlphaMult_f32(float param_1,u64 param_2);
#pragma alias H_Maestro_RequestDraw_i H_Maestro_RequestDraw
#pragma alias FUN_003c4e70_u64 FUN_003c4e70
void FUN_003c4e70_u64(int param_1);
#pragma alias scrGetIntPara_u32 scrGetIntPara
u32 scrGetIntPara_u32(int param_1);
#pragma alias FUN_003e0700_u32 FUN_003e0700
void FUN_003e0700_u32(u32 param_1);
#pragma alias fclCombine003d02f0_i fclCombine003d02f0
void fclCombine003d02f0_i(void);
#pragma alias FUN_00175410_u32 FUN_00175410
u32 FUN_00175410_u32(void);
#pragma alias datPersonaGetHeroPersona_s16 datPersonaGetHeroPersona
u32 datPersonaGetHeroPersona_s16(s16 param_1);
#pragma alias FUN_0017ca10_u32 FUN_0017ca10
u32 FUN_0017ca10_u32(u32 param_1);


/* FUSION_GLOBALS */
u32 DAT_006ac9e8;
u32 DAT_006ad4b4;
float DAT_007cada4;
u32 DAT_007ce420;
u32 DAT_007ce4e8;
extern u8 DAT_006ac9d0[];
#pragma alias DAT_006acc60_abs DAT_006acc60
extern u8 DAT_006acc60_abs[];
u32 DAT_006acc60;
extern u8 DAT_006acc70[];
extern u8 DAT_006acc72[];
#pragma alias DAT_006acca0_abs DAT_006acca0
extern u16 DAT_006acca0_abs[];
u32 DAT_006acca0;
u32 DAT_006aedc0[];
u32 DAT_006aedc4[];
u32 DAT_006aee60;
u32 DAT_006aeea0;
u32 DAT_006aeee0;
#pragma alias DAT_006aeee0_abs DAT_006aeee0
extern u8 DAT_006aeee0_abs[];
u32 DAT_006aef00;
#pragma alias DAT_006aef00_abs DAT_006aef00
extern u8 DAT_006aef00_abs[];
u32 DAT_006aef30;
#pragma alias DAT_006aef30_abs DAT_006aef30
extern s16 DAT_006aef30_abs[];
u32 DAT_006aef40;
#pragma alias DAT_006aef40_abs DAT_006aef40
extern s16 DAT_006aef40_abs[];
u32 DAT_006aef50;
#pragma alias DAT_006aef50_abs DAT_006aef50
extern s16 DAT_006aef50_abs[];
u32 DAT_006aef60;
u32 DAT_006aef98;
u32 DAT_006aefa8;
u8 DAT_006aefb8[];
u32 DAT_006aefd0;
#pragma alias DAT_006aefd0_abs DAT_006aefd0
extern s16 DAT_006aefd0_abs[];
u32 DAT_006aeff0;
u32 DAT_006af000;
u32 DAT_006af004;
u32 DAT_006af008;
u32 DAT_006af010;
#pragma alias DAT_006af010_abs DAT_006af010
extern u8 DAT_006af010_abs[];
u32 DAT_006af0b0;
u32 DAT_006af140;
#pragma alias DAT_006af140_003fd570 DAT_006af140
extern int DAT_006af140_003fd570[];
typedef struct {
  f32 x, y, z, w;
} FclShopFloatQuad;
typedef union {
  FclShopFloatQuad vector;
  u8 *value[4];
} FclShopDataSet;
typedef struct {
  u8 *default_data;
  u32 pad04;
  u8 *alternate_data;
  u32 pad0c;
  u8 *entry_table;
  int entry_count;
} FclShopStockConfig;
#pragma alias fclShopStockConfig PTR_DAT_006ad4a0
extern FclShopStockConfig fclShopStockConfig;
FclShopDataSet DAT_006af170;
u32 DAT_006af180;
extern u16 DAT_006af180_abs[];
#pragma alias DAT_006af180_abs DAT_006af180
u32 DAT_006af188;
u32 DAT_006af18c;
u32 DAT_006af190;
u32 DAT_006af1c0;
u32 DAT_006af240;
u32 DAT_006af270;
u32 DAT_006af290;
u32 DAT_006af2b0;
u32 DAT_006af2d0;
u32 DAT_006af300;
u32 DAT_006af320;
#pragma alias fclShopEquipmentPairTable DAT_006af190
extern u16 fclShopEquipmentPairTable[];
#pragma alias fclShopEquipmentIndexTable DAT_006af1c0
extern u8 fclShopEquipmentIndexTable[];
#pragma alias fclShopEquipmentValues0 DAT_006af240
extern u16 fclShopEquipmentValues0[];
#pragma alias fclShopEquipmentValues1 DAT_006af270
extern u16 fclShopEquipmentValues1[];
#pragma alias fclShopEquipmentValues2 DAT_006af290
extern u16 fclShopEquipmentValues2[];
#pragma alias fclShopEquipmentValues3 DAT_006af2b0
extern u16 fclShopEquipmentValues3[];
#pragma alias fclShopEquipmentValues4 DAT_006af2d0
extern u16 fclShopEquipmentValues4[];
#pragma alias fclShopEquipmentValues5 DAT_006af300
extern u16 fclShopEquipmentValues5[];
#pragma alias fclShopEquipmentValues6 DAT_006af320
extern u16 fclShopEquipmentValues6[];
extern u32 DAT_006af3a0;
extern u8 DAT_006af3a0_abs[];
#pragma alias DAT_006af3a0_abs DAT_006af3a0
#pragma alias fclShopEmptyFormat DAT_006af3d0
extern char fclShopEmptyFormat[];
extern char DAT_007cd900;
#pragma alias DAT_006af5e0_abs DAT_006af5e0
extern u8 DAT_006af5e0_abs[];
u32 DAT_006af5e0;
u32 DAT_006af600;
u32 DAT_006af620;
u32 DAT_006af930;
extern float DAT_007cad74;
float DAT_007cad78;
float DAT_007cad80;
float DAT_007cad94;
float DAT_007cae00;
float DAT_007caef0;
float DAT_007caf14;
float DAT_007caf38;
u32 DAT_007cd8f4;
f32 DAT_007cd8f8;
f32 DAT_007cd8fc;
f32 DAT_007cd908;
f32 DAT_007cd90c;
u32 DAT_007cd910;
u32 DAT_007cd918;
u32 DAT_007cd920;
u32 DAT_007cd928;
u32 DAT_007cd930;
u32 DAT_007cd932;
u32 DAT_007cd934;
u32 DAT_007cd936;
u32 DAT_007cd938;
u32 DAT_007cd940;
u32 DAT_007cd942;
u32 DAT_007cd944;
u32 DAT_007cd946;
u32 DAT_007cd948;
s16 DAT_007cd950;
s16 DAT_007cd952;
u32 DAT_007cd958;
u32 DAT_007cd95c;
u32 DAT_007cd960;
u32 DAT_007cd964;
u32 DAT_007cd968;
u32 DAT_007cd96c;
u32 DAT_007cd980;
u32 DAT_007cd988;
u32 DAT_007cd990;
u32 DAT_007cd998;
u32 DAT_007cd9a0;
u32 DAT_007cd9a8;
u32 DAT_007cd9b0;
u32 DAT_007cd9b8;
u32 DAT_007cd9c0;
u32 DAT_007cd9c8;
u32 DAT_007cd9f8;
u32 DAT_007cd9fc;
u32 DAT_007cda00;
u8 *DAT_007ce4e4;
u32 DAT_007e094e;
u32 DAT_007e0952;
u32 DAT_007e0958;
u32 DAT_007e095a;
#pragma alias DAT_007e0952_abs DAT_007e0952
#pragma alias DAT_007e095a_abs DAT_007e095a
extern u8 DAT_007e0952_abs[];
extern u8 DAT_007e095a_abs[];
u32 DAT_00960088;
code DAT_00960090;
code DAT_009600a0;
 #pragma alias DAT_00960090_abs DAT_00960090
 extern code DAT_00960090_abs[];
 #pragma alias DAT_009600a0_abs DAT_009600a0
 extern code DAT_009600a0_abs[];
u32 DAT_0098967f;
u32 LAB_003eff84[];
u32 LAB_003f0748[];
u32 LAB_003f07f4[];
u32 LAB_003f23a8[];
u32 LAB_003fe35c[];
u32 LAB_003fee10[];
u32 LAB_00401910[];
u32 LAB_004019d0[];
u32 LAB_00401aa4[];
u32 LAB_00401b60[];
u32 LAB_00401bc4[];
u32 LAB_00401c48[];
u32 LAB_00401ea8[];
u32 LAB_00401fa8[];
u32 LAB_0040203c[];
u32 LAB_00402100[];
u32 LAB_0040370c[];
u32 LAB_00403b38[];
u32 LAB_00403d20[];
u32 LAB_00403ec0[];
u32 LAB_004046bc[];
u32 LAB_004062e0[];
u32 LAB_00406468[];
u32 LAB_0040c3c4[];
u32 PTR_DAT_006ac9ec[];
u32 PTR_DAT_006ac9f0[];
u32 PTR_DAT_006ad4a0[];
u32 PTR_DAT_006ad4b0[];
u32 PTR_DAT_007cd8f0[];
#pragma alias PTR_DAT_007cd8f0_ptr PTR_DAT_007cd8f0
extern u8 *PTR_DAT_007cd8f0_ptr;
u32 PTR_FUN_006aee00[];
u32 PTR_FUN_006aee20[];
u32 PTR_FUN_006aee40[];
u32 PTR_FUN_006af050[];
u32 PTR_FUN_006af070[];
u32 PTR_FUN_006af090[];
#pragma alias PTR_FUN_006af050_abs PTR_FUN_006af050
extern u8 PTR_FUN_006af050_abs[];
#pragma alias PTR_FUN_006af070_abs PTR_FUN_006af070
extern u8 PTR_FUN_006af070_abs[];
#pragma alias PTR_FUN_006af090_abs PTR_FUN_006af090
extern u8 PTR_FUN_006af090_abs[];
typedef struct {
  f32 x, y;
} FclShopFloatVector2;
typedef union {
  FclShopFloatVector2 vector;
  u8 *value[2];
} FclShopCallbackPair;
FclShopCallbackPair PTR_FUN_007cd970;
FclShopCallbackPair PTR_FUN_007cd978;
typedef struct {
  FclShopDataSet data;
  FclShopCallbackPair callbacks[2];
} FclShopCallbackData;
u32 PTR_LAB_007bbde0[];
u32 PTR_PTR_006ac9d4[];
u32 _DAT_006af180;
u32 _DAT_006af184;
#include "Kosaka/k_assert.h"

#pragma alias FUN_0040ec20_y2 FUN_0040ec20
#pragma alias FUN_0040e3c0_y2 FUN_0040e3c0_y2
#pragma alias FUN_0040eb50_y2 FUN_0040eb50_y2
#pragma alias FUN_0040ebc0_y2 FUN_0040ebc0_y2
#pragma alias H_Maestro_00111c50_y2 H_Maestro_00111c50_y2
#pragma alias H_Maestro_SetAlphaMult_y2 H_Maestro_SetAlphaMult_y2
#pragma alias FUN_0040e3c0_i_y2 FUN_0040e3c0_i_y2
#pragma alias FUN_003b2cb0_i_y2 FUN_003b2cb0_i_y2
#pragma alias DAT_007ce420_y2 DAT_007ce420_y2
#pragma alias sinf_y2 sinf_y2
#pragma alias cosf_y2 cosf_y2
#pragma alias FUN_003b2cb0_y2 FUN_003b2cb0_y2


typedef struct {
  s16 id;
  u8 pad[3];
  s8 flags;
  s16 value;
} FclShopListEntry;
u32 FUN_003f39a0_u32ret(int param_1,int param_2,u32 param_3);
void FUN_003f7730_i(int,int,int,int,int);
void FUN_003f5d10_i(int,int,int,int,int);
void FUN_003f5f50_i(int,int,int,int,int);
void FUN_003f7a80_i(int,int,int,int,int);
typedef int (*code)();
void FUN_0040e300(u32 param_1,u32 param_2);
void FUN_0040e360(void);
void FUN_0040e390(void);
void FUN_0040e3c0_draw(int param_2,int param_3,float param_1,u8 param_4,int param_5,int param_6);
void FUN_0040e3f0_draw(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                   u8 param_7,int param_8,int param_9,int param_10,int param_11);
extern void FUN_0040e3f0_i2f1i3f3(int param_5,int param_6,float param_1,u8 param_7,int param_8,
                                  int param_9,int param_10,int param_11,float param_2,
                                  float param_3,float param_4);
void FUN_0040e420(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                   u8 param_7,int param_8,int param_9,int param_10,int param_11);
u32 FUN_0040e450(int param_1);
u32 FUN_0040e4f0(int *param_1);
void FUN_0040e580(u32 param_1);
u64 FUN_0040e610(int param_2,int param_3,float param_1,u8 param_4,int param_5,int param_6,int param_7);
u64 FUN_0040e710(int param_5, int param_6, float param_1, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12, float param_2, float param_3, float param_4);
extern void FUN_0040e710_i2f1u8i4i3f(int param_5,int param_6,float param_1,u8 param_7,
                                     int param_8,int param_9,int param_10,int param_11,
                                     int param_12,float param_2,float param_3,float param_4);
extern void FUN_0040e930_i2f1u8i4i3f(int param_5,int param_6,float param_1,u8 param_7,
                                     int param_8,int param_9,int param_10,int param_11,
                                     int param_12,float param_2,float param_3,float param_4);
u64 FUN_0040e930(int param_5,int param_6,float param_1,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,float param_2,float param_3,float param_4);
extern u32 fclDrawSpriteCreate_i(int param_1, u32 param_2, int param_3);
extern void fclDrawSpriteEmit(int param_1,int param_2,float param_3,int param_4,int param_5,int param_6);
s32 FUN_0040eb50_y2(float param_1,int param_2,int param_3,u8 param_4,int param_5,const void *param_6,int param_7);
s32 FUN_0040ebc0_y2(float param_1,int param_2,int param_3,int param_4,int param_5,const void *param_6,int param_7);
void FUN_0040ec20(u32 param_1,int param_2,u32 param_3,u32 param_4,u32 param_5,u64 param_6,u32 param_7,int param_8);
void FUN_0040eef0(int param_2,int param_3,float param_1,int param_4,int param_5,

                  int param_6);
u32 FUN_0040ec50();
u32 FUN_0040f030(int param_1,int param_2,int param_3);
u32 FUN_0040f430(int param_1,int param_2);
u32 FUN_0040f5d0(int param_1,int param_2,int param_3);
u64 FUN_0040fab0(u64 param_1,int param_2);
u64 FUN_0040fb90(u64 param_1,int param_2,int param_3);
void FUN_00521408(void *destination,s32 value,u32 size);
extern void *H_Cdvd_CacheFindFile(const char *path,u32 *fileSize);
extern u32 DAT_006af960[];
extern u32 DAT_006af980[];
float DAT_006af9d8;
float DAT_006af9dc;
float DAT_006af9e0;
extern float DAT_006af9d8_abs[];
extern float DAT_006af9dc_abs[];
extern float DAT_006af9e0_abs[];
typedef struct {
  float x;
  float y;
  float z;
} FclDrawSpriteVec3;
u32 DAT_006af9a0;
extern u32 DAT_006af9a0_abs[];
u16 DAT_006af9c0[];
typedef short DAT_006af9c0_abs_t;
extern DAT_006af9c0_abs_t DAT_006af9c0_abs[];
u32 DAT_006af9f0;
u32 DAT_006afa70;
int DAT_006afaf0[];
u32 DAT_006afb10;
extern u32 DAT_006afb10_abs[];
extern u32 DAT_007ce69c;
extern s32 DAT_007ce6a0;
extern code DAT_00960178[];
extern code DAT_0096017c[];
extern code DAT_00960178_abs[];
extern code DAT_0096017c_abs[];
typedef int (*code)();
typedef void (*FclShopBgCallback)(float, float, float, int, int, int, int, int, int, int, int);
typedef struct {
    u32 *callbacks;
    int count;
} FclShopBgCallbackPair;
typedef union {
    float floats[4];
    u32 words[4];
} FclShopBgHeader;
typedef struct {
    FclShopBgHeader header;
    s16 table2[24];
    s16 table1[40];
} FclShopBgLocal;
u32 H_Maestro_CreateTask(u32 parent,u32 priority,u32 path);
u32 H_Maestro_FinishedInit(u32 task);
void H_Maestro_SetShouldLoop(u32 task,u32 shouldLoop);
void H_Maestro_00111f20(u32 task,u32 value);
void H_Maestro_00111c50_y2(u32 task);
void H_Maestro_00111cb0(u32 task);
void H_Maestro_SetAlphaMult_y2(float alpha,u32 task);
void func_00111f10(u32 task,u32 value);
void func_00111ca0(u32 task,u32 value);
float fGpffff80d0;
float fGpffff8168;
float fGpffff81f8;
float fGpffff81fc;
float fGpffff8204;
float fGpffffad18;
u32 uGpffff8208;
u32 uGpffffad1c;
extern float fGpffffad1c;
u32 DAT_007cda50;
extern f32 sinf_fclShop(f32);
extern f32 cosf_fclShop(f32);
void FUN_0040e3c0_y2(float, s32, s32, u8, s32, s32);
void FUN_0040e3c0_i_y2(s32, s32, float, u8, s32, s32);
void FUN_0040e3f0_typed(float, float, float, float, s32, s32, u8, s32, s32, s32, s32);
void FUN_003b2cb0_typed(float, s32, s32, u32, u32, u32, u32, u32, u32);
void FUN_003b2cb0_i_y2(s32, s32, float, u32, u32, u32, u32, u32, u32);
void FUN_003eec60(s32);
u64 FUN_004101b0(u64 param_1,int param_2);
u32 FUN_004105e0(int param_1, int param_2, int param_3);
u64 FUN_00410a10(u64 param_1,int param_2);
u32 FUN_00410d30(int param_1,int param_2);
u32 FUN_00410e70(u32 param_1,int param_2,int param_3);
u32 FUN_004110f0(u64 param_1,u64 param_2,int param_3);
u32 FUN_00411190(u64 param_1,u64 param_2,u32 param_3);
u32 FUN_00411340(u64 param_1,u64 param_2,s16 *param_3);
u32 FUN_004113f0(u64 param_1,int param_2,int param_3);
u64 FUN_00411710(u64 param_1,int param_2);
u32 FUN_00411790(u64 param_1,int param_2,int param_3);
u64 FUN_00411ee0(u64 param_1,int param_2);
u32 FUN_004120a0(u64 param_1, int param_2, int param_3);
u64 FUN_00412580(u64 param_1,int param_2);
u32 FUN_00412610(u64 param_1, int param_2, long param_3);
u64 FUN_00412af0(u64 param_1,int param_2);
u32 FUN_00412bc0(u64 param_1, int param_2, long param_3);
u64 FUN_00413010(u64 param_1,int param_2);
u32 FUN_004131a0(u64 param_1, int param_2, int param_3);
u64 FUN_00413680(u64 param_1,int param_2);
u64 FUN_004138e0(u64 param_1,int param_2,int param_3);
u64 FUN_00413b10(u64 param_1,int param_2);
u32 FUN_00413b70(u64 param_1, int param_2, int param_3);
void FUN_00414100(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_004141e0(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,u32 param_6);
void FUN_00414280(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414320(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414500(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004145f0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004146b0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414770(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_004148b0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414950(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004149f0(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_00414ad0(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_00414bd0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00414c70(u64 param_1,u64 param_2,int param_3,int param_4,u64 param_5, u32 param_6);
void FUN_00414d70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
u64 FUN_00414e10(int param_1,int param_2);
u32 FUN_00414fe0(u64 param_1,int param_2,long param_3);
void FUN_004154e0(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,int param_6);
void FUN_00415650(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,int param_6);
void FUN_004157c0(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00415880(u64 param_1,u64 param_2,int param_3,int param_4, int param_5,int param_6);
void FUN_00415a70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_00415b30(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u8 param_6);
void FUN_00415b70(u64 param_1,u64 param_2,int param_3,int param_4,int param_5, u32 param_6);
u64 FUN_00415c30(int param_1, int param_2);
u64 FUN_00415dc0(u64 param_1,int param_2,u8 *param_3);
void FUN_00416240(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_004163f0(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_004166d0(u64 param_1,int param_2,int param_3,int param_4,int param_5, u32 param_6);
void FUN_004167d0(u64 param_1,int param_2,int param_3,int param_4,int param_5, u8 param_6);
void FUN_00416b90(u64 param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6);
void FUN_00416d20(u64 param_1,int param_2,int param_3,int param_4,int param_5, u8 param_6);
u64 FUN_00417030(int param_1, int param_2);
float DAT_007cadc0;
u32 DAT_006afb90;
u32 DAT_006b0020;
u32 DAT_006b0050;
u32 DAT_006b0450;
u32 DAT_006b04d0;
u32 DAT_006b0a00;
u32 DAT_006b0a60;
float DAT_006b0ac0;
float DAT_006b0ac4;
float DAT_006b0ac8;
float DAT_006b0acc;
extern u8 DAT_006b0ac0_abs[];
extern u8 DAT_006b0ac4_abs[];
extern u8 DAT_006b0ac8_abs[];
extern u8 DAT_006b0acc_abs[];
u32 DAT_006b0ad0;
u32 DAT_006b0cb0;
u32 DAT_006b0dd4;
u32 DAT_006b0ddc;
u32 DAT_006b0de0;
extern u8 DAT_006b0de0_abs[];
u32 DAT_006b0e30;
extern u8 DAT_006b0e30_abs[];
u32 DAT_006b0e64;
u32 DAT_006b0e6c;
extern u8 DAT_006b0e64_abs[];
u32 DAT_006b10e0;
u32 DAT_006b1130;
u32 DAT_006b1178;
u32 DAT_006b1190;
u32 DAT_006b1220;
u32 DAT_006b1340;
u32 DAT_006b1370;
u32 DAT_006b13a0;
u32 DAT_006b1400;
u32 DAT_006b1460;
u32 DAT_006b14c0;
u32 DAT_006b14f0;
u32 DAT_006b1520;
u32 DAT_006b1580;
u32 DAT_006b1610;
u32 DAT_006b1640;
u32 DAT_006b16a0;
u32 DAT_006b16e0;
u32 DAT_006b1710;
float DAT_007caee8;
u32 DAT_007cda4c;
u32 DAT_007cda58;
u32 DAT_007cda5a;
u32 DAT_007cda5c;
u32 DAT_007cda5e;
u32 DAT_007cda64;
extern float DAT_007cda64_f;
u8 *DAT_007ce420_y2;
u32 PTR_FUN_006b1490[];
u32 PTR_FUN_006b1494[];
u32 PTR_FUN_006b1498[];
u32 PTR_FUN_006b14a0[];
u32 PTR_FUN_006b16c8[];
u32 PTR_FUN_006b16cc[];
u32 PTR_FUN_006b16d0[];
u32 PTR_FUN_006b1830[];
u32 PTR_FUN_007cda10[];
u32 PTR_FUN_007cda14[];
u32 PTR_FUN_007cda18[];
u32 PTR_FUN_007cda1c[];
u32 PTR_FUN_007cda20[];
u32 PTR_FUN_007cda24[];
u32 PTR_FUN_007cda28[];
u32 PTR_FUN_007cda30[];
u32 PTR_FUN_007cda34[];
u32 PTR_FUN_007cda38[];
u32 PTR_FUN_007cda40[];
u32 PTR_FUN_007cda44[];

// FUN_003EFFF0


u8 * FUN_003efff0(int param_1)



{

  u32 lVar1;

  int iVar2;

  

  if ((param_1 < 0) || !(param_1 < 9)) {

    K_Assert((const char *)(DAT_006aede8 + 1) - 1,0xb9);

  }

  lVar1 = datGetScenarioMode();

  iVar2 = (int)param_1;

  if (lVar1 == 0) {
    return (u8 *)&DAT_006ac9d0 + iVar2 * 0x24;
  }

  return (u8 *)&DAT_006ac9d0 + (iVar2 + 9) * 0x24;


}

// HARVESTED 3D-42FF


// FUN_003F0090
s16 FUN_003f0090(int param_1)



{

  return *(s16 *)(DAT_006acc70 + param_1 * 4);

}

// FUN_003F00B0


s16 FUN_003f00b0(int param_1)



{

  return *(s16 *)(DAT_006acc72 + param_1 * 4);

}

// W414 probes: explicit levelReq, block-scoped s16, u8 result, and direct short-load
// forms all remained nd22 (obj248/window256); no source-shape improvement found.
// FUN_003F00D0


asm int FUN_003f00d0(int *param_1,int param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0xafa0007c
  .word 0x14c00004
  .word 0x00000000
  .word 0x27b1007c
  .word 0x10000002
  .word 0x00000000
  .word 0x00c0882d
  .word 0x8eb30004
  .word 0x8e320000
  .word 0x10000019
  .word 0x00000000
  .word 0x86620004
  .word 0x1040000a
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0x0050082a
  .word 0x1420000c
  .word 0x00000000
  .word 0x2664000c
  .word 0x0280282d
  .word 0x0c0fc13c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0xae320000
  .word 0x0260102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x26730014
  .word 0x26520001
  .word 0x8ea20000
  .word 0x0242102a
  .word 0x1440ffe5
  .word 0x00000000
  .word 0x2402ffff
  .word 0xae220000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F01D0


void FUN_003f01d0(int param_1,int param_2,int *param_3)
{
  int *ptr = (int *)(param_1 + param_2 * 8);
  if (FUN_003f00d0(ptr,1,param_3) != 0) {
    return;
  }
  *param_3 = 0;
  FUN_003f00d0(ptr,0,param_3);
}

// FUN_003F0240
u32 FUN_003f0240(int param_1)
{
  u8 *ptr;
  int mode;
  int result;

  if ((param_1 < 0) || !(param_1 < 9)) {
    K_Assert((const char *)DAT_006aede8,0xb9);
  }

  mode = datGetScenarioMode();

  if (mode == 0) {
    ptr = (u8 *)&DAT_006ac9d0 + param_1 * 0x24;
  }
  else {
    ptr = (u8 *)&DAT_006ac9d0 + (param_1 + 9) * 0x24;
  }
  if (param_1 == 2) {
    goto special;
  }
  if (param_1 == 1) {
    goto special;
  }
  switch (param_1) {
    case 0:
      goto special;
    default:
      goto zero;
  }

special:
  result = FUN_003f00d0((int *)(ptr + 8),1,0);
  if (result == 0) {
    result = FUN_003f00d0((int *)(ptr + 8),0,0);
  }
  if (result == 0) {
    goto zero;
  }

one:
  return 1;

zero:
  return 0;
}

// FUN_003F0350


int FUN_003f0350(int param_1,int *param_2)
{
  int iVar1;

  if (param_2 == 0) {
    K_Assert((const char *)DAT_006aede8,0x13b);
  }

  iVar1 = *param_2;
  if (iVar1 >= *(int *)(param_1 + 0x18)) {
    return 0;
  }

  *param_2 = iVar1 + 1;
  return *(int *)(param_1 + 0x1c) + iVar1 * 0xc;
}

// FUN_003F03E0


char FUN_003f03e0(int param_1)
{
  char level;
  int socialLink;

  switch (param_1) {
  case 0:
    socialLink = 0xf;
    break;
  case 4:
    socialLink = 3;
    break;
  case 8:
    socialLink = 2;
    break;
  default:
    return 0;
  }
  if (socialLink == 0xff) {
    return 0;
  }
  if (datSocialLinkLevelIsNotZero(socialLink) == 0) {
    return 0;
  }
  level = datGetSocialLinkLevel((s16)socialLink);
  if (level == 0) {
    return 0;
  }
  if ((level < 1) || (level > 10)) {
    K_Assert((const char *)DAT_006aede8,0x15c);
  }
  return level;
}

// W416 measured negative: retail offset 280 has a 0x18/0x1c extension pair, while ours already has the same pair nearby at 260/264; layout, not width.
// FUN_003F04F0


asm u32 FUN_003f04f0(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x2405016c
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c05f6c0
  .word 0x00000000
  .word 0x86230000
  .word 0x24120001
  .word 0x00521004
  .word 0x00621024
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000005d
  .word 0x00000000
  .word 0x86240002
  .word 0x10800006
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000902d
  .word 0x16400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000050
  .word 0x00000000
  .word 0x86230004
  .word 0x14600005
  .word 0x00000000
  .word 0x3a020001
  .word 0x0002102b
  .word 0x10000049
  .word 0x00000000
  .word 0x24020002
  .word 0x1602000b
  .word 0x00000000
  .word 0x0003153c
  .word 0x000226bf
  .word 0x82220004
  .word 0x00022ebc
  .word 0x00052ebf
  .word 0x2406016d
  .word 0x0c05f974
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x82220005
  .word 0x0002163c
  .word 0x00021f3f
  .word 0x24020001
  .word 0x10620006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x2405017f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x82220007
  .word 0x0002163c
  .word 0x00021f3f
  .word 0x10600028
  .word 0x00000000
  .word 0x24020002
  .word 0x10620017
  .word 0x00000000
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x86220004
  .word 0x0002153c
  .word 0x000226bf
  .word 0x82220004
  .word 0x00022ebc
  .word 0x00052ebf
  .word 0x86220006
  .word 0x0002153c
  .word 0x000236bf
  .word 0x82220006
  .word 0x00023ebc
  .word 0x00073ebf
  .word 0x0c05f920
  .word 0x00000000
  .word 0x0002102b
  .word 0x10000013
  .word 0x00000000
  .word 0x86220004
  .word 0x0002153c
  .word 0x000226bf
  .word 0x82220004
  .word 0x00022ebc
  .word 0x00052ebf
  .word 0x86220006
  .word 0x0002353c
  .word 0x0006353f
  .word 0x0c05f974
  .word 0x00000000
  .word 0x0002102b
  .word 0x10000005
  .word 0x00000000
  .word 0x24020001
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

/* Reconstructed the packed shop-date availability gate and all date-mode paths. */
// FUN_003F06E0


asm u32 * FUN_003f06e0(int *param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x8c910004
  .word 0x0000802d
  .word 0x1000003b
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420004
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0fc0f8
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x26310018
  .word 0x1000002c
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x1040000b
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0fc0f8
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x26310018
  .word 0x1000001e
  .word 0x00000000
  .word 0x96240004
  .word 0x3402ffff
  .word 0x10820005
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400015
  .word 0x00000000
  .word 0x26240010
  .word 0x0240282d
  .word 0x0c0fc13c
  .word 0x00000000
  .word 0x1040000f
  .word 0x00000000
  .word 0x96240004
  .word 0x3402ffff
  .word 0x10820008
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420002
  .word 0x10400004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x0220102d
  .word 0x10000008
  .word 0x00000000
  .word 0x26310018
  .word 0x26100001
  .word 0x8e620000
  .word 0x0202102a
  .word 0x1440ffc3
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F0830


short FUN_003f0830(int param_1)
{
  u8 *shopData;
  u8 *shopList;
  u8 *shopEntry;
  char socialLevel;
  u32 randomValue;
  int entry;
  int socialLink;
  short choice;

  switch (param_1) {
  case 0:
    socialLink = 0xf;
    break;
  case 4:
    socialLink = 3;
    break;
  default:
    socialLink = 0xff;
    break;
  }
  if ((param_1 < 0) || (param_1 >= 9)) {
    K_Assert((const char *)DAT_006aede8,0xb9);
  }
  if (datGetScenarioMode() == 0) {
    shopEntry = DAT_006ac9d0 + param_1 * 0x24;
  }
  else {
    shopEntry = DAT_006ac9d0 + (param_1 + 9) * 0x24;
  }
  shopData = *(u8 **)(shopEntry + 0x20);

  shopList = (u8 *)FUN_003f06e0((int *)(shopData + 0x14),1);
  if (shopList != NULL) {
    randomValue = RpRandom();
    choice = ((short *)(shopList + 8))[(randomValue % 0xffff) / 0xffff];
    if (choice == -1) {
      goto not_found;
    }
    return *(short *)(shopList + 8);
  }

  if (socialLink != 0xff) {
    if (*(int *)(shopData + 8) == 0) {
      K_Assert((const char *)DAT_006aede8,0x19c);
    }
    if (socialLink == 0xff) {
      entry = *(int *)(shopData + 8);
    }
    else {
      if (datSocialLinkLevelIsNotZero((s16)socialLink) == 0) {
        entry = *(int *)(shopData + 8);
      }
      else {
        socialLevel = datGetSocialLinkLevel((s16)socialLink);
        if (socialLevel == '\0') {
          entry = *(int *)(shopData + 8);
        }
        else {
          if ((socialLevel < '\x01') || ('\n' < socialLevel)) {
            K_Assert((const char *)DAT_006aede8,0x1a2);
          }
          entry = *(int *)(shopData + 8) + socialLevel * 0x20;
        }
      }
    }
    if ((entry != 0) && (*(short *)(entry + 0xc) != -1)) {
      return *(short *)(entry + 0xc);
    }
  }

  shopList = (u8 *)FUN_003f06e0((int *)(shopData + 0x14),0);
  if (shopList != NULL) {
    randomValue = RpRandom();
    choice = ((short *)(shopList + 8))[(randomValue % 0xffff) / 0xffff];
    if (choice != -1) {
      return choice;
    }
  }
not_found:
  return -1;
}

#pragma alias fclShopSelectStockItemId FUN_003f0830
// FUN_003F0AC0


short FUN_003f0ac0(int param_1)
{
  u8 *shopData;
  u8 *shopList;
  u8 *shopEntry;
  char socialLevel;
  u32 randomValue;
  int entry;
  int socialLink;
  short choice;

  switch (param_1) {
  case 0:
    socialLink = 0xf;
    break;
  case 4:
    socialLink = 3;
    break;
  default:
    socialLink = 0xff;
    break;
  }
  if ((param_1 < 0) || (param_1 >= 9)) {
    K_Assert((const char *)DAT_006aede8,0xb9);
  }
  if (datGetScenarioMode() == 0) {
    shopEntry = DAT_006ac9d0 + param_1 * 0x24;
  }
  else {
    shopEntry = DAT_006ac9d0 + (param_1 + 9) * 0x24;
  }
  shopData = *(u8 **)(shopEntry + 0x20);

  shopList = (u8 *)FUN_003f06e0((int *)(shopData + 0xc),1);
  if (shopList != NULL) {
    if ((*(u32 *)shopList & 1) != 0) {
      FUN_003e6e20(1);
    }
    randomValue = RpRandom();
    choice = ((short *)(shopList + 8))[(randomValue % 0xffff) / 0xffff];
    if (choice == -1) {
      goto not_found;
    }
    return choice;
  }

  if (socialLink != 0xff) {
    if (*(int *)(shopData + 8) == 0) {
      K_Assert((const char *)DAT_006aede8,0x19c);
    }
    if (socialLink == 0xff) {
      entry = *(int *)(shopData + 8);
    }
    else if (datSocialLinkLevelIsNotZero((s16)socialLink) == 0) {
      entry = *(int *)(shopData + 8);
    }
    else {
      socialLevel = datGetSocialLinkLevel((s16)socialLink);
      if (socialLevel == '\0') {
        entry = *(int *)(shopData + 8);
      }
      else {
        if ((socialLevel < '\x01') || ('\n' < socialLevel)) {
          K_Assert((const char *)DAT_006aede8,0x1a2);
        }
        entry = *(int *)(shopData + 8) + socialLevel * 0x20;
      }
    }
    if ((entry != 0) && (*(short *)(entry + 0xe) != -1)) {
      return *(short *)(entry + 0xe);
    }
  }

  shopList = (u8 *)FUN_003f06e0((int *)(shopData + 0xc),0);
  if (shopList != NULL) {
    randomValue = RpRandom();
    choice = ((short *)(shopList + 8))[(randomValue % 0xffff) / 0xffff];
    if (choice != -1) {
      return choice;
    }
  }
not_found:
  return -1;
}

// W414 probe: explicit inner-join gotos left nd5 (obj340/window352) and the same
// five early-vs-late shared-branch target rows; the nested-switch shape is retained.
// FUN_003F0D60


asm long FUN_003f0d60(int param_1,u64 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x24020008
  .word 0x10820032
  .word 0x00000000
  .word 0x24020004
  .word 0x1082002a
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0x2410000f
  .word 0x00a0202d
  .word 0x27a5003c
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa4003c
  .word 0x24030004
  .word 0x1083001a
  .word 0x00000000
  .word 0x24030003
  .word 0x10830014
  .word 0x00000000
  .word 0x24030002
  .word 0x1083000e
  .word 0x00000000
  .word 0x24030001
  .word 0x10830008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8c510024
  .word 0x1000000b
  .word 0x00000000
  .word 0x8c51001c
  .word 0x10000008
  .word 0x00000000
  .word 0x8c51001c
  .word 0x10000005
  .word 0x00000000
  .word 0x8c510020
  .word 0x10000002
  .word 0x00000000
  .word 0x8c510018
  .word 0x1000000e
  .word 0x00000000
  .word 0x24100003
  .word 0x00058c3c
  .word 0x00118c3f
  .word 0x10000009
  .word 0x00000000
  .word 0x24100002
  .word 0x00058c3c
  .word 0x00118c3f
  .word 0x10000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000010
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05b840
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000007
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05b8ac
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// Confirmed b210 floor: only five branch immediates differ at +136/+148/+160/+172/+184;
// our inner-switch exits target the final join, while retail targets the shared exit branch.
// FUN_003F0EC0


asm u32 FUN_003f0ec0(u16 param_1)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x0000802d
  .word 0x27a5002c
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa7002c
  .word 0x24030004
  .word 0x10e3005a
  .word 0x00000000
  .word 0x24060003
  .word 0x10e60044
  .word 0x00000000
  .word 0x24050002
  .word 0x10e5002e
  .word 0x00000000
  .word 0x24040001
  .word 0x10e40018
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x94430022
  .word 0x30620010
  .word 0x10400004
  .word 0x00000000
  .word 0x00c0802d
  .word 0x10000057
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x00a0802d
  .word 0x10000051
  .word 0x00000000
  .word 0x30620004
  .word 0x1040004e
  .word 0x00000000
  .word 0x0080802d
  .word 0x1000004b
  .word 0x00000000
  .word 0x94430018
  .word 0x30620010
  .word 0x10400004
  .word 0x00000000
  .word 0x00c0802d
  .word 0x10000044
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x00a0802d
  .word 0x1000003e
  .word 0x00000000
  .word 0x30620004
  .word 0x1040003b
  .word 0x00000000
  .word 0x0080802d
  .word 0x10000038
  .word 0x00000000
  .word 0x94430018
  .word 0x30620010
  .word 0x10400004
  .word 0x00000000
  .word 0x00c0802d
  .word 0x10000031
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x00a0802d
  .word 0x1000002b
  .word 0x00000000
  .word 0x30620004
  .word 0x10400028
  .word 0x00000000
  .word 0x24100001
  .word 0x10000025
  .word 0x00000000
  .word 0x94430016
  .word 0x30620010
  .word 0x10400004
  .word 0x00000000
  .word 0x00c0802d
  .word 0x1000001e
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x24100002
  .word 0x10000018
  .word 0x00000000
  .word 0x30620004
  .word 0x10400015
  .word 0x00000000
  .word 0x24100001
  .word 0x10000012
  .word 0x00000000
  .word 0x94430010
  .word 0x30620010
  .word 0x10400004
  .word 0x00000000
  .word 0x24100003
  .word 0x1000000b
  .word 0x00000000
  .word 0x30620008
  .word 0x10400004
  .word 0x00000000
  .word 0x24100002
  .word 0x10000005
  .word 0x00000000
  .word 0x30620004
  .word 0x10400002
  .word 0x00000000
  .word 0x24100001
  .word 0x0200102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F10B0


s16 FUN_003f10b0(int param_1,u16 param_2)
{
  u8 *shopData;
  u8 *shopEntry;
  char socialLevel;
  int level;
  int entry;
  int socialLink;

  switch (param_1) {
  case 0:
    socialLink = 0xf;
    break;
  case 4:
    socialLink = 3;
    break;
  default:
    return -1;
  }
  if ((param_1 < 0) || (param_1 >= 9)) {
    K_Assert((const char *)DAT_006aede8,0xb9);
  }
  if (datGetScenarioMode() == 0) {
    shopEntry = DAT_006ac9d0 + param_1 * 0x24;
  }
  else {
    shopEntry = DAT_006ac9d0 + (param_1 + 9) * 0x24;
  }
  shopData = *(u8 **)(shopEntry + 0x20);
  if (*(int *)(shopData + 8) == 0) {
    K_Assert((const char *)DAT_006aede8,0x19c);
  }
  if (socialLink == 0xff) {
    entry = *(int *)(shopData + 8);
  }
  else if (datSocialLinkLevelIsNotZero((s16)socialLink) == 0) {
    entry = *(int *)(shopData + 8);
  }
  else {
    socialLevel = datGetSocialLinkLevel((s16)socialLink);
    if (socialLevel == '\0') {
      entry = *(int *)(shopData + 8);
    }
    else {
      if ((socialLevel < '\x01') || ('\n' < socialLevel)) {
        K_Assert((const char *)DAT_006aede8,0x1a2);
      }
      entry = *(int *)(shopData + 8) + socialLevel * 0x20;
    }
  }
  if (entry != 0) {
    level = FUN_003f0ec0_s16((s16)param_2);
    if (level != 0) {
      return *(s16 *)((u8 *)(level * 2) + entry + 0xe);
    }
  }
  return -1;
}

// FUN_003F12A0


short FUN_003f12a0(int param_1,int param_2)
{
  u8 *shopData;
  u8 *shopEntry;
  char socialLevel;
  short result;
  int entry;
  int socialLink;

  switch (param_1) {
  case 0:
    socialLink = 0xf;
    break;
  case 4:
    socialLink = 3;
    break;
  default:
    return -1;
  }
  if ((param_1 < 0) || (param_1 >= 9)) {
    K_Assert((const char *)DAT_006aede8,0xb9);
  }
  if (datGetScenarioMode() == 0) {
    shopEntry = DAT_006ac9d0 + param_1 * 0x24;
  }
  else {
    shopEntry = DAT_006ac9d0 + (param_1 + 9) * 0x24;
  }
  shopData = *(u8 **)(shopEntry + 0x20);
  if (*(int *)(shopData + 8) == 0) {
    K_Assert((const char *)DAT_006aede8,0x19c);
  }
  if (socialLink == 0xff) {
    entry = *(int *)(shopData + 8);
  }
  else if (datSocialLinkLevelIsNotZero((s16)socialLink) == 0) {
    entry = *(int *)(shopData + 8);
  }
  else {
    socialLevel = datGetSocialLinkLevel((s16)socialLink);
    if (socialLevel == '\0') {
      entry = *(int *)(shopData + 8);
    }
    else {
      if ((socialLevel < '\x01') || ('\n' < socialLevel)) {
        K_Assert((const char *)DAT_006aede8,0x1a2);
      }
      entry = *(int *)(shopData + 8) + socialLevel * 0x20;
    }
  }
  if (entry != 0) {
    result = *(short *)((u8 *)(param_2 * 2) + entry + 0x18);
  }
  else {
    result = -1;
  }
  return result;
}

// FUN_003F1470


u64 FUN_003f1470(int param_1)
{
  s16 sVar1;
  u32 uVar2;

  switch (param_1) {
  case 0:
    sVar1 = 0xf;
    break;
  case 4:
    sVar1 = 3;
    break;
  case 8:
    sVar1 = 2;
    break;
  default:
    return 0;
  }

  uVar2 = datSocialLinkLevelIsNotZero(sVar1);
  if (uVar2 == 0) {
    return 0;
  }

  return FUN_00172660(sVar1);
}

// FUN_003F1520

void FUN_003f1520(int param_1)
{
  s32 iVar1;
  u32 uVar2;

  switch (param_1) {
  case 0:
    iVar1 = 0xf;
    break;
  case 4:
    iVar1 = 3;
    break;
  case 8:
    iVar1 = 2;
    break;
  default:
    return;
  }

  uVar2 = datSocialLinkLevelIsNotZero_s32(iVar1);
  if (uVar2 != 0) {
    FUN_001725a0((s16)iVar1);
  }
  else {
    func_0016dfb0(iVar1);
  }
}

// FUN_003F15D0


int FUN_003f15d0(int param_1,int param_2)
{
  u8 *puVar1;
  u8 *puVar2;

  puVar1 = (u8 *)(u32)datGetMoney();
  puVar2 = puVar1;

  if (0x98967f < (s32)puVar1 + param_1 * param_2) {
    puVar2 = (u8 *)(u32)0x98967f;
  }

  if ((s32)puVar1 + param_1 * param_2 < 0) {
    puVar2 = (u8 *)0;
  }
  else {
    puVar2 = (u8 *)(u32)((s32)puVar2 + param_1 * param_2);
  }

  if ((s32)puVar2 >= 0x98967f) {
    puVar2 = (u8 *)(u32)0x98967f;
  }

  datSetMoney((s32)puVar2);
  return (s32)puVar2 - (s32)puVar1;
}


// FUN_003F1690


int FUN_003f1690(u64 param_1)
{
  u16 uVar1;
  int iVar2;

  iVar2 = 0;
  goto check;
body:
  uVar1 = datGetEquipmentId(1,iVar2);
  if (uVar1 != 0) {
    goto increment;
  }
  func_001831e0(1,(short)iVar2,param_1);
  return iVar2;
increment:
  iVar2 = iVar2 + 1;
check:
  if (iVar2 < 300) {
    goto body;
  }
  return -1;
}

// FUN_003F1720
u32 FUN_003f1720(u32 param_1,short param_2)
{
  u16 uVar1;
  u32 unaff_s0_lo;
  u8 auStack_20[24];
  int iStack_4;
  struct PairKeyLocal {
    u16 lo;
    u16 hi;
  } key;
  extern u32 FUN_0017d1a0();

  iStack_4 = -1;
  func_00170ed0(param_1,&iStack_4);

  switch (iStack_4) {
  case 0:
  case 1:
  case 2:
  case 3:
    func_001828d0(param_1,auStack_20);
    unaff_s0_lo = FUN_003f1690_i((int)auStack_20);
    break;
  case 4:
    func_00170c00(1,param_1,param_2);
    unaff_s0_lo = (s16)param_1;
    break;
  }

  uVar1 = FUN_003e6dc0();
  key.lo = uVar1;
  key.hi = 0;
  FUN_0017d1a0(*(u32 *)&key,param_1 & 0xffff,param_2);
  return unaff_s0_lo;
}

// FUN_003F1830
u32 FUN_003f1830(short *param_1,int param_2)
{
  short sVar1;
  int iStack_4;

  iStack_4 = -1;
  sVar1 = *param_1;
  func_00170ed0(sVar1,&iStack_4);

  switch (iStack_4) {
  case 0:
  case 1:
  case 2:
  case 3:
    func_0016fea0(1,param_1[1],0);
    break;
  case 4:
    func_00170c00(1,sVar1,(short)(-param_2));
    break;
  }

  return 1;
}

// FUN_003F1910


u32 FUN_003f1910(u64 param_1)
{
  u32 uVar1;
  u32 uVar2;
  int iVar3;
  int iStack_4;

  iStack_4 = -1;
  uVar2 = 0;
  func_00170ed0(param_1,&iStack_4);
  switch (iStack_4) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar3 = 0;
    param_1 = (short)param_1;
    for (; iVar3 < 300; iVar3 = iVar3 + 1) {
      uVar1 = datGetEquipmentId(1,iVar3);
      if (param_1 == (uVar1 & 0xffff)) {
        uVar2 = uVar2 + 1;
      }
    }
    break;
  case 4:
    return func_00170760(1,param_1) & 0xffff;
  }
  return uVar2;
}


// FUN_003F1A10


u32 FUN_003f1a10(u32 param_1)



{

  u32 uVar1;
  uVar1 = 0;

  

  if ((param_1 & 0x7ffff) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  else {
    uVar1 = uVar1 | 0x4000;
  }


  if ((param_1 & 0xff00) != 0) {

    param_1 = param_1 >> 8;

    uVar1 = uVar1 | 0x2000;

  }

  switch (param_1 & 1) {
  case 0:

    if ((param_1 & 2) != 0) {

      uVar1 = uVar1 | 1;

    }

    else {

      if ((param_1 & 4) != 0) {

        uVar1 = uVar1 | 2;

      }

      else {

        if ((param_1 & 8) != 0) {

          uVar1 = uVar1 | 3;

        }

        else {

          if ((param_1 & 0x10) != 0) {

            uVar1 = uVar1 | 4;

          }

          else {

            if ((param_1 & 0x20) != 0) {

              uVar1 = uVar1 | 5;

            }

            else {

              if ((param_1 & 0x40) != 0) {

                uVar1 = uVar1 | 6;

              }

              else {

                if ((param_1 & 0x80) != 0) {

                  uVar1 = uVar1 | 7;

                }

                else {

                  if ((param_1 & 0x10000) != 0) {

                    uVar1 = uVar1 | 0x109;

                  }

                  else {

                    if ((param_1 & 0x20000) != 0) {

                      uVar1 = uVar1 | 0x20a;

                    }

                    else {

                      if ((param_1 & 0x40000) != 0) {

                        uVar1 = uVar1 | 0x30b;

                      }

                      else {

                        if ((param_1 & 0x80000) != 0) {

                          uVar1 = uVar1 | 0x40d;

                        }

                        else {

                          if ((param_1 & 0x100000) != 0) {
                            uVar1 = uVar1 | 0x40e;
                          }
                          else {
                            uVar1 = 0;
                          }

                        }

                      }

                    }

                  }

                }

              }

            }

          }

        }

      }

    }

    break;
  }

  return uVar1;

}

// FUN_003F1BA0


void FUN_003f1ba0(int param_1,u32 param_2)
{
  u32 *puVar2;
  int lVar3;
  u16 *puVar4;
  int iStack_4;

  iStack_4 = -1;
  if (param_1 == 0) {
    K_Assert((const char *)DAT_006aede8,0x3cc);
  }
  memset(param_1,0,0x1c);
  puVar4 = (u16 *)param_1;
  *puVar4 = (short)param_2;
  puVar4[5] = 0;
  lVar3 = dat00171360(param_2 & 0xffff);
  if (lVar3 != 0) {
    *(u32 *)(puVar4 + 2) = FUN_003f1a10(0x100000);
  }
  else {
    puVar2 = (u32 *)func_00170ed0(param_2,&iStack_4);
    switch (iStack_4) {
    case 0:
      *(u32 *)(puVar4 + 2) = FUN_003f1a10(puVar2[1]);
      *(u32 *)(puVar4 + 6) = puVar2[6];
      puVar4[8] = *(u16 *)(puVar2 + 2);
      puVar4[9] = *(u16 *)(puVar2 + 3);
      *(u8 *)(puVar4 + 4) = 2;
      *(u8 *)((int)puVar4 + 9) = 0x82;
      break;
    case 1:
      *(u32 *)(puVar4 + 2) = FUN_003f1a10(puVar2[1]);
      *(u32 *)(puVar4 + 6) = puVar2[4];
      puVar4[10] = *(u16 *)(puVar2 + 2);
      *(u8 *)(puVar4 + 4) = 2;
      *(u8 *)((int)puVar4 + 9) = 0x82;
      break;
    case 2:
      func_001714f0(*(u16 *)(puVar2 + 3));
      *(u32 *)(puVar4 + 2) = FUN_003f1a10(puVar2[1]);
      *(u32 *)(puVar4 + 6) = puVar2[4];
      puVar4[0xb] = *(u16 *)(puVar2 + 2);
      *(u8 *)(puVar4 + 4) = 2;
      *(u8 *)((int)puVar4 + 9) = 0x82;
      break;
    case 3:
      *(u32 *)(puVar4 + 2) = FUN_003f1a10(puVar2[0]);
      *(u32 *)(puVar4 + 6) = puVar2[4];
      puVar4[8] = *(u16 *)(puVar2 + 1);
      puVar4[9] = *(u16 *)(puVar2 + 2);
      puVar4[10] = *(u16 *)((int)puVar2 + 6);
      puVar4[0xb] = *(u16 *)((int)puVar2 + 10);
      puVar4[0xc] = *(u16 *)(puVar2 + 3);
      *(u8 *)(puVar4 + 4) = 2;
      break;
    case 4:
      *(u32 *)(puVar4 + 2) = FUN_003f1a10(puVar2[0]);
      *(u32 *)(puVar4 + 6) = puVar2[3];
      *(u8 *)(puVar4 + 4) = 2;
      break;
    }
  }
}

#pragma alias fclShopPopulateEquipmentEntry FUN_003f1ba0
// FUN_003F1DC0


asm u32 FUN_003f1dc0(long param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x06200004
  .word 0x00000000
  .word 0x2a22012c
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x2405040f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24050410
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x2406001c
  .word 0x0c148502
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x14800004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000eb
  .word 0x00000000
  .word 0xa6440000
  .word 0x24020001
  .word 0xa642000a
  .word 0xa6510002
  .word 0xafa0006c
  .word 0x27a5006c
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x0040802d
  .word 0x8fa3006c
  .word 0x24020004
  .word 0x106200d0
  .word 0x00000000
  .word 0x24020003
  .word 0x106200b3
  .word 0x00000000
  .word 0x24020002
  .word 0x1062007a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620041
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x100000d0
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be40
  .word 0x00000000
  .word 0xa2420009
  .word 0x92440009
  .word 0x0c05c53c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be04
  .word 0x00000000
  .word 0xa2420008
  .word 0x8e040004
  .word 0x0c0fc684
  .word 0x00000000
  .word 0xae420004
  .word 0x8604001c
  .word 0x82450008
  .word 0x0c05c544
  .word 0x00000000
  .word 0x8e020018
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
  .word 0xc6810000
  .word 0x46011042
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae42000c
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be7c
  .word 0x00000000
  .word 0xa6420010
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05beb8
  .word 0x00000000
  .word 0xa6420012
  .word 0x10000094
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be40
  .word 0x00000000
  .word 0xa2420009
  .word 0x92440009
  .word 0x0c05c53c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be04
  .word 0x00000000
  .word 0xa2420008
  .word 0x8e040004
  .word 0x0c0fc684
  .word 0x00000000
  .word 0xae420004
  .word 0x86040014
  .word 0x82450008
  .word 0x0c05c544
  .word 0x00000000
  .word 0x8e020010
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
  .word 0xc6810000
  .word 0x46011042
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae42000c
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05bef4
  .word 0x00000000
  .word 0xa6420014
  .word 0x1000005e
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be40
  .word 0x00000000
  .word 0xa2420009
  .word 0x92440009
  .word 0x0c05c53c
  .word 0x00000000
  .word 0x0040a02d
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be04
  .word 0x00000000
  .word 0xa2420008
  .word 0x8e040004
  .word 0x0c0fc684
  .word 0x00000000
  .word 0xae420004
  .word 0x86040014
  .word 0x82450008
  .word 0x0c05c544
  .word 0x00000000
  .word 0x8e020010
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
  .word 0xc6810000
  .word 0x46011042
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xae42000c
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05bf30
  .word 0x00000000
  .word 0xa6420016
  .word 0x10000028
  .word 0x00000000
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0220282d
  .word 0x0c05be40
  .word 0x00000000
  .word 0xa2420009
  .word 0x24020002
  .word 0xa2420008
  .word 0x8e040000
  .word 0x0c0fc684
  .word 0x00000000
  .word 0xae420004
  .word 0x8e020010
  .word 0xae42000c
  .word 0x96020004
  .word 0xa6420010
  .word 0x96020008
  .word 0xa6420012
  .word 0x96020006
  .word 0xa6420014
  .word 0x9602000a
  .word 0xa6420016
  .word 0x9602000c
  .word 0xa6420018
  .word 0x1000000e
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24050442
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x24020002
  .word 0xa2420008
  .word 0x8e040000
  .word 0x0c0fc684
  .word 0x00000000
  .word 0xae420004
  .word 0x8e02000c
  .word 0xae42000c
  .word 0x24020001
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F2240


u8 FUN_003f2240(int param_1,long param_2)
{
  short sVar1;
  u32 *puVar2;
  u16 *puVar4;

  if (param_1 == 0) {
    K_Assert((const char *)DAT_006aede8,0x450);
  }
  memset(param_1,0,0x1c);
  sVar1 = func_00170760(1,(short)param_2);
  if (sVar1 == 0) {
    return 0;
  }
  puVar2 = (u32 *)func_00170e90((long)(short)param_2);
  puVar4 = (u16 *)param_1;
  *puVar4 = param_2;
  *(u32 *)(puVar4 + 2) = FUN_003f1a10(puVar2[0]);
  *(u32 *)(puVar4 + 6) = puVar2[3];
  puVar4[5] = sVar1;
  return 1;
}

// Confirmed b210 floor: only +128/+132 differ, with the signed halfword extension
// routed through $v0 here versus directly through $a0 in retail.
// FUN_003F2320
#pragma push
#pragma opt_lifetimes on



asm u64 FUN_003f2320(int task,int list)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c820024
  .word 0x8c430044
  .word 0x8c620000
  .word 0x34420002
  .word 0xac620000
  .word 0x8ca30008
  .word 0x0000102d
  .word 0x10000030
  .word 0x00000000
  .word 0x84670000
  .word 0x10e0002b
  .word 0x00000000
  .word 0x80660005
  .word 0x30c60001
  .word 0x10c00027
  .word 0x00000000
  .word 0x8c880004
  .word 0x00073c3c
  .word 0x00073c3f
  .word 0x10000009
  .word 0x00000000
  .word 0x8d060014
  .word 0x8cc6001c
  .word 0x84c60004
  .word 0x14c70003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8d080010
  .word 0x1500fff7
  .word 0x00000000
  .word 0x0000402d
  .word 0x11000015
  .word 0x00000000
  .word 0x8d060014
  .word 0x8cc8001c
  .word 0x8d060000
  .word 0x34c60002
  .word 0xad060000
  .word 0x80670005
  .word 0x30e60004
  .word 0x10c00006
  .word 0x00000000
  .word 0x8d060000
  .word 0x34c60008
  .word 0xad060000
  .word 0x10000007
  .word 0x00000000
  .word 0x30e60002
  .word 0x10c00004
  .word 0x00000000
  .word 0x8d060000
  .word 0x34c60004
  .word 0xad060000
  .word 0x24630008
  .word 0x24420001
  .word 0x84a60006
  .word 0x0046302a
  .word 0x14c0ffce
  .word 0x00000000
  .word 0x8c870004
  .word 0x3c023e80
  .word 0x44820800
  .word 0x44801800
  .word 0xc782808c
  .word 0x3c023f00
  .word 0x44822000
  .word 0x24020001
  .word 0x1000002b
  .word 0x00000000
  .word 0x8ce30014
  .word 0x8c66001c
  .word 0x8cc50000
  .word 0x30a30008
  .word 0x1060000b
  .word 0x00000000
  .word 0xc4c00010
  .word 0x46800020
  .word 0x46001818
  .word 0x4600201d
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xacc30010
  .word 0x10000016
  .word 0x00000000
  .word 0x30a30004
  .word 0x1060000b
  .word 0x00000000
  .word 0xc4c00010
  .word 0x46800020
  .word 0x46001818
  .word 0x4600101d
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xacc30010
  .word 0x10000009
  .word 0x00000000
  .word 0xc4c00010
  .word 0x46800020
  .word 0x46001818
  .word 0x4600081d
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xacc30010
  .word 0x8cc30010
  .word 0x04610002
  .word 0x00000000
  .word 0xacc20010
  .word 0x8ce70010
  .word 0x14e0ffd5
  .word 0x00000000
  .word 0x0c0fcb58
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop


// FUN_003F2510


u32 FUN_003f2510(void)



{

  int sVar1;
  u32 uVar1;
  u32 uVar2;
  u32 uVar3;

  
  uVar1 = 0;
  for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1) {
    sVar1 = *(short *)(DAT_006acc60_abs + uVar3 * 2);
    if (sVar1 != -1) {
      if (datGetFlag_u32_arg(sVar1) != 0) {
        uVar1 = (uVar1 | ((1 << uVar3) & 0xffffU)) & 0xffffU;
        continue;
      }
    }
    if ((uVar3 == 6) && datGetScenarioMode() != 0) {
      uVar1 = (uVar1 | ((1 << uVar3) & 0xffffU)) & 0xffffU;
    }

  }

  return uVar1;

}

// FUN_003F25E0


asm u32 FUN_003f25e0(int param_1,int *param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff00
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
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x8cb00008
  .word 0x0000a82d
  .word 0x30de0400
  .word 0x30c20800
  .word 0x7fa200e0
  .word 0x30c21000
  .word 0x7fa200d0
  .word 0x30c22000
  .word 0x7fa200c0
  .word 0x30c20001
  .word 0x7fa200b0
  .word 0x30c24000
  .word 0x7fa200a0
  .word 0x100000aa
  .word 0x00000000
  .word 0x86140000
  .word 0x128000a5
  .word 0x00000000
  .word 0x24130001
  .word 0x0280202d
  .word 0x27a500fc
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x13c00005
  .word 0x00000000
  .word 0x8fa300fc
  .word 0x10600002
  .word 0x00000000
  .word 0x0000982d
  .word 0x7ba300e0
  .word 0x1060000c
  .word 0x00000000
  .word 0x8fa400fc
  .word 0x24030001
  .word 0x10830008
  .word 0x00000000
  .word 0x24030002
  .word 0x10830005
  .word 0x00000000
  .word 0x24030003
  .word 0x10830002
  .word 0x00000000
  .word 0x0000982d
  .word 0x8fa300fc
  .word 0x1c600019
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c0fc684
  .word 0x00000000
  .word 0x305600ff
  .word 0x24020006
  .word 0x16c20005
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x00161840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x10820006
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x82030004
  .word 0x24020001
  .word 0x14620007
  .word 0x00000000
  .word 0x24041310
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x12600013
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000066
  .word 0x00000000
  .word 0x7ba200c0
  .word 0x1040000a
  .word 0x00000000
  .word 0x0014343c
  .word 0x0006343f
  .word 0x0240202d
  .word 0x26450004
  .word 0x0c0f12fc
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x12600051
  .word 0x00000000
  .word 0x96420010
  .word 0x24450001
  .word 0x0240202d
  .word 0x24060020
  .word 0x0000382d
  .word 0x0c0f1690
  .word 0x00000000
  .word 0x0040b02d
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0xac430004
  .word 0x8c420014
  .word 0x8c53001c
  .word 0x7ba200b0
  .word 0x10400004
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420001
  .word 0xae620000
  .word 0x7ba200a0
  .word 0x14400015
  .word 0x00000000
  .word 0x82020005
  .word 0x30420008
  .word 0x10400011
  .word 0x00000000
  .word 0x9797b9a8
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0xa7a200f8
  .word 0xa7b700fa
  .word 0x3285ffff
  .word 0x82060006
  .word 0x8fa400f8
  .word 0x0c05f418
  .word 0x00000000
  .word 0x94420006
  .word 0x14400004
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420020
  .word 0xae620000
  .word 0x26640004
  .word 0x0280282d
  .word 0x0c0fc6e8
  .word 0x00000000
  .word 0x26620004
  .word 0x10400005
  .word 0x00000000
  .word 0x12200003
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x2405045e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x86030002
  .word 0x18600009
  .word 0x00000000
  .word 0x8e620010
  .word 0x00431818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0xae620010
  .word 0x10000008
  .word 0x00000000
  .word 0x86230002
  .word 0x8e620010
  .word 0x00431818
  .word 0x24020064
  .word 0x0062001a
  .word 0x00001012
  .word 0xae620010
  .word 0x0240202d
  .word 0x02c0282d
  .word 0x0c0fcb70
  .word 0x00000000
  .word 0x26100008
  .word 0x26b50001
  .word 0x86220006
  .word 0x02a2102a
  .word 0x1440ff54
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
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F2940


asm u32 FUN_003f2940(int param_1,short *param_2,int param_3,u32 param_4)
{
  .set noreorder
  .word 0x27bdfef0
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
  .word 0x0080902d
  .word 0x00c0f02d
  .word 0x00e0882d
  .word 0x00a0802d
  .word 0x0000a82d
  .word 0x32220400
  .word 0x7fa200f0
  .word 0x32220800
  .word 0x7fa200e0
  .word 0x32221000
  .word 0x7fa200d0
  .word 0x32222000
  .word 0x7fa200c0
  .word 0x32220001
  .word 0x7fa200b0
  .word 0x32224000
  .word 0x7fa200a0
  .word 0x100000d7
  .word 0x00000000
  .word 0x86140000
  .word 0x128000d2
  .word 0x00000000
  .word 0x24130001
  .word 0x0280202d
  .word 0x27a5010c
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x7ba300f0
  .word 0x10600005
  .word 0x00000000
  .word 0x8fa3010c
  .word 0x10600002
  .word 0x00000000
  .word 0x0000982d
  .word 0x7ba300e0
  .word 0x1060000c
  .word 0x00000000
  .word 0x8fa4010c
  .word 0x24030001
  .word 0x10830008
  .word 0x00000000
  .word 0x24030002
  .word 0x10830005
  .word 0x00000000
  .word 0x24030003
  .word 0x10830002
  .word 0x00000000
  .word 0x0000982d
  .word 0x8fa3010c
  .word 0x1c60001b
  .word 0x00000000
  .word 0x8c440004
  .word 0x0c0fc684
  .word 0x00000000
  .word 0x305600ff
  .word 0x24020006
  .word 0x16c20005
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400055
  .word 0x00000000
  .word 0x00161840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082004d
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400049
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000046
  .word 0x00000000
  .word 0x82030004
  .word 0x24020001
  .word 0x10620042
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05c4b4
  .word 0x00000000
  .word 0x24030080
  .word 0x1443001a
  .word 0x00000000
  .word 0x2403ffff
  .word 0x8fa2010c
  .word 0x2442ffff
  .word 0x2c410002
  .word 0x10200002
  .word 0x00000000
  .word 0x24030006
  .word 0x2405ffff
  .word 0x10650032
  .word 0x00000000
  .word 0x306200ff
  .word 0x00021840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x1085002a
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400026
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000023
  .word 0x00000000
  .word 0x24034000
  .word 0x14430020
  .word 0x00000000
  .word 0x2403ffff
  .word 0x8fa2010c
  .word 0x2442ffff
  .word 0x2c410002
  .word 0x10200002
  .word 0x00000000
  .word 0x24030007
  .word 0x2402ffff
  .word 0x10620016
  .word 0x00000000
  .word 0x307600ff
  .word 0x24020006
  .word 0x16c20005
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x1440000e
  .word 0x00000000
  .word 0x00161840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x10820006
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x12600013
  .word 0x00000000
  .word 0x7ba200d0
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000054
  .word 0x00000000
  .word 0x7ba200c0
  .word 0x1040000a
  .word 0x00000000
  .word 0x0014343c
  .word 0x0006343f
  .word 0x0240202d
  .word 0x26450004
  .word 0x0c0f12fc
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x82030004
  .word 0x24020001
  .word 0x14620007
  .word 0x00000000
  .word 0x24041310
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x12600036
  .word 0x00000000
  .word 0x96420010
  .word 0x24450001
  .word 0x0240202d
  .word 0x24060020
  .word 0x0000382d
  .word 0x0c0f1690
  .word 0x00000000
  .word 0x0040b02d
  .word 0x00141c3c
  .word 0x00031c3f
  .word 0xac430004
  .word 0x8c420014
  .word 0x8c53001c
  .word 0x8e620000
  .word 0x00511025
  .word 0xae620000
  .word 0x7ba200b0
  .word 0x10400004
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420001
  .word 0xae620000
  .word 0x7ba200a0
  .word 0x14400015
  .word 0x00000000
  .word 0x82020005
  .word 0x30420008
  .word 0x10400011
  .word 0x00000000
  .word 0x9797b9a8
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0xa7a20108
  .word 0xa7b7010a
  .word 0x3285ffff
  .word 0x82060006
  .word 0x8fa40108
  .word 0x0c05f418
  .word 0x00000000
  .word 0x94420006
  .word 0x14400004
  .word 0x00000000
  .word 0x8e620000
  .word 0x34420020
  .word 0xae620000
  .word 0x26640004
  .word 0x0280282d
  .word 0x0c0fc6e8
  .word 0x00000000
  .word 0x0240202d
  .word 0x02c0282d
  .word 0x0c0fcb70
  .word 0x00000000
  .word 0x26100008
  .word 0x26b50001
  .word 0x02be102a
  .word 0x1440ff28
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
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F2D60


u64 FUN_003f2d60(int param_1)



{

  int iVar1;

  

  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {

    FUN_003f2dc0(param_1,iVar1);

  }

  return 0;

}

// FUN_003F2DC0


asm u64 FUN_003f2dc0(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8ca20014
  .word 0x8c50001c
  .word 0x8e030000
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae020000
  .word 0x86120004
  .word 0x2402ffff
  .word 0xafa2005c
  .word 0x0000982d
  .word 0x0240202d
  .word 0x27a5005c
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa3005c
  .word 0x24020004
  .word 0x10620021
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0000882d
  .word 0x0012943c
  .word 0x0012943f
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040001
  .word 0x0220282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x16420002
  .word 0x00000000
  .word 0x26730001
  .word 0x26310001
  .word 0x2a22012c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3053ffff
  .word 0xa613000e
  .word 0x0013143c
  .word 0x0002143f
  .word 0x28420063
  .word 0x14400004
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420010
  .word 0xae020000
  .word 0x8e110010
  .word 0x0c05b754
  .word 0x00000000
  .word 0x0051082b
  .word 0x10200004
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420010
  .word 0xae020000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0xa7a20058
  .word 0xa7a0005a
  .word 0x96050004
  .word 0x8fa40058
  .word 0x0c05f494
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420020
  .word 0xae020000
  .word 0x8e030000
  .word 0x30620020
  .word 0x10400003
  .word 0x00000000
  .word 0x34620010
  .word 0xae020000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// W212: narrowing the maintained result to short measured nd187 -> nd227 and 416/432 -> 444/432; rejected as over-window.
// FUN_003F2F70


asm u32 FUN_003f2f70(u32 param_1,int param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x0000982d
  .word 0x30c20001
  .word 0x10400002
  .word 0x00000000
  .word 0x36730400
  .word 0x30c20002
  .word 0x10400002
  .word 0x00000000
  .word 0x36730800
  .word 0x06800004
  .word 0x00000000
  .word 0x2a820009
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x240500b9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541021
  .word 0x00021880
  .word 0x3c02006b
  .word 0x2442c9d0
  .word 0x00438021
  .word 0x10000008
  .word 0x00000000
  .word 0x26830009
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006b
  .word 0x2442c9d0
  .word 0x00438021
  .word 0x8ea20024
  .word 0x8c420044
  .word 0xa4540004
  .word 0xa4540006
  .word 0x0200202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x1040000b
  .word 0x00000000
  .word 0x36661000
  .word 0x02a0202d
  .word 0x0040282d
  .word 0x0c0fc978
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000006b
  .word 0x00000000
  .word 0xafa0008c
  .word 0x36711000
  .word 0x10000016
  .word 0x00000000
  .word 0x8e560000
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0x0056082a
  .word 0x1420001f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x8e450008
  .word 0x8e460004
  .word 0x0220382d
  .word 0x0c0fca50
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000052
  .word 0x00000000
  .word 0x8fa3008c
  .word 0x8e020018
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000008
  .word 0x00000000
  .word 0x24620001
  .word 0xafa2008c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8e02001c
  .word 0x00439021
  .word 0x1640ffdb
  .word 0x00000000
  .word 0xafa0008c
  .word 0x36721001
  .word 0x1000000c
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0240302d
  .word 0x0c0fc978
  .word 0x00000000
  .word 0x0002102b
  .word 0x38420001
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000032
  .word 0x00000000
  .word 0x26040010
  .word 0x0000282d
  .word 0x27a6008c
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa3008c
  .word 0x24630001
  .word 0xafa3008c
  .word 0x0040282d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000282d
  .word 0x14a0ffe6
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0fc0f8
  .word 0x00000000
  .word 0x0040902d
  .word 0x24020001
  .word 0xafa2008c
  .word 0x10000015
  .word 0x00000000
  .word 0x8e040020
  .word 0x00021940
  .word 0x8c820008
  .word 0x00431021
  .word 0x1040000c
  .word 0x00000000
  .word 0x02a0202d
  .word 0x8c450008
  .word 0x8c460004
  .word 0x0220382d
  .word 0x0c0fca50
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000009
  .word 0x00000000
  .word 0x8fa2008c
  .word 0x24420001
  .word 0xafa2008c
  .word 0x8fa2008c
  .word 0x0242082a
  .word 0x1020ffe9
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F3280
s32 FUN_003f3280(u32 *param_1,u32 *param_2)
{
  u32 entryA;
  u32 entryB;
  s32 fieldA;
  s32 fieldB;
  s32 result;
  s32 catA;
  s32 catB;

  entryA = *(u32 *)(*param_1 + 0x14);
  entryA = *(u32 *)(entryA + 0x1c);
  entryB = *(u32 *)(*param_2 + 0x14);
  entryB = *(u32 *)(entryB + 0x1c);
  fieldB = *(u32 *)(entryB + 8);
  fieldA = *(u32 *)(entryA + 8);
  result = (fieldA & 0xff) - (fieldB & 0xff);
  if (result != 0) {
    goto ret;
  }
  switch ((fieldB & 0xf00) >> 8) {
  case 0:
    catB = *(short *)(entryB + 0x14);
    break;
  case 1:
    catB = *(short *)(entryB + 0x18);
    break;
  case 2:
    catB = *(short *)(entryB + 0x1a);
    break;
  case 4:
    catB = 0x98967f - *(int *)(entryB + 0x10);
    break;
  default:
    catB = 0;
    break;
  }
  switch ((fieldA & 0xf00) >> 8) {
  case 0:
    catA = *(short *)(entryA + 0x14);
    break;
  case 1:
    catA = *(short *)(entryA + 0x18);
    break;
  case 2:
    catA = *(short *)(entryA + 0x1a);
    break;
  case 4:
    catA = 0x98967f - *(int *)(entryA + 0x10);
    break;
  default:
    catA = 0;
    break;
  }
  result = catB - catA;
  if (result != 0) {
    goto ret;
  }
  result = *(short *)(entryB + 4) - *(short *)(entryA + 4);
ret:
  return result;
}

// Retail sibling begins at 0x3f3280; comparator body reconstructed from 0x3f3280-0x3f33c8.
#pragma opt_loop_invariants on
// FUN_003F33D0
#pragma opt_lifetimes on


asm u32 FUN_003f33d0(int param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdfec0
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
  .word 0x00a0982d
  .word 0x0000882d
  .word 0x24120005
  .word 0x24020003
  .word 0x16820002
  .word 0x00000000
  .word 0x24120004
  .word 0x32620001
  .word 0x10400002
  .word 0x00000000
  .word 0x36310400
  .word 0x32620002
  .word 0x10400002
  .word 0x00000000
  .word 0x36310800
  .word 0x06800004
  .word 0x00000000
  .word 0x2a820009
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x240500b9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x001410c0
  .word 0x00541021
  .word 0x00021880
  .word 0x3c02006b
  .word 0x2442c9d0
  .word 0x00438021
  .word 0x10000008
  .word 0x00000000
  .word 0x26830009
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006b
  .word 0x2442c9d0
  .word 0x00438021
  .word 0x0000202d
  .word 0x24050058
  .word 0x0240302d
  .word 0x2407001a
  .word 0x0c0f163c
  .word 0x00000000
  .word 0x0040902d
  .word 0x8c420024
  .word 0x8c420044
  .word 0xa4540004
  .word 0xa4540006
  .word 0x0200202d
  .word 0x24050001
  .word 0x27a60138
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0xafa00138
  .word 0x0200202d
  .word 0x0000282d
  .word 0x27a60138
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x93a30138
  .word 0xa783b9a8
  .word 0x36262000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0fc978
  .word 0x00000000
  .word 0xafa00134
  .word 0x36362000
  .word 0x10000012
  .word 0x00000000
  .word 0x8eb70000
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304200ff
  .word 0x0057082a
  .word 0x1420001b
  .word 0x00000000
  .word 0x93a20134
  .word 0x34420100
  .word 0xa782b9a8
  .word 0x0240202d
  .word 0x8ea50008
  .word 0x8ea60004
  .word 0x02c0382d
  .word 0x0c0fca50
  .word 0x00000000
  .word 0x8fa30134
  .word 0x8e020018
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x0000a82d
  .word 0x10000008
  .word 0x00000000
  .word 0x24620001
  .word 0xafa20134
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8e02001c
  .word 0x0043a821
  .word 0x16a0ffdf
  .word 0x00000000
  .word 0xafa0013c
  .word 0x36312001
  .word 0x10000008
  .word 0x00000000
  .word 0x93a2013c
  .word 0x34420200
  .word 0xa782b9a8
  .word 0x0240202d
  .word 0x0220302d
  .word 0x0c0fc978
  .word 0x00000000
  .word 0x26040010
  .word 0x0000282d
  .word 0x27a6013c
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x8fa3013c
  .word 0x24630001
  .word 0xafa3013c
  .word 0x0040282d
  .word 0x10000002
  .word 0x00000000
  .word 0x0000282d
  .word 0x14a0ffea
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0fc0f8
  .word 0x00000000
  .word 0x0040882d
  .word 0x24020001
  .word 0xafa2013c
  .word 0x10000013
  .word 0x00000000
  .word 0x8e030020
  .word 0x00022140
  .word 0x8c630008
  .word 0x00641821
  .word 0x1060000a
  .word 0x00000000
  .word 0x304200ff
  .word 0x34420300
  .word 0xa782b9a8
  .word 0x0240202d
  .word 0x8c650008
  .word 0x8c660004
  .word 0x02c0382d
  .word 0x0c0fca50
  .word 0x00000000
  .word 0x8fa2013c
  .word 0x24420001
  .word 0xafa2013c
  .word 0x8fa2013c
  .word 0x0222082a
  .word 0x1020ffeb
  .word 0x00000000
  .word 0x26040008
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x26040008
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0fc034
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x0240202d
  .word 0x0040282d
  .word 0x0c0fc8c8
  .word 0x00000000
  .word 0x24020003
  .word 0x1282002c
  .word 0x00000000
  .word 0x32620004
  .word 0x10400018
  .word 0x00000000
  .word 0x0000802d
  .word 0x0280202d
  .word 0x24050001
  .word 0x0260302d
  .word 0x0c0fce68
  .word 0x00000000
  .word 0x0040882d
  .word 0x10400009
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c0fcf98
  .word 0x00000000
  .word 0x0040802d
  .word 0x0220202d
  .word 0x0c0f1688
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1688
  .word 0x00000000
  .word 0x0200102d
  .word 0x10000075
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05f584
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c0fce5c
  .word 0x00000000
  .word 0x0040802d
  .word 0x10400008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0200282d
  .word 0x0c0fcf70
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f1688
  .word 0x00000000
  .word 0x0240202d
  .word 0x3c05003f
  .word 0x24a53280
  .word 0x0000302d
  .word 0x0c0f1c00
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ee00
  .word 0x27a50110
  .word 0x24040004
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ee20
  .word 0x27a500f0
  .word 0x24040004
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ee40
  .word 0x27a500d0
  .word 0x24040004
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ee60
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
  .word 0x00148080
  .word 0x021d1021
  .word 0x0240202d
  .word 0x8c450110
  .word 0x0c0f17a0
  .word 0x00000000
  .word 0x021d1021
  .word 0x0240202d
  .word 0x8c4500f0
  .word 0x0c0f1788
  .word 0x00000000
  .word 0x021d1021
  .word 0x0240202d
  .word 0x8c4500d0
  .word 0x0c0f17b8
  .word 0x00000000
  .word 0x001410c0
  .word 0x005d1021
  .word 0x0240202d
  .word 0x8c450090
  .word 0x8c460094
  .word 0x0c0f1b50
  .word 0x00000000
  .word 0x24020004
  .word 0x16820006
  .word 0x00000000
  .word 0x2403000a
  .word 0x8e420024
  .word 0xa4430006
  .word 0x10000004
  .word 0x00000000
  .word 0x24030014
  .word 0x8e420024
  .word 0xa4430006
  .word 0x2403000a
  .word 0x8e420024
  .word 0xa4430008
  .word 0x0240102d
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset
#pragma opt_lifetimes reset

// FUN_003F3970


u64 FUN_003f3970(long param_1,u32 param_2)



{


  return FUN_003f39a0(param_1,0,param_2);
}

#pragma opt_loop_invariants reset
// W415 ORDER fix: switch case 0/default restores the retail dat0017d6d0 -> FUN_0017d700 call order; nd687/988 -> 681/996, window1056.
// W419 global-mode probe negative: DAT_006acc60_abs for all 9 uses worsened nd681 -> 704 and object996 -> 1008 (window1056); retained the GP-relative form.
// FUN_003F39A0


asm u32 FUN_003f39a0_u32ret(int param_1,int param_2,u32 param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00c0902d
  .word 0x0000882d
  .word 0x14a00006
  .word 0x00000000
  .word 0x27a50070
  .word 0x0c05f5b4
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x0000282d
  .word 0x27a60070
  .word 0x0c05f5c0
  .word 0x00000000
  .word 0x0000802d
  .word 0x0000a02d
  .word 0x10000021
  .word 0x00000000
  .word 0x00141840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082000c
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x24020001
  .word 0x02821004
  .word 0x3042ffff
  .word 0x02021025
  .word 0x3050ffff
  .word 0x1000000d
  .word 0x00000000
  .word 0x24020006
  .word 0x1682000a
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24020001
  .word 0x02821004
  .word 0x3042ffff
  .word 0x02021025
  .word 0x3050ffff
  .word 0x26940001
  .word 0x2e820008
  .word 0x1440ffde
  .word 0x00000000
  .word 0x97b40072
  .word 0x0000a82d
  .word 0x1000001d
  .word 0x00000000
  .word 0x24020006
  .word 0x16a20005
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x00151840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082000d
  .word 0x00000000
  .word 0x24050001
  .word 0x02a51004
  .word 0x02821024
  .word 0x10400005
  .word 0x00000000
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x26b50001
  .word 0x2ea20008
  .word 0x1440ffe2
  .word 0x00000000
  .word 0x32420001
  .word 0x10400002
  .word 0x00000000
  .word 0x36310400
  .word 0x32420002
  .word 0x10400002
  .word 0x00000000
  .word 0x36310800
  .word 0x06600004
  .word 0x00000000
  .word 0x2a620009
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x240500b9
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400009
  .word 0x00000000
  .word 0x001310c0
  .word 0x00531021
  .word 0x00021880
  .word 0x3c02006b
  .word 0x2442c9d0
  .word 0x00439821
  .word 0x10000008
  .word 0x00000000
  .word 0x26630009
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021880
  .word 0x3c02006b
  .word 0x2442c9d0
  .word 0x00439821
  .word 0x0000202d
  .word 0x24050058
  .word 0x24060005
  .word 0x2407001a
  .word 0x0c0f163c
  .word 0x00000000
  .word 0x0040902d
  .word 0x8fa30074
  .word 0x8e620000
  .word 0x0062082b
  .word 0x14200004
  .word 0x00000000
  .word 0x0000282d
  .word 0x10000006
  .word 0x00000000
  .word 0x00031080
  .word 0x00431021
  .word 0x00021880
  .word 0x8e620004
  .word 0x00432821
  .word 0x10a00005
  .word 0x00000000
  .word 0x36266000
  .word 0x0240202d
  .word 0x0c0fc978
  .word 0x00000000
  .word 0xafa0007c
  .word 0x36346000
  .word 0x1000000c
  .word 0x00000000
  .word 0x8fa3007c
  .word 0x93a20070
  .word 0x0043082a
  .word 0x14200018
  .word 0x00000000
  .word 0x0240202d
  .word 0x8cc50008
  .word 0x8cc60004
  .word 0x0280382d
  .word 0x0c0fca50
  .word 0x00000000
  .word 0x8fa3007c
  .word 0x8e620018
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x0000302d
  .word 0x10000008
  .word 0x00000000
  .word 0x24620001
  .word 0xafa2007c
  .word 0x00031040
  .word 0x00431021
  .word 0x00021880
  .word 0x8e62001c
  .word 0x00433021
  .word 0x14c0ffe5
  .word 0x00000000
  .word 0x93b10071
  .word 0x24020001
  .word 0xafa2007c
  .word 0x10000010
  .word 0x00000000
  .word 0x8e640020
  .word 0x00021940
  .word 0x8c820008
  .word 0x00431021
  .word 0x10400007
  .word 0x00000000
  .word 0x0240202d
  .word 0x8c450008
  .word 0x8c460004
  .word 0x0280382d
  .word 0x0c0fca50
  .word 0x00000000
  .word 0x8fa2007c
  .word 0x24420001
  .word 0xafa2007c
  .word 0x8fa2007c
  .word 0x0222082a
  .word 0x1020ffee
  .word 0x00000000
  .word 0x0000882d
  .word 0x3210ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x24020006
  .word 0x16220005
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x00111840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082000d
  .word 0x00000000
  .word 0x24050001
  .word 0x02251004
  .word 0x02021024
  .word 0x10400005
  .word 0x00000000
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x26310001
  .word 0x2e220008
  .word 0x1440ffe2
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma alias FUN_003f39a0_u32ret FUN_003f39a0

// FUN_003F3DC0


void FUN_003f3dc0(int param_1,int *param_2)
{
  u32 *puVar1;
  int lVar2;
  int iVar3;

  for (iVar3 = *(int *)(param_1 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
    puVar1 = *(u32 **)(*(int *)(iVar3 + 0x14) + 0x1c);
    if ((lVar2 = fclShopNmlistFind(param_2,param_2 + 1,(short)puVar1[1])) != 0) {
      fclShopNmlistRemove(param_2,param_2 + 1,lVar2);
    }
    else {
      *puVar1 = *puVar1 | 0x80;
    }
  }
  return;
}

// FUN_003F3E60


u32 FUN_003f3e60(int param_1,int *param_2)



{

  int lVar1;

  int iVar2;

  

  iVar2 = *(int *)(param_1 + 4);

  while (iVar2 != 0) {
    lVar1 = fclShopNmlistFind(param_2,param_2 + 1,
                              *(s16 *)(*(int *)(*(int *)(iVar2 + 0x14) + 0x1c) + 4));
    if (lVar1 != 0) {
      fclShopNmlistRemove(param_2,param_2 + 1,lVar1);
    }
    else {
      return 1;
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  }
  return 0;

}

// FUN_003F3F00


u32 FUN_003f3f00(u64 param_1)
{
  u32 uVar1;
  u32 lVar2;
  uVar1 = FUN_003fa1e0_u32();

  if ((lVar2 = FUN_003c6ce0(param_1), lVar2 != 0) ||
      (lVar2 = FUN_003c6d10(param_1), lVar2 != 0)) {
    func_0010a4e0(0,0,0,0);
  }

  lVar2 = FUN_003c6ca0(param_1);
  if ((lVar2 != 0) || (lVar2 = FUN_003c6cc0(param_1), lVar2 != 0)) {
    func_0010a4e0(0,0,0,5);
  }

  return uVar1;
}

// W419 ORDER layout probe negative: swapping the mutually exclusive 61d0/5ab0 branch bodies left nd618 (object880/window912); reverted.
// FUN_003F3FC0


asm void FUN_003f3fc0(int param_1,int param_2,u32 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0b02d
  .word 0x00c0a02d
  .word 0x00e0982d
  .word 0x0000902d
  .word 0x8cf1000c
  .word 0x8ce20024
  .word 0x8c500044
  .word 0x86020028
  .word 0x02a2a821
  .word 0x8602002a
  .word 0x02c2b021
  .word 0x0260202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030014
  .word 0x10430009
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241200ff
  .word 0x10000005
  .word 0x00000000
  .word 0x0280902d
  .word 0x10000002
  .word 0x00000000
  .word 0x241200ff
  .word 0x1240007e
  .word 0x00000000
  .word 0x86020044
  .word 0x02421818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x0000f012
  .word 0x3c170096
  .word 0x26f70090
  .word 0x24040008
  .word 0x24050001
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x0000282d
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020003
  .word 0x3445200d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x86020038
  .word 0x24440089
  .word 0x44806000
  .word 0x2405001e
  .word 0x24060070
  .word 0x24070022
  .word 0x0000402d
  .word 0x24090001
  .word 0x0c103584
  .word 0x00000000
  .word 0x24040008
  .word 0x0000282d
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040006
  .word 0x24050001
  .word 0x8ee20000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x3445000d
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x33c600ff
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24070023
  .word 0x0000402d
  .word 0x0c1038f0
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
  .word 0x86040038
  .word 0x8605003a
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070024
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86020048
  .word 0x02a2f021
  .word 0x8602004a
  .word 0x02c21021
  .word 0x7fa200b0
  .word 0x86020054
  .word 0x02421818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x0000b812
  .word 0xc6140050
  .word 0x8e620024
  .word 0x8c520028
  .word 0x27c4ffeb
  .word 0x7ba200b0
  .word 0x2445ffff
  .word 0x44806000
  .word 0x32e600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070026
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x27c4ffed
  .word 0x00121040
  .word 0x00521021
  .word 0x00021080
  .word 0x00521021
  .word 0x000218c0
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x7ba200b0
  .word 0x24420003
  .word 0x00432821
  .word 0x44806000
  .word 0x32e600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070027
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26a4ffeb
  .word 0x26c5008b
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fddcc
  .word 0x00000000
  .word 0x86030006
  .word 0x2402ffff
  .word 0x14620011
  .word 0x00000000
  .word 0x24040161
  .word 0x240500e0
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fd6ac
  .word 0x00000000
  .word 0x24040161
  .word 0x24050130
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdea0
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x2404015d
  .word 0x240500e0
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fd874
  .word 0x00000000
  .word 0x24040161
  .word 0x24050133
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdea0
  .word 0x00000000
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
  .word 0xc7b40000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F4350


asm void FUN_003f4350(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0000882d
  .word 0x8cf6000c
  .word 0x8ce20024
  .word 0x8c500044
  .word 0x86020028
  .word 0x02a2a821
  .word 0x8602002a
  .word 0x0282a021
  .word 0x0240202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030014
  .word 0x10430009
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241100ff
  .word 0x10000005
  .word 0x00000000
  .word 0x0260882d
  .word 0x10000002
  .word 0x00000000
  .word 0x241100ff
  .word 0x12200044
  .word 0x00000000
  .word 0x86020038
  .word 0x02a22021
  .word 0x8602003a
  .word 0x02822821
  .word 0x44806000
  .word 0x86020044
  .word 0x02221818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00001012
  .word 0x304600ff
  .word 0x24070022
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86020048
  .word 0x02a2f021
  .word 0x8602004a
  .word 0x02821021
  .word 0x7fa200b0
  .word 0x86020054
  .word 0x02221818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x0000b812
  .word 0xc6140050
  .word 0x8e420024
  .word 0x8c510028
  .word 0x27c4ffeb
  .word 0x7ba200b0
  .word 0x2445fff5
  .word 0x44806000
  .word 0x32e600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070024
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x27c4ffed
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x00511021
  .word 0x000218c0
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x7ba200b0
  .word 0x24420004
  .word 0x00432821
  .word 0x44806000
  .word 0x32e600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070025
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26a4ffeb
  .word 0x2685008b
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fddcc
  .word 0x00000000
  .word 0x86030006
  .word 0x2402ffff
  .word 0x14620011
  .word 0x00000000
  .word 0x2404015a
  .word 0x240500e6
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fd744
  .word 0x00000000
  .word 0x2404015b
  .word 0x24050134
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fdea0
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x26a40001
  .word 0x268500ac
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fdea0
  .word 0x00000000
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
  .word 0xc7b40000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// Typed integer call views preserve the retail 32-bit ABI for these draw helpers.
#pragma alias FUN_003f7730_i FUN_003f7730
#pragma alias FUN_003f5d10_i FUN_003f5d10
#pragma alias FUN_003f5f50_i FUN_003f5f50
#pragma alias FUN_003f7a80_i FUN_003f7a80
// FUN_003F45E0


asm void FUN_003f45e0(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0000882d
  .word 0x8cf6000c
  .word 0x8ce20024
  .word 0x8c500044
  .word 0x86020028
  .word 0x02a2a821
  .word 0x8602002a
  .word 0x0282a021
  .word 0x0240202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030014
  .word 0x10430009
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241100ff
  .word 0x10000005
  .word 0x00000000
  .word 0x0260882d
  .word 0x10000002
  .word 0x00000000
  .word 0x241100ff
  .word 0x12200044
  .word 0x00000000
  .word 0x86020038
  .word 0x02a22021
  .word 0x8602003a
  .word 0x02822821
  .word 0x44806000
  .word 0x86020044
  .word 0x02221818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00001012
  .word 0x304600ff
  .word 0x24070026
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86020048
  .word 0x02a2f021
  .word 0x8602004a
  .word 0x02821021
  .word 0x7fa200b0
  .word 0x86020054
  .word 0x02221818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x0000b812
  .word 0xc6140050
  .word 0x8e420024
  .word 0x8c510028
  .word 0x27c4ffeb
  .word 0x7ba200b0
  .word 0x2445fff5
  .word 0x44806000
  .word 0x32e600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070028
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x27c4ffed
  .word 0x00111040
  .word 0x00511021
  .word 0x00021080
  .word 0x00511021
  .word 0x000218c0
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x7ba200b0
  .word 0x24420004
  .word 0x00432821
  .word 0x44806000
  .word 0x32e600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070029
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26a4ffeb
  .word 0x2685008b
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fddcc
  .word 0x00000000
  .word 0x86030006
  .word 0x2402ffff
  .word 0x14620011
  .word 0x00000000
  .word 0x24040047
  .word 0x24050104
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fd7d4
  .word 0x00000000
  .word 0x24040048
  .word 0x24050150
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fdea0
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x26a40001
  .word 0x268500af
  .word 0x0260302d
  .word 0x0240382d
  .word 0x02c0402d
  .word 0x0c0fdea0
  .word 0x00000000
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
  .word 0xc7b40000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F4870


asm void FUN_003f4870(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x00e0802d
  .word 0x0000a02d
  .word 0x8cf6000c
  .word 0x8ce20024
  .word 0x8c550044
  .word 0x86a20028
  .word 0x02629821
  .word 0x86a2002a
  .word 0x02429021
  .word 0x0200202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030014
  .word 0x10430009
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241400ff
  .word 0x10000005
  .word 0x00000000
  .word 0x0220a02d
  .word 0x10000002
  .word 0x00000000
  .word 0x241400ff
  .word 0x1280003d
  .word 0x00000000
  .word 0x86a20038
  .word 0x02622021
  .word 0x86a2003a
  .word 0x02422821
  .word 0x44806000
  .word 0x86a20044
  .word 0x02821818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00001012
  .word 0x304600ff
  .word 0x24070016
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86a20048
  .word 0x0262b821
  .word 0x86a2004a
  .word 0x0242f021
  .word 0x86a20054
  .word 0x02821818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x0000a012
  .word 0xc6b40050
  .word 0x8e020024
  .word 0x8c550028
  .word 0x26e4ffeb
  .word 0x27c5ffff
  .word 0x44806000
  .word 0x328600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070018
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26e4ffed
  .word 0x24020056
  .word 0x02a21818
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001012
  .word 0x03c22821
  .word 0x44806000
  .word 0x328600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24070019
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x2664ffe6
  .word 0x2645007d
  .word 0x0220302d
  .word 0x0200382d
  .word 0x02c0402d
  .word 0x0c0fddcc
  .word 0x00000000
  .word 0x2664ffea
  .word 0x2645009d
  .word 0x0220302d
  .word 0x0200382d
  .word 0x02c0402d
  .word 0x0c0fdea0
  .word 0x00000000
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
  .word 0xc7b40000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F4A90


asm int FUN_003f4a90(int param_1,int param_2,int param_3,int param_4,int param_5,short *param_6)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x85220000
  .word 0x02429021
  .word 0x85220002
  .word 0x02228821
  .word 0x44860000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808200
  .word 0x46010042
  .word 0x8522000c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x46000024
  .word 0x44100000
  .word 0x24020004
  .word 0x10e2008c
  .word 0x00000000
  .word 0x24020003
  .word 0x10e20077
  .word 0x00000000
  .word 0x24020002
  .word 0x10e20042
  .word 0x00000000
  .word 0x24020001
  .word 0x10e20005
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700cf
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700d0
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700d5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700d6
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700d2
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700d3
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700d4
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000065
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407006c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407006d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070072
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070073
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407007f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070080
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407009d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407009e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700c1
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700c2
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700cc
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700cd
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F4DE0


asm void FUN_003f4de0(int param_1,int param_2,u32 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdfdd0
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0b82d
  .word 0x00e0982d
  .word 0x0000902d
  .word 0x8cf1000c
  .word 0x8ce20024
  .word 0x8c500044
  .word 0x26160028
  .word 0x86020028
  .word 0x02a2a821
  .word 0x8602002a
  .word 0x0282a021
  .word 0x0260202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x1043000f
  .word 0x00000000
  .word 0x24030014
  .word 0x10430009
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x241200ff
  .word 0x10000005
  .word 0x00000000
  .word 0x02e0902d
  .word 0x10000002
  .word 0x00000000
  .word 0x241200ff
  .word 0x86030006
  .word 0x2402fffb
  .word 0x1062011a
  .word 0x00000000
  .word 0x2402fffc
  .word 0x106200bd
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10620060
  .word 0x00000000
  .word 0x2402fffe
  .word 0x10620003
  .word 0x00000000
  .word 0x10000151
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0240302d
  .word 0x0000382d
  .word 0x0260402d
  .word 0x02c0482d
  .word 0x0c0fd2a4
  .word 0x00000000
  .word 0x3c05006b
  .word 0x24a5eea0
  .word 0x27a401f0
  .word 0x2403000f
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x86020048
  .word 0x02a2f021
  .word 0x8602004a
  .word 0x02821021
  .word 0x7fa200e0
  .word 0x86020054
  .word 0x02421818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00009012
  .word 0xc6140050
  .word 0x8e620024
  .word 0x8c500028
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa701f0
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x7ba500e0
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x8fa201f8
  .word 0x00501818
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x7ba200e0
  .word 0x00432821
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa701f4
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x86c6000c
  .word 0x2404007a
  .word 0x240500ff
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdce4
  .word 0x00000000
  .word 0x26a4011d
  .word 0x2685005e
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdea0
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x02e0302d
  .word 0x24070001
  .word 0x0260402d
  .word 0x0220482d
  .word 0x0c0fde24
  .word 0x00000000
  .word 0x10000150
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0240302d
  .word 0x24070001
  .word 0x0260402d
  .word 0x02c0482d
  .word 0x0c0fd2a4
  .word 0x00000000
  .word 0x3c05006b
  .word 0x24a5eea0
  .word 0x27a401b0
  .word 0x2403000f
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x86020048
  .word 0x02a2f021
  .word 0x8602004a
  .word 0x02821021
  .word 0x7fa200d0
  .word 0x86020054
  .word 0x02421818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00009012
  .word 0xc6140050
  .word 0x8e620024
  .word 0x8c500028
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa701bc
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x7ba500d0
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x8fa201c4
  .word 0x00501818
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x7ba200d0
  .word 0x00432821
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa701c0
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x86c6000c
  .word 0x24040081
  .word 0x24050100
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdce4
  .word 0x00000000
  .word 0x26a4011d
  .word 0x2685005e
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdea0
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x02e0302d
  .word 0x24070001
  .word 0x0260402d
  .word 0x0220482d
  .word 0x0c0fde24
  .word 0x00000000
  .word 0x100000f6
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0240302d
  .word 0x24070002
  .word 0x0260402d
  .word 0x02c0482d
  .word 0x0c0fd2a4
  .word 0x00000000
  .word 0x3c05006b
  .word 0x24a5eea0
  .word 0x27a40170
  .word 0x2403000f
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x86020048
  .word 0x02a2f021
  .word 0x8602004a
  .word 0x02821021
  .word 0x7fa200c0
  .word 0x86020054
  .word 0x02421818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00009012
  .word 0xc6140050
  .word 0x8e620024
  .word 0x8c500028
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa70188
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x7ba500c0
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x8fa20190
  .word 0x00501818
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x7ba200c0
  .word 0x00432821
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa7018c
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26a40159
  .word 0x2685005f
  .word 0x86c6000c
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdbc8
  .word 0x00000000
  .word 0x26a400f6
  .word 0x268500c8
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdf18
  .word 0x00000000
  .word 0x26850028
  .word 0x86c6000c
  .word 0x02a0202d
  .word 0x0000382d
  .word 0x0260402d
  .word 0x0220482d
  .word 0x0c0fde24
  .word 0x00000000
  .word 0x1000009c
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0240302d
  .word 0x24070003
  .word 0x0260402d
  .word 0x02c0482d
  .word 0x0c0fd2a4
  .word 0x00000000
  .word 0x3c05006b
  .word 0x24a5eea0
  .word 0x27a40130
  .word 0x2403000f
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x86020048
  .word 0x02a28821
  .word 0x8602004a
  .word 0x0282a021
  .word 0x86020054
  .word 0x02421818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00009012
  .word 0xc6140050
  .word 0x8e620024
  .word 0x8c500028
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa70154
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x8fa2015c
  .word 0x00501818
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001012
  .word 0x02822821
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa70158
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0220202d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0240302d
  .word 0x24070004
  .word 0x0260402d
  .word 0x02c0482d
  .word 0x0c0fd2a4
  .word 0x00000000
  .word 0x3c05006b
  .word 0x24a5eea0
  .word 0x27a400f0
  .word 0x2403000f
  .word 0x8ca20000
  .word 0x24a50004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x86020048
  .word 0x02a2f021
  .word 0x8602004a
  .word 0x02821021
  .word 0x7fa200b0
  .word 0x86020054
  .word 0x02421818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00009012
  .word 0xc6140050
  .word 0x8e620024
  .word 0x8c500028
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa70120
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x7ba500b0
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x8fa20128
  .word 0x00501818
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x7ba200b0
  .word 0x00432821
  .word 0x44806000
  .word 0x324600ff
  .word 0x8fa70124
  .word 0x3c023f80
  .word 0x44827000
  .word 0x03c0202d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x86c6000c
  .word 0x24040117
  .word 0x240500d2
  .word 0x24070001
  .word 0x0260402d
  .word 0x0220482d
  .word 0x0c0fd9f8
  .word 0x00000000
  .word 0x24040141
  .word 0x24050133
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0220402d
  .word 0x0c0fdea0
  .word 0x00000000
  .word 0x86c6000c
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000382d
  .word 0x0260402d
  .word 0x0220482d
  .word 0x0c0fde24
  .word 0x00000000
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
  .word 0xc7b40000
  .word 0x27bd0230
  .word 0x03e00008
  .word 0x00000000
}

// FUN_003F55B0


asm void FUN_003f55b0(int param_1,int param_2,int param_3,int param_4,int param_5,
                 u32 param_6)
{
  .set noreorder
  .word 0x27bdff20
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
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x0120b02d
  .word 0x24150005
  .word 0xc781ac08
  .word 0xc780ac0c
  .word 0xe7a100d8
  .word 0xe7a000dc
  .word 0x3c06006b
  .word 0x24c6ef00
  .word 0x27a50090
  .word 0x02a0202d
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x0000882d
  .word 0x0240b82d
  .word 0x8ce20024
  .word 0x8c430044
  .word 0x8d020014
  .word 0x8c50001c
  .word 0x32c20001
  .word 0x10400010
  .word 0x00000000
  .word 0x8c620000
  .word 0x30420001
  .word 0x14400002
  .word 0x00000000
  .word 0x24110001
  .word 0x12200009
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0x24150001
  .word 0x10000002
  .word 0x00000000
  .word 0x24150006
  .word 0x32c20004
  .word 0x1440000c
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420010
  .word 0x10400008
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808090
  .word 0x46000802
  .word 0x46000024
  .word 0x44120000
  .word 0x8e020000
  .word 0x30420080
  .word 0x10400009
  .word 0x00000000
  .word 0x44806000
  .word 0x32e600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x92020008
  .word 0x00021040
  .word 0x00514021
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8205000c
  .word 0x86040004
  .word 0x0c05c444
  .word 0x00000000
  .word 0x26840020
  .word 0x26650001
  .word 0x44806000
  .word 0x2403ff00
  .word 0x02433025
  .word 0x00153e3c
  .word 0x00073e3f
  .word 0x24080001
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x32c30002
  .word 0x14600025
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420020
  .word 0x10400011
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1821
  .word 0x00111080
  .word 0x00431021
  .word 0x8c470090
  .word 0x44806000
  .word 0x32e600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x27a400c0
  .word 0x2785ac10
  .word 0x8e060010
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2684016c
  .word 0x2665000b
  .word 0x44806000
  .word 0x324600ff
  .word 0x00111080
  .word 0x005d1021
  .word 0x8c4700d8
  .word 0x27a800c0
  .word 0x24090009
  .word 0x0c103ad4
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
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
}

// FUN_003F5830


void FUN_003f5830(int param_1,int param_2,int param_3,int param_4,int param_5,
                 u32 param_6)
{
  u32 *puVar2;
  const char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  u8 auStack_20[24];
  FclShopFloatPair auStack_8;

  iVar7 = 5;
  auStack_8 = *(FclShopFloatPair *)&DAT_007cd908;
  iVar4 = 0;
  puVar2 = *(u32 **)(*(int *)(param_5 + 0x14) + 0x1c);
  if ((param_6 & 1) != 0) {
    iVar7 = 6;
    iVar4 = 1;
  }
  if ((*puVar2 & 0x10) != 0) {
    param_3 = (int)((f32)param_3 * DAT_007cad80);
  }
  FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,0x85,iVar4 << 1);
  FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,0x86,iVar4 << 1);
  iVar6 = param_1;
  iVar5 = param_2;
  FUN_0040e3c0_i(iVar6 + 0xe,iVar5 + 3,0.0f,param_3,3,
                   (*(u8 *)((u8 *)((u32)*(u16 *)(puVar2[5] + 2) * 0xe) +
                             DAT_007ce420 + 2) - 1) * 2 + iVar4);
  FUN_003b32d0_i(iVar6 + 0x75,iVar5 + 2,0.0f,param_3 | 0xffffff00,
                   (s8)iVar7,1,
                   DAT_007ce4e4 + (u32)*(u16 *)(puVar2[5] + 2) * 0x11,
                   0,0x78);
  sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(u8 *)(puVar2[5] + 4));
  FUN_0040eb50_i(iVar6 + 0x14e,iVar5 + 10,0.0f,param_3 & 0xff,
                 auStack_8.u[iVar4],auStack_20,1);
  if ((s16)puVar2[7] != 0) {
    FUN_0040e3c0_i(iVar6 + 0x15e,iVar5 + -1,0.0f,param_3,4,
                     (s32)((u8 *)((u32)(u8)puVar2[6] * 2) + iVar4));
    pcVar3 = func_00171110_ptr((s16)puVar2[7],2);
    FUN_003b32d0_i(iVar6 + 0x184,iVar5 + 1,0.0f,param_3 | 0xffffff00,
                     (s8)iVar7,1,pcVar3,0,0x73);
  }
  if (iVar4 == 0) {
    FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,0x89,0);
  }
}

// FUN_003F5AB0


asm void FUN_003f5ab0(u32 param_1,u32 param_2,u32 param_3,u64 param_4,
                 int param_5)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2785ac20
  .word 0x27a40088
  .word 0x24030005
  .word 0x80a20000
  .word 0x24a50001
  .word 0x2463ffff
  .word 0xa0820000
  .word 0x24840001
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ef30
  .word 0x27a50060
  .word 0x24040004
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8d020014
  .word 0x8c50001c
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070036
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x92080008
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070038
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070039
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000035
  .word 0x00000000
  .word 0x8e020008
  .word 0x30420f00
  .word 0x00021203
  .word 0x005d1021
  .word 0x80430088
  .word 0x24020001
  .word 0x02221004
  .word 0x00621024
  .word 0x10400018
  .word 0x00000000
  .word 0x00111040
  .word 0x02021021
  .word 0x84460014
  .word 0x27a40070
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x24430060
  .word 0x84620000
  .word 0x02822021
  .word 0x84620002
  .word 0x02622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80070
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x32230001
  .word 0x00031140
  .word 0x00431023
  .word 0x00021080
  .word 0x02822021
  .word 0x00111043
  .word 0x30430001
  .word 0x000310c0
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x02622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x2407003c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230004
  .word 0x1460ffca
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F5D10


asm void FUN_003f5d10(u32 param_1,u32 param_2,u32 param_3,u64 param_4,
                 int param_5)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2785ac28
  .word 0x27a40088
  .word 0x24030005
  .word 0x80a20000
  .word 0x24a50001
  .word 0x2463ffff
  .word 0xa0820000
  .word 0x24840001
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ef40
  .word 0x27a50060
  .word 0x24040004
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8d020014
  .word 0x8c50001c
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070034
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x92080008
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070035
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070036
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070038
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000035
  .word 0x00000000
  .word 0x8e020008
  .word 0x30420f00
  .word 0x00021203
  .word 0x005d1021
  .word 0x80430088
  .word 0x24020001
  .word 0x02221004
  .word 0x00621024
  .word 0x10400018
  .word 0x00000000
  .word 0x00111040
  .word 0x02021021
  .word 0x84460014
  .word 0x27a40070
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x24430060
  .word 0x84620000
  .word 0x02822021
  .word 0x84620002
  .word 0x02622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80070
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x32230001
  .word 0x00031140
  .word 0x00431023
  .word 0x00021080
  .word 0x02822021
  .word 0x00111043
  .word 0x30430001
  .word 0x000310c0
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x02622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070039
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230004
  .word 0x1460ffca
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F5F50


asm void FUN_003f5f50(u32 param_1,u32 param_2,u8 param_3,u64 param_4,
                 int param_5)
{
  .set noreorder
  .word 0x27bdff30
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2785ac30
  .word 0x27a400c8
  .word 0x24030005
  .word 0x80a20000
  .word 0x24a50001
  .word 0x2463ffff
  .word 0xa0820000
  .word 0x24840001
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ef50
  .word 0x27a500a0
  .word 0x24040004
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8d020014
  .word 0x8c50001c
  .word 0x26650001
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x24070038
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6ef60
  .word 0x27a50060
  .word 0x24040007
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x26650001
  .word 0x44806000
  .word 0x324600ff
  .word 0x92020008
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c480060
  .word 0x0280202d
  .word 0x24070039
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000035
  .word 0x00000000
  .word 0x8e020008
  .word 0x30420f00
  .word 0x00021203
  .word 0x005d1021
  .word 0x804300c8
  .word 0x24020001
  .word 0x02221004
  .word 0x00621024
  .word 0x10400018
  .word 0x00000000
  .word 0x00111040
  .word 0x02021021
  .word 0x84460014
  .word 0x27a400b0
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x244300a0
  .word 0x84620000
  .word 0x02822021
  .word 0x84620002
  .word 0x02622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a800b0
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x32230001
  .word 0x00031140
  .word 0x00431023
  .word 0x00021080
  .word 0x02822021
  .word 0x00111043
  .word 0x30430001
  .word 0x000310c0
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x02622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x2407003d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230004
  .word 0x1460ffca
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F61D0
#pragma opt_lifetimes on


asm void FUN_003f61d0(int param_1,int param_2,u32 param_3,u64 param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff40
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
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2785ac38
  .word 0x27a400b8
  .word 0x24030005
  .word 0x80a20000
  .word 0x24a50001
  .word 0x2463ffff
  .word 0xa0820000
  .word 0x24840001
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x8785ac40
  .word 0x8784ac42
  .word 0x8783ac44
  .word 0x8782ac46
  .word 0xa7a500b0
  .word 0xa7a400b2
  .word 0xa7a300b4
  .word 0xa7a200b6
  .word 0x3c06006b
  .word 0x24c6ef98
  .word 0x27a500a0
  .word 0x24040005
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8d020014
  .word 0x8c51001c
  .word 0x8e220008
  .word 0x30420f00
  .word 0x00028203
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070036
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x92280008
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070038
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x021d1021
  .word 0x244200b8
  .word 0x80550000
  .word 0x16a00013
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000002e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0010b040
  .word 0x02dd1021
  .word 0x804300a0
  .word 0x2402ffff
  .word 0x14620009
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44040000
  .word 0x44806000
  .word 0x308600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407003f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0240202d
  .word 0x02dd1021
  .word 0x804300a1
  .word 0x2402ffff
  .word 0x14620009
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44040000
  .word 0x44806000
  .word 0x308600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070040
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2665001b
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0010b040
  .word 0x02dd1021
  .word 0x244200a0
  .word 0x80570000
  .word 0x2402ffff
  .word 0x12e20048
  .word 0x00000000
  .word 0x16a0000e
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05be7c
  .word 0x00000000
  .word 0x3046ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05bef4
  .word 0x00000000
  .word 0x3046ffff
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b0
  .word 0x02822021
  .word 0x2663001b
  .word 0x87a200b2
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x2665001b
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x24070041
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x00171040
  .word 0x00511021
  .word 0x84460014
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b4
  .word 0x02822021
  .word 0x2663001b
  .word 0x87a200b6
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x2665001b
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840011
  .word 0x2665001b
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840022
  .word 0x2665001b
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840033
  .word 0x2665001b
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26650036
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x02dd1021
  .word 0x244200a1
  .word 0x80560000
  .word 0x2402ffff
  .word 0x12c20048
  .word 0x00000000
  .word 0x16a0000e
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05beb8
  .word 0x00000000
  .word 0x3046ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05bf30
  .word 0x00000000
  .word 0x3046ffff
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b0
  .word 0x02822021
  .word 0x26630036
  .word 0x87a200b2
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26650036
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x24070041
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x00161040
  .word 0x00511021
  .word 0x84460014
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b4
  .word 0x02822021
  .word 0x26630036
  .word 0x87a200b6
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000021
  .word 0x00000000
  .word 0x26650036
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840011
  .word 0x26650036
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840022
  .word 0x26650036
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840033
  .word 0x26650036
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
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
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
}
#pragma schedule reset
#pragma opt_lifetimes reset

#undef auStack_30
#undef acStack_20
#undef sStack_10
#undef sStack_e
#undef sStack_c
#undef sStack_a
#undef acStack_8
// FUN_003F67E0
#pragma opt_lifetimes on


asm void FUN_003f67e0(int param_1,int param_2,u32 param_3,int param_4,int param_5,
                 int param_6)
{
  .set noreorder
  .word 0x27bdff40
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
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2785ac48
  .word 0x27a400b8
  .word 0x24030005
  .word 0x80a20000
  .word 0x24a50001
  .word 0x2463ffff
  .word 0xa0820000
  .word 0x24840001
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x8785ac50
  .word 0x8784ac52
  .word 0x8783ac54
  .word 0x8782ac56
  .word 0xa7a500b0
  .word 0xa7a400b2
  .word 0xa7a300b4
  .word 0xa7a200b6
  .word 0x3c06006b
  .word 0x24c6efa8
  .word 0x27a500a0
  .word 0x24040005
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8d220014
  .word 0x8c56001c
  .word 0x8ec20008
  .word 0x30420f00
  .word 0x00028203
  .word 0x24020001
  .word 0x10e2000f
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700b1
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700c7
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700c8
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700c9
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700b5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840070
  .word 0x26650008
  .word 0x44806000
  .word 0x324600ff
  .word 0x92c80008
  .word 0x24070005
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x021d1021
  .word 0x244200b8
  .word 0x80570000
  .word 0x16e00032
  .word 0x00000000
  .word 0x0240182d
  .word 0x0010a840
  .word 0x02bd1021
  .word 0x244200a0
  .word 0x80510000
  .word 0x2402ffff
  .word 0x16220009
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x44806000
  .word 0x306600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700b3
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0240182d
  .word 0x02bd1021
  .word 0x244200a1
  .word 0x80550000
  .word 0x2402ffff
  .word 0x16a20009
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x44806000
  .word 0x306600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700b4
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000030
  .word 0x00000000
  .word 0x0240182d
  .word 0x0010a840
  .word 0x02bd1021
  .word 0x244200a0
  .word 0x80510000
  .word 0x2402ffff
  .word 0x16220009
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x44806000
  .word 0x306600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700ca
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0240182d
  .word 0x02bd1021
  .word 0x244200a1
  .word 0x80550000
  .word 0x2402ffff
  .word 0x16a20009
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x44806000
  .word 0x306600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700cb
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2665001c
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x240700b5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2402ffff
  .word 0x12220048
  .word 0x00000000
  .word 0x16e0000e
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05be7c
  .word 0x00000000
  .word 0x3046ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05bef4
  .word 0x00000000
  .word 0x3046ffff
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b0
  .word 0x02822021
  .word 0x2663001c
  .word 0x87a200b2
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x2665001c
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x240700b6
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x00111040
  .word 0x00561021
  .word 0x84460014
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b4
  .word 0x02822021
  .word 0x2663001c
  .word 0x87a200b6
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44110000
  .word 0x2665001c
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840011
  .word 0x2665001c
  .word 0x44806000
  .word 0x322600ff
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840022
  .word 0x2665001c
  .word 0x44806000
  .word 0x322600ff
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840033
  .word 0x2665001c
  .word 0x44806000
  .word 0x322600ff
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26650038
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x240700b5
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2402ffff
  .word 0x12a20048
  .word 0x00000000
  .word 0x16e0000e
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05beb8
  .word 0x00000000
  .word 0x3046ffff
  .word 0x1000000c
  .word 0x00000000
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05bf30
  .word 0x00000000
  .word 0x3046ffff
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b0
  .word 0x02822021
  .word 0x26630038
  .word 0x87a200b2
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26650038
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x240700b6
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x00151040
  .word 0x00561021
  .word 0x84460014
  .word 0x27a40090
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200b4
  .word 0x02822021
  .word 0x26630038
  .word 0x87a200b6
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80090
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44100000
  .word 0x26650038
  .word 0x44806000
  .word 0x320600ff
  .word 0x0280202d
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840011
  .word 0x26650038
  .word 0x44806000
  .word 0x320600ff
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840022
  .word 0x26650038
  .word 0x44806000
  .word 0x320600ff
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840033
  .word 0x26650038
  .word 0x44806000
  .word 0x320600ff
  .word 0x240700ce
  .word 0x0000402d
  .word 0x0c1038f0
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
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes reset
#undef auStack_30
#undef acStack_20
#undef sStack_10
#undef sStack_e
#undef sStack_c
#undef sStack_a
#undef acStack_8

// FUN_003F6F20
#pragma push
#pragma opt_lifetimes on


asm void FUN_003f6f20(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x2785ac58
  .word 0x27a400a0
  .word 0x24030005
  .word 0x80a20000
  .word 0x24a50001
  .word 0x2463ffff
  .word 0xa0820000
  .word 0x24840001
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x8783ac60
  .word 0x8782ac62
  .word 0xa7a300ac
  .word 0xa7a200ae
  .word 0x3c06006b
  .word 0x24c6efb8
  .word 0x27a50090
  .word 0x24040005
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8d020014
  .word 0x8c50001c
  .word 0x8e020008
  .word 0x30420f00
  .word 0x0002aa03
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808200
  .word 0x46010502
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070075
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46140036
  .word 0x45010007
  .word 0x00000000
  .word 0x4600a024
  .word 0x44060000
  .word 0x00000000
  .word 0x30c600ff
  .word 0x10000007
  .word 0x00000000
  .word 0x4600a001
  .word 0x46000024
  .word 0x44060000
  .word 0x3c028000
  .word 0x00c23025
  .word 0x30c600ff
  .word 0x44806000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070076
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070077
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070078
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840089
  .word 0x26650008
  .word 0x44806000
  .word 0x324600ff
  .word 0x92020008
  .word 0x24480016
  .word 0x24070005
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070079
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0240882d
  .word 0x02bd1021
  .word 0x804200a0
  .word 0x10400009
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44110000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26650023
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x2407007d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x00158840
  .word 0x023d1021
  .word 0x24420090
  .word 0x80430000
  .word 0x2402ffff
  .word 0x10620016
  .word 0x00000000
  .word 0x00031040
  .word 0x00501021
  .word 0x84460014
  .word 0x27a40080
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200ac
  .word 0x02822021
  .word 0x26630023
  .word 0x87a200ae
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80080
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x26650023
  .word 0x44806000
  .word 0x304600ff
  .word 0x0280202d
  .word 0x2407007e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2665003e
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x2407007d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x023d1021
  .word 0x24420091
  .word 0x80430000
  .word 0x2402ffff
  .word 0x10620016
  .word 0x00000000
  .word 0x00031040
  .word 0x00501021
  .word 0x84460014
  .word 0x27a40080
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x87a200ac
  .word 0x02822021
  .word 0x2663003e
  .word 0x87a200ae
  .word 0x00622821
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a80080
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x2665003e
  .word 0x44806000
  .word 0x304600ff
  .word 0x0280202d
  .word 0x2407007e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b40000
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop

// W443 switch layout: declaring cases 0-3 before case 4 places the retail loop body before the case-4 lookup; target nd602/896 is retained because the owned-file total improves.
// FUN_003F7390


asm void FUN_003f7390(int param_1,int param_2,u32 param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff20
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x8d020014
  .word 0x8c42001c
  .word 0x7fa200a0
  .word 0x44806000
  .word 0x324600ff
  .word 0x240700e2
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700db
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700dc
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700dd
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700df
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700e0
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x240700e1
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000802d
  .word 0x2403ff00
  .word 0x02431825
  .word 0xafa300b0
  .word 0x10000089
  .word 0x00000000
  .word 0x00102080
  .word 0x7ba300a0
  .word 0x00641821
  .word 0x24760016
  .word 0x84630016
  .word 0x10600081
  .word 0x00000000
  .word 0x2691001c
  .word 0x26630010
  .word 0x00101040
  .word 0x00501021
  .word 0x00021080
  .word 0x00501021
  .word 0x00021040
  .word 0x0062a821
  .word 0x26240013
  .word 0x26a50021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0000382d
  .word 0x2408001b
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x00101880
  .word 0x7ba200a0
  .word 0x00431021
  .word 0x24570014
  .word 0x84440014
  .word 0x24050002
  .word 0x0c05c444
  .word 0x00000000
  .word 0x26240033
  .word 0x26a50023
  .word 0x44806000
  .word 0x8fa600b0
  .word 0x24070006
  .word 0x24080001
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x02a0282d
  .word 0x240700e3
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86c60000
  .word 0x27a400c0
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2624013e
  .word 0x26a5002c
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a800c0
  .word 0x00e0482d
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x02a0282d
  .word 0x240700e4
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86fe0000
  .word 0x2402ffff
  .word 0xafa200dc
  .word 0x0000b02d
  .word 0x03c0202d
  .word 0x27a500dc
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa300dc
  .word 0x24020004
  .word 0x10620021
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0000b82d
  .word 0x001ef43c
  .word 0x001ef43f
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040001
  .word 0x02e0282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x17c20002
  .word 0x00000000
  .word 0x26d60001
  .word 0x26f70001
  .word 0x2ae2012c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x03c0282d
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3056ffff
  .word 0x27a400c0
  .word 0x2785ac10
  .word 0x02c0302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x262401a6
  .word 0x26a5002c
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070001
  .word 0x27a800c0
  .word 0x00e0482d
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030002
  .word 0x1460ff76
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
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F7730


void FUN_003f7730(int param_1,int param_2,u32 param_3,int param_4,int param_5)



{

  short uVar1;

  int iVar2;

  short *puVar5;

  short *puVar4;

  int iVar3;

  u8 auStack_10[16];

  short auStack_30 [16];

  

  puVar5 = DAT_006aefd0_abs;

  puVar4 = auStack_30;

  iVar3 = 0xf;

  do {

    uVar1 = *puVar5;

    puVar5 = puVar5 + 1;

    iVar3 = iVar3 + -1;

    *puVar4 = uVar1;

    puVar4 = puVar4 + 1;

  } while (0 < iVar3);

  iVar3 = *(int *)(*(int *)(param_4 + 0x24) + 0x44);

  iVar2 = *(int *)(*(int *)(param_5 + 0x14) + 0x1c);

  FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_30[*(short *)(iVar3 + 4) * 3],0);

  FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_30[*(short *)(iVar3 + 4) * 3 + 1],0);

  FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_30[*(short *)(iVar3 + 4) * 3 + 2],0);

  sprintf((char *)auStack_10,&DAT_007cd954,*(short *)(iVar2 + 0xe));
  iVar3 = (int)param_1 + 0x8b;
  iVar2 = (int)param_2 + 0xc;
  FUN_0040eb50_i(iVar3,iVar2,0.0f,param_3,1,auStack_10,1);
  return;

}

// FUN_003F7890


asm void FUN_003f7890(int param_1,int param_2,u8 param_3,int param_4,int param_5,int param_6)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x3c08006b
  .word 0x2508eff0
  .word 0x27a60070
  .word 0x24050003
  .word 0x85040000
  .word 0x85030002
  .word 0x25080004
  .word 0x24a5ffff
  .word 0xa4c40000
  .word 0xa4c30002
  .word 0x24c60004
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x8d230014
  .word 0x8c70001c
  .word 0x24030001
  .word 0x10e30033
  .word 0x00000000
  .word 0x10e00003
  .word 0x00000000
  .word 0x10000052
  .word 0x00000000
  .word 0x00071040
  .word 0x00471021
  .word 0x0002a040
  .word 0x44806000
  .word 0x322600ff
  .word 0x029d1021
  .word 0x84470070
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x029d1021
  .word 0x84470072
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x029d1021
  .word 0x84470074
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8606000e
  .word 0x27a40060
  .word 0x2785ac64
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26640095
  .word 0x26450099
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070003
  .word 0x27a80060
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x00071040
  .word 0x00471021
  .word 0x0002a040
  .word 0x44806000
  .word 0x322600ff
  .word 0x029d1021
  .word 0x84470070
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x029d1021
  .word 0x84470074
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8606000e
  .word 0x27a40060
  .word 0x2785ac64
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26640223
  .word 0x264500a2
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070003
  .word 0x27a80060
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F7A80


asm void FUN_003f7a80(int param_1,int param_2,u32 param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x8d020014
  .word 0x8c50001c
  .word 0x8ce20024
  .word 0x8c420044
  .word 0x84430006
  .word 0x2402ffff
  .word 0x14620010
  .word 0x00000000
  .word 0x8e020008
  .word 0x30421000
  .word 0x1040000c
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x860a0006
  .word 0x24070001
  .word 0x24080005
  .word 0x24090002
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000004e
  .word 0x00000000
  .word 0x8e020008
  .word 0x30421000
  .word 0x1040003f
  .word 0x00000000
  .word 0x86040004
  .word 0x0c05c57c
  .word 0x00000000
  .word 0x304300ff
  .word 0x10600019
  .word 0x00000000
  .word 0x240200ff
  .word 0x10620003
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x96020004
  .word 0x0040202d
  .word 0x9202000d
  .word 0x00021c00
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x00825025
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070001
  .word 0x24080005
  .word 0x00e0482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x96020004
  .word 0x0040502d
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070001
  .word 0x24080005
  .word 0x00e0482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x96020004
  .word 0x0040202d
  .word 0x00031c00
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x00825025
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070001
  .word 0x24080005
  .word 0x00e0482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x860a0004
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070001
  .word 0x24080005
  .word 0x0000482d
  .word 0x0c0f1f88
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

// W417 probe negative: reversing the packed uVar2/byte expression operands raised nd74 -> 75 (object 232/window240); reverted.
// W417 probe negative: explicit uVar3 temporary for packed-load order raised nd74 -> 86 (object 232/window240); reverted.
// FUN_003F7C60
asm void FUN_003f7c60(u32 param_1,u32 param_2,u32 param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8d020014
  .word 0x8c48001c
  .word 0x8ce20024
  .word 0x8c420044
  .word 0x84430006
  .word 0x2402ffff
  .word 0x14620010
  .word 0x00000000
  .word 0x8d020008
  .word 0x30421000
  .word 0x1040000c
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x850a0006
  .word 0x24070001
  .word 0x24080005
  .word 0x24090002
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x8d020008
  .word 0x30421000
  .word 0x10400012
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x95020004
  .word 0x0040382d
  .word 0x9102000d
  .word 0x00021c00
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x00e25025
  .word 0x24070001
  .word 0x24080005
  .word 0x00e0482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x850a0004
  .word 0x24070001
  .word 0x24080005
  .word 0x0000482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// W414: swapping the iVar3/uVar4 declaration order drops nd27 -> nd11 (obj644/window656);
// the remaining rows are register-coloring residuals.
// FUN_003F7D50


void FUN_003f7d50(int param_1,int param_2,u32 param_3,int param_4,

                 int param_5)



{

  short sVar1;

  int iVar2;

  u32 uVar4;

  int iVar3;

  int iVar6;

  int iVar5;
  int cond2;
  int cond1;
  int cond3;
  int isLess;

  

  iVar5 = *(int *)(param_4 + 0x24);

  iVar2 = *(int *)(iVar5 + 0x44);

  uVar4 = 0;
  iVar3 = 0;

  sVar1 = *(short *)(iVar5 + 4);

  iVar6 = *(int *)(*(int *)(iVar5 + 0x2c) + 0x14);
  iVar5 = *(int *)(param_5 + 0x14);
  iVar5 = *(volatile int *)(iVar5 + 0xc) -
          *(volatile int *)(iVar6 + 0xc);
  isLess = sVar1 < iVar5;

  if (isLess == 0) {
    iVar3 = sVar1 - iVar5;
    cond3 = iVar3 < 5;
    if (cond3 == 0) {
      iVar3 = 5;
    }
  }

  iVar6 = param_1 - (0x1e - (iVar3 * 0x1e) / 5);

  iVar5 = (iVar3 * 0xff) / 5;

  cond1 = sVar1 < 4;
  if (cond1 == 0) {

    iVar3 = sVar1 + -4;

    cond2 = iVar3 < 5;
    if (cond2 == 0) {
      iVar3 = 5;
    }

    uVar4 = (iVar3 * 0xff) / 5;

  }

  if (*(int *)(param_4 + 0xc) == param_5) {

    FUN_0040e3c0_f32(0.0f,param_1,param_2,uVar4 & 0xff,0x23,0);

    sVar1 = *(short *)(iVar2 + 6);

    if ((sVar1 == -2) || (sVar1 == -3)) {
      FUN_003f55b0(param_1,param_2,param_3,param_4,param_5,3);
    }
    else if (sVar1 == -5) {
      FUN_003f5830(param_1,param_2,param_3,param_4,param_5,3);
    }
    else {
      FUN_003f55b0(iVar6,param_2,iVar5,param_4,param_5,1);
    }
  } else {

    sVar1 = *(short *)(iVar2 + 6);

    if ((sVar1 == -2) || (sVar1 == -3)) {
      FUN_003f55b0(param_1,param_2,param_3,param_4,param_5,2);
    }
    else if (sVar1 == -5) {
      FUN_003f5830(param_1,param_2,param_3,param_4,param_5,2);
    }
    else {
      FUN_003f55b0(iVar6,param_2,iVar5,param_4,param_5,0);
    }
  }

  return;

}

// Filled in from retail disassembly: sibling FUN_003f7fe0's pattern (3/3/1
// true-branch, 2/2/0 false-branch constants to FUN_003f55b0/FUN_003f5830)
// applies here too, except the "else" sub-case in each branch substitutes
// iVar6 (a computed draw-x offset) and iVar5 (a computed fade alpha) for
// param_1/param_3 - a background/unselected variant of the same draw call.
// FUN_003F7FE0


void FUN_003f7fe0(int param_1,int param_2,u32 param_3,int param_4,int param_5)



{

  short sVar1;

  int iVar2;

  

  iVar2 = *(int *)(*(int *)(param_4 + 0x24) + 0x44);

  if (*(int *)(param_4 + 0xc) == param_5) {

    FUN_0040e3c0_u32(0,param_1,param_2,param_3 & 0xff,0x23,0);

    sVar1 = *(short *)(iVar2 + 6);

    if ((sVar1 == -2) || (sVar1 == -3)) {

      FUN_003f55b0_i(param_1,param_2,param_3,param_4,param_5,3);

    }

    else if (sVar1 == -5) {

      FUN_003f5830_i(param_1,param_2,param_3,param_4,param_5,3);

    }

    else {

      FUN_003f55b0_i(param_1,param_2,param_3,param_4,param_5,1);

    }

  }

  else {

    sVar1 = *(short *)(iVar2 + 6);

    if ((sVar1 == -2) || (sVar1 == -3)) {

      FUN_003f55b0_i(param_1,param_2,param_3,param_4,param_5,2);

    }

    else if (sVar1 == -5) {

      FUN_003f5830_i(param_1,param_2,param_3,param_4,param_5,2);

    }

    else {

      FUN_003f55b0_i(param_1,param_2,param_3,param_4,param_5,0);

    }

  }

  return;

}

// Address-mode probe: DAT_006aeee0 absolute array alias improved nd716 -> 439; object 1048/1056 -> 1052/1056.
// FUN_003F8180


void FUN_003f8180(int param_1,int param_2,u32 param_3,int param_4,int param_5

                 )

{

  s16 uVar1;

  s16 uVar2;

  short sVar3;

  u32 *puVar4;

  u32 *puVar5;

  s16 *puVar9;

  s16 *puVar8;

  int iVar7;

  s16 auStack_20 [16];

  s16 auStack_40 [16];

  

  puVar4 = *(u32 **)(*(int *)(param_4 + 0x24) + 0x44);

  if (*(int *)(param_4 + 0xc) == param_5) {

    puVar9 = (s16 *)DAT_006aeee0_abs;

    puVar8 = auStack_20;

    iVar7 = 6;

    do {

      uVar1 = *puVar9;

      uVar2 = puVar9[1];

      puVar9 = puVar9 + 2;

      iVar7 = iVar7 + -1;

      *puVar8 = uVar1;

      puVar8[1] = uVar2;

      puVar8 = puVar8 + 2;

    } while (0 < iVar7);

    puVar5 = *(u32 **)(*(int *)(param_5 + 0x14) + 0x1c);

    if ((*puVar5 & 2) != 0) {

      FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_20[(short)puVar4[1] * 4],0);

      if ((*puVar5 & 8) != 0) {

        FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_20[(short)puVar4[1] * 4 + 2],0);

      }

      else {

        if ((*puVar5 & 4) != 0) {

          FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_20[(short)puVar4[1] * 4 + 1],0);

        }

      }

      FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_20[(short)puVar4[1] * 4 + 3],0);

    }

    if ((*puVar4 & 1) == 0) {

      FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,0x23,0);

    }

    sVar3 = *(short *)((int)puVar4 + 6);

    if ((sVar3 == -2) || (sVar3 == -3)) {
      FUN_003f55b0(param_1,param_2,param_3,param_4,param_5,3);
    }
    else if (sVar3 == -5) {
      FUN_003f5830(param_1,param_2,param_3,param_4,param_5,3);
    }
    else {
      FUN_003f55b0(param_1,param_2,param_3,param_4,param_5,1);
    }

  }

  else {

    puVar9 = (s16 *)DAT_006aeee0_abs;

    puVar8 = auStack_40;

    iVar7 = 6;

    do {

      uVar1 = *puVar9;

      uVar2 = puVar9[1];

      puVar9 = puVar9 + 2;

      iVar7 = iVar7 + -1;

      *puVar8 = uVar1;

      puVar8[1] = uVar2;

      puVar8 = puVar8 + 2;

    } while (0 < iVar7);

    puVar5 = *(u32 **)(*(int *)(param_5 + 0x14) + 0x1c);

    if ((*puVar5 & 2) != 0) {

      FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_40[(short)puVar4[1] * 4],0);

      if ((*puVar5 & 8) != 0) {

        FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_40[(short)puVar4[1] * 4 + 2],0);

      }

      else {

        if ((*puVar5 & 4) != 0) {

          FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_40[(short)puVar4[1] * 4 + 1],0);

        }

      }

      FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,auStack_40[(short)puVar4[1] * 4 + 3],0);

    }

    sVar3 = *(short *)((int)puVar4 + 6);

    if ((sVar3 == -2) || (sVar3 == -3)) {
      FUN_003f55b0(param_1,param_2,param_3,param_4,param_5,2);
    }
    else if (sVar3 == -5) {
      FUN_003f5830(param_1,param_2,param_3,param_4,param_5,2);
    }
    else {
      FUN_003f55b0(param_1,param_2,param_3,param_4,param_5,0);
    }

  }

  return;

}


// Filled in from retail disassembly, same dispatch family as the sibling
// functions above (3/3/1 true-branch, 2/2/0 false-branch constants to
// func_003f55b0/func_003f5830). Residual: a register-bank floor (obj
// 1088B vs 1056B window); logic and constants verified against retail.


// FUN_003F85A0


void FUN_003f85a0(int param_1,int param_2,u32 param_3,int param_4,

                 int param_5)



{

  int iVar1;

  int lVar2;

  

  lVar2 = FUN_003c6e10(param_4);

  switch (lVar2) {
  case 0xc:
    FUN_003f7d50_i(param_1,param_2,param_3,param_4,param_5);
    break;
  case 0x14:
    iVar1 = *(int *)(*(int *)(param_4 + 0x24) + 0x44);
    FUN_003f7fe0_i(param_1 + *(short *)(iVar1 + 0x28),
                   param_2 + *(short *)(iVar1 + 0x2a),param_3,param_4,param_5);
    break;
  case 1:
    FUN_003f8180(param_1,param_2,param_3,param_4,param_5);
    break;
  }

  return;

}

// Retyped params to match retail's dispatch to func_003f7d50/7fe0/8180
// (int coords/index, not u64); case 0xc/1 now byte-identical to retail.
// Residual: case 0x14's two adds route through a scratch reg instead of
// landing directly in $a0/$a1 - compiler scheduling floor.
// W418 switch [0xc,0x14,1] improved nd 596 -> 543 but grew object 864 -> 872 (window 864); rejected.
// Removing its final break and adding a case return left nd/object unchanged at 543/872.

// FUN_003F86A0


asm void FUN_003f86a0(int param_1,int param_2,u32 param_3,int param_4,int param_5
                 )
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
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0100882d
  .word 0x8ce20024
  .word 0x8c560044
  .word 0x0240202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x1043004b
  .word 0x00000000
  .word 0x24030014
  .word 0x10430025
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x100000ae
  .word 0x00000000
  .word 0x8e42000c
  .word 0x14510013
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x24070025
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000099
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000008f
  .word 0x00000000
  .word 0x86c20028
  .word 0x02a2a821
  .word 0x86c2002a
  .word 0x0282a021
  .word 0x8e42000c
  .word 0x14510013
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x24070025
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000006c
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6eee0
  .word 0x27a50090
  .word 0x24040006
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e420024
  .word 0x8c500044
  .word 0x8e220014
  .word 0x8c57001c
  .word 0x8ee20000
  .word 0x30420002
  .word 0x10400036
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x86020004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470090
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8ee30000
  .word 0x30620008
  .word 0x1040000e
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x86020004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470094
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x30620004
  .word 0x1040000c
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x86020004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470092
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x86020004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470096
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8e42000c
  .word 0x14510017
  .word 0x00000000
  .word 0x8ec20000
  .word 0x30420001
  .word 0x14400009
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x24070025
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x0000482d
  .word 0x0c0fd56c
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
}

// W418 rejected switch [0xc,0x14,1]: nd 733 -> 773, object 1040 -> 1048 (window 1040).

// FUN_003F8A00
#pragma push
#pragma opt_lifetimes on


asm void FUN_003f8a00(int param_1,int param_2,u32 param_3,int param_4,int param_5
                 )
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
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x0000b82d
  .word 0x0000a82d
  .word 0x8ce20024
  .word 0x8c560044
  .word 0x0220202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x10430075
  .word 0x00000000
  .word 0x24030014
  .word 0x1043004f
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x100000d8
  .word 0x00000000
  .word 0x8e230024
  .word 0x84620004
  .word 0x8c63002c
  .word 0x8c650014
  .word 0x8e030014
  .word 0x8c64000c
  .word 0x8ca3000c
  .word 0x00832023
  .word 0x0044182a
  .word 0x14600006
  .word 0x00000000
  .word 0x0044a823
  .word 0x2aa30005
  .word 0x14600002
  .word 0x00000000
  .word 0x24150005
  .word 0x00151900
  .word 0x00751823
  .word 0x00031840
  .word 0x24050005
  .word 0x0065001a
  .word 0x00002012
  .word 0x2403001e
  .word 0x00641823
  .word 0x02839023
  .word 0x00151a00
  .word 0x00751823
  .word 0x7065001a
  .word 0x7000a812
  .word 0x28430004
  .word 0x1460000b
  .word 0x00000000
  .word 0x2443fffc
  .word 0x28620005
  .word 0x14400002
  .word 0x00000000
  .word 0x00a0182d
  .word 0x00031200
  .word 0x00431823
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000b812
  .word 0x8e22000c
  .word 0x14500013
  .word 0x00000000
  .word 0x44806000
  .word 0x32e600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070023
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x02a0302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000099
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x02a0302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000008f
  .word 0x00000000
  .word 0x86c20028
  .word 0x0282a021
  .word 0x86c2002a
  .word 0x02629821
  .word 0x8e22000c
  .word 0x14500013
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070023
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000006c
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6eee0
  .word 0x27a50090
  .word 0x24040006
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c550044
  .word 0x8e020014
  .word 0x8c57001c
  .word 0x8ee20000
  .word 0x30420002
  .word 0x10400036
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470090
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8ee30000
  .word 0x30620008
  .word 0x1040000e
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470094
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x30620004
  .word 0x1040000c
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470092
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470096
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8e22000c
  .word 0x14500017
  .word 0x00000000
  .word 0x8ec20000
  .word 0x30420001
  .word 0x14400009
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070023
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0000482d
  .word 0x0c0fd56c
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop

// W418 rejected switch [0xc,0x14,1]: nd 733 -> 773, object 1040 -> 1048 (window 1040).

// FUN_003F8E10
#pragma push
#pragma opt_lifetimes on


asm void FUN_003f8e10(int param_1,int param_2,u32 param_3,int param_4,int param_5
                 )
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
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x0000b82d
  .word 0x0000a82d
  .word 0x8ce20024
  .word 0x8c560044
  .word 0x0220202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x10430075
  .word 0x00000000
  .word 0x24030014
  .word 0x1043004f
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x100000d8
  .word 0x00000000
  .word 0x8e230024
  .word 0x84620004
  .word 0x8c63002c
  .word 0x8c650014
  .word 0x8e030014
  .word 0x8c64000c
  .word 0x8ca3000c
  .word 0x00832023
  .word 0x0044182a
  .word 0x14600006
  .word 0x00000000
  .word 0x0044a823
  .word 0x2aa30005
  .word 0x14600002
  .word 0x00000000
  .word 0x24150005
  .word 0x00151900
  .word 0x00751823
  .word 0x00031840
  .word 0x24050005
  .word 0x0065001a
  .word 0x00002012
  .word 0x2403001e
  .word 0x00641823
  .word 0x02839023
  .word 0x00151a00
  .word 0x00751823
  .word 0x7065001a
  .word 0x7000a812
  .word 0x28430004
  .word 0x1460000b
  .word 0x00000000
  .word 0x2443fffc
  .word 0x28620005
  .word 0x14400002
  .word 0x00000000
  .word 0x00a0182d
  .word 0x00031200
  .word 0x00431823
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000b812
  .word 0x8e22000c
  .word 0x14500013
  .word 0x00000000
  .word 0x44806000
  .word 0x32e600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070027
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x02a0302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000099
  .word 0x00000000
  .word 0x0240202d
  .word 0x0260282d
  .word 0x02a0302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000008f
  .word 0x00000000
  .word 0x86c20028
  .word 0x0282a021
  .word 0x86c2002a
  .word 0x02629821
  .word 0x8e22000c
  .word 0x14500013
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070027
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000076
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000006c
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6eee0
  .word 0x27a50090
  .word 0x24040006
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c550044
  .word 0x8e020014
  .word 0x8c57001c
  .word 0x8ee20000
  .word 0x30420002
  .word 0x10400036
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470090
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8ee30000
  .word 0x30620008
  .word 0x1040000e
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470094
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x30620004
  .word 0x1040000c
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470092
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86a20004
  .word 0x000210c0
  .word 0x005d1021
  .word 0x84470096
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8e22000c
  .word 0x14500017
  .word 0x00000000
  .word 0x8ec20000
  .word 0x30420001
  .word 0x14400009
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070027
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0000482d
  .word 0x0c0fd56c
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
}
#pragma pop

// FUN_003F9220


asm void FUN_003f9220(int param_1,int param_2,u32 param_3,int param_4,int param_5)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0100882d
  .word 0x0000b82d
  .word 0x0000802d
  .word 0x8ce20024
  .word 0x8c560044
  .word 0x0240202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x10430075
  .word 0x00000000
  .word 0x24030014
  .word 0x1043004f
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x1000008e
  .word 0x00000000
  .word 0x8e430024
  .word 0x84620004
  .word 0x8c63002c
  .word 0x8c650014
  .word 0x8e230014
  .word 0x8c64000c
  .word 0x8ca3000c
  .word 0x00832023
  .word 0x0044182a
  .word 0x14600006
  .word 0x00000000
  .word 0x00448023
  .word 0x2a030005
  .word 0x14600002
  .word 0x00000000
  .word 0x24100005
  .word 0x00101900
  .word 0x00701823
  .word 0x00031840
  .word 0x24050005
  .word 0x0065001a
  .word 0x00002012
  .word 0x2403001e
  .word 0x00641823
  .word 0x02a39823
  .word 0x00101a00
  .word 0x00701823
  .word 0x7065001a
  .word 0x70008012
  .word 0x28430004
  .word 0x1460000b
  .word 0x00000000
  .word 0x2443fffc
  .word 0x28620005
  .word 0x14400002
  .word 0x00000000
  .word 0x00a0182d
  .word 0x00031200
  .word 0x00431823
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000b812
  .word 0x8e42000c
  .word 0x14510013
  .word 0x00000000
  .word 0x44806000
  .word 0x32e600ff
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x24070017
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0200302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000004f
  .word 0x00000000
  .word 0x0260202d
  .word 0x0280282d
  .word 0x0200302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000045
  .word 0x00000000
  .word 0x86c20028
  .word 0x02a2a821
  .word 0x86c2002a
  .word 0x0282a021
  .word 0x8e42000c
  .word 0x14510013
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x24070017
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x0000482d
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000022
  .word 0x00000000
  .word 0x8e42000c
  .word 0x14510017
  .word 0x00000000
  .word 0x8ec20000
  .word 0x30420001
  .word 0x14400009
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x24070017
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x24090001
  .word 0x0c0fd56c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0260302d
  .word 0x0240382d
  .word 0x0220402d
  .word 0x0000482d
  .word 0x0c0fd56c
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
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F9510


asm void FUN_003f9510(int param_1,int param_2,u32 param_3,int param_4,int param_5
                 )
{
  .set noreorder
  .word 0x27bdff30
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
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x00c0b82d
  .word 0x00e0982d
  .word 0x0100902d
  .word 0xafa000b0
  .word 0x0000b02d
  .word 0x0000882d
  .word 0x3c02006b
  .word 0xc442f000
  .word 0x3c02006b
  .word 0xc441f004
  .word 0x3c02006b
  .word 0xc440f008
  .word 0xe7a200c0
  .word 0xe7a100c4
  .word 0xe7a000c8
  .word 0x8ce20024
  .word 0x8c420044
  .word 0x7fa200a0
  .word 0x84430006
  .word 0x2402fffb
  .word 0x10620018
  .word 0x00000000
  .word 0x2402fffc
  .word 0x1062000f
  .word 0x00000000
  .word 0x2402fffd
  .word 0x10620006
  .word 0x00000000
  .word 0x2402fffe
  .word 0x10620003
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x24110002
  .word 0x241e0001
  .word 0x3c10003f
  .word 0x261055b0
  .word 0x10000010
  .word 0x00000000
  .word 0x24110006
  .word 0x241e0001
  .word 0x3c10003f
  .word 0x261055b0
  .word 0x1000000a
  .word 0x00000000
  .word 0x24110002
  .word 0x0220f02d
  .word 0x3c10003f
  .word 0x26105830
  .word 0x10000004
  .word 0x00000000
  .word 0x0000f02d
  .word 0x3c10003f
  .word 0x261055b0
  .word 0x0260202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24030001
  .word 0x1043007d
  .word 0x00000000
  .word 0x24030014
  .word 0x10430053
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000099
  .word 0x00000000
  .word 0x8e630024
  .word 0x84620004
  .word 0x8c63002c
  .word 0x8c650014
  .word 0x8e430014
  .word 0x8c64000c
  .word 0x8ca3000c
  .word 0x00832023
  .word 0x0044182a
  .word 0x14600006
  .word 0x00000000
  .word 0x0044b023
  .word 0x2ac30005
  .word 0x14600002
  .word 0x00000000
  .word 0x24160005
  .word 0x00161900
  .word 0x00761823
  .word 0x00031840
  .word 0x24050005
  .word 0x0065001a
  .word 0x00002012
  .word 0x2403001e
  .word 0x00641823
  .word 0x02a3b823
  .word 0x00161a00
  .word 0x00761823
  .word 0x7065001a
  .word 0x7000b012
  .word 0x28430004
  .word 0x1460000c
  .word 0x00000000
  .word 0x2443fffc
  .word 0x28620005
  .word 0x14400002
  .word 0x00000000
  .word 0x00a0182d
  .word 0x00031200
  .word 0x00431823
  .word 0x24020005
  .word 0x0062001a
  .word 0x00001012
  .word 0xafa200b0
  .word 0x8e62000c
  .word 0x14520016
  .word 0x00000000
  .word 0x44806000
  .word 0x93a200b0
  .word 0x0040302d
  .word 0x001e1080
  .word 0x005d1021
  .word 0x8c4700c0
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x36290001
  .word 0x02e0202d
  .word 0x0280282d
  .word 0x02c0302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0200f809
  .word 0x00000000
  .word 0x10000056
  .word 0x00000000
  .word 0x02e0202d
  .word 0x0280282d
  .word 0x02c0302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0220482d
  .word 0x0200f809
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x84420028
  .word 0x02a2a821
  .word 0x7ba200a0
  .word 0x8442002a
  .word 0x0282a021
  .word 0x8e62000c
  .word 0x14520015
  .word 0x00000000
  .word 0x44806000
  .word 0x32e600ff
  .word 0x001e1080
  .word 0x005d1021
  .word 0x8c4700c0
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x36290001
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0200f809
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0220482d
  .word 0x0200f809
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8e62000c
  .word 0x1452001a
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x8c420000
  .word 0x30420001
  .word 0x1440000b
  .word 0x00000000
  .word 0x44806000
  .word 0x32e600ff
  .word 0x001e1080
  .word 0x005d1021
  .word 0x8c4700c0
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x36290001
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0200f809
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0280282d
  .word 0x02e0302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0220482d
  .word 0x0200f809
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
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003F98F0


u32 FUN_003f98f0(u16 param_1)
{
  u16 *range;
  u32 i;
  s32 id;
  u16 hi;

  range = DAT_006acca0_abs;
  i = 0;
  id = param_1;
  for (; i < 16; range += 2, i++) {
    if ((range[0] == 0) && (range[1] != 0)) {
      K_Assert((const char *)DAT_006aede8,0xe12);
    }
    hi = range[1];
    if (hi != 0) {
      if (!(id < range[0])) {
        if (id <= (hi & 0xffff)) {
          return 0;
        }
      }
    }
    else if (id == range[0]) {
      return 0;
    }
  }
  return 1;
}

// FUN_003F99D0


u64 FUN_003f99d0(u32 param_1,u32 param_2)



{

  u32 *puVar1;

  u32 uVar2;

  short sVar3;

  int iVar4;

  u32 uVar5;

  int lVar6;

  int uVar7;

  u8 auStack_20 [0x20];

  

  for (uVar7 = 0; uVar7 < 300; uVar7 = (u32)((int)uVar7 + 1)) {


    uVar5 = func_0016f720(1,uVar7);
    if ((((param_2 & uVar5) != 0) && (lVar6 = FUN_003f1dc0_u32(1,auStack_20,uVar7), lVar6 != 0)) &&

       (lVar6 = FUN_003f98f0(uVar7 & 0xffff), lVar6 != 0)) {

      iVar4 = FUN_003c5a40(param_1,*(u16 *)((int)param_1 + 0x10) + 1,0x20,0);

      puVar1 = *(u32 **)(*(int *)(iVar4 + 0x14) + 0x1c);

      memcpy(puVar1 + 1,auStack_20,0x1c);

      if (((*(u32 *)(auStack_20 + 4) & 0x1000) != 0) &&
         (sVar3 = datGetEquipmentIdx(1,(short)((s32)(*(u32 *)(auStack_20 + 4) & 0xf00) >> 8)),
          uVar7 == sVar3)) {

        *puVar1 = *puVar1 | 0x10;
        *puVar1 = *puVar1 | 0x40;

      }

      uVar2 = puVar1[4];

      puVar1[4] = (int)uVar2 >> 2;

      if ((int)uVar2 >> 2 < 1) {

        puVar1[4] = 1;

      }

    }

  }

  return 0;

}

// W414 probes: lVar5 as s16 measured nd152, iVar6 as s16 measured nd134 with obj404
// over the 400-byte window, early iVar6 zero-init measured nd26, and direct-short use
// measured nd166; baseline nd7 is retained.
// W419 probe negative: deriving lVar5 directly from *(short *)(iVar2 + 4) worsened nd7 -> 158 and object 388 -> 384 (window 400); retained the local copy.
// W419 exhaustive permutation probe: all 120 orders of sVar1/sVar3/uVar4/lVar5/iVar6 remained nd7 (obj388/window400); no declaration-order gain.
// FUN_003F9B20


asm u64 FUN_003f9b20(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x8ca20014
  .word 0x8c54001c
  .word 0x8e820008
  .word 0x30424000
  .word 0x10400035
  .word 0x00000000
  .word 0x86930004
  .word 0x2402ffff
  .word 0xafa2007c
  .word 0x0000802d
  .word 0x0260202d
  .word 0x27a5007c
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa3007c
  .word 0x24020004
  .word 0x10620021
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0000a82d
  .word 0x00139c3c
  .word 0x00139c3f
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040001
  .word 0x02a0282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x16620002
  .word 0x00000000
  .word 0x26100001
  .word 0x26b50001
  .word 0x2aa2012c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0260282d
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3050ffff
  .word 0xa690000e
  .word 0x1000000c
  .word 0x00000000
  .word 0x86850006
  .word 0x24040001
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x10400005
  .word 0x00000000
  .word 0x24020001
  .word 0xa682000e
  .word 0x10000002
  .word 0x00000000
  .word 0xa680000e
  .word 0x8682000e
  .word 0x14400005
  .word 0x00000000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c0f17e8
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// Window was wrongly 784B (should be 400B) - see FUN_003f9cb0 split below.
// Full logic rewritten from retail disasm: if/else order, switch-based
// dispatch, and int/long typing all fixed. Residual: register-bank
// choice for param_1/param_2 (s2/s1 in retail vs s5/s4 here).
// Exact remaining words are the +164/+168/+172 ordering of the $s3 sign extension
// and the independent initialization of $s5; their values and uses are identical.
// FUN_003F9CB0
s32 FUN_003f9cb0(u32 *param_1, u32 *param_2)
{
  u32 entryA;
  u32 entryB;
  s32 fieldA;
  s32 fieldB;
  s32 result;
  s32 flagA;
  s32 flagB;
  s32 catA;
  s32 catB;

  entryA = *(u32 *)(*param_1 + 0x14);
  entryA = *(u32 *)(entryA + 0x1c);
  entryB = *(u32 *)(*param_2 + 0x14);
  entryB = *(u32 *)(entryB + 0x1c);
  flagB = (*(u32 *)entryB & 0x40) == 0;
  flagA = (*(u32 *)entryA & 0x40) == 0;
  result = flagB - flagA;
  if (result != 0) {
    goto ret;
  }
  fieldB = *(u32 *)(entryB + 8);
  fieldA = *(u32 *)(entryA + 8);
  result = (fieldA & 0xff) - (fieldB & 0xff);
  if (result != 0) {
    goto ret;
  }
  switch ((fieldB & 0xf00) >> 8) {
  case 0:
    catB = *(short *)(entryB + 0x14);
    break;
  case 1:
    catB = *(short *)(entryB + 0x18);
    break;
  case 2:
    catB = *(short *)(entryB + 0x1a);
    break;
  case 4:
    catB = 0x98967f - *(int *)(entryB + 0x10);
    break;
  default:
    catB = 0;
    break;
  }
  switch ((fieldA & 0xf00) >> 8) {
  case 0:
    catA = *(short *)(entryA + 0x14);
    break;
  case 1:
    catA = *(short *)(entryA + 0x18);
    break;
  case 2:
    catA = *(short *)(entryA + 0x1a);
    break;
  case 4:
    catA = 0x98967f - *(int *)(entryA + 0x10);
    break;
  default:
    catA = 0;
    break;
  }
  result = catB - catA;
  if (result != 0) {
    goto ret;
  }
  result = *(short *)(entryB + 4) - *(short *)(entryA + 4);
ret:
  return result;
}

// Hidden sibling: only referenced via FUN_003c7000(uVar7,0x3f9cb0,0) as a
// raw callback pointer literal in FUN_003f9e30 below, never via jal, so
// Ghidra's boundary scan absorbed it into FUN_003f9b20's window (784B
// instead of the true 400B). Splitting it out here as its own function
// per the p3-window-nullsub-discovery Case C procedure.
// FUN_003F9E30


u32 FUN_003f9e30(int param_1)



{

  u32 uVar1;

  u32 uVar2;

  u8 *puVar3;

  u8 *puVar4;

  int iVar5;

  int iVar6;

  u32 uVar7;
  u32 *puVar8;


  u32 *puVar11;

  u8 **ppuVar12;

  u32 *puVar10;

  int iVar9;

  u32 uVar13;

  u32 auStack_40 [16];

  u32 auStack_60 [8];

  u32 auStack_80 [8];

  u32 auStack_a0 [8];

  u8 auStack_c0 [32];

  

  puVar11 = (u32 *)DAT_006af010_abs;

  puVar10 = auStack_40;

  iVar9 = 8;

  do {

    uVar1 = *puVar11;

    uVar2 = puVar11[1];

    puVar11 = puVar11 + 2;

    iVar9 = iVar9 + -1;

    *puVar10 = uVar1;

    puVar10[1] = uVar2;

    puVar10 = puVar10 + 2;

  } while (0 < iVar9);

  uVar7 = FUN_003c58f0(0,0x58,5,0x1a);

  iVar5 = (int)uVar7;

  iVar9 = *(int *)(*(int *)(iVar5 + 0x24) + 0x44);

  *(short *)(iVar9 + 4) = (short)param_1;

  *(short *)(iVar9 + 6) = -1;
  FUN_003f99d0(uVar7,0x7ffff);


  uVar13 = 4000;
  goto item_check;
item_body:
  if ((int)(uVar13 - 4000) >= 300) {
    goto items_done;
  }
  if ((FUN_003f2240_u32((int)auStack_c0,uVar13) != 0) &&
      (FUN_003f98f0(uVar13 & 0xffff) != 0)) {

    iVar9 = FUN_003c5a40(uVar7,*(u16 *)(iVar5 + 0x10) + 1,0x20,0);

    puVar8 = *(u32 **)(*(int *)(iVar9 + 0x14) + 0x1c);

    memcpy(puVar8 + 1,auStack_c0,0x1c);

    iVar6 = (int)puVar8[4] >> 2;

    puVar8[4] = iVar6;

    if (iVar6 < 1) {

      puVar8[4] = 1;

    }

  }
  uVar13 = uVar13 + 1;
item_check:
  if ((int)uVar13 < 0x1080) {
    goto item_body;
  }
items_done:

  FUN_003c7000(uVar7,FUN_003f9cb0,0);

  FUN_003c6ee0(uVar7);

  ppuVar12 = (u8 **)PTR_FUN_006af050_abs;

  puVar10 = auStack_60;

  iVar9 = 4;

  do {

    puVar3 = *ppuVar12;

    puVar4 = ppuVar12[1];

    ppuVar12 = ppuVar12 + 2;

    iVar9 = iVar9 + -1;

    *puVar10 = (u32)(puVar3);

    puVar10[1] = (u32)(puVar4);

    puVar10 = puVar10 + 2;

  } while (0 < iVar9);

  ppuVar12 = (u8 **)PTR_FUN_006af070_abs;

  puVar10 = auStack_80;

  iVar9 = 4;

  do {

    puVar3 = *ppuVar12;

    puVar4 = ppuVar12[1];

    ppuVar12 = ppuVar12 + 2;

    iVar9 = iVar9 + -1;

    *puVar10 = (u32)(puVar3);

    puVar10[1] = (u32)(puVar4);

    puVar10 = puVar10 + 2;

  } while (0 < iVar9);

  ppuVar12 = (u8 **)PTR_FUN_006af090_abs;

  puVar10 = auStack_a0;

  iVar9 = 4;

  do {

    puVar3 = *ppuVar12;

    puVar4 = ppuVar12[1];

    ppuVar12 = ppuVar12 + 2;

    iVar9 = iVar9 + -1;

    *puVar10 = (u32)(puVar3);

    puVar10[1] = (u32)(puVar4);

    puVar10 = puVar10 + 2;

  } while (0 < iVar9);

  FUN_003c5e80(uVar7,auStack_60[param_1]);

  FUN_003c5e20(uVar7,auStack_80[param_1]);

  FUN_003c5ee0(uVar7,auStack_a0[param_1]);

  FUN_003c6d40(uVar7,auStack_40[param_1 * 2],auStack_40[param_1 * 2 + 1]);

  *(u16 *)(*(int *)(iVar5 + 0x24) + 6) = 0x14;

  *(u16 *)(*(int *)(iVar5 + 0x24) + 8) = 10;

  return uVar7;

}


#pragma alias fclShopCreateEquipmentItemList FUN_003f9e30
// FUN_003FA0D0


u32 FUN_003fa0d0(u64 param_1)
{
  u32 uVar1;
  u32 lVar2;

  
  uVar1 = FUN_003fa1e0_u32();

  if ((lVar2 = FUN_003c6ce0(param_1), lVar2 != 0) ||
      (lVar2 = FUN_003c6d10(param_1), lVar2 != 0)) {

    func_0010a4e0(0,0,0,0);

  }

  lVar2 = FUN_003c6ca0(param_1);

  if ((lVar2 != 0) || (lVar2 = FUN_003c6cc0(param_1), lVar2 != 0)) {

    func_0010a4e0(0,0,0,5);

  }

  return uVar1;

}

// FUN_003FA190


u64 FUN_003fa190(int param_1)



{

  u32 *puVar1;

  

  puVar1 = *(u32 **)(*(int *)(param_1 + 0x24) + 0x44);

  *puVar1 = *puVar1 | 1;

  return 0;

}

// FUN_003FA1B0


u64 FUN_003fa1b0(int param_1)



{

  u32 *puVar1;

  

  puVar1 = *(u32 **)(*(int *)(param_1 + 0x24) + 0x44);

  *puVar1 = *puVar1 & 0xfffffffe;

  return 0;

}

// FUN_003FA1E0


u8 FUN_003fa1e0(void)
{
  return FUN_003c6270() == 3;
}

// FUN_003FA210


void FUN_003fa210(int param_1)



{

  short sVar1;

  int iVar2;

  int lVar3;

  int iVar4;

  

  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);

  lVar3 = FUN_003c6e10(param_1);

  switch (lVar3) {
  case 0xc:
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    *(u16 *)(iVar2 + 0x28) = 0;
    *(u16 *)(iVar2 + 0x2a) = 0;
    if (sVar1 < 6) {
      *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * 0xff) / 5.0f);
    } else {
      *(u16 *)(iVar2 + 0x34) = 0xff;
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    if (sVar1 < 6) {
      *(short *)(iVar2 + 0x38) = 0xff38;
      *(u16 *)(iVar2 + 0x44) = 0;
    } else {
      iVar4 = sVar1 + -6;
      if (iVar4 < 5) {
        *(short *)(iVar2 + 0x38) = (short)(int)((float)(iVar4 * 0x8c) / 4.0f + -140.0f);
        *(u16 *)(iVar2 + 0x3a) = 0;
        *(u16 *)(iVar2 + 0x44) = 0xff;
      }
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    if (sVar1 < 8) {
      *(u16 *)(iVar2 + 0x54) = 0;
    } else {
      iVar4 = sVar1 + -8;
      if (iVar4 < 6) {
        *(u16 *)(iVar2 + 0x54) = 0xff;
        *(float *)(iVar2 + 0x50) = fGpffff8234 + (fGpffff8230 * (float)iVar4) / 5.0f;
      }
    }
    iVar4 = sVar1 < 0xd;
    if (iVar4) goto done;
    iVar4 = sVar1 + -0xd;
    if (iVar4 >= 5) goto done;
    *(short *)(iVar2 + 0x4a) = (short)(int)((float)(iVar4 * -3) / 4.0f + 3.0f);
    *(float *)(iVar2 + 0x50) = fGpffff823c + (fGpffff8238 * (float)iVar4) / 4.0f;
    break;
  case 0x14:
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    if (sVar1 < 0xb) {
      *(short *)(iVar2 + 0x28) = (short)(int)((float)(sVar1 * -0xa0) / 10.0f);
    } else {
      *(short *)(iVar2 + 0x28) = -160;
    }
    if (sVar1 < 6) {
      *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * -0xff) / 5.0f + 255.0f);
    } else {
      *(u16 *)(iVar2 + 0x34) = 0;
    }
    break;
  case 1:
  default:
    break;
  }

done:
  return;

}

// FUN_003FA520


void FUN_003fa520(int param_1)



{

  short sVar1;

  int iVar2;

  int lVar3;

  int iVar4;

  

  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);

  lVar3 = FUN_003c6e10();

  if (lVar3 != 1) {

    switch (lVar3) {

    case 0xc:

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      *(u16 *)(iVar2 + 0x28) = 0;

      *(u16 *)(iVar2 + 0x2a) = 0;

      if (sVar1 < 6) {

        *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * 0xff) / 5.0f);

      }

      else {

        *(u16 *)(iVar2 + 0x34) = 0xff;

      }

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      if (sVar1 < 5) {

        *(short *)(iVar2 + 0x38) = (short)(int)((float)(sVar1 * 0xa0) / 4.0f + -160.0f);

        *(u16 *)(iVar2 + 0x3a) = 0;

        *(u16 *)(iVar2 + 0x44) = 0xff;

      }

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      if (sVar1 < 8) {

        *(u16 *)(iVar2 + 0x54) = 0;

      }

      else {

        iVar4 = sVar1 + -8;

        if (iVar4 < 6) {

          *(u16 *)(iVar2 + 0x54) = 0xff;

          *(float *)(iVar2 + 0x50) = fGpffff8234 + (fGpffff8230 * (float)iVar4) / 5.0f;

        }

      }

      iVar4 = sVar1 < 0xd;

      if (iVar4) goto done;

      iVar4 = sVar1 + -0xd;

      if (iVar4 >= 5) goto done;

      *(short *)(iVar2 + 0x4a) = (short)(int)((float)(iVar4 * -3) / 4.0f + 3.0f);

      *(float *)(iVar2 + 0x50) = fGpffff823c + (fGpffff8238 * (float)iVar4) / 4.0f;

      goto done;

    case 0x14:

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      if (sVar1 < 0xb) {

        *(short *)(iVar2 + 0x28) = (short)(int)((float)(sVar1 * -0xa0) / 10.0f);

      }

      else {

      *(short *)(iVar2 + 0x28) = -0xa0;

      }

      if (sVar1 < 6) {

        *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * -0xff) / 5.0f + 255.0f);

      }

      else {

        *(u16 *)(iVar2 + 0x34) = 0;

      }

    }

  }

done:

  return;

}

// FUN_003FA800


void FUN_003fa800(int param_1)



{

  short sVar1;

  int iVar2;

  int lVar3;

  int iVar4;

  

  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);

  lVar3 = FUN_003c6e10();

  if (lVar3 != 1) {

    switch (lVar3) {

    case 0xc:

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      *(u16 *)(iVar2 + 0x28) = 0;

      *(u16 *)(iVar2 + 0x2a) = 0;

      if (sVar1 < 6) {

        *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * 0xff) / 5.0f);

      }

      else {

        *(u16 *)(iVar2 + 0x34) = 0xff;

      }

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      if (sVar1 < 5) {

        *(short *)(iVar2 + 0x38) = (short)(int)((float)(sVar1 * 0xa0) / 4.0f + -160.0f);

        *(u16 *)(iVar2 + 0x3a) = 0;

        *(u16 *)(iVar2 + 0x44) = 0xff;

      }

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      if (sVar1 < 8) {

        *(u16 *)(iVar2 + 0x54) = 0;

      }

      else {

        iVar4 = sVar1 + -8;

        if (iVar4 < 6) {

          *(u16 *)(iVar2 + 0x54) = 0xff;

          *(float *)(iVar2 + 0x50) = fGpffff8234 + (fGpffff8230 * (float)iVar4) / 5.0f;

        }

      }

      iVar4 = sVar1 < 0xd;

      if (iVar4) goto done;

      iVar4 = sVar1 + -0xd;

      if (iVar4 >= 5) goto done;

      *(short *)(iVar2 + 0x4a) = (short)(int)((float)(iVar4 * -3) / 4.0f + 3.0f);

      *(float *)(iVar2 + 0x50) = fGpffff823c + (fGpffff8238 * (float)iVar4) / 4.0f;

      goto done;

    case 0x14:

      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);

      if (sVar1 < 0xb) {

        *(short *)(iVar2 + 0x28) = (short)(int)((float)(sVar1 * -0xa0) / 10.0f);

      }

      else {

        *(short *)(iVar2 + 0x28) = -0xa0;

      }

      if (sVar1 < 6) {

        *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * -0xff) / 5.0f + 255.0f);

      }

      else {

        *(u16 *)(iVar2 + 0x34) = 0;

      }

    }

  }

done:

  return;

}

// FUN_003FAAE0


void FUN_003faae0(int param_1)
{
  short sVar1;
  int iVar2;
  int lVar3;
  int iVar4;

  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);
  lVar3 = FUN_003c6e10();
  if (lVar3 != 1) {
    switch (lVar3) {
    case 0xc:
      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
      *(u16 *)(iVar2 + 0x28) = 0;
      *(u16 *)(iVar2 + 0x2a) = 0;
      if (sVar1 < 6) {
        *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * 0xff) / 5.0f);
      }
      else {
        *(u16 *)(iVar2 + 0x34) = 0xff;
      }
      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
      if (sVar1 < 5) {
        *(short *)(iVar2 + 0x38) = (short)(int)((float)(sVar1 * 0xa0) / 4.0f + -160.0f);
        *(u16 *)(iVar2 + 0x3a) = 0;
        *(u16 *)(iVar2 + 0x44) = 0xff;
      }
      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
      if (sVar1 < 8) {
        *(u16 *)(iVar2 + 0x54) = 0;
      }
      else {
        iVar4 = sVar1 + -8;
        if (iVar4 < 6) {
          *(u16 *)(iVar2 + 0x54) = 0xff;
          *(float *)(iVar2 + 0x50) = fGpffff8234 + (fGpffff8230 * (float)iVar4) / 5.0f;
        }
      }
      iVar4 = sVar1 < 0xd;
      if (iVar4) goto done;
      iVar4 = sVar1 + -0xd;
      if (iVar4 >= 5) goto done;
      *(short *)(iVar2 + 0x4a) = (short)(int)((float)(iVar4 * -3) / 4.0f + 3.0f);
      *(float *)(iVar2 + 0x50) = fGpffff823c + (fGpffff8238 * (float)iVar4) / 4.0f;
      goto done;
    case 0x14:
      sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
      if (sVar1 < 0xb) {
        *(short *)(iVar2 + 0x28) = (short)(int)((float)(sVar1 * -0xa0) / 10.0f);
      }
      else {
        *(short *)(iVar2 + 0x28) = -0xa0;
      }
      if (sVar1 < 6) {
        *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * -0xff) / 5.0f + 255.0f);
      }
      else {
        *(u16 *)(iVar2 + 0x34) = 0;
      }
    }
  }
done:
  return;
}

// FUN_003FADC0


void FUN_003fadc0(int param_1)



{

  short sVar1;

  int iVar2;

  int lVar3;

  int iVar4;

  

  iVar2 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);

  lVar3 = FUN_003c6e10();

  switch (lVar3) {
  case 0xc:
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    *(u16 *)(iVar2 + 0x28) = 0;
    *(u16 *)(iVar2 + 0x2a) = 0;
    if (sVar1 < 6) {
      *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * 0xff) / 5.0f);
    }
    else {
      *(u16 *)(iVar2 + 0x34) = 0xff;
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    if (sVar1 < 6) {
      *(short *)(iVar2 + 0x38) = -200;
      *(u16 *)(iVar2 + 0x44) = 0;
    }
    else {
      iVar4 = sVar1 + -6;
      if (iVar4 < 5) {
        *(short *)(iVar2 + 0x38) = (short)(int)((float)(iVar4 * 0x8c) / 4.0f + -140.0f);
        *(u16 *)(iVar2 + 0x3a) = 0;
        *(u16 *)(iVar2 + 0x44) = 0xff;
      }
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    if (sVar1 < 1) {
      *(u16 *)(iVar2 + 0x54) = 0;
    }
    else {
      iVar4 = sVar1 + -1;
      if (iVar4 < 6) {
        *(u16 *)(iVar2 + 0x54) = 0xff;
        *(float *)(iVar2 + 0x50) = fGpffff8234 + (fGpffff8230 * (float)iVar4) / 5.0f;
      }
    }
    if (!(sVar1 < 6) && (iVar4 = sVar1 + -5, iVar4 < 4)) {
      *(short *)(iVar2 + 0x4a) = (short)(int)((float)(iVar4 * -3) / 3.0f + 3.0f);
      *(float *)(iVar2 + 0x50) = fGpffff823c + (fGpffff8238 * (float)iVar4) / 3.0f;
    }
    break;
  case 0x14:
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + 4);
    if (sVar1 < 0xb) {
      *(short *)(iVar2 + 0x28) = (short)(int)((float)(sVar1 * -0xa0) / 10.0f);
    }
    else {
      *(short *)(iVar2 + 0x28) = -160;
    }
    if (sVar1 < 6) {
      *(short *)(iVar2 + 0x34) = (short)(int)((float)(sVar1 * -0xff) / 5.0f + 255.0f);
    }
    else {
      *(u16 *)(iVar2 + 0x34) = 0;
    }
    break;
  case 1:
    break;
  }

  return;

}


// FUN_003FB0C0


void FUN_003fb0c0(u32 param_1,u32 param_2)



{

  u32 uVar1;

  struct {
    u16 key;
    u16 pad;
  } lookup;

  int iVar3;

  int iVar4;

  u32 *puVar5;

  

  if (param_1 == 0) {

    K_Assert((const char *)DAT_006aede8,0xffa);

  }

  puVar5 = (u32 *)param_1;

  *puVar5 = *puVar5 | 1;

  puVar5[2] = 1;

  *(u16 *)(puVar5 + 1) = 1;

  *(u16 *)((int)puVar5 + 0x2a) = 0;

  *(u16 *)(puVar5 + 0xb) = 0;

  *(u16 *)((int)puVar5 + 0x2e) = 0;

  if (param_2 != 0) {

    *puVar5 = *puVar5 | 4;

  }

  else {

    *puVar5 = *puVar5 | 2;

  }

  uVar1 = *puVar5;

  if ((uVar1 & 2) != 0) {

    iVar3 = 99;

    if (puVar5[6] != 0) {

      iVar3 = datGetMoney();

      iVar3 = (u32)iVar3 / puVar5[6];

    }

    if (99 < iVar3 + *(short *)((int)puVar5 + 0x16)) {

      iVar3 = 99 - *(short *)((int)puVar5 + 0x16);

    }

    lookup.key = FUN_003e6dc0();
    lookup.pad = 0;

    iVar4 = FUN_0017d250(*(u32 *)&lookup,(u16)puVar5[3]);

    if ((iVar4 != -1) && (iVar4 < iVar3)) {

      iVar3 = iVar4;

    }

    if ((int)puVar5[2] >= iVar3) {

      *puVar5 = *puVar5 | 8;

    }

    else {

      *puVar5 = *puVar5 & 0xfffffff7;

    }

  }

  else {

    if ((uVar1 & 4) != 0) {

      if ((long)(int)puVar5[2] >= (long)*(short *)((int)puVar5 + 0x16)) {

        *puVar5 = uVar1 | 8;

      }

      else {

        *puVar5 = uVar1 & 0xfffffff7;

      }

    }

  }

  if (puVar5[2] == 1) {

    *puVar5 = *puVar5 | 0x10;

  }

  else {

    *puVar5 = *puVar5 & 0xffffffef;

  }

  return;

}

// FUN_003fb290
void fclShopMisc003fb290(void* param_1, void* param_2)
{
    K_ASSERT(param_1 != NULL, 0x1018);
    memcpy((int)param_1 + 0xc, param_2, 0x1c);
}

// FUN_003FB2F0


int FUN_003fb2f0(u32 *param_1)



{

  struct {
    u16 key;
    u16 pad;
  } lookup;

  int iVar2;

  u32 uVar3;

  u32 uVar6;

  int iVar5;

  u32 uVar4;


  

  iVar5 = 0;

  datGetMoney();

  if (((*(u16 *)DAT_007e0952_abs & 0x1000) != 0) || ((*(u16 *)DAT_007e095a_abs & 0x1000) != 0)) {
    iVar5 = 1;
  }
  else if (((*(u16 *)DAT_007e0952_abs & 0x4000) != 0) || ((*(u16 *)DAT_007e095a_abs & 0x4000) != 0)) {
    iVar5 = -1;
  }
  else if (((*(u16 *)DAT_007e0952_abs & 0x2000) != 0) || ((*(u16 *)DAT_007e095a_abs & 0x2000) != 0)) {
    iVar5 = 10;
  }
  else if (((*(u16 *)DAT_007e0952_abs & 0x8000) != 0) || ((*(u16 *)DAT_007e095a_abs & 0x8000) != 0)) {
    iVar5 = -10;
  }

  if (iVar5 != 0) {

    uVar6 = param_1[2] + iVar5;

    if (99 < (int)uVar6) {
      uVar6 = 99;
    }
    else if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    uVar4 = 99;


    if (param_1[6] != 0) {

      iVar2 = datGetMoney();

      uVar4 = (u32)iVar2 / param_1[6];

    }

    if (99 < (int)(uVar4 + (int)*(short *)((int)param_1 + 0x16))) {

      uVar4 = 99 - (int)*(short *)((int)param_1 + 0x16);

    }

    lookup.key = FUN_003e6dc0();
    lookup.pad = 0;
    uVar3 = FUN_0017d250(*(u32 *)&lookup,(u16)param_1[3]);

    if ((uVar3 != 0xffffffff) && ((int)uVar3 < (int)uVar4)) {

      uVar4 = uVar3;

    }

    if ((int)uVar6 >= (int)uVar4) {
      *param_1 = *param_1 | 8;
      uVar6 = uVar4;
    }
    else {
      *param_1 = *param_1 & 0xfffffff7;
    }

    if (uVar6 == 1) {
      *param_1 = *param_1 | 0x10;
    }
    else {
      *param_1 = *param_1 & 0xffffffef;
    }

    if (param_1[2] == uVar6) {
      return 0;
    }
    param_1[2] = uVar6;
    if (iVar5 > 0) {
      iVar5 = 1;
    }
    else if (iVar5 < 0) {
      iVar5 = 2;
    }

  }

  return iVar5;

}

// FUN_003FB530


int FUN_003fb530(u32 *param_1)



{

  int iVar1;

  int lVar3;

  int lVar4;

  

  iVar1 = 0;

  lVar4 = *(short *)((int)param_1 + 0x16);

  if (((*(u16 *)DAT_007e0952_abs & 0x1000) != 0) ||
      ((*(u16 *)DAT_007e095a_abs & 0x1000) != 0)) {
    iVar1 = 1;
  }
  else if (((*(u16 *)DAT_007e0952_abs & 0x4000) != 0) ||
           ((*(u16 *)DAT_007e095a_abs & 0x4000) != 0)) {
    iVar1 = -1;
  }
  else if (((*(u16 *)DAT_007e0952_abs & 0x2000) != 0) ||
           ((*(u16 *)DAT_007e095a_abs & 0x2000) != 0)) {
    iVar1 = 10;
  }
  else if (((*(u16 *)DAT_007e0952_abs & 0x8000) != 0) ||
           ((*(u16 *)DAT_007e095a_abs & 0x8000) != 0)) {
    iVar1 = -10;
  }

  if (iVar1 != 0) {

    lVar3 = param_1[2] + iVar1;
    if (lVar4 < lVar3) {
      lVar3 = lVar4;
    }
    else if (lVar3 < 1) {
      lVar3 = 1;
    }

    if (lVar3 >= lVar4) {
      *param_1 |= 8;
    }
    else {
      *param_1 &= ~8;
    }

    if (lVar3 == 1) {

      *param_1 = *param_1 | 0x10;

    }

    else {

      *param_1 = *param_1 & 0xffffffef;

    }

    if ((int)param_1[2] == lVar3) {
      return 0;
    }
    param_1[2] = lVar3;
    if (iVar1 > 0) {
      return 1;
    }
    if (iVar1 < 0) {
      return 2;
    }

  }

  return iVar1;

}

// FUN_003FB6B0


asm int FUN_003fb6b0(u64 param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x0000882d
  .word 0x0000802d
  .word 0x8c840000
  .word 0x30820001
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000013e
  .word 0x00000000
  .word 0x86420004
  .word 0x2c410009
  .word 0x102000ab
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463bd80
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24020003
  .word 0xa6420004
  .word 0x100000a0
  .word 0x00000000
  .word 0x2402fffe
  .word 0x00821824
  .word 0xae430000
  .word 0x30620400
  .word 0x10400004
  .word 0x00000000
  .word 0x24110001
  .word 0x10000005
  .word 0x00000000
  .word 0x30620800
  .word 0x10400002
  .word 0x00000000
  .word 0x24110002
  .word 0x8e430000
  .word 0x2402fbff
  .word 0x00621824
  .word 0xae430000
  .word 0x2402f7ff
  .word 0x00621024
  .word 0xae420000
  .word 0x0000202d
  .word 0x0c0fbb44
  .word 0x00000000
  .word 0x0220102d
  .word 0x10000115
  .word 0x00000000
  .word 0x24020004
  .word 0xa6420004
  .word 0xa6400006
  .word 0x240200ff
  .word 0xa642002a
  .word 0x2402fe0c
  .word 0xa6420030
  .word 0xa6400032
  .word 0x8e430000
  .word 0x30620002
  .word 0x10400006
  .word 0x00000000
  .word 0x24040006
  .word 0x0c0fbe5c
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x24040008
  .word 0x0c0fbe5c
  .word 0x00000000
  .word 0x86420006
  .word 0x24420001
  .word 0xa6420006
  .word 0x0002143c
  .word 0x0002143f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808110
  .word 0x46010042
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c02c2c8
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6420030
  .word 0x86420006
  .word 0x28420005
  .word 0x14400050
  .word 0x00000000
  .word 0x24020007
  .word 0xa6420004
  .word 0x240200ff
  .word 0xa642002a
  .word 0xa6400030
  .word 0xa6400032
  .word 0x10000048
  .word 0x00000000
  .word 0x24020006
  .word 0xa6420004
  .word 0xa6400006
  .word 0x8e430000
  .word 0x30620002
  .word 0x10400006
  .word 0x00000000
  .word 0x24040007
  .word 0x0c0fbe5c
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x24040009
  .word 0x0c0fbe5c
  .word 0x00000000
  .word 0x86420006
  .word 0x24420001
  .word 0xa6420006
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x00031200
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa642002a
  .word 0x86420006
  .word 0x28420005
  .word 0x1440001c
  .word 0x00000000
  .word 0x24020002
  .word 0xa6420004
  .word 0x10000018
  .word 0x00000000
  .word 0x24110001
  .word 0x10000015
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x8e420000
  .word 0x34420400
  .word 0xae420000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e420000
  .word 0x34420800
  .word 0xae420000
  .word 0x24020005
  .word 0xa6420004
  .word 0x12200067
  .word 0x00000000
  .word 0x0000882d
  .word 0x3c02007e
  .word 0x9444094e
  .word 0x30820040
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430958
  .word 0x30620040
  .word 0x1040002b
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020008
  .word 0xa6420004
  .word 0x8e430018
  .word 0x8e420008
  .word 0x00623018
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x8e430000
  .word 0x30620002
  .word 0x10400006
  .word 0x00000000
  .word 0x24040004
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x30620004
  .word 0x10400004
  .word 0x00000000
  .word 0x24040006
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d58
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x30820020
  .word 0x14400004
  .word 0x00000000
  .word 0x30620020
  .word 0x1040000e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020005
  .word 0xa6420004
  .word 0x8e420000
  .word 0x34420800
  .word 0xae420000
  .word 0x1000001f
  .word 0x00000000
  .word 0x8e430000
  .word 0x30620002
  .word 0x10400007
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fecbc
  .word 0x00000000
  .word 0x0040802d
  .word 0x10000008
  .word 0x00000000
  .word 0x30620004
  .word 0x10400005
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0fed4c
  .word 0x00000000
  .word 0x0040802d
  .word 0x8e430018
  .word 0x8e420008
  .word 0x00622018
  .word 0x0c0fbb44
  .word 0x00000000
  .word 0x12000007
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020001
  .word 0x12020005
  .word 0x00000000
  .word 0x8e420000
  .word 0x30420008
  .word 0x10400003
  .word 0x00000000
  .word 0x24020020
  .word 0xa642002c
  .word 0x24020002
  .word 0x12020005
  .word 0x00000000
  .word 0x8e420000
  .word 0x30420010
  .word 0x10400003
  .word 0x00000000
  .word 0x24020020
  .word 0xa642002e
  .word 0x8642002c
  .word 0x24420020
  .word 0x284100ff
  .word 0x10200004
  .word 0x00000000
  .word 0xa642002c
  .word 0x10000003
  .word 0x00000000
  .word 0x240200ff
  .word 0xa642002c
  .word 0x8642002e
  .word 0x24420020
  .word 0x284100ff
  .word 0x10200004
  .word 0x00000000
  .word 0xa642002e
  .word 0x10000003
  .word 0x00000000
  .word 0x240200ff
  .word 0xa642002e
  .word 0x0220102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_003FBC00


asm u32 FUN_003fbc00(u32 *param_1)
{
  .set noreorder
  .word 0x27bdff00
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x3c07006b
  .word 0x24e7f0b0
  .word 0x27a60060
  .word 0x24050012
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x8e830000
  .word 0x30630001
  .word 0x14600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000076
  .word 0x00000000
  .word 0x86930030
  .word 0x86920032
  .word 0x8691002a
  .word 0x00028100
  .word 0x44806000
  .word 0x322600ff
  .word 0x021d1021
  .word 0x8c470060
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2664002a
  .word 0x26450069
  .word 0x44806000
  .word 0x322600ff
  .word 0x92820010
  .word 0x00021040
  .word 0x24480001
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x82850014
  .word 0x8684000c
  .word 0x0c05c444
  .word 0x00000000
  .word 0x2664004a
  .word 0x26450073
  .word 0x44806000
  .word 0x2403ff00
  .word 0x02233025
  .word 0x24070006
  .word 0x24080001
  .word 0x0040482d
  .word 0x240a0010
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x27a400f0
  .word 0x2785ac10
  .word 0x8e860018
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26640196
  .word 0x26450075
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070001
  .word 0x27a800f0
  .word 0x24090009
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x021d1021
  .word 0x8c470064
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x27a400f0
  .word 0x2785ac10
  .word 0x8e860008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x266401c0
  .word 0x26450075
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070001
  .word 0x27a800f0
  .word 0x24090002
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x8684002c
  .word 0x00041040
  .word 0x00441021
  .word 0x240300ff
  .word 0x0043001a
  .word 0x00001012
  .word 0x02422823
  .word 0x44806000
  .word 0x70911018
  .word 0x0043001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x304600ff
  .word 0x021d1021
  .word 0x8c470068
  .word 0x0260202d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8684002e
  .word 0x00041040
  .word 0x00441021
  .word 0x240300ff
  .word 0x0043001a
  .word 0x00001012
  .word 0x02422821
  .word 0x44806000
  .word 0x70911018
  .word 0x0043001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x304600ff
  .word 0x021d1021
  .word 0x8c47006c
  .word 0x0260202d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
}

// FUN_003FBE70


void FUN_003fbe70(u8 *param_1,u8 *param_2)
{
  s16 sVar1;

  memset_typed(param_1,0,0x98);
  sVar1 = datGetEquipmentIdx_s16(1,(s16)((s32)(*(u32 *)(param_2 + 4) & 0xf00) >> 8));
  FUN_003f1dc0_u32(1,param_1 + 0x50,(s32)sVar1);
  memcpy_typed(param_1 + 0x6c,param_2,0x1c);
  *(u32 *)(param_1 + 4) = *(u32 *)(param_1 + 4) | 1;
  *(u16 *)param_1 = 1;
  return;
}

// FUN_003FBF10


void FUN_003fbf10(u16 *param_1)



{

  *param_1 = 3;

  return;

}

// FUN_003FBF20


u64 FUN_003fbf20(short *param_1)
{
  int iVar2;

  switch (*param_1) {
  case 1:
    *param_1 = 2;
    *(u32 *)(param_1 + 4) = 0;
  case 2:
    iVar2 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar2 + 1;
    param_1[0x4a] = (short)(int)((float)((iVar2 + 1) * 0xff) / 10.0f);
    if (*(int *)(param_1 + 4) < 10) {
      break;
    }
    *param_1 = 5;
    *(u32 *)(param_1 + 4) = 0;
    break;
  case 3:
    *param_1 = 4;
    *(u32 *)(param_1 + 4) = 0;
  case 4:
    iVar2 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar2 + 1;
    param_1[0x4a] = (short)(int)((float)((iVar2 + 1) * -0xff) / 10.0f + 255.0f);
    if (*(int *)(param_1 + 4) >= 10) {
      *(u32 *)(param_1 + 2) = *(u32 *)(param_1 + 2) & 0xfffffffe;
      *(u32 *)(param_1 + 4) = 0;
    }
    break;
  case 5:
  default:
    break;
  }
  return 0;
}

// FUN_003FC060


asm u64 FUN_003fc060(int param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x8c820004
  .word 0x30420001
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000011c
  .word 0x00000000
  .word 0x86910094
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0220302d
  .word 0x0000382d
  .word 0x26880088
  .word 0x0c0ff280
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x24040018
  .word 0x2405004b
  .word 0x2407004a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x24040018
  .word 0x2405004b
  .word 0x2407004c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x24040018
  .word 0x2405004b
  .word 0x24070043
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x24040037
  .word 0x240500bb
  .word 0x24070049
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x24040037
  .word 0x240500bb
  .word 0x2407004b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x24040037
  .word 0x240500bb
  .word 0x24070044
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26900050
  .word 0x241200c8
  .word 0x44806000
  .word 0x322600ff
  .word 0x92820054
  .word 0x00024040
  .word 0x0240202d
  .word 0x2405005f
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2402ff00
  .word 0x0222a825
  .word 0x82050008
  .word 0x86040000
  .word 0x0c05c444
  .word 0x00000000
  .word 0x44806000
  .word 0x240400e8
  .word 0x24050061
  .word 0x02a0302d
  .word 0x24070005
  .word 0x24080001
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000051
  .word 0x00000000
  .word 0x00131040
  .word 0x02021021
  .word 0x24560010
  .word 0x84420010
  .word 0x14400023
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x2405005f
  .word 0x24070047
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x2405005f
  .word 0x24070048
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x2405005f
  .word 0x2407004d
  .word 0x0260402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x2405005f
  .word 0x2407004f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x2405005f
  .word 0x24070045
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x2405005f
  .word 0x24070046
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x2405005f
  .word 0x2407004e
  .word 0x0260402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86c60000
  .word 0x27a40088
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2644004b
  .word 0x44806000
  .word 0x322600ff
  .word 0x2405009b
  .word 0x24070002
  .word 0x27a80088
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26520052
  .word 0x26730001
  .word 0x2a620004
  .word 0x1440ffae
  .word 0x00000000
  .word 0x2690006c
  .word 0x241200c8
  .word 0x44806000
  .word 0x322600ff
  .word 0x92820070
  .word 0x00024040
  .word 0x0240202d
  .word 0x240500bb
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x82050008
  .word 0x86040000
  .word 0x0c05c444
  .word 0x00000000
  .word 0x44806000
  .word 0x240400e8
  .word 0x240500bd
  .word 0x02a0302d
  .word 0x24070005
  .word 0x24080001
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000051
  .word 0x00000000
  .word 0x00141040
  .word 0x02021021
  .word 0x24530010
  .word 0x84420010
  .word 0x14400023
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500bb
  .word 0x24070047
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500bb
  .word 0x24070048
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500bb
  .word 0x2407004d
  .word 0x0280402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500bb
  .word 0x2407004f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500bb
  .word 0x24070045
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500bb
  .word 0x24070046
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500bb
  .word 0x2407004e
  .word 0x0280402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86660000
  .word 0x27a40088
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2644004b
  .word 0x44806000
  .word 0x322600ff
  .word 0x240500f7
  .word 0x24070002
  .word 0x27a80088
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26520052
  .word 0x26940001
  .word 0x2a820004
  .word 0x1440ffae
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule reset

/* DUMMYDUMB session 2026-10-20: #pragma opt_lifetimes (mwcc's lifetime analysis)
 * for this function takes the residual from 67 to 46 bytes. What is left is a
 * uniform register-role swap, not a scheduling order: seven identical
 * "andi $v1,$v1,0xff" masks of the u8 4th argument (ours $v1, retail $v0),
 * plus $s3/$s1 role swaps. Bounded shape tests: naming the masked argument in
 * a u8 local (nd246), masking uVar1 in place (nd227), and using that local at
 * the "| 0xffffff00" sites as well (nd247) - all far worse, because the value
 * is passed at 18 call sites and so stays live across the whole function: a
 * named copy costs more than it saves. Confirmed wall: register-role
 * colouring, not reachable from the source in this form. */
// FUN_003FC540
#pragma opt_lifetimes on


asm u64 FUN_003fc540(int param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x8c820004
  .word 0x30420001
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000f5
  .word 0x00000000
  .word 0x86910094
  .word 0x44806000
  .word 0x322600ff
  .word 0x2404002b
  .word 0x2405001c
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x2404002b
  .word 0x2405001c
  .word 0x24070044
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x2404002b
  .word 0x2405001c
  .word 0x2407003a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x2404002b
  .word 0x240500b0
  .word 0x24070041
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x2404002b
  .word 0x240500b0
  .word 0x24070043
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x2404002b
  .word 0x240500b0
  .word 0x2407003b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26900050
  .word 0x2412004e
  .word 0x44806000
  .word 0x322600ff
  .word 0x92820054
  .word 0x00024040
  .word 0x0240202d
  .word 0x24050044
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2402ff00
  .word 0x0222a825
  .word 0x82050008
  .word 0x86040000
  .word 0x0c05c444
  .word 0x00000000
  .word 0x44806000
  .word 0x2404006e
  .word 0x24050046
  .word 0x02a0302d
  .word 0x24070005
  .word 0x24080001
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000041
  .word 0x00000000
  .word 0x00131040
  .word 0x02021021
  .word 0x24560010
  .word 0x84420010
  .word 0x1440001b
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x24050044
  .word 0x24070040
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x24050044
  .word 0x24070045
  .word 0x0260402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x24050044
  .word 0x24070047
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x24050044
  .word 0x2407003e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x24050044
  .word 0x24070046
  .word 0x0260402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86c60000
  .word 0x27a40088
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2644001a
  .word 0x44806000
  .word 0x322600ff
  .word 0x2405008c
  .word 0x24070002
  .word 0x27a80088
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26520042
  .word 0x26730001
  .word 0x2a620005
  .word 0x1440ffbe
  .word 0x00000000
  .word 0x2690006c
  .word 0x2412004e
  .word 0x44806000
  .word 0x322600ff
  .word 0x92820070
  .word 0x00024040
  .word 0x0240202d
  .word 0x240500d8
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x82050008
  .word 0x86040000
  .word 0x0c05c444
  .word 0x00000000
  .word 0x44806000
  .word 0x2404006e
  .word 0x240500da
  .word 0x02a0302d
  .word 0x24070005
  .word 0x24080001
  .word 0x0040482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000041
  .word 0x00000000
  .word 0x00141040
  .word 0x02021021
  .word 0x24530010
  .word 0x84420010
  .word 0x1440001b
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500d8
  .word 0x24070040
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500d8
  .word 0x24070045
  .word 0x0280402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500d8
  .word 0x24070047
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500d8
  .word 0x2407003e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x240500d8
  .word 0x24070046
  .word 0x0280402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86660000
  .word 0x27a40088
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2644001a
  .word 0x44806000
  .word 0x322600ff
  .word 0x24050120
  .word 0x24070002
  .word 0x27a80088
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x26520042
  .word 0x26940001
  .word 0x2a820005
  .word 0x1440ffbe
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
}
#pragma opt_lifetimes reset

// FUN_003FC980


u32 FUN_003fc980(int param_1)

{

  u32 uVar1;

  u32 uVar2;

  

  uVar1 = FUN_003e6dc0();

  if (uVar1 == 0) {
    uVar2 = FUN_003fc060_u32(param_1);

  }

  else {

    uVar1 = FUN_003e6dc0();

    if (uVar1 == 1) {
      uVar2 = FUN_003fc540_u32(param_1);

    }

    else {

      uVar2 = 0;

    }

  }

  return uVar2;

}

// FUN_003FCA00
void FUN_003fca00(u64 param_1,u64 param_2,u32 param_3)
{
  u32 uVar1;
  uVar1 = param_3;
  FUN_0040e3c0_f32(0.0f,0,0,uVar1,0x52,0);
  FUN_0040e3c0_f32(0.0f,0,0,uVar1,0x53,0);
  FUN_0040e3c0_f32(0.0f,0,0,uVar1,0x54,0);
  FUN_0040e3c0_f32(0.0f,0,0,uVar1,0x50,0);
  FUN_0040e3c0_f32(0.0f,0,0,uVar1,0x51,0);
  return;
}

// W325 pragma sweep: opt_common_subs off nd91 -> nd89 (obj 260/272).
#pragma opt_common_subs off
// FUN_003FCAD0


asm void FUN_003fcad0(u64 param_1,u64 param_2,u32 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8ce2000c
  .word 0x8c420014
  .word 0x8c45001c
  .word 0x8ce20024
  .word 0x8c420044
  .word 0x84430006
  .word 0x2402ffff
  .word 0x14620012
  .word 0x00000000
  .word 0x8ca20008
  .word 0x30421000
  .word 0x1040000e
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x84aa0006
  .word 0x24040125
  .word 0x240500e3
  .word 0x24070001
  .word 0x24080005
  .word 0x24090002
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8ca20008
  .word 0x30421000
  .word 0x10400014
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x94a20004
  .word 0x0040202d
  .word 0x90a2000d
  .word 0x00021c00
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x00825025
  .word 0x24040125
  .word 0x240500e3
  .word 0x24070001
  .word 0x24080005
  .word 0x00e0482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x84aa0004
  .word 0x24040125
  .word 0x240500e3
  .word 0x24070001
  .word 0x24080005
  .word 0x0000482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset
// FUN_003FCBE0


void FUN_003fcbe0(int param_1,int param_2,u32 param_3,int param_4,int param_5)



{

  u32 bVar1;

  int iVar2;

  

  bVar1 = 0;

  if (param_3 != 0) {

    iVar2 = *(int *)(*(int *)(param_5 + 0x14) + 0x1c);

    if (param_5 == *(int *)(param_4 + 0xc)) {

      bVar1 = 1;

      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x5f,0);

    }

    FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x59,-((int)bVar1 * 2));

    FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x5a,-((int)bVar1 * 2));

    FUN_0040e3c0_f32(0,param_1,param_2,param_3,((int)(*(u32 *)(iVar2 + 8) & 0xf00) >> 8) + 0x55,
                 bVar1);

    iVar2 = (int)(*(u32 *)(iVar2 + 8) & 0xf00) >> 8;

    switch (iVar2) {

    case 0:

      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x5b,bVar1);
      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x5c,bVar1);

      break;

    case 1:

      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x5d,bVar1);

      break;

    case 2:

      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x5e,bVar1);

      break;

    case 3:

      break;

    }

  }

  return;

}

// FUN_003FCDC0


void FUN_003fcdc0(int param_1,int param_2,u32 param_3,int param_4,int param_5)



{


  int iVar2;

  u32 uVar3;

  const char *pcVar4;

  int iVar5;

  u32 uVar6;

  int uVar7;

  u8 auStack_20 [24];

  FclShopFloatPair auStack_8;

  

  uVar7 = 5;
  auStack_8 = *(FclShopFloatPair *)&DAT_007cd958;

  uVar6 = 0;

  if (param_3 != 0) {

    iVar2 = *(int *)(*(int *)(param_5 + 0x14) + 0x1c);

    if (param_5 == *(int *)(param_4 + 0xc)) {

      uVar7 = 6;
      uVar6 = 1;

    }

    FUN_0040e3c0_i(param_1 + 0x71,param_2 + -3,0.0f,(u8)param_3,0,

                     ((u32)*(u8 *)(iVar2 + 8) << 1) + uVar6);

    pcVar4 = func_00171110_ptr(*(s16 *)(iVar2 + 4),*(s8 *)(iVar2 + 0xc));

    FUN_003b2cb0_i(param_1 + 0x91,param_2 + -1,0.0f,param_3 | 0xffffff00,(s8)uVar7,1,pcVar4,0,0);

    iVar5 = (int)(*(u32 *)(iVar2 + 8) & 0xf00) >> 8;

    switch (iVar5) {
    case 0:
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x14));
      uVar3 = *(u32 *)(int)&auStack_8.u[uVar6];
      FUN_0040eb50_i(param_1 + 0x1d1,param_2 + 7,0.0f,(u8)param_3,uVar3,auStack_20,1);
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x16));
      FUN_0040eb50_i(param_1 + 0x236,param_2 + 7,0.0f,param_3 & 0xff,uVar3,auStack_20,1);
      break;
    case 1:
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x18));
      FUN_0040eb50_i(param_1 + 0x1d1,param_2 + 7,0.0f,param_3 & 0xff,auStack_8.u[uVar6],auStack_20,1);
      break;
    case 2:
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x1a));
      FUN_0040eb50_i(param_1 + 0x1d1,param_2 + 7,0.0f,param_3 & 0xff,auStack_8.u[uVar6],auStack_20,1);
      break;
    case 3:
      break;
    }

  }

  return;

}

// FUN_003FD010


void FUN_003fd010(int param_1,int param_2,u32 param_3,int param_4,int param_5)



{


  FUN_003fcdc0(param_1,param_2,param_3,param_4,param_5);


  return;
}

// FUN_003FD030


asm void FUN_003fd030(u64 param_1,u64 param_2,u32 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8ce2000c
  .word 0x8c420014
  .word 0x8c45001c
  .word 0x8ce20024
  .word 0x8c420044
  .word 0x84430006
  .word 0x2402ffff
  .word 0x14620012
  .word 0x00000000
  .word 0x8ca20008
  .word 0x30421000
  .word 0x1040000e
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x84aa0006
  .word 0x24040053
  .word 0x240500fa
  .word 0x24070001
  .word 0x24080005
  .word 0x24090002
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8ca20008
  .word 0x30421000
  .word 0x10400014
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x94a20004
  .word 0x0040202d
  .word 0x90a2000d
  .word 0x00021c00
  .word 0x3c02ffff
  .word 0x00621024
  .word 0x00825025
  .word 0x24040053
  .word 0x240500fa
  .word 0x24070001
  .word 0x24080005
  .word 0x00e0482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x44806000
  .word 0x2402ff00
  .word 0x00c23025
  .word 0x84aa0004
  .word 0x24040053
  .word 0x240500fa
  .word 0x24070001
  .word 0x24080005
  .word 0x0000482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003FD140


void FUN_003fd140(int param_1,int param_2,u32 param_3,int param_4,int param_5)


{

  u32 bVar1;

  int iVar2;

  u32 uVar3;

  

  bVar1 = 0;

  if (param_3 != 0) {

    iVar2 = *(int *)(*(int *)(param_5 + 0x14) + 0x1c);

    if (param_5 == *(int *)(param_4 + 0xc)) {
      bVar1 = 1;
      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x53,0);
    }

    uVar3 = (u32)bVar1;

    FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x4d,-(uVar3 * 2));

    FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x4e,-(uVar3 * 2));

    FUN_0040e3c0_f32(0,param_1,param_2,param_3,((int)(*(u32 *)(iVar2 + 8) & 0xf00) >> 8) + 0x49,
                 bVar1);

    iVar2 = (int)(*(u32 *)(iVar2 + 8) & 0xf00) >> 8;

    switch (iVar2) {
    case 0:
      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x4f,1 - uVar3);
      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x50,1 - uVar3);
      break;
    case 1:
      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x51,1 - uVar3);
      break;
    case 2:
      FUN_0040e3c0_f32(0,param_1,param_2,param_3,0x52,1 - uVar3);
      break;
    case 3:
      break;
    }

  }

  return;

}

// FUN_003FD320


void FUN_003fd320(int param_1,int param_2,u32 param_3,int param_4,int param_5)



{


  int iVar2;

  u32 uVar3;

  const char *pcVar4;

  int iVar5;

  u32 uVar6;

  int uVar7;

  u8 auStack_20 [24];

  FclShopFloatPair auStack_8;

  

  uVar7 = 5;
  auStack_8 = *(FclShopFloatPair *)&DAT_007cd960;

  uVar6 = 0;

  if (param_3 != 0) {

    iVar2 = *(int *)(*(int *)(param_5 + 0x14) + 0x1c);

    if (param_5 == *(int *)(param_4 + 0xc)) {

      uVar7 = 6;
      uVar6 = 1;

    }

    FUN_0040e3c0_i(param_1 + 0x71,param_2 + -3,0.0f,(u8)param_3,0,

                     ((u32)*(u8 *)(iVar2 + 8) << 1) + uVar6);

    pcVar4 = func_00171110_ptr(*(s16 *)(iVar2 + 4),*(s8 *)(iVar2 + 0xc));

    FUN_003b2cb0_i(param_1 + 0x91,param_2 + -1,0.0f,param_3 | 0xffffff00,(s8)uVar7,1,pcVar4,0,0);

    iVar5 = (int)(*(u32 *)(iVar2 + 8) & 0xf00) >> 8;

    switch (iVar5) {
    case 0:
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x14));
      uVar3 = *(u32 *)(int)&auStack_8.u[uVar6];
      FUN_0040eb50_i(param_1 + 0x1d1,param_2 + 7,0.0f,(u8)param_3,uVar3,auStack_20,1);
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x16));
      FUN_0040eb50_i(param_1 + 0x236,param_2 + 7,0.0f,param_3 & 0xff,uVar3,auStack_20,1);
      break;
    case 1:
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x18));
      FUN_0040eb50_i(param_1 + 0x1d1,param_2 + 7,0.0f,param_3 & 0xff,auStack_8.u[uVar6],auStack_20,1);
      break;
    case 2:
      sprintf((char *)auStack_20,(char *)&gp0xffffac10,*(s16 *)(iVar2 + 0x1a));
      FUN_0040eb50_i(param_1 + 0x1d1,param_2 + 7,0.0f,param_3 & 0xff,auStack_8.u[uVar6],auStack_20,1);
      break;
    case 3:
      break;
    }

  }

  return;

}

// W325 pragma sweep: opt_common_subs off nd156 -> nd131 (obj 440/448).
#pragma opt_common_subs off
/* DUMMYDUMB session 2026-10-20: #pragma opt_lifetimes (mwcc's lifetime analysis)
 * for this function takes the residual from 58 to 52 bytes. The remainder is
 * broad register-role colouring - loads and moves through $s0/$s2/$t3/$v1
 * interchangeably - not the two-load swap that the same pragma plus a named
 * scale and an operand-order flip closed in mdlEffect FUN_003269e0. The
 * lifetime pragma alone is not enough here; the shape rules would have to
 * move several roles at once. */
// FUN_003FD570
#pragma opt_lifetimes on


asm u64 FUN_003fd570(int param_1,u32 *param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x3c06006b
  .word 0x24c6f140
  .word 0x27a40050
  .word 0x2403000b
  .word 0x8cc20000
  .word 0x24c60004
  .word 0x2463ffff
  .word 0xac820000
  .word 0x24840004
  .word 0x1c60fffa
  .word 0x00000000
  .word 0x8cb00000
  .word 0x0200202d
  .word 0x24050001
  .word 0x2406000c
  .word 0x0c0f1244
  .word 0x00000000
  .word 0x8c510014
  .word 0x24050001
  .word 0xae250000
  .word 0x0240202d
  .word 0x0c0ff808
  .word 0x00000000
  .word 0xae220004
  .word 0x0220202d
  .word 0x0c0f7fac
  .word 0x00000000
  .word 0xae220008
  .word 0x0000882d
  .word 0x1000003c
  .word 0x00000000
  .word 0x00111080
  .word 0x005d1021
  .word 0x24420050
  .word 0x8c530000
  .word 0x12600035
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400030
  .word 0x00000000
  .word 0x24020157
  .word 0x1662000c
  .word 0x00000000
  .word 0x240400a8
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000013
  .word 0x00000000
  .word 0x24020001
  .word 0x10000010
  .word 0x00000000
  .word 0x24020152
  .word 0x1662000c
  .word 0x00000000
  .word 0x24040052
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000005
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400011
  .word 0x00000000
  .word 0x0200202d
  .word 0x0220282d
  .word 0x2406000c
  .word 0x0c0f1244
  .word 0x00000000
  .word 0x8c530014
  .word 0xae710000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0c0ff808
  .word 0x00000000
  .word 0xae620004
  .word 0x0260202d
  .word 0x0c0f7fac
  .word 0x00000000
  .word 0xae620008
  .word 0x26310001
  .word 0x2e22000b
  .word 0x1440ffc3
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes reset
#pragma opt_common_subs reset

// FUN_003FD730
u64 FUN_003fd730(u64 param_1,int param_2)
{
  s16 sVar1;
  int iVar3;
  int iVar2;
  u64 uVar4;
  u8 auStack_20[32];

  uVar4 = param_1;
  iVar3 = *(int *)(*(int *)(param_2 + 4) + 4);
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    sVar1 = datGetEquipmentIdx_s16((s16)uVar4,(s16)iVar2);
    FUN_003f1dc0_u64(uVar4,auStack_20,(s32)sVar1);
    memcpy_typed((void *)(*(int *)(*(int *)(iVar3 + 0x14) + 0x1c) + 4),auStack_20,0x1c);
    iVar3 = *(int *)(iVar3 + 0x10);
  }
  return 0;
}

// FUN_003FD7E0


u64 FUN_003fd7e0(u64 param_1,int param_2)



{

  int iVar1;

  

  iVar1 = *(int *)(param_2 + 0x14);

  FUN_003dff00(*(u32 *)(iVar1 + 8));

  FUN_003c5a20(*(u32 *)(iVar1 + 4));

  return 0;

}

// FUN_003FD820


int * FUN_003fd820(int param_1)



{

  int *piVar1;

  int iVar2;

  

  iVar2 = FUN_003c44d0(0xc,0,FUN_003fd7e0,0);

  piVar1 = *(int **)(iVar2 + 0x24);

  *piVar1 = iVar2;

  piVar1[1] = param_1;

  iVar2 = FUN_003dfeb0(0);

  piVar1[2] = iVar2;

  FUN_003fd570(param_1,(u32 *)piVar1);



  return piVar1;

}

// FUN_003FD8A0


void FUN_003fd8a0(u32 *param_1)



{

  FUN_003dff00(param_1[2]);

  FUN_003c45f0(*param_1);

  return;

}

// FUN_003FD8E0


void FUN_003fd8e0(int *param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(*(int *)(*param_1 + 0xc) + 0x14);

  FUN_003c6ee0(*(u32 *)(iVar1 + 4));

  FUN_003e04e0(param_1[2],0,0,0);

  FUN_003e04e0(param_1[2],3,0,0);

  FUN_003e04e0(*(u32 *)(iVar1 + 8),1,0,5);

  func_0010a4e0(0,0,0,3);

  return;

}

// Address-mode probe: DAT_007e0952 first use via u16 absolute alias improved nd434 -> nd400; object 780/816 -> 788/816.
// FUN_003FD990
#pragma push
#pragma opt_lifetimes on


asm u64 FUN_003fd990(int *param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x8c930000
  .word 0x0000902d
  .word 0x8c840008
  .word 0x0c0f8194
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c510004
  .word 0x10000009
  .word 0x00000000
  .word 0x8e300014
  .word 0x8e040004
  .word 0x0c0ff87c
  .word 0x00000000
  .word 0x8e040008
  .word 0x0c0f8194
  .word 0x00000000
  .word 0x8e310010
  .word 0x1620fff7
  .word 0x00000000
  .word 0x8e71000c
  .word 0x8e300014
  .word 0x8e040004
  .word 0x0c0f1b60
  .word 0x00000000
  .word 0x3c034000
  .word 0x00431024
  .word 0x1040009c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30820004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30620004
  .word 0x1040002c
  .word 0x00000000
  .word 0x0260202d
  .word 0x26650004
  .word 0x0c0f1348
  .word 0x00000000
  .word 0x12220088
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050001
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x0c0f8138
  .word 0x00000000
  .word 0x8e020004
  .word 0x8c42000c
  .word 0x8c420000
  .word 0x2451ffff
  .word 0x8e62000c
  .word 0x8c500014
  .word 0x8e040008
  .word 0x24050001
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c0f8138
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x8e040004
  .word 0x24850004
  .word 0x0220302d
  .word 0x0c0f137c
  .word 0x00000000
  .word 0x10000063
  .word 0x00000000
  .word 0x30820008
  .word 0x14400004
  .word 0x00000000
  .word 0x30620008
  .word 0x1040002c
  .word 0x00000000
  .word 0x0260202d
  .word 0x26650004
  .word 0x0c0f1320
  .word 0x00000000
  .word 0x12220057
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050001
  .word 0x00a0302d
  .word 0x0000382d
  .word 0x0c0f8138
  .word 0x00000000
  .word 0x8e020004
  .word 0x8c42000c
  .word 0x8c420000
  .word 0x2451ffff
  .word 0x8e62000c
  .word 0x8c500014
  .word 0x8e040008
  .word 0x24050001
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c0f8138
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x8e040004
  .word 0x24850004
  .word 0x0220302d
  .word 0x0c0f137c
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420020
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420958
  .word 0x30420020
  .word 0x10400028
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e820000
  .word 0x8c500004
  .word 0x10000006
  .word 0x00000000
  .word 0x8e020014
  .word 0x8c440004
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x8e100010
  .word 0x00000000
  .word 0x1600fff9
  .word 0x00000000
  .word 0x24120001
  .word 0x8e62000c
  .word 0x8c420014
  .word 0x8c440008
  .word 0x0240282d
  .word 0x0240302d
  .word 0x0000382d
  .word 0x0c0f8138
  .word 0x00000000
  .word 0x8e840008
  .word 0x0000282d
  .word 0x0240302d
  .word 0x0000382d
  .word 0x0c0f8138
  .word 0x00000000
  .word 0x8e840008
  .word 0x24050003
  .word 0x0240302d
  .word 0x0000382d
  .word 0x0c0f8138
  .word 0x00000000
  .word 0x0260202d
  .word 0x26650004
  .word 0x0c0f1370
  .word 0x00000000
  .word 0x0240102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma pop

// W417 probe negative: moving the 0x51 sprite call after the 003fcbe0 loop raised nd357 -> 373 (object 692/window704); reverted.
// FUN_003FDCC0


asm void FUN_003fdcc0(int *param_3,int param_2,int param_1)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c870004
  .word 0xc781ac78
  .word 0xc780ac7c
  .word 0xe7a10078
  .word 0xe7a0007c
  .word 0x84b30014
  .word 0x84b20016
  .word 0x84b10026
  .word 0x12200092
  .word 0x00000000
  .word 0x8ca40010
  .word 0x24030003
  .word 0x10830027
  .word 0x00000000
  .word 0x24030001
  .word 0x10830013
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000087
  .word 0x00000000
  .word 0x44806000
  .word 0x322300ff
  .word 0x8cc20004
  .word 0x00021080
  .word 0x005d1021
  .word 0x8c470078
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0060302d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x84e40000
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x266401c9
  .word 0x26450026
  .word 0x44806000
  .word 0x2403ff00
  .word 0x02233025
  .word 0x24070005
  .word 0x0000402d
  .word 0x0040482d
  .word 0x240a0018
  .word 0x240b0073
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x10000068
  .word 0x00000000
  .word 0x8cc20000
  .word 0x8c42000c
  .word 0x8c420014
  .word 0x8c500004
  .word 0x8e030024
  .word 0x8c620044
  .word 0x84420004
  .word 0x14400040
  .word 0x00000000
  .word 0x8e150004
  .word 0x0000a02d
  .word 0x44806000
  .word 0x322600ff
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24070052
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24070053
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24070054
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24070050
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24070051
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e050024
  .word 0x8ca20014
  .word 0x02622021
  .word 0x8ca20018
  .word 0x02421821
  .word 0x8ca2000c
  .word 0x02821018
  .word 0x00622821
  .word 0x0220302d
  .word 0x0200382d
  .word 0x02a0402d
  .word 0x0c0ff2f8
  .word 0x00000000
  .word 0x8eb50010
  .word 0x26940001
  .word 0x16a0fff0
  .word 0x00000000
  .word 0x10000020
  .word 0x00000000
  .word 0x8e150004
  .word 0x0000a02d
  .word 0x8c620014
  .word 0x02622021
  .word 0x8c620018
  .word 0x02422821
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070048
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e050024
  .word 0x8ca20014
  .word 0x02622021
  .word 0x8ca20018
  .word 0x02421821
  .word 0x8ca2000c
  .word 0x02821018
  .word 0x00622821
  .word 0x0220302d
  .word 0x0200382d
  .word 0x02a0402d
  .word 0x0c0ff450
  .word 0x00000000
  .word 0x8eb50010
  .word 0x26940001
  .word 0x16a0fff0
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_003FDF80


u64 FUN_003fdf80(u32 *param_1)



{

  int iVar1;

  int iVar2;

  

  FUN_003e0680_typed(param_1[2],(code)FUN_003fdcc0,param_1);

  for (iVar2 = *(int *)(*param_1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {

    iVar1 = *(int *)(iVar2 + 0x14);

    FUN_003e0680_typed(*(u32 *)(iVar1 + 8),(code)FUN_003fdcc0,param_1);

    FUN_003c6380(*(u32 *)(iVar1 + 4));

  }

  return 0;

}

// FUN_003FE020


u32 FUN_003fe020(int param_1,u64 param_2)



{

  s16 uVar1;

  int iVar2;

  int iVar3;

  u32 uVar4;

  int iVar5;

  FclShopCallbackData callbackData;
  u8 auStack_40 [32];

  

  uVar4 = FUN_003c58f0(0,0x58,5,0x24);

  iVar2 = (int)uVar4;

  iVar5 = *(int *)(*(int *)(iVar2 + 0x24) + 0x44);

  if ((param_1 != 0) && (param_1 != 1)) {

    K_Assert((const char *)DAT_006aede8,0x148a);

  }

  *(short *)(iVar5 + 4) = (short)param_1;

  for (iVar5 = 0; iVar5 < 4; iVar5 = iVar5 + 1) {

    uVar1 = datGetEquipmentIdx((short)param_2,(short)iVar5);

    FUN_003f1dc0_u64(param_2,auStack_40,uVar1);


    iVar3 = FUN_003c5a40(uVar4,*(u16 *)(iVar2 + 0x10) + 1,0x20,0);

    memcpy(*(int *)(*(int *)(iVar3 + 0x14) + 0x1c) + 4,auStack_40,0x1c);

  }

  callbackData.callbacks[1].vector = PTR_FUN_007cd970.vector;
  callbackData.callbacks[0].vector = PTR_FUN_007cd978.vector;
  callbackData.data.vector = *(FclShopFloatQuad *)&DAT_006af170;

  FUN_003c5e20(uVar4,callbackData.callbacks[1].value[param_1]);
  FUN_003c5ee0(uVar4,callbackData.callbacks[0].value[param_1]);

  FUN_003c6d40(uVar4,callbackData.data.value[param_1 * 2],
               callbackData.data.value[param_1 * 2 + 1]);

  *(u16 *)(*(int *)(iVar2 + 0x24) + 6) = 10;

  *(u16 *)(*(int *)(iVar2 + 0x24) + 8) = 5;

  return uVar4;

}

// FUN_003FE1F0


u32 FUN_003fe1f0(u64 param_1)
{
  u32 uVar1;
  u32 uVar2;

  uVar1 = FUN_003c6270() == 3;
  uVar2 = FUN_003c6ce0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6d10(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,0);
  }
  uVar2 = FUN_003c6ca0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6cc0(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,5);
  }
  return uVar1;
}

// FUN_003FE2B0

u32 FUN_003fe2b0(void)
{
  u16 sVar1;
  u32 bVar2;
  s16 copyA;
  s16 copyB;
  u32 uVar3;
  u32 uVar4;
  u32 uVar5;
  u16 *psVar8;
  u16 *psVar7;
  int iVar6;
  u16 sVar9;
  u32 uVar10;
  s16 counter;
  u16 asStack_10[8];

  uVar10 = 0;
  goto copy_entry;
  for (;;) {
    uVar4 = func_00170760(1,(s16)sVar9);
    if (uVar4 != 0) {
      bVar2 = 1;
      goto LAB_003fe35c;
    }
    uVar10++;
copy_entry:
    psVar8 = DAT_006af180_abs;
    psVar7 = asStack_10;
    iVar6 = 4;
    do {
      copyA = ((s16 *)psVar8)[0];
      copyB = ((s16 *)psVar8)[1];
      psVar8 += 2;
      iVar6--;
      *psVar7 = copyA;
      psVar7[1] = copyB;
      psVar7 += 2;
    } while (iVar6 > 0);

    if (uVar10 >= 8) {
      sVar9 = 0;
    }
    else {
      sVar9 = asStack_10[uVar10];
    }
    sVar9 &= 0xffff;
    if (sVar9 == 0) {
      break;
    }
  }
  bVar2 = 0;

LAB_003fe35c:
  if (bVar2) {
    uVar3 = 1;
  }
  else {
    for (counter = 0; counter < 300; counter++) {
      uVar5 = func_0016f720(1,counter);
      if ((uVar5 & 0xff00) != 0) {
        return 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

// W212: rotating the copied-table loop to retail's apparent branch target measured nd206 -> nd295 (488 -> 492 bytes); rejected.
// FUN_003FE3E0


u32 FUN_003fe3e0(u16 param_1)
{
  u32 list;
  int listWork;
  int entry;
  int persona;
  u32 i;
  u16 itemId;
  u8 itemData[32];
  u16 itemIds[8];

  list = FUN_003c58f0(0,0x58,7,0x1a);
  listWork = (int)list;
  entry = *(int *)(*(int *)(listWork + 0x24) + 0x44);
  *(u16 *)(entry + 4) = param_1;
  *(short *)(entry + 6) = -4;
  i = 0;
  {
    short *source;
    u16 *dest;
    int count;
    short tmpA;
    short tmpB;
    goto copy_entry;
    for (;;) {
      if (FUN_003f2240_u32((int)itemData,itemId) != 0) {
        entry = FUN_003c5a40(list,*(u16 *)(listWork + 0x10) + 1,0x20,0);
        memcpy((void *)(*(int *)(*(int *)(entry + 0x14) + 0x1c) + 4),itemData,0x1c);
        for (persona = 0; persona < (int)(FUN_00175410() & 0xffff); persona++) {
          datPersonaGetHeroPersona((short)persona);
        }
      }
      i++;
copy_entry:
      source = (short *)DAT_006af180_abs;
      dest = itemIds;
      count = 4;
    do {
      tmpA = source[0];
      tmpB = source[1];
      source += 2;
      count--;
      dest[0] = tmpA;
      dest[1] = tmpB;
      dest += 2;
    } while (count > 0);

      if (i >= 8) {
        itemId = 0;
      }
      else {
        itemId = itemIds[i];
      }
      itemId &= 0xffff;
      if (itemId == 0) {
        break;
      }
    }
  }

  FUN_003f99d0(list,0xff00);
  FUN_003c6ee0(list);
  FUN_003c5e80_p(list,(code)FUN_003fadc0);
  FUN_003c5e20_p(list,(code)FUN_003f4de0);
  FUN_003c5ee0_p(list,(code)FUN_003f9510);
  FUN_003c6d40(list,0x39,0x48);
  *(u16 *)(*(int *)(listWork + 0x24) + 6) = 0xb;
  *(u16 *)(*(int *)(listWork + 0x24) + 8) = 6;
  return list;
}

// FUN_003FE5D0


u32 FUN_003fe5d0(u64 param_1)
{
  u32 uVar1;
  u32 uVar2;

  uVar1 = FUN_003c6270() == 3;
  uVar2 = FUN_003c6ce0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6d10(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,0);
  }
  uVar2 = FUN_003c6ca0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6cc0(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,5);
  }
  return uVar1;
}

// FUN_003FE690


u64 FUN_003fe690(u32 param_1,u8 *param_2)



{

  int iVar1;

  u32 *puVar2;

  u32 uVar3;

  u32 uVar4;

  u32 uVar6;

  int iVar7;

  int lVar5;

  u8 auStack_8 [6];

  short uStack_2;

  

  for (iVar7 = 0; uVar4 = FUN_00175410(), iVar7 < (int)(uVar4 & 0xffff); iVar7 = iVar7 + 1) {

    if ((lVar5 = datPersonaGetHeroPersona((short)iVar7)) != 0) {

      uVar6 = FUN_003c5a40(param_1,*(u16 *)(param_1 + 0x10) + 1,0x20,0);

      iVar1 = *(int *)(*(int *)(uVar6 + 0x14) + 0x1c);

      memcpy(iVar1 + 4,param_2,0x1c);

      *(int *)(iVar1 + 0x14) = lVar5;


      if (FUN_00401a00_i(*(short *)param_2,lVar5,&uStack_2) != 0) {

        puVar2 = (u32 *)func_00170ed0(uStack_2,auStack_8);
        uVar3 = FUN_003f1a10(puVar2[1]);

        *(u32 *)(iVar1 + 0x18) = uVar3;
        *(u16 *)(iVar1 + 0x1c) = uStack_2;

      }
      else {

        *(u32 *)(iVar1 + 0x18) = 0;
        *(u16 *)(iVar1 + 0x1c) = 0;

      }

      FUN_003fe7d0_i(param_1,uVar6);


    }

  }

  return 0;

}

// FUN_003FE7D0


u64 FUN_003fe7d0(u64 param_1,int param_2)



{

  u16 uVar1;

  u32 *puVar2;

  u16 uVar3;

  

  puVar2 = *(u32 **)(*(int *)(param_2 + 0x14) + 0x1c);

  if ((short)puVar2[7] == 0) {

    *puVar2 = *puVar2 | 0x10;

  }

  uVar1 = *(u16 *)(puVar2[5] + 2);

  if (uVar1 == FUN_001752b0()) {

    *puVar2 = *puVar2 | 0x40;

  }

  return 0;

}

// FUN_003FE850


u32 FUN_003fe850(u16 param_1,u64 param_2)
{
  u32 *pVar;
  int iVar1;

  pVar = (u32 *)FUN_003c58f0(0,0x58,6,0x1e);
  iVar1 = *(int *)(pVar[9] + 0x44);
  *(u16 *)(iVar1 + 4) = param_1;
  *(s16 *)(iVar1 + 6) = -5;

  FUN_003fe690_p((u32)pVar,param_2,0);
  FUN_003c6ee0((u32)pVar);
  FUN_003c5e80_p((u32)pVar,(code)FUN_003fadc0);
  FUN_003c5e20_p((u32)pVar,(code)FUN_003f4de0);
  FUN_003c5ee0_p((u32)pVar,(code)FUN_003f9510);
  FUN_003c6d40((u32)pVar,0x19,0x79);

  *(u16 *)(pVar[9] + 6) = 0xb;
  *(u16 *)(pVar[9] + 8) = 6;
  return (u32)pVar;
}


// FUN_003FE950


u32 FUN_003fe950(u64 param_1)
{
  u32 uVar1;
  u32 uVar2;

  uVar1 = FUN_003c6270() == 3;
  uVar2 = FUN_003c6ce0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6d10(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,0);
  }
  uVar2 = FUN_003c6ca0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6cc0(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,5);
  }
  return uVar1;
}

// W414 probe: hoisting iVar2+4 into a named callAddress local left nd10 (obj288/window288);
// pre-JAL argument setup order remains a compiler floor.
// Confirmed pre-JAL setup-order floor: +160/+164/+168 contain the same address
// computation and signed extension, with retail materializing $a1 before $a0.
// FUN_003FEA10


u64 FUN_003fea10(u32 param_1,u32 *param_2)



{

  short sVar1;

  int iVar2;

  u32 lVar3;

  u32 uVar4;

  short *psVar6;

  int iVar5;

  

  psVar6 = (short *)*param_2;

  for (iVar5 = 0; iVar5 < (int)param_2[1]; iVar5 = iVar5 + 1) {

    if ((((psVar6[2] == 0) || (lVar3 = datGetFlag_u32_arg(psVar6[2]), lVar3 == 1)) && (sVar1 = *psVar6, sVar1 != 0)

        ) && (psVar6[4] != 0)) {

      uVar4 = FUN_003c5a40(param_1,*(u16 *)((int)param_1 + 0x10) + 1,0x20,0);

      *(int *)((int)uVar4 + 4) = (int)sVar1;

      iVar2 = *(int *)(*(int *)((int)uVar4 + 0x14) + 0x1c);
      lVar3 = (short)sVar1;
      FUN_003f1ba0(iVar2 + 4,lVar3);


      memcpy(iVar2 + 0x14,psVar6 + 3,0xe);

      FUN_003feb30(param_1,uVar4);


    }

    psVar6 = psVar6 + 7;

  }

  return 0;

}

// FUN_003FEB30


asm u64 FUN_003feb30(u32 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8ca20014
  .word 0x8c50001c
  .word 0x86120004
  .word 0x2402ffff
  .word 0xafa2005c
  .word 0x0000982d
  .word 0x0240202d
  .word 0x27a5005c
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa3005c
  .word 0x24020004
  .word 0x10620021
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0000882d
  .word 0x0012943c
  .word 0x0012943f
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040001
  .word 0x0220282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x16420002
  .word 0x00000000
  .word 0x26730001
  .word 0x26310001
  .word 0x2a22012c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3053ffff
  .word 0xa613000e
  .word 0x0013143c
  .word 0x0002143f
  .word 0x28420063
  .word 0x14400004
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420010
  .word 0xae020000
  .word 0x86020016
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x240515b8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x86110014
  .word 0x12200035
  .word 0x00000000
  .word 0x2402ffff
  .word 0xafa20058
  .word 0x0000982d
  .word 0x0220202d
  .word 0x27a50058
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa30058
  .word 0x24020004
  .word 0x10620021
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0000902d
  .word 0x00118c3c
  .word 0x00118c3f
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x16220002
  .word 0x00000000
  .word 0x26730001
  .word 0x26520001
  .word 0x2a42012c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0220282d
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3053ffff
  .word 0x86020016
  .word 0x0262102a
  .word 0x14400038
  .word 0x00000000
  .word 0x86110018
  .word 0x12200038
  .word 0x00000000
  .word 0x2402ffff
  .word 0xafa20054
  .word 0x0000982d
  .word 0x0220202d
  .word 0x27a50054
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa30054
  .word 0x24020004
  .word 0x10620021
  .word 0x00000000
  .word 0x24020003
  .word 0x1062000b
  .word 0x00000000
  .word 0x24020002
  .word 0x10620008
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000019
  .word 0x00000000
  .word 0x0000902d
  .word 0x00118c3c
  .word 0x00118c3f
  .word 0x1000000a
  .word 0x00000000
  .word 0x24040001
  .word 0x0240282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x16220002
  .word 0x00000000
  .word 0x26730001
  .word 0x26520001
  .word 0x2a42012c
  .word 0x1440fff5
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x24040001
  .word 0x0220282d
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3053ffff
  .word 0x8602001a
  .word 0x0262082a
  .word 0x10200004
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420010
  .word 0xae020000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}

// W212: signed short result local measured nd94 -> nd117 and 240/240 -> 248/240; rejected as over-window.
// FUN_003FEE40


u64 FUN_003fee40(int param_1)
{
  struct ShopRequirements {
    u32 flags;
    s16 item;
    u8 pad06[8];
    s16 value;
    u8 pad10[4];
    s16 item1;
    s16 target1;
    s16 item2;
    s16 target2;
  };
  u32 *puVar2;
  struct ShopRequirements *puVar1;
  u32 ok;

  for (puVar2 = *(u32 **)(param_1 + 4); puVar2 != 0; puVar2 = (u32 *)puVar2[4]) {
    puVar1 = *(struct ShopRequirements **)(puVar2[5] + 0x1c);
    puVar1->value = FUN_003f1910(puVar1->item);
    ok = (puVar1->value < 0x63);
    if (ok == 0) {
      puVar1->flags = puVar1->flags | 0x10;
    }
    if (puVar1->target1 == 0) {
      K_Assert((const char *)DAT_006aede8,0x15b8);
    }
    if (((puVar1->item1 != 0) &&
         ((s32)FUN_003f1910(puVar1->item1) < puVar1->target1)) ||
        ((puVar1->item2 != 0) &&
         ((s32)FUN_003f1910(puVar1->item2) < puVar1->target2))) {
      puVar1->flags = puVar1->flags | 0x10;
    }
  }
  return 0;
}

// FUN_003FEF30


u32 FUN_003fef30(int param_1,int param_2)



{

  int iVar1;

  int iVar2;

  u32 uVar3;

  int lVar4;

  u8 **ppuVar5;

  int iVar6;

  FclShopStockConfig *config;

  

  uVar3 = FUN_003c58f0(0,0x58,5,0x1a);

  iVar1 = (int)uVar3;

  iVar2 = *(int *)(*(int *)(iVar1 + 0x24) + 0x44);

  *(short *)(iVar2 + 4) = (short)param_1;

  config = &fclShopStockConfig;


  if (param_2 == 0) {

    *(s16 *)(iVar2 + 6) = 0xfffe;

    ppuVar5 = (u8 **)&config->default_data;

  }
  else {

    *(s16 *)(iVar2 + 6) = 0xfffd;

    ppuVar5 = (u8 **)&config->alternate_data;

  }

  if (ppuVar5 == (u8 **)0x0) {

    K_Assert((const char *)DAT_006aede8,0x15ea);

  }
  FUN_003fea10_3((int)uVar3,(u32 *)ppuVar5,0);


  if (param_2 == 0) {
    iVar2 = FUN_003f03e0_u32(4);
    for (iVar6 = 1; iVar6 <= iVar2; iVar6 = iVar6 + 1) {
      if ((iVar6 < 0) || (config->entry_count < iVar6)) {
        K_Assert((const char *)DAT_006aede8,0x1df);
      }
      if (config->entry_table + iVar6 * 8 != (u8 *)0x0) {
        FUN_003fea10_3((int)uVar3,(u32 *)(config->entry_table + iVar6 * 8),0);
      }
    }

  }

  if (param_2 == 0) {

    FUN_0017d610(param_1);
    if (lVar4 = FUN_003ff150_u32(param_1,param_2)) {


      FUN_003ff460((int)uVar3,lVar4);
      FUN_003c5a20(lVar4);

    }

  }

  FUN_003c6ee0(uVar3);

  FUN_003c5e80(uVar3,FUN_003fadc0);

  FUN_003c5e20(uVar3,FUN_003f4de0);

  FUN_003c5ee0(uVar3,FUN_003f9510);

  FUN_003c6d40(uVar3,0x39,0x48);

  *(u16 *)(*(int *)(iVar1 + 0x24) + 6) = 10;

  *(u16 *)(*(int *)(iVar1 + 0x24) + 8) = 5;

  return uVar3;

}

// Address-mode probe: PTR_DAT_006ad4a0 + 0x8 absolute array reference improved nd480 -> 477; object 756/784 unchanged.
// FUN_003FF150


asm u64 FUN_003ff150(int param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0902d
  .word 0x27a50068
  .word 0x0c05f5b4
  .word 0x00000000
  .word 0x0000802d
  .word 0x0000882d
  .word 0x10000021
  .word 0x00000000
  .word 0x00111840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082000c
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x24020001
  .word 0x02221004
  .word 0x3042ffff
  .word 0x02021025
  .word 0x3050ffff
  .word 0x1000000d
  .word 0x00000000
  .word 0x24020006
  .word 0x1622000a
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24020001
  .word 0x02221004
  .word 0x3042ffff
  .word 0x02021025
  .word 0x3050ffff
  .word 0x26310001
  .word 0x2e220008
  .word 0x1440ffde
  .word 0x00000000
  .word 0x97b1006a
  .word 0x0000982d
  .word 0x1000001d
  .word 0x00000000
  .word 0x24020006
  .word 0x16620005
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x00131840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082000d
  .word 0x00000000
  .word 0x24050001
  .word 0x02651004
  .word 0x02221024
  .word 0x10400005
  .word 0x00000000
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x26730001
  .word 0x2e620008
  .word 0x1440ffe2
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050058
  .word 0x24060005
  .word 0x2407001a
  .word 0x0c0f163c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c420024
  .word 0x8c430044
  .word 0x3c13006b
  .word 0x2673d4a0
  .word 0x16400006
  .word 0x00000000
  .word 0x2402fffe
  .word 0xa4620006
  .word 0x0260a02d
  .word 0x10000004
  .word 0x00000000
  .word 0x2402fffd
  .word 0xa4620006
  .word 0x26740008
  .word 0x16800006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x2405162f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0000302d
  .word 0x0c0ffa84
  .word 0x00000000
  .word 0x1640001d
  .word 0x00000000
  .word 0x93b20069
  .word 0x24140001
  .word 0x10000016
  .word 0x00000000
  .word 0x06800005
  .word 0x00000000
  .word 0x8e620014
  .word 0x0054082a
  .word 0x10200006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x240501df
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x001418c0
  .word 0x8e620010
  .word 0x00432821
  .word 0x10a00005
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000302d
  .word 0x0c0ffa84
  .word 0x00000000
  .word 0x26940001
  .word 0x0254082a
  .word 0x1020ffe9
  .word 0x00000000
  .word 0x0000902d
  .word 0x3210ffff
  .word 0x1000001d
  .word 0x00000000
  .word 0x24020006
  .word 0x16420005
  .word 0x00000000
  .word 0x0c05f600
  .word 0x00000000
  .word 0x14400015
  .word 0x00000000
  .word 0x00121840
  .word 0x3c02006b
  .word 0x2442cc60
  .word 0x00431021
  .word 0x84440000
  .word 0x2402ffff
  .word 0x1082000d
  .word 0x00000000
  .word 0x24050001
  .word 0x02451004
  .word 0x02021024
  .word 0x10400005
  .word 0x00000000
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x26520001
  .word 0x2e420008
  .word 0x1440ffe2
  .word 0x00000000
  .word 0x0220102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

/* DUMMYDUMB session 2026-10-20: #pragma opt_lifetimes (mwcc's lifetime
 * analysis) for this function takes the residual from 28 to 26 bytes. What is
 * left is a three-instruction rotation - the same shift/add/or triple appears
 * as shift,add,or in retail and or,shift,add here - and it comes from an
 * *inlined* helper, since this function's own source has no such expression.
 * Bounded tests with the inlining and positioning pragmas (auto_inline,
 * inline_bottom_up, defer_codegen, opt_repositioncode, schedule, nomacro,
 * opt_rebuildconditionals) on top of opt_lifetimes: all 26 bytes unchanged
 * except opt_repositioncode and schedule, which regress to 59. Confirmed wall:
 * scheduler rotation of an inlined helper's independent instructions. */
// FUN_003FF460
#pragma opt_lifetimes on


asm void FUN_003ff460(int param_1,u32 param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0902d
  .word 0x8c910004
  .word 0x10000032
  .word 0x00000000
  .word 0x8e220014
  .word 0x8c50001c
  .word 0x86060004
  .word 0x0240202d
  .word 0x26450004
  .word 0x0c0f12fc
  .word 0x00000000
  .word 0x0040302d
  .word 0x10400024
  .word 0x00000000
  .word 0x8cc20014
  .word 0x8c44001c
  .word 0x86030016
  .word 0x84820016
  .word 0x00621026
  .word 0x2c420001
  .word 0x10400005
  .word 0x00000000
  .word 0x86030014
  .word 0x84820014
  .word 0x00621026
  .word 0x2c420001
  .word 0x10400005
  .word 0x00000000
  .word 0x8603001a
  .word 0x8482001a
  .word 0x00621026
  .word 0x2c420001
  .word 0x10400005
  .word 0x00000000
  .word 0x86030018
  .word 0x84820018
  .word 0x00621026
  .word 0x2c420001
  .word 0x14400004
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420080
  .word 0xae020000
  .word 0x0240202d
  .word 0x26450004
  .word 0x0c0f1278
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x8e030000
  .word 0x34630080
  .word 0xae030000
  .word 0x8e310010
  .word 0x1620ffce
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_lifetimes reset

// FUN_003FF570


u32 FUN_003ff570(u64 param_1)
{
  u32 uVar1;
  u32 uVar2;

  uVar1 = FUN_003c6270() == 3;
  uVar2 = FUN_003c6ce0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6d10(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,0);
  }
  uVar2 = FUN_003c6ca0(param_1);
  if ((uVar2 != 0) || (uVar2 = FUN_003c6cc0(param_1), uVar2 != 0)) {
    func_0010a4e0(0,0,0,5);
  }
  return uVar1;
}

// W325 pragma sweep: opt_common_subs off nd718 -> nd713 (obj 1004/1008).
#pragma opt_common_subs off
// FUN_003FF630


asm void FUN_003ff630(u32 param_1,u64 param_2,u64 param_3,u64 param_4,
                 u8 param_5,short param_6,short param_7,u32 param_8)
{
  .set noreorder
  .word 0x27bdfd80
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00e0902d
  .word 0x46006506
  .word 0x0120b82d
  .word 0x0140882d
  .word 0x3c06006b
  .word 0x24c6f190
  .word 0x27a50250
  .word 0x24040009
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f1c0
  .word 0x27a501d0
  .word 0x2404003f
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f240
  .word 0x27a501a0
  .word 0x2404000a
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f270
  .word 0x27a50180
  .word 0x24040008
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f290
  .word 0x27a50160
  .word 0x24040008
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f2b0
  .word 0x27a50140
  .word 0x24040006
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f2d0
  .word 0x27a50110
  .word 0x2404000c
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f300
  .word 0x27a500f0
  .word 0x24040006
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f320
  .word 0x27a500d0
  .word 0x24040008
  .word 0x84c30000
  .word 0x84c20002
  .word 0x24c60004
  .word 0x2484ffff
  .word 0xa4a30000
  .word 0xa4a20002
  .word 0x24a50004
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x27a300a0
  .word 0x24020024
  .word 0x10600008
  .word 0x00000000
  .word 0xa0600000
  .word 0x24630001
  .word 0x2442ffff
  .word 0x00000000
  .word 0x00000000
  .word 0x1440fffa
  .word 0x00000000
  .word 0x27a201a0
  .word 0xafa200a0
  .word 0x27a20180
  .word 0xafa200a4
  .word 0x27a20160
  .word 0xafa200a8
  .word 0x27a20140
  .word 0xafa200ac
  .word 0x27a20110
  .word 0xafa200b0
  .word 0x27a200f0
  .word 0xafa200b8
  .word 0x27a200d0
  .word 0xafa200c0
  .word 0x0000202d
  .word 0x32220001
  .word 0x10400002
  .word 0x00000000
  .word 0x24040001
  .word 0x0008143c
  .word 0x0002143f
  .word 0x00021880
  .word 0x007d1021
  .word 0x244200a0
  .word 0x8c420000
  .word 0x10400002
  .word 0x00000000
  .word 0x0040b02d
  .word 0x00048040
  .word 0x0008ac3c
  .word 0x0015ac3f
  .word 0x44806000
  .word 0x324600ff
  .word 0x007d1021
  .word 0x02021021
  .word 0x84470250
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a386
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x00171c3c
  .word 0x00031c3f
  .word 0x001510c0
  .word 0x00551023
  .word 0x00021040
  .word 0x005d1021
  .word 0x244201d0
  .word 0x00431021
  .word 0x90420000
  .word 0x0002a880
  .word 0x44806000
  .word 0x324600ff
  .word 0x02151021
  .word 0x00021040
  .word 0x02c21021
  .word 0x84470000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a386
  .word 0x4600a3c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x32230002
  .word 0x10600012
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x26020001
  .word 0x00551021
  .word 0x00021040
  .word 0x02c21021
  .word 0x84470000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x4600a386
  .word 0x4600a3c6
  .word 0x0c1038fc
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
  .word 0xc7b40000
  .word 0x27bd0280
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset

// FUN_003FFA20


asm u8 FUN_003ffa20(u64 param_1,u64 param_2,int param_3)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x00a0882d
  .word 0x00c0802d
  .word 0x84c2000e
  .word 0x14400019
  .word 0x00000000
  .word 0x8604000c
  .word 0x8603000a
  .word 0x3c023f00
  .word 0x44820800
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000843
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0x00031200
  .word 0x00431023
  .word 0x0044001a
  .word 0x00001812
  .word 0x240200ff
  .word 0x00433823
  .word 0x10000021
  .word 0x00000000
  .word 0x8602000a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xc7828110
  .word 0x46001042
  .word 0x8602000c
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x00000000
  .word 0x00000000
  .word 0x46001300
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x460000c7
  .word 0x3c023e80
  .word 0x44821000
  .word 0x3c023f80
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4603131c
  .word 0x8602000a
  .word 0x000219c0
  .word 0x8602000c
  .word 0x0062001a
  .word 0x00001812
  .word 0x24020080
  .word 0x00433823
  .word 0x86080010
  .word 0x86020008
  .word 0x2442ffff
  .word 0x00024c3c
  .word 0x00094c3f
  .word 0x0240202d
  .word 0x0220282d
  .word 0x0000302d
  .word 0x240a0001
  .word 0x0c0ffd8c
  .word 0x00000000
  .word 0x8602000a
  .word 0x24420001
  .word 0xa602000a
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8602000c
  .word 0x0062102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
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
  .word 0x00000000
  .word 0x00000000
}

// FUN_003FFBB0
void FUN_003ffbb0(int param_1,int param_2)
{
  u32 *puVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  int lVar5;

  for (; param_2 != 0; param_2 = *(int *)(param_2 + 0x10)) {
    puVar1 = *(u32 **)(*(int *)(param_2 + 0x14) + 0x1c);
    uVar2 = puVar1[1];
    switch (uVar2) {
    case 1:
      uVar3 = FUN_003e6dc0();
      uVar4 = FUN_003c58f0(0,0x58,5,0x1a);
      lVar5 = FUN_003f2f70_i((int)uVar4,(int)uVar3,0);
      FUN_003c5a20(uVar4);
      if (lVar5 == 0) *puVar1 |= 1;
      break;
    case 5:
      uVar3 = FUN_003e6dc0();
      uVar4 = FUN_003c58f0(0,0x58,5,0x1a);
      lVar5 = FUN_003f2f70_i((int)uVar4,(int)uVar3,1);
      FUN_003c5a20(uVar4);
      if (lVar5 == 0) *puVar1 |= 1;
      break;
    case 6:
      uVar3 = FUN_003e6dc0();
      uVar4 = FUN_003c58f0(0,0x58,5,0x1a);
      lVar5 = FUN_003f2f70_i((int)uVar4,(int)uVar3,2);
      FUN_003c5a20(uVar4);
      if (lVar5 == 0) *puVar1 |= 1;
      break;
    case 0xd:
      lVar5 = FUN_00409e90();
      if (lVar5 == 0) *puVar1 |= 1;
      else *puVar1 &= 0xfffffffe;
      break;
    case 0xb:
      lVar5 = FUN_0017c700();
      if (lVar5 == 0) *puVar1 |= 1;
      else *puVar1 &= 0xfffffffe;
      break;
    }
  }
}

// FUN_003FFE00


void FUN_003ffe00(int param_1)



{

  int iVar1;

  int iVar2;

  

  if (param_1 != 0) {

    iVar1 = *(int *)param_1;

    for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {

      FUN_003ffbb0(iVar1,iVar2);

    }

  }

  return;

}

// W212: signed-byte and typed-callback transfer measured nd914 -> nd972 (1344 -> 1320 bytes); rejected.
// W212: retaining the final callback across calls fixed the 0x100-byte frame but measured nd914 -> nd942 and 1344/1344 -> 1352/1344; rejected as over-window.
// W325 pragma sweep: opt_loop_invariants on nd953 -> nd939 (obj 1328/1344).
#pragma opt_loop_invariants on
// W325 pragma sweep: opt_common_subs off nd953 -> nd894 (obj 1344/1344).
#pragma opt_common_subs off
// FUN_003FFE60


asm int * FUN_003ffe60(int param_1)
{
  .set noreorder
  .word 0x27bdff00
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
  .word 0x0080a82d
  .word 0x3c160040
  .word 0x26d606c0
  .word 0x3c1e0040
  .word 0x27de0b90
  .word 0x2ea10009
  .word 0x102000d6
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463bdb0
  .word 0x00151080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x2411009a
  .word 0x24100081
  .word 0x24130066
  .word 0x24120005
  .word 0x2786ac90
  .word 0x27a500f0
  .word 0x24040004
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200f0
  .word 0xffa200f8
  .word 0x100000cd
  .word 0x00000000
  .word 0x241100d7
  .word 0x24100064
  .word 0x24130070
  .word 0x24120004
  .word 0x2786ac98
  .word 0x27a500e8
  .word 0x0240202d
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200e8
  .word 0xffa200f8
  .word 0x3c160040
  .word 0x26d60740
  .word 0x100000b7
  .word 0x00000000
  .word 0x0000a02d
  .word 0x24040170
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x36940002
  .word 0x24130062
  .word 0x24020003
  .word 0x12820044
  .word 0x00000000
  .word 0x24020002
  .word 0x1282002e
  .word 0x00000000
  .word 0x24020001
  .word 0x12820018
  .word 0x00000000
  .word 0x12800003
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x241100a8
  .word 0x2410006c
  .word 0x24120004
  .word 0x2786aca0
  .word 0x27a500e0
  .word 0x0240202d
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200e0
  .word 0xffa200f8
  .word 0x10000038
  .word 0x00000000
  .word 0x24110077
  .word 0x2410006c
  .word 0x24120005
  .word 0x2786aca8
  .word 0x27a500d8
  .word 0x24040004
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200d8
  .word 0xffa200f8
  .word 0x10000025
  .word 0x00000000
  .word 0x24110077
  .word 0x2410006c
  .word 0x24120005
  .word 0x2786acb0
  .word 0x27a500d0
  .word 0x24040004
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200d0
  .word 0xffa200f8
  .word 0x10000012
  .word 0x00000000
  .word 0x24110046
  .word 0x2410006c
  .word 0x24120006
  .word 0x2786acb8
  .word 0x27a500c8
  .word 0x24040004
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200c8
  .word 0xffa200f8
  .word 0x3c160040
  .word 0x26d608f0
  .word 0x10000054
  .word 0x00000000
  .word 0x24110028
  .word 0x2410016d
  .word 0x24041204
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24041206
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24120006
  .word 0x2786acc0
  .word 0x27a500c0
  .word 0x24040004
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200c0
  .word 0xffa200f8
  .word 0x1000003b
  .word 0x00000000
  .word 0x2411005d
  .word 0x24100055
  .word 0x24130071
  .word 0x24120003
  .word 0x2786acc8
  .word 0x27a500b8
  .word 0x24040004
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200b8
  .word 0xffa200f8
  .word 0x10000027
  .word 0x00000000
  .word 0x241100e6
  .word 0x2410016d
  .word 0x24130070
  .word 0x24120003
  .word 0x2786acd0
  .word 0x27a500b0
  .word 0x24040004
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200b0
  .word 0xffa200f8
  .word 0x10000013
  .word 0x00000000
  .word 0x241100e6
  .word 0x2410016d
  .word 0x24130070
  .word 0x24120004
  .word 0x2786acd8
  .word 0x27a500a8
  .word 0x0240202d
  .word 0x80c30000
  .word 0x80c20001
  .word 0x24c60002
  .word 0x2484ffff
  .word 0xa0a30000
  .word 0xa0a20001
  .word 0x24a50002
  .word 0x1c80fff8
  .word 0x00000000
  .word 0xdfa200a8
  .word 0xffa200f8
  .word 0x0000202d
  .word 0x2405000c
  .word 0x2406000a
  .word 0x0260382d
  .word 0x0c0f163c
  .word 0x00000000
  .word 0x0040982d
  .word 0x8c420024
  .word 0x8c540044
  .word 0xae930000
  .word 0x24040004
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c0f1134
  .word 0x00000000
  .word 0x8c430024
  .word 0xac750000
  .word 0xae820004
  .word 0xae950008
  .word 0x0000a82d
  .word 0x10000014
  .word 0x00000000
  .word 0x02bd1021
  .word 0x244200f8
  .word 0x80570000
  .word 0x0260202d
  .word 0x02e0282d
  .word 0x24060008
  .word 0x0000382d
  .word 0x0c0f1690
  .word 0x00000000
  .word 0x0040282d
  .word 0x00171e3c
  .word 0x00031e3f
  .word 0x8c420014
  .word 0x8c42001c
  .word 0xac430004
  .word 0x0260202d
  .word 0x0c0ffeec
  .word 0x00000000
  .word 0x26b50001
  .word 0x02b2102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x0260202d
  .word 0x24050800
  .word 0x0c0f1b58
  .word 0x00000000
  .word 0x0260202d
  .word 0x0220282d
  .word 0x0200302d
  .word 0x0c0f1b50
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x0260202d
  .word 0x02c0282d
  .word 0x0c0f1788
  .word 0x00000000
  .word 0x0260202d
  .word 0x03c0282d
  .word 0x0c0f17b8
  .word 0x00000000
  .word 0x2403000a
  .word 0x8e620024
  .word 0xa4430006
  .word 0x8e620024
  .word 0xa4430008
  .word 0x0280102d
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
  .word 0x27bd0100
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset
#pragma opt_loop_invariants reset

// FUN_004003A0


void FUN_004003a0(int param_1)



{

  if (param_1 != 0) {

    if (((u32 *)param_1)[1] != 0) {

      FUN_003c45f0(((u32 *)param_1)[1]);

    }

    FUN_003c5a20(*(u32 *)param_1);

  }

  return;

}

// W417 failed shape probes: top-level inversion nd342, direct sentinel return nd340, nested branch restructure nd291, flag/inner reorder nd207, direct zero return nd205, branch return nd31 (obj664), and final direct return nd137 (obj668); reverted. The explicit branch return 4 is exact.
// FUN_004003F0


u32 FUN_004003f0(int *param_1)



{

  u32 *puVar1;

  u32 uVar2;

  u32 uVar3;

  u32 uVar4;

  u32 uVar5;

  int iVar6;

  int lVar7;

  

  iVar6 = *param_1;

  lVar7 = FUN_003c6270(iVar6);

  if (lVar7 == 2) {

    return 0xffffffff;

  }

  else {

    puVar1 = *(u32 **)(iVar6 + 0xc);

    lVar7 = FUN_003c6c50(iVar6);

    if (lVar7 != 0) {
      if ((**(u32 **)(((u32 *)lVar7)[5] + 0x1c) & 1) != 0) {


        func_0010a4e0(0,0,0,8);

        return 0;

      
      }

      else {


        FUN_003c6ea0(iVar6);

        func_0010a4e0(0,0,0,1);

        uVar5 = *(u32 *)lVar7;

        FUN_003c6f10(iVar6);

        uVar2 = *puVar1;

        uVar3 = ((u32 *)puVar1[5])[1];

        uVar4 = *(u32 *)puVar1[5];

        iVar6 = param_1[1];

        puVar1 = *(u32 **)(iVar6 + 0x24);

        iVar6 = FUN_003c4910(iVar6,*(u16 *)(iVar6 + 0x10) + 1,0x14);

        iVar6 = *(int *)(iVar6 + 0x14);

        *(short *)(iVar6 + 4) = (short)uVar4;

        *(short *)(iVar6 + 6) = (short)uVar3;

        *(short *)(iVar6 + 8) = (short)uVar2;

        *(u16 *)(iVar6 + 0xe) = 0;

        *(u32 *)(iVar6 + 0x10) = *puVar1;

        *(u16 *)(iVar6 + 0xc) = 5;

      
        return uVar5;
      }
    }

    else {


        lVar7 = FUN_003c6c80(iVar6);

        if (lVar7 != 0) {

          FUN_003c6ea0(iVar6);

          func_0010a4e0(0,0,0,2);

          FUN_003c6f10(iVar6);

          uVar5 = *puVar1;

          uVar2 = ((u32 *)puVar1[5])[1];

          uVar3 = *(u32 *)puVar1[5];

          iVar6 = param_1[1];

          puVar1 = *(u32 **)(iVar6 + 0x24);

          iVar6 = FUN_003c4910(iVar6,*(u16 *)(iVar6 + 0x10) + 1,0x14);

          iVar6 = *(int *)(iVar6 + 0x14);

          *(short *)(iVar6 + 4) = (short)uVar3;

          *(short *)(iVar6 + 6) = (short)uVar2;

          *(short *)(iVar6 + 8) = (short)uVar5;

          *(u16 *)(iVar6 + 0xe) = 0;

          *(u32 *)(iVar6 + 0x10) = *puVar1;

          *(u16 *)(iVar6 + 0xc) = 5;

          return 4;

        }

        else {

          lVar7 = FUN_003c6ce0(iVar6);

          if ((lVar7 != 0) || (lVar7 = FUN_003c6d10(iVar6), lVar7 != 0)) {

            func_0010a4e0(0,0,0,0);

            uVar5 = *puVar1;

            uVar2 = ((u32 *)puVar1[5])[1];

            uVar3 = *(u32 *)puVar1[5];

            iVar6 = param_1[1];

            puVar1 = *(u32 **)(iVar6 + 0x24);

            iVar6 = FUN_003c4910(iVar6,*(u16 *)(iVar6 + 0x10) + 1,0x14);

            iVar6 = *(int *)(iVar6 + 0x14);

            *(short *)(iVar6 + 4) = (short)uVar3;

            *(short *)(iVar6 + 6) = (short)uVar2;

            *(short *)(iVar6 + 8) = (short)uVar5;

            *(u16 *)(iVar6 + 0xe) = 1;

            *(u32 *)(iVar6 + 0x10) = *puVar1;

            *(u16 *)(iVar6 + 0xc) = 7;

          }

          uVar5 = 0;

        }

      
    }


  }

  return uVar5;

}

// FUN_00400690


u64 FUN_00400690(u32 *param_1)



{

  FUN_003c6380(*param_1);

  return 0;

}

// FUN_004006C0


void FUN_004006c0(int param_1,int param_2,int param_3,int param_4)



{
  int iVar1;
  int iVar2;
  int iVar3;
  int bVar3;
  int *piVar4;
  short *psVar;

  iVar1 = *(int *)(*(int *)(*(int *)(param_4 + 0x24) + 0x44) + 4);

  iVar2 = *(int *)(iVar1 + 4);

  while (iVar2 != 0) {
    psVar = *(short **)(iVar2 + 0x14);
    bVar3 = FUN_003ffa20_3(psVar[2],psVar[3],psVar);
    iVar3 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x10);
    if (bVar3 != 0) {
      piVar4 = (int *)iVar1;
      FUN_003c49e0(piVar4,piVar4 + 1,iVar3);
    }

  }

  return;

}

// FUN_00400740


void FUN_00400740(int param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int lVar2;
  short *psVar;

  iVar1 = *(int *)(*(int *)(param_4 + 0x24) + 0x44);
  FUN_0040e3c0_i(param_1,param_2,1.0f,param_3,0x15,0);
  FUN_0040e3c0_i(param_1,param_2,1.0f,param_3,0x16,0);
  FUN_0040e3c0_i(param_1 + 0x15d,param_2,1.0f,param_3,0x15,0);
  FUN_0040e3c0_i(param_1 + 0x15d,param_2,1.0f,param_3,0x16,0);
  FUN_0040e3c0_i(param_1 + 0x70,param_2,1.0f,param_3,0x17,0);
  FUN_0040e3c0_i(param_1 + 0x70,param_2,1.0f,param_3,0x18,0);
  FUN_0040e3c0_i(param_1 + 0xe0,param_2,1.0f,param_3,0x17,0);
  FUN_0040e3c0_i(param_1 + 0xe0,param_2,1.0f,param_3,0x18,0);

  iVar1 = *(int *)(iVar1 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  while (iVar2 != 0) {
    psVar = *(short **)(iVar2 + 0x14);
    lVar2 = FUN_003ffa20_3(psVar[2],psVar[3],psVar);
    iVar3 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x10);
    if (lVar2 != 0) {
      FUN_003c49e0_ro((int *)iVar1,(int *)((u8 *)iVar1 + 4),iVar3);
    }
  }
}

// FUN_004008F0


asm void FUN_004008f0(int param_1,int param_2,u8 param_3,int param_4)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x8ce30024
  .word 0x8c700044
  .word 0x94e60010
  .word 0x24030006
  .word 0x10c3002d
  .word 0x00000000
  .word 0x24030005
  .word 0x10c30018
  .word 0x00000000
  .word 0x24030004
  .word 0x10c30003
  .word 0x00000000
  .word 0x10000035
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x24070053
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070054
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x24070051
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070052
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x2407004f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070050
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8e110004
  .word 0x8e300004
  .word 0x1000000e
  .word 0x00000000
  .word 0x8e060014
  .word 0x84c40004
  .word 0x84c50006
  .word 0x0c0ffe88
  .word 0x00000000
  .word 0x0200302d
  .word 0x8e100010
  .word 0x10400005
  .word 0x00000000
  .word 0x0220202d
  .word 0x26250004
  .word 0x0c0f1278
  .word 0x00000000
  .word 0x1600fff2
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
}

// W417 probe negative: removing the drawAlpha copy produced nd77 (baseline nd75, object 240/window256); declaration-order permutations were no better.
// FUN_00400A90


asm void FUN_00400a90(int x,int y,int alpha,int task,u32 *entry)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x00c0182d
  .word 0x8ce60024
  .word 0x8ccc0044
  .word 0x8d020014
  .word 0x8c4b001c
  .word 0x0000102d
  .word 0x0000682d
  .word 0x84ca0004
  .word 0x84c90008
  .word 0x8ce6000c
  .word 0x15060002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400010
  .word 0x00000000
  .word 0x000a1900
  .word 0x006a3023
  .word 0x00061880
  .word 0x00c31821
  .word 0x000318c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44890000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000803
  .word 0x46000024
  .word 0x440d0000
  .word 0x240300ff
  .word 0x8d660000
  .word 0x30c60001
  .word 0x10c00008
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808090
  .word 0x46000802
  .word 0x46000024
  .word 0x44030000
  .word 0x008d2021
  .word 0x3c063f80
  .word 0x44866000
  .word 0x858b0008
  .word 0x8d060000
  .word 0x24c6ffff
  .word 0x00064c3c
  .word 0x00094c3f
  .word 0x344a0002
  .word 0x0000302d
  .word 0x0060382d
  .word 0x0160402d
  .word 0x0c0ffd8c
  .word 0x00000000
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00400B90


asm void FUN_00400b90(int param_1,int param_2,int param_3,int param_4,
                 u32 *param_5)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x0220202d
  .word 0x0c0f1b84
  .word 0x00000000
  .word 0x24050001
  .word 0x10450036
  .word 0x00000000
  .word 0x24030014
  .word 0x1043002a
  .word 0x00000000
  .word 0x2403000c
  .word 0x10430003
  .word 0x00000000
  .word 0x10000050
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c440044
  .word 0x8e020014
  .word 0x8c43001c
  .word 0x0000302d
  .word 0x8e22000c
  .word 0x16020002
  .word 0x00000000
  .word 0x00a0302d
  .word 0x8c620000
  .word 0x30420001
  .word 0x10400008
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808090
  .word 0x46000802
  .word 0x46000024
  .word 0x44120000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x84880008
  .word 0x8e020000
  .word 0x2442ffff
  .word 0x00024c3c
  .word 0x00094c3f
  .word 0x34ca0002
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000302d
  .word 0x0240382d
  .word 0x0c0ffd8c
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0220382d
  .word 0x0200402d
  .word 0x0c1002a4
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e220024
  .word 0x8c440044
  .word 0x8e020014
  .word 0x8c43001c
  .word 0x0000302d
  .word 0x8e22000c
  .word 0x16020002
  .word 0x00000000
  .word 0x00a0302d
  .word 0x8c620000
  .word 0x30420001
  .word 0x10400008
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808090
  .word 0x46000802
  .word 0x46000024
  .word 0x44120000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x84880008
  .word 0x8e020000
  .word 0x2442ffff
  .word 0x00024c3c
  .word 0x00094c3f
  .word 0x34ca0002
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000302d
  .word 0x0240382d
  .word 0x0c0ffd8c
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00400D60


int FUN_00400d60(void)



{

  int iVar1;

  int iVar2;

  KwlnTask *task;

  

  iVar2 = FUN_003c44d0(0x20,0,0,0);

  iVar1 = *(int *)(iVar2 + 0x24);

  *(int *)(iVar1 + 8) = iVar2;

  task = kwlnTaskCreate(0,DAT_006af340,0x18b3,(KwlnTaskUpdateFunc)FUN_00401210,0,(void *)iVar1);
  *(int *)(iVar1 + 0xc) = (int)task;
  task = kwlnTaskCreate(task,DAT_006af360,0x18b5,(KwlnTaskUpdateFunc)FUN_004012c0,0,(void *)iVar1);
  kwlnTaskCreate(task,DAT_006af380,0x18b7,(KwlnTaskUpdateFunc)FUN_00401370,0,(void *)iVar1);

  *(u32 *)(iVar1 + 0x18) = 0xffffffff;

  return iVar1;

}

// FUN_00400E30


void FUN_00400e30(int param_1)



{

  int iVar1;

  

  if ((param_1 != 0) && (iVar1 = param_1, *(int *)(iVar1 + 8) != 0)) {

    if (*(int *)(iVar1 + 0xc) != 0) {

      kwlnTaskDestroyWithHierarchy((KwlnTask *)*(u32 *)(iVar1 + 0xc));

    }

    FUN_003c45f0(*(u32 *)(iVar1 + 8));

  }

  return;

}

// FUN_00400E90


asm void FUN_00400e90(u32 param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a82d
  .word 0x8c940008
  .word 0x8c840000
  .word 0x30830001
  .word 0x1060009c
  .word 0x00000000
  .word 0x30830002
  .word 0x1060004f
  .word 0x00000000
  .word 0x8ea50010
  .word 0x8ea30014
  .word 0x000320c0
  .word 0x8ca30000
  .word 0x0064b021
  .word 0x8ed70000
  .word 0x0000882d
  .word 0x0000902d
  .word 0x1000003b
  .word 0x00000000
  .word 0x001218c0
  .word 0x02e38021
  .word 0x8ea40004
  .word 0x8e030000
  .word 0x1483002e
  .word 0x00000000
  .word 0x86020004
  .word 0x24460001
  .word 0x0280202d
  .word 0x26850004
  .word 0x0c0f12d4
  .word 0x00000000
  .word 0x8c530014
  .word 0x8e640000
  .word 0x30820001
  .word 0x14400007
  .word 0x00000000
  .word 0x34820001
  .word 0xae620000
  .word 0x34420002
  .word 0xae620000
  .word 0x1000000d
  .word 0x00000000
  .word 0x86030006
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x2402fffe
  .word 0x00821824
  .word 0xae630000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae620000
  .word 0x8e620008
  .word 0x8c420000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x2405192a
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0260282d
  .word 0x0200302d
  .word 0x8e620008
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e040000
  .word 0x8ea30004
  .word 0x0064082a
  .word 0x14200002
  .word 0x00000000
  .word 0x26310001
  .word 0x26520001
  .word 0x8ec40004
  .word 0x0244182a
  .word 0x1460ffc3
  .word 0x00000000
  .word 0x16240005
  .word 0x00000000
  .word 0x8ea40000
  .word 0x2403fffd
  .word 0x00831824
  .word 0xaea30000
  .word 0x0000882d
  .word 0x8e920004
  .word 0x1000002e
  .word 0x00000000
  .word 0x8e500014
  .word 0x8e030000
  .word 0x30630001
  .word 0x1060001f
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0200282d
  .word 0x0000302d
  .word 0x8e020008
  .word 0x8c420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24030002
  .word 0x10430011
  .word 0x00000000
  .word 0x24030001
  .word 0x10430008
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x0060882d
  .word 0x1000000b
  .word 0x00000000
  .word 0x8e040000
  .word 0x2403fffd
  .word 0x00831824
  .word 0xae030000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e040000
  .word 0x2403fffe
  .word 0x00831824
  .word 0xae030000
  .word 0x8e030004
  .word 0x24650001
  .word 0xae050004
  .word 0x3c030fff
  .word 0x3464ffff
  .word 0x00a4182a
  .word 0x14600002
  .word 0x00000000
  .word 0xae040004
  .word 0x8e520010
  .word 0x1640ffd2
  .word 0x00000000
  .word 0x8ea30004
  .word 0x24650001
  .word 0xaea50004
  .word 0x3c030fff
  .word 0x3464ffff
  .word 0x00a4182a
  .word 0x14600002
  .word 0x00000000
  .word 0xaea40004
  .word 0x8ea40000
  .word 0x30830004
  .word 0x1060000b
  .word 0x00000000
  .word 0x16200009
  .word 0x00000000
  .word 0x2403fffb
  .word 0x00831824
  .word 0xaea30000
  .word 0x34630002
  .word 0xaea30000
  .word 0x8ea30018
  .word 0xaea30014
  .word 0xaea00004
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

/* Retrieved lost argument: retail's call passes item as the 2nd arg (a1), which
 * also fixes the handler/item register coloring to retail's a1/a2 assignment. */
// FUN_00401170


void FUN_00401170(int root)
{
  code callback;
  u32 enabled;
  u32 *handler;
  u32 *item;
  u32 *list;
  int node;

  enabled = *(u32 *)root & 1;
  if (enabled != 0) {
    list = *(u32 **)(root + 8);
    if (enabled != 0) {
      for (node = list[1]; node != 0; node = *(int *)(node + 0x10)) {
        item = *(u32 **)(node + 0x14);
        handler = (u32 *)item[2];
        if ((handler[5] == 3) && ((*item & 1) != 0)) {
          callback = *(code *)(handler + 1);
          if (callback != (code)0) {
            (*callback)(root, item);
          }
        }
      }
    }
  }
}

// FUN_00401210


u32 FUN_00401210(int param_1)
{
  u32 *puVar1;
  u32 *puVar4;
  u32 uVar2;
  u32 uVar4;
  u32 uVar3;
  u32 *puVar2;
  code pcVar3;
  int iVar4;
  puVar1 = *(u32 **)(param_1 + 0x3c);
  uVar4 = *puVar1;
  uVar3 = uVar4 & 1;
  if (uVar3 == 0) {
    return 0;
  }
  puVar4 = (u32 *)puVar1[2];
  if (uVar3 != 0) {
    for (iVar4 = *(int *)(puVar4 + 1); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
      puVar2 = *(u32 **)(iVar4 + 0x14);
      uVar2 = puVar2[2];
      if (((*(int *)(uVar2 + 0x14) == 0) && ((*puVar2 & 1) != 0)) &&
         (pcVar3 = *(code *)(uVar2 + 4), pcVar3 != (code)0)) {
        (*pcVar3)(puVar1,puVar2);
      }
    }
  }
  return 0;
}

// FUN_004012C0


u64 FUN_004012c0(int param_1)



{

  u32 *puVar1;
  u32 *puVar4;

  u32 uVar2;
  code pcVar3;

  int iVar4;

  

  puVar1 = *(u32 **)(param_1 + 0x3c);
  if ((*puVar1 & 1) == 0) {
    return 0;
  }
  puVar4 = (u32 *)puVar1[2];
  if ((*puVar1 & 1) != 0) {
    for (iVar4 = *(int *)(puVar4 + 1); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {

      uVar2 = (*(u32 **)(iVar4 + 0x14))[2];

      if (((*(int *)(uVar2 + 0x14) == 2) && ((**(u32 **)(iVar4 + 0x14) & 1) != 0)) &&

         (pcVar3 = *(code *)(uVar2 + 4), pcVar3 != (code)0)) {

        (*pcVar3)(puVar1);

      }

    }

  }

  return 0;

}

// FUN_00401370


u64 FUN_00401370(int param_1)



{

  u32 *puVar1;
  u32 *puVar4;
  u32 uVar2;
  u32 uVar3;
  u32 *puVar2;
  code pcVar3;
  int iVar4;

  puVar1 = *(u32 **)(param_1 + 0x3c);
  uVar2 = *puVar1;
  uVar3 = uVar2 & 1;
  if (uVar3 == 0) {
    return 0;
  }
  puVar4 = (u32 *)puVar1[2];
  if (uVar3 != 0) {
    for (iVar4 = *(int *)(puVar4 + 1); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
      puVar2 = *(u32 **)(iVar4 + 0x14);
      uVar2 = puVar2[2];
      if (((*(int *)(uVar2 + 0x14) == 4) && ((*puVar2 & 1) != 0)) &&
         (pcVar3 = *(code *)(uVar2 + 4), pcVar3 != (code)0)) {
        (*pcVar3)(puVar1);
      }
    }
  }
  return 0;

}

// FUN_00401420


void FUN_00401420(int param_1,int param_2)



{

  int iVar1;

  int iVar2;

  int iVar3;

  int iVar4;

  

  *(int *)(param_1 + 0x10) = param_2;

  iVar1 = *(int *)(param_1 + 8);

  for (iVar4 = 0; iVar4 < *(int *)(param_2 + 0xc); iVar4 = iVar4 + 1) {

    iVar3 = iVar4 * 0x1c;

    iVar2 = FUN_003c4910(iVar1,*(u16 *)(iVar1 + 0x10) + 1,

                         *(int *)(*(int *)(param_2 + 8) + iVar3 + 8) + 0x10);

    iVar2 = *(int *)(iVar2 + 0x14);

    *(int *)(iVar2 + 8) = *(int *)(param_2 + 8) + iVar3;

    if (*(int *)(*(int *)(param_2 + 8) + iVar3 + 8) != 0) {

      *(int *)(iVar2 + 0xc) = iVar2 + 0x10;

    }

  }

  return;

}

// FUN_004014E0


u32 FUN_004014e0(u32 param_1)



{

  u32 *puVar1;

  u32 uVar2;

  int lVar3;

  u32 *puVar4;

  int iVar5;

  

  puVar4 = (u32 *)param_1;

  iVar5 = *(int *)(puVar4[2] + 4);

  while (iVar5 != 0) {
    puVar1 = *(u32 **)(iVar5 + 0x14);
    if ((*(code **)(puVar1[2] + 0x10) != (code *)0x0) && ((*puVar1 & 4) == 0)) {
      lVar3 = (*(code *)(puVar1[2] + 0x10))(param_1,puVar1);
      if (lVar3 == 0) {
        return 0;
      }
      *puVar1 = *puVar1 | 4;
    }
    iVar5 = *(int *)(iVar5 + 0x10);
  }
  uVar2 = *puVar4;
  *puVar4 = uVar2 & 0xfffffffe;
  *puVar4 = uVar2 & 0xfffffffe | 2;
  return 1;

}

// FUN_004015A0


void FUN_004015a0(u32 *param_1,u32 param_2)



{

  if (param_1[6] != param_2) {

    if ((*param_1 & 1) != 0) {

      *param_1 = *param_1 | 4;

    }

    *param_1 = *param_1 | 1;

    param_1[6] = param_2;

  }

  return;

}

// FUN_004015E0


u8 FUN_004015e0(u32 *param_1)



{

  return (*param_1 & 2) != 0;

}

// FUN_00401600


int FUN_00401600(u64 param_1,u64 param_2,int param_3)
{
  switch (param_3) {
  case 1:
  case 3:
    H_Maestro_00111c50_i(param_2);
    H_Maestro_RequestDraw_i(param_2);
    break;
  case 0x24:
    H_Maestro_SetAlphaMult_f32(0.0f,param_2);
    H_Maestro_00111c50_i(param_2);
    break;
  case 2:
  case 0x23:
    H_Maestro_00111c50_i(param_2);
    break;
  }
  return param_3;
}

// FUN_004016D0


u32 FUN_004016d0(u32 param_1)
{
  u32 uVar3;
  s32 lVar1;
  s32 lVar2;

  lVar1 = FUN_00173a00_s32(param_1,0);
  uVar3 = 1;
  lVar2 = FUN_00173a00_s32(param_1,1);
  if (lVar1 <= lVar2) {
    if (lVar1 == lVar2) {
      uVar3 |= 2;
    }
    else {
      uVar3 = 2;
    }
    lVar1 = lVar2;
  }
  lVar2 = FUN_00173a00_s32(param_1,2);
  if (lVar1 < lVar2) {
    if (lVar1 == lVar2) {
      uVar3 |= 4;
    }
    else {
      uVar3 = 4;
    }
    lVar1 = lVar2;
  }
  lVar2 = FUN_00173a00_s32(param_1,3);
  if (lVar1 < lVar2) {
    if (lVar1 == lVar2) {
      uVar3 |= 8;
    }
    else {
      uVar3 = 8;
    }
    lVar1 = lVar2;
  }
  lVar2 = FUN_00173a00_s32(param_1,4);
  if (lVar1 < lVar2) {
    if (lVar1 == lVar2) {
      uVar3 |= 0x10;
    }
    else {
      uVar3 = 0x10;
    }
  }
  return uVar3;
}

// FUN_00401800


int FUN_00401800(short param_1)



{

  s16 uVar1;

  s16 uVar2;

  s16 *puVar6;
  short *psVar5;
  int iVar3;
  u32 uVar3;
  u32 uVar4;

  short asStack_30 [24];

  
  puVar6 = (s16 *)(DAT_006af3a0_abs);
  psVar5 = asStack_30;
  iVar3 = 0xc;
  do {

    uVar1 = *puVar6;

    uVar2 = puVar6[1];

    puVar6 = puVar6 + 2;

    iVar3 = iVar3 + -1;

    *psVar5 = uVar1;

    psVar5[1] = uVar2;

    psVar5 = psVar5 + 2;

  } while (0 < iVar3);

  uVar4 = 0;
  uVar3 = (u16)param_1;
  goto check;
body:
  if (uVar3 == (u16)asStack_30[uVar4]) {
    return uVar4 + 0x1280;
  }
  uVar4 = uVar4 + 1;
check:
  if (uVar4 < 0x18) {
    goto body;
  }
  return 0;

}

// FUN_00401890


u32 FUN_00401890(short param_1)
{
  s16 uVar1;
  s16 uVar2;
  s16 *puVar6;
  short *psVar5;
  int iVar3;
  int flagId;
  u32 uVar3;
  u32 uVar4;
  short asStack_30 [24];

  puVar6 = (s16 *)DAT_006af3a0_abs;
  psVar5 = asStack_30;
  iVar3 = 0xc;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
    *psVar5 = uVar1;
    psVar5[1] = uVar2;
    psVar5 = psVar5 + 2;
  } while (0 < iVar3);

  uVar4 = 0;
  uVar3 = (u16)param_1;
  goto check;
body:
  if (uVar3 == (u16)asStack_30[uVar4]) {
    flagId = uVar4 + 0x1280;
    goto found;
  }
  uVar4 = uVar4 + 1;
check:
  if (uVar4 < 0x18) {
    goto body;
  }
  flagId = 0;
found:
  if (flagId != 0) {
    if (datGetFlag_u32_arg(flagId) == 0) {
      return 1;
    }
  }
  return 0;
}

// FUN_00401950


u32 FUN_00401950(u16 param_1)
{
  s16 uVar1;
  s16 uVar2;
  s16 *puVar6;
  short *psVar5;
  int iVar3;
  int flagId;
  u32 uVar3;
  u32 uVar4;
  short asStack_30 [24];

  puVar6 = (s16 *)DAT_006af3a0_abs;
  psVar5 = asStack_30;
  iVar3 = 0xc;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
    *psVar5 = uVar1;
    psVar5[1] = uVar2;
    psVar5 = psVar5 + 2;
  } while (0 < iVar3);

  uVar4 = 0;
  uVar3 = param_1;
  goto check;
body:
  if (uVar3 == (u16)asStack_30[uVar4]) {
    flagId = uVar4 + 0x1280;
    goto found;
  }
  uVar4 = uVar4 + 1;
check:
  if (uVar4 < 0x18) {
    goto body;
  }
  flagId = 0;
found:
  if (flagId != 0) {
    datSetFlag(flagId,1);
  }
  return 0;
}

#pragma push
#pragma opt_loop_invariants on
// FUN_00401A00






asm u32 FUN_00401a00(u16 param_1,u16 *param_2,short *param_3)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x00a0a02d
  .word 0x10c00004
  .word 0x00000000
  .word 0x00c0882d
  .word 0x10000002
  .word 0x00000000
  .word 0x27b1008e
  .word 0x16800006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051aa8
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96860002
  .word 0x8f85abf8
  .word 0x8f84abfc
  .word 0x0000382d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00071080
  .word 0x00a21821
  .word 0x94620000
  .word 0x14c20004
  .word 0x00000000
  .word 0x94620002
  .word 0x10000006
  .word 0x00000000
  .word 0x24e70001
  .word 0x00e4102a
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000102d
  .word 0xa6220000
  .word 0x10400004
  .word 0x00000000
  .word 0x24020002
  .word 0x1000006c
  .word 0x00000000
  .word 0x0000582d
  .word 0x320affff
  .word 0x3c02006b
  .word 0x7842f180
  .word 0x7fa20060
  .word 0x27a50060
  .word 0x27a40070
  .word 0x24030004
  .word 0x10000007
  .word 0x00000000
  .word 0x15420004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001b
  .word 0x00000000
  .word 0x256b0001
  .word 0x0060382d
  .word 0x00a0482d
  .word 0x0080402d
  .word 0x85260000
  .word 0x85220002
  .word 0x25290004
  .word 0x24e7ffff
  .word 0xa5060000
  .word 0xa5020002
  .word 0x25080004
  .word 0x1ce0fff8
  .word 0x00000000
  .word 0x2d620008
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x000b1040
  .word 0x005d1021
  .word 0x94420070
  .word 0x3042ffff
  .word 0x1440ffe3
  .word 0x00000000
  .word 0x0000102d
  .word 0x10400005
  .word 0x00000000
  .word 0x0010143c
  .word 0x0002143f
  .word 0x10000014
  .word 0x00000000
  .word 0x8f84abd0
  .word 0x0000282d
  .word 0x8f83abd4
  .word 0x10000009
  .word 0x00000000
  .word 0x84820000
  .word 0x144a0004
  .word 0x00000000
  .word 0x94820002
  .word 0x10000007
  .word 0x00000000
  .word 0x24840004
  .word 0x24a50001
  .word 0x00a3102b
  .word 0x1440fff6
  .word 0x00000000
  .word 0x0000102d
  .word 0x0002143c
  .word 0x0002143f
  .word 0x8f93abe0
  .word 0x0000902d
  .word 0x0002843c
  .word 0x0010843f
  .word 0x10000017
  .word 0x00000000
  .word 0x96620004
  .word 0x14500012
  .word 0x00000000
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051a47
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c1005b4
  .word 0x00000000
  .word 0x8e630000
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x26730010
  .word 0x26520001
  .word 0x8f82abe4
  .word 0x0242102b
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x0000982d
  .word 0x16600004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000004
  .word 0x00000000
  .word 0x96620006
  .word 0xa6220000
  .word 0x24020001
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop

// FUN_00401C90


u8 * FUN_00401c90(u32 *param_1,int param_2)



{

  u8 bVar1;
  u8 *pbVar2;

  u32 uVar3;

  u32 uVar4;

  

  pbVar2 = (u8 *)*param_1;

  uVar3 = 0;

  uVar4 = param_1[1];

  while (uVar3 < uVar4) {

    bVar1 = *(u8 *)(param_2 + 4);

    if (*pbVar2 > bVar1) goto advance;
    if (pbVar2[1] < bVar1) goto advance;

    return pbVar2;

advance:

    pbVar2 = pbVar2 + 6;

    uVar3 = uVar3 + 1;

  }

  return (u8 *)0x0;

}

// FUN_00401CF0


u8 * FUN_00401cf0(int param_1)
{
  u8 value;
  u8 *entry;
  u32 index;
  u32 count;
  u32 aboveRange;

  if (param_1 == 0) {
    K_Assert((const char *)DAT_006aede8,0x1ada);
  }

  entry = pbGpffffabe8;
  index = 0;
  count = uGpffffabec;
  goto check;
body:
  value = *(u8 *)(param_1 + 4);
  if (*entry > value) {
    goto increment;
  }
  aboveRange = entry[1] < value;
  if (aboveRange) {
    goto increment;
  }
  goto found;
found:
  return entry;
increment:
  entry = entry + 0x2e;
  index = index + 1;
check:
  if (index < count) {
    goto body;
  }
  return (u8 *)0x0;

}

// FUN_00401D90


short * FUN_00401d90(int param_1)



{

  u32 uVar2;
  u16 *psVar1;

  u32 uVar3;

  

  psVar1 = (u16 *)psGpffffabf0;
  uVar2 = 0;
  uVar3 = uGpffffabf4;

  while (uVar2 < uVar3) {

    if (*psVar1 == *(u16 *)(param_1 + 2)) {

      return (short *)psVar1;

    }

    psVar1 = psVar1 + 3;

    uVar2 = uVar2 + 1;

  }

  return (short *)0x0;

}

#pragma push
#pragma opt_loop_invariants on
#pragma opt_rebuildconditionals off
// FUN_00401DE0






asm u32 FUN_00401de0(u32 param_1,int param_2,int param_3)
{
  .set noreorder
  .word 0x27bdff50
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0802d
  .word 0x00c0982d
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051b5d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16600006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051b5e
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0280202d
  .word 0x0000282d
  .word 0x2406001c
  .word 0x0c148502
  .word 0x00000000
  .word 0x96620002
  .word 0x8f86abf8
  .word 0x8f85abfc
  .word 0x0000382d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00071880
  .word 0x00c32021
  .word 0x94830000
  .word 0x14430004
  .word 0x00000000
  .word 0x94830002
  .word 0x10000006
  .word 0x00000000
  .word 0x24e70001
  .word 0x00e5182a
  .word 0x1460fff5
  .word 0x00000000
  .word 0x0000182d
  .word 0x00038c3c
  .word 0x00118c3f
  .word 0x10600013
  .word 0x00000000
  .word 0x86820000
  .word 0x34420002
  .word 0xa6820000
  .word 0x26820004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051b2f
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x26850004
  .word 0x0c060a34
  .word 0x00000000
  .word 0x100000dc
  .word 0x00000000
  .word 0x860c0000
  .word 0x0000682d
  .word 0x3183ffff
  .word 0x3c04006b
  .word 0x7884f180
  .word 0x7fa40080
  .word 0x27a70080
  .word 0x27a60090
  .word 0x24050004
  .word 0x10000007
  .word 0x00000000
  .word 0x14640004
  .word 0x00000000
  .word 0x24040001
  .word 0x1000001b
  .word 0x00000000
  .word 0x25ad0001
  .word 0x00a0482d
  .word 0x00e0582d
  .word 0x00c0502d
  .word 0x85680000
  .word 0x85640002
  .word 0x256b0004
  .word 0x2529ffff
  .word 0xa5480000
  .word 0xa5440002
  .word 0x254a0004
  .word 0x1d20fff8
  .word 0x00000000
  .word 0x2da40008
  .word 0x14800004
  .word 0x00000000
  .word 0x0000202d
  .word 0x10000004
  .word 0x00000000
  .word 0x000d2040
  .word 0x009d2021
  .word 0x94840090
  .word 0x3084ffff
  .word 0x1480ffe3
  .word 0x00000000
  .word 0x0000202d
  .word 0x10800013
  .word 0x00000000
  .word 0x000c2c3c
  .word 0x00052c3f
  .word 0x8f84b730
  .word 0x000218c0
  .word 0x00621023
  .word 0x00021040
  .word 0x00441021
  .word 0x90430002
  .word 0x24020001
  .word 0x14620005
  .word 0x00000000
  .word 0x0002943c
  .word 0x0012943f
  .word 0x10000025
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000022
  .word 0x00000000
  .word 0x8f86abd0
  .word 0x0000382d
  .word 0x8f85abd4
  .word 0x10000009
  .word 0x00000000
  .word 0x84c40000
  .word 0x14830004
  .word 0x00000000
  .word 0x94c30002
  .word 0x10000007
  .word 0x00000000
  .word 0x24c60004
  .word 0x24e70001
  .word 0x00e5202b
  .word 0x1480fff6
  .word 0x00000000
  .word 0x0000182d
  .word 0x00032c3c
  .word 0x00052c3f
  .word 0x8f84b730
  .word 0x000218c0
  .word 0x00621023
  .word 0x00021040
  .word 0x00441021
  .word 0x90430002
  .word 0x24020001
  .word 0x14620005
  .word 0x00000000
  .word 0x0002943c
  .word 0x0012943f
  .word 0x10000002
  .word 0x00000000
  .word 0x0000902d
  .word 0x8f91abe0
  .word 0x0000802d
  .word 0x0005b43c
  .word 0x0016b43f
  .word 0x10000017
  .word 0x00000000
  .word 0x96220004
  .word 0x14560012
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051a47
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c1005b4
  .word 0x00000000
  .word 0x8e230000
  .word 0x00621024
  .word 0x0002102b
  .word 0x10400003
  .word 0x00000000
  .word 0x10000008
  .word 0x00000000
  .word 0x26310010
  .word 0x26100001
  .word 0x8f82abe4
  .word 0x0202102b
  .word 0x1440ffe7
  .word 0x00000000
  .word 0x0000882d
  .word 0x16200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000b0
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051b37
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96300006
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05c358
  .word 0x00000000
  .word 0xa6900004
  .word 0x8c440004
  .word 0xae840008
  .word 0x0c0fc684
  .word 0x00000000
  .word 0x86820004
  .word 0x0040202d
  .word 0x0c05c358
  .word 0x00000000
  .word 0x26240008
  .word 0x0260282d
  .word 0x0c100724
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051afa
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96020002
  .word 0xa682000e
  .word 0x96020004
  .word 0xa6820010
  .word 0x0260202d
  .word 0x0c10073c
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051b05
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x96630002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00621021
  .word 0x90420002
  .word 0x00021040
  .word 0x02021021
  .word 0x94420000
  .word 0xa282000d
  .word 0x1240001a
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c100764
  .word 0x00000000
  .word 0x0040802d
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051b51
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x26820004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051b52
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x92020002
  .word 0xa682000e
  .word 0x92020003
  .word 0xa6820010
  .word 0x92020004
  .word 0xa282000d
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x86820000
  .word 0x30420002
  .word 0x10400006
  .word 0x00000000
  .word 0x24620002
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10000004
  .word 0x00000000
  .word 0x24620001
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0002843c
  .word 0x0010843f
  .word 0x0200202d
  .word 0x0c05f60c
  .word 0x00000000
  .word 0xa2820002
  .word 0x0200202d
  .word 0x0c05f670
  .word 0x00000000
  .word 0xa2820003
  .word 0x86820000
  .word 0x34420001
  .word 0xa6820000
  .word 0x96840004
  .word 0x0c100600
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x10400026
  .word 0x00000000
  .word 0x86840004
  .word 0x27a500ac
  .word 0x0c05c3b4
  .word 0x00000000
  .word 0x8fa400ac
  .word 0x24030004
  .word 0x1083001a
  .word 0x00000000
  .word 0x24030003
  .word 0x10830014
  .word 0x00000000
  .word 0x24030002
  .word 0x1083000e
  .word 0x00000000
  .word 0x24030001
  .word 0x10830008
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x8c550024
  .word 0x1000000b
  .word 0x00000000
  .word 0x8c55001c
  .word 0x10000008
  .word 0x00000000
  .word 0x8c55001c
  .word 0x10000005
  .word 0x00000000
  .word 0x8c550020
  .word 0x10000002
  .word 0x00000000
  .word 0x8c550018
  .word 0xae950018
  .word 0x10000007
  .word 0x00000000
  .word 0x92630004
  .word 0x24020005
  .word 0x0062001a
  .word 0x00001012
  .word 0x24420001
  .word 0xae820018
  .word 0x24020001
  .word 0xdfbf0070
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
#pragma pop

// FUN_00402400


void FUN_00402400(int param_1,u16 *param_2)



{

  u32 uVar1;

  

  *param_2 = *(u16 *)(param_1 + 4);

  param_2[5] = 1;

  *(u8 *)((int)param_2 + 9) = *(u8 *)(param_1 + 0xd);

  *(u8 *)(param_2 + 4) = *(u8 *)(param_1 + 0xc);

  uVar1 = FUN_003f1a10(*(u32 *)(param_1 + 8));

  *(u32 *)(param_2 + 2) = uVar1;

  *(u32 *)(param_2 + 6) = 1;

  param_2[8] = *(u16 *)(param_1 + 0xe);

  param_2[9] = *(u16 *)(param_1 + 0x10);

  return;

}

// FUN_00402480


u32 FUN_00402480(u16 *param_1)



{

  u32 uVar1;

  int iVar2;

  u16 auStack_20 [16];

  

  if (param_1 == (u16 *)0x0) {

    param_1 = auStack_20;

  }

  FUN_0017c220(param_1);

  if ((*(short *)param_1 & 1) == 0) {

    uVar1 = 0;

  }

  else {

    iVar2 = clndIsDateInRangeFromStart((char)param_1[1],*(s8 *)((int)param_1 + 3),0x16d);

    if (iVar2 != 0) {

      uVar1 = 1;

    }

    else {

      uVar1 = 0xffffffff;

    }

  }

  return uVar1;

}

// W416 measured negative: retail offset 64 has a 0x10 extension, while ours already has the same pair nearby at 52/56; layout, not width.
// FUN_00402510


asm u32 FUN_00402510(u32 param_1,long param_2,u32 param_3,short param_4)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x00e0802d
  .word 0x2402ffff
  .word 0x16420007
  .word 0x00000000
  .word 0x3262ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05c494
  .word 0x00000000
  .word 0x0040902d
  .word 0x3274ffff
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c05bd8c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x16820041
  .word 0x00000000
  .word 0x32220008
  .word 0x1440000d
  .word 0x00000000
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x16020004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000033
  .word 0x00000000
  .word 0x32220002
  .word 0x1440000d
  .word 0x00000000
  .word 0x00131603
  .word 0x3052000f
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c05be04
  .word 0x00000000
  .word 0x304200ff
  .word 0x12420004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000024
  .word 0x00000000
  .word 0x32220004
  .word 0x1440000d
  .word 0x00000000
  .word 0x00131403
  .word 0x305200ff
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c05be40
  .word 0x00000000
  .word 0x304200ff
  .word 0x12420004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000015
  .word 0x00000000
  .word 0x32220001
  .word 0x1040000e
  .word 0x00000000
  .word 0x24040001
  .word 0x0200282d
  .word 0x0c05be04
  .word 0x00000000
  .word 0x304300ff
  .word 0x00131603
  .word 0x3042000f
  .word 0x0043082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000005
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004026B0


u32 FUN_004026b0(int param_1,int param_2,u32 param_3)
{
  int available;
  int count;
  u32 category;
  u32 iterationCategory;
  u32 forceCategory;
  u32 preserveEffect;
  u8 effect;
  u32 randomize;
  struct {
    u16 id;
    u16 unk_02;
    u32 type;
    u8 unk_08;
    u8 effect;
    u16 firstStat;
    u16 secondStat;
    u16 unk_0e;
    u16 unk_10;
    u8 unk_12[2];
  } scratch;

  if (func_00171250((s16)(param_1 & 0xffff)) != 4) {
    available = func_0016f490(1);
    if (300 - available < param_2) {
      return 0;
    }

    count = 0;
    forceCategory = param_3 & 2;
    category = (param_1 >> 24) & 0xf;
    randomize = param_3 & 1;
    preserveEffect = param_3 & 4;
    effect = (u8)(param_1 >> 16);

    for (; count < param_2; count = count + 1) {
      if (forceCategory != 0) {
        iterationCategory = 2;
      } else {
        iterationCategory = category;
      }
      if ((iterationCategory != 0) && (randomize != 0)) {
        RpRandom();
      }
      func_001828d0((short)param_1,&scratch);
      if (preserveEffect == 0) {
        scratch.effect = effect;
      }
      func_001830c0(&scratch);
    }
  }
  return 1;
}

// W419 probe negative: hoisting the cVar1==0 func_00171110 call before the dispatch grew object1120 -> 1156 beyond the 1152-byte window; reversed chain measured nd697 -> 706.
// FUN_00402800


asm void FUN_00402800(int param_1)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080982d
  .word 0x24040008
  .word 0x0c0f1f58
  .word 0x00000000
  .word 0x0040902d
  .word 0x0260202d
  .word 0x0c100e18
  .word 0x00000000
  .word 0x0040882d
  .word 0x0260202d
  .word 0x0c100e20
  .word 0x00000000
  .word 0x0040802d
  .word 0x9223000a
  .word 0x24020004
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020003
  .word 0x10620030
  .word 0x00000000
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8222000e
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x8624000c
  .word 0x0c05c444
  .word 0x00000000
  .word 0x27a40050
  .word 0x2785ace0
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8623000c
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00433021
  .word 0x27a40050
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x8623000c
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00433021
  .word 0x27a40050
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x8e26000c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05006b
  .word 0x24a5f3d0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x0000282d
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x9222000a
  .word 0x14400016
  .word 0x00000000
  .word 0x8626000c
  .word 0x0240202d
  .word 0x24050002
  .word 0x24070011
  .word 0x0c0e9004
  .word 0x00000000
  .word 0x96220008
  .word 0x30420002
  .word 0x10400004
  .word 0x00000000
  .word 0x24060002
  .word 0x10000004
  .word 0x00000000
  .word 0x8222000e
  .word 0x0002373c
  .word 0x0006373f
  .word 0x0240202d
  .word 0x24050003
  .word 0x24070011
  .word 0x0c0e9004
  .word 0x00000000
  .word 0x9226000b
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050001
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x92030006
  .word 0x24020004
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020003
  .word 0x10620030
  .word 0x00000000
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8202000a
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x86040008
  .word 0x0c05c444
  .word 0x00000000
  .word 0x27a40050
  .word 0x2785ace0
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x86030008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00433021
  .word 0x27a40050
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x86030008
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00433021
  .word 0x27a40050
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a40050
  .word 0x3c05006b
  .word 0x24a5f3d0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050005
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x92020006
  .word 0x1440000f
  .word 0x00000000
  .word 0x86060008
  .word 0x0240202d
  .word 0x24050007
  .word 0x24070011
  .word 0x0c0e9004
  .word 0x00000000
  .word 0x8202000a
  .word 0x0002373c
  .word 0x0006373f
  .word 0x0240202d
  .word 0x24050008
  .word 0x24070011
  .word 0x0c0e9004
  .word 0x00000000
  .word 0x92060007
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050006
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c100e38
  .word 0x00000000
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x24050009
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c100e00
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000a
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c100e0c
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000b
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c100dd0
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x27a40050
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0240202d
  .word 0x2405000c
  .word 0x27a60050
  .word 0x0c0e9088
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00402C80


asm void FUN_00402c80(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x0c100e18
  .word 0x00000000
  .word 0x0040882d
  .word 0x0240202d
  .word 0x0c100e20
  .word 0x00000000
  .word 0x0040802d
  .word 0x9223000a
  .word 0x24020004
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020003
  .word 0x10620030
  .word 0x00000000
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8222000e
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x8624000c
  .word 0x0c05c444
  .word 0x00000000
  .word 0x27a40040
  .word 0x2785ace0
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x8623000c
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00433021
  .word 0x27a40040
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x8623000c
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00433021
  .word 0x27a40040
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x8e26000c
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a40040
  .word 0x3c05006b
  .word 0x24a5f3d0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x9222000a
  .word 0x14400014
  .word 0x00000000
  .word 0x8625000c
  .word 0x24040002
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x96220008
  .word 0x30420002
  .word 0x10400004
  .word 0x00000000
  .word 0x24050002
  .word 0x10000004
  .word 0x00000000
  .word 0x8222000e
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x24040003
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x9226000b
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24040001
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x92030006
  .word 0x24020004
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020003
  .word 0x10620030
  .word 0x00000000
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8202000a
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x86040008
  .word 0x0c05c444
  .word 0x00000000
  .word 0x27a40040
  .word 0x2785ace0
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x86030008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00433021
  .word 0x27a40040
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x86030008
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00433021
  .word 0x27a40040
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a40040
  .word 0x3c05006b
  .word 0x24a5f3d0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24040005
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x92020006
  .word 0x1440000d
  .word 0x00000000
  .word 0x86050008
  .word 0x24040007
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x8202000a
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x24040008
  .word 0x24060011
  .word 0x0c0f1f08
  .word 0x00000000
  .word 0x92060007
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24040006
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c100e38
  .word 0x00000000
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x24040009
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c100e00
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2404000a
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c100e0c
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2404000b
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c100dd0
  .word 0x00000000
  .word 0x0002343c
  .word 0x0006343f
  .word 0x27a40040
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2404000c
  .word 0x27a50040
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_004030B0


s16 FUN_004030b0(u16 param_1)



{


  s16 sVar1;



  sVar1 = (s16)param_1;


  FUN_00402c80(sVar1);


  return FUN_004037a0(sVar1);
}

// FUN_004030F0


s16 FUN_004030f0(u16 param_1)



{


  s16 sVar1;



  sVar1 = (s16)param_1;


  FUN_00402c80(sVar1);


  return FUN_004037c0(sVar1);
}

// FUN_00403130


void FUN_00403130(u64 param_1,u64 param_2,int param_3,u64 param_4,
                 u64 param_5,u64 param_6,s16 param_7)



{

  float fVar2;
  fVar2 = (float)param_3;

  

  datSetFlag(0x1424,1);
  FUN_00402800(param_7);


  datSetFlag(0x1424,0);


  FUN_003c7e20_mid(param_1,param_2,fVar2,param_4,param_5,param_6,6,FUN_00403760((long)param_7));

  return;

}

// FUN_00403220


void FUN_00403220(u64 param_1,u64 param_2,int param_3,u64 param_4,
                 u64 param_5,u64 param_6,s16 param_7)



{

  float fVar2;

  



  fVar2 = (float)param_3;
  FUN_00402800(param_7);
  FUN_003c7e20_mid(param_1,param_2,fVar2,param_4,param_5,param_6,6,FUN_00403780((long)param_7));

  return;

}

// FUN_004032F0


void FUN_004032f0(u64 param_1)
{
  FUN_00404470_alt(param_1,1);
  FUN_0017c4e0(param_1);
}

// FUN_00403340


void FUN_00403340(u16 param_1)
{
  FUN_0017c590();
  FUN_00404470_alt(param_1,0);
}

// FUN_00403380


u8 FUN_00403380(u64 param_1)
{
  if (datGetFlag_s32((s16)param_1 + 0x1170) != 0) {
    return 3;
  }
  if (FUN_003f04f0_u32(FUN_004037e0_u64(param_1),0) != 0) {
    return FUN_0017c610_u64(param_1) != 0;
  }
  return 2;
}

// FUN_00403410


u8 FUN_00403410(short param_1)
{
  u8 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int lToday;
  int lTarget;

  iVar3 = FUN_004037e0(param_1);
  lVar5 = ((long)*(char *)(iVar3 + 7) << 0x38) >> 0x3c;
  switch (lVar5) {
  case 0:
    return 3;
  case 1:
    sVar2 = datGetDaysSinceApr5();
    lToday = sVar2;
    lTarget = clndGetDaysSinceStartFromDate(((long)*(short *)(iVar3 + 6) << 0x34) >> 0x3a,
                            (*(char *)(iVar3 + 6) << 0x1a) >> 0x1a);
    break;
  case 2:
    sVar2 = datGetDaysSinceApr5();
    lToday = sVar2;
    iVar4 = clndGetDaysSinceStartFromDate(((long)*(short *)(iVar3 + 4) << 0x34) >> 0x3a,
                         (*(char *)(iVar3 + 4) << 0x1a) >> 0x1a);
    lTarget = ((*(short *)(iVar3 + 6) << 0x14) >> 0x14) + iVar4;
    break;
  }
  if (lToday == lTarget) {
    uVar1 = 2;
  }
  else {
    uVar1 = lToday < lTarget;
  }
  return uVar1;
}

// FUN_00403520


u32 FUN_00403520(void)
{
  int iVar5;
  short sVar1;
  int lVar2;
  int iVar4;

  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    lVar2 = FUN_0017c670(iVar5);
    if (lVar2 != 0) {
      sVar1 = *(short *)lVar2;
      if (datGetFlag(sVar1 + 0x1170) != 0) {
        iVar4 = 3;
      }
      else {
        if (FUN_003f04f0(FUN_004037e0(sVar1),0) == 0) {
          goto state_2;
        }
        if (FUN_0017c610(sVar1) == 0) {
          goto state_0;
        }
        iVar4 = 1;
        goto state_done;
state_2:
        iVar4 = 2;
        goto state_done;
state_0:
        iVar4 = 0;
state_done:;
      }
      if (iVar4 == 2) {
        return 1;
      }
    }
  }
  return 0;
}

// FUN_00403610


int FUN_00403610(void)
{
  int iVar7;
  short sVar1;
  int iVar6;
  int iVar5;
  int lVar2;
  short sVar2;

  iVar7 = 0;
  iVar6 = 0;
  while (iVar7 < 3) {
    lVar2 = FUN_0017c670(iVar7);
    if (lVar2 != 0) {
      sVar1 = *(short *)lVar2;
      if (datGetFlag(sVar1 + 0x1170) != 0) {
        iVar5 = 3;
      }
      else {
        if (FUN_003f04f0(FUN_004037e0(sVar1),0) == 0) {
          goto state_2;
        }
        if (FUN_0017c610(sVar1) == 0) {
          goto state_0;
        }
        iVar5 = 1;
        goto state_done;
state_2:
        iVar5 = 2;
        goto state_done;
state_0:
        iVar5 = 0;
state_done:;
      }
      if (iVar5 == 2) {
        sVar2 = *(short *)lVar2;
        FUN_0017c590(sVar2);
        FUN_00404470_long(sVar2,0);
        iVar6 = iVar6 + 1;
        iVar7 = 0;
        continue;
      }
    }
    iVar7 = iVar7 + 1;
  }
  return iVar6;
}

// FUN_00403740
s16 FUN_00403740(short param_1)

{
  volatile int *base_ptr = &iGpffffac00;
  int base = *base_ptr;
  int address = param_1 * 0x40;
  address += base;
  return *(s16 *)(address + 0x3a);
}

// FUN_00403760


s16 FUN_00403760(short param_1)
{
  volatile int *base_ptr = &iGpffffac00;
  int base = *base_ptr;
  int address = param_1 * 0x40;
  address += base;
  return *(s16 *)(address + 0x30);
}

// FUN_00403780


s16 FUN_00403780(short param_1)
{
  volatile int *base_ptr = &iGpffffac00;
  int base = *base_ptr;
  int address = param_1 * 0x40;
  address += base;
  return *(s16 *)(address + 0x32);
}

// FUN_004037A0


s16 FUN_004037a0(short param_1)
{
  volatile int *base_ptr = &iGpffffac00;
  int base = *base_ptr;
  int address = param_1 * 0x40;
  address += base;
  return *(s16 *)(address + 0x36);
}

// FUN_004037C0


s16 FUN_004037c0(short param_1)
{
  volatile int *base_ptr = &iGpffffac00;
  int base = *base_ptr;
  int address = param_1 * 0x40;
  address += base;
  return *(s16 *)(address + 0x34);
}

// FUN_004037E0


int FUN_004037e0(short param_1)



{

  return iGpffffac00 + param_1 * 0x40 + 8;

}

// FUN_00403800


long FUN_00403800(short param_1)



{

  return ((long)*(short *)(iGpffffac00 + param_1 * 0x40 + 0xe) << 0x34) >> 0x3a;

}

// FUN_00403830


long FUN_00403830(short param_1)



{

  return ((long)*(char *)(iGpffffac00 + param_1 * 0x40 + 0xe) << 0x3a) >> 0x3a;

}

// FUN_00403860


int FUN_00403860(short param_1)



{

  return iGpffffac00 + param_1 * 0x40 + 0x10;

}

// FUN_00403880


int FUN_00403880(short param_1)



{

  return iGpffffac00 + param_1 * 0x40 + 0x20;

}

// FUN_004038A0


u32 FUN_004038a0(short param_1)
{
  u8 *base = (u8 *)(iGpffffac00 + param_1 * 0x40);
  u32 *ptr = (u32 *)(base + 0x20);
  if (base[0x26] == 3) {
    return ptr[2];
  }
  return 0;
}

// FUN_004038E0


u32 FUN_004038e0(short param_1)
{
  volatile int *base_ptr = &iGpffffac00;
  int base = *base_ptr;
  int address = param_1 * 0x40;
  address += base;
  return *(u32 *)(address + 0x2c);
}

// FUN_00403900


s16 FUN_00403900(short param_1)
{
  volatile int *base_ptr = &iGpffffac00;
  int base = *base_ptr;
  int address = param_1 * 0x40;
  address += base;
  return *(s16 *)(address + 0x3c);
}

// FUN_00403920


u32 FUN_00403920(short param_1,short param_2)
{
  u8 *base = (u8 *)(iGpffffac00 + param_1 * 0x40);
  s16 *ptr = (s16 *)(base + 0x10);
  if (base[0x1a] != 1) {
    goto no_match;
  }
  if (ptr[6] != param_2) {
    goto no_match;
  }
  return 1;
no_match:
  return 0;
}

// FUN_00403970


asm u32 FUN_00403970(short param_1)
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
  .word 0x0004143c
  .word 0x0002143f
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00431021
  .word 0x24500010
  .word 0x9043001a
  .word 0x24020004
  .word 0x10620110
  .word 0x00000000
  .word 0x24020003
  .word 0x10620104
  .word 0x00000000
  .word 0x24020002
  .word 0x1062006f
  .word 0x00000000
  .word 0x24020001
  .word 0x1062005d
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000010b
  .word 0x00000000
  .word 0x0000882d
  .word 0x96030008
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x36310001
  .word 0x30620002
  .word 0x10400002
  .word 0x00000000
  .word 0x36310002
  .word 0x30620004
  .word 0x10400002
  .word 0x00000000
  .word 0x36310004
  .word 0x8202000e
  .word 0x0002173c
  .word 0x0002173f
  .word 0x3042000f
  .word 0x00021e00
  .word 0x8602000e
  .word 0x0002153c
  .word 0x0002163f
  .word 0x304200ff
  .word 0x00021400
  .word 0x00621825
  .word 0x8602000c
  .word 0x3042ffff
  .word 0x0043a825
  .word 0x9202000b
  .word 0x0002843c
  .word 0x0010843f
  .word 0x32b3ffff
  .word 0x0013243c
  .word 0x0004243f
  .word 0x0c05c494
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0x10430003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x00132c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05c1d8
  .word 0x00000000
  .word 0x3043ffff
  .word 0x0010143c
  .word 0x0002143f
  .word 0x0062102a
  .word 0x1440001e
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001c
  .word 0x00000000
  .word 0x0000982d
  .word 0x0000a02d
  .word 0x36310008
  .word 0x0010843c
  .word 0x0010843f
  .word 0x10000011
  .word 0x00000000
  .word 0x02a0202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0280382d
  .word 0x0c100944
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x26730001
  .word 0x0270102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x26940001
  .word 0x2a82012c
  .word 0x1440ffee
  .word 0x00000000
  .word 0x0000102d
  .word 0x144000b6
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000b4
  .word 0x00000000
  .word 0x0c05f184
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000ad
  .word 0x00000000
  .word 0x84430002
  .word 0x9202000b
  .word 0x0062082a
  .word 0x102000a7
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000a5
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420002
  .word 0x10400030
  .word 0x00000000
  .word 0x8602000c
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051db3
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8604000c
  .word 0x0c05f230
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000091
  .word 0x00000000
  .word 0x96050008
  .word 0x30a30008
  .word 0x10600009
  .word 0x00000000
  .word 0x90440004
  .word 0x8603000e
  .word 0x0083082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x30a30010
  .word 0x1060000b
  .word 0x00000000
  .word 0x9605000e
  .word 0x0040202d
  .word 0x0c05da64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x14400074
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000072
  .word 0x00000000
  .word 0x8602000c
  .word 0x14400036
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000027
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x0c05d2a4
  .word 0x00000000
  .word 0x10400020
  .word 0x00000000
  .word 0x96050008
  .word 0x30a30008
  .word 0x10600009
  .word 0x00000000
  .word 0x90440004
  .word 0x8603000e
  .word 0x0083082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x30a30010
  .word 0x1060000b
  .word 0x00000000
  .word 0x9605000e
  .word 0x0040202d
  .word 0x0c05da64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000009
  .word 0x00000000
  .word 0x26310001
  .word 0x0c05d504
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222102a
  .word 0x1440ffd5
  .word 0x00000000
  .word 0x0000102d
  .word 0x1440003c
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000003a
  .word 0x00000000
  .word 0x3044ffff
  .word 0x0c05d268
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000032
  .word 0x00000000
  .word 0x96050008
  .word 0x30a30008
  .word 0x10600009
  .word 0x00000000
  .word 0x90440004
  .word 0x8603000e
  .word 0x0083082a
  .word 0x10200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000f
  .word 0x00000000
  .word 0x30a30010
  .word 0x1060000b
  .word 0x00000000
  .word 0x9605000e
  .word 0x0040202d
  .word 0x0c05da64
  .word 0x00000000
  .word 0x2403ffff
  .word 0x14430004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x14400015
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000013
  .word 0x00000000
  .word 0x0c05b754
  .word 0x00000000
  .word 0x8e03000c
  .word 0x0043082b
  .word 0x1020000c
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e04000c
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
}
#pragma schedule reset

// FUN_00403E40


u32 FUN_00403e40(int ids,int count)
{
  int entry;
  int i;
  int slot;
  s32 found;
  s32 key;

  slot = 0;
  while (slot < 3) {
    entry = FUN_0017c670(slot);
    if (entry != 0) {
      key = *(short *)entry;
      for (i = 0; i < count; i++) {
        if (key == *(short *)(ids + i * 2)) {
          found = 1;
          goto search_done;
        }
      }
      found = 0;
search_done:
      if (!found && FUN_00403970(*(short *)entry) != 0) {
        return 1;
      }
    }
    slot++;
  }
  return 0;
}

// FUN_00403F20


asm u32 FUN_00403f20(short param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0882d
  .word 0x0004143c
  .word 0x0002143f
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00431021
  .word 0x24500020
  .word 0x90430026
  .word 0x24020003
  .word 0x1062005d
  .word 0x00000000
  .word 0x24020002
  .word 0x10620052
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000063
  .word 0x00000000
  .word 0x86040008
  .word 0x0c05c494
  .word 0x00000000
  .word 0x24030004
  .word 0x10430003
  .word 0x00000000
  .word 0x10000014
  .word 0x00000000
  .word 0x12200059
  .word 0x00000000
  .word 0x96040008
  .word 0x0c05c4d8
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x96040008
  .word 0x0c05c4e4
  .word 0x00000000
  .word 0x1000004f
  .word 0x00000000
  .word 0x92060007
  .word 0x24040001
  .word 0x86050008
  .word 0x0c05c300
  .word 0x00000000
  .word 0x10000048
  .word 0x00000000
  .word 0x1620000d
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05bd24
  .word 0x00000000
  .word 0x2403012c
  .word 0x00621823
  .word 0x92020007
  .word 0x0062082a
  .word 0x1020003d
  .word 0x00000000
  .word 0x24020001
  .word 0x1000003b
  .word 0x00000000
  .word 0x0000302d
  .word 0x96030004
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x34c60001
  .word 0x30620002
  .word 0x10400002
  .word 0x00000000
  .word 0x34c60002
  .word 0x30620004
  .word 0x10400002
  .word 0x00000000
  .word 0x34c60004
  .word 0x8202000a
  .word 0x0002173c
  .word 0x0002173f
  .word 0x3042000f
  .word 0x00021e00
  .word 0x8602000a
  .word 0x0002153c
  .word 0x0002163f
  .word 0x304200ff
  .word 0x00021400
  .word 0x00621825
  .word 0x86020008
  .word 0x3042ffff
  .word 0x00432025
  .word 0x92050007
  .word 0x0c1009ac
  .word 0x00000000
  .word 0x14400019
  .word 0x00000000
  .word 0x24020001
  .word 0x10000017
  .word 0x00000000
  .word 0x96040008
  .word 0x0c05d39c
  .word 0x00000000
  .word 0x14400011
  .word 0x00000000
  .word 0x24020003
  .word 0x1000000f
  .word 0x00000000
  .word 0x16200009
  .word 0x00000000
  .word 0x8e040008
  .word 0x0c05ba90
  .word 0x00000000
  .word 0x18400007
  .word 0x00000000
  .word 0x24020002
  .word 0x10000005
  .word 0x00000000
  .word 0x8e040008
  .word 0x0c05ba6c
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// W325 pragma sweep: opt_common_subs off nd564 -> nd463 (obj 840/848).
#pragma opt_common_subs off
// FUN_00404120


asm u32 FUN_00404120(short param_1,int param_2)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb70070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0802d
  .word 0x0004143c
  .word 0x0002143f
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00431021
  .word 0x24510010
  .word 0x8c420010
  .word 0x30420001
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x100000ae
  .word 0x00000000
  .word 0x9223000a
  .word 0x24020003
  .word 0x10620095
  .word 0x00000000
  .word 0x24020002
  .word 0x1062007d
  .word 0x00000000
  .word 0x24020001
  .word 0x10620078
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x8624000c
  .word 0x0c05c494
  .word 0x00000000
  .word 0x0040902d
  .word 0x24030004
  .word 0x10430003
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x8622000c
  .word 0x16000004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000091
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x9222000b
  .word 0x00021023
  .word 0x0002343c
  .word 0x0006343f
  .word 0x24040001
  .word 0x0c05c300
  .word 0x00000000
  .word 0x10000085
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000982d
  .word 0x96230008
  .word 0x30620001
  .word 0x10400002
  .word 0x00000000
  .word 0x34840001
  .word 0x30620002
  .word 0x10400002
  .word 0x00000000
  .word 0x34840002
  .word 0x30620004
  .word 0x10400002
  .word 0x00000000
  .word 0x34840004
  .word 0x8222000e
  .word 0x0002173c
  .word 0x0002173f
  .word 0x3042000f
  .word 0x00021e00
  .word 0x8622000e
  .word 0x0002153c
  .word 0x0002163f
  .word 0x304200ff
  .word 0x00021400
  .word 0x00621825
  .word 0x8622000c
  .word 0x3042ffff
  .word 0x0043b825
  .word 0x0000a82d
  .word 0x34960008
  .word 0x1000002f
  .word 0x00000000
  .word 0x02e0202d
  .word 0x0240282d
  .word 0x02c0302d
  .word 0x02a0382d
  .word 0x0c100944
  .word 0x00000000
  .word 0x10400026
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000000e
  .word 0x00000000
  .word 0x00142c3c
  .word 0x00052c3f
  .word 0x24040001
  .word 0x0c05b2e0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x16a20004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000004e
  .word 0x00000000
  .word 0x26940001
  .word 0x2a820004
  .word 0x1440fff1
  .word 0x00000000
  .word 0x16000004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000045
  .word 0x00000000
  .word 0x24040001
  .word 0x02a0282d
  .word 0x0000302d
  .word 0x0c05bfa8
  .word 0x00000000
  .word 0x26730001
  .word 0x9222000b
  .word 0x0262102a
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000038
  .word 0x00000000
  .word 0x26b50001
  .word 0x2aa2012c
  .word 0x1440ffd0
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051e65
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x1000002c
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0x8632000c
  .word 0x0c05d4ac
  .word 0x00000000
  .word 0x3042ffff
  .word 0x16420006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051e6d
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16000004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001b
  .word 0x00000000
  .word 0x9624000c
  .word 0x0c05d2d0
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x0c05b754
  .word 0x00000000
  .word 0x8e23000c
  .word 0x0043082b
  .word 0x10200006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x24051e72
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16000004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000006
  .word 0x00000000
  .word 0x8e22000c
  .word 0x00022023
  .word 0x0c05ba6c
  .word 0x00000000
  .word 0x24020001
  .word 0xdfbf0080
  .word 0x7bb70070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset

// FUN_00404470


void FUN_00404470(short param_1)
{
  u16 *ptr = (u16 *)(iGpffffac00 + param_1 * 0x40 + 0x14);
  if (*ptr != (u16)-1) {
    datSetFlag(*ptr);
  }
}


static inline u32 fclShopAddTableOffset(u32 offset, u32 base) { return offset + base; }
// Confirmed b210 floor: only +0xd0 differs in commutative addu operand order
// (`addu $v0,$v1,$v0` versus `$v0,$v0,$v1`); all table loads and remaining words match.
// FUN_004044C0


void FUN_004044c0(short param_1)



{

  short uVar1;

  int lVar2;

  u32 uVar3;
  int entryOffset;
  int tableOffset;
  u8 *table;

  short *psVar4;

  

  entryOffset = (int)param_1 * 0x40;

  lVar2 = FUN_0017c610(param_1);

  if (lVar2 == 0) {

    K_Assert((const char *)DAT_006aede8,0x1e90);

  }

  psVar4 = (short *)lVar2;


  FUN_00404120(*psVar4,1);

  datSetFlag(*psVar4 + 0x1170,1);

  if (*(u16 *)(PTR_DAT_007cd8f0_ptr + entryOffset + 0x14) != (u16)-1) {

    datSetFlag(*(u16 *)(PTR_DAT_007cd8f0_ptr + entryOffset + 0x14),0);

  }

  if (*(u16 *)(PTR_DAT_007cd8f0_ptr + *psVar4 * 0x40 + 0x16) != (u16)-1) {

    datSetFlag(*(u16 *)(PTR_DAT_007cd8f0_ptr + *psVar4 * 0x40 + 0x16),1);

  }

  FUN_0017c590(*psVar4);

  table = PTR_DAT_007cd8f0_ptr;
  tableOffset = *psVar4 * 0x40;
  table = (u8 *)((u32)table);
  table = (u8 *)fclShopAddTableOffset((u32)tableOffset,(u32)table);
  uVar1 = *(short *)(table + 0x38);
  uVar3 = FUN_003e6dc0();
  FUN_003f0d60(uVar3,uVar1);



  return;

}

// FUN_004045D0


asm void FUN_004045d0(u64 param_1)
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
  .word 0x0080a02d
  .word 0x8f93ac00
  .word 0x8f95ac04
  .word 0x0000902d
  .word 0x10000045
  .word 0x00000000
  .word 0x24030037
  .word 0x16430005
  .word 0x00000000
  .word 0x0c05f5ec
  .word 0x00000000
  .word 0x1040003c
  .word 0x00000000
  .word 0x00121c3c
  .word 0x00031c3f
  .word 0x00032180
  .word 0x8f83ac00
  .word 0x00641821
  .word 0x8463003a
  .word 0x10600034
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00101040
  .word 0x02621021
  .word 0x94440004
  .word 0x3402ffff
  .word 0x10820008
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000f
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440fff0
  .word 0x00000000
  .word 0x26640008
  .word 0x24050002
  .word 0x0c0fc13c
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x10600014
  .word 0x00000000
  .word 0x96820010
  .word 0x24450001
  .word 0x0280202d
  .word 0x2406000c
  .word 0x0000382d
  .word 0x0c0f1690
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c420014
  .word 0x8c50001c
  .word 0xa6120004
  .word 0x0000202d
  .word 0x0c0f7fac
  .word 0x00000000
  .word 0xae020008
  .word 0x0280202d
  .word 0x0220282d
  .word 0x0c10165c
  .word 0x00000000
  .word 0x26730040
  .word 0x26520001
  .word 0x0255182a
  .word 0x1460ffba
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_00404750
void FUN_00404750(u32 param_1,u32 param_2,u32 param_3)
{
  FclShopDispatchStack stack;
  u8 *obj;
  u8 *table;
  u8 *owner;
  u8 *item;
  u8 *owner_alt0;
  u8 *item_alt0;
  u8 *item_primary0;
  u8 *owner_primary0;
  u8 *owner_single;

  obj = (u8 *)param_1;
  table = *(u8 **)(*(u8 **)(obj + 0x24) + 0x44);
  switch (param_2) {
  case 0:
    if (param_3 == 0) {
      item_primary0 = *(u8 **)(obj + 4);
      while (item_primary0 != 0) {
        owner_primary0 = *(u8 **)(*(u8 **)(*(u8 **)(item_primary0 + 0x14) + 0x1c) + 8);
        FCL_SHOP_DISPATCH_BUILD(stack.source[7].primary, &stack.output[15].result, owner_primary0, 0, 0);
        item_primary0 = *(u8 **)(item_primary0 + 0x10);
      }
    }
    else if (param_3 == 1) {
      item_alt0 = *(u8 **)(obj + 4);
      while (item_alt0 != 0) {
        owner_alt0 = *(u8 **)(*(u8 **)(*(u8 **)(item_alt0 + 0x14) + 0x1c) + 8);
        FCL_SHOP_DISPATCH_BUILD(stack.source[7].alternate, &stack.output[14].result, owner_alt0, 0, 1);
        item_alt0 = *(u8 **)(item_alt0 + 0x10);
      }
    }
    break;
  case 1:
    if (param_3 == 0) {
      item = *(u8 **)(obj + 4);
      while (item != 0) {
        owner = *(u8 **)(*(u8 **)(*(u8 **)(item + 0x14) + 0x1c) + 8);
        FCL_SHOP_DISPATCH_BUILD(stack.source[6].primary, &stack.output[13].result, owner, 0, 0);
        item = *(u8 **)(item + 0x10);
      }
    }
    else if (param_3 == 1) {
      item = *(u8 **)(obj + 0xc);
      if (item != 0) {
        owner_single = *(u8 **)(*(u8 **)(*(u8 **)(item + 0x14) + 0x1c) + 8);
        FCL_SHOP_DISPATCH_BUILD(stack.source[6].alternate, &stack.output[12].result, owner_single, 1, 3);
      }
    }
    break;
  case 2:
    if (param_3 == 0) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[5].primary, &stack.output[11].result, owner_single, 2, 4);
    }
    else if (param_3 == 1) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[5].alternate, &stack.output[10].result, owner_single, 2, 5);
    }
    break;
  case 3:
    if (param_3 == 0) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[4].primary, &stack.output[9].result, owner_single, 3, 6);
    }
    else if (param_3 == 1) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[4].alternate, &stack.output[8].result, owner_single, 3, 7);
    }
    break;
  case 4:
    if (param_3 == 0) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[3].primary, &stack.output[7].result, owner_single, 4, 8);
    }
    else if (param_3 == 1) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[3].alternate, &stack.output[6].result, owner_single, 4, 9);
    }
    break;
  case 5:
    if (param_3 == 0) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[2].primary, &stack.output[5].result, owner_single, 5, 10);
    }
    else if (param_3 == 1) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[2].alternate, &stack.output[4].result, owner_single, 5, 11);
    }
    break;
  case 6:
    if (param_3 == 0) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[1].primary, &stack.output[3].result, owner_single, 6, 12);
    }
    else if (param_3 == 1) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[1].alternate, &stack.output[2].result, owner_single, 6, 13);
    }
    break;
  case 7:
    if (param_3 == 0) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[0].primary, &stack.output[1].result, owner_single, 7, 14);
    }
    else if (param_3 == 1) {
      owner_single = *(u8 **)(table + 8);
      FCL_SHOP_DISPATCH_BUILD(stack.source[0].alternate, &stack.output[0].result, owner_single, 7, 15);
    }
    break;
  default:
    break;
  }
}

// FUN_00405970


u64 FUN_00405970(u64 param_1,int param_2)



{

  u32 *puVar1;

  int lVar2;

  short sVar3;
  int iVar4;

  

  puVar1 = *(u32 **)(*(int *)(param_2 + 0x14) + 0x1c);

  sVar3 = (short)puVar1[1];

  lVar2 = datGetFlag(sVar3 + 0x1170);

  if (lVar2 != 0) {
    iVar4 = 3;
  }
  else {
    if (FUN_003f04f0(iGpffffac00 + sVar3 * 0x40 + 8,0) == 0) {
      goto state_2;
    }
    if (FUN_0017c610(sVar3) == 0) {
      goto state_0;
    }
    iVar4 = 1;
    goto state_done;
state_2:
    iVar4 = 2;
    goto state_done;
state_0:
    iVar4 = 0;
state_done:;
  }

  switch (iVar4) {
  case 3:
  case 1:
  case 2:
  case 4:
    *puVar1 = *puVar1 | 0x10;
    *(short *)((int)puVar1 + 6) = iVar4;
    break;
  default:
    lVar2 = datGetFlag((short)puVar1[1] + 0x10ff);
    if (lVar2 == 0) {
      *puVar1 = *puVar1 | 0x100;
    }
    break;
  }

  return 0;

}

// FUN_00405A90


void FUN_00405a90(u64 param_1,int param_2)



{

  FUN_003dff00(*(u32 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x1c) + 8));

  return;

}

// FUN_00405AC0


u32 FUN_00405ac0(u64 param_1,long param_2)



{

  u32 *puVar1;

  int iVar2;

  int iVar3;

  int iVar4;

  s16 *puVar5;

  int iVar6;

  u32 uVar7;

  u32 uVar8;

  u32 uVar9;

  int lVar10;

  int iVar11;

  

  uVar9 = FUN_003c58f0(0,0xc,5,0x1c);

  iVar3 = (int)uVar9;

  puVar1 = *(u32 **)(*(int *)(iVar3 + 0x24) + 0x44);

  if (param_2 == 0) {
    FUN_004045d0_u32(uVar9);
  }
  else {

    iVar4 = FUN_0017c700();

    for (iVar11 = 0; iVar11 < iVar4; iVar11 = iVar11 + 1) {

      puVar5 = (s16 *)FUN_0017c670(iVar11);

      iVar6 = FUN_003c5a40(uVar9,*(u16 *)(iVar3 + 0x10) + 1,0xc,0);

      iVar2 = *(int *)(*(int *)(iVar6 + 0x14) + 0x1c);

      *(u16 *)(iVar2 + 4) = *puVar5;

      uVar7 = FUN_003dfeb0(0);

      *(u32 *)(iVar2 + 8) = uVar7;

      iVar2 = *(int *)(*(int *)(iVar6 + 0x14) + 0x1c);
      lVar10 = FUN_00403380_i(*(short *)(iVar2 + 4));
      switch (lVar10) {
      case 3:
      case 1:
      case 2:
      case 4:
        *(short *)(iVar2 + 6) = (short)lVar10;
        break;
      }

    }

    *puVar1 = *puVar1 | 2;

  }


  FUN_00405e00_u32(uVar9);
  uVar8 = FUN_003dfeb0(0);
  puVar1[2] = uVar8;
  FUN_003c6ee0(uVar9);
  FUN_003c5f40(uVar9,FUN_00405a90);
  FUN_003c5e20(uVar9,FUN_00407180);
  FUN_003c5ee0(uVar9,FUN_00407210);
  FUN_003c6d40(uVar9,0,0);
  *(u16 *)(*(int *)(iVar3 + 0x24) + 6) = 10;
  *(u16 *)(*(int *)(iVar3 + 0x24) + 8) = 10;
  FUN_00404750(uVar9,6,0);
  FUN_00404750(uVar9,1,0);
  FUN_00404750(uVar9,0,0);
  FUN_00404750(uVar9,2,0);
  FUN_00404750(uVar9,5,0);
  FUN_00404750(uVar9,4,0);
  FUN_00404750(uVar9,3,0);
  FUN_00404750(uVar9,7,0);









  return uVar9;

}

// FUN_00405D60


void FUN_00405d60(int param_1)



{

  FUN_003dff00(*(u32 *)(*(int *)(*(int *)((int)param_1 + 0x24) + 0x44) + 8));

  FUN_003c5a20(param_1);

  return;

}

// FUN_00405DB0
int FUN_00405db0(u32* param_1, u32* param_2)
{
  s16* base;
  s16 a;
  s16 b;

  base = (s16*)((u8*)iGpffffac00 + 0x3a);
  a = base[*(s16*)(*(u32*)(*(u32*)(*param_1 + 0x14) + 0x1c) + 4) * 0x20];
  /* Removing this barrier loses FUN_00405db0 (MATCH nd0 -> MISMATCH nd3) - measured W164. */
  asm ("" : "+m"(a));
  b = base[*(s16*)(*(u32*)(*(u32*)(*param_2 + 0x14) + 0x1c) + 4) * 0x20];
  return b - a;
}

// FUN_00405E00


void FUN_00405e00(u64 param_1)



{
  FUN_003c7000(param_1,FUN_00405db0,0);

  return;

}

// FUN_00405E30


u32 FUN_00405e30(u32 param_1)



{

  int lVar1;

  int lVar2;

  int iVar3;

  int iVar4;

  

  iVar3 = (int)param_1;

  FUN_003e0650(*(u32 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x44) + 8));

  for (iVar4 = *(int *)(iVar3 + 4); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {

    FUN_003e0650(*(u32 *)(*(int *)(*(int *)(iVar4 + 0x14) + 0x1c) + 8));

  }

  lVar1 = FUN_003c6270(param_1);
  lVar1 = (lVar1 == 3);

  lVar2 = FUN_003c6ce0(param_1);

  if ((lVar2 != 0) || (lVar2 = FUN_003c6d10(param_1), lVar2 != 0)) {

    func_0010a4e0(0,0,0,0);

  }

  lVar2 = FUN_003c6ca0(param_1);

  if ((lVar2 != 0) || (lVar2 = FUN_003c6cc0(param_1), lVar2 != 0)) {

    func_0010a4e0(0,0,0,5);

  }


  FUN_00404750(param_1,1,1);
  if (*(int *)(iVar3 + 0xc) != 0) {

    datSetFlag(*(short *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x14) + 0x1c) + 4) + 0x10ff,1)

    ;

  }

  return lVar1;

}

// FUN_00405F70
#pragma push
#pragma opt_lifetimes on


asm void FUN_00405f70(s32 param_1,s32 param_2,s32 param_3,int param_4,u64 param_5,
                 int param_6,int param_7)
{
  .set noreorder
  .word 0x27bdfef0
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x0120802d
  .word 0xafaa00bc
  .word 0x8ce70034
  .word 0x3c06006b
  .word 0x24c6f5e0
  .word 0x27a500e0
  .word 0x24040004
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f600
  .word 0x27a500c0
  .word 0x24040004
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x8ce20000
  .word 0x24420001
  .word 0xace20000
  .word 0x2842002d
  .word 0x14400002
  .word 0x00000000
  .word 0xace00000
  .word 0xc4e00000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024234
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc7838084
  .word 0xc78280b4
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600185c
  .word 0x44920000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46011042
  .word 0xc7808088
  .word 0x46010002
  .word 0x46000024
  .word 0x44160000
  .word 0x8e020014
  .word 0x8c50001c
  .word 0x86150006
  .word 0x02a0882d
  .word 0x26a2fffe
  .word 0x2c410002
  .word 0x10200004
  .word 0x00000000
  .word 0x46031002
  .word 0x46000024
  .word 0x44120000
  .word 0x8fa200bc
  .word 0x10400003
  .word 0x00000000
  .word 0x26310004
  .word 0x26b50004
  .word 0x86020004
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00621021
  .word 0x8446003a
  .word 0x27a40108
  .word 0x2785ace8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x00151080
  .word 0x2684000f
  .word 0x2665006e
  .word 0x44806000
  .word 0x005d1021
  .word 0x8c4200c0
  .word 0x02423025
  .word 0x24070001
  .word 0x27a80108
  .word 0x0000482d
  .word 0x0c103af0
  .word 0x00000000
  .word 0x86020004
  .word 0x7fa200a0
  .word 0x24041424
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c100a00
  .word 0x00000000
  .word 0x24041424
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8f83ac00
  .word 0x7ba200a0
  .word 0x0002143c
  .word 0x0002143f
  .word 0x00021180
  .word 0x00431021
  .word 0x844a0030
  .word 0x26840030
  .word 0x26650066
  .word 0x44806000
  .word 0x00111080
  .word 0x005d1021
  .word 0x8c4200e0
  .word 0x02423025
  .word 0x24070001
  .word 0x24080006
  .word 0x0100482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420100
  .word 0x10400011
  .word 0x00000000
  .word 0x44806000
  .word 0x32c600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407004c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x32c600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407004d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86020004
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00431021
  .word 0x24560008
  .word 0x8042000f
  .word 0x0002163c
  .word 0x00021f3f
  .word 0x24020002
  .word 0x1062001a
  .word 0x00000000
  .word 0x24020001
  .word 0x10620008
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000023
  .word 0x00000000
  .word 0x24030003
  .word 0x1000002c
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002bc3c
  .word 0x0017bc3f
  .word 0x86c20006
  .word 0x0002153c
  .word 0x000226bf
  .word 0x82c20006
  .word 0x00022ebc
  .word 0x00052ebf
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0040f02d
  .word 0x10000011
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002bc3c
  .word 0x0017bc3f
  .word 0x86c20004
  .word 0x0002153c
  .word 0x000226bf
  .word 0x82c20004
  .word 0x00022ebc
  .word 0x00052ebf
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x86c30006
  .word 0x00031d3c
  .word 0x00031d3f
  .word 0x0062f021
  .word 0x16fe0004
  .word 0x00000000
  .word 0x24030002
  .word 0x10000008
  .word 0x00000000
  .word 0x02fe082a
  .word 0x10200004
  .word 0x00000000
  .word 0x24030001
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x24020001
  .word 0x1062001d
  .word 0x00000000
  .word 0x24020003
  .word 0x10620010
  .word 0x00000000
  .word 0x24020002
  .word 0x10620003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x26270059
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x26270061
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x86020004
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00431021
  .word 0x8442000e
  .word 0x0002153c
  .word 0x000216bf
  .word 0x0002343c
  .word 0x0006343f
  .word 0x27a40108
  .word 0x2785ace8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x00151080
  .word 0x005d1021
  .word 0x244200e0
  .word 0x8c420000
  .word 0x0242a825
  .word 0x268401f7
  .word 0x2665006e
  .word 0x44806000
  .word 0x02a0302d
  .word 0x24070003
  .word 0x27a80108
  .word 0x24090001
  .word 0x0c103af0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x2627003c
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86020004
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00431021
  .word 0x8042000e
  .word 0x000236bc
  .word 0x000636bf
  .word 0x27a40108
  .word 0x2785ace8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26840202
  .word 0x2665006e
  .word 0x44806000
  .word 0x02a0302d
  .word 0x24070003
  .word 0x27a80108
  .word 0x0000482d
  .word 0x0c103af0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x26270044
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407004e
  .word 0x0000402d
  .word 0x0c1038f0
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
  .word 0x27bd0110
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma pop
#undef auStack_50
#undef auStack_30
#undef auStack_8





















// W325 pragma sweep: opt_loop_invariants on nd953 -> nd872 (obj 1460/1472).
#pragma opt_loop_invariants on
// FUN_004064E0
asm void FUN_004064e0(int param_1,int param_2,int param_3,int param_4)
{
  .set noreorder
  .word 0x27bdff40
  .word 0xffbf0070
  .word 0x7fb60060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x8ce3000c
  .word 0x10600154
  .word 0x00000000
  .word 0x8c620014
  .word 0x8c51001c
  .word 0x86220004
  .word 0x00021980
  .word 0x8f82ac00
  .word 0x00431021
  .word 0x24500020
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070051
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070052
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86350004
  .word 0x02a0202d
  .word 0x0c100a00
  .word 0x00000000
  .word 0x8f83ac00
  .word 0x0015143c
  .word 0x0002143f
  .word 0x00021180
  .word 0x00431021
  .word 0x84470032
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc78080a4
  .word 0x46010042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010005
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x10000006
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x306300ff
  .word 0x3c021e22
  .word 0x34425d00
  .word 0x00623025
  .word 0x2684003d
  .word 0x26650127
  .word 0x44806000
  .word 0x0007543c
  .word 0x000a543f
  .word 0x24070001
  .word 0x24080006
  .word 0x0100482d
  .word 0x0c0f1f88
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070053
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92040006
  .word 0x24030003
  .word 0x1083007b
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x100000ca
  .word 0x00000000
  .word 0x27a40080
  .word 0x86050008
  .word 0x0c0fc6e8
  .word 0x00000000
  .word 0x26840077
  .word 0x26650178
  .word 0x44806000
  .word 0x324600ff
  .word 0x93a20084
  .word 0x00021040
  .word 0x24480001
  .word 0x0000382d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92030006
  .word 0x24020004
  .word 0x1062003a
  .word 0x00000000
  .word 0x24020003
  .word 0x10620030
  .word 0x00000000
  .word 0x24020002
  .word 0x10620022
  .word 0x00000000
  .word 0x24020001
  .word 0x10620012
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8202000a
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x86040008
  .word 0x0c05c444
  .word 0x00000000
  .word 0x27a400a0
  .word 0x2785ace0
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x86030008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00433021
  .word 0x27a400a0
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x86030008
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00433021
  .word 0x27a400a0
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a400a0
  .word 0x2785ac10
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400a0
  .word 0x3c05006b
  .word 0x24a5f3d0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2402ff00
  .word 0x0242a825
  .word 0x2684009a
  .word 0x26650182
  .word 0x44806000
  .word 0x02a0302d
  .word 0x24070006
  .word 0x24080001
  .word 0x27a900a0
  .word 0x240a0011
  .word 0x240b0078
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x0282b021
  .word 0x26c400a4
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070054
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92060007
  .word 0x27a400a0
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26c400c7
  .word 0x26650184
  .word 0x44806000
  .word 0x02a0302d
  .word 0x24070003
  .word 0x27a800a0
  .word 0x24090002
  .word 0x0c103af0
  .word 0x00000000
  .word 0x10000054
  .word 0x00000000
  .word 0x24020004
  .word 0x10820039
  .word 0x00000000
  .word 0x10830030
  .word 0x00000000
  .word 0x24020002
  .word 0x10820022
  .word 0x00000000
  .word 0x24020001
  .word 0x10820012
  .word 0x00000000
  .word 0x10800003
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x8202000a
  .word 0x00022f3c
  .word 0x00052f3f
  .word 0x86040008
  .word 0x0c05c444
  .word 0x00000000
  .word 0x27a400a0
  .word 0x2785ace0
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x86030008
  .word 0x000310c0
  .word 0x00431021
  .word 0x00021040
  .word 0x00431821
  .word 0x8f82b7f8
  .word 0x00433021
  .word 0x27a400a0
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x86030008
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00433021
  .word 0x27a400a0
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x27a400a0
  .word 0x2785ac10
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x27a400a0
  .word 0x3c05006b
  .word 0x24a5f3d0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2684007b
  .word 0x26650184
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02423025
  .word 0x24070003
  .word 0x27a800a0
  .word 0x24090008
  .word 0x0c103af0
  .word 0x00000000
  .word 0x26830085
  .word 0x00622021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070058
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070055
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070056
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x86230004
  .word 0x00032180
  .word 0x8f83ac00
  .word 0x00831821
  .word 0x8470003c
  .word 0x0000882d
  .word 0x1000001f
  .word 0x00000000
  .word 0x0230082a
  .word 0x1020000f
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x000210c0
  .word 0x00511023
  .word 0x02822021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070057
  .word 0x24080001
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x00111040
  .word 0x00511021
  .word 0x000210c0
  .word 0x00511023
  .word 0x02822021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070057
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26310001
  .word 0x2a230005
  .word 0x1460ffe0
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants reset

// Addressing-signal audit: retail really uses the same two $gp-relative format-string
// addresses and the same $gp-relative float load. Only +440/+444/+448 call setup differs.
#undef bStack_3c
#undef FORMAT_SHOP_RECORD_TEXT
// FUN_00406AA0


void FUN_00406aa0(int param_1,int param_2,u32 param_3)



{

  u32 uVar1;

  int lVar2;

  u32 uVar3;
  u32 drawAlpha;

  int iVar4;

  int iVar5;
  int drawX;
  int drawY;
  int weekDay;

  float fVar6;

  u8 auStack_8 [8];

  

  uVar1 = datGetTime();

  uVar1 = uVar1 & 0xff;

  if (uVar1 == 8) {

    uVar1 = 9;

  }

  lVar2 = clndIsHolidayOrSunday();

  if ((lVar2 == 1) && (uVar1 - 2 < 4)) {

    uVar1 = 8;

  }

  uVar1 = uVar1 - 1;

  if ((int)uVar1 < 0) {

    uVar1 = 0;

  }

  FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,3,0);

  FUN_0040e3c0_f32(0.0f,param_1,param_2,param_3,uVar1 + 5,0);

  uVar3 = clndGetCurrentMonth();

  sprintf((char *)auStack_8,(char *)&gp0xffffac10,uVar3);

  fVar6 = DAT_007cad74 * (float)(int)param_3;

  uVar1 = (u32)fVar6;
  drawAlpha = uVar1 | 0xffffff00;

  iVar5 = (int)param_1;

  iVar4 = (int)param_2;

  drawX = iVar5 + 0x212;
  drawY = iVar4 + 0x1b;
  FUN_0040ebc0_f32(0.0f,drawX,drawY,drawAlpha,3,auStack_8,2);

  drawX = iVar5 + 0x60;
  FUN_0040e3c0_f32(0.0f,drawX,param_2,param_3,0xe,0);

  uVar3 = clndGetCurrentDay();

  sprintf((char *)auStack_8,(char *)&gp0xffffac10,uVar3);

  drawX = iVar5 + 0x23c;
  drawY = iVar4 + 0x1b;
  FUN_0040ebc0_f32(0.0f,drawX,drawY,drawAlpha,3,auStack_8,2);

  weekDay = (int)clndGetCurrentWeekDay();

  drawX = iVar5 + 0x60;
  drawY = iVar4 + 1;
  FUN_0040e3c0_i(drawX,drawY,0.0f,param_3,0xf,weekDay);

  return;

}

// FUN_00406CA0


asm void FUN_00406ca0(int param_1,int param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0382d
  .word 0x00c0182d
  .word 0x0000502d
  .word 0x84a80014
  .word 0x8cc40000
  .word 0x0088a021
  .word 0x84a80016
  .word 0x8cc40004
  .word 0x00889821
  .word 0x84c60008
  .word 0x84a40026
  .word 0x00c42818
  .word 0x240400ff
  .word 0x00a4001a
  .word 0x00009012
  .word 0x12400118
  .word 0x00000000
  .word 0x8464000a
  .word 0x30840001
  .word 0x10800002
  .word 0x00000000
  .word 0x240a0001
  .word 0x8c68000c
  .word 0x8d090024
  .word 0x8d260044
  .word 0x8ce40010
  .word 0x2c810008
  .word 0x1020010c
  .word 0x00000000
  .word 0x3c05007c
  .word 0x24a5be00
  .word 0x00042080
  .word 0x00852021
  .word 0x8c840000
  .word 0x00800008
  .word 0x00000000
  .word 0x8cc20000
  .word 0x30420001
  .word 0x1040001b
  .word 0x00000000
  .word 0x8c620010
  .word 0x8c420014
  .word 0x8c51001c
  .word 0x000a8080
  .word 0x44806000
  .word 0x324600ff
  .word 0x86220006
  .word 0x00501021
  .word 0x2447002c
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x86220006
  .word 0x00501021
  .word 0x24470034
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000e7
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x8c690010
  .word 0x0c1017dc
  .word 0x00000000
  .word 0x100000df
  .word 0x00000000
  .word 0x8cc40000
  .word 0x30840001
  .word 0x108000db
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808084
  .word 0x46000802
  .word 0x46000024
  .word 0x44100000
  .word 0x8d04000c
  .word 0x8c620010
  .word 0x1082000a
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46000802
  .word 0x46000024
  .word 0x44100000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407004f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070050
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000b5
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070022
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070023
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070024
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070025
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070026
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070027
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070028
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0c101aa8
  .word 0x00000000
  .word 0x10000074
  .word 0x00000000
  .word 0x8cc20000
  .word 0x30420002
  .word 0x14400013
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407001c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407001d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000005e
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070069
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407006a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000004c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0240302d
  .word 0x0100382d
  .word 0x8c680010
  .word 0x0c101938
  .word 0x00000000
  .word 0x10000043
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0000202d
  .word 0x0000282d
  .word 0x2407001b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x95040010
  .word 0x8d230020
  .word 0x0083182b
  .word 0x14600034
  .word 0x00000000
  .word 0x8d300028
  .word 0x44806000
  .word 0x324600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x24070029
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x2407002a
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x00101080
  .word 0x00501021
  .word 0x000210c0
  .word 0x00501023
  .word 0x00021840
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001012
  .word 0x24450065
  .word 0x44806000
  .word 0x324600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x24040269
  .word 0x2407002b
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
}

// FUN_00407180


void FUN_00407180(u32 param_1,u32 param_2,u16 param_3,int param_4)
{
  int *puVar1;
  int iVar2;
  struct {
    u32 param1;
    u32 param2;
    u16 param3;
    u16 pad;
    u32 param4;
    u32 zero;
  } data;

  puVar1 = *(int **)(*(int *)(param_4 + 0x24) + 0x44);
  iVar2 = puVar1[2];
  data.param1 = param_1;
  data.param2 = param_2;
  data.param3 = param_3;
  data.param4 = (u32)param_4;
  data.zero = 0;
  FUN_003e0680_typed(iVar2,(code)FUN_00406ca0,&data);
  *puVar1 = *puVar1 | 1;
  FUN_003c4e70_u64(param_4);
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}

// FUN_00407210


void FUN_00407210(u32 param_1,u32 param_2,u16 param_3,int param_4,int param_5)
{
  int uVar1;
  struct {
    u32 param1;
    u32 param2;
    u16 param3;
    s16 flags;
    int param4;
    int param5;
  } data;

  uVar1 = *(int *)(*(int *)(*(int *)(param_5 + 0x14) + 0x1c) + 8);
  memset_typed(&data,0,0x18);
  if (*(int *)(param_4 + 0xc) == param_5) {
    data.flags = data.flags | 1;
  }
  data.param1 = param_1;
  data.param2 = param_2;
  data.param3 = param_3;
  data.param4 = param_4;
  data.param5 = param_5;
  FUN_003e0680_typed(uVar1,(code)FUN_00406ca0,&data);
  return;
}

// FUN_004072D0


void FUN_004072d0(int param_1, long param_2, long param_3)
{
  FclShopDispatchStorage storage;
  int anchor;
  int node;
  u32 tmp;
  u32 owner;

  anchor = *(int *)(*(int *)(param_1 + 0x24) + 0x44);
  owner = *(u32 *)(anchor + 0x1c);
  tmp = *(u32 *)(anchor + 0x20);

  switch (param_2) {
  case 0xe:
    if (param_3 == 0) {
      FCL_SHOP_MISC_BUILD(storage.path[27].result, &storage.output[29], owner, 0, 0, 5, 0);
      if (*(int *)(anchor + 4) == -8) {
        anchor = *(u32 *)(anchor + 0x1c);
        FCL_SHOP_MISC_BUILD(storage.path[26].result, &storage.output[28], anchor, 1, 1, 10, 2);
      }
    } else if (param_3 == 1) {
      FCL_SHOP_MISC_BUILD(storage.path[25].result, &storage.output[27], owner, 0, 0, 0, 1);
      if (*(int *)(anchor + 4) == -8) {
        anchor = *(u32 *)(anchor + 0x1c);
        FCL_SHOP_MISC_BUILD(storage.path[24].result, &storage.output[26], anchor, 1, 1, 0, 3);
      }
    }
    break;

  case 2:
    if (param_3 == 0) {
      for (owner = *(int *)(param_1 + 4); owner != 0; owner = *(int *)(owner + 0x10)) {
        anchor = *(u32 *)(*(int *)(*(int *)(owner + 0x14) + 0x1c) + 0xc);
        FCL_SHOP_MISC_BUILD(storage.path[23].result, &storage.output[25], anchor, 2, 2, 0, 4);
      }
    } else if ((param_3 == 1) && (*(int *)(param_1 + 0xc) != 0)) {
      owner = *(int *)(param_1 + 0xc);
      anchor = *(u32 *)(*(int *)(*(int *)(owner + 0x14) + 0x1c) + 0xc);
      FCL_SHOP_MISC_BUILD(storage.path[22].result, &storage.output[24], anchor, 2, 2, 0, 5);
    }
    break;

  case 0xf:
    if (param_3 == 0) {
      FUN_003e0c20(FUN_003c5460(FUN_003e0940()), 2, 0);
      FCL_SHOP_MISC_BUILD(storage.path[21].result, &storage.output[23], owner, 8, 8, 0, 16);
      FCL_SHOP_MISC_BUILD(storage.path[20].result, &storage.output[22], owner, 4, 4, 5, 8);
      FCL_SHOP_MISC_BUILD(storage.path[19].result, &storage.output[21], owner, 5, 5, 5, 10);
      FCL_SHOP_MISC_BUILD(storage.path[18].result, &storage.output[20], owner, 6, 6, 0, 12);
      FCL_SHOP_MISC_BUILD(storage.path[17].result, &storage.output[19], owner, 7, 7, 0, 14);
      FCL_SHOP_MISC_BUILD(storage.path[16].result, &storage.output[18], owner, 3, 3, 10, 6);
    } else if (param_3 == 1) {
      FUN_003e0c20(FUN_003c5460(FUN_003e0940()), 2, 2);
      FCL_SHOP_MISC_BUILD(storage.path[15].result, &storage.output[17], owner, 8, 8, 0, 17);
      FCL_SHOP_MISC_BUILD(storage.path[14].result, &storage.output[16], owner, 4, 4, 0, 9);
      FCL_SHOP_MISC_BUILD(storage.path[13].result, &storage.output[15], owner, 5, 5, 0, 11);
      FCL_SHOP_MISC_BUILD(storage.path[12].result, &storage.output[14], owner, 6, 6, 0, 13);
      FCL_SHOP_MISC_BUILD(storage.path[11].result, &storage.output[13], owner, 7, 7, 0, 15);
      FCL_SHOP_MISC_BUILD(storage.path[10].result, &storage.output[12], owner, 3, 3, 0, 7);
    }
    break;

  case 0x10:
    if (param_3 == 0) {
      FCL_SHOP_MISC_BUILD(storage.path[9].result, &storage.output[11], owner, 9, 9, 0, 18);
      FCL_SHOP_MISC_BUILD(storage.path[8].result, &storage.output[10], owner, 10, 10, 0, 20);
      FCL_SHOP_MISC_BUILD(storage.path[7].result, &storage.output[9], owner, 6, 6, 0, 12);
    } else if (param_3 == 1) {
      FCL_SHOP_MISC_BUILD(storage.path[6].result, &storage.output[8], owner, 9, 9, 0, 19);
      FCL_SHOP_MISC_BUILD(storage.path[5].result, &storage.output[7], owner, 10, 10, 0, 21);
      FCL_SHOP_MISC_BUILD(storage.path[4].result, &storage.output[6], owner, 6, 6, 0, 13);
    }
    break;

  case 0xb:
    if (param_3 == 0) {
      FCL_SHOP_MISC_BUILD(storage.path[3].result, &storage.output[5], tmp, 11, 11, 0, 22);
    } else if (param_3 == 1) {
      FCL_SHOP_MISC_BUILD(storage.path[2].result, &storage.output[4], tmp, 11, 11, 0, 23);
    }
    break;

  case 0xc:
    if (param_3 == 0) {
      FCL_SHOP_MISC_BUILD(storage.path[1].result, &storage.output[3], tmp, 12, 12, 0, 24);
    } else if (param_3 == 1) {
      FCL_SHOP_MISC_BUILD(storage.path[0].result, &storage.output[2], tmp, 12, 12, 0, 25);
    }
    break;

  case 0xd:
    if (param_3 == 0) {
      FCL_SHOP_MISC_BUILD(&storage.tail1, &storage.output[1], owner, 13, 13, 0, 26);
    } else if (param_3 == 1) {
      FCL_SHOP_MISC_BUILD(&storage.tail0, &storage.output[0], owner, 13, 13, 0, 27);
    }
    break;
}
}

// W414 fresh probes: direct clamp-if measured nd73 (obj508/window528), and the
// single-case clamp switch measured nd78 (obj516/window528); both were rejected.
// Confirmed control-flow placement floor: +400 through +444 booleanizes the clamp
// switch here; a direct if/else measured worse (nd16 -> nd19) and was reverted.
// FUN_00409C80


asm u32 FUN_00409c80(u32 param_1)
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
  .word 0x0080a02d
  .word 0x24040008
  .word 0x0c0fc0f8
  .word 0x00000000
  .word 0x24120001
  .word 0x10000067
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05f230
  .word 0x00000000
  .word 0x0040982d
  .word 0x10400060
  .word 0x00000000
  .word 0x96820010
  .word 0x24450001
  .word 0x0280202d
  .word 0x24060010
  .word 0x0000382d
  .word 0x0c0f1690
  .word 0x00000000
  .word 0x8c420014
  .word 0x8c51001c
  .word 0xae330004
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x305000ff
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x02028021
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x00508021
  .word 0x0260202d
  .word 0x24050003
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x00508021
  .word 0x0260202d
  .word 0x24050004
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x00508021
  .word 0x0260202d
  .word 0x0000282d
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x305500ff
  .word 0x0260202d
  .word 0x24050001
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x02a2a821
  .word 0x0260202d
  .word 0x24050002
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x0055a821
  .word 0x0260202d
  .word 0x24050003
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x0055a821
  .word 0x0260202d
  .word 0x24050004
  .word 0x0c05cd60
  .word 0x00000000
  .word 0x304200ff
  .word 0x00551021
  .word 0x02021818
  .word 0x00031040
  .word 0x00431021
  .word 0x244207d0
  .word 0xae220008
  .word 0x24041319
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1040000e
  .word 0x00000000
  .word 0x8e220008
  .word 0x00021080
  .word 0x3c010098
  .word 0x34219680
  .word 0x0041082a
  .word 0x14200006
  .word 0x00000000
  .word 0x3c020098
  .word 0x3442967f
  .word 0xae220008
  .word 0x10000002
  .word 0x00000000
  .word 0xae220008
  .word 0x0000202d
  .word 0x0c0f7fac
  .word 0x00000000
  .word 0xae22000c
  .word 0x26520001
  .word 0x2a420100
  .word 0x1440ff98
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_00409E90


u32 FUN_00409e90(void)
{
  u32 uVar1;
  int iVar3;

  iVar3 = 0;
  goto check_limit;
check_persona:
  uVar1 = datPersonaGetHeroPersona_s16((s16)iVar3);
  if (uVar1 != 0) {
    if (FUN_0017ca10_u32(uVar1) == 1) {
      return 1;
    }
  }
  iVar3 = iVar3 + 1;
check_limit:
  uVar1 = FUN_00175410_u32();
  if (iVar3 < (int)(uVar1 & 0xffff)) {
    goto check_persona;
  }
  return 0;
}

// FUN_00409F20


void FUN_00409f20(u64 param_1,int param_2)



{

  FUN_003dff00(*(u32 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x1c) + 0xc));

  return;

}

// FUN_00409F50


u32 FUN_00409f50(u32 param_1,int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  u32 uVar4;
  u32 uVar5;
  u32 uVar6;
  u32 lVar7;
  u32 lVar8;
  int iVar9;

  uVar6 = FUN_003c58f0(0,0x28,8,0x18);
  iVar2 = (int)uVar6;
  iVar1 = *(int *)(*(int *)(iVar2 + 0x24) + 0x44);
  if (param_2 == 0) {
    *(u32 *)(iVar1 + 4) = 0xfffffff8;
    FUN_00409c80_i(uVar6);
    FUN_0040a6d0_i(uVar6,1);
  }
  else {
    *(u32 *)(iVar1 + 4) = 0xfffffff7;
    for (iVar9 = 0; uVar4 = FUN_00175410(),
         iVar9 < (int)(uVar4 & 0xffff); iVar9++) {
      if ((lVar7 = FUN_00174a90_fcl((short)iVar9)) != 0) {
        lVar8 = FUN_0017ca10(lVar7);
        if (lVar8 == 1) {
          iVar3 = FUN_003c5a40(uVar6,*(u16 *)(iVar2 + 0x10) + 1,0x10,0);
          iVar3 = *(int *)(*(int *)(iVar3 + 0x14) + 0x1c);
          *(int *)(iVar3 + 4) = (int)lVar7;
          uVar5 = FUN_003dfeb0(0);
          *(u32 *)(iVar3 + 0xc) = uVar5;
        }
      }
    }
  }
  FUN_003c5d40(uVar6,*(u32 *)(iVar2 + 4),0);
  uVar5 = FUN_0017cf00();
  *(u32 *)(iVar1 + 0x24) = uVar5;
  uVar5 = FUN_003dfeb0(0);
  *(u32 *)(iVar1 + 0x1c) = uVar5;
  if (param_2 == 0) {
    uVar5 = FUN_003dfeb0(0);
    *(u32 *)(iVar1 + 0x20) = uVar5;
  }
  FUN_003c6ee0(uVar6);
  FUN_003c5f40(uVar6,FUN_00409f20);
  FUN_003c5e20(uVar6,FUN_0040b630);
  FUN_003c5ee0(uVar6,FUN_0040b780);
  FUN_003c6d40(uVar6,0,0);
  *(u16 *)(*(int *)(iVar2 + 0x24) + 6) = 10;
  *(u16 *)(*(int *)(iVar2 + 0x24) + 8) = 5;
  if (param_2 == 0) {
    FUN_004072d0_i(uVar6,2,0);
    FUN_004072d0_i(uVar6,0xe,0);
    FUN_004072d0_i(uVar6,0xf,0);
    FUN_004072d0_i(uVar6,0xd,0);
  }
  else {
    FUN_004072d0_i(uVar6,2,0);
    FUN_004072d0_i(uVar6,0xe,0);
    FUN_004072d0_i(uVar6,0x10,0);
    FUN_004072d0_i(uVar6,0xd,0);
  }
  return uVar6;
}

// FUN_0040A200


void FUN_0040a200(int param_1)



{

  int iVar1;

  

  iVar1 = *(int *)(*(int *)((int)param_1 + 0x24) + 0x44);

  FUN_003dff00(*(u32 *)(iVar1 + 0x1c));

  if (*(int *)(iVar1 + 0x20) != 0) {

    FUN_003dff00(*(u32 *)(iVar1 + 0x20));

  }

  FUN_003c5a20(param_1);

  return;

}

// FUN_0040A260


void FUN_0040a260(int param_1)



{

  int iVar1;

  

  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {

    FUN_0017c960(*(u32 *)(*(int *)(*(int *)(iVar1 + 0x14) + 0x1c) + 4));

  }

  return;

}

// FUN_0040A2B0


u32 FUN_0040a2b0(u32 param_1)
{
  u32 uVar1;
  u32 uVar2;
  int iVar1;
  int iVar5;

  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);
  uVar2 = *(u32 *)(iVar1 + 0x20);
  FUN_003e0650(*(u32 *)(iVar1 + 0x1c));
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_003e0650(uVar2);
  }
  for (iVar5 = *(int *)(param_1 + 4); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x10)) {
    FUN_003e0650(*(u32 *)(*(int *)(*(int *)(iVar5 + 0x14) + 0x1c) + 0xc));
  }
  uVar1 = FUN_003c6270_u32(param_1);
  uVar1 = (uVar1 == 3);
  uVar2 = FUN_003c6ce0_u32(param_1);
  if ((uVar2 != 0) || ((uVar2 = FUN_003c6d10_u32(param_1)), uVar2 != 0)) {
    func_0010a4e0(0,0,0,0);
  }
  uVar2 = FUN_003c6ca0_u32(param_1);
  if ((uVar2 != 0) || ((uVar2 = FUN_003c6cc0_u32(param_1)), uVar2 != 0)) {
    func_0010a4e0(0,0,0,5);
  }
  FUN_004072d0_i(param_1,2,1);
  if (uVar1 != 0) {
    if (*(int *)(iVar1 + 4) == -8) {
      FUN_004072d0_i(param_1,0xe,1);
      FUN_004072d0_i(param_1,0xf,1);
      FUN_004072d0_i(param_1,0xd,1);
    }
    else {
      FUN_004072d0_i(param_1,0xe,1);
      FUN_004072d0_i(param_1,0x10,1);
      FUN_004072d0_i(param_1,0xd,1);
    }
  }
  return uVar1;
}

// FUN_0040A490


u32 FUN_0040a490(u32 param_1)
{
  u32 uVar1;
  u32 uVar2;
  int iVar3;

  FUN_003e0650(*(u32 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x44) + 0x1c));
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
    FUN_003e0650(*(u32 *)(*(int *)(*(int *)(iVar3 + 0x14) + 0x1c) + 0xc));
  }

  uVar1 = FUN_003c6270_u32(param_1);
  uVar1 = (uVar1 == 3);

  uVar2 = FUN_003c6ce0_u32(param_1);
  if ((uVar2 != 0) || ((uVar2 = FUN_003c6d10_u32(param_1)), uVar2 != 0)) {
    func_0010a4e0(0,0,0,0);
  }

  uVar2 = FUN_003c6ca0_u32(param_1);
  if ((uVar2 != 0) || ((uVar2 = FUN_003c6cc0_u32(param_1)), uVar2 != 0)) {
    func_0010a4e0(0,0,0,5);
  }
  FUN_004072d0(param_1,2,1);
  return uVar1;
}

// FUN_0040A5B0
s32 FUN_0040a5b0(u32 *param_1, u32 *param_2)
{
  u32 entryA;
  u32 entryB;
  u32 t4;
  u32 t5;
  u8 *tablePtr;
  s32 result;
  u16 h;
  u16 i;
  u8 b1;
  u8 b2;
  u8 k;
  u8 m;

  entryA = *(u32 *)(*param_1 + 0x14);
  entryA = *(u32 *)(entryA + 0x1c);
  entryB = *(u32 *)(*param_2 + 0x14);
  entryB = *(u32 *)(entryB + 0x1c);
  t4 = *(u32 *)(entryA + 4);
  t5 = *(u32 *)(entryB + 4);
  b1 = *(u8 *)(t5 + 4);
  b2 = *(u8 *)(t4 + 4);
  result = (s32)b1 - (s32)b2;
  if (result != 0) {
    goto ret;
  }
  h = *(u16 *)(t5 + 2);
  tablePtr = (u8 *)DAT_007ce420 + 2;
  i = *(u16 *)(t4 + 2);
  k = tablePtr[i * 0xe];
  m = tablePtr[h * 0xe];
  result = (s32)k - (s32)m;
  if (result != 0) {
    goto ret;
  }
  result = (s32)i - (s32)h;
ret:
  return result;
}

// FUN_0040A640
s32 FUN_0040a640(u32 *param_1, u32 *param_2)
{
  u32 entryA;
  u32 entryB;
  u32 t5;
  u32 t4;
  u16 i;
  u8 *tablePtr;
  u16 h;
  u8 m;
  u8 k;
  s32 result;
  u8 bB;
  u8 bA;

  entryA = *(u32 *)(*param_1 + 0x14);
  entryA = *(u32 *)(entryA + 0x1c);
  entryB = *(u32 *)(*param_2 + 0x14);
  entryB = *(u32 *)(entryB + 0x1c);
  t5 = *(u32 *)(entryB + 4);
  i = *(u16 *)(t5 + 2);
  tablePtr = (u8 *)DAT_007ce420 + 2;
  t4 = *(u32 *)(entryA + 4);
  h = *(u16 *)(t4 + 2);
  m = tablePtr[h * 0xe];
  k = tablePtr[i * 0xe];
  result = (s32)m - (s32)k;
  if (result != 0) {
    goto ret;
  }
  bB = *(u8 *)(t5 + 4);
  bA = *(u8 *)(t4 + 4);
  result = (s32)bB - (s32)bA;
  if (result != 0) {
    goto ret;
  }
  result = (s32)h - (s32)i;
ret:
  return result;
}

// Typed callback values preserve retail's call setup order.
// FUN_0040A6D0


void FUN_0040a6d0(u32 param_1,int param_2)



{

  u32 *puVar1;

  u32 uVar3;

  u32 uVar2;

  

  puVar1 = *(u32 **)(*(int *)((int)param_1 + 0x24) + 0x44);

  uVar3 = FUN_003c6fb0();

  uVar2 = *(u32 *)((int)param_1 + 0xc);

  if (param_2 == 1) {

    FUN_003c7000(param_1,FUN_0040a640,0);

  }

  else {

    FUN_003c7000(param_1,FUN_0040a5b0,0);

  }

  FUN_003c5d40(param_1,uVar2,uVar3);

  if (param_2 == 1) {

    *puVar1 = *puVar1 | 2;

  }

  else {

    *puVar1 = *puVar1 & 0xfffffffd;

  }

  return;

}

// FUN_0040A7C0


void FUN_0040a7c0(u64 param_1,u64 param_2,u8 param_3)



{

  FUN_0040e3c0(param_1,param_2,param_3,0x78);

  return;

}

/* Measured with schedule on: opt_common_subs on/off gives 2772B/2748B (window 2992B); retained off. */
#pragma opt_common_subs off
/* Measured on FUN_0040A7F0: schedule off 3000B, schedule on 2748B (window 2992B). */
#pragma schedule on
/* W455 retail table has explicit empty cases 0xb and 0xc; the decoded
 * case bodies 0 through 0xa and 0xd are already implemented. */
// FUN_0040A7F0

#define FUN_0040e3f0 FUN_0040e3f0_f32

asm void FUN_0040a7f0(u64 param_1,int param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdfee0
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
  .word 0x00c0f02d
  .word 0x0000902d
  .word 0x84a40014
  .word 0x8cc30000
  .word 0x0064a021
  .word 0x84a40016
  .word 0x8cc30004
  .word 0x00649821
  .word 0x84c40008
  .word 0x84a30026
  .word 0x00832018
  .word 0x240300ff
  .word 0x0083001a
  .word 0x00008812
  .word 0x122002c3
  .word 0x00000000
  .word 0x87c3000a
  .word 0x30630001
  .word 0x10600002
  .word 0x00000000
  .word 0x24120001
  .word 0x8fc7000c
  .word 0x8ce60024
  .word 0x8cd00044
  .word 0x8ca30010
  .word 0x2c61000e
  .word 0x102002b7
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484be20
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8cd5002c
  .word 0x8e040004
  .word 0x2403fff7
  .word 0x14830003
  .word 0x00000000
  .word 0x2694003e
  .word 0x2673ffe4
  .word 0x0000b02d
  .word 0x2403ff00
  .word 0x02231825
  .word 0xafa300b0
  .word 0x10000064
  .word 0x00000000
  .word 0x0000b82d
  .word 0x8ca2000c
  .word 0x16a20002
  .word 0x00000000
  .word 0x24170001
  .word 0x8c82000c
  .word 0x02c21018
  .word 0x02629021
  .word 0x8e020000
  .word 0x30420004
  .word 0x10400013
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0240282d
  .word 0x2407008d
  .word 0x02e0402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0240282d
  .word 0x2407008f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000042
  .word 0x00000000
  .word 0xc781acf0
  .word 0xc780acf4
  .word 0xe7a10118
  .word 0xe7a0011c
  .word 0xc781acf8
  .word 0xc780acfc
  .word 0xe7a10110
  .word 0xe7a00114
  .word 0x8ea20014
  .word 0x8c42001c
  .word 0x7fa200a0
  .word 0x44806000
  .word 0x322600ff
  .word 0x8c420004
  .word 0x94430002
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00431021
  .word 0x90420002
  .word 0x2442ffff
  .word 0x00021040
  .word 0x00574021
  .word 0x0280202d
  .word 0x0240282d
  .word 0x2407008e
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0017b880
  .word 0x268400a3
  .word 0x26450084
  .word 0x44806000
  .word 0x02fd1021
  .word 0x80470118
  .word 0x7ba200a0
  .word 0x8c420004
  .word 0x94430002
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x8fa600b0
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x7ba200a0
  .word 0x8c420004
  .word 0x90460004
  .word 0x27a400f0
  .word 0x2785ac10
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26840174
  .word 0x26450085
  .word 0x44806000
  .word 0x322600ff
  .word 0x02fd1021
  .word 0x8c470110
  .word 0x27a800f0
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x8eb50010
  .word 0x12a00241
  .word 0x00000000
  .word 0x26d60001
  .word 0x8fc5000c
  .word 0x8ca40024
  .word 0x8c830020
  .word 0x02c3182a
  .word 0x1460ff98
  .word 0x00000000
  .word 0x10000238
  .word 0x00000000
  .word 0x8cd2002c
  .word 0x0000a82d
  .word 0x10000031
  .word 0x00000000
  .word 0x0000b02d
  .word 0x8ca2000c
  .word 0x16420002
  .word 0x00000000
  .word 0x24160001
  .word 0x8c82000c
  .word 0x02a21018
  .word 0x0262b821
  .word 0x8e020000
  .word 0x30420004
  .word 0x1040000b
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x02e0282d
  .word 0x24070090
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000017
  .word 0x00000000
  .word 0xc781ad00
  .word 0xc780ad04
  .word 0xe7a10108
  .word 0xe7a0010c
  .word 0x8e420014
  .word 0x8c42001c
  .word 0x27a400e0
  .word 0x2785ac10
  .word 0x8c460008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26840205
  .word 0x26e50085
  .word 0x44806000
  .word 0x322600ff
  .word 0x00161080
  .word 0x005d1021
  .word 0x8c470108
  .word 0x27a800e0
  .word 0x24090009
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x8e520010
  .word 0x12400205
  .word 0x00000000
  .word 0x26b50001
  .word 0x8fc5000c
  .word 0x8ca40024
  .word 0x8c830020
  .word 0x02a3182a
  .word 0x1460ffcb
  .word 0x00000000
  .word 0x100001fc
  .word 0x00000000
  .word 0x8e030000
  .word 0x30630004
  .word 0x106001f8
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402fff8
  .word 0x14620026
  .word 0x00000000
  .word 0x16400008
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808084
  .word 0x46000802
  .word 0x46000024
  .word 0x44110000
  .word 0x12400009
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070094
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070092
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070093
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100001cf
  .word 0x00000000
  .word 0x16400008
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808084
  .word 0x46000802
  .word 0x46000024
  .word 0x44110000
  .word 0x12400009
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x2407009a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070092
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x2407009b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100001aa
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407006b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407006c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000198
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070075
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070076
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070077
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0c05f3c0
  .word 0x00000000
  .word 0x27a400c0
  .word 0x2785ac10
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000382d
  .word 0x27a800c0
  .word 0x24090001
  .word 0x240a0026
  .word 0x3c0b0041
  .word 0x256ba7c0
  .word 0x0c103b08
  .word 0x00000000
  .word 0x1000016b
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420002
  .word 0x10400002
  .word 0x00000000
  .word 0x24120001
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070079
  .word 0x0240402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007a
  .word 0x0240402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000144
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420002
  .word 0x14400002
  .word 0x00000000
  .word 0x24120001
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007b
  .word 0x0240402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007c
  .word 0x0240402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407007e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070080
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000011d
  .word 0x00000000
  .word 0x8e030004
  .word 0x2402fff8
  .word 0x14620033
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070081
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070083
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070084
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070085
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070087
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070088
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000e7
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070081
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070083
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070084
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070085
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070087
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2684003e
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x24070088
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000b5
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070082
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070086
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070089
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000009b
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070095
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070096
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000089
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070097
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070098
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000077
  .word 0x00000000
  .word 0x8e040004
  .word 0x2403fff8
  .word 0x1483003b
  .word 0x00000000
  .word 0x94e40010
  .word 0x8cc30020
  .word 0x0083182b
  .word 0x1460006e
  .word 0x00000000
  .word 0x8cd00028
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407008a
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x2407008b
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26840212
  .word 0x00101140
  .word 0x00501023
  .word 0x00021080
  .word 0x00501821
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x26620080
  .word 0x00432821
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x2407008c
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x94e40010
  .word 0x8cc30020
  .word 0x0083182b
  .word 0x14600034
  .word 0x00000000
  .word 0x8cd00028
  .word 0x2684ffac
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x2407008a
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x2684ffac
  .word 0x2665ffe4
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x2407008b
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x268401be
  .word 0x00101140
  .word 0x00501023
  .word 0x00021080
  .word 0x00501821
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x26620064
  .word 0x00432821
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x2407008c
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
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
  .word 0x27bd0120
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#pragma schedule off
#pragma opt_common_subs reset

#undef FUN_0040e3f0
// FUN_0040B3A0


void FUN_0040b3a0(u64 param_1,int param_2,int param_3)
{
  int x;
  int y;
  int alpha;
  u8 *work;
  u8 *tableEntry;
  int rowY;
  int drawX;
  int drawY;
  int i;

  x = *(short *)(param_2 + 0x14);
  y = *(short *)(param_2 + 0x16);
  alpha = *(short *)(param_2 + 0x26);
  if (alpha != 0) {
    switch (*(int *)(param_2 + 0x10)) {
    case 0xb:
      work = *(u8 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x14) + 0x1c);
      FUN_0040e3c0_f32(0.0f,x,y,alpha,0xa0,0);
      FUN_0040e3c0_f32(0.0f,x,y,alpha,0xa1,0);
      for (i = 0; i < 9; i = i + 1) {
        rowY = y + i * 0x19;
        FUN_0040e3c0_f32(0.0f,x,rowY,alpha,0xa2,0);
        FUN_0040e3c0_f32(0.0f,x,rowY,alpha,0xa3,0);
      }
      FUN_0040e3c0_f32(0.0f,x,y,alpha,0xa4,0);
      FUN_0040e3c0_f32(0.0f,x,y,alpha,0xa5,0);
      drawX = x + 0x16c;
      drawY = y + 0x77;
      FUN_003c7e20_f32(0.0f,drawX,drawY,alpha | 0xffffff00,
                       1,6,4,*(u16 *)(*(int *)(work + 4) + 2));
      break;

    case 0xc:
      work = *(u8 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x14) + 0x1c);
      FUN_0040e3c0_f32(0.0f,x,y,alpha,0x9e,0);
      FUN_0040e3c0_f32(0.0f,x,y,alpha,0x9f,0);
      drawX = x + 0x15d;
      drawY = y + 0x4d;
      tableEntry = iGpffffb730 + 2;
      FUN_0040e3c0_f32(
          0.0f,drawX,drawY,alpha,0x9d,
          (tableEntry[*(u16 *)(*(int *)(work + 4) + 2) * 0xe] - 1) * 2 + 1);
      drawX = x + 0x1af;
      drawY = y + 0x48;
      FUN_003b32d0_f32(
          0.0f,drawX,drawY,0xffffffff,5,1,
          (u8 *)iGpffffb7f4 + *(u16 *)(*(int *)(work + 4) + 2) * 0x11,0,0x78);
      break;
    }
  }
}

// FUN_0040B630


void FUN_0040b630(u32 param_1,u32 param_2,u16 param_3,int param_4)
{
  u32 *puVar1;
  u32 uVar2;
  u32 uVar3;
  u32 uVar4;
  struct {
    u32 param1;
    u32 param2;
    u16 param3;
    u16 pad;
    int param4;
    u32 extra;
  } data;

  puVar1 = *(u32 **)(*(int *)(param_4 + 0x24) + 0x44);
  uVar2 = puVar1[7];
  uVar3 = puVar1[8];
  FUN_0040e3c0_f32(0.0f,0,0,(u8)param_3,0x1b,0);

  data.param1 = param_1;
  data.param2 = param_2;
  data.param3 = param_3;
  data.param4 = param_4;
  data.extra = 0;
  *puVar1 = *puVar1 | 4;
  FUN_003e0680(uVar2,FUN_0040a7f0,&data);

  uVar4 = *puVar1;
  *puVar1 = uVar4 & 0xfffffffb;
  *puVar1 = uVar4 & 0xfffffffb | 4;
  FUN_003c4e70(param_4);
  *puVar1 = *puVar1 & 0xfffffffb;
  FUN_003e0680(uVar2,FUN_0040a7f0,&data);
  if (uVar3 != 0) {
    data.param1 = param_1;
    data.param2 = param_2;
    data.param3 = param_3;
    data.param4 = param_4;
    data.extra = *(u32 *)(param_4 + 0xc);
    FUN_003e0680(uVar3,FUN_0040b3a0,&data);
  }
}

// FUN_0040B780


void FUN_0040b780(u32 param_1,u32 param_2,u16 param_3,int param_4,int param_5)
{
  int uVar1;
  struct {
    u32 param1;
    u32 param2;
    u16 param3;
    s16 flags;
    int param4;
    int param5;
  } data;

  uVar1 = *(int *)(*(int *)(*(int *)(param_5 + 0x14) + 0x1c) + 0xc);
  memset_typed(&data,0,0x18);
  if (*(int *)(param_4 + 0xc) == param_5) {
    data.flags = data.flags | 1;
  }
  data.param1 = param_1;
  data.param2 = param_2;
  data.param3 = param_3;
  data.param4 = param_4;
  data.param5 = param_5;
  FUN_003e0680_typed(uVar1,(code)FUN_0040a7f0,&data);
  return;
}

// FUN_0040B840


void FUN_0040b840(int param_1)



{

  u32 *puVar1;
  u32 uVar2;

  

  puVar1 = *(u32 **)(*(int *)(param_1 + 0x24) + 0x44);

  puVar1[6] = 0;

  puVar1[4] = 1;

  *puVar1 = *puVar1 | 1;

  fclMisc003c9b00(puVar1[2],

               *(u32 *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x14) + 0x1c) + 4),0);

  FUN_003c9d00(puVar1[2],8);

  FUN_003c9e00(puVar1[2],3);
  FUN_003c9e30(puVar1[2],2,puVar1[6] ^ 1);

  uVar2 = FUN_003e0940();

  uVar2 = FUN_003c5460(uVar2);

  FUN_003e0c20(uVar2,0xd,0);

  return;

}

// W325 pragma sweep: opt_common_subs off nd1235 -> nd1212 (obj 2112/2112).
#pragma opt_common_subs off
// FUN_0040B910


asm u32 FUN_0040b910(u32 param_1)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x0000a82d
  .word 0x0000902d
  .word 0x8c83000c
  .word 0x8c820024
  .word 0x8c500044
  .word 0x8c620014
  .word 0x8c53001c
  .word 0x8e020010
  .word 0x2c41000b
  .word 0x102000c9
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463be60
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020000
  .word 0x8e040008
  .word 0x24050010
  .word 0x0c0f2740
  .word 0x00000000
  .word 0x8e04000c
  .word 0x24050001
  .word 0x0c0f379c
  .word 0x00000000
  .word 0x24020001
  .word 0x100001dc
  .word 0x00000000
  .word 0x0c0f1b60
  .word 0x00000000
  .word 0x30420005
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100001d4
  .word 0x00000000
  .word 0x24150001
  .word 0x100000a8
  .word 0x00000000
  .word 0x24020007
  .word 0xae020010
  .word 0x8e620004
  .word 0x94440002
  .word 0x0c05d268
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x24040015
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000009b
  .word 0x00000000
  .word 0x0c05d5bc
  .word 0x00000000
  .word 0x3051ffff
  .word 0x0c05d504
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222102a
  .word 0x14400006
  .word 0x00000000
  .word 0x24040016
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000008d
  .word 0x00000000
  .word 0x8e710008
  .word 0x0c05b754
  .word 0x00000000
  .word 0x0051082b
  .word 0x1020000f
  .word 0x00000000
  .word 0x27a40070
  .word 0x2785ac10
  .word 0x0220302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50070
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040013
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x27a40070
  .word 0x2785ac10
  .word 0x0220302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50070
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040012
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x24040001
  .word 0x0c0f1d58
  .word 0x00000000
  .word 0x24020006
  .word 0xae020010
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000059
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400055
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x14400019
  .word 0x00000000
  .word 0x8e82000c
  .word 0x8c420014
  .word 0x8c53001c
  .word 0x8e620008
  .word 0x00022023
  .word 0x0c05ba6c
  .word 0x00000000
  .word 0x8e640004
  .word 0x0c05d3ec
  .word 0x00000000
  .word 0x24020008
  .word 0xae020010
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050003
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000037
  .word 0x00000000
  .word 0x24020001
  .word 0xae020010
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050003
  .word 0x24060002
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400025
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020001
  .word 0xae020010
  .word 0x1000001f
  .word 0x00000000
  .word 0x24020009
  .word 0xae020010
  .word 0x8e82000c
  .word 0x8c420014
  .word 0x8c53001c
  .word 0x8e620004
  .word 0x94430002
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00433021
  .word 0x27a40070
  .word 0x2785ace0
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x0000202d
  .word 0x27a50070
  .word 0x0c0f1ef0
  .word 0x00000000
  .word 0x24040014
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400005
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020010
  .word 0x16a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000125
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440952
  .word 0x30821000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9443095a
  .word 0x30621000
  .word 0x10400017
  .word 0x00000000
  .word 0x96820010
  .word 0x2c410002
  .word 0x1420000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0f16bc
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x24120001
  .word 0x0280202d
  .word 0x26850004
  .word 0x0c0f1370
  .word 0x00000000
  .word 0x100000e4
  .word 0x00000000
  .word 0x30824000
  .word 0x14400004
  .word 0x00000000
  .word 0x30624000
  .word 0x10400017
  .word 0x00000000
  .word 0x96820010
  .word 0x2c410002
  .word 0x1420000d
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0f16ec
  .word 0x00000000
  .word 0x10400008
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x24120001
  .word 0x0280202d
  .word 0x26850004
  .word 0x0c0f1370
  .word 0x00000000
  .word 0x100000c8
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9445094e
  .word 0x30a20040
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94440958
  .word 0x30820040
  .word 0x1040000e
  .word 0x00000000
  .word 0x8e020018
  .word 0x144000bb
  .word 0x00000000
  .word 0x24020005
  .word 0xae020010
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x100000b1
  .word 0x00000000
  .word 0x30a20008
  .word 0x14400004
  .word 0x00000000
  .word 0x30820008
  .word 0x1040003d
  .word 0x00000000
  .word 0x8e030018
  .word 0x24020001
  .word 0x14620039
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0xae000018
  .word 0x0280202d
  .word 0x2405000b
  .word 0x24060001
  .word 0x0c101cb4
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000c
  .word 0x24060001
  .word 0x0c101cb4
  .word 0x00000000
  .word 0x8e620004
  .word 0x8e04000c
  .word 0x94450002
  .word 0x0c0f36e8
  .word 0x00000000
  .word 0x8e04000c
  .word 0x24050001
  .word 0x0c0f379c
  .word 0x00000000
  .word 0x8e020018
  .word 0x38420001
  .word 0x00022e3c
  .word 0x00052e3f
  .word 0x8e040008
  .word 0x0c0f279c
  .word 0x00000000
  .word 0x24120001
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000d
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000e
  .word 0x0240302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x1000006f
  .word 0x00000000
  .word 0x30a20004
  .word 0x14400004
  .word 0x00000000
  .word 0x30820004
  .word 0x10400038
  .word 0x00000000
  .word 0x8e020018
  .word 0x14400035
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020001
  .word 0xae020018
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0000302d
  .word 0x0c101cb4
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000c
  .word 0x0000302d
  .word 0x0c101cb4
  .word 0x00000000
  .word 0x8e04000c
  .word 0x24050001
  .word 0x0c0f3780
  .word 0x00000000
  .word 0x8e020018
  .word 0x38420001
  .word 0x00022e3c
  .word 0x00052e3f
  .word 0x8e040008
  .word 0x0c0f279c
  .word 0x00000000
  .word 0x24120001
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000d
  .word 0x0240302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000e
  .word 0x0000302d
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x10000032
  .word 0x00000000
  .word 0x30a20020
  .word 0x14400004
  .word 0x00000000
  .word 0x30820020
  .word 0x1040002c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020010
  .word 0x8e020018
  .word 0x24060001
  .word 0x14460016
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000b
  .word 0x0c101cb4
  .word 0x00000000
  .word 0x0280202d
  .word 0x2405000c
  .word 0x24060001
  .word 0x0c101cb4
  .word 0x00000000
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000e
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x0c0f8250
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x2405000d
  .word 0x24060001
  .word 0x0c0f8308
  .word 0x00000000
  .word 0x1240001f
  .word 0x00000000
  .word 0x8e030018
  .word 0x24020001
  .word 0x1062000b
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x1000000f
  .word 0x00000000
  .word 0x8e040008
  .word 0x24050004
  .word 0x0c0f2740
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x8e82000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x8c420004
  .word 0x8e04000c
  .word 0x94450002
  .word 0x0c0f36e8
  .word 0x00000000
  .word 0x8e82000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x8e040008
  .word 0x8c450004
  .word 0x0000302d
  .word 0x0c0f26c0
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_common_subs reset

// FUN_0040C150


void FUN_0040c150(u32 param_1)



{
  __asm__ (
      ".set noreorder       \n"
      "lw $v1, 0x24($a0)    \n"
      "lw $v1, 0x44($v1)    \n"
      "lw $v1, 0($v1)       \n"
      "andi $v1, $v1, 1     \n"
      ".set reorder"
      :
      :
      : "v1", "memory"
  );
}

// FUN_0040C170


u32 FUN_0040c170(void)
{
  u32 uVar1;
  u32 *puVar2;
  int iVar2;

  uVar1 = FUN_0017d030();
  iVar2 = 0;
  puVar2 = DAT_006aedc4;
  do {
    if (uVar1 <= *(u32 *)((u8 *)puVar2 + iVar2 * 8 + 4)) {
      return *(u32 *)((u8 *)puVar2 + iVar2 * 8);
    }
    uVar1 = uVar1 - *(u32 *)((u8 *)puVar2 + iVar2 * 8 + 4);
    iVar2 = iVar2 + 1;
  } while (uVar1 != 0);
  return 0;
}

// FUN_0040C1E0


void FUN_0040c1e0(int param_1,int param_2,int param_3)



{

  int *piVar6;

  int iVar1;

  int iVar2;

  u32 uVar3;

  int lVar4;

  int iVar5;

  

  if ((param_1 == 0) || (param_2 == 0)) {

    K_Assert((const char *)DAT_006aede8,0x273b);

  }

  iVar1 = *(int *)((int)param_1 + 0xc);

  piVar6 = (int *)*(u32 *)param_2;

  for (iVar5 = 0; iVar5 < (int)((u32 *)param_2)[1];
       iVar5 = iVar5 + 1, piVar6 = piVar6 + 4) {

    if (((*piVar6 == 0) || (datGetFlag_u32_arg(*piVar6) != 0)) &&
        ((piVar6[1] == 0) || (datGetFlag_u32_arg(piVar6[1]) != 0))) {

      if (param_3 != 0) {

        iVar2 = *(int *)((int)param_3 + iVar5 * 4);

      }

      else {

        iVar2 = *(u16 *)(iVar1 + 0x10) + 1;

      }

      iVar2 = FUN_003c5a40(iVar1,iVar2,0xc,0);

      iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 0x1c);

      *(int **)(iVar2 + 4) = piVar6;

      uVar3 = FUN_003dfeb0(param_2);

      *(u32 *)(iVar2 + 8) = uVar3;

    }


  }

  return;

}

// FUN_0040C310


void FUN_0040c310(int param_1)
{
  u32 *puVar1;
  u32 uVar3;
  int iVar6;
  int iVar7;
  int *piVar5;

  piVar5 = *(int **)(*(int *)(param_1 + 0xc) + 4);
  while (piVar5 != 0) {
    switch (*piVar5) {
    case 0xd:
      puVar1 = *(u32 **)(piVar5[5] + 0x1c);
      iVar6 = 0;
      goto persona_check;
persona_loop:
      uVar3 = datPersonaGetHeroPersona_u32((s16)iVar6);
      if ((uVar3 != 0) && (FUN_0017ca10_u32(uVar3) == 1)) {
        iVar7 = 1;
        goto persona_done;
      }
      iVar6++;
persona_check:
      if (iVar6 < (int)(FUN_00175410_u32() & 0xffff)) {
        goto persona_loop;
      }
      iVar7 = 0;
persona_done:
      if (iVar7 == 0) {
        *puVar1 |= 1;
      }
      else {
        *puVar1 &= 0xfffffffe;
      }
      break;
    case 0xb:
      puVar1 = *(u32 **)(piVar5[5] + 0x1c);
      if (FUN_0017c700_u32() == 0) {
        *puVar1 |= 1;
      }
      else {
        *puVar1 &= 0xfffffffe;
      }
      break;
    }
    piVar5 = (int *)piVar5[4];
  }
}

// FUN_0040C460


void FUN_0040c460(u64 param_1,int param_2)



{

  FUN_003dff00(*(u32 *)(*(int *)(*(int *)(param_2 + 0x14) + 0x1c) + 8));

  return;

}

// FUN_0040C490


void FUN_0040c490(u64 param_1)



{

  FUN_003d9820(param_1,4,0);

  FUN_003d9820(param_1,0,0);

  FUN_003d9820(param_1,1,0);

  FUN_003d9820(param_1,5,0);

  FUN_003d9820(param_1,6,0);

  return;

}

// FUN_0040C520


void FUN_0040c520(u64 param_1)



{

  FUN_003d9820(param_1,4,1);

  FUN_003d9820(param_1,0,1);

  FUN_003d9820(param_1,1,1);

  FUN_003d9820(param_1,5,1);

  FUN_003d9820(param_1,6,1);

  return;

}

// FUN_0040C5B0


void FUN_0040c5b0(u64 param_1)



{

  FUN_003d9820(param_1,4,1);

  FUN_003d9820(param_1,0,1);

  FUN_003d9820(param_1,1,1);

  FUN_003d9820(param_1,2,1);

  FUN_003d9820(param_1,3,1);

  FUN_003d9820(param_1,7,1);

  return;

}

// FUN_0040C650


void FUN_0040c650(u64 param_1)



{

  FUN_003d9820(param_1,0,3);

  FUN_003d9820(param_1,7,1);

  return;

}

// FUN_0040C6A0


void FUN_0040c6a0(u64 param_1)



{

  FUN_003d9820(param_1,0,0);

  FUN_003d9820(param_1,7,0);

  return;

}

// W212: absolute u32 alias for DAT_006af930 measured nd290 -> nd295 (588 -> 592 bytes); rejected.
// FUN_0040C6F0


asm int FUN_0040c6f0(int param_1)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x06400004
  .word 0x00000000
  .word 0x2a410003
  .word 0x14200006
  .word 0x00000000
  .word 0x3c04006b
  .word 0x2484ede8
  .word 0x240527ad
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0000202d
  .word 0x24050010
  .word 0x24060007
  .word 0x2407001c
  .word 0x0c0f163c
  .word 0x00000000
  .word 0x0040882d
  .word 0x8c420024
  .word 0x8c500044
  .word 0xae11000c
  .word 0x0200202d
  .word 0x0c0f7fac
  .word 0x00000000
  .word 0xae020008
  .word 0xae120004
  .word 0x24020002
  .word 0x1642001b
  .word 0x00000000
  .word 0x3c06006b
  .word 0x24c6f930
  .word 0x27a50040
  .word 0x24040004
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x001218c0
  .word 0x3c02006a
  .word 0x24425390
  .word 0x00432821
  .word 0x0200202d
  .word 0x27a60040
  .word 0x0c103078
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c1030c4
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x001218c0
  .word 0x3c02006a
  .word 0x24425390
  .word 0x00432821
  .word 0x0200202d
  .word 0x0000302d
  .word 0x0c103078
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c050041
  .word 0x24a5d330
  .word 0x0c0f17a0
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c050041
  .word 0x24a5d3b0
  .word 0x0c0f1788
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c050041
  .word 0x24a5d400
  .word 0x0c0f17b8
  .word 0x00000000
  .word 0x0220202d
  .word 0x3c050041
  .word 0x24a5c460
  .word 0x0c0f17d0
  .word 0x00000000
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0f1b50
  .word 0x00000000
  .word 0x2403000a
  .word 0x8e220024
  .word 0xa4430006
  .word 0x8e220024
  .word 0xa4430008
  .word 0x24020002
  .word 0x1642001c
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050002
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050007
  .word 0x0000302d
  .word 0x0c0f6608
  .word 0x00000000
  .word 0x0200102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0060
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0040C9A0
void FUN_0040c9a0(int param_1)




{

  if (param_1 == 0) {

    K_Assert((const char *)(DAT_006aede8 + 1) - 1,0x27d2);

  }

  FUN_003dff00(*(u32 *)((int)param_1 + 8));

  FUN_003c5a20(*(u32 *)((int)param_1 + 0xc));

  return;

}

// FUN_0040CA00


u32 FUN_0040ca00(int param_1)



{

  u32 lVar1;
  u32 uVar2;

  

  if ((uVar2 = FUN_003c6270_u32(*(u32 *)(param_1 + 0xc))) == 2) {

    FUN_003d9820(param_1,4,1);
    FUN_003d9820(param_1,0,1);
    FUN_003d9820(param_1,1,1);
    FUN_003d9820(param_1,2,1);
    FUN_003d9820(param_1,3,1);
    FUN_003d9820(param_1,7,1);

  }
  lVar1 = uVar2;

  return lVar1;

}

// FUN_0040CAD0


void FUN_0040cad0(int param_1)



{

  int iVar1;

  int iVar2;

  int iVar3;

  int iVar5;

  int iVar4;

  struct {
    u32 uStack_20;
    u32 uStack_1c;
    u16 uStack_18;
    s16 uStack_16;
    int iStack_14;
    int iStack_10;
    u8 pad[8];
  } stack;

  

  iVar4 = 0;

  iVar1 = *(int *)(param_1 + 0xc);

  FUN_003c6380(iVar1);

  iVar5 = *(int *)(*(int *)(iVar1 + 0x24) + 0x2c);

  iVar2 = *(int *)(iVar1 + 0xc);

  while (iVar5 != 0) {

    if (iVar5 != iVar2) {

      iVar3 = *(int *)(*(int *)(iVar5 + 0x14) + 0x1c);

      memset(&stack,0,0x18);

      stack.uStack_20 = **(u32 **)(iVar5 + 0x14);

      stack.uStack_1c = (*(u32 **)(iVar5 + 0x14))[1];

      stack.uStack_18 = (u16)*(u32 *)(*(int *)(iVar1 + 0x24) + 0x1c);

      stack.iStack_14 = iVar1;

      stack.iStack_10 = iVar5;

      FUN_003e0680_typed(*(u32 *)(iVar3 + 8),(code)FUN_0040cc30,&stack);

    }

    iVar5 = *(int *)(iVar5 + 0x10);

    iVar4 = iVar4 + 1;
    if (iVar4 >= *(int *)(*(int *)(iVar1 + 0x24) + 0x20)) {
      break;
    }

  }

  iVar5 = *(int *)(*(int *)(iVar2 + 0x14) + 0x1c);

  memset(&stack,0,0x18);

  stack.uStack_16 = stack.uStack_16 | 1;

  stack.uStack_20 = **(u32 **)(iVar2 + 0x14);

  stack.uStack_1c = (*(u32 **)(iVar2 + 0x14))[1];

  stack.uStack_18 = (u16)*(u32 *)(*(int *)(iVar1 + 0x24) + 0x1c);

  stack.iStack_14 = iVar1;

  stack.iStack_10 = iVar2;

  FUN_003e0680_typed(*(u32 *)(iVar5 + 8),(code)FUN_0040cc30,&stack);

  return;

}

// W419 probe negative: restoring retail FUN_00406aa0 in case 6 reduced nd1213 -> 1210 but grew the object 1772 -> 1800, exceeding the 1792-byte window by 8; reverted.
// FUN_0040CC30


asm void FUN_0040cc30(u64 param_1,int param_2,int *param_3)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0060
  .word 0x7fb50050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0a02d
  .word 0x0000802d
  .word 0x84a70014
  .word 0x8cc30000
  .word 0x00679821
  .word 0x84a70016
  .word 0x8cc30004
  .word 0x00679021
  .word 0x84c60008
  .word 0x84a30026
  .word 0x00c33018
  .word 0x240300ff
  .word 0x00c3001a
  .word 0x00008812
  .word 0x1220019e
  .word 0x00000000
  .word 0x8683000a
  .word 0x30630001
  .word 0x10600002
  .word 0x00000000
  .word 0x24100001
  .word 0x8e88000c
  .word 0x8d070024
  .word 0x8ce60044
  .word 0x8ca30010
  .word 0x2c610008
  .word 0x10200192
  .word 0x00000000
  .word 0x3c05007c
  .word 0x24a5be90
  .word 0x00031880
  .word 0x00651821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8cc40004
  .word 0x1080001d
  .word 0x00000000
  .word 0x24030002
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x10000027
  .word 0x00000000
  .word 0x0010ac3c
  .word 0x0015ac3f
  .word 0x44806000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070014
  .word 0x02a0402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070015
  .word 0x02a0402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x0010ac3c
  .word 0x0015ac3f
  .word 0x44806000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070058
  .word 0x02a0402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070059
  .word 0x02a0402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0xc781ad08
  .word 0xc780ad0c
  .word 0xe7a10078
  .word 0xe7a0007c
  .word 0x8e83000c
  .word 0x8c630024
  .word 0x8c650044
  .word 0x8e830010
  .word 0x8c630014
  .word 0x8c63001c
  .word 0x8c640000
  .word 0x30840001
  .word 0x1080000a
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c043f00
  .word 0x44840000
  .word 0x00000000
  .word 0x46000802
  .word 0x46000024
  .word 0x44110000
  .word 0x8ca50004
  .word 0x10a0001c
  .word 0x00000000
  .word 0x24040002
  .word 0x10a40006
  .word 0x00000000
  .word 0x24040001
  .word 0x10a40003
  .word 0x00000000
  .word 0x10000138
  .word 0x00000000
  .word 0x26640040
  .word 0x26450061
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x0010143c
  .word 0x0002143f
  .word 0x00021080
  .word 0x005d1021
  .word 0x80470078
  .word 0x8c620004
  .word 0x24080001
  .word 0x8c490008
  .word 0x240a0010
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x10000125
  .word 0x00000000
  .word 0x26640040
  .word 0x26450057
  .word 0x44806000
  .word 0x2402ff00
  .word 0x02223025
  .word 0x0010143c
  .word 0x0002143f
  .word 0x00021080
  .word 0x005d1021
  .word 0x80470078
  .word 0x8c620004
  .word 0x24080001
  .word 0x8c490008
  .word 0x240a0010
  .word 0x0000582d
  .word 0x0c0ecb2c
  .word 0x00000000
  .word 0x10000112
  .word 0x00000000
  .word 0x0000282d
  .word 0x0c0f7fe0
  .word 0x00000000
  .word 0x1040010d
  .word 0x00000000
  .word 0x84430016
  .word 0x02438021
  .word 0x84430014
  .word 0x02639021
  .word 0x8e83000c
  .word 0x8c630024
  .word 0x8c630044
  .word 0x8c640004
  .word 0x1080001b
  .word 0x00000000
  .word 0x24030002
  .word 0x10830006
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x100000fb
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x0200282d
  .word 0x24070016
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x0200282d
  .word 0x24070017
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000e9
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x0200282d
  .word 0x2407005d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0240202d
  .word 0x0200282d
  .word 0x2407005e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000d7
  .word 0x00000000
  .word 0x8cc40004
  .word 0x10800011
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x100000cf
  .word 0x00000000
  .word 0x3c024000
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070012
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000c4
  .word 0x00000000
  .word 0x3c024000
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070054
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070055
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000b1
  .word 0x00000000
  .word 0x8cc40004
  .word 0x10800010
  .word 0x00000000
  .word 0x24030001
  .word 0x10830003
  .word 0x00000000
  .word 0x100000a9
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070013
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000009f
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070056
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000094
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070002
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000089
  .word 0x00000000
  .word 0x8cc30004
  .word 0x10600086
  .word 0x00000000
  .word 0x3c024120
  .word 0x44826000
  .word 0x322600ff
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070001
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000007b
  .word 0x00000000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x0220302d
  .word 0x0c101aa8
  .word 0x00000000
  .word 0x10000074
  .word 0x00000000
  .word 0x8cc30004
  .word 0x1460003a
  .word 0x00000000
  .word 0x95040010
  .word 0x8ce30020
  .word 0x0083182b
  .word 0x1460006c
  .word 0x00000000
  .word 0x8cf00028
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x2407005a
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x2407005b
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26640176
  .word 0x00101140
  .word 0x00501023
  .word 0x00021880
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x26420054
  .word 0x00432821
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x2407005c
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x10000038
  .word 0x00000000
  .word 0x95040010
  .word 0x8ce30020
  .word 0x0083182b
  .word 0x14600033
  .word 0x00000000
  .word 0x8cf00028
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070018
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0260202d
  .word 0x0240282d
  .word 0x24070019
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26640176
  .word 0x00101140
  .word 0x00501023
  .word 0x00021880
  .word 0x3402ffff
  .word 0x0062001a
  .word 0x00001812
  .word 0x26420054
  .word 0x00432821
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x2407001a
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0040D330


void FUN_0040d330(int param_1)



{

  int iVar1;

  int iVar2;

  

  iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x44);

  FUN_003e0650(*(u32 *)(iVar1 + 8));

  for (iVar2 = *(int *)(param_1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {

    FUN_003e0650(*(u32 *)(*(int *)(*(int *)(iVar2 + 0x14) + 0x1c) + 8));

  }

  FUN_003d9820(iVar1,1,1);

  return;

}

// FUN_0040D3B0


void FUN_0040d3b0(u32 param_1,u32 param_2,u16 param_3,int param_4)



{
  struct {
    u32 param1;
    u32 param2;
    u16 param3;
    int param4;
    u32 zero;
  } data;
  u32 *base;

  base = *(u32 **)(*(int *)(param_4 + 0x24) + 0x44);
  data.param1 = param_1;
  data.param2 = param_2;
  data.param3 = param_3;
  data.param4 = param_4;
  data.zero = 0;

  FUN_003e0680_typed(*(u32 *)(base + 2),(code)FUN_0040cc30,&data);

  return;

}

// FUN_0040D400
void FUN_0040d400(void)
{
  return;
}

// FUN_0040D410


u32 FUN_0040d410(void)
{
  u32 uVar1;

  uVar1 = scrGetIntPara_u32(0);
  DAT_007cda00 = uVar1;
  switch (uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
    FUN_003e0700_u32(uVar1);
    break;
  case 7:
    fclCombine003d02f0_i();
    break;
  default:
    DAT_007cda00 = 0xffffffff;
  }
  return 1;
}

// FUN_0040D490


u32 FUN_0040d490(void)



{

  int lVar1;

  

  lVar1 = scrGetCmdTimer();

  if (lVar1 < 4) {
    return 0;
  }

    switch(DAT_007cda00) {

    case 0:

    case 1:

    case 2:

    case 3:

    case 4:

    case 5:

    case 6:

    case 8:

      lVar1 = FUN_003e0920();

      if (lVar1 == 0) {

        return 1;

      }

      break;

    case 7:

      lVar1 = fclCombine003d04b0();

      if (lVar1 == 0) {

        return 1;

      }

      break;

    default:

      DAT_007cda00 = 0xffffffff;

    }


  return 0;

}

// FUN_0040D540


u32 FUN_0040d540(void)



{

  switch(DAT_007cda00) {

  case 0:

  case 1:

  case 2:

  case 3:

  case 4:

  case 5:

  case 6:

  case 8:

    FUN_003e0b70();

    break;

  case 7:

    fclCombine003d0560();

    break;

  default:

    DAT_007cda00 = 0xffffffff;

  }

  return 1;

}

// FUN_0040D5B0


void FUN_0040d5b0(int param_1,int param_2,int param_3,int param_4,u32 param_5)



{


  FUN_0040d5e0(0.0f,param_1,param_2,param_3,param_4,param_5);


  return;
}

// FUN_0040D5E0


void FUN_0040d5e0(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6)



{


  FUN_0040d610(param_1,param_2,param_3,param_4,param_5,param_6,0);


  return;
}

// FUN_0040D610


void FUN_0040d610(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6,long param_7)



{


  FUN_0040d640(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);


  return;
}






































// FUN_0040D640

asm void FUN_0040d640(float param_1,int param_2,int param_3,int param_4,int param_5,u32 param_6,
                 long param_7,long param_8)
{
  .set noreorder
  .word 0x27bdfe10
  .word 0xffbf00a0
  .word 0x7fbe0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b40000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x46006506
  .word 0x00c0b82d
  .word 0x00e0f02d
  .word 0x0100902d
  .word 0x0140b02d
  .word 0x15200034
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
  .word 0x3c130096
  .word 0x26730090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x00121602
  .word 0x305500ff
  .word 0x00121402
  .word 0x305400ff
  .word 0x00121202
  .word 0x305300ff
  .word 0x325200ff
  .word 0x3c020096
  .word 0xc4400088
  .word 0x46140501
  .word 0x12c00019
  .word 0x00000000
  .word 0x24040001
  .word 0x02c0282d
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400084
  .word 0x46000803
  .word 0xe7a000c8
  .word 0xafa000c0
  .word 0xafa000c4
  .word 0xe7a00108
  .word 0xafa00100
  .word 0xafa30104
  .word 0xe7a00148
  .word 0xafa30140
  .word 0xafa00144
  .word 0xe7a00188
  .word 0xafa30180
  .word 0xafa30184
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a000b0
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a000b4
  .word 0xe7b400b8
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00151842
  .word 0x32a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000d0
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
  .word 0xe7a000d4
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00131842
  .word 0x32620001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000d8
  .word 0x06400006
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00121842
  .word 0x32420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000dc
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a000f0
  .word 0x021e1021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a000f4
  .word 0xe7b400f8
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00152042
  .word 0x32a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00110
  .word 0x06800006
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00142042
  .word 0x32830001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00114
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00132042
  .word 0x32630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00118
  .word 0x06400006
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00122042
  .word 0x32430001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0011c
  .word 0x02372821
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00130
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00134
  .word 0xe7b40138
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00152042
  .word 0x32a30001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00150
  .word 0x06800006
  .word 0x00000000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00142042
  .word 0x32830001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00154
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00132042
  .word 0x32630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00158
  .word 0x06400006
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00122042
  .word 0x32430001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0015c
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00170
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00174
  .word 0xe7b40178
  .word 0x06a00006
  .word 0x00000000
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00151842
  .word 0x32a20001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00190
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
  .word 0xe7a00194
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00131842
  .word 0x32620001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00198
  .word 0x06400006
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00121842
  .word 0x32420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0019c
  .word 0x24040004
  .word 0x27a500b0
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
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
  .word 0xc7b40000
  .word 0x27bd01f0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}




























// FUN_0040DCC0
asm void FUN_0040dcc0(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 u32 param_7,int param_8,long param_9)
{
  .set noreorder
  .word 0x27bdfe80
  .word 0xffbf00a0
  .word 0x7fbe0090
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
  .word 0x0080802d
  .word 0x00a0a82d
  .word 0x46006506
  .word 0x00c0b82d
  .word 0x00e0f02d
  .word 0xafa800bc
  .word 0x0120882d
  .word 0x0140b02d
  .word 0x15600034
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
  .word 0x3c120096
  .word 0x26520090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040014
  .word 0x24050002
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e420000
  .word 0x0040f809
  .word 0x00000000
  .word 0x00111602
  .word 0x305400ff
  .word 0x00111402
  .word 0x305300ff
  .word 0x00111202
  .word 0x305200ff
  .word 0x323100ff
  .word 0x3c020096
  .word 0xc4400088
  .word 0x46140501
  .word 0x44960000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808224
  .word 0x46010042
  .word 0xc7808110
  .word 0x46010540
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x44970800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000d82
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x00171023
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000842
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46160000
  .word 0xe7a000c0
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0xe7a000c4
  .word 0xe7b400c8
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
  .word 0xe7a000e0
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00131842
  .word 0x32620001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000e4
  .word 0x06400006
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00121842
  .word 0x32420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000e8
  .word 0x06200006
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00111842
  .word 0x32220001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a000ec
  .word 0x26c20078
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808224
  .word 0x46010042
  .word 0xc7808110
  .word 0x46010580
  .word 0x4600b306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x449e0800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000d42
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x001e1023
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000842
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150000
  .word 0xe7a00100
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0xe7a00104
  .word 0xe7b40108
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
  .word 0xe7a00120
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00131842
  .word 0x32620001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00124
  .word 0x06400006
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00121842
  .word 0x32420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00128
  .word 0x06200006
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00111842
  .word 0x32220001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0012c
  .word 0x26c2ff88
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808224
  .word 0x46010042
  .word 0xc7808110
  .word 0x46010580
  .word 0x4600b306
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x8fa200bc
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000d42
  .word 0x4600b306
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x8fa200bc
  .word 0x00021023
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000842
  .word 0x44900000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150000
  .word 0xe7a00140
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0xe7a00144
  .word 0xe7b40148
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
  .word 0xe7a00160
  .word 0x06600006
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00131842
  .word 0x32620001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00164
  .word 0x06400006
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00121842
  .word 0x32420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a00168
  .word 0x06200006
  .word 0x00000000
  .word 0x44910000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00111842
  .word 0x32220001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe7a0016c
  .word 0x24040003
  .word 0x27a500c0
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x3c020096
  .word 0x8c420090
  .word 0x0040f809
  .word 0x00000000
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
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0180
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}


/* FUSION_EXACT_PROTOS */
#pragma alias FUN_0040e3c0_draw FUN_0040e3c0
#pragma alias FUN_0040e3f0_i2f1i3f3 FUN_0040e3f0_draw
#pragma alias FUN_0040e710_i2f1u8i4i3f FUN_0040e710
#pragma alias FUN_0040e930_i2f1u8i4i3f FUN_0040e930
#pragma alias fclDrawSpriteCreate_i FUN_001158b0
#pragma alias fclDrawSpriteEmit FUN_0040e3c0_draw
#pragma alias FUN_0040ec20_typed FUN_0040ec20
#pragma alias DAT_006af9d8_abs DAT_006af9d8
#pragma alias DAT_006af9dc_abs DAT_006af9dc
#pragma alias DAT_006af9e0_abs DAT_006af9e0
#pragma alias DAT_006af9a0_abs DAT_006af9a0
#pragma alias DAT_006af9c0_abs DAT_006af9c0
#pragma alias DAT_006afb10_abs DAT_006afb10
#pragma alias DAT_00960178_abs DAT_00960178
#pragma alias DAT_0096017c_abs DAT_0096017c




// FUN_0040E300
void FUN_0040e300(u32 param_1,u32 param_2)
{
  if (DAT_007ce6a0 != 0) {
    FUN_0040e580(DAT_007ce6a0);
  }
  DAT_007ce6a0 = FUN_0040e450(param_1);
  DAT_007ce69c = param_2;
}

// FUN_0040E360


void FUN_0040e360(void)



{


  FUN_0040e580(DAT_007ce6a0);
  DAT_007ce6a0 = 0;

  DAT_007ce69c = 0;

  return;

}



// FUN_0040E390
void FUN_0040e390(void)
{
  FUN_0040e4f0((int *)DAT_007ce6a0);
}

// FUN_0040E3C0


void FUN_0040e3c0_draw(int param_2,int param_3,float param_1,u8 param_4,int param_5,int param_6)
{
  FUN_0040e610(param_2,param_3,param_1,param_4,param_5,param_6,DAT_007ce6a0);
}

// FUN_0040E3F0
#pragma push
#pragma schedule off
void FUN_0040e3f0_draw(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                   u8 param_7,int param_8,int param_9,int param_10,int param_11)
{
  FUN_0040e710_i2f1u8i4i3f(param_5,param_6,param_1,param_7,param_8,param_9,
                           (int)DAT_007ce6a0,param_10,param_11,param_2,param_3,param_4);
}
#pragma pop

// FUN_0040E420
#pragma push
#pragma schedule off
void FUN_0040e420(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6,
                   u8 param_7,int param_8,int param_9,int param_10,int param_11)
{
  FUN_0040e930_i2f1u8i4i3f(param_5,param_6,param_1,param_7,param_8,param_9,
                           (int)DAT_007ce6a0,param_10,param_11,param_2,param_3,param_4);
}
#pragma pop


// FUN_0040E450
u32 FUN_0040e450(int param_1)
{
  u32 uVar1;
  int iVar2;
  u32 *puVar3;
  iVar2 = *(int *)(param_1 + 4) * 4 + 0x14;

  uVar1 = (*DAT_00960178)(iVar2,0x40000);

  memset((void *)uVar1,0,iVar2);

  puVar3 = (u32 *)uVar1;

  puVar3[1] = param_1;

  puVar3[2] = (u32)(puVar3 + 5);

  puVar3[3] = *(u32 *)(param_1 + 8);

  puVar3[4] = *(u32 *)(param_1 + 0xc);

  *puVar3 = 0;

  return uVar1;

}

// FUN_0040E4F0


u32 FUN_0040e4f0(int *param_1)



{

  int iVar1;

  u32 uVar2;

  u32 uVar3;

  u8 auStack_4 [4];

  

  do {

    iVar1 = *param_1;

    uVar3 = (u32)H_Cdvd_CacheFindFile((const char *)*(u32 *)(*(int *)param_1[1] + iVar1 * 4),(u32 *)auStack_4);

    uVar2 = (u32)func_00112420((void *)uVar3);

    *(u32 *)(param_1[2] + iVar1 * 4) = uVar2;

    iVar1 = *param_1;

    *param_1 = iVar1 + 1;

  } while (iVar1 + 1 < *(int *)(param_1[1] + 4));

  return 1;

}

// FUN_0040E580


void FUN_0040e580(u32 param_1)



{

  int iVar1;

  

  if (param_1 != 0) {

    for (iVar1 = 0; iVar1 < *(int *)(*(int *)((int)param_1 + 4) + 4); iVar1 = iVar1 + 1) {

      func_001124b0((void *)*(u32 *)(*(int *)((int)param_1 + 8) + iVar1 * 4));

    }

    (*DAT_0096017c_abs)(param_1);

  }

  return;

}

// FUN_0040E610


u64
FUN_0040e610(int param_2,int param_3,float param_1,u8 param_4,int param_5,int param_6,
            int param_7)



{

  int iVar1;

  u32 uVar2;

  char *pcVar3;

  

  pcVar3 = (char *)(*(int *)(param_7 + 0xc) + param_5 * 8);

  uVar2 = FUN_001158b0(0,*(u32 *)(*(int *)(param_7 + 8) + *pcVar3 * 4),

                       *(short *)(pcVar3 + 2) + param_6);

  iVar1 = (int)uVar2;

  *(float *)(iVar1 + 0x10) = (float)(param_2 + *(short *)(pcVar3 + 4));

  *(float *)(iVar1 + 0x14) = (float)(param_3 + *(short *)(pcVar3 + 6));

  *(float *)(iVar1 + 0x2c) = param_1;

  *(u8 *)(iVar1 + 0x19) = 0xff - param_4;

  func_001127d0(uVar2,1);

  FUN_00115980(uVar2);

  return 0;

}

static inline f32 fclShopMulFirst(f32 left, f32 right) { return left * right; }

#pragma push
/* Removing this worsens FUN_0040e710 (nd14 -> nd76) - measured W161. */
#pragma opt_rebuildconditionals off
// Confirmed b210 floor: +276/+368 only reverse commutative mul.s operands;
// +308..+352 and +400..+444 select $v0 here versus $v1 in retail.
// FUN_0040E710


asm u64 FUN_0040e710(int param_5, int param_6, float param_1, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12, float param_2, float param_3, float param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x460065c6
  .word 0x00c0982d
  .word 0x0140902d
  .word 0x0160b02d
  .word 0x46006d86
  .word 0x46007546
  .word 0x46007d06
  .word 0x000718c0
  .word 0x8d22000c
  .word 0x00438021
  .word 0x82020000
  .word 0x00021880
  .word 0x8d220008
  .word 0x00431821
  .word 0x86020002
  .word 0x00483021
  .word 0x0000202d
  .word 0x8c650000
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040882d
  .word 0x86030004
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400010
  .word 0x86030006
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001018
  .word 0x4614081c
  .word 0xe4400014
  .word 0xe457002c
  .word 0x240400ff
  .word 0x326300ff
  .word 0x00831823
  .word 0xa0430019
  .word 0xa4520024
  .word 0xa4560026
  .word 0xe4560020
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x3063ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3063ffff
  .word 0xa6230028
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x3063ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3063ffff
  .word 0xa623002a
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#pragma opt_loop_invariants off
#pragma pop

// FUN_0040E930


asm u64 FUN_0040e930(int param_5,int param_6,float param_1,int param_7,int param_8,int param_9,
            int param_10,int param_11,int param_12,float param_2,float param_3,float param_4)
{
  .set noreorder
  .word 0x27bdff70
  .word 0xffbf0080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a82d
  .word 0x00a0a02d
  .word 0x460065c6
  .word 0x00c0982d
  .word 0x0140902d
  .word 0x0160b02d
  .word 0x46006d86
  .word 0x46007546
  .word 0x46007d06
  .word 0x000718c0
  .word 0x8d22000c
  .word 0x00438021
  .word 0x82020000
  .word 0x00021880
  .word 0x8d220008
  .word 0x00431821
  .word 0x86020002
  .word 0x00483021
  .word 0x0000202d
  .word 0x8c650000
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040882d
  .word 0x86030004
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44950000
  .word 0x00000000
  .word 0x46800020
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4615081c
  .word 0xe4400010
  .word 0x86030006
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x46001018
  .word 0x4614081c
  .word 0xe4400014
  .word 0xe457002c
  .word 0x240400ff
  .word 0x326300ff
  .word 0x00831823
  .word 0xa0430019
  .word 0xa4520024
  .word 0xa4560026
  .word 0xe4560020
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46150042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x3063ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3063ffff
  .word 0xa6230028
  .word 0x3c024580
  .word 0x44820000
  .word 0x00000000
  .word 0x46140042
  .word 0x3c024f00
  .word 0x44820000
  .word 0x00000000
  .word 0x46010036
  .word 0x45010007
  .word 0x00000000
  .word 0x46000824
  .word 0x44030000
  .word 0x00000000
  .word 0x3063ffff
  .word 0x10000007
  .word 0x00000000
  .word 0x46000801
  .word 0x46000024
  .word 0x44030000
  .word 0x3c028000
  .word 0x00621825
  .word 0x3063ffff
  .word 0xa623002a
  .word 0x0220202d
  .word 0x0000282d
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0080
  .word 0x7bb60070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0040EB50


s32 FUN_0040eb50_y2(float param_1,int param_2,int param_3,u8 param_4,int param_5,const void *param_6,int param_7)



{

  u32 uVar1;
  u32 *puVar4;
  u32 *puVar3;
  int iVar2;

  u32 auStack_20 [8];

  puVar4 = DAT_006af960;

  puVar3 = auStack_20;

  iVar2 = 5;

  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  return FUN_0040ec20_typed(param_2,param_3,(param_4 & 0xff) | 0xffffff00,param_5,
                            param_6,param_7,auStack_20[param_5],(code)FUN_0040eef0);

}

// FUN_0040EBC0


s32 FUN_0040ebc0_y2(float param_1,int param_2,int param_3,int param_4,int param_5,const void *param_6,int param_7)
{
  u32 *puVar4;
  u32 *puVar3;
  int iVar2;
  u32 uVar1;
  u32 auStack_20 [8];

  puVar4 = DAT_006af980;
  puVar3 = auStack_20;
  iVar2 = 5;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (0 < iVar2);
  return FUN_0040ec20_typed(param_2,param_3,param_4,param_5,param_6,param_7,
                            auStack_20[param_5],(code)FUN_0040eef0);
}

// FUN_0040EC20


void FUN_0040ec20(u32 param_1,int param_2,u32 param_3,u32 param_4,u32 param_5,u64 param_6,
                   u32 param_7,int param_8)
{
  FUN_0040ec50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
}










#pragma alias fGpffffad1c uGpffffad1c

#pragma alias sinf_fclShop sinf_y2
#pragma alias cosf_fclShop cosf_y2
/* FUSION_EXACT_PROTOS */
#pragma alias FUN_0040e3f0_typed FUN_0040e3f0_y2
#pragma alias FUN_003b2cb0_typed FUN_003b2cb0_y2
/* FUSION_GLOBALS */
#pragma alias DAT_006b0ac0_abs DAT_006b0ac0
#pragma alias DAT_006b0ac4_abs DAT_006b0ac4
#pragma alias DAT_006b0ac8_abs DAT_006b0ac8
#pragma alias DAT_006b0acc_abs DAT_006b0acc
#pragma alias DAT_006b0de0_abs DAT_006b0de0
#pragma alias DAT_006b0e30_abs DAT_006b0e30

#pragma alias DAT_006b0e64_abs DAT_006b0e64
#pragma alias DAT_007cda64_f DAT_007cda64

















/* W327 measured: opt_common_subs off normalized_diff 431 -> 409; object 640/640 -> 616/640 (without/with). */

#pragma opt_common_subs reset







/* W327 measured: opt_loop_invariants on normalized_diff 804 -> 786; object 1172/1248 -> 1164/1248 (without/with). */

#pragma opt_loop_invariants reset






#pragma opt_propagation reset
/* W327 measured: opt_loop_invariants on normalized_diff 792 -> 780; object 1172/1248 -> 1164/1248 (without/with). */

#pragma opt_loop_invariants reset






/* W327 measured: opt_loop_invariants on normalized_diff 1006 -> 986; object 1404/1424 -> 1404/1424 (without/with). */

#pragma opt_loop_invariants reset

















/* W327 measured: opt_loop_invariants on normalized_diff 719 -> 672; object 1252/1280 -> 1252/1280 (without/with). */

#pragma opt_loop_invariants reset








/* W327 measured: opt_loop_invariants on normalized_diff 573 -> 524; object 1116/1152 -> 1116/1152 (without/with). */

#pragma opt_loop_invariants reset

/* W327 measured: opt_common_subs off normalized_diff 555 -> 486; object 752/736 -> 736/736 (without/with). */

#pragma opt_common_subs reset



/* W327 measured: opt_common_subs off normalized_diff 582 -> 458; object 804/784 -> 784/784 (without/with). */

#pragma opt_common_subs reset
