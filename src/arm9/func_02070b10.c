#include "ctx.h"

void func_02070b10(u8 **p, u8 v)
{
    if (*p != NULL) {
        (*p)[0x40] = v;
    }
}
