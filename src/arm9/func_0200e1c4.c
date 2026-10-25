#include "ctx.h"

extern void func_0202fd7c(u8 *p);

void func_0200e1c4(u8 *p)
{
    if (*(u16 *)(p + 0xfc) > 0x3c) {
        func_0202fd7c(p);
        return;
    }
}
