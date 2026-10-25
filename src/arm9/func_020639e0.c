#pragma avoid_byte all
#include "ctx.h"

typedef struct decimal {
    char sign;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;

int func_020639e0(const decimal *d, int digits)
{
    const unsigned char *i = d->sig.text + digits;
    const unsigned char *e;

    if (*i > 5)
        return 1;
    if (*i < 5)
        return -1;
    e = d->sig.text + d->sig.length;
    for (i++; i < e; i++)
        if (*i != 0)
            return 1;
    if (d->sig.text[digits - 1] & 1)
        return 1;
    return -1;
}
