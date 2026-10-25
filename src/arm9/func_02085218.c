#include "ctx.h"

void func_02085218(u8 *param_1, u32 param_2, s32 param_3)
{
    s32 iv;
    u16 r;
    iv = (0xff - param_3) * 31;
    r = iv / 255;
    *(u16 *)(param_1 + 0x40) = (*(u16 *)(param_1 + 0x40) & ~0x3e0) | ((r & 0x1f) << 5);
}
