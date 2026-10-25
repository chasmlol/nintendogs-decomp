#include "ctx.h"

extern u32 data_02152cd8;

void func_020746f0(u32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5, u32 param_6)
{
    *(u32 *)((u8 *)&data_02152cd8 + 0x9c) =
        ((param_6 | (param_1 | param_2 << 4 | param_3 << 6)) | param_4 << 0x18) | param_5 << 0x10;
}
