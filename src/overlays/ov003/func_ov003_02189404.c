#include "ctx.h"

extern void func_ov003_021894ec(u8 *p, u32 a, u32 b, u32 c);

void func_ov003_02189404(u8 *p)
{
    void (*fp)(u8 *, u32, u32, u32) = func_ov003_021894ec;
    fp(p, 6, 47, *(u16 *)(p + 252) > 60);
}
