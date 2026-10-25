#include "ctx.h"

extern void func_02025e18(u8 *p);
extern u8 func_02025a28(u8 *p);

u8 func_0201df8c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0xcd;
    func_02025e18(p);
    return func_02025a28(p);
}
