#include "ctx.h"

u32 func_0203567c(u8 *p);
void func_020460c4(u8 *p, u32 a, u32 b, u8 *c, u32 d, u32 e);

void func_02045fa4(u8 *param_1)
{
    s32 iVar1;

    *(u16 *)(param_1 + 0x12e) = 0x8000;
    iVar1 = func_0203567c(param_1);
    func_020460c4(param_1, 1, 13, param_1 + 0x318, iVar1, 0x2e7);
}
