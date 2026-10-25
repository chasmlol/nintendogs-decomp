#include "ctx.h"

extern u8 *data_02152260;

u32 func_02071778(u32 a)
{
    u8 *x = *(u8 **)(data_02152260 + 0x80);
    u32 n = *(u32 *)(x + 8);
    if (a >= n) {
        return 0;
    }
    return *(u32 *)(x + a * 16 + 0x14);
}
