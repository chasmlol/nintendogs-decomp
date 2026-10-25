#include "ctx.h"

s32 func_02006fd0(s32 x)
{
    if (x <= 0) {
        return 0;
    }
    if (x >= 0x1000) {
        x = 0x1000;
    }
    return x;
}
