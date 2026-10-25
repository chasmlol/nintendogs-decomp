#include "ctx.h"
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027f78(s32 a, s32 b);
u32 func_ov005_0216722c(u8 *p)
{
    s32 v = func_01ffdb08(*(s16 *)*(u8 **)(p + 0x214));
    v = func_02027f78(v, 7);
    return v >= 0x2710;
}
