#include "ctx.h"

s32 func_020469d0(u8 *p, s32 a, s32 b);
s32 func_0203579c(u8 *p, s32 n);
void func_0203e908(u8 *p, s16 v);

void func_02046470(u8 *param_1)
{
    s32 iVar1 = func_020469d0(param_1, 1, 0);

    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203579c(param_1, 46);
    if (iVar1 != 0) {
        func_0203e908(param_1, (s16)0x2e7);
        return;
    }
}
