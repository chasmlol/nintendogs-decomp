#include "ctx.h"

extern u8 data_02159074[];
extern u32 data_0215906c;
extern u32 data_02159070;

u32 func_0209aab0(void)
{
    u32 r;
    if (*(u32 *)(data_02159074 + 0x30) != 0) {
        r = data_0215906c;
    } else {
        r = data_02159070;
    }
    return r;
}
