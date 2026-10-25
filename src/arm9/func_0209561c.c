#include "ctx.h"
extern u8 *data_02159034;
s32 func_0209561c(void)
{
    s16 cnt = 0;
    s16 i = 0;
    u8 *p = data_02159034;
    do {
        u8 *q = *(u8 **)(p + 0x1000 + 0x44c);
        if (*(u16 *)(q + 4) != 0xffff) {
            cnt = cnt + 1;
        }
        p = p + 24;
        i = i + 1;
    } while (i < 3);
    return cnt;
}
