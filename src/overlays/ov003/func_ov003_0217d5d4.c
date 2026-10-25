#include "ctx.h"

extern void func_ov003_0217dd00(void);

void func_ov003_0217d5d4(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_ov003_0217dd00;
    fp(a, 12, 0x34b);
}
