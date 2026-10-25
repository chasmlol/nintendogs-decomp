#include "ctx.h"

extern u8 *data_0215be48;

u32 func_02124ebc(u32 param_1, s32 param_2)
{
    u8 *r2 = data_0215be48 + 196;
    s32 r0;
    u32 res;
    res = 0;
    if (param_1 == 0x00030002) {
        if (param_2 == 0) {
            r0 = *(s32 *)(r2 + 0xc);
            res = (u32)(r2 + 236) + (r0 << 4);
        } else {
            r0 = *(s32 *)(r2 + 0x10);
            res = (u32)(r2 + 284) + (r0 << 4);
        }
    }
    return res;
}
