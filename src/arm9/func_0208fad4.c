#include "ctx.h"

extern void func_01ffe640(void);
extern void func_0208f148(u32 *p, u32 x);

void func_0208fad4(u8 *p, u32 x)
{
    u32 *q;
    *(u16 *)(p + 32) = *(u16 *)(p + 32) | 2;
    q = *(u32 **)(p + 0x1c);
    q[6] = (u32)func_01ffe640;
    func_0208f148(*(u32 **)(p + 0x1c), x);
}
