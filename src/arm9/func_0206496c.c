#include "ctx.h"
extern u32 func_020641b8(void);
extern s32 func_0206419c(void);
extern void func_020800d4(u32 a, u32 b);
extern void func_0206c880(u32 a, u32 b, u32 c);
s32 func_0206496c(u32 *p0)
{
    u32 r4 = func_020641b8();
    s32 r = func_0206419c();
    if (r != 0) {
        return r;
    }
    if (p0 != NULL) {
        func_020800d4(*(u32 *)(r4 + 4), 0x7b8);
        func_0206c880(*(u32 *)(r4 + 4), (u32)p0, 0x7b8);
        return 0;
    }
    return 6;
}
