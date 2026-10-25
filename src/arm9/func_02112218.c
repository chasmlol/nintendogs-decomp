#include "ctx.h"
extern u8 *data_0215be48;
void func_02112218(void)
{
    u8 *q = data_0215be48;
    s32 i = 0;
    q = q + 0x283c;
    q = (u8 *)((u32)q + 0x1000);
    do {
        *(u32 *)q = 0;
        *(u16 *)(q + 6) = 0;
        *(u16 *)(q + 8) = 0;
        *(u16 *)(q + 10) = 0;
        *(u16 *)(q + 12) = 0;
        i = i + 1;
        *(u16 *)(q + 4) = 0;
        q = q + 16;
    } while (i < 128);
}
