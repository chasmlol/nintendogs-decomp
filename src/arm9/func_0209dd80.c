#include "ctx.h"

extern u32 data_0214204c[];

s32 func_0209dd80(s32 param_1, s32 param_2, s32 param_3)
{
    s32 ret = 0;
    u8 *pb = (u8 *)data_0214204c[param_1] + 8 + (param_2 << 3);

    if (param_3 > (s32)*(u16 *)(pb + 6)) {
        ret = *(s16 *)(pb + 2) + (param_3 >> *(s8 *)pb);
        if (ret > 127)
            ret = 127;
        else if (ret < 0)
            ret = 0;
    }
    return ret;
}
