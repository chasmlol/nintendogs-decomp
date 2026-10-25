#include "ctx.h"

u32 func_0203567c(u8 *a);
void func_020460c4(u8 *a, u32 b, u32 c, u8 *d, u32 e, u32 f);

void func_02045f0c(u8 *param_1)
{
    u32 v;
    *(u16 *)(param_1 + 0x12e) = 0x8000;
    v = func_0203567c(param_1);
    func_020460c4(param_1, 1, 13, param_1 + 0x330, v, 0x2e7);
}
