#include "ctx.h"

s32 func_02034f04(u8 *param_1)
{
    u16 a = (u16)(s16)(*(s16 *)(param_1 + 0xee) - 1068);
    if (a <= 1) {
        u16 b = (u16)(s16)(*(s16 *)(param_1 + 0xea) - 1068);
        if (b > 1) {
            if (*(u16 *)(param_1 + 252) == 1) {
                return 1;
            }
        }
    }
    return 0;
}
