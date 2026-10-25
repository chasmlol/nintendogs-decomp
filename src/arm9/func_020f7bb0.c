#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct {
    u8 pad[0x18];
    s32 m[2][2];
} ZB;

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern void func_020f84c8(s32 a, u8 *b, u8 *c);
extern void func_020f85d0(s32 p);
extern void func_02117a58(s32 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);
extern void func_021179b0(s32 *a, s32 b, s32 c);
extern void func_020a1a40(s32 a);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_021178a8(s32 *a);
extern void func_02003c10(s32 a);
extern s32 func_02003a44(void);
extern void func_020fddc0(s32 a);

void func_020f7bb0(s32 *param_1)
{
    u32 uVar6;
    s32 iVar9;
    s32 iVar7;
    s32 iVar8;
    s32 bW;
    s32 bVar5;
    s32 bVar1;
    s32 bVar2;
    u8 *pX;

    pX = (u8 *)param_1 + 0x1ca4;
    *param_1 = param_1[1];
    switch (*param_1) {
    case 0:
        param_1[3] -= 0x6aaa;
        iVar9 = param_1[3];
        bW = 1;
        if (iVar9 > 0) {
            bW = 0;
        } else {
            param_1[3] = 0;
        }
        param_1[4] += 0xb60;
        iVar8 = param_1[4];
        if (iVar8 >= 0x10000) {
            param_1[4] = 0x10000;
        } else {
            bW = 0;
        }
        if (bW != 0) {
            param_1[1] = 1;
        }
        break;
    case 1:
        param_1[5] -= 0x6aaa;
        iVar9 = param_1[5];
        bW = 1;
        if (iVar9 > 0) {
            bW = 0;
        } else {
            param_1[5] = 0;
        }
        if (bW != 0) {
            param_1[1] = 2;
        }
        break;
    case 2:
        if (*(s32 *)(data_0215be48 + 0x4860) != 0) {
            bVar1 = data_0214f004[0];
            bVar2 = data_0214f004[1];
            uVar6 = func_02112320(2, bVar1, bVar2);
            if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
                if (uVar6 == 4) {
                    func_02117a58(param_1 + 10, 2, 0x1a, 1, 4, 5, 0, 0, 0, 10, 0);
                    func_021179b0(param_1 + 10, (s16)bVar1, (s16)bVar2);
                    *(u8 *)((u8 *)param_1 + 0x64) = (u8)(0);
                    param_1[1] = 3;
                    func_020a1a40(0);
                } else if (uVar6 == 5) {
                    func_02117a58(param_1 + 10, 2, 0x1b, 1, 4, 5, 0, 0, 0, 10, 10);
                    func_021179b0(param_1 + 10, (s16)bVar1, (s16)bVar2);
                    *(u8 *)((u8 *)param_1 + 0x64) = (u8)(1);
                    param_1[1] = 3;
                    func_020a1a40(1);
                } else {
                    bW = 1;
                    switch (uVar6) {
                    case 0:
                        param_1[6] = 1;
                        break;
                    case 1:
                        param_1[8] = 1;
                        break;
                    case 2:
                        param_1[7] = 1;
                        break;
                    case 3:
                        param_1[9] = 1;
                        break;
                    default:
                        bW = 0;
                    }
                    if (bW != 0) {
                        func_020f84c8(uVar6, (u8 *)param_1 + 0x112, (u8 *)param_1 + 0x113);
                        param_1[2] = 0x1e;
                        *(s8 *)((u8 *)param_1 + 0x64) = -1;
                        param_1[1] = 3;
                    }
                }
            }
        }
        break;
    case 3:
        if (*(s8 *)((u8 *)param_1 + 0x64) != -1) {
            iVar9 = func_021178a8(param_1 + 10);
            if (iVar9 != 0) {
                func_02003c10(0x14);
                param_1[1] = 5;
                func_020a1a40(0x34);
            }
            break;
        }
        param_1[2] -= 1;
        if ((*(u16 *)(data_0214f004 + 2) & 1) == 0) {
            if (param_1[2] <= 0x18) {
                param_1[1] = 2;
                {
                    s32 i;
                    s32 j;
                    for (i = 0; i < 2; i++) {
                        for (j = 0; j < 2; j++) {
                            ((ZB *)param_1)->m[i][j] = 0;
                        }
                    }
                }
            }
            break;
        }
        if (param_1[2] > 0) {
            break;
        }
        if (*(s32 *)(data_0215be48 + 0x4860) != 0) {
            uVar6 = func_02112320(2, data_0214f004[0], data_0214f004[1]);
            switch (uVar6) {
            case 0:
                if (param_1[6] == 0) {
                    goto L_f44;
                }
                bW = 1;
                break;
            case 1:
L_f44:
                if (param_1[8] == 0) {
                    goto L_f54;
                }
                bW = 1;
                break;
            case 2:
L_f54:
                if (param_1[7] == 0) {
                    goto L_f64;
                }
                bW = 1;
                break;
            case 3:
L_f64:
                if (param_1[9] == 0) {
                    goto L_def3;
                }
                bW = 1;
                break;
            default:
L_def3:
                bW = 0;
            }
            if (bW != 0) {
                func_020f84c8(uVar6, (u8 *)param_1 + 0x112, (u8 *)param_1 + 0x113);
                param_1[2] = 10;
                param_1[1] = 4;
                func_020f85d0((s32)param_1);
                return;
            }
        }
        param_1[1] = 2;
        {
            s32 i;
            s32 j;
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    ((ZB *)param_1)->m[i][j] = 0;
                }
            }
        }
        break;
    case 4:
        param_1[2] -= 1;
        if (*(s32 *)(data_0215be48 + 0x4860) != 0) {
            uVar6 = func_02112320(2, data_0214f004[0], data_0214f004[1]);
            switch (uVar6) {
            case 0:
                if (param_1[6] == 0) {
                    goto L_c4a;
                }
                bW = 1;
                break;
            case 1:
L_c4a:
                if (param_1[8] == 0) {
                    goto L_c5a;
                }
                bW = 1;
                break;
            case 2:
L_c5a:
                if (param_1[7] == 0) {
                    goto L_c6a;
                }
                bW = 1;
                break;
            case 3:
L_c6a:
                if (param_1[9] == 0) {
                    goto L_c7a;
                }
                bW = 1;
                break;
            default:
L_c7a:
                bW = 0;
            }
            if (bW != 0) {
                if (param_1[2] <= 0) {
                    func_020f84c8(uVar6, (u8 *)param_1 + 0x112, (u8 *)param_1 + 0x113);
                    param_1[2] = 10;
                }
                func_020f85d0((s32)param_1);
                return;
            }
        }
        param_1[1] = 2;
        {
            s32 i;
            s32 j;
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    ((ZB *)param_1)->m[i][j] = 0;
                }
            }
        }
        break;
    case 5:
        bVar5 = 1;
        if (func_02003a44() == 0) {
            bVar5 = 0;
        }
        param_1[3] += 0x6aaa;
        iVar7 = param_1[3];
        if (iVar7 >= 0x64000) {
            param_1[3] = 0x64000;
        } else {
            bVar5 = 0;
        }
        param_1[4] -= 0x1111;
        if (param_1[4] > 0) {
            bVar5 = 0;
        } else {
            param_1[4] = 0;
        }
        if (bVar5 != 0) {
            *(s32 *)pX = -1;
            func_020fddc0(0x11);
        }
        break;
    }
    func_020f85d0((s32)param_1);
}
