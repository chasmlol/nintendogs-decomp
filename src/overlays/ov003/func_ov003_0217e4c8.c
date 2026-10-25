#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214f460[];
extern u8 data_ov003_0219a740[];
extern u8 data_02159444[];
extern u8 data_02152cd8[];

extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern s32 func_0202e304(u8 *p);
extern s32 func_020bc130(void);
extern void func_020bc024(u8 *p);
extern s32 func_020ab064(u8 *a, u8 *b);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 a);
extern void func_02028894(u8 *p, u8 *a, u8 *b);
extern s32 func_020bc14c(void);
extern s32 func_02044c8c(void);
extern s32 func_02028124(u8 *p);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_02034198(u8 *p);
extern s32 func_02026e68(u8 *p);
extern s32 func_02032aac(u8 *p, s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_0203646c(s32 a);
extern void func_0202707c(s32 a, s32 b);
extern void func_02027494(s32 a, u8 *b);
extern void func_020bbe14(s32 a, s32 b);
extern u8 *func_020bc3c4(void);
extern void func_02039818(u8 *p);
extern void func_0202d6ec(u8 *p);
extern void func_02038054(u8 *p);
extern s32 func_02022e14(u8 *p, s32 a);
extern s32 func_0202d108(u8 *p, s32 a, s32 b, s32 c);
extern u8 func_02029504(u8 *p);
extern s32 func_02026df0(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern void func_020340f4(u8 *p);
extern void func_ov003_0217ec9c(u8 *p);
extern void func_ov003_0218ba3c(u8 *p);
extern void func_ov003_0218cb7c(u8 *p);

#define TAILR()                                                            \
    do {                                                                   \
        if (*(s16 *)(param_1 + 0xf0) == 1) {                               \
            return func_02029504(param_1);                                 \
        }                                                                  \
        {                                                                  \
            s32 tr = func_02022e14(param_1, 1);                            \
            if (tr == 0) {                                                 \
                return tr;                                                 \
            }                                                              \
        }                                                                  \
        return func_02029504(param_1);                                     \
    } while (0)

u32 func_ov003_0217e4c8(u8 *param_1)
{
    s32 fl;
    s32 local_44;
    s32 iVar8;
    s32 iVar13;
    s32 bVar7;
    s32 bVar3;
    s32 iVar9;
    s32 iVar10;
    s32 iVar11;
    s32 bVar4;
    s32 bVar5;
    u32 uVar12;
    s32 local_34[3];
    s32 local_2c;
    s32 local_30;
    u8 bVar6;

    iVar13 = 0;
    iVar8 = func_02022dec(param_1, 1, 1);
    iVar9 = func_02022dec(param_1, 1, 3);
    bVar7 = 0;
    bVar4 = func_0202e304(param_1);
    fl = ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0;
    bVar3 = 0;
    iVar10 = func_020bc130();
    if (iVar10 != 0) {
        bVar5 = 1;
        if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 != 0) && (iVar8 == 0)) {
            bVar5 = 0;
        }
        if (bVar5) {
            bVar3 = 1;
        }
    }
    if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1) {
        iVar10 = 0x2000;
    } else {
        iVar10 = 0x8000;
    }
    if (*(u16 *)(param_1 + 0xfc) < 0x1e) {
        func_020bc024(param_1 + 0x26c);
        iVar11 = func_020ab064(*(u8 **)data_0214f460, param_1 + 0x3b4);
        if (iVar11 != 0) {
            *(u8 *)(param_1 + 0x93) = *(s8 *)(data_ov003_0219a740 + *(s8 *)(param_1 + 0x8b));
        } else {
            *(u8 *)(param_1 + 0x93) = 0;
        }
        func_0203942c(param_1);
        local_44 = func_02037450(param_1, 0x301);
    } else {
        func_02028894(param_1, param_1 + 0x26c, param_1 + 0x3b4);
        if (*(u16 *)(*(u8 **)data_02159444 + 0xb8) == 0) {
            *(u8 *)(param_1 + 0x93) = *(s8 *)(data_ov003_0219a740 + *(s8 *)(param_1 + 0x8b));
        } else {
            *(u8 *)(param_1 + 0x93) = 0;
        }
        if (bVar4) {
            local_34[0] = *(s32 *)(data_02152cd8 + 0x54);
            local_34[1] = *(s32 *)(data_02152cd8 + 0x60);
            local_34[2] = *(s32 *)(data_02152cd8 + 0x6c);
            func_01ff832c(-0x5000, local_34, param_1 + 0x26c, param_1 + 0x26c);
        }
        func_0203942c(param_1);
        local_44 = func_02037450(param_1, 0x313);
        if (local_44 < 0x19000) {
            func_02034198(param_1);
            bVar7 = 1;
        }
    }
    if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 0) &&
        (iVar11 = func_020bc14c(), *(s8 *)(param_1 + 0x88) == iVar11) &&
        (iVar11 = func_02044c8c(), *(s8 *)(param_1 + 0x88) == iVar11) && (local_44 < 0x10000)) {
        iVar13 = func_02026e68(param_1);
    }
    uVar12 = 0;
    do {
        bVar5 = func_02032aac(param_1, uVar12);
        if (bVar5) {
            iVar11 = func_01ffdb08(uVar12);
            if (iVar11 != 0 && !func_0203646c(iVar11)) {
                func_0202707c(iVar11, 5);
                func_02027494(iVar11, param_1 + 0x2a0);
            }
        }
        uVar12 = (s16)(uVar12 + 1);
    } while ((s32)uVar12 < 3);
    if (iVar9 == 0 && func_020bc14c() == -1 && func_02044c8c() == -1 && *(s32 *)(param_1 + 0x464) == 0) {
        *(s32 *)(param_1 + 0x464) = 1;
        {
            u32 q = (u32)func_020bc3c4() + 136;
            *(s32 *)(q + 0x6c) = 1;
        }
        func_020bbe14(0, -1);
    }
    if (!bVar4) {
        func_02038054(param_1);
    }
    if (*(s16 *)(param_1 + 0xf0) == 1) {
        func_0202d6ec(param_1);
    }
    if (iVar8 != 0 || iVar9 != 0) {
        func_ov003_0217ec9c(param_1);
    } else {
        func_02039818(param_1);
    }
    bVar5 = func_02022e14(param_1, 1);
    if (!bVar5 && (iVar8 = func_0202d108(param_1, 0, 0, 1), iVar8 != 0)) {
        TAILR();
    }
    if (func_02026df0(param_1)) {
        iVar8 = func_020385e4(param_1);
        switch (iVar8) {
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
        }
        if (*(s16 *)(param_1 + 0xf0) == 1) {
            func_02029504(param_1);
        } else if (func_02022e14(param_1, 1)) {
            func_02029504(param_1);
        }
        TAILR();
    }
    if (iVar13 == 0) {
        goto after_chain;
    }
    if (iVar13 == 1) {
        goto case_1;
    }
    if (iVar13 == 2) {
        goto case_2;
    }
    if (iVar13 != 3) {
        goto tail_r;
    }
    goto case_3;
case_1:
    func_0203e908(param_1, 0xf5);
    goto tail_r;
case_2:
    func_0203e908(param_1, 0xfe);
    goto tail_r;
case_3:
    func_0203e908(param_1, 0x107);
tail_r:
    TAILR();
after_chain:
    iVar8 = func_020bc14c();
    if (iVar8 != -1 && (iVar8 = func_02044c8c(), iVar8 != -1) && (iVar8 = func_02044c8c(), *(s8 *)(param_1 + 0x88) != iVar8)) {
        func_0203e908(param_1, 0x35a);
        func_020340f4(param_1);
        TAILR();
    }
    if (bVar7 && ((bVar3 || fl || bVar4) &&
                  (iVar8 = func_02028124(param_1), local_44 < (s32)((((s64)iVar10 * iVar8) + 0x800) >> 12)))) {
        if (iVar9 != 0) {
            func_ov003_0218ba3c(param_1);
        } else {
            *(s32 *)(param_1 + 0x488) = 0;
            func_ov003_0218cb7c(param_1);
        }
        TAILR();
    }
    if (*(u16 *)(param_1 + 0xfc) <= 600) {
        return *(u16 *)(param_1 + 0xfc);
    }
    iVar8 = func_020385e4(param_1);
    switch (iVar8) {
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
    }
    if (*(s16 *)(param_1 + 0xf0) == 1) {
        func_02029504(param_1);
    } else if (func_02022e14(param_1, 1)) {
        func_02029504(param_1);
    }
    TAILR();
}
