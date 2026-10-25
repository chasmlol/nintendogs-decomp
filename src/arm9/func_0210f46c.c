#include "ctx.h"

extern u8 *data_0215be48;

void func_0210f46c(void)
{
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb4) != 11) {
        goto L30;
    }
    if (*(u16 *)(p + 0x11160) == 0) {
        *(s32 *)(p + 0x4868) = 1;
    }
    return;
L30:
    {
        u8 *q = p + 0x4000;
        *(s32 *)(q + 0x868) = 1;
    }
}
