#include "ctx.h"

extern void func_0207f124(u32 a, u32 b, u32 c);
extern void func_0207ef18(void);

void func_0207ef68(u32 x)
{
    void (*fp)(u32, u32, u32) = func_0207f124;
    fp(x, 0x027fffe0, (u32)func_0207ef18);
}
