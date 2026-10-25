#include "ctx.h"

extern u8 data_0212f514[];
extern s32 func_02090abc(s32 a, s32 b);

void func_02091d80(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;
    u32 uVar3;

    *(u16 *)(param_1 + 0) = 1;
    iVar1 = func_02090abc(*(s32 *)(param_1 + 0x2c), *(s32 *)(param_1 + 0x20));
    *(s32 *)(param_1 + 0x30) = iVar1;
    iVar2 = 0;
    *(u16 *)(param_1 + 8) = 0;
    *(u16 *)(param_1 + 26) = 1;
    *(u16 *)(param_1 + 12) = 30;
    *(u16 *)(param_1 + 16) = 0;
    *(u16 *)(param_1 + 20) = 1;
    *(u16 *)(param_1 + 4) = *(s16 *)(data_0212f514 + 10);
    if (*(s16 *)(param_1 + 88) > 0) {
        do {
            ((u16 *)(param_1 + 90))[iVar2] = 0;
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(s16 *)(param_1 + 88));
    }
    *(u16 *)(param_1 + 88) = 0;
    *(u16 *)(param_1 + 52) = 0;
    uVar3 = 0;
    do {
        ((u32 *)(param_1 + 0x38))[uVar3] = 0;
        uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
}
