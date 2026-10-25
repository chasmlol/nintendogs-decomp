#include "ctx.h"

extern void func_02002ab0(void);

void func_020027b8(u32 a, u32 b)
{
    ((void (*)(u32, u32, u32))func_02002ab0)(0xe, a, b);
}
