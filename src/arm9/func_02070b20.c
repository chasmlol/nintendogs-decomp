#include "ctx.h"

void func_02070b20(u32 *p, u8 v)
{
    if (*p != 0) {
        *(u8 *)(*p + 0x41) = v;
    }
}
