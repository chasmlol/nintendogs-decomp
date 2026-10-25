#include "ctx.h"

extern s32 func_02035770(u8 *p, u32 a);
extern s32 func_02035744(u8 *p, u32 a);

s32 func_02051540(u8 *param_1)
{
    s16 iVar2;
    s32 r;

    iVar2 = *(s16 *)(param_1 + 0xea);
    if (iVar2 >= 0x2a1 && iVar2 <= 684) {
        return 1;
    }
    if ((s8)*(s32 *)(param_1 + 0x484) >= 1) {
        return 4;
    }
    if ((u16)(s16)(iVar2 - 689) <= 1) {
        if (func_02035770(param_1, 16) != 0 && func_02035744(param_1, 54) != 0) {
            return 3;
        }
        return 1;
    }
    if ((u16)(s16)(iVar2 - 699) <= 1) {
        if (func_02035770(param_1, 12) != 0 && func_02035744(param_1, 58) != 0) {
            return 3;
        }
        return 1;
    }
    if (iVar2 == 708 || iVar2 == 713) {
        if (func_02035770(param_1, 8) != 0 && func_02035744(param_1, 48) != 0) {
            return 3;
        }
        return 1;
    }
    if ((u16)(s16)(iVar2 - 701) <= 1) {
        return 1;
    }
    if (iVar2 == 698 || iVar2 == 707 || iVar2 == 712) {
        return 1;
    }
    if (iVar2 == 683 || iVar2 == 693 || iVar2 == 703) {
        r = 0;
    } else if (iVar2 >= 673 && iVar2 <= 716) {
        r = 1;
    } else {
        r = 0;
    }
    return (s16)(r != 0);
}
