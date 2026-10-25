#include "ctx.h"

extern void func_02008af8(void);

void func_02008ae4(u32 a)
{
    ((void (*)(u32, u32))func_02008af8)(0, a);
}
