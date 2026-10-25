#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_0214f460;
extern u8 *data_02159444;

extern s32 func_02028130(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern s32 func_02022dd0(u8 *p);
extern s32 func_020aaf38(u8 *a, s32 *b, s32 c);
extern s32 func_02035770(u8 *p, s32 a);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02022bbc(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_02187980(u8 *param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5,
                         u32 param_6, s32 param_7, s16 param_8, s16 param_9, s16 param_10)
{
    BOOL bVar2;
    BOOL bVar3;
    BOOL bVar8;
    BOOL bVar7;
    s32 iVar4;
    s32 iVar5;
    u32 uVar6;

    bVar8 = FALSE;
    if (param_1[0xa3] == 0) {
        goto L3c;
    }
    iVar4 = func_02022dec(param_1, param_3, param_4);
    if (iVar4 != 0) {
        bVar2 = TRUE;
        goto J40;
    }
L3c:
    bVar2 = FALSE;
J40:
    bVar7 = FALSE;
    if (!bVar2 && (bVar3 = func_02022dd0(param_1), bVar3)) {
        bVar7 = TRUE;
    }
    func_ov003_0218c050(param_1, 1);
    iVar4 = func_02028130(param_1);
    iVar5 = func_02028130(param_1);
    uVar6 = FX_Mul(iVar5, iVar4);
    iVar4 = func_020aaf38(data_0214f460, (s32 *)(param_1 + 0x30c + (s16)param_7 * 12),
                          FX_Mul((s32)uVar6, 0xcd));
    if (iVar4 == 0) {
        *(u16 *)(param_1 + 0x11c) = *(u16 *)(param_1 + 0x11c) + 1;
    } else {
        *(u16 *)(param_1 + 0x11c) = 0;
    }
    iVar4 = *(s32 *)(data_02159444 + 0x98);
    iVar5 = *(s32 *)(data_02159444 + 0x94);
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    if (iVar5 <= 0) {
        iVar5 = -iVar5;
    }
    if (iVar5 + iVar4 > 2) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
    } else {
        if (*(u16 *)(param_1 + 0x11e) != 0) {
            *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
        }
    }
    iVar4 = *(s32 *)(param_1 + 0x464);
    switch (iVar4) {
    case 0:
        iVar4 = func_02035770(param_1, param_8);
        if (iVar4 != 0) {
            func_0203e8cc(param_1, 0, param_9);
            *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
        }
        break;
    case 1:
        iVar4 = func_02022bbc(param_1);
        *(s32 *)(param_1 + 0x468) = *(s32 *)(param_1 + 0x468) + 1;
        if (*(s32 *)(param_1 + 0x468) > iVar4 || bVar7) {
            func_0203e8cc(param_1, 0, param_10);
            *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
        }
        break;
    case 2:
        iVar4 = func_0203567c(param_1);
        if (iVar4 != 0) {
            bVar8 = TRUE;
        }
        break;
    }
    iVar4 = func_02029b7c(param_1, param_2, param_5, param_6);
    if (iVar4 != 0) {
        return;
    }
    if (bVar8) {
        func_0203e908(param_1, (s16)(param_2 + 0xec));
        return;
    }
    if (bVar2) {
        *(u16 *)(param_1 + 0x122) = *(u16 *)(param_1 + 0x122) + 1;
        if (*(u16 *)(param_1 + 0x11c) != 0) {
            return;
        }
        if (param_7 == 0) {
            func_0203e908(param_1, (s16)(param_2 + 0x199));
            return;
        }
        func_0203e908(param_1, (s16)(param_2 + 0x1a2));
        return;
    }
    if (bVar7) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 1) {
        return;
    }
    if (*(u16 *)(param_1 + 0x11c) != 0) {
        goto L354;
    }
    if (param_7 != 0) {
        goto L330;
    }
    func_0203e908(param_1, (s16)(param_2 + 0x199));
    return;
L330:
    func_0203e908(param_1, (s16)(param_2 + 0x1a2));
    return;
L354:
    if (param_7 != 0) {
        goto L380;
    }
    func_0203e908(param_1, (s16)(param_2 + 0x173));
    return;
L380:
    func_0203e908(param_1, (s16)(param_2 + 0x17c));
}
