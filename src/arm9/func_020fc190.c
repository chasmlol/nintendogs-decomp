#include "ctx.h"

void func_020fc190(u16 *p, u16 n, u32 x)
{
    u32 inc = (x << 28) >> 16;
    if (n == 0) {
        goto done;
    }
    do {
        *p = (u16)(*p + inc);
        p = p + 1;
        n--;
    } while (n != 0);
done:
    return;
}
