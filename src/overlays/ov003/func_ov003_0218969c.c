#include "ctx.h"

extern void func_ov003_02189740(u8 *p, u32 b);

void func_ov003_0218969c(u8 *p)
{
    void (*fp)(u8 *, u32) = func_ov003_02189740;
    u8 *q = p + 0x100;
    *(u16 *)(q + 0x2e) = 0xa000;
    fp(p, 7);
}
