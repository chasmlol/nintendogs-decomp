#include "ctx.h"

extern void func_ov003_02188db0(void);

void func_ov003_02188d9c(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_ov003_02188db0;
    fp(a, 0, 0);
}
