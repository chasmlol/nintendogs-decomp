#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    asm { swpb old, v, [p] }
    return old;
}

u8 func_02037dac(u8 *param_1, s32 param_2)
{
    s32 v4 = *(s32 *)(param_1 + 0x254);
    s32 lim;
    s32 nc;
    s32 cur;
    s32 d;
    if (v4 == 0) {
        cur = *(s32 *)(param_1 + 0x818);
        asm { mvn lim, #272 }
        nc = -cur;
        if (nc < lim) {
            *(s32 *)(param_1 + 0x818) = cur - 273u;
        } else if (nc > 273) {
            *(s32 *)(param_1 + 0x818) = cur + 273u;
        } else {
            *(s32 *)(param_1 + 0x818) = 0;
        }
    } else {
        d = param_2 - *(s32 *)(param_1 + 0x818);
        cur = *(s32 *)(param_1 + 0x818);
        if (d < -v4 * 3) {
            *(s32 *)(param_1 + 0x818) = cur - v4 * 3;
        } else if (d > v4 * 3) {
            *(s32 *)(param_1 + 0x818) = cur + v4 * 3;
        } else {
            *(s32 *)(param_1 + 0x818) = param_2;
        }
    }
    {
        u32 one = 1;
        return SwapByte(one, param_1 + 156);
    }
}
