#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off

extern s16 data_02132e00[];
extern s8 data_02132df0[];

#pragma opt_propagation off
#pragma scheduling off
u32 func_020dffa0(s16 *param_1, u8 *param_2, u32 param_3, s16 *param_4)
{
    u32 uVar1;
    s32 iVar9;
    u32 nib;
    u32 bVar4;
    u32 sign;
    u32 uVar10;
    s32 iVar8;
    s32 sVar3;
    s32 iVar6;
    s32 iVar5;
    s32 iVar12;
    s32 iVar2;

    uVar1 = param_3 >> 1;
    iVar12 = (s8)((s8 *)param_4)[2];
    iVar6 = param_4[0];
    sVar3 = data_02132e00[iVar12];
    bVar4 = 0;
    if (param_3 != 0) {
        s32 kSign8;
        s32 kSign0;
        s32 kDelta0;
        s32 kDelta4;
        u32 kLo;
        u32 kIdx0;
        u32 kIdx88;
        s32 kB1;
        s32 kB0;
        kLo = -0x8000;
        kSign8 = 8;
        kDelta4 = 4;
        kIdx88 = 88;
        kSign0 = 0;
        kDelta0 = 0;
        kIdx0 = 0;
        kB0 = 0;
        kB1 = 1;
        do {
            iVar2 = sVar3 >> 1;
            iVar8 = *param_1++ - iVar6;
            if (iVar8 < 0) {
                sign = kSign8;
            } else {
                sign = kSign0;
            }
            uVar10 = kDelta0;
            iVar5 = sVar3 >> 3;
            if (sign != 0) {
                iVar8 = -iVar8;
            }
            if (iVar8 >= sVar3) {
                uVar10 = kDelta4;
                iVar8 = iVar8 - sVar3;
                iVar5 = iVar5 + sVar3;
            }
            if (iVar8 >= iVar2) {
                iVar8 = iVar8 - iVar2;
                iVar5 = iVar5 + iVar2;
                uVar10 = uVar10 | 2;
            }
            iVar9 = sVar3 >> 2;
            if (iVar8 >= iVar9) {
                iVar5 = iVar5 + iVar9;
                uVar10 = uVar10 | 1;
            }
            if (sign != 0) {
                iVar6 = iVar6 - iVar5;
            } else {
                iVar6 = iVar6 + iVar5;
            }
            if (iVar6 > 0x7fff) {
                iVar6 = 0x7fff;
            } else if (iVar6 < -0x8000) {
                iVar6 = kLo;
            }
            uVar10 = uVar10 | sign;
            iVar12 = iVar12 + data_02132df0[uVar10];
            if (iVar12 < 0) {
                iVar12 = kIdx0;
            }
            if (iVar12 > 88) {
                iVar12 = kIdx88;
            }
            sVar3 = data_02132e00[iVar12];
            if (bVar4 == 0) {
                nib = uVar10 & 0xf;
            } else {
                *param_2 = (u8)(((uVar10 << 4) & 0xf0) | nib);
                param_2 = param_2 + 1;
            }
            if (bVar4 == 0) {
                bVar4 = kB1;
            } else {
                bVar4 = kB0;
            }
            param_3 = param_3 - 1;
        } while (param_3 != 0);
    }
    if (bVar4) {
        *param_2 = (u8)nib;
    }
    param_4[0] = iVar6;
    *(s8 *)(param_4 + 1) = (s8)iVar12;
    return uVar1;
}
