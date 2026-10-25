#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_02020298(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x24f;
    func_02026c24(p);
    return func_02025548(p);
}
