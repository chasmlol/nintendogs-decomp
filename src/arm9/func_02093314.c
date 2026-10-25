#include "ctx.h"

extern u8 *data_02159034;

s8 *func_02093314(void)
{
    s8 *res;
    s16 i;
    s8 *e;
    u8 *base;
    res = 0;
    i = 0;
    base = *(u8 **)(data_02159034 + 0x141c);
    e = (s8 *)(base + 0x568);
    do {
        if (e[14] != 0 && e[15] >= 0) {
            res = e;
            break;
        }
        i = (s16)(i + 1);
        e += 16;
    } while (i < 20);
    return res;
}
