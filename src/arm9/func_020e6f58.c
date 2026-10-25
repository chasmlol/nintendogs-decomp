#include "ctx.h"

extern void func_020e6f78(u32 a, u32 b, u32 c);

void func_020e6f58(u32 x, u32 y)
{
    void (*fp)(u32, u32, u32) = func_020e6f78;
    fp(x, y, 0x41);
}
