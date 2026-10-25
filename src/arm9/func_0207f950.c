#include "ctx.h"

extern u32 data_02155cf8[];

s32 func_0207f950(void)
{
    s32 i;
    u32 *q;
    for (i = 0; i < 16; i++) {
        q = data_02155cf8 + i;
        if (q[5] == 0) {
            return i;
        }
    }
    return -1;
}
