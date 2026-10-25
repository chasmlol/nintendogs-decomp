#include "ctx.h"

extern void func_ov003_02189740(void);

void func_ov003_021896f0(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_ov003_02189740;
    fp(a, 4);
}
