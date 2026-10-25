#include "ctx.h"

extern s32 func_02121084(u8 *p);

void func_02125020(u8 *param_1)
{
    s32 x;
    s32 r;

    x = func_02121084(param_1);
    r = -32 - x % 80;
    *(vu32 *)0x04001018 = 0x01ff0000 & (u32)(r << 16);
}
