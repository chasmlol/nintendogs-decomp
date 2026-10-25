#include "ctx.h"

extern s32 func_020d66e0(u8 *p);
extern u8 *data_ov007_02160d80;

void func_ov007_0215d7f8(u8 *param_1)
{
    s32 iVar1 = func_020d66e0(param_1);
    if (iVar1 != 0) {
        *(u32 *)(data_ov007_02160d80 + 0x28) = 0;
    }
}
