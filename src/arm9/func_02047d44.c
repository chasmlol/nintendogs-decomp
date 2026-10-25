#include "ctx.h"

extern u32 data_0214f464;
extern void func_02048680(u32, u32, u32);

void func_02047d44(u32 param_1)
{
    u32 *st = (u32 *)data_0214f464;
    u32 uVar1;
    u32 t;
    u16 q;
    uVar1 = *st * 0x10dcd + 1;
    *st = uVar1;
    t = (u32)((u16)uVar1) * 50;
    q = (u16)(t >> 16);
    func_02048680(param_1, 4, q == 0);
}
