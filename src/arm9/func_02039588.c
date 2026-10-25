#include "ctx.h"

u32 func_02039588(u8 *param_1)
{
    s16 v = *(s16 *)(param_1 + 0x152);
    if (v >= 20 && v <= 22) {
        *(u16 *)(param_1 + 0xea) = 0x260;
        return 1;
    }
    return 0;
}
