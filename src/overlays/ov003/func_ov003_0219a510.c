#include "ctx.h"

extern u8 *data_0215942c;
extern u16 data_ov003_0219a77c[];
extern u8 func_020bd6b4(s32 a, u8 *b);
extern s32 func_02027ec8(s32 a, s32 b);

u32 func_ov003_0219a510(s32 param_1, u8 *param_2, s32 param_3)
{
    s16 sVar1;
    u32 fl;
    s32 i4;
    s32 prod;

    if (*(s16 *)(param_2 + 0x90) != 3) {
        return 0;
    }
    sVar1 = *(s16 *)(param_2 + 0x96);
    if (sVar1 == 6) {
        return 0;
    }
    if (sVar1 == 0x11) {
        return 1;
    }
    if (sVar1 == 0xe) {
        return 0;
    }
    if (func_020bd6b4(param_1, param_2) == 0) {
        return 0;
    }
    i4 = func_02027ec8(param_1, 0);
    if (*(u16 *)data_0215942c == 10) {
        fl = 1;
    } else {
        fl = (*(u16 *)data_0215942c == 1);
    }
    if (fl == 0) {
        return (u32)(param_3 >= (s32)data_ov003_0219a77c[*(s8 *)(param_1 + 0x8d)]);
    }
    if (i4 >= 2000) {
        goto ret1;
    }
    prod = (1000 - i4) * data_ov003_0219a77c[*(s8 *)(param_1 + 0x8d)];
    return (u32)(param_3 >= prod / 1000);
ret1:
    return 1;
}
