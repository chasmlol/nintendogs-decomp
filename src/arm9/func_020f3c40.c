#include "ctx.h"

extern u8 *data_0215be44;
extern s8 data_02133124[];
extern u8 data_021330cc[];
extern u8 data_02133114[];
extern void func_0208f54c(u8 *a, s32 b);
extern void func_0208f588(u8 *a, s32 b);

static inline s8 SwapS8(s32 v, vu8 *p) { s8 old; asm { swpb old, v, [p] } return old; }


void func_020f3c40(s32 param_1)
{
    s32 iVar10;
    s32 uVar9;
    s32 iVar8;
    s32 iVar7;
    s32 iVar6;
    s32 iVar3;
    s32 iVar4;
    s32 o;
    u8 *tp;
    s32 iVx;

    if (*(s32 *)(data_0215be44 + 0x18) == param_1) {
        return;
    }
    if (*(s8 *)(data_0215be44 + 0x12) == -1) {
        *(s32 *)(data_0215be44 + 0x18) = param_1;
        iVx = param_1 * 24;
        {
            s8 *tb = data_02133124;
            u8 *pp = data_0215be44;
            asm { ldrsb r3, [tb, iVx]; add r1, pp, #18 }
            tp = data_021330cc;
            asm { swpb r0, r3, [r1] }
        }
        uVar9 = tp[2];
        iVar8 = 0;
        iVar6 = 0;
        do {
            iVar7 = 0;
            if (uVar9 > 0) {
                do {
                    o = (s32)data_0215be44;
                    iVar3 = *(s32 *)(iVar6 + o + iVar7 * 4 + 0x190);
                    if (iVar3 != 0) {
                        func_0208f54c((u8 *)(o + 0x230), iVar3);
                    }
                    iVar7 = iVar7 + 1;
                } while (iVar7 < uVar9);
            }
            iVar8 = iVar8 + 1;
            iVar6 = iVar6 + 0x14;
        } while (iVar8 < 8);
        iVar8 = 0;
        iVar10 = 0;
        do {
            iVar3 = 0;
            if (uVar9 > 0) {
                do {
                    o = (s32)data_0215be44;
                    if (iVar8 == *(s8 *)(*(s32 *)(o + 0x14) * 24 + data_02133114 + 0x10) &&
                        (iVar4 = *(s32 *)(iVar10 + o + iVar3 * 4 + 0x190), iVar4 != 0)) {
                        func_0208f588((u8 *)(o + 0x230), iVar4);
                    }
                    iVar3 = iVar3 + 1;
                } while (iVar3 < uVar9);
            }
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + 0x14;
        } while (iVar8 < 8);
        iVar8 = 0;
        iVar10 = 0;
        do {
            iVar7 = 0;
            if (uVar9 > 0) {
                do {
                    o = (s32)data_0215be44;
                    if (iVar8 != *(s8 *)(*(s32 *)(o + 0x14) * 24 + data_02133114 + 0x10) &&
                        (iVar4 = *(s32 *)(iVar10 + o + iVar7 * 4 + 0x190), iVar4 != 0)) {
                        func_0208f588((u8 *)(o + 0x230), iVar4);
                    }
                    iVar7 = iVar7 + 1;
                } while (iVar7 < uVar9);
            }
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + 0x14;
        } while (iVar8 < 8);
    }
}
