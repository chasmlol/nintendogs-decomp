#include "ctx.h"

extern int data_02155f40;
extern u8 data_027c0000[];
extern u8 data_00001400[];
extern u8 data_00000c00[];
extern u32 func_0207fb7c(void);

#pragma opt_propagation off
u32 func_020802c0(u32 param_1)
{
    u32 uVar1;
    u32 d4;
    s32 d8;
    u32 e0;
    u32 t;

    switch (param_1) {
    case 0:
        return 0x023e0000;
    case 2:
        if (data_02155f40 == 0) {
            goto zero;
        }
        uVar1 = func_0207fb7c();
        if ((uVar1 & 3) != 1) {
            goto big;
        }
    zero:
        return 0;
    big:
        return 0x2700000;
    case 3:
        return 0x2000000;
    case 4:
        d4 = (u32)data_027c0000;
        t = (d4 + 0x3f80) - (s32)(u32)data_00000c00;
        d8 = (s32)(u32)data_00001400;
        if (d8 == 0) {
            e0 = 0x027c0be0;
            uVar1 = d4;
            if (d4 < e0) {
                uVar1 = e0;
            }
            return uVar1;
        }
        if (d8 < 0) {
            return d4 - d8;
        }
        return t - d8;
    case 5:
        return 0x027ff800;
    case 6:
        return 0x037f8000;
    default:
        return 0;
    }
}
