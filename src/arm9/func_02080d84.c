#include "ctx.h"

extern void func_0206c9b8(u32 a, u32 b, u32 c);

void func_02080d84(u32 a)
{
    void (*fp)(u32, u32, u32) = func_0206c9b8;
    fp(0x027ffcf4, a, 6);
}
