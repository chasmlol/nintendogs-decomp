#include "ctx.h"

u32 func_0202a8cc(u8 *param_1, u8 *param_2)
{
    s16 r3;
    if (param_2 == 0) {
        return 0;
    }
    r3 = *(s16 *)(param_2 + 150);
    if (r3 == 0) {
        if (*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 30) > 0x708) {
            *(s16 *)(param_1 + 234) = 0x41d;
            return 1;
        }
    }
    if (r3 == 1) {
        if (*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 32) > 900) {
            *(s16 *)(param_1 + 234) = 0x41d;
            return 1;
        }
    }
    *(s16 *)(param_1 + 234) = 0x41e;
    return 1;
}
