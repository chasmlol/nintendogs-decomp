#include "ctx.h"

extern u32 data_0215bf9c;

BOOL func_0210a5c0(u32 x)
{
    u32 r = 0;
    if (**(u32 **)&data_0215bf9c == x) {
        r = 1;
    }
    return r;
}
