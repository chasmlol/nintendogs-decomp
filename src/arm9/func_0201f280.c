#include "ctx.h"
extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);
u8 func_0201f280(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x20a;
    func_02026c24(p);
    return func_02025a84(p);
}
