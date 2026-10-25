#include "ctx.h"

extern u32 data_0214f464;

u8 *func_02036578(u8 *param_1)
{
    u8 *q = param_1 + 256;
    s32 i = *(s16 *)(q + 62);
    u8 *e;
    if (i < 0 || i >= 3) {
        e = NULL;
    } else {
        e = *(u8 **)(*(u8 **)&data_0214f464 + i * 4 + 0x54);
    }
    if (e != NULL && (e[0xb5] & 2) == 0) {
        return e;
    }
    return NULL;
}
