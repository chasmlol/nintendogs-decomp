#include "ctx.h"

extern u32 data_027c0360;
extern s16 data_02126868[];
extern void func_01ff8020(s32 *buf, s32 a, s32 b);
extern void func_01ff810c(s32 *buf, u32 *x, u32 *y);

void func_020e7140(u32 param_1, u32 *param_2)
{
    s32 buf[12];
    s32 k;
    s32 iVar1;
    u8 *p;

    p = *(u8 **)&data_027c0360;
    iVar1 = (s32)*(u16 *)(*(u8 **)(p + 0x214) + 0xc) >> 4;
    k = iVar1 * 2;
    func_01ff8020(buf, data_02126868[k], data_02126868[k + 1]);
    func_01ff810c(buf, param_2, param_2);
}
