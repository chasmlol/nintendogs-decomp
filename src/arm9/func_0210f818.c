#include "ctx.h"
#pragma opt_strength_reduction off

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u16 data_02136774[];
extern u16 data_0213676c[];
extern u16 data_02136764[];
extern u8 *data_02159060;

extern void func_021210fc(void *p);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_021210c8(void *p, s32 b);
extern s32 func_0212109c(void *p, s32 b);
extern s32 func_0211093c(s32 *p, s32 b);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_02108e24(s32 a);
extern void func_020a1a40(s32 a);
extern u32 func_02112dec(s32 a, s32 b);
extern void func_02112dc4(s32 a, s32 b, u32 c);
extern void *func_020fc938(s32 a, s32 b, u32 c, s32 d);
extern void func_02101328(s32 a, s32 b, s32 c);
extern s32 func_02112e14(s32 a);
extern void func_0210083c(s32 a, s32 b, s32 c, s32 d, void *e);
extern void func_02101280(s32 a, s32 b);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, void *e);
extern void func_0210f2c0(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_01ffdb08(s16 a);
extern s32 func_02044ce4(s16 a);
extern s32 func_020280d8(s32 a);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_021082c8(void);
extern void func_02096c20(s32 a, s32 b, s32 c);
extern void func_020421b8(s32 a);
extern void func_02095a0c(void);
extern void func_02095d6c(s32 a, s32 b, s32 c, s32 d);
extern void func_020959ec(void);
extern void func_02097b68(void);

void func_0210f818(s32 *param_1)
{
    int iVar7;
    s32 sI;
    s32 bVar2;
    int iVar9;
    s32 iVar8;
    void *pv;
    u8 *pb = (u8 *)param_1 + 0x1c6c;

    switch (param_1[10]) {
    case 0: {
        u8 *gb;
        func_021210fc(param_1 + 11);
        gb = data_0215be48;
        gb = gb + 0x4000;
        if (*(s32 *)(gb + 0x8b8) == 1) {
            u16 u1 = *(vu8 *)(data_0214f004 + 1);
            u16 u0 = *(vu8 *)(data_0214f004 + 0);
            *(u16 *)((u8 *)param_1 + 0x1c18) = u0;
            *(u16 *)((u8 *)param_1 + 0x1c1a) = u1;
            param_1[10] = 3;
            return;
        }
        if (*(s32 *)(gb + 0x860) == 0) return;
    }
        iVar7 = func_02112320(2, data_0214f004[0], data_0214f004[1]);
        param_1[4] = -1;
        param_1[5] = -1;
        param_1[6] = -1;
        if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) return;
        switch (iVar7) {
        case 9:  param_1[4] = 0; param_1[5] = 0; break;
        case 10: param_1[4] = 1; param_1[5] = 0; break;
        case 11: param_1[4] = 2; param_1[5] = 0; break;
        case 6:  param_1[4] = 0; param_1[5] = 1; break;
        case 7:  param_1[4] = 1; param_1[5] = 1; break;
        case 8:  param_1[4] = 2; param_1[5] = 1; break;
        case 3:  param_1[4] = 0; param_1[5] = 2; break;
        case 4:  param_1[4] = 1; param_1[5] = 2; break;
        case 5:  param_1[4] = 2; param_1[5] = 2; break;
        case 12: param_1[6] = 0; break;
        case 13: param_1[6] = 1; break;
        case 14: param_1[6] = 2; break;
        default: break;
        }
        if (param_1[4] < 0) goto L2f8;
        iVar7 = func_021210c8(param_1 + 11, param_1[4]);
        param_1[3] = iVar7;
        if (0 > param_1[3]) return;
        iVar7 = func_0212109c(param_1 + 11, param_1[4]);
        iVar8 = func_0211093c(param_1, iVar7);
        if (iVar8 == 0) return;
        func_02112978(2, (u16)(iVar7 + data_02136774[param_1[5]]), 1, 1);
        func_02112978(2, (u16)(iVar7 + data_0213676c[param_1[5]]), 1, 1);
        func_02112978(2, (u16)(iVar7 + data_02136764[param_1[5]]), 1, 1);
        param_1[10] = 1;
        func_02108e24(0);
        *(s16 *)(pb + 12) = (s16)param_1[0x1d];
        return;
    L2f8:
        if (param_1[6] < 0) return;
        iVar7 = func_021210c8(param_1 + 11, param_1[6]);
        param_1[3] = iVar7;
        if (param_1[3] < 0) return;
        iVar7 = func_0212109c(param_1 + 11, param_1[6]);
        func_020a1a40(24);
        iVar8 = (s32)func_02112dec(2, 17);
        func_02112dc4(2, iVar7 + 12, (u32)iVar8);
        *(s16 *)(pb + 12) = (s16)param_1[0x1d];
        param_1[10] = 1;
        func_02108e24(0);
        return;
    case 1:
        param_1[2] = param_1[2] + 1;
        if (param_1[2] <= 10) return;
        if (0 > param_1[4]) goto C1B;
        iVar9 = func_0212109c(param_1 + 11, param_1[4]);
        func_02112978(2, (u16)(iVar9 + data_02136774[param_1[5]]), 0, 0);
        func_02112978(2, (u16)(iVar9 + data_0213676c[param_1[5]]), 0, 0);
        func_02112978(2, (u16)(iVar9 + data_02136764[param_1[5]]), 0, 0);
        param_1[2] = 0;
        param_1[10] = 0;
        func_02108e24(1);
        return;
    C1B:
        if (param_1[6] < 0) return;
        iVar9 = func_0212109c(param_1 + 11, param_1[6]);
        iVar8 = (s32)func_02112dec(2, 18);
        func_02112dc4(2, iVar9 + 12, (u32)iVar8);
        param_1[2] = 0;
        param_1[10] = 2;
        return;
    case 2:
        param_1[2] += 1;
        if (param_1[2] <= 10) return;
        iVar7 = param_1[3];
        {
            u8 *pe = ((u8 *)param_1 + 148) + (iVar7 << 5);
            pv = func_020fc938(2, 0, *(u16 *)((int)pe + 6), 2);
            func_02101328(0, param_1[8], 11);
            iVar8 = func_02112e14(2);
            func_0210083c(0, iVar8, param_1[8], 11, pv);
            pv = func_020fc938(2, 0, *(u16 *)(pe + 6), 0);
            func_02101280(0, 24);
            iVar9 = func_02112e14(2);
            func_02101118(0, iVar9, 24, 10, pv);
            func_0210f2c0(5, 2, 83, *(s32 *)(pe + 8), 11);
        }
        param_1[2] = 0;
        param_1[10] = 4;
        return;
    case 3:
        {
            u8 *gb = data_0215be48;
            gb += 0x4000;
            if (*(s32 *)(gb + 0x8bc) != 1) return;
        }
        bVar2 = 0;
        sI = 0;
    L5d0:
        iVar7 = func_01ffdb08(sI);
        if (iVar7 == 0) goto L618;
        iVar8 = func_02044ce4(sI);
        if (iVar8 != 0) goto L618;
        iVar7 = func_020280d8(iVar7);
        {
            s32 v = *(s16 *)((u8 *)param_1 + sI * 2 + 0x960);
            if (v != iVar7) {
                bVar2 = 1;
                goto L624;
            }
        }
    L618:
        sI = sI + 1;
        if (sI < 3) goto L5d0;
    L624:
        if (bVar2 == 0) goto L658;
        param_1[10] = 8;
        func_02097b94(0, 0x4b0, 0, 0, 0);
        return;
    L658:
        func_021082c8();
        return;
    case 4:
        param_1[7] = param_1[7] + 0x20;
        func_02112978(2, 0x18, (s16)param_1[7], 0);
        func_02112978(2, 0x52, (s16)param_1[7], 0);
        func_02112978(2, 0x53, (s16)param_1[7], 0);
        if (param_1[7] <= 0) return;
        param_1[7] = 0;
        param_1[10] = 5;
        func_02108e24(1);
        return;
    case 5:
        {
            u8 *gb = data_0215be48;
            gb += 0x4000;
            if (*(s32 *)(gb + 0x8bc) != 1) return;
        }
        func_02108e24(0);
        param_1[10] = 6;
        return;
    case 6:
        param_1[7] = param_1[7] - 0x20;
        func_02112978(2, 0x18, (s16)param_1[7], 0);
        func_02112978(2, 0x52, (s16)param_1[7], 0);
        func_02112978(2, 0x53, (s16)param_1[7], 0);
        if (-255 > param_1[7]) {
            param_1[7] = -255;
            param_1[10] = 7;
        }
        return;
    case 7:
        func_02108e24(1);
        param_1[10] = 0;
        return;
    case 8:
        if (*(s16 *)(data_02159060 + 0x6c) != 2) return;
        func_02096c20(0, 0, 0);
        for (iVar9 = 0; iVar9 < 3; iVar9++) {
            func_020421b8((s8)iVar9);
            func_02096c20(1, (u16)(s16)iVar9, 0);
        }
        func_02095a0c();
        func_02095d6c(0, 0, 0, 1);
        for (iVar8 = 0; 3 > iVar8; iVar8++) {
            func_02095d6c(1, (u16)(s16)iVar8, 0, 1);
        }
        func_020959ec();
        param_1[10] = 9;
        func_02097b68();
        return;
    case 9:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) return;
        func_021082c8();
    default:
        return;
    }
}
