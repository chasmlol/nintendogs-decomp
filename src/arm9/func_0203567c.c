#include "ctx.h"

u32 func_0203567c(u8 *param_1)
{
    u8 *o;
    if (*(s16 *)(param_1 + 256 + 98) != *(s16 *)(param_1 + 256 + 82)) {
        goto zero;
    }
    o = *(u8 **)(param_1 + 0x74);
    if (o == 0) {
        goto zero;
    }
    if (*(s8 *)(param_1 + 190) <= 0) {
        goto low;
    }
    if (*(s16 *)(param_1 + 256 + 78) < *(s16 *)(o + 24) - 1) {
        goto zero;
    }
    return 1;
low:
    if (*(s16 *)(param_1 + 256 + 78) <= 1) {
        return 1;
    }
zero:
    return 0;
}
