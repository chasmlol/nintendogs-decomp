#include "ctx.h"
extern s32 func_020df0d4(void);
extern u32 func_020a1728(u32 a, u32 b, u32 c);
u32 func_0209d3f0(u8 *p0, u32 p1, u32 p2)
{
    s32 r = func_020df0d4();
    if (r != -11) {
        return func_020a1728((s32)*(s16 *)(p0 + 12), p1, p2);
    }
    return 0xffffffff;
}
