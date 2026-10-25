#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_0201f970(u8 *p)
{
    *(s16 *)(p + 0x152) = 0x19b;
    func_02026c24(p);
    return func_02025548(p);
}
