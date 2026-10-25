#include "ctx.h"

extern u8 data_0213b578[];

u32 func_0203560c(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 *q;
    s32 iv;
    s32 v;
    q = param_1 + param_2 * 2;
    q = q + 256;
    iv = *(s16 *)(data_0213b578 + param_2 * 4) * 36 + *(s32 *)(param_1 + 0x74);
    if (*(s16 *)(q + 98) == *(s16 *)(q + 82) && iv != 0) {
        v = *(s32 *)(iv + 0x20) >> 12;
        if (v >= param_3) {
            return 1;
        }
    }
    return 0;
}
