#include "ctx.h"

extern s32 func_020469d0(u8 *p, s32 a, s32 b);
extern void func_020467c0(u8 *p);

void func_02046748(u8 *param_1)
{
    s32 iVar1;

    *(u16 *)(param_1 + 0x12e) = 0x8000;
    iVar1 = func_020469d0(param_1, 1, 1);
    if (iVar1 == 0) {
        func_020467c0(param_1);
        return;
    }
    return;
}
