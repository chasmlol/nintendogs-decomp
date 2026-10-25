#include "ctx.h"

extern u8 *data_0215be44;
extern s32 func_02067898(u32 a, u32 b);

s32 func_020f3b8c(void)
{
    s32 v = func_02067898(*(u32 *)(data_0215be44 + 4), 409600);
    if (v >= 4096) {
        *(u32 *)(data_0215be44 + 4) = 0;
        return 4096;
    }
    return v;
}
