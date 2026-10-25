#include "ctx.h"

extern u8 *data_ov005_02167f04;
extern void func_ov005_02161644(s32 x);

void func_ov005_02164624(void)
{
    s32 t;
    t = *(s16 *)(data_ov005_02167f04 + 0x2c);
    t = t << 12;
    ((void (*)(s32))func_ov005_02161644)(t / 10000);
}
