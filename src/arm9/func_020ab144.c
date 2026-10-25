#include "ctx.h"

extern u8 *data_02159444;

u32 func_020ab144(void)
{
    u8 *p = data_02159444;
    u32 r = 0;
    if (*(s16 *)(p + 0x7c) != -1) {
        return 1;
    }
    if (*(s16 *)(p + 0x7e) != -1) {
        r = 2;
    }
    return r;
}
