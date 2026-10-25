#include "ctx.h"

extern void func_020fddc0(void);

void func_02107e90(void)
{
    void (*fp)(u32) = (void (*)(u32))func_020fddc0;
    fp(4);
}
