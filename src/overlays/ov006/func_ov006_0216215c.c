#include "ctx.h"

s32 func_ov006_0216215c(u32 param_1, s32 param_2)
{
    s32 r = 0;
    switch (param_1) {
    case 0:
        break;
    case 1:
        r = 0x90000;
        break;
    case 2:
        r = 0xe1000;
        break;
    case 3:
        r = 0x64000;
        break;
    case 4:
        r = 0x24000;
        break;
    case 5:
        r = 0x24000;
        break;
    }
    if (param_2 != 0 && r < 0x40000) {
        return 0x40000;
    }
    return r;
}
