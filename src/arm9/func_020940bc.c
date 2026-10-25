#include "ctx.h"

extern u32 data_02159034;
extern void func_0206c7d4(u32 dst, u8 *src, u32 n);

void func_020940bc(u32 param_1)
{
    u8 *p = (u8 *)data_02159034;
    u8 *iVar1 = *(u8 **)(p + 0x1000 + 0x41c);
    func_0206c7d4(param_1, iVar1 + 0x60, 0x54);
    *(u16 *)(iVar1 + 0x6ae) = *(u16 *)(iVar1 + 0x6ae) | 1;
}
