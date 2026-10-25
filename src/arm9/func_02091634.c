#include "ctx.h"
u8 *func_02091634(u8 *o, u32 key)
{
    s32 i;
    u8 *res;
    u8 *p;
    s32 n;
    res = NULL;
    n = *(s16 *)(o + 24);
    i = 0;
    if (n > 0) {
        p = o + 604;
        do {
            if (*(u32 *)p == key) {
                res = p;
                break;
            }
            i = i + 1;
            p = p + 8;
        } while (i < n);
    }
    if (res == NULL) {
        *(u32 *)(o + 604 + n * 8) = key;
        res = o + 604 + n * 8;
        *(u16 *)(res + 4) = 0;
        *(s16 *)(o + 24) = *(s16 *)(o + 24) + 1;
    }
    return res;
}
