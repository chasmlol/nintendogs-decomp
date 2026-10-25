#include "ctx.h"

extern void func_020092f4(u32, s32);

void func_02009230(u32 param_1)
{
    s16 iVar1 = 0;
    do {
        func_020092f4(param_1, iVar1);
        iVar1 = (s16)(iVar1 + 1);
    } while (iVar1 < 7);
}
