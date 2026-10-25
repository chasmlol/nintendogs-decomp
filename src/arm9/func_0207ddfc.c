#include "ctx.h"

extern void func_0206c7f0(u32 a, u32 *b, u32 c);

u32 *func_0207ddfc(u32 *param_1, s32 param_2, s32 param_3)
{
    u32 *p;
    u32 *self;
    u32 ofs;
    u32 size;
    volatile u32 zero;
    u16 flag;
    self = param_1;
    ofs = self[1] - (u32)param_2;
    p = (u32 *)((~(u32)(param_3 - 1)) & ofs);
    if ((u32)p < self[0]) {
        return 0;
    }
    size = self[1] - (u32)p;
    flag = (u16)(((u32 *)self)[-1] & 0xff);
    if ((flag & 1) != 0) {
        zero = 0;
        func_0206c7f0(zero, p, size);
    }
    self[1] = (u32)p;
    return p;
}
