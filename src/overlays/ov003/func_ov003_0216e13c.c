#include "ctx.h"

extern void func_0202675c(u8 *p);
extern u8 func_02025650(u8 *p);

u8 func_ov003_0216e13c(u8 *param_1)
{
    u8 r;
    *(u16 *)(param_1 + 256 + 82) = 0x12;
    func_0202675c(param_1);
    r = func_02025650(param_1);
    return r;
}
