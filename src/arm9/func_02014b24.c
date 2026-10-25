#include "ctx.h"

void func_02014b24(u8 *param_1, u32 param_2)
{
    s8 cVar1 = *(s8 *)(param_1 + 147);
    u8 *q;
    if (cVar1 == 0) {
        return;
    }
    if (cVar1 == 1) {
        return;
    }
    if (cVar1 == 23) {
        return;
    }
    if (cVar1 == 24) {
        return;
    }
    switch (param_2) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
    case 9:
    case 11:
        q = param_1 + 256;
        *(u16 *)(q + 46) = 0xe000;
        break;
    case 8:
    case 10:
    case 12:
        q = param_1 + 256;
        *(u16 *)(q + 46) = 0x2000;
        break;
    case 13:
    case 14:
        break;
    default:
        break;
    }
}
