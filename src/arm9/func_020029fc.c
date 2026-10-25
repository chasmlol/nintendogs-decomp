#include "ctx.h"
extern s32 func_02002a38(u32 a, u32 b, u32 c, s32 *d);
extern void func_02002de8(void);
extern void func_02002de0(void);
s32 func_020029fc(u32 p0, u32 p1)
{
    s32 out[1];
    s32 r = func_02002a38(p0, p1, (u32)func_02002de0, out);
    if (r == 0) {
        func_02002de8();
        return out[0];
    }
    return r;
}
