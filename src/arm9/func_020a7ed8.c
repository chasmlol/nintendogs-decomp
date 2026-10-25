#include "ctx.h"

extern u8 *data_0215942c;
void func_020a85c4(u8 *p, u32 a);

void func_020a7ed8(u16 param_1)
{
    u8 *q;
    s16 s;
    s32 off;
    u8 *b;
    q = data_0215942c;
    func_020a85c4(q, 7);
    *(u16 *)(q + 4) = 4;
    *(u16 *)(q + 14) = param_1;
    s = *(s16 *)(q + 14);
    b = q + 32;
    off = (s32)s * 20;
    *(u16 *)(b + off) = (u16)(*(u16 *)(b + off) | 1);
    *(s16 *)(b + off + 2) = s;
}
