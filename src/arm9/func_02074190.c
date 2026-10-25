#include "ctx.h"

void func_02074190(void *p, u32 a, u32 unused, u8 b, u32 c)
{
    *(u32 *)((u8 *)p + 0x20) = a;
    *(u8 *)((u8 *)p + 0x24) = b;
    *(u8 *)((u8 *)p + 0x25) = c;
}
