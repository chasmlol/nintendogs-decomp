#include "ctx.h"

extern void func_020fddc0(void);

void func_02108a68(void)
{
    void (*fp)(u32) = (void (*)(u32))func_020fddc0;
    fp(40);
}
