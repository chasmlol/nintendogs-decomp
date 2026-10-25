#include "ctx.h"

typedef volatile s32 vs32;
typedef struct {
    u16 h[10];
} T20;

extern u8 data_0213680c[];
extern u8 data_0214d97c[];
extern u8 *data_0215be48;
extern u8 *data_02159030;
extern u8 data_0214d154[];
extern u8 data_0213677c[];
extern u8 data_02136794[];
extern u8 data_02136788[];
extern u8 data_02136800[];
extern u8 data_021367a0[];
extern u8 data_021367ac[];
extern u8 data_021367b8[];
extern u8 data_021367c4[];
extern u8 data_021367d0[];
extern u8 data_021367dc[];
extern u8 data_021367e8[];
extern u8 data_021367f4[];

extern s16 *func_0210f100(s32 a, s32 b);
extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, u32 b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc684(s32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern s32 func_0209406c(void);
extern void func_02101cf4(void);
extern void func_0211e2d8(int *p, s32 a, s32 b, s32 c);
extern void func_0211e1e0(int *p, s32 a, s32 b);
extern u16 *func_020fc938(s32 a, s32 b, s32 c, s32 d);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, u16 *e);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027564(s32 a);
extern u8 func_02028100(s32 a);
extern u16 *func_02090cac(s32 a, s32 b, s32 c);
extern s32 func_0211c294(s16 *a, s32 b);
extern void func_0211bd8c(u16 *a, s32 b, s32 c);
extern void func_02101280(s32 a, s32 b);
extern void func_02100fac(s32 a, s32 b, s32 c, s32 d, u16 *e, s32 f);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02109238(void);
extern void func_02107e1c(void);
extern void func_020f156c(s32 a, s32 b);
extern void func_020f1554(void);

void func_0211d06c(int *param_1)
{
    int iVar7;
    s16 *psVar5;
    int *piVar22;
    u32 *puVar21;
    u32 uVar20;
    int iVar19;
    u32 *puVar17;
    int *piVar13;
    s16 *psVar14;
    s32 iVar6;
    s32 iVar8;
    s32 iVar15a;
    s32 iVar9;
    int iVar15;
    u32 uVar20b;
    int *piVar13b;
    int *piVar22b;
    s16 *psVar5b;
    u16 *puVar10;
    u16 *puVar11;
    u32 uVar12;
    u8 bVar4;
    s32 uVar23;
    u16 auStack_50[10];
    u16 auStack_3c[12];

    piVar22 = param_1 + 0x730;
    piVar13 = (int *)((u8 *)param_1 + 0x1ce0);
    psVar14 = (s16 *)((u8 *)param_1 + 0x1ce8);
    psVar5 = func_0210f100(*(s16 *)((u8 *)piVar22 + 8), *(s16 *)((u8 *)piVar22 + 10));
    uVar20 = 0;
    iVar19 = 0;
    puVar17 = 0;
    iVar15 = param_1[0x730];
    puVar21 = (u32 *)(data_0213680c + iVar15 * 0x20);
    switch (iVar15) {
    case 0:
        uVar20 = 0x24;
        break;
    case 1:
        uVar20 = 0x25;
        break;
    case 2:
        uVar20 = 0x26;
        break;
    case 3:
        uVar20 = 0x27;
        break;
    case 4:
        uVar20 = 0x28;
        break;
    }
    func_0210ea40(uVar20);
    iVar15a = func_0210e968(uVar20, puVar21[0]);
    iVar6 = func_0210e968(uVar20, puVar21[1]);
    iVar7 = func_0210e968(uVar20, puVar21[2]);
    iVar8 = func_0210e968(uVar20, puVar21[3]);
    iVar9 = func_0210e968(uVar20, puVar21[4]);
    func_02113090(2, iVar15a);
    func_021130c4(2, iVar6);
    func_0211305c(2, iVar7);
    func_02112ed0(2, iVar8);
    func_02112e74(2, iVar9);
    func_020fc76c(uVar20, puVar21[5], puVar21[6], (u32)data_0214d97c, puVar21[7]);
    *(u32 *)(data_0215be48 + 0xc838) = 1;
    *(u32 *)(data_0215be48 + 0xc83c) = 1;
    switch (*piVar22) {
    case 0:
        iVar19 = 0x30;
        puVar17 = (u32 *)data_0213677c;
        break;
    case 1:
        iVar19 = 0x32;
        puVar17 = (u32 *)data_02136794;
        break;
    case 2:
        iVar19 = 0x34;
        puVar17 = (u32 *)data_02136788;
        break;
    case 3:
        switch (psVar5[1]) {
        case 0:
            iVar19 = 0x38;
            puVar17 = (u32 *)data_021367a0;
            break;
        case 1:
            iVar19 = 0x39;
            puVar17 = (u32 *)data_021367ac;
            break;
        case 2:
            iVar19 = 0x3a;
            puVar17 = (u32 *)data_021367b8;
            break;
        case 3:
            iVar19 = 0x3b;
            puVar17 = (u32 *)data_021367c4;
            break;
        case 4:
            iVar19 = 0x3c;
            puVar17 = (u32 *)data_021367d0;
            break;
        case 5:
            iVar19 = 0x3d;
            puVar17 = (u32 *)data_021367dc;
            break;
        case 6:
            iVar19 = 0x3e;
            puVar17 = (u32 *)data_021367e8;
            break;
        case 7:
            iVar19 = 0x3f;
            puVar17 = (u32 *)data_021367f4;
            break;
        case 0x1f:
            puVar17 = (u32 *)data_02136800;
            iVar19 = 0x48;
            break;
        default:
            break;
        }
        break;
    }
    if (puVar17 != 0) {
        func_0210ea40(iVar19);
        func_020fc684(iVar19, puVar17[0], puVar17[1], puVar17[2], puVar17[2]);
    }
    if (*piVar22 != 4) {
        func_020fc8b0(2, 0, 3);
    }
    func_020fc8b0(2, 1, 8);
    func_020fc8b0(2, 2, 0);
    param_1[2] = func_0209406c();
    func_02101cf4();
    if (*piVar13 == 0) {
        func_0211e2d8(param_1, iVar8, iVar6, iVar7);
    } else {
        func_0211e1e0(param_1, iVar8, iVar6);
    }
    if (*piVar22 == 3) {
        goto F1;
    }
    if (*piVar22 != 4) {
        goto F0;
    }
F1:
    iVar15 = 1;
    goto F2;
F0:
    iVar15 = 0;
F2:
    puVar10 = func_020fc938(2, iVar15, (u16)psVar5[3], 0);
    func_02101118(0, iVar7, *(u16 *)(param_1 + 10), *(u16 *)((u8 *)param_1 + 0x2a), puVar10);
    if (*piVar22 == 4) {
        *(T20 *)auStack_50 = *(T20 *)data_0214d154;
        iVar15 = func_01ffdb08(*psVar14);
        iVar19 = func_02027564(iVar15);
        bVar4 = func_02028100(iVar15);
        puVar10 = func_02090cac(*(s32 *)(data_02159030 + 0x24), *(u16 *)((u8 *)auStack_50 + iVar19 * 4 + bVar4 * 2), (u16)*(u16 *)((u8 *)psVar14 + *psVar14 * 2 + 2));
    } else {
        puVar10 = func_020fc938(2, iVar15, (u16)psVar5[3], 1);
    }
    func_02101118(0, iVar7, *(u16 *)(param_1 + 11), *(u16 *)((u8 *)param_1 + 0x2e), puVar10);
    uVar23 = func_0211c294(psVar5, param_1[0x730]);
    func_0211bd8c(auStack_3c, 12, (s32)uVar23 * param_1[1]);
    func_02101280(0, *(u16 *)(param_1 + 12));
    func_02100fac(0, *(s32 *)(data_0215be48 + 0x232c), *(u16 *)(param_1 + 12), *(u16 *)((u8 *)param_1 + 0x32), auStack_3c, 7);
    if (*piVar22 == 2) goto UA;
    if (*piVar22 != 4) goto UD;
    goto UB;
UA:
    uVar12 = 0xcb;
    goto UJ;
UB:
    uVar12 = 0xc9;
    goto UJ;
UD:
    uVar12 = 0xca;
UJ:
    puVar10 = func_02090cac(*(s32 *)(data_02159030 + 0x24), uVar12, 0);
    puVar11 = func_02090cac(*(s32 *)(data_02159030 + 0x24), 0xca, 1);
    func_02101118(0, iVar7, *(u16 *)(param_1 + 16), *(u16 *)((u8 *)param_1 + 0x42), puVar10);
    func_02101118(0, iVar7, *(u16 *)(param_1 + 17), *(u16 *)((u8 *)param_1 + 0x46), puVar11);
    if (*piVar22 != 4 && *piVar22 != 3) {
        func_020f156c(*(s16 *)((u8 *)piVar22 + 8) & 0xff, *(u16 *)((u8 *)piVar22 + 10));
        func_020f1554();
    }
    piVar22b = param_1 + 0x730;
    piVar13b = (int *)((u32)param_1 + 0x1ce0);
    psVar5b = func_0210f100(*(s16 *)((u8 *)piVar22b + 8), *(s16 *)((u8 *)piVar22b + 10));
    if (param_1[1] == 0) {
        uVar20b = 1;
    } else {
        uVar20b = 0;
    }
    if (piVar22b[0] != 2) {
        uVar23 = func_0211c294(psVar5b, piVar22b[0]);
        uVar20b = uVar20b | (param_1[2] < (int)uVar23);
    }
    if (*piVar13b == 0) {
        iVar15 = 10;
    } else {
        iVar15 = 3;
    }
    func_02112798(2, iVar15, uVar20b);
    func_02109238();
    func_02107e1c();
    *(int *)(data_0215be48 + 0x1e30) = 3;
}
