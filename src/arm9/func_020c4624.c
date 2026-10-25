#include "ctx.h"
u32 func_020c4624(u8 *param_1)
{
    switch (*(s16 *)(param_1 + 0x94)) {
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
        return 1;
    default:
        return 0;
    }
}
