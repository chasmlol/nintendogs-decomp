#include "ctx.h"

extern u8 *data_0215be48;

s32 func_02121084(u32 p);

void func_0211ee6c(u32 param_1)
{
    s32 x = func_02121084(param_1);
    s32 r = x % 96;
    s32 t = -0x20 - r;

    if (*(u32 *)(data_0215be48 + 0xac) == 3) {
        t = 0;
    }
    *(vu32 *)0x04001018 = 0x01ff0000 & (t << 16);
}
