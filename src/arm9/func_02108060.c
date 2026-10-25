#include "ctx.h"

extern void func_020fddc0(u32 a);

void func_02108060(void)
{
    void (*fp)(u32) = func_020fddc0;
    fp(13);
}
