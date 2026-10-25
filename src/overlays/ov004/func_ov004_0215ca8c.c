#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_propagation off
#pragma opt_loop_invariants off
#pragma opt_common_subs off

extern u8 *data_02159458;
extern u8 *data_ov004_02170320;
extern s32 func_01ffdb08(s32 a);
extern u8 *func_020280e4(s32 a, s32 b);
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);

static inline u8 SwapAt(u32 v, u8 *base, s32 idx, s32 off)
{
    u8 old;
    u8 *q = base + idx;
    vu8 *r;
    q = q + 0x2000;
    r = (vu8 *)(q + off);
    *(u8 *)(r) = (u8)(v);
    return old;
}

void func_ov004_0215ca8c(void)
{
    u8 *pp;
    u8 *sa;
    u8 *sb;
    s32 iVar9;
    s32 iVar7;
    s32 iVar3;
    s32 iVar8;

    iVar3 = func_01ffdb08(*(s16 *)(data_02159458 + 2));
    iVar9 = 0;
    do {
        u32 uVar6;
        s32 uVar5;
        u16 cur;
        s32 res;
        s32 h;

        sa = *(u8 **)(data_ov004_02170320 + 0x36c4);
        SwapAt(0, sa, iVar9, 709);
        iVar8 = -1;
        pp = func_020280e4(iVar3, (s16)iVar9);
        uVar5 = pp[1];
        uVar6 = pp[2];
        if ((u32)uVar5 < 0x20) {
            if (uVar6 < 0x20) {
                res = (uVar5 + uVar6 * 0x20) * 2;
            } else {
                res = (uVar5 + (uVar6 - 0x20) * 0x20) * 2 + 0x1000;
            }
        } else if (uVar6 < 0x20) {
            res = ((uVar5 - 0x20) + uVar6 * 0x20) * 2 + 0x800;
        } else {
            res = ((uVar5 - 0x20) + (uVar6 - 0x20) * 0x20) * 2 + 0x1800;
        }
        h = res >> 1;
        {
            cur = *(u16 *)(data_ov004_02170320 + h * 2 + 0x1394);
            iVar7 = 0;
            do {
                if (cur == *(u16 *)(data_ov004_02170320 + iVar7 * 2 + 0x1384)) {
                    iVar8 = iVar7;
                }
                iVar7 = iVar7 + 1;
            } while (iVar7 < 8);
        }
        if (iVar8 >= 4) {
            *(u16 *)(data_ov004_02170320 + h * 2 + 0x1394) = *(u16 *)(data_ov004_02170320 + iVar8 * 2 + 0x137c);
        }
        iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40);
    func_0207c910(27, 0, (u32)(data_ov004_02170320 + 0x1394), 0x2000);
}
