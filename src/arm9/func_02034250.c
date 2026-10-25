#include "ctx.h"
#pragma opt_propagation off

extern s32 data_0203430c;

u32 func_02034250(u8 *param_1)
{
    s32 x;
    s32 k;
    x = *(s16 *)(param_1 + 234);
    k = 0x3e3;
    switch (x - k) {
    case 0:
    case 1:
        if (*(s16 *)(param_1 + 354) == *(s16 *)(param_1 + 338)) {
            if (*(s16 *)(param_1 + 334) >= 15) {
                return 1;
            }
        }
        return 0;
    case 2:
    case 3:
        if (*(s16 *)(param_1 + 354) == *(s16 *)(param_1 + 338)) {
            if (*(s16 *)(param_1 + 334) >= 1) {
                return 1;
            }
        }
        return 0;
    case 4:
    case 5:
        if (*(s16 *)(param_1 + 354) == *(s16 *)(param_1 + 338)) {
            if (*(s16 *)(param_1 + 334) >= 1) {
                return 1;
            }
        }
        return 0;
    default:
        return 0;
    }
}
