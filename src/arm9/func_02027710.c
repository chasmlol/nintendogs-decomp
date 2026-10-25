#include "ctx.h"
extern u8 data_0213aaa8[];
extern s32 func_02027894(u32 a, u32 b);
s32 func_02027710(u32 p0, u32 p1)
{
    s32 a = func_02027894(p0, p1);
    s32 b = func_02027894(p1, p0);
    return (s32)(s8)*(u32 *)(data_0213aaa8 + (2 - a) * 60 + (2 - b) * 4);
}
