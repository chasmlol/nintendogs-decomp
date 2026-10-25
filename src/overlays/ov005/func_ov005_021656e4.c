#include "ctx.h"
extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);
u8 func_ov005_021656e4(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x44;
    func_02026c24(p);
    return func_02025a84(p);
}
