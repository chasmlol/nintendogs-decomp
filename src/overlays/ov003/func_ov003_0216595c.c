#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025860(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_0216595c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x9a;
    *(u16 *)(p + 0x156) = 8;
    func_02026494(p);
    func_02025860(p);
    func_02034198(p);
}
