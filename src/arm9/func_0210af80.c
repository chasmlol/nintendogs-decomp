#include "ctx.h"

extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_020fbf30(s32 *p, u32 v);

void func_0210af80(u8 *param_1)
{
    s32 *piVar3;
    s32 iVar2;
    u32 uVar1;

    piVar3 = (s32 *)(param_1 + 0x144);
    uVar1 = 0;
    do {
        func_02112798(0, (u16)uVar1, 0);
        uVar1 = uVar1 + 1;
    } while ((s32)uVar1 < 10);
    iVar2 = 0;
    do {
        func_02112798(0, (u16)(iVar2 + 10), 0);
        iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar2 = 0;
    do {
        func_02112798(0, (u16)(iVar2 + 0x1b), 1);
        iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
    do {
        func_02112798(0, (u16)(iVar2 + 0x20), 1);
        func_02112798(0, (u16)(iVar2 + 0x14), 0);
        iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
    do {
        func_02112798(0, (u16)(iVar2 + 0x23), 1);
        iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    if (*(u16 *)(param_1 + 0xa4) == 10) {
        func_02112798(0, 0x1e, 1);
        func_02112798(0, 0x1f, 0);
    } else {
        func_02112798(0, 0x1e, 0);
        func_02112798(0, 0x1f, 1);
    }
    if (*(u16 *)(param_1 + 0xa8) == 1) goto one_a8;
    func_02112798(0, 0x26, 0);
    func_02112798(0, 0x27, 1);
    goto after_a8;
one_a8:
    func_02112798(0, 0x26, 1);
    func_02112798(0, 0x27, 0);
after_a8:
    func_020fbf30((s32 *)(param_1 + 4), piVar3[1]);
    if (*piVar3 == 3 || *piVar3 == 0) {
        iVar2 = 0;
        do {
            func_02112798(0, (u16)(iVar2 + 0x17), 0);
            iVar2 = iVar2 + 1;
        } while (iVar2 < 2);
        func_02112798(0, 0x1a, 0);
        func_02112798(0, 0x19, 0);
    } else {
        if (piVar3[1] == 1) goto one_148;
        func_02112798(0, 0x19, 1);
        func_02112798(0, 0x1a, 0);
        goto after_148;
    one_148:
        func_02112798(0, 0x19, 0);
        func_02112798(0, 0x1a, 1);
    after_148:
        ;
    }
    iVar2 = *piVar3;
    switch (iVar2) {
    case 1:
        func_02112798(0, 0x16, 1);
        break;
    case 2:
        func_02112798(0, 0x15, 1);
        break;
    case 3:
        func_02112798(0, 0x14, 1);
        break;
    }
    if (0 < piVar3[2] &&
        (piVar3[2] = piVar3[2] - 1, piVar3[2] == 0)) {
        *piVar3 = 0;
    }
    if (*(u16 *)(param_1 + 0xa4) < 100) {
        *(u16 *)(param_1 + 0x46) = 2;
        func_02112798(0, 0x1d, 0);
    } else {
        *(u16 *)(param_1 + 0x46) = 3;
    }
    func_020fbf30((s32 *)(param_1 + 0x2c), *(u16 *)(param_1 + 0xa4));
    func_020fbf30((s32 *)(param_1 + 0x54), *(u16 *)(param_1 + 0xa6));
    func_020fbf30((s32 *)(param_1 + 0x7c), *(u16 *)(param_1 + 0xa8));
}
