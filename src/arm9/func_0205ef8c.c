#include "ctx.h"

u8 *func_0205ef8c(u8 *p, u32 c, s32 n)
{
    u32 m;
    u32 v;
    m = c & 0xff;
    if (n == 0) {
        goto done;
    }
    do {
        v = *(u32 *)p & 0xff;
        p = p + 1;
        if (v == m) {
            return p - 1;
        }
        n--;
    } while (n != 0);
done:
    return 0;
}
