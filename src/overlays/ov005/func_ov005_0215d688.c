#include "ctx.h"

extern u32 func_ov005_0215d7d0(u8 *p);
extern u32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 x);

void func_ov005_0215d688(u8 *param_1)
{
    if (func_ov005_0215d7d0(param_1)) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 0x43d);
    }
}
