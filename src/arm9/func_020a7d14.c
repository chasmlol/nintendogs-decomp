#include "ctx.h"

extern u8 *data_0215942c;
extern void func_020a85c4(u8 *a, u32 b);

void func_020a7d14(u16 param_1)
{
    u8 *p;
    u8 *q;
    u8 *e;
    s16 s;
    s32 idx;
    p = data_0215942c;
    func_020a85c4(p, 9);
    *(u16 *)(p + 4) = 4;
    *(u16 *)(p + 14) = param_1;
    s = *(s16 *)(p + 14);
    idx = (s32)s * 20;
    q = p + 32;
    e = q + idx;
    *(u16 *)(q + idx) = *(u16 *)(q + idx) | 1;
    *(s16 *)(e + 2) = s;
}
