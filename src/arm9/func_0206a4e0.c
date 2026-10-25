#include "ctx.h"

extern void func_0206a0f8(u32 p);

void func_0206a4e0(void)
{
    func_0206a0f8(0x04000400);
    while (*(vu32 *)0x04000600 & 0x8000000) {
    }
}
