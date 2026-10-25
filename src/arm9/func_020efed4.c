#include "ctx.h"

extern void func_020c79b8(u8 *a, u32 b, u32 c);

void func_020efed4(u8 *p, u32 b)
{
    func_020c79b8(p, b, *(u32 *)(**(u32 **)(p + 0x214) + 0xc));
}
