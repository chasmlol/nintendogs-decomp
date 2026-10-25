#include "ctx.h"
extern u8 *data_02159468;
BOOL func_02027000(u8 *param_1)
{
    s32 ix = (s16)(*(s16 *)(param_1 + 0x13e) - 3);
    s32 iv;
    u8 *d;
    if (ix < 0) {
        goto zero;
    }
    d = data_02159468;
    if (*(s16 *)(d + 0x20) > ix) {
        goto load;
    }
zero:
    iv = 0;
    goto join;
load:
    iv = *(s32 *)(d + ix * 4 + 4);
join:
    if (iv != 0) {
        return TRUE;
    }
    return *(s32 *)(param_1 + 0x94c) != 0;
}
