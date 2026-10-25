#include "ctx.h"

extern void func_020c7434(u8 *a, u32 b, u32 c, u32 d);

void func_020dad68(u8 *p, u32 b)
{
    func_020c7434(p, b, *(u32 *)(**(u32 **)(p + 0x214) + 8), 0);
}
