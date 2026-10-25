#include "ctx.h"

extern void func_0207f094(u32 a, u32 b, u32 c, u32 d);
extern void func_0207ef84(void);

void func_0207efd4(u32 a)
{
    void (*fp)(u32, u32, u32, u32) = func_0207f094;
    fp(a, 0x027fffe8, (u32)func_0207ef84, 1);
}
