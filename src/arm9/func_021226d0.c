#include "ctx.h"
extern u64 func_0205e270(u32 a, u32 b);

s32 func_021226d0(int param_1, int param_2)
{
    int hiB;
    int iVar8;
    u32 uVar7;
    int iVar1;
    s32 iVar6;
    int iVar5;
    u32 uVar4;
    int iVar3;
    u64 uVar9;
    u64 uVar10;
    u32 iVar2;
    int local_28;
    uVar7 = (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x3c)) + 2;
    iVar3 = *(int *)(param_1 + 0xc);
    iVar1 = *(int *)(param_1 + 0x48);
    iVar6 = *(int *)(param_1 + 0x10) - iVar3;
    iVar8 = 0;
    local_28 = iVar1;
    if ((s32)uVar7 >= 0) {
        iVar5 = 0;
    iVar2 = param_2;
        uVar4 = 0;
        do {
            uVar9 = func_0205e270(iVar5 + iVar6, uVar7);
            hiB = iVar3 + (int)uVar9;
            uVar10 = func_0205e270(uVar4, uVar7);
            iVar2 = (uVar10 >> 32);
            if ((iVar3 + (int)uVar10 <= param_2) && (param_2 < hiB)) {
                local_28 = iVar8;
                break;
            }
            iVar5 = iVar5 + iVar6;
            iVar8 = iVar8 + 1;
            uVar4 = iVar6 + uVar4;
        } while (iVar8 <= (s32)uVar7);
    }
    return local_28;
}
