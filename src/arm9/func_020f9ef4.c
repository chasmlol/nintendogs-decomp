#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u16 a[13]; u16 b; u16 c[13]; u16 d; } Blk;
typedef struct { u8 b[6]; } B6;

extern u8 data_0214673c[];
extern u8 data_02146750[];
extern u8 data_02146764[];
extern u8 data_02146780[];
extern u8 data_02146794[];
extern B6 data_021466f8;
extern B6 data_02146700;
extern u8 *data_02159030;
extern u8 data_021332ac[];
extern u8 *data_0215be48;
extern u8 data_021467f4[];
extern u8 data_021467ac[];
extern u8 data_021467c4[];
extern u8 data_021467dc[];

extern s32 func_02092af0(s32 a);
extern void *func_0210e938(void);
extern void func_0208b730(void *a, s32 b, void *c);
extern s32 func_0210e968(s32 a, void *b);
extern void func_0210ea40(s32 a);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101280(s32 a, s32 b);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, void *e);
extern void func_0206c7d4(void *a, void *b, s32 c);
extern s32 func_020939ac(s32 a);
extern void *func_02090cac(s32 a, s32 b, s32 c);
extern void func_0210f14c(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern void func_0208b604(void *a, s32 b, s32 c, void *d);
extern void func_020fc084(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_020fc76c(s32 a, void *b, void *c, void *d, void *e);
extern void func_020fa470(s32 *p);
extern void func_02108fc8(void);
extern void func_02109084(void);
extern void func_02108e24(s32 a);

void func_020f9ef4(s32 *param_1)
{
    s32 iVar2;
    s32 iVar8;
    u8 *pbVar13;
    u8 *pbVar12;
    s32 iVar3;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 iVar9;
    B6 tA;
    B6 tB;
    s32 local_80[3];
    s32 local_74[3];
    Blk blk;
    s32 loc30[3];
    void *piVar4;
    u16 *puVar14;
    s32 n;
    s32 r11v;
    s32 r2v;
    u32 uVar10;
    s32 k;

    iVar2 = func_02092af0(*(s16 *)((u8 *)param_1 + 0x1ca8));
    iVar3 = func_02092af0(*(s16 *)((u8 *)param_1 + 0x1ca8));
    {
        vu32 *zp = (vu32 *)local_74;
        zp[0] = 0;
        zp[1] = 0;
        zp[2] = 0;
    }
    param_1[2] = 0;
    func_0210ea40(22);
    piVar4 = func_0210e938();
    func_0208b730(piVar4, *(s16 *)(iVar2 + 0x58), local_80);
    iVar5 = func_0210e968(22, data_0214673c);
    iVar6 = func_0210e968(22, data_02146750);
    iVar7 = func_0210e968(22, data_02146764);
    iVar8 = func_0210e968(22, data_02146780);
    iVar9 = func_0210e968(22, data_02146794);
    func_02113090(2, iVar5);
    func_021130c4(2, iVar6);
    func_02112ed0(2, iVar7);
    func_02112e74(2, iVar9);
    func_02101cf4();

    k = 0;
    tA = data_021466f8;
    tB = data_02146700;
    {
        s32 i11;
        s32 p9;
        i11 = k;
        p9 = iVar3 + 0x68;
        do {
            u16 v = *(u16 *)(iVar3 + 0x68);
            i11++;
            iVar3 += 0x14;
            if (v != 0xffff) {
                local_74[k] = p9;
                k++;
            }
            p9 += 0x14;
        } while (i11 < 3);
    }

    pbVar13 = tA.b;
    pbVar12 = tB.b;
    for (n = 0; n < 6; n++) {
        func_02101894(0, iVar7, iVar6, *pbVar13, 0);
        func_02101280(0, *pbVar13);
        uVar10 = *pbVar13;
        switch (uVar10) {
        case 0xf:
        case 0x10:
        case 0x11:
            if (local_74[n] != 0) {
                func_02101118(0, iVar8, uVar10, *pbVar12, (void *)(local_74[n] + 4));
            }
            break;
        case 0x12:
            func_02101118(0, iVar8, uVar10, *pbVar12, (void *)(iVar2 + 0xc));
            break;
        case 0x13:
            func_0206c7d4((void *)(iVar2 + 0x22), blk.a, 26);
            blk.b = 10;
            func_0206c7d4((void *)(iVar2 + 0x3c), blk.c, 26);
            blk.d = 0;
            if (blk.c[0] == 0) {
                blk.b = 0;
            }
            func_02101118(0, iVar8, *pbVar13, *pbVar12, blk.a);
            break;
        case 0x14:
            r11v = *(s32 *)(data_02159030 + 0x30);
            r2v = func_020939ac(*(s32 *)(iVar2 + 8));
            puVar14 = func_02090cac(r11v, r2v + 0x2f45, 0);
            func_02101118(0, iVar8, *pbVar13, *pbVar12, puVar14);
            break;
        }
        pbVar13++;
        pbVar12++;
    }

    func_0210f14c(2, 5, 10, local_80[0], local_80[1], local_80[2], 0, 0);
    {
        u8 *pb = data_021332ac;
        for (n = 0; n < 3; n++) {
            u16 *pq = (u16 *)local_74[n];
            if (pq != 0) {
                piVar4 = func_0210e938();
                func_0208b604(piVar4, *pq, *((u8 *)pq + 2), loc30);
                func_0210f14c(2, *pb, n + 11, loc30[0], loc30[1], loc30[2], 0, 0);
            }
            pb++;
        }
    }
    func_020fc084(param_1 + 0x19, 2, 0x2b, 0x15, 2, *(u8 *)(iVar2 + 0x5a), 1, 0);
    func_020fc084(param_1 + 0x23, 2, 0x2b, 0x18, 2, *(u8 *)(iVar2 + 0x5b), 1, 0);
    func_020fc084(param_1 + 0x2d, 2, 0x1f, 0x1a, 5, *(s32 *)(iVar2 + 8), 1, 0);
    uVar10 = 0;
    do {
        func_02112798(2, (u16)uVar10, 0);
        uVar10++;
    } while ((s32)uVar10 < 0x37);
    *(s32 *)(data_0215be48 + 0xc838) = 4;
    *(s32 *)(data_0215be48 + 0xc83c) = 0;
    func_020fc76c(22, data_021467ac, data_021467c4, data_021467dc, data_021467f4);
    param_1[0] = 0;
    param_1[1] = *(vu32 *)&param_1[0];
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[8] = 0x3c000;
    func_020fa470(param_1);
    func_02108fc8();
    func_02109084();
    func_02108e24(0);
    param_1[0x18] = 0;
    param_1[7] = 0;
}
