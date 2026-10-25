#include "ctx.h"

extern u16 data_02150e30[];
extern void func_020699dc(u32 v);

void func_02068e30(s32 param_1)
{
    u32 uVar2;
    u32 uVar1;
    s32 nots;

    uVar1 = data_02150e30[9];
    uVar2 = data_02150e30[0];
    nots = ~param_1;
    data_02150e30[0] = nots & (uVar2 | uVar1);
    data_02150e30[9] = param_1;
    if (param_1 <= 0x80) {
        if (0x80 > param_1) {
            if (param_1 <= 4 && 0 <= param_1 && param_1 != 0 && param_1 == 4) {
                *(vu8 *)0x04000242 = 0x84;
            }
            goto LAB;
        }
    } else {
        if (param_1 != 0x180) goto LAB;
        *(vu8 *)0x04000249 = 0x81;
    }
    *(vu8 *)0x04000248 = 0x81;
LAB:
    func_020699dc(data_02150e30[0]);
}
