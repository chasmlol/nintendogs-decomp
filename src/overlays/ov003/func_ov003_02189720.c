#include "ctx.h"

extern void func_ov003_02189740(u32 a, u32 b);

void func_ov003_02189720(u32 a)
{
    void (*fp)(u32, u32) = func_ov003_02189740;
    fp(a, 1);
}
