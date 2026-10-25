#include "ctx.h"
extern s32 func_020863e4(u8 *p, u32 k);
u8 func_02085e50(u8 *p, u32 k)
{
    s32 i = func_020863e4(p, k);
    u8 *tbl = *(u8 **)(p + 0xc);
    return tbl[i * 2];
}
