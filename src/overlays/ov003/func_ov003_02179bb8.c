#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u8 data_02159444[];
extern u8 data_0215942c[];
extern u8 data_0213b770[];
extern u8 data_0214f464[];
extern u8 data_0213b80c[];

extern s32 func_020bc14c(void);
extern s32 func_02044c8c(void);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_02039818(u8 *p);
extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02022e14(u8 *p, s32 a);
extern s32 func_02039cc4(u8 *p);
extern void func_020bbe14(s32 a, s32 b);
extern void func_02039c68(u8 *p);
extern void func_02029504(u8 *p);
extern s32 func_02023508(u8 *p, s32 a, s32 b);
extern void func_0203e288(u8 *p, s32 a);
extern void func_02029180(u8 *p, s32 a, s32 b);
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern s32 func_0202c87c(u8 *p, s32 a);
extern s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02026df0(u8 *p);
extern s32 func_02026d3c(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_0203541c(u8 *p);
extern void func_ov003_02198420(u8 *p, s32 a, s32 b);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern s32 func_0202a7dc(u8 *p);
extern void func_020340f4(u8 *p);
extern s32 func_02022dd0(u8 *p);
extern void func_0202db24(u8 *p, s32 a);

static inline void SwapB(register vu8 *p, register u32 v)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02179bb8(u8 *param_1, s32 param_2, s32 param_3, s32 param_4,
                         s32 param_5, s32 param_6, s32 param_7, s32 param_8,
                         s16 param_9, s16 param_10, s8 param_11, s8 param_12)
{
    s32 uVar9;
    s32 iVar5;
    s32 iVar6;
    s32 iVar8;
    s32 bVar2;
    s32 bVar3;
    s32 uVar7;
    u8 *g;

    bVar3 = 0;
    uVar9 = 0x3c;
    if (*(s8 *)(param_1 + 0x8b) == 1) {
        goto L3c;
    }
    if (*(s8 *)(param_1 + 0x8b) == 2) {
        uVar9 = (s16)(uVar9 + 240);
    }
    goto L48;
L3c:
    uVar9 = (s16)(uVar9 + 60);
L48:
    if (*(s8 *)(param_1 + 0x8e) == 0) {
        goto L5c;
    }
    if (*(s8 *)(param_1 + 0x8e) != 1) {
        goto L68;
    }
L5c:
    uVar9 = (s16)(uVar9 + 120);
L68:
    *(u32 *)(param_1 + 0x464) = 0;
    if (((s32)(*(u16 *)0x04000304 & 0x8000)) >> 15) {
        goto L2d4;
    }
    iVar5 = func_020bc14c();
    if (*(s8 *)(param_1 + 0x88) != iVar5) {
        goto L2d4;
    }
    iVar5 = func_02044c8c();
    if (*(s8 *)(param_1 + 0x88) != iVar5) {
        goto L2d4;
    }
    if ((*(u16 *)(*(u8 **)data_02159444 + 0x84) & 1) != 0) {
        func_02027ee0(param_1, 1, 5);
    } else {
        func_02027ee0(param_1, 1, -50);
    }
    if (param_5 != 0) {
        func_02039818(param_1);
    }
    iVar5 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar5);
    if (iVar5 == 0) {
        goto LDEC;
    }
    g = *(u8 **)data_02159444;
    iVar8 = *(s32 *)(g + 0x98);
    iVar6 = *(s32 *)(g + 0x94);
    if (iVar8 <= 0) {
        iVar8 = -iVar8;
    }
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar6 + iVar8 > 2) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
        goto L160;
    }
LDEC:
    if (*(u16 *)(param_1 + 0x11e) != 0) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
    }
L160:
    if (param_7 == 0) {
        goto L1e8;
    }
    *(s32 *)(param_1 + 0x464) = iVar5;
    if (*(u16 *)(param_1 + 0x11e) > 20 && (s32)*(u16 *)(param_1 + 0x11e) > (s32)(uVar9 - 20)) {
        func_0203e8cc(param_1, 1, param_9);
        SwapB(param_1 + 0x97, (u32)(s32)param_11);
    } else {
        func_0203e8cc(param_1, 1, param_10);
        SwapB(param_1 + 0x97, (u32)(s32)param_12);
    }
    if (*(s32 *)(param_1 + 0x464) != 0) {
        SwapB(param_1 + 0xb9, 1);
    } else {
        SwapB(param_1 + 0xb9, 0);
    }
L1e8:
    bVar2 = func_02022e14(param_1, 0x25);
    if (bVar2) {
        iVar5 = func_02039cc4(param_1);
        if (iVar5 != 0) {
            func_020bbe14(8, *(s8 *)(param_1 + 0x88));
            func_02039c68(param_1);
        }
    } else if (param_4 != 0) {
        if (*(u16 *)(param_1 + 0x11a) > 100) {
            func_0202db24(param_1, 0);
        } else {
            g = *(u8 **)data_02159444;
            if (*(s16 *)(g + 0x86) <= -70) {
                goto LB8;
            }
            if (*(s16 *)(g + 0x86) >= 70) {
                goto LB8;
            }
            if (*(s16 *)(g + 0x88) <= 75) {
                goto LB8;
            }
            iVar5 = func_02039cc4(param_1);
            if (iVar5 != 0) {
                func_020bbe14(14, *(s8 *)(param_1 + 0x88));
                func_02039c68(param_1);
            }
            bVar3 = (*(u16 *)(*(u8 **)data_02159444 + 0x84) & 1) != 0;
            goto L2d4;
        LB8:
            if (*(s16 *)(g + 0x88) < -10) {
                func_0202db24(param_1, 0);
            }
        }
    }
L2d4:
    if (*(s8 *)(param_1 + 0x8b) != 1) {
        bVar2 = func_02022dd0(param_1);
        if (!bVar2) {
            *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
        }
    }
    if (*(s16 *)(param_1 + 0xf0) == 1) {
        func_02029504(param_1);
    }
    bVar2 = func_02022e14(param_1, 1);
    if (bVar2) {
        if (*(u16 *)*(u8 **)data_0215942c != 0x11) {
            iVar5 = func_02023508(param_1, (u16)(*(s16 *)(param_1 + 0xf0) - 12), *(u8 *)(param_1 + 0xa5));
            func_0203e288(param_1, iVar5);
            func_02029180(param_1, 14, (u8)(param_2 + 1));
        } else {
            func_02029504(param_1);
        }
    }
    if (param_6 != 0) {
        iVar5 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        if (iVar5 == 0) {
            uVar7 = func_0202c87c(param_1, param_2);
            if (uVar7 != 0) {
                return;
            }
        }
    }
    iVar5 = func_02029b7c(param_1, param_2, param_3, 0);
    if (iVar5 != 0) {
        return;
    }
    iVar5 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
    if (iVar5 == 0) {
        bVar2 = func_02026df0(param_1);
        if (!bVar2) {
            bVar2 = func_02026d3c(param_1);
            if (!bVar2) {
                goto L4fc;
            }
        }
        if (func_02026df0(param_1) != 0) {
            iVar5 = func_0203541c(param_1);
            if (iVar5 != 0) {
                func_ov003_02198420(param_1, iVar5, *(s32 *)(data_0213b770 + param_2 * 4));
                return;
            }
            func_0202fd7c(param_1);
            return;
        }
        iVar5 = func_020385e4(param_1);
        switch (iVar5) {
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
        if (*(s16 *)(param_1 + 0xf0) == 1) {
            func_02029504(param_1);
            return;
        }
        bVar3 = func_02022e14(param_1, 1);
        if (bVar3) {
            func_02029504(param_1);
        }
        return;
    }
L4fc:
    iVar8 = func_0202a7dc(param_1);
    if (iVar8 != 0) {
        if (param_8 != 0) {
            func_0203e908(param_1, 0x35a);
            func_020340f4(param_1);
        }
        return;
    }
    if (*(u16 *)(param_1 + 0x11e) > uVar9) {
        switch (*(s32 *)(param_1 + 0x464)) {
        case 1:
            func_0203e908(param_1, (s16)(param_2 + 0xf5));
            return;
        case 2:
            func_0203e908(param_1, (s16)(param_2 + 0xfe));
            return;
        case 3:
            func_0203e908(param_1, (s16)(param_2 + 0x107));
            return;
        }
        return;
    }
    if (bVar3 != 0) {
        uVar7 = *(s32 *)(*(u8 **)data_0214f464) * 0x10dcd + 1;
        *(s32 *)(*(u8 **)data_0214f464) = uVar7;
        if ((s32)data_0213b80c[*(s8 *)(param_1 + 0x8d)] > (s32)(u16)((((u32)(u16)uVar7) * 20u) >> 16)) {
            switch (*(s8 *)(param_1 + 0x8b)) {
            case 0:
            case 2:
            case 3:
                func_0203e908(param_1, 0x38f);
                return;
            case 1:
                func_0203e908(param_1, 0x391);
                return;
            case 4:
            case 5:
            default:
                goto Lfin;
            }
        }
    }
    if (param_8 == 0) {
        return;
    }
    if (*(u16 *)*(u8 **)data_0215942c == 1 || *(u16 *)*(u8 **)data_0215942c == 4) {
        func_0203e908(param_1, 0x3ab);
        return;
    }
    switch (func_020385e4(param_1)) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
        return;
    default:
        return;
    }
Lfin:
    ;
}
