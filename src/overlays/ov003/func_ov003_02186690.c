#include "ctx.h"

extern void func_ov003_021894ec(u8 *p, u32 a, u32 b, u32 c);

void func_ov003_02186690(u8 *p)
{
    void (*fp)(u8 *, u32, u32, u32) = func_ov003_021894ec;
    fp(p, 4, 31, *(u16 *)(p + 252) > 40);
}
