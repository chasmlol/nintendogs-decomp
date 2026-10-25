#include "ctx.h"
u32 func_0205ef00(u16 *a, u32 *b, s32 c)
{
    u32 t;
    if (b == NULL) {
        return 0;
    }
    if (c == 0) {
        return 0xffffffff;
    }
    if (a != NULL) {
        *a = (u16)(*b & 0xff);
    }
    t = *b & 0xff;
    if (t == 0) {
        return 0;
    }
    return 1;
}
