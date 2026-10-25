#include "ctx.h"

u32 func_ov019_0215ccd8(u8 *param_1)
{
    if (param_1 == NULL) {
        goto nullret;
    }
    switch (*(s16 *)(param_1 + 0x24)) {
    case 0:
        goto zero;
    case 1:
        return *(u32 *)(param_1 + 0x78);
    case 2:
        return *(u32 *)(param_1 + 0x7c);
    case 3:
        return *(u32 *)(param_1 + 0x80);
    case 4:
        return *(u32 *)(param_1 + 0x84);
    case 5:
    case 6:
        return *(u32 *)(param_1 + 0x88);
    case 7:
        return *(u32 *)(param_1 + 0x8c);
    case 8:
        return *(u32 *)(param_1 + 0x90);
    case 9:
        return *(u32 *)(param_1 + 0x94);
    case 10:
        return *(u32 *)(param_1 + 0x98);
    case 11:
        return *(u32 *)(param_1 + 0x9c);
    case 12:
        return *(u32 *)(param_1 + 0xa0);
    case 13:
        return *(u32 *)(param_1 + 0xa4);
    default:
        goto zero;
    }
zero:
    return 0;
nullret:
    return 0;
}
