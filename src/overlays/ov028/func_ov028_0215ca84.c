#include "ctx.h"

s32 func_ov028_0215d758(u32 a, u32 b, u32 c);
void func_0206f224(u32 a, u32 b, u32 c);

void func_ov028_0215ca84(u32 param_1, u32 param_2, u32 param_3)
{
    s32 iVar1 = func_ov028_0215d758(param_1, param_2, param_3);

    if (iVar1 != 2) {
        return;
    }
    if (param_2 != 0) {
        func_0206f224(param_2, param_3, param_1);
    }
}
