#include "ctx.h"

s32 func_0207d32c(u8 *p)
{
    u8 *n = *(u8 **)(p + 0x24);
    s32 s = 0;
    if (n == NULL) {
        return 0;
    }
    do {
        s += *(s32 *)(n + 4);
        n = *(u8 **)(n + 0xc);
    } while (n != NULL);
    return s;
}
