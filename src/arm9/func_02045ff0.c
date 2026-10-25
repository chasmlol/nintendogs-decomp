#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern void func_020460c4(u8 *p, s32 a, s32 b, u8 *c, s32 d, s32 e);

void func_02045ff0(u8 *p)
{
    s32 v;
    *(u16 *)(p + 0x12e) = 0x8000;
    v = func_0203567c(p);
    func_020460c4(p, 0, 13, p + 780, v, 0x2e6);
}
