#include "ctx.h"
extern u8 *data_02159034;
u32 func_020961ac(void)
{
    u32 r = 0;
    u8 *p = data_02159034;
    u8 *q = *(u8 **)(p + 0x1000 + 0x41c);
    u32 v = *(u32 *)(q + 0x6a8);
    if (v == 0x444f473f) {
        r = 1;
    }
    return r;
}
