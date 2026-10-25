#pragma avoid_byte strb
#include "ctx.h"

extern s16 data_02132e00[];
extern s8 data_02132df0[];

s32 func_020dfe88(s8 *param_1, s16 *param_2, s32 param_3, s16 *param_4)
{
    s32 iVar1;
    s32 bVar4;
    s32 sgn;
    s32 nib;
    s32 sVar3;
    s32 iVar8;
    s32 iVar7;
    s32 iVar6;
    s32 in_lr;

    iVar6 = ((s8 *)param_4)[2];
    iVar1 = param_3 << 1;
    iVar8 = param_4[0];
    sVar3 = data_02132e00[iVar6];
    bVar4 = 0;
    if (param_3 != 0) do {
        if (bVar4 == 0) {
            in_lr = *param_1++;
            nib = in_lr & 15;
        } else {
            nib = (in_lr >> 4) & 15;
        }
        bVar4 = (bVar4 == 0);
        iVar6 = iVar6 + data_02132df0[nib];
        if (iVar6 < 0) {
            iVar6 = 0;
        }
        if (iVar6 > 0x58) {
            iVar6 = 0x58;
        }
        sgn = nib & 8;
        iVar7 = sVar3 >> 3;
        if ((nib & 4) != 0) {
            iVar7 = iVar7 + sVar3;
        }
        if ((nib & 2) != 0) {
            iVar7 = iVar7 + (sVar3 >> 1);
        }
        if ((nib & 1) != 0) {
            iVar7 = iVar7 + (sVar3 >> 2);
        }
        if (sgn != 0) {
            iVar8 = iVar8 - iVar7;
        } else {
            iVar8 = iVar8 + iVar7;
        }
        if (iVar8 > 0x7fff) {
            iVar8 = 0x7fff;
        } else if (iVar8 < -0x8000) {
            iVar8 = -0x8000;
        }
        sVar3 = data_02132e00[iVar6];
        *param_2 = (s16)iVar8;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
    } while (param_3 != 0);
    param_4[0] = (s16)iVar8;
    param_2 = param_4 + 1;
    *(u8 *)(param_2) = (u8)(iVar6);
    return iVar1;
}
