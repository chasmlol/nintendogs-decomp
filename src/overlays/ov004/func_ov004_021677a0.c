#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { s32 w[3]; } T3;

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u16 data_ov004_0217025c[];
extern s32 *data_0214f464;

extern s32 func_020f5220(void);
extern void func_020f3bdc(s32 a);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_02036b94(u8 *p, u8 *q);
extern s32 func_02022dd0(u8 *p);
extern s16 func_0203bc40(u8 *p);
extern s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02029504(u8 *p);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e554(s32 a);
extern void func_020bbc58(void);
extern void func_ov004_0216c23c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_0203541c(u8 *p);
extern void func_02042af4(s32 v);
extern void func_02029180(u8 *p, s32 a, s32 b);
extern s32 func_02028124(u8 *p);

void func_ov004_021677a0(u8 *param_1)
{
    s32 iVar8;
    s32 iVar12;
    s32 iVar11;
    s32 iVar6;
    s32 uVar10;
    s32 iVar5;
    s16 sVar5;
    s32 bVar4;
    s32 uVar7;
    s32 uVar9;
    u16 uVar1;
    u16 local_20[5];
    s32 r3v;
    s32 r1v;
    s32 r5v;
    s32 f0v;

    iVar8 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar8 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar8) {
        iVar8 = 0;
    } else {
        iVar8 = *(s32 *)(data_02159468 + iVar8 * 4 + 4);
    }
    iVar12 = 0;
    *(s32 *)(param_1 + 0x484) = 0;
    iVar11 = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    bVar4 = func_020f5220();
    if (bVar4) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    if (iVar8 != 0) {
        *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar8 + 0xbc);
        func_0203942c(param_1);
        func_02037450(param_1, 0x392);
        iVar11 = func_02036b94(param_1, param_1 + 0x26c);
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
        iVar12 = *(s32 *)(iVar8 + 0xf8);
    }
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar6 = 0;
        goto gate;
    }
    f0v = *(s16 *)(param_1 + 0xf0);
    if (f0v == 0) goto call1;
    switch (f0v) {
    case 0x6f:
        iVar6 = 0;
        break;
    default:
    call1:
        bVar4 = func_02022dd0(param_1);
        if (bVar4) {
            sVar5 = func_0203bc40(param_1);
            iVar6 = func_0202dc50(param_1, 0, 0, (s32)sVar5, *(u8 *)(param_1 + 0xa5), 1);
        } else {
            func_02029504(param_1);
            iVar6 = 0;
        }
        break;
    }
gate:
    if (iVar6 != 0) {
        return;
    }
    if (iVar8 == 0) {
        local_20[0] = data_ov004_0217025c[0];
        local_20[1] = data_ov004_0217025c[1];
        local_20[2] = data_ov004_0217025c[2];
        local_20[3] = data_ov004_0217025c[3];
        local_20[4] = data_ov004_0217025c[4];
        iVar8 = func_ov004_0216ea3c();
        if (iVar8 != 0) {
            func_ov004_0216e554(1);
        }
        func_020bbc58();
        uVar1 = local_20[*(s8 *)(param_1 + 0x8e)];
        uVar10 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar10;
        if ((u16)(((u32)uVar1 * (u16)uVar10) >> 16) != 0) goto OUTC;
        uVar10 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar10;
        switch ((u16)(((u32)(u16)uVar10 * 5u) >> 16)) {
        case 0:
            func_0203e908(param_1, 1196);
            return;
        case 1:
            func_0203e908(param_1, 1197);
            return;
        case 2:
            func_0203e908(param_1, 1198);
            return;
        case 3:
            func_0203e908(param_1, 1199);
            return;
        case 4:
            func_0203e908(param_1, 1200);
            return;
        default:
            goto FIN;
        }
    OUTC:
        func_ov004_0216c23c(param_1);
        return;
    } else {
        iVar8 = func_0203541c(param_1);
        if (iVar8 != 0) {
            func_02042af4(*(s8 *)(param_1 + 0x88));
            func_02029180(param_1, 0x53, 1);
            func_0203e908(param_1, 1147);
            iVar8 = 1;
        } else {
            iVar8 = 0;
        }
        if (iVar8 != 0) {
            return;
        }
        iVar8 = func_02028124(param_1);
        if (iVar11 > FX_Mul(iVar12 + 0x10000, iVar8)) {
            func_0203e908(param_1, 1213);
            return;
        }
        iVar8 = func_02028124(param_1);
        if (iVar11 >= FX_Mul(iVar12 + 0x2000, iVar8)) {
            return;
        }
        func_0203e908(param_1, 1217);
    }
FIN:
    return;
}
