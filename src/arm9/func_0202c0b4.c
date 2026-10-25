#include "ctx.h"

extern void func_020551cc(u8 *p);

void func_0202c0b4(u8 *p)
{
    func_020551cc(p);
    *(u16 *)(p + 0xfa) = 0;
}
