#include "ctx.h"
extern u8 *data_0215be48;
void func_0211c374(void)
{
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb4) != 23) {
        goto other;
    }
    if (*(u16 *)(p + 0x11160) == 0) {
        *(u32 *)(p + 0x4000 + 0x868) = 1;
    }
    return;
other:
    *(u32 *)(p + 0x4000 + 0x868) = 1;
}
