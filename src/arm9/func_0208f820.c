#include "ctx.h"

extern void func_02077f24(u32 a);

void func_0208f820(u8 *p)
{
    void (*fp)(u32) = func_02077f24;
    fp(*(u32 *)(*(u8 **)(p + 0x1c) + 8));
}
