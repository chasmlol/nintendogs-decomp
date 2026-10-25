#include "ctx.h"

extern u32 *data_02159438;
extern void func_020042e8(u32 x);

void func_020aa560(void)
{
    u16 *reg = (u16 *)0x04000060;
    func_020042e8(*data_02159438);
    *reg = (*reg & 0xffffcffd) | 2;
}
