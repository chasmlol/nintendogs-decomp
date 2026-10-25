#include "ctx.h"

extern void func_02077e94(void);

void func_0208f7f8(u8 *p)
{
    u8 *q = *(u8 **)(p + 0x1c);
    void (*fp)(u32) = (void (*)(u32))func_02077e94;
    fp(*(u32 *)(q + 8));
}
