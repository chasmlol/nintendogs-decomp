#include "ctx.h"

void func_0208728c(u8 *p, u32 a, u32 b)
{
    if (b == 0) {
        a = 0;
    } else if (a == 0) {
        b = 0;
    }
    *(u32 *)(p + 0x48) = a;
    *(u32 *)(p + 0x4c) = b;
}
