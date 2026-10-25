#include "ctx.h"
extern u8 data_0215be40[];
extern u32 func_020038b8(u32 *p, u32 a);
extern u16 *func_0208dbc8(u32 *p);
extern void func_020f15ec(void);
void func_020f1d84(u32 *param_1, u32 param_2)
{
    u8 *piVar1;
    u32 uVar2;
    u32 uVar3;
    u32 iVar4;
    u16 *puVar5;
    iVar4 = func_020038b8(param_1, 0x28);
    *(u32 *)data_0215be40 = iVar4;
    puVar5 = func_0208dbc8(param_1);
    uVar2 = (u32)func_020f15ec;
    piVar1 = *(u8 **)data_0215be40;
    *(u16 **)(*(u8 **)data_0215be40 + 0x1c) = puVar5;

    *(u32 *)(*(u8 **)(*(u8 **)data_0215be40 + 0x1c) + 0x2c) = uVar2;
    *(u32 *)*(u8 **)data_0215be40 = 0;
    *(u32 *)(*(u8 **)data_0215be40 + 4) = 1;
    *(u16 *)(*(u8 **)data_0215be40 + 0x10) = 0xffff;
    *(u32 *)(*(u8 **)data_0215be40 + 0x14) = 0;
    *(u32 *)(*(u8 **)data_0215be40 + 0x18) = 0;
    *(u32 *)(*(u8 **)data_0215be40 + 0x20) = param_2;
}
