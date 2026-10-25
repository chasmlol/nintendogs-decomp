#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 *data_0214f464;
extern u8 *data_02159428;

extern s32 func_02036578(u8 *p);
extern void func_02027668(s32 a, s32 *b);
extern void func_02027654(s32 a, u8 *b);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_0203292c(u8 *p);
extern s32 func_02027708(s32 a);
extern void func_02035be8(u8 *p);
extern void func_02035aa0(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_0202fcc0(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_0203945c(u8 *p, s32 *a, s32 b);

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(s32)(b) + 0x800) >> 12))

void func_0204c768(u8 *param_1, s32 param_2, s32 param_3)
{
    s64 w64;
    s32 local_40[3];
    s32 aiStack_34[3];
    s32 iVar6;
    s32 iVar9;
    s32 iVar10;
    s32 iVar11;
    s32 uVar13;
    s32 uVar12;
    s32 dx;
    s32 dz;
    u32 t;
    s32 bVar5;
    s32 f;
    s32 g;

    uVar13 = -1;
    uVar12 = -1;
    iVar6 = func_02036578(param_1);
    if (iVar6 != 0) {
        func_02027668(iVar6, local_40);
        func_02027654(iVar6, param_1 + 0x278);
        iVar11 = *(s32 *)(param_1 + 0x2a0);
        iVar10 = *(s32 *)(param_1 + 0x2a8);
        uVar13 = FXM(*(s32 *)(data_02159428 + 0xc), *(s32 *)(data_02159428 + 0xc));
        w64 = (s32)uVar13;
        uVar12 = (s32)((w64 * 0x334 + 0x800) >> 12);
        dx = local_40[0] - iVar11;
        dz = local_40[2] - iVar10;
        if (FXM(iVar11, iVar11) + FXM(iVar10, iVar10) < uVar12) {
            *(s32 *)(param_1 + 0x464) = 0;
        } else {
            t = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = t;
            if ((u16)(((u32)(u16)t * 0x96) >> 16) == 0) {
                if (param_3 != 0) {
                    t = *data_0214f464 * 0x10dcd + 1;
                    *data_0214f464 = t;
                    *(s32 *)(param_1 + 0x464) = (u16)(((u32)(u16)t * 3) >> 16);
                } else {
                    if (*(s32 *)(param_1 + 0x464) == 0) {
                        t = *data_0214f464 * 0x10dcd + 1;
                        *data_0214f464 = t;
                        *(s32 *)(param_1 + 0x464) = 1 + (u16)(((u32)t << 16) >> 31);
                    }
                }
            }
        }
        switch (*(s32 *)(param_1 + 0x464)) {
        case 0:
            *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x2a0) - dx * 2;
            *(u32 *)(param_1 + 0x270) = 0;
            *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x2a8) - dz * 2;
            break;
        case 1:
            *(s32 *)(param_1 + 0x26c) = local_40[2];
            *(u32 *)(param_1 + 0x270) = 0;
            *(s32 *)(param_1 + 0x274) = -local_40[0];
            break;
        case 2:
            *(s32 *)(param_1 + 0x26c) = -local_40[2];
            *(u32 *)(param_1 + 0x270) = 0;
            *(s32 *)(param_1 + 0x274) = local_40[0];
            break;
        }
        func_02037450(param_1, 0x302);
        uVar13 = func_0203292c(param_1);
        uVar12 = func_02027708(iVar6);
    }
    func_02035be8(param_1);
    if (param_2 == 0) {
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x278);
    } else {
        func_02035aa0(param_1);
    }
    if (func_020289d0(param_1, 0, 1) != 0) {
        return;
    }
    if (func_0203592c(param_1, 0) != 0) {
        if (iVar6 == 0) {
            return;
        }
        *(u8 *)(param_1 + 138) = func_02027708(iVar6);
        func_0203e908(param_1, 0x302);
        return;
    }
    if (func_020357c8(param_1, 0) != 0) {
        return;
    }
    if (iVar6 == 0) {
        func_0202fcc0(param_1);
        return;
    }
    iVar9 = *(s16 *)(iVar6 + 0xea);
    bVar5 = *(s8 *)(param_1 + 0x88);
    if (iVar9 < 620) {
        goto Z1;
    }
    if (iVar9 > 623) {
        goto Z1;
    }
    if (*(s16 *)(iVar6 + 0x13e) == bVar5) {
        f = 1;
        goto J1;
    }
Z1:
    f = 0;
J1:
    if (f != 0) {
        g = 1;
        goto L3a4;
    }
    if (iVar9 < 601) {
        goto Z2;
    }
    if (iVar9 <= 607) {
        f = 1;
        goto J2;
    }
Z2:
    f = 0;
J2:
    if (f == 0) {
        goto L3a0;
    }
    iVar11 = *(s16 *)(iVar6 + 0xee);
    if (iVar11 < 620) {
        goto Z3;
    }
    if (iVar11 > 623) {
        goto Z3;
    }
    if (*(s16 *)(iVar6 + 0x13e) == bVar5) {
        g = 1;
        goto J3;
    }
Z3:
    g = 0;
J3:
    if (g != 0) {
        g = 1;
        goto L3a4;
    }
L3a0:
    g = 0;
L3a4:
    if (g != 0) {
        goto Lg;
    }
    if (iVar6 == 0) {
        return;
    }
    *(u8 *)(param_1 + 138) = func_02027708(iVar6);
    func_0203e908(param_1, 0x302);
    return;
Lg:
    if (uVar13 == -1) {
        return;
    }
    if (uVar13 == uVar12) {
        return;
    }
    iVar6 = func_01ffdb08(uVar13);
    if (iVar6 == 0) {
        return;
    }
    func_02027668(iVar6, aiStack_34);
    func_0203945c(param_1, aiStack_34, uVar13);
}
