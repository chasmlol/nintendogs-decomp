#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_0210e968(s32 a, u8 *b);
extern s32 func_02073828(s32 a, u32 *b);

void func_020fc610(s32 param_1, u8 *param_2, s32 param_3)
{
    u32 *puVar2;
    s32 iVar1;
    u32 local_10;

    puVar2 = (u32 *)(data_0215be48 + 0x1dec);
    puVar2 = (u32 *)((u8 *)puVar2 + 0x528);
    puVar2 = (u32 *)((u8 *)puVar2 + 0x24);
    iVar1 = func_0210e968(param_1, param_2);
    iVar1 = func_02073828(iVar1, &local_10);
    if (iVar1 != 0) {
        (puVar2 + param_3)[4] = local_10 + 0xc;
    } else {
        (puVar2 + param_3)[4] = 0;
    }
    *puVar2 = 1;
}
