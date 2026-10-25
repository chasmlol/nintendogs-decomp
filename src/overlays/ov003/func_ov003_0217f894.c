#include "ctx.h"

extern s32 func_ov003_0217fe80(u8 *p, u32 a, u32 b);
extern s32 func_0203579c(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_0217f894(u8 *param_1)
{
    if (func_ov003_0217fe80(param_1, 7, 0) != 0) {
        return;
    }
    if (func_0203579c(param_1, 94) != 0) {
        func_0203e908(param_1, 0x20d);
    }
}
