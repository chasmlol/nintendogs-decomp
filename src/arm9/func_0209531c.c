#include "ctx.h"
extern u8 *data_02159034;
s32 func_0209531c(void)
{
    s32 r = 0;
    s16 i = 0;
    u8 *p = data_02159034;
    do {
        if (*(u16 *)(*(u8 **)(p + 0x1000 + 0x44c) + 4) != 0xffff) {
            r = 1;
            break;
        }
        i = i + 1;
        p = p + 24;
    } while (i < 3);
    return r;
}
