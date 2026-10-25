#include "ctx.h"

extern u32 data_0214efc0[];
extern s32 func_0205e47c(u32 a, u32 b);

void func_020062b4(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar1;
    u32 uVar2;
    u32 uVar3;

    uVar2 = data_0214efc0[5];
    switch (param_2) {
    case 0:
        param_4 = param_1 * uVar2 + data_0214efc0[0];
        break;
    case 1:
        param_4 = param_1 * uVar2 + data_0214efc0[2];
        break;
    case 2:
        param_4 = data_0214efc0[3] - param_1 * uVar2;
        break;
    }
    uVar3 = data_0214efc0[0];
    if (param_4 < uVar3) {
        param_4 = uVar3;
    }
    if (data_0214efc0[1] < param_4 + uVar2) {
        iVar1 = func_0205e47c(data_0214efc0[1] - uVar3, uVar2);
        param_4 = uVar2 * iVar1 + uVar3;
    }
    data_0214efc0[2] = param_4;
}
