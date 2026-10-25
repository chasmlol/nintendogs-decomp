#include "ctx.h"

s32 func_0202a898(u8 *param_1)
{
    u8 *q = *(u8 **)(param_1 + 0x9e8);
    if (*(s16 *)(q + 30) > 0x708) {
        *(u16 *)(param_1 + 234) = 0x420;
        return 1;
    }
    *(u16 *)(param_1 + 234) = 0x421;
    return 1;
}
