#include "ctx.h"
extern u8 *data_ov028_0215df90;
extern s32 func_020d66e0(s32 p);
void func_ov028_0215d5b4(s32 param_1)
{
    s32 iVar1 = func_020d66e0(param_1);
    if (iVar1 != 0) {
        *(u32 *)(data_ov028_0215df90 + 0x1c) = 0;
    }
}
