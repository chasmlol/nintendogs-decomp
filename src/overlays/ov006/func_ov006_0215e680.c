#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f45c;
extern u32 *data_0214f460;
extern u32 *data_02159444;
extern u32 *data_0214f464;
extern u32 *data_02159424;

extern s32 func_020364a8(u8 *p);
extern s32 func_0200c498(s32 a, s32 b);
extern s32 func_020aaf38(u32 a, s32 *b, u32 c);
extern s32 func_02027e4c(u8 *p, u32 a);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern u32 func_02028124(u8 *p);
extern u32 func_020387c0(u8 *p, s32 a);
extern s32 func_02036f38(u8 *p, u32 a, u32 b);
extern s32 func_02035164(u8 *p);
extern void func_02026bac(u8 *p);
extern void func_02027de8(u8 *p, u32 a, u32 b);
extern void func_02029504(u8 *p);
extern u32 func_ov006_021607d0(u8 *p, s32 a, u32 b, u32 c);
extern void func_021089b8(u32 a);
extern void func_ov006_02161344(u8 *p);

#define FX(v) ((s32)(((s64)(v) + 0x800) >> 12))

typedef struct { s32 w[3]; } T3;

void func_ov006_0215e680(u8 *param_1)
{
    s32 bVar2;
    s32 bVar12;
    s32 bVar4;
    s32 bVar5;
    s32 k10;
    T3 local_4c;
    T3 local_40;
    T3 local_34;
    s32 iVar7;
    T3 *pl;
    s32 bVar1;
    s16 *unaff_r7;
    s32 *unaff_r6;
    s16 li;
    s32 *piVar6;
    u32 uVar9;
    u32 uVar10;
    s32 iVar11;
    s16 cl;
    s16 sVar3;
    s32 iVar8;
    s16 gv;
    u8 *dp;

    bVar2 = 0;
    bVar12 = 0;
    bVar4 = 0;
    bVar5 = 0;
    iVar7 = func_020364a8(param_1);
    if (iVar7 == 0) goto GZ;
    iVar8 = func_0200c498(*(s32 *)(iVar7 + 0x30), (s16)*(s32 *)(iVar7 + 0x2c));
    if (iVar8 == 0) goto GZ;
    unaff_r7 = (s16 *)(*(s32 *)((u8 *)data_0214f45c + 0x18) + (s16)*(s32 *)(iVar8 + 0x20) * 0x24);
    if (unaff_r7 != 0) {
        bVar1 = 1;
        goto GJ;
    }
GZ:
    bVar1 = 0;
GJ:
    if (bVar1) {
        bVar1 = 0;
        li = 0;
        gv = unaff_r7[1];
        if (gv > 0) {
            pl = &local_34;
            k10 = 0x9000;
            do {
                sVar3 = *(volatile s16 *)&unaff_r7[1];
                cl = li;
                if (li < 0) {
                    cl = 0;
                }
                if (cl >= sVar3) {
                    cl = sVar3 - 1;
                }
                if (*(s32 *)(iVar7 + 0x34) == 0) {
                    unaff_r6 = (s32 *)((s16)(unaff_r7[0] + (s16)cl) * 0x44 + *(s32 *)((u8 *)data_0214f45c + 0x1c));
                } else if (*(s32 *)(iVar7 + 0x34) == 1) {
                    unaff_r6 = (s32 *)((s16)((unaff_r7[0] + sVar3 - 1) - (s16)cl) * 0x44 + *(s32 *)((u8 *)data_0214f45c + 0x1c));
                }
                *pl = *(T3 *)unaff_r6;
                if (li == *(s32 *)(param_1 + 0x464) - 1) {
                    local_40 = local_34;
                }
                if (li == *(s32 *)(param_1 + 0x464)) {
                    local_4c = *pl;
                }
                iVar11 = func_020aaf38((u32)data_0214f460, (s32 *)pl, k10);
                if (iVar11 != 0) {
                    dp = *(u8 * volatile *)&data_02159444;
                    bVar4 = 1;
                    if ((*(u16 *)(dp + 0x84) & 2) != 0) {
                        *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 200;
                    } else {
                        *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 10;
                    }
                    iVar11 = func_02027e4c(param_1, 1);
                    if ((*(s32 *)(param_1 + 0x468) > 1000 - iVar11) &&
                        (iVar11 = func_02027e4c(param_1, 1), *(s32 *)(param_1 + 0x468) < 0x4b0 - iVar11)) {
                        iVar11 = func_02027e4c(param_1, 1);
                        *(s32 *)(param_1 + 0x468) = 0x4b0 - iVar11;
                    }
                    if (*(s32 *)(param_1 + 0x46c) == 0) {
                        if (((li < *(s32 *)(param_1 + 0x464)) && (2 < li)) &&
                            (*(s32 *)(param_1 + 0x464) < unaff_r7[1] - 2)) {
                            *(s32 *)(param_1 + 0x46c) = 1;
                        }
                    } else if (li > *(s32 *)(param_1 + 0x464)) {
                        *(s32 *)(param_1 + 0x46c) = 0;
                    }
                }
                li = (s16)(li + 1);
            } while (li < unaff_r7[1]);
        }
        if (!bVar4) {
            *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) - 0x14;
        }
        if (*(s32 *)(param_1 + 0x468) < 0) {
            *(s32 *)(param_1 + 0x468) = 0;
        }
        if (*(s32 *)(param_1 + 0x46c) != 0) {
            *(T3 *)(param_1 + 0x278) = local_40;
            *(T3 *)(param_1 + 0x26c) = *(T3 *)(param_1 + 0x278);
        } else {
            *(T3 *)(param_1 + 0x278) = local_4c;
            *(T3 *)(param_1 + 0x26c) = *(T3 *)(param_1 + 0x278);
        }
        iVar8 = func_02027e4c(param_1, 1);
        if (iVar8 >= 1000) {
            uVar9 = func_02028124(param_1);
            iVar8 = func_02027e4c(param_1, 1);
            uVar10 = func_020387c0(param_1, iVar8);
            iVar8 = func_02036f38(param_1, 0x100, uVar10);
            bVar1 = iVar8 < FX((s64)(s32)uVar9 * 0x1000);
        } else if (((*(s32 *)(param_1 + 0x464) <= 2) || (*(s32 *)(param_1 + 0x464) >= unaff_r7[1] - 2)) ||
                (iVar8 = func_02027e4c(param_1, 1), 1000 < *(s32 *)(param_1 + 0x468) + iVar8)) {
            func_0203e8cc(param_1, 3, 0);
            uVar9 = func_02028124(param_1);
            iVar8 = func_02027e4c(param_1, 1);
            uVar10 = func_020387c0(param_1, iVar8);
            iVar8 = func_02036f38(param_1, 0x100, uVar10);
            bVar1 = iVar8 < FX((s64)(s32)uVar9 * 0x1000);
        } else {
            func_0203e8cc(param_1, 0, 0x162);
            iVar8 = func_02035164(param_1);
            func_0203e8cc(param_1, 3, iVar8);
            func_02026bac(param_1);
        }
        if (bVar1) {
            if (*(s32 *)(param_1 + 0x464) == (s32)unaff_r7[1] >> 1) {
                uVar9 = *(u32 *)data_0214f464 * 0x10dcd + 1;
                *(u32 *)data_0214f464 = uVar9;
                iVar8 = func_02027e4c(param_1, 1);
                if (iVar8 + 2000 < (s32)(u16)(((u32)(u16)uVar9 * 4000) >> 16)) {
                    *(s32 *)(param_1 + 0x46c) = 1;
                }
            }
            if (*(s32 *)(param_1 + 0x46c) != 0) {
                *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) - 1;
                if (*(s32 *)(param_1 + 0x464) == 1) {
                    bVar5 = 0;
                    bVar12 = 1;
                }
                if (*(s32 *)(param_1 + 0x464) <= 0) {
                    bVar2 = 1;
                }
            } else {
                uVar9 = 1u << *(u32 *)(param_1 + 0x464);
                if ((*(u32 *)(param_1 + 0x470) & uVar9) == 0) {
                    *(u32 *)(param_1 + 0x470) = *(u32 *)(param_1 + 0x470) | uVar9;
                    func_02027de8(param_1, 1, 0xf);
                }
                *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
                if (*(s32 *)(param_1 + 0x464) == unaff_r7[1] - 1) {
                    if (*(s16 *)(u8 *)data_02159424 == 0 || *(s32 *)(iVar7 + 0x20) != -1) {
                        bVar5 = 1;
                    } else {
                        bVar5 = 0;
                    }
                    bVar12 = 1;
                }
                if (*(s32 *)(param_1 + 0x464) >= unaff_r7[1]) {
                    bVar2 = 1;
                }
            }
        }
    }
    func_02029504(param_1);
    if (bVar12) {
        uVar10 = func_ov006_021607d0(param_1, iVar7, 1, 1);
        switch (uVar10) {
        case 0:
            break;
        case 1:
            if (bVar5) {
                *(u16 *)((u8 *)data_0214f464 + 0x2e) = 3;
                iVar8 = (s32)data_0214f464;
                *(s16 *)(iVar8 + 0x2c) = *(s16 *)(iVar8 + 0x2c) + 1;
                if (*(s16 *)(iVar8 + 0x2c) >= 5) {
                    func_021089b8(3);
                } else {
                    func_021089b8(2);
                }
            } else {
                *(u16 *)((u8 *)data_0214f464 + 0x2e) = 4;
                *(u16 *)((u8 *)data_0214f464 + 0x2c) = 0;
                func_021089b8(1);
            }
            break;
        case 2:
            *(u16 *)((u8 *)data_0214f464 + 0x2e) = 4;
            *(u16 *)((u8 *)data_0214f464 + 0x2c) = 0;
            func_021089b8(1);
            break;
        case 3:
            break;
        case 4:
            *(u16 *)((u8 *)data_0214f464 + 0x2e) = 9;
            *(u16 *)((u8 *)data_0214f464 + 0x2c) = 0;
            func_021089b8(1);
            break;
        }
    }
    if (!bVar2) {
        return;
    }
    func_ov006_021607d0(param_1, iVar7, 0, 0);
    *(u8 *)(param_1 + 0xb0) = *(u8 *)(param_1 + 0xb0) | 1;
    func_ov006_02161344(param_1);
}
