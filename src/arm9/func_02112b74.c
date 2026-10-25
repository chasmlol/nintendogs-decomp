#include "ctx.h"
extern u8 *data_0215be48;
extern u8 *func_02085ca4(u32 a, u32 b);
u8 func_02112b74(s32 param_1, s32 param_2)
{
    u8 *puVar1;
    u8 *base = data_0215be48 + 0x1dec;
    s32 iVar2;
    iVar2 = (s32)base + param_1 * 660;
    puVar1 = func_02085ca4(*(u32 *)(iVar2 + 0xc), *(u32 *)(*(u32 *)(iVar2 + 8) + param_2 * 8 + 0xc));
    return *puVar1;
}
