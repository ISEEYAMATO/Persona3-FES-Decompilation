#include "h_cursor.h"
#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#pragma alias rwGlobals_abs rwGlobals
extern u8 rwGlobals_abs[];
#pragma alias DAT_00960088_abs DAT_00960088
extern u8 DAT_00960088_abs[];
extern f32 DAT_00960088;

// FUN_00100230
asm void* H_Cursor_UpdateTask(KwlnTask* hcursorTask)
{
  .set noreorder
  .word 0x27bdffd0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x8c91003c
  .word 0x3c100096
  .word 0x26100090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000b
  .word 0x24050009
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040009
  .word 0x24050002
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000c
  .word 0x24050001
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e220140
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000095
  .word 0x00000000
  .word 0x86230110
  .word 0x24020002
  .word 0x1062008d
  .word 0x00000000
  .word 0x24020001
  .word 0x10620005
  .word 0x00000000
  .word 0x10600003
  .word 0x00000000
  .word 0x10000089
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000883
  .word 0x00000000
  .word 0x0000382d
  .word 0x3c020096
  .word 0x1000004f
  .word 0x00000000
  .word 0x0007243c
  .word 0x0004243f
  .word 0x00041980
  .word 0x02233021
  .word 0xc4410088
  .word 0xc620012c
  .word 0x46000801
  .word 0xe4c00008
  .word 0xe4c20018
  .word 0x00041880
  .word 0x02232821
  .word 0x90a30130
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4c00020
  .word 0x90a30131
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4c00024
  .word 0x90a30132
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4c00028
  .word 0x90a30133
  .word 0x04600006
  .word 0x00000000
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x10000008
  .word 0x00000000
  .word 0x00032042
  .word 0x30630001
  .word 0x00832025
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000000
  .word 0xe4c0002c
  .word 0x24e30001
  .word 0x00033c3c
  .word 0x00073c3f
  .word 0x00071c3c
  .word 0x00031c3f
  .word 0x28630004
  .word 0x1460ffae
  .word 0x00000000
  .word 0xc6200114
  .word 0xe6200000
  .word 0xc6200118
  .word 0xe6200004
  .word 0xc6210114
  .word 0xc6200124
  .word 0x46800020
  .word 0x46000800
  .word 0xe6200040
  .word 0xc6200118
  .word 0xe6200044
  .word 0xc6200114
  .word 0xe6200080
  .word 0xc6210118
  .word 0xc6200128
  .word 0x46800020
  .word 0x46000800
  .word 0xe6200084
  .word 0xc6210114
  .word 0xc6200124
  .word 0x46800020
  .word 0x46000800
  .word 0xe62000c0
  .word 0xc6210118
  .word 0xc6200128
  .word 0x46800020
  .word 0x46000800
  .word 0xe62000c4
  .word 0x24040004
  .word 0x0220282d
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0x24020001
  .word 0xa6220110
  .word 0x10000004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
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

// FUN_00100570
u32* H_Cursor_GetShouldDraw(KwlnTask* hcursorTask)
{
    return &((HCursorWork*)hcursorTask->workData)->shouldDraw;
}

// FUN_00100580
void H_Cursor_DestroyTask(KwlnTask* hcursorTask)
{
    RwFree(hcursorTask->workData);
}

// FUN_001005b0
KwlnTask* H_Cursor_CreateTask(KwlnTask* parent, f32 zOffset, RwV2d pos, RwRect rect, RwRGBA color)
{
    HCursorWork* work;
    KwlnTask* task;
    RwRect _rect;

    _rect = rect;

    work = RwCalloc(1, sizeof(HCursorWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent,
                          "H CURSOR Draw",
                          6335,
                          H_Cursor_UpdateTask,
                          H_Cursor_DestroyTask,
                          work);
    if (task == NULL)
    {
        return NULL;
    }

    work->zOffset = zOffset;
    work->pos = pos;
    work->rect = _rect;
    work->colors[0] = color;
    work->colors[1] = color;
    work->colors[2] = color;
    work->colors[3] = color;
    work->shouldDraw = true;

    return task;
}

// FUN_00100710
void H_Cursor_SetPos(KwlnTask* hcursorTask, RwV2d pos)
{
    ((HCursorWork*)hcursorTask->workData)->pos = pos;
}

// FUN_00100740
void H_Cursor_SetRect(KwlnTask* hcursorTask, RwRect rect)
{
    ((HCursorWork*)hcursorTask->workData)->rect = rect;
}

// FUN_00100770
void H_Cursor_SetZOffset(KwlnTask* hcursorTask, f32 zOffset)
{
    ((HCursorWork*)hcursorTask->workData)->zOffset = zOffset;
}

// FUN_00100780
void H_Cursor_SetColor(KwlnTask* hcursorTask, RwRGBA color)
{
    HCursorWork* work;
    work = (HCursorWork*)hcursorTask->workData;

    work->colors[0] = color;
    work->colors[1] = color;
    work->colors[2] = color;
    work->colors[3] = color;
}
