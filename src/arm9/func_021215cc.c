#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern void func_02112798(s32 a, s32 b, s32 c);
extern s32 func_0205e270(s32 a, s32 b);
extern s32 func_02112bc0(s32 a, s32 b);
extern void func_02112a50(s32 a, s32 b, s32 c, s32 d);

void func_021215cc(u8 *param_1)
{
    s32 uVar5;
    s32 iVar4;
    s32 uVar7;
    u32 uVar1;
    s32 uVar6;
    s32 iVar3;
    s32 sVar2;

    func_02112798(2, (u16)*(s32 *)(param_1 + 4), 1);
    func_02112798(2, (u16)(*(s32 *)(param_1 + 4) + 3), 1);
    func_02112798(2, (u16)(*(s32 *)(param_1 + 4) + 2), 0);
    func_02112798(2, (u16)(*(s32 *)(param_1 + 4) + 5), 0);
    if (*(s32 *)(param_1 + 0x4c) == 0) {
        func_02112798(2, (u16)(*(s32 *)(param_1 + 4) + 3), 0);
        func_02112798(2, (u16)(*(s32 *)(param_1 + 4) + 5), 1);
    } else if (*(s32 *)(param_1 + 0x4c) == (*(s32 *)(param_1 + 0x44) - *(s32 *)(param_1 + 0x3c)) + 2) {
        func_02112798(2, (u16)*(s32 *)(param_1 + 4), 0);
        func_02112798(2, (u16)(*(s32 *)(param_1 + 4) + 2), 1);
    }
    iVar4 = *(s32 *)(param_1 + 0x48);
    uVar5 = (*(s32 *)(param_1 + 0x44) - *(s32 *)(param_1 + 0x3c)) + 2;
    iVar3 = *(s32 *)(param_1 + 4);
    uVar1 = (u16)(iVar3 + 7);
    uVar6 = func_0205e270(*(s32 *)(param_1 + 0xc) * (uVar5 - iVar4), uVar5);
    uVar7 = func_0205e270(*(s32 *)(param_1 + 0x10) * iVar4, uVar5);
    sVar2 = uVar6 + uVar7;
    sVar2 -= func_02112bc0(2, uVar1);
    func_02112a50(2, uVar1, 0, sVar2);
    func_02112a50(2, (u16)(iVar3 + 8), 0, sVar2);
    iVar4 = *(s32 *)(param_1 + 0x5c);
    if (iVar4 > 5) {
        *(s32 *)(param_1 + 0x5c) = iVar4 - 5;
    } else if (iVar4 < -5) {
        *(s32 *)(param_1 + 0x5c) = iVar4 + 5;
    } else {
        *(s32 *)(param_1 + 0x5c) = 0;
        *(s32 *)(param_1 + 0x38) = 0;
    }
    iVar4 = 0;
    if (*(s32 *)(param_1 + 0x3c) <= 0) {
        return;
    }
    do {
        iVar3 = 0;
        if (*(s32 *)(param_1 + 0x14) > 0) {
            do {
                func_02112a50(2, (u16)(iVar4 + *(u16 *)(param_1 + (u32)iVar3 * 2 + 0x18)), 0,
                              *(s32 *)(param_1 + 0x5c));
                iVar3 = iVar3 + 1;
            } while (iVar3 < *(s32 *)(param_1 + 0x14));
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 < *(s32 *)(param_1 + 0x3c));
}
