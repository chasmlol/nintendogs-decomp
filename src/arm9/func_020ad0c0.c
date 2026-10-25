#include "ctx.h"

extern u8 *data_02159424;

BOOL func_020ad0c0(void)
{
    BOOL r = 0;
    u32 b;
    u8 *s = *(u8 **)(data_02159424 + 4);
    if (*(s16 *)s == 6) {
        b = (*(u16 *)(s + 4) == 0x803) ? 1 : r;
    } else {
        b = r;
    }
    if (b != 0) {
        r = 1;
    }
    return r;
}
