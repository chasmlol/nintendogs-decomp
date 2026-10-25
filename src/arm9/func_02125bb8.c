#include "ctx.h"

extern u8 data_0215be48[];
extern u8 data_0214f004[];

extern void func_021210fc(u8 *p);
extern s32 func_02112320(s32 a, u32 b, u32 c);
extern s32 func_021210c8(s32 p, s32 idx);
extern s32 func_0212109c(s32 p, s32 idx);
extern void func_021128a8(s32 a, u32 b, s32 c);
extern void func_02112978(s32 a, u32 b, s16 c, s32 d);
extern void func_02108e24(s32 a);
extern void func_02109010(void);
extern void func_020a1a40(s32 a);
extern void func_021080c8(u16 a);
extern void func_02108104(void);

void func_02125bb8(u8 *param_1)
{
    s32 L0;
    s32 L1;
    s32 L2;
    s32 L3;
    s32 L4;
    s32 *P;
    u8 *puVar5;
    s32 st;
    s32 i;
    s16 sVar1;
    s16 sVar1_w1;
    s32 iVar6;
    s32 bVar2;
    s32 iVar3;
    s32 uVar7;
    s32 v;
    s32 t;
    s32 t2;
    s32 zz;

    P = (s32 *)param_1;
    st = P[0x3c];
    puVar5 = param_1 + 0x1d18;
    switch (st) {
    case 0: goto C0;
    case 1: goto C1;
    case 2: goto C2;
    case 3: goto C3;
    case 4: goto C4;
    case 5: goto C5;
    case 6: goto C6;
    case 7: goto C7;
    default: goto END;
    }

C0:
    P[0x1e] = (P[0x1c] * 16) / 16;
    iVar3 = (16 - P[0x1c]) * 96;
    P[0x1d] = -32 - iVar3 / 16;
    P[0x1c] = P[0x1c] + 1;
    if (P[0x1c] == 16) {
        P[0x1c] = 0;
        P[0x3c] = 1;
    }
    goto END;

C1:
    iVar6 = 0;
    i = iVar6;
    bVar2 = 1;
    uVar7 = 0;
    L0 = 0;
    L1 = 0;
    L2 = 0;
    L4 = 0;
    L3 = 1;
    do {
        if ((P + i)[0x1f] < 0) {
            (P + i)[0x1f] = (P + i)[0x1f] + 16;
        } else {
            (P + i)[0x1f] = uVar7;
        }
        v = (P + i)[0x1f];
        if (v < -256) v = -256;
        sVar1 = (s16)v;
        func_02112978(2, (u32)(u16)(i + 13), sVar1, L0);
        func_02112978(2, (u32)(u16)(i + 1), sVar1, L1);
        func_02112978(2, (u32)(u16)(i + 7), sVar1, L2);
        t = (sVar1 == 0) ? L3 : L4;
        if (iVar6 > sVar1) iVar6 = sVar1;
        bVar2 = bVar2 & t;
        i = i + 1;
    } while (i < 4);
    t = -iVar6;
    t = t / 8;
    i = 0;
    zz = i;
    do {
        func_02112978(2, (u32)(u16)(i + 18), t, zz);
        i = i + 1;
    } while (i < 9);
    if (bVar2 == 0) goto END;
    func_02108e24(1);
    P[0x3c] = 2;
    goto END;

C2:
    func_021210fc(param_1);
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x48b8) == 1) {
        P[0x3c] = 5;
        goto END;
    }
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x4860) == 0) goto END;
    iVar3 = func_02112320(2, data_0214f004[0], data_0214f004[1]);
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) goto END;
    switch (iVar3) {
    case 3: P[0x1b] = 0; break;
    case 4: P[0x1b] = 1; break;
    case 5: P[0x1b] = 2; break;
    case 6: P[0x1b] = 3; break;
    }
    if (P[0x1b] < 0) goto L360;
    iVar3 = func_021210c8((s32)param_1, P[0x1b]);
    if (iVar3 < 0) goto L360;
    iVar3 = func_0212109c((s32)param_1, P[0x1b]);
    func_021128a8(2, (u32)(u16)(iVar3 + 6), 2);
    func_02112978(2, (u32)(u16)(iVar3 + 12), 2, 2);
    func_02112978(2, (u32)(u16)((u32)iVar3 + 6), 2, 2);
    func_020a1a40(2);
    *(s32 *)puVar5 = P[0x12];
    P[0x3c] = 3;
    goto END;

L360:
    P[0x1b] = -1;
    goto END;

C3:
    P[0x1c] = P[0x1c] + 1;
    if (P[0x1c] <= 10) goto END;
    iVar3 = func_0212109c((s32)param_1, P[0x1b]);
    func_02108e24(0);
    func_021128a8(2, (u32)(u16)(iVar3 + 6), 1);
    func_02112978(2, (u32)(u16)(iVar3 + 12), 0, 0);
    func_02112978(2, (u32)(u16)((u32)iVar3 + 6), 0, 0);
    P[0x1c] = 0;
    P[0x3c] = 4;
    goto END;

C4:
    P[0x1c] = P[0x1c] + 1;
    if (P[0x1c] <= 10) goto END;
    func_02108e24(0);
    func_02109010();
    P[0x1c] = 0;
    P[0x3c] = 6;
    goto END;

C5:
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x48bc) != 1) goto END;
    func_02108e24(0);
    func_02109010();
    P[0x3c] = 6;
    goto END;

C6:
    uVar7 = 0;
    P[0x1f] = P[0x1f] - 16;
    sVar1_w1 = (s16)P[0x1f];
    do {
        func_02112978(2, (u32)(u16)(uVar7 + 12), sVar1_w1, 0);
        func_02112978(2, (u32)(u16)uVar7, sVar1_w1, 0);
        func_02112978(2, (u32)(u16)(uVar7 + 6), sVar1_w1, 0);
        uVar7 = uVar7 + 1;
    } while (uVar7 < 6);
    t = -sVar1_w1;
    t = t / 8;
    i = 0;
    zz = i;
    do {
        func_02112978(2, (u32)(u16)(i + 18), t, zz);
        i = i + 1;
    } while (i < 9);
    if (P[0x1f] == -256) {
        P[0x1c] = 0;
        P[0x3c] = 7;
    }
    goto END;

C7:
    t = (16 - P[0x1c]) * 16;
    P[0x1e] = t / 16;
    t2 = P[0x1c] * 96;
    P[0x1d] = -32 - t2 / 16;
    P[0x1c] = P[0x1c] + 1;
    if (P[0x1c] != 16) goto END;
    if (P[0x1b] >= 0) {
        iVar3 = func_021210c8((s32)param_1, P[0x1b]);
        func_021080c8(*(u16 *)(param_1 + iVar3 * 2 + 0x8c));
        goto END;
    }
    func_02108104();
    goto END;

END:
    return;
}
