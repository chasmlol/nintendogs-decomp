#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025758(u8 *p);

u8 func_02059eec(u8 *param_1)
{
    u8 r;
    *(u16 *)(param_1 + 256 + 82) = 0xbb;
    func_02026bac(param_1);
    r = func_02025758(param_1);
    return r;
}
