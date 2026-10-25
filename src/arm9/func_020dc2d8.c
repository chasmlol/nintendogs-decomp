#include "ctx.h"
#pragma opt_loop_invariants off

extern s32 func_0205e270(s32 a, s32 b);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_0205e47c(s32 a, s32 b);

u32 func_020dc2d8(s16 *param_1, s16 *param_2, u32 param_3)
{
    s32 iVar12;
    s32 iVar11;
    s32 iVar10;
    s32 iVar9;
    s32 iVar8;
    s32 iVar7;
    u32 uVar6;
    u32 ret;
    s32 step;
    s32 pos;
    s32 limit;
    s32 j;
    s16 *q;
    u32 uVar5;

    ret = 1;
    uVar6 = 1;
    iVar10 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar12 = 0;
    uVar5 = 0;
    if (param_3 < 4000) {
        uVar6 = 3;
    } else if (param_3 < 8000) {
        uVar6 = 2;
    }
    step = func_02067898(param_3, func_0205e270(0x30, uVar6));
    limit = (s32)(param_3 << 12);
    pos = 0;
    for (; pos < limit && iVar10 < 0x30;) {
        s32 mx;
        iVar11 = 0;
        iVar9 = 0;
        {
            s32 iVar4;
            s32 iVar3 = pos;
            s32 iVar2 = pos;
            s32 bnd = iVar3 + step;
            if (iVar3 < bnd) {
                iVar2 = iVar2 >> 12;
                do {
                    iVar4 = param_2[iVar2];
                    if (iVar4 < 0) {
                        iVar4 = (s16)(-iVar4);
                        if (iVar4 > iVar9) {
                            iVar9 = iVar4;
                        }
                    } else if (iVar4 > iVar11) {
                        iVar11 = iVar4;
                    }
                    iVar2++;
                    iVar3 += 0x1000;
                } while (iVar3 < bnd);
            }
        }
        j = 0;
        if (0 < (s32)(uVar6 - 1)) {
            do {
                s32 t2;
                iVar8 = (s16)(iVar8 + (s16)func_0205e270(iVar11 - iVar8, uVar6));
                iVar7 = (s16)(iVar7 + (s16)func_0205e270(iVar9 - iVar7, uVar6));
                q = (s16 *)((u32)param_1 + (u32)iVar10 * 2);
                q[2] = (s16)iVar8;
                q[0x32] = (s16)iVar7;
                if (iVar8 >= iVar7) {
                    t2 = iVar8;
                } else {
                    t2 = iVar7;
                }
                if (t2 >= 0x3fff) {
                    uVar5++;
                }
                if (t2 >= 0x7f58) {
                    iVar12++;
                }
                iVar10++;
                j++;
            } while (j < ((s32)uVar6 + -1));
        }
        q = param_1 + iVar10;
        q[2] = (s16)iVar11;
        q[0x32] = (s16)iVar9;
        iVar8 = iVar11;
        mx = iVar11;
        if (iVar11 < iVar9) {
            mx = iVar9;
        }
        if (mx >= 0x3fff) {
            uVar5++;
        }
        iVar7 = iVar9;
        if (mx >= 0x7f58) {
            iVar12++;
        }
        iVar10++;
        pos = pos + step;
    }
    if (uVar5 > 0x18) {
        uVar5 = func_0205e47c(iVar12 * 100, uVar5);
        if (uVar5 > 0x50) {
            ret = 0;
        }
    }
    *param_1 = (s16)param_3;
    return ret;
}
