#include "ctx.h"

extern u8 *data_0215be48;

void func_021129b4(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u8 *e;
    u8 *q;
    s32 off;
    u16 uVar1;
    uVar1 = 0xfff;
    q = *(u8 **)(data_0215be48 + param_1 * 660 + 0x1df4);
    e = q + 8;
    off = param_2 * 8;
    *(s16 *)(e + off) = (*(s16 *)(e + off) & -4096) | (((s16)param_3) & uVar1);
    e = e + param_2 * 8;
    *(s16 *)(e + 2) = (*(s16 *)(e + 2) & -4096) | (((s16)param_4) & uVar1);
}
