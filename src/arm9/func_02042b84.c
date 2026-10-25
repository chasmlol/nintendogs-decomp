#include "ctx.h"

extern u8 *data_0214f464;

u32 func_02042b84(s32 param_1)
{
    u8 *g = *(u8 **)&data_0214f464;
    u8 *e;
    if (param_1 != *(s8 *)(g + 9)) {
        goto zero;
    }
    if (param_1 < 0 || param_1 >= 3) {
        e = NULL;
    } else {
        e = *(u8 **)(g + param_1 * 4 + 0x54);
    }
    if (e == NULL) {
        goto zero;
    }
    *(s32 *)(g + 0x40) = *(s16 *)(*(u8 **)(e + 0x9e8) + 136) * 10 + 300;
    return 1;
zero:
    return 0;
}
