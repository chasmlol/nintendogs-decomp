#pragma avoid_byte all
#include "ctx.h"

extern void func_02063908(u32 a, u32 b);

void func_02063454(u8 *param_1, u8 *param_2, u8 *param_3)
{
    u32 uVar8;
    s32 iVar1;
    u8 *puVar7;
    u8 *puVar6;
    s32 iVar3;
    s32 iVar4;
    s32 iVar9;
    u8 *puVar11;
    u8 *puVar10;
    u32 auStack_68[17];

    uVar8 = 0;
    iVar1 = (param_2[4] + param_3[4]) - 1;
    puVar7 = (u8 *)auStack_68 + iVar1 + 1;
    puVar6 = puVar7;
    param_1[0] = (u8)uVar8;
    if (iVar1 > 0) {
        do {
            iVar4 = param_3[4] - 1;
            iVar9 = (iVar1 - iVar4) - 1;
            if (iVar9 < 0) {
                iVar9 = 0;
                iVar4 = iVar1 - 1;
            }
            puVar11 = param_2 + 5 + iVar9;
            puVar10 = param_3 + 5 + iVar4;
            iVar3 = iVar4 + 1;
            iVar9 = param_2[4] - iVar9;
            if (iVar3 > iVar9) {
                iVar3 = iVar9;
            }
            if (0 < iVar3) {
                do {
                    u32 ta = *(vu8 *)puVar11;
                    u32 tb = *(vu8 *)puVar10;
                    iVar3 = iVar3 - 1;
                    uVar8 = ta * tb + uVar8;
                    puVar11 = puVar11 + 1;
                    puVar10 = puVar10 - 1;
                } while (0 < iVar3);
            }
            puVar7 = puVar7 - 1;
            *puVar7 = (u8)(uVar8 % 10);
            uVar8 = uVar8 / 10;
            iVar1 = iVar1 - 1;
        } while (iVar1 > 0);
    }
    *(s16 *)(param_1 + 2) = *(s16 *)(param_2 + 2) + *(s16 *)(param_3 + 2);
    if (uVar8 != 0) {
        puVar7 = puVar7 - 1;
        *puVar7 = (u8)uVar8;
        *(s16 *)(param_1 + 2) = *(s16 *)(param_1 + 2) + 1;
    }
    uVar8 = 0;
    for (; ((s32)uVar8 < 0x20 && (puVar7 < puVar6)); puVar7 = puVar7 + 1) {
        puVar11 = param_1 + uVar8 + 5;
        *puVar11 = *puVar7;
        uVar8 = uVar8 + 1;
    }
    param_1[4] = (u8)uVar8;
    if (puVar7 >= puVar6) {
        return;
    }
    uVar8 = *puVar7;
    if (uVar8 < 5) {
        return;
    }
    if (uVar8 == 5) {
        puVar11 = puVar7 + 1;
        if (puVar11 < puVar6) {
            do {
                if (*puVar11 != 0) {
                    goto call;
                }
                puVar11 = puVar11 + 1;
            } while (puVar11 < puVar6);
        }
        if ((puVar7[-1] & 1) == 0) {
            return;
        }
    }
call:
    func_02063908((u32)param_1, param_1[4]);
}
