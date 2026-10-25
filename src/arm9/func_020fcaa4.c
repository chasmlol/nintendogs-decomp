#include "ctx.h"

extern u32 data_0215be48;
extern void func_0210ec9c(u32, u32, u8 *, s32);

void func_020fcaa4(u32 param_1, u32 param_2, u8 *param_3, s32 param_4)
{
    func_0210ec9c(param_1, param_2, param_3, param_4);
    data_0215be48 = 0;
}
