#include "ctx.h"

extern void func_ov003_02196214(u32 a, u32 b, u32 c);

void func_ov003_021961ec(u32 a)
{
    void (*fp)(u32, u32, u32) = func_ov003_02196214;
    fp(a, 4, 1);
}
