#include "ctx.h"

extern u8 data_021332f0[];
extern u8 data_021332d8[];
extern void func_02112798(u32 a, u32 b, u32 c);
extern u8 *func_02092a50(u32 a, u32 b);

void func_020fba9c(s32 *param_1)
{
    s32 i;
    s32 j;
    s32 zero;
    u8 *p;
    u8 *r6;
    u8 *r5;
    s32 r9;
    u8 *r8;

    zero = 0;
    i = zero;
    r8 = data_021332f0;
    do {
        j = zero;
        do {
            func_02112798(2, r8[j], zero);
            j = j + 1;
        } while (j < 3);
        i = i + 1;
        r8 = r8 + 3;
    } while (i < 4);
    if ((u32)(param_1[0] - 6) <= 2) {
        r6 = data_021332d8;
        r5 = data_021332f0;
        i = 0;
        do {
            p = func_02092a50(*(s16 *)((u8 *)param_1 + 12), *r6);
            r9 = *(s16 *)(p + 0x14);
            if (r9 >= 1 && r9 <= 3) {
                func_02112798(2, r5[r9 - 1], 1);
            }
            i = i + 1;
            r6 = r6 + 1;
            r5 = r5 + 3;
        } while (i < 4);
    }
}
