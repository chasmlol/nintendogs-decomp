#include "ctx.h"

u32 func_0203567c(u8 *p);
void func_020460c4(u8 *p, u32 a, u32 b, u32 *c, u32 d, s16 e);

void func_02045f58(u8 *param_1)
{
    u32 r;
    *(u16 *)(param_1 + 0x12e) = 0x8000;
    r = func_0203567c(param_1);
    func_020460c4(param_1, 0, 13, (u32 *)(param_1 + 0x324), r, 742);
}
