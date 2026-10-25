#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02145f64[];
extern u32 data_02145f78[];
extern u32 data_02145f8c[];
extern u32 data_02145fa8[];
extern u32 data_02145fbc[];
extern u8 data_0213308c[];
extern u8 data_02133090[];
extern u8 data_021330ac[];
extern u8 data_02133094[];
extern u32 data_02159030;
extern u32 data_0215be48;
extern u8 data_02145fd8[];
extern u8 data_02145ff4[];
extern u8 data_02146010[];
extern u8 data_021330b8[];
extern u8 data_02133098[];
extern u8 data_0214602c[];

typedef struct { u32 w[4]; } T4;
typedef struct { u32 w[21]; } T17;
extern void func_0210ea40(u32 a, u32 *b, u32 c, u32 d);
extern u32 func_0210e968(u32 a, u32 b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_02101cf4(void);
extern void func_02101894(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02101280(u32 a, u32 b);
extern u32 func_02090cac(u32 a, u32 b, u32 c);
extern void func_02101118(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc76c(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02112a50(u32 a, u32 b, s32 c, s32 d);
extern void func_020940f8(u32 *a);
extern void func_02108fc8(void);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_020a1a40(u32 a);

#pragma opt_propagation off
void func_020f2ff0(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 m2;
    u32 m1;
    u32 iVar6;
    u32 pa6;
    u32 uVar17;
    u32 iVar4;
    u32 iVar5;
    u32 iVar7, iVar3;
    u8 *pbVar13;
    u8 *pbVar14;
    u32 *puVar15;
    u32 *puVar16;
    u32 uVar9;
    s32 i;
    s32 k;
    u8 *pb2;
    s32 j;
    s32 outer;
    s32 iv;
    u8 *pb;
    u8 *base;
    u8 *tbl;
    u8 *cnt;
    u8 *row;

    param_1[2] = 0;
    param_1[0] = 0;
    param_1[1] = param_1[0];
    param_1[3] = 0x64000;
    param_1[4] = 0;
    param_1[5] = 0x78000;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0x1b000;
    m2 = 0xfffffffe;
    *(u8 *)((u8 *)param_1 + 40) = m2;
    m1 = 0xffffffff;
    *(u8 *)((u8 *)param_1 + 42) = m1;
    param_1[0x725] = 0xfffffffe;
    func_0210ea40(0x12, param_1 + 0x400, 0xfffffffe, param_4);
    iVar3 = func_0210e968(0x12, (u32)data_02145f64);
    iVar4 = func_0210e968(0x12, (u32)data_02145f78);
    iVar5 = func_0210e968(0x12, (u32)data_02145f8c);
    pa6 = (u32)data_02145fa8;
    iVar6 = func_0210e968(0x12, pa6);
    iVar7 = func_0210e968(0x12, (u32)data_02145fbc);
    func_02113090(2, iVar3);
    func_021130c4(2, iVar4);
    func_02112ed0(2, iVar5);
    func_02112e74(2, iVar7);
    func_02101cf4();
    uVar17 = 0;
    pbVar13 = data_0213308c;
    pbVar14 = data_02133090;
    do {
        func_02101894(0, iVar5, iVar4, (u32)*pbVar13, 0);
        func_02101280(0, (u32)*pbVar13);
        uVar9 = func_02090cac(*(u32 *)(*(u32 *)&data_02159030 + 0x30), 0xc9, uVar17);
        func_02101118(0, iVar6, (u32)*pbVar13, (u32)*pbVar14, uVar9);
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
        uVar17 = uVar17 + 1;
    } while ((s32)uVar17 < 2);
    *(u32 *)(*(u8 **)&data_0215be48 + 0xc838) = 4;
    *(u32 *)(*(u8 **)&data_0215be48 + 0xc83c) = 0;
    func_020fc76c(0x12, (u32)data_02145fd8, (u32)data_02145ff4, (u32)data_02146010, (u32)data_0214602c);
    i = 0;
    pb = data_021330b8;
    do {
        func_02112a50(2, (u32)*pb, (s32)(param_1[5] << 4) >> 16, (s32)(param_1[6] << 4) >> 16);
        i = i + 1;
        pb = pb + 1;
    } while (i < 0x12);
    j = 0;
    pb2 = data_02133098;
    do {
        func_02112a50(2, (u32)*pb2, (s32)(param_1[8] << 4) >> 16, (s32)(param_1[9] << 4) >> 16);
        j = j + 1;
        pb2 = pb2 + 1;
    } while (j < 4);
    func_020940f8(param_1 + 0x1b);
    *(T17 *)(param_1 + 0x30) = *(T17 *)(param_1 + 0x1b);

    base = (u8 *)param_1;
    k = 0;
    do {
        switch (k) {
        case 0:
            *(u8 *)(base + k + 104) = (u8)(*(s8 *)(base + 0x95));
            break;
        case 3:
            *(u8 *)(base + k + 104) = (u8)(*(s8 *)(base + 0x94));
            break;
        case 1:
            *(u8 *)(base + k + 104) = (u8)((u32)(*(u8 *)(base + 0x90) - 1));
            break;
        case 2:
            *(u8 *)(base + k + 104) = (u8)(*(s8 *)(base + 0x92));
            break;
        }
        k = k + 1;
    } while (k < 4);

    func_02108fc8();

    tbl = data_021330ac;
    cnt = data_02133094;
    outer = 0;
    do {
        iv = 0;
        if ((s32)*cnt > 0) {
            row = base + outer;
            do {
                if (iv == *(s8 *)(row + 104)) {
                    func_02112798(2, (u16)*(s8 *)(tbl + iv), 1);
                } else {
                    func_02112798(2, (u16)*(s8 *)(tbl + iv), 0);
                }
                iv = iv + 1;
            } while (iv < *cnt);
        }
        tbl = tbl + 3;
        outer = outer + 1;
        cnt = cnt + 1;
    } while (outer < 4);
    func_020a1a40(0x3c);
}
