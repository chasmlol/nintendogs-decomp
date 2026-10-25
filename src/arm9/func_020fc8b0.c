#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_02159030;

void func_020fc8b0(s32 param_1, s32 param_2, s32 param_3)
{
    u8 *base = *(u8 **)&data_0215be48;
    u8 *t = *(u8 **)&data_02159030;
    *(u32 *)(base + param_1 * 660 + param_2 * 4 + 0x2074) = *(u32 *)(t + param_3 * 4 + 4);
}
