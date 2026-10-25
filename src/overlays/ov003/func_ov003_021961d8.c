#include "ctx.h"

extern void func_ov003_02196214(u32 a, u32 b, u32 c);

void func_ov003_021961d8(u32 x)
{
    void (*fp)(u32, u32, u32) = func_ov003_02196214;
    fp(x, 4, 1);
}
