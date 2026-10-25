#include "ctx.h"

extern void func_021125a0(u32 a, u32 b, u32 c, u32 d);

void func_02117ba4(u8 *param_1, u32 param_2, u32 param_3)
{
    func_021125a0(*(u32 *)param_1, *(u32 *)(param_1 + 4), param_2, param_3);
    if (*(u16 *)(param_1 + 30) != 0) {
        *(u16 *)(param_1 + 30) = *(u16 *)(param_1 + 30) - 1;
        return;
    }
    if (*(u32 *)(param_1 + 0x14) == 2) goto A;
    if (*(u32 *)(param_1 + 0x14) == 4) goto B;
    return;
A:
    *(u16 *)(param_1 + 28) = *(u16 *)(param_1 + 28) + 1;
    if (*(u16 *)(param_1 + 28) > *(u16 *)(param_1 + 14)) {
        *(u32 *)(param_1 + 0x14) = 3;
        *(u16 *)(param_1 + 28) = *(u16 *)(param_1 + 14);
    }
    return;
B:
    *(u16 *)(param_1 + 28) = *(u16 *)(param_1 + 28) - 1;
    if (*(u16 *)(param_1 + 28) == 0) {
        *(u32 *)(param_1 + 0x14) = 1;
        *(u16 *)(param_1 + 28) = 0;
    }
}
