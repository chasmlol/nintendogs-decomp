#include "ctx.h"

extern u8 *data_02159468;

u32 func_020364cc(u8 *param_1)
{
    s32 i = (s16)(*(s16 *)(param_1 + 0x13e) - 3);
    u8 *t;
    if (i < 0) {
        goto zero;
    }
    t = data_02159468;
    if (*(s16 *)(t + 32) > i) {
        goto body;
    }
zero:
    return 0;
body:
    return *(u32 *)(t + i * 4 + 4);
}
