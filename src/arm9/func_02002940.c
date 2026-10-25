#include "ctx.h"

extern s32 func_0200297c(u32 a, u32 b, u32 c, s32 *d);
extern void func_02002de8(void);
extern void func_02002de0(void);

s32 func_02002940(u32 param_1, u32 param_2)
{
    s32 out;
    s32 r = func_0200297c(param_1, param_2, (u32)func_02002de0, &out);
    if (r == 0) {
        func_02002de8();
        return out;
    }
    return r;
}
