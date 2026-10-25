#include "ctx.h"

extern void func_020c7434(void);

void func_020e8cd4(void *p, u32 a)
{
    u32 x;
    x = **(u32 **)((u8 *)p + 0x214);
    ((void (*)(u32, u32, u32, u32))func_020c7434)((u32)p, a, *(u32 *)(x + 8), 0);
}
