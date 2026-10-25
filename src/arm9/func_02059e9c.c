#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025758(u8 *p);

u8 func_02059e9c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0xbd;
    func_02026bac(p);
    return func_02025758(p);
}
