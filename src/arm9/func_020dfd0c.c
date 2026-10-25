#include "ctx.h"

extern u32 func_0205e47c(u32 a, u32 b);
extern u8 data_0215b23c[];

void func_020dfd0c(u32 param_1)
{
    u32 r = func_0205e47c(0x01ff61fe, param_1);
    *(u32 *)(data_0215b23c + 0xc) = r;
}
