#pragma avoid_byte strb
#include "ctx.h"

#define FXM(a, b) ((u32)((((s64)(s32)(a) * (s64)(s32)(b)) + 0x800) >> 12))

extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067c30(s32 *a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);

void func_020d2b80(s32 *param_1)
{
    s32 base;
    s32 iVar3;
    s32 uStk[3];
    s32 iVar9;
    s32 iVar8;
    s32 *piVar7;
    s32 *pp;
    s32 iVar6;
    s32 *piVar5;
    s32 iVar4;

    pp = param_1;
    iVar6 = 1;
    if (*pp - 1 >= 1) {
        iVar4 = 12;
        do {
            if (((s32 *)pp[3])[iVar6] != 1) {
                iVar8 = pp[6];
                base = pp[1];
                iVar9 = (iVar8 * 99) / 100;
                piVar7 = (s32 *)(base + iVar4);
                piVar5 = (s32 *)(base + (iVar4 - 12));
                func_02067e34(piVar7, piVar5, uStk);
                iVar3 = func_02067c30(uStk);
                if (iVar3 > iVar8) {
                    iVar3 = func_02067898(iVar8, iVar3);
                    uStk[0] = FXM(uStk[0], iVar3);
                    uStk[1] = FXM(uStk[1], iVar3);
                    uStk[2] = FXM(uStk[2], iVar3);
                    func_02067e68(piVar5, uStk, piVar7);
                } else if (iVar3 < iVar9) {
                    iVar3 = func_02067898(iVar9, iVar3);
                    uStk[0] = FXM(uStk[0], iVar3);
                    uStk[1] = FXM(uStk[1], iVar3);
                    uStk[2] = FXM(uStk[2], iVar3);
                    func_02067e68(piVar5, uStk, piVar7);
                }
            }
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 12;
        } while (iVar6 <= *pp - 1);
    }
}
