#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_ov004_0216d7b4(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x208;
    func_02026bac(p);
    return func_02025548(p);
}
