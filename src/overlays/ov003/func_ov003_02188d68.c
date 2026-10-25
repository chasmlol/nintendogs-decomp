#include "ctx.h"

extern void func_ov003_02188db0(u32 a, u32 b, u32 c);

void func_ov003_02188d68(u32 a)
{
    void (*fp)(u32, u32, u32) = func_ov003_02188db0;
    fp(a, 3, 0);
}
