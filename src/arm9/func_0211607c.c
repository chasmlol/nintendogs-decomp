#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214a000[];
extern u8 data_0214a00c[];
extern u8 data_0214a018[];
extern u8 data_0214a030[];
extern u8 data_0214a044[];
extern u8 data_0214a07c[];
extern u8 data_0214a050[];
extern u8 data_0214a064[];
extern u8 data_0214a078[];
extern u8 data_02149fbc[];
extern u8 data_02149f9c[];
extern u8 data_02149fac[];
extern u8 data_02149f58[];
extern u8 data_02149f44[];
extern u8 data_02149f50[];

extern void func_0210ea40();
extern u32 func_0210e968(s32 a, void *b);
extern void func_02113090(s32 a, u32 b);
extern void func_021130c4(s32 a, u32 b);
extern void func_02112ed0(s32 a, u32 b);
extern void func_02112e74(s32 a, u32 b);
extern void func_0211305c(s32 a, u32 b);
extern void func_020fc76c(s32 a, void *b, void *c, void *d, void *e);
extern void func_0211216c(s32 a, s32 b);
extern void func_02116800(s32 p);
extern void func_02101cf4(void);
extern u32 func_02112e34(s32 a);
extern u32 func_02112e54(s32 a);
extern u32 func_02112e14(s32 a);
extern u32 func_02101894(s32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02101be4(u32 a, s32 b);
extern void func_021017d4(s32 a, u32 b, s32 c);
extern s32 func_01ffdb08(s32 a);
extern u32 func_020280f4(s32 a);
extern u32 func_0202817c(s32 a);
extern void func_02101118(s32 a, u32 b, s32 c, s32 d, u32 e);
extern s32 func_020953bc(u32 a);
extern void func_02117f98(void *p, s32 a, void *b, s32 c, s32 d, s32 e, s32 f);
extern void func_02117cf0(void *p);
extern void func_02108e50(s32 a);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02115fc8(s32 p);
extern void func_021177ac(void *p);
extern void func_021092fc(void);
extern void func_02107dd8(void);
extern void func_02117700(void *p, s32 a);

void func_0211607c(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s16 *psVar9;
    s32 iVar5;
    s32 iVar2;
    s32 iVar3;
    u32 iVar4;
    s32 iVar6;
    u16 *puVar8;
    s16 sVar1;

    psVar9 = (s16 *)((u8 *)param_1 + 0x1cb8);
    func_0210ea40(0x1b, psVar9, param_3, param_4);
    if (*(s32 *)(data_0215be48 + 0xa8) == 3) {
        func_0210ea40(0x1a);
    }
    iVar2 = func_0210e968(0x1b, data_0214a000);
    iVar3 = func_0210e968(0x1b, data_0214a00c);
    iVar4 = func_0210e968(0x1b, data_0214a018);
    iVar5 = func_0210e968(0x1b, data_0214a030);
    iVar6 = func_0210e968(0x1b, data_0214a044);
    func_02113090(2, iVar2);
    func_021130c4(2, iVar3);
    func_02112ed0(2, iVar4);
    func_02112e74(2, iVar5);
    func_0211305c(2, iVar6);
    if (*(s32 *)(data_0215be48 + 0xbc) == 0x22) {
        *(s32 *)(data_0215be48 + 0xc838) = 5;
        *(s32 *)(data_0215be48 + 0xc83c) = 1;
    } else {
        *(s32 *)(data_0215be48 + 0xc838) = 1;
        *(s32 *)(data_0215be48 + 0xc83c) = 1;
    }
    func_020fc76c(0x1b, data_0214a050, data_0214a064, data_0214a078, data_0214a07c);
    func_0211216c(2, 2);
    {
        s32 k;
        u32 *puVar7;

        k = 0;
        param_1[0] = 0;
        param_1[0xbd] = 0;
        param_1[0xc0] = 0;
        puVar7 = param_1 + 3;
        do {
            k = k + 1;
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
        } while (k < 3);
    }
    *(u32 *)((u8 *)psVar9 + 4) = 0;
    psVar9[0] = 2;
    *(s32 *)(data_0215be48 + 0x5030) = 1;
    param_1[0xc1] = 1;
    func_02116800((s32)param_1);
    func_02101cf4();
    {
        s32 k;
        u32 e2;
        u32 e3;

        e2 = func_02112e34(2);
        e3 = func_02112e54(2);
        iVar4 = func_02112e14(2);
        k = 0;
        do {
            iVar6 = func_02101894(0, e2, e3, k + 0x17, *(s32 *)(data_0215be48 + 0x4844));
            func_02101be4(iVar6, 0);
            func_021017d4(0, iVar6, 0xe);
            k = k + 1;
        } while (k < 3);
    }
    iVar2 = 0;
    do {
        iVar3 = func_01ffdb08((s16)iVar2);
        if (iVar3 != 0) {
            puVar8 = (u16 *)func_020280f4(iVar3);
            if (puVar8 != 0) {
                iVar3 = func_0202817c(iVar3);
                if (*(s32 *)(iVar3 + 0x640) == 0xffff && *(s32 *)(iVar3 + 0x644) == 0xffff) {
                    func_02101118(0, iVar4, iVar2 + 0x17, iVar2 + 3, (u32)puVar8);
                } else {
                    iVar3 = func_020953bc(iVar3);
                    if (iVar3 != 0) {
                        func_02101118(0, iVar4, iVar2 + 0x17, iVar2, (u32)puVar8);
                    } else {
                        func_02101118(0, iVar4, iVar2 + 0x17, iVar2 + 6, (u32)puVar8);
                    }
                }
            }
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    func_02117f98(param_1 + 0x8d, 2, data_02149fbc, 3, 0x132, 0x98, 0x10);
    func_02117f98(param_1 + 0x95, 2, data_02149f9c, 4, -50, 0x98, 0x10);
    func_02117f98(param_1 + 0x9d, 2, data_02149fac, 5, 0x132, 0x4b, 0x10);
    func_02117f98(param_1 + 0xa5, 2, data_02149f58, 0xf, -45, 0x12, 0x10);
    func_02117f98(param_1 + 0xad, 2, data_02149f44, 0x11, -45, 0x39, 0x10);
    func_02117f98(param_1 + 0xb5, 2, data_02149f50, 9, -26, 0x59, 0x10);
    *(u16 *)(param_1 + 0xa9) = 0;
    *(u16 *)(param_1 + 0xb1) = 0;
    func_02108e50(0);
    *(u16 *)(param_1 + 0xb9) = 0;
    func_02117cf0(param_1 + 0x8d);
    func_02117cf0(param_1 + 0x95);
    func_02117cf0(param_1 + 0x9d);
    func_02117cf0(param_1 + 0xa5);
    func_02117cf0(param_1 + 0xad);
    func_02117cf0(param_1 + 0xb5);
    func_02112798(2, 9, 1);
    func_02112798(2, 10, 0);
    func_02115fc8((s32)param_1);
    {
        s32 k;
        s32 bVar11;
        u32 *piVar10;

        k = 0;
        piVar10 = param_1 + 0x60;
        do {
            bVar11 = 0;
            iVar3 = func_01ffdb08((s16)k);
            if (iVar3 != 0) {
                iVar3 = func_0202817c(iVar3);
                if (*(u16 *)(iVar3 + 0x78) != 0) {
                    iVar4 = func_020953bc(iVar3);
                    if (iVar4 != 0) {
                        bVar11 = 1;
                    } else if (*(s32 *)(iVar3 + 0x640) != 0xffff || *(s32 *)(iVar3 + 0x644) != 0xffff) {
                        bVar11 = 1;
                    }
                }
            }
            if (bVar11) {
                func_02112798(2, (u16)(k + 0x1a), 0);
            } else {
                func_021177ac(piVar10);
                func_02112798(2, (u16)(k + 0x17), 0);
            }
            k = k + 1;
            piVar10 = piVar10 + 0xf;
        } while (k < 3);
    }
    func_021092fc();
    func_02107dd8();
    if (*(s32 *)(data_0215be48 + 0xa8) != 0) {
        return;
    }
    sVar1 = psVar9[0];
    switch (sVar1) {
    case 0:
        func_02117700(param_1 + 6, 0);
        *(s32 *)(data_0215be48 + 0x5034) = 1;
        func_02112798(2, 0x11, 0);
        func_02117700(param_1 + 0x15, 0);
        return;
    case 1:
        func_02117700(param_1 + 6, 1);
        *(s32 *)(data_0215be48 + 0x5034) = 1;
        func_02112798(2, 0x11, 0);
        func_02117700(param_1 + 0x15, 0);
        return;
    case 2:
        func_02117700(param_1 + 6, 1);
        *(s32 *)(data_0215be48 + 0x5034) = 0;
        func_02112798(2, 0x11, 1);
        func_02117700(param_1 + 0x15, 1);
        return;
    }
    return;
}
