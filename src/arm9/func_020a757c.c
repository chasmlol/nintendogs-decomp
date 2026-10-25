#include "ctx.h"

extern u32 data_0212f720;
extern u32 data_0215942c;
extern u32 func_020a7664(u32 a, u32 b);

void func_020a757c(u32 *param_1, u32 param_2, u32 param_3)
{
    s64 lVar1;
    u32 uVar3;
    s32 iVar4;
    u16 v;

    uVar3 = func_020a7664(param_2, param_3);
    param_1[0] = 0;
    *(u16 *)(param_1 + 1) = 8;
    *(s16 *)((u8 *)param_1 + 6) = (s16)uVar3;
    param_1[2] = 0x1000;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    iVar4 = uVar3 * 0x1c + (s32)&data_0212f720;
    param_1[4] = 0;
    param_1[5] = *(u32 *)(iVar4 + 0x14);
    v = *(u16 *)*(u32 **)&data_0215942c;
    switch (v) {
    case 12:
        param_1[5] = 0xa000;
        break;
    case 0x8003:
        if ((s32)param_1[5] > 0x13000) {
            param_1[5] = 0x13000;
        }
        break;
    }
    param_1[2] = 0x1000;
    if (uVar3 == 0x1b) {
        param_1[4] = 0x5000;
    }
    lVar1 = (s64)(s32)param_1[5] * (s64)(s32)param_1[2] + 0x800;
    param_1[3] = (u32)(lVar1 >> 12);
}
