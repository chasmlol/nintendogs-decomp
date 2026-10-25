#include "ctx.h"

extern u32 data_0215942c;
extern void func_020a85c4(u32, u32);

void func_020a795c(void)
{
    u8 *r4 = (u8 *)data_0215942c;
    func_020a85c4((u32)r4, 14);
    *(u16 *)(r4 + 4) = 10;
    {
        u8 *r2 = (u8 *)data_0215942c;
        *(u16 *)(r2 + 32) = *(u16 *)(r2 + 32) | 1;
        *(u16 *)(r2 + 32) = *(u16 *)(r2 + 32) | 2;
    }
    *(u16 *)(r4 + 28) = 0;
}
