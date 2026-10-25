#include "ctx.h"

extern u32 data_0215942c;
extern void func_020a85c4(u16 *p, s32 q);

void func_020a8568(void)
{
    u16 *p = (u16 *)*(u32 *)&data_0215942c;
    func_020a85c4(p, 0xc000);
    p[2] = 9;
}
