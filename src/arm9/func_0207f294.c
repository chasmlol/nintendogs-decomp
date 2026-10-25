#include "ctx.h"
extern u8 data_02155cf8[];
extern u32 func_02080b08(u32);
extern void func_02080b1c(u32);
u32 func_0207f294(u32 param_1)
{
    u32 uVar1;
    u32 r;
    r = func_02080b08(param_1);
    uVar1 = *(u32 *)(data_02155cf8 + 0x10);
    *(u32 *)(data_02155cf8 + 0x10) = param_1;
    func_02080b1c(r);
    return uVar1;
}
