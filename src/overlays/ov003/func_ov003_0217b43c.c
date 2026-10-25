#pragma avoid_byte strb
#include "ctx.h"

extern s16 data_02126868[];
extern u8 *data_02159444;

void func_02039448(u8 *p);
void func_0202874c(u8 *p, s32 *q);
void func_02028894(u8 *p, s32 *q, s32 *r);
void func_02037450(u8 *p, s32 v);
s32 func_02035770(u8 *p, s32 a);
s32 func_02035744(u8 *p, s32 a);
s32 func_02028124(u8 *p);
s16 func_02068078(s32 a, s32 b);
u32 func_02029504(u8 *p);
u32 func_0203852c(u8 *p);
u32 func_0203e908(u8 *p, s32 a);
s32 func_02022e14(u8 *p, s32 a);
u32 func_ov003_0218ba3c(u8 *p);
u32 func_0202c87c(u8 *p, s32 a);
u32 func_0202a65c(u8 *p, s32 a);
s32 func_02026df0(u8 *p);
s32 func_02026d3c(u8 *p);
s32 func_020385e4(u8 *p);
u32 func_0202a864(u8 *p);
s32 func_020bc130(void);
u32 func_ov003_0218c644(u8 *p);
u32 func_ov003_0218cb7c(u8 *p);
u32 func_020340f4(u8 *p);


#define FXM(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

u32 func_ov003_0217b43c(u8 *param_1, s32 param_2, s32 param_3, s32 param_4,
                        s32 param_5, s32 param_6, s8 param_7, s8 param_8)
{
    s16 sVar5;
    s32 iVar12;
    s32 iVar11;
    s32 uVar9;
    s32 uVar7;
    u32 r;
    s32 iVar10;
    s32 bVar13;
    s32 loc[3];

    func_02039448(param_1);
    func_0202874c(param_1, (s32 *)(param_1 + 632));
    func_02028894(param_1, loc, (s32 *)(param_1 + 948));
    func_02037450(param_1, 768);
    iVar11 = loc[0] - *(s32 *)(param_1 + 0x2a0);
    iVar10 = loc[2] - *(s32 *)(param_1 + 0x2a8);
    iVar12 = FXM(iVar11, iVar11) + FXM(iVar10, iVar10);
    if (param_4 != 0 && func_02035770(param_1, param_2) != 0 && func_02035744(param_1, param_3) != 0) {
        {
            s32 m139 = *(s8 *)(param_1 + 139);
            if (m139 == 4) goto L_a96;
            if (m139 != 5) goto L_b284;
        L_a96:
            uVar7 = func_02028124(param_1);
            uVar7 = FXM(uVar7, 96);
            goto L_c;
        L_b284:
            uVar7 = func_02028124(param_1);
            uVar7 = FXM(uVar7, 284);
        L_c:
            ;
        }
        uVar9 = FXM(uVar7, uVar7);
        if (iVar12 < uVar9) {
            *(s32 *)(param_1 + 0x260) = iVar11;
            *(s32 *)(param_1 + 0x268) = iVar10;
        } else {
            s32 t0;
            s32 t1;
            sVar5 = func_02068078(iVar11, iVar10);
            t0 = data_02126868[((s32)sVar5 >> 4) * 2];
            *(s32 *)(param_1 + 0x260) = FXM(t0, uVar7);
            t1 = data_02126868[((s32)sVar5 >> 4) * 2 + 1];
            *(s32 *)(param_1 + 0x268) = FXM(t1, uVar7);
        }
    }
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    if (*(s8 *)(param_1 + 142) == 1) {
        *(u8 *)(param_1 + 147) = (u8)(23);
    } else if ((*(u16 *)((u8 *)data_02159444 + 132) & 1) != 0) {
        *(u8 *)(param_1 + 147) = (u8)(param_7);
    } else {
        *(u8 *)(param_1 + 147) = (u8)(param_8);
    }
    if (*(s8 *)(param_1 + 139) == 3) {
        *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 2;
    } else {
        *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    }
    bVar13 = 0;
    if (*(s16 *)(param_1 + 240) == 1) {
        bVar13 = ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) != 0;
        func_02029504(param_1);
    }
    if (bVar13) {
        uVar7 = func_0203852c(param_1);
        switch (uVar7) {
        case 0:
            return func_0203e908(param_1, 0x30a);
        case 1:
            return func_0203e908(param_1, 0x30c);
        case 2:
            return func_0203e908(param_1, 0x30d);
        case 3:
            return func_0203e908(param_1, 0x30e);
        default:
            goto fin;
        }
    }
    if (func_02022e14(param_1, 1) != 0) {
        return func_ov003_0218ba3c(param_1);
    }
    r = func_0202c87c(param_1, 1);
    if (r != 0) {
        return r;
    }
    if (param_5 != 0 && ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0) {
        iVar10 = func_0202a65c(param_1, 1);
        if (iVar10 != 0) {
            return iVar10;
        }
    }
    if (func_02026df0(param_1) != 0 || func_02026d3c(param_1) != 0) {
        switch (func_020385e4(param_1)) {
        case 0:
            func_0203e908(param_1, 0x30f);
            break;
        case 1:
            func_0203e908(param_1, 0x311);
            break;
        case 2:
            func_0203e908(param_1, 0x312);
            break;
        case 3:
            func_0203e908(param_1, 0x313);
            break;
        }
        if (*(s16 *)(param_1 + 240) == 1) {
            return func_02029504(param_1);
        }
        {
            s32 z = func_02022e14(param_1, 1);
            if (z == 0) return z;
        }
        return func_02029504(param_1);
    }
    if (func_0202a864(param_1) != 0) {
        *(s32 *)(param_1 + 0x488) = 0;
        func_0203e908(param_1, 0x35a);
        return func_020340f4(param_1);
    }
    if (func_020bc130() == 0) {
        return func_0203e908(param_1, 0x35e);
    }
    if (param_4 == 0 && iVar12 > 1024) {
        return func_ov003_0218c644(param_1);
    }
    if (param_6 == 0) {
        return param_6;
    }
    func_ov003_0218cb7c(param_1);
fin:
    ;
}
