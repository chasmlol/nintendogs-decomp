#include "ctx.h"

BOOL func_020bd824(u8 *param_1, u16 param_2, u16 param_3, u16 param_4)
{
    if (*(s16 *)(param_1 + 0x8a) == *(s16 *)(param_1 + 0x90)) {
        *(u16 *)(param_1 + 0x8a) = param_2;
        *(u16 *)(param_1 + 0x8c) = param_3;
        *(u16 *)(param_1 + 0x8e) = param_4;
        return TRUE;
    }
    return FALSE;
}
