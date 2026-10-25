#include "ctx.h"
void func_0206a2ac(u32 a, u32 b, u16 c, u32 d, s32 e)
{
    u32 v = a | (b << 16) | (d << 24);
    if (e != 0) {
        v |= 0x8000;
    }
    *(vu32 *)0x04000350 = v;
    *(vu16 *)0x04000354 = c;
}
