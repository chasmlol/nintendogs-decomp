#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u8 data_0215b218[];
extern s16 *data_0215b204;
extern s16 *data_0215b1fc;
extern s32 data_0215b208;
extern u32 data_0215b200;

void func_020df6ec(s16 *param_1, s32 param_2, u32 *param_3)
{
    s16 *psVar12;
    s32 iVar10;
    s32 iVar9;
    u32 bVar6;
    u32 uVar8;
    u16 uVar11;
    u8 i;
    u32 uVar13;
    u8 ch;
    u8 k;
    u32 sum;

    iVar9 = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    bVar6 = 0;
    uVar8 = 0;
    asm { mov uVar11, iVar9 }
    i = 0;
    *(u16 *)(param_3 + 2) = 0;
    do {
        data_0215b218[i] = 0;
        i = (u8)(i + 1);
    } while (i < 16);
    uVar11 = (u16)(uVar11 + 1);
    data_0215b204 = param_1;
    if (uVar11 < param_2) {
        data_0215b204 = param_1 + 1;
    }
    if (uVar11 < param_2) {
        do {
            iVar10 = *param_1;
            if (iVar10 >= 0 && *data_0215b204 >= 0 && iVar10 > *data_0215b204) {
                if (iVar10 < 0) {
                    iVar10 = -iVar10;
                }
                if (iVar10 > 0x5dc0) {
                    psVar12 = data_0215b1fc;
                    if (psVar12 != 0) {
                        if (param_1 > psVar12) {
                            uVar13 = ((u32)param_1 - (u32)psVar12) >> 1;
                        } else {
                            uVar13 = ((u32)param_1 + 0x20000 - (u32)psVar12) >> 1;
                        }
                        if (uVar13 > 31) {
                            uVar13 = 31;
                        }
                        data_0215b218[uVar13 >> 1] = (u8)(data_0215b218[uVar13 >> 1] + 1);
                    }
                    data_0215b1fc = param_1;
                    if (iVar9 < iVar10) {
                        iVar9 = iVar10;
                    }
                }
            }
            param_1 = data_0215b204;
            data_0215b204 = param_1 + 1;
            uVar11 = (u16)(uVar11 + 1);
        } while (uVar11 < param_2);
    }
    k = 0;
    do {
        ch = data_0215b218[k];
        if (ch == 0) {
            bVar6 = (u8)(bVar6 + 1);
        }
        if (k != 15 && ch != 0) {
            uVar8 = k;
        }
        k = (u8)(k + 1);
    } while (k < 16);
    sum = (u8)(data_0215b218[0] + data_0215b218[1]);
    if (iVar9 < 0x5dc0) goto T;
    if (sum >= 60) goto T;
    if (bVar6 <= 10) goto E;
    if (sum >= 25) goto E;
    if (uVar8 < 13) goto T;
E:
    *(u16 *)((u8 *)param_3 + 10) = *(u16 *)((u8 *)param_3 + 10) + 1;
    if (*(u16 *)((u8 *)param_3 + 10) >= 5) {
        param_3[1] = 1;
    }
    if (data_0215b208 < iVar9) {
        data_0215b208 = iVar9;
    }
    data_0215b200 = 1;
    goto END;
T:
    if (data_0215b200 == 0) {
        if (6 < *(u16 *)((u8 *)param_3 + 10) && *(u16 *)((u8 *)param_3 + 10) < 60 &&
            data_0215b208 >= 30000) {
            param_3[0] = 1;
        }
        *(u16 *)((u8 *)param_3 + 10) = 0;
        data_0215b208 = 0;
    } else {
        *(u16 *)((u8 *)param_3 + 10) = *(u16 *)((u8 *)param_3 + 10) + 1;
        if (*(u16 *)((u8 *)param_3 + 10) >= 5) {
            param_3[1] = 1;
        }
    }
    data_0215b200 = 0;
END:
    *(s16 *)(param_3 + 2) = (s16)iVar9;
}
