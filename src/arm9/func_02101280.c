#include "ctx.h"

extern s32 func_02101764(u32, u32);
extern void func_02101be4(u32, u32);

void func_02101280(u32 param_1, u32 param_2)
{
    s32 iVar1;
    iVar1 = func_02101764(param_1, param_2);
    if (iVar1 >= 0) {
        func_02101be4((u32)iVar1, 0);
        return;
    }
}
