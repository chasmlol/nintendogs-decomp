#include "ctx.h"
extern u8 *data_0214f464;

u32 func_0202aa80(u8 *param_1)
{
    u8 *pp = data_0214f464;
    s32 n = *(s32 *)pp * 0x10dcd + 1;
    u32 b;
    b = ((u32)(n << 16) >> 31) << 16;
    *(s32 *)pp = n;
    b = b >> 16;
    switch (b) {
    case 0:
        *(u16 *)(param_1 + 234) = 0x42a;
        return 1;
    case 1:
        *(u16 *)(param_1 + 234) = 0x42b;
        return 1;
    default:
        return 0;
    }
}
