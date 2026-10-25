#include "ctx.h"

extern u8 *data_0215be48;

u32 func_0210a554(void);

void func_02108318(void)
{
    u32 r;
    u8 *q;

    r = func_0210a554();
    if (r == 1) goto case13;
    if (r != 2) return;
    q = data_0215be48 + 0x1000;
    *(u32 *)(q + 0xd1c) = 18;
    return;
case13:
    q = data_0215be48 + 0x1000;
    *(u32 *)(q + 0xd1c) = 13;
}
