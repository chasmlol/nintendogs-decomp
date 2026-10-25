#include "ctx.h"
extern u8 data_02159074[];
extern u8 data_0212fdc5[];
extern s32 func_020a1384(u32 a, u32 b, u32 c);
s32 func_020a0b40(u32 p0, u32 p1)
{
    u32 v = data_0212fdc5[*(u16 *)(data_02159074 + 24) * 6];
    if (v == 255) {
        return -1;
    }
    return func_020a1384(v, p0, p1);
}
