#include "ctx.h"
extern u32 data_021517e0;
s32 func_0206ffd0(u32 mask)
{
    if (mask & data_021517e0) {
        return 0;
    }
    data_021517e0 |= mask;
    return 1;
}
