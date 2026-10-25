#include "ctx.h"

extern void func_020b0994(u8 *p);

void func_020b0940(u8 *param_1)
{
    if (*(u16 *)(param_1 + 4) == 0) {
        goto zero;
    }
    if (*(u16 *)(param_1 + 4) == 0x200) {
        goto call;
    }
    return;
zero:
    *(u16 *)(param_1 + 4) = 0x200;
    *(u16 *)(param_1 + 6) = 0;
    return;
call:
    func_020b0994(param_1);
}
