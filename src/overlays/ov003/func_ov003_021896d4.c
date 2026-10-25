#include "ctx.h"

extern void func_ov003_02189740(u8 *p, u32 b);

void func_ov003_021896d4(u8 *p)
{
    void (*fp)(u8 *, u32) = func_ov003_02189740;
    *(u16 *)(p + 0x12e) = 0xe000;
    fp(p, 5);
}
