#include "ctx.h"

extern void func_0207eff4(void);
extern void func_0207ef18(void);

void func_0207ef30(u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_0207eff4;
    fp(a, 0x027fffe0, (u32)func_0207ef18);
}
