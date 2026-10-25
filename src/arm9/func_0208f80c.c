#include "ctx.h"

extern void func_02077edc(u32 v);

void func_0208f80c(u8 *p)
{
    u32 *q = *(u32 **)(p + 0x1c);
    func_02077edc(q[2]);
}
