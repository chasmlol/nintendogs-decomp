#include "ctx.h"

extern u8 *data_0215942c;
extern void func_020a85c4(u16 *a, int b);

void func_020a7c5c(s16 param_1)
{
    u16 *puVar4;
    u8 *base;
    s32 idx;
    s16 sVar1;
    s32 t;
    s32 idx2;
    u8 *base2;

    puVar4 = (u16 *)data_0215942c;
    func_020a85c4(puVar4, 0xc);
    puVar4[2] = 4;
    puVar4[7] = param_1;
    sVar1 = puVar4[7];
    idx = sVar1 * 0x14;
    base = data_0215942c + 0x20;
    *(u16 *)(base + idx) = *(u16 *)(base + idx) | 1;
    *(s16 *)(base + idx + 2) = sVar1;
    t = (s16)puVar4[7] + 1;
    sVar1 = (s16)(t % 3);
    idx2 = sVar1 * 0x14;
    base2 = data_0215942c + 0x20;
    *(u16 *)(base2 + idx2) = *(u16 *)(base2 + idx2) | 1;
    *(u16 *)(base2 + idx2) = *(u16 *)(base2 + idx2) | 2;
    puVar4[0xe] = sVar1;
}
