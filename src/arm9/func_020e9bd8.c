#include "ctx.h"

extern u32 data_0214f130;

u32 func_020e9bd8(s32 param_1)
{
    u8 *g = (u8 *)data_0214f130;
    u32 a = *(u32 *)(g + 0x2c);
    u32 b = *(u32 *)(g + 0x30);
    switch (param_1) {
    case 0:
        if (a < 6) {
            return 3;
        }
        if (a < 7) {
            return 0;
        }
        if (a < 18) {
            return 1;
        }
        if (a < 19) {
            return 2;
        }
        return 3;
    case 1:
        if (a < 6) {
            return 3;
        }
        if (a < 7 && b < 30) {
            return 3;
        }
        if (a < 18) {
            return 1;
        }
        if (a < 19 && b < 30) {
            return 1;
        }
        return 3;
    case 2:
        return 1;
    default:
        return 1;
    }
}
