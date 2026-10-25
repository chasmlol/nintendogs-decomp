#include "ctx.h"

extern void func_020b3b78(u8 *p);

void func_020b3b24(u8 *param_1)
{
    u32 v;
    v = *(u16 *)(param_1 + 4);
    if (v == 0) {
        goto zero;
    }
    if (v == 0xc00) {
        goto call;
    }
    return;
zero:
    *(u16 *)(param_1 + 4) = 0xc00;
    *(u16 *)(param_1 + 6) = 0;
    return;
call:
    func_020b3b78(param_1);
}
