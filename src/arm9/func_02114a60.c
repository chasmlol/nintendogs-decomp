#include "ctx.h"

extern u32 data_0215bf9c;
extern s32 func_0210a5c0(s32 p);

u32 func_02114a60(void)
{
    u32 r = 0;
    if (func_0210a5c0(8) != 0) {
        r = *(u32 *)(*(u8 **)&data_0215bf9c + 0x10);
    }
    return r;
}
