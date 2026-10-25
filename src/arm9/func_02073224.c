#include "ctx.h"

extern void func_02070eb4(u8 *);

void func_02073224(u8 *param_1)
{
    if (*(s32 *)(param_1 + 0x11c) == 0) {
        return;
    }
    *(s32 *)(param_1 + 0x11c) = *(s32 *)(param_1 + 0x11c) - 1;
    if (*(s32 *)(param_1 + 0x11c) == 0) {
        func_02070eb4(param_1);
        return;
    }
}
