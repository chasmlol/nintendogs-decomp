#include "ctx.h"

s32 func_0205e270(s32 a, u32 b);

void func_020855a8(u8 *param_1, u8 *param_2, s32 param_3)
{
    s16 sVar1;
    s16 *psVar2;
    s32 uVar3;
    u32 b7;

    psVar2 = *(s16 **)(param_2 + 4);
    b7 = *(u8 *)((u8 *)psVar2 + 7);
    if (param_3 < (s32)*(u8 *)((u8 *)psVar2 + 6)) {
        sVar1 = psVar2[0];
        uVar3 = func_0205e270(param_3 * ((s32)psVar2[1] - (s32)sVar1), *(u8 *)((u8 *)psVar2 + 6));
        *(s16 *)(param_1 + 0x34) = sVar1 + uVar3;
        return;
    }
    if (param_3 < (s32)b7) {
        *(s16 *)(param_1 + 0x34) = psVar2[1];
        return;
    }
    sVar1 = psVar2[2];
    uVar3 = func_0205e270((param_3 - 0xff) * ((s32)sVar1 - (s32)psVar2[1]), 0xff - b7);
    *(s16 *)(param_1 + 0x34) = sVar1 + uVar3;
}
