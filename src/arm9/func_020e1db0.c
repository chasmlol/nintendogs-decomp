#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

extern u32 data_0215b71c;
extern s32 data_0215b728;
extern s32 data_0215b720;
extern u32 data_0215b718;
extern u8 *data_0215b724;
extern s16 *func_020dfa10(void);

void func_020e1db0(void)
{
    s16 *psVar3;
    s32 iVar7;
    s32 iVar6;
    u32 uVar4;
    u32 uVar5;
    s32 iVar9;
    s16 sample;
    s32 prod;
    u8 *puVar8;

    if (data_0215b71c == 0) {
        return;
    }
    psVar3 = func_020dfa10();
    iVar7 = data_0215b728;
    iVar6 = data_0215b720;
    uVar4 = (u32)(iVar7 - iVar6);
    if (uVar4 > (u32)*psVar3) {
        uVar4 = (u32)*psVar3;
    } else {
        data_0215b718 = 1;
    }
    uVar5 = 0;
    if (uVar5 < uVar4) {
        do {
            sample = *(s16 *)((u8 *)psVar3 + uVar5 * 2 + 6);
            uVar5 = uVar5 + 1;
            prod = sample * 150;
            iVar9 = prod / 100;
            if (iVar9 > 0x7ff0) {
                iVar9 = 0x7ff0;
            } else if (iVar9 < -0x7ff0) {
                iVar9 = -0x7ff0;
            }
            puVar8 = data_0215b724;
            data_0215b724 = puVar8 + 1;
            *puVar8 = (u8)(iVar9 >> 8);
        } while (uVar5 < uVar4);
    }
    data_0215b720 = data_0215b720 + uVar4;
    if (data_0215b718 == 1) {
        data_0215b71c = 0;
    }
}
