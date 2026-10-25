#include "ctx.h"
extern u16 data_0213b5bc[];
BOOL func_02035a0c(u8 *param_1)
{
    s32 idx = *(s8 *)(param_1 + 141);
    u8 *s = *(u8 **)(param_1 + 0x9e8);
    s16 f = *(s16 *)(s + 36);
    return f > (s32)(data_0213b5bc[idx] + 240);
}
