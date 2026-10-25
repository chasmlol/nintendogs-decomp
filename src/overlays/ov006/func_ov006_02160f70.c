#include "ctx.h"
extern u8 data_0214f45c[];
extern u8 data_0214f464[];
extern u8 *func_0200c498(s32 a, s32 b);
extern void func_02067e34(u8 *a, u8 *b, s32 *c);
extern s32 func_02009f38(s32 *a, s32 *b);
extern s32 func_02027e4c(u8 *p, s32 a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov006_02160f70(u8 *param_1)
{
    s32 blk[7];
    s32 bVar3;
    s32 iVar8;
    s32 iVar7;
    s32 iVar6;
    s32 iVar4;
    s32 iVar5;

    iVar6 = 0;
    iVar8 = 0;
    iVar7 = 0x384000;
    if (0 < *(s16 *)(*(u8 **)(*(u8 **)data_0214f45c + 0x20) + 0x2e)) {
        do {
            iVar4 = (s32)func_0200c498(11, iVar8);
            if (iVar4 != 0) {
                func_02067e34((u8 *)iVar4 + 8, param_1 + 0x2a0, &blk[0]);
                func_02067e34(*(u8 **)data_0214f464 + 0x74, param_1 + 0x2a0, &blk[3]);
                bVar3 = func_02009f38(&blk[0], &blk[3]);
                if (bVar3) {
                    iVar5 = FX_Mul(blk[0], blk[0]) + FX_Mul(blk[2], blk[2]);
                    if (iVar5 < iVar7) {
                        iVar7 = iVar5;
                        iVar6 = iVar4;
                    }
                }
            }
            iVar8 = (s16)(iVar8 + 1);
        } while (iVar8 < *(s16 *)(*(u8 **)(*(u8 **)data_0214f45c + 0x20) + 0x2e));
    }
    if (iVar6 != 0) {
        s32 d1;
        s32 d2;
        s32 d3;

        iVar8 = func_02027e4c(param_1, 0);
        iVar8 = 0x333 + (iVar8 * 0x2752 >> 15);
        d1 = *(s32 *)(param_1 + 0x26c) - *(s32 *)(iVar6 + 8);
        *(u32 *)(param_1 + 0x26c) = *(s32 *)(iVar6 + 8) + FX_Mul(d1, iVar8);
        d2 = *(s32 *)(param_1 + 0x270) - *(s32 *)(iVar6 + 0xc);
        *(u32 *)(param_1 + 0x270) = *(s32 *)(iVar6 + 0xc) + FX_Mul(d2, iVar8);
        d3 = *(s32 *)(param_1 + 0x274) - *(s32 *)(iVar6 + 0x10);
        *(u32 *)(param_1 + 0x274) = *(s32 *)(iVar6 + 0x10) + FX_Mul(d3, iVar8);
    }
}
