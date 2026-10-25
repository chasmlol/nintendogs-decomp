#include "ctx.h"

extern u32 data_02159468;
s32 func_01ffdb08(u32 v);
s32 func_020bd6b4(s32 a, u8 *b);
s32 func_02034528(s32 a);

u32 func_020c736c(u8 *param_1, u32 param_2)
{
    s32 iVar2;
    u32 uVar3;
    u32 *pp;

    iVar2 = func_01ffdb08(param_2);
    if (iVar2 == 0) {
        goto ret0;
    }
    if (func_020bd6b4(iVar2, param_1) == 0) {
        goto ret0;
    }
    if (*(s32 *)(param_1 + 0xc0) < *(s32 *)(param_1 + 0xf8) * 2) {
        return 1;
    }
    uVar3 = func_02034528(iVar2);
    if (uVar3 == 0) {
        goto ret0;
    }
    if (*(s16 *)(param_1 + 0x90) != 3) {
        goto ret1b;
    }
    pp = *(u32 **)&data_02159468;
    uVar3 = *pp * 0x10dcd + 1;
    *pp = uVar3;
    if ((u16)uVar3 >= 0x4000) {
        goto ret0;
    }
    return 1;
ret1b:
    return 1;
ret0:
    return 0;
}
