#include "ctx.h"

extern u32 data_0215be48;
extern void func_0206c7bc(u16 p0, u8 *p1, s32 p2);

void func_02113198(s32 param_1)
{
    volatile u16 z = 0;
    u32 base = *(u32 *)&data_0215be48;
    u8 *p = (u8 *)(base + 0x1dec + param_1 * 660);
    func_0206c7bc(z, p, 660);
}
