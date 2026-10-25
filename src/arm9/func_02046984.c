#include "ctx.h"
extern s32 func_020469d0(u32 a, u32 b, u32 c);
extern s32 func_0203567c(u32 a);
extern void func_0203e908(u32 a, u32 b);
void func_02046984(u32 p0)
{
    if (func_020469d0(p0, 0, 0) != 0) {
        return;
    }
    if (func_0203567c(p0) != 0) {
        func_0203e908(p0, 0x2e6);
    }
}
