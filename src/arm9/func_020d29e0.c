#include "ctx.h"
#pragma opt_lifetimes off

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02067c30(s32 *a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);

void func_020d29e0(s32 *param_1)
{
    s32 blk[3];
    s32 iVar9;
    s32 iVar8;
    s32 *piVar7;
    s32 *p1c;
    s32 iVar6;
    s32 *piVar5;
    s32 iVar4;
    s32 iVar3;

    p1c = param_1;
    iVar6 = p1c[0] - 2;
    if (iVar6 < 0) {
        return;
    }
    iVar4 = iVar6 * 12;
    do {
        if (((s32 *)p1c[3])[iVar6] != 1) {
            iVar8 = p1c[6];
            piVar5 = (s32 *)p1c[1];
            iVar9 = (iVar8 * 99) / 100;
            piVar7 = (s32 *)((u32)piVar5 + iVar4);
            piVar5 = (s32 *)((u32)piVar5 + (iVar4 + 12));
            func_02067e34(piVar7, piVar5, blk);
            iVar3 = func_02067c30(blk);
            if (iVar3 > iVar8) {
                iVar3 = func_02067898(iVar8, iVar3);
                blk[0] = FX_Mul(blk[0], iVar3);
                blk[1] = FX_Mul(blk[1], iVar3);
                blk[2] = FX_Mul(blk[2], iVar3);
                func_02067e68(piVar5, blk, piVar7);
            } else if (iVar3 < iVar9) {
                iVar3 = func_02067898(iVar9, iVar3);
                blk[0] = FX_Mul(blk[0], iVar3);
                blk[1] = FX_Mul(blk[1], iVar3);
                blk[2] = FX_Mul(blk[2], iVar3);
                func_02067e68(piVar5, blk, piVar7);
            }
        }
        iVar4 = iVar4 - 12;
        iVar6 = iVar6 - 1;
    } while (iVar6 >= 0);
}
