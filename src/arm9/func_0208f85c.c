#include "ctx.h"

extern void func_0208e690(void);

void func_0208f85c(u8 *p)
{
    void (*fp)(u32) = (void (*)(u32))func_0208e690;
    fp(*(u32 *)(p + 0x74));
}
