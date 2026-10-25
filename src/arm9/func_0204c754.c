#include "ctx.h"

extern void func_0204c768(void);

void func_0204c754(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_0204c768;
    fp(a, 0, 0);
}
