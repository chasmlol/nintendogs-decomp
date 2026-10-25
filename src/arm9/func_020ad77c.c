#include "ctx.h"

extern s32 func_02003a10(void);

s32 func_020ad77c(u8 *param_1)
{
    s32 res = 0;
    s32 r = func_02003a10();
    if (r != 0) {
        res = 1;
        *(s16 *)(param_1 + 46) = (s16)res;
        *(s16 *)(param_1 + 48) = 0;
    }
    return res;
}
