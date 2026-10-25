#include "ctx.h"

extern void func_ov003_0218a3cc(void);

void func_ov003_0218a3b4(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_ov003_0218a3cc;
    fp(a, 0, 0x1ff);
}
