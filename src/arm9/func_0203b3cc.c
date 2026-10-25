#include "ctx.h"

BOOL func_0203b3cc(u8 *param_1)
{
    u8 *q = *(u8 **)(param_1 + 0x9e8);
    if (*(s16 *)(q + 30) >= 10000) {
        return TRUE;
    }
    return *(s16 *)(q + 32) >= 10000;
}
