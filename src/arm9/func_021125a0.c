#include "ctx.h"

extern u8 *data_0215be48;

void func_021125a0(s32 param_1, u16 *param_2, s16 param_3, s16 param_4)
{
    u32 first;
    s32 a;
    s32 b;
    u16 *p;
    s32 S;

    first = *param_2;
    if (first == 0xffff) {
        return;
    }
    a = param_3;
    b = param_4;
    S = param_1 << 11;
    p = param_2;
    do {
        u8 *e = data_0215be48 + 0x283c + S + (*p << 4);
        *(s16 *)(e + 10) = a;
        *(s16 *)(e + 12) = b;
        p = p + 1;
    } while (*p != 0xffff);
}
