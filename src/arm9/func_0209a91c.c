#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02159074[];

u32 func_0209a91c(void)
{
    u8 *p = data_02159074;
    u32 v = *(u32 *)(p + 0x38);
    u32 r;
    if (v != 0) {
        r = 0;
    } else {
        r = 1;
        *(u32 *)(p + 0x38) = r;
    }
    return r;
}
