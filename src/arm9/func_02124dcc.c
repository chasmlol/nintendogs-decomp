#include "ctx.h"

u32 func_02124dcc(u8 *param_1, u32 param_2)
{
    u32 uVar1 = 0;
    switch (param_2) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        *(s32 *)(param_1 + 0x10) = 0;
        uVar1 = 1;
        break;
    case 4:
        uVar1 = 1;
        *(s32 *)(param_1 + 0x10) = 1;
        break;
    case 5:
        *(s32 *)(param_1 + 0x10) = 2;
        uVar1 = 1;
        break;
    case 6:
        *(s32 *)(param_1 + 0x10) = 3;
        uVar1 = 1;
        break;
    case 7:
        *(s32 *)(param_1 + 0x10) = 4;
        uVar1 = 1;
    }
    if (*(s32 *)(param_1 + 0x10) >= *(s32 *)(param_1 + 8)) {
        uVar1 = 0;
        *(s32 *)(param_1 + 0x10) = -1;
    }
    return uVar1;
}
