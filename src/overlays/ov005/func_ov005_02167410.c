#include "ctx.h"

extern void func_ov005_02167430(u32 a, u32 b, u32 c);

void func_ov005_02167410(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = func_ov005_02167430;
    fp(a, b, 0x3f);
}
