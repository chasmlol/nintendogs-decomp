#include "ctx.h"

extern u32 data_0214204c[];

u32 func_0209e148(int param_1)
{
    u32 v = data_0214204c[param_1];
    u32 r;
    if (v != 0) {
        r = *(u32 *)(v + 4);
    } else {
        r = -1;
    }
    return r;
}
