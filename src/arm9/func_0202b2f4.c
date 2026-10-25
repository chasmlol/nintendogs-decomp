#include "ctx.h"

u32 func_0202b2f4(u8 *param_1)
{
    s32 v = *(s16 *)(param_1 + 0xea);
    if (v >= 0x48f && v <= 0x4a3) {
        return 0;
    }
    if (v >= 0x4b9 && v <= 0x4bc) {
        return 0;
    }
    if (v >= 0x4bd && v <= 0x4c2) {
        return 0;
    }
    if (v >= 0x4c4 && v <= 0x4c6) {
        return 0;
    }
    if (v == 0x48c && *(u16 *)(param_1 + 252) < 120) {
        return 0;
    }
    return 1;
}
