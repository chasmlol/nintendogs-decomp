#include "ctx.h"
extern u32 data_0213ed58[];
u32 func_0208d33c(u8 *param_1, s16 param_2)
{
    u8 *a = param_1 + (s32)param_2 * 12 + 256;
    s16 i = *(s16 *)(a + 170);
    u8 *b = (param_1 + (s32)i * 16) + 256;
    s16 j = *(s16 *)(b + 104);
    return data_0213ed58[j];
}
