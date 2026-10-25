#include "ctx.h"

extern u8 data_021488b4[];
extern u8 data_021488d0[];
extern u8 data_021488ec[];
extern u8 data_02148908[];
extern u8 data_02148928[];
extern u8 data_02148944[];
extern u8 data_02148964[];
extern u8 data_02148984[];
extern u8 data_021489a8[];
extern u8 data_0215be48[];
extern u8 data_02148800[];
extern u8 data_02148808[];
extern u8 data_02148818[];
extern u8 data_0214882c[];
extern void func_0211079c(void);

typedef struct { u16 w[3]; } H3;
typedef struct { u16 w[9]; } H9;
typedef struct { u16 w[13]; } H13;
typedef struct { u32 w[4]; } T4;

typedef struct {
    s32 count;          /* 0x000 */
    s32 f004;           /* 0x004 */
    u8  pad008[0x14];
    s32 f01c;           /* 0x01c */
    u8  pad020[4];
    s32 f024;           /* 0x024 */
    u8  pad028[4];
    u8  f02c[0x68];     /* 0x02c */
    u8  f094[0x8c0];    /* 0x094 */
    s16 hw[9];          /* 0x954 */
} Obj;

extern void func_0210ea40(s32 a);
extern s32 func_0210e968(s32 a, u8 *p);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u8 *b, u8 *c, u8 *d, u8 *e);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02101280(s32 a, s32 b);
extern void func_0211216c(s32 a, s32 b);
extern void func_02112958(s32 a, s32 b, s32 c);
extern s32 func_0210ee14(s32 a, u8 *b, s32 c);
extern s32 func_0211b190(s32 a);
extern s32 func_0211b228(s32 a);
extern s32 func_02027708(s32 a);
extern s32 func_02044ccc(s32 a);
extern u32 func_02112854(s32 a, u32 b);
extern void func_0210f14c(s32 a, u32 b, u32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern s32 func_020280d8(s32 a);
extern u16 *func_020955c0(s16 a);
extern s32 func_01ffdb08(s16 a);
extern s32 func_02044ce4(s16 a);
extern s32 func_020341f0(s32 a);
extern void func_02112798(s32 a, s32 b, s32 c);
extern s32 func_0211b6d0(s32 a, s32 b, s32 c);
extern void func_02121170(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_02108e24(s32 a);

void func_0211013c(Obj *p, s32 param_2, s32 param_3, u32 param_4)
{
    u8 *q80;
    u8 *q6c;
    s32 iVar8;
    s32 iVar9;
    s32 iVar10;
    s32 iVar11;
    s32 iVar12;
    s32 sVar7;
    s32 local_6c;
    u32 uVar13;
    u16 *puVar14;
    u16 *puVar20;
    u16 local_68[12];
    u16 auStack_50[14];
    T4 local_34;
    u16 uVar1;

    q80 = (u8 *)p + 0x1c80;
    q6c = (u8 *)p + 0x1c6c;
    func_0210ea40(5);
    func_0210ea40(14);
    iVar8 = func_0210e968(14, data_021488b4);
    iVar9 = func_0210e968(14, data_021488d0);
    iVar10 = func_0210e968(14, data_021488ec);
    iVar11 = func_0210e968(14, data_02148908);
    iVar12 = func_0210e968(14, data_02148928);
    func_02113090(2, iVar8);
    func_021130c4(2, iVar9);
    func_0211305c(2, iVar10);
    func_02112ed0(2, iVar11);
    func_02112e74(2, iVar12);
    func_020fc76c(14, data_02148944, data_02148964, data_02148984, data_021489a8);
    *(s32 *)(*(u8 **)data_0215be48 + 0xc838) = 7;
    *(s32 *)(*(u8 **)data_0215be48 + 0xc83c) = 1;
    p->f01c = 0;
    p->f024 = 0;
    func_020fc8b0(2, 0, 3);
    func_02101cf4();
    func_02101894(0, iVar11, iVar9, 0x18, 0);
    func_02101280(0, 0x18);
    iVar8 = 0;
    do {
        func_02101894(0, iVar11, iVar9, iVar8 + 0x13, 0);
        func_02101280(0, iVar8 + 0x13);
        iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    func_0211216c(1, 1);
    func_0211216c(0, 1);
    func_0211216c(3, 1);
    func_0211216c(2, 3);
    func_02112958(2, 0x18, 1);
    func_02112958(2, 0x52, 1);
    func_02112958(2, 0x53, 1);
    sVar7 = func_0210ee14(4, (u8 *)p + 0x94, 70);
    p->f004 = sVar7;
    p->count = 0;
    iVar8 = 0;
    do {
        iVar9 = func_0211b190(iVar8);
        if (iVar9 != 0) {
            p->count = p->count + 1;
        }
        iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    *(H9 *)(local_68 + 3) = *(H9 *)data_02148818;
    iVar8 = 0;
    if (0 < 3 - p->count) {
        s32 jj;
        u16 *pt;
        pt = local_68 + 3;
        local_6c = iVar8;
        do {
            jj = local_6c;
            do {
                func_02112798(2, (u16)(jj + pt[0]), 0);
                func_02112798(2, (u16)(jj + pt[1]), 0);
                func_02112798(2, (u16)(jj + pt[2]), 0);
                jj = jj + 1;
            } while (jj < 5);
            iVar8 = iVar8 + 1;
            pt = pt + 3;
        } while (iVar8 < 3 - p->count);
    }
    *(H3 *)local_68 = *(H3 *)data_02148800;
    p->hw[2] = -1;
    p->hw[1] = p->hw[2];
    p->hw[0] = p->hw[1];
    iVar8 = 0;
    if (p->count > 0) {
        do {
            iVar9 = func_0211b228(iVar8);
            iVar10 = func_0211b190(iVar8);
            if (iVar10 != 0) {
                iVar11 = func_02027708(iVar10);
                iVar11 = func_02044ccc(iVar11);
                uVar1 = local_68[iVar8];
                uVar13 = func_02112854(2, uVar1);
                func_0210f14c(2, uVar1, uVar13, *(s32 *)(iVar11 + 0x88), *(s32 *)(iVar11 + 0x8c), *(s32 *)(iVar11 + 0x90), 0, 0);
                iVar10 = func_020280d8(iVar10);
                p->hw[iVar9] = (s16)iVar10;
            }
            iVar8 = iVar8 + 1;
        } while (iVar8 < p->count);
    }
    {
        u16 *pu;
        s32 ci;
        s32 vv;
        ci = 0;
        do {
            pu = func_020955c0(ci);
            vv = func_01ffdb08(ci);
            if (pu == 0) goto neg3;
            if (*pu == 0xffff) goto neg3;
            if (vv == 0) goto pos3;
            if (func_02044ce4(ci) != 0) goto pos3;
            if (func_020341f0(vv) == 0) goto neg3;
        pos3:
            *(s16 *)((u8 *)p + (u32)ci * 2 + 0x95a) = ((s16 *)pu)[3];
            goto next3;
        neg3:
            *(s16 *)((u8 *)p + (u32)ci * 2 + 0x95a) = -1;
        next3:
            ci = ci + 1;
        } while (ci < 3);
    }
    func_02112798(2, 5, 0);
    func_02112798(2, 6, 0);
    func_02112798(2, 0x11, 0);
    func_02112798(2, 0x12, 0);
    func_02112798(2, 0x28, 0);
    func_02112798(2, 0x29, 0);
    if (*(s16 *)q80 != -1) {
        iVar8 = func_0211b6d0((s32)p + 0x94, p->f004, *(s16 *)q80);
        if (iVar8 >= 0) {
            *(s16 *)(q6c + 12) = (s16)iVar8;
        }
    }
    puVar20 = auStack_50;
    *(H13 *)auStack_50 = *(H13 *)data_0214882c;
    local_34 = *(T4 *)data_02148808;
    func_02121170((s32)p + 0x2c, (s32)func_0211079c, (s32)&local_34, (s32)auStack_50, 13, 5, 48, p->f004, *(s16 *)(q6c + 12));
    func_02112978(2, 0x18, -255, 0);
    func_02112978(2, 0x52, -255, 0);
    func_02112978(2, 0x53, -255, 0);
    func_02108e24(0);
    iVar8 = 0;
    do {
        iVar9 = func_01ffdb08(iVar8);
        if (iVar9 == 0) goto neg4;
        if (func_02044ce4(iVar8) != 0) goto neg4;
        iVar9 = func_020280d8(iVar9);
        *(s16 *)((u8 *)p + (u32)iVar8 * 2 + 0x960) = (s16)iVar9;
        goto next4;
    neg4:
        *(s16 *)((u8 *)p + (u32)iVar8 * 2 + 0x960) = -1;
    next4:
        iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    (void)puVar20;
}
