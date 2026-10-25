#include "ctx.h"

extern u8 data_0213a8d4[];
extern u8 data_021369a8[];
extern s32 func_020dddb0(s32 a, s32 b);
extern void func_0202406c(u8 *p, u16 *q);
extern s32 func_0202334c(u8 *p);
extern s32 func_02023ea0(u8 *p);

s32 func_020230fc(u8 *param_1)
{
    s32 local_28;
    s32 iVar6;
    u16 *puVar5;
    s32 p1;
    u32 uVar4;
    s32 iVar3;

    iVar6 = 0;
    local_28 = 0;
    do {
        if (iVar6 < 0 || iVar6 >= 20) {
            puVar5 = 0;
        } else {
            puVar5 = (u16 *)(*(u8 **)(param_1 + 0x9e8) + 0x90 + (s16)iVar6 * 60);
        }
        if (puVar5 == 0) {
            iVar3 = 0;
        } else {
            uVar4 = puVar5[0];
            if (uVar4 == 0) {
                iVar3 = 0;
            } else {
                p1 = puVar5[1];
                if (p1 == 0) {
                    iVar3 = local_28;
                } else {
                    if (uVar4 >= 0x4f && uVar4 < 0x63) {
                        iVar3 = *(s32 *)(data_0213a8d4 + 0x13c);
                    } else {
                        iVar3 = *(s32 *)(data_0213a8d4 + uVar4 * 4);
                    }
                    if (p1 < (s32)*(u8 *)((*(u8 **)(param_1 + 0x9e8))[0x13] - 1 +
                                          ((*(u8 *)(iVar3 + 2) - 1) * 5 + data_021369a8))) {
                        iVar3 = 1;
                    } else {
                        iVar3 = 2;
                    }
                }
            }
        }
        if (iVar3 == 1 && func_020dddb0((s8)param_1[0x88], iVar6)) {
            func_0202406c(param_1, puVar5);
        }
        iVar6 = (s16)(iVar6 + 1);
    } while (iVar6 < 20);
    *(s16 *)(param_1 + 0xf6) = (s16)func_0202334c(param_1);
    return func_02023ea0(param_1);
}
