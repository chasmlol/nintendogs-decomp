#include "ctx.h"

extern void func_ov003_02185644(u32 a, u32 b);

void func_ov003_02185634(u32 x)
{
    void (*fp)(u32, u32) = func_ov003_02185644;
    fp(x, 1);
}
