#pragma opt_lifetimes off
#include "ctx.h"

typedef struct {
    u32 year;
    u32 month;
    u32 day;
    u32 week;
} RTCDate;

/* days per month, index 1..12 */
extern s32 data_0212f550[];

s32 func_0209253c(const RTCDate *from, const RTCDate *to)
{
    u32 fromDays;
    u32 toYear;
    u32 leap;
    u32 leapAdd;
    u32 y;
    s32 days1;
    u32 year;
    u32 m;
    u32 n;
    u32 fromYear;
    s32 days;
    u32 toFull;
    u32 lf;
    u32 yy;
    u32 last;
    s32 days2;
    u32 m2;

    fromYear = from->year;
    leap = 0;
    year = fromYear + 2000;
    if (((year & 3) == 0 && year % 100 != 0) || year % 400 == 0) {
        leap = 1;
    }
    leapAdd = leap != 0;
    n = from->month;
    n = n - 1;
    days1 = 0;
    m = 1;
    if (n >= 1) {
        do {
            days1 = days1 + data_0212f550[m];
            if (m == 2) {
                days1 = days1 + leapAdd;
            }
            m = m + 1;
        } while (m <= n);
    }
    toYear = to->year;
    fromDays = from->day + days1;
    y = fromYear + 2000;
    days = 0;
    toFull = toYear + 2000;
    if (fromYear < toYear) {
        last = toFull - 1;
        while (y <= last) {
            yy = y + 2000;
            lf = 0;
            days = days + 365;
            if (((yy & 3) == 0 && yy % 100 != 0) || yy % 400 == 0) {
                lf = 1;
            }
            y = y + 1;
            if (lf) {
                days = days + 1;
            }
        }
    }
    {
        u32 leap2;
        u32 year2 = toYear + 2000;
        leap2 = 0;
        if (((year2 & 3) == 0 && year2 % 100 != 0) || year2 % 400 == 0) {
            leap2 = 1;
        }
        leap = leap2 != 0;
        year = to->month - 1;
        days2 = 0;
        m2 = 1;
        if (year >= 1) {
            do {
                days2 = days2 + data_0212f550[m2];
                if (m2 == 2) {
                    days2 = days2 + leap;
                }
                m2 = m2 + 1;
            } while (m2 <= year);
        }
        return (days + (to->day + days2)) - fromDays;
    }
}
