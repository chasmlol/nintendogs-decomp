#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

void func_ov004_0216d14c(u8 *p)
{
    *(u16 *)(p + 0x152) = 8;
    *(u16 *)(p + 0x154) = 8;
    func_02026bac(p);
    func_02025548(p);
    *(u32 *)(p + 0x484) = 0;
}
