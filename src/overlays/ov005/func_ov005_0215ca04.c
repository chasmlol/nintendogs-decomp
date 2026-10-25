#include "ctx.h"

extern void func_ov005_0215caf8(u8 *a, u8 *b, u32 c);

void func_ov005_0215ca04(u8 *p)
{
    void (*fp)(u8 *, u8 *, u32) = func_ov005_0215caf8;
    fp(p, p + 0x360, 0x802);
}
