#include "ctx.h"

extern void func_02117ac8(u8 *p, u32 v);

void func_02118600(u8 *p)
{
    s32 i;
    u8 *q = p + 168;
    for (i = 0; i < 4; i++) {
        func_02117ac8(q, 0);
        q = q + 32;
    }
}
