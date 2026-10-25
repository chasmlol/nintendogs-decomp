#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_021657c4(u8 *param_1)
{
    u8 r;
    *(u16 *)(param_1 + 256 + 82) = 0x223;
    func_020264f4(param_1);
    r = func_020255a4(param_1);
    return r;
}
