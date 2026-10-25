#include "ctx.h"

extern void func_020bd858(u8 *p);

void func_020c1d40(u8 *p)
{
    u8 *b = *(u8 **)(*(u8 **)(p + 0x214));
    *(u16 *)(b + 0x20) = *(u16 *)(b + 0x20) | 1;
    func_020bd858(p);
}
