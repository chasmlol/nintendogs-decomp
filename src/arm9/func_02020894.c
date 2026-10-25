#include "ctx.h"

extern u32 data_0214f464;

s32 func_02020894(u8 *param_1)
{
    s16 v = *(s16 *)(param_1 + 0x164);
    if (v == 17) {
        goto ret18;
    }
    if (v != 18) {
        goto main_path;
    }
    goto ret17;
ret18:
    return 18;
ret17:
    return 17;
main_path:
    {
        u32 *g = (u32 *)data_0214f464;
        u32 x = *g * 0x10dcd + 1;
        *g = x;
        return (s16)((u16)((x << 16) >> 31) + 17);
    }
}
