#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 a);
extern s32 func_020bc14c(void);
extern s32 func_02044c8c(void);
extern s32 func_02026e68(u8 *p);
extern void func_0200cde4(u8 *p);
extern void func_02035aa0(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern void func_02039818(u8 *p);
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern s32 func_0202c87c(u8 *p, s32 a);
extern s32 func_02026df0(u8 *p);
extern s32 func_02026d3c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_02029504(u8 *p);
extern s32 func_02022e14(u8 *p, s32 a);
extern void func_020340f4(u8 *p);
extern s32 func_0202a7dc(u8 *p);
extern s32 func_02028124(u8 *p);
extern void func_ov003_0218d8c0(u8 *p);
extern void func_ov003_0218cb7c(u8 *p);

void func_ov003_0217628c(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar2;
    u32 x;
    u8 *dp;


    dp = data_02159444;
    iVar5 = 0;
    if (*(u16 *)(dp + 184) == 0) {
        *(u8 *)(param_1 + 147) = 7;
    } else {
        *(u8 *)(param_1 + 147) = (u8)iVar5;
    }

    func_0203942c(param_1);
    iVar2 = func_02037450(param_1, 0x300);
    if ((*(s8 *)(param_1 + 139) != 2) && (*(s8 *)(param_1 + 139) != 1) &&
        ((((s32)(*(vu16 *)0x04000304 & 0x8000)) >> 15) == 0) &&
        (func_020bc14c() == *(s8 *)(param_1 + 136)) &&
        (func_02044c8c() == *(s8 *)(param_1 + 136))) {
        iVar5 = func_02026e68(param_1);
    }
    iVar3 = func_020bc14c();
    if ((*(s8 *)(param_1 + 136) == iVar3) &&
        (iVar3 = func_02044c8c(), *(s8 *)(param_1 + 136) == iVar3)) {
        func_0200cde4(param_1);
    }
    func_02035aa0(param_1);
    func_ov003_0218c050(param_1, iVar5);
    if (iVar5 != 0) {
        iVar3 = *(s32 *)(data_02159444 + 0x98);
        iVar4 = *(s32 *)(data_02159444 + 0x94);
        if (iVar3 <= 0) iVar3 = -iVar3;
        if (iVar4 <= 0) iVar4 = -iVar4;
        if (iVar4 + iVar3 > 2) {
            *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
            goto LAB_ov003__021763bc;
        }
    }
    if (*(u16 *)(param_1 + 0x11e) != 0) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
    }
LAB_ov003__021763bc:
    func_02039818(param_1);
    if (*(s8 *)(param_1 + 139) != 1) {
        *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    }
    iVar3 = func_02022dec(param_1, 0x40, 1);
    if ((iVar3 == 0) && (iVar3 = func_0202c87c(param_1, 0), iVar3 != 0)) {
        return;
    }

    if (func_02026df0(param_1) || func_02026d3c(param_1)) {
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
        }
        if (*(s16 *)(param_1 + 0xf0) == 1) {
            func_02029504(param_1);
        } else {
            iVar3 = func_02022e14(param_1, 1);
            if (iVar3) {
                func_02029504(param_1);
            }
        }
        func_020340f4(param_1);
        return;
    }
    iVar3 = func_0202a7dc(param_1);
    if (iVar3 != 0) {
        func_0203e908(param_1, 0x35a);
        func_020340f4(param_1);
        return;
    }
    if (iVar5 == 0) goto L2d0;
    switch (iVar5) {
    case 1:
        goto C1;
    case 2:
        goto C2;
    case 3:
        goto C3;
    default:
        return;
    }
C1:
    func_0203e908(param_1, 0xf5);
    return;
C2:
    func_0203e908(param_1, 0xfe);
    return;
C3:
    func_0203e908(param_1, 0x107);
    return;
L2d0:
    iVar5 = func_02028124(param_1);
    if (iVar2 >= iVar5 * 8) {
        return;
    }
    iVar5 = func_020bc14c();
    if ((*(s8 *)(param_1 + 136) == iVar5) &&
        (iVar5 = func_02044c8c(), *(s8 *)(param_1 + 136) == iVar5)) {
        func_ov003_0218d8c0(param_1);
        return;
    }
    func_ov003_0218cb7c(param_1);
    return;
}
