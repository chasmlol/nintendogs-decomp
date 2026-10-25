#include "ctx.h"

extern u16 data_0213b84c[];

void func_0202707c(u8 *p, s32 param_2)
{
    s16 s = *(s16 *)(p + 0xf0);
    s32 b;
    s32 x;
    if (s < 4) goto A;
    if (s <= 8) { b = 1; goto B; }
A:
    if (s == 0x57) { b = 1; goto B; }
    x = *(s16 *)(p + 0xea);
    if (x < 15) goto C;
    if (x <= 75) { b = 1; goto B; }
C:
    if (x < 0x119) goto D;
    if (x <= 0x13c) { b = 1; goto B; }
D:
    b = 0;
B:
    if (b) {
        b = 0;
        goto E;
    }
    x = *(s16 *)(p + 0xea);
    if (x >= 0x478 && x <= 0x47e) { b = 0; goto E; }
    if (x >= 0x4c7 && x <= 0x4ca) { b = 0; goto E; }
    if (s == 0x53) { b = 0; goto E; }
    if (s == 0x54) { b = 0; goto E; }
    b = 1;
E:
    if (b) {
        if (data_0213b84c[*(s16 *)(p + 0xfa)] <= data_0213b84c[param_2]) {
            *(s16 *)(p + 0xfa) = (s16)param_2;
        }
    }
}
