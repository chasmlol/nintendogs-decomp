#include "ctx.h"

extern void func_ov003_0217dd00(u32 a, u32 b, u32 c);

void func_ov003_0217d55c(u32 x)
{
    void (*fp)(u32, u32, u32) = func_ov003_0217dd00;
    fp(x, 0xe, 0x353);
}
