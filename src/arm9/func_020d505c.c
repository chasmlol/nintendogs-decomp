#include "ctx.h"
extern u8 *data_021594d0;
extern s32 func_020d66e0(s32 p);
void func_020d505c(s32 param_1)
{
    s32 iVar1 = func_020d66e0(param_1);
    if (iVar1 != 0) {
        *(u32 *)(data_021594d0 + 0x20) = 0;
    }
}
