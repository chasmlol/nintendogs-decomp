#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov005_0215fc70(u8 *param_1)
{
    s32 r = func_0203567c(param_1);
    if (r != 0) {
        func_0203e908(param_1, 0x452);
    }
}
