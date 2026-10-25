#include "ctx.h"

extern void func_02077e4c(u32 a);

void func_0208f7e4(u8 *p)
{
    u8 *q = *(u8 **)(p + 0x1c);
    func_02077e4c(*(u32 *)(q + 8));
}
