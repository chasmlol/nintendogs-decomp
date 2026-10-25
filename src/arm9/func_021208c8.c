#include "ctx.h"

extern u8 *data_0215be48;

void func_021208c8(void)
{
    u8 *s = data_0215be48;
    if (*(u16 *)(s + 0x11160) == 0) {
        *(u32 *)(s + 0x4868) = 1;
    }
}
