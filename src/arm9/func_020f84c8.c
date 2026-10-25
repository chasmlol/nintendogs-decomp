#pragma avoid_byte strb
#include "ctx.h"

extern void func_020a1a40(u32 a);

void func_020f84c8(u32 sel, u8 *month, s8 *day)
{
    s32 m;
    s32 max;
    u32 raw;
    s32 d;

    raw = *month;
    m = (s8)raw;
    d = *day;
    max = 31;
    switch (sel) {
    case 0:
        m = (s8)(m + 1);
        break;
    case 1:
        d = (s8)(d + 1);
        break;
    case 2:
        m = (s8)(m - 1);
        break;
    case 3:
        d = (s8)(d - 1);
        break;
    }
    if (m < 1)
        m = 12;
    if (m > 12)
        m = 1;
    if (m == 2)
        max = 29;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        max = 30;
    if (d < 1)
        d = max;
    if (d > max) {
        if (m != (s8)raw)
            d = max;
        else
            d = 1;
    }
    *month = m;
    *day = d;
    if (sel <= 1)
        func_020a1a40(25);
    else
        func_020a1a40(26);
}
