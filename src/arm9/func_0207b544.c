#include "ctx.h"

extern void func_020776d4(u32 a, void *b, u32 c);

void func_0207b544(u32 *param_1)
{
    s32 bVar2;
    u32 uVar1;
    s32 local_20[3];

    bVar2 = 0;
    uVar1 = param_1[0] & 0x18;
    if (uVar1 == 0) {
        func_020776d4(0x1b, param_1 + 7, 3);
    }
    if ((param_1[0] & 4) == 0) {
        if (uVar1 != 0) {
            bVar2 = 1;
        } else {
            local_20[0] = (s32)(((s64)(s32)param_1[0x13] * (s64)(s32)param_1[4]) >> 12);
            local_20[1] = (s32)(((s64)(s32)param_1[0x14] * (s64)(s32)param_1[5]) >> 12);
            local_20[2] = (s32)(((s64)(s32)param_1[0x15] * (s64)(s32)param_1[6]) >> 12);
            func_020776d4(0x1c, local_20, 3);
        }
    }
    if ((param_1[0] & 2) == 0) {
        if (bVar2) {
            func_020776d4(0x19, param_1 + 10, 0xc);
        } else {
            func_020776d4(0x1a, param_1 + 10, 9);
        }
    } else if (bVar2) {
        func_020776d4(0x1c, param_1 + 0x13, 3);
    }
    if (uVar1 == 0) {
        func_020776d4(0x1b, param_1 + 4, 3);
    }
    if ((param_1[0] & 1) == 0) {
        func_020776d4(0x1b, param_1 + 1, 3);
    }
}
