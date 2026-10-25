#include "ctx.h"

BOOL func_0203579c(u8 *param_1, s32 param_2)
{
    if (*(s16 *)(param_1 + 0x162) == *(s16 *)(param_1 + 0x152) &&
        *(s16 *)(param_1 + 0x14e) == param_2) {
        return TRUE;
    }
    return FALSE;
}
