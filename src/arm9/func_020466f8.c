#include "ctx.h"

extern u32 func_020469d0(u8 *p, u32 a, u32 b);
extern u32 func_0203579c(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 x);

void func_020466f8(u8 *param_1)
{
    if (func_020469d0(param_1, 0, 0)) {
        return;
    }
    if (func_0203579c(param_1, 65)) {
        func_0203e908(param_1, 0x2ea);
    }
}
