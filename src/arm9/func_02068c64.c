#include "ctx.h"

extern u32 data_02150e30;
extern void func_020699dc(u32 v);

u32 func_02068c64(u16 *param_1)
{
    u16 uVar1 = *param_1;
    *param_1 = 0;
    *(u16 *)&data_02150e30 = *(u16 *)&data_02150e30 | uVar1;
    func_020699dc((u32)uVar1);
    return (u32)uVar1;
}
