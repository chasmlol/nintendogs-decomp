#include "ctx.h"

extern void func_02112dc4(u32 a, u16 b, u16 c);
extern void func_02112798(u32 a, u16 b, u32 c);
extern void func_02112978(u32 a, u16 b, s16 c, s32 d);

void func_020fbf30(u8 *param_1, u32 param_2)
{
    s32 i;
    u32 div;
    s16 off;
    u32 q;
    u16 digit;
    u32 vis;

    off = 0;
    div = 1;
    for (i = 0; i < *(u16 *)(param_1 + 26); i++) {
        q = param_2 / div;
        digit = q % 10;
        vis = 1;
        if (*(u32 *)(param_1 + 36) != 0 && i > 0 && q == 0) {
            off = off - *(u16 *)(param_1 + 28);
            vis = 0;
        }
        func_02112dc4(*(u32 *)param_1, *(u16 *)(param_1 + 24) + i, *(u16 *)(param_1 + 4 + digit * 2));
        func_02112798(*(u32 *)param_1, *(u16 *)(param_1 + 24) + i, vis);
        div *= 10;
    }
    if (*(u32 *)(param_1 + 36) == 0) {
        return;
    }
    for (i = 0; i < *(u16 *)(param_1 + 26); i++) {
        func_02112978(*(u32 *)param_1, *(u16 *)(param_1 + 24) + i, off, 0);
    }
}
