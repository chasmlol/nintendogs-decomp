#include "ctx.h"

extern u8 *data_02152260;
extern s32 func_02087e24(u32, u32, u32);
extern u32 func_02087e90(u32, u32, u32);

u32 func_020717a0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 p2;
    u32 p3;
    u8 *g;
    u32 *t;
    u32 *e;
    u32 r0;
    s32 iVar1;
    p2 = param_2;
    p3 = param_3;
    g = data_02152260;
    t = *(u32 **)(g + 0x80);
    if (param_1 >= t[2]) {
        return 0xffffffffu;
    }
    e = (u32 *)((u8 *)t + 12 + param_1 * 16);
    r0 = e[1] - param_4;
    if (p3 > r0) {
        p3 = r0;
    }
    iVar1 = func_02087e24((u32)(g + 52), e[0] + param_4, 0);
    if (iVar1 == 0) {
        return 0xffffffffu;
    }
    return func_02087e90((u32)g + 52, p2, p3);
}
