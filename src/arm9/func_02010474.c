#include "ctx.h"

s32 func_02035584(u8 *p, s32 a);
void func_0203e8cc(u8 *p, s32 a, s32 b);

extern u32 *data_0214f464;

void func_02010474(u8 *param_1, s32 param_2)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = *(s16 *)(param_1 + 0x154);
    if (iVar1 > 68) {
        goto gt68;
    }
    if (iVar1 >= 68) {
        goto LAB_dc;
    }
    switch (iVar1) {
    case 0:
    case 2:
    case 3:
    case 4:
        goto switchD_default;
    case 1:
    case 5:
    case 6:
    case 7:
        goto LAB_dc;
    default:
        goto switchD_default;
    }
gt68:
    if (iVar1 > 69) {
        goto gt69;
    }
    if (iVar1 != 69) {
        goto switchD_default;
    }
    goto LAB_dc;
gt69:
    if (iVar1 != 70) {
        goto switchD_default;
    }
    goto LAB_dc;
LAB_dc:
    iVar1 = func_02035584(param_1, 1);
    if (iVar1 == 0) {
        return;
    }
    func_0203e8cc(param_1, 1, 0);
    return;
switchD_default:
    iVar1 = 0;
    switch (*(s32 *)(param_1 + 0x464)) {
    case 0:
        goto Z0;
    case 1:
        goto O1;
    default:
        goto fin;
    }
Z0:
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    switch ((u16)(((u32)(u16)uVar2 * 10u) >> 16)) {
    case 0:
    case 1:
    case 2:
        goto A;
    case 3:
        goto B;
    case 4:
        goto C;
    case 5:
        goto D;
    default:
        goto fin;
    }
A:
    if (param_2 == 13) goto s71;
    iVar1 = (param_2 != 14) ? 9 : 72;
    goto fin;
s71:
    iVar1 = 71;
    goto fin;
B:
    switch (param_2) {
    default:
        iVar1 = 4;
        goto fin;
    case 1:
    case 2:
    case 3:
        iVar1 = 68;
        goto fin;
    case 7:
    case 9:
    case 11:
        iVar1 = 69;
        goto fin;
    case 13:
        iVar1 = 71;
        goto fin;
    case 8:
    case 10:
    case 12:
        iVar1 = 70;
        goto fin;
    case 14:
        iVar1 = 72;
        goto fin;
    }
C:
    switch (param_2) {
    default:
        iVar1 = 3;
        goto fin;
    case 1:
    case 2:
    case 3:
        iVar1 = 68;
        goto fin;
    case 7:
    case 9:
    case 11:
        iVar1 = 69;
        goto fin;
    case 13:
        iVar1 = 71;
        goto fin;
    case 8:
    case 10:
    case 12:
        iVar1 = 70;
        goto fin;
    case 14:
        iVar1 = 72;
        goto fin;
    }
D:
    switch (param_2) {
    default:
        iVar1 = 5;
        goto fin;
    case 1:
    case 2:
    case 3:
        iVar1 = 68;
        goto fin;
    case 7:
    case 9:
    case 11:
        iVar1 = 69;
        goto fin;
    case 13:
        iVar1 = 71;
        goto fin;
    case 8:
    case 10:
    case 12:
        iVar1 = 70;
        goto fin;
    case 14:
        iVar1 = 72;
        goto fin;
    }
O1:
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    switch ((u16)(((u32)(u16)uVar2 * 100u) >> 16)) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    default:
        goto fin;
    }
    switch (param_2) {
    default:
        iVar1 = 6;
        goto fin;
    case 1:
    case 2:
    case 3:
        iVar1 = 68;
        goto fin;
    case 7:
    case 9:
    case 11:
        iVar1 = 69;
        goto fin;
    case 13:
        iVar1 = 71;
        goto fin;
    case 8:
    case 10:
    case 12:
        iVar1 = 70;
        goto fin;
    case 14:
        iVar1 = 72;
        goto fin;
    }
fin:
    func_0203e8cc(param_1, 1, iVar1);
}
