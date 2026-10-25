#include "ctx.h"

u32 func_0206fbc8(s32 x)
{
    u32 i;
    i = 0;
    do {
        if (((x >> i) & 1) != 0) {
            return i;
        }
        i = i + 1;
    } while ((s32)i < 16);
    return 0xffffffff;
}
