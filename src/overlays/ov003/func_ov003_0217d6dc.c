#include "ctx.h"

extern void func_ov003_0217dd00(u32 a, u32 b, u32 c);

void func_ov003_0217d6dc(u32 a)
{
    void (*fp)(u32, u32, u32) = func_ov003_0217dd00;
    fp(a, 9, 0x33f);
}
