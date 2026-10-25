#include "ctx.h"

extern s32 data_ov005_02167dfc;
extern s32 data_ov005_02167df8;
extern s32 data_ov005_02167de4;
extern s32 data_ov005_02167df4;
extern s32 data_ov005_02167df0;
extern s32 data_ov005_02167de8;
extern void func_02027618(u8 *p, u32 *q);
extern s32 func_02028130(u8 *p);
extern void func_020275f0(u8 *p, u32 *q);
extern void func_0202756c(u8 *p, s32 *q);
extern void func_020275dc(u8 *p, u32 *q);
extern void func_020271b8(u8 *p, s32 *q, s32 r);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, u32 *c, u32 *d);
extern s32 func_02027428(u8 *p);
extern void func_ov005_02163bc8(u8 *p, u32 *q, u32 *r);
extern void func_ov005_02163a40(u8 *p, u32 *q, u32 *r);

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_ov005_021636c8(u8 *param_1, s32 param_2, u32 *param_3, u32 *param_4)
{
    s32 iVar2;
    s32 t0, t1, t2;
    s32 M0[12];
    s32 L158[3];
    s32 L14c[3];
    s32 L140[3];
    s32 A134[3];
    s32 M3a[12];
    s32 M3b[12];
    s32 vecA[3];
    s32 vecB[3];
    s32 vecC[3];
    s32 M4a[12];
    s32 M4b[12];
    s32 M7[12];

    switch (param_2) {
    case 0:
        func_02027618(param_1, param_3);
        iVar2 = func_02028130(param_1);
        *param_4 = mulr(data_ov005_02167dfc, iVar2);
        return;
    case 1:
        func_020275f0(param_1, param_3);
        iVar2 = func_02028130(param_1);
        *param_4 = mulr(data_ov005_02167df8, iVar2);
        return;
    case 2:
        iVar2 = func_02028130(param_1);
        func_0202756c(param_1, M0);
        L158[0] = M0[6];
        L158[1] = M0[7];
        L158[2] = M0[8];
        func_020275dc(param_1, param_3);
        func_01ff832c(mulr(data_ov005_02167de4, iVar2), L158, (u32 *)param_3, (u32 *)param_3);
        iVar2 = func_02028130(param_1);
        *param_4 = mulr(data_ov005_02167df4, iVar2);
        return;
    case 3:
        func_020271b8(param_1, M3a, 3);
        L14c[0] = M3a[9];
        L14c[1] = M3a[10];
        L14c[2] = M3a[11];
        func_020271b8(param_1, M3b, 4);
        L140[0] = M3b[9];
        L140[1] = M3b[10];
        L140[2] = M3b[11];
        func_02067e34(L140, L14c, A134);
        func_01ff832c(0x800, A134, (u32 *)L14c, param_3);
        iVar2 = func_02028130(param_1);
        *param_4 = mulr(data_ov005_02167df0, iVar2);
        return;
    case 4:
        func_020271b8(param_1, M4a, 7);
        vecA[0] = M4a[9];
        vecA[1] = M4a[10];
        vecA[2] = M4a[11];
        func_020271b8(param_1, M4b, 8);
        vecB[0] = M4b[9];
        vecB[1] = M4b[10];
        vecB[2] = M4b[11];
        func_02067e34(vecB, vecA, vecC);
        func_01ff832c(0x800, vecC, (u32 *)vecA, param_3);
        iVar2 = func_02028130(param_1);
        *param_4 = mulr(data_ov005_02167df0, iVar2);
        return;
    case 5:
        func_ov005_02163bc8(param_1, param_3, param_4);
        return;
    case 6:
        func_ov005_02163a40(param_1, param_3, param_4);
        return;
    case 7:
        iVar2 = func_02027428(param_1);
        if (iVar2 == 2) {
            func_020271b8(param_1, M7, 0x1c);
        } else {
            func_020271b8(param_1, M7, 0x1b);
        }
        t2 = M7[11];
        t1 = M7[10];
        t0 = M7[9];
        param_3[0] = (u32)t0;
        param_3[1] = (u32)t1;
        param_3[2] = (u32)t2;
        iVar2 = func_02028130(param_1);
        *param_4 = mulr(data_ov005_02167de8, iVar2);
        return;
    }
}
