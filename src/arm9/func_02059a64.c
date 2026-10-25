#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_020256fc(u8 *p);

u8 func_02059a64(u8 *param_1)
{
    u8 r;
    *(u16 *)(param_1 + 256 + 82) = 0xd9;
    func_02026c24(param_1);
    r = func_020256fc(param_1);
    return r;
}
