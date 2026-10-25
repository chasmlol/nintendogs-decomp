#include "ctx.h"

void func_02074164(u8 *p, u32 a, u32 b)
{
    if (a != 0) {
        *(u32 *)(p + 8) = a;
    }
    if (b != 0) {
        *(u32 *)(p + 0x18) = b;
    }
}
