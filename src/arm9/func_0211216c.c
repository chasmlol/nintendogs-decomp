#include "ctx.h"
extern u8 *data_0215be48;
void func_0211216c(s32 idx, u16 v)
{
    u8 *p = data_0215be48;
    s32 i = 0;
    p = p + 0x283c + (idx << 11);
    do {
        i++;
        *(u16 *)(p + 4) = v;
        p += 16;
    } while (i < 128);
}
