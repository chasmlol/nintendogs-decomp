#include "ctx.h"

u32 func_0205e270(s32 a, u32 b);
void func_02112a50(u32 p, u32 idx, u32 x, u32 y);

void func_020fc114(u32 param_1, u8 *param_2, u32 param_3, u32 param_4)
{
    u32 r6;
    u32 r5;
    u32 r4;
    u32 r0;

    r5 = *(u16 *)(param_2 + 4);
    if (r5 == 0xffff) {
        return;
    }
    do {
        r6 = param_4 - param_3;
        r4 = func_0205e270(*(s32 *)(param_2 + 8) * r6, param_4);
        r0 = func_0205e270(*(s32 *)(param_2 + 0xc) * r6, param_4);
        func_02112a50(param_1, r5, r4, r0);
        param_2 += 16;
        r5 = *(u16 *)(param_2 + 4);
    } while (r5 != 0xffff);
}
