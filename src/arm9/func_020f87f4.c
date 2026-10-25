#include "ctx.h"

extern void func_02003d90(void);

void func_020f87f4(void)
{
    void (*fp)(u32) = (void (*)(u32))func_02003d90;
    fp(20);
}
