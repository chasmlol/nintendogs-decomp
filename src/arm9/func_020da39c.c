#include "ctx.h"

extern void func_020c79b8(void);

void func_020da39c(u8 *p, u32 a)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_020c79b8;
    u8 *q = *(u8 **)(p + 0x214);
    u8 *r = *(u8 **)q;
    fp((u32)p, a, *(u32 *)(r + 0xc));
}
