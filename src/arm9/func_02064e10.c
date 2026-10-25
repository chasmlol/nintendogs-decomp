#include "ctx.h"

u32 func_02064e10(u8 *param_1)
{
    if (*(u16 *)(param_1 + 4) > 0x70) {
        return 0;
    }
    if (*(u16 *)(param_1 + 0x18) < 10) {
        goto Z;
    }
    if (*(u16 *)(param_1 + 0x18) <= 1000) {
        goto M;
    }
Z:
    return 0;
M:
    if (*(u16 *)(param_1 + 0x32) < 1) {
        goto Y;
    }
    if (*(u16 *)(param_1 + 0x32) <= 14) {
        goto R;
    }
Y:
    return 0;
R:
    return 1;
}
