#include "ctx.h"

extern u8 *data_0215be48;

void func_021233d8(void)
{
    u8 *p = data_0215be48;
    if (*(u16 *)(p + 0x11160) == 0) {
        *(s32 *)(p + 0x4868) = 1;
    }
}
