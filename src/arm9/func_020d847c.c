#include "ctx.h"

u32 func_020c8db4(s32 x);
void func_020cf9c8(void *p, u32 a, u32 b, u32 c);
void func_020cf9bc(void *p);
void func_020be1d8(u32 x);

void func_020d847c(u8 *param_1)
{
    u32 iVar1 = func_020c8db4(-1);

    func_020cf9c8(param_1, 4, iVar1, 0);
    func_020cf9bc(param_1);
    func_020be1d8(1);
    *(u32 *)(param_1 + 0x6c) = 1;
}
