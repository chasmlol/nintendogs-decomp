#include "ctx.h"

extern u32 data_0215aeb0[];
extern u32 data_027c03ac[];
extern u32 data_0215ae78;
extern u32 data_02144a54[];
extern u32 data_02144a5c[];
extern u32 data_02144a64[];
extern u32 data_02144a6c[];
extern s32 data_0215ae38;

extern void func_020dd970(s32 a);
extern u32 func_0205e47c(u32 a, u32 b);

#define SDIV3(x) ((s32)(x) / 3)

s32 func_020dd654(s32 param_1, u32 *param_2, s32 param_3)
{
    s32 i;
    s32 iVar11;
    s32 iVar10;
    u32 bVar2;
    u32 uVar9;
    u32 uVar8;
    u32 uVar12;
    u32 bVar1;
    u32 idx;
    u32 uVar5;
    iVar11 = 0;
    iVar10 = 0;
    data_0215aeb0[0] = 0;
    data_0215aeb0[1] = 0;
    data_0215aeb0[2] = 0;
    data_0215aeb0[3] = 0;
    data_0215aeb0[4] = 0;
    data_0215aeb0[5] = 0;
    data_0215aeb0[6] = 0;
    func_020dd970(param_1);
    for (i = 1; i < 16; i++) {
        uVar5 = data_027c03ac[i];
        data_0215aeb0[4] = data_0215aeb0[4] + uVar5;
        if (i < 3) {
            iVar11 = iVar11 + (s32)uVar5;
        } else if (i < 8) {
            iVar10 = iVar10 + (s32)uVar5;
        }
        if (i < 4) {
            data_0215aeb0[0] = data_0215aeb0[0] + uVar5;
            if ((s32)data_0215aeb0[2] < (s32)uVar5) {
                data_0215aeb0[2] = uVar5;
            }
        } else if (i > 7) {
            if (i < 12) {
                data_0215aeb0[1] = data_0215aeb0[1] + uVar5;
            }
            if ((s32)data_0215aeb0[3] < (s32)uVar5) {
                data_0215aeb0[3] = uVar5;
            }
        }
        if (i >= 4 && i <= 11) {
            data_0215aeb0[5] = data_0215aeb0[5] + uVar5;
        } else if (i > 11) {
            if ((s32)data_0215aeb0[6] < (s32)uVar5) {
                data_0215aeb0[6] = uVar5;
            }
        }
    }

    bVar2 = 0;
    *param_2 = data_0215aeb0[4];
    uVar9 = *(vu32 *)&data_0215aeb0[4];
    uVar8 = data_027c03ac[13];
    bVar1 = 0;
    if (uVar8 >= uVar9 / 10) {
        bVar1 = data_027c03ac[1] <= uVar9 / 20;
    }
    if (bVar1 != 0) {
        if (uVar9 >= (u32)(param_3 * 11) / 10) {
            bVar2 = 1;
        }
    }
    idx = data_0215ae78;
    uVar12 = data_0215aeb0[0];
    uVar5 = func_0205e47c((u32)(param_3 * data_02144a54[idx]), data_02144a5c[idx]);

    if ((uVar12 >= uVar5 || uVar9 >= (u32)(param_3 * 11) / 10) &&
        ((SDIV3(data_0215aeb0[2] << 1) > (s32)data_0215aeb0[3]) ||
         (SDIV3(uVar12 << 1) > (s32)data_0215aeb0[1]) ||
         (data_027c03ac[15] + (uVar8 + data_027c03ac[14]) > (uVar9 * 4) / 10)) ||
        bVar2 != 0) {
        uVar5 = (u32)(param_3 * 3);
        if (uVar9 >= uVar5 || (s32)((s32)(iVar10 * 10) / 22) < iVar11 || bVar2 != 0) {
            if (data_0215ae38 == 0 || uVar5 <= uVar9) {
                if (uVar9 >= uVar5) {
                    goto ret1;
                }
                if (data_027c03ac[1] < (uVar5 = func_0205e47c(uVar9, data_02144a64[idx]))) {
                    goto ret1;
                }
                uVar5 = func_0205e47c(uVar9, data_02144a6c[idx]);
                if (data_027c03ac[2] <= uVar5) {
                    goto dec;
                }
                goto ret1;
            }
            goto dec;
        }
        goto elsepart;
    }
    goto dec;
ret1:
    return 1;
elsepart:
    data_0215ae38 = 3;
dec:
    if (data_0215ae38 != 0) {
        data_0215ae38 = data_0215ae38 - 1;
    }
    return 0;
}
