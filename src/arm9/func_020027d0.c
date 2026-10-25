#include "ctx.h"

extern s32 func_0200280c(u32 p0, u32 p1, u32 p2, s32 *p3);
extern void func_02002de8(void);
extern u32 func_02002de0;

s32 func_020027d0(u32 param_1, u32 param_2)
{
    s32 st[1];
    s32 r = func_0200280c(param_1, param_2, (u32)&func_02002de0, st);
    if (r == 0) {
        func_02002de8();
        return st[0];
    }
    return r;
}
