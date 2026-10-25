#include "ctx.h"

extern u8 data_02155cf8[];

u32 func_0207f480(void)
{
    u32 p = *(u32 *)(data_02155cf8 + 0xc);
    goto check;
loop:
    p = *(u32 *)(p + 0x68);
check:
    if (p == 0) {
        return p;
    }
    if (*(s32 *)(p + 0x64) == 1) {
        return p;
    }
    goto loop;
}
