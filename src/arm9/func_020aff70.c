#include "ctx.h"

extern u64 func_02080858(void);
extern u64 func_0205e47c(u32 a, u32 b);

void func_020aff70(s32 param_1, u32 param_2)
{
    u32 k;
    u32 uVar5;
    u32 uVar7;
    s32 t;
    s16 local_60[34];
    s16 sVar1;
    s32 iVar6;
    s16 iCnt;
    s32 iVar4;
    s16 *puVar3;
    u32 extraout_r1;
    u64 uVar8;
    u32 i;

    uVar8 = func_02080858();
    uVar7 = (u32)uVar8;
    i = 0;
    do {
        local_60[i] = (s16)i;
        i = (u32)((s32)((i + 1) * 0x10000) >> 16);
    } while (i < 0x20);
    uVar5 = 0;
    k = 0x10dcd;
    do {
        uVar7 = uVar7 * k + 1;
        extraout_r1 = (u32)(func_0205e47c((u16)uVar7, 0x20 - uVar5) >> 32);
        iVar6 = (s32)((uVar5 + extraout_r1) * 0x10000) >> 16;
        sVar1 = local_60[uVar5];
        if (sVar1 != 0x1f) {
            if (local_60[iVar6] != 0x1f) {
                local_60[uVar5] = local_60[iVar6];
                local_60[iVar6] = sVar1;
            }
        }
        uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    iVar4 = 0;
    switch (param_2) {
    case 0:
        break;
    case 1:
        uVar7 = uVar7 * k + 1;
        iVar4 = (s16)((u16)((((u32)(u16)uVar7) * 3) >> 16) + 10);
        break;
    case 2:
        uVar7 = uVar7 * k + 1;
        iVar4 = (s16)((u16)((((u32)(u16)uVar7) * 6) >> 16) + 15);
        break;
    case 3:
        uVar7 = uVar7 * k + 1;
        iVar4 = (s16)((u16)((((u32)(u16)uVar7) * 6) >> 16) + 25);
        break;
    case 4:
        uVar7 = uVar7 * k + 1;
        iVar4 = (s16)((u16)((((u32)(u16)uVar7) * 6) >> 16) + 35);
        break;
    case 5:
        uVar7 = uVar7 * k + 1;
        iVar4 = (s16)((u16)((((u32)(u16)uVar7) * 6) >> 16) + 45);
        break;
    }
    puVar3 = (s16 *)(param_1 + 0x18);
    iCnt = 0;
    do {
        if (0 < iCnt) {
            *puVar3 = (s16)iCnt;
            puVar3[2] = (s16)iVar4;
            puVar3[1] = local_60[iCnt];
            if (*puVar3 != 1) goto ELSEARM;
            uVar7 = uVar7 * k + 1;
            t = (s16)((u16)((((u32)uVar7) << 16) >> 31) + 2);
            goto JOIN;
        ELSEARM:
            uVar7 = uVar7 * k + 1;
            t = (s16)((u16)((((u32)uVar7) << 16) >> 31) + 2);
        JOIN:
            iVar4 = (s16)(iVar4 - t);
        }
        iCnt = (s16)(iCnt + 1);
        puVar3 = puVar3 + 5;
    } while (iCnt < 4);
}
