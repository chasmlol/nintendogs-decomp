#include "ctx.h"

extern void func_02117ba4(u8 *a, s16 b, s16 c);

void func_02117cf0(u8 *p)
{
    s32 n;
    s32 y1;
    s32 x1;
    s32 t;

    *(s32 *)(p + 0x14) = 1;
    *(u16 *)(p + 0x1c) = 0;
    if (*(s32 *)(p + 0x14) != 0) {
        t = *(u16 *)(p + 0x1c);
        x1 = *(s16 *)(p + 0x18);
        n = *(u16 *)(p + 0xe);
        y1 = *(s16 *)(p + 0x1a);
        func_02117ba4(p, (s16)((*(s16 *)(p + 10) * (n - t) + x1 * t) / n - x1),
                         (s16)((*(s16 *)(p + 12) * (n - t) + y1 * t) / n - y1));
    }
}
