#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02117810(u8 *p);
extern void func_02108e24(s32 v);

void func_021141cc(void)
{
    u8 *g = data_0215be48;
    if (*(s32 *)(g + 0xb8) == 22) {
        u8 *q = g + 196;
        func_02117810(q + 8);
        func_02117810(q + 68);
        func_02117810(q + 128);
        func_02108e24(1);
    }
}
