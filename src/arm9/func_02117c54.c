#include "ctx.h"

extern s32 func_0205e270(s32 a, s32 b);
extern void func_02117ba4(u8 *p, s32 a, s32 b);

void func_02117c54(u8 *param_1)
{
    s32 uVar4;
    s16 sVar1;
    s32 keep;
    u32 uVar3;
    s32 iVar2;
    s32 r0b;

    *(u32 *)(param_1 + 0x14) = 3;
    *(u16 *)(param_1 + 0x1c) = *(u16 *)(param_1 + 0xe);
    if (*(u32 *)(param_1 + 0x14) != 0) {
        uVar3 = *(u16 *)(param_1 + 0x1c);
        keep = *(s16 *)(param_1 + 0x18);
        uVar4 = *(u16 *)(param_1 + 0xe);
        sVar1 = *(s16 *)(param_1 + 0x1a);
        iVar2 = func_0205e270(*(s16 *)(param_1 + 0xa) * (uVar4 - uVar3) + (s16)keep * uVar3, uVar4);
        r0b = func_0205e270((s16)*(s16 *)(param_1 + 0xc) * (uVar4 - uVar3) + (s16)sVar1 * uVar3, uVar4);
        func_02117ba4(param_1, (s16)(iVar2 - keep), (s16)(r0b - sVar1));
    }
}
