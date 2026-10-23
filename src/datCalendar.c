#include "Kernel/Kwln/kwlnTask.h"
#include "Kernel/Kwln/kwln.h"
#include "rw/rwcore.h"
#include "rw/rprandom.h"
#include "Script/scrTraceCode.h"
#include "Event/Comu/comuFunction.h"
#include "Main/admini.h"
#include "Main/g_data.h"
#include "h_cursor.h"
#include "h_dbprt.h"
#include "h_fade.h"
#include "h_maestro.h"
#include "h_pad.h"
#include "h_sfdply.h"
#include "temporary.h"
extern u32 D_00960184[];
extern u32 jtbl_0096017C[];
#pragma alias datSetTimeSkipTarget_u8 datSetTimeSkipTarget
extern void datSetTimeSkipTarget_u8(u8 time);
extern u16 datGetMaxHp(s16 pcId);
#define CLND_ALLOC(count, size, flags) \
    (*(void* (**)(u32, u32, u32))D_00960184)((count), (size), (flags))
#define CLND_FREE(memory) (*(void (**)(void*))jtbl_0096017C)((memory))
typedef struct
{
    f32 x;
    f32 y;
} CalendarPackedPosition;

typedef struct
{
    s16 month;
    s16 day;
} Holiday;

// 005e3a40
static const Holiday sHolidays[] = 
{
    {CALENDAR_MONTH_APRIL, 29}, {CALENDAR_MONTH_MAY, 2}, {CALENDAR_MONTH_MAY, 5},
    {CALENDAR_MONTH_JULY, 20}, {CALENDAR_MONTH_JULY, 21}, {CALENDAR_MONTH_JULY, 22},
    {CALENDAR_MONTH_JULY, 23}, {CALENDAR_MONTH_JULY, 26}, {CALENDAR_MONTH_JULY, 27},
    {CALENDAR_MONTH_JULY, 28}, {CALENDAR_MONTH_JULY, 29}, {CALENDAR_MONTH_JULY, 30},
    {CALENDAR_MONTH_JULY, 31}, {CALENDAR_MONTH_AUGUST, 1}, {CALENDAR_MONTH_AUGUST, 2},
    {CALENDAR_MONTH_AUGUST, 3}, {CALENDAR_MONTH_AUGUST, 4}, {CALENDAR_MONTH_AUGUST, 5},
    {CALENDAR_MONTH_AUGUST, 6}, {CALENDAR_MONTH_AUGUST, 7}, {CALENDAR_MONTH_AUGUST, 8},
    {CALENDAR_MONTH_AUGUST, 9}, {CALENDAR_MONTH_AUGUST, 10}, {CALENDAR_MONTH_AUGUST, 11},
    {CALENDAR_MONTH_AUGUST, 12}, {CALENDAR_MONTH_AUGUST, 13}, {CALENDAR_MONTH_AUGUST, 14} ,
    {CALENDAR_MONTH_AUGUST, 15}, {CALENDAR_MONTH_AUGUST, 16}, {CALENDAR_MONTH_AUGUST, 17},
    {CALENDAR_MONTH_AUGUST, 18}, {CALENDAR_MONTH_AUGUST, 19}, {CALENDAR_MONTH_AUGUST, 20},
    {CALENDAR_MONTH_AUGUST, 21}, {CALENDAR_MONTH_AUGUST, 23}, {CALENDAR_MONTH_AUGUST, 24},
    {CALENDAR_MONTH_AUGUST, 25}, {CALENDAR_MONTH_AUGUST, 26}, {CALENDAR_MONTH_AUGUST, 27},
    {CALENDAR_MONTH_AUGUST, 28}, {CALENDAR_MONTH_AUGUST, 29}, {CALENDAR_MONTH_AUGUST, 30},
    {CALENDAR_MONTH_AUGUST, 31}, {CALENDAR_MONTH_SEPTEMBER, 21}, {CALENDAR_MONTH_SEPTEMBER, 22},
    {CALENDAR_MONTH_SEPTEMBER, 23}, {CALENDAR_MONTH_OCTOBER, 12}, {CALENDAR_MONTH_NOVEMBER, 3},
    {CALENDAR_MONTH_NOVEMBER, 17}, {CALENDAR_MONTH_NOVEMBER, 18}, {CALENDAR_MONTH_NOVEMBER, 19},
    {CALENDAR_MONTH_NOVEMBER, 20}, {CALENDAR_MONTH_NOVEMBER, 23}, {CALENDAR_MONTH_DECEMBER, 23},
    {CALENDAR_MONTH_DECEMBER, 27}, {CALENDAR_MONTH_DECEMBER, 28}, {CALENDAR_MONTH_DECEMBER, 29},
    {CALENDAR_MONTH_DECEMBER, 30}, {CALENDAR_MONTH_DECEMBER, 31}, {CALENDAR_MONTH_JANUARY, 1},
    {CALENDAR_MONTH_JANUARY, 2}, {CALENDAR_MONTH_JANUARY, 3}, {CALENDAR_MONTH_JANUARY, 4},
    {CALENDAR_MONTH_JANUARY, 5}, {CALENDAR_MONTH_JANUARY, 6}, {CALENDAR_MONTH_JANUARY, 7},
    {CALENDAR_MONTH_JANUARY, 10}, {CALENDAR_MONTH_JANUARY, 11}, {CALENDAR_MONTH_FEBRUARY, 11},
    {CALENDAR_MONTH_MARCH, 22}, {-1, -1},
};

const s16 gNumOfDaysInMonths[CALENDAR_MONTH_MAX - 1] =
{  /*JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC*/
     31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};
#pragma alias gNumOfDaysInMonths_abs gNumOfDaysInMonths
extern u8 gNumOfDaysInMonths_abs[];

// 005e38d0. Moon phases from April 5, 2009 through April 4, 2010.
// Values intentionally use MoonPhases' retail enum order; the final four entries are zero.
static const u8 daysMoonPhases[365] =
{
    10, 11, 12, 13, 14, 15, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 0, 1,
    2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 29, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 0, 1, 2,
    3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 29, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 29, 0, 1, 2, 3,
    4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 17, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 27, 29, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12,
    13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 0, 1, 2, 3,
    4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
    25, 26, 27, 28, 28, 29, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14,
    15, 0, 0, 0, 0,
};

static KwlnTask* sClndTask; // 007cdfec. Task name = "CalenderDraw"

s32 clndFindAndExecSiteibiEvents();
u32 func_0017db40(s16 daysSinceApr5);
#pragma alias clndGetTimeSigned datGetTime
extern s16 clndGetTimeSigned(void);
#pragma alias clndIsHolidayOrSunday_u32 clndIsHolidayOrSunday
extern u32 clndIsHolidayOrSunday_u32(void);
KwlnTask* func_0017fc70(KwlnTask* clndTask);
KwlnTask* func_00180a20(KwlnTask* clndTask);
KwlnTask* func_00180c40(KwlnTask* clndTask);
void func_00180e60(void);
KwlnTask* func_00180ee0(KwlnTask* clndTask);
KwlnTask* func_00181010(KwlnTask* clndTask);
KwlnTask* func_00181170(KwlnTask* clndTask);
KwlnTask* func_00181310(KwlnTask* clndTask);
KwlnTask* func_00181430(KwlnTask* clndTask);
KwlnTask* func_00181580(KwlnTask* clndTask, u32* specialAction);
void func_00181b70(void);
void func_001848f0(KwlnTask* task, u32 confirmed);
void func_00184c80(KwlnTask* task, u32 confirmed);
KwlnTask* func_00184db0(KwlnTask* parent);
KwlnTask* func_00187550(KwlnTask* parent);
void* func_00184f00(KwlnTask* task);
void func_00185830(KwlnTask* task);
KwlnTask* func_00185880(KwlnTask* parent, s16 sourceMonth, s16 sourceDay, s16 targetMonth, s16 targetDay);
void func_00185980(void* resource, CalendarPackedPosition position, u32 alpha, s16 day);
void func_00185ae0(void* resource, CalendarPackedPosition position, u32 alpha, s16 day);
void func_00185b40(void* resource, CalendarPackedPosition position, u32 alpha, s16 month, s16 day);
void func_00186050(void* resource, CalendarPackedPosition position, u32 alpha);
void func_00186100(void* resource, CalendarPackedPosition position, u32 alpha);
void func_00186140(void* resource, CalendarPackedPosition position, u32 alpha);
void* func_00186190(KwlnTask* task);
void func_001868f0(KwlnTask* task);
KwlnTask* func_00186960(KwlnTask* parent, s32 currentValue, s32 targetValue);
void func_00186a40(void* resource, CalendarPackedPosition position, u32 alpha, s16 selection);
void func_00186bd0(void* resource, CalendarPackedPosition position, u32 alpha, s16 selection);
void* func_00186d50(KwlnTask* task);
void func_00187050(KwlnTask* task);
KwlnTask* func_001870e0(KwlnTask* parent);
void* func_001871a0(KwlnTask* task);
void func_001875f0(s32 angle, s32 scaleAngle, s32 alpha);
void* func_00187be0(KwlnTask* task);
KwlnTask* func_00187e20(void);
void func_00187ec0(KwlnTask* task, s32 month, s32 day, s32 time);
void* func_00188250(KwlnTask* task);
void func_001883d0(KwlnTask* task);
void func_00188420(KwlnTask* task, s32 month, s32 day, s32 time);
KwlnTask* func_00188440(KwlnTask* parent, s32 month, s32 day, s32 time);
#pragma alias func_00188640_calendar func_00188640
extern KwlnTask* func_00188640_calendar(void);
u32 clnd00184d90(KwlnTask* task);
KwlnTask* func_00181950(KwlnTask* clndTask, s32 eventIndex);
typedef struct
{
    u8* records;
    u32 total;
} CalendarDateTable;

extern u16* func_00170620(s16 pcId, s16 index);
extern void datSetFlag(s32 bit, u8 enabled);
extern s32 clndGetMonthFromDaysSinceApr5(s32 daysSinceApr5);
extern s32 clndGetDayOfMonthFromDaysSinceApr5(s32 daysSinceApr5);
extern void func_0016d6b0(s16 socialLink, s16 condition);
extern void func_0027d8d0(void);
extern CalendarDateTable* func_003bd890(void);
extern CalendarDateTable* func_003bd8a0(void);
extern KwlnTask* func_001b7700(KwlnTask* parent);
extern void func_001fa450(void);
extern void func_001a5cd0(void);
extern KwlnTask* func_003c1ab0(KwlnTask* parent, u8 time);
extern KwlnTask* func_003bdd60(u32 priority, u16 procedure);
extern KwlnTask* func_001ba5f0(KwlnTask* parent, ...);
extern u32 func_00195290(KwlnTask* task);
extern void func_00195020(KwlnTask* task);
extern u32 func_00488f30(void);

extern const u8 D_005E3C20[];
#define CLND_SCHEDULE_DEFAULTS ((const u8*)0x005e3bc0)
void* clndUpdateTask(KwlnTask* clndTask);
void clndDestroyTask(KwlnTask* clndTask);

 

// W295: fell to volatile lhu arg pin + pointer-cast offset addu orientation; not a floor.





#pragma push
/* Removing this loses FUN_0017d830 (MATCH nd0 -> MISMATCH nd93) and 4 more - measured W161. */
#pragma opt_loop_invariants on
 
// FUN_0017d830 MATCHING
s32 clndGetMonthFromDaysSinceApr5(s32 daysSinceApr5)
{
    s16 days;
    s16 month;

    month = CALENDAR_MONTH_APRIL;
    days = daysSinceApr5 + 4;

    while (true)
    {
        if (days < ((const s16*)gNumOfDaysInMonths_abs)[month - 1])
        {
            break;
        }

        days -= ((const s16*)gNumOfDaysInMonths_abs)[month - 1];
        month++;

        if (month > CALENDAR_MONTH_DECEMBER)
        {
            month = CALENDAR_MONTH_JANUARY;
        }
    }

    return month;
}

#pragma opt_propagation on
// FUN_0017d8b0 MATCHING
s32 clndGetDaysSinceStartFromDate(s32 month, s32 day)
{
    s32 dayAccumulator = 0;
    s32 m = CALENDAR_MONTH_APRIL;
    s32 monthEnd = CALENDAR_MONTH_MAX;
    s32 monthsInYear = CALENDAR_MONTH_DECEMBER;
    s32 firstMonth = CALENDAR_MONTH_JANUARY;
    s32 startMonth;
    startMonth = m;

    for (;;)
    {
        if (month == startMonth)
        {
            break;
        }

        dayAccumulator += ((const s16*)gNumOfDaysInMonths_abs)[m - 1];
        m++;
        month--;

        if (month == 0)
        {
            month = monthsInYear;
        }
        if (m == monthEnd)
        {
            m = firstMonth;
        }
    }

    return dayAccumulator + (day - 5); // - 5 because the game starts in april 5th
}

// FUN_0017d920 MATCHING
u32 clndGetCurrentMonth()
{
    s16 daysSinceApr5;
    s16 month;

    daysSinceApr5 = datGetDaysSinceApr5();
    month = CALENDAR_MONTH_APRIL;
    daysSinceApr5 += 4;
    while (true)
    {
        if (daysSinceApr5 < gNumOfDaysInMonths[month - 1])
        {
            break;
        }

        daysSinceApr5 -= gNumOfDaysInMonths[month - 1];
        month++;
        if (month > CALENDAR_MONTH_DECEMBER)
        {
            month = CALENDAR_MONTH_JANUARY;
        }
    }

    return month;
}

// FUN_0017d9c0 MATCHING
s32 clndGetDayOfMonthFromDaysSinceApr5(s32 daysSinceApr5)
{
    s16 days;
    s16 month;

    month = CALENDAR_MONTH_APRIL;
    days = daysSinceApr5 + 4;

    while (true)
    {
        if (days < gNumOfDaysInMonths[month - 1])
        {
            break;
        }

        days -= gNumOfDaysInMonths[month - 1];
        month++;

        if (month > CALENDAR_MONTH_DECEMBER)
        {
            month = CALENDAR_MONTH_JANUARY;
        }
    }

    return days + 1;
}

// FUN_0017da40. Return the current day of the month MATCHING
u32 clndGetCurrentDay()
{
    s16 daysSinceApr5;
    s16 month;
    daysSinceApr5 = datGetDaysSinceApr5();
    month = CALENDAR_MONTH_APRIL;
    daysSinceApr5 += 4;
    while (true)
    {
        if (daysSinceApr5 < gNumOfDaysInMonths[month - 1])
        {
            break;
        }

        daysSinceApr5 -= gNumOfDaysInMonths[month - 1];
        month++;
        if (month > CALENDAR_MONTH_DECEMBER)
        {
            month = CALENDAR_MONTH_JANUARY;
        }
    }

    return daysSinceApr5 + 1;
}
#pragma pop

// FUN_0017dae0
s32 clndGetWeekDay(s32 daysSinceApr5)
{
    return (daysSinceApr5 + CALENDAR_DAY_MAX) % CALENDAR_DAY_MAX;
}

// FUN_0017db00
u32 clndGetCurrentWeekDay()
{
    s32 daysSinceApr5 = datGetDaysSinceApr5();

    return (daysSinceApr5 + CALENDAR_DAY_MAX) % CALENDAR_DAY_MAX;
}
/* W357 measured opt_loop_invariants on: without nd273/object408, with nd268/object404; window 432; retained. */
#pragma opt_loop_invariants on
/* W416 width audit: retail candidate offsets 0xd4/0xf8/0x120/0x128/0x12c all use 0x10 extension shifts; ours' corresponding pairs also use 0x10 (layout differs), so no shift-width defect was confirmed. A complete explicit s16 cast probe measured nd301/object444 (window432), rejected vs nd268/object404 (rates 0.677928 vs 0.663366). */
// FUN_0017DB40
#ifndef PC_BUILD
asm u32 func_0017db40(s16 daysSinceApr5)
{
  .set noreorder
  .word 0x0004243c
  .word 0x0004243f
  .word 0x24830007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001010
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000005d
  .word 0x00000000
  .word 0x24080004
  .word 0x24870004
  .word 0x00074c3c
  .word 0x00094c3f
  .word 0x24020001
  .word 0x3c05005e
  .word 0x24a53b60
  .word 0x0008343c
  .word 0x0006343f
  .word 0x00061840
  .word 0x00a31821
  .word 0x8464fffe
  .word 0x00091c3c
  .word 0x00031c3f
  .word 0x0064182a
  .word 0x1460000d
  .word 0x00000000
  .word 0x01241823
  .word 0x00034c3c
  .word 0x00094c3f
  .word 0x25030001
  .word 0x0003443c
  .word 0x0008443f
  .word 0x2901000d
  .word 0x1420ffee
  .word 0x00000000
  .word 0x0040402d
  .word 0x1000ffeb
  .word 0x00000000
  .word 0x0006443c
  .word 0x0008443f
  .word 0x24090004
  .word 0x00073c3c
  .word 0x00073c3f
  .word 0x24020001
  .word 0x3c06005e
  .word 0x24c63b60
  .word 0x00091c3c
  .word 0x00031c3f
  .word 0x00031840
  .word 0x00c31821
  .word 0x8465fffe
  .word 0x0007243c
  .word 0x0004243f
  .word 0x0085182a
  .word 0x1460000d
  .word 0x00000000
  .word 0x00e51823
  .word 0x00033c3c
  .word 0x00073c3f
  .word 0x25230001
  .word 0x00034c3c
  .word 0x00094c3f
  .word 0x2921000d
  .word 0x1420ffee
  .word 0x00000000
  .word 0x0040482d
  .word 0x1000ffeb
  .word 0x00000000
  .word 0x24820001
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000482d
  .word 0x0008343c
  .word 0x0006343f
  .word 0x3c05005e
  .word 0x24a53a40
  .word 0x2404ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x00031080
  .word 0x00a21821
  .word 0x84620000
  .word 0x10440011
  .word 0x00000000
  .word 0x14c20007
  .word 0x00000000
  .word 0x84620002
  .word 0x14e20004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000a
  .word 0x00000000
  .word 0x25220001
  .word 0x00024c3c
  .word 0x00094c3f
  .word 0x00091c3c
  .word 0x00031c3f
  .word 0x28620164
  .word 0x1440ffec
  .word 0x00000000
  .word 0x0000102d
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
#pragma opt_loop_invariants reset
#pragma push
#pragma opt_loop_invariants on
// FUN_0017dcf0
u8 clndIsHolidayOrSunday()
{
    s16 daysSinceApr5;
    s16 currDayOfMonth;
    s16 currMonth;
    s16 i;
    s32 month;
    const Holiday* holidays;
    s32 day;
    s16 sentinel;

    daysSinceApr5 = datGetDaysSinceApr5();
    if ((daysSinceApr5 + CALENDAR_DAY_MAX) % CALENDAR_DAY_MAX == CALENDAR_DAY_SUNDAY)
    {
        return true;
    }

    currMonth = clndGetMonthFromDaysSinceApr5(daysSinceApr5);
    currDayOfMonth = clndGetDayOfMonthFromDaysSinceApr5(daysSinceApr5);
    i = 0;
    month = currMonth;
    day = currDayOfMonth;
    holidays = sHolidays;
    sentinel = -1;
    for (; i < 0x164; i++)
    {
        if (holidays[i].month == sentinel)
        {
            break;
        }
        if (month == holidays[i].month && day == holidays[i].day)
        {
            return true;
        }
    }

    return false;
}
#pragma pop
#pragma opt_loop_invariants on
#pragma push
#pragma opt_propagation off

// Residual is limited to MWCC register coloring and branch layout; date and holiday logic matches retail.
#pragma opt_loop_invariants reset
/* W357 measured opt_lifetimes on: without nd290/object608, with nd288/object608; window 608; retained. */
#pragma opt_lifetimes on
/* W416 width audit: retail candidate offsets 0x104/0x108/0x188/0x1e8 all use 0x10 extension shifts; ours' corresponding pairs also use 0x10. Complete explicit s16 increment/subtraction casts measured nd392/object624 (window608), rejected vs nd288/object608 (rates 0.628205 vs 0.473684). */
/* Preserve the scoped opt_lifetimes/opt_loop_invariants state below; this probe did not justify changing it. */
// FUN_0017DDF0
#ifndef PC_BUILD
asm u32 func_0017ddf0(s16* monthOut, s16* dayOut)
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
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24420001
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0011843c
  .word 0x0010843f
  .word 0x2a02015f
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000078
  .word 0x00000000
  .word 0x26030007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001010
  .word 0x14400004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000029
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05f60c
  .word 0x00000000
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x0200202d
  .word 0x0c05f670
  .word 0x00000000
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000402d
  .word 0x0014343c
  .word 0x0006343f
  .word 0x3c05005e
  .word 0x24a53a40
  .word 0x2404ffff
  .word 0x10000011
  .word 0x00000000
  .word 0x00031080
  .word 0x00a21821
  .word 0x84620000
  .word 0x10440011
  .word 0x00000000
  .word 0x14c20007
  .word 0x00000000
  .word 0x84620002
  .word 0x14e20004
  .word 0x00000000
  .word 0x24020001
  .word 0x1000000a
  .word 0x00000000
  .word 0x25020001
  .word 0x0002443c
  .word 0x0008443f
  .word 0x00081c3c
  .word 0x00031c3f
  .word 0x28620164
  .word 0x1440ffec
  .word 0x00000000
  .word 0x0000102d
  .word 0x14400006
  .word 0x00000000
  .word 0x26220001
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x1000ffc1
  .word 0x00000000
  .word 0x24070004
  .word 0x26080004
  .word 0x00084c3c
  .word 0x00094c3f
  .word 0x24020001
  .word 0x3c05005e
  .word 0x24a53b60
  .word 0x0007343c
  .word 0x0006343f
  .word 0x00061840
  .word 0x00a31821
  .word 0x8464fffe
  .word 0x00091c3c
  .word 0x00031c3f
  .word 0x0064182a
  .word 0x1460000d
  .word 0x00000000
  .word 0x01241823
  .word 0x00034c3c
  .word 0x00094c3f
  .word 0x24e30001
  .word 0x00033c3c
  .word 0x00073c3f
  .word 0x28e1000d
  .word 0x1420ffee
  .word 0x00000000
  .word 0x0040382d
  .word 0x1000ffeb
  .word 0x00000000
  .word 0x00063c3c
  .word 0x00073c3f
  .word 0x24090004
  .word 0x0008443c
  .word 0x0008443f
  .word 0x24020001
  .word 0x3c06005e
  .word 0x24c63b60
  .word 0x00091c3c
  .word 0x00031c3f
  .word 0x00031840
  .word 0x00c31821
  .word 0x8465fffe
  .word 0x0008243c
  .word 0x0004243f
  .word 0x0085182a
  .word 0x1460000d
  .word 0x00000000
  .word 0x01051823
  .word 0x0003443c
  .word 0x0008443f
  .word 0x25230001
  .word 0x00034c3c
  .word 0x00094c3f
  .word 0x2921000d
  .word 0x1420ffee
  .word 0x00000000
  .word 0x0040482d
  .word 0x1000ffeb
  .word 0x00000000
  .word 0x24820001
  .word 0xa6670000
  .word 0xa6420000
  .word 0x24020001
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
#endif /* PC_BUILD: asm function omitted */
#pragma pop
/* Reset the outer loop-invariant state restored by the 17DDF0 push/pop: without this, 185B40 is 1304/1296; with it, 1280/1296. */
#pragma opt_loop_invariants reset

#pragma opt_lifetimes reset
// FUN_0017E050
#ifndef PC_BUILD
asm u32 func_0017e050(s32 category, s16 month, s32 day)
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
  .word 0x24100004
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24420004
  .word 0x0002443c
  .word 0x0008443f
  .word 0x0000382d
  .word 0x24020001
  .word 0x3c06005e
  .word 0x24c63b60
  .word 0x00101c3c
  .word 0x00031c3f
  .word 0x00031840
  .word 0x00c31821
  .word 0x8465fffe
  .word 0x00081c3c
  .word 0x00031c3f
  .word 0x0065202a
  .word 0x14800010
  .word 0x00000000
  .word 0x01051823
  .word 0x0003443c
  .word 0x0008443f
  .word 0x00e51821
  .word 0x00033c3c
  .word 0x00073c3f
  .word 0x26030001
  .word 0x0003843c
  .word 0x0010843f
  .word 0x2a01000d
  .word 0x1420ffeb
  .word 0x00000000
  .word 0x0040802d
  .word 0x1000ffe8
  .word 0x00000000
  .word 0x00072c3c
  .word 0x00052c3f
  .word 0x24a20003
  .word 0x24040007
  .word 0x0044001a
  .word 0x00001010
  .word 0x0002443c
  .word 0x0008443f
  .word 0x0000302d
  .word 0x0000382d
  .word 0x1000000d
  .word 0x00000000
  .word 0x25020001
  .word 0x0002443c
  .word 0x0008443f
  .word 0x15040005
  .word 0x00000000
  .word 0x24c20001
  .word 0x0002343c
  .word 0x0006343f
  .word 0x0000402d
  .word 0x24e20001
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0007143c
  .word 0x0002143f
  .word 0x0043102a
  .word 0x1440fff0
  .word 0x00000000
  .word 0x24020065
  .word 0x1262008e
  .word 0x00000000
  .word 0x24020064
  .word 0x12620081
  .word 0x00000000
  .word 0x24020007
  .word 0x12620070
  .word 0x00000000
  .word 0x24020006
  .word 0x1262005f
  .word 0x00000000
  .word 0x24020005
  .word 0x1262004e
  .word 0x00000000
  .word 0x24020004
  .word 0x1262003d
  .word 0x00000000
  .word 0x24020003
  .word 0x1262002c
  .word 0x00000000
  .word 0x24020002
  .word 0x1262001c
  .word 0x00000000
  .word 0x24020001
  .word 0x1262000c
  .word 0x00000000
  .word 0x12600003
  .word 0x00000000
  .word 0x1000007f
  .word 0x00000000
  .word 0x16450096
  .word 0x00000000
  .word 0x24630001
  .word 0x16230093
  .word 0x00000000
  .word 0x10000092
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001010
  .word 0x14400087
  .word 0x00000000
  .word 0x24020001
  .word 0x10000085
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x24020001
  .word 0x14620079
  .word 0x00000000
  .word 0x10000078
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x24020002
  .word 0x1462006c
  .word 0x00000000
  .word 0x24020001
  .word 0x1000006a
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x24020003
  .word 0x1462005e
  .word 0x00000000
  .word 0x24020001
  .word 0x1000005c
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x24020004
  .word 0x14620050
  .word 0x00000000
  .word 0x24020001
  .word 0x1000004e
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x24020005
  .word 0x14620042
  .word 0x00000000
  .word 0x24020001
  .word 0x10000040
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x24020006
  .word 0x14620034
  .word 0x00000000
  .word 0x24020001
  .word 0x10000032
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x1040002a
  .word 0x00000000
  .word 0x24020001
  .word 0x10000028
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001010
  .word 0x1040001d
  .word 0x00000000
  .word 0x24020001
  .word 0x1000001b
  .word 0x00000000
  .word 0x00061c3c
  .word 0x00031c3f
  .word 0x2402000a
  .word 0x0262001a
  .word 0x00001012
  .word 0x2442ffff
  .word 0x14620012
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x2402000a
  .word 0x0262001a
  .word 0x00001010
  .word 0x2442ffff
  .word 0x14430004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000002
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */
// FUN_0017e480
u32 clndIsDateInRange(u32 startMonth, u32 startDay, u32 endMonth, u32 endDay)
{
    s32 startDate = clndGetDaysSinceStartFromDate(startMonth, startDay);
    s32 endDate = clndGetDaysSinceStartFromDate(endMonth, endDay);

    if (datGetDaysSinceApr5() >= startDate && datGetDaysSinceApr5() <= endDate)
    {
        return true;
    }

    return false;
}
#define CLND_SKIP_TRANSITION_ACTIVE DAT_007cdffc
extern u32 DAT_007cdffc;


 



// FUN_0017e520
u8 clndIsDateInRangeFromDate(u32 monthToTest, u32 dayToTest,
                                  u32 startMonth, u32 startDay,
                                  u32 endMonth, u32 endDay)
{
    s32 startDate = clndGetDaysSinceStartFromDate(startMonth, startDay);
    s32 endDate = clndGetDaysSinceStartFromDate(endMonth, endDay);
    s32 testDate = clndGetDaysSinceStartFromDate(monthToTest, dayToTest);

    if (testDate >= startDate && testDate <= endDate)
    {
        return true;
    }

    return false;
}

// FUN_0017e5d0
u8 clndIsDateInRangeFromStart(u32 month, u32 day, u32 range)
{
    s32 startDate;
    s32 endDate;

    if (range == 0)
    {
        H_Dbprt_FmtLog("Calender chk range is 0");
        return false;
    }

    startDate = clndGetDaysSinceStartFromDate(month, day);
    endDate = startDate + (range - 1);

    if (datGetDaysSinceApr5() >= startDate && datGetDaysSinceApr5() <= endDate)
    {
        return true;
    }

    return false;
}

/* W357 measured opt_loop_invariants on: without nd2861/object4668, with nd2662/object4636; window 4688; retained. */
#pragma opt_loop_invariants on
// FUN_0017e680
asm void* clndUpdateTask(KwlnTask* clndTask)
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
  .word 0x0080902d
  .word 0x8c90003c
  .word 0x8e020000
  .word 0x2c410019
  .word 0x10200479
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636560
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xafa00080
  .word 0xafa00084
  .word 0x240200fc
  .word 0xafa20088
  .word 0x240200a8
  .word 0xafa2008c
  .word 0x3c0241c0
  .word 0xafa200a0
  .word 0x3c0242a8
  .word 0xafa200a4
  .word 0x240200ff
  .word 0xa3a200af
  .word 0xa3a000ac
  .word 0x24020064
  .word 0xa3a200ae
  .word 0xa3a000ad
  .word 0x3c024000
  .word 0x44826000
  .word 0xdfa500a0
  .word 0x27a60080
  .word 0x8fa700ac
  .word 0x0c04016c
  .word 0x00000000
  .word 0xae020008
  .word 0xafa00080
  .word 0xafa00084
  .word 0x24020024
  .word 0xafa20088
  .word 0x2402000c
  .word 0xafa2008c
  .word 0x3c0241c0
  .word 0xafa200a0
  .word 0x3c0242a8
  .word 0xafa200a4
  .word 0x240200ff
  .word 0xa3a200af
  .word 0x24020078
  .word 0xa3a200ac
  .word 0xa3a000ae
  .word 0xa3a000ad
  .word 0x3c023f80
  .word 0x44826000
  .word 0x0240202d
  .word 0xdfa500a0
  .word 0x27a60080
  .word 0x8fa700ac
  .word 0x0c04016c
  .word 0x00000000
  .word 0xae020004
  .word 0x24020001
  .word 0xae020000
  .word 0x1000043d
  .word 0x00000000
  .word 0x3c02007e
  .word 0x94430952
  .word 0x30628000
  .word 0x10400015
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2442ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x044100fc
  .word 0x00000000
  .word 0x2404016c
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x100000f7
  .word 0x00000000
  .word 0x30622000
  .word 0x10400016
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24420001
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2841016d
  .word 0x142000e4
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x100000df
  .word 0x00000000
  .word 0x30621000
  .word 0x10400015
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2442fff9
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x044100cd
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x100000c8
  .word 0x00000000
  .word 0x30624000
  .word 0x10400016
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24420007
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2841016d
  .word 0x142000b5
  .word 0x00000000
  .word 0x2404016c
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x100000b0
  .word 0x00000000
  .word 0x30620004
  .word 0x10400023
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x14400015
  .word 0x00000000
  .word 0x24040008
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1040009f
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2442ffff
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x10000094
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x2442ffff
  .word 0x304400ff
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x1000008b
  .word 0x00000000
  .word 0x30620008
  .word 0x10400024
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020008
  .word 0x14620015
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10400079
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24420001
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x1000006e
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x24420001
  .word 0x304400ff
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x10000065
  .word 0x00000000
  .word 0x30620001
  .word 0x1040002a
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f60c
  .word 0x00000000
  .word 0x24030004
  .word 0x10430059
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f60c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x00111840
  .word 0x3c02005e
  .word 0x24423b5e
  .word 0x00431021
  .word 0x84420000
  .word 0x00821023
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x0441003e
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x10000039
  .word 0x00000000
  .word 0x30620002
  .word 0x1040002b
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f60c
  .word 0x00000000
  .word 0x24030003
  .word 0x1043002d
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f60c
  .word 0x00000000
  .word 0x0040882d
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x00111840
  .word 0x3c02005e
  .word 0x24423b5e
  .word 0x00431021
  .word 0x84420000
  .word 0x00821021
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2841016d
  .word 0x14200011
  .word 0x00000000
  .word 0x2404016c
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x1000000c
  .word 0x00000000
  .word 0x3c02007e
  .word 0x9442094e
  .word 0x30420040
  .word 0x10400007
  .word 0x00000000
  .word 0x2404141d
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24020002
  .word 0xae020000
  .word 0x24130004
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24420004
  .word 0x00023c3c
  .word 0x00073c3f
  .word 0x0000302d
  .word 0x24020001
  .word 0x3c05005e
  .word 0x24a53b60
  .word 0x0013943c
  .word 0x0012943f
  .word 0x00121840
  .word 0x00a3a821
  .word 0x86a4fffe
  .word 0x00078c3c
  .word 0x00118c3f
  .word 0x0224182a
  .word 0x14600010
  .word 0x00000000
  .word 0x00e41823
  .word 0x00033c3c
  .word 0x00073c3f
  .word 0x00c41821
  .word 0x0003343c
  .word 0x0006343f
  .word 0x26630001
  .word 0x00039c3c
  .word 0x00139c3f
  .word 0x2a61000d
  .word 0x1420ffeb
  .word 0x00000000
  .word 0x0040982d
  .word 0x1000ffe8
  .word 0x00000000
  .word 0x0006143c
  .word 0x0002143f
  .word 0x24430003
  .word 0x24020007
  .word 0x0062001a
  .word 0x0000b010
  .word 0x0016a43c
  .word 0x0014a43f
  .word 0x3c024000
  .word 0x44821800
  .word 0xafa20098
  .word 0x3c024110
  .word 0xafa2009c
  .word 0x3c024040
  .word 0x44821000
  .word 0x44940000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46030018
  .word 0x4601101c
  .word 0xe7a00098
  .word 0x0000982d
  .word 0x10000023
  .word 0x00000000
  .word 0x24660001
  .word 0xdfa40098
  .word 0x27859390
  .word 0x0c041344
  .word 0x00000000
  .word 0xc7a10098
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000840
  .word 0xe7a10098
  .word 0x26820001
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x2a810007
  .word 0x1420000f
  .word 0x00000000
  .word 0x2682fff9
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x3c0241a8
  .word 0x44820000
  .word 0x00000000
  .word 0x46000801
  .word 0xe7a00098
  .word 0xc7a1009c
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a0009c
  .word 0x26620001
  .word 0x00029c3c
  .word 0x00139c3f
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x86a2fffe
  .word 0x0062102a
  .word 0x1440ffd9
  .word 0x00000000
  .word 0x3c024000
  .word 0xafa20098
  .word 0x3c0240e0
  .word 0xafa2009c
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304800ff
  .word 0x26270001
  .word 0xdfa40098
  .word 0x27859398
  .word 0x0240302d
  .word 0x0c041344
  .word 0x00000000
  .word 0x3c024120
  .word 0xafa20098
  .word 0x3c0240e0
  .word 0xafa2009c
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x2c410009
  .word 0x1020003f
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636530
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xdfa40098
  .word 0x3c05005e
  .word 0x24a53ba0
  .word 0x0c041344
  .word 0x00000000
  .word 0x10000031
  .word 0x00000000
  .word 0xdfa40098
  .word 0x278593a0
  .word 0x0c041344
  .word 0x00000000
  .word 0x1000002b
  .word 0x00000000
  .word 0xdfa40098
  .word 0x278593a8
  .word 0x0c041344
  .word 0x00000000
  .word 0x10000025
  .word 0x00000000
  .word 0xdfa40098
  .word 0x3c05005e
  .word 0x24a53bb0
  .word 0x0c041344
  .word 0x00000000
  .word 0x1000001e
  .word 0x00000000
  .word 0xdfa40098
  .word 0x278593b0
  .word 0x0c041344
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0xdfa40098
  .word 0x3c05005e
  .word 0x24a53bc0
  .word 0x0c041344
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0xdfa40098
  .word 0x278593b8
  .word 0x0c041344
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0xdfa40098
  .word 0x278593c0
  .word 0x0c041344
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0xdfa40098
  .word 0x278593c8
  .word 0x0c041344
  .word 0x00000000
  .word 0x3c0241c0
  .word 0x44822000
  .word 0xafa20098
  .word 0x3c0242d8
  .word 0xafa2009c
  .word 0x00162c3c
  .word 0x00052c3f
  .word 0x3c024040
  .word 0x44820800
  .word 0x44850000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000882
  .word 0x3c024140
  .word 0x44820800
  .word 0x44800000
  .word 0x00000000
  .word 0x46040018
  .word 0x4602081c
  .word 0xe7a00098
  .word 0x0000202d
  .word 0x3c02437c
  .word 0x44820800
  .word 0x3c024210
  .word 0x44821800
  .word 0x24030007
  .word 0x10000012
  .word 0x00000000
  .word 0xc7a00098
  .word 0x46030080
  .word 0xe7a20098
  .word 0x24a20001
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x14a30007
  .word 0x00000000
  .word 0x0000282d
  .word 0xc7a0009c
  .word 0x46040000
  .word 0xe7a0009c
  .word 0x46011001
  .word 0xe7a00098
  .word 0x24820001
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0004143c
  .word 0x0002143f
  .word 0x0051102a
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50098
  .word 0x0c0401c4
  .word 0x00000000
  .word 0x1000023a
  .word 0x00000000
  .word 0x8e020010
  .word 0x14400004
  .word 0x00000000
  .word 0x0c06136c
  .word 0x00000000
  .word 0xae020010
  .word 0x8e040010
  .word 0x0c061364
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000022d
  .word 0x00000000
  .word 0x24020003
  .word 0xae020000
  .word 0x10000228
  .word 0x00000000
  .word 0x8e020010
  .word 0x14400004
  .word 0x00000000
  .word 0x0c06136c
  .word 0x00000000
  .word 0xae020010
  .word 0x8e040010
  .word 0x0c061364
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x1000021b
  .word 0x00000000
  .word 0x0c05bbd8
  .word 0x00000000
  .word 0x14400007
  .word 0x00000000
  .word 0x8e040010
  .word 0x24050001
  .word 0x0c061320
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24843bd0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e040008
  .word 0x10800003
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0x8e040004
  .word 0x10800003
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xae000008
  .word 0xae000004
  .word 0x24020005
  .word 0xae020000
  .word 0x100001fc
  .word 0x00000000
  .word 0x24020005
  .word 0xae020000
  .word 0x100001f8
  .word 0x00000000
  .word 0x24020006
  .word 0xae020000
  .word 0x100001f4
  .word 0x00000000
  .word 0x24020007
  .word 0xae020000
  .word 0x100001f0
  .word 0x00000000
  .word 0x24020008
  .word 0xae020000
  .word 0x100001ec
  .word 0x00000000
  .word 0x24020009
  .word 0xae020000
  .word 0x100001e8
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020000
  .word 0x100001e4
  .word 0x00000000
  .word 0x2402000b
  .word 0xae020000
  .word 0x100001e0
  .word 0x00000000
  .word 0x2402000c
  .word 0xae020000
  .word 0x100001dc
  .word 0x00000000
  .word 0x2402000d
  .word 0xae020000
  .word 0x100001d8
  .word 0x00000000
  .word 0x0000882d
  .word 0x24050001
  .word 0xae050024
  .word 0xafa000a8
  .word 0x24041410
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x2c410009
  .word 0x1020003d
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636500
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c060288
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000030
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c060310
  .word 0x00000000
  .word 0x0040882d
  .word 0x1000002a
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0603b8
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000024
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c060404
  .word 0x00000000
  .word 0x0040882d
  .word 0x1000001e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c06045c
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000018
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0604c4
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000012
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c06050c
  .word 0x00000000
  .word 0x0040882d
  .word 0x1000000c
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05ff1c
  .word 0x00000000
  .word 0x0040882d
  .word 0x10000006
  .word 0x00000000
  .word 0x0240202d
  .word 0x27a500a8
  .word 0x0c060560
  .word 0x00000000
  .word 0x0040882d
  .word 0x8fa200a8
  .word 0x10400005
  .word 0x00000000
  .word 0x24020010
  .word 0xae020000
  .word 0x10000188
  .word 0x00000000
  .word 0x12200006
  .word 0x00000000
  .word 0xae11000c
  .word 0x2402000e
  .word 0xae020000
  .word 0x10000181
  .word 0x00000000
  .word 0x24020016
  .word 0xae020000
  .word 0x1000017d
  .word 0x00000000
  .word 0x0c09f0ac
  .word 0x00000000
  .word 0x24030003
  .word 0x10430006
  .word 0x00000000
  .word 0x0c09f0ac
  .word 0x00000000
  .word 0x24030002
  .word 0x14430012
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x14400007
  .word 0x00000000
  .word 0x8e040010
  .word 0x24050001
  .word 0x0c061320
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e040010
  .word 0x24050001
  .word 0x0c06123c
  .word 0x00000000
  .word 0x2402000f
  .word 0xae020000
  .word 0x8e04000c
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x1443015c
  .word 0x00000000
  .word 0xae00000c
  .word 0x24020016
  .word 0xae020000
  .word 0x10000157
  .word 0x00000000
  .word 0x8e04000c
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430151
  .word 0x00000000
  .word 0xae00000c
  .word 0x24020016
  .word 0xae020000
  .word 0x1000014c
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x14400007
  .word 0x00000000
  .word 0x8e040010
  .word 0x24050001
  .word 0x0c061320
  .word 0x00000000
  .word 0x10000005
  .word 0x00000000
  .word 0x8e040010
  .word 0x24050001
  .word 0x0c06123c
  .word 0x00000000
  .word 0x24020011
  .word 0xae020000
  .word 0x10000139
  .word 0x00000000
  .word 0x0c09f0ac
  .word 0x00000000
  .word 0x14400135
  .word 0x00000000
  .word 0xae00000c
  .word 0x24020016
  .word 0xae020000
  .word 0x10000130
  .word 0x00000000
  .word 0x8e040010
  .word 0x0c061364
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000129
  .word 0x00000000
  .word 0x8e030024
  .word 0x24020001
  .word 0x146200ca
  .word 0x00000000
  .word 0x0c05bbd8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430043
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0c05bbd0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x00511023
  .word 0x28420006
  .word 0x14400013
  .word 0x00000000
  .word 0x0c05bbd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbd4
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bc60
  .word 0x00000000
  .word 0x24020004
  .word 0xae020000
  .word 0x0000102d
  .word 0x10000102
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0c05bbd0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1622001b
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x305100ff
  .word 0x0c05bbd4
  .word 0x00000000
  .word 0x304200ff
  .word 0x16220013
  .word 0x00000000
  .word 0x0c05bbd0
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbd4
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bc60
  .word 0x00000000
  .word 0x24020004
  .word 0xae020000
  .word 0x0000102d
  .word 0x100000de
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020001
  .word 0x10620003
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x0c060398
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020008
  .word 0x1062004d
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x14400017
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24430007
  .word 0x24020007
  .word 0x0062001a
  .word 0x00001810
  .word 0x24020006
  .word 0x1462000c
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020002
  .word 0x14620006
  .word 0x00000000
  .word 0x24040005
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000c
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020001
  .word 0x14620006
  .word 0x00000000
  .word 0x24040004
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x24030001
  .word 0x1443000c
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0x24020004
  .word 0x14620006
  .word 0x00000000
  .word 0x24040006
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x10000016
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x24420001
  .word 0x304400ff
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x1000000d
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bc54
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x24420001
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05bbdc
  .word 0x00000000
  .word 0x0c05bbd8
  .word 0x00000000
  .word 0x24030001
  .word 0x14430016
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0c05bbd0
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x1622000c
  .word 0x00000000
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x305100ff
  .word 0x0c05bbd4
  .word 0x00000000
  .word 0x304200ff
  .word 0x16220004
  .word 0x00000000
  .word 0x0000202d
  .word 0x0c05bc60
  .word 0x00000000
  .word 0x24020004
  .word 0xae020000
  .word 0x10000057
  .word 0x00000000
  .word 0x0c062190
  .word 0x00000000
  .word 0xae020004
  .word 0x24020014
  .word 0xae020000
  .word 0x10000050
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x1443004a
  .word 0x00000000
  .word 0xae000004
  .word 0x24020015
  .word 0xae020000
  .word 0x10000045
  .word 0x00000000
  .word 0x8f82b30c
  .word 0x1040001c
  .word 0x00000000
  .word 0x8e020010
  .word 0x14400004
  .word 0x00000000
  .word 0x0c06136c
  .word 0x00000000
  .word 0xae020010
  .word 0x8e040010
  .word 0x0c061364
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000035
  .word 0x00000000
  .word 0x8e040010
  .word 0x24050001
  .word 0x0c061320
  .word 0x00000000
  .word 0x0c0606dc
  .word 0x00000000
  .word 0x24020010
  .word 0xae020000
  .word 0xaf80b30c
  .word 0x24020001
  .word 0xae020024
  .word 0x10000027
  .word 0x00000000
  .word 0x24020003
  .word 0xae020000
  .word 0x10000023
  .word 0x00000000
  .word 0x8e020010
  .word 0x14400004
  .word 0x00000000
  .word 0x0c06136c
  .word 0x00000000
  .word 0xae020010
  .word 0x8e040010
  .word 0x0c061364
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x10000016
  .word 0x00000000
  .word 0x8e040010
  .word 0x24050001
  .word 0x0c061320
  .word 0x00000000
  .word 0x0c0606dc
  .word 0x00000000
  .word 0x24020001
  .word 0xae020024
  .word 0x24020010
  .word 0xae020000
  .word 0x10000009
  .word 0x00000000
  .word 0x8e020020
  .word 0x2442ffff
  .word 0xae020020
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
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
  .word 0x27bd00b0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

#pragma opt_loop_invariants reset
// FUN_0017F8D0
void func_0017f8d0(void)
{
    CalendarTaskWork* work;

    if (sClndTask == NULL)
    {
        return;
    }

    if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
    {
        work = sClndTask->workData;
        if (work->state != CLNDTASK_STATE_WAIT_SKIP_CONFIRM)
        {
            work->state = CLNDTASK_STATE_CONFIRM_DAY_CHANGE;
        }
        if (work->actionTask != NULL)
        {
            kwlnTaskDestroyWithHierarchy(work->actionTask);
            work->actionTask = NULL;
        }
    }
    else
    {
        work = sClndTask->workData;
        if (work->state != CLNDTASK_STATE_BEGIN_DAY)
        {
            work->state = CLNDTASK_STATE_DEBUG_WAIT_CLOSE;
        }
        if (work->actionTask != NULL)
        {
            kwlnTaskDestroyWithHierarchy(work->actionTask);
            work->actionTask = NULL;
        }
    }
}

// FUN_0017F990
u32 func_0017f990(void)
{
    CalendarTaskWork* work;

    if (sClndTask == NULL)
    {
        return true;
    }

    if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
    {
        work = sClndTask->workData;
        work->stopDelay = 0x3c;
        work->state = CLNDTASK_STATE_STOP_DELAY;
    }
    else
    {
        work = sClndTask->workData;
        work->debugCursorBg = (KwlnTask*)(uintptr_t)0x3c;
        work->state = CLNDTASK_STATE_BEGIN_DAY_08;
    }

    return true;
}
// FUN_0017fa10
void clndReqSkip()
{
    if (sClndTask != NULL)
    {
        if (datGetScenarioMode() == SCENARIO_MODE_JOURNEY)
        {
            ((CalendarTaskWork*)sClndTask->workData)->state = CLNDTASK_STATE_REQSKIP;
            adminiChangeSeq(ADMINI_SEQ_NULL, NULL, 0, false);
        }
        else
        {
            ((CalendarTaskWork*)sClndTask->workData)->state = CLNDTASK_STATE_BEGIN_DAY_05;
            adminiChangeSeq(ADMINI_SEQ_NULL, NULL, 0, false);
        }
    }
}

// FUN_0017faa0
void clndDestroyTask(KwlnTask* clndTask)
{
    RwFree(clndTask->workData);
    sClndTask = NULL;
}

// FUN_0017FAD0
KwlnTask* func_0017fad0(void)
{
    KwlnTask* task;
    CalendarTaskWork* work;

    work = RwCalloc(1, sizeof(CalendarTaskWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(NULL, 0x106f, "CalenderDraw",
                                          clndUpdateTask, clndDestroyTask, work);
    if (task == NULL)
    {
        return NULL;
    }

    sClndTask = task;
    work->state = CLNDTASK_STATE_DEBUG_WAIT_CLOSE;
    H_SfdPlay_CreateTaskIdle(task);
    return task;
}
// FUN_0017fb90
KwlnTask* clndCreateTask()
{
    KwlnTask* clndTask;
    CalendarTaskWork* work;

    work = RwCalloc(1, sizeof(CalendarTaskWork), rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }

    clndTask = kwlnTaskCreateWithAutoPriority(NULL,
                                              4207,
                                              "CalenderDraw",
                                              clndUpdateTask,
                                              clndDestroyTask,
                                              work);
    if (clndTask == NULL)
    {
        return NULL;
    }

    sClndTask = clndTask;

    work->state = CLNDTASK_STATE_RESTART_SKIP;
    H_SfdPlay_CreateTaskIdle(clndTask);
    if (datGetDaysSinceApr5() == 2)
    {
        work->state = CLNDTASK_STATE_DEBUG_WAIT_CLOSE;
    }

    return clndTask;
}

/* W212: first divergence is the prologue (ours 0x50-byte frame, retail 0x60).
 * Delaying the event pointer and retaining startTime across its call reconciled
 * the frame but regressed nd298 -> nd329 (512/560), so the probe was reverted. */
// FUN_0017FC70
KwlnTask* func_0017fc70(KwlnTask* clndTask)
{
    s32 eventIndex;
    KwlnTask* task = clndTask;
    KwlnTask* actionTask = NULL;

    if (datGetSkipToTarget() == 0)
    {
        if (datGetFlag(0xa02) != 1)
        {
            eventIndex = clndFindAndExecSiteibiEvents();
            if (eventIndex != -1)
            {
                return func_00181950(task, eventIndex);
            }
            else
            {
                printf("calendar: no late-night event");
                {
                    u8 time = datGetTime() & 0xff;
                    actionTask = func_003c1ab0(task, time);
                }
            }
        }
    }

    return actionTask;
}

// FUN_0017FD30
u32 func_0017fd30(void)
{
    s32 pcId;
    s32 index;
    const s16* sourceBase;
    const s16* source;
    s16 value;
    s16* destination;

    for (pcId = 2; pcId < 0xb; pcId++)
    {
        index = 0;
        sourceBase = (const s16*)(D_005E3C20 + pcId * 0x30);
        for (; index < 0xc; index++)
        {
            source = sourceBase + index * 2;
            value = source[-0x30];
            destination = (s16*)func_00170620(pcId, index);
            destination[0] = value;
            value = source[-0x2f];
            destination = (s16*)func_00170620(pcId, index);
            destination[1] = value;
        }
    }

    return true;
}

// FUN_0017FE10
void func_0017fe10(KwlnTask* clndTask)
{
    CalendarDateTable* table;
    s32 i;
    s32 day;
    s32 month;
    u16 flag;
    u32 index;
    const s16* sourceBase;
    const s16* source;
    s16 value;
    u16* destination;
    s32 recordVal;
    int recAddr;

    for (i = 0xbd0; i < 0xc00; i++)
    {
        datSetFlag(i, false);
    }
    datSetFlag(0xa01, false);
    datSetFlag(0xa02, false);
    datSetFlag(0xa04, false);

    table = func_003bd8a0();
    for (month = 2; month < 0xb; month++)
    {
        day = 0;
        sourceBase = (const s16*)(D_005E3C20 + month * 0x30);
        for (; day < 0xc; day++)
        {
            source = sourceBase + day * 2;
            value = source[-0x30];
            destination = func_00170620(month, day);
            destination[0] = value;
            value = source[-0x2f];
            destination = func_00170620(month, day);
            destination[1] = value;
        }
    }

    for (index = 0; index < table->total; index++)
    {
        month = clndGetMonthFromDaysSinceApr5(datGetDaysSinceApr5());
        recordVal = table->records[index * 6];
        if (recordVal != month)
        {
            continue;
        }
        day = clndGetDayOfMonthFromDaysSinceApr5(datGetDaysSinceApr5());
        recAddr = (int)table->records + index * 6;
        recordVal = *(u8 *)(recAddr + 1);
        if (recordVal != day)
        {
            continue;
        }
        flag = *(const u16*)(recAddr + 2);
        if (flag != 0)
        {
            datSetFlag(flag, true);
        }
        flag = *(const u16*)((int)table->records + index * 6 + 4);
        if (flag != 0)
        {
            datSetFlag(flag, false);
        }
    }
    func_001b7700(clndTask);
}

/* W212: first divergence is the prologue (ours 0x60-byte frame, retail 0x40).
 * Recomputing dates in-loop measured nd202 -> nd296 (424/496), and additionally
 * recomputing the record measured nd342 (480/496); both honest probes were reverted. */
// FUN_00180030
void func_00180030(void)
{
    CalendarDateTable* table;
    u32 i;
    u32 currentDate;
    u32 recordDate;
    u8* records;

    table = func_003bd890();
    for (i = 0; i < table->total; i++)
    {
        currentDate = clndGetMonthFromDaysSinceApr5(datGetDaysSinceApr5());
        recordDate = table->records[i * 4];
        if (recordDate != currentDate)
        {
            continue;
        }
        currentDate = clndGetDayOfMonthFromDaysSinceApr5(datGetDaysSinceApr5());
        records = table->records;
        records += i * 4;
        recordDate = records[1];
        if (recordDate != currentDate)
        {
            continue;
        }

        if (table->records[i * 4 + 2] == 1)
        {
            datSetFlag(0xa95, false);
            datSetFlag(0xa96, false);
            datSetFlag(0xa97, false);
            datSetFlag(0xa98, false);
            datSetFlag(0xa99, false);
            datSetFlag(0xa9a, false);
            datSetFlag(0xa7a, false);
            datSetFlag(0xa9b, false);
            datSetFlag(0xa9c, false);
            records = table->records;
            records += i * 4;
            if (records[3] == 5)
            {
                datSetFlag(0xa98, true);
            }
            records = table->records;
            records += i * 4;
            if (records[3] == 3)
            {
                datSetFlag(0xa99, true);
            }
            records = table->records;
            records += i * 4;
            if (records[3] == 2)
            {
                datSetFlag(0xa9b, true);
            }
        }

        records = table->records;
        func_0016d6b0(*(u8 *)((int)records + i * 4 + 2),
                      *(u8 *)((int)records + i * 4 + 3));
    }
}

// FUN_00180220
#ifndef PC_BUILD
asm void func_00180220(void)
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x24100001
  .word 0x100001c5
  .word 0x00000000
  .word 0x0c0ef624
  .word 0x00000000
  .word 0x0040982d
  .word 0x0000a02d
  .word 0x0010943c
  .word 0x0012943f
  .word 0x1000001f
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f60c
  .word 0x00000000
  .word 0x00148880
  .word 0x8e630000
  .word 0x00711821
  .word 0x90630000
  .word 0x14620012
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f670
  .word 0x00000000
  .word 0x8e630000
  .word 0x00712021
  .word 0x90830001
  .word 0x14620007
  .word 0x00000000
  .word 0x90820002
  .word 0x16420004
  .word 0x00000000
  .word 0x24020001
  .word 0x10000007
  .word 0x00000000
  .word 0x26940001
  .word 0x8e620004
  .word 0x0282102b
  .word 0x1440ffdf
  .word 0x00000000
  .word 0x0000102d
  .word 0x14400197
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05b248
  .word 0x00000000
  .word 0x3053ffff
  .word 0x0260882d
  .word 0x26040019
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x26040019
  .word 0x0040282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x3263ffff
  .word 0x24020002
  .word 0x106200a2
  .word 0x00000000
  .word 0x24020003
  .word 0x10620052
  .word 0x00000000
  .word 0x24020005
  .word 0x10620005
  .word 0x00000000
  .word 0x106000a8
  .word 0x00000000
  .word 0x100000a6
  .word 0x00000000
  .word 0x26040019
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0x26040019
  .word 0x0040282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030028
  .word 0x0043001b
  .word 0x00009010
  .word 0x2604000f
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x26430014
  .word 0x00439023
  .word 0x24020001
  .word 0x16020011
  .word 0x00000000
  .word 0x24040a8e
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400004
  .word 0x00000000
  .word 0x2652ffe2
  .word 0x10000017
  .word 0x00000000
  .word 0x24040a8f
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400012
  .word 0x00000000
  .word 0x2652ffc4
  .word 0x1000000f
  .word 0x00000000
  .word 0x24020a2e
  .word 0x00502023
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652ffe2
  .word 0x24020a40
  .word 0x00502023
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400002
  .word 0x00000000
  .word 0x2652ffc4
  .word 0x1e400002
  .word 0x00000000
  .word 0x0000902d
  .word 0x2604000f
  .word 0x0240282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x16400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x24020001
  .word 0x16020064
  .word 0x00000000
  .word 0x24040a9e
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1040005f
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000005c
  .word 0x00000000
  .word 0x26040019
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x04410002
  .word 0x00000000
  .word 0x0000102d
  .word 0x26040019
  .word 0x0040282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x24020003
  .word 0x12020022
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030064
  .word 0x0043001b
  .word 0x00001010
  .word 0x2c410015
  .word 0x10200004
  .word 0x00000000
  .word 0x64130005
  .word 0x1000002b
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030014
  .word 0x0043001b
  .word 0x00009010
  .word 0x2604000f
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x26430019
  .word 0x00439023
  .word 0x06410002
  .word 0x00000000
  .word 0x0000902d
  .word 0x2604000f
  .word 0x0240282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x16400018
  .word 0x00000000
  .word 0x0000982d
  .word 0x10000015
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030014
  .word 0x0043001b
  .word 0x00009010
  .word 0x2604000f
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x26430019
  .word 0x00439023
  .word 0x06410002
  .word 0x00000000
  .word 0x0000902d
  .word 0x2604000f
  .word 0x0240282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x16400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x24020001
  .word 0x16020017
  .word 0x00000000
  .word 0x24040a9e
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400012
  .word 0x00000000
  .word 0x0000982d
  .word 0x1000000f
  .word 0x00000000
  .word 0x2604000f
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x2452ffff
  .word 0x06410002
  .word 0x00000000
  .word 0x0000902d
  .word 0x2604000f
  .word 0x0240282d
  .word 0x0c05bcf8
  .word 0x00000000
  .word 0x16400002
  .word 0x00000000
  .word 0x0000982d
  .word 0x24020003
  .word 0x12020008
  .word 0x00000000
  .word 0x26040019
  .word 0x0c05bce0
  .word 0x00000000
  .word 0x28420064
  .word 0x14400002
  .word 0x00000000
  .word 0x64130002
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0260282d
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x24020001
  .word 0x160200aa
  .word 0x00000000
  .word 0x24040a95
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a96
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a97
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a98
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a99
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a9a
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a9b
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a9c
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a9f
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040acd
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040ace
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a7a
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24050001
  .word 0x14450007
  .word 0x00000000
  .word 0x00a0202d
  .word 0x24050002
  .word 0x0c05b5ac
  .word 0x00000000
  .word 0x10000072
  .word 0x00000000
  .word 0x3262ffff
  .word 0x24060002
  .word 0x10460066
  .word 0x00000000
  .word 0x24040003
  .word 0x10440059
  .word 0x00000000
  .word 0x24030005
  .word 0x10430045
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x10000064
  .word 0x00000000
  .word 0x3222ffff
  .word 0x10460039
  .word 0x00000000
  .word 0x10440026
  .word 0x00000000
  .word 0x10430003
  .word 0x00000000
  .word 0x1000005b
  .word 0x00000000
  .word 0x24040a8e
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400006
  .word 0x00000000
  .word 0x24040a8f
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x24040ace
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x1000004b
  .word 0x00000000
  .word 0x24040a9e
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x24040a9f
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x24040a95
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x1000003a
  .word 0x00000000
  .word 0x24040a9e
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400007
  .word 0x00000000
  .word 0x24040acd
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x1000002f
  .word 0x00000000
  .word 0x24040a9a
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x24040a9c
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000024
  .word 0x00000000
  .word 0x3222ffff
  .word 0x1044000a
  .word 0x00000000
  .word 0x10430003
  .word 0x00000000
  .word 0x1000001d
  .word 0x00000000
  .word 0x24040a96
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000018
  .word 0x00000000
  .word 0x24040a97
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x3222ffff
  .word 0x10440003
  .word 0x00000000
  .word 0x1000000e
  .word 0x00000000
  .word 0x24040a9d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000009
  .word 0x00000000
  .word 0x3222ffff
  .word 0x10400003
  .word 0x00000000
  .word 0x10000004
  .word 0x00000000
  .word 0x24040a9b
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24020001
  .word 0x1602000f
  .word 0x00000000
  .word 0x24040a8e
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a8f
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24040a9e
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x1000000b
  .word 0x00000000
  .word 0x24020a2e
  .word 0x00502023
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24020a40
  .word 0x00502023
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x26100001
  .word 0x2a02000b
  .word 0x1440fe3a
  .word 0x00000000
  .word 0x2404141c
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24100001
  .word 0x1000001b
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05b3d0
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x00022c3c
  .word 0x00052c3f
  .word 0x0010243c
  .word 0x0004243f
  .word 0x0c05b3e4
  .word 0x00000000
  .word 0x0010243c
  .word 0x0004243f
  .word 0x3c050008
  .word 0x0c05b674
  .word 0x00000000
  .word 0x26100001
  .word 0x2a03000b
  .word 0x1460ffe4
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
#endif /* PC_BUILD: asm function omitted */

// FUN_00180A20
KwlnTask* func_00180a20(KwlnTask* clndTask)
{
    s32 eventIndex;
    KwlnTask* task;
    CalendarTaskWork* work;

    task = clndTask;
    work = task->workData;

    datSetFlag(0xa80, false);
    datSetFlag(0xa81, false);
    datSetFlag(0xa82, false);
    datSetFlag(0xa83, false);
    datSetFlag(0xa84, false);
    datSetFlag(0xa85, false);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, false);

    if (datGetSkipToTarget() == 0)
    {
        eventIndex = clndFindAndExecSiteibiEvents();
        if (eventIndex != -1)
        {
            return func_00181950(task, eventIndex);
        }
        if (datGetFlag(0xa00) == 1)
        {
            return NULL;
        }
        if (datGetSkipToTarget() == 0)
        {
            if (datGetFlag(0x1403) == 0)
            {
                datSetFlag(0x1403, true);
                datSetDaysSkipTarget(datGetDaysSinceApr5());
                datSetTimeSkipTarget_u8(datGetTime());
                datSetSkipToTarget(true);
                if (datGetFlag(0xbdf) == 1)
                {
                    if ((datGetTime() & 0xff) == 0)
                    {
                        func_00184c80(work->confirmationTask, true);
                    }
                    else
                    {
                        func_001848f0(work->confirmationTask, true);
                    }
                    return func_001ba5f0(task, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x320, 1, 0, 0);
                }
            }
        }
    }

    return NULL;
}

// FUN_00180C40
KwlnTask* func_00180c40(KwlnTask* clndTask)
{
    CalendarTaskWork* work;
    s32 eventIndex;

    work = clndTask->workData;
    printf("calendar: early morning");
    datSetFlag(0xa80, true);
    datSetFlag(0xa81, false);
    datSetFlag(0xa82, false);
    datSetFlag(0xa83, false);
    datSetFlag(0xa84, false);
    datSetFlag(0xa85, false);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, false);

    if (datGetFlag(0x1402) == 0)
    {
        datSetFlag(0x1402, true);
        datSetFlag(0xbd2, false);
        func_0027d8d0();
        func_001fa450();
        func_0017fe10(clndTask);
        work->validateSkipTarget = false;
        goto calendar_done;
    }
    else
    {
        if (datGetFlag(0x1406) == 0)
        {
            datSetFlag(0x1406, true);
            func_00180220();
            func_001a5cd0();
        }
        if (datGetFlag(0x1405) == 0)
        {
            datSetFlag(0x1405, true);
            func_00180030();
        }
        if (datGetSkipToTarget() == 0)
        {
            eventIndex = clndFindAndExecSiteibiEvents();
            if (eventIndex != -1)
            {
                return func_00181950(clndTask, eventIndex);
            }
            if (func_0017db40(clndGetTimeSigned()) != 0)
            {
                goto early_morning_time;
            }
            return func_003c1ab0(clndTask, datGetTime() & 0xff);
early_morning_time:
            return func_003c1ab0(clndTask, datGetTime() & 0xff);
        }
    }

    return NULL;
calendar_done:
    ;
}

// FUN_00180E60
void func_00180e60(void)
{
    datSetFlag(0x1402, false);
    datSetFlag(0x1403, false);
    datSetFlag(0x1404, false);
    datSetFlag(0x1405, false);
    datSetFlag(0x1406, false);
    datSetFlag(0xa00, false);
}

// FUN_00180EE0
KwlnTask* func_00180ee0(KwlnTask* clndTask)
{
    s32 eventIndex;
    KwlnTask* task = clndTask;
    KwlnTask* actionTask = NULL;

    printf("calendar: morning");
    datSetFlag(0xa80, false);
    datSetFlag(0xa81, true);
    datSetFlag(0xa82, false);
    datSetFlag(0xa83, false);
    datSetFlag(0xa84, false);
    datSetFlag(0xa85, false);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, false);

    if (datGetSkipToTarget() == 0)
    {
        eventIndex = clndFindAndExecSiteibiEvents();
        if (eventIndex != -1)
        {
            return func_00181950(task, eventIndex);
        }
        func_0017db40(datGetDaysSinceApr5());
        actionTask = func_003c1ab0(task, datGetTime() & 0xff);
    }
    return actionTask;
}

// FUN_00181010
KwlnTask* func_00181010(KwlnTask* clndTask)
{
    s32 eventIndex;
    KwlnTask* result;

    result = NULL;
    datSetFlag(0xa80, false);
    datSetFlag(0xa81, false);
    datSetFlag(0xa82, true);
    datSetFlag(0xa83, false);
    datSetFlag(0xa84, false);
    datSetFlag(0xa85, false);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, false);
    if (datGetSkipToTarget() == 0)
    {
        printf("calendar: lunch");
        eventIndex = clndFindAndExecSiteibiEvents();
        if (eventIndex != -1)
        {
            return func_00181950(clndTask, eventIndex);
        }
        if ((datGetDaysSinceApr5() + 7) % 7 == 6)
        {
            return NULL;
        }
        result = func_003c1ab0(clndTask, datGetTime() & 0xff);
    }
    return result;
}

// FUN_00181170
KwlnTask* func_00181170(KwlnTask* clndTask)
{
    KwlnTask* result;
    s32 eventIndex;

    result = NULL;
    datSetFlag(0xa80, false);
    datSetFlag(0xa81, false);
    datSetFlag(0xa82, false);
    datSetFlag(0xa83, true);
    datSetFlag(0xa84, false);
    datSetFlag(0xa85, false);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, false);
    if (datGetSkipToTarget() == 0)
    {
        printf("calendar: afternoon");
        eventIndex = clndFindAndExecSiteibiEvents();
        if (eventIndex != -1)
        {
            return func_00181950(clndTask, eventIndex);
        }
        if (func_0017db40(datGetDaysSinceApr5()) != 0)
        {
            result = func_003c1ab0(clndTask, datGetTime() & 0xff);
            goto ret;
        }
        if ((datGetDaysSinceApr5() + 7) % 7 == 6)
        {
            return NULL;
        }
        result = func_003c1ab0(clndTask, datGetTime() & 0xff);
    }
ret:
    return result;
}

extern const char D_005E3E70[];
// FUN_00181310
KwlnTask* func_00181310(KwlnTask* clndTask)
{
    s32 eventIndex;
    KwlnTask* task = clndTask;
    KwlnTask* actionTask = NULL;

    datSetFlag(0xa80, false);
    datSetFlag(0xa81, false);
    datSetFlag(0xa82, false);
    datSetFlag(0xa83, false);
    datSetFlag(0xa84, true);
    datSetFlag(0xa85, false);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, false);

    if (datGetSkipToTarget() == 0)
    {
        printf(D_005E3E70);
        eventIndex = clndFindAndExecSiteibiEvents();
        if (eventIndex != -1)
        {
            return func_00181950(task, eventIndex);
        }
        actionTask = func_003c1ab0(task, datGetTime() & 0xff);
    }
    return actionTask;
}

// FUN_00181430
KwlnTask* func_00181430(KwlnTask* clndTask)
{
    KwlnTask* result;
    s32 eventIndex;

    result = NULL;
    datSetFlag(0xa80, false);
    datSetFlag(0xa81, false);
    datSetFlag(0xa82, false);
    datSetFlag(0xa83, false);
    datSetFlag(0xa84, false);
    datSetFlag(0xa85, true);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, false);
    printf("calendar: evening");
    if (datGetSkipToTarget() != 0)
    {
        goto done;
    }
    if (datGetFlag(0xa01) != 1)
    {
        eventIndex = clndFindAndExecSiteibiEvents();
        if (eventIndex != -1)
        {
            return func_00181950(clndTask, eventIndex);
        }
        result = func_003c1ab0(clndTask, datGetTime() & 0xff);
    }
    datSetFlag(0xa01, false);
done:
    return result;
}

// FUN_00181580
KwlnTask* func_00181580(KwlnTask* clndTask, u32* specialAction)
{
    u32 sequenceData[2];
    s32 eventIndex;
    KwlnTask* result;

    result = NULL;
    datSetFlag(0xa80, false);
    datSetFlag(0xa81, false);
    datSetFlag(0xa82, false);
    datSetFlag(0xa83, false);
    datSetFlag(0xa84, false);
    datSetFlag(0xa85, false);
    datSetFlag(0xa86, false);
    datSetFlag(0xa87, true);

    if (datGetSkipToTarget() != 0)
    {
        goto done;
    }
    if (datGetFlag(0xa05) == 1)
    {
        sequenceData[0] = 1;
        sequenceData[1] = 0;
        adminiChangeSeq(ADMINI_SEQ_DUNGEON, sequenceData, 8, false);
        *specialAction = true;
        datSetFlag(0xa05, false);
        return NULL;
    }
    if (datGetFlag(0xa03) == 1)
    {
        datSetFlag(0xa03, false);
        eventIndex = clndFindAndExecSiteibiEvents();
        if (eventIndex != -1)
        {
            return func_00181950(clndTask, eventIndex);
        }
        else
        {
            result = func_003c1ab0(clndTask, datGetTime() & 0xff);
        }
    }

done:
    return result;
}
/* W416 width audit: retail candidate offsets 0x40/0x74/0x78 all use 0x10 extension shifts; ours' corresponding date-value pairs also use 0x10 at different layout offsets. No width edit was justified. */
// FUN_00181720
#ifndef PC_BUILD
asm s32 clndFindAndExecSiteibiEvents()
{
  .set noreorder
  .word 0x27bdffa0
  .word 0xffbf0050
  .word 0x7fb40040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0c0ef620
  .word 0x00000000
  .word 0x0040902d
  .word 0x0000982d
  .word 0x1000006e
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f60c
  .word 0x00000000
  .word 0x00131840
  .word 0x00731821
  .word 0x000388c0
  .word 0x8e430000
  .word 0x00711821
  .word 0x90630000
  .word 0x1462005f
  .word 0x00000000
  .word 0x0c05bbc8
  .word 0x00000000
  .word 0x0002243c
  .word 0x0004243f
  .word 0x0c05f670
  .word 0x00000000
  .word 0x8e430000
  .word 0x00718021
  .word 0x92030001
  .word 0x14620054
  .word 0x00000000
  .word 0x92140002
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x1682004e
  .word 0x00000000
  .word 0x24140001
  .word 0x9604000e
  .word 0x10800006
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x8e420000
  .word 0x00511021
  .word 0x94440010
  .word 0x10800006
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x8e420000
  .word 0x00511021
  .word 0x94440012
  .word 0x10800007
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x8e420000
  .word 0x00511021
  .word 0x94440014
  .word 0x10800007
  .word 0x00000000
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x24030001
  .word 0x14430002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x8e420000
  .word 0x00511021
  .word 0x9044000b
  .word 0x240200ff
  .word 0x1082000f
  .word 0x00000000
  .word 0x00131040
  .word 0x00531021
  .word 0x000280c0
  .word 0x0c05b6e8
  .word 0x00000000
  .word 0x00021e3c
  .word 0x00031e3f
  .word 0x8e420000
  .word 0x00501021
  .word 0x9442000c
  .word 0x0062082a
  .word 0x10200002
  .word 0x00000000
  .word 0x0000a02d
  .word 0x1280000f
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24843eb0
  .word 0x0260282d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x8e420000
  .word 0x02221021
  .word 0x94440016
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x0260102d
  .word 0x1000000b
  .word 0x00000000
  .word 0x26730001
  .word 0x8e420004
  .word 0x0262102b
  .word 0x1440ff90
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24843ed0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x2402ffff
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
#endif /* PC_BUILD: asm function omitted */

// FUN_00181950
KwlnTask* func_00181950(KwlnTask* clndTask, s32 eventIndex)
{
    CalendarTaskWork* work;
    SiteibiEventTable* eventTable;
    KwlnTask* actionTask;
    volatile u16* sitePtr;

    work = clndTask->workData;
    eventTable = Comu_GetSiteibiEvtTable();
    if (eventTable->events[eventIndex].unk_07 != 0xff)
    {
        H_Dbprt_FmtLog("calendar: siteibi event %d",
                       eventTable->events[eventIndex].scrPrcdIdx);
        actionTask = func_001ba5f0(
            clndTask, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            eventTable->events[eventIndex].scrPrcdIdx,
            eventTable->events[eventIndex].unk_06,
            eventTable->events[eventIndex].unk_07, 0);
        if (datGetTime() == CALENDAR_TIME_NULL)
        {
            func_00184c80(work->confirmationTask, true);
        }
        else
        {
            func_001848f0(work->confirmationTask, true);
        }
    }
    else
    {
        H_Dbprt_FmtLog("calendar: siteibi procedure %d",
                       eventTable->events[eventIndex].scrPrcdIdx);
        sitePtr = (volatile u16 *)((u8 *)(eventIndex * (s32)sizeof(SiteibiEvent)) + (int)eventTable->events + 4);
        actionTask = func_003bdd60(0xf, *sitePtr);
    }

    datSetDaysSkipTarget(clndGetDaysSinceStartFromDate(
        eventTable->events[eventIndex].endMonth,
        eventTable->events[eventIndex].endDay));
    datSetTimeSkipTarget_u8(eventTable->events[eventIndex].endTime);
    datSetSkipToTarget(true);
    return actionTask;
}
// FUN_00181b10
u8 clndGetCurrentMoonPhase()
{
    s16 daysSinceApr5 = datGetDaysSinceApr5();

    return daysMoonPhases[daysSinceApr5];
}

// FUN_00181b50
u8 clndGetMoonPhase(u32 daysSinceApr5)
{
    return daysMoonPhases[daysSinceApr5];
}

typedef struct
{
    u32 state;
    u32 reserved04;
    s32 timer;
    KwlnTask* actionTask;
    u32 specialAction;
    KwlnTask* calendarDisplayTask;
} CalendarAigesWork;

typedef struct
{
    u16 procedure;
    u8 argument;
    u8 mode;
    u8 month;
    u8 day;
    u8 time;
    u8 reserved07;
    s16 flagsOn[10];
    s16 flagsOff[6];
} CalendarScenarioEntry;
extern CalendarScenarioEntry CLND_SCENARIO_TABLE[];
#pragma alias CLND_SCENARIO_TABLE_abs CLND_SCENARIO_TABLE
extern u8 CLND_SCENARIO_TABLE_abs[];
#pragma alias adminiGetNowSeqId_u32 adminiGetNowSeqId
extern u32 adminiGetNowSeqId_u32(void);

typedef struct
{
    u32 reserved00;
    s32 timer;
    f32 current;
    u32 reserved0c;
    f32 target;
    u32 reserved14;
    f32 start;
    u32 reserved1c;
    s32 active;
} CalendarXWork;
typedef struct
{
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u8 reserved[0x12];
} CalendarFieldSequenceData;

extern const char D_005E3F00[];
extern u16 DAT_007e0952;
#pragma alias DAT_007e094e_abs DAT_007e094e
#pragma alias DAT_007e0952_abs DAT_007e0952
extern u8 DAT_007e094e_abs[];
extern u8 DAT_007e0952_abs[];


extern void* func_00170d60(s16 id);
extern void* func_00170da0(s16 id);
extern void* func_00170df0(s16 id);
extern void* func_00170e40(s16 id);
extern s32 func_001714b0(s32 index);
extern s32 func_001714d0(s32 index);
extern u8 func_00171550(s16 unused1, s16 unused2, u16 index);
extern const char D_005E3F20[];
extern void* func_00112370(const char* path);
extern void func_001124b0(void* node);
extern f32 gp0xffffb308;
#define CLND_CALENDAR_X gp0xffffb308
extern void func_001159f0(void* unused, void* atlas, s32 tile, u32 alpha,
                           f32 x, f32 y, f32 depth);
#pragma alias gsDrawSpritePositionFirst func_001159f0
extern void gsDrawSpritePositionFirst(f32 x, f32 y, void* unused,
                                      void* atlas, s32 tile, u32 alpha,
                                      f32 depth);
#pragma alias gsDrawSpriteColorPositionFirst func_00115bc0
extern void gsDrawSpriteColorPositionFirst(f32 x, f32 y, void* unused,
                                            void* atlas, s32 tile, u32 alpha,
                                            u32 red, u32 green, u32 blue,
                                            f32 depth);
extern void func_00115ad0(void* unused, void* atlas, s32 tile, u32 alpha,
                          u32 extraAlpha, f32 x, f32 y, f32 depth);
extern void func_00115bc0(void* unused, void* atlas, s32 tile, u32 alpha,
                           u32 red, u32 green, u32 blue,
                           f32 x, f32 y, f32 depth);
extern void func_00115cd0(void* unused, void* atlas, s32 tile, u32 alpha,
                           u32 red, u32 green, u32 blue,
                           f32 x, f32 y, f32 depth);
extern void (*D_00960090)(u32 state, u32 value);
extern void (*D_00960094)(u32 state, void* value);

#define CLND_SCENARIO_TABLE ((CalendarScenarioEntry*)0x0083ab30)

// FUN_00181B70
void func_00181b70(void)
{
    CalendarFieldSequenceData fieldData;
    struct
    {
        u32 floor;
        u32 reserved04;
    } dungeonData;

    if (gGlobalWork.savedDungeonFloor == 0)
    {
        func_0017f8d0();
        fieldData.unk_00 = (u16)gGlobalWork.savedFldMajorId;
        fieldData.unk_02 = (u16)gGlobalWork.savedFldMinorId;
        fieldData.unk_04 = 0xff;
        fieldData.unk_08 = 0;
        adminiChangeSeq(ADMINI_SEQ_FIELD, &fieldData, 0x1c, false);
    }
    else
    {
        dungeonData.floor = FUN_0016f380(0x35);
        dungeonData.reserved04 = 0xff;
        adminiChangeSeq(ADMINI_SEQ_DUNGEON, &dungeonData, 8, false);
    }
}

// FUN_00181C20
u32 func_00181c20(void)
{
    s32 timeSkip;
    s32 days;
    u32 currentTime;

    timeSkip = scrGetIntPara(0);
    days = datGetDaysSinceApr5();
    currentTime = datGetTime() & 0xff;
    timeSkip = currentTime + timeSkip;
    while (true)
    {
        if (timeSkip <= 8)
        {
            break;
        }

        timeSkip -= 9;
        days++;
    }
    datSetDaysSkipTarget(days);
    datSetTimeSkipTarget_u8(timeSkip);
    datSetSkipToTarget(1);
    return 1;
}

// FUN_00181CC0
void* func_00181cc0(KwlnTask* task)
{
    CalendarAigesWork* work;
    KwlnTask* parent;
    CalendarScenarioEntry* scenarioTable;
    KwlnTask* displayTask;
    s32 time;
    u16 procedure;
    s32 month;
    s32 day;
    RwV2d position;
    struct
    {
        u32 floor;
        u32 reserved04;
    } dungeonData;
    CalendarFieldSequenceData fieldData;
    parent = task;
    work = (CalendarAigesWork*)parent->workData;
    scenarioTable = (CalendarScenarioEntry*)CLND_SCENARIO_TABLE_abs;
    switch (work->state)
    {
        case 0:
            if (CLND_SKIP_TRANSITION_ACTIVE != 0)
            {
                month = datGetDaysSinceApr5();
                month = clndGetMonthFromDaysSinceApr5(month);
                day = datGetDaysSinceApr5();
                day = clndGetDayOfMonthFromDaysSinceApr5(day);
                time = datGetTime() & 0xff;
                displayTask = work->calendarDisplayTask;
                if (displayTask == NULL)
                {
                    work->calendarDisplayTask = func_00188440(parent, month, day, time);
                }
                else
                {
                    func_00188420(displayTask, month, day, time);
                }

                if (gGlobalWork.savedDungeonFloor == 0)
                {
                    func_0017f8d0();
                    fieldData.unk_00 = (u16)gGlobalWork.savedFldMajorId;
                    fieldData.unk_02 = (u16)gGlobalWork.savedFldMinorId;
                    fieldData.unk_04 = 0xff;
                    fieldData.unk_08 = 0;
                    adminiChangeSeq(ADMINI_SEQ_FIELD, &fieldData, 0x1c, false);
                }
                else
                {
                    dungeonData.floor = FUN_0016f380(0x35);
                    dungeonData.reserved04 = 0xff;
                    adminiChangeSeq(ADMINI_SEQ_DUNGEON, &dungeonData, 8, false);
                }
                work->state = 4;
                CLND_SKIP_TRANSITION_ACTIVE = 0;
                break;
            }

            {
                s32 scenarioMonth;
                s32 scenarioDay;
                s32 scenarioTime;
                scenarioMonth = scenarioTable[func_0017d810()].month;
                scenarioDay = scenarioTable[func_0017d810()].day;
                scenarioTime = scenarioTable[func_0017d810()].time;
                datSetDaysSinceApr5(clndGetDaysSinceStartFromDate(scenarioMonth, scenarioDay));
                datSetTime((u8)scenarioTime);

            if (scenarioTable[func_0017d810()].flagsOn[0] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[0], true);
            if (scenarioTable[func_0017d810()].flagsOn[1] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[1], true);
            if (scenarioTable[func_0017d810()].flagsOn[2] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[2], true);
            if (scenarioTable[func_0017d810()].flagsOn[3] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[3], true);
            if (scenarioTable[func_0017d810()].flagsOn[4] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[4], true);
            if (scenarioTable[func_0017d810()].flagsOn[5] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[5], true);
            if (scenarioTable[func_0017d810()].flagsOn[6] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[6], true);
            if (scenarioTable[func_0017d810()].flagsOn[7] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[7], true);
            if (scenarioTable[func_0017d810()].flagsOn[8] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[8], true);
            if (scenarioTable[func_0017d810()].flagsOn[9] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOn[9], true);
            if (scenarioTable[func_0017d810()].flagsOff[0] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOff[0], false);
            if (scenarioTable[func_0017d810()].flagsOff[1] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOff[1], false);
            if (scenarioTable[func_0017d810()].flagsOff[2] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOff[2], false);
            if (scenarioTable[func_0017d810()].flagsOff[3] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOff[3], false);
            if (scenarioTable[func_0017d810()].flagsOff[4] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOff[4], false);
            if (scenarioTable[func_0017d810()].flagsOff[5] != -1)
                datSetFlag(scenarioTable[func_0017d810()].flagsOff[5], false);

            displayTask = work->calendarDisplayTask;
            if (displayTask == NULL)
            {
                work->calendarDisplayTask = func_00188440(parent, scenarioMonth, scenarioDay, scenarioTime);
            }
            else
            {
                func_00188420(displayTask, scenarioMonth, scenarioDay, scenarioTime);
            }

            if (scenarioTable[func_0017d810()].mode != 0xff)
            {
                displayTask = func_001ba5f0(parent,
                                            0, 0, 0, 0, 0, 0, 0, 0, 0,
                                            scenarioTable[func_0017d810()].procedure,
                                            scenarioTable[func_0017d810()].argument,
                                            scenarioTable[func_0017d810()].mode,
                                            0);
            }
            else
            {
                procedure = scenarioTable[func_0017d810()].procedure;
                displayTask = func_003bdd60(0xf, procedure);
            }
            work->actionTask = displayTask;
            work->state = 1;
            break;
            }

        case 1:
            if (adminiGetNowSeqId_u32() == 3 || adminiGetNowSeqId_u32() == 2)
            {
                work->state = 2;
            }
            else if (kwlnTaskGetState(work->actionTask) == KWLNTASK_STATE_DESTROY)
            {
                work->actionTask = NULL;
                if (work->specialAction != 0)
                {
                    work->state = 9;
                }
                else
                {
                    func_0017d820(func_0017d810() + 1);
                    work->state = 0;
                }
            }
            break;
        case 2:
            break;

        case 3:
            work->state = 4;
            break;

        case 4:
            break;
        case 5:
            if (adminiGetNowSeqId_u32() == 0)
            {
                work->actionTask = NULL;
                if (work->specialAction != 0)
                {
                    work->state = 9;
                }
                else
                {
                    func_0017d820(func_0017d810() + 1);
                    work->state = 0;
                }
            }
            break;

        case 6:
            break;
        case 7:
            break;

        case 9:
            H_Fade_FadeIn();
            work->state = 10;
            break;

        case 10:
            if ((*(u16*)DAT_007e094e_abs & 0x40) != 0)
            {
                work->state = 0;
            }
            else
            {
                u16 debugPad = *(u16*)DAT_007e0952_abs;
                if ((debugPad & 0x1000) != 0)
                {
                    func_0017d820(func_0017d810() + 1);
                }
                else if ((debugPad & 0x4000) != 0 && func_0017d810() != 0)
                {
                    func_0017d820(func_0017d810() - 1);
                }
            }
            position.x = 2.0f;
            position.y = 2.0f;
            {
                u32 debugIndex = func_0017d810();
                H_Dbprt_FmtAt(position,
                              D_005E3F00,
                              debugIndex);
            }
            break;
        case 8:
            work->timer--;
            if (work->timer == 0)
            {
                return KWLNTASK_STOP;
            }
            break;
    }
    return KWLNTASK_CONTINUE;
}


// FUN_00182720
void func_00182720(KwlnTask* task)
{
    RwFree(task->workData);
    sClndTask = NULL;
}

// FUN_00182750
KwlnTask* func_00182750(KwlnTask* parent)
{
    KwlnTask* task;
    void* work;

    work = RwCalloc(1, 0x18, rwMEMHINTDUR_GLOBAL);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent,
                                          0x106f,
                                          D_005E3F20,
                                          func_00181cc0,
                                          func_00182720,
                                          work);
    if (task == NULL)
    {
        return NULL;
    }
    sClndTask = task;
    *(u32*)work = 0;
    H_SfdPlay_CreateTaskIdle(task);
    return task;
}

// FUN_00182810
u8 func_00182810(u32 index)
{
    u8* weights;
    s32 random;

    weights = (u8*)(uintptr_t)func_001714b0(index);
    random = func_00488f30() % 100;
    if (random < weights[4])
    {
        return 4;
    }
    if (random < weights[3] + weights[4])
    {
        return 3;
    }
    if (random < weights[2] + weights[3] + weights[4])
    {
        return 2;
    }
    return random < weights[1] + weights[2] + weights[3] + weights[4];
}

/* W357 measured opt_propagation off: without nd554/object820, with nd461/object832; window 896; retained. */
#pragma opt_propagation off
// FUN_001828D0
#ifndef PC_BUILD
asm u32 func_001828d0(s16 id, DatEquipment* out)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0040
  .word 0x7fb30030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x00a0802d
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x28620fa0
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000c8
  .word 0x00000000
  .word 0x28620bb8
  .word 0x1440000c
  .word 0x00000000
  .word 0x0c05c390
  .word 0x00000000
  .word 0xa6110000
  .word 0x8c420000
  .word 0xae020004
  .word 0x24020002
  .word 0xa2020008
  .word 0xa2000009
  .word 0x24020001
  .word 0x100000ba
  .word 0x00000000
  .word 0x286207d0
  .word 0x14400033
  .word 0x00000000
  .word 0x0c05c37c
  .word 0x00000000
  .word 0x0040982d
  .word 0xa6110000
  .word 0x8c430004
  .word 0xae030004
  .word 0x94440000
  .word 0x0c060a04
  .word 0x00000000
  .word 0xa2020008
  .word 0x92110008
  .word 0x9664000a
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00111880
  .word 0x00431021
  .word 0x94520000
  .word 0x94510002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3243ffff
  .word 0x3222ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x96620008
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa6020010
  .word 0x92040008
  .word 0x8e050004
  .word 0x9666000c
  .word 0x0c05c554
  .word 0x00000000
  .word 0xa2020009
  .word 0x24020001
  .word 0x10000085
  .word 0x00000000
  .word 0x286203e8
  .word 0x14400033
  .word 0x00000000
  .word 0x0c05c368
  .word 0x00000000
  .word 0x0040982d
  .word 0xa6110000
  .word 0x8c430004
  .word 0xae030004
  .word 0x94440000
  .word 0x0c060a04
  .word 0x00000000
  .word 0xa2020008
  .word 0x92110008
  .word 0x9664000a
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00111880
  .word 0x00431021
  .word 0x94520000
  .word 0x94510002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3243ffff
  .word 0x3222ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x96620008
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa602000e
  .word 0x92040008
  .word 0x8e050004
  .word 0x9666000c
  .word 0x0c05c554
  .word 0x00000000
  .word 0xa2020009
  .word 0x24020001
  .word 0x10000050
  .word 0x00000000
  .word 0x0c05c358
  .word 0x00000000
  .word 0x0040982d
  .word 0xa6110000
  .word 0x8c430004
  .word 0xae030004
  .word 0x94440000
  .word 0x0c060a04
  .word 0x00000000
  .word 0xa2020008
  .word 0x92110008
  .word 0x9664000a
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00111880
  .word 0x00431021
  .word 0x94520000
  .word 0x94510002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3243ffff
  .word 0x3222ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x96620008
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa602000a
  .word 0x92110008
  .word 0x9664000e
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00111880
  .word 0x00431021
  .word 0x94520000
  .word 0x94510002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3243ffff
  .word 0x3222ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x9662000c
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa602000c
  .word 0x92040008
  .word 0x8e050004
  .word 0x96660014
  .word 0x0c05c554
  .word 0x00000000
  .word 0xa2020009
  .word 0x24020001
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
#endif /* PC_BUILD: asm function omitted */

#pragma opt_propagation reset
// FUN_00182C50
u32 func_00182c50(s16 id, DatEquipment* out)
{
    u8* resource;

    if (id >= 4000)
    {
        return 0;
    }
    if (id >= 3000)
    {
        resource = (u8*)func_00170e40(id);
        out->id = id;
        out->type = *(u32*)(resource + 0);
        out->unk_08 = 2;
        out->effect = 0;
        return 1;
    }
    if (id >= 2000)
    {
        resource = (u8*)func_00170df0(id);
        out->id = id;
        out->type = *(u32*)(resource + 4);
        out->unk_08 = 2;
        out->unk_10 = *(u16*)(resource + 8);
        out->effect = 0;
        return 1;
    }
    if (id >= 1000)
    {
        resource = (u8*)func_00170da0(id);
        out->id = id;
        out->type = *(u32*)(resource + 4);
        out->unk_08 = 2;
        out->unk_0e = *(u16*)(resource + 8);
        out->effect = 0;
        return 1;
    }
    resource = (u8*)func_00170d60(id);
    out->id = id;
    out->type = *(u32*)(resource + 4);
    out->unk_08 = 2;
    out->firstStat = *(u16*)(resource + 8);
    out->secondStat = *(u16*)(resource + 0x0c);
    out->effect = 0;
    return 1;
}

// FUN_00182D90
#ifndef PC_BUILD
asm u32 func_00182d90(s16 id, u8 row, u8 effect, DatEquipment* out)
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
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x28620fa0
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000b0
  .word 0x00000000
  .word 0x28620bb8
  .word 0x1440000c
  .word 0x00000000
  .word 0x0c05c390
  .word 0x00000000
  .word 0xa6130000
  .word 0x8c420000
  .word 0xae020004
  .word 0x24020002
  .word 0xa2020008
  .word 0xa2000009
  .word 0x24020001
  .word 0x100000a2
  .word 0x00000000
  .word 0x286207d0
  .word 0x1440002b
  .word 0x00000000
  .word 0x0c05c37c
  .word 0x00000000
  .word 0x0040a02d
  .word 0xa6130000
  .word 0x8c430004
  .word 0xae030004
  .word 0xa2120008
  .word 0x92120008
  .word 0x9444000a
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00121880
  .word 0x00431021
  .word 0x94530000
  .word 0x94520002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3263ffff
  .word 0x3242ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x96820008
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa6020010
  .word 0xa2110009
  .word 0x24020001
  .word 0x10000075
  .word 0x00000000
  .word 0x286203e8
  .word 0x1440002b
  .word 0x00000000
  .word 0x0c05c368
  .word 0x00000000
  .word 0x0040a02d
  .word 0xa6130000
  .word 0x8c430004
  .word 0xae030004
  .word 0xa2120008
  .word 0x92120008
  .word 0x9444000a
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00121880
  .word 0x00431021
  .word 0x94530000
  .word 0x94520002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3263ffff
  .word 0x3242ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x96820008
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa602000e
  .word 0xa2110009
  .word 0x24020001
  .word 0x10000048
  .word 0x00000000
  .word 0x0c05c358
  .word 0x00000000
  .word 0x0040a02d
  .word 0xa6130000
  .word 0x8c430004
  .word 0xae030004
  .word 0xa2120008
  .word 0x92120008
  .word 0x9444000a
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00121880
  .word 0x00431021
  .word 0x94530000
  .word 0x94520002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3263ffff
  .word 0x3242ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x96820008
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa602000a
  .word 0x92120008
  .word 0x9684000e
  .word 0x0c05c534
  .word 0x00000000
  .word 0x00121880
  .word 0x00431021
  .word 0x94530000
  .word 0x94520002
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24050064
  .word 0x0045001b
  .word 0x00001010
  .word 0x24440001
  .word 0x3263ffff
  .word 0x3242ffff
  .word 0x00431023
  .word 0x00821018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0x00621021
  .word 0x3043ffff
  .word 0x9682000c
  .word 0x00431018
  .word 0x0045001a
  .word 0x00000000
  .word 0x00000000
  .word 0x00001012
  .word 0xa602000c
  .word 0xa2110009
  .word 0x24020001
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
}
#endif /* PC_BUILD: asm function omitted */

// FUN_001830C0
u32 func_001830c0(const DatEquipment* record)
{
    s32 slot;

    for (slot = 0; slot < 300; slot++)
    {
        if (datGetEquipmentId(1, slot) == 0)
        {
            func_0016fea0(1, slot, record->id);
            func_0016ff90(1, slot, record->type);
            func_00170080(1, slot, record->unk_08);
            func_00170170(1, slot, record->effect);
            func_00170260(1, slot, record->firstStat);
            func_00170350(1, slot, record->secondStat);
            func_00170440(1, slot, record->unk_0e);
            func_00170530(1, slot, record->unk_10);
            return 1;
        }
    }
    return 0;
}

// FUN_001831E0
u32 func_001831e0(s16 pcId, s16 slot, const DatEquipment* record)
{
    func_0016fea0(pcId, slot, record->id);
    func_0016ff90(pcId, slot, record->type);
    func_00170080(pcId, slot, record->unk_08);
    func_00170170(pcId, slot, record->effect);
    func_00170260(pcId, slot, record->firstStat);
    func_00170350(pcId, slot, record->secondStat);
    func_00170440(pcId, slot, record->unk_0e);
    func_00170530(pcId, slot, record->unk_10);
    return 1;
}

// FUN_001832C0
void* func_001832c0(KwlnTask* task)
{
    CalendarXWork* work;

    work = (CalendarXWork*)task->workData;
    if (work->active != 0)
    {
        if (datGetFlag(0x141d) != 0 || datGetFlag(0x1407) != 0)
        {
            work->active = 0;
            work->start = work->current;
            work->target = 400.0f;
            work->timer = 10;
        }
    }
    else
    {
        if (datGetFlag(0x141d) == 0 && datGetFlag(0x1407) == 0)
        {
            work->active = 1;
            work->start = work->current;
            work->target = 0.0f;
            work->timer = 10;
        }
    }
    if (work->timer != 0)
    {
        work->timer--;
    }
    work->current = work->start +
                    ((f32)(10 - work->timer) * (work->target - work->start)) / 10.0f;
    CLND_CALENDAR_X = work->current;
    return KWLNTASK_CONTINUE;
}
// FUN_001833e0
void clnd001833e0(KwlnTask* task)
{
    RwFree(task->workData);
}

typedef struct
{
    u32 state;
    u32 confirmed;
    u32 drawReady;
    u32 reserved0c;
    u32 reserved10;
    u32 transitionPending;
    s32 month;
    s32 day;
    s32 time;
    s32 reserved24;
    s32 timer;
    s32 frame;
    s32 oldMonth;
    s32 oldDay;
    s32 oldTime;
    s32 reserved3c;
    s32 targetMonth;
    s32 targetDay;
    s32 targetTime;
    s32 reserved4c;
    u8 renderContext[0x148];
    void* resource;
    KwlnTask* child;
} CalendarConfirmWork;

extern const char D_005E4190[];
extern const char DAT_007cc0c0[];
extern void* DAT_007cdff0;
extern u32 H_Maestro_00111f30(s16* state);
extern void func_001842c0(KwlnTask* task,
                          s32 month,
                          s32 day,
                          s32 time,
                          s32 timer,
                          s32 frame,
                          void* context);

#pragma alias D_00960094_cal_abs D_00960094
extern u8 D_00960094_cal_abs[];

/* W357 measured opt_common_subs off: without nd707/object1052, with nd633/object1068; window 1072; retained. */
#pragma opt_common_subs off
/* W363 callback-address probe: direct D_00960090/D_00960094 calls 1068/1072 nd633;
 * cached absolute aliases improve this to 1088/1072 nd608, but exceed the window, so
 * this sibling remains on the GP form.  The same family is fixed in func_001842C0/func_001875F0. */
// FUN_00183410
asm void* func_00183410(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080902d
  .word 0x8c91003c
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132744
  .word 0x00000000
  .word 0x14400004
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000f4
  .word 0x00000000
  .word 0x2404000e
  .word 0x27a5004c
  .word 0x3c020096
  .word 0x8c420094
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c100096
  .word 0x26100090
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x8e22002c
  .word 0x24430001
  .word 0xae23002c
  .word 0x24020168
  .word 0x0062001a
  .word 0x00001010
  .word 0xae22002c
  .word 0x8e240000
  .word 0x28820002
  .word 0x14400011
  .word 0x00000000
  .word 0x8e220004
  .word 0x1440000e
  .word 0x00000000
  .word 0x2404000e
  .word 0x8fa5004c
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x0000102d
  .word 0x100000cc
  .word 0x00000000
  .word 0x2c810009
  .word 0x102000be
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636600
  .word 0x00041080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844190
  .word 0x0c0448dc
  .word 0x00000000
  .word 0xae220198
  .word 0x24020001
  .word 0xae220000
  .word 0x100000ae
  .word 0x00000000
  .word 0x8e240198
  .word 0x0c0447cc
  .word 0x00000000
  .word 0x24030001
  .word 0x144300a8
  .word 0x00000000
  .word 0x8e220198
  .word 0xaf82b300
  .word 0x2402003c
  .word 0xae220028
  .word 0x24020002
  .word 0xae220000
  .word 0x100000a0
  .word 0x00000000
  .word 0x24041421
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x8e220008
  .word 0x10400012
  .word 0x00000000
  .word 0x8e220028
  .word 0x2841003c
  .word 0x10200003
  .word 0x00000000
  .word 0x24420001
  .word 0xae220028
  .word 0x0240202d
  .word 0x8e250018
  .word 0x8e26001c
  .word 0x8e270020
  .word 0x8e280028
  .word 0x8e29002c
  .word 0x262a0050
  .word 0x0c0610b0
  .word 0x00000000
  .word 0x10000088
  .word 0x00000000
  .word 0x278493d0
  .word 0x0c14896a
  .word 0x00000000
  .word 0x10000083
  .word 0x00000000
  .word 0x24041421
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x86250018
  .word 0x8626001c
  .word 0x86270040
  .word 0x86280044
  .word 0x0240202d
  .word 0x0c061620
  .word 0x00000000
  .word 0xae22019c
  .word 0x24020005
  .word 0xae220000
  .word 0x10000073
  .word 0x00000000
  .word 0x8e24019c
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x1443006d
  .word 0x00000000
  .word 0x2402003c
  .word 0xae220028
  .word 0x8e220040
  .word 0xae220018
  .word 0x8e220044
  .word 0xae22001c
  .word 0x8e220048
  .word 0xae220020
  .word 0x24020001
  .word 0xae220008
  .word 0x24020002
  .word 0xae220000
  .word 0x24041410
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x1000005b
  .word 0x00000000
  .word 0x24041421
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x0240202d
  .word 0x8e250018
  .word 0x8e26001c
  .word 0x8e270020
  .word 0x8e280028
  .word 0x8e29002c
  .word 0x262a0050
  .word 0x0c0610b0
  .word 0x00000000
  .word 0x0240202d
  .word 0x8e250020
  .word 0x8e260048
  .word 0x0c061a58
  .word 0x00000000
  .word 0xae22019c
  .word 0x24020007
  .word 0xae220000
  .word 0x10000044
  .word 0x00000000
  .word 0x8e220028
  .word 0x10400006
  .word 0x00000000
  .word 0x2442fffa
  .word 0xae220028
  .word 0x04410002
  .word 0x00000000
  .word 0xae200028
  .word 0x0240202d
  .word 0x8e250018
  .word 0x8e26001c
  .word 0x8e270020
  .word 0x8e280028
  .word 0x8e29002c
  .word 0x262a0050
  .word 0x0c0610b0
  .word 0x00000000
  .word 0x8e24019c
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x1443002d
  .word 0x00000000
  .word 0xae200028
  .word 0x8e220040
  .word 0xae220018
  .word 0x8e220044
  .word 0xae22001c
  .word 0x8e220048
  .word 0xae220020
  .word 0x24020001
  .word 0xae220008
  .word 0x24020008
  .word 0xae220000
  .word 0x10000020
  .word 0x00000000
  .word 0x8e220008
  .word 0x1040001d
  .word 0x00000000
  .word 0x8e220028
  .word 0x2841003c
  .word 0x1020000a
  .word 0x00000000
  .word 0x24420014
  .word 0xae220028
  .word 0x2841003d
  .word 0x1420000b
  .word 0x00000000
  .word 0x2402003c
  .word 0xae220028
  .word 0x10000007
  .word 0x00000000
  .word 0x24041410
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24020002
  .word 0xae220000
  .word 0x0240202d
  .word 0x8e250018
  .word 0x8e26001c
  .word 0x8e270020
  .word 0x8e280028
  .word 0x8e29002c
  .word 0x262a0050
  .word 0x0c0610b0
  .word 0x00000000
  .word 0x2404000e
  .word 0x8fa5004c
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x0c066164
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c132740
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

#pragma opt_common_subs reset
/* W357 measured opt_propagation off: without nd709/object920, with nd591/object916; window 928; retained. */
#pragma opt_propagation off
#pragma opt_common_subs off
/* W414: y57-only hoist reached nd597/object924 but did not grow the frame; y67-only reached nd681. */
// FUN_00183840
#ifndef PC_BUILD
asm void func_00183840(void* resource,
                   f32 baseX,
                   f32 baseY,
                   s32 alpha,
                   s32 month,
                   s32 day)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x46006546
  .word 0x46006d06
  .word 0x00a0982d
  .word 0x00c0202d
  .word 0x00e0282d
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0040902d
  .word 0x3c02005e
  .word 0x244238d0
  .word 0x00521021
  .word 0x90500000
  .word 0x2402001d
  .word 0x12020011
  .word 0x00000000
  .word 0x3c024412
  .word 0x44820000
  .word 0x00000000
  .word 0x46150300
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x2406002e
  .word 0x0c04567c
  .word 0x00000000
  .word 0x2e01001e
  .word 0x10200036
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636630
  .word 0x00101080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24120012
  .word 0x1000002c
  .word 0x00000000
  .word 0x24120003
  .word 0x10000029
  .word 0x00000000
  .word 0x24120004
  .word 0x10000026
  .word 0x00000000
  .word 0x24120005
  .word 0x10000023
  .word 0x00000000
  .word 0x24120006
  .word 0x10000020
  .word 0x00000000
  .word 0x24120007
  .word 0x1000001d
  .word 0x00000000
  .word 0x24120008
  .word 0x1000001a
  .word 0x00000000
  .word 0x24120009
  .word 0x10000017
  .word 0x00000000
  .word 0x2412000a
  .word 0x10000014
  .word 0x00000000
  .word 0x2412000b
  .word 0x10000011
  .word 0x00000000
  .word 0x2412000c
  .word 0x1000000e
  .word 0x00000000
  .word 0x2412000d
  .word 0x1000000b
  .word 0x00000000
  .word 0x2412000e
  .word 0x10000008
  .word 0x00000000
  .word 0x2412000f
  .word 0x10000005
  .word 0x00000000
  .word 0x24120010
  .word 0x10000002
  .word 0x00000000
  .word 0x24120011
  .word 0x3c024286
  .word 0x44820000
  .word 0x00000000
  .word 0x46140580
  .word 0x24020253
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150300
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0240302d
  .word 0x4600b346
  .word 0x0c04567c
  .word 0x00000000
  .word 0x06000027
  .word 0x00000000
  .word 0x2a01000f
  .word 0x10200024
  .word 0x00000000
  .word 0x8f82b304
  .word 0x24420001
  .word 0xaf82b304
  .word 0x28410029
  .word 0x14200002
  .word 0x00000000
  .word 0xaf80b304
  .word 0x8f83b304
  .word 0x28610015
  .word 0x14200003
  .word 0x00000000
  .word 0x24020028
  .word 0x00431823
  .word 0x26460039
  .word 0x3c024412
  .word 0x44820000
  .word 0x00000000
  .word 0x46150300
  .word 0x3c024264
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x326700ff
  .word 0x00031200
  .word 0x00431823
  .word 0x24020014
  .word 0x0062001a
  .word 0x00001012
  .word 0x304800ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0c0456b4
  .word 0x00000000
  .word 0x2403001d
  .word 0x16030013
  .word 0x00000000
  .word 0x3c024407
  .word 0x44820000
  .word 0x00000000
  .word 0x46150300
  .word 0x3c0242a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x24060002
  .word 0x0c04567c
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x24030006
  .word 0x12030004
  .word 0x00000000
  .word 0x24030016
  .word 0x16030013
  .word 0x00000000
  .word 0x3c024407
  .word 0x44820000
  .word 0x00000000
  .word 0x46150300
  .word 0x3c0242a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x0000302d
  .word 0x0c04567c
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x2403000e
  .word 0x1603000e
  .word 0x00000000
  .word 0x3c024407
  .word 0x44820000
  .word 0x00000000
  .word 0x46150300
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x0220202d
  .word 0x0280282d
  .word 0x24060001
  .word 0x4600b346
  .word 0x0c04567c
  .word 0x00000000
  .word 0xdfbf0060
  .word 0x7bb40050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_propagation reset
/* W357 measured opt_propagation off: without nd462/object892, with nd420/object888; window 896; retained. */
#pragma opt_propagation off
#pragma opt_common_subs reset
/* W414 negative: pre-call y15 hoist worsened nd420->588; assigning after the second draw reached nd418/object888. */
// FUN_00183BE0
#ifndef PC_BUILD
asm void func_00183be0(void* resource,
                   f32 baseX,
                   f32 baseY,
                   s32 alpha,
                   s32 month,
                   s32 day)
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
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080a02d
  .word 0x46006546
  .word 0x46006d06
  .word 0x00a0982d
  .word 0x00c0882d
  .word 0x00e0802d
  .word 0x2a610028
  .word 0x10200002
  .word 0x00000000
  .word 0x24130028
  .word 0x2a22000a
  .word 0x14400015
  .word 0x00000000
  .word 0x24020203
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150300
  .word 0x3c024170
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02c0202d
  .word 0x0280282d
  .word 0x24060024
  .word 0x0000402d
  .word 0x2409000e
  .word 0x240a0002
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x3c024170
  .word 0x44820000
  .word 0x00000000
  .word 0x46140580
  .word 0x2402000a
  .word 0x0222001a
  .word 0x00001010
  .word 0x24460023
  .word 0x3c024405
  .word 0x44820000
  .word 0x00000000
  .word 0x46150300
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02c0202d
  .word 0x0280282d
  .word 0x4600b346
  .word 0x0000402d
  .word 0x2409000e
  .word 0x240a0002
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x3c024409
  .word 0x44820000
  .word 0x00000000
  .word 0x46150300
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02c0202d
  .word 0x0280282d
  .word 0x2406002d
  .word 0x4600b346
  .word 0x0000402d
  .word 0x2409000e
  .word 0x240a0002
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x2a02000a
  .word 0x14400015
  .word 0x00000000
  .word 0x2402000a
  .word 0x0202001a
  .word 0x00001012
  .word 0x24460023
  .word 0x2402022d
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150300
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02c0202d
  .word 0x0280282d
  .word 0x4600b346
  .word 0x0000402d
  .word 0x2409000e
  .word 0x240a0002
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x2402000a
  .word 0x0202001a
  .word 0x00001010
  .word 0x24460023
  .word 0x2402023e
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0x46150300
  .word 0x326700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02c0202d
  .word 0x0280282d
  .word 0x4600b346
  .word 0x0000402d
  .word 0x2409000e
  .word 0x240a0002
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x0220202d
  .word 0x0200282d
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0040902d
  .word 0x0012243c
  .word 0x0004243f
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430006
  .word 0x00000000
  .word 0x2411005f
  .word 0x2410002a
  .word 0x24150050
  .word 0x1000000e
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c05f6b8
  .word 0x00000000
  .word 0x24110006
  .word 0x14510005
  .word 0x00000000
  .word 0x2410004e
  .word 0x2415007e
  .word 0x10000004
  .word 0x00000000
  .word 0x24110032
  .word 0x2410003c
  .word 0x24150042
  .word 0x0240202d
  .word 0x0c05f6b8
  .word 0x00000000
  .word 0x2c410007
  .word 0x1020001b
  .word 0x00000000
  .word 0x3c04007b
  .word 0x248466b0
  .word 0x00021880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x24020022
  .word 0x10000011
  .word 0x00000000
  .word 0x2402001c
  .word 0x1000000e
  .word 0x00000000
  .word 0x2402001d
  .word 0x1000000b
  .word 0x00000000
  .word 0x2402001e
  .word 0x10000008
  .word 0x00000000
  .word 0x2402001f
  .word 0x10000005
  .word 0x00000000
  .word 0x24020020
  .word 0x10000002
  .word 0x00000000
  .word 0x24020021
  .word 0x3c034414
  .word 0x44830000
  .word 0x00000000
  .word 0x46150300
  .word 0x3c034150
  .word 0x44830000
  .word 0x00000000
  .word 0x46140340
  .word 0x326700ff
  .word 0x322800ff
  .word 0x320900ff
  .word 0x32aa00ff
  .word 0x3c034248
  .word 0x44837000
  .word 0x02c0202d
  .word 0x0280282d
  .word 0x0040302d
  .word 0x0c0456f0
  .word 0x00000000
  .word 0xdfbf0080
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
  .word 0x27bd0090
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_propagation reset
// FUN_00183F60
void func_00183f60(void* resource,
                   f32 baseX,
                   f32 baseY,
                   s32 alpha,
                   s32 month,
                   s32 day,
                   s32 time)
{
    s32 days;
    void* unused;

    days = clndGetDaysSinceStartFromDate(month, day);
    if (func_0017db40(days) == 1 && (u32)(time - 2) < 4)
    {
        gsDrawSpritePositionFirst(baseX + 525.0f, baseY + 29.0f,
                                  unused, resource, 0x36, alpha & 0xff, 50.0f);
        return;
    }

    switch (time)
    {
        case 1:
            gsDrawSpritePositionFirst(baseX + 452.0f, baseY + 29.0f,
                                      unused, resource, 0x2f, alpha & 0xff, 50.0f);
            return;
        case 2:
            gsDrawSpritePositionFirst(baseX + 524.0f, baseY + 29.0f,
                                      unused, resource, 0x30, alpha & 0xff, 50.0f);
            return;
        case 3:
            gsDrawSpritePositionFirst(baseX + 495.0f, baseY + 29.0f,
                                      unused, resource, 0x31, alpha & 0xff, 50.0f);
            return;
        case 4:
            gsDrawSpritePositionFirst(baseX + 499.0f, baseY + 29.0f,
                                      unused, resource, 0x32, alpha & 0xff, 50.0f);
            return;
        case 5:
            gsDrawSpritePositionFirst(baseX + 467.0f, baseY + 29.0f,
                                      unused, resource, 0x33, alpha & 0xff, 50.0f);
            return;
        case 6:
            gsDrawSpritePositionFirst(baseX + 528.0f, baseY + 29.0f,
                                      unused, resource, 0x34, alpha & 0xff, 50.0f);
            return;
        case 0:
        case 7:
            gsDrawSpritePositionFirst(baseX + 491.0f, baseY + 29.0f,
                                      unused, resource, 0x35, alpha & 0xff, 50.0f);
            return;
        case 8:
            gsDrawSpritePositionFirst(baseX + 500.0f, baseY + 26.0f,
                                      unused, resource, 0x37, alpha & 0xff, 50.0f);
            return;
        default:
            return;
    }
}

/* W212: first divergence is the prologue (ours 0xa0-byte frame, retail 0x90);
 * this is an excess live-range/frame defect before the displaced draw tail, not
 * a tail defect.  func_00187ec0 does not share this draw/phase loop structure. */
/* W357 measured opt_loop_invariants on: without nd947/object1440, with nd945/object1440; window 1488; retained. */
#pragma opt_loop_invariants on
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];

/* W363 callback-address probe: cached D_00960090_abs setState before each branch
 * changes 1440/1488 nd945 to 1456/1488 nd789; the result remains under the window.
 * The same family covers func_00183410, but its absolute-alias probe is 1088/1072 and blocked. */
// FUN_001842C0
#ifndef PC_BUILD
asm void func_001842c0(KwlnTask* task,
                   s32 month,
                   s32 day,
                   s32 time,
                   s32 timer,
                   s32 frame,
                   void* context)
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
  .word 0x00a0a02d
  .word 0x00c0982d
  .word 0x00e0902d
  .word 0x0100b02d
  .word 0x0140b82d
  .word 0x8c90003c
  .word 0x24020202
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c0241b8
  .word 0x44826800
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x2406003a
  .word 0x0000382d
  .word 0x0c04567c
  .word 0x00000000
  .word 0x24020008
  .word 0x16420014
  .word 0x00000000
  .word 0x3c0243c3
  .word 0x44820800
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c02c100
  .word 0x44826800
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x24060039
  .word 0x0000382d
  .word 0x2408007c
  .word 0x240900ff
  .word 0x240a0090
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0x3c0243c3
  .word 0x44820800
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c02c100
  .word 0x44826800
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x24060039
  .word 0x0000382d
  .word 0x2408004c
  .word 0x2409009a
  .word 0x240a00ff
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x44806800
  .word 0x8e040198
  .word 0xc78cb308
  .word 0x0000282d
  .word 0x0280302d
  .word 0x0260382d
  .word 0x02e0402d
  .word 0x0c060e10
  .word 0x00000000
  .word 0x44806800
  .word 0x8e040198
  .word 0xc78cb308
  .word 0x0000282d
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0c060ef8
  .word 0x00000000
  .word 0x44806800
  .word 0x2404003c
  .word 0x00961823
  .word 0x00031200
  .word 0x00431023
  .word 0x0044001a
  .word 0x00002812
  .word 0x8e040198
  .word 0xc78cb308
  .word 0x0280302d
  .word 0x0260382d
  .word 0x0240402d
  .word 0x0c060fd8
  .word 0x00000000
  .word 0x24041420
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x144000fb
  .word 0x00000000
  .word 0x24020008
  .word 0x12420006
  .word 0x00000000
  .word 0x2412004a
  .word 0x2416009a
  .word 0x241700ff
  .word 0x10000004
  .word 0x00000000
  .word 0x2412007c
  .word 0x241600ff
  .word 0x24170090
  .word 0x0280202d
  .word 0x0260282d
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0000302d
  .word 0x3c03005e
  .word 0x246338d0
  .word 0x00622821
  .word 0x2404000e
  .word 0x10000009
  .word 0x00000000
  .word 0x00a61821
  .word 0x90630000
  .word 0x14640004
  .word 0x00000000
  .word 0x00c0882d
  .word 0x10000005
  .word 0x00000000
  .word 0x24c60001
  .word 0x28c30064
  .word 0x1460fff6
  .word 0x00000000
  .word 0x122000d8
  .word 0x00000000
  .word 0x2a22000a
  .word 0x14400077
  .word 0x00000000
  .word 0x240201f1
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c024284
  .word 0x44826800
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x2406004c
  .word 0x0000382d
  .word 0x0c04567c
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
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
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050004
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x2402000a
  .word 0x0222001a
  .word 0x00001012
  .word 0x24460023
  .word 0x2402022a
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c024286
  .word 0x44826800
  .word 0x324800ff
  .word 0x32c900ff
  .word 0x32ea00ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x0000382d
  .word 0x0c045734
  .word 0x00000000
  .word 0x2402000a
  .word 0x0222001a
  .word 0x00001010
  .word 0x24460023
  .word 0x2402023b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c024286
  .word 0x44826800
  .word 0x324800ff
  .word 0x32c900ff
  .word 0x32ea00ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x0000382d
  .word 0x0c045734
  .word 0x00000000
  .word 0x1000005f
  .word 0x00000000
  .word 0x24020202
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c024284
  .word 0x44826800
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x2406004c
  .word 0x0000382d
  .word 0x0c04567c
  .word 0x00000000
  .word 0x3c130096
  .word 0x26730090
  .word 0x24040006
  .word 0x24050001
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040007
  .word 0x24050002
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040008
  .word 0x24050001
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
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050004
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e620000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050048
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x24040003
  .word 0x3c020007
  .word 0x34451801
  .word 0x0c135fd8
  .word 0x00000000
  .word 0x2402000a
  .word 0x0222001a
  .word 0x00001010
  .word 0x24460023
  .word 0x2402023b
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc780b308
  .word 0x46000b00
  .word 0x3c024286
  .word 0x44826800
  .word 0x324800ff
  .word 0x32c900ff
  .word 0x32ea00ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02a0202d
  .word 0x8e050198
  .word 0x0000382d
  .word 0x0c045734
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
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

extern void* DAT_007cdff0;

#pragma opt_loop_invariants reset
// FUN_00184890
void func_00184890(KwlnTask* task)
{
    CalendarConfirmWork* work;

    work = (CalendarConfirmWork*)task->workData;
    if (work->resource != NULL)
    {
        func_001124b0(work->resource);
        work->resource = NULL;
    }
    DAT_007cdff0 = NULL;
    RwFree(work);
}

/* W357 measured opt_common_subs off: without nd472/object808, with nd467/object820; window 912; retained. */
#pragma opt_common_subs off
// FUN_001848F0
#ifndef PC_BUILD
asm void func_001848f0(KwlnTask* task, u32 confirmed)
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
  .word 0x0080b82d
  .word 0x00a0a82d
  .word 0x8c93003c
  .word 0xae750004
  .word 0x12a000c1
  .word 0x00000000
  .word 0x2404014f
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x10400011
  .word 0x00000000
  .word 0x24041410
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x0c05f648
  .word 0x00000000
  .word 0xae620018
  .word 0x0c05f690
  .word 0x00000000
  .word 0xae62001c
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304300ff
  .word 0xae630020
  .word 0x100000b4
  .word 0x00000000
  .word 0x0c05f648
  .word 0x00000000
  .word 0x0002843c
  .word 0x0010843f
  .word 0x0c05f690
  .word 0x00000000
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x0c05bbcc
  .word 0x00000000
  .word 0x304200ff
  .word 0x0002943c
  .word 0x0012943f
  .word 0x00118c3c
  .word 0x00118c3f
  .word 0x0010843c
  .word 0x0010843f
  .word 0x0200202d
  .word 0x0220282d
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0002a43c
  .word 0x0014a43f
  .word 0x8e640018
  .word 0x8e65001c
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0002b43c
  .word 0x0016b43f
  .word 0x0014143c
  .word 0x0002143f
  .word 0x00561023
  .word 0x28420006
  .word 0x14400005
  .word 0x00000000
  .word 0x02e0202d
  .word 0x02a0282d
  .word 0x0c061320
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430046
  .word 0x00000000
  .word 0x02c0202d
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x24030001
  .word 0x14430040
  .word 0x00000000
  .word 0x00122c3c
  .word 0x00052c3f
  .word 0x24030002
  .word 0x10a3000a
  .word 0x00000000
  .word 0x24030003
  .word 0x10a30007
  .word 0x00000000
  .word 0x24030004
  .word 0x10a30004
  .word 0x00000000
  .word 0x24030005
  .word 0x14a30032
  .word 0x00000000
  .word 0x8e640020
  .word 0x24030002
  .word 0x1083000a
  .word 0x00000000
  .word 0x24030003
  .word 0x10830007
  .word 0x00000000
  .word 0x24030004
  .word 0x10830004
  .word 0x00000000
  .word 0x24030005
  .word 0x14830025
  .word 0x00000000
  .word 0x8e630018
  .word 0x14700004
  .word 0x00000000
  .word 0x8e63001c
  .word 0x10710012
  .word 0x00000000
  .word 0x24030280
  .word 0xae63000c
  .word 0x24030001
  .word 0xae630014
  .word 0x8e630018
  .word 0xae630030
  .word 0x8e63001c
  .word 0xae630034
  .word 0x8e630020
  .word 0xae630038
  .word 0xae700040
  .word 0xae710044
  .word 0xae650048
  .word 0x24030004
  .word 0xae630000
  .word 0x1000004f
  .word 0x00000000
  .word 0xae700018
  .word 0xae71001c
  .word 0xae650020
  .word 0x24020002
  .word 0xae620000
  .word 0x24041410
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24030001
  .word 0xae630008
  .word 0x10000042
  .word 0x00000000
  .word 0x8e620018
  .word 0x14500009
  .word 0x00000000
  .word 0x8e62001c
  .word 0x14510006
  .word 0x00000000
  .word 0x8e630020
  .word 0x0012143c
  .word 0x0002143f
  .word 0x10620025
  .word 0x00000000
  .word 0x24020280
  .word 0xae62000c
  .word 0x24020001
  .word 0xae620014
  .word 0x8e620018
  .word 0xae620030
  .word 0x8e62001c
  .word 0xae620034
  .word 0x8e620020
  .word 0xae620038
  .word 0xae700040
  .word 0xae710044
  .word 0x0012143c
  .word 0x0002143f
  .word 0xae620048
  .word 0x8e630018
  .word 0x8e620040
  .word 0x14620005
  .word 0x00000000
  .word 0x8e63001c
  .word 0x8e620044
  .word 0x10620006
  .word 0x00000000
  .word 0xae600028
  .word 0x24020004
  .word 0xae620000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020006
  .word 0xae620000
  .word 0x24041410
  .word 0x24050001
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000013
  .word 0x00000000
  .word 0x24041410
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x24030002
  .word 0xae630000
  .word 0x24030001
  .word 0xae630008
  .word 0x10000009
  .word 0x00000000
  .word 0x24020001
  .word 0xae620014
  .word 0x24020002
  .word 0xae620000
  .word 0x24041410
  .word 0x0000282d
  .word 0x0c05bc7c
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
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs reset
// FUN_00184C80
void func_00184c80(KwlnTask* task, u32 confirmed)
{
    CalendarConfirmWork* work;
    s16 currentMonth;
    s16 currentDay;
    s16 currentTime;

    work = (CalendarConfirmWork*)task->workData;
    work->confirmed = confirmed;
    currentMonth = clndGetCurrentMonth();
    currentDay = clndGetCurrentDay();
    currentTime = datGetTime() & 0xff;
    (void)clndGetDaysSinceStartFromDate(currentMonth, currentDay);
    (void)clndGetDaysSinceStartFromDate(work->month, work->day);
    work->month = currentMonth;
    work->day = currentDay;
    work->time = currentTime;
    work->state = 2;
    datSetFlag(0x1410, false);
    if (confirmed != 0)
    {
        work->drawReady = 1;
    }
    else
    {
        work->transitionPending = 1;
        work->state = 2;
    }
}

// FUN_00184d90
u32 clnd00184d90(KwlnTask* task)
{
    return ((CalendarTaskWork*)task->workData)->state == 2;
}


void H_Free(void* memory);



 
#include "h_maestro.h"
#include "h_fade.h"
#include "h_cdvd.h"
#include "Kernel/h_malloc.h"
#define func_00188640 func_00188640_game_support_proto
#include "Main/Game/game_support.h"
#undef func_00188640
#include "h_cdvd.h"
#include "libm.h"
#pragma alias func_00115ad0_gs func_00115ad0

/* Retail interfaces whose headers use a different (decompiler-friendly) ABI. */
extern void* func_0010c1a0(void* owner, const char* path, ...);
extern void* func_0010c3a0(void* stream, u32* finished, s32 byteCount);
extern KwlnTask* func_00111380(KwlnTask* parent, u32 priority, u64 dimensions, void* archive);
extern KwlnTask* func_00111150(KwlnTask* parent, u64 dimensions);
extern u32 func_001114b0(KwlnTask* task);
extern s32 func_00111500(KwlnTask* task);
extern void func_00111520(KwlnTask* task, s16 count);
extern u32 func_00111530(KwlnTask* task);
extern void func_001115b0(KwlnTask* task);
extern void func_001115e0(KwlnTask* task);
extern void func_001120c0(void);
extern void* func_00112420(void* source);
extern f32 func_001126b0(void* sprite);
extern f32 func_00112740(void* sprite);
extern void func_001127d0(void* sprite, u32 enabled);
extern void* func_001158b0(void* unused, void* atlas, s32 tile);
extern void func_00115980(void* sprite);
extern void func_001159f0(void* unused, void* atlas, s32 tile, u32 alpha,
                          f32 x, f32 y, f32 depth);
extern void func_00115ad0_gs(void* unused, void* atlas, s32 tile,
                          f32 x, f32 y, u32 alpha, u32 extraAlpha, f32 depth);
extern void func_00113a30(f32 depth, u32 color, f32 x, f32 y,
                          s32 width, s32 height);
extern void func_00113d80(f32 depth, u32 color, f32 x, f32 y,
                          s32 width, s32 height);
extern void func_00114af0(f32 depth, u32 color, f32 x, f32 y,
                          s32 width, s32 height, void* texture);
extern void func_003b2cb0(f32 depth, s32 x, s32 y, u32 color,
                          u32 font, u32 align, const void* text,
                          u32 width, u32 flags);
extern void func_004d0f00(void* resource);
extern u32 RpRandom(void);
#pragma alias DAT_007caf38_gs DAT_007caf38
extern f32 DAT_007caf38_gs;
extern u16 func_0016c670(s16 pcId);
extern s32 func_00530da0(f32 value);
extern s32 sprintf(char* buffer, const char* format, ...);
extern char* strcpy(char* destination, const char* source);
#pragma alias gsConfigureTransition func_0018bc10
extern void gsConfigureTransition(void* transition, s32 drawMode,
                                  s32 positionMode, s32 alphaMode,
                                  u64 start, u64 end, s32 param0, s32 tile,
                                  s32 startFrame, s32 endFrame, f32 depth);

/* Runtime allocator/free-function tables. */
extern u32 D_00960184[];
#pragma alias D_00960184_abs D_00960184
extern u8 D_00960184_abs[];
extern u32 jtbl_0096017C[];
#define GS_ALLOC(count, size, flags) \
    (*(void* (**)(u32, u32, u32))D_00960184_abs)((count), (size), (flags))
#define GS_FREE(ptr) (*(void (**)(void*))jtbl_0096017C)((ptr))

/* Render-state callback table and data resources. */
extern void (*D_00960090)(u32 state, u32 value);
#pragma alias D_00960090_abs D_00960090
extern u8 D_00960090_abs[];
extern void* D_00846730[0x12];
extern void* DAT_007ce008;

extern const char D_005E4320[];
extern const char D_005E4340[];
extern const char D_005E4360[];
extern const char D_005E4380[];
extern const char D_005E43A0[];
extern const char D_005E43C0[];
extern const char D_005E43E0[];
extern const char D_005E43F0[];
extern const char D_005E4418[];
extern const char D_005E4430[];
extern const char D_005E4450[];
extern const char D_005E4480[];
extern const char D_005E44B0[];
extern const char D_005E44D0[];
extern const char D_005E44E0[];
extern const char D_005E4500[];
extern const char D_005E4520[];
extern const char D_005E4540[];
extern const char D_005E4560[];
extern const char D_005E4580[];
extern const char D_005E45A0[];
extern const char D_005E45C0[];
extern const char D_005E45E0[];
extern const char D_005E4600[];
extern const char D_005E4620[];
extern const char D_005E4640[];
extern const char D_005E4660[];
extern const char D_005E4680[];
extern const char D_005E46A0[];



/* Target work blocks use the retail 32-bit offsets. */
#define GS_U8(p, o) (*(u8*)((u8*)(p) + (o)))
#define GS_S8(p, o) (*(s8*)((u8*)(p) + (o)))
#define GS_U16(p, o) (*(u16*)((u8*)(p) + (o)))
#define GS_S16(p, o) (*(s16*)((u8*)(p) + (o)))
#define GS_U32(p, o) (*(u32*)((u8*)(p) + (o)))
#define GS_S32(p, o) (*(s32*)((u8*)(p) + (o)))
#define GS_F32(p, o) (*(f32*)((u8*)(p) + (o)))
#define GS_PTR(p, o) (*(void**)((u8*)(p) + (o)))
#define GS_TASK(p, o) (*(KwlnTask**)((u8*)(p) + (o)))

typedef struct GsCdvdWork
{
    u32 reserved00;
    HCdvd* cdvd;
} GsCdvdWork;
typedef struct GsLargeCdvdWork
{
    u8 reserved00[0x20];
    HCdvd* cdvd;
} GsLargeCdvdWork;
typedef struct GsResourceWork
{
    u8 reserved00[0x28];
    void* resources[0x12];
    void* allocation;
} GsResourceWork;
typedef struct GsAnimationWork
{
    u32 reserved00;
    HCdvd* cdvd;
    u8 reserved08[0x200];
    u32 transitionInitialized;
    u32 visible;
    void* transitions;
    void* atlas;
} GsAnimationWork;
typedef struct GsB270Entry
{
    u8 reserved00[0x154];
    void* cache;
    u8 reserved158[0x20c];
} GsB270Entry;

typedef struct GsB270Header
{
    u8 reserved00[0x30];
    void* resources[4];
    HCdvd* cdvd;
} GsB270Header;

typedef union GsB270Work
{
    GsB270Header header;
    GsB270Entry entries[3];
} GsB270Work;
typedef struct GsArchiveTaskWork
{
    u32 state;
    u32 reserved04;
    s32 argument;
    KwlnTask* tasks[4];
    void* resources[0x12];
} GsArchiveTaskWork;

typedef struct GsEb40WorkView
{
    u8 reserved00[0x60];
    s32 frame;
    u32 reserved64;
    u32 release;
} GsEb40WorkView;

typedef struct GsDb20WorkView
{
    u8 reserved00[0xc];
    s32 state;
    u8 reserved10[4];
    s16 pcId;
    u8 reserved16[0xe];
    s32 visible;
    u8 reserved28[4];
    void* sprite2c;
    u8 reserved30[4];
    void* sprite34;
    u8 reserved38[4];
    void* atlases[13];
    void* transition;
} GsDb20WorkView;






typedef union GsPackedPosition
{
    u64 value;
    f32 valueF[2];
} GsPackedPosition;

typedef struct GsPosition
{
    f32 valueF[2];
} GsPosition;

typedef struct GsTransition
{
    void* sprite;
    u32 enabled;
    s32 positionMode;
    s32 activePositionMode;
    s32 alphaMode;
    s32 tile;
    s32 elapsed;
    s32 start;
    s32 end;
    f32 depth;
    f32 startX;
    f32 startY;
    f32 endX;
    f32 endY;
    GsPosition position;
    u32 alpha;
} GsTransition;



typedef union GsPackedDimensions
{
    u64 value;
    s16 valueS[4];
} GsPackedDimensions;

typedef struct GsSprite
{
    u8 reserved00[0x10];
    f32 x;
    f32 y;
    u8 alpha;
    u8 reserved19[7];
    f32 angle;
    s16 centerX;
    s16 centerY;
    s16 scaleX;
    s16 scaleY;
    f32 depth;
} GsSprite;

static inline void gsDrawSprite(void* atlas, s32 tile, u32 alpha,
                                f32 x, f32 y, f32 depth)
{
    func_001159f0(NULL, atlas, tile, alpha, x, y, depth);
}

static inline void gsDrawSpriteAlt(void* atlas, s32 tile, u32 alpha,
                                   u32 extraAlpha, f32 x, f32 y, f32 depth)
{
    func_00115ad0_gs(NULL, atlas, tile, x, y, alpha, extraAlpha, depth);
}

static inline s16 gsMappedPcId(s16 pcId)
{
    if (datGetScenarioMode() != 0)
    {
        if (pcId == 1)
        {
            pcId = 11;
        }
        if (pcId == 9)
        {
            pcId = 12;
        }
        if (pcId == 3)
        {
            pcId = 11;
        }
    }
    return pcId;
}

static inline void* gsPcAtlas(void* object, s16 pcId)
{
    if (datGetScenarioMode() != 0)
    {
        if (pcId == 1)
        {
            pcId = 11;
        }
        if (pcId == 9)
        {
            pcId = 12;
        }
        if (pcId == 3)
        {
            pcId = 11;
        }
    }
    return GS_PTR(object, 0x3c + (pcId * 4));
}

static inline void gsDrawHeader(void* object, s32 tile0, s32 tile1, s32 tile2)
{
    void* atlas;
    void* transition;

    transition = GS_PTR(object, 0x70);
    atlas = gsPcAtlas(object, GS_S16(object, 0x14));
    gsDrawSprite(atlas, tile0, GS_U8(transition, 0x40),
                 GS_F32(transition, 0x38) + 20.0f,
                 GS_F32(transition, 0x3c) + 18.0f,
                 GS_F32(transition, 0x24));
    gsDrawSprite(atlas, tile1, GS_U8(transition, 0x40),
                 GS_F32(transition, 0x38) + 20.0f,
                 GS_F32(transition, 0x3c) + 18.0f,
                 GS_F32(transition, 0x24));
    gsDrawSprite(GS_PTR(object, 0x2c), tile2, GS_U8(transition, 0x40),
                 GS_F32(transition, 0x38) + 44.0f,
                 GS_F32(transition, 0x3c) + 39.0f,
                 GS_F32(transition, 0x24));
}

static inline void gsDrawStatusBars(void* object)
{
    s16 pcId;
    s32 value;
    s32 maxValue;
    s32 width;
    void* transition;

    transition = GS_PTR(object, 0x70);
    pcId = GS_S16(object, 0x14);

    value = datGetHp(pcId);
    maxValue = datGetMaxHp(pcId);
    width = ((value & 0xffff) << 5) / (maxValue & 0xffff);
    if (width != 0x20)
    {
        func_00113a30(GS_F32(transition, 0x24) - 1.0f,
                      0xffffff00,
                      GS_F32(transition, 0x38) + (f32)width + 50.0f,
                      GS_F32(transition, 0x3c) + 46.0f, 0x20 - width, 0x14);
    }
    gsDrawSprite(GS_PTR(object, 0x2c), 1, GS_U8(transition, 0x40),
                 GS_F32(transition, 0x38) + 50.0f,
                 GS_F32(transition, 0x3c) + 46.0f,
                 GS_F32(transition, 0x24));

    value = datGetSp(pcId);
    maxValue = func_0016c670(pcId);
    width = ((value & 0xffff) << 5) / (maxValue & 0xffff);
    if (width != 0x20)
    {
        func_00113a30(GS_F32(transition, 0x24) - 3.0f,
                      0xffffff00,
                      GS_F32(transition, 0x38) + (f32)width + 50.0f,
                      GS_F32(transition, 0x3c) + 51.0f, 0x20 - width, 0x14);
    }
    gsDrawSprite(GS_PTR(object, 0x2c), 2, GS_U8(transition, 0x40),
                 GS_F32(transition, 0x38) + 50.0f,
                 GS_F32(transition, 0x3c) + 51.0f,
                 GS_F32(transition, 0x24) - 2.0f);
}

static inline void gsDrawAnimatedSprite(void* object, s32 atlasOffset,
                                        s32 tile, s32 timer, s32 maxTimer,
                                        s32 xOffset, s32 yOffset,
                                        u32 alpha, s16 scale)
{
    void* transition;
    void* sprite;
    f32 width;
    f32 height;
    GsSprite* node;

    transition = GS_PTR(object, 0x70);
    sprite = func_001158b0(NULL, GS_PTR(object, atlasOffset), tile);
    node = (GsSprite*)sprite;
    node->depth = GS_F32(transition, 0x24) - 4.0f;
    node->scaleX = scale;
    node->scaleY = scale;
    width = func_001126b0(sprite);
    node->centerX = (s16)(s32)(width / 2.0f);
    height = func_00112740(sprite);
    node->centerY = (s16)(s32)(height / 2.0f);
    width = func_001126b0(sprite);
    node->x = GS_F32(transition, 0x38) + 6.0f + (f32)xOffset - width / 2.0f;
    height = func_00112740(sprite);
    node->y = GS_F32(transition, 0x3c) + 22.0f + (f32)yOffset - height / 2.0f;
    node->alpha = (u8)alpha;
    func_001127d0(sprite, 1);
    func_00115980(sprite);
    (void)timer;
    (void)maxTimer;
}


















/* Removing this loses FUN_0018bd90 (MATCH nd0 -> MISMATCH nd24) - measured W161. */































 

extern void* func_001832c0(KwlnTask* task);
extern void* func_00183410(KwlnTask* task);
extern void func_00184890(KwlnTask* task);
extern void func_001159f0(void* unused, void* atlas, s32 tile, u32 alpha,
                           f32 x, f32 y, f32 depth);
extern void func_00115bc0(void* unused, void* atlas, s32 tile, u32 alpha,
                           u32 red, u32 green, u32 blue,
                           f32 x, f32 y, f32 depth);
extern void func_00113a30(f32 depth, u32 color, f32 x, f32 y,
                          s32 width, s32 height);
extern void func_003b2cb0(f32 depth, s32 x, s32 y, u32 color, u32 font,
                          u32 align, const void* text, u32 width, u32 flags);
extern void func_00108f70();
extern u8 func_00109f60(s16 channelIndex, s16 mappedChannelIndex);
extern void (*D_00960090)(u32 state, u32 value);
extern void (*D_00960094)(u32 state, void* value);
#pragma alias D_00960090_abs D_00960090
#pragma alias D_00960094_abs D_00960094
extern u8 D_00960090_abs[];
extern u8 D_00960094_abs[];
extern void (*D_009600A0)(RwPrimitiveType primitiveType, RwIm2DVertex* vertices, s32 vertexCount);
extern f32 D_00960088;
extern const f32 DAT_007caf38;
extern f32 DAT_007cad38;
extern f32 DAT_007cad40;
extern f32 DAT_007cad44;
extern f32 DAT_007cad48;
extern f32 DAT_007cae04;
extern f32 DAT_007cae08;
extern RwV3d D_005D6C28;
extern const char D_005E3F38[];
extern const char* D_005E4150[];
extern const char D_005E4190[];
extern const char D_005E41A8[];
extern const char D_005E41C0[];
extern const char D_005E41E0[];
extern const char D_005E41F0[];
extern const char D_005E4200[];
extern const char D_005E4220[];
extern const char D_005E4240[];
extern const char D_005E4260[];
extern const char D_005E4280[];
extern const char D_005E4290[];
extern const char D_005E42B8[];
extern const char D_005E42D0[];
extern void* H_Calloc(u32 count, size_t size);
extern f32 sinf(f32 angle);
extern f32 cosf(f32 angle);
extern RwMatrix* func_004c38c0(void);
extern void func_004c3880(RwMatrix* matrix);
extern RwMatrix* func_004c2fc0(RwReal oneMinusCosine,
                               RwReal sine,
                               RwMatrix* matrix,
                               const RwV3d* axis,
                               RwOpCombineType combineOp);
extern RwV3d* func_004c6c20(RwV3d* pointsOut,
                            const RwV3d* pointsIn,
                            RwUInt32 pointCount,
                            const RwMatrix* matrix);
extern void* func_004c9d10(RwCamera* camera);
extern void* func_004c9d00(RwCamera* camera);

#define CLND_MOON_X_SCALE (*(f32*)0x007cb174)
#define CLND_MOON_Y_SCALE (*(f32*)0x007cb178)

typedef struct
{
    u32 state;
    void* resource;
    s16 sourceMonth;
    s16 sourceDay;
    s16 frame;
    s16 padding;
    s16 currentMonth;
    s16 currentDay;
    s16 targetMonth;
    s16 targetDay;
    KwlnTask* eventTask;
} CalendarDateTransitionWork;

typedef struct
{
    u32 state;
    void* resource;
    s32 currentValue;
    s32 selectedValue;
    s32 targetValue;
    s32 timer;
    KwlnTask* transitionTask;
    KwlnTask* eventTask;
    void* archive;
} CalendarMoonWork;

typedef struct
{
    u32 state;
    s32 fadeTimer;
    s32 transitionTimer;
    KwlnTask* tasks[2];
    u8 reserved14[4];
} CalendarTransitionWork;

typedef struct
{
    u32 state;
    s32 messageIndex;
    s32 timer;
} CalendarRecoveredColdWork;

typedef struct
{
    u32 state;
    s32 timer;
    s32 alpha;
    s32 angle;
    s32 scaleAngle;
} CalendarSkipDrawWork;

typedef struct
{
    u32 state;
    s32 month;
    s32 day;
    s32 time;
    void* resource;
} CalendarTransitionMessageWork;



static inline CalendarPackedPosition clndPackPosition(CalendarPackedPosition* position,
                                                            f32 x,
                                                            f32 y)
{
    position->x = x;
    position->y = y;
    return *position;
}

static inline f32 clndPackedX(u64 position)
{
    union
    {
        f32 value;
        u32 bits;
    } bits;

    bits.bits = (u32)position;
    return bits.value;
}

static inline f32 clndPackedY(u64 position)
{
    union
    {
        f32 value;
        u32 bits;
    } bits;

    bits.bits = (u32)(position >> 32);
    return bits.value;
}

static s32 clndNormalizeAngle(s32 angle)
{
    while (angle > 180)
    {
        angle -= 360;
    }
    while (angle < -180)
    {
        angle += 360;
    }
    return angle;
}


/* W414 negative: clnd global-store and union probes stayed nd29/object324; no retained change. */
// FUN_00184DB0
KwlnTask* func_00184db0(KwlnTask* parent)
{
    u8* work;
    KwlnTask* task;
    KwlnTask* child;
    u8* childWork;
    void* (**allocator)(u32, u32, u32);
    f32 calendarX;

    allocator = (void* (**)(u32, u32, u32))D_00960184;
    work = (*allocator)(1, 0x1a0, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent,
                          D_005E41A8,
                          0x1cd5,
                          (KwlnTaskUpdateFunc)func_00183410,
                          (KwlnTaskDestroyFunc)func_00184890,
                          work);
    if (task == NULL)
    {
        return NULL;
    }

    *(s32*)(work + 0x18) = clndGetCurrentMonth();
    *(s32*)(work + 0x1c) = clndGetCurrentDay();
    *(s32*)(work + 0x20) = datGetTime() & 0xff;

    childWork = (*allocator)(1, 0x24, 0x40000);
    if (childWork != NULL)
    {
        child = kwlnTaskCreate(task,
                               D_005E3F38,
                               0x1cd5,
                               (KwlnTaskUpdateFunc)func_001832c0,
                               clnd001833e0,
                               childWork);
        if (child != NULL)
        {
            *(f32*)(childWork + 0x10) = 400.0f;
            calendarX = *(f32*)(childWork + 0x10);
            *(f32*)(childWork + 0x08) = 400.0f;
            CLND_CALENDAR_X = calendarX;
        }
    }

    return task;
}

/* W357 measured opt_dead_assignments off: without nd1505/object2260, with nd1344/object2352; window 2352; retained. */
#pragma opt_dead_assignments off
// FUN_00184F00
asm void* func_00184f00(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdffb0
  .word 0xffbf0030
  .word 0x7fb20020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080882d
  .word 0x8c90003c
  .word 0x8e020000
  .word 0x2c41000a
  .word 0x1020023a
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636700
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x3c04005e
  .word 0x248441c0
  .word 0x0c0448dc
  .word 0x00000000
  .word 0xae020004
  .word 0x24020001
  .word 0xae020000
  .word 0x1000022a
  .word 0x00000000
  .word 0x8e040004
  .word 0x0c0447cc
  .word 0x00000000
  .word 0x24030001
  .word 0x14430224
  .word 0x00000000
  .word 0xa600000c
  .word 0x86020008
  .word 0xa6020010
  .word 0x8602000a
  .word 0xa6020012
  .word 0x24020002
  .word 0xae020000
  .word 0x1000021b
  .word 0x00000000
  .word 0x8602000c
  .word 0x24420001
  .word 0xa602000c
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2841003d
  .word 0x14200213
  .word 0x00000000
  .word 0xa600000c
  .word 0x24020003
  .word 0xae020000
  .word 0x1000020e
  .word 0x00000000
  .word 0xafa00048
  .word 0x8603000c
  .word 0x2402001e
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c02c2a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xe7a0004c
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061840
  .word 0x00000000
  .word 0xafa00048
  .word 0x8603000c
  .word 0x2402001e
  .word 0x00431023
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c0242a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010042
  .word 0x3c0241f0
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0xe7a0004c
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061850
  .word 0x00000000
  .word 0x8602000c
  .word 0x24420001
  .word 0xa602000c
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x2402001e
  .word 0x146201dc
  .word 0x00000000
  .word 0xa600000c
  .word 0x24020004
  .word 0xae020000
  .word 0x100001d7
  .word 0x00000000
  .word 0x8602000c
  .word 0x24420001
  .word 0xa602000c
  .word 0x0002143c
  .word 0x0002143f
  .word 0x2841000f
  .word 0x10200017
  .word 0x00000000
  .word 0xafa00048
  .word 0x2404000f
  .word 0x00821823
  .word 0x00031080
  .word 0x00431021
  .word 0x00021080
  .word 0x0044001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a0004c
  .word 0x46000007
  .word 0xe7a0004c
  .word 0x00031200
  .word 0x00431023
  .word 0x7044001a
  .word 0x70001012
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0x10000007
  .word 0x00000000
  .word 0x44800000
  .word 0xafa00048
  .word 0xafa0004c
  .word 0x46000007
  .word 0xe7a0004c
  .word 0x0000882d
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x86070010
  .word 0x0c061660
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x86070010
  .word 0x0c0616b8
  .word 0x00000000
  .word 0x8602000c
  .word 0x2404003c
  .word 0x00821823
  .word 0x00031200
  .word 0x00431023
  .word 0x0044001a
  .word 0x00001012
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x86070010
  .word 0x8608000a
  .word 0x0c0616d0
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x0c061814
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061840
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061850
  .word 0x00000000
  .word 0x8603000c
  .word 0x2402003c
  .word 0x1462017e
  .word 0x00000000
  .word 0xa600000c
  .word 0x24020005
  .word 0xae020000
  .word 0x10000179
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070010
  .word 0x0c061660
  .word 0x00000000
  .word 0x8603000c
  .word 0x2861000a
  .word 0x10200009
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070010
  .word 0x0c0616b8
  .word 0x00000000
  .word 0x1000002d
  .word 0x00000000
  .word 0x2402000f
  .word 0x1062001f
  .word 0x00000000
  .word 0x2402000e
  .word 0x10620018
  .word 0x00000000
  .word 0x2402000d
  .word 0x10620011
  .word 0x00000000
  .word 0x2402000c
  .word 0x1062000a
  .word 0x00000000
  .word 0x2402000b
  .word 0x10620003
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x3c023f80
  .word 0xafa2004c
  .word 0x10000012
  .word 0x00000000
  .word 0x3c024040
  .word 0xafa2004c
  .word 0x1000000e
  .word 0x00000000
  .word 0x3c024080
  .word 0xafa2004c
  .word 0x1000000a
  .word 0x00000000
  .word 0x3c0240a0
  .word 0xafa2004c
  .word 0x10000006
  .word 0x00000000
  .word 0x3c024000
  .word 0xafa2004c
  .word 0x10000002
  .word 0x00000000
  .word 0xafa0004c
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070010
  .word 0x0c0616b8
  .word 0x00000000
  .word 0x8602000c
  .word 0x24420001
  .word 0xa602000c
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x2402000f
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c0242ae
  .word 0x44820800
  .word 0x00000000
  .word 0x46000802
  .word 0xe7a00048
  .word 0x46000007
  .word 0xe7a00048
  .word 0xafa0004c
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070010
  .word 0x86080012
  .word 0x0c0616d0
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061814
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061840
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061850
  .word 0x00000000
  .word 0x8603000c
  .word 0x2402000f
  .word 0x146200fa
  .word 0x00000000
  .word 0x86040010
  .word 0x86050012
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x0040902d
  .word 0x26510001
  .word 0x86040014
  .word 0x86050016
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x16220006
  .word 0x00000000
  .word 0xa600000c
  .word 0x24020006
  .word 0xae020000
  .word 0x100000e9
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05f60c
  .word 0x00000000
  .word 0xa6020010
  .word 0x0220202d
  .word 0x0c05f670
  .word 0x00000000
  .word 0xa6020012
  .word 0xa600000c
  .word 0x100000de
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x0c061660
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x0c0616b8
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x86080016
  .word 0x0c0616d0
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061814
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061840
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061850
  .word 0x00000000
  .word 0x8602000c
  .word 0x24420001
  .word 0xa602000c
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x24020014
  .word 0x146200b0
  .word 0x00000000
  .word 0xa600000c
  .word 0x24020008
  .word 0xae020000
  .word 0x100000ab
  .word 0x00000000
  .word 0x2404141c
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1040000d
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c061d54
  .word 0x00000000
  .word 0xae020018
  .word 0x24020009
  .word 0xae020000
  .word 0x2404141c
  .word 0x0000282d
  .word 0x0c05bc7c
  .word 0x00000000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020007
  .word 0xae020000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x0c061660
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x0c0616b8
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x86080016
  .word 0x0c0616d0
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061814
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061840
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061850
  .word 0x00000000
  .word 0x1000006e
  .word 0x00000000
  .word 0x8e040018
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430003
  .word 0x00000000
  .word 0x24020007
  .word 0xae020000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x0c061660
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x0c0616b8
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x86070014
  .word 0x86080016
  .word 0x0c0616d0
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061814
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061840
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0000302d
  .word 0x0c061850
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x8602000c
  .word 0x24420001
  .word 0xa602000c
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000f
  .word 0x0062001a
  .word 0x00001012
  .word 0x00028c3c
  .word 0x00118c3f
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x86070014
  .word 0x0c061660
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x86070014
  .word 0x0c0616b8
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x86070014
  .word 0x86080016
  .word 0x0c0616d0
  .word 0x00000000
  .word 0xafa0004c
  .word 0xafa00048
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x0c061814
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x0c061840
  .word 0x00000000
  .word 0x8e040004
  .word 0xdfa50048
  .word 0x0220302d
  .word 0x0c061850
  .word 0x00000000
  .word 0x8603000c
  .word 0x2402000f
  .word 0x14620004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0030
  .word 0x7bb20020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0050
  .word 0x03e00008
  .word 0x00000000
}

#pragma opt_dead_assignments reset
// FUN_00185830
void func_00185830(KwlnTask* task)
{
    CalendarDateTransitionWork* work;

    work = (CalendarDateTransitionWork*)task->workData;
    if (work->resource != NULL)
    {
        func_001124b0(work->resource);
        work->resource = NULL;
    }
    CLND_FREE(work);
}

// FUN_00185880
KwlnTask* func_00185880(KwlnTask* parent,
                        s16 sourceMonth,
                        s16 sourceDay,
                        s16 targetMonth,
                        s16 targetDay)
{
    KwlnTask* task;
    CalendarDateTransitionWork* work;

    work = CLND_ALLOC(1, sizeof(CalendarDateTransitionWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreate(parent,
                          D_005E41E0,
                          0x18c0,
                          func_00184f00,
                          func_00185830,
                          work);
    if (task == NULL)
    {
        return NULL;
    }

    work->sourceMonth = sourceMonth;
    work->sourceDay = sourceDay;
    work->targetMonth = targetMonth;
    work->targetDay = targetDay;
    H_Fade_SetType(HFADE_TRANSITION2);
    return task;
}

#pragma push
/* Removing this pragma worsens func_00185980 (fndiff nd3 -> nd75, object 352B -> 344B) - measured W305. */
#pragma opt_common_subs off
// FUN_00185980
void func_00185980(void* resource, CalendarPackedPosition position, u32 alpha, s16 month)
{
    void* unused;
    f32 y;
    f32 x;
    f32 xFirst;
    f32 yFirst;
    f32 x2;
    f32 ySecond;
    f32 yThird;
    s32 signedMonth;

    /* Removing this barrier restores a 7-word f20/f21 residual (fndiff nd7 -> nd0) - measured W314. */
    asm ("" : "+m"(position));
    y = position.y;
    /* Part of the measured barrier set: removing all seven worsens fndiff nd3 -> nd17 (W305). */
    asm ("" : "+m"(y));
    x = position.x;
    /* Part of the measured barrier set: removing all seven worsens fndiff nd3 -> nd17 (W305). */
    asm ("" : "+m"(x));
    xFirst = x + 289.0f;
    /* Part of the measured barrier set: removing all seven worsens fndiff nd3 -> nd17 (W305). */
    asm ("" : "+m"(xFirst));
    yFirst = y + 112.0f;
    /* Part of the measured barrier set: removing all seven worsens fndiff nd3 -> nd17 (W305). */
    asm ("" : "+m"(yFirst));
    if (month < 4)
    {
        func_001159f0(unused, resource, 0x50,
                      alpha & 0xff, xFirst, yFirst, 50.0f);
    }
    else
    {
        func_001159f0(unused, resource, 0x4f,
                      alpha & 0xff, xFirst, yFirst, 50.0f);
    }
    x2 = position.x + 251.0f;
    ySecond = y + 131.0f;
    /* Part of the measured barrier set: removing all seven worsens fndiff nd3 -> nd17 (W305). */
    asm ("" : "+m"(ySecond));
    signedMonth = month;
    func_001159f0(unused, resource, signedMonth - 1,
                  alpha & 0xff, x2, ySecond, 50.0f);
    yThird = y + 163.0f;
    /* Part of the measured barrier set: removing all seven worsens fndiff nd3 -> nd17 (W305). */
    asm ("" : "+m"(yThird));
    func_001159f0(unused, resource, signedMonth + 0xb,
                  alpha & 0xff, x2, yThird, 50.0f);
}
#pragma pop

// FUN_00185AE0
void func_00185ae0(void* resource, CalendarPackedPosition position, u32 alpha, s16 day)
{
    f32 x;
    f32 y;
    u32 cellAlpha;

    (void)day;
    x = position.x + 305.0f;
    /* Removing this barrier loses func_00185ae0 (MATCH nd0 -> MISMATCH nd35) - measured W164. */
    asm ("" : "+m"(x));
    y = position.y + 188.0f;
    /* Removing this barrier loses func_00185ae0 (MATCH nd0 -> MISMATCH nd20) - measured W164. */
    asm ("" : "+m"(y));
    cellAlpha = alpha & 0xff;
    func_001159f0(resource, resource, 0x4e, cellAlpha, x, y, 50.0f);
}

// FUN_00185B40
#ifndef PC_BUILD
asm void func_00185b40(void* resource,
                   CalendarPackedPosition position,
                   u32 alpha,
                   s16 month,
                   s16 day)
{
  .set noreorder
  .word 0x27bdff10
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
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080b02d
  .word 0xffa500e8
  .word 0xa7a600e6
  .word 0x00e0882d
  .word 0x0100802d
  .word 0xc7b400ec
  .word 0x3c024244
  .word 0x44826000
  .word 0x24020273
  .word 0x44820000
  .word 0x00000000
  .word 0x46800360
  .word 0x3c02433e
  .word 0x44827000
  .word 0x2404ff00
  .word 0x2405001e
  .word 0x00a0302d
  .word 0x0c044e8c
  .word 0x00000000
  .word 0x3c024244
  .word 0x44826000
  .word 0x44806800
  .word 0x3c02433e
  .word 0x44827000
  .word 0x2404ff00
  .word 0x24050015
  .word 0x2406001e
  .word 0x0c044e8c
  .word 0x00000000
  .word 0x0011243c
  .word 0x0004243f
  .word 0x00102c3c
  .word 0x00052c3f
  .word 0x0c05f62c
  .word 0x00000000
  .word 0x7fa200d0
  .word 0x70401e28
  .word 0x2474fffd
  .word 0x0000f02d
  .word 0x240400ff
  .word 0x87a300e6
  .word 0x0060182d
  .word 0x00831823
  .word 0x7fa300c0
  .word 0x3c034188
  .word 0x44830800
  .word 0xc7a000e8
  .word 0x46000d40
  .word 0x3c034355
  .word 0x44830000
  .word 0x00000000
  .word 0x46140500
  .word 0x100000ea
  .word 0x00000000
  .word 0x24030003
  .word 0x14830005
  .word 0x00000000
  .word 0x87a300e6
  .word 0x0060a82d
  .word 0x10000008
  .word 0x00000000
  .word 0x7ba300c0
  .word 0x0003243c
  .word 0x0004243f
  .word 0x240300ff
  .word 0x00641823
  .word 0x0003ac3c
  .word 0x0015ac3f
  .word 0x068000d6
  .word 0x00000000
  .word 0x3c0242ae
  .word 0x44821000
  .word 0x449e0000
  .word 0x00000000
  .word 0x46800060
  .word 0x44800000
  .word 0x00000000
  .word 0x46150018
  .word 0x460115dc
  .word 0x0280202d
  .word 0x0c05f670
  .word 0x00000000
  .word 0x7fa200b0
  .word 0x7ba200d0
  .word 0x1682001e
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x641200ff
  .word 0x641100a2
  .word 0x641000ba
  .word 0x1000002e
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05f6b8
  .word 0x00000000
  .word 0x24030006
  .word 0x10430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x641200a8
  .word 0x641100aa
  .word 0x641000ff
  .word 0x10000021
  .word 0x00000000
  .word 0x641200ff
  .word 0x0240882d
  .word 0x0240802d
  .word 0x1000001c
  .word 0x00000000
  .word 0x0014243c
  .word 0x0004243f
  .word 0x0c05f6d0
  .word 0x00000000
  .word 0x10400006
  .word 0x00000000
  .word 0x64120088
  .word 0x6411005c
  .word 0x64100062
  .word 0x10000011
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05f6b8
  .word 0x00000000
  .word 0x24030006
  .word 0x10430003
  .word 0x00000000
  .word 0x10000006
  .word 0x00000000
  .word 0x6412005c
  .word 0x64110072
  .word 0x64100088
  .word 0x10000004
  .word 0x00000000
  .word 0x64120058
  .word 0x64110064
  .word 0x6410006a
  .word 0x7ba200b0
  .word 0x2842000a
  .word 0x1440002c
  .word 0x00000000
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46140580
  .word 0x2403000a
  .word 0x7ba200b0
  .word 0x0043001a
  .word 0x00001012
  .word 0x24460018
  .word 0x46170300
  .word 0x32a700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02e0202d
  .word 0x02c0282d
  .word 0x4600b346
  .word 0x0240402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x2403000a
  .word 0x7ba200b0
  .word 0x0043001a
  .word 0x00001010
  .word 0x24460018
  .word 0x3c02421c
  .word 0x44820000
  .word 0x00000000
  .word 0x46170300
  .word 0x32a700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02e0202d
  .word 0x02c0282d
  .word 0x4600b346
  .word 0x0240402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x10000015
  .word 0x00000000
  .word 0x7ba200b0
  .word 0x24460018
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46170300
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x32a700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02e0202d
  .word 0x02c0282d
  .word 0x0240402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05f6b8
  .word 0x00000000
  .word 0x2c410007
  .word 0x1020001b
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636730
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x24130028
  .word 0x10000011
  .word 0x00000000
  .word 0x24130022
  .word 0x1000000e
  .word 0x00000000
  .word 0x24130023
  .word 0x1000000b
  .word 0x00000000
  .word 0x24130024
  .word 0x10000008
  .word 0x00000000
  .word 0x24130025
  .word 0x10000005
  .word 0x00000000
  .word 0x24130026
  .word 0x10000002
  .word 0x00000000
  .word 0x24130027
  .word 0x3c024188
  .word 0x44820000
  .word 0x00000000
  .word 0x46170300
  .word 0x3c024234
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x32a700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02e0202d
  .word 0x02c0282d
  .word 0x0260302d
  .word 0x0240402d
  .word 0x0220482d
  .word 0x0200502d
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c0606d4
  .word 0x00000000
  .word 0x304200ff
  .word 0x2446002f
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46170300
  .word 0x3c02426c
  .word 0x44820000
  .word 0x00000000
  .word 0x46140340
  .word 0x32a700ff
  .word 0x3c024248
  .word 0x44827000
  .word 0x02e0202d
  .word 0x02c0282d
  .word 0x240800ff
  .word 0x0100482d
  .word 0x0100502d
  .word 0x0c0456f0
  .word 0x00000000
  .word 0x26940001
  .word 0x27c30001
  .word 0x0003f43c
  .word 0x001ef43f
  .word 0x001e243c
  .word 0x0004243f
  .word 0x28830008
  .word 0x1460ff13
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
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00f0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma push
/* Removing this worsens func_00186050 (nd29 -> nd37) - measured W161. */
#pragma opt_common_subs off
/* W357 measured opt_propagation off: without nd24/object172, with nd0/object172; window 176; retained. */
#pragma opt_propagation off
// FUN_00186050
void func_00186050(void* resource, CalendarPackedPosition position, u32 alpha)
{
    f32 y;
    f32 x;
    void* unused;

    y = position.y;
    func_001159f0(unused, resource, 0x2b, alpha & 0xff,
                  position.x, y, 48.0f);
    x = position.x + 449.0f;
    func_001159f0(unused, resource, 0x2c, alpha & 0xff,
                  x, y, 48.0f);
}
#pragma pop

#pragma opt_propagation reset
// FUN_00186100
void func_00186100(void* resource, CalendarPackedPosition position, u32 alpha)
{
    f32 x;
    f32 y;
    u32 drawAlpha;

    y = position.y;
    /* Removing this barrier loses func_00186100 (MATCH nd0 -> MISMATCH nd24) - measured W164. */
    asm ("" : "+m"(y));
    x = position.x;
    drawAlpha = alpha & 0xff;
    func_001159f0(resource, resource, 0x29, drawAlpha,
                  x, y, 48.0f);
}

// FUN_00186140
void func_00186140(void* resource, CalendarPackedPosition position, u32 alpha)
{
    f32 x;
    f32 y;
    u32 drawAlpha;

    y = position.y + 404.0f;
    /* Removing this barrier loses func_00186140 (MATCH nd0 -> MISMATCH nd20) - measured W164. */
    asm ("" : "+m"(y));
    x = position.x;
    drawAlpha = alpha & 0xff;
    func_001159f0(resource, resource, 0x2a, drawAlpha,
                  x, y, 48.0f);
}
// FUN_00186190
asm void* func_00186190(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdffc0
  .word 0xffbf0020
  .word 0x7fb10010
  .word 0x7fb00000
  .word 0x0080802d
  .word 0x8c91003c
  .word 0x8e220000
  .word 0x2c41000c
  .word 0x102001c6
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636750
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e240020
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x104001ba
  .word 0x00000000
  .word 0x8e240020
  .word 0x0000282d
  .word 0x27a6003c
  .word 0x0c040840
  .word 0x00000000
  .word 0x0040202d
  .word 0x0c044908
  .word 0x00000000
  .word 0xae220004
  .word 0x24020001
  .word 0xae220000
  .word 0x100001ad
  .word 0x00000000
  .word 0x8e240004
  .word 0x0c0447cc
  .word 0x00000000
  .word 0x24030001
  .word 0x144301a7
  .word 0x00000000
  .word 0xae200014
  .word 0x8e220008
  .word 0xae22000c
  .word 0x24020002
  .word 0xae220000
  .word 0x100001a0
  .word 0x00000000
  .word 0x8e220014
  .word 0x24420001
  .word 0xae220014
  .word 0xafa00034
  .word 0xafa00030
  .word 0x24040005
  .word 0x00821823
  .word 0x00031200
  .word 0x00431023
  .word 0x0044001a
  .word 0x00001012
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061af4
  .word 0x00000000
  .word 0x8e230014
  .word 0x24020005
  .word 0x14620183
  .word 0x00000000
  .word 0xae200014
  .word 0x24020003
  .word 0xae220000
  .word 0x1000017e
  .word 0x00000000
  .word 0x8e220014
  .word 0x24420001
  .word 0xae220014
  .word 0xafa00034
  .word 0xafa00030
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0000302d
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0000302d
  .word 0x0c061af4
  .word 0x00000000
  .word 0x8e230014
  .word 0x24020005
  .word 0x14620169
  .word 0x00000000
  .word 0xae200014
  .word 0x24020004
  .word 0xae220000
  .word 0x8e230010
  .word 0x24020008
  .word 0x14620162
  .word 0x00000000
  .word 0xae220000
  .word 0x1000015f
  .word 0x00000000
  .word 0xafa00034
  .word 0xafa00030
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0000302d
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0000302d
  .word 0x0c061af4
  .word 0x00000000
  .word 0x8e24001c
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24040003
  .word 0x1444014b
  .word 0x00000000
  .word 0xae200014
  .word 0x8e23000c
  .word 0x8e220010
  .word 0x14620005
  .word 0x00000000
  .word 0x24020007
  .word 0xae220000
  .word 0x10000142
  .word 0x00000000
  .word 0xae240000
  .word 0x1000013f
  .word 0x00000000
  .word 0x8e220014
  .word 0x24430001
  .word 0xae230014
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c024396
  .word 0x44820800
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a00030
  .word 0xafa00034
  .word 0x8e230014
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001012
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061af4
  .word 0x00000000
  .word 0x8e230014
  .word 0x2402000a
  .word 0x14620108
  .word 0x00000000
  .word 0x8e220010
  .word 0xae22000c
  .word 0xae200014
  .word 0x24020005
  .word 0xae220000
  .word 0x10000101
  .word 0x00000000
  .word 0x8e220014
  .word 0x24420001
  .word 0xae220014
  .word 0xafa00034
  .word 0x2404000a
  .word 0x00821823
  .word 0x00031200
  .word 0x00431023
  .word 0x0044001a
  .word 0x00001012
  .word 0x0002843c
  .word 0x0010843f
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021040
  .word 0x7044001a
  .word 0x70001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x3c02c396
  .word 0x44820800
  .word 0x00000000
  .word 0x46010002
  .word 0xe7a00030
  .word 0xafa00034
  .word 0x0010343c
  .word 0x0006343f
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8e230014
  .word 0x2402000a
  .word 0x146200cf
  .word 0x00000000
  .word 0xae200014
  .word 0x24020006
  .word 0xae220000
  .word 0x100000ca
  .word 0x00000000
  .word 0x8e220014
  .word 0x24420001
  .word 0xae220014
  .word 0xafa00034
  .word 0xafa00030
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0000302d
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8e230014
  .word 0x2861000a
  .word 0x10200013
  .word 0x00000000
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001012
  .word 0x00021c3c
  .word 0x00031c3f
  .word 0x240200ff
  .word 0x00431023
  .word 0x0002343c
  .word 0x0006343f
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0c061af4
  .word 0x00000000
  .word 0x10000007
  .word 0x00000000
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0000302d
  .word 0x0c061af4
  .word 0x00000000
  .word 0x8e230014
  .word 0x24020014
  .word 0x1462009f
  .word 0x00000000
  .word 0xae200014
  .word 0x8e23000c
  .word 0x8e220010
  .word 0x14620005
  .word 0x00000000
  .word 0x24020007
  .word 0xae220000
  .word 0x10000003
  .word 0x00000000
  .word 0x24020003
  .word 0xae220000
  .word 0x8e23000c
  .word 0x24020001
  .word 0x14620090
  .word 0x00000000
  .word 0x2404141c
  .word 0x0c05bc64
  .word 0x00000000
  .word 0x1040008b
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c061d54
  .word 0x00000000
  .word 0xae22001c
  .word 0x2402000b
  .word 0xae220000
  .word 0x10000083
  .word 0x00000000
  .word 0x8e220014
  .word 0x24430001
  .word 0xae230014
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x24020005
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc7818484
  .word 0x46010002
  .word 0xe7a00030
  .word 0x8e230014
  .word 0x00031100
  .word 0x00431823
  .word 0x00031080
  .word 0x00431023
  .word 0x00021840
  .word 0x24020005
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b03
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0xc7818488
  .word 0x46010002
  .word 0xe7a00034
  .word 0x8e230014
  .word 0x00031200
  .word 0x00431823
  .word 0x24020005
  .word 0x0062001a
  .word 0x00001012
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061af4
  .word 0x00000000
  .word 0x8e230014
  .word 0x24020005
  .word 0x14620035
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000033
  .word 0x00000000
  .word 0x8e220014
  .word 0x24430001
  .word 0xae230014
  .word 0xafa00034
  .word 0xafa00030
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001012
  .word 0x0002843c
  .word 0x0010843f
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061a90
  .word 0x00000000
  .word 0x8627000c
  .word 0x8e240004
  .word 0xdfa50030
  .word 0x0200302d
  .word 0x0c061af4
  .word 0x00000000
  .word 0x8e230014
  .word 0x2402000a
  .word 0x14620016
  .word 0x00000000
  .word 0xae200014
  .word 0x24020009
  .word 0xae220000
  .word 0x10000011
  .word 0x00000000
  .word 0x0c061c38
  .word 0x00000000
  .word 0xae220018
  .word 0x2402000a
  .word 0xae220000
  .word 0x1000000a
  .word 0x00000000
  .word 0x8e240018
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0020
  .word 0x7bb10010
  .word 0x7bb00000
  .word 0x27bd0040
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_001868F0
void func_001868f0(KwlnTask* task)
{
    CalendarMoonWork* work;

    work = (CalendarMoonWork*)task->workData;
    if (work->resource != NULL)
    {
        func_001124b0(work->resource);
        work->resource = NULL;
    }
    if (work->archive != NULL)
    {
        H_Cdvd_Destroy(work->archive);
        work->archive = NULL;
    }
    CLND_FREE(work);
}

// FUN_00186960
KwlnTask* func_00186960(KwlnTask* parent, s32 currentValue, s32 targetValue)
{
    KwlnTask* task;
    CalendarMoonWork* work;

    work = CLND_ALLOC(1, sizeof(CalendarMoonWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent,
                          D_005E41F0,
                          0x18bf,
                          func_00186190,
                          func_001868f0,
                          work);
    if (task == NULL)
    {
        return NULL;
    }
    work->currentValue = currentValue;
    work->targetValue = targetValue;
    work->archive = H_Cdvd_Request(D_005E4200, 1);
    return task;
}

// FUN_00186A40
void func_00186a40(void* resource, CalendarPackedPosition position, u32 alpha, s16 selection)
{
    void* unused;
    s32 tile;
    f32 x;
    f32 y;

    x = position.x + 207.0f;
    y = position.y + 183.0f;
    tile = 0;
    if (clndIsHolidayOrSunday_u32() == true &&
        (selection == 2 || selection == 3 || selection == 4 || selection == 5))
    {
        tile = 7;
    }
    else
    {
        switch (selection)
        {
            case 1: tile = 0; break;
            case 2: tile = 1; break;
            case 3: tile = 2; break;
            case 4: tile = 3; break;
            case 5: tile = 4; break;
            case 6: tile = 5; break;
            case 0:
            case 7: tile = 6; break;
            case 8: tile = 8; break;
            default: break;
        }
    }
    func_001159f0(unused,
                  resource,
                  tile,
                  alpha & 0xff,
                  x,
                  y,
                  50.0f);
}

/* W422 MATCH: declaration order `void* unused; s32 tile;` fixed every s0/s1 role row; gsDrawSpritePositionFirst(x, y, unused, resource, tile, alpha, depth) forced retail coordinate-before-alpha evaluation. fndiff was zero-row at nd9 while verify's owned_relocation_diffs exposed the switch's own jump table. Case map [1,2,3,4,5,6,0,7,8], with case 0/case 7 falling through at tile 0x10 and case 8 at tile 0x12, matched that table; naive [6,0..5,7,8] changed the body (first diffs 196-268, nd16), while the working map did not. Final nd0/object384/window384. */
// FUN_00186BD0
void func_00186bd0(void* resource, CalendarPackedPosition position, u32 alpha, s16 selection)
{
    void* unused;
    s32 tile;

    if (alpha == 0xff)
    {
        return;
    }
    tile = 0;
    if (clndIsHolidayOrSunday_u32() == true &&
        (selection == 2 || selection == 3 || selection == 4 || selection == 5))
    {
        tile = 0x11;
    }
    else
    {
    switch (selection)
    {
        case 1: tile = 0xa; break;
        case 2: tile = 0xb; break;
        case 3: tile = 0xc; break;
        case 4: tile = 0xd; break;
        case 5: tile = 0xe; break;
        case 6: tile = 0xf; break;
        case 0:
        case 7: tile = 0x10; break;
        case 8: tile = 0x12; break;
        default: break;
    }
    }
    gsDrawSpritePositionFirst(position.x + 207.0f,
                              position.y + 211.0f,
                              unused,
                              resource,
                              tile,
                              alpha & 0xff,
                              50.0f);
}

// FUN_00186D50
void* func_00186d50(KwlnTask* task)
{
    CalendarTransitionWork* work;
    s32 initialized;
    KwlnTask** entry;
    s32 i;

    work = (CalendarTransitionWork*)task->workData;
    switch (work->state)
    {
        case 0:
            work->tasks[0] = H_Maestro_CreateTask(NULL, 0x1cd2, D_005E4220);
            work->tasks[1] = H_Maestro_CreateTask(NULL, 0x1cd2, D_005E4240);
            work->state = 1;
            break;

        case 1:
            initialized = 1;
            for (i = 0; i < 2; i++)
            {
                entry = &work->tasks[i];
                if (!H_Maestro_FinishedInit(*entry))
                {
                    initialized = 0;
                }
            }
            if (initialized)
            {
                H_Maestro_00111f20(work->tasks[0], 1);
                H_Maestro_RequestDraw(work->tasks[0]);
                work->transitionTimer = 0;
                H_Maestro_SetAlphaMult(work->tasks[0], 0.0f);
                work->fadeTimer = 0;
                work->state = 2;
            }
            break;

        case 2:
            work->transitionTimer++;
            if (work->transitionTimer == 0x19)
            {
                func_0010a370(3, D_005E4260);
            }
            if (work->transitionTimer == 0x14 && H_Fade_IsHolding() == 0)
            {
                H_Fade_FadeOut();
                H_Fade_SetType(HFADE_TRANSITION2);
            }
            if (work->fadeTimer != 0x14)
            {
                work->fadeTimer++;
            }
            H_Maestro_SetAlphaMult(work->tasks[0],
                                   (f32)work->fadeTimer / 20.0f);
            if (H_Maestro_00111cb0(work->tasks[0]))
            {
                work->state = 3;
            }
            break;

        case 3:
            if (H_Maestro_FinishedInit(work->tasks[1]))
            {
                H_Fade_SetType(HFADE_DAY);
                H_Fade_SetDuration(0x28);
                if (work->tasks[0] != NULL)
                {
                    kwlnTaskDestroyWithHierarchy(work->tasks[0]);
                    work->tasks[0] = NULL;
                }
                H_Maestro_RequestDraw(work->tasks[1]);
                work->fadeTimer = 0;
                work->state = 4;
            }
            break;

        case 4:
            work->fadeTimer++;
            if (work->fadeTimer > 40 && work->fadeTimer < 140)
            {
                H_Maestro_SetAlphaMult(work->tasks[1],
                                       (100.0f - (f32)work->fadeTimer) / 100.0f);
            }
            if (kwlnTaskGetState(work->tasks[1]) == KWLNTASK_STATE_DESTROY)
            {
                work->tasks[1] = NULL;
                func_00109f60(3, 0);
                return KWLNTASK_STOP;
            }
            break;
    }
    return KWLNTASK_CONTINUE;
}

// FUN_00187050
void func_00187050(KwlnTask* task)
{
    CalendarTransitionWork* work;
    KwlnTask** child;
    s32 i;

    work = (CalendarTransitionWork*)task->workData;
    for (i = 0; i < 2; i++)
    {
        child = &work->tasks[0] + i;
        if (*child != NULL)
        {
            kwlnTaskDestroyWithHierarchy(*child);
            *child = NULL;
        }
    }
    CLND_FREE(work);
}

// FUN_001870E0
KwlnTask* func_001870e0(KwlnTask* parent)
{
    CalendarTransitionWork* work;
    KwlnTask* task;

    work = CLND_ALLOC(1, sizeof(CalendarTransitionWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    func_00108f70();
    task = kwlnTaskCreate(parent,
                          D_005E4280,
                          0x18c0,
                          func_00186d50,
                          func_00187050,
                          work);
    if (task == NULL)
    {
        return NULL;
    }
    datSetFlag(0x1412, true);
    return task;
}

// FUN_001871A0
void* func_001871a0(KwlnTask* task)
{
    CalendarRecoveredColdWork* work;
    u32 color;

    work = (CalendarRecoveredColdWork*)task->workData;
    switch (work->state)
    {
    case 0:
        work->messageIndex = -1;
        if (datGetFlag(0xa95) != 0)
            work->messageIndex = 0;
        if (datGetFlag(0xa96) != 0)
            work->messageIndex = 1;
        if (datGetFlag(0xa97) != 0)
            work->messageIndex = 2;
        if (datGetFlag(0xa98) != 0)
            work->messageIndex = 3;
        if (datGetFlag(0xa99) != 0)
            work->messageIndex = 4;
        if (datGetFlag(0xa9a) != 0)
            work->messageIndex = 5;
        if (datGetFlag(0xa7a) != 0)
            work->messageIndex = 6;
        if (datGetFlag(0xa9b) != 0)
            work->messageIndex = 7;
        if (datGetFlag(0xa9c) != 0)
            work->messageIndex = 8;
        if (datGetFlag(0xa9d) != 0)
            work->messageIndex = 9;
        if (datGetFlag(0xa9f) != 0)
            work->messageIndex = 10;
        if (datGetFlag(0xacd) != 0)
            work->messageIndex = 11;
        if (datGetFlag(0xace) != 0)
            work->messageIndex = 12;

        datSetFlag(0xa95, false);
        datSetFlag(0xa96, false);
        datSetFlag(0xa97, false);
        datSetFlag(0xa98, false);
        datSetFlag(0xa99, false);
        datSetFlag(0xa9a, false);
        datSetFlag(0xa7a, false);
        datSetFlag(0xa9b, false);
        datSetFlag(0xa9c, false);
        datSetFlag(0xa9d, false);
        datSetFlag(0xa9f, false);
        datSetFlag(0xacd, false);
        datSetFlag(0xace, false);

        if (work->messageIndex == -1)
            return KWLNTASK_STOP;
        work->state = 1;
        break;
    case 1:
        goto draw;
    default:
        break;
    }
    goto cont;

draw:
    if (work->timer < 10)
        color = (u32)((work->timer * 0xff) / 10);
    else if (work->timer > 0x50)
        color = (u32)(((0x5a - work->timer) * 0xff) / 10);
    else
        color = 0xff;

    func_003b2cb0(0.0f,
                  0x140,
                  0x17c,
                  color | 0xffffff00,
                  6,
                  1,
                  D_005E4150[work->messageIndex],
                  0x18,
                  0);
    work->timer++;
    if (work->timer >= 0x5a)
        return KWLNTASK_STOP;
cont:
    return KWLNTASK_CONTINUE;
}

// FUN_00187520
void clnd00187520(KwlnTask* task)
{
    CLND_FREE(task->workData);
}
// FUN_00187550
KwlnTask* func_00187550(KwlnTask* parent)
{
    CalendarRecoveredColdWork* work;
    KwlnTask* task;

    work = CLND_ALLOC(1, sizeof(CalendarRecoveredColdWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent,
                          D_005E4290,
                          0x18c1,
                          func_001871a0,
                          clnd00187520,
                          work);
    if (task == NULL)
    {
        return NULL;
    }
    return task;
}

/* W357 measured opt_dead_assignments off: without nd1107/object1440, with nd1100/object1436; window 1520; retained. */
#pragma opt_dead_assignments off
/* W363 callback-address probe: cached D_00960090_abs setState once
 * changes 1436/1520 nd1100 to 1452/1520 nd935; the result remains under the window.
 * The same family covers func_00183410, but its absolute-alias probe is 1088/1072 and blocked. */
/* W419 global/call probes: D_009600A0 absolute array alias measured
 * 1460/1520 nd945 versus baseline 1452/1520 nd935; D_00960088 absolute
 * array alias measured 1460/1520 nd951; both rejected. Inlining the
 * angle sine/cosine polynomial removed the three EXTRA trig calls but
 * measured 1616/1520 nd1188 and exceeded the window; retained calls.
 * Replacing the stack axis with D_005D6C28 measured 1416/1520 nd893
 * (rate 0.63065) versus baseline 1452/1520 nd935 (rate 0.64394); retained. */
/* W455 retail path uses EE cosine/sine Horner polynomials, a separate
 * transformed-vector copy loop, scale-only loop, and vertex-fill loop;
 * implemented here, with residuals limited to layout and register code. */
// FUN_001875F0
#ifndef PC_BUILD
asm void func_001875f0(s32 angle, s32 scaleAngle, s32 alpha)
{
  .set noreorder
  .word 0x27bdfe40
  .word 0xffbf0050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b7000c
  .word 0xe7b60008
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080982d
  .word 0x00a0902d
  .word 0x00c0882d
  .word 0x0c066164
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830800
  .word 0xc4400080
  .word 0x46000d43
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
  .word 0x2404000b
  .word 0x24050006
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000a
  .word 0x24050005
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040002
  .word 0x24050004
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x2404000e
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x3c04c170
  .word 0xafa40190
  .word 0x3c02c1b0
  .word 0xafa20194
  .word 0xafa00198
  .word 0x3c034170
  .word 0xafa3019c
  .word 0xafa201a0
  .word 0xafa001a4
  .word 0xafa401a8
  .word 0x3c0241b0
  .word 0xafa201ac
  .word 0xafa001b0
  .word 0xafa301b4
  .word 0xafa201b8
  .word 0xafa001bc
  .word 0x0000202d
  .word 0x1000000e
  .word 0x00000000
  .word 0x00041040
  .word 0x00441021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24430190
  .word 0x24420160
  .word 0xc4620000
  .word 0xc4610004
  .word 0xc4600008
  .word 0xe4420000
  .word 0xe4410004
  .word 0xe4400008
  .word 0x24840001
  .word 0x28820004
  .word 0x1440fff1
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44821000
  .word 0x24030001
  .word 0x3c02c334
  .word 0x44820800
  .word 0x3c024334
  .word 0x44821800
  .word 0x0000202d
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46030036
  .word 0x0060102d
  .word 0x45000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x38420001
  .word 0x1440000a
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46020001
  .word 0x46000024
  .word 0x44130000
  .word 0x0060202d
  .word 0x1000000b
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x46020000
  .word 0x46000024
  .word 0x44130000
  .word 0x0060202d
  .word 0x1480ffe0
  .word 0x00000000
  .word 0x44930000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d83
  .word 0x4616b502
  .word 0xc78181c4
  .word 0xc78081c8
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614085c
  .word 0xc780840c
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc7808410
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc78081d4
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc7808414
  .word 0x46001018
  .word 0x4601a01c
  .word 0x4600a042
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4614001a
  .word 0x4601a05d
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x460105c1
  .word 0x0c130e30
  .word 0x00000000
  .word 0x3c033f80
  .word 0x44830000
  .word 0x00000000
  .word 0x46170301
  .word 0xc78183d4
  .word 0xc7808048
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4614085c
  .word 0xc7808118
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc7808050
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc7808054
  .word 0x46001018
  .word 0x4601a05c
  .word 0xc78083d8
  .word 0x46001018
  .word 0x4601a05c
  .word 0x4616a002
  .word 0x46161018
  .word 0x4601035c
  .word 0x0040202d
  .word 0x3c05005e
  .word 0x24a542a8
  .word 0x0000302d
  .word 0x0c130bf0
  .word 0x00000000
  .word 0x0040982d
  .word 0x27a40160
  .word 0x27a50190
  .word 0x24060004
  .word 0x0260382d
  .word 0x0c131b08
  .word 0x00000000
  .word 0x0260202d
  .word 0x0c130e20
  .word 0x00000000
  .word 0x3c0243b4
  .word 0x44821000
  .word 0x24030001
  .word 0x3c02c334
  .word 0x44820800
  .word 0x3c024334
  .word 0x44821800
  .word 0x0000202d
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46030036
  .word 0x0060102d
  .word 0x45000002
  .word 0x00000000
  .word 0x0000102d
  .word 0x38420001
  .word 0x1440000a
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46020001
  .word 0x46000024
  .word 0x44120000
  .word 0x0060202d
  .word 0x1000000b
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010034
  .word 0x45000005
  .word 0x00000000
  .word 0x46020000
  .word 0x46000024
  .word 0x44120000
  .word 0x0060202d
  .word 0x1480ffe0
  .word 0x00000000
  .word 0x44920000
  .word 0x00000000
  .word 0x46800060
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000803
  .word 0x460000c2
  .word 0xc78181c4
  .word 0xc78081c8
  .word 0x44801000
  .word 0x00000000
  .word 0x46001018
  .word 0x4603085c
  .word 0xc780840c
  .word 0x46001018
  .word 0x4601185c
  .word 0xc7808410
  .word 0x46001018
  .word 0x4601185c
  .word 0xc78081d4
  .word 0x46001018
  .word 0x4601185c
  .word 0xc7808414
  .word 0x46001018
  .word 0x4601181c
  .word 0x46001842
  .word 0x3c023f00
  .word 0x44820000
  .word 0x00000000
  .word 0x4603001a
  .word 0x4601185d
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46010041
  .word 0x0000182d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00031040
  .word 0x00431021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420160
  .word 0xc4400000
  .word 0x46010002
  .word 0xe4400000
  .word 0x24630001
  .word 0x28620004
  .word 0x1440fff5
  .word 0x00000000
  .word 0x0000382d
  .word 0x3c020096
  .word 0xc4440088
  .word 0x3c054160
  .word 0x3c04430b
  .word 0x3c03436c
  .word 0x44910000
  .word 0x00000000
  .word 0x468000e0
  .word 0x24020249
  .word 0x44820000
  .word 0x00000000
  .word 0x468000a0
  .word 0x3c0243cb
  .word 0x44820800
  .word 0x10000016
  .word 0x00000000
  .word 0x00071180
  .word 0x005d1021
  .word 0x24460060
  .word 0xe4c40008
  .word 0xe4d50018
  .word 0xacc50020
  .word 0xacc40024
  .word 0xacc30028
  .word 0xe4c3002c
  .word 0x00071040
  .word 0x00471021
  .word 0x00021080
  .word 0x005d1021
  .word 0x24420160
  .word 0xc4400000
  .word 0x46001000
  .word 0xe4c00000
  .word 0xc4400004
  .word 0x46000800
  .word 0xe4c00004
  .word 0x24e70001
  .word 0x28e20004
  .word 0x1440ffe9
  .word 0x00000000
  .word 0x24040001
  .word 0x0000282d
  .word 0x8e020000
  .word 0x0040f809
  .word 0x00000000
  .word 0x24040004
  .word 0x27a50060
  .word 0x0080302d
  .word 0x3c020096
  .word 0x8c4200a0
  .word 0x0040f809
  .word 0x00000000
  .word 0xdfbf0050
  .word 0x7bb30040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0xc7b7000c
  .word 0xc7b60008
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd01c0
  .word 0x03e00008
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_dead_assignments reset
// FUN_00187BE0
void* func_00187be0(KwlnTask* task)
{
    CalendarSkipDrawWork* work;
    void (**setState)(u32 state, u32 value);
    u32 oldState;

    work = (CalendarSkipDrawWork*)task->workData;
    if (RwCameraBeginUpdate(kwlnGetMainCamera()) == NULL)
    {
        return KWLNTASK_CONTINUE;
    }
    (*(void (**)(u32, void*))D_00960094_abs)(0xe, &oldState);
    setState = (void (**)(u32, u32))D_00960090_abs;
    (*setState)(0xe, 0);

    switch (work->state)
    {
        case 0:
            work->alpha = 0;
            work->timer = 10;
            work->scaleAngle = 0x28;
            work->angle = 0;
            work->state = 1;
            break;

        case 1:
            work->timer--;
            if (work->timer < 0)
            {
                work->state = 2;
            }
            break;

        case 2:
            if (datGetFlag(0x1421) == 0)
            {
                func_001875f0(work->scaleAngle, work->angle, work->alpha);
                work->angle += 10;
                work->alpha += 20;
                if (work->alpha >= 0xff)
                {
                    work->alpha = 0xff;
                }
            }
            else
            {
                work->alpha = 0;
            }
            break;

        case 3:
            func_001875f0(work->scaleAngle, work->angle, work->alpha);
            (*setState)(0xe, oldState);
            RwCameraEndUpdate(kwlnGetMainCamera());
            work->angle += 10;
            work->alpha -= 20;
            if (work->alpha < 0)
            {
                return KWLNTASK_STOP;
            }
            return KWLNTASK_CONTINUE;
    }

    (*setState)(0xe, oldState);
    RwCameraEndUpdate(kwlnGetMainCamera());
    return KWLNTASK_CONTINUE;
}

// FUN_00187df0
void clnd00187df0(KwlnTask* task)
{
    H_Free(task->workData);
}
// FUN_00187E20
KwlnTask* func_00187e20(void)
{
    CalendarSkipDrawWork* work;
    KwlnTask* task;

    work = H_Calloc(1, sizeof(CalendarSkipDrawWork));
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(NULL,
                          D_005E42B8,
                          0x1cd6,
                          func_00187be0,
                          clnd00187df0,
                          work);
    if (task == NULL)
    {
        return NULL;
    }
    return task;
}

// FUN_00187ea0
void clnd00187ea0(KwlnTask* task)
{
    ((CalendarTaskWork*)task->workData)->state = 3;
}
// FUN_00187EC0
void func_00187ec0(KwlnTask* task, s32 month, s32 day, s32 time)
{
    CalendarTransitionMessageWork* work;
    void* parent;

    work = (CalendarTransitionMessageWork*)task->workData;
    if (datGetFlag(0x141d) != 0 || datGetFlag(0x1407) != 0)
    {
        return;
    }

    func_001159f0(parent,
                  work->resource,
                  0x3a,
                  0,
                  CLND_CALENDAR_X + 514.0f,
                  23.0f,
                  50.0f);
    if (time == 8)
    {
        func_00115bc0(parent,
                      work->resource,
                      0x39,
                      0,
                      0x7c,
                      0xff,
                      0x90,
                      CLND_CALENDAR_X + 390.0f,
                      -8.0f,
                      50.0f);
    }
    else
    {
        func_00115bc0(parent,
                      work->resource,
                      0x39,
                      0,
                      0x4c,
                      0x9a,
                      0xff,
                      CLND_CALENDAR_X + 390.0f,
                      -8.0f,
                      50.0f);
    }

    if (month == 3 && day == 0x1f && time == 4)
    {
        func_001159f0(parent,
                      work->resource,
                      0x50,
                      0,
                      CLND_CALENDAR_X + 416.0f,
                      14.0f,
                      50.0f);
    }
    else if (month == 3 && day == 0x1f && time == 6)
    {
        func_001159f0(parent,
                      work->resource,
                      0x51,
                      0,
                      CLND_CALENDAR_X + 416.0f,
                      14.0f,
                      50.0f);
    }
    else if (month == 3 && day == 0x1f && time == 7)
    {
        func_001159f0(parent,
                      work->resource,
                      0x52,
                      0,
                      CLND_CALENDAR_X + 416.0f,
                      14.0f,
                      50.0f);
    }
    else if (month == 4 && day == 2 && time == 7)
    {
        func_001159f0(parent,
                      work->resource,
                      0x53,
                      0,
                      CLND_CALENDAR_X + 416.0f,
                      14.0f,
                      50.0f);
    }
    else if (month == 4 && day == 1 && time == 2)
    {
        func_001159f0(parent,
                      work->resource,
                      0x54,
                      0,
                      CLND_CALENDAR_X + 416.0f,
                      14.0f,
                      50.0f);
    }
    else
    {
        func_001159f0(parent,
                      work->resource,
                      0x55,
                      0,
                      CLND_CALENDAR_X + 416.0f,
                      14.0f,
                      50.0f);
    }
}

// FUN_00188250
void* func_00188250(KwlnTask* task)
{
    CalendarTransitionMessageWork* work;
    void (**setState)(u32 state, u32 value);
    u32 oldState;

    work = (CalendarTransitionMessageWork*)task->workData;
    switch (work->state)
    {
        case 0:
            work->resource = func_00112370(D_005E4190);
            work->state = 1;
            break;

        case 1:
            if (H_Maestro_00111f30((s16*)work->resource) == true)
            {
                work->state = 2;
            }
            break;

        case 2:
            CLND_CALENDAR_X = 0.0f;
            work->month = clndGetCurrentMonth();
            work->day = clndGetCurrentDay();
            work->time = datGetTime() & 0xff;
            if (RwCameraBeginUpdate(kwlnGetMainCamera()) == NULL)
            {
                return KWLNTASK_CONTINUE;
            }
            (*(void (**)(u32, void*))D_00960094_abs)(0xe, &oldState);
            setState = (void (**)(u32, u32))D_00960090_abs;
            (*setState)(0xe, 0);
            func_00187ec0(task, work->month, work->day, work->time);
            (*setState)(0xe, oldState);
            RwCameraEndUpdate(kwlnGetMainCamera());
            break;
    }
    return KWLNTASK_CONTINUE;
}

// FUN_001883D0
void func_001883d0(KwlnTask* task)
{
    CalendarTransitionMessageWork* work;

    work = (CalendarTransitionMessageWork*)task->workData;
    if (work->resource != NULL)
    {
        func_001124b0(work->resource);
        work->resource = NULL;
    }
    CLND_FREE(work);
}

// FUN_00188420
void func_00188420(KwlnTask* task, s32 month, s32 day, s32 time)
{
    CalendarTransitionMessageWork* work;

    work = (CalendarTransitionMessageWork*)task->workData;
    work->month = month;
    work->day = day;
    work->time = time;
}

// FUN_00188440
KwlnTask* func_00188440(KwlnTask* parent, s32 month, s32 day, s32 time)
{
    CalendarTransitionMessageWork* work;
    KwlnTask* task;

    work = CLND_ALLOC(1, sizeof(CalendarTransitionMessageWork), 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent,
                          D_005E42D0,
                          0x18b2,
                          func_00188250,
                          func_001883d0,
                          work);
    if (task == NULL)
    {
        return NULL;
    }
    work->month = month;
    work->day = day;
    work->time = time;
    return task;
}
#define func_00115ad0 func_00115ad0_gs
#define DAT_007caf38 DAT_007caf38_gs

#include "Kosaka/Field/k_dungeon.h"




/*
 * These helpers are implemented by the game-support and memory-card modules.
 * Their retail symbols are kept here until those modules are decompiled.
 */
extern KwlnTask* func_00420340(KwlnTask* parentTask, u32 mode);
extern u32 func_004204f0(KwlnTask* task);
extern KwlnTask* func_004214e0(KwlnTask* parentTask, u32 mode);
extern void func_004215b0(KwlnTask* task, u32 state);
extern void func_00421650(KwlnTask* task);
extern u32 func_00421700(KwlnTask* task);
extern void func_00191240(void);
extern s32 func_00191260(void);
extern void func_001967d0(void);

/* Retail small-data globals used by the two game-support state machines. */
extern KwlnTask* DAT_007ce000;
extern u32 DAT_007ce00c;
extern u32 uGpffffb31c;
extern KwlnTask* uGpffffb314;

/* Runtime allocator/free-function tables. */
extern u32 D_00960184[];
extern u32 jtbl_0096017C[];

/* Task names live in the retail read-only data segment. */
extern const char D_005E42F0[];
extern const char D_005E4308[];

typedef struct GameSupportMemcardWork
{
    u32 state;
    s32 result;
    u32 timer;
    KwlnTask* task;
} GameSupportMemcardWork;

typedef struct GameSupportLoadWork
{
    u32 state;
    KwlnTask* task;
    KwlnTask* transitionTask;
} GameSupportLoadWork;

// FUN_00188510
u32 clndScrCmd_SET_DATE()
{
    u32 month;
    u32 day;
    s32 time;
    u32 daysSinceApr5;

    month = scrGetIntPara(0);
    day = scrGetIntPara(1);
    time = scrGetIntPara(2);

    daysSinceApr5 = clndGetDaysSinceStartFromDate(month, day);

    datSetDaysSinceApr5(daysSinceApr5);
    datSetTime(time);

    return true;
}
// FUN_001885A0
u32 func_001885a0(void)
{
    u32 floor;

    floor = K_FldDungeon_GetCurrentFloor();
    FUN_0016f3e0(0x35, floor);
    DAT_007ce00c = 0;
    DAT_007ce000 = func_00420340(NULL, 1);
    return 1;
}

// FUN_001885F0
u32 func_001885f0(void)
{
    u32 state;

    state = kwlnTaskGetState(DAT_007ce000);
    if (state == 3)
    {
        DAT_007ce000 = NULL;
        return 1;
    }

    return 0;
}

// FUN_00188640
u64 func_00188640(void)
{
    return 0;
}

// FUN_00188650
void func_00188650(void)
{
    return;
}

// FUN_00188660
u64 func_00188660(void)
{
    return 0;
}

// FUN_00188670
void func_00188670(void)
{
    return;
}

// FUN_00188680
void func_00188680(void)
{
    return;
}

// FUN_00188690
void* func_00188690(KwlnTask* task)
{
    GameSupportMemcardWork* work;
    u32 status;

    work = (GameSupportMemcardWork*)task->workData;

    switch (work->state)
    {
        case 0:
            work->task = func_004214e0(task, 1);
            work->state = 1;
            break;

        case 1:
            func_004215b0(work->task, 0xf);
            work->timer = 0x3c;
            work->state = 2;
            break;

        case 2:
            work->timer--;
            if (work->timer == 0)
            {
                func_00191240();
                work->state = 3;
            }
            break;

        case 3:
            status = (u32)func_00191260();
            work->result = (s32)status;
            if (status != 0)
            {
                if (status == 100)
                {
                    func_00421650(work->task);
                    return KWLNTASK_STOP;
                }
                work->state = 4;
            }
            break;

        case 4:
            if (work->result == -6)
            {
                func_004215b0(work->task, 0x15);
            }
            else
            {
                func_004215b0(work->task, 0x10);
            }
            work->state = 5;
            break;

        case 5:
            status = func_00421700(work->task);
            if (status == 1)
            {
                func_00421650(work->task);
                return KWLNTASK_STOP;
            }
            if (status == 2)
            {
                work->state = 1;
            }
            break;
    }

    return KWLNTASK_CONTINUE;
}

// FUN_00188830
void func_00188830(KwlnTask* task)
{
    (*(void (**)(void*))jtbl_0096017C)(task->workData);
}

// FUN_00188860
KwlnTask* func_00188860(KwlnTask* parentTask)
{
    void* work;
    KwlnTask* task;

    work = (*(void* (**)(u32, u32, u32))D_00960184)(1, 0x10, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }

    task = kwlnTaskCreateWithAutoPriority(parentTask,
                                          0x106f,
                                          D_005E42F0,
                                          func_00188690,
                                          func_00188830,
                                          work);
    if (task == NULL)
    {
        return NULL;
    }
    return task;
}

// FUN_00188900
void* func_00188900(KwlnTask* task)
{
    GameSupportLoadWork* work;
    u32 status;

    work = (GameSupportLoadWork*)task->workData;

    switch (work->state)
    {
        case 0:
            func_001967d0();
            work->task = func_004214e0(task, 1);
            work->state = 1;
            break;

        case 1:
            func_004215b0(work->task, 0x11);
            work->state = 2;
            break;

        case 2:
            status = func_00421700(work->task);
            if (status == 1)
            {
                func_004215b0(work->task, 0x12);
                work->state = 4;
            }
            else if (status == 2)
            {
                func_004215b0(work->task, 0x13);
                work->state = 3;
            }
            break;

        case 3:
            status = func_00421700(work->task);
            if (status == 1)
            {
                func_00421650(work->task);
                return KWLNTASK_STOP;
            }
            if (status == 2)
            {
                work->state = 1;
            }
            break;

        case 4:
            status = func_00421700(work->task);
            if (status == 1)
            {
                func_00421650(work->task);
                uGpffffb31c = 0;
                work->transitionTask = func_00420340(task, 1);
                work->state = 5;
            }
            break;

        case 5:
            status = kwlnTaskGetState(work->transitionTask);
            if (status == 3)
            {
                status = func_004204f0(work->transitionTask);
                if (status == 0)
                {
                    work->task = func_004214e0(task, 1);
                    func_004215b0(work->task, 0x13);
                    work->state = 3;
                }
                else
                {
                    func_00421650(work->task);
                    return KWLNTASK_STOP;
                }
            }
            break;
    }

    return KWLNTASK_CONTINUE;
}

// FUN_00188B20
void func_00188b20(KwlnTask* task)
{
    (*(void (**)(void*))jtbl_0096017C)(task->workData);
}

// FUN_00188B50
u32 func_00188b50(void)
{
    void* work;
    KwlnTask* created;

    work = (*(void* (**)(u32, u32, u32))D_00960184)(1, 0xc, 0x40000);
    if (work == NULL)
    {
        created = NULL;
    }
    else
    {
        created = kwlnTaskCreateWithAutoPriority(NULL,
                                                 0x106f,
                                                 D_005E4308,
                                                 func_00188900,
                                                 func_00188b20,
                                                 work);
        if (created == NULL)
        {
            created = NULL;
        }
    }
    uGpffffb314 = created;

    return 1;
}

// FUN_00188BE0
u32 func_00188be0(void)
{
    u32 state;

    state = kwlnTaskGetState(uGpffffb314);
    if (state == 3)
    {
        uGpffffb314 = NULL;
        return 1;
    }

    return 0;
}
















#include "type.h"

extern void func_001140d0(f32 depthOffset, u32 rgba, f32 x, f32 y,
                          s32 width, s32 height, const void* texture);

/* The two case-3/case-5 additions require retail's offset-first operand order. */
/* Keep this helper static inline so it does not add a call or change the window. */
static inline f32 datCalendarAddOffsetFirst(f32 offset, f32 base)
{
    return offset + base;
}

// FUN_00188C30
asm void* func_00188c30(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c82003c
  .word 0x8c430004
  .word 0x24630001
  .word 0xac430004
  .word 0x8c430008
  .word 0x24630001
  .word 0xac430008
  .word 0x8c430000
  .word 0x2c610008
  .word 0x1020016d
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846820
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030003
  .word 0x14830162
  .word 0x00000000
  .word 0xac400004
  .word 0xac400008
  .word 0x24030001
  .word 0xac430000
  .word 0x1000015c
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030005
  .word 0x14830158
  .word 0x00000000
  .word 0x24030002
  .word 0xac430000
  .word 0x10000154
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030008
  .word 0x14830003
  .word 0x00000000
  .word 0x24030003
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463fffa
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x3c03433e
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0341a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041900
  .word 0x00641823
  .word 0x00032040
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005f
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x1000011e
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403000a
  .word 0x14830003
  .word 0x00000000
  .word 0x24030004
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463fff8
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x3c03433d
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041900
  .word 0x00641823
  .word 0x00032040
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005f
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000e8
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403000e
  .word 0x14830003
  .word 0x00000000
  .word 0x24030005
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464fff6
  .word 0x3c034040
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c034080
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c034339
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c034130
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0341a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041900
  .word 0x00641823
  .word 0x00032040
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005f
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000af
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030010
  .word 0x14830003
  .word 0x00000000
  .word 0x24030006
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464fff2
  .word 0x3c034000
  .word 0x44831800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021802
  .word 0x46030043
  .word 0x3c034339
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46020002
  .word 0x46030043
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041900
  .word 0x00641823
  .word 0x00032040
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005f
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030027
  .word 0x14830003
  .word 0x00000000
  .word 0x24030007
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464fff0
  .word 0x3c034224
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c034208
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c034337
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c034248
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041900
  .word 0x00641823
  .word 0x00032040
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005f
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x8c460004
  .word 0x24050032
  .word 0x14c50004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000003a
  .word 0x00000000
  .word 0x24c4fff0
  .word 0x3c034224
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c034208
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c034337
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c034248
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034180
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x24c4ffd9
  .word 0x00041a00
  .word 0x00642023
  .word 0x2403000b
  .word 0x0083001a
  .word 0x00002012
  .word 0x240300ff
  .word 0x00643023
  .word 0x8c440008
  .word 0x00041900
  .word 0x00641823
  .word 0x00031840
  .word 0x7065001a
  .word 0x70001812
  .word 0x2463005f
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2403ff00
  .word 0x00c32025
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00189230
asm void* func_00189230(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c82003c
  .word 0x8c430004
  .word 0x24630001
  .word 0xac430004
  .word 0x8c430008
  .word 0x24630001
  .word 0xac430008
  .word 0x8c430000
  .word 0x2c610008
  .word 0x10200166
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846840
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030003
  .word 0x1483015b
  .word 0x00000000
  .word 0xac400004
  .word 0xac400008
  .word 0x24030001
  .word 0xac430000
  .word 0x10000155
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030008
  .word 0x14830151
  .word 0x00000000
  .word 0x24030002
  .word 0xac430000
  .word 0x1000014d
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403000b
  .word 0x14830003
  .word 0x00000000
  .word 0x24030003
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464fff7
  .word 0x3c034040
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c034366
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0342b2
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000114
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403000d
  .word 0x14830003
  .word 0x00000000
  .word 0x24030004
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464fff5
  .word 0x3c034000
  .word 0x44831800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021802
  .word 0x46030043
  .word 0x3c034363
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b40
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46020002
  .word 0x46030043
  .word 0x3c0342a6
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000de
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030011
  .word 0x14830003
  .word 0x00000000
  .word 0x24030005
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464fff3
  .word 0x3c0340c0
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c034080
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c034365
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0342b2
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000a5
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030013
  .word 0x14830003
  .word 0x00000000
  .word 0x24030006
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463ffef
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x3c03435f
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c0340a0
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0342a4
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x1000006f
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030027
  .word 0x14830003
  .word 0x00000000
  .word 0x24030007
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464ffed
  .word 0x3c034188
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c0341f8
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c03435e
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c0342ae
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x1000003b
  .word 0x00000000
  .word 0x8c460004
  .word 0x24050032
  .word 0x14c50004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000035
  .word 0x00000000
  .word 0x24c4ffed
  .word 0x3c034188
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c0341f8
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x3c03435e
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c0342ae
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x24c4ffd9
  .word 0x00041a00
  .word 0x00642023
  .word 0x2403000b
  .word 0x0083001a
  .word 0x00002012
  .word 0x240300ff
  .word 0x00643023
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x7065001a
  .word 0x70001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2403ff00
  .word 0x00c32025
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_00189810
asm void* func_00189810(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c82003c
  .word 0x8c430004
  .word 0x24630001
  .word 0xac430004
  .word 0x8c430008
  .word 0x24630001
  .word 0xac430008
  .word 0x8c430000
  .word 0x2c610008
  .word 0x10200164
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846860
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030003
  .word 0x14830159
  .word 0x00000000
  .word 0xac400004
  .word 0xac400008
  .word 0x24030001
  .word 0xac430000
  .word 0x10000153
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403000b
  .word 0x1483014f
  .word 0x00000000
  .word 0x24030002
  .word 0xac430000
  .word 0x1000014b
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403000e
  .word 0x14830003
  .word 0x00000000
  .word 0x24030003
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463fff4
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x24030137
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c0340e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0342fa
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630050
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000114
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030010
  .word 0x14830003
  .word 0x00000000
  .word 0x24030004
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463fff2
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x3c03439c
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c034120
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034304
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630050
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000de
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030014
  .word 0x14830003
  .word 0x00000000
  .word 0x24030005
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463fff0
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034080
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x24030137
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010341
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c0342f4
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630050
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000a7
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030016
  .word 0x14830003
  .word 0x00000000
  .word 0x24030006
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463ffec
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x3c03439b
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b40
  .word 0x3c0340c0
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034303
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630050
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000071
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030027
  .word 0x14830003
  .word 0x00000000
  .word 0x24030007
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464ffea
  .word 0x3c034080
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c0341e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x24030137
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c0342fa
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630050
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x1000003c
  .word 0x00000000
  .word 0x8c460004
  .word 0x24050032
  .word 0x14c50004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000036
  .word 0x00000000
  .word 0x24c4ffea
  .word 0x3c034080
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000842
  .word 0x3c0341e0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000843
  .word 0x24030137
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c0342fa
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x24c4ffd9
  .word 0x00041a00
  .word 0x00642023
  .word 0x2403000b
  .word 0x0083001a
  .word 0x00002012
  .word 0x240300ff
  .word 0x00643023
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x7065001a
  .word 0x70001812
  .word 0x24630050
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2403ff00
  .word 0x00c32025
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_00189DF0
asm void* func_00189df0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c82003c
  .word 0x8c430004
  .word 0x24630001
  .word 0xac430004
  .word 0x8c430008
  .word 0x24630001
  .word 0xac430008
  .word 0x8c430000
  .word 0x2c610008
  .word 0x1020016c
  .word 0x00000000
  .word 0x3c04007b
  .word 0x24846880
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030003
  .word 0x14830161
  .word 0x00000000
  .word 0xac400004
  .word 0xac400008
  .word 0x24030001
  .word 0xac430000
  .word 0x1000015b
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403000e
  .word 0x14830157
  .word 0x00000000
  .word 0x24030002
  .word 0xac430000
  .word 0x10000153
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030011
  .word 0x14830003
  .word 0x00000000
  .word 0x24030003
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463fff1
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x2403015f
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c03434f
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630046
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x1000011c
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030013
  .word 0x14830003
  .word 0x00000000
  .word 0x24030004
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464ffef
  .word 0x3c034000
  .word 0x44831800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021802
  .word 0x46030043
  .word 0x3c0343b0
  .word 0x44830000
  .word 0x00000000
  .word 0x46010341
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x46020002
  .word 0x46030043
  .word 0x3c03434c
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630046
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000e6
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030017
  .word 0x14830003
  .word 0x00000000
  .word 0x24030005
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463ffed
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034080
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x3c0343af
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b40
  .word 0x3c034100
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034355
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630046
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000b0
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030019
  .word 0x14830003
  .word 0x00000000
  .word 0x24030006
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463ffe9
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x2403015f
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c03434d
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630046
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000079
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030027
  .word 0x14830003
  .word 0x00000000
  .word 0x24030007
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464ffe7
  .word 0x3c034110
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c0341c8
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c0343b0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b40
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034356
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00032080
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x24630046
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000040
  .word 0x00000000
  .word 0x8c460004
  .word 0x24050032
  .word 0x14c50004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x1000003a
  .word 0x00000000
  .word 0x24c4ffe7
  .word 0x3c034110
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c0341c8
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x3c0343b0
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b40
  .word 0x3c034040
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c034356
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x24c4ffd9
  .word 0x00041a00
  .word 0x00642023
  .word 0x2403000b
  .word 0x0083001a
  .word 0x00002012
  .word 0x240300ff
  .word 0x00643023
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x00031880
  .word 0x7065001a
  .word 0x70001812
  .word 0x24630046
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x000319c0
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2403ff00
  .word 0x00c32025
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0018A3F0
asm void* func_0018a3f0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfff0
  .word 0xffbf0000
  .word 0x8c82003c
  .word 0x8c430004
  .word 0x24630001
  .word 0xac430004
  .word 0x8c430008
  .word 0x24630001
  .word 0xac430008
  .word 0x8c430000
  .word 0x2c610008
  .word 0x10200161
  .word 0x00000000
  .word 0x3c04007b
  .word 0x248468a0
  .word 0x00031880
  .word 0x00641821
  .word 0x8c630000
  .word 0x00600008
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030003
  .word 0x14830156
  .word 0x00000000
  .word 0xac400004
  .word 0xac400008
  .word 0x24030001
  .word 0xac430000
  .word 0x10000150
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030011
  .word 0x1483014c
  .word 0x00000000
  .word 0x24030002
  .word 0xac430000
  .word 0x10000148
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030014
  .word 0x14830003
  .word 0x00000000
  .word 0x24030003
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464ffee
  .word 0x44800800
  .word 0x240301a3
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c034000
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000802
  .word 0x46010043
  .word 0x24030111
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00642021
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x00031980
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000115
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030016
  .word 0x14830003
  .word 0x00000000
  .word 0x24030004
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464ffec
  .word 0x3c034080
  .word 0x44830800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000e0
  .word 0x46030802
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46020043
  .word 0x240301a3
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c034110
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x2403010f
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00642021
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x00031980
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000db
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403001a
  .word 0x14830003
  .word 0x00000000
  .word 0x24030005
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463ffea
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034080
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x240301a7
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x46031002
  .word 0x46020043
  .word 0x3c03438c
  .word 0x44830000
  .word 0x00000000
  .word 0x46010381
  .word 0x8c440008
  .word 0x00041880
  .word 0x00642021
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x00031980
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x100000a8
  .word 0x00000000
  .word 0x8c440004
  .word 0x2403001c
  .word 0x14830003
  .word 0x00000000
  .word 0x24030006
  .word 0xac430000
  .word 0x8c430004
  .word 0x2463ffe6
  .word 0x44830000
  .word 0x00000000
  .word 0x468000e0
  .word 0x3c034000
  .word 0x44831000
  .word 0x00000000
  .word 0x46021843
  .word 0x3c0343d6
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b40
  .word 0x3c034120
  .word 0x44830000
  .word 0x00000000
  .word 0x46030002
  .word 0x46020043
  .word 0x3c03438a
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00642021
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x00031980
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x10000073
  .word 0x00000000
  .word 0x8c440004
  .word 0x24030027
  .word 0x14830003
  .word 0x00000000
  .word 0x24030007
  .word 0xac430000
  .word 0x8c430004
  .word 0x2464ffe4
  .word 0x3c0341b0
  .word 0x44831800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021802
  .word 0x46030043
  .word 0x240301ad
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x46020002
  .word 0x46030043
  .word 0x3c03438f
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x8c440008
  .word 0x00041880
  .word 0x00642021
  .word 0x24030032
  .word 0x0083001a
  .word 0x00001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x00031980
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2404ffff
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x1000003d
  .word 0x00000000
  .word 0x8c460004
  .word 0x24050032
  .word 0x14c50004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000037
  .word 0x00000000
  .word 0x24c4ffe4
  .word 0x3c0341b0
  .word 0x44831800
  .word 0x44840000
  .word 0x00000000
  .word 0x468000a0
  .word 0x46021802
  .word 0x46030043
  .word 0x240301ad
  .word 0x44830000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000b40
  .word 0x3c034190
  .word 0x44830000
  .word 0x00000000
  .word 0x46020002
  .word 0x46030043
  .word 0x3c03438f
  .word 0x44830000
  .word 0x00000000
  .word 0x46000b80
  .word 0x24c4ffd9
  .word 0x00041a00
  .word 0x00642023
  .word 0x2403000b
  .word 0x0083001a
  .word 0x00002012
  .word 0x240300ff
  .word 0x00643023
  .word 0x8c440008
  .word 0x00041880
  .word 0x00641821
  .word 0x7065001a
  .word 0x70001812
  .word 0x2463005a
  .word 0x00032300
  .word 0x24030064
  .word 0x0083001a
  .word 0x00001812
  .word 0x00031980
  .word 0x00032b03
  .word 0x04610003
  .word 0x00000000
  .word 0x24630fff
  .word 0x00032b03
  .word 0x44806000
  .word 0x2403ff00
  .word 0x00c32025
  .word 0x00a0302d
  .word 0x8c47000c
  .word 0x0c045034
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0000
  .word 0x27bd0010
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

// FUN_0018A9C0
void func_0018a9c0(KwlnTask* task)
{
    (*(void (**)(void*))0x0096017c)(task->workData);
}
/* W420 collateral from func_00113A30 ABI reorder: nd1063,obj2160/window2176 (rate 0.492130) -> nd1076,obj2156/window2176 (rate 0.499072); retained for twin improvement. */
// FUN_0018A9F0
asm void* func_0018a9f0(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdfe70
  .word 0xffbf0070
  .word 0x7fb40060
  .word 0x7fb30050
  .word 0x7fb20040
  .word 0x7fb10030
  .word 0x7fb00020
  .word 0x0080902d
  .word 0x8c90003c
  .word 0x8e020000
  .word 0x2c410006
  .word 0x10200209
  .word 0x00000000
  .word 0x3c03007b
  .word 0x24636910
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0x8e020004
  .word 0x2442fef0
  .word 0x2c410012
  .word 0x1020004d
  .word 0x00000000
  .word 0x3c03007b
  .word 0x246368c0
  .word 0x00021080
  .word 0x00431021
  .word 0x8c420000
  .word 0x00400008
  .word 0x00000000
  .word 0xae000008
  .word 0x10000043
  .word 0x00000000
  .word 0x24020001
  .word 0xae020008
  .word 0x1000003f
  .word 0x00000000
  .word 0x24020002
  .word 0xae020008
  .word 0x1000003b
  .word 0x00000000
  .word 0x24020003
  .word 0xae020008
  .word 0x10000037
  .word 0x00000000
  .word 0x24020004
  .word 0xae020008
  .word 0x10000033
  .word 0x00000000
  .word 0x24020005
  .word 0xae020008
  .word 0x1000002f
  .word 0x00000000
  .word 0x24020006
  .word 0xae020008
  .word 0x1000002b
  .word 0x00000000
  .word 0x24020007
  .word 0xae020008
  .word 0x10000027
  .word 0x00000000
  .word 0x24020008
  .word 0xae020008
  .word 0x10000023
  .word 0x00000000
  .word 0x24020009
  .word 0xae020008
  .word 0x1000001f
  .word 0x00000000
  .word 0x2402000a
  .word 0xae020008
  .word 0x1000001b
  .word 0x00000000
  .word 0x2402000b
  .word 0xae020008
  .word 0x10000017
  .word 0x00000000
  .word 0x2402000c
  .word 0xae020008
  .word 0x10000013
  .word 0x00000000
  .word 0x2402000d
  .word 0xae020008
  .word 0x1000000f
  .word 0x00000000
  .word 0x2402000e
  .word 0xae020008
  .word 0x1000000b
  .word 0x00000000
  .word 0x2402000f
  .word 0xae020008
  .word 0x10000007
  .word 0x00000000
  .word 0x24020010
  .word 0xae020008
  .word 0x10000003
  .word 0x00000000
  .word 0x24020011
  .word 0xae020008
  .word 0x27a40080
  .word 0x3c05005e
  .word 0x24a543c0
  .word 0x8e060008
  .word 0x0c148eb2
  .word 0x00000000
  .word 0x27a40080
  .word 0x24050001
  .word 0x0c040360
  .word 0x00000000
  .word 0xae020040
  .word 0x24020001
  .word 0xae020000
  .word 0x100001a2
  .word 0x00000000
  .word 0x8e040040
  .word 0x0c0405ac
  .word 0x00000000
  .word 0x1040019d
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111140
  .word 0x00511823
  .word 0x000310c0
  .word 0x00431023
  .word 0x00021080
  .word 0x02021021
  .word 0x24530154
  .word 0x26250004
  .word 0x8e040040
  .word 0x2446015c
  .word 0x0c040840
  .word 0x00000000
  .word 0xae620000
  .word 0x3c04005e
  .word 0x248443e0
  .word 0x0040282d
  .word 0x0c0409c8
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x24020029
  .word 0xa7a20180
  .word 0x24020001
  .word 0xa7a20182
  .word 0x8e030008
  .word 0x28610009
  .word 0x10200007
  .word 0x00000000
  .word 0x2402000a
  .word 0xa7a20184
  .word 0x24620001
  .word 0xa7a20186
  .word 0x10000005
  .word 0x00000000
  .word 0x2402000b
  .word 0xa7a20184
  .word 0x2462fff7
  .word 0xa7a20186
  .word 0x0240202d
  .word 0x240518bf
  .word 0xdfa60180
  .word 0x260703a8
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020014
  .word 0x24020002
  .word 0xa7a20182
  .word 0x0240202d
  .word 0x240518bf
  .word 0xdfa60180
  .word 0x2607070c
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae020018
  .word 0x24020029
  .word 0xa7a20180
  .word 0x24020001
  .word 0xa7a20182
  .word 0x2402000a
  .word 0xa7a20184
  .word 0xa7a00186
  .word 0x0240202d
  .word 0x240518bf
  .word 0xdfa60180
  .word 0x26070044
  .word 0x0c0444e0
  .word 0x00000000
  .word 0xae02001c
  .word 0x24020002
  .word 0xae020000
  .word 0x10000150
  .word 0x00000000
  .word 0x24110001
  .word 0x0000902d
  .word 0x1000000a
  .word 0x00000000
  .word 0x00121080
  .word 0x02021021
  .word 0x8c440014
  .word 0x0c04452c
  .word 0x00000000
  .word 0x14400002
  .word 0x00000000
  .word 0x0000882d
  .word 0x26520001
  .word 0x2a420003
  .word 0x1440fff5
  .word 0x00000000
  .word 0x1220013e
  .word 0x00000000
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005e
  .word 0x24424418
  .word 0xffa20010
  .word 0x24020426
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005e
  .word 0x24a543f0
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020020
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005e
  .word 0x24424418
  .word 0xffa20010
  .word 0x24020427
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005e
  .word 0x24a54430
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020024
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005e
  .word 0x24424418
  .word 0xffa20010
  .word 0x24020428
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005e
  .word 0x24a54450
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae020028
  .word 0xffa00000
  .word 0xffa00008
  .word 0x3c02005e
  .word 0x24424418
  .word 0xffa20010
  .word 0x24020429
  .word 0xffa20018
  .word 0x0000202d
  .word 0x3c05005e
  .word 0x24a54480
  .word 0x0000302d
  .word 0x0000382d
  .word 0x0000402d
  .word 0x0000482d
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c043068
  .word 0x00000000
  .word 0xae02002c
  .word 0x24020003
  .word 0xae020000
  .word 0x100000ee
  .word 0x00000000
  .word 0x24110001
  .word 0x0000902d
  .word 0x10000014
  .word 0x00000000
  .word 0x00121080
  .word 0x0202a021
  .word 0x26930020
  .word 0x8e840020
  .word 0x1080000d
  .word 0x00000000
  .word 0x27a5018c
  .word 0x0000302d
  .word 0x0c0430e8
  .word 0x00000000
  .word 0xae820030
  .word 0x8fa2018c
  .word 0x10400004
  .word 0x00000000
  .word 0xae600000
  .word 0x10000002
  .word 0x00000000
  .word 0x0000882d
  .word 0x26520001
  .word 0x2a420004
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x122000d2
  .word 0x00000000
  .word 0x24020004
  .word 0xae020000
  .word 0x100000ce
  .word 0x00000000
  .word 0x8e020a70
  .word 0x24430001
  .word 0xae030a70
  .word 0x24020046
  .word 0x1462001a
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000014
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x24520014
  .word 0x8c440014
  .word 0x10800007
  .word 0x00000000
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430002
  .word 0x00000000
  .word 0xae400000
  .word 0x8e440000
  .word 0x10800003
  .word 0x00000000
  .word 0x0c065408
  .word 0x00000000
  .word 0xae400000
  .word 0x26310001
  .word 0x2a220003
  .word 0x1440ffeb
  .word 0x00000000
  .word 0x8e030a70
  .word 0x28620006
  .word 0x14400010
  .word 0x00000000
  .word 0x28610009
  .word 0x1020000d
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x44806800
  .word 0x3c020f39
  .word 0x34445603
  .word 0x46006b86
  .word 0x24050280
  .word 0x240601c0
  .word 0x0c044e8c
  .word 0x00000000
  .word 0x10000011
  .word 0x00000000
  .word 0x28620009
  .word 0x1440000e
  .word 0x00000000
  .word 0x28610041
  .word 0x1020000b
  .word 0x00000000
  .word 0x3c0242c8
  .word 0x44826000
  .word 0x44806800
  .word 0x3c020f39
  .word 0x344456ff
  .word 0x46006b86
  .word 0x24050280
  .word 0x240601c0
  .word 0x0c044e8c
  .word 0x00000000
  .word 0x0000882d
  .word 0x10000019
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x24520014
  .word 0x8c440014
  .word 0x10800007
  .word 0x00000000
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430002
  .word 0x00000000
  .word 0xae400000
  .word 0x8e440000
  .word 0x10800009
  .word 0x00000000
  .word 0x00111080
  .word 0x02021021
  .word 0x24520014
  .word 0x0c04456c
  .word 0x00000000
  .word 0x8e440000
  .word 0x0c044578
  .word 0x00000000
  .word 0x26310001
  .word 0x2a220002
  .word 0x1440ffe6
  .word 0x00000000
  .word 0x8e030a70
  .word 0x28620006
  .word 0x1440000e
  .word 0x00000000
  .word 0x28610046
  .word 0x1020000b
  .word 0x00000000
  .word 0x3c0242c6
  .word 0x44826000
  .word 0x44806800
  .word 0x2404ffff
  .word 0x46006b86
  .word 0x24050280
  .word 0x240601c0
  .word 0x8e070034
  .word 0x0c0452bc
  .word 0x00000000
  .word 0x8e04001c
  .word 0x10800007
  .word 0x00000000
  .word 0x0c0654a4
  .word 0x00000000
  .word 0x24030003
  .word 0x14430002
  .word 0x00000000
  .word 0xae00001c
  .word 0x8e04001c
  .word 0x10800006
  .word 0x00000000
  .word 0x0c04456c
  .word 0x00000000
  .word 0x8e04001c
  .word 0x0c044578
  .word 0x00000000
  .word 0x8e030a70
  .word 0x28620032
  .word 0x14400016
  .word 0x00000000
  .word 0x28610046
  .word 0x10200013
  .word 0x00000000
  .word 0x2463ffce
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000f
  .word 0x0062001a
  .word 0x00001812
  .word 0x3c0242c4
  .word 0x44826000
  .word 0x2402ff00
  .word 0x00622025
  .word 0x44806800
  .word 0x00000000
  .word 0x46006b86
  .word 0x24050280
  .word 0x240601c0
  .word 0x8e070030
  .word 0x0c0452bc
  .word 0x00000000
  .word 0x8e030a70
  .word 0x28620037
  .word 0x14400028
  .word 0x00000000
  .word 0x28610050
  .word 0x10200025
  .word 0x00000000
  .word 0x28610041
  .word 0x10200009
  .word 0x00000000
  .word 0x2463ffc9
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001812
  .word 0x1000000f
  .word 0x00000000
  .word 0x28610046
  .word 0x10200004
  .word 0x00000000
  .word 0x240300ff
  .word 0x10000009
  .word 0x00000000
  .word 0x2463ffba
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001812
  .word 0x240200ff
  .word 0x00431823
  .word 0x3c0242c2
  .word 0x44826000
  .word 0x2402ff00
  .word 0x00622025
  .word 0x44806800
  .word 0x00000000
  .word 0x46006b86
  .word 0x24050280
  .word 0x240601c0
  .word 0x0c044f60
  .word 0x00000000
  .word 0x8e020a70
  .word 0x28420050
  .word 0x14400004
  .word 0x00000000
  .word 0x2402ffff
  .word 0x10000002
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0070
  .word 0x7bb40060
  .word 0x7bb30050
  .word 0x7bb20040
  .word 0x7bb10030
  .word 0x7bb00020
  .word 0x27bd0190
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
}

// FUN_0018B270
void func_0018b270(KwlnTask* task)
{
    s32 cacheIndex;
    s32 resourceIndex;
    GsB270Work* work = (GsB270Work*)task->workData;

    for (cacheIndex = 0; cacheIndex < 3; cacheIndex++)
    {
        if (GS_PTR((u8*)work + cacheIndex * sizeof(GsB270Entry), 0x154) != NULL)
        {
            H_Cdvd_CacheRemove(
                GS_PTR((u8*)work + cacheIndex * sizeof(GsB270Entry), 0x154));
        }
        GS_PTR((u8*)work + cacheIndex * sizeof(GsB270Entry), 0x154) = NULL;
    }
    for (resourceIndex = 0; resourceIndex < 4; resourceIndex++)
    {
        if (GS_PTR((u8*)work + resourceIndex * sizeof(void*), 0x30) != NULL)
        {
            func_004d0f00(
                GS_PTR((u8*)work + resourceIndex * sizeof(void*), 0x30));
            GS_PTR((u8*)work + resourceIndex * sizeof(void*), 0x30) = NULL;
        }
    }
    if (work->header.cdvd != NULL)
    {
        H_Cdvd_Destroy(work->header.cdvd);
        work->header.cdvd = NULL;
    }
    GS_FREE(work);
}

// FUN_0018B360
s32 func_0018b360(KwlnTask* task)
{
    return GS_S32(task->workData, 0) > 3;
}

// FUN_0018B380
void* func_0018b380(KwlnTask* task)
{
    struct GsB380Work
    {
        u32 state;
        u8 pad04[0x10];
        KwlnTask* tasks[3];
        u8 pad20[0x18];
        u32 payload38;
        u32 payload3c;
        u8 pad40[0xa30];
        s32 status;
    };
    struct GsB380Work* work = (struct GsB380Work*)task->workData;
    void* (**allocator)(u32, u32, u32);

    if (work->state == 4)
    {
        func_00111530(work->tasks[0]);
        func_00111530(work->tasks[1]);
        func_00111530(work->tasks[2]);
        work->status = -2;
        {
            u32 payload = work->payload38;
            void* allocation;
            allocator = (void* (**)(u32, u32, u32))D_00960184_abs;
            allocation = (*allocator)(1, 0x10, 0x40000);
            if (allocation != NULL)
            {
                if (kwlnTaskCreate(NULL, D_005E4320, 0x18c0,
                                   func_00188c30, func_0018a9c0, allocation) != NULL)
                {
                    GS_U32(allocation, 0xc) = payload;
                }
            }
        }
        {
            u32 payload = work->payload38;
            void* allocation;
            allocation = (*allocator)(1, 0x10, 0x40000);
            if (allocation != NULL)
            {
                if (kwlnTaskCreate(NULL, D_005E4340, 0x18c0,
                                   func_00189230, func_0018a9c0, allocation) != NULL)
                {
                    GS_U32(allocation, 0xc) = payload;
                }
            }
        }
        {
            u32 payload = work->payload38;
            void* allocation;
            allocation = (*allocator)(1, 0x10, 0x40000);
            if (allocation != NULL)
            {
                if (kwlnTaskCreate(NULL, D_005E4360, 0x18c0,
                                   func_00189810, func_0018a9c0, allocation) != NULL)
                {
                    GS_U32(allocation, 0xc) = payload;
                }
            }
        }
        {
            u32 payload = work->payload3c;
            void* allocation;
            allocation = (*allocator)(1, 0x10, 0x40000);
            if (allocation != NULL)
            {
                if (kwlnTaskCreate(NULL, D_005E4380, 0x18c0,
                                   func_00189df0, func_0018a9c0, allocation) != NULL)
                {
                    GS_U32(allocation, 0xc) = payload;
                }
            }
        }
        {
            u32 payload = work->payload3c;
            void* allocation;
            allocation = (*allocator)(1, 0x10, 0x40000);
            if (allocation != NULL)
            {
                if (kwlnTaskCreate(NULL, D_005E43A0, 0x18c0,
                                   func_0018a3f0, func_0018a9c0, allocation) != NULL)
                {
                    GS_U32(allocation, 0xc) = payload;
                }
            }
        }
        work->state = 5;
    }
}

// FUN_0018B5F0
s32 func_0018b5f0(KwlnTask* task)
{
    u8* work = (u8*)task->workData;
    if (GS_U32(work, 0) == 5)
    {
        return GS_S32(work, 0xa70);
    }
    return 0;
}

// FUN_0018B620
KwlnTask* func_0018b620(KwlnTask* parent, s32 mode)
{
    void* work;
    KwlnTask* task;

    work = GS_ALLOC(1, 0xa74, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005E44B0, 0x18bf,
                          func_0018a9f0, func_0018b270, work);
    if (task == NULL)
    {
        return NULL;
    }
    GS_S32(work, 4) = mode;
    return task;
}

// FUN_0018B6D0
void* func_0018b6d0(s32 count)
{
    return GS_ALLOC((u32)count, 0x44, 0x40000);
}

// FUN_0018B700
u32 func_0018b700(void* transition)
{
    GsTransition* work = (GsTransition*)transition;

    if (work->enabled == 0)
    {
        return 0;
    }
    if (work->elapsed < work->end)
    {
        work->elapsed = work->elapsed + 1;
    }
    if (work->start > work->elapsed)
    {
        return 0;
    }

    switch (work->positionMode)
    {
    case 0:
        return func_0018bb20(transition);
    case 1:
        return func_0018bb80(transition);
    }
    return 0;
}

// FUN_0018B7B0
void func_0018b7b0(void* transition, f32* position)
{
    s32 total;
    s32 elapsed;
    s32 mode;
    f32 phase;

    total = GS_S32(transition, 0x20) - GS_S32(transition, 0x1c);
    elapsed = GS_S32(transition, 0x18) - GS_S32(transition, 0x1c);
    mode = GS_S32(transition, 0xc);
    switch (mode)
    {
    case 0:
        position[0] = GS_F32(transition, 0x30);
        position[1] = GS_F32(transition, 0x34);
        break;
    case 1:
        if (elapsed == total)
        {
            position[0] = GS_F32(transition, 0x30);
            position[1] = GS_F32(transition, 0x34);
        }
        else
        {
            phase = GS_F32(transition, 0x30) - GS_F32(transition, 0x28);
            position[0] = GS_F32(transition, 0x28) +
                          (phase * (f32)elapsed) / (f32)total;
            phase = GS_F32(transition, 0x34) - GS_F32(transition, 0x2c);
            position[1] = GS_F32(transition, 0x2c) +
                          (phase * (f32)elapsed) / (f32)total;
        }
        break;
    case 2:
        if (total != 0)
        {
            phase = (f32)((elapsed * 0x5a) / total);
        }
        else
        {
            phase = 90.0f;
        }
        phase = sinf((DAT_007caf38 * phase) / 180.0f);
        if (elapsed == total)
        {
            position[0] = GS_F32(transition, 0x30);
            position[1] = GS_F32(transition, 0x34);
        }
        else
        {
            position[0] = (GS_F32(transition, 0x30) - GS_F32(transition, 0x28)) * phase +
                          GS_F32(transition, 0x28);
            position[1] = (GS_F32(transition, 0x34) - GS_F32(transition, 0x2c)) * phase +
                          GS_F32(transition, 0x2c);
        }
        break;
    case 3:
        if (total != 0)
        {
            phase = (f32)((elapsed * 0x5a) / total);
        }
        else
        {
            phase = 90.0f;
        }
        phase = cosf((DAT_007caf38 * phase) / 180.0f);
        if (elapsed == total)
        {
            position[0] = GS_F32(transition, 0x28);
            position[1] = GS_F32(transition, 0x2c);
        }
        else
        {
            position[0] = GS_F32(transition, 0x30) -
                          (GS_F32(transition, 0x28) - GS_F32(transition, 0x30)) * phase;
            position[1] = GS_F32(transition, 0x34) -
                          (GS_F32(transition, 0x2c) - GS_F32(transition, 0x34)) * phase;
        }
        break;
    }
}

// FUN_0018BA60
void func_0018ba60(void* transition, u8* alpha)
{
    s32 total = GS_S32(transition, 0x20) - GS_S32(transition, 0x1c);
    s32 elapsed = GS_S32(transition, 0x18) - GS_S32(transition, 0x1c);
    s32 mode = GS_S32(transition, 0x10);
    s32 value;

    switch (mode)
    {
    case 0:
        *alpha = 0;
        break;
    case 1:
        value = total == 0 ? 0xff : (elapsed * 0xff) / total;
        *alpha = (u8)(0xff - value);
        break;
    case 2:
        value = total == 0 ? 0xff : (elapsed * 0xff) / total;
        *alpha = (u8)value;
        break;
    }
}

// FUN_0018BB20
u32 func_0018bb20(void* transition)
{
    GsPosition position;
    u8 alpha;

    func_0018b7b0(transition, position.valueF);
    func_0018ba60(transition, &alpha);
    *(GsPosition*)((u8*)transition + 0x38) = position;
    GS_U32(transition, 0x40) = alpha;
    return alpha != 0xff;
}

// FUN_0018BB80
u32 func_0018bb80(void* transition)
{
    GsPosition position;
    u8 alpha;

    func_0018b7b0(transition, position.valueF);
    func_0018ba60(transition, &alpha);
    *(GsPosition*)((u8*)transition + 0x38) = position;
    GS_U32(transition, 0x40) = alpha;
    {
        void* unused;
        func_00115ad0(unused, GS_PTR(transition, 0), GS_S32(transition, 0x14),
                      position.valueF[0], position.valueF[1], 0xff, alpha,
                      GS_F32(transition, 0x24));
    }
    return *(u32*)((u32)transition + 0x40) != 0xff;
}

// FUN_0018BC10
void func_0018bc10(f32 depth, void* transition, s32 drawMode,
                          s32 positionMode, s32 alphaMode,
                          u64 start, u64 end, s32 param0, s32 tile,
                          s32 startFrame, s32 endFrame)
{
    GsPackedPosition endPos;
    GsPackedPosition startPos;

    startPos.value = start;
    endPos.value = end;
    GS_U32(transition, 4) = 1;
    GS_S32(transition, 8) = drawMode;
    GS_S32(transition, 0xc) = positionMode;
    GS_S32(transition, 0x10) = alphaMode;
    *(GsPosition*)((u8*)transition + 0x28) = *(GsPosition*)&startPos;
    *(GsPosition*)((u8*)transition + 0x30) = *(GsPosition*)&endPos;
    GS_S32(transition, 0) = param0;
    GS_S32(transition, 0x14) = tile;
    GS_F32(transition, 0x24) = depth;
    GS_S32(transition, 0x1c) = startFrame;
    GS_S32(transition, 0x20) = endFrame;
    GS_S32(transition, 0x18) = 0;
}

// FUN_0018BC80
void func_0018bc80(void)
{
    HCdvd* cdvd;
    void* archiveEntry;
    u32 size;
    u32 ready;
    u32 allReady;
    s32 i;

    cdvd = H_Cdvd_Request(D_005E44D0, HCDVD_FILEARCHIVE);
    H_Cdvd_ReadSync(cdvd);
    for (i = 0; i < 0x12; i++)
    {
        archiveEntry = H_Cdvd_ArchiveGetFile(cdvd, i, &size);
        D_00846730[i] = func_00112420(archiveEntry);
    }
    do
    {
        func_001120c0();
        allReady = 1;
        for (i = 0; i < 0x12; i++)
        {
            ready = H_Maestro_00111f30((s16*)D_00846730[i]);
            if (ready == 0)
            {
                allReady = 0;
            }
        }
        ready = !(allReady != 0);
    } while (ready != 0);
    H_Cdvd_Destroy(cdvd);
}

/* Removing this loses FUN_0018bd90 (MATCH nd0 -> MISMATCH nd24) - measured W161. */

// FUN_0018BD90
#pragma opt_loop_invariants on
void* func_0018bd90(KwlnTask* task)
{
    GsArchiveTaskWork* work = (GsArchiveTaskWork*)task->workData;
    s32 copyIndex;
    s32 taskIndex;

    switch (work->state)
    {
    case 0:
        work->state = 1;
        break;
    case 1:
        for (copyIndex = 0; copyIndex < 0x12; copyIndex++)
        {
            work->resources[copyIndex] = D_00846730[copyIndex];
        }
        work->tasks[0] = func_0018e390(task, 0, work->resources);
        work->tasks[1] = func_0018e390(task, 1, work->resources);
        work->tasks[2] = func_0018e390(task, 2, work->resources);
        work->tasks[3] = func_0018e390(task, 3, work->resources);
        work->state = 2;
        break;
    case 2:
        break;
    }

    for (taskIndex = 0; taskIndex < 4; taskIndex++)
    {
        if (work->tasks[taskIndex] != NULL)
        {
            func_0018e490(work->tasks[taskIndex], work->argument);
        }
    }
    return KWLNTASK_CONTINUE;
}

/* W375 measured opt_loop_invariants off: without nd0/object192, with nd0/object192; window 192; retained. */
#pragma opt_loop_invariants off
// FUN_0018BEE0
void func_0018bee0(KwlnTask* task, s32 pcId, s32 mode)
{
    GsArchiveTaskWork* work = (GsArchiveTaskWork*)task->workData;
    s16 partyId;
    s32 i;

    if (pcId == 1)
    {
        func_0018dde0(work->tasks[0], mode);
    }
    else
    {
        for (i = 0; i < 3; i++)
        {
            partyId = datGetPartyId(i);
            if (pcId == partyId)
            {
                func_0018dde0(work->tasks[i + 1], mode);
                return;
            }
        }
    }
}
#pragma opt_loop_invariants reset

// FUN_0018BFA0
void func_0018bfa0(KwlnTask* task)
{
    GsCdvdWork* work = (GsCdvdWork*)task->workData;

    if (work->cdvd != NULL)
    {
        H_Cdvd_Destroy(work->cdvd);
        work->cdvd = NULL;
    }
    GS_FREE(work);
}

// FUN_0018BFF0
KwlnTask* func_0018bff0(KwlnTask* parent)
{
    void* work;
    KwlnTask* task;

    work = GS_ALLOC(1, 0x64, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005E44E0, 0x18b3,
                          func_0018bd90, func_0018bfa0, work);
    if (task == NULL)
    {
        return NULL;
    }
    GS_U32(work, 8) = 1;
    return task;
}

// FUN_0018C0A0
u32 func_0018c0a0(KwlnTask* task)
{
    return GS_U32(task->workData, 0) == 2;
}

// FUN_0018C0C0
void func_0018c0c0(KwlnTask* task, s32 visible)
{
    u8* work = (u8*)task->workData;
    GS_S32(work, 8) = visible;
    if (GS_U32(task->workData, 0) == 2)
    {
        func_0018e490(GS_TASK(work, 0xc), visible);
        func_0018e490(GS_TASK(work, 0x10), visible);
        func_0018e490(GS_TASK(work, 0x14), visible);
        func_0018e490(GS_TASK(work, 0x18), visible);
    }
}

/* W357 measured opt_common_subs off: without nd1165/object1568, with nd984/object1564; window 1584; retained. */
#pragma opt_common_subs off
// FUN_0018C150
#ifndef PC_BUILD
asm void func_0018c150(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff60
  .word 0xffbf0090
  .word 0x7fb70080
  .word 0x7fb60070
  .word 0x7fb50060
  .word 0x7fb40050
  .word 0x7fb30040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0xe7b50004
  .word 0xe7b40000
  .word 0x0080902d
  .word 0x8c940070
  .word 0x84900014
  .word 0x0200982d
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000b
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020009
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000c
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020003
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000b
  .word 0x0013143c
  .word 0x0002143f
  .word 0x00021080
  .word 0x00521821
  .word 0x2473003c
  .word 0xc6810038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc681003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92870040
  .word 0x0220202d
  .word 0x8c65003c
  .word 0x24060001
  .word 0xc68e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x30420080
  .word 0x14400014
  .word 0x00000000
  .word 0xc6810038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc681003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92870040
  .word 0x0220202d
  .word 0x8e650000
  .word 0x0000302d
  .word 0xc68e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x10000012
  .word 0x00000000
  .word 0xc6810038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc681003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92870040
  .word 0x0220202d
  .word 0x8e650000
  .word 0x24060002
  .word 0xc68e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0xc6810038
  .word 0x3c024230
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc681003c
  .word 0x3c02421c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92870040
  .word 0x0220202d
  .word 0x8e45002c
  .word 0x0000302d
  .word 0xc68e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05b25c
  .word 0x00000000
  .word 0x30420080
  .word 0x1040008b
  .word 0x00000000
  .word 0x8e420020
  .word 0x24420001
  .word 0xae420020
  .word 0x28420064
  .word 0x14400002
  .word 0x00000000
  .word 0xae400020
  .word 0x0000982d
  .word 0x1000007e
  .word 0x00000000
  .word 0x00131100
  .word 0x00531823
  .word 0x8e420020
  .word 0x00431821
  .word 0x24020064
  .word 0x0062001a
  .word 0x00008010
  .word 0x2a010033
  .word 0x14200073
  .word 0x00000000
  .word 0x24020003
  .word 0x0262001a
  .word 0x00001812
  .word 0x00031080
  .word 0x00431021
  .word 0x000218c0
  .word 0x00031083
  .word 0x04610003
  .word 0x00000000
  .word 0x24620003
  .word 0x00021083
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024220
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0xc7808248
  .word 0x46010042
  .word 0x3c024334
  .word 0x44820000
  .word 0x00000000
  .word 0x46000d43
  .word 0x00000000
  .word 0x00000000
  .word 0x4600ab06
  .word 0x0c14ba1e
  .word 0x00000000
  .word 0x46000506
  .word 0x4600ab06
  .word 0x0c14b9b6
  .word 0x00000000
  .word 0x2604ffce
  .word 0x00041080
  .word 0x00441821
  .word 0x00031080
  .word 0x00621021
  .word 0x00021840
  .word 0x24020032
  .word 0x0062001a
  .word 0x00001012
  .word 0x44820800
  .word 0x00000000
  .word 0x46800860
  .word 0x46000802
  .word 0x46000024
  .word 0x44160000
  .word 0x46140802
  .word 0x46000024
  .word 0x44170000
  .word 0x2881000a
  .word 0x1020000a
  .word 0x00000000
  .word 0x00041200
  .word 0x00441823
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00001812
  .word 0x240200ff
  .word 0x00438023
  .word 0x1000000d
  .word 0x00000000
  .word 0x28810028
  .word 0x10200004
  .word 0x00000000
  .word 0x0000802d
  .word 0x10000007
  .word 0x00000000
  .word 0x2603ffa6
  .word 0x00031200
  .word 0x00431823
  .word 0x2402000a
  .word 0x0062001a
  .word 0x00008012
  .word 0x24020003
  .word 0x0262001a
  .word 0x00001010
  .word 0x24460001
  .word 0x0000202d
  .word 0x8e450030
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040882d
  .word 0xc6800024
  .word 0xe440002c
  .word 0xc6810038
  .word 0x3c034230
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x44960000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000800
  .word 0xe4400010
  .word 0xc681003c
  .word 0x3c034208
  .word 0x44830000
  .word 0x00000000
  .word 0x46010040
  .word 0x44970000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000801
  .word 0xe4400014
  .word 0xa0500018
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x26730001
  .word 0x2a62000c
  .word 0x1440ff81
  .word 0x00000000
  .word 0x8e500070
  .word 0x86510014
  .word 0x0220202d
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00029940
  .word 0x0220202d
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0262001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6010038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6010024
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc601003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6010038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0x02a0202d
  .word 0x8e45002c
  .word 0x24060001
  .word 0xc60e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00029940
  .word 0x0220202d
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0262001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6010038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6010024
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc601003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6010038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0xc6010024
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x02a0202d
  .word 0x8e45002c
  .word 0x24060002
  .word 0x0c04567c
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
  .word 0xc7b50004
  .word 0xc7b40000
  .word 0x27bd00a0
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_common_subs reset
// FUN_0018C780
#ifndef PC_BUILD
asm void func_0018c780(KwlnTask* task)
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
  .word 0x0080902d
  .word 0x8c900070
  .word 0x84930014
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000b
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020009
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000c
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020003
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000b
  .word 0x0013143c
  .word 0x0002143f
  .word 0x00021080
  .word 0x00521821
  .word 0x2473003c
  .word 0xc6010038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0x0220202d
  .word 0x8c65003c
  .word 0x24060008
  .word 0xc60e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0xc6010038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0x0220202d
  .word 0x8e650000
  .word 0x24060007
  .word 0xc60e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0xc6010038
  .word 0x3c024230
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c02421c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0x0220202d
  .word 0x8e45002c
  .word 0x24060006
  .word 0xc60e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e530070
  .word 0x86540014
  .word 0x0280202d
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00028940
  .word 0x0280202d
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6610038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6610024
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc661003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6610038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc661003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92670040
  .word 0x02a0202d
  .word 0x8e45002c
  .word 0x24060001
  .word 0xc66e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00028940
  .word 0x0280202d
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6610038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6610024
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc661003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6610038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc661003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92670040
  .word 0xc6610024
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x02a0202d
  .word 0x8e45002c
  .word 0x24060002
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e440018
  .word 0x28810006
  .word 0x14200002
  .word 0x00000000
  .word 0x24040005
  .word 0x00041300
  .word 0x24030005
  .word 0x0043001a
  .word 0x0000a012
  .word 0x00041200
  .word 0x00441023
  .word 0x7043001a
  .word 0x70001812
  .word 0x240200ff
  .word 0x00439823
  .word 0x0000202d
  .word 0x8e45003c
  .word 0x24060001
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040882d
  .word 0xc6010024
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe440002c
  .word 0x26830001
  .word 0xa4430028
  .word 0xa443002a
  .word 0x0220202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220024
  .word 0x0220202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220026
  .word 0x3c0242b4
  .word 0xae220020
  .word 0x0220202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc6010038
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c024200
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6200010
  .word 0x0220202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc601003c
  .word 0x3c0241b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6200014
  .word 0xa2330018
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e430018
  .word 0x2463fffb
  .word 0x04600064
  .word 0x00000000
  .word 0x28610008
  .word 0x10200061
  .word 0x00000000
  .word 0x00031300
  .word 0x000298c3
  .word 0x04410003
  .word 0x00000000
  .word 0x24420007
  .word 0x000298c3
  .word 0x00031200
  .word 0x00431023
  .word 0x000218c3
  .word 0x04410003
  .word 0x00000000
  .word 0x24420007
  .word 0x000218c3
  .word 0x240200ff
  .word 0x00438823
  .word 0x0000202d
  .word 0x8e45003c
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040a02d
  .word 0xc6010024
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe440002c
  .word 0x26630001
  .word 0xa4430028
  .word 0xa443002a
  .word 0x0280202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6820024
  .word 0x0280202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6820026
  .word 0x0280202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc6010038
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c02422c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6800010
  .word 0x0280202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc601003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c0241c8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6800014
  .word 0xa2910018
  .word 0x0280202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e430018
  .word 0x24630001
  .word 0xae430018
  .word 0x28630012
  .word 0x14600004
  .word 0x00000000
  .word 0xae400018
  .word 0x24030004
  .word 0xae43000c
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
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

/* W357 measured opt_common_subs off: without nd815/object1152, with nd782/object1088; window 1232; retained. */
#pragma opt_common_subs off
/* W375 measured opt_propagation off: without nd782/object1088, with nd771/object1088; window 1232; retained. */
#pragma opt_propagation off
// FUN_0018CE50
#ifndef PC_BUILD
asm void func_0018ce50(KwlnTask* task)
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
  .word 0x0080802d
  .word 0x8c930070
  .word 0x84910014
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0x2411000b
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x24020009
  .word 0x14620002
  .word 0x00000000
  .word 0x2411000c
  .word 0x00111c3c
  .word 0x00031c3f
  .word 0x24020003
  .word 0x14620002
  .word 0x00000000
  .word 0x2411000b
  .word 0x0011143c
  .word 0x0002143f
  .word 0x00021080
  .word 0x00501821
  .word 0x2471003c
  .word 0xc6610038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc661003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92670040
  .word 0x0240202d
  .word 0x8c65003c
  .word 0x24060008
  .word 0xc66e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0xc6610038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc661003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92670040
  .word 0x0240202d
  .word 0x8e250000
  .word 0x24060007
  .word 0xc66e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0xc6610038
  .word 0x3c024230
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc661003c
  .word 0x3c02421c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92670040
  .word 0x0240202d
  .word 0x8e05002c
  .word 0x24060006
  .word 0xc66e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e120070
  .word 0x86140014
  .word 0x0280202d
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00028940
  .word 0x0280202d
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6410038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6410024
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc641003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6410038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc641003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92470040
  .word 0x02a0202d
  .word 0x8e05002c
  .word 0x24060001
  .word 0xc64e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00028940
  .word 0x0280202d
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6410038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6410024
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc641003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6410038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc641003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92470040
  .word 0xc6410024
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x02a0202d
  .word 0x8e05002c
  .word 0x24060002
  .word 0x0c04567c
  .word 0x00000000
  .word 0x0000202d
  .word 0x8e05003c
  .word 0x24060001
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040902d
  .word 0xc6610024
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe440002c
  .word 0x24031000
  .word 0xa4430028
  .word 0xa443002a
  .word 0x0240202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6420024
  .word 0x0240202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6420026
  .word 0x3c0242b4
  .word 0xae420020
  .word 0x0240202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc6610038
  .word 0x3c0240c0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c024200
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c024120
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6400010
  .word 0x0240202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc661003c
  .word 0x3c0241b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c024180
  .word 0x44820000
  .word 0x00000000
  .word 0x46010040
  .word 0x3c0240a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6400014
  .word 0x24020028
  .word 0xa2420018
  .word 0x0240202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c045660
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
#endif /* PC_BUILD: asm function omitted */
#pragma opt_propagation reset

#pragma opt_common_subs reset
/* W357 measured opt_propagation off: without nd1487/object2016, with nd1359/object1884; window 2048; retained. */
#pragma opt_propagation off
// FUN_0018D320
#ifndef PC_BUILD
asm void func_0018d320(KwlnTask* task)
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
  .word 0x0080902d
  .word 0x8c900070
  .word 0x84930014
  .word 0x0c05f600
  .word 0x00000000
  .word 0x10400013
  .word 0x00000000
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020001
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000b
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020009
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000c
  .word 0x00131c3c
  .word 0x00031c3f
  .word 0x24020003
  .word 0x14620002
  .word 0x00000000
  .word 0x2413000b
  .word 0x0013143c
  .word 0x0002143f
  .word 0x00021080
  .word 0x00521821
  .word 0x2473003c
  .word 0xc6010038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0x0220202d
  .word 0x8c65003c
  .word 0x24060006
  .word 0xc60e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0xc6010038
  .word 0x3c0241a0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c024190
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0x0220202d
  .word 0x8e650000
  .word 0x24060004
  .word 0xc60e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0xc6010038
  .word 0x3c024230
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c02421c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92070040
  .word 0x0220202d
  .word 0x8e45002c
  .word 0x24060005
  .word 0xc60e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e530070
  .word 0x86540014
  .word 0x0280202d
  .word 0x0c05b13c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00028940
  .word 0x0280202d
  .word 0x0c05b17c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6610038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6610024
  .word 0x3c023f80
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc661003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6610038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc661003c
  .word 0x3c024238
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92670040
  .word 0x02a0202d
  .word 0x8e45002c
  .word 0x24060001
  .word 0xc66e0024
  .word 0x0c04567c
  .word 0x00000000
  .word 0x0280202d
  .word 0x0c05b15c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x00028940
  .word 0x0280202d
  .word 0x0c05b19c
  .word 0x00000000
  .word 0x3042ffff
  .word 0x0222001a
  .word 0x00002012
  .word 0x24030020
  .word 0x10830019
  .word 0x00000000
  .word 0xc6610038
  .word 0x44840000
  .word 0x00000000
  .word 0x46800020
  .word 0x46000840
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0xc6610024
  .word 0x3c024040
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b01
  .word 0xc661003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010380
  .word 0x00642823
  .word 0x2404ff00
  .word 0x24060014
  .word 0x0c044e8c
  .word 0x00000000
  .word 0xc6610038
  .word 0x3c024248
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc661003c
  .word 0x3c02424c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x92670040
  .word 0xc6610024
  .word 0x3c024000
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x02a0202d
  .word 0x8e45002c
  .word 0x24060002
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e440018
  .word 0x28810006
  .word 0x14200002
  .word 0x00000000
  .word 0x24040005
  .word 0x00041300
  .word 0x24030005
  .word 0x0043001a
  .word 0x00009812
  .word 0x00041200
  .word 0x00441023
  .word 0x7043001a
  .word 0x70001812
  .word 0x240200ff
  .word 0x0043a023
  .word 0x0000202d
  .word 0x8e450038
  .word 0x0000302d
  .word 0x0c04562c
  .word 0x00000000
  .word 0x0040882d
  .word 0xc6010024
  .word 0x3c034080
  .word 0x44830000
  .word 0x00000000
  .word 0x46000801
  .word 0xe440002c
  .word 0xa4530028
  .word 0xa453002a
  .word 0x0220202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220024
  .word 0x0220202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010003
  .word 0x46000024
  .word 0x44020000
  .word 0x00000000
  .word 0xa6220026
  .word 0x0220202d
  .word 0x0c0449ac
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc6010038
  .word 0x3c0241b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c024228
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6200010
  .word 0x0220202d
  .word 0x0c0449d0
  .word 0x00000000
  .word 0x3c024000
  .word 0x44820800
  .word 0x00000000
  .word 0x46010083
  .word 0xc601003c
  .word 0x3c024204
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0x46020041
  .word 0x3c0241d8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe6200014
  .word 0xa2340018
  .word 0x0220202d
  .word 0x24050001
  .word 0x0c0449f4
  .word 0x00000000
  .word 0x0220202d
  .word 0x0c045660
  .word 0x00000000
  .word 0x8e420018
  .word 0x2443fffb
  .word 0x0460000e
  .word 0x00000000
  .word 0x28610005
  .word 0x10200006
  .word 0x00000000
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000a012
  .word 0x10000006
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030099
  .word 0x0043001b
  .word 0x0000a010
  .word 0xc6010038
  .word 0x3c0241e0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c0241b0
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x328700ff
  .word 0xc6010024
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x0220202d
  .word 0x8e450038
  .word 0x24060001
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e420018
  .word 0x2443fffb
  .word 0x0460000e
  .word 0x00000000
  .word 0x28610005
  .word 0x10200006
  .word 0x00000000
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000a012
  .word 0x10000006
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030099
  .word 0x0043001b
  .word 0x0000a010
  .word 0xc6010038
  .word 0x3c02426c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c0241b8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x328700ff
  .word 0xc6010024
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x0220202d
  .word 0x8e450038
  .word 0x24060002
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e420018
  .word 0x2443fffb
  .word 0x04600023
  .word 0x00000000
  .word 0x28610005
  .word 0x10200006
  .word 0x00000000
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000a012
  .word 0x10000006
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030099
  .word 0x0043001b
  .word 0x0000a010
  .word 0xc6010038
  .word 0x3c0241a8
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c02423c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x328700ff
  .word 0xc6010024
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x0220202d
  .word 0x8e450038
  .word 0x24060003
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e420018
  .word 0x2443fffb
  .word 0x0460000e
  .word 0x00000000
  .word 0x28610005
  .word 0x10200006
  .word 0x00000000
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000a012
  .word 0x10000006
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030099
  .word 0x0043001b
  .word 0x0000a010
  .word 0xc6010038
  .word 0x3c024244
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c02422c
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x328700ff
  .word 0xc6010024
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x0220202d
  .word 0x8e450038
  .word 0x24060004
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e420018
  .word 0x2443fffb
  .word 0x0460000e
  .word 0x00000000
  .word 0x28610005
  .word 0x10200006
  .word 0x00000000
  .word 0x24020005
  .word 0x0062001a
  .word 0x0000a012
  .word 0x10000006
  .word 0x00000000
  .word 0x0c1223cc
  .word 0x00000000
  .word 0x24030099
  .word 0x0043001b
  .word 0x0000a010
  .word 0xc6010038
  .word 0x3c024286
  .word 0x44820000
  .word 0x00000000
  .word 0x46010300
  .word 0xc601003c
  .word 0x3c024278
  .word 0x44820000
  .word 0x00000000
  .word 0x46010340
  .word 0x328700ff
  .word 0xc6010024
  .word 0x3c024080
  .word 0x44820000
  .word 0x00000000
  .word 0x46000b81
  .word 0x0220202d
  .word 0x8e450038
  .word 0x24060005
  .word 0x0c04567c
  .word 0x00000000
  .word 0x8e430018
  .word 0x24630001
  .word 0xae430018
  .word 0x2861001f
  .word 0x14200004
  .word 0x00000000
  .word 0x8e430010
  .word 0xae43000c
  .word 0xae400018
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
  .word 0x00000000
  .word 0x00000000
}
#endif /* PC_BUILD: asm function omitted */

#pragma opt_propagation reset
/* W419 operand-order probes at atlas = pcId*4 + object + 0x3c: pointer,
 * integer-cast, and opt_common_subs-off variants stayed 696/704 nd2; an
 * add-helper variant was 704/704 nd351; retained direct expression. */
static inline u32 clndAddOffsetFirst(u32 offset, u32 base)
{
    return offset + base;
}
/* W419 offset-first integer inline: nd2/object696 -> nd0/object696; window 704. */
// FUN_0018DB20
void* func_0018db20(KwlnTask* task)
{
    GsDb20WorkView* object = (GsDb20WorkView*)task;
    if (func_0018b700(object->transition) == 0)
    {
        goto done;
    }
    if (object->visible == 0)
    {
        goto done;
    }
    switch (object->state)
    {
        case 0:
            func_0018c150(task);
            break;
        case 1:
        {
            void* unused;
            void** atlas;
            GsTransition* transition;
            s16 pcId;

            transition = (GsTransition*)object->transition;
            pcId = object->pcId;

            if (datGetScenarioMode() != 0)
            {
                if (pcId == 1)
                {
                    pcId = 11;
                }
                if (pcId == 9)
                {
                    pcId = 12;
                }
                if (pcId == 3)
                {
                    pcId = 11;
                }
            }
            atlas = (void**)(clndAddOffsetFirst((u32)(pcId * 4), (u32)object) + 0x3c);
            {
                f32 x;
                f32 y;
                u32 alpha;

                x = *(volatile f32*)&transition->position.valueF[0] + 20.0f;
                y = *(volatile f32*)&transition->position.valueF[1] + 18.0f;
                alpha = *(volatile u8*)&transition->alpha;
                func_001159f0(unused, *atlas, 3, alpha, x, y,
                              transition->depth);
            }
            {
                f32 x;
                f32 y;
                u32 alpha;

                x = *(volatile f32*)&transition->position.valueF[0] + 20.0f;
                y = *(volatile f32*)&transition->position.valueF[1] + 18.0f;
                alpha = *(volatile u8*)&transition->alpha;
                func_001159f0(unused, *atlas, 1, alpha, x, y,
                              transition->depth);
            }
            {
                f32 x;
                f32 y;
                u32 alpha;

                x = *(volatile f32*)&transition->position.valueF[0] + 44.0f;
                y = *(volatile f32*)&transition->position.valueF[1] + 39.0f;
                alpha = *(volatile u8*)&transition->alpha;
                func_001159f0(unused, object->sprite2c, 0, alpha, x, y,
                              transition->depth);
            }
            {
                f32 x;
                f32 y;
                u32 alpha;

                x = *(volatile f32*)&transition->position.valueF[0] + 50.0f;
                y = *(volatile f32*)&transition->position.valueF[1] + 51.0f;
                alpha = *(volatile u8*)&transition->alpha;
                func_001159f0(unused, object->sprite2c, 3, alpha, x, y,
                              transition->depth);
            }
            {
                f32 x;
                f32 y;
                u32 alpha;

                x = *(volatile f32*)&transition->position.valueF[0] + 27.0f;
                y = *(volatile f32*)&transition->position.valueF[1] + 22.0f;
                alpha = *(volatile u8*)&transition->alpha;
                func_001159f0(unused, object->sprite34, 0, alpha, x, y,
                              transition->depth);
            }
            break;
        }
        case 2:
            func_0018d320(task);
            break;
        case 3:
            func_0018c780(task);
            break;
        case 4:
            func_0018ce50(task);
            break;
        default:
            break;
        }
done:
    ;
}

// FUN_0018DDE0
void func_0018dde0(KwlnTask* transitionTask, s32 mode)
{
    void* transition = transitionTask->workData;

    switch (mode)
    {
    case 0:
        GS_S32(transition, 0xc) = 0;
        break;
    case 1:
        GS_S32(transition, 0xc) = 3;
        break;
    case 2:
        GS_S32(transition, 0xc) = 1;
        break;
    case 3:
        GS_S32(transition, 0x10) = GS_S32(transition, 0xc);
        GS_S32(transition, 0xc) = 2;
        break;
    }
    GS_S32(transition, 0x18) = 0;
}

/* W357 measured opt_common_subs off: without nd852/object1204, with nd819/object1220; window 1232; retained. */
#pragma opt_common_subs off
// FUN_0018DE60
asm void* func_0018de60(KwlnTask* task)
{
  .set noreorder
  .word 0x27bdff90
  .word 0xffbf0040
  .word 0x7fb20030
  .word 0x7fb10020
  .word 0x7fb00010
  .word 0x8c92003c
  .word 0x8e420000
  .word 0x24040001
  .word 0x1044000e
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x1000011d
  .word 0x00000000
  .word 0x0c062db4
  .word 0x00000000
  .word 0xae420070
  .word 0xae400004
  .word 0xae40000c
  .word 0x24020001
  .word 0xae420000
  .word 0x10000114
  .word 0x00000000
  .word 0x0080882d
  .word 0x0000802d
  .word 0x1000000a
  .word 0x00000000
  .word 0x0200202d
  .word 0x0c05b758
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x10400002
  .word 0x00000000
  .word 0x26310001
  .word 0x26100001
  .word 0x2a020003
  .word 0x1440fff5
  .word 0x00000000
  .word 0x8e420008
  .word 0x1040000b
  .word 0x00000000
  .word 0x2444ffff
  .word 0x0c05b758
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x14400004
  .word 0x00000000
  .word 0xae400004
  .word 0x8e420070
  .word 0xac400004
  .word 0x8e420008
  .word 0x14400005
  .word 0x00000000
  .word 0x24020001
  .word 0xae420014
  .word 0x10000011
  .word 0x00000000
  .word 0x8e500014
  .word 0x2444ffff
  .word 0x0c05b758
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0x12020009
  .word 0x00000000
  .word 0xae400004
  .word 0x8e420008
  .word 0x2444ffff
  .word 0x0c05b758
  .word 0x00000000
  .word 0x0002143c
  .word 0x0002143f
  .word 0xae420014
  .word 0x8e420004
  .word 0x24050003
  .word 0x10450076
  .word 0x00000000
  .word 0x24040002
  .word 0x10440070
  .word 0x00000000
  .word 0x24030001
  .word 0x10430065
  .word 0x00000000
  .word 0x10400003
  .word 0x00000000
  .word 0x100000c8
  .word 0x00000000
  .word 0xae51001c
  .word 0x8e420014
  .word 0x104000c4
  .word 0x00000000
  .word 0x8e500008
  .word 0x24020216
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00060
  .word 0x24020004
  .word 0x12220027
  .word 0x00000000
  .word 0x12250018
  .word 0x00000000
  .word 0x12240009
  .word 0x00000000
  .word 0x12230003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x3c0243a2
  .word 0xafa20064
  .word 0x10000025
  .word 0x00000000
  .word 0x00101100
  .word 0x00501023
  .word 0x00021080
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024393
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0x10000018
  .word 0x00000000
  .word 0x00101100
  .word 0x00501023
  .word 0x00021080
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c02436a
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0x1000000b
  .word 0x00000000
  .word 0x24020035
  .word 0x02021018
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024343
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0xc7ac0064
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844500
  .word 0x0200282d
  .word 0x0040302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0x24070001
  .word 0xae470004
  .word 0xdfa20060
  .word 0xffa20068
  .word 0xc7a10068
  .word 0x3c024396
  .word 0x44820000
  .word 0x00000000
  .word 0x46000800
  .word 0xe7a00068
  .word 0xffa00000
  .word 0x2402000a
  .word 0xffa20008
  .word 0x3c0242dc
  .word 0x44826000
  .word 0x8e440070
  .word 0x0000282d
  .word 0x24060002
  .word 0xdfa80068
  .word 0xdfa90060
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c062f04
  .word 0x00000000
  .word 0x10000068
  .word 0x00000000
  .word 0x8e420070
  .word 0x8c430018
  .word 0x8c420020
  .word 0x14620063
  .word 0x00000000
  .word 0xae450004
  .word 0x10000060
  .word 0x00000000
  .word 0xae400004
  .word 0x1000005d
  .word 0x00000000
  .word 0x8e42001c
  .word 0x1222005a
  .word 0x00000000
  .word 0xae51001c
  .word 0x8e420070
  .word 0xc4410038
  .word 0xc440003c
  .word 0xe7a10058
  .word 0xe7a0005c
  .word 0x8e500008
  .word 0x24020216
  .word 0x44820000
  .word 0x00000000
  .word 0x46800020
  .word 0xe7a00060
  .word 0x24020004
  .word 0x12220029
  .word 0x00000000
  .word 0x1225001a
  .word 0x00000000
  .word 0x24020002
  .word 0x1222000a
  .word 0x00000000
  .word 0x24020001
  .word 0x12220003
  .word 0x00000000
  .word 0x10000029
  .word 0x00000000
  .word 0x3c0243a2
  .word 0xafa20064
  .word 0x10000025
  .word 0x00000000
  .word 0x00101100
  .word 0x00501023
  .word 0x00021080
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024393
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0x10000018
  .word 0x00000000
  .word 0x00101100
  .word 0x00501023
  .word 0x00021080
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c02436a
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0x1000000b
  .word 0x00000000
  .word 0x24020035
  .word 0x02021018
  .word 0x44820000
  .word 0x00000000
  .word 0x46800060
  .word 0x3c024343
  .word 0x44820000
  .word 0x00000000
  .word 0x46010000
  .word 0xe7a00064
  .word 0xc7ac0064
  .word 0x0c14c368
  .word 0x00000000
  .word 0x3c04005e
  .word 0x24844500
  .word 0x0200282d
  .word 0x0040302d
  .word 0x0c14896a
  .word 0x00000000
  .word 0xffa00000
  .word 0x2402000a
  .word 0xffa20008
  .word 0x3c0242dc
  .word 0x44826000
  .word 0x8e440070
  .word 0x0000282d
  .word 0x24060002
  .word 0x0000382d
  .word 0xdfa80058
  .word 0xdfa90060
  .word 0x0000502d
  .word 0x0000582d
  .word 0x0c062f04
  .word 0x00000000
  .word 0x8e430004
  .word 0x24020001
  .word 0x10620004
  .word 0x00000000
  .word 0x24020003
  .word 0x14620004
  .word 0x00000000
  .word 0x0240202d
  .word 0x0c0636c8
  .word 0x00000000
  .word 0x0000102d
  .word 0xdfbf0040
  .word 0x7bb20030
  .word 0x7bb10020
  .word 0x7bb00010
  .word 0x27bd0070
  .word 0x03e00008
  .word 0x00000000
  .word 0x00000000
  .word 0x00000000
}

#pragma opt_common_subs reset
// FUN_0018E330
void func_0018e330(KwlnTask* task)
{
    GsResourceWork* work = (GsResourceWork*)task->workData;

    if (work->allocation != NULL)
    {
        GS_FREE(work->allocation);
    }
    work->allocation = NULL;
    GS_FREE(work);
}

// FUN_0018E390
KwlnTask* func_0018e390(KwlnTask* parent, s32 index, void* resources)
{
    GsResourceWork* work;
    KwlnTask* task;
    s32 i;

    work = GS_ALLOC(1, 0x74, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005E4520, 0x18b4,
                          func_0018de60, func_0018e330, work);
    if (task == NULL)
    {
        return NULL;
    }
    for (i = 0; i < 0x12; i++)
    {
        GS_PTR((u8*)work + i * 4, 0x28) = ((void**)resources)[i];
    }
    GS_U32(work, 0x24) = 1;
    GS_S32(work, 8) = index;
    return task;
}

// FUN_0018E490
void func_0018e490(KwlnTask* task, s32 visible)
{
    GS_S32((u8*)task->workData, 0x24) = visible;
}

// FUN_0018E4A0
void func_0018e4a0(void)
{
    HCdvd* cdvd;
    void* entry;
    u32 size;

    cdvd = H_Cdvd_Request(D_005E4540, HCDVD_FILEARCHIVE);
    H_Cdvd_ReadSync(cdvd);
    entry = H_Cdvd_ArchiveGetFile(cdvd, 0, &size);
    DAT_007ce008 = func_00112420(entry);
    do
    {
        func_001120c0();
    } while (H_Maestro_00111f30((s16*)DAT_007ce008) ? 0 : 1);
    H_Cdvd_Destroy(cdvd);
}

// FUN_0018E540
void* func_0018e540(KwlnTask* task)
{
    u8* work = (u8*)task->workData;

    switch (GS_U32(work, 0))
    {
    case 0:
        GS_U32(work, 0) = 1;
        break;
    case 1:
        GS_PTR(work, 0x214) = DAT_007ce008;
        GS_U32(work, 0) = 2;
        break;
    case 2:
        func_0018e8e0(work);
        break;
    }
    return KWLNTASK_CONTINUE;
}

// FUN_0018E5C0
void func_0018e5c0(KwlnTask* task, void* record)
{
    GsAnimationWork* work = (GsAnimationWork*)task->workData;
    GsPackedPosition firstStart;
    GsPackedPosition end;
    GsPackedPosition commonStart;
    GsPackedPosition alternateStart;

    if (work->transitionInitialized != 0)
    {
        func_00524270((u8*)work + 0x108, (u8*)work + 8);
        end.valueF[0] = 40.0f;
        end.valueF[1] = 407.0f;
        firstStart = end;
        end.valueF[0] = end.valueF[0] + 200.0f;
        gsConfigureTransition((u8*)work->transitions + 0x88, 0, 2, 2,
                              firstStart.value, end.value, 0, 0, 0, 10,
                              100.0f);
    }
    else
    {
        end.valueF[0] = 194.0f;
        end.valueF[1] = 399.0f;
        alternateStart = end;
        alternateStart.valueF[0] = alternateStart.valueF[0] - 200.0f;
        gsConfigureTransition(work->transitions, 0, 2, 1,
                              alternateStart.value, end.value, 0, 0, 0, 10,
                              100.0f);
        work->transitionInitialized = 1;
    }
    func_00524270((u8*)work + 8, record);
    end.valueF[0] = 40.0f;
    end.valueF[1] = 407.0f;
    commonStart = end;
    commonStart.valueF[0] = commonStart.valueF[0] - 200.0f;
    gsConfigureTransition((u8*)work->transitions + 0x44, 0, 2, 1,
                          commonStart.value, end.value, 0, 0, 0, 10,
                          100.0f);
}

// FUN_0018E7A0
void func_0018e7a0(KwlnTask* task)
{
    GsAnimationWork* work = (GsAnimationWork*)task->workData;

    if (work->cdvd != NULL)
    {
        work->cdvd = NULL;
        H_Cdvd_Destroy(NULL);
    }
    if (work->transitions != NULL)
    {
        GS_FREE(work->transitions);
    }
    work->transitions = NULL;
    GS_FREE(work);
}

// FUN_0018E820
KwlnTask* func_0018e820(KwlnTask* parent)
{
    KwlnTask* task;
    void* work;

    work = GS_ALLOC(1, 0x218, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreate(parent, D_005E4560, 0x18b4,
                          func_0018e540, func_0018e7a0, work);
    if (task == NULL)
    {
        return NULL;
    }
    GS_PTR(work, 0x210) = func_0018b6d0(10);
    GS_U32(work, 0x20c) = 1;
    return task;
}

// FUN_0018E8E0
void func_0018e8e0(void* workData)
{
    GsAnimationWork* work = (GsAnimationWork*)workData;
    s32 i;
    void* unused;
    s32 transitionOffset;
    GsTransition* transition;

    for (i = 0; i < 3; i++)
    {
        transitionOffset = i * sizeof(GsTransition);
        if (func_0018b700((u8*)work->transitions + transitionOffset) != 0)
        {
            transition = (GsTransition*)((u8*)work->transitions + transitionOffset);
            if (work->visible != 0)
            {
                switch (i)
                {
                case 0:
                {
                    f32 x;
                    f32 y;

                    func_001159f0(unused, work->atlas, 0,
                                  *(u8*)&transition->alpha,
                                  transition->position.valueF[0],
                                  transition->position.valueF[1],
                                  transition->depth);
                    x = 21.0f + transition->position.valueF[0] - 174.0f - 27.0f;
                    y = 3.0f + (412.0f + transition->position.valueF[1] - 399.0f);
                    gsDrawSpritePositionFirst(x, y, unused, work->atlas, 2,
                                              *(u8*)&transition->alpha,
                                              transition->depth);
                    break;
                }
                case 1:
                {
                    u32 alpha;

                    alpha = transition->alpha;
                    alpha = 0xff - alpha;
                    func_003b2cb0(
                        transition->depth,
                        (s32)((f32)(s32)transition->position.valueF[0] - 10.0f),
                        (s32)transition->position.valueF[1] + 5,
                        alpha | 0xffffff00, 5, 1, (u8*)work + 8, 0x10, 0);
                    break;
                }
                case 2:
                {
                    u32 alpha;

                    alpha = transition->alpha;
                    alpha = 0xff - alpha;
                    func_003b2cb0(
                        transition->depth,
                        (s32)((f32)(s32)transition->position.valueF[0] - 10.0f),
                        (s32)transition->position.valueF[1] + 5,
                        alpha | 0xffffff00, 5, 1, (u8*)work + 0x108, 0x10, 0);
                    break;
                }
                }
            }
        }
    }
}

// FUN_0018EB30
void func_0018eb30(KwlnTask* task, u32 visible)
{
    GS_U32((u8*)task->workData, 0x20c) = visible;
}

// FUN_0018EB40
void* func_0018eb40(KwlnTask* task)
{
    u8* work = (u8*)task->workData;
    char path[264];
    GsPackedDimensions dimensions;
    void (**renderState)(u32, u32);
    u32 mode;

    kwlnGetMainCamera();
    renderState = (void (**)(u32, u32))D_00960090_abs;
    (*renderState)(6, 1);
    (*renderState)(7, 2);
    (*renderState)(8, 1);
    (*renderState)(9, 1);
    (*renderState)(0xc, 1);
    (*renderState)(0xb, 6);
    (*renderState)(10, 5);
    mode = GS_U32(work, 0);
    switch (mode)
    {
    case 0:
        switch (GS_U32(work, 4))
        {
        case 2:
            sprintf(path, (const char*)D_005E4580);
            break;
        case 3:
            sprintf(path, (const char*)D_005E45A0);
            break;
        case 4:
            sprintf(path, (const char*)D_005E45C0);
            break;
        case 5:
            sprintf(path, (const char*)D_005E45E0);
            break;
        case 7:
            sprintf(path, (const char*)D_005E4600);
            break;
        case 8:
            sprintf(path, (const char*)D_005E4620);
            break;
        case 9:
            if (datGetScenarioMode() != 0)
            {
                sprintf(path, (const char*)D_005E4660);
            }
            else
            {
                sprintf(path, (const char*)D_005E4640);
            }
            break;
        case 10:
            sprintf(path, (const char*)D_005E4680);
            break;
        case 0:
        case 1:
        case 6:
        default:
            sprintf(path, (const char*)D_005E4580);
            break;
        }
        GS_U32(work, 0) = 1;
        break;
    case 1:
        dimensions.valueS[0] = 0x29;
        dimensions.valueS[1] = 4;
        dimensions.valueS[2] = 0xb;
        switch (GS_U32(work, 4))
        {
        case 2:
            dimensions.valueS[3] = 0;
            break;
        case 3:
            dimensions.valueS[3] = 1;
            break;
        case 4:
            dimensions.valueS[3] = 2;
            break;
        case 5:
            dimensions.valueS[3] = 3;
            break;
        case 7:
            dimensions.valueS[3] = 4;
            break;
        case 8:
            dimensions.valueS[3] = 5;
            break;
        case 9:
            if (datGetScenarioMode() != 0)
            {
                dimensions.valueS[3] = 8;
            }
            else
            {
                dimensions.valueS[3] = 6;
            }
            break;
        case 10:
            dimensions.valueS[3] = 7;
            break;
        case 0:
        case 1:
        case 6:
        default:
            dimensions.valueS[3] = 0;
            break;
        }
        GS_TASK(work, 8) = func_00111150(task, dimensions.value);
        GS_U32(work, 0) = 2;
        break;
    case 2:
        if (func_001114b0(*(KwlnTask* volatile*)(work + 8)) != 0)
        {
            func_00111520(*(KwlnTask* volatile*)(work + 8), 0x32);
            GS_U32(work, 0) = 3;
        }
        break;
    case 3:
        break;
    case 4:
        func_00111530(*(KwlnTask* volatile*)(work + 8));
        GS_U32(work, 0) = 5;
        break;
    case 5:
        if (((GsEb40WorkView*)work)->frame >= 0x32)
        {
            if (((GsEb40WorkView*)work)->release != 0)
            {
                GS_U32(work, 0x60) = GS_U32(work, 0x60) + 1;
                func_00111500(*(KwlnTask* volatile*)(work + 8));
            }
        }
        else
        {
            GS_U32(work, 0x60) = GS_U32(work, 0x60) + 1;
        }
        if (kwlnTaskGetState(*(KwlnTask* volatile*)(work + 8)) == 3)
        {
            return KWLNTASK_STOP;
        }
        break;
    default:
        break;
    }
    return KWLNTASK_CONTINUE;
}

// FUN_0018EF60
void func_0018ef60(KwlnTask* task)
{
    GsLargeCdvdWork* work = (GsLargeCdvdWork*)task->workData;

    if (work->cdvd != NULL)
    {
        H_Cdvd_Destroy(work->cdvd);
        work->cdvd = NULL;
    }
    GS_FREE(work);
}

// FUN_0018EFB0
KwlnTask* func_0018efb0(KwlnTask* parent, s32 mode)
{
    void* work;
    KwlnTask* task;

    work = GS_ALLOC(1, 0x3d0, 0x40000);
    if (work == NULL)
    {
        return NULL;
    }
    task = kwlnTaskCreateWithAutoPriority(parent, 0x106f, D_005E46A0,
                                          func_0018eb40,
                                          func_0018ef60, work);
    if (task == NULL)
    {
        return NULL;
    }
    GS_S32(work, 4) = mode;
    return task;
}

// FUN_0018F060
u32 func_0018f060(KwlnTask* task)
{
    return GS_U32(task->workData, 0) == 3;
}

// FUN_0018F080
void func_0018f080(KwlnTask* task)
{
    GS_U32(task->workData, 0) = 4;
}

// FUN_0018F0A0
u32 func_0018f0a0(void)
{
    return 0x3f;
}

// FUN_0018F0B0
u32 func_0018f0b0(KwlnTask* task)
{
    return GS_U32(task->workData, 0x60);
}

// FUN_0018F0C0
u32 func_0018f0c0(KwlnTask* task)
{
    return GS_S32(task->workData, 0x60) > 0x31;
}

// FUN_0018F0E0
void func_0018f0e0(KwlnTask* task)
{
    GS_U32(task->workData, 0x68) = 1;
}
#undef func_00115ad0
#undef DAT_007caf38


