#include "ctx.h"

u32 func_02034fc4(u8 *param_1)
{
    s32 v = *(s16 *)(param_1 + 234);
    switch (v) {
    case 0x3d6:
        return 0;
    case 0x3d7:
        return 1;
    case 0x3d8:
        return 2;
    case 0x3d9:
        return 3;
    default:
        return 0xffffffff;
    }
}
