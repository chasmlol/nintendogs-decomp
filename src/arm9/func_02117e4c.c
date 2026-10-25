#include "ctx.h"

extern u32 func_0205e270(u32 a, u32 b);
extern void func_02117ba4(u8 *p, u32 a, u32 b);

void func_02117e4c(u8 *param_1)
{
    u32 uVar4;
    s16 s26;
    s32 uVar6;
    u32 uVar3;
    int iVar2;
    int s24;
    s32 uVar5;

    iVar2 = *(s32 *)(param_1 + 0x14);
    if (0 != iVar2 && iVar2 != 1 && iVar2 != 4) {
        return;
    }
    *(s32 *)(0x14 + param_1) = 2;
    *(u16 *)(28 + param_1) = 0;
    *(u16 *)(param_1 + 30) = *(u16 *)(16 + param_1);
    if (*(s32 *)(0x14 + param_1) != 0) {
        uVar3 = *(u16 *)(param_1 + 28);
        s24 = *(s16 *)(24 + param_1);
        uVar4 = *(u16 *)(14 + param_1);
        s26 = *(s16 *)(26 + param_1);
        uVar5 = func_0205e270(*(s16 *)(param_1 + 10) * (uVar4 - uVar3) + (u32)s24 * uVar3, uVar4);
        uVar6 = func_0205e270(*(s16 *)(param_1 + 12) * (uVar4 - uVar3) + s26 * uVar3, uVar4);
        func_02117ba4(param_1, (s16)(uVar5 - s24), (s16)(uVar6 - s26));
    }
}
