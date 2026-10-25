#include "ctx.h"

void func_0209c598(u8 *p, u32 i, u32 a, u32 b)
{
    u8 *q = p + i * 4;
    *(u32 *)(q + 0x50) = a;
    *(u32 *)(q + 0x68) = 0x7fffffff;
    *(u32 *)(q + 0x74) = b;
}
