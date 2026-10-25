#include "ctx.h"

void func_020b3a24(u8 *p);

void func_020b39d0(u8 *param_1)
{
    u16 v = *(u16 *)(param_1 + 4);

    if (v == 0) {
        goto zero;
    }
    if (v == 0xb00) {
        goto tail;
    }
    return;
zero:
    *(u16 *)(param_1 + 4) = 0xb00;
    *(u16 *)(param_1 + 6) = 0;
    return;
tail:
    func_020b3a24(param_1);
}
