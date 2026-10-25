#include "ctx.h"

extern u32 data_0215be4c;
extern void func_0206c7bc(u16 a, s32 b, s32 c);

void func_02101328(u32 param_1, s32 param_2, u32 param_3)
{
    u8 *iVar8;
    u32 t;
    u32 uVar5;
    s32 iVar4;
    s32 iVar6;
    u32 uVar9;
    u32 uVar1;
    u32 uVar3;
    u8 *q;
    vu16 local;

    uVar3 = data_0215be4c;
    t = param_3 & 0xf;
    uVar5 = 0;
    iVar8 = (u8 *)((uVar3 + 4) + param_2 * 0x1b8);
    q = iVar8 + 0x18;
    iVar4 = *(s32 *)(iVar8 + 0x14);
    if (*(s32 *)(iVar8 + 4) == 0) {
        return;
    }
    if (*(s32 *)(iVar8 + 8) != 0) {
        return;
    }
    iVar6 = 0;
    uVar9 = 0;
    do {
        uVar1 = t << uVar9;
        uVar5 = (u16)(uVar5 | uVar1);
        iVar6 = iVar6 + 1;
        uVar9 = uVar9 + 4;
    } while (iVar6 < 8);
    iVar6 = uVar3 + 0x2948;
    if (iVar6 != 0) {
        uVar3 = (*(u16 *)(q + 0x24) * 0x20) / 2;
        iVar6 = iVar6 + uVar3 * 2;
    }
    local = uVar5;
    func_0206c7bc(local, iVar6, iVar4);
    *(s32 *)(q + 0x20) = 1;
}
