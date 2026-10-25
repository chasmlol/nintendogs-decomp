#pragma avoid_byte all
#include "ctx.h"

extern s32 func_020639e0(u8 *p, s32 n);
extern void func_02063908(u8 *p, s32 n);

void func_0206387c(u8 *param_1, s32 param_2)
{
    s32 iVar2;
    if (param_2 <= 0) {
        return;
    }
    if (param_2 >= (s32)param_1[4]) {
        return;
    }
    iVar2 = func_020639e0(param_1, param_2);
    param_1[4] = (u8)param_2;
    if (iVar2 >= 0) {
        func_02063908(param_1, param_2);
    }
}
