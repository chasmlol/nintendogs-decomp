#include "ctx.h"

s32 func_020fc220(u32 param_1, u16 *param_2, s32 param_3, u16 param_4)
{
    u32 uVar8 = param_1;
    s32 iVar6;
    s32 iVar5 = 1;
    s32 iVar7 = 0;
    do {
        uVar8 = uVar8 / 10;
        if (uVar8 == 0) {
            break;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 1;
    } while (iVar7 < 10);
    if (param_1 == 0) {
        iVar5 = param_3 + 1;
    } else if (iVar5 <= param_3) {
        iVar5 = iVar5 + (param_3 - iVar5 + 1);
    }
    iVar6 = 0;
    iVar7 = iVar5;
    if (iVar5 > 0) {
        do {
            param_2[iVar7] = (u16)(param_1 % 10) + 0x30;
            param_1 = param_1 / 10;
            iVar7 = iVar7 - 1;
            param_3 = param_3 - 1;
            if (param_3 == 0) {
                param_2[iVar7] = param_4;
                iVar7 = iVar7 - 1;
                if (param_1 == 0) {
                    param_2[iVar7] = 0x30;
                    iVar6 = iVar5;
                }
            }
            iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
    }
    {
        u16 *e = param_2 + iVar5;
        e[1] = 0;
    }
    return iVar5 + 1;
}
