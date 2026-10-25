#include "ctx.h"
u32 *func_02085a28(u32 *h, u32 *n)
{
    u32 next = n[0];
    if (next == 0) {
        if (h[0] == (u32)n) {
            h[0] = 0;
        } else {
            ((u32 *)n[1])[0] = 0;
        }
    } else if (h[0] == (u32)n) {
        h[0] = next;
        ((u32 *)h[0])[1] = 0;
    } else {
        ((u32 *)next)[1] = n[1];
        ((u32 *)n[1])[0] = n[0];
    }
    h[1] = h[1] - 1;
    return n;
}
