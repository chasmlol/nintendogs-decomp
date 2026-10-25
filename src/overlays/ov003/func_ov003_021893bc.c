#include "ctx.h"

extern void func_ov003_021894ec(void *p, u32 a, u32 b, u32 c);

void func_ov003_021893bc(u8 *p)
{
    void (*fp)(void *, u32, u32, u32) = func_ov003_021894ec;
    fp(p, 8, 127, *(u16 *)(p + 252) > 60);
}
