#include "ctx.h"
typedef struct { u16 w[8]; } H8;
#define COPY_LOOP *(H8 *)auStack_48 = *(H8 *)data_0214d990;
#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct { u32 w[4]; } T16;

extern s32 func_020939e8(void);
extern void func_0211b524(s32 a);
extern s32 func_0211bb74(s32 *a, s32 b, s32 c);
extern s32 func_0211b718(s32 *a, s32 b, s32 c);
extern s32 func_0211bcec(s32 *a, s32 b, s32 c);
extern void func_0210ea40(s32 a);
extern u32 func_0210e968(s32 a, s32 b);
extern u8 *func_0210e938(void);
extern void func_0208b604(u32 a, u32 b, u32 c, u32 d);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020fc684(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101280(s32 a, s32 b);
extern void func_0211216c(s32 a, s32 b);
extern void func_02121170(s32 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern u32 func_0209531c(void);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_021092fc(void);
extern void func_02107e1c(void);
extern void func_02108e24(s32 a);
extern void func_0211fc68(void);
extern u8 data_021368dc[];
extern u32 data_0214dc48, data_0214dc5c, data_0214dc70, data_0214dc84;
extern u32 data_0214dcb8, data_0214dca0;
extern u32 data_0215be48;
extern u32 data_021368ac[3], data_021368b8[3], data_021368c4[3], data_021368d0[3];
extern u16 data_0214d990[];
extern T16 data_0214d980;

#ifndef COPY_LOOP
#define COPY_LOOP do { a = *ps++; b = *ps++; *pd++ = a; *pd++ = b; n--; } while (n != 0);
#endif

void func_0211f3d0(s32 *param_1)
{
    s32 t0;
    s32 *puVar13;
    u32 *puVar19;
    s32 uVar10;
    s32 iVar18;
    s32 iVar3, iVar6, iVar7, iVar8, iVar9;
    s32 i;
    s32 *piVar16;
    u8 *piVar5;
    u16 auStack_48[8];
    T16 local_38;
    u32 *r5p;
    u32 u10;
    s32 uVar4;
    s32 ci;
    u32 r7v, r6v;

    t0 = func_020939e8();
    puVar13 = param_1 + 0x730;
    puVar19 = (u32 *)(data_021368dc + puVar13[0] * 12);
    if (puVar13[4] != 0) {
        func_0211b524(t0);
        puVar13[4] = 0;
    }
    uVar10 = 0;
    if (puVar13[0] == 2) {
        uVar10 = puVar13[1];
        param_1[0x24a] = func_0211bb74(param_1 + 0x1a, 70, uVar10);
    } else if (puVar13[0] == 4) {
        uVar10 = 4;
        param_1[0x24a] = func_0211b718(param_1 + 0x1a, 70, uVar10);
    } else if (puVar13[0] == 3) {
        uVar10 = 3;
        param_1[0x24a] = func_0211b718(param_1 + 0x1a, 70, uVar10);
    } else {
        switch (puVar13[0]) {
        case 0:
            if (t0 >= 10000) uVar10 = 7;
            else if (t0 >= 300) uVar10 = 3;
            else uVar10 = 1;
            break;
        case 1:
            if (t0 >= 10000) uVar10 = 63;
            else if (t0 >= 300) uVar10 = 27;
            else uVar10 = 1;
            break;
        }
        param_1[0x24a] = func_0211bcec(param_1 + 0x1a, 70, uVar10);
    }

    switch (puVar13[0]) {
    case 0:
        func_0210ea40(1);
        func_0210ea40(2);
        func_0210ea40(4);
        func_0210ea40(5);
        func_0210ea40(7);
        func_0210ea40(3);
        param_1[0x24d] = 29;
        break;
    case 1:
        func_0210ea40(1);
        func_0210ea40(2);
        func_0210ea40(4);
        func_0210ea40(5);
        func_0210ea40(7);
        func_0210ea40(3);
        param_1[0x24d] = 30;
        break;
    case 2:
        switch (puVar13[1]) {
        case 0: func_0210ea40(1); break;
        case 1: func_0210ea40(2); break;
        case 2: func_0210ea40(3); break;
        case 3: func_0210ea40(4); break;
        case 4: func_0210ea40(5); break;
        case 5: func_0210ea40(6); break;
        case 6: func_0210ea40(7); break;
        }
        param_1[0x24d] = 31;
        break;
    case 3:
        param_1[0x24d] = 32;
        break;
    case 4:
        i = 0;
        if (i < param_1[0x24a]) {
            piVar16 = param_1 + 0x250;
            do {
                piVar5 = func_0210e938();
                func_0208b604((u32)piVar5, *(u16 *)((u8 *)param_1 + i * 32 + 106),
                              (u8)*(s32 *)((u8 *)param_1 + i * 32 + 132), (u32)piVar16);
                piVar16 += 3;
                i++;
            } while (i < param_1[0x24a]);
        }
        param_1[0x24d] = 33;
        break;
    }

    iVar18 = param_1[0x24d];
    func_0210ea40(iVar18);
    iVar3 = func_0210e968(iVar18, (s32)&data_0214dc48);
    iVar6 = func_0210e968(iVar18, (s32)&data_0214dc5c);
    iVar7 = func_0210e968(iVar18, (s32)&data_0214dc70);
    iVar8 = func_0210e968(iVar18, (s32)&data_0214dc84);
    iVar9 = func_0210e968(iVar18, puVar19[0]);
    func_02113090(2, iVar3);
    func_021130c4(2, iVar6);
    func_0211305c(2, iVar7);
    func_02112ed0(2, iVar8);
    func_02112e74(2, iVar9);
    func_020fc76c(iVar18, puVar19[1], puVar19[2], (s32)&data_0214dca0, (s32)&data_0214dcb8);
    *(u32 *)((u32)(*(u8 **)&data_0215be48 + 0xc000) + 0x838) = 6;
    *(u32 *)((u32)(*(u8 **)&data_0215be48 + 0xc000) + 0x83c) = 1;

    if ((u32)puVar13[0] <= 3) {
        switch (puVar13[0]) {
        case 0: u10 = 47; r5p = data_021368ac; break;
        case 2: u10 = 51; r5p = data_021368b8; break;
        case 3: u10 = 53; r5p = data_021368c4; break;
        case 1: u10 = 49; r5p = data_021368d0; break;
        }
        func_0210ea40(u10);
        func_020fc684(u10, r5p[0], r5p[1], r5p[2], r5p[2]);
    }
    if (puVar13[0] != 4) {
        func_020fc8b0(2, 0, 3);
    }
    func_020fc8b0(2, 1, 8);
    func_02101cf4();
    for (i = 0; i < 10; i++) {
        func_02101894(0, iVar8, iVar6, i + 10, 0);
        func_02101280(0, i + 10);
    }
    func_0211216c(1, 1);
    func_0211216c(0, 1);
    func_0211216c(3, 1);
    func_0211216c(2, 3);
    ci = *(s32 *)(*(u8 **)&data_0215be48 + 0xbc);
    if (ci == 6 || ci == 24 || ci == 26) {
        puVar13[3] = 0;
    }
    {
        u16 *ps = data_0214d990;
        u16 *pd = auStack_48;
        u32 n = 4;
        u16 a, b;
        COPY_LOOP
    }
    local_38 = data_0214d980;
    func_02121170(param_1, (s32)func_0211fc68, (s32)&local_38, (s32)auStack_48, 8, 5, 0x30,
                  param_1[0x24a], puVar13[3]);

    uVar4 = puVar13[0];
    if (uVar4 == 1) {
        if (puVar13[5] == 0) {
            func_02097b94(8, 0x2581, 0, 0, 0);
            puVar13[5] = 1;
        }
    } else {
        r7v = 0;
        r6v = 0;
        switch (uVar4) {
        case 0:
            r7v = 0x23f0;
            break;
        case 3:
            r7v = 0x24b8;
            break;
        case 4:
            r7v = 0x238d;
            if (func_0209531c() == 0) {
                r6v = 1;
            }
            break;
        }
        if (puVar13[5] == 0 && r7v != 0) {
            func_02097b94(8, r7v, r6v, 0, 1);
            puVar13[5] = 1;
        }
    }
    func_02112798(2, 25, 0);
    func_02112798(2, 26, 0);
    func_02112798(2, 42, 0);
    func_02112798(2, 43, 0);

    switch (puVar13[0]) {
    case 4:
        *(u16 *)(param_1 + 0x24f) = 43;
        for (i = 0; i < 5; i++) {
            func_02112798(2, (u16)(i + 20), 0);
            func_02112798(2, (u16)(i + 27), 0);
            func_02112798(2, (u16)(i + 5), 0);
            func_02112798(2, (u16)(i + 15), 0);
            func_02112798(2, (u16)(i + 37), 0);
            func_02112978(2, (u16)(i + 10), 8, 11);
        }
        break;
    case 3:
        *(u16 *)(param_1 + 0x24f) = 42;
        for (i = 0; i < 5; i++) {
            func_02112798(2, (u16)(i + 20), 0);
            func_02112798(2, (u16)(i + 27), 0);
            func_02112798(2, (u16)(i + 32), 0);
            func_02112798(2, (u16)i, 0);
        }
        break;
    default:
        *(u16 *)(param_1 + 0x24f) = 42;
        for (i = 0; i < 5; i++) {
            func_02112798(2, (u16)(i + 32), 0);
            func_02112798(2, (u16)i, 0);
            func_02112798(2, (u16)(i + 37), 0);
        }
        break;
    }
    func_021092fc();
    func_02107e1c();
    func_02108e24(0);
    if (puVar13[0] == 1 && *(s32 *)(*(u8 **)&data_0215be48 + 0xbc) == 0) {
        *(u16 *)(*(u8 **)&data_0215be48 + 0x11160) = 16;
    }
    *(u32 *)((u32)(*(u8 **)&data_0215be48 + 0x1000) + 0xe30) = 3;
}
