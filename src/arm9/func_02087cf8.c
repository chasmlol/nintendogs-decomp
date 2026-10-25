#include "ctx.h"

extern u32 data_02156028;
extern u32 func_02087dc0(u32, u32);
extern u32 func_02080b08(u32);
extern void func_02080b1c(u32);

u32 *func_02087cf8(u32 param_1, u32 param_2)
{
    u32 uVar1;
    u32 r;
    u32 *puVar2;
    uVar1 = func_02087dc0(param_1, param_2);
    r = func_02080b08(uVar1);
    for (puVar2 = (u32 *)data_02156028; puVar2 != NULL && *puVar2 != uVar1; puVar2 = (u32 *)puVar2[1]) {
    }
    func_02080b1c(r);
    return puVar2;
}
