#include "ctx.h"

extern u32 data_0214f9b4;
extern s32 func_020643a8(u32, u32, u32);

s32 func_02064590(u32 param_1, u32 param_2)
{
    s32 iVar1;
    iVar1 = func_020643a8(param_1, param_2, 0x1700);
    if (iVar1 == 0) {
        *(s16 *)((u8 *)data_0214f9b4 + 0x16) = 0;
    }
    return iVar1;
}
