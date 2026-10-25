#include "ctx.h"

extern void func_ov011_0215ccf4(u32 a, u32 b, u32 c);

void func_ov011_0215ccc4(u32 x, u32 y)
{
    void (*fp)(u32, u32, u32) = func_ov011_0215ccf4;
    fp(x, y, 2);
}
