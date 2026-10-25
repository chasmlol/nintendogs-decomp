#include "ctx.h"

extern void func_020c5b00(void);

void func_020c5af0(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_020c5b00;
    fp(a, b, 0);
}
