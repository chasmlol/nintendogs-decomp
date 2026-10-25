#include "ctx.h"

void func_020bd7f8(u8 *param_1)
{
    if (*(s16 *)(param_1 + 0x8a) == *(s16 *)(param_1 + 0x90)) {
        *(s16 *)(param_1 + 0x8a) = 0;
        *(s16 *)(param_1 + 0x8c) = -1;
        *(s16 *)(param_1 + 0x8e) = -1;
    }
    *(s16 *)(param_1 + 0x9e) = 0;
}
