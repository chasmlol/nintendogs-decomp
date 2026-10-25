#include "ctx.h"

extern u8 *data_0215be48;
extern void func_0210ea40(s32 a, s32 b, s32 c, s32 d);

void func_02113ee4(u32 *param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u8 *p;
    func_0210ea40(16, param_2, param_3, param_4);
    *param_1 = 0;
    p = data_0215be48;
    *(u32 *)(p + 0x5030) = 1;
}
