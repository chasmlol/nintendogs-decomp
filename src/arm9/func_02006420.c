#include "ctx.h"

extern void func_02006204(u32 a);

void func_02006420(u32 param_1, u16 *param_2)
{
    u32 uVar2;

    if (*(s32 *)((u8 *)param_2 + 0x20) != 0) {
        func_02006204(param_1);
    }
    uVar2 = param_1;
    param_2[0] = uVar2 & (uVar2 ^ param_2[1]);
    param_2[2] = (uVar2 ^ 0xffff) & (uVar2 ^ param_2[1]);
    param_2[1] = uVar2;
    param_2[3] = 0;
    switch (param_2[4]) {
    case 0:
        goto c0;
    case 1:
        goto c1;
    case 2:
        goto c2;
    }
    return;
c0:
    if ((param_1 & param_2[6]) == 0) {
        return;
    }
    param_2[4] = 1;
    param_2[5] = 0;
    param_2[3] = uVar2 & param_2[6];
    return;
c1:
    if ((param_1 & param_2[6]) == 0) {
        goto z1;
    }
    param_2[5] = param_2[5] + 1;
    if (param_2[5] < param_2[7]) {
        return;
    }
    param_2[4] = 2;
    param_2[5] = 0;
    param_2[3] = uVar2 & param_2[6];
    return;
z1:
    param_2[4] = 0;
    return;
c2:
    if ((param_1 & param_2[6]) == 0) {
        goto z2;
    }
    param_2[5] = param_2[5] + 1;
    if (param_2[5] >= param_2[8]) {
        param_2[5] = 0;
        param_2[3] = uVar2 & param_2[6];
    }
    return;
z2:
    param_2[4] = 0;
    return;
}
