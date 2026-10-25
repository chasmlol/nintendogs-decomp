#include "ctx.h"

extern u8 *data_0215be48;

void func_02115114(s32 *param_1)
{
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb4) == 4) {
        goto setflag;
    }
    if (*(s32 *)(p + 0xb4) != 38) {
        goto other;
    }
setflag:
    *(s32 *)(p + 0x4000 + 0x868) = 1;
    return;
other:
    if (*param_1 < 16) {
        *param_1 = *param_1 + 1;
    } else {
        *(s32 *)(p + 0x4000 + 0x868) = 1;
    }
}
