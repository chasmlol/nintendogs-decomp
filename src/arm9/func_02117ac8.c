#include "ctx.h"
#pragma opt_propagation off

extern u8 data_02126868[];
extern u32 func_0205e47c(u32 a, u32 b);
extern u64 func_0205e270(u32 a, u32 b);
extern void func_02117ba4(u8 *p, s16 a, s16 b);

void func_02117ac8(s32 *param_1, s32 param_2)
{
    u8 *p;
    u32 uVar4;
    u16 uVar1;
    u32 t;
    u64 uVar6;
    u64 uVar7;
    u32 uVar5;
    s16 sVar2;
    s16 sI3;
    u32 diff;

    p = (u8 *)param_1;
    if (*(s32 *)(p + 20) != 0) {
        if (param_2 == 0) {
            uVar4 = *(u16 *)(p + 28);
        } else {
            uVar1 = *(u16 *)(p + 14);
            t = func_0205e47c((u32)*(u16 *)(p + 28) << 15, (u32)uVar1);
            uVar4 = ((u32)((u32)uVar1 >> 1) * (u32)(*(s16 *)(data_02126868 + ((s32)(u16)(t + 0xc000) >> 4) * 4) + 0x1000) * 0x10) >> 16;
        }
        sI3 = *(s16 *)(p + 24);
        uVar5 = *(u16 *)(p + 14);
        sVar2 = *(s16 *)(p + 26);
        diff = uVar5 - uVar4;
        uVar6 = func_0205e270((s32)*(s16 *)(p + 10) * diff + (s32)sI3 * uVar4, uVar5);
        uVar7 = func_0205e270((s32)*(s16 *)(p + 12) * diff + (s32)sVar2 * uVar4, uVar5);
        func_02117ba4(p, (s32)uVar6 - sI3, (s32)uVar7 - sVar2);
    }
}
