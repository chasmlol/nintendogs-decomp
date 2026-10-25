#include "ctx.h"

extern void func_ov005_0215c368(void);

void func_ov005_0215c358(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_ov005_0215c368;
    fp(a, 0);
}
