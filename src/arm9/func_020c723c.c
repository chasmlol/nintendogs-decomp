#include "ctx.h"

extern u32 *data_02159468;
extern u8 *data_02159444;

s32 func_01ffdb08(s32 a);
s32 func_020bd6b4(s32 a, u8 *p);
s32 func_02034528(s32 a);
void func_020c5f4c(u8 *p, s32 a);
u32 func_020c5fbc(u8 *p);

u32 func_020c723c(u8 *param_1, s32 param_2)
{
    s32 iVar2;
    u32 uVar3;
    u32 flag;

    iVar2 = func_01ffdb08(param_2);
    if (iVar2 == 0) {
        return iVar2;
    }
    iVar2 = func_01ffdb08(param_2);
    if (iVar2 == 0) {
        goto zero;
    }
    if (func_020bd6b4(iVar2, param_1) == 0) {
        goto zero;
    }
    if (*(s32 *)(param_1 + 0xc0) < (*(s32 *)(param_1 + 0xf8) << 1)) {
        flag = 1;
        goto test;
    }
    if (func_02034528(iVar2) == 0) {
        goto zero;
    }
    if (*(s16 *)(param_1 + 0x90) != 3) {
        goto one;
    }
    uVar3 = *data_02159468 * 0x10dcd + 1;
    *data_02159468 = uVar3;
    if ((u16)uVar3 >= 0x4000) {
        goto zero;
    }
    flag = 1;
    goto test;
one:
    flag = 1;
    goto test;
zero:
    flag = 0;
test:
    if (flag == 0) {
        return flag;
    }
    switch (*(s16 *)(param_1 + 0x90)) {
    case 4:
    case 5:
        return func_020c5fbc(param_1);
    case 1:
    case 3:
        func_020c5f4c(param_1, param_2);
        uVar3 = (u32)data_02159444;
        *(u32 *)(uVar3 + 0x50) = 0;
        return uVar3;
    case 0:
    case 2:
    case 6:
    case 7:
    case 8:
        break;
    default:
        break;
    }
    return (u32)*(s16 *)(param_1 + 0x90);
}
