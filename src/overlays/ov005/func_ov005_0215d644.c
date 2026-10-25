#include "ctx.h"

extern s32 func_ov005_0215d7d0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

void func_ov005_0215d644(u8 *param_1)
{
    if (func_ov005_0215d7d0(param_1) != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 0x43d);
    }
}
