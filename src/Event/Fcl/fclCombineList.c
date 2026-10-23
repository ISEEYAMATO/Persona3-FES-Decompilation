#include "Event/Fcl/fclCombineTypes.h"
 #include "Kosaka/k_assert.h"
typedef int code(...);

extern float DAT_007cae00;
extern float DAT_007caf14;
extern float DAT_007caffc;
extern int DAT_006a6040[];
#pragma alias DAT_006a6040_abs DAT_006a6040
extern u8 DAT_006a6040_abs[];
extern int DAT_006a6510[];
#pragma alias DAT_006a6510_abs DAT_006a6510
extern u8 DAT_006a6510_abs[];
#pragma alias DAT_006A66D0_abs DAT_006A66D0
extern u8 DAT_006A66D0_abs[];
extern int DAT_006A6510[];
extern int DAT_006A66D0[];
extern int DAT_006a66d0[];
extern u32 DAT_007ce688;
extern u32 uGpffffb998;
extern s32 iGpffffb998;
extern char gp0xffffaad0;
extern void (*PTR_LAB_007bb900[])();
extern unsigned char DAT_006a6b20[];
extern void FUN_003e6e80(void);
#pragma alias DAT_006a6b20_second DAT_006a6b20
extern unsigned char DAT_006a6b20_second[];
#pragma alias DAT_006a6b20_log DAT_006a6b20
extern unsigned char DAT_006a6b20_log[];
/* FUSION_PROTOS */
u64 FUN_003df4a0(u64 param_1,int param_2);
u32 FUN_003dfac0(int *param_1);
void FUN_003dfae0(int *param_1,int *param_2);
int * FUN_003dfeb0(int param_1);
void FUN_003dff00(s32 param_1);
u32 FUN_003dff30(int *param_1);
int FUN_003dff80(int *param_1,int param_2);
void FUN_003c4710(int *param_1, int *param_2, int *param_3);
int *FUN_003c4820(int *param_1, int *param_2);
int FUN_003dffc0(int *param_1,int param_2,s32 param_3);
void FUN_003e0080(u64 param_1,int param_2,int param_3,u16 param_4);
#pragma alias FUN_003e0080_p FUN_003e0080
extern void FUN_003e0080_p(void *param_1,int param_2,int param_3,u16 param_4);
int FUN_003e0260(int *param_1,s32 param_2,int param_3,u16 param_4);
int FUN_003e0330(int *param_1,s32 param_2,int param_3,u16 param_4);
int FUN_003e04e0(int *param_1,s32 param_2,int param_3,u16 param_4);
u64 FUN_003e0650(u32 *param_1);
void FUN_003e0680(u32 param_1,code* param_2,u32 param_3);
#pragma alias FUN_003e0680_32 FUN_003e0680
void FUN_003e0680_32(u32 param_1, code* param_2, u32 param_3);
#pragma alias FUN_003e0680_p FUN_003e0680
void FUN_003e0680_p(u32 param_1, code* param_2, void* param_3);
void FUN_003e0700(s32 param_1);
void FUN_003e0780(void);
u32 FUN_003e0830(void);
u64 FUN_003e0870(void);
u64 FUN_003e08e0(void);
void FUN_003e0920(void);
u32 FUN_003e0940(void);
void FUN_003e0950(s32);
#pragma alias FUN_003e0950_narg FUN_003e0950
extern void FUN_003e0950_narg();
void FUN_003e0a10(s32);
void FUN_003e0b70(void);
u8 FUN_003e0bb0(void);
u32 FUN_003e0bc0(void);
void FUN_003e0c20(void *param_1,u32 param_2,u32 param_3);
void FUN_003e6400(u64 param_1,u64 param_2);
/* code typedef moved above prototypes */
#include "h_pad.h"
#include "libm.h"

#pragma alias FUN_003e6d40_y2 FUN_003e6d40
#pragma alias FUN_0040e3f0_y2 FUN_0040e3f0_y2
#pragma alias FUN_003e6400_y2 FUN_003e6400_y2
#pragma alias FUN_003e6e80_y2 FUN_003e6e80_y2


void memcpy();
void* memset(void*, s32, s32);
s32 sprintf(char*, const char*, ...);
void K_Assert(const char* file, s32 line);


extern char DAT_006A6020[];
#pragma alias DAT_006A6020_abs DAT_006A6020
extern u8 DAT_006A6020_abs[];
typedef unsigned char byte;

typedef struct FclList FclList;
typedef struct FclOwner FclOwner;
typedef struct FclTaskLink FclTaskLink;
typedef struct FclNodeMeta FclNodeMeta;
typedef struct FclNodeData FclNodeData;
typedef struct FclResultStream FclResultStream;
typedef struct FclSelection FclSelection;
typedef struct FclSelectionSnapshot FclSelectionSnapshot;
typedef struct FclAnimationRecord FclAnimationRecord;
typedef struct FclResourceNode FclResourceNode;
typedef struct FclResourceMeta FclResourceMeta;
typedef struct FclResourceData FclResourceData;
typedef struct FclNodeListContext FclNodeListContext;
typedef struct FclNodeList FclNodeList;
typedef struct FclNodeLink FclNodeLink;
typedef struct FclAnimationNode FclAnimationNode;
typedef struct FclNodeValueStorage FclNodeValueStorage;
typedef struct FclNodeCreateData FclNodeCreateData;
typedef struct FclAnimationResultRecord FclAnimationResultRecord;
typedef struct FclDrawCallbackData FclDrawCallbackData;
typedef struct FclCallbackProxy FclCallbackProxy;
typedef struct FclCreatedTask FclCreatedTask;
typedef struct FclFusionDetail FclFusionDetail;
typedef struct FclFusionOutput FclFusionOutput;
typedef struct FclPersonaDefinition FclPersonaDefinition;
typedef struct FclListUi FclListUi;

struct FclFusionDetail {
    u16 unused_00;                        /* 0x000 */
    u16 persona_id;                       /* 0x002 */
    byte level;                           /* 0x004 */
    byte pad05[0x17];                     /* 0x005 */
    byte base_stat_values[5];             /* 0x01c */
    byte pad21[0x13];                     /* 0x021 */
};

struct FclFusionOutput {
    u32 flags;                            /* 0x000 */
    FclFusionDetail detail;               /* 0x004 */
    byte stat_deltas[5];                  /* 0x038 */
    byte pad3d;                           /* 0x03d */
    s16 changed_skills[8];                /* 0x03e */
    byte pad4e[2];                        /* 0x04e */
    s32 bonus_experience;                 /* 0x050 */
};


struct FclPersonaDefinition {
    u16 unused_00;                        /* 0x000 */
    union {
        byte arcana;
        byte variant_count;
        byte draw_variant;
    } field_02;                           /* 0x002 */
    byte pad03[0x0b];                     /* 0x003 */
};

struct FclSelection {
    u32 flags;                            /* 0x000 */
    u32 state;                            /* 0x004 */
    byte pad08[4];                        /* 0x008 */
    s32 current_choice_index;             /* 0x00c */
    FclFusionDetail** choice_list;        /* 0x010 */
    s32 result_choice_index;              /* 0x014 */
    FclFusionOutput fusion;               /* 0x018 */
    FclFusionDetail result_detail;        /* 0x06c */
    FclListUi* ui;                        /* 0x0a0 */
    s32 bonus_experience;                 /* 0x0a4 */
};

typedef char FclSelectionSizeMustBeA8[
    sizeof(FclSelection) == 0xa8 ? 1 : -1
];
typedef char FclFusionDetailSizeMustBe34[
    sizeof(FclFusionDetail) == 0x34 ? 1 : -1
];
typedef char FclFusionOutputSizeMustBe54[
    sizeof(FclFusionOutput) == 0x54 ? 1 : -1
];

enum FclSelectionState {
    FCL_SELECTION_STATE_INITIALIZE = 0,
    FCL_SELECTION_STATE_READY = 1,
    FCL_SELECTION_STATE_FINISH = 2,
    FCL_SELECTION_STATE_FINISHED = 3,
    FCL_SELECTION_STATE_INPUT = 4,
    FCL_SELECTION_STATE_ACTION_PENDING = 5,
    FCL_SELECTION_STATE_ACTION_WAIT = 6,
    FCL_SELECTION_STATE_ACTION_START = 7,
    FCL_SELECTION_STATE_ACTION_RESULT = 8
};

enum FclSelectionFlag {
    FCL_SELECTION_FLAG_VISIBLE = 0x01,
    FCL_SELECTION_FLAG_CONFIRM = 0x02,
    FCL_SELECTION_FLAG_UI_ACTION_3 = 0x04,
    FCL_SELECTION_FLAG_UI_ACTION_4 = 0x08,
    FCL_SELECTION_FLAG_UI_ACTION_2 = 0x10
};

enum FclFusionOutputFlag {
    FCL_FUSION_OUTPUT_ACTION_3 = 0x02,
    FCL_FUSION_OUTPUT_ACTION_2 = 0x08,
    FCL_FUSION_OUTPUT_ACTION_RESULT = 0x10
};
struct FclSelectionSnapshot {
    byte values[8];
};
struct FclAnimationRecord {
    byte enabled;                       /* 0x000 */
    byte pad01[0x1b];                   /* 0x001 */
};

struct FclList {
    u32 flags;                         /* 0x000 */
    s32 mode;                          /* 0x004 */
    s16 state;                         /* 0x008 */
    u16 state_pad;                     /* 0x00a */
    s32 capacity;                      /* 0x00c */
    s32 used;                          /* 0x010 */
    FclOwner* list;                    /* 0x014 */
    FclFusionDetail** values;             /* 0x018 */
    FclFusionOutput fusion;               /* 0x01c */
    FclListUi* ui;                        /* 0x070 */
    FclSelection selection;               /* 0x074 */
    byte input_copy[0x90];                /* 0x11c */
    FclResultStream* result;              /* 0x1ac */
    FclFusionDetail* embedded_values[1];  /* 0x1b0 */
};
typedef char FclListSizeMustBe1B4[
    sizeof(FclList) == 0x1b4 ? 1 : -1
];

typedef struct FclTaskContainer FclTaskContainer;
struct FclTaskContainer {
    byte prefix[0x44];
    FclList* work;                      /* 0x044 */
};
struct FclOwner {
    byte prefix[4];
    FclTaskLink* links;                 /* 0x004 */
    byte pad08[4];                      /* 0x008 */
    union {
        FclTaskLink* secondary_head;
        FclResourceNode* root_node;
    } root;                             /* 0x00c */
    u16 callback_entry_count;           /* 0x010 */
    byte pad12[0x12];                   /* 0x012 */
    FclTaskContainer* container;        /* 0x024 */
};
typedef struct FclAnimationState FclAnimationState;
struct FclAnimationState {
    u32 flags;                          /* 0x000 */
    byte pad04[0x10];                   /* 0x004 */
    FclOwner* task;                     /* 0x014 */
    byte pad18[0x58];                   /* 0x018 */
    void* ui;                           /* 0x070 */
};
 
typedef struct FclTextRecord FclTextRecord;
typedef struct FclTextFallbackData FclTextFallbackData;
typedef struct FclTextResourceData FclTextResourceData;
typedef struct FclTextResourceMeta FclTextResourceMeta;
typedef struct FclTextResourceNode FclTextResourceNode;
typedef struct FclGlyphSet FclGlyphSet;
typedef struct FclSoundLookup FclSoundLookup;
typedef struct FclTextLayout FclTextLayout;
typedef struct FclTextLayoutTemplate FclTextLayoutTemplate;
typedef union FclTextRuntimeTable FclTextRuntimeTable;

struct FclTextRecord {
    byte pad00[2];                        /* 0x000 */
    s16 text_id;                          /* 0x002 */
    byte format_value;                    /* 0x004 */
};

struct FclTextFallbackData {
    byte pad00[8];                        /* 0x000 */
    s16 fallback_text_ids[1];             /* 0x008 */
};

struct FclTextResourceData {
    byte pad00[4];                        /* 0x000 */
    u32 selection_mask;                   /* 0x004 */
    FclTextRecord* active_record;         /* 0x008 */
    byte pad0c[0x5c];                     /* 0x00c */
    FclTextFallbackData* fallback;        /* 0x068 */
    FclTextRecord* item_records[1];       /* 0x06c */
};

struct FclTextResourceMeta {
    byte pad00[0x1c];                     /* 0x000 */
    FclTextResourceData* data;            /* 0x01c */
};

struct FclTextResourceNode {
    s32 display_index;                    /* 0x000 */
    byte pad04[0x10];                     /* 0x004 */
    FclTextResourceMeta* meta;            /* 0x014 */
};

struct FclGlyphSet {
    char glyphs[0x11];                    /* 0x000 */
};

struct FclSoundLookup {
    byte pad00[2];                        /* 0x000 */
    s16 text_id;                          /* 0x002 */
    byte text_style;                      /* 0x004 */
    byte pad05[0x2f];                     /* 0x005 */
};

struct FclTextLayout {
    byte data[0x28];                      /* 0x000 */
};

struct FclTextLayoutTemplate {
    byte data[1];                         /* 0x000 */
};

union FclTextRuntimeTable {
    char format_string[1];
    FclTextLayoutTemplate layout_template;
};

struct FclTaskLink {
    byte prefix[0x0c];
    FclTaskLink* secondary_next;         /* 0x00c */
    FclTaskLink* next;                   /* 0x010 */
    FclNodeMeta* payload;               /* 0x014 */
    byte suffix[8];
    FclTaskLink* tail_next;              /* 0x020 */
};


typedef union FclNodeMetaPayload FclNodeMetaPayload;
union FclNodeMetaPayload {
    FclNodeData* node_data;
    FclTextResourceNode* text_node;
};

struct FclNodeMeta {
    byte prefix[0x1c];
    FclNodeMetaPayload data;               /* 0x01c */
};

struct FclNodeData {
    s32 value;                              /* 0x000 */
    FclNodeData* record;                    /* 0x004 */
    FclFusionDetail* selection_detail;      /* 0x008 */
    FclFusionOutput fusion;                 /* 0x00c */
    FclResultStream* callback_target;       /* 0x060 */
    u32 visual_flags;                       /* 0x064 */
    const u16* sound_id;                    /* 0x068 */
    s32 slot_values[1];                     /* 0x06c */
};


struct FclResourceNode {
    byte pad00[0x14];                   /* 0x000 */
    FclResourceMeta* meta;              /* 0x014 */
};

struct FclResourceMeta {
    byte pad00[0x1c];                   /* 0x000 */
    FclResourceData* data;              /* 0x01c */
};

struct FclResourceData {
    byte pad00[0x0c];                   /* 0x000 */
    byte input[0x54];                   /* 0x00c */
    FclResultStream* callback_target;   /* 0x060 */
    u32 mode_flags;                     /* 0x064 */
    byte pad68[4];                      /* 0x068 */
    FclFusionDetail* selection_values[1]; /* 0x06c */
};

struct FclNodeListContext {
    byte pad00[4];                      /* 0x000 */
    FclNodeList* list;                  /* 0x004 */
};

struct FclNodeList {
    byte pad00[4];                      /* 0x000 */
    FclNodeLink* primary_head;          /* 0x004 */
    FclNodeLink* secondary_head;        /* 0x008 */
    byte pad0c[4];                      /* 0x00c */
    u16 allocation_count;               /* 0x010 */
    byte pad12[2];                      /* 0x012 */
};

struct FclNodeLink {
    byte pad00[0x0c];                   /* 0x000 */
    FclNodeLink* secondary_next;        /* 0x00c */
    FclNodeLink* next;                  /* 0x010 */
    FclAnimationNode* payload;          /* 0x014 */
};

struct FclNodeValueStorage {
    s32 values[1];                      /* 0x000 */
};

struct FclAnimationNode {
    s32 value;                          /* 0x000 */
    FclNodeLink* link;                  /* 0x004 */
    u32 flags;                          /* 0x008 */
    u32 field_0c;                       /* 0x00c */
    s32 source_value;                   /* 0x010 */
    s16 current_x;                      /* 0x014 */
    s16 current_y;                      /* 0x016 */
    s16 target_x;                       /* 0x018 */
    s16 target_y;                       /* 0x01a */
    s16 interpolated_x;                 /* 0x01c */
    s16 interpolated_y;                 /* 0x01e */
    s16 current_z;                      /* 0x020 */
    s16 target_z;                       /* 0x022 */
    s16 requested_z;                    /* 0x024 */
    s16 current_w;                      /* 0x026 */
    s16 target_w;                       /* 0x028 */
    s16 endpoint_w;                     /* 0x02a */
    s16 duration;                       /* 0x02c */
    u16 elapsed;                        /* 0x02e */
    u16 divisor;                        /* 0x030 */
    byte pad32[2];                      /* 0x032 */
    FclNodeValueStorage* value_storage; /* 0x034 */
    FclNodeValueStorage inline_storage; /* 0x038 */
};

struct FclNodeCreateData {
    byte pad00[0x38];                   /* 0x000 */
    FclNodeValueStorage inline_storage; /* 0x038 */
};

struct FclAnimationResultRecord {
    s32 value;                          /* 0x000 */
    byte pad04[4];                      /* 0x004 */
    s16 field08;                        /* 0x008 */
    s16 field0a;                        /* 0x00a */
    s16 field0c;                        /* 0x00c */
    s16 field0e;                        /* 0x00e */
    s16 field10;                        /* 0x010 */
    s16 field12;                        /* 0x012 */
    s16 field14;                        /* 0x014 */
    s16 field16;                        /* 0x016 */
    s16 field18;                        /* 0x018 */
    u16 field1a;                        /* 0x01a */
};

struct FclDrawCallbackData {
    s32 callback_arg0;                  /* 0x000 */
    s32 callback_arg1;                  /* 0x004 */
    s16 callback_arg2;                  /* 0x008 */
    s16 flags;                          /* 0x00a */
    FclList* work;                      /* 0x00c */
    FclResourceData* resource_data;     /* 0x010 */
    FclOwner* owner;                    /* 0x014 */
    FclResourceNode* node;              /* 0x018 */
};

typedef void (*FclCallback)(void);
typedef void FclProxyCallback(FclCallbackProxy*);

struct FclCallbackProxy {
    FclList* work;                      /* 0x000 */
    FclCreatedTask* created_task;       /* 0x004 */
};

struct FclCreatedTask {
    byte pad00[0x24];                   /* 0x000 */
    FclCallbackProxy* proxy;            /* 0x024 */
};

typedef struct FclDb650TextData FclDb650TextData;
typedef struct FclDb650Result FclDb650Result;
typedef struct FclDrawResult FclDrawResult;
typedef struct FclDrawCallbackRecord FclDrawCallbackRecord;

struct FclDb650TextData {
    byte pad00[2];                         /* 0x000 */
    u16 glyph_index;                       /* 0x002 */
    byte decimal_value;                    /* 0x004 */
};

struct FclDb650Result {
    byte pad00[0x10];                      /* 0x000 */
    s32 mode;                              /* 0x010 */
    s16 x;                                 /* 0x014 */
    s16 y;                                 /* 0x016 */
    byte pad18[0x0e];                      /* 0x018 */
    s16 alpha;                             /* 0x026 */
    byte pad28[0x0c];                      /* 0x028 */
    FclDb650TextData* text_data;           /* 0x034 */
};

struct FclDrawResult {
    byte pad00[0x10];                      /* 0x000 */
    s32 mode;                              /* 0x010 */
    s16 x_offset;                          /* 0x014 */
    s16 y_offset;                          /* 0x016 */
    byte pad18[0x0e];                      /* 0x018 */
    s16 alpha_scale;                       /* 0x026 */
};

struct FclDrawCallbackRecord {
    s32 x;                                 /* 0x000 */
    s32 y;                                 /* 0x004 */
    s16 alpha;                             /* 0x008 */
    u16 flags;                             /* 0x00a */
    FclList* work;                         /* 0x00c */
    FclNodeData* candidate_data;           /* 0x010 */
    FclOwner* owner;                       /* 0x014 */
    FclTaskLink* candidate;                /* 0x018 */
};

typedef char FclDrawCallbackRecordSizeMustBe1C[
    sizeof(FclDrawCallbackRecord) == 0x1c ? 1 : -1
];


FclOwner* FUN_003c58f0(s32, s32, s32, s32);
s32 FUN_003c6270(s32);
s32 FUN_003c6380(s32);
FclCreatedTask* FUN_003c44d0(s32, s32, s32, FclProxyCallback*);
s32 FUN_003c45f0(s32);
FclNodeLink* FUN_003c4910(FclNodeList*, s32, FclNodeValueStorage*);
s32 FUN_003c4df0(s32, s32);
u32 FUN_003c4e50(s32, s32);
s32 FUN_003c4e70(s32);
s32 FUN_003c5460(...);
s32 FUN_003c6c50(s32);
s32 FUN_003c6c80(s32);
s32 FUN_003c6ca0(s32);
s32 FUN_003c6cc0(s32);
s32 FUN_003c6ce0(s32);
void FUN_003c5a20(s32);
s32 FUN_003c6d10(s32);
s32 FUN_003c6d80(s32);
s32 FUN_003c6ec0(s32);
s32 FUN_003c6ee0(s32);
void FUN_003c6f10(s32);
void FUN_003c6f50(s32);
void FUN_003c9d00(FclListUi*, s32);
void FUN_003c9cd0(FclListUi*, s32);
void FUN_003c9e00(FclListUi*, s32);
void FUN_003c9e70(FclListUi*, s8);
void FUN_003c7430(s32);
void FUN_003c74e0(s32);
s32 FUN_003c7610(void);
void FUN_003c7700(void);
s32 FUN_003c7850(void);
u16 FUN_003d5dc0(u16);
s32 FUN_003d8230(FclFusionOutput*, FclFusionDetail**, s32);
s32 FUN_003d02e0(void);
s32 FUN_003d06d0(s32, s32, s32);
s32 FUN_003d6ae0(s32, s32, s32);
#pragma alias fclList6ae0Ptr FUN_003d6ae0
extern u8 fclList6ae0Ptr(void *, s32, int *);
u32 FUN_003d6c90(int param_1);
u32 FUN_003d6f80(int param_1,int param_2,void *param_3);
s32 FUN_003d7180();
u32 FUN_003d71d0(u32 *param_1,u8 *param_2,u16 *param_3);
u64 FUN_003d72f0(u16 *param_1);
s32 FUN_003d74f0(void);
s32 FUN_003d8370(s32, s32, s32);
s32 FUN_003d8850(s32, s32, s32);
s32 FUN_003d9cc0(s32);
void FUN_003d9ea0(FclList*);
void FUN_003c9b00(FclListUi*, FclFusionDetail*, FclFusionOutput*);
void FUN_0040e3c0(float, s32, s32, byte, s32, s32);
/* ABI reorder retained: 003dc2d0 nd574->534, 003dd260 nd911->901, 003dca10 MATCH. */
#pragma alias FUN_0040e3c0_i FUN_0040e3c0
void FUN_0040e3c0_i(s32, s32, float, byte, s32, s32);
void FUN_0040e3f0(float, float, float, float, s32, s32, byte, s32, s32, s32, s32);
/* ABI reorder retained: 003dfae0 alias-only nd501->462. */
 #pragma alias FUN_0040e3f0_i2f1i3f3 FUN_0040e3f0
 extern void FUN_0040e3f0_i2f1i3f3(s32 param_5, s32 param_6, float param_1,
                                   byte param_7, s32 param_8, s32 param_9,
                                   s32 param_10, s32 param_11, float param_2,
                                   float param_3, float param_4);
s32 FUN_0040eb50(float, s32, s32, byte, s16, const void*, s32);
s32 FUN_003b32d0(float, s32, s32, s32, s8, s32, const FclGlyphSet*, s32, s32);
void FUN_00523ac8(FclTextLayout*, const FclTextLayoutTemplate*, byte);
s32 FUN_0010a4e0(s32, s32, s32, s32);
u32 FUN_00175410(void);
FclGlyphSet* FUN_00177790(s32);
byte datGetLevel(s16);
extern FclPersonaDefinition* DAT_007ce420[];
extern u8* gp0xffffb730;
extern const FclGlyphSet* DAT_007ce4e4[];
#pragma alias DAT_007ce4e4_ptr DAT_007ce4e4
extern const FclGlyphSet** DAT_007ce4e4_ptr;
extern const FclTextRuntimeTable DAT_007cd798;
extern u16 DAT_007cd79c;
extern u16 DAT_007cd79e;
extern u16 DAT_007cd7a0;
extern u16 DAT_007cd7a2;
extern u16 DAT_007cd7a4;
extern u16 DAT_007cd7a6;
extern u16 DAT_007cd7a8;
extern u16 DAT_007cd7aa;
extern s16 DAT_007cd7ac;
extern s16 DAT_007cd7ae;
extern s16 DAT_007cd7b0;
extern s16 DAT_007cd7b2;
extern char DAT_007cd7b8;
extern float DAT_007cadd0;
extern float DAT_007cad74;
extern s16 FUN_0016deb0(s16);
extern s8 FUN_0016dba0(s16);
extern s32 FUN_003d58c0(s16, s32);

FclAnimationNode* fclCombineList003df090(FclNodeListContext*, FclNodeCreateData*);
s32 fclCombineList003da3e0(FclList*, s32);
s32 fclCombineList003da470(FclList*, s32);
s32 fclCombineList003dd9e0(FclList*);
s32 fclCombineList003dda80(FclList*);
s32 fclCombineList003ddb00(FclList*);
s32 fclCombineList003de160(FclSelection*);
void fclCombineList003dd260(FclResultStream*, FclDrawResult*, FclDrawCallbackRecord*);
void fclCombineList003df220(FclAnimationNode*, s32, s32, s32, s16, s16);
void fclCombineList003ddb90(FclList*, FclSelection*);
s32 fclCombineList003ddd20(FclSelection*);
void fclCombineList003deb20(FclList*);
void fclCombineList003ded40(FclCallbackProxy*);

// FUN_003da0c0
FclList* fclCombineList003da0c0(void* param_1, s32 param_2)
{
    FclOwner* task;
    s32 mode;
    FclList* work;

    switch (param_2) {
    case 0:
        mode = 2;
        break;
    case 1:
        mode = 3;
        break;
    default:
        K_ASSERT(0, 0x3b8);
        break;
    }
    task = FUN_003c58f0(0, mode * 4 + 0x1b0, 0xc, 0x18);
    work = task->container->work;
    work->list = task;
    work->mode = param_2;
    work->capacity = mode;
    work->flags = 0;
    work->values = work->embedded_values;
    memcpy(work->input_copy, param_1, 0x90);
    work->result = (FclResultStream*)FUN_003dfeb0((s32)work);
    FUN_003d9cc0((s32)work);
    FUN_003d8850((s32)work, 0xb, 0);
    FUN_003d8850((s32)work, 0, 0);
    FUN_003d8850((s32)work, 1, 0);
    FUN_003d8850((s32)work, 4, 0);
    FUN_003d8850((s32)work, 5, 0);
    FUN_003d8850((s32)work, 0xc, 0);
    FUN_003d8850((s32)work, 0xf, 0);
    FUN_003d8850((s32)work, 0x16, 0);
    FUN_003d8850((s32)work, 0xd, 0);
    FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 5, 0);
    return work;
}

// Reuse the first-loop node register as the second-loop counter to match retail's
// saved-register coloring; this preserves the pointer traversal in a separate scan local.
// FUN_003da2a0
void fclCombineList003da2a0(FclList* param_1)
{
    FclNodeData* data;
    FclTaskLink* node;
    s32 i;

    i = 0;
    node = param_1->list->links;
    while (node != 0) {
        data = node->payload->data.node_data;
        if (data->selection_detail != 0 &&
            data->selection_detail == (FclFusionDetail*)fclCombineList003da3e0(param_1, 0))
            break;
        node = node->next;
        i++;
    }
    data->record = 0;
    {
        FclTaskLink* scan;

        node = (FclTaskLink*)0;
        scan = param_1->list->links;
        while (scan != 0) {
            data = scan->payload->data.node_data;
            if (data->selection_detail != 0 && (s32)node != i)
                data->record = (FclNodeData*)FUN_003d8370((s32)param_1->input_copy, i, (s32)node);
            else
                data->record = 0;
            node = (FclTaskLink*)((u8*)node + 1);
            scan = scan->next;
        }
    }
}

// FUN_003da3a0
void fclCombineList003da3a0(FclList* param_1)
{
    FclOwner* list;
    list = param_1->list;
    FUN_003dff00((s32)param_1->result);
    FUN_003c5a20((s32)list);
}
// FUN_003da3e0
s32 fclCombineList003da3e0(FclList* param_1, s32 param_2)
{
    s32 p;
    K_ASSERT(param_1 != 0, 0x411);
    if (param_1->capacity <= param_2) return 0;
    p = (s32)param_1->values[param_2];
    if (p != 0) return p;
    return 0;
}
static inline s32 fclCombineListGetValue(FclList* param_1, s32 param_2)
{
    s32 p;
    K_ASSERT(param_1 != 0, 0x411);
    if (param_1->capacity <= param_2) return 0;
    p = (s32)(void *)param_1->values;
    p += param_2 << 2;
    p = *(s32 *)p;
    if (p != 0) return p;
    return 0;
}
// FUN_003da470
s32 fclCombineList003da470(FclList* param_1, s32 param_2)
{
    s32 i;
    s32 p;
    K_ASSERT(param_1 != 0, 0x438);
    if (param_2 == 0) return 0;
    i = 0;
    while (i < param_1->used) {
        K_ASSERT(param_1 != 0, 0x411);
        if (param_1->capacity <= i) {
            p = 0;
            goto da470_compare;
        }
        else {
            p = (s32)(void *)param_1->values;
            p += i << 2;
            p = *(s32 *)p;
        }
        switch (p) {
        case 0:
            p = 0;
        default:
            break;
        }
da470_compare:
        if (p == param_2)
            return param_2;
        i++;
    }
    return 0;
}

// FUN_003da570
#ifndef PC_BUILD
asm void fclCombineList003da570(FclList* param_1, s32 param_2)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080a02d
  .word 0x8c820014
  .word 0x8c530004
  .word 0x8c920004
  .word 0x27a40060
  .word 0x0000282d
  .word 0x24060020
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e820010
  .word 0x00023080
  .word 0x27a40060
  .word 0x8e850018
  .word 0x0c148494
  .word 0x00000000
  .word 0x10000041
  .word 0x00000000
  .word 0x8e620014
  .word 0x8c50001c
  .word 0x0000882d
  .word 0x1000001e
  .word 0x00000000
  .word 0x16800006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050411
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e82000c
  .word 0x0222082a
  .word 0x14200004
  .word 0x00000000
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e830018
  .word 0x00111080
  .word 0x00621021
  .word 0x8c430000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000182d
  .word 0x8e020008
  .word 0x14620003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x26310001
  .word 0x8e82000c
  .word 0x0222102a
  .word 0x1440ffe0
  .word 0x00000000
  .word 0x2411ffff
  .word 0x2402ffff
  .word 0x16220011
  .word 0x00000000
  .word 0x8e030008
  .word 0x8e820010
  .word 0x00021080
  .word 0x005d1021
  .word 0xac430060
  .word 0x2604000c
  .word 0x0240282d
  .word 0x27a60060
  .word 0x0c0f5ab8
  .word 0x00000000
  .word 0x8e830010
  .word 0x00031880
  .word 0x007d1821
  .word 0xac600060
  .word 0x10000006
  .word 0x00000000
  .word 0x2604000c
  .word 0x0000282d
  .word 0x24060054
  .word 0x0c148502
  .word 0x00000000
  .word 0x8e730010
  .word 0x1660ffbf
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
}
#endif /* PC_BUILD: asm function omitted */
/* Removing this worsens FUN_003da700 (nd2097 -> nd2101) - measured W161. */
/* Array declaration orders selected_ids/list/transformed: nd1960-1968, object3740/window3712 (all over by28); no win - measured W419. */
#pragma opt_loop_invariants on
// FUN_003da700
#ifndef PC_BUILD
asm s32 fclCombineList003da700(FclList* param_1)
{
  .set noreorder
  .word 0x27bdff20
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c930014
  .word 0x0260202d
  .word 0x0c0f189c
  .word 0x00000000
  .word 0x24030003
  .word 0x14430015
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420010
  .word 0x10400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000382
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x24020002
  .word 0x10000375
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1b38
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1b44
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0c042938
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1b28
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1b30
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x86020008
  .word 0x2c410008
  .word 0x10200350
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b840
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000b
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1b14
  .word 0x00000000
  .word 0x104000ca
  .word 0x00000000
  .word 0x8c420014
  .word 0x8c52001c
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050465
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050466
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e450008
  .word 0x14a00004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000014
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f691c
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000c
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x10400007
  .word 0x00000000
  .word 0x96420012
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000002
  .word 0x00000000
  .word 0x24020001
  .word 0x14400009
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070008
  .word 0x0c042938
  .word 0x00000000
  .word 0x1000030c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x0260202d
  .word 0x26650004
  .word 0x0c0f1394
  .word 0x00000000
  .word 0x8e510008
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x240503ff
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e020010
  .word 0x00021880
  .word 0x8e020018
  .word 0x00431021
  .word 0xac510000
  .word 0x8e020010
  .word 0x24450001
  .word 0xae050010
  .word 0x8e04000c
  .word 0x00a4102a
  .word 0x1440002b
  .word 0x00000000
  .word 0x24020004
  .word 0xa6020008
  .word 0x0260202d
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x2604001c
  .word 0x2645000c
  .word 0x24060054
  .word 0x0c148494
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000c
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000f
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050017
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001c
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x100002c4
  .word 0x00000000
  .word 0x24a30001
  .word 0x0064102a
  .word 0x1440002b
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420008
  .word 0x1440000c
  .word 0x00000000
  .word 0x10640006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x240504ab
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x0200202d
  .word 0x0240282d
  .word 0x0c0f695c
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420001
  .word 0xae020000
  .word 0x34420008
  .word 0xae020000
  .word 0x0200202d
  .word 0x24050001
  .word 0x00a0302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x1462000c
  .word 0x00000000
  .word 0x24a20002
  .word 0x14440009
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f68a8
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000d
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050017
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050016
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050019
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x10000276
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1b20
  .word 0x00000000
  .word 0x104000c2
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e030010
  .word 0x14600005
  .word 0x00000000
  .word 0x8e02000c
  .word 0x2442ffff
  .word 0x14620086
  .word 0x00000000
  .word 0x8e020014
  .word 0x24450004
  .word 0x8c470004
  .word 0x00031880
  .word 0x1000000e
  .word 0x00000000
  .word 0x8ce60014
  .word 0x8cc2001c
  .word 0x8c440008
  .word 0x8e020018
  .word 0x00431021
  .word 0x8c42fffc
  .word 0x14820005
  .word 0x00000000
  .word 0x8cc2000c
  .word 0x2446ffff
  .word 0x10000005
  .word 0x00000000
  .word 0x8ce70010
  .word 0x14e0fff2
  .word 0x00000000
  .word 0x2406ffff
  .word 0x8e040014
  .word 0x0c0f137c
  .word 0x00000000
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050408
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e020010
  .word 0x2442ffff
  .word 0xae020010
  .word 0x00021880
  .word 0x8e020018
  .word 0x00431021
  .word 0xac400000
  .word 0x8e030000
  .word 0x30620001
  .word 0x10400029
  .word 0x00000000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae020000
  .word 0x0200202d
  .word 0x24050001
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050003
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050016
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050018
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001b
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050016
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050018
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001b
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x8e030010
  .word 0x8e02000c
  .word 0x2442ffff
  .word 0x0062082a
  .word 0x10200005
  .word 0x00000000
  .word 0x8e030000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae020000
  .word 0x8e020010
  .word 0x144001f5
  .word 0x00000000
  .word 0x8e030004
  .word 0x24020001
  .word 0x146201f1
  .word 0x00000000
  .word 0x8e020014
  .word 0x8c430004
  .word 0x10000005
  .word 0x00000000
  .word 0x8c620014
  .word 0x8c42001c
  .word 0xac400004
  .word 0x8c630010
  .word 0x00000000
  .word 0x1460fffa
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000d
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x100001df
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1bd4
  .word 0x00000000
  .word 0x24020002
  .word 0xa6020008
  .word 0x0200202d
  .word 0x0000282d
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050001
  .word 0x00a0302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000c
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000f
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050016
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000d
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x100001b0
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420010
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94420958
  .word 0x30420010
  .word 0x104001a6
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070003
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e62000c
  .word 0x8c420014
  .word 0x8c42001c
  .word 0x1040019b
  .word 0x00000000
  .word 0x8c420008
  .word 0x10400198
  .word 0x00000000
  .word 0x24020006
  .word 0xa6020008
  .word 0x0260202d
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1ba8
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x10400008
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000c
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000f
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050016
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001c
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x8e020010
  .word 0x14400164
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000d
  .word 0x24060001
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x1000015d
  .word 0x00000000
  .word 0x8e0401ac
  .word 0x0c0f7fcc
  .word 0x00000000
  .word 0x10400158
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x0000302d
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x24020005
  .word 0xa6020008
  .word 0x0200202d
  .word 0x26050074
  .word 0x0c0f76e4
  .word 0x00000000
  .word 0x26040074
  .word 0x0c0f7748
  .word 0x00000000
  .word 0x24030002
  .word 0x1043007a
  .word 0x00000000
  .word 0x24030001
  .word 0x10430003
  .word 0x00000000
  .word 0x10000133
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x24060001
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x8e030004
  .word 0x14600004
  .word 0x00000000
  .word 0x0000902d
  .word 0x10000005
  .word 0x00000000
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0x0040902d
  .word 0x8e02001c
  .word 0x30420004
  .word 0x10400002
  .word 0x00000000
  .word 0x24120002
  .word 0x0240202d
  .word 0x0c0f5b24
  .word 0x00000000
  .word 0x10400047
  .word 0x00000000
  .word 0x27a40060
  .word 0x0000282d
  .word 0x24060018
  .word 0x0c148502
  .word 0x00000000
  .word 0x0000a02d
  .word 0x10000014
  .word 0x00000000
  .word 0x00148880
  .word 0x8e020018
  .word 0x00511021
  .word 0x8c420000
  .word 0x14400006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050504
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e020018
  .word 0x00511021
  .word 0x8c420000
  .word 0x94430002
  .word 0x00141040
  .word 0x005d1021
  .word 0xa4430060
  .word 0x26940001
  .word 0x8e02000c
  .word 0x0282102a
  .word 0x1440ffea
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0f5c60
  .word 0x00000000
  .word 0x10400014
  .word 0x00000000
  .word 0x27a40080
  .word 0x2605001c
  .word 0x27a60060
  .word 0x0c0f5c74
  .word 0x00000000
  .word 0x1040001c
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420040
  .word 0xae020000
  .word 0x34420080
  .word 0xae020000
  .word 0x2604001c
  .word 0x27a50080
  .word 0x24060054
  .word 0x0c148494
  .word 0x00000000
  .word 0x10000010
  .word 0x00000000
  .word 0x27a40080
  .word 0x2605001c
  .word 0x27a60060
  .word 0x0c0f5be0
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e020000
  .word 0x34420040
  .word 0xae020000
  .word 0x2604001c
  .word 0x27a50080
  .word 0x24060054
  .word 0x0c148494
  .word 0x00000000
  .word 0x26040020
  .word 0x0c0f5cbc
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1bc4
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1bd4
  .word 0x00000000
  .word 0x24020002
  .word 0xa6020008
  .word 0x8e020000
  .word 0x34420010
  .word 0xae020000
  .word 0x100000bf
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050009
  .word 0x24060001
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x24020003
  .word 0xa6020008
  .word 0x16000006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050408
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e020010
  .word 0x2442ffff
  .word 0xae020010
  .word 0x00021880
  .word 0x8e020018
  .word 0x00431021
  .word 0xac400000
  .word 0x0260202d
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000c
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050016
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001c
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x10000078
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1b60
  .word 0x00000000
  .word 0x30420005
  .word 0x14400072
  .word 0x00000000
  .word 0x24020007
  .word 0xa6020008
  .word 0x0200202d
  .word 0x0c0f7678
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x24060001
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050008
  .word 0x0000302d
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c0f76a0
  .word 0x00000000
  .word 0x10400054
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070004
  .word 0x0c042938
  .word 0x00000000
  .word 0x24020003
  .word 0xa6020008
  .word 0x0260202d
  .word 0x0c0f1bb8
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050004
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x8e020000
  .word 0x30420001
  .word 0x10400008
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050006
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000c
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000f
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x24050016
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405001c
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x8e020010
  .word 0x14400006
  .word 0x00000000
  .word 0x0200202d
  .word 0x2405000d
  .word 0x0000302d
  .word 0x0c0f6214
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050005
  .word 0x0000302d
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x0c0f40b8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x0040202d
  .word 0x24050008
  .word 0x24060001
  .word 0x0c0f41b4
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f1bb0
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00e0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_loop_invariants off
// FUN_003db580
s32 fclCombineList003db580(FclList* param_1)
{
    if (param_1 == 0) return 0;
    FUN_003c6380((s32)param_1->list);
    fclCombineList003ddb00(param_1);
    fclCombineList003de160(&param_1->selection);
    return 0;
}

// FUN_003DB5E0
void fclCombineList003db5e0(FclOwner* param_1)
{
    FclTaskLink* node;

    FUN_003e0650((u32 *)param_1->container->work->result);
    for (node = param_1->links; node != 0; node = node->next) {
        FUN_003e0650((u32 *)node->payload->data.node_data->callback_target);
    }
}


// FUN_003db650
#ifndef PC_BUILD
asm void fclCombineList003db650(FclResultStream* stream, FclDb650Result* result,
                             FclOwner* owner)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00c0982d
  .word 0x8cc30024
  .word 0x8c660044
  .word 0x84b20014
  .word 0x84b10016
  .word 0x84b00026
  .word 0x8ca70010
  .word 0x24e3fffc
  .word 0x2c610012
  .word 0x102002d5
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484b860
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x146002c9
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407001a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407001b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407001c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407001d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407001e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407001f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000295
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x14600290
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070020
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1000000f
  .word 0x00000000
  .word 0x00141080
  .word 0x00541021
  .word 0x00021040
  .word 0x00541021
  .word 0x00021040
  .word 0x02422021
  .word 0x44806000
  .word 0x320600ff
  .word 0x00144040
  .word 0x0220282d
  .word 0x24070021
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26940001
  .word 0x96630010
  .word 0x0283182b
  .word 0x1460ffef
  .word 0x00000000
  .word 0x1000026f
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x1460026a
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070032
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070033
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070034
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070035
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070036
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000023e
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x14600239
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070047
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070048
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070049
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407004a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407004b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407004c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407004d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100001fd
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x146001f8
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407003f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070040
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070041
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070042
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070043
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070044
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070045
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070046
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100001b4
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x146001af
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407000e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407000f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070010
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070011
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070012
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05dde4
  .word 0x00000000
  .word 0x26440197
  .word 0x26250033
  .word 0x44806000
  .word 0x2403ff00
  .word 0x02033025
  .word 0x24070006
  .word 0x24080001
  .word 0x0040482d
  .word 0x240a0010
  .word 0x240b0074
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x26440003
  .word 0x44806000
  .word 0x320600ff
  .word 0x0220282d
  .word 0x24070013
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x24040001
  .word 0x0c05b11c
  .word 0x00000000
  .word 0x304600ff
  .word 0x27a40078
  .word 0x2785aaa8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2644026b
  .word 0x26250035
  .word 0x44806000
  .word 0x320600ff
  .word 0x24070003
  .word 0x27a80078
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000015b
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x10600156
  .word 0x00000000
  .word 0x0c05d504
  .word 0x00000000
  .word 0x3042ffff
  .word 0x2445fffc
  .word 0x44850000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc78182fc
  .word 0x3c023f80
  .word 0x44820000
  .word 0x44806000
  .word 0x00000000
  .word 0x46006018
  .word 0x46020b9c
  .word 0x2643016c
  .word 0x00051080
  .word 0x00451021
  .word 0x00622021
  .word 0x26230088
  .word 0x00051040
  .word 0x00451021
  .word 0x00021040
  .word 0x00622821
  .word 0x0010143c
  .word 0x0002143f
  .word 0x304600ff
  .word 0x2407002e
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x10000132
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x1060012d
  .word 0x00000000
  .word 0x0c05d504
  .word 0x00000000
  .word 0x3043ffff
  .word 0x0010343c
  .word 0x0006343f
  .word 0x240200ff
  .word 0x00461023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808088
  .word 0x46010042
  .word 0x3c02437f
  .word 0x44820000
  .word 0x00000000
  .word 0x460008c3
  .word 0x2465fffc
  .word 0x44850000
  .word 0x00000000
  .word 0x468000a0
  .word 0xc78182fc
  .word 0x3c023f80
  .word 0x44820000
  .word 0x44806000
  .word 0x00000000
  .word 0x46006018
  .word 0x4602081c
  .word 0x46030380
  .word 0x3c0241c8
  .word 0x44820800
  .word 0x2643016c
  .word 0x00051080
  .word 0x00451021
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46006018
  .word 0x4603081d
  .word 0x46000024
  .word 0x44040000
  .word 0x3c0241f0
  .word 0x44820800
  .word 0x26230088
  .word 0x00051040
  .word 0x00451021
  .word 0x00021040
  .word 0x00621021
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46006018
  .word 0x4603081d
  .word 0x46000024
  .word 0x44050000
  .word 0x30c600ff
  .word 0x2407002e
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x46006346
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x100000eb
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x146000e6
  .word 0x00000000
  .word 0x8cd30004
  .word 0x0010843c
  .word 0x0010843f
  .word 0x3c024000
  .word 0x44826000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407000b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407000c
  .word 0x0260402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000d0
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x146000cb
  .word 0x00000000
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0010143c
  .word 0x0002143f
  .word 0x304600ff
  .word 0x24e8fff0
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407000d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000be
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x146000b9
  .word 0x00000000
  .word 0x8cb40034
  .word 0x00109c3c
  .word 0x00139c3f
  .word 0x44806000
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070015
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070016
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070017
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1280009c
  .word 0x00000000
  .word 0x96830002
  .word 0x10600099
  .word 0x00000000
  .word 0x00039c3c
  .word 0x00139c3f
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x8f84b730
  .word 0x3063ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00441021
  .word 0x90420002
  .word 0x2442ffff
  .word 0x00021040
  .word 0x304800ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070018
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2644008a
  .word 0x26250035
  .word 0x44806000
  .word 0x320300ff
  .word 0x2402ff00
  .word 0x00623025
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24070006
  .word 0x24080003
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070014
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92860004
  .word 0x27a40070
  .word 0x2785aaa8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26440157
  .word 0x26250034
  .word 0x44806000
  .word 0x320600ff
  .word 0x24070003
  .word 0x27a80070
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000005a
  .word 0x00000000
  .word 0x8cc40000
  .word 0x3c030001
  .word 0x00831824
  .word 0x14600055
  .word 0x00000000
  .word 0x8cb40034
  .word 0x00109c3c
  .word 0x00139c3f
  .word 0x2625001a
  .word 0x44806000
  .word 0x326600ff
  .word 0x0240202d
  .word 0x24070016
  .word 0x24080001
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2625001a
  .word 0x44806000
  .word 0x326600ff
  .word 0x0240202d
  .word 0x24070017
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x12800040
  .word 0x00000000
  .word 0x96830002
  .word 0x1060003d
  .word 0x00000000
  .word 0x00039c3c
  .word 0x00139c3f
  .word 0x0010843c
  .word 0x0010843f
  .word 0x2625001a
  .word 0x44806000
  .word 0x320600ff
  .word 0x8f84b730
  .word 0x3063ffff
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021040
  .word 0x00441021
  .word 0x90420002
  .word 0x2442ffff
  .word 0x00024040
  .word 0x0240202d
  .word 0x24070018
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2644008a
  .word 0x2625004f
  .word 0x44806000
  .word 0x320300ff
  .word 0x2402ff00
  .word 0x00623025
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24070006
  .word 0x24080003
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x2625001a
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x24070014
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x92860004
  .word 0x27a40068
  .word 0x2785aaa8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26440157
  .word 0x2625004e
  .word 0x44806000
  .word 0x320600ff
  .word 0x24070003
  .word 0x27a80068
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
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003dc210
void fclCombineList003dc210(s32 unused0, s32 unused1, s32 unused2, FclOwner* owner)
{
    FclList* work = owner->container->work;

    (void)unused0;
    (void)unused1;
    (void)unused2;
    FUN_003e0680_32((u32)(void *)work->result,
                    (code *)fclCombineList003db650,
                    (u32)(void *)owner);
    work->flags |= 0x10000;
    FUN_003c4e70((s32)owner);
    work->flags &= 0xfffeffff;
    work->flags |= 0x10000;
    FUN_003e0680_32((u32)(void *)work->result,
                    (code *)fclCombineList003db650,
                    (u32)(void *)owner);
    work->flags &= 0xfffeffff;
}

// FUN_003dc2d0
#ifndef PC_BUILD
asm void fclCombineList003dc2d0(s32 base_x, s32 base_y, s16 alpha, FclOwner* owner,
                             FclTaskLink* source_link, s32 selected_style,
                             s32 alternate_layout)
{
  .set noreorder
  .word 0x27bdff30
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
  .word 0x00c0902d
  .word 0x0100b02d
  .word 0x0120882d
  .word 0x0140b82d
  .word 0x8783aaac
  .word 0x8782aaae
  .word 0xa7a300cc
  .word 0xa7a200ce
  .word 0x8783aab0
  .word 0x8782aab2
  .word 0xa7a300c8
  .word 0xa7a200ca
  .word 0x8d020014
  .word 0x8c42001c
  .word 0x8c460008
  .word 0x10c0009b
  .word 0x00000000
  .word 0x84d00002
  .word 0x8f83b730
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021040
  .word 0x00431021
  .word 0x90420002
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x90c60004
  .word 0x27a400a0
  .word 0x2785aaa8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x16e0002b
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0015143c
  .word 0x0002143f
  .word 0x2442ffff
  .word 0x00021040
  .word 0x00514021
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070025
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0011a840
  .word 0x26840076
  .word 0x2665007e
  .word 0x44806000
  .word 0x324300ff
  .word 0x2402ff00
  .word 0x00623025
  .word 0x02bd1021
  .word 0x804700cc
  .word 0x00101100
  .word 0x00501821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x26840145
  .word 0x2665007f
  .word 0x44806000
  .word 0x324600ff
  .word 0x02bd1021
  .word 0x844700c8
  .word 0x27a800a0
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000008d
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0015143c
  .word 0x0002143f
  .word 0x2442ffff
  .word 0x00021040
  .word 0x24480001
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070025
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1220001f
  .word 0x00000000
  .word 0x0011a840
  .word 0x26840076
  .word 0x2665007e
  .word 0x44806000
  .word 0x324300ff
  .word 0x2402ff00
  .word 0x00623025
  .word 0x02bd1021
  .word 0x804700cc
  .word 0x00101100
  .word 0x00501821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x26840145
  .word 0x2665007f
  .word 0x44806000
  .word 0x324600ff
  .word 0x02bd1021
  .word 0x844700c8
  .word 0x27a800a0
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000061
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc78080e0
  .word 0x46010502
  .word 0x4600a024
  .word 0x44020000
  .word 0x00000000
  .word 0x304300ff
  .word 0x2402ff00
  .word 0x00623025
  .word 0x26840076
  .word 0x2665007e
  .word 0x44806000
  .word 0x83a700cc
  .word 0x00101100
  .word 0x00501821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
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
  .word 0x26840145
  .word 0x2665007f
  .word 0x44806000
  .word 0x87a700c8
  .word 0x27a800a0
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x24070026
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501823
  .word 0x00031080
  .word 0x00431023
  .word 0x02822021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070027
  .word 0x0220402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020008
  .word 0x1440fff1
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000e
  .word 0x00000000
  .word 0x001010c0
  .word 0x00501823
  .word 0x00031080
  .word 0x00431023
  .word 0x02822021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070028
  .word 0x0220402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26100001
  .word 0x2a020002
  .word 0x1440fff1
  .word 0x00000000
  .word 0x16e0000f
  .word 0x00000000
  .word 0x1620000d
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x8ec20000
  .word 0x2442ffff
  .word 0x00024040
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070024
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x8ec20000
  .word 0x2442ffff
  .word 0x00021040
  .word 0x24480001
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070024
  .word 0x0c1038f0
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
  .word 0x27bd00d0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003dc700
#ifndef PC_BUILD
asm void fclCombineList003dc700(s32 base_x, s32 base_y, s16 alpha, FclOwner* owner,
                             FclTaskLink* source_link, s32 selected_style,
                             s32 unused_alternate)
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
  .word 0x0080a02d
  .word 0x00a0b82d
  .word 0x00c0982d
  .word 0x0120b02d
  .word 0x8784aab4
  .word 0x8783aab6
  .word 0xa7a4011c
  .word 0xa7a3011e
  .word 0x8784aab8
  .word 0x8783aaba
  .word 0xa7a40118
  .word 0xa7a3011a
  .word 0x8ce30024
  .word 0x8c630044
  .word 0x7fa300c0
  .word 0x8d030014
  .word 0x8c63001c
  .word 0x247e0064
  .word 0x0000902d
  .word 0x00161840
  .word 0x007d2821
  .word 0x24a3011c
  .word 0x7fa300b0
  .word 0x326300ff
  .word 0x2404ff00
  .word 0x00641825
  .word 0xafa300e0
  .word 0x24a30118
  .word 0x7fa300a0
  .word 0x44930000
  .word 0x00000000
  .word 0x46800060
  .word 0xc78080e0
  .word 0x46010002
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0x306300ff
  .word 0x00641825
  .word 0xafa300d0
  .word 0x1000007b
  .word 0x00000000
  .word 0x00121080
  .word 0x03c21021
  .word 0x8c440008
  .word 0x10800043
  .word 0x00000000
  .word 0x84900002
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00431021
  .word 0x90420002
  .word 0x0002ac3c
  .word 0x0015ac3f
  .word 0x00121040
  .word 0x00521021
  .word 0x000210c0
  .word 0x02e28821
  .word 0x90860004
  .word 0x27a400f0
  .word 0x2785aaa8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0015143c
  .word 0x0002143f
  .word 0x2442ffff
  .word 0x00021040
  .word 0x00564021
  .word 0x0280202d
  .word 0x0220282d
  .word 0x24070025
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840076
  .word 0x2625007e
  .word 0x44806000
  .word 0x7ba200b0
  .word 0x80470000
  .word 0x00101100
  .word 0x00501821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x8fa600e0
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x26840145
  .word 0x2625007f
  .word 0x44806000
  .word 0x326600ff
  .word 0x7ba200a0
  .word 0x84470000
  .word 0x27a800f0
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x00121040
  .word 0x00564021
  .word 0x0280202d
  .word 0x0220282d
  .word 0x24070024
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x0012a840
  .word 0x8fc20004
  .word 0x00551021
  .word 0x84420008
  .word 0x000285bc
  .word 0x001085bf
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021840
  .word 0x8f82b730
  .word 0x00431021
  .word 0x90420002
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x02b21021
  .word 0x000210c0
  .word 0x02e28821
  .word 0x44806000
  .word 0x326600ff
  .word 0x2462ffff
  .word 0x00021040
  .word 0x24480001
  .word 0x0280202d
  .word 0x0220282d
  .word 0x24070025
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26840076
  .word 0x2625007e
  .word 0x44806000
  .word 0x7ba200b0
  .word 0x80470000
  .word 0x00101100
  .word 0x00501821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x8fa600d0
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x26a80001
  .word 0x0280202d
  .word 0x0220282d
  .word 0x24070024
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26520001
  .word 0x7ba300c0
  .word 0x8c63000c
  .word 0x0243182a
  .word 0x1460ff82
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003dca10
void fclCombineList003dca10(s32 base_x, s32 base_y, s16 alpha, FclOwner* owner,
                             FclTaskLink* source_link, s32 selected_style)
{
    FclTextResourceData* resource_data;
    s32 available_count;

    available_count = (s32)(FUN_00175410() & 0xffff);
    resource_data = (FclTextResourceData*)source_link->payload->data.text_node;

    if (*(s32*)((byte*)owner->container->work + 0xc) == 3) {
        s32 i;

        for (i = 0; i < 0xc; i++) {
            if (i < available_count) {
                if ((resource_data->selection_mask & (1 << i)) != 0) {
                    FUN_0040e3c0_i(base_x + i * 0x16, base_y, 0.0f, (byte)alpha,
                                   0x2a, selected_style);
                } else {
                    FUN_0040e3c0_i(base_x + i * 0x16, base_y, 0.0f, (byte)alpha,
                                   0x2b, selected_style);
                }
            } else {
                FUN_0040e3c0_i(base_x + i * 0x16, base_y, 0.0f, (byte)alpha,
                               0x2d, 0);
            }
        }
    } else {
        s32 i;

        for (i = 0; i < 0xc; i++) {
            if (i < available_count) {
                if ((resource_data->selection_mask & (1 << i)) != 0) {
                    FUN_0040e3c0_i(base_x + i * 0x16, base_y, 0.0f, (byte)alpha,
                                   0x2a, selected_style);
                } else {
                    FUN_0040e3c0_i(base_x + i * 0x16, base_y, 0.0f, (byte)alpha,
                                   0x2b, selected_style);
                }
            } else {
                FUN_0040e3c0_i(base_x + i * 0x16, base_y, 0.0f, (byte)alpha,
                               0x2d, 0);
            }
        }
    }
}

// FUN_003dcc90
#ifndef PC_BUILD
asm void fclCombineList003dcc90(s32 x, s32 y, s16 alpha, FclOwner* owner,
                             FclTaskLink* source_link, s32 selected)
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
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x0120882d
  .word 0x8786aabc
  .word 0x8783aabe
  .word 0xa7a600ec
  .word 0xa7a300ee
  .word 0x8786aac0
  .word 0x8783aac2
  .word 0xa7a600e8
  .word 0xa7a300ea
  .word 0x8d030014
  .word 0x8c70001c
  .word 0x26150010
  .word 0x86030012
  .word 0x10600036
  .word 0x00000000
  .word 0x0003843c
  .word 0x0010843f
  .word 0x8f83b730
  .word 0x001010c0
  .word 0x00501023
  .word 0x00021040
  .word 0x00431021
  .word 0x90420002
  .word 0x0002143c
  .word 0x0002143f
  .word 0x44806000
  .word 0x324600ff
  .word 0x2442ffff
  .word 0x00021040
  .word 0x00514021
  .word 0x24070039
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x00118840
  .word 0x2684019c
  .word 0x2665007e
  .word 0x44806000
  .word 0x324300ff
  .word 0x2402ff00
  .word 0x00623025
  .word 0x023d1021
  .word 0x804700ec
  .word 0x00101100
  .word 0x00501821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x92a60004
  .word 0x27a400c0
  .word 0x2785aaa8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26840260
  .word 0x2665007f
  .word 0x44806000
  .word 0x324600ff
  .word 0x023d1021
  .word 0x844700e8
  .word 0x27a800c0
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000006e
  .word 0x00000000
  .word 0x8e030068
  .word 0x1060006b
  .word 0x00000000
  .word 0x27a40080
  .word 0x94650000
  .word 0x0c05d9a0
  .word 0x00000000
  .word 0x27b60080
  .word 0x87b50082
  .word 0x8f83b730
  .word 0x001510c0
  .word 0x00551023
  .word 0x00021040
  .word 0x00431021
  .word 0x90420002
  .word 0x0002143c
  .word 0x0002143f
  .word 0x44806000
  .word 0x324600ff
  .word 0x2442ffff
  .word 0x00021040
  .word 0x00514021
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070039
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x8e040064
  .word 0x30830002
  .word 0x14600004
  .word 0x00000000
  .word 0x30830001
  .word 0x14600024
  .word 0x00000000
  .word 0x00118040
  .word 0x2684019c
  .word 0x2665007e
  .word 0x44806000
  .word 0x324300ff
  .word 0x2402ff00
  .word 0x00623025
  .word 0x021d1021
  .word 0x804700ec
  .word 0x00151100
  .word 0x00551821
  .word 0x8f82b7f4
  .word 0x00434821
  .word 0x24080001
  .word 0x240a0010
  .word 0x240b006e
  .word 0x0c0eccb4
  .word 0x00000000
  .word 0x92c60004
  .word 0x27a400c0
  .word 0x2785aaa8
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x26840260
  .word 0x2665007f
  .word 0x44806000
  .word 0x324600ff
  .word 0x021d1021
  .word 0x844700e8
  .word 0x27a800c0
  .word 0x24090001
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x26840122
  .word 0x001010c0
  .word 0x00501823
  .word 0x00031080
  .word 0x00431023
  .word 0x00822021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070027
  .word 0x0220402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030008
  .word 0x1460fff0
  .word 0x00000000
  .word 0x0000802d
  .word 0x1000000f
  .word 0x00000000
  .word 0x26840122
  .word 0x001010c0
  .word 0x00501823
  .word 0x00031080
  .word 0x00431023
  .word 0x00822021
  .word 0x44806000
  .word 0x324600ff
  .word 0x0260282d
  .word 0x24070028
  .word 0x0220402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26100001
  .word 0x2a030002
  .word 0x1460fff0
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
  .word 0x7bb50050
  .word 0x7bb40040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003dcfb0
#ifndef PC_BUILD
asm void fclCombineList003dcfb0(FclResultStream* callback_target, FclDrawResult* result,
                             FclDrawCallbackRecord* record, s32 selected)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x84a30014
  .word 0x8cc20000
  .word 0x00438821
  .word 0x84a30016
  .word 0x8cc20004
  .word 0x00438021
  .word 0x84c30008
  .word 0x84a20026
  .word 0x00621818
  .word 0x240200ff
  .word 0x0062001a
  .word 0x00001012
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x14e0000b
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808084
  .word 0x46000802
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x8cc20014
  .word 0x8c420024
  .word 0x8c420044
  .word 0x8c420004
  .word 0x28420002
  .word 0x1440001d
  .word 0x00000000
  .word 0x0003943c
  .word 0x0012943f
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24070053
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24070051
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24070052
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000064
  .word 0x00000000
  .word 0x8cc2000c
  .word 0x8c420000
  .word 0x30420001
  .word 0x10400045
  .word 0x00000000
  .word 0x84c2000a
  .word 0x30420002
  .word 0x1040001d
  .word 0x00000000
  .word 0x0003943c
  .word 0x0012943f
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24070031
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x2407003d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x2407003e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000003f
  .word 0x00000000
  .word 0x0003943c
  .word 0x0012943f
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24070031
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x2407003c
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x2407002f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x2407003b
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x0003943c
  .word 0x0012943f
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24070031
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x2407002f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x324600ff
  .word 0x0220202d
  .word 0x0200282d
  .word 0x24070030
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
/* opt_loop_invariants on retained: 003dd260 nd901->900; off immediately after. */
#pragma opt_loop_invariants on
// FUN_003dd260
#ifndef PC_BUILD
asm void fclCombineList003dd260(FclResultStream* callback_target, FclDrawResult* result,
                             FclDrawCallbackRecord* record)
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
  .word 0x00c0402d
  .word 0x0000802d
  .word 0x0000182d
  .word 0x84a90014
  .word 0x8cc70000
  .word 0x00e98821
  .word 0x84b40016
  .word 0x8cc70004
  .word 0x00f49021
  .word 0x84c90008
  .word 0x84a70026
  .word 0x01274818
  .word 0x240700ff
  .word 0x0127001a
  .word 0x00003812
  .word 0x0007543c
  .word 0x000a543f
  .word 0x84c7000a
  .word 0x30e60001
  .word 0x10c00002
  .word 0x00000000
  .word 0x24100001
  .word 0x30e90002
  .word 0x11200002
  .word 0x00000000
  .word 0x24030001
  .word 0x000a9c3c
  .word 0x00139c3f
  .word 0x12600136
  .word 0x00000000
  .word 0x8ca70010
  .word 0x24060008
  .word 0x10e600e1
  .word 0x00000000
  .word 0x24060007
  .word 0x10e600b2
  .word 0x00000000
  .word 0x24060003
  .word 0x10e60081
  .word 0x00000000
  .word 0x24060002
  .word 0x10e6005e
  .word 0x00000000
  .word 0x24060001
  .word 0x10e6004a
  .word 0x00000000
  .word 0x10e00013
  .word 0x00000000
  .word 0x2403000b
  .word 0x10e30003
  .word 0x00000000
  .word 0x1000011f
  .word 0x00000000
  .word 0x8d03000c
  .word 0x8c660000
  .word 0x3c030001
  .word 0x00c31824
  .word 0x14600119
  .word 0x00000000
  .word 0x00103c3c
  .word 0x00073c3f
  .word 0x0100302d
  .word 0x0c0f73ec
  .word 0x00000000
  .word 0x10000112
  .word 0x00000000
  .word 0x8d02000c
  .word 0x8c440000
  .word 0x3c020001
  .word 0x00821024
  .word 0x10400023
  .word 0x00000000
  .word 0x0003143c
  .word 0x0002143f
  .word 0x1440000c
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0010443c
  .word 0x0008443f
  .word 0x0220202d
  .word 0x0240282d
  .word 0x24070022
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0010443c
  .word 0x0008443f
  .word 0x0220202d
  .word 0x0240282d
  .word 0x24070023
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0240282d
  .word 0x24070029
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000ea
  .word 0x00000000
  .word 0x00104c3c
  .word 0x00094c3f
  .word 0x0003543c
  .word 0x000a543f
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0260302d
  .word 0x8d070014
  .word 0x8d080018
  .word 0x0c0f70b4
  .word 0x00000000
  .word 0x100000dd
  .word 0x00000000
  .word 0x8d03000c
  .word 0x8c640000
  .word 0x3c030001
  .word 0x00831824
  .word 0x106000d7
  .word 0x00000000
  .word 0x00104c3c
  .word 0x00094c3f
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0260302d
  .word 0x8d070014
  .word 0x8d080018
  .word 0x0c0f7284
  .word 0x00000000
  .word 0x100000cc
  .word 0x00000000
  .word 0x8d03000c
  .word 0x8c640000
  .word 0x3c030001
  .word 0x00831824
  .word 0x106000c6
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0240282d
  .word 0x24070031
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0240282d
  .word 0x2407003d
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0240282d
  .word 0x2407003e
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000ac
  .word 0x00000000
  .word 0x152000aa
  .word 0x00000000
  .word 0x8d02000c
  .word 0x8c430000
  .word 0x3c020001
  .word 0x00621024
  .word 0x1040001c
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0240282d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0010443c
  .word 0x0008443f
  .word 0x0220202d
  .word 0x0240282d
  .word 0x24070038
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x326600ff
  .word 0x0220202d
  .word 0x0240282d
  .word 0x2407003a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000089
  .word 0x00000000
  .word 0x00104c3c
  .word 0x00094c3f
  .word 0x0220202d
  .word 0x0240282d
  .word 0x0260302d
  .word 0x8d070014
  .word 0x8d080018
  .word 0x0c0f7324
  .word 0x00000000
  .word 0x1000007e
  .word 0x00000000
  .word 0x8d02000c
  .word 0x8c430000
  .word 0x3c020001
  .word 0x00621024
  .word 0x1040001c
  .word 0x00000000
  .word 0x2624febb
  .word 0x44806000
  .word 0x326600ff
  .word 0x0240282d
  .word 0x24070037
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2624febb
  .word 0x44806000
  .word 0x326600ff
  .word 0x0010443c
  .word 0x0008443f
  .word 0x0240282d
  .word 0x24070038
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2624febb
  .word 0x44806000
  .word 0x326600ff
  .word 0x0240282d
  .word 0x2407003a
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000005d
  .word 0x00000000
  .word 0x2624febb
  .word 0x00104c3c
  .word 0x00094c3f
  .word 0x0240282d
  .word 0x0260302d
  .word 0x8d070014
  .word 0x8d080018
  .word 0x0c0f7324
  .word 0x00000000
  .word 0x10000052
  .word 0x00000000
  .word 0x12000050
  .word 0x00000000
  .word 0x8d03000c
  .word 0x8c640000
  .word 0x3c030001
  .word 0x00831824
  .word 0x10600041
  .word 0x00000000
  .word 0x8d030014
  .word 0x8c630024
  .word 0x8c720044
  .word 0x8d030018
  .word 0x8c630014
  .word 0x8c63001c
  .word 0x24760064
  .word 0x0000802d
  .word 0x10000031
  .word 0x00000000
  .word 0x00101080
  .word 0x02c21021
  .word 0x8c420008
  .word 0x10400017
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x000210c0
  .word 0x0282a821
  .word 0x26240128
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0282d
  .word 0x24070022
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26240128
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0282d
  .word 0x24070029
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x00101040
  .word 0x00501021
  .word 0x000210c0
  .word 0x0282a821
  .word 0x26240128
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0282d
  .word 0x24070023
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26240128
  .word 0x44806000
  .word 0x326600ff
  .word 0x02a0282d
  .word 0x24070029
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26100001
  .word 0x8e43000c
  .word 0x0203182a
  .word 0x1460ffcd
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x26240128
  .word 0x0280282d
  .word 0x0260302d
  .word 0x8d070014
  .word 0x8d080018
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0c0f71c0
  .word 0x00000000
  .word 0xdfbf0070
  .word 0x7bb60060
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
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset

// FUN_003dd800
#ifndef PC_BUILD
asm void fclCombineList003dd800(s32 x, s32 y, s32 alpha, FclOwner* owner,
                             FclTaskLink* candidate)
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
  .word 0x0080b02d
  .word 0x00a0b82d
  .word 0x00c0f02d
  .word 0x00e0a82d
  .word 0x0100a02d
  .word 0x27a400a0
  .word 0x0000282d
  .word 0x2406001c
  .word 0x0c148502
  .word 0x00000000
  .word 0x8ea20024
  .word 0x8c510044
  .word 0x8e820014
  .word 0x8c50001c
  .word 0x8e130008
  .word 0x8ea2000c
  .word 0x16820004
  .word 0x00000000
  .word 0x87a200aa
  .word 0x34420001
  .word 0xa7a200aa
  .word 0x1260003a
  .word 0x00000000
  .word 0x8e220000
  .word 0x30420001
  .word 0x10400004
  .word 0x00000000
  .word 0x96020012
  .word 0x10400033
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050438
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x16600004
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000025
  .word 0x00000000
  .word 0x0000902d
  .word 0x1000001d
  .word 0x00000000
  .word 0x16200006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050411
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e22000c
  .word 0x0242082a
  .word 0x14200004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e230018
  .word 0x00121080
  .word 0x00621021
  .word 0x8c420000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x14530003
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x26520001
  .word 0x8e220010
  .word 0x0242102a
  .word 0x1440ffe1
  .word 0x00000000
  .word 0x0000982d
  .word 0x12600004
  .word 0x00000000
  .word 0x87a200aa
  .word 0x34420002
  .word 0xa7a200aa
  .word 0xafb600a0
  .word 0xafb700a4
  .word 0xa7be00a8
  .word 0xafb100ac
  .word 0xafb000b0
  .word 0xafb500b4
  .word 0xafb400b8
  .word 0x8e040060
  .word 0x3c05003e
  .word 0x24a5d260
  .word 0x27a600a0
  .word 0x0c0f81a0
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
  .word 0x27bd00c0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003dd9e0
s32 fclCombineList003dd9e0(FclList* list)
{
    FclNodeData* data;

    data = list->list->root.secondary_head->payload->data.node_data;
    list->flags |= 0x20;
    FUN_003c9d00(list->ui, 4);
    FUN_003c9d00(list->ui, 8);
    FUN_003c9e00(list->ui, 0);
    FUN_003c9cd0(list->ui, -1);
    FUN_003c9b00(list->ui, data->selection_detail, 0);
    return 0;
}

// FUN_003dda80
s32 fclCombineList003dda80(FclList* param_1)
{
    s32 enabled = 0;

    if ((gPads[HPAD_PORT_1].btn[0].justPressed & HPAD_BTN_CIRCLE) != 0 ||
        (gPads[HPAD_PORT_1].btn[1].released & HPAD_BTN_CIRCLE) != 0) {
        enabled = 1;
        param_1->flags &= ~0x20;
        FUN_003c9d00(param_1->ui, 0x10);
    }
    return enabled;
}

// FUN_003ddb00
s32 fclCombineList003ddb00(FclList* list)
{
    FclNodeData* data;
    FclSelectionSnapshot local;
    byte* cleared;
    s32 clear_count;

    cleared = local.values;
    clear_count = sizeof(local);
    if (cleared != 0) {
        do {
            *cleared = 0;
            cleared++;
            clear_count--;
        } while (clear_count != 0);
    }
    if ((list->flags & 0x20) == 0) return 0;

    data = list->list->root.secondary_head->payload->data.node_data;
    FUN_003c9b00(list->ui, data->selection_detail, 0);
    return 0;
}

// FUN_003ddb90
void fclCombineList003ddb90(FclList* list, FclSelection* selection)
{
    s32 result_choice_index;
    s32 i;
    s16 social_link_index;
    s32 bonus_experience;

    s32 persona_offset;
    memset(selection, 0, 0xa8);
    selection->flags |= 1;
    selection->state = 0;
    selection->choice_list = list->values;
    result_choice_index = list->capacity;
    selection->result_choice_index = result_choice_index;
    selection->current_choice_index = result_choice_index;
    memcpy(&selection->fusion, &list->fusion, 0x54);
    memcpy(&selection->result_detail, &list->fusion.detail, 0x34);
    for (i = 0; i < 5; i++) {
        *(((byte *)((s32)selection + i)) + 0x88) -=
            *(((byte *)((s32)list + i)) + 0x54);
    }
    selection->ui = list->ui;
    FUN_003c9d00(selection->ui, 4);
    FUN_003c9d00(selection->ui, 8);
    FUN_003c9e00(selection->ui, 2);
    FUN_003c9e30(selection->ui, (s8)(selection->result_choice_index + 1),
                  (s8)selection->current_choice_index);
    FUN_003c9b00(selection->ui, &selection->result_detail, &selection->fusion);
    persona_offset = selection->result_detail.persona_id;
    persona_offset = persona_offset * 0xe;
    persona_offset += (s32)(void *)gp0xffffb730;
    social_link_index = FUN_0016deb0(
        ((FclPersonaTableEntry *)(void *)persona_offset)->data[2]);
    if (FUN_0016dba0(social_link_index) != 0) {
        bonus_experience = FUN_003d58c0(social_link_index, selection->result_detail.level);
        selection->bonus_experience = bonus_experience;
        selection->fusion.bonus_experience = bonus_experience;
    }
}

// FUN_003ddd20
#ifndef PC_BUILD
asm s32 fclCombineList003ddd20(FclSelection* selection)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x0000802d
  .word 0x8c820004
  .word 0x2c410009
  .word 0x1020009e
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b8b0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24020001
  .word 0xae220004
  .word 0x10000093
  .word 0x00000000
  .word 0x24020004
  .word 0xae220004
  .word 0x1000008f
  .word 0x00000000
  .word 0x24020003
  .word 0xae220004
  .word 0x8e230000
  .word 0x2402fffe
  .word 0x00621024
  .word 0xae220000
  .word 0x8e2400a0
  .word 0x24050010
  .word 0x0c0f2740
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620002
  .word 0x10400007
  .word 0x00000000
  .word 0x2402fffd
  .word 0x00621024
  .word 0xae220000
  .word 0x24020001
  .word 0x100000dc
  .word 0x00000000
  .word 0x24020002
  .word 0x100000d9
  .word 0x00000000
  .word 0x24020007
  .word 0xae220004
  .word 0x10000074
  .word 0x00000000
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400070
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x24020007
  .word 0xae220004
  .word 0x1000006a
  .word 0x00000000
  .word 0x8e220018
  .word 0x30420002
  .word 0x10400009
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420004
  .word 0xae220000
  .word 0x24040003
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0x26240018
  .word 0x8e250010
  .word 0x8e260014
  .word 0x0c0f608c
  .word 0x00000000
  .word 0x10400009
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420008
  .word 0xae220000
  .word 0x24040004
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x8e220018
  .word 0x30420008
  .word 0x10400009
  .word 0x00000000
  .word 0x8e220000
  .word 0x34420010
  .word 0xae220000
  .word 0x24040002
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x1000000a
  .word 0x00000000
  .word 0x9624001e
  .word 0x0c0f5770
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c0f1d0c
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c0f1d38
  .word 0x00000000
  .word 0x24020008
  .word 0xae220004
  .word 0x0c0f1e14
  .word 0x00000000
  .word 0x14400034
  .word 0x00000000
  .word 0x0c0f1dc0
  .word 0x00000000
  .word 0x8e220018
  .word 0x30420010
  .word 0x10400009
  .word 0x00000000
  .word 0x8e230000
  .word 0x2402ffef
  .word 0x00621024
  .word 0xae220000
  .word 0x24020004
  .word 0xae220004
  .word 0x10000026
  .word 0x00000000
  .word 0x8e230000
  .word 0x30620004
  .word 0x10400008
  .word 0x00000000
  .word 0x2402fffb
  .word 0x00621024
  .word 0xae220000
  .word 0x24020004
  .word 0xae220004
  .word 0x1000001b
  .word 0x00000000
  .word 0x30620008
  .word 0x10400008
  .word 0x00000000
  .word 0x2402fff7
  .word 0x00621024
  .word 0xae220000
  .word 0x24020004
  .word 0xae220004
  .word 0x10000011
  .word 0x00000000
  .word 0x0c0f1d84
  .word 0x00000000
  .word 0x14400008
  .word 0x00000000
  .word 0x24020002
  .word 0xae220004
  .word 0x8e220000
  .word 0x34420002
  .word 0xae220000
  .word 0x10000006
  .word 0x00000000
  .word 0x24020004
  .word 0xae220004
  .word 0x10000002
  .word 0x00000000
  .word 0x24100001
  .word 0x16000004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000005d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9444094e
  .word 0x30820004
  .word 0x14400006
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430958
  .word 0x30620004
  .word 0x10400010
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e22000c
  .word 0x2442ffff
  .word 0xae22000c
  .word 0x04410047
  .word 0x00000000
  .word 0x8e220014
  .word 0xae22000c
  .word 0x10000043
  .word 0x00000000
  .word 0x30820008
  .word 0x14400004
  .word 0x00000000
  .word 0x30620008
  .word 0x10400011
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070005
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e22000c
  .word 0x24430001
  .word 0xae23000c
  .word 0x8e220014
  .word 0x0043082a
  .word 0x10200030
  .word 0x00000000
  .word 0xae20000c
  .word 0x1000002d
  .word 0x00000000
  .word 0x30820040
  .word 0x14400004
  .word 0x00000000
  .word 0x30620040
  .word 0x10400012
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070001
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e230014
  .word 0x8e22000c
  .word 0x10430004
  .word 0x00000000
  .word 0xae23000c
  .word 0x1000001a
  .word 0x00000000
  .word 0x24020005
  .word 0xae220004
  .word 0x10000016
  .word 0x00000000
  .word 0x30820020
  .word 0x14400004
  .word 0x00000000
  .word 0x30620020
  .word 0x10400010
  .word 0x00000000
  .word 0x0000202d
  .word 0x0000282d
  .word 0x0000302d
  .word 0x24070002
  .word 0x0c042938
  .word 0x00000000
  .word 0x8e230014
  .word 0x8e22000c
  .word 0x10430004
  .word 0x00000000
  .word 0xae23000c
  .word 0x10000003
  .word 0x00000000
  .word 0x24020002
  .word 0xae220004
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0030
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003de160
s32 fclCombineList003de160(FclSelection* selection)
{
    FclListUi* ui;
    FclFusionDetail* detail;
    FclFusionOutput* fusion;
    u32 flags;
    FclSelectionSnapshot local;
    byte* cleared;
    s32 clear_count;

    ui = selection->ui;
    cleared = local.values;
    clear_count = sizeof(local);
    if (cleared != 0) {
        do {
            *cleared = 0;
            cleared++;
            clear_count--;
        } while (clear_count != 0);
    }
    if ((selection->flags & 1) == 0) return 0;

    if (selection->current_choice_index == selection->result_choice_index) {
        detail = &selection->result_detail;
        fusion = &selection->fusion;
        flags = selection->fusion.flags;
    } else {
        detail = selection->choice_list[selection->current_choice_index];
        fusion = 0;
        flags = 0;
    }
    FUN_003c9e70(ui, (s8)selection->current_choice_index);
    FUN_003c9b00(ui, detail, fusion);
    if ((flags & 2) != 0 || (flags & 8) != 0)
        FUN_003c9cd0(ui, 0x202020ff);
    else
        FUN_003c9cd0(ui, -1);
    return 0;
}

// FUN_003de290
FclList* fclCombineList003de290(void* input, s32 state)
{
    FclOwner* task;
    FclList* work;
    s32 capacity;

    switch (state) {
    case 2:
        capacity = 4;
        break;
    case 3:
        capacity = 5;
        break;
    case 4:
        capacity = 6;
        break;
    default:
        K_Assert((const char *)DAT_006A6020_abs, 0x966);
        break;
    }
    task = FUN_003c58f0(0, capacity * 4 + 0x1b0, 0xc, 0x18);
    work = task->container->work;
    work->list = task;
    work->mode = state;
    work->capacity = capacity;
    work->flags = 0;
    work->values = work->embedded_values;
    memcpy(work->input_copy, input, 0x90);
    work->result = (FclResultStream*)FUN_003dfeb0((s32)work);
    FUN_003d9ea0(work);
    FUN_003d8850((s32)work, 0xb, 0);
    FUN_003d8850((s32)work, 7, 0);
    FUN_003d8850((s32)work, 8, 0);
    FUN_003d8850((s32)work, 9, 0);
    FUN_003d8850((s32)work, 0xa, 0);
    FUN_003d8850((s32)work, 0xc, 0);
    FUN_003d8850((s32)work, 0xf, 0);
    FUN_003d8850((s32)work, 0x16, 0);
    FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 6, 0);
    return work;
}

// FUN_003de470
s32 fclCombineList003de470(FclList* work)
{
    s32 selection_state;
    s32 i;
    byte validated_input[0x54];
    s16 selected_values[0xc];
    FclResourceNode* selection;
    FclResourceData* resource_data;
    FclOwner* task = work->list;

    if (FUN_003c6270((s32)task) == 3) {
        if ((work->flags & 0x10) != 0) return 1;
        FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 6, 1);
        return 2;
    }
    if (FUN_003c6ce0((s32)task) != 0 || FUN_003c6d10((s32)task) != 0)
        FUN_0010a4e0(0, 0, 0, 0);
    if (FUN_003c6ca0((s32)task) != 0 || FUN_003c6cc0((s32)task) != 0)
        FUN_0010a4e0(0, 0, 0, 5);

    switch (work->state) {
    case 2:
        break;

    case 3:
        FUN_003d8850((s32)work, 0xb, 1);
        selection = (FclResourceNode*)FUN_003c6c50((s32)task);
        if (selection != 0) {
            resource_data = selection->meta->data;
            if ((resource_data->mode_flags & 1) != 0) {
                FUN_0010a4e0(0, 0, 0, 8);
                break;
            }
            FUN_0010a4e0(0, 0, 0, 1);
            work->state = 4;
            FUN_003c6f10((s32)task);
            memcpy(&work->fusion, resource_data->input, sizeof(work->fusion));
            fclCombineList003deb20(work);
            FUN_003d6ae0((s32)&work->fusion, *(volatile s32 *)&work->mode,
                         (s32)work->values);
            FUN_003d8850((s32)work, 7, 1);
            FUN_003d8850((s32)work, 8, 1);
            FUN_003d8850((s32)work, 9, 1);
            FUN_003d8850((s32)work, 0xa, 1);
            FUN_003d8850((s32)work, 0xc, 1);
            FUN_003d8850((s32)work, 0xf, 1);
            FUN_003d8850((s32)work, 0x16, 1);
        } else if (FUN_003c6c80((s32)task) != 0) {
            FUN_0010a4e0(0, 0, 0, 2);
            FUN_003c6f50((s32)task);
            work->state = 2;
            FUN_003d8850((s32)work, 7, 1);
            FUN_003d8850((s32)work, 8, 1);
            FUN_003d8850((s32)work, 9, 1);
            FUN_003d8850((s32)work, 0xa, 1);
            FUN_003d8850((s32)work, 0xc, 1);
            FUN_003d8850((s32)work, 0xf, 1);
            FUN_003d8850((s32)work, 0x16, 1);
        }
        break;

    case 4:
        if (FUN_003dff30((int *)work->result) != 0) {
            FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 6, 1);
            FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 9, 0);
            work->state = 5;
            fclCombineList003ddb90(work, &work->selection);
        } else {
            break;
        }
    case 5:
        selection_state = fclCombineList003ddd20(&work->selection);
        switch (selection_state) {
        case 1:
            FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 9, 1);
            if (FUN_003d6c90(2) != 0) {
                memset(selected_values, 0, sizeof(selected_values));
                for (i = 0; i < work->capacity; i++) {
                    K_ASSERT(work->values[i] != 0, 0x9c4);
                    selected_values[i] = work->values[i]->persona_id;
                }
                if (FUN_003d6f80((int)(void *)validated_input, (int)(void *)&work->fusion, selected_values) != 0) {
                    work->flags |= 0x40;
                    memcpy(&work->fusion, validated_input, sizeof(work->fusion));
                }
            }
            FUN_003d72f0((u16 *)(void *)&work->fusion.detail);
            FUN_003c6f10((s32)task);
            FUN_003c6f50((s32)task);
            work->state = 2;
            work->flags |= 0x10;
            break;

        case 2:
            FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 6, 0);
            FUN_003d06d0(FUN_003c5460(FUN_003d02e0()), 9, 1);
            work->state = 3;
            K_ASSERT(work != 0, 0x408);
            work->used--;
            work->values[work->used] = 0;
            FUN_003c6ee0((s32)task);
            FUN_003d8850((s32)work, 0xb, 0);
            FUN_003d8850((s32)work, 7, 0);
            FUN_003d8850((s32)work, 8, 0);
            FUN_003d8850((s32)work, 9, 0);
            FUN_003d8850((s32)work, 0xa, 0);
            FUN_003d8850((s32)work, 0xc, 0);
            FUN_003d8850((s32)work, 0xf, 0);
            FUN_003d8850((s32)work, 0x16, 0);
        }
        break;
    }
    return 0;
}

// FUN_003deb20
void fclCombineList003deb20(FclList* work)
{
    FclResourceData* data = work->list->root.root_node->meta->data;
    s32 i;
    s32 used;

    for (used = 0, i = 0; i < work->capacity; used++, i++) {
        work->values[i] = *(FclFusionDetail**)((s32)data + i * 4 + 0x6c);
    }
    work->used = used;
}

// FUN_003deb80
void fclCombineList003deb80(s32 unused0, s32 unused1, s32 unused2, FclOwner* owner)
{
    FclList* work = owner->container->work;

    (void)unused0;
    (void)unused1;
    (void)unused2;
    FUN_003e0680_32((u32)(void *)work->result,
                    (code *)fclCombineList003db650,
                    (u32)(void *)owner);
    work->flags |= 0x10000;
    FUN_003c4e70((s32)owner);
    work->flags &= 0xfffeffff;
}

// FUN_003dec00
void fclCombineList003dec00(s32 arg0, s32 arg1, s16 arg2, FclOwner* owner,
                             FclResourceNode* node)
{
    FclDrawCallbackData data;
    FclList* work;
    FclResourceData* resource_data;
    code *callback;

    memset(&data, 0, sizeof(data));
    work = owner->container->work;
    resource_data = node->meta->data;
    if (node == owner->root.root_node) data.flags |= 1;
    data.callback_arg0 = arg0;
    data.callback_arg1 = arg1;
    data.callback_arg2 = arg2;
    data.work = work;
    data.resource_data = resource_data;
    data.owner = owner;
    data.node = node;
    callback = (code *)fclCombineList003dd260;
    FUN_003e0680_p((u32)(void *)resource_data->callback_target,
                   callback,
                   &data);
}

// FUN_003decd0
FclCallbackProxy* fclCombineList003decd0(FclList* work)
{
    FclCreatedTask* created;
    FclCallbackProxy* proxy;

    K_ASSERT(work != 0, 0xa3e);
    created = FUN_003c44d0(0x14, 0, 0, fclCombineList003ded40);
    proxy = created->proxy;
    proxy->created_task = created;
    proxy->work = work;
    return proxy;
}

// FUN_003ded40
void fclCombineList003ded40(FclCallbackProxy* proxy)
{
    if (proxy != 0) FUN_003c45f0((s32)proxy->created_task);
}

// FUN_003ded70
void fclCombineList003ded70(FclCallbackProxy* proxy)
{
    FUN_003c4e70((s32)proxy->created_task);
}

// FUN_003deda0
void fclCombineList003deda0(FclNodeListContext* context)
{
    FclNodeList* list;
    FclNodeLink* primary_node;
    FclNodeLink* secondary_node;
    FclAnimationNode* payload;
    FclAnimationNode* selected;

    if (context == 0) return;
    list = context->list;
    selected = (FclAnimationNode*)FUN_003dfac0((int*)context);
    if (selected == 0) return;

    primary_node = list->primary_head;
    while (primary_node != 0) {
        if (primary_node == selected->link) break;
        payload = primary_node->payload;
        FUN_003dfae0((int*)context, (int*)payload);
        primary_node = primary_node->next;
    }

    secondary_node = list->secondary_head;
    while (secondary_node != 0) {
        if (secondary_node == selected->link) break;
        payload = secondary_node->payload;
        FUN_003dfae0((int*)context, (int*)payload);
        secondary_node = secondary_node->secondary_next;
    }

    if (selected->link != 0) {
        payload = selected->link->payload;
        FUN_003dfae0((int*)context, (int*)payload);
    }
}

// FUN_003dee80
FclAnimationNode* fclCombineList003dee80(FclNodeListContext* context, s32 value, s32 preset,
                                          s32 source_value, s16 direction, s16 duration)
{
    FclAnimationNode* payload;

    payload = fclCombineList003df090(context, 0);
    fclCombineList003df220(payload, value, preset, source_value, direction, duration);
    return payload;
}

// FUN_003def10
s32 fclCombineList003def10(u32 value)
{
    if (value <= 1) goto zero;
    return (value + 1) * 9;
zero:
    return 0;
}

// FUN_003def40
s32 fclCombineList003def40(s32 width, s32 count, s32 index)
{
    s32 step;

    if (count > 1) {
        step = (index * width) / (count - 1);
    } else {
        step = 0;
    }
    return (width >> 1) - step + 0x5a;
}

// FUN_003def80
s32 fclCombineList003def80(FclNodeListContext* context)
{
    FclNodeLink* node;
    FclAnimationNode* selected;
    node = context->list->primary_head;
    selected = (FclAnimationNode*)FUN_003dfac0((int*)context);
    if (selected == 0)
        return 0;
    while (node != 0) {
        FclAnimationNode* payload = node->payload;
        if ((payload->flags & 4) != 0) {
            s16 direction = *(volatile s16*)((u8*)selected + 0x20);

            fclCombineList003df220(payload, payload->value, 1, payload->source_value,
                                    direction, 0);
        }
        node = node->next;
    }
    return 1;
}

// FUN_003df010
s32 fclCombineList003df010(FclNodeListContext* context)
{
    FclNodeLink* node = context->list->primary_head;

    if (FUN_003dfac0((int *)context) == 0) return 1;
    while (node != 0) {
        if ((node->payload->flags & 4) == 0) return 0;
        node = node->next;
    }
    return 1;
}

// FUN_003df090
FclAnimationNode* fclCombineList003df090(FclNodeListContext* context,
                                          FclNodeCreateData* create_data)
{
    FclNodeLink* link;
    FclAnimationNode* payload;

    link = FUN_003c4910(context->list, context->list->allocation_count + 1,
                         &create_data->inline_storage);
    payload = link->payload;
    payload->link = link;
    if (create_data != 0) payload->value_storage = &payload->inline_storage;
    payload->field_0c = 0;
    payload->flags |= 4;
    return payload;
}

// FUN_003df100
FclAnimationNode* fclCombineList003df100(FclAnimationNode* node,
                                          FclAnimationResultRecord* result)
{
    node->source_value = result->value;
    if (result->field08 == -0x8000) node->target_x = node->current_x;
    else node->current_x = node->target_x = result->field08;
    if (result->field0a == -0x8000) node->target_y = node->current_y;
    else node->current_y = node->target_y = result->field0a;
    if (result->field0c != -0x8000) node->interpolated_x = result->field0c;
    if (result->field0e != -0x8000) node->interpolated_y = result->field0e;
    if (result->field10 == -0x8000) node->target_z = node->current_z;
    else node->current_z = node->target_z = result->field10;
    if (result->field12 != -0x8000) node->requested_z = result->field12;
    if (result->field14 == -0x8000) node->target_w = node->current_w;
    else node->current_w = node->target_w = result->field14;
    if (result->field16 != -0x8000) node->endpoint_w = result->field16;
    node->duration = result->field18;
    node->divisor = result->field1a;
    return node;
}

// FUN_003df220
#ifndef PC_BUILD
asm void fclCombineList003df220(FclAnimationNode* node, s32 value, s32 preset,
                             s32 source_value, s16 direction, s16 duration)
{
  .set noreorder
  .word 0x27bdff80
  .word 0xffbf0070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x00a0982d
  .word 0x00c0902d
  .word 0x00e0882d
  .word 0x0100802d
  .word 0x0120a82d
  .word 0x16800006
  .word 0x00000000
  .word 0x3c04006a
  .word 0x24846020
  .word 0x24050b1b
  .word 0x0c0674fc
  .word 0x00000000
  .word 0x8e830008
  .word 0x30630004
  .word 0x10600079
  .word 0x00000000
  .word 0x24030001
  .word 0x1243003a
  .word 0x00000000
  .word 0x12400003
  .word 0x00000000
  .word 0x10000069
  .word 0x00000000
  .word 0x24020140
  .word 0xa6820014
  .word 0xa6820018
  .word 0x240201f8
  .word 0xa6820016
  .word 0xa682001a
  .word 0xa6800026
  .word 0xa6800028
  .word 0x240200ff
  .word 0xa682002a
  .word 0xa6900024
  .word 0xa6900022
  .word 0xa6900020
  .word 0x2402000a
  .word 0xa6820030
  .word 0x86820024
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808224
  .word 0x46010542
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c0243e8
  .word 0x44820800
  .word 0x00000000
  .word 0x46000d02
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c0343e8
  .word 0x44830800
  .word 0x00000000
  .word 0x46000842
  .word 0x3c0343a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46140000
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa683001c
  .word 0x3c0343fc
  .word 0x44830000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa683001e
  .word 0x10000034
  .word 0x00000000
  .word 0x86820014
  .word 0xa6820018
  .word 0x86820016
  .word 0xa682001a
  .word 0x86820026
  .word 0xa6820028
  .word 0xa680002a
  .word 0x86820020
  .word 0xa6820022
  .word 0xa6900024
  .word 0x2402000a
  .word 0xa6820030
  .word 0x86820024
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808224
  .word 0x46010542
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c0243e8
  .word 0x44820800
  .word 0x00000000
  .word 0x46000d02
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c0343e8
  .word 0x44830800
  .word 0x00000000
  .word 0x46000842
  .word 0x3c0343a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46140000
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa683001c
  .word 0x3c0343fc
  .word 0x44830000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44030000
  .word 0x00000000
  .word 0xa683001e
  .word 0x8e830008
  .word 0x34630002
  .word 0xae830008
  .word 0xae910010
  .word 0xa695002c
  .word 0xae930000
  .word 0x24030001
  .word 0xae83000c
  .word 0x8e840008
  .word 0x2403fffb
  .word 0x00831824
  .word 0xae830008
  .word 0xdfbf0070
  .word 0x7bb50060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0080
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// HARVESTED 3D-42FF





















// FUN_003DF4A0
#ifndef PC_BUILD
asm u64 FUN_003df4a0(u64 param_1,int param_2)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x8cb10014
  .word 0x8e22000c
  .word 0x2c410007
  .word 0x10200175
  .word 0x00000000
  .word 0x3c03007c
  .word 0x2463b8e0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8622002c
  .word 0x2442ffff
  .word 0xa622002c
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1c400167
  .word 0x00000000
  .word 0xa620002c
  .word 0x8e220008
  .word 0x30420002
  .word 0x10400005
  .word 0x00000000
  .word 0x24020003
  .word 0xae22000c
  .word 0x1000015e
  .word 0x00000000
  .word 0x24020002
  .word 0xae22000c
  .word 0x1000015a
  .word 0x00000000
  .word 0x24020004
  .word 0xae22000c
  .word 0xa620002e
  .word 0x9622002e
  .word 0x24420001
  .word 0xa622002e
  .word 0x86300018
  .word 0x9622002e
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc7808110
  .word 0x46010042
  .word 0x96220030
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x8623001c
  .word 0x0010143c
  .word 0x0002143f
  .word 0x00621023
  .word 0x44820800
  .word 0x00000000
  .word 0x468008e0
  .word 0x44900800
  .word 0x00000000
  .word 0x468008a0
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220014
  .word 0x8630001a
  .word 0x9622002e
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc7808110
  .word 0x46010042
  .word 0x96220030
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x8623001e
  .word 0x0010143c
  .word 0x0002143f
  .word 0x00621023
  .word 0x44820800
  .word 0x00000000
  .word 0x468008e0
  .word 0x44900800
  .word 0x00000000
  .word 0x468008a0
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220016
  .word 0x86300022
  .word 0x9622002e
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc7808110
  .word 0x46010042
  .word 0x96220030
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x86230024
  .word 0x0010143c
  .word 0x0002143f
  .word 0x00621023
  .word 0x44820800
  .word 0x00000000
  .word 0x468008e0
  .word 0x44900800
  .word 0x00000000
  .word 0x468008a0
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220020
  .word 0x86240028
  .word 0x9623002e
  .word 0x8622002a
  .word 0x00441023
  .word 0x00621818
  .word 0x96220030
  .word 0x0062001a
  .word 0x00001012
  .word 0x00821021
  .word 0xa6220026
  .word 0x9623002e
  .word 0x96220030
  .word 0x0062102a
  .word 0x14400094
  .word 0x00000000
  .word 0x8622001c
  .word 0xa6220014
  .word 0x8622001e
  .word 0xa6220016
  .word 0x86220024
  .word 0xa6220020
  .word 0x8622002a
  .word 0xa6220026
  .word 0xa620002e
  .word 0x24020006
  .word 0xae22000c
  .word 0x8e220008
  .word 0x34420004
  .word 0xae220008
  .word 0x10000084
  .word 0x00000000
  .word 0x24020005
  .word 0xae22000c
  .word 0xa620002e
  .word 0x9622002e
  .word 0x24420001
  .word 0xa622002e
  .word 0x86300022
  .word 0x9622002e
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800060
  .word 0x46010840
  .word 0xc7808110
  .word 0x46010042
  .word 0x96220030
  .word 0x04400006
  .word 0x00000000
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00021842
  .word 0x30420001
  .word 0x00621825
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0x00000000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x86230024
  .word 0x0010143c
  .word 0x0002143f
  .word 0x00621023
  .word 0x44820800
  .word 0x00000000
  .word 0x468008e0
  .word 0x44900800
  .word 0x00000000
  .word 0x468008a0
  .word 0x44800800
  .word 0x00000000
  .word 0x46020818
  .word 0x4600181c
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220020
  .word 0x0002143c
  .word 0x0002143f
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808224
  .word 0x46010542
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x3c0243e8
  .word 0x44820800
  .word 0x00000000
  .word 0x46000d02
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c0243e8
  .word 0x44820800
  .word 0x00000000
  .word 0x46000842
  .word 0x3c0243a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46140000
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220014
  .word 0x3c0243fc
  .word 0x44820000
  .word 0x00000000
  .word 0x46010001
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220016
  .word 0x86240028
  .word 0x9623002e
  .word 0x8622002a
  .word 0x00441023
  .word 0x00621818
  .word 0x96220030
  .word 0x0062001a
  .word 0x00001012
  .word 0x00821021
  .word 0xa6220026
  .word 0x9623002e
  .word 0x96220030
  .word 0x0062102a
  .word 0x1440000f
  .word 0x00000000
  .word 0x8622001c
  .word 0xa6220014
  .word 0x8622001e
  .word 0xa6220016
  .word 0x86220024
  .word 0xa6220020
  .word 0x8622002a
  .word 0xa6220026
  .word 0xa620002e
  .word 0x24020006
  .word 0xae22000c
  .word 0x8e220008
  .word 0x34420004
  .word 0xae220008
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003DFAC0


u32 FUN_003dfac0(int *param_1)



{

  return **(u32 **)(*(int *)(*(int *)(*param_1 + 0xc) + 0x14) + 0x1c);

}

// FUN_003DFAE0


#ifndef PC_BUILD
asm void FUN_003dfae0(int *param_1,int *param_2)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0090
  .word 0x7fb60080
  .word 0x7fb50070
  .word 0x7fb40060
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
  .word 0x00a0b02d
  .word 0x3c023f80
  .word 0x4482a800
  .word 0x0000902d
  .word 0x8cb50010
  .word 0x8c820000
  .word 0x8c43000c
  .word 0x8ca20000
  .word 0x14620003
  .word 0x00000000
  .word 0x24120001
  .word 0xc795830c
  .word 0x86d40014
  .word 0x86d30016
  .word 0x86d10026
  .word 0x86c20020
  .word 0x2442ffa6
  .word 0x00028023
  .word 0x1240008d
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800360
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070002
  .word 0x0240402d
  .word 0x24090026
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x8ec20008
  .word 0x30420002
  .word 0x14400051
  .word 0x00000000
  .word 0x24020006
  .word 0x16a2000f
  .word 0x00000000
  .word 0x3c024288
  .word 0x44821000
  .word 0x3c024210
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4615151d
  .word 0x3c02c000
  .word 0x44820000
  .word 0x00000000
  .word 0x46150601
  .word 0x1000000d
  .word 0x00000000
  .word 0x3c02c208
  .word 0x44820000
  .word 0x00000000
  .word 0x46150502
  .word 0x3c024224
  .word 0x44821000
  .word 0x3c024228
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46010018
  .word 0x4615161d
  .word 0x00101023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808224
  .word 0x46010642
  .word 0x4600cb06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x46000586
  .word 0x4600cb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x4600c01a
  .word 0x4616a5dc
  .word 0x4600cb06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000586
  .word 0x4600a507
  .word 0x4600cb06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x4600c01a
  .word 0x44806000
  .word 0x4616a05c
  .word 0x44940000
  .word 0x00000000
  .word 0x46800020
  .word 0x46170000
  .word 0x46000024
  .word 0x44040000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010000
  .word 0x46000024
  .word 0x44050000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800360
  .word 0x322600ff
  .word 0x26a2ffff
  .word 0x00024040
  .word 0x24070004
  .word 0x0000482d
  .word 0x0000502d
  .word 0x4600ab86
  .word 0x4600abc6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800360
  .word 0x44806000
  .word 0x322600ff
  .word 0x26a2ffff
  .word 0x00024040
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070006
  .word 0x24090032
  .word 0x240affa0
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x24030006
  .word 0x12a30047
  .word 0x00000000
  .word 0x24070007
  .word 0x12a70044
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800360
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0000402d
  .word 0x24090032
  .word 0x240aff8f
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x10000033
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800360
  .word 0x44806000
  .word 0x322600ff
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070002
  .word 0x0240402d
  .word 0x24090026
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x26a2ffff
  .word 0x0002a840
  .word 0x44900000
  .word 0x00000000
  .word 0x46800360
  .word 0x44806000
  .word 0x322600ff
  .word 0x02b24021
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x24070003
  .word 0x24090022
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x44900000
  .word 0x00000000
  .word 0x46800360
  .word 0x44806000
  .word 0x322600ff
  .word 0x26470005
  .word 0x3c023f80
  .word 0x44827000
  .word 0x0280202d
  .word 0x0260282d
  .word 0x02a0402d
  .word 0x2409001d
  .word 0x240affb1
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0xdfbf0090
  .word 0x7bb60080
  .word 0x7bb50070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0xc7b90014
  .word 0xc7b80010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003DFEB0
int * FUN_003dfeb0(int param_1)



{

  int *piVar1;

  int iVar2;

  

  iVar2 = (s32)FUN_003c44d0(8,0,0,(FclProxyCallback*)FUN_003df4a0);

  piVar1 = *(int **)(iVar2 + 0x24);

  *piVar1 = iVar2;

  piVar1[1] = param_1;

  return piVar1;

}

// FUN_003DFF00
void FUN_003dff00(s32 param_1)
{
    if (param_1 != 0) {
        FUN_003c45f0(*(u32 *)param_1);
    }
}

// FUN_003DFF30
u32 FUN_003dff30(int *param_1)
{
    int iVar1;

    iVar1 = *(int *)(*param_1 + 4);
    goto check;
body:
    if ((*(u32 *)(*(int *)(iVar1 + 0x14) + 8) & 4) == 0) {
        return 0;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
check:
    if (iVar1 != 0) goto body;
    return 1;
}

// FUN_003DFF80
int FUN_003dff80(int* param_1, int param_2)
{
  int node;
  int result;

  node = *(int *)(*param_1 + 4);
  while (node != 0) {
    result = *(int *)(node + 0x14);
    if (*(int *)(result + 0x10) == param_2) {
      return result;
    }
    node = *(int *)(node + 0x10);
  }
  return 0;
}

// W414 loop-shape probes: while/for and explicit goto variants changed nd15 to 104-113 (or over/under-filled the window); reverted.
// FUN_003DFFC0


#ifndef PC_BUILD
asm int FUN_003dffc0(int *param_1,int param_2,s32 param_3)
{
  .set noreorder
  .word 0x27bdffe0
  .word 0xffbf0010
  .word 0x7fb00000
  .word 0x00c0802d
  .word 0x8c840000
  .word 0x8c830004
  .word 0x10000008
  .word 0x00000000
  .word 0x8c660014
  .word 0x8cc20010
  .word 0x14450003
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8c630010
  .word 0x1460fff8
  .word 0x00000000
  .word 0x0000302d
  .word 0x14c00010
  .word 0x00000000
  .word 0x94820010
  .word 0x24450001
  .word 0x26060038
  .word 0x0c0f1244
  .word 0x00000000
  .word 0x8c460014
  .word 0xacc20004
  .word 0x12000003
  .word 0x00000000
  .word 0x24c20038
  .word 0xacc20034
  .word 0xacc0000c
  .word 0x8cc20008
  .word 0x34420004
  .word 0xacc20008
  .word 0x24020001
  .word 0xacc2000c
  .word 0x8cc30008
  .word 0x2402fffb
  .word 0x00621024
  .word 0xacc20008
  .word 0x00c0102d
  .word 0xdfbf0010
  .word 0x7bb00000
  .word 0x27bd0020
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

// FUN_003E0080


void FUN_003e0080(u64 param_1,int param_2,int param_3,u16 param_4)



{

  int iVar1;
  int iVar2;
  int *piVar5;
  int *piVar4;
  int iVar3;
  struct {
    s32 first;
    u8 prefix[0x14];
    struct {
      u16 value;
      u16 pad;
      int index;
      u8 tail[0x14];
    } pairs[43];
    u16 last;
  } work;

  piVar5 = (int*)DAT_006a6040_abs;

  piVar4 = (int*)&work;

  iVar3 = 0x9a;

  do {

    iVar1 = *piVar5;

    iVar2 = piVar5[1];

    piVar5 = piVar5 + 2;

    iVar3 = iVar3 + -1;

    *piVar4 = iVar1;

    piVar4[1] = iVar2;

    piVar4 = piVar4 + 2;

  } while (0 < iVar3);

  work.first = param_2;
  work.pairs[0].value = param_4;
  work.pairs[0].index = param_2;
  work.pairs[1].value = param_4;
  work.pairs[1].index = param_2;
  work.pairs[2].value = param_4;
  work.pairs[2].index = param_2;
  work.pairs[3].value = param_4;
  work.pairs[3].index = param_2;
  work.pairs[4].value = param_4;
  work.pairs[4].index = param_2;
  work.pairs[5].value = param_4;
  work.pairs[5].index = param_2;
  work.pairs[6].value = param_4;
  work.pairs[6].index = param_2;
  work.pairs[7].value = param_4;
  work.pairs[7].index = param_2;
  work.pairs[8].value = param_4;
  work.pairs[8].index = param_2;
  work.pairs[9].value = param_4;
  work.pairs[9].index = param_2;
  work.pairs[10].value = param_4;
  work.pairs[10].index = param_2;
  work.pairs[11].value = param_4;
  work.pairs[11].index = param_2;
  work.pairs[12].value = param_4;
  work.pairs[12].index = param_2;
  work.pairs[13].value = param_4;
  work.pairs[13].index = param_2;
  work.pairs[14].value = param_4;
  work.pairs[14].index = param_2;
  work.pairs[15].value = param_4;
  work.pairs[15].index = param_2;
  work.pairs[16].value = param_4;
  work.pairs[16].index = param_2;
  work.pairs[17].value = param_4;
  work.pairs[17].index = param_2;
  work.pairs[18].value = param_4;
  work.pairs[18].index = param_2;
  work.pairs[19].value = param_4;
  work.pairs[19].index = param_2;
  work.pairs[20].value = param_4;
  work.pairs[20].index = param_2;
  work.pairs[21].value = param_4;
  work.pairs[21].index = param_2;
  work.pairs[22].value = param_4;
  work.pairs[22].index = param_2;
  work.pairs[23].value = param_4;
  work.pairs[23].index = param_2;
  work.pairs[24].value = param_4;
  work.pairs[24].index = param_2;
  work.pairs[25].value = param_4;
  work.pairs[25].index = param_2;
  work.pairs[26].value = param_4;
  work.pairs[26].index = param_2;
  work.pairs[27].value = param_4;
  work.pairs[27].index = param_2;
  work.pairs[28].value = param_4;
  work.pairs[28].index = param_2;
  work.pairs[29].value = param_4;
  work.pairs[29].index = param_2;
  work.pairs[30].value = param_4;
  work.pairs[30].index = param_2;
  work.pairs[31].value = param_4;
  work.pairs[31].index = param_2;
  work.pairs[32].value = param_4;
  work.pairs[32].index = param_2;
  work.pairs[33].value = param_4;
  work.pairs[33].index = param_2;
  work.pairs[34].value = param_4;
  work.pairs[34].index = param_2;
  work.pairs[35].value = param_4;
  work.pairs[35].index = param_2;
  work.pairs[36].value = param_4;
  work.pairs[36].index = param_2;
  work.pairs[37].value = param_4;
  work.pairs[37].index = param_2;
  work.pairs[38].value = param_4;
  work.pairs[38].index = param_2;
  work.pairs[39].value = param_4;
  work.pairs[39].index = param_2;
  work.pairs[40].value = param_4;
  work.pairs[40].index = param_2;
  work.pairs[41].value = param_4;
  work.pairs[41].index = param_2;
  work.pairs[42].value = param_4;
  work.pairs[42].index = param_2;
  work.last = param_4;

  memcpy(param_1,(int*)&work + param_2 * 0xe + param_3 * 7,0x1c);

  return;

}

// FUN_003E0260


int FUN_003e0260(int *param_1,s32 param_2,int param_3,u16 param_4)
{
    u8 result[0x1c];
    s32 result_word;
    FclAnimationNode *node;
    FclNodeLink *link;

    FUN_003e0080_p(result,param_2,param_3,param_4);
    result_word = *(s32 *)(result + 4);
    node = (FclAnimationNode *)FUN_003dff80(param_1,param_2);
    if (node == 0) {
        link = FUN_003c4910((FclNodeList *)*param_1,
                            *(u16 *)(*param_1 + 0x10) + 1,
                            (FclNodeValueStorage *)(result_word + 0x38));
        node = link->payload;
        node->link = link;
        if (result_word != 0)
            node->value_storage = &node->inline_storage;
        node->field_0c = 0;
        node->flags |= 4;
    }
    node->field_0c = 1;
    node->flags &= 0xfffffffb;
    fclCombineList003df100(node,(FclAnimationResultRecord *)result);
    return (int)node;
}

// FUN_003E0330
int FUN_003e0330(int *param_1,s32 param_2,int param_3,u16 param_4)
{
    struct FclPair {
        s32 first;
        s32 second;
    };
    struct {
        s32 table[0x70];
        u8 result[0x1c];
    } work;
    struct FclPair *src;
    struct FclPair *dst;
    s32 first;
    s32 second;
    s32 count;
    s32 result_word;
    FclAnimationNode* node;
    FclNodeLink* link;

    src = (struct FclPair *)DAT_006a6510_abs;
    dst = (struct FclPair *)work.table;
    count = 0x38;
    do {
        first = src->first;
        second = src->second;
        src++;
        count--;
        dst->first = first;
        dst->second = second;
        dst++;
    } while (count > 0);
    work.table[0] = param_2;
    *(u16 *)((byte *)work.table + 0x18) = param_4;
    *(s32 *)((byte *)work.table + 0x1c) = work.table[0];
    *(u16 *)((byte *)work.table + 0x34) = param_4;
    *(s32 *)((byte *)work.table + 0x38) = work.table[0];
    *(u16 *)((byte *)work.table + 0x50) = param_4;
    *(s32 *)((byte *)work.table + 0x54) = work.table[0];
    *(u16 *)((byte *)work.table + 0x6c) = param_4;
    *(s32 *)((byte *)work.table + 0x70) = work.table[0];
    *(u16 *)((byte *)work.table + 0x88) = param_4;
    *(s32 *)((byte *)work.table + 0x8c) = work.table[0];
    *(u16 *)((byte *)work.table + 0xa4) = param_4;
    *(s32 *)((byte *)work.table + 0xa8) = work.table[0];
    *(u16 *)((byte *)work.table + 0xc0) = param_4;
    *(s32 *)((byte *)work.table + 0xc4) = work.table[0];
    *(u16 *)((byte *)work.table + 0xdc) = param_4;
    *(s32 *)((byte *)work.table + 0xe0) = work.table[0];
    *(u16 *)((byte *)work.table + 0xf8) = param_4;
    *(s32 *)((byte *)work.table + 0xfc) = work.table[0];
    *(u16 *)((byte *)work.table + 0x114) = param_4;
    *(s32 *)((byte *)work.table + 0x118) = work.table[0];
    *(u16 *)((byte *)work.table + 0x130) = param_4;
    *(s32 *)((byte *)work.table + 0x134) = work.table[0];
    *(u16 *)((byte *)work.table + 0x14c) = param_4;
    *(s32 *)((byte *)work.table + 0x150) = work.table[0];
    *(u16 *)((byte *)work.table + 0x168) = param_4;
    *(s32 *)((byte *)work.table + 0x16c) = work.table[0];
    *(u16 *)((byte *)work.table + 0x184) = param_4;
    *(s32 *)((byte *)work.table + 0x188) = work.table[0];
    *(u16 *)((byte *)work.table + 0x1a0) = param_4;
    *(s32 *)((byte *)work.table + 0x1a4) = work.table[0];
    *(u16 *)((byte *)work.table + 0x1bc) = param_4;
    memcpy(work.result,
           work.table + work.table[0] * 0xe + param_3 * 7,
           0x1c);
    result_word = *(s32 *)(work.result + 4);
    node = (FclAnimationNode *)FUN_003dff80(param_1, param_2);
    if (node == 0) {
        link = FUN_003c4910((FclNodeList *)*(int *)param_1,
                            *(u16 *)(*(int *)param_1 + 0x10) + 1,
                            (FclNodeValueStorage *)(result_word + 0x38));
        node = link->payload;
        node->link = link;
        if (result_word != 0)
            node->value_storage = &node->inline_storage;
        node->field_0c = 0;
        node->flags |= 4;
    }
    node->field_0c = 1;
    node->flags &= 0xfffffffb;
    fclCombineList003df100(node, (FclAnimationResultRecord *)work.result);
    return (int)node;
}

// FUN_003E04E0
int FUN_003e04e0(int *param_1,s32 param_2,int param_3,u16 param_4)
{
    struct FclPair {
        s32 first;
        s32 second;
    };
    struct {
        s32 table[0x38];
        u8 result[0x1c];
    } work;
    struct FclPair *src;
    struct FclPair *dst;
    s32 count;
    s32 result_word;
    s32 first;
    s32 second;
    FclAnimationNode* node;
    FclNodeLink* link;

    src = (struct FclPair *)DAT_006A66D0_abs;
    dst = (struct FclPair *)work.table;
    count = 0x1c;
    do {
        first = src->first;
        second = src->second;
        src++;
        count--;
        dst->first = first;
        dst->second = second;
        dst++;
    } while (count > 0);
    work.table[0] = param_2;
    *(u16 *)((byte *)work.table + 0x18) = param_4;
    *(s32 *)((byte *)work.table + 0x1c) = work.table[0];
    *(u16 *)((byte *)work.table + 0x34) = param_4;
    *(s32 *)((byte *)work.table + 0x38) = work.table[0];
    *(u16 *)((byte *)work.table + 0x50) = param_4;
    *(s32 *)((byte *)work.table + 0x54) = work.table[0];
    *(u16 *)((byte *)work.table + 0x6c) = param_4;
    *(s32 *)((byte *)work.table + 0x70) = work.table[0];
    *(u16 *)((byte *)work.table + 0x88) = param_4;
    *(s32 *)((byte *)work.table + 0x8c) = work.table[0];
    *(u16 *)((byte *)work.table + 0xa4) = param_4;
    *(s32 *)((byte *)work.table + 0xa8) = work.table[0];
    *(u16 *)((byte *)work.table + 0xc0) = param_4;
    *(s32 *)((byte *)work.table + 0xc4) = work.table[0];
    *(u16 *)((byte *)work.table + 0xdc) = param_4;
    memcpy(work.result,
           work.table + work.table[0] * 0xe + param_3 * 7,
           0x1c);
    result_word = *(s32 *)(work.result + 4);
    node = (FclAnimationNode *)FUN_003dff80(param_1, param_2);
    if (node == 0) {
        link = FUN_003c4910((FclNodeList *)*(int *)param_1,
                            *(u16 *)(*(int *)param_1 + 0x10) + 1,
                            (FclNodeValueStorage *)(result_word + 0x38));
        node = link->payload;
        node->link = link;
        if (result_word != 0)
            node->value_storage = &node->inline_storage;
        node->field_0c = 0;
        node->flags |= 4;
    }
    node->field_0c = 1;
    node->flags &= 0xfffffffb;
    fclCombineList003df100(node, (FclAnimationResultRecord *)work.result);
    return (int)node;
}

// FUN_003E0650


u64 FUN_003e0650(u32 *param_1)



{

  FUN_003c4e70(*param_1);

  return 0;

}

// FUN_003E0680


void FUN_003e0680(u32 param_1,code* param_2,u32 param_3)



{

  int iVar1;

  

  for (iVar1 = *(int *)(*(int *)param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {

    (*param_2)(param_1,*(u32 *)(iVar1 + 0x14),param_3);

  }

  return;

}

// FUN_003E0700


void FUN_003e0700(s32 param_1)



{

  u32 uStack_4;

  uStack_4 = (u32)param_1;
  if (param_1 == 4)
      goto change_seq;
  if (param_1 == 2)
      goto change_seq;
  if (param_1 == 1)
      goto change_seq;
  switch (param_1) {
  case 0:
      goto change_seq;
  default:
      goto default_seq;
  }
change_seq:
  adminiChangeSeq(7, &uStack_4, 4, 0);
  goto done;

default_seq:
  FUN_003e0780();

done:
  return;

}

// FUN_003E0780


void FUN_003e0780(void)



{
  int iVar1;
  u32 uVar2;

  FUN_003e0950_narg();
  iVar1 = FUN_003c5460(DAT_007ce688);
  uVar2 = kwlnTaskCreate(0,(char *)&DAT_007cd7b8,10,FUN_003e0830,0,0);
  *(int *)(iVar1 + 0x80) = (int)uVar2;
  uVar2 = kwlnTaskCreate(uVar2,(const char *)DAT_006a6b20 - 0x248,0x18b6,FUN_003e0870,0,0);
  kwlnTaskCreate(uVar2,(const char *)DAT_006a6b20 - 0x238,0x106f,FUN_003e08e0,0,0);
  return;
}

// FUN_003E0830
u32 FUN_003e0830(void)
{
    if (FUN_003e0bc0() != 0) goto failed;
    goto succeeded;
failed:
    return -1;
succeeded:
    return 0;
}

// FUN_003E0870
u64 FUN_003e0870(void)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(uGpffffb998);

  FUN_003e6d40_y2();

  *(u32 *)(iVar1 + 8) = *(u32 *)(iVar1 + 8) | 0x20;

  FUN_003e0680(*(s32 *)(iVar1 + 0x98),(code*)FUN_003e6400,0);

  *(u32 *)(iVar1 + 8) = *(u32 *)(iVar1 + 8) & 0xffffffdf;

  return 0;

}

// FUN_003E08E0
u64 FUN_003e08e0(void)



{

  int iVar1;

  

  iVar1 = FUN_003c5460(uGpffffb998);

  FUN_003e0680(*(s32 *)(iVar1 + 0x98),(code*)FUN_003e6400,0);

  return 0;

}

// FUN_003E0920


void FUN_003e0920(void)



{

  FUN_003e0bb0();

  return;

}

// FUN_003E0940


u32 FUN_003e0940(void)



{

  return uGpffffb998;

}

// FUN_003E0950
void FUN_003e0950(s32 arg)
{
    s32 work;
    s32 param_1 = arg;
    if (iGpffffb998 != 0)
    {
        return;
    }

    iGpffffb998 = FUN_003c5180((s32)FUN_003e6e80, 0x9c);
    work = FUN_003c5460(iGpffffb998);
    *(s32*)work = param_1;
    *(s32*)(work + 0x98) = (s32)FUN_003dfeb0(work);
    *(s32*)(work + 4) = 1;
    printf(&gp0xffffaad0, (char*)DAT_006a6b20 - 0x28, 0x1a9);
    printf((char*)DAT_006a6b20_second - 0x18, param_1);
    H_Dbprt_FmtLog((char*)DAT_006a6b20_log - 0x18, param_1);
}

// FUN_003E0A10


void FUN_003e0a10(s32 param_1)



{

  int *piVar1;

  int lVar2;

  int iVar3;

  int *slot;

  int *request;

  

  piVar1 = (int *)FUN_003c5460();

  lVar2 = datGetFlag(0x121f);

  if (lVar2 == 1) {

    datSetFlag(0x1407,0);

  }

  FUN_0040e360();

  iVar3 = *piVar1;

  switch (iVar3) {
  case 0:
  case 1:
  case 2:
  case 4:
    MT_Scene_Destroy();
    break;
  case 8:
    FUN_003c7dd0(8);
    FUN_003c7dd0(9);
    break;
  }

  FUN_003c77a0();

  if (piVar1[0x16] != 0) {
    H_Cdvd_Destroy(piVar1[0x16]);
    piVar1[0x16] = 0;
  }
  else {
    for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
      slot = piVar1 + iVar3 * 2;
      request = slot + 0x18;
      if (*request != 0) {
        H_Cdvd_Destroy(*request);
        *request = 0;
        slot[0x19] = 0;
      }
    }
  }

  FUN_003dff00(piVar1[0x26]);

  return;

}



// FUN_003E0B70
void FUN_003e0b70(void)
{
    if (iGpffffb998 != 0) {
        FUN_003e0a10(iGpffffb998);
        FUN_003c5220(iGpffffb998);
    }
    iGpffffb998 = 0;
}

// FUN_003E0BB0


u8 FUN_003e0bb0(void)



{

  return iGpffffb998 != 0;

}

// FUN_003E0BC0
u32 FUN_003e0bc0(void)
{
    if (FUN_003c5490(uGpffffb998) != 0) {
        FUN_003e0a10(uGpffffb998);
        FUN_003c5220(uGpffffb998);
        uGpffffb998 = 0;
        return 1;
    }
    return 0;
}

#define FCL_SET_RESULT(T, I, V) (((FclAnimationResultRecord *)(T))[I].value = (V)); (((FclAnimationResultRecord *)(T))[I].field18 = 0);
#define FCL_COMBINE_CASE(ID, SLOT, INDEX) \
    do { \
        FclAnimationNode* s0 = *(FclAnimationNode **)((unsigned char *)param_1 + 0x98); \
        unsigned char table[0x3f0]; \
        FclAnimationNode* node; \
        FclAnimationResultRecord* source; \
        u32 *src; \
        u32 *dst; \
        s32 count; \
        u32 value0; \
        u32 value1; \
        src = (u32 *)DAT_006a6b20; \
        dst = (u32 *)table; \
        count = 0x7e; \
        do { \
            value0 = src[0]; \
            value1 = src[1]; \
            src += 2; \
            count--; \
            dst[0] = value0; \
            dst[1] = value1; \
            dst += 2; \
        } while (count > 0); \
        FCL_SET_RESULT(table, 0, ID) \
        FCL_SET_RESULT(table, 1, ID) \
        FCL_SET_RESULT(table, 2, ID) \
        FCL_SET_RESULT(table, 3, ID) \
        FCL_SET_RESULT(table, 4, ID) \
        FCL_SET_RESULT(table, 5, ID) \
        FCL_SET_RESULT(table, 6, ID) \
        FCL_SET_RESULT(table, 7, ID) \
        FCL_SET_RESULT(table, 8, ID) \
        FCL_SET_RESULT(table, 9, ID) \
        FCL_SET_RESULT(table, 10, ID) \
        FCL_SET_RESULT(table, 11, ID) \
        FCL_SET_RESULT(table, 12, ID) \
        FCL_SET_RESULT(table, 13, ID) \
        FCL_SET_RESULT(table, 14, ID) \
        FCL_SET_RESULT(table, 15, ID) \
        FCL_SET_RESULT(table, 16, ID) \
        FCL_SET_RESULT(table, 17, ID) \
        FCL_SET_RESULT(table, 18, ID) \
        FCL_SET_RESULT(table, 19, ID) \
        FCL_SET_RESULT(table, 20, ID) \
        FCL_SET_RESULT(table, 21, ID) \
        FCL_SET_RESULT(table, 22, ID) \
        FCL_SET_RESULT(table, 23, ID) \
        FCL_SET_RESULT(table, 24, ID) \
        FCL_SET_RESULT(table, 25, ID) \
        FCL_SET_RESULT(table, 26, ID) \
        FCL_SET_RESULT(table, 27, ID) \
        FCL_SET_RESULT(table, 28, ID) \
        FCL_SET_RESULT(table, 29, ID) \
        FCL_SET_RESULT(table, 30, ID) \
        FCL_SET_RESULT(table, 31, ID) \
        FCL_SET_RESULT(table, 32, ID) \
        FCL_SET_RESULT(table, 33, ID) \
        FCL_SET_RESULT(table, 34, ID) \
        FCL_SET_RESULT(table, 35, ID) \
        source = &((FclAnimationResultRecord *)table)[(SLOT)]; \
        memcpy(&result_storage[37 - (INDEX)].record, source, 0x1c); \
        node = (FclAnimationNode *)FUN_003dffc0((int *)s0, (ID), result_storage[37 - (INDEX)].record.value); \
        if ((ID) == 0) { \
            FUN_003c4820((int *)(s0->value + 4), (int *)node->link); \
            FUN_003c4710((int *)(s0->value + 4), 0, (int *)node->link); \
        } \
        fclCombineList003df100(node, &result_storage[37 - (INDEX)].record); \
    } while (0)

// FUN_003E0C20
#ifndef PC_BUILD
asm void FUN_003e0c20(void *param_1, u32 param_2, u32 param_3)
{
  .set noreorder
  .word 0x3c01ffff
  .word 0x34216570
  .word 0x03a1e821
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x2ca10012
  .word 0x102013a7
  .word 0x00000000
  .word 0x3c07007c
  .word 0x24e7b900
  .word 0x00051880
  .word 0x00671821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8c850000
  .word 0x24030003
  .word 0x10a3139c
  .word 0x00000000
  .word 0x14c00109
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x340191e0
  .word 0x03a12821
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2091e0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42091f8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2091fc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209214
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209218
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209230
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209234
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420924c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209250
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209268
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20926c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209284
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209288
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42092a0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2092a4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42092bc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2092c0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42092d8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2092dc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42092f4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2092f8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209310
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209314
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420932c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209330
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209348
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20934c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209364
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209368
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209380
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209384
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420939c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2093a0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42093b8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2093bc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42093d4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2093d8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42093f0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2093f4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420940c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209410
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209428
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20942c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209444
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209448
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209460
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209464
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420947c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209480
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209498
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20949c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42094b4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2094b8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42094d0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2094d4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42094ec
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2094f0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209508
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20950c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209524
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209528
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209540
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209544
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420955c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209560
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209578
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20957c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209594
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209598
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42095b0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2095b4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42095cc
  .word 0x34019a70
  .word 0x03a12021
  .word 0x340191e0
  .word 0x03a12821
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269a74
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e030000
  .word 0x24640004
  .word 0x8c450004
  .word 0x0c0f1208
  .word 0x00000000
  .word 0x8e020000
  .word 0x24440004
  .word 0x0000282d
  .word 0x8e260004
  .word 0x0c0f11c4
  .word 0x00000000
  .word 0x0220202d
  .word 0x34019a70
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10001292
  .word 0x00000000
  .word 0x24030001
  .word 0x14c3128f
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x34018df0
  .word 0x03a12821
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208df0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208e08
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208e0c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208e24
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208e28
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208e40
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208e44
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208e5c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208e60
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208e78
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208e7c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208e94
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208e98
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208eb0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208eb4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208ecc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208ed0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208ee8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208eec
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208f04
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208f08
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208f20
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208f24
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208f3c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208f40
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208f58
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208f5c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208f74
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208f78
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208f90
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208f94
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208fac
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208fb0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208fc8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208fcc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208fe4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac208fe8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209000
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209004
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420901c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209020
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209038
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20903c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209054
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209058
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209070
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209074
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420908c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209090
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42090a8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2090ac
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42090c4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2090c8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42090e0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2090e4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42090fc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209100
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209118
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20911c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209134
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209138
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209150
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209154
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420916c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac209170
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4209188
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac20918c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42091a4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2091a8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42091c0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2091c4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42091dc
  .word 0x34019a50
  .word 0x03a12021
  .word 0x34018e0c
  .word 0x03a12821
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269a54
  .word 0x0200202d
  .word 0x0000282d
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040882d
  .word 0x8e030000
  .word 0x24640004
  .word 0x8c450004
  .word 0x0c0f1208
  .word 0x00000000
  .word 0x8e020000
  .word 0x24440004
  .word 0x0000282d
  .word 0x8e260004
  .word 0x0c0f11c4
  .word 0x00000000
  .word 0x0220202d
  .word 0x34019a50
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10001187
  .word 0x00000000
  .word 0x14c000fe
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x34018a00
  .word 0x03a12821
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020001
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228a00
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208a18
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228a1c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208a34
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228a38
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208a50
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228a54
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208a6c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228a70
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208a88
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228a8c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208aa4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228aa8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208ac0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228ac4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208adc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228ae0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208af8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228afc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208b14
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228b18
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208b30
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228b34
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208b4c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228b50
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208b68
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228b6c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208b84
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228b88
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208ba0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228ba4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208bbc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228bc0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208bd8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228bdc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208bf4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228bf8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208c10
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228c14
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208c2c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228c30
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208c48
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228c4c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208c64
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228c68
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208c80
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228c84
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208c9c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228ca0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208cb8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228cbc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208cd4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228cd8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208cf0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228cf4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208d0c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228d10
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208d28
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228d2c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208d44
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228d48
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208d60
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228d64
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208d7c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228d80
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208d98
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228d9c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208db4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228db8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208dd0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228dd4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208dec
  .word 0x34019a30
  .word 0x03a12021
  .word 0x34018a38
  .word 0x03a12821
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269a34
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019a30
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10001088
  .word 0x00000000
  .word 0x24030001
  .word 0x14c31085
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x34018610
  .word 0x03a12821
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020001
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228610
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208628
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22862c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208644
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228648
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208660
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228664
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420867c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228680
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208698
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22869c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42086b4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2286b8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42086d0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2286d4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42086ec
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2286f0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208708
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22870c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208724
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228728
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208740
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228744
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420875c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228760
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208778
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22877c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208794
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228798
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42087b0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2287b4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42087cc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2287d0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42087e8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2287ec
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208804
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228808
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208820
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228824
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420883c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228840
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208858
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22885c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208874
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228878
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208890
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228894
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42088ac
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2288b0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42088c8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2288cc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42088e4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2288e8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208900
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228904
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420891c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228920
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208938
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22893c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208954
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228958
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208970
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228974
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420898c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228990
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42089a8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2289ac
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42089c4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2289c8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42089e0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2289e4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42089fc
  .word 0x34019a10
  .word 0x03a12021
  .word 0x34018664
  .word 0x03a12821
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269a14
  .word 0x0200202d
  .word 0x24050001
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019a10
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000f88
  .word 0x00000000
  .word 0x14c000fe
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x34018220
  .word 0x03a12821
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020002
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228220
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208238
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22823c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208254
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228258
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208270
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228274
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420828c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228290
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42082a8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2282ac
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42082c4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2282c8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42082e0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2282e4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42082fc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228300
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208318
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22831c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208334
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228338
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208350
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228354
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420836c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228370
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208388
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22838c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42083a4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2283a8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42083c0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2283c4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42083dc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2283e0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42083f8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2283fc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208414
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228418
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208430
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228434
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420844c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228450
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208468
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22846c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208484
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228488
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42084a0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2284a4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42084bc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2284c0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42084d8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2284dc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42084f4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2284f8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208510
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228514
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420852c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228530
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208548
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac22854c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208564
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228568
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4208580
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac228584
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420859c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2285a0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42085b8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2285bc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42085d4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2285d8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42085f0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2285f4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa420860c
  .word 0x340199f0
  .word 0x03a12021
  .word 0x34018290
  .word 0x03a12821
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2699f4
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340199f0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000e89
  .word 0x00000000
  .word 0x24030001
  .word 0x14c300bb
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a57e30
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24030002
  .word 0xafa37e30
  .word 0x2402001e
  .word 0xa7a27e48
  .word 0xafa37e4c
  .word 0xa7a27e64
  .word 0xafa37e68
  .word 0xa7a27e80
  .word 0xafa37e84
  .word 0xa7a27e9c
  .word 0xafa37ea0
  .word 0xa7a27eb8
  .word 0xafa37ebc
  .word 0xa7a27ed4
  .word 0xafa37ed8
  .word 0xa7a27ef0
  .word 0xafa37ef4
  .word 0xa7a27f0c
  .word 0xafa37f10
  .word 0xa7a27f28
  .word 0xafa37f2c
  .word 0xa7a27f44
  .word 0xafa37f48
  .word 0xa7a27f60
  .word 0xafa37f64
  .word 0xa7a27f7c
  .word 0xafa37f80
  .word 0xa7a27f98
  .word 0xafa37f9c
  .word 0xa7a27fb4
  .word 0xafa37fb8
  .word 0xa7a27fd0
  .word 0xafa37fd4
  .word 0xa7a27fec
  .word 0xafa37ff0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228008
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac23800c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228024
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238028
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228040
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238044
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa422805c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238060
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228078
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac23807c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228094
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238098
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42280b0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2380b4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42280cc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2380d0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42280e8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2380ec
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228104
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238108
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228120
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238124
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa422813c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238140
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228158
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac23815c
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228174
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238178
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228190
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238194
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42281ac
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2381b0
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42281c8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2381cc
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa42281e4
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac2381e8
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa4228200
  .word 0x3c010001
  .word 0x03a10821
  .word 0xac238204
  .word 0x3c010001
  .word 0x03a10821
  .word 0xa422821c
  .word 0x340199d0
  .word 0x03a12021
  .word 0x27a57ebc
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2699d4
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340199d0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000dcc
  .word 0x00000000
  .word 0x24030002
  .word 0x14c30dc9
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a57a40
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020002
  .word 0xafa27a40
  .word 0xa7a07a58
  .word 0xafa27a5c
  .word 0xa7a07a74
  .word 0xafa27a78
  .word 0xa7a07a90
  .word 0xafa27a94
  .word 0xa7a07aac
  .word 0xafa27ab0
  .word 0xa7a07ac8
  .word 0xafa27acc
  .word 0xa7a07ae4
  .word 0xafa27ae8
  .word 0xa7a07b00
  .word 0xafa27b04
  .word 0xa7a07b1c
  .word 0xafa27b20
  .word 0xa7a07b38
  .word 0xafa27b3c
  .word 0xa7a07b54
  .word 0xafa27b58
  .word 0xa7a07b70
  .word 0xafa27b74
  .word 0xa7a07b8c
  .word 0xafa27b90
  .word 0xa7a07ba8
  .word 0xafa27bac
  .word 0xa7a07bc4
  .word 0xafa27bc8
  .word 0xa7a07be0
  .word 0xafa27be4
  .word 0xa7a07bfc
  .word 0xafa27c00
  .word 0xa7a07c18
  .word 0xafa27c1c
  .word 0xa7a07c34
  .word 0xafa27c38
  .word 0xa7a07c50
  .word 0xafa27c54
  .word 0xa7a07c6c
  .word 0xafa27c70
  .word 0xa7a07c88
  .word 0xafa27c8c
  .word 0xa7a07ca4
  .word 0xafa27ca8
  .word 0xa7a07cc0
  .word 0xafa27cc4
  .word 0xa7a07cdc
  .word 0xafa27ce0
  .word 0xa7a07cf8
  .word 0xafa27cfc
  .word 0xa7a07d14
  .word 0xafa27d18
  .word 0xa7a07d30
  .word 0xafa27d34
  .word 0xa7a07d4c
  .word 0xafa27d50
  .word 0xa7a07d68
  .word 0xafa27d6c
  .word 0xa7a07d84
  .word 0xafa27d88
  .word 0xa7a07da0
  .word 0xafa27da4
  .word 0xa7a07dbc
  .word 0xafa27dc0
  .word 0xa7a07dd8
  .word 0xafa27ddc
  .word 0xa7a07df4
  .word 0xafa27df8
  .word 0xa7a07e10
  .word 0xafa27e14
  .word 0xa7a07e2c
  .word 0x340199b0
  .word 0x03a12021
  .word 0x27a57acc
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2699b4
  .word 0x0200202d
  .word 0x24050002
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340199b0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000d5e
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a57650
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020003
  .word 0xafa27650
  .word 0xa7a07668
  .word 0xafa2766c
  .word 0xa7a07684
  .word 0xafa27688
  .word 0xa7a076a0
  .word 0xafa276a4
  .word 0xa7a076bc
  .word 0xafa276c0
  .word 0xa7a076d8
  .word 0xafa276dc
  .word 0xa7a076f4
  .word 0xafa276f8
  .word 0xa7a07710
  .word 0xafa27714
  .word 0xa7a0772c
  .word 0xafa27730
  .word 0xa7a07748
  .word 0xafa2774c
  .word 0xa7a07764
  .word 0xafa27768
  .word 0xa7a07780
  .word 0xafa27784
  .word 0xa7a0779c
  .word 0xafa277a0
  .word 0xa7a077b8
  .word 0xafa277bc
  .word 0xa7a077d4
  .word 0xafa277d8
  .word 0xa7a077f0
  .word 0xafa277f4
  .word 0xa7a0780c
  .word 0xafa27810
  .word 0xa7a07828
  .word 0xafa2782c
  .word 0xa7a07844
  .word 0xafa27848
  .word 0xa7a07860
  .word 0xafa27864
  .word 0xa7a0787c
  .word 0xafa27880
  .word 0xa7a07898
  .word 0xafa2789c
  .word 0xa7a078b4
  .word 0xafa278b8
  .word 0xa7a078d0
  .word 0xafa278d4
  .word 0xa7a078ec
  .word 0xafa278f0
  .word 0xa7a07908
  .word 0xafa2790c
  .word 0xa7a07924
  .word 0xafa27928
  .word 0xa7a07940
  .word 0xafa27944
  .word 0xa7a0795c
  .word 0xafa27960
  .word 0xa7a07978
  .word 0xafa2797c
  .word 0xa7a07994
  .word 0xafa27998
  .word 0xa7a079b0
  .word 0xafa279b4
  .word 0xa7a079cc
  .word 0xafa279d0
  .word 0xa7a079e8
  .word 0xafa279ec
  .word 0xa7a07a04
  .word 0xafa27a08
  .word 0xa7a07a20
  .word 0xafa27a24
  .word 0xa7a07a3c
  .word 0x34019990
  .word 0x03a12021
  .word 0x27a576f8
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269994
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019990
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000cf1
  .word 0x00000000
  .word 0x24030001
  .word 0x14c3006d
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a57260
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24030003
  .word 0xafa37260
  .word 0x2402001e
  .word 0xa7a27278
  .word 0xafa3727c
  .word 0xa7a27294
  .word 0xafa37298
  .word 0xa7a272b0
  .word 0xafa372b4
  .word 0xa7a272cc
  .word 0xafa372d0
  .word 0xa7a272e8
  .word 0xafa372ec
  .word 0xa7a27304
  .word 0xafa37308
  .word 0xa7a27320
  .word 0xafa37324
  .word 0xa7a2733c
  .word 0xafa37340
  .word 0xa7a27358
  .word 0xafa3735c
  .word 0xa7a27374
  .word 0xafa37378
  .word 0xa7a27390
  .word 0xafa37394
  .word 0xa7a273ac
  .word 0xafa373b0
  .word 0xa7a273c8
  .word 0xafa373cc
  .word 0xa7a273e4
  .word 0xafa373e8
  .word 0xa7a27400
  .word 0xafa37404
  .word 0xa7a2741c
  .word 0xafa37420
  .word 0xa7a27438
  .word 0xafa3743c
  .word 0xa7a27454
  .word 0xafa37458
  .word 0xa7a27470
  .word 0xafa37474
  .word 0xa7a2748c
  .word 0xafa37490
  .word 0xa7a274a8
  .word 0xafa374ac
  .word 0xa7a274c4
  .word 0xafa374c8
  .word 0xa7a274e0
  .word 0xafa374e4
  .word 0xa7a274fc
  .word 0xafa37500
  .word 0xa7a27518
  .word 0xafa3751c
  .word 0xa7a27534
  .word 0xafa37538
  .word 0xa7a27550
  .word 0xafa37554
  .word 0xa7a2756c
  .word 0xafa37570
  .word 0xa7a27588
  .word 0xafa3758c
  .word 0xa7a275a4
  .word 0xafa375a8
  .word 0xa7a275c0
  .word 0xafa375c4
  .word 0xa7a275dc
  .word 0xafa375e0
  .word 0xa7a275f8
  .word 0xafa375fc
  .word 0xa7a27614
  .word 0xafa37618
  .word 0xa7a27630
  .word 0xafa37634
  .word 0xa7a2764c
  .word 0x34019970
  .word 0x03a12021
  .word 0x27a57324
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269974
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019970
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000c82
  .word 0x00000000
  .word 0x24030002
  .word 0x14c30c7f
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a56e70
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020003
  .word 0xafa26e70
  .word 0xa7a06e88
  .word 0xafa26e8c
  .word 0xa7a06ea4
  .word 0xafa26ea8
  .word 0xa7a06ec0
  .word 0xafa26ec4
  .word 0xa7a06edc
  .word 0xafa26ee0
  .word 0xa7a06ef8
  .word 0xafa26efc
  .word 0xa7a06f14
  .word 0xafa26f18
  .word 0xa7a06f30
  .word 0xafa26f34
  .word 0xa7a06f4c
  .word 0xafa26f50
  .word 0xa7a06f68
  .word 0xafa26f6c
  .word 0xa7a06f84
  .word 0xafa26f88
  .word 0xa7a06fa0
  .word 0xafa26fa4
  .word 0xa7a06fbc
  .word 0xafa26fc0
  .word 0xa7a06fd8
  .word 0xafa26fdc
  .word 0xa7a06ff4
  .word 0xafa26ff8
  .word 0xa7a07010
  .word 0xafa27014
  .word 0xa7a0702c
  .word 0xafa27030
  .word 0xa7a07048
  .word 0xafa2704c
  .word 0xa7a07064
  .word 0xafa27068
  .word 0xa7a07080
  .word 0xafa27084
  .word 0xa7a0709c
  .word 0xafa270a0
  .word 0xa7a070b8
  .word 0xafa270bc
  .word 0xa7a070d4
  .word 0xafa270d8
  .word 0xa7a070f0
  .word 0xafa270f4
  .word 0xa7a0710c
  .word 0xafa27110
  .word 0xa7a07128
  .word 0xafa2712c
  .word 0xa7a07144
  .word 0xafa27148
  .word 0xa7a07160
  .word 0xafa27164
  .word 0xa7a0717c
  .word 0xafa27180
  .word 0xa7a07198
  .word 0xafa2719c
  .word 0xa7a071b4
  .word 0xafa271b8
  .word 0xa7a071d0
  .word 0xafa271d4
  .word 0xa7a071ec
  .word 0xafa271f0
  .word 0xa7a07208
  .word 0xafa2720c
  .word 0xa7a07224
  .word 0xafa27228
  .word 0xa7a07240
  .word 0xafa27244
  .word 0xa7a0725c
  .word 0x34019950
  .word 0x03a12021
  .word 0x27a56f34
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269954
  .word 0x0200202d
  .word 0x24050003
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019950
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000c14
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a56a80
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020004
  .word 0xafa26a80
  .word 0xa7a06a98
  .word 0xafa26a9c
  .word 0xa7a06ab4
  .word 0xafa26ab8
  .word 0xa7a06ad0
  .word 0xafa26ad4
  .word 0xa7a06aec
  .word 0xafa26af0
  .word 0xa7a06b08
  .word 0xafa26b0c
  .word 0xa7a06b24
  .word 0xafa26b28
  .word 0xa7a06b40
  .word 0xafa26b44
  .word 0xa7a06b5c
  .word 0xafa26b60
  .word 0xa7a06b78
  .word 0xafa26b7c
  .word 0xa7a06b94
  .word 0xafa26b98
  .word 0xa7a06bb0
  .word 0xafa26bb4
  .word 0xa7a06bcc
  .word 0xafa26bd0
  .word 0xa7a06be8
  .word 0xafa26bec
  .word 0xa7a06c04
  .word 0xafa26c08
  .word 0xa7a06c20
  .word 0xafa26c24
  .word 0xa7a06c3c
  .word 0xafa26c40
  .word 0xa7a06c58
  .word 0xafa26c5c
  .word 0xa7a06c74
  .word 0xafa26c78
  .word 0xa7a06c90
  .word 0xafa26c94
  .word 0xa7a06cac
  .word 0xafa26cb0
  .word 0xa7a06cc8
  .word 0xafa26ccc
  .word 0xa7a06ce4
  .word 0xafa26ce8
  .word 0xa7a06d00
  .word 0xafa26d04
  .word 0xa7a06d1c
  .word 0xafa26d20
  .word 0xa7a06d38
  .word 0xafa26d3c
  .word 0xa7a06d54
  .word 0xafa26d58
  .word 0xa7a06d70
  .word 0xafa26d74
  .word 0xa7a06d8c
  .word 0xafa26d90
  .word 0xa7a06da8
  .word 0xafa26dac
  .word 0xa7a06dc4
  .word 0xafa26dc8
  .word 0xa7a06de0
  .word 0xafa26de4
  .word 0xa7a06dfc
  .word 0xafa26e00
  .word 0xa7a06e18
  .word 0xafa26e1c
  .word 0xa7a06e34
  .word 0xafa26e38
  .word 0xa7a06e50
  .word 0xafa26e54
  .word 0xa7a06e6c
  .word 0x34019930
  .word 0x03a12021
  .word 0x27a56b60
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269934
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019930
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000ba7
  .word 0x00000000
  .word 0x24030001
  .word 0x14c30ba4
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a56690
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020004
  .word 0xafa26690
  .word 0xa7a066a8
  .word 0xafa266ac
  .word 0xa7a066c4
  .word 0xafa266c8
  .word 0xa7a066e0
  .word 0xafa266e4
  .word 0xa7a066fc
  .word 0xafa26700
  .word 0xa7a06718
  .word 0xafa2671c
  .word 0xa7a06734
  .word 0xafa26738
  .word 0xa7a06750
  .word 0xafa26754
  .word 0xa7a0676c
  .word 0xafa26770
  .word 0xa7a06788
  .word 0xafa2678c
  .word 0xa7a067a4
  .word 0xafa267a8
  .word 0xa7a067c0
  .word 0xafa267c4
  .word 0xa7a067dc
  .word 0xafa267e0
  .word 0xa7a067f8
  .word 0xafa267fc
  .word 0xa7a06814
  .word 0xafa26818
  .word 0xa7a06830
  .word 0xafa26834
  .word 0xa7a0684c
  .word 0xafa26850
  .word 0xa7a06868
  .word 0xafa2686c
  .word 0xa7a06884
  .word 0xafa26888
  .word 0xa7a068a0
  .word 0xafa268a4
  .word 0xa7a068bc
  .word 0xafa268c0
  .word 0xa7a068d8
  .word 0xafa268dc
  .word 0xa7a068f4
  .word 0xafa268f8
  .word 0xa7a06910
  .word 0xafa26914
  .word 0xa7a0692c
  .word 0xafa26930
  .word 0xa7a06948
  .word 0xafa2694c
  .word 0xa7a06964
  .word 0xafa26968
  .word 0xa7a06980
  .word 0xafa26984
  .word 0xa7a0699c
  .word 0xafa269a0
  .word 0xa7a069b8
  .word 0xafa269bc
  .word 0xa7a069d4
  .word 0xafa269d8
  .word 0xa7a069f0
  .word 0xafa269f4
  .word 0xa7a06a0c
  .word 0xafa26a10
  .word 0xa7a06a28
  .word 0xafa26a2c
  .word 0xa7a06a44
  .word 0xafa26a48
  .word 0xa7a06a60
  .word 0xafa26a64
  .word 0xa7a06a7c
  .word 0x34019910
  .word 0x03a12021
  .word 0x27a5678c
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269914
  .word 0x0200202d
  .word 0x24050004
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019910
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000b39
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a562a0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020005
  .word 0xafa262a0
  .word 0xa7a062b8
  .word 0xafa262bc
  .word 0xa7a062d4
  .word 0xafa262d8
  .word 0xa7a062f0
  .word 0xafa262f4
  .word 0xa7a0630c
  .word 0xafa26310
  .word 0xa7a06328
  .word 0xafa2632c
  .word 0xa7a06344
  .word 0xafa26348
  .word 0xa7a06360
  .word 0xafa26364
  .word 0xa7a0637c
  .word 0xafa26380
  .word 0xa7a06398
  .word 0xafa2639c
  .word 0xa7a063b4
  .word 0xafa263b8
  .word 0xa7a063d0
  .word 0xafa263d4
  .word 0xa7a063ec
  .word 0xafa263f0
  .word 0xa7a06408
  .word 0xafa2640c
  .word 0xa7a06424
  .word 0xafa26428
  .word 0xa7a06440
  .word 0xafa26444
  .word 0xa7a0645c
  .word 0xafa26460
  .word 0xa7a06478
  .word 0xafa2647c
  .word 0xa7a06494
  .word 0xafa26498
  .word 0xa7a064b0
  .word 0xafa264b4
  .word 0xa7a064cc
  .word 0xafa264d0
  .word 0xa7a064e8
  .word 0xafa264ec
  .word 0xa7a06504
  .word 0xafa26508
  .word 0xa7a06520
  .word 0xafa26524
  .word 0xa7a0653c
  .word 0xafa26540
  .word 0xa7a06558
  .word 0xafa2655c
  .word 0xa7a06574
  .word 0xafa26578
  .word 0xa7a06590
  .word 0xafa26594
  .word 0xa7a065ac
  .word 0xafa265b0
  .word 0xa7a065c8
  .word 0xafa265cc
  .word 0xa7a065e4
  .word 0xafa265e8
  .word 0xa7a06600
  .word 0xafa26604
  .word 0xa7a0661c
  .word 0xafa26620
  .word 0xa7a06638
  .word 0xafa2663c
  .word 0xa7a06654
  .word 0xafa26658
  .word 0xa7a06670
  .word 0xafa26674
  .word 0xa7a0668c
  .word 0x340198f0
  .word 0x03a12021
  .word 0x27a563b8
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2698f4
  .word 0x0200202d
  .word 0x24050005
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340198f0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000acc
  .word 0x00000000
  .word 0x24030001
  .word 0x14c30ac9
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a55eb0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020005
  .word 0xafa25eb0
  .word 0xa7a05ec8
  .word 0xafa25ecc
  .word 0xa7a05ee4
  .word 0xafa25ee8
  .word 0xa7a05f00
  .word 0xafa25f04
  .word 0xa7a05f1c
  .word 0xafa25f20
  .word 0xa7a05f38
  .word 0xafa25f3c
  .word 0xa7a05f54
  .word 0xafa25f58
  .word 0xa7a05f70
  .word 0xafa25f74
  .word 0xa7a05f8c
  .word 0xafa25f90
  .word 0xa7a05fa8
  .word 0xafa25fac
  .word 0xa7a05fc4
  .word 0xafa25fc8
  .word 0xa7a05fe0
  .word 0xafa25fe4
  .word 0xa7a05ffc
  .word 0xafa26000
  .word 0xa7a06018
  .word 0xafa2601c
  .word 0xa7a06034
  .word 0xafa26038
  .word 0xa7a06050
  .word 0xafa26054
  .word 0xa7a0606c
  .word 0xafa26070
  .word 0xa7a06088
  .word 0xafa2608c
  .word 0xa7a060a4
  .word 0xafa260a8
  .word 0xa7a060c0
  .word 0xafa260c4
  .word 0xa7a060dc
  .word 0xafa260e0
  .word 0xa7a060f8
  .word 0xafa260fc
  .word 0xa7a06114
  .word 0xafa26118
  .word 0xa7a06130
  .word 0xafa26134
  .word 0xa7a0614c
  .word 0xafa26150
  .word 0xa7a06168
  .word 0xafa2616c
  .word 0xa7a06184
  .word 0xafa26188
  .word 0xa7a061a0
  .word 0xafa261a4
  .word 0xa7a061bc
  .word 0xafa261c0
  .word 0xa7a061d8
  .word 0xafa261dc
  .word 0xa7a061f4
  .word 0xafa261f8
  .word 0xa7a06210
  .word 0xafa26214
  .word 0xa7a0622c
  .word 0xafa26230
  .word 0xa7a06248
  .word 0xafa2624c
  .word 0xa7a06264
  .word 0xafa26268
  .word 0xa7a06280
  .word 0xafa26284
  .word 0xa7a0629c
  .word 0x340198d0
  .word 0x03a12021
  .word 0x27a55fe4
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2698d4
  .word 0x0200202d
  .word 0x24050005
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340198d0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000a5e
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a55ac0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020006
  .word 0xafa25ac0
  .word 0xa7a05ad8
  .word 0xafa25adc
  .word 0xa7a05af4
  .word 0xafa25af8
  .word 0xa7a05b10
  .word 0xafa25b14
  .word 0xa7a05b2c
  .word 0xafa25b30
  .word 0xa7a05b48
  .word 0xafa25b4c
  .word 0xa7a05b64
  .word 0xafa25b68
  .word 0xa7a05b80
  .word 0xafa25b84
  .word 0xa7a05b9c
  .word 0xafa25ba0
  .word 0xa7a05bb8
  .word 0xafa25bbc
  .word 0xa7a05bd4
  .word 0xafa25bd8
  .word 0xa7a05bf0
  .word 0xafa25bf4
  .word 0xa7a05c0c
  .word 0xafa25c10
  .word 0xa7a05c28
  .word 0xafa25c2c
  .word 0xa7a05c44
  .word 0xafa25c48
  .word 0xa7a05c60
  .word 0xafa25c64
  .word 0xa7a05c7c
  .word 0xafa25c80
  .word 0xa7a05c98
  .word 0xafa25c9c
  .word 0xa7a05cb4
  .word 0xafa25cb8
  .word 0xa7a05cd0
  .word 0xafa25cd4
  .word 0xa7a05cec
  .word 0xafa25cf0
  .word 0xa7a05d08
  .word 0xafa25d0c
  .word 0xa7a05d24
  .word 0xafa25d28
  .word 0xa7a05d40
  .word 0xafa25d44
  .word 0xa7a05d5c
  .word 0xafa25d60
  .word 0xa7a05d78
  .word 0xafa25d7c
  .word 0xa7a05d94
  .word 0xafa25d98
  .word 0xa7a05db0
  .word 0xafa25db4
  .word 0xa7a05dcc
  .word 0xafa25dd0
  .word 0xa7a05de8
  .word 0xafa25dec
  .word 0xa7a05e04
  .word 0xafa25e08
  .word 0xa7a05e20
  .word 0xafa25e24
  .word 0xa7a05e3c
  .word 0xafa25e40
  .word 0xa7a05e58
  .word 0xafa25e5c
  .word 0xa7a05e74
  .word 0xafa25e78
  .word 0xa7a05e90
  .word 0xafa25e94
  .word 0xa7a05eac
  .word 0x340198b0
  .word 0x03a12021
  .word 0x27a55c10
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2698b4
  .word 0x0200202d
  .word 0x24050006
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340198b0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100009f1
  .word 0x00000000
  .word 0x24030001
  .word 0x14c309ee
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a556d0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020006
  .word 0xafa256d0
  .word 0xa7a056e8
  .word 0xafa256ec
  .word 0xa7a05704
  .word 0xafa25708
  .word 0xa7a05720
  .word 0xafa25724
  .word 0xa7a0573c
  .word 0xafa25740
  .word 0xa7a05758
  .word 0xafa2575c
  .word 0xa7a05774
  .word 0xafa25778
  .word 0xa7a05790
  .word 0xafa25794
  .word 0xa7a057ac
  .word 0xafa257b0
  .word 0xa7a057c8
  .word 0xafa257cc
  .word 0xa7a057e4
  .word 0xafa257e8
  .word 0xa7a05800
  .word 0xafa25804
  .word 0xa7a0581c
  .word 0xafa25820
  .word 0xa7a05838
  .word 0xafa2583c
  .word 0xa7a05854
  .word 0xafa25858
  .word 0xa7a05870
  .word 0xafa25874
  .word 0xa7a0588c
  .word 0xafa25890
  .word 0xa7a058a8
  .word 0xafa258ac
  .word 0xa7a058c4
  .word 0xafa258c8
  .word 0xa7a058e0
  .word 0xafa258e4
  .word 0xa7a058fc
  .word 0xafa25900
  .word 0xa7a05918
  .word 0xafa2591c
  .word 0xa7a05934
  .word 0xafa25938
  .word 0xa7a05950
  .word 0xafa25954
  .word 0xa7a0596c
  .word 0xafa25970
  .word 0xa7a05988
  .word 0xafa2598c
  .word 0xa7a059a4
  .word 0xafa259a8
  .word 0xa7a059c0
  .word 0xafa259c4
  .word 0xa7a059dc
  .word 0xafa259e0
  .word 0xa7a059f8
  .word 0xafa259fc
  .word 0xa7a05a14
  .word 0xafa25a18
  .word 0xa7a05a30
  .word 0xafa25a34
  .word 0xa7a05a4c
  .word 0xafa25a50
  .word 0xa7a05a68
  .word 0xafa25a6c
  .word 0xa7a05a84
  .word 0xafa25a88
  .word 0xa7a05aa0
  .word 0xafa25aa4
  .word 0xa7a05abc
  .word 0x34019890
  .word 0x03a12021
  .word 0x27a5583c
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269894
  .word 0x0200202d
  .word 0x24050006
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019890
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000983
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a552e0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020007
  .word 0xafa252e0
  .word 0xa7a052f8
  .word 0xafa252fc
  .word 0xa7a05314
  .word 0xafa25318
  .word 0xa7a05330
  .word 0xafa25334
  .word 0xa7a0534c
  .word 0xafa25350
  .word 0xa7a05368
  .word 0xafa2536c
  .word 0xa7a05384
  .word 0xafa25388
  .word 0xa7a053a0
  .word 0xafa253a4
  .word 0xa7a053bc
  .word 0xafa253c0
  .word 0xa7a053d8
  .word 0xafa253dc
  .word 0xa7a053f4
  .word 0xafa253f8
  .word 0xa7a05410
  .word 0xafa25414
  .word 0xa7a0542c
  .word 0xafa25430
  .word 0xa7a05448
  .word 0xafa2544c
  .word 0xa7a05464
  .word 0xafa25468
  .word 0xa7a05480
  .word 0xafa25484
  .word 0xa7a0549c
  .word 0xafa254a0
  .word 0xa7a054b8
  .word 0xafa254bc
  .word 0xa7a054d4
  .word 0xafa254d8
  .word 0xa7a054f0
  .word 0xafa254f4
  .word 0xa7a0550c
  .word 0xafa25510
  .word 0xa7a05528
  .word 0xafa2552c
  .word 0xa7a05544
  .word 0xafa25548
  .word 0xa7a05560
  .word 0xafa25564
  .word 0xa7a0557c
  .word 0xafa25580
  .word 0xa7a05598
  .word 0xafa2559c
  .word 0xa7a055b4
  .word 0xafa255b8
  .word 0xa7a055d0
  .word 0xafa255d4
  .word 0xa7a055ec
  .word 0xafa255f0
  .word 0xa7a05608
  .word 0xafa2560c
  .word 0xa7a05624
  .word 0xafa25628
  .word 0xa7a05640
  .word 0xafa25644
  .word 0xa7a0565c
  .word 0xafa25660
  .word 0xa7a05678
  .word 0xafa2567c
  .word 0xa7a05694
  .word 0xafa25698
  .word 0xa7a056b0
  .word 0xafa256b4
  .word 0xa7a056cc
  .word 0x34019870
  .word 0x03a12021
  .word 0x27a55468
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269874
  .word 0x0200202d
  .word 0x24050007
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019870
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000916
  .word 0x00000000
  .word 0x24030001
  .word 0x14c30913
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a54ef0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020007
  .word 0xafa24ef0
  .word 0xa7a04f08
  .word 0xafa24f0c
  .word 0xa7a04f24
  .word 0xafa24f28
  .word 0xa7a04f40
  .word 0xafa24f44
  .word 0xa7a04f5c
  .word 0xafa24f60
  .word 0xa7a04f78
  .word 0xafa24f7c
  .word 0xa7a04f94
  .word 0xafa24f98
  .word 0xa7a04fb0
  .word 0xafa24fb4
  .word 0xa7a04fcc
  .word 0xafa24fd0
  .word 0xa7a04fe8
  .word 0xafa24fec
  .word 0xa7a05004
  .word 0xafa25008
  .word 0xa7a05020
  .word 0xafa25024
  .word 0xa7a0503c
  .word 0xafa25040
  .word 0xa7a05058
  .word 0xafa2505c
  .word 0xa7a05074
  .word 0xafa25078
  .word 0xa7a05090
  .word 0xafa25094
  .word 0xa7a050ac
  .word 0xafa250b0
  .word 0xa7a050c8
  .word 0xafa250cc
  .word 0xa7a050e4
  .word 0xafa250e8
  .word 0xa7a05100
  .word 0xafa25104
  .word 0xa7a0511c
  .word 0xafa25120
  .word 0xa7a05138
  .word 0xafa2513c
  .word 0xa7a05154
  .word 0xafa25158
  .word 0xa7a05170
  .word 0xafa25174
  .word 0xa7a0518c
  .word 0xafa25190
  .word 0xa7a051a8
  .word 0xafa251ac
  .word 0xa7a051c4
  .word 0xafa251c8
  .word 0xa7a051e0
  .word 0xafa251e4
  .word 0xa7a051fc
  .word 0xafa25200
  .word 0xa7a05218
  .word 0xafa2521c
  .word 0xa7a05234
  .word 0xafa25238
  .word 0xa7a05250
  .word 0xafa25254
  .word 0xa7a0526c
  .word 0xafa25270
  .word 0xa7a05288
  .word 0xafa2528c
  .word 0xa7a052a4
  .word 0xafa252a8
  .word 0xa7a052c0
  .word 0xafa252c4
  .word 0xa7a052dc
  .word 0x34019850
  .word 0x03a12021
  .word 0x27a55094
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269854
  .word 0x0200202d
  .word 0x24050007
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019850
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100008a8
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a54b00
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020008
  .word 0xafa24b00
  .word 0xa7a04b18
  .word 0xafa24b1c
  .word 0xa7a04b34
  .word 0xafa24b38
  .word 0xa7a04b50
  .word 0xafa24b54
  .word 0xa7a04b6c
  .word 0xafa24b70
  .word 0xa7a04b88
  .word 0xafa24b8c
  .word 0xa7a04ba4
  .word 0xafa24ba8
  .word 0xa7a04bc0
  .word 0xafa24bc4
  .word 0xa7a04bdc
  .word 0xafa24be0
  .word 0xa7a04bf8
  .word 0xafa24bfc
  .word 0xa7a04c14
  .word 0xafa24c18
  .word 0xa7a04c30
  .word 0xafa24c34
  .word 0xa7a04c4c
  .word 0xafa24c50
  .word 0xa7a04c68
  .word 0xafa24c6c
  .word 0xa7a04c84
  .word 0xafa24c88
  .word 0xa7a04ca0
  .word 0xafa24ca4
  .word 0xa7a04cbc
  .word 0xafa24cc0
  .word 0xa7a04cd8
  .word 0xafa24cdc
  .word 0xa7a04cf4
  .word 0xafa24cf8
  .word 0xa7a04d10
  .word 0xafa24d14
  .word 0xa7a04d2c
  .word 0xafa24d30
  .word 0xa7a04d48
  .word 0xafa24d4c
  .word 0xa7a04d64
  .word 0xafa24d68
  .word 0xa7a04d80
  .word 0xafa24d84
  .word 0xa7a04d9c
  .word 0xafa24da0
  .word 0xa7a04db8
  .word 0xafa24dbc
  .word 0xa7a04dd4
  .word 0xafa24dd8
  .word 0xa7a04df0
  .word 0xafa24df4
  .word 0xa7a04e0c
  .word 0xafa24e10
  .word 0xa7a04e28
  .word 0xafa24e2c
  .word 0xa7a04e44
  .word 0xafa24e48
  .word 0xa7a04e60
  .word 0xafa24e64
  .word 0xa7a04e7c
  .word 0xafa24e80
  .word 0xa7a04e98
  .word 0xafa24e9c
  .word 0xa7a04eb4
  .word 0xafa24eb8
  .word 0xa7a04ed0
  .word 0xafa24ed4
  .word 0xa7a04eec
  .word 0x34019830
  .word 0x03a12021
  .word 0x27a54cc0
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269834
  .word 0x0200202d
  .word 0x24050008
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019830
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x1000083b
  .word 0x00000000
  .word 0x24030001
  .word 0x14c30838
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a54710
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020008
  .word 0xafa24710
  .word 0xa7a04728
  .word 0xafa2472c
  .word 0xa7a04744
  .word 0xafa24748
  .word 0xa7a04760
  .word 0xafa24764
  .word 0xa7a0477c
  .word 0xafa24780
  .word 0xa7a04798
  .word 0xafa2479c
  .word 0xa7a047b4
  .word 0xafa247b8
  .word 0xa7a047d0
  .word 0xafa247d4
  .word 0xa7a047ec
  .word 0xafa247f0
  .word 0xa7a04808
  .word 0xafa2480c
  .word 0xa7a04824
  .word 0xafa24828
  .word 0xa7a04840
  .word 0xafa24844
  .word 0xa7a0485c
  .word 0xafa24860
  .word 0xa7a04878
  .word 0xafa2487c
  .word 0xa7a04894
  .word 0xafa24898
  .word 0xa7a048b0
  .word 0xafa248b4
  .word 0xa7a048cc
  .word 0xafa248d0
  .word 0xa7a048e8
  .word 0xafa248ec
  .word 0xa7a04904
  .word 0xafa24908
  .word 0xa7a04920
  .word 0xafa24924
  .word 0xa7a0493c
  .word 0xafa24940
  .word 0xa7a04958
  .word 0xafa2495c
  .word 0xa7a04974
  .word 0xafa24978
  .word 0xa7a04990
  .word 0xafa24994
  .word 0xa7a049ac
  .word 0xafa249b0
  .word 0xa7a049c8
  .word 0xafa249cc
  .word 0xa7a049e4
  .word 0xafa249e8
  .word 0xa7a04a00
  .word 0xafa24a04
  .word 0xa7a04a1c
  .word 0xafa24a20
  .word 0xa7a04a38
  .word 0xafa24a3c
  .word 0xa7a04a54
  .word 0xafa24a58
  .word 0xa7a04a70
  .word 0xafa24a74
  .word 0xa7a04a8c
  .word 0xafa24a90
  .word 0xa7a04aa8
  .word 0xafa24aac
  .word 0xa7a04ac4
  .word 0xafa24ac8
  .word 0xa7a04ae0
  .word 0xafa24ae4
  .word 0xa7a04afc
  .word 0x34019810
  .word 0x03a12021
  .word 0x27a548ec
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269814
  .word 0x0200202d
  .word 0x24050008
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019810
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100007cd
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a54320
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020009
  .word 0xafa24320
  .word 0xa7a04338
  .word 0xafa2433c
  .word 0xa7a04354
  .word 0xafa24358
  .word 0xa7a04370
  .word 0xafa24374
  .word 0xa7a0438c
  .word 0xafa24390
  .word 0xa7a043a8
  .word 0xafa243ac
  .word 0xa7a043c4
  .word 0xafa243c8
  .word 0xa7a043e0
  .word 0xafa243e4
  .word 0xa7a043fc
  .word 0xafa24400
  .word 0xa7a04418
  .word 0xafa2441c
  .word 0xa7a04434
  .word 0xafa24438
  .word 0xa7a04450
  .word 0xafa24454
  .word 0xa7a0446c
  .word 0xafa24470
  .word 0xa7a04488
  .word 0xafa2448c
  .word 0xa7a044a4
  .word 0xafa244a8
  .word 0xa7a044c0
  .word 0xafa244c4
  .word 0xa7a044dc
  .word 0xafa244e0
  .word 0xa7a044f8
  .word 0xafa244fc
  .word 0xa7a04514
  .word 0xafa24518
  .word 0xa7a04530
  .word 0xafa24534
  .word 0xa7a0454c
  .word 0xafa24550
  .word 0xa7a04568
  .word 0xafa2456c
  .word 0xa7a04584
  .word 0xafa24588
  .word 0xa7a045a0
  .word 0xafa245a4
  .word 0xa7a045bc
  .word 0xafa245c0
  .word 0xa7a045d8
  .word 0xafa245dc
  .word 0xa7a045f4
  .word 0xafa245f8
  .word 0xa7a04610
  .word 0xafa24614
  .word 0xa7a0462c
  .word 0xafa24630
  .word 0xa7a04648
  .word 0xafa2464c
  .word 0xa7a04664
  .word 0xafa24668
  .word 0xa7a04680
  .word 0xafa24684
  .word 0xa7a0469c
  .word 0xafa246a0
  .word 0xa7a046b8
  .word 0xafa246bc
  .word 0xa7a046d4
  .word 0xafa246d8
  .word 0xa7a046f0
  .word 0xafa246f4
  .word 0xa7a0470c
  .word 0x340197f0
  .word 0x03a12021
  .word 0x27a54518
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2697f4
  .word 0x0200202d
  .word 0x24050009
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340197f0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000760
  .word 0x00000000
  .word 0x24030001
  .word 0x14c3075d
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a53f30
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020009
  .word 0xafa23f30
  .word 0xa7a03f48
  .word 0xafa23f4c
  .word 0xa7a03f64
  .word 0xafa23f68
  .word 0xa7a03f80
  .word 0xafa23f84
  .word 0xa7a03f9c
  .word 0xafa23fa0
  .word 0xa7a03fb8
  .word 0xafa23fbc
  .word 0xa7a03fd4
  .word 0xafa23fd8
  .word 0xa7a03ff0
  .word 0xafa23ff4
  .word 0xa7a0400c
  .word 0xafa24010
  .word 0xa7a04028
  .word 0xafa2402c
  .word 0xa7a04044
  .word 0xafa24048
  .word 0xa7a04060
  .word 0xafa24064
  .word 0xa7a0407c
  .word 0xafa24080
  .word 0xa7a04098
  .word 0xafa2409c
  .word 0xa7a040b4
  .word 0xafa240b8
  .word 0xa7a040d0
  .word 0xafa240d4
  .word 0xa7a040ec
  .word 0xafa240f0
  .word 0xa7a04108
  .word 0xafa2410c
  .word 0xa7a04124
  .word 0xafa24128
  .word 0xa7a04140
  .word 0xafa24144
  .word 0xa7a0415c
  .word 0xafa24160
  .word 0xa7a04178
  .word 0xafa2417c
  .word 0xa7a04194
  .word 0xafa24198
  .word 0xa7a041b0
  .word 0xafa241b4
  .word 0xa7a041cc
  .word 0xafa241d0
  .word 0xa7a041e8
  .word 0xafa241ec
  .word 0xa7a04204
  .word 0xafa24208
  .word 0xa7a04220
  .word 0xafa24224
  .word 0xa7a0423c
  .word 0xafa24240
  .word 0xa7a04258
  .word 0xafa2425c
  .word 0xa7a04274
  .word 0xafa24278
  .word 0xa7a04290
  .word 0xafa24294
  .word 0xa7a042ac
  .word 0xafa242b0
  .word 0xa7a042c8
  .word 0xafa242cc
  .word 0xa7a042e4
  .word 0xafa242e8
  .word 0xa7a04300
  .word 0xafa24304
  .word 0xa7a0431c
  .word 0x340197d0
  .word 0x03a12021
  .word 0x27a54144
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2697d4
  .word 0x0200202d
  .word 0x24050009
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340197d0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100006f2
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a53b40
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000a
  .word 0xafa23b40
  .word 0xa7a03b58
  .word 0xafa23b5c
  .word 0xa7a03b74
  .word 0xafa23b78
  .word 0xa7a03b90
  .word 0xafa23b94
  .word 0xa7a03bac
  .word 0xafa23bb0
  .word 0xa7a03bc8
  .word 0xafa23bcc
  .word 0xa7a03be4
  .word 0xafa23be8
  .word 0xa7a03c00
  .word 0xafa23c04
  .word 0xa7a03c1c
  .word 0xafa23c20
  .word 0xa7a03c38
  .word 0xafa23c3c
  .word 0xa7a03c54
  .word 0xafa23c58
  .word 0xa7a03c70
  .word 0xafa23c74
  .word 0xa7a03c8c
  .word 0xafa23c90
  .word 0xa7a03ca8
  .word 0xafa23cac
  .word 0xa7a03cc4
  .word 0xafa23cc8
  .word 0xa7a03ce0
  .word 0xafa23ce4
  .word 0xa7a03cfc
  .word 0xafa23d00
  .word 0xa7a03d18
  .word 0xafa23d1c
  .word 0xa7a03d34
  .word 0xafa23d38
  .word 0xa7a03d50
  .word 0xafa23d54
  .word 0xa7a03d6c
  .word 0xafa23d70
  .word 0xa7a03d88
  .word 0xafa23d8c
  .word 0xa7a03da4
  .word 0xafa23da8
  .word 0xa7a03dc0
  .word 0xafa23dc4
  .word 0xa7a03ddc
  .word 0xafa23de0
  .word 0xa7a03df8
  .word 0xafa23dfc
  .word 0xa7a03e14
  .word 0xafa23e18
  .word 0xa7a03e30
  .word 0xafa23e34
  .word 0xa7a03e4c
  .word 0xafa23e50
  .word 0xa7a03e68
  .word 0xafa23e6c
  .word 0xa7a03e84
  .word 0xafa23e88
  .word 0xa7a03ea0
  .word 0xafa23ea4
  .word 0xa7a03ebc
  .word 0xafa23ec0
  .word 0xa7a03ed8
  .word 0xafa23edc
  .word 0xa7a03ef4
  .word 0xafa23ef8
  .word 0xa7a03f10
  .word 0xafa23f14
  .word 0xa7a03f2c
  .word 0x340197b0
  .word 0x03a12021
  .word 0x27a53d70
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2697b4
  .word 0x0200202d
  .word 0x2405000a
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340197b0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000685
  .word 0x00000000
  .word 0x24030001
  .word 0x14c30682
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a53750
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000a
  .word 0xafa23750
  .word 0xa7a03768
  .word 0xafa2376c
  .word 0xa7a03784
  .word 0xafa23788
  .word 0xa7a037a0
  .word 0xafa237a4
  .word 0xa7a037bc
  .word 0xafa237c0
  .word 0xa7a037d8
  .word 0xafa237dc
  .word 0xa7a037f4
  .word 0xafa237f8
  .word 0xa7a03810
  .word 0xafa23814
  .word 0xa7a0382c
  .word 0xafa23830
  .word 0xa7a03848
  .word 0xafa2384c
  .word 0xa7a03864
  .word 0xafa23868
  .word 0xa7a03880
  .word 0xafa23884
  .word 0xa7a0389c
  .word 0xafa238a0
  .word 0xa7a038b8
  .word 0xafa238bc
  .word 0xa7a038d4
  .word 0xafa238d8
  .word 0xa7a038f0
  .word 0xafa238f4
  .word 0xa7a0390c
  .word 0xafa23910
  .word 0xa7a03928
  .word 0xafa2392c
  .word 0xa7a03944
  .word 0xafa23948
  .word 0xa7a03960
  .word 0xafa23964
  .word 0xa7a0397c
  .word 0xafa23980
  .word 0xa7a03998
  .word 0xafa2399c
  .word 0xa7a039b4
  .word 0xafa239b8
  .word 0xa7a039d0
  .word 0xafa239d4
  .word 0xa7a039ec
  .word 0xafa239f0
  .word 0xa7a03a08
  .word 0xafa23a0c
  .word 0xa7a03a24
  .word 0xafa23a28
  .word 0xa7a03a40
  .word 0xafa23a44
  .word 0xa7a03a5c
  .word 0xafa23a60
  .word 0xa7a03a78
  .word 0xafa23a7c
  .word 0xa7a03a94
  .word 0xafa23a98
  .word 0xa7a03ab0
  .word 0xafa23ab4
  .word 0xa7a03acc
  .word 0xafa23ad0
  .word 0xa7a03ae8
  .word 0xafa23aec
  .word 0xa7a03b04
  .word 0xafa23b08
  .word 0xa7a03b20
  .word 0xafa23b24
  .word 0xa7a03b3c
  .word 0x34019790
  .word 0x03a12021
  .word 0x27a5399c
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269794
  .word 0x0200202d
  .word 0x2405000a
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019790
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000617
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a53360
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000b
  .word 0xafa23360
  .word 0xa7a03378
  .word 0xafa2337c
  .word 0xa7a03394
  .word 0xafa23398
  .word 0xa7a033b0
  .word 0xafa233b4
  .word 0xa7a033cc
  .word 0xafa233d0
  .word 0xa7a033e8
  .word 0xafa233ec
  .word 0xa7a03404
  .word 0xafa23408
  .word 0xa7a03420
  .word 0xafa23424
  .word 0xa7a0343c
  .word 0xafa23440
  .word 0xa7a03458
  .word 0xafa2345c
  .word 0xa7a03474
  .word 0xafa23478
  .word 0xa7a03490
  .word 0xafa23494
  .word 0xa7a034ac
  .word 0xafa234b0
  .word 0xa7a034c8
  .word 0xafa234cc
  .word 0xa7a034e4
  .word 0xafa234e8
  .word 0xa7a03500
  .word 0xafa23504
  .word 0xa7a0351c
  .word 0xafa23520
  .word 0xa7a03538
  .word 0xafa2353c
  .word 0xa7a03554
  .word 0xafa23558
  .word 0xa7a03570
  .word 0xafa23574
  .word 0xa7a0358c
  .word 0xafa23590
  .word 0xa7a035a8
  .word 0xafa235ac
  .word 0xa7a035c4
  .word 0xafa235c8
  .word 0xa7a035e0
  .word 0xafa235e4
  .word 0xa7a035fc
  .word 0xafa23600
  .word 0xa7a03618
  .word 0xafa2361c
  .word 0xa7a03634
  .word 0xafa23638
  .word 0xa7a03650
  .word 0xafa23654
  .word 0xa7a0366c
  .word 0xafa23670
  .word 0xa7a03688
  .word 0xafa2368c
  .word 0xa7a036a4
  .word 0xafa236a8
  .word 0xa7a036c0
  .word 0xafa236c4
  .word 0xa7a036dc
  .word 0xafa236e0
  .word 0xa7a036f8
  .word 0xafa236fc
  .word 0xa7a03714
  .word 0xafa23718
  .word 0xa7a03730
  .word 0xafa23734
  .word 0xa7a0374c
  .word 0x34019770
  .word 0x03a12021
  .word 0x27a535c8
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269774
  .word 0x0200202d
  .word 0x2405000b
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019770
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100005aa
  .word 0x00000000
  .word 0x24030001
  .word 0x14c305a7
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a52f70
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000b
  .word 0xafa22f70
  .word 0xa7a02f88
  .word 0xafa22f8c
  .word 0xa7a02fa4
  .word 0xafa22fa8
  .word 0xa7a02fc0
  .word 0xafa22fc4
  .word 0xa7a02fdc
  .word 0xafa22fe0
  .word 0xa7a02ff8
  .word 0xafa22ffc
  .word 0xa7a03014
  .word 0xafa23018
  .word 0xa7a03030
  .word 0xafa23034
  .word 0xa7a0304c
  .word 0xafa23050
  .word 0xa7a03068
  .word 0xafa2306c
  .word 0xa7a03084
  .word 0xafa23088
  .word 0xa7a030a0
  .word 0xafa230a4
  .word 0xa7a030bc
  .word 0xafa230c0
  .word 0xa7a030d8
  .word 0xafa230dc
  .word 0xa7a030f4
  .word 0xafa230f8
  .word 0xa7a03110
  .word 0xafa23114
  .word 0xa7a0312c
  .word 0xafa23130
  .word 0xa7a03148
  .word 0xafa2314c
  .word 0xa7a03164
  .word 0xafa23168
  .word 0xa7a03180
  .word 0xafa23184
  .word 0xa7a0319c
  .word 0xafa231a0
  .word 0xa7a031b8
  .word 0xafa231bc
  .word 0xa7a031d4
  .word 0xafa231d8
  .word 0xa7a031f0
  .word 0xafa231f4
  .word 0xa7a0320c
  .word 0xafa23210
  .word 0xa7a03228
  .word 0xafa2322c
  .word 0xa7a03244
  .word 0xafa23248
  .word 0xa7a03260
  .word 0xafa23264
  .word 0xa7a0327c
  .word 0xafa23280
  .word 0xa7a03298
  .word 0xafa2329c
  .word 0xa7a032b4
  .word 0xafa232b8
  .word 0xa7a032d0
  .word 0xafa232d4
  .word 0xa7a032ec
  .word 0xafa232f0
  .word 0xa7a03308
  .word 0xafa2330c
  .word 0xa7a03324
  .word 0xafa23328
  .word 0xa7a03340
  .word 0xafa23344
  .word 0xa7a0335c
  .word 0x34019750
  .word 0x03a12021
  .word 0x27a531f4
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269754
  .word 0x0200202d
  .word 0x2405000b
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019750
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x1000053c
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a52b80
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000c
  .word 0xafa22b80
  .word 0xa7a02b98
  .word 0xafa22b9c
  .word 0xa7a02bb4
  .word 0xafa22bb8
  .word 0xa7a02bd0
  .word 0xafa22bd4
  .word 0xa7a02bec
  .word 0xafa22bf0
  .word 0xa7a02c08
  .word 0xafa22c0c
  .word 0xa7a02c24
  .word 0xafa22c28
  .word 0xa7a02c40
  .word 0xafa22c44
  .word 0xa7a02c5c
  .word 0xafa22c60
  .word 0xa7a02c78
  .word 0xafa22c7c
  .word 0xa7a02c94
  .word 0xafa22c98
  .word 0xa7a02cb0
  .word 0xafa22cb4
  .word 0xa7a02ccc
  .word 0xafa22cd0
  .word 0xa7a02ce8
  .word 0xafa22cec
  .word 0xa7a02d04
  .word 0xafa22d08
  .word 0xa7a02d20
  .word 0xafa22d24
  .word 0xa7a02d3c
  .word 0xafa22d40
  .word 0xa7a02d58
  .word 0xafa22d5c
  .word 0xa7a02d74
  .word 0xafa22d78
  .word 0xa7a02d90
  .word 0xafa22d94
  .word 0xa7a02dac
  .word 0xafa22db0
  .word 0xa7a02dc8
  .word 0xafa22dcc
  .word 0xa7a02de4
  .word 0xafa22de8
  .word 0xa7a02e00
  .word 0xafa22e04
  .word 0xa7a02e1c
  .word 0xafa22e20
  .word 0xa7a02e38
  .word 0xafa22e3c
  .word 0xa7a02e54
  .word 0xafa22e58
  .word 0xa7a02e70
  .word 0xafa22e74
  .word 0xa7a02e8c
  .word 0xafa22e90
  .word 0xa7a02ea8
  .word 0xafa22eac
  .word 0xa7a02ec4
  .word 0xafa22ec8
  .word 0xa7a02ee0
  .word 0xafa22ee4
  .word 0xa7a02efc
  .word 0xafa22f00
  .word 0xa7a02f18
  .word 0xafa22f1c
  .word 0xa7a02f34
  .word 0xafa22f38
  .word 0xa7a02f50
  .word 0xafa22f54
  .word 0xa7a02f6c
  .word 0x34019730
  .word 0x03a12021
  .word 0x27a52e20
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269734
  .word 0x0200202d
  .word 0x2405000c
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019730
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100004cf
  .word 0x00000000
  .word 0x24030001
  .word 0x14c304cc
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a52790
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000c
  .word 0xafa22790
  .word 0xa7a027a8
  .word 0xafa227ac
  .word 0xa7a027c4
  .word 0xafa227c8
  .word 0xa7a027e0
  .word 0xafa227e4
  .word 0xa7a027fc
  .word 0xafa22800
  .word 0xa7a02818
  .word 0xafa2281c
  .word 0xa7a02834
  .word 0xafa22838
  .word 0xa7a02850
  .word 0xafa22854
  .word 0xa7a0286c
  .word 0xafa22870
  .word 0xa7a02888
  .word 0xafa2288c
  .word 0xa7a028a4
  .word 0xafa228a8
  .word 0xa7a028c0
  .word 0xafa228c4
  .word 0xa7a028dc
  .word 0xafa228e0
  .word 0xa7a028f8
  .word 0xafa228fc
  .word 0xa7a02914
  .word 0xafa22918
  .word 0xa7a02930
  .word 0xafa22934
  .word 0xa7a0294c
  .word 0xafa22950
  .word 0xa7a02968
  .word 0xafa2296c
  .word 0xa7a02984
  .word 0xafa22988
  .word 0xa7a029a0
  .word 0xafa229a4
  .word 0xa7a029bc
  .word 0xafa229c0
  .word 0xa7a029d8
  .word 0xafa229dc
  .word 0xa7a029f4
  .word 0xafa229f8
  .word 0xa7a02a10
  .word 0xafa22a14
  .word 0xa7a02a2c
  .word 0xafa22a30
  .word 0xa7a02a48
  .word 0xafa22a4c
  .word 0xa7a02a64
  .word 0xafa22a68
  .word 0xa7a02a80
  .word 0xafa22a84
  .word 0xa7a02a9c
  .word 0xafa22aa0
  .word 0xa7a02ab8
  .word 0xafa22abc
  .word 0xa7a02ad4
  .word 0xafa22ad8
  .word 0xa7a02af0
  .word 0xafa22af4
  .word 0xa7a02b0c
  .word 0xafa22b10
  .word 0xa7a02b28
  .word 0xafa22b2c
  .word 0xa7a02b44
  .word 0xafa22b48
  .word 0xa7a02b60
  .word 0xafa22b64
  .word 0xa7a02b7c
  .word 0x34019710
  .word 0x03a12021
  .word 0x27a52a4c
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269714
  .word 0x0200202d
  .word 0x2405000c
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019710
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000461
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a523a0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000d
  .word 0xafa223a0
  .word 0xa7a023b8
  .word 0xafa223bc
  .word 0xa7a023d4
  .word 0xafa223d8
  .word 0xa7a023f0
  .word 0xafa223f4
  .word 0xa7a0240c
  .word 0xafa22410
  .word 0xa7a02428
  .word 0xafa2242c
  .word 0xa7a02444
  .word 0xafa22448
  .word 0xa7a02460
  .word 0xafa22464
  .word 0xa7a0247c
  .word 0xafa22480
  .word 0xa7a02498
  .word 0xafa2249c
  .word 0xa7a024b4
  .word 0xafa224b8
  .word 0xa7a024d0
  .word 0xafa224d4
  .word 0xa7a024ec
  .word 0xafa224f0
  .word 0xa7a02508
  .word 0xafa2250c
  .word 0xa7a02524
  .word 0xafa22528
  .word 0xa7a02540
  .word 0xafa22544
  .word 0xa7a0255c
  .word 0xafa22560
  .word 0xa7a02578
  .word 0xafa2257c
  .word 0xa7a02594
  .word 0xafa22598
  .word 0xa7a025b0
  .word 0xafa225b4
  .word 0xa7a025cc
  .word 0xafa225d0
  .word 0xa7a025e8
  .word 0xafa225ec
  .word 0xa7a02604
  .word 0xafa22608
  .word 0xa7a02620
  .word 0xafa22624
  .word 0xa7a0263c
  .word 0xafa22640
  .word 0xa7a02658
  .word 0xafa2265c
  .word 0xa7a02674
  .word 0xafa22678
  .word 0xa7a02690
  .word 0xafa22694
  .word 0xa7a026ac
  .word 0xafa226b0
  .word 0xa7a026c8
  .word 0xafa226cc
  .word 0xa7a026e4
  .word 0xafa226e8
  .word 0xa7a02700
  .word 0xafa22704
  .word 0xa7a0271c
  .word 0xafa22720
  .word 0xa7a02738
  .word 0xafa2273c
  .word 0xa7a02754
  .word 0xafa22758
  .word 0xa7a02770
  .word 0xafa22774
  .word 0xa7a0278c
  .word 0x340196f0
  .word 0x03a12021
  .word 0x27a52678
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2696f4
  .word 0x0200202d
  .word 0x2405000d
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340196f0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100003f4
  .word 0x00000000
  .word 0x24030001
  .word 0x14c303f1
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a51fb0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000d
  .word 0xafa21fb0
  .word 0xa7a01fc8
  .word 0xafa21fcc
  .word 0xa7a01fe4
  .word 0xafa21fe8
  .word 0xa7a02000
  .word 0xafa22004
  .word 0xa7a0201c
  .word 0xafa22020
  .word 0xa7a02038
  .word 0xafa2203c
  .word 0xa7a02054
  .word 0xafa22058
  .word 0xa7a02070
  .word 0xafa22074
  .word 0xa7a0208c
  .word 0xafa22090
  .word 0xa7a020a8
  .word 0xafa220ac
  .word 0xa7a020c4
  .word 0xafa220c8
  .word 0xa7a020e0
  .word 0xafa220e4
  .word 0xa7a020fc
  .word 0xafa22100
  .word 0xa7a02118
  .word 0xafa2211c
  .word 0xa7a02134
  .word 0xafa22138
  .word 0xa7a02150
  .word 0xafa22154
  .word 0xa7a0216c
  .word 0xafa22170
  .word 0xa7a02188
  .word 0xafa2218c
  .word 0xa7a021a4
  .word 0xafa221a8
  .word 0xa7a021c0
  .word 0xafa221c4
  .word 0xa7a021dc
  .word 0xafa221e0
  .word 0xa7a021f8
  .word 0xafa221fc
  .word 0xa7a02214
  .word 0xafa22218
  .word 0xa7a02230
  .word 0xafa22234
  .word 0xa7a0224c
  .word 0xafa22250
  .word 0xa7a02268
  .word 0xafa2226c
  .word 0xa7a02284
  .word 0xafa22288
  .word 0xa7a022a0
  .word 0xafa222a4
  .word 0xa7a022bc
  .word 0xafa222c0
  .word 0xa7a022d8
  .word 0xafa222dc
  .word 0xa7a022f4
  .word 0xafa222f8
  .word 0xa7a02310
  .word 0xafa22314
  .word 0xa7a0232c
  .word 0xafa22330
  .word 0xa7a02348
  .word 0xafa2234c
  .word 0xa7a02364
  .word 0xafa22368
  .word 0xa7a02380
  .word 0xafa22384
  .word 0xa7a0239c
  .word 0x340196d0
  .word 0x03a12021
  .word 0x27a522a4
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2696d4
  .word 0x0200202d
  .word 0x2405000d
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340196d0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000386
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a51bc0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000e
  .word 0xafa21bc0
  .word 0xa7a01bd8
  .word 0xafa21bdc
  .word 0xa7a01bf4
  .word 0xafa21bf8
  .word 0xa7a01c10
  .word 0xafa21c14
  .word 0xa7a01c2c
  .word 0xafa21c30
  .word 0xa7a01c48
  .word 0xafa21c4c
  .word 0xa7a01c64
  .word 0xafa21c68
  .word 0xa7a01c80
  .word 0xafa21c84
  .word 0xa7a01c9c
  .word 0xafa21ca0
  .word 0xa7a01cb8
  .word 0xafa21cbc
  .word 0xa7a01cd4
  .word 0xafa21cd8
  .word 0xa7a01cf0
  .word 0xafa21cf4
  .word 0xa7a01d0c
  .word 0xafa21d10
  .word 0xa7a01d28
  .word 0xafa21d2c
  .word 0xa7a01d44
  .word 0xafa21d48
  .word 0xa7a01d60
  .word 0xafa21d64
  .word 0xa7a01d7c
  .word 0xafa21d80
  .word 0xa7a01d98
  .word 0xafa21d9c
  .word 0xa7a01db4
  .word 0xafa21db8
  .word 0xa7a01dd0
  .word 0xafa21dd4
  .word 0xa7a01dec
  .word 0xafa21df0
  .word 0xa7a01e08
  .word 0xafa21e0c
  .word 0xa7a01e24
  .word 0xafa21e28
  .word 0xa7a01e40
  .word 0xafa21e44
  .word 0xa7a01e5c
  .word 0xafa21e60
  .word 0xa7a01e78
  .word 0xafa21e7c
  .word 0xa7a01e94
  .word 0xafa21e98
  .word 0xa7a01eb0
  .word 0xafa21eb4
  .word 0xa7a01ecc
  .word 0xafa21ed0
  .word 0xa7a01ee8
  .word 0xafa21eec
  .word 0xa7a01f04
  .word 0xafa21f08
  .word 0xa7a01f20
  .word 0xafa21f24
  .word 0xa7a01f3c
  .word 0xafa21f40
  .word 0xa7a01f58
  .word 0xafa21f5c
  .word 0xa7a01f74
  .word 0xafa21f78
  .word 0xa7a01f90
  .word 0xafa21f94
  .word 0xa7a01fac
  .word 0x340196b0
  .word 0x03a12021
  .word 0x27a51ed0
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2696b4
  .word 0x0200202d
  .word 0x2405000e
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340196b0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000319
  .word 0x00000000
  .word 0x24030001
  .word 0x14c30316
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a517d0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000e
  .word 0xafa217d0
  .word 0xa7a017e8
  .word 0xafa217ec
  .word 0xa7a01804
  .word 0xafa21808
  .word 0xa7a01820
  .word 0xafa21824
  .word 0xa7a0183c
  .word 0xafa21840
  .word 0xa7a01858
  .word 0xafa2185c
  .word 0xa7a01874
  .word 0xafa21878
  .word 0xa7a01890
  .word 0xafa21894
  .word 0xa7a018ac
  .word 0xafa218b0
  .word 0xa7a018c8
  .word 0xafa218cc
  .word 0xa7a018e4
  .word 0xafa218e8
  .word 0xa7a01900
  .word 0xafa21904
  .word 0xa7a0191c
  .word 0xafa21920
  .word 0xa7a01938
  .word 0xafa2193c
  .word 0xa7a01954
  .word 0xafa21958
  .word 0xa7a01970
  .word 0xafa21974
  .word 0xa7a0198c
  .word 0xafa21990
  .word 0xa7a019a8
  .word 0xafa219ac
  .word 0xa7a019c4
  .word 0xafa219c8
  .word 0xa7a019e0
  .word 0xafa219e4
  .word 0xa7a019fc
  .word 0xafa21a00
  .word 0xa7a01a18
  .word 0xafa21a1c
  .word 0xa7a01a34
  .word 0xafa21a38
  .word 0xa7a01a50
  .word 0xafa21a54
  .word 0xa7a01a6c
  .word 0xafa21a70
  .word 0xa7a01a88
  .word 0xafa21a8c
  .word 0xa7a01aa4
  .word 0xafa21aa8
  .word 0xa7a01ac0
  .word 0xafa21ac4
  .word 0xa7a01adc
  .word 0xafa21ae0
  .word 0xa7a01af8
  .word 0xafa21afc
  .word 0xa7a01b14
  .word 0xafa21b18
  .word 0xa7a01b30
  .word 0xafa21b34
  .word 0xa7a01b4c
  .word 0xafa21b50
  .word 0xa7a01b68
  .word 0xafa21b6c
  .word 0xa7a01b84
  .word 0xafa21b88
  .word 0xa7a01ba0
  .word 0xafa21ba4
  .word 0xa7a01bbc
  .word 0x34019690
  .word 0x03a12021
  .word 0x27a51afc
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269694
  .word 0x0200202d
  .word 0x2405000e
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019690
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100002ab
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a513e0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000f
  .word 0xafa213e0
  .word 0xa7a013f8
  .word 0xafa213fc
  .word 0xa7a01414
  .word 0xafa21418
  .word 0xa7a01430
  .word 0xafa21434
  .word 0xa7a0144c
  .word 0xafa21450
  .word 0xa7a01468
  .word 0xafa2146c
  .word 0xa7a01484
  .word 0xafa21488
  .word 0xa7a014a0
  .word 0xafa214a4
  .word 0xa7a014bc
  .word 0xafa214c0
  .word 0xa7a014d8
  .word 0xafa214dc
  .word 0xa7a014f4
  .word 0xafa214f8
  .word 0xa7a01510
  .word 0xafa21514
  .word 0xa7a0152c
  .word 0xafa21530
  .word 0xa7a01548
  .word 0xafa2154c
  .word 0xa7a01564
  .word 0xafa21568
  .word 0xa7a01580
  .word 0xafa21584
  .word 0xa7a0159c
  .word 0xafa215a0
  .word 0xa7a015b8
  .word 0xafa215bc
  .word 0xa7a015d4
  .word 0xafa215d8
  .word 0xa7a015f0
  .word 0xafa215f4
  .word 0xa7a0160c
  .word 0xafa21610
  .word 0xa7a01628
  .word 0xafa2162c
  .word 0xa7a01644
  .word 0xafa21648
  .word 0xa7a01660
  .word 0xafa21664
  .word 0xa7a0167c
  .word 0xafa21680
  .word 0xa7a01698
  .word 0xafa2169c
  .word 0xa7a016b4
  .word 0xafa216b8
  .word 0xa7a016d0
  .word 0xafa216d4
  .word 0xa7a016ec
  .word 0xafa216f0
  .word 0xa7a01708
  .word 0xafa2170c
  .word 0xa7a01724
  .word 0xafa21728
  .word 0xa7a01740
  .word 0xafa21744
  .word 0xa7a0175c
  .word 0xafa21760
  .word 0xa7a01778
  .word 0xafa2177c
  .word 0xa7a01794
  .word 0xafa21798
  .word 0xa7a017b0
  .word 0xafa217b4
  .word 0xa7a017cc
  .word 0x34019670
  .word 0x03a12021
  .word 0x27a51728
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269674
  .word 0x0200202d
  .word 0x2405000f
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019670
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x1000023e
  .word 0x00000000
  .word 0x24030001
  .word 0x14c3023b
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a50ff0
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x2402000f
  .word 0xafa20ff0
  .word 0xa7a01008
  .word 0xafa2100c
  .word 0xa7a01024
  .word 0xafa21028
  .word 0xa7a01040
  .word 0xafa21044
  .word 0xa7a0105c
  .word 0xafa21060
  .word 0xa7a01078
  .word 0xafa2107c
  .word 0xa7a01094
  .word 0xafa21098
  .word 0xa7a010b0
  .word 0xafa210b4
  .word 0xa7a010cc
  .word 0xafa210d0
  .word 0xa7a010e8
  .word 0xafa210ec
  .word 0xa7a01104
  .word 0xafa21108
  .word 0xa7a01120
  .word 0xafa21124
  .word 0xa7a0113c
  .word 0xafa21140
  .word 0xa7a01158
  .word 0xafa2115c
  .word 0xa7a01174
  .word 0xafa21178
  .word 0xa7a01190
  .word 0xafa21194
  .word 0xa7a011ac
  .word 0xafa211b0
  .word 0xa7a011c8
  .word 0xafa211cc
  .word 0xa7a011e4
  .word 0xafa211e8
  .word 0xa7a01200
  .word 0xafa21204
  .word 0xa7a0121c
  .word 0xafa21220
  .word 0xa7a01238
  .word 0xafa2123c
  .word 0xa7a01254
  .word 0xafa21258
  .word 0xa7a01270
  .word 0xafa21274
  .word 0xa7a0128c
  .word 0xafa21290
  .word 0xa7a012a8
  .word 0xafa212ac
  .word 0xa7a012c4
  .word 0xafa212c8
  .word 0xa7a012e0
  .word 0xafa212e4
  .word 0xa7a012fc
  .word 0xafa21300
  .word 0xa7a01318
  .word 0xafa2131c
  .word 0xa7a01334
  .word 0xafa21338
  .word 0xa7a01350
  .word 0xafa21354
  .word 0xa7a0136c
  .word 0xafa21370
  .word 0xa7a01388
  .word 0xafa2138c
  .word 0xa7a013a4
  .word 0xafa213a8
  .word 0xa7a013c0
  .word 0xafa213c4
  .word 0xa7a013dc
  .word 0x34019650
  .word 0x03a12021
  .word 0x27a51354
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269654
  .word 0x0200202d
  .word 0x2405000f
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019650
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100001d0
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a50c00
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020010
  .word 0xafa20c00
  .word 0xa7a00c18
  .word 0xafa20c1c
  .word 0xa7a00c34
  .word 0xafa20c38
  .word 0xa7a00c50
  .word 0xafa20c54
  .word 0xa7a00c6c
  .word 0xafa20c70
  .word 0xa7a00c88
  .word 0xafa20c8c
  .word 0xa7a00ca4
  .word 0xafa20ca8
  .word 0xa7a00cc0
  .word 0xafa20cc4
  .word 0xa7a00cdc
  .word 0xafa20ce0
  .word 0xa7a00cf8
  .word 0xafa20cfc
  .word 0xa7a00d14
  .word 0xafa20d18
  .word 0xa7a00d30
  .word 0xafa20d34
  .word 0xa7a00d4c
  .word 0xafa20d50
  .word 0xa7a00d68
  .word 0xafa20d6c
  .word 0xa7a00d84
  .word 0xafa20d88
  .word 0xa7a00da0
  .word 0xafa20da4
  .word 0xa7a00dbc
  .word 0xafa20dc0
  .word 0xa7a00dd8
  .word 0xafa20ddc
  .word 0xa7a00df4
  .word 0xafa20df8
  .word 0xa7a00e10
  .word 0xafa20e14
  .word 0xa7a00e2c
  .word 0xafa20e30
  .word 0xa7a00e48
  .word 0xafa20e4c
  .word 0xa7a00e64
  .word 0xafa20e68
  .word 0xa7a00e80
  .word 0xafa20e84
  .word 0xa7a00e9c
  .word 0xafa20ea0
  .word 0xa7a00eb8
  .word 0xafa20ebc
  .word 0xa7a00ed4
  .word 0xafa20ed8
  .word 0xa7a00ef0
  .word 0xafa20ef4
  .word 0xa7a00f0c
  .word 0xafa20f10
  .word 0xa7a00f28
  .word 0xafa20f2c
  .word 0xa7a00f44
  .word 0xafa20f48
  .word 0xa7a00f60
  .word 0xafa20f64
  .word 0xa7a00f7c
  .word 0xafa20f80
  .word 0xa7a00f98
  .word 0xafa20f9c
  .word 0xa7a00fb4
  .word 0xafa20fb8
  .word 0xa7a00fd0
  .word 0xafa20fd4
  .word 0xa7a00fec
  .word 0x34019630
  .word 0x03a12021
  .word 0x27a50f80
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269634
  .word 0x0200202d
  .word 0x24050010
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019630
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000163
  .word 0x00000000
  .word 0x24030001
  .word 0x14c30160
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a50810
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020010
  .word 0xafa20810
  .word 0xa7a00828
  .word 0xafa2082c
  .word 0xa7a00844
  .word 0xafa20848
  .word 0xa7a00860
  .word 0xafa20864
  .word 0xa7a0087c
  .word 0xafa20880
  .word 0xa7a00898
  .word 0xafa2089c
  .word 0xa7a008b4
  .word 0xafa208b8
  .word 0xa7a008d0
  .word 0xafa208d4
  .word 0xa7a008ec
  .word 0xafa208f0
  .word 0xa7a00908
  .word 0xafa2090c
  .word 0xa7a00924
  .word 0xafa20928
  .word 0xa7a00940
  .word 0xafa20944
  .word 0xa7a0095c
  .word 0xafa20960
  .word 0xa7a00978
  .word 0xafa2097c
  .word 0xa7a00994
  .word 0xafa20998
  .word 0xa7a009b0
  .word 0xafa209b4
  .word 0xa7a009cc
  .word 0xafa209d0
  .word 0xa7a009e8
  .word 0xafa209ec
  .word 0xa7a00a04
  .word 0xafa20a08
  .word 0xa7a00a20
  .word 0xafa20a24
  .word 0xa7a00a3c
  .word 0xafa20a40
  .word 0xa7a00a58
  .word 0xafa20a5c
  .word 0xa7a00a74
  .word 0xafa20a78
  .word 0xa7a00a90
  .word 0xafa20a94
  .word 0xa7a00aac
  .word 0xafa20ab0
  .word 0xa7a00ac8
  .word 0xafa20acc
  .word 0xa7a00ae4
  .word 0xafa20ae8
  .word 0xa7a00b00
  .word 0xafa20b04
  .word 0xa7a00b1c
  .word 0xafa20b20
  .word 0xa7a00b38
  .word 0xafa20b3c
  .word 0xa7a00b54
  .word 0xafa20b58
  .word 0xa7a00b70
  .word 0xafa20b74
  .word 0xa7a00b8c
  .word 0xafa20b90
  .word 0xa7a00ba8
  .word 0xafa20bac
  .word 0xa7a00bc4
  .word 0xafa20bc8
  .word 0xa7a00be0
  .word 0xafa20be4
  .word 0xa7a00bfc
  .word 0x34019610
  .word 0x03a12021
  .word 0x27a50bac
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c269614
  .word 0x0200202d
  .word 0x24050010
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x34019610
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x100000f5
  .word 0x00000000
  .word 0x14c0006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a50420
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020011
  .word 0xafa20420
  .word 0xa7a00438
  .word 0xafa2043c
  .word 0xa7a00454
  .word 0xafa20458
  .word 0xa7a00470
  .word 0xafa20474
  .word 0xa7a0048c
  .word 0xafa20490
  .word 0xa7a004a8
  .word 0xafa204ac
  .word 0xa7a004c4
  .word 0xafa204c8
  .word 0xa7a004e0
  .word 0xafa204e4
  .word 0xa7a004fc
  .word 0xafa20500
  .word 0xa7a00518
  .word 0xafa2051c
  .word 0xa7a00534
  .word 0xafa20538
  .word 0xa7a00550
  .word 0xafa20554
  .word 0xa7a0056c
  .word 0xafa20570
  .word 0xa7a00588
  .word 0xafa2058c
  .word 0xa7a005a4
  .word 0xafa205a8
  .word 0xa7a005c0
  .word 0xafa205c4
  .word 0xa7a005dc
  .word 0xafa205e0
  .word 0xa7a005f8
  .word 0xafa205fc
  .word 0xa7a00614
  .word 0xafa20618
  .word 0xa7a00630
  .word 0xafa20634
  .word 0xa7a0064c
  .word 0xafa20650
  .word 0xa7a00668
  .word 0xafa2066c
  .word 0xa7a00684
  .word 0xafa20688
  .word 0xa7a006a0
  .word 0xafa206a4
  .word 0xa7a006bc
  .word 0xafa206c0
  .word 0xa7a006d8
  .word 0xafa206dc
  .word 0xa7a006f4
  .word 0xafa206f8
  .word 0xa7a00710
  .word 0xafa20714
  .word 0xa7a0072c
  .word 0xafa20730
  .word 0xa7a00748
  .word 0xafa2074c
  .word 0xa7a00764
  .word 0xafa20768
  .word 0xa7a00780
  .word 0xafa20784
  .word 0xa7a0079c
  .word 0xafa207a0
  .word 0xa7a007b8
  .word 0xafa207bc
  .word 0xa7a007d4
  .word 0xafa207d8
  .word 0xa7a007f0
  .word 0xafa207f4
  .word 0xa7a0080c
  .word 0x340195f0
  .word 0x03a12021
  .word 0x27a507d8
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2695f4
  .word 0x0200202d
  .word 0x24050011
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340195f0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x10000088
  .word 0x00000000
  .word 0x24030001
  .word 0x14c3006c
  .word 0x00000000
  .word 0x8c900098
  .word 0x3c06006a
  .word 0x24c66b20
  .word 0x27a50030
  .word 0x2404007e
  .word 0x8cc30000
  .word 0x8cc20004
  .word 0x24c60008
  .word 0x2484ffff
  .word 0xaca30000
  .word 0xaca20004
  .word 0x24a50008
  .word 0x1c80fff8
  .word 0x00000000
  .word 0x24020011
  .word 0xafa20030
  .word 0xa7a00048
  .word 0xafa2004c
  .word 0xa7a00064
  .word 0xafa20068
  .word 0xa7a00080
  .word 0xafa20084
  .word 0xa7a0009c
  .word 0xafa200a0
  .word 0xa7a000b8
  .word 0xafa200bc
  .word 0xa7a000d4
  .word 0xafa200d8
  .word 0xa7a000f0
  .word 0xafa200f4
  .word 0xa7a0010c
  .word 0xafa20110
  .word 0xa7a00128
  .word 0xafa2012c
  .word 0xa7a00144
  .word 0xafa20148
  .word 0xa7a00160
  .word 0xafa20164
  .word 0xa7a0017c
  .word 0xafa20180
  .word 0xa7a00198
  .word 0xafa2019c
  .word 0xa7a001b4
  .word 0xafa201b8
  .word 0xa7a001d0
  .word 0xafa201d4
  .word 0xa7a001ec
  .word 0xafa201f0
  .word 0xa7a00208
  .word 0xafa2020c
  .word 0xa7a00224
  .word 0xafa20228
  .word 0xa7a00240
  .word 0xafa20244
  .word 0xa7a0025c
  .word 0xafa20260
  .word 0xa7a00278
  .word 0xafa2027c
  .word 0xa7a00294
  .word 0xafa20298
  .word 0xa7a002b0
  .word 0xafa202b4
  .word 0xa7a002cc
  .word 0xafa202d0
  .word 0xa7a002e8
  .word 0xafa202ec
  .word 0xa7a00304
  .word 0xafa20308
  .word 0xa7a00320
  .word 0xafa20324
  .word 0xa7a0033c
  .word 0xafa20340
  .word 0xa7a00358
  .word 0xafa2035c
  .word 0xa7a00374
  .word 0xafa20378
  .word 0xa7a00390
  .word 0xafa20394
  .word 0xa7a003ac
  .word 0xafa203b0
  .word 0xa7a003c8
  .word 0xafa203cc
  .word 0xa7a003e4
  .word 0xafa203e8
  .word 0xa7a00400
  .word 0xafa20404
  .word 0xa7a0041c
  .word 0x340195d0
  .word 0x03a12021
  .word 0x27a50404
  .word 0x2406001c
  .word 0x0c148494
  .word 0x00000000
  .word 0x3c010001
  .word 0x03a10821
  .word 0x8c2695d4
  .word 0x0200202d
  .word 0x24050011
  .word 0x0c0f7ff0
  .word 0x00000000
  .word 0x0040202d
  .word 0x340195d0
  .word 0x03a12821
  .word 0x0c0f7c40
  .word 0x00000000
  .word 0x1000001a
  .word 0x00000000
  .word 0x24030003
  .word 0x14c3000b
  .word 0x00000000
  .word 0x8c840098
  .word 0x24050011
  .word 0x0c0f7fe0
  .word 0x00000000
  .word 0x8c440034
  .word 0x8c830000
  .word 0x34630002
  .word 0xac830000
  .word 0x1000000d
  .word 0x00000000
  .word 0x24030004
  .word 0x14c3000a
  .word 0x00000000
  .word 0x8c840098
  .word 0x24050011
  .word 0x0c0f7fe0
  .word 0x00000000
  .word 0x8c450034
  .word 0x8ca40000
  .word 0x2403fffd
  .word 0x00831824
  .word 0xaca30000
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x34019a90
  .word 0x03a1e821
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#undef FCL_COMBINE_CASE



/* auto-extern (generated) */
extern u32 gp0xffffaad8;
extern u32 gp0xffffaae8;
typedef unsigned int ShopU128 __attribute__((mode(TI)));
typedef struct {
    u8 auStack_f0[32];
    u8 auStack_d0[32];
    u32 *apuStack_b0[18];
    u32 _pad_table[2];
    u32 auStack_60[6];
    float uStack_48;
    float uStack_44;
    float uStack_40;
    u32 _pad_38;
    float uStack_38;
    float uStack_34;
    float uStack_30;
    float uStack_2c;
    float uStack_28;
    u32 _pad_20;
    float uStack_20;
    float uStack_1c;
    float uStack_18;
    u32 _pad_10;
    float uStack_10;
    float uStack_c;
    float uStack_8;
    u32 _pad_end;
} FclShopStack;
typedef struct {
    s16 *entries;
    u32 count;
} FclShopDrawGroup;
extern u8 DAT_006a6a90[];
extern char DAT_006a6af8[];
extern u8 DAT_006a9930[];
/* FUSION_EXACT_PROTOS */
void FUN_003e5e20(u8* param_1, u8* param_2);
void FUN_0040e3f0_y2(float param_1, float param_2, float param_3, float param_4, s32 param_5, s32 param_6, u8 param_7, s32 param_8, s32 param_9, s32 param_10, s32 param_11);
extern void FUN_0040e3f0_i2f1i3f3(s32 param_5, s32 param_6, f32 param_1, u8 param_7,
                                  s32 param_8, s32 param_9, s32 param_10, s32 param_11,
                                  f32 param_2, f32 param_3, f32 param_4);
#pragma alias FUN_0040eb50_i FUN_0040eb50
extern s32 FUN_0040eb50_i(s32 x, s32 y, f32 scale, u8 color, s16 font,
                           const void* text, s32 maxWidth);
extern void FUN_0040e3c0_i(s32 x, s32 y, f32 scale, u8 color, s32 type,
                            s32 value);
void FUN_003e6130(int param_1);
void FUN_003e6400_y2(u32 param_1,u8* param_2);
u64 FUN_003e6d40(void);
u32 FUN_003e6d70(void);
u32 FUN_003e6dc0(void);
u32 FUN_003e6e20(u32 param_1);
u64 FUN_003e6e80_y2(void);
void FUN_003e86c0(u8* owner);
u32 FUN_003e8740(u8 *param_1);
u64 FUN_003e87c0(u64 param_1,u64 param_2);
u64 FUN_003e8830(u64 param_1,u64 param_2);
u8 * FUN_003e8860(u32 param_1,u32 param_2);
int FUN_003e8e20(u8* owner);
u32 FUN_003e8ff0(int param_1);
u64 FUN_003e90b0(u64 param_1,u64 param_2);
u64 FUN_003e9160(u64 param_1,u64 param_2);
u32 FUN_003e9200(u64 param_1,u64 param_2);
u64 FUN_003e94f0(u64 param_1,u64 param_2);
u64 FUN_003e96f0(u64 param_1,u64 param_2);
void FUN_003e9790(long param_1);
u32 FUN_003e97f0(u8* owner);
u32 FUN_003e98b0(int param_1);
u64 FUN_003e9970(u64 param_1,u64 param_2);
u64 FUN_003e9a90(u64 param_1,u64 param_2);
u8 * FUN_003e9af0(u32 param_1,u32 param_2);
u64 FUN_003ea4d0(u64 param_1,u64 param_2);
u32 FUN_003ea560(int param_1);
u32 FUN_003ea600(u8* owner);
u32 FUN_003ea6b0(int param_1);
u64 FUN_003ea770(u64 param_1,u64 param_2);
u64 FUN_003ea7e0(u64 param_1,u64 param_2);
u8 * FUN_003ea820(u64 param_1,u64 param_2);
u64 FUN_003eac40(u64 param_1,u64 param_2);
void FUN_003eacb0(long param_1);
u32 FUN_003ead10(u8* owner);
u32 FUN_003eadd0(int param_1);
u64 FUN_003eaeb0(u64 param_1,u64 param_2);
u64 FUN_003eaf30(u64 param_1,u64 param_2);
u8 * FUN_003eaf90(u32 param_1,u32 param_2);
u64 FUN_003eb940(u64 param_1,u64 param_2);
void FUN_003eb9b0(long param_1);
u32 FUN_003eba10(u8* owner);
u32 FUN_003ebad0(int param_1);
u64 FUN_003ebb90(u64 param_1,u64 param_2);
u64 FUN_003ebc70(u64 param_1,u64 param_2);
u8 * FUN_003ebcb0(u64 param_1,u64 param_2);
u64 FUN_003ebfe0(u64 param_1,u64 param_2);
void FUN_003ec030(long param_1);
u32 FUN_003ec090(u8* owner);
u32 FUN_003ec150(int param_1);
u64 FUN_003ec210(u64 param_1,u64 param_2);
u64 FUN_003ec280(u64 param_1,u64 param_2);
u8 * FUN_003ec2c0(u64 param_1,u64 param_2);
u64 FUN_003ec6a0(u64 param_1,u64 param_2);
u32 FUN_003ec6f0(u8* owner);
u32 FUN_003ec7b0(int param_1);
u64 FUN_003ec870(u64 param_1,u64 param_2);
u64 FUN_003ec8e0(u64 param_1,u64 param_2);
u8 * FUN_003ec920(u64 param_1,u64 param_2);
u64 FUN_003ecce0(u64 param_1,u64 param_2);
u32 FUN_003ecd30(u8* owner);
u32 FUN_003ecdf0(int param_1);
u64 FUN_003eceb0(u64 param_1,u64 param_2);
u64 FUN_003ecf80(u64 param_1,u64 param_2);
u8 * FUN_003ecfe0(u64 param_1,u64 param_2);
u64 FUN_003ed310(u64 param_1,u64 param_2);
u32 FUN_003ed380(u8* owner);
u32 FUN_003ed420(int param_1);
u64 FUN_003ed4e0(u64 param_1,u64 param_2);
u64 FUN_003ed5a0(u64 param_1,u64 param_2);
u8 * FUN_003ed5e0(u32 param_1,u32 param_2);
u64 FUN_003edd80(u64 param_1,u64 param_2);
u32 FUN_003eddd0(u8* owner);
u32 FUN_003ede80(int param_1);
u64 FUN_003edf20(u64 param_1,u64 param_2);
u64 FUN_003edf80(u64 param_1,u64 param_2);
u8 * FUN_003edfc0(u64 param_1,u64 param_2);
u64 FUN_003ee2d0(u64 param_1,u64 param_2);
u32 FUN_003ee310(u8* owner);
u32 FUN_003ee3d0(int *param_1);
u64 FUN_003ee480(u64 param_1,u64 param_2);
u64 FUN_003ee4e0(u64 param_1,u64 param_2);
u8 * FUN_003ee510(void);
void FUN_003ee570(u8* owner);
u64 FUN_003ee5f0(u64 param_1,u64 param_2);
u64 FUN_003ee640(u64 param_1,u64 param_2);
u64 FUN_003ee670(u64 param_1,u64 param_2);
u64 FUN_003ee920(u64 param_1,u64 param_2);
void FUN_003eec60(int param_1);
void FUN_003eed10(u32 param_1);
u32 FUN_003eed50(void);
void FUN_003eed90(u8* owner);
u64 FUN_003eee10(u64 param_1,u64 param_2);
u64 FUN_003eee50(u64 param_1,u64 param_2);
u64 FUN_003eee80(u64 param_1,u64 param_2);
u64 FUN_003ef2b0(u64 param_1,u64 param_2);
u64 FUN_003ef970(u64 param_1);
void FUN_003efb40(u8* owner);
u64 FUN_003efbc0(u64 param_1,u64 param_2);
u64 FUN_003efc20(u64 param_1,u64 param_2);
u64 FUN_003efc60(u64 param_1,u64 param_2);
u64 FUN_003efca0(u64 param_1,u64 param_2);
u64 FUN_003efce0(void);
u8 FUN_003efd70(void);
void FUN_003efde0(u64 param_1,u64 param_2);
u32 FUN_003efe60(void);
int FUN_003efed0(int param_1);
u8 ** FUN_003efef0(void);
extern u8 DAT_006b1f30[];
/* FUSION_GLOBALS */
float DAT_006a6f10;
float DAT_006a6f14;
float DAT_006a6f18;
float DAT_006a6f20;
float DAT_006a6f24;
float DAT_006a6f28;
float DAT_006a6f30;
float DAT_006a6f34;
float DAT_006a6f38;
float DAT_006a6f40;
float DAT_006a6f44;
float DAT_006a6f48;
u32 DAT_006a6f50;
u32 DAT_006a6f70;
u32 DAT_006a70a0;
u32 DAT_006a70a4;
u32 DAT_006a70a8;
u32 DAT_006a70ac;
extern u32 DAT_006a7290[];
extern u32 DAT_006a7310[];
extern u32 DAT_006a7360[];
extern u32 DAT_006a7390[];
extern u32 DAT_006a73b0[];
extern u32 DAT_006a73d0[];
extern u32 DAT_006a73f0[];
extern u32 DAT_006a7410[];
extern u32 DAT_006a7438[];
extern u32 DAT_006a7450[];
extern u32 DAT_006a7470[];
extern s16 DAT_006a74c0[];
extern s16 DAT_006a74e0[];
extern s16 DAT_006a7500[];
extern s16 DAT_006a7518[];
extern s16 DAT_006a7530[];
extern s16 DAT_006a7550[];
extern s16 DAT_006a7570[];
extern u32 DAT_006a7590;
extern float DAT_007cad7c;
extern float DAT_007cad84;
#pragma alias DAT_006a6f10_abs DAT_006a6f10
extern u8 DAT_006a6f10_abs[];
#pragma alias DAT_006a6f14_abs DAT_006a6f14
extern u8 DAT_006a6f14_abs[];
#pragma alias DAT_006a6f18_abs DAT_006a6f18
extern u8 DAT_006a6f18_abs[];
#pragma alias DAT_006a6f20_abs DAT_006a6f20
extern u8 DAT_006a6f20_abs[];
#pragma alias DAT_006a6f24_abs DAT_006a6f24
extern u8 DAT_006a6f24_abs[];
#pragma alias DAT_006a6f28_abs DAT_006a6f28
extern u8 DAT_006a6f28_abs[];
#pragma alias DAT_006a6f30_abs DAT_006a6f30
extern u8 DAT_006a6f30_abs[];
#pragma alias DAT_006a6f34_abs DAT_006a6f34
extern u8 DAT_006a6f34_abs[];
#pragma alias DAT_006a6f38_abs DAT_006a6f38
extern u8 DAT_006a6f38_abs[];
#pragma alias DAT_006a6f40_abs DAT_006a6f40
extern u8 DAT_006a6f40_abs[];
#pragma alias DAT_006a6f44_abs DAT_006a6f44
extern u8 DAT_006a6f44_abs[];
#pragma alias DAT_006a6f48_abs DAT_006a6f48
extern u8 DAT_006a6f48_abs[];
#define DAT_006a6f10 (*(float*)DAT_006a6f10_abs)
#define DAT_006a6f14 (*(float*)DAT_006a6f14_abs)
#define DAT_006a6f18 (*(float*)DAT_006a6f18_abs)
#define DAT_006a6f20 (*(float*)DAT_006a6f20_abs)
#define DAT_006a6f24 (*(float*)DAT_006a6f24_abs)
#define DAT_006a6f28 (*(float*)DAT_006a6f28_abs)
#define DAT_006a6f30 (*(float*)DAT_006a6f30_abs)
#define DAT_006a6f34 (*(float*)DAT_006a6f34_abs)
#define DAT_006a6f38 (*(float*)DAT_006a6f38_abs)
#define DAT_006a6f40 (*(float*)DAT_006a6f40_abs)
#define DAT_006a6f44 (*(float*)DAT_006a6f44_abs)
#define DAT_006a6f48 (*(float*)DAT_006a6f48_abs)
u32 DAT_007cd7d0;
u32 DAT_007cd7d4;
extern u16 DAT_007e094e[];
extern u16 DAT_007e0958[];
u32 LAB_003c5170[];
u32 LAB_003e7330[];
u32 LAB_003e789c[];
u32 LAB_003e8b7c[];
u32 LAB_003ec618[];
u32 PTR_FUN_006a6fc0[];
u32 PTR_FUN_006a7040[];
u32 PTR_FUN_006a7070[];
u32 PTR_FUN_006a70b0[];
u32 PTR_FUN_006a70e0[];
u32 PTR_FUN_006a7110[];
u32 PTR_FUN_006a7140[];
u32 PTR_FUN_006a7170[];
u32 PTR_FUN_006a71a0[];
u32 PTR_FUN_006a71d0[];
u32 PTR_FUN_006a7200[];
u32 PTR_FUN_006a7230[];
u32 PTR_FUN_006a7260[];
u32 PTR_FUN_006a72e0[];
u32 PTR_FUN_006a75e0[];
u32 PTR_PTR_006a99c0[];


// FUN_003E5B00


void FUN_003e5b00(u32* ownerWords, u32 source, char direction, int count, int magnitude)
{
    u32 random;
    s32 index;
    s32 created;
    s32 negativeDirection;
    u8* owner;
    u8* slot;
    u16* timer;

    owner = (u8*)ownerWords;
    created = 0;
    index = 0;
    negativeDirection = -direction;
    while (index < 64) {
        slot = owner + index * 16;
        timer = (u16*)(slot + 0x16);
        if (*timer == 0) {
            *(u32*)(slot + 0x0c) = source;
            if (source != 0) {
                random = RpRandom();
                *timer = (u16)(((random % 0xffff) * 20) / 0xffff + 30);
            } else {
                random = RpRandom();
                *timer = (u16)(((random % 0xffff) * 10) / 0xffff + 20);
            }

            random = RpRandom();
            slot[0x19] = (u8)((magnitude * (random % 0xffff)) / 0xffff);
            if ((*(u32*)owner & 2) != 0) {
                __asm__ ("" : "+r"(index));
                slot = owner + index * 16;
                *(s8*)(slot + 0x15) =
                    (s8)(negativeDirection + ((((u32)RpRandom() % 0xffff) * 5) / 0xffff));
                random = RpRandom();
                *(s16*)(slot + 0x10) = (s16)(0x294 - ((random % 0xffff) * 10) / 0xffff);
                random = RpRandom();
                *(s16*)(slot + 0x12) = (s16)(((random % 0xffff) * 400) / 0xffff - 100);
            } else {
                __asm__ ("" : "+r"(index));
                slot = owner + index * 16;
                *(s8*)(slot + 0x15) =
                    (s8)(direction + ((((u32)RpRandom() % 0xffff) * 5) / 0xffff));
                random = RpRandom();
                *(s16*)(slot + 0x10) = (s16)(((random % 0xffff) * 10) / 0xffff - 20);
                random = RpRandom();
                *(s16*)(slot + 0x12) = (s16)(((random % 0xffff) * 400) / 0xffff - 100);
            }
            slot = owner + index * 16;
            *(u8*)(slot + 0x14) = 0xff;
            *(u8*)(slot + 0x18) = 0;
            random = RpRandom();
            *(s16*)(slot + 0x1a) = (s16)(((random % 0xffff) * 360) / 0xffff);
            created++;
            (*(u32*)(owner + 0x40c))++;
            if (created >= count) {
                return;
            }
        }
        index++;
    }
}

// FUN_003E5E20
void FUN_003e5e20(u8* param_1, u8* param_2)
{
    s16 iVar1;
    f32 fVar4;
    f32 step;
    f32 angle;
    u32 random;

    if (*(u8 *)(param_2 + 0xd) > 0)
    {
        *(u8 *)(param_2 + 0xd) = *(u8 *)(param_2 + 0xd) - 1;
    }
    else
    {
        fVar4 = 0.25f * (f32)(*(s8 *)(param_2 + 0xc) + *(s8 *)(param_2 + 9));
        iVar1 = (s32)fVar4;
        __asm__ ("" : "+r"(iVar1));
        *(s16 *)(param_2 + 4) =
            *(s16 *)(param_2 + 4) + (s16)iVar1;

        *(s16 *)(param_2 + 6) =
            *(s16 *)(param_2 + 6) +
            (s16)((*(s8 *)(param_2 + 9) & 1) * 2 + 2);
        *(char *)(param_2 + 0xc) = *(char *)(param_2 + 0xc) - 1;

        if (*(char *)(param_2 + 0xc) < 1)
        {
            random = RpRandom();
            *(s8 *)(param_2 + 0xc) =
                (s8)(((random % 0xffffU) * 10U) / 0xffffU);
        }

        fVar4 = (f32)*(s8 *)(param_2 + 0xc);
        fVar4 /= 5.0f;
        step = fVar4;
        fVar4 = 1.0f;
        fVar4 += step;
        angle = (f32)*(s16 *)(param_2 + 0xe);
        angle += fVar4;
        fVar4 = angle;
        *(s16 *)(param_2 + 0xe) = (s16)(int)fVar4;
        if (*(s16 *)(param_2 + 0xe) < 0)
        {
            *(s16 *)(param_2 + 0xe) = *(s16 *)(param_2 + 0xe) + 0x168;
        }
        if (*(s16 *)(param_2 + 0xe) > 0x168)
        {
            *(s16 *)(param_2 + 0xe) = *(s16 *)(param_2 + 0xe) - 0x168;
        }

        if (*(u16 *)(param_2 + 10) < 0x19)
        {
            fVar4 = (f32)(*(u8 *)(param_1 + 5) * *(u16 *)(param_2 + 10)) / 25.0f;
            *(u8 *)(param_2 + 8) = (u8)fVar4;
        }
        else
        {
            *(u8 *)(param_2 + 8) = *(u8 *)(param_1 + 5);
        }

        if (*(u8 *)(param_2 + 8) != 0)
        {
            fVar4 = DAT_007cad84 * (f32)*(u8 *)(param_2 + 8);
            FUN_0040e3f0_i2f1i3f3(*(s16 *)(param_2 + 4), *(s16 *)(param_2 + 6), 0.0f,
                                  (u8)fVar4, 0xf7, 0, 0, 0,
                                  (f32)(int)*(s16 *)(param_2 + 0xe), 1.0f, 1.0f);
        }

        *(u16 *)(param_2 + 10) = *(u16 *)(param_2 + 10) - 1;
        if (*(u16 *)(param_2 + 10) == 0)
        {
            *(s32 *)(param_1 + 0x40c) = *(s32 *)(param_1 + 0x40c) - 1;
        }
    }
}

// FUN_003E6130


void FUN_003e6130(int ownerAddress)
{
    u8* shop;
    u8* context;
    u8* entry;
    u8* entryData;
    u32 random;
    struct { u32 expected; } state;
    s32 scale;
    s32 i;

    context = (u8*)FUN_003c5460(DAT_007ce688);
    shop = *(u8**)(ownerAddress + 0x34);
    state.expected = 0;
    if (*(s16*)(shop + 8) == 0)
    {
        random = RpRandom();
        *(s16*)(shop + 8) = (random % 0xffff * 60) / 0xffff + 10;
    }
    *(s8*)(shop + 5) = *(s16*)(ownerAddress + 0x26);
    *(s16*)(shop + 6) = *(s16*)(shop + 6) + 1;
    if (*(s16*)(shop + 6) >= *(s16*)(shop + 8))
    {
        *(s16*)(shop + 6) = 0;
        random = RpRandom();
        *(s16*)(shop + 8) = (random % 0xffff * 60) / 0xffff + 10;
        scale = 5;
        if (*(s16*)(shop + 8) >= 50)
        {
            random = RpRandom();
            *(s8*)(shop + 4) = (random % 0xffff * 15) / 0xffff + 15;
        }
        else
        {
            random = RpRandom();
            *(s8*)(shop + 4) = (random % 0xffff * 15) / 0xffff + 10;
        }
        if (*(s8*)(shop + 4) >= 25)
        {
            scale = 30;
        }
        FUN_003e5b00((u32*)shop, 0, *(s8*)(shop + 4),
                     (s32)(DAT_007cadd0 * (f32)scale), 0x28);
        if (*(s8*)(shop + 4) == 28)
        {
            FUN_003e5b00((u32*)shop, 1, (s8)((f32)*(s8*)(shop + 4) * 0.5f),
                         scale, 0x28);
        }
        else
        {
            FUN_003e5b00((u32*)shop, 1, (s8)((f32)*(s8*)(shop + 4) * 0.5f),
                         (s32)(DAT_007cad7c * (f32)scale), 0x28);
        }
    }

    if ((*(u32*)(context + 8) & 0x20) != 0)
    {
        state.expected = 1;
    }
    for (i = 0; i < 0x40; i++)
    {
        entry = shop + i * 0x10;
        entryData = entry + 0xc;
        if (*(u16*)(entry + 0x16) > 0 && *(u32*)entryData == state.expected)
        {
            FUN_003e5e20(shop, entryData);
        }
    }
}

// FUN_003E6400


#ifndef PC_BUILD
asm void FUN_003e6400_y2(u32 param_1,u8* param_2)
{
  .set noreorder
  .word 0x27bdfec0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x00a0982d
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x3c03006a
  .word 0xc4626f10
  .word 0x3c03006a
  .word 0xc4616f14
  .word 0x3c03006a
  .word 0xc4606f18
  .word 0xe7a20130
  .word 0xe7a10134
  .word 0xe7a00138
  .word 0x3c03006a
  .word 0xc4626f20
  .word 0x3c03006a
  .word 0xc4616f24
  .word 0x3c03006a
  .word 0xc4606f28
  .word 0xe7a20120
  .word 0xe7a10124
  .word 0xe7a00128
  .word 0x3c03006a
  .word 0xc4626f30
  .word 0x3c03006a
  .word 0xc4616f34
  .word 0x3c03006a
  .word 0xc4606f38
  .word 0xe7a20110
  .word 0xe7a10114
  .word 0xe7a00118
  .word 0xc781aae0
  .word 0xc780aae4
  .word 0xe7a10108
  .word 0xe7a0010c
  .word 0x3c03006a
  .word 0xc4626f40
  .word 0x3c03006a
  .word 0xc4616f44
  .word 0x3c03006a
  .word 0xc4606f48
  .word 0xe7a200f8
  .word 0xe7a100fc
  .word 0xe7a00100
  .word 0x3c07006a
  .word 0x24e76f50
  .word 0x27a600e0
  .word 0x24050003
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x3c07006a
  .word 0x24e76f70
  .word 0x27a60090
  .word 0x24050009
  .word 0x8ce40000
  .word 0x8ce30004
  .word 0x24e70008
  .word 0x24a5ffff
  .word 0xacc40000
  .word 0xacc30004
  .word 0x24c60008
  .word 0x1ca0fff8
  .word 0x00000000
  .word 0x27a30130
  .word 0xafa30090
  .word 0x27a30120
  .word 0xafa30098
  .word 0x27a30110
  .word 0xafa300a0
  .word 0x27a30108
  .word 0xafa300a8
  .word 0x27a300f8
  .word 0xafa300b0
  .word 0xafa300b8
  .word 0xafa300c0
  .word 0xafa300c8
  .word 0x27a300e0
  .word 0xafa300d0
  .word 0x86720014
  .word 0x86710016
  .word 0x86700026
  .word 0x8e630010
  .word 0x2c610012
  .word 0x102001e4
  .word 0x00000000
  .word 0x3c04007c
  .word 0x2484b950
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x146001d9
  .word 0x00000000
  .word 0x8f84b998
  .word 0x0c0f1518
  .word 0x00000000
  .word 0x8c430000
  .word 0x24020008
  .word 0x10620015
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x0010143c
  .word 0x0002143f
  .word 0x304600ff
  .word 0x44806800
  .word 0x3c0240a0
  .word 0x44827000
  .word 0x3c024060
  .word 0x44827800
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070002
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x100001be
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x0010143c
  .word 0x0002143f
  .word 0x304600ff
  .word 0x44806800
  .word 0x3c024020
  .word 0x44827000
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407009c
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x460073c6
  .word 0x0c1038fc
  .word 0x00000000
  .word 0x100001ab
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x146001a7
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x240700a6
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000019d
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x10600199
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x2407006f
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070070
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x0220282d
  .word 0x24070071
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0c0fbb54
  .word 0x00000000
  .word 0x27a40070
  .word 0x2785aad8
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2644024f
  .word 0x26250019
  .word 0x44806000
  .word 0x320600ff
  .word 0x24070003
  .word 0x27a80070
  .word 0x24090009
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000016d
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x10600169
  .word 0x00000000
  .word 0x0010843c
  .word 0x0010843f
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
  .word 0x24070074
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2625ffff
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x24070070
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x2625ffff
  .word 0x44806000
  .word 0x320600ff
  .word 0x0240202d
  .word 0x24070071
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x0c0fbb54
  .word 0x00000000
  .word 0x27a40050
  .word 0x2785aad8
  .word 0x0040302d
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x2644024f
  .word 0x26250018
  .word 0x44806000
  .word 0x320600ff
  .word 0x24070003
  .word 0x27a80050
  .word 0x24090009
  .word 0x0c103ad4
  .word 0x00000000
  .word 0x1000012d
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x10600129
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670000
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000112
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x1060010e
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x24030001
  .word 0x10430005
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000001b
  .word 0x00000000
  .word 0x26440156
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670008
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670000
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000e6
  .word 0x00000000
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670000
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000d4
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x106000d0
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x26440192
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670008
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x100000b9
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x106000b5
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x264401f2
  .word 0x26250184
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670008
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670000
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000096
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x10600092
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c420090
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8c470004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000083
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x1060007f
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670000
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000068
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x10600064
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670010
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000004d
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x10600049
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c420090
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8c470004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x10600036
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670000
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x1000001f
  .word 0x00000000
  .word 0x8c430008
  .word 0x30630020
  .word 0x1060001b
  .word 0x00000000
  .word 0x0c0f9b70
  .word 0x00000000
  .word 0x000210c0
  .word 0x005d1021
  .word 0x8c530090
  .word 0x264401ef
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670014
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x26440233
  .word 0x26250199
  .word 0x44806000
  .word 0x320600ff
  .word 0x8e670004
  .word 0x0000402d
  .word 0x0c1038f0
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c0f984c
  .word 0x00000000
  .word 0xdfbf0040
  .word 0x7bb30030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0140
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#undef auStack_f0
#undef auStack_d0
#undef apuStack_b0
#undef auStack_60
#undef uStack_48
#undef uStack_44
#undef uStack_40
#undef uStack_38
#undef uStack_34
#undef uStack_30
#undef uStack_2c
#undef uStack_28
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef DAT_006a6f10
#undef DAT_006a6f14
#undef DAT_006a6f18
#undef DAT_006a6f20
#undef DAT_006a6f24
#undef DAT_006a6f28
#undef DAT_006a6f30
#undef DAT_006a6f34
#undef DAT_006a6f38
#undef DAT_006a6f40
#undef DAT_006a6f44
#undef DAT_006a6f48

// FUN_003E6D40


u64 FUN_003e6d40(void)



{

  FUN_003c5760(DAT_007ce688);

  return 0;

}

// FUN_003E6D70


u32 FUN_003e6d70(void)
{
  int state;
  u32 result;

  if ((DAT_007ce688 != 0) &&
      (state = FUN_003c5460(DAT_007ce688), (*(u32 *)(state + 8) & 4) != 0)) {
    result = 1;
  }
  else {
    result = 0;
  }
  return result;
}



// Exact-size sniper pass retained as NONMATCHING after diff characterization.
// 1065 non-relocation differing words span all 256-byte buckets of the body.
// The residual is diffuse register-bank/control-flow layout drift, not a
// localized type, signedness, addressing-mode, or operand-order mismatch.
// No source-level experiment improved the authoritative normalized_diff (3396).
/* Measured: opt_common_subs off gives FUN_003e6e80_y2 nd3327/obj6208; reset gives nd3362/obj6208. */






/* Reached only through a shop function-pointer table, never by jal, which is why nothing
 * in this file references it. Retail 0x003e8e10 is `daddu $v0, $zero, $zero; jr $ra; nop`. */




















































































/* Measured: opt_loop_invariants on gives FUN_003ef2b0 nd989/obj1724; reset gives nd995/obj1728. */
#undef FUN_0040e3c0
