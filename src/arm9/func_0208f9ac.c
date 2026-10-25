#include "ctx.h"

extern u32 func_0208e528(s32 *a, s32 b, s32 c);

void func_0208f9ac(u8 *param_1, s32 *param_2, s32 param_3)
{
    u32 r;
    *(s16 *)(param_1 + 0x72) = (s16)param_3;
    r = func_0208e528(param_2, param_3, *(s32 *)(param_1 + 0x1c) + 4);
    *(u32 *)(param_1 + 0x80) = r;
}
