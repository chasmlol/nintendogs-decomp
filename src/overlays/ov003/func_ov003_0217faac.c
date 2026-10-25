#include "ctx.h"

s32 func_ov003_0217fe80(u8 *p, s32 a, s32 b);
s32 func_0203579c(u8 *p, s32 n);
void func_0203e908(u8 *p, s16 v);

void func_ov003_0217faac(u8 *param_1)
{
    s32 iVar1 = func_ov003_0217fe80(param_1, 6, 0);

    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203579c(param_1, 16);
    if (iVar1 != 0) {
        func_0203e908(param_1, (s16)0x212);
        return;
    }
}
