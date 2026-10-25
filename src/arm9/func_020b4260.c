#include "ctx.h"

extern void func_0206c7d4(void);

void func_020b4260(u32 param_1, u32 param_2)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_0206c7d4;
    fp(param_2 + 0x26b8, param_1, 0x4e38);
}
