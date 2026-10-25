#include "ctx.h"

u32 func_02038380(u8 *param_1)
{
    s32 v = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    if (v < 0xccd) {
        return 0;
    }
    return (v <= 0x119a) ? 1 : 2;
}
