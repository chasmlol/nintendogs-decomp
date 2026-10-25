#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_dead_assignments off
#pragma opt_common_subs off

extern u8 *data_0214f460;
extern u8 *data_02159444;
extern u8 *data_0215942c;
extern u16 data_ov003_0219a75c[];
typedef struct { u16 w[5]; } T5H;

extern void func_ov003_0218c1a4(u8 *p, s32 a);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u32 a, s32 *b, s32 c);
extern void func_020142b4(u8 *p, s32 a);
extern s32 func_02022e14(u8 *p, s32 a);
extern void func_02029504(u8 *p);
extern s32 func_02023508(u8 *p, s32 a, s32 b);
extern void func_0203e288(u8 *p, s32 a);
extern void func_02029180(u8 *p, s32 a, s32 b);
extern s32 func_0202c87c(u8 *p, s32 a);
extern s32 func_0203646c(u8 *p);
extern s32 func_0202a7dc(u8 *p);
extern void func_ov003_0218e360(u8 *p, s32 a);
extern s32 func_02022000(s32 a);
extern void func_02029638(u8 *p, s32 a);
extern void func_0202a378(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_0202e29c(u8 *p);
extern void func_ov003_0218bc08(u8 *p, s32 a);
extern s32 func_0202de28(u8 *p, s32 a);
extern s32 func_0202f068(u8 *p, s32 a, s32 b);
extern void func_02029b30(u8 *p, s32 a);



void func_ov003_0218ab10(u8 *param_1, s32 param_2, s32 param_3, s32 *param_4, s32 param_5, s8 param_6)
{
    s32 qq;
    s32 iVar4;
    s32 uVar5;
    u16 auStack_28[5];
    int iVar3;
    s64 lVar1;
    u16 uT;
    s32 bVar2;

    uVar5 = 7;
    func_ov003_0218c1a4(param_1, param_6);
    func_ov003_0218c050(param_1, 1);
    iVar3 = func_02028130(param_1);
    iVar4 = func_02028130(param_1);
    lVar1 = (s64)iVar4 * (s64)iVar3 + 0x800;
    qq = (s32)(lVar1 >> 12);
    iVar3 = func_020aaf38((u32)data_0214f460, param_4, (s32)(((s64)qq * (s64)param_5 + 0x800) >> 12));
    if (0 == iVar3) {
        *(u16 *)(param_1 + 0x11c) = (u16)(*(u16 *)(param_1 + 0x11c) + 1);
    } else {
        *(u16 *)(param_1 + 0x11c) = 0;
    }
    iVar4 = *(s32 *)(data_02159444 + 0x94);
    iVar3 = *(s32 *)(data_02159444 + 0x98);
    if (iVar3 <= 0) {
        iVar3 = -iVar3;
    }
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    if (iVar4 + iVar3 > 2) {
        *(u16 *)(param_1 + 0x11e) = (u16)(*(u16 *)(param_1 + 0x11e) + 1);
    } else {
        if (*(u16 *)(param_1 + 0x11e) != 0) {
            *(u16 *)(param_1 + 0x11e) = (u16)(*(u16 *)(param_1 + 0x11e) - 1);
        }
    }
    func_ov003_0218bc08(param_1, param_2);
    if (*(u16 *)(param_1 + 0x11c) <= 2) {
        *(u8 *)(param_1 + 0xb9) = (u8)(1);
    } else {
        *(u8 *)(param_1 + 0xb9) = (0);
    }
    if (1 == param_2) {
        uVar5 = 3;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)(param_1 + 0x11e) > 40) {
        func_020142b4(param_1, param_6);
    }
    bVar2 = func_02022e14(param_1, 1);
    if (0 != bVar2) {
        if (*(u16 *)data_0215942c != 17) {
            iVar3 = func_02023508(param_1, (u16)(*(s16 *)(0xf0 + param_1) - 12), *(u8 *)(param_1 + 0xa5));
            func_0203e288(param_1, iVar3);
            func_02029180(param_1, 14, (u8)(param_2 + 1));
        } else {
            func_02029504(param_1);
        }
    }
    iVar3 = func_0202c87c(param_1, param_2);
    if (iVar3 != 0) {
        return;
    }
    bVar2 = func_0203646c(param_1);
    if (bVar2 == 0 || (iVar3 = func_0202a7dc(param_1), iVar3 != 0)) {
        func_ov003_0218e360(param_1, param_2);
        return;
    }
    iVar3 = func_02022000(*(s8 *)(param_1 + 0x88));
    if (iVar3 != 0) {
        func_02029638(param_1, param_2);
        return;
    }
    if (*(u16 *)(0xfc + param_1) == 2 && *(u16 *)(param_1 + 0x11c) != 0) {
        func_0202a378(param_1);
        func_0203e908(param_1, (s16)(0x13d + param_2));
        return;
    }
    if (*(u16 *)(param_1 + 0x11c) > 20 || ((*(u16 *)0x04000304 & 0x8000) >> 15) != 0) {
        func_0203e908(param_1, (s16)(param_2 + 0xec));
        return;
    }
    if (((*(u16 *)(data_02159444 + 0x84) & 2) != 0 || *(u16 *)(0x11c + param_1) > 1)
        && (iVar3 = func_02029b7c(param_1, param_2, param_3, uVar5)) != 0) {
        return;
    }
    iVar3 = func_0202e29c(param_1);
    if (0 != iVar3) {
        bVar2 = 0;
    } else {
        s32 cnt488;
        cnt488 = *(s32 *)(param_1 + 0x488);
        *(T5H *)auStack_28 = *(T5H *)data_ov003_0219a75c;
        uT = auStack_28[*(s8 *)(0x8e + param_1)];
        switch (*(s8 *)(0x8b + param_1)) {
        case 5:
            uT = (u16)(300 + uT);
            break;
        case 4:
            uT = (uT + 300);
            break;
        case 1:
        case 2:
            uT = (uT - 300);
            break;
        default:
            break;
        }
        if (*(u16 *)data_0215942c == 10) {
            uT = (uT - 300);
        }
        bVar2 = (cnt488 > (s32)uT);
    }
    if (bVar2 != 0) {
        switch ((int)param_2) {
        case 5:
            func_0203e908(param_1, 0x381);
            return;
        case 6:
            func_0203e908(param_1, 0x382);
            return;
        case 7:
            func_0203e908(param_1, 0x383);
            return;
        case 8:
            func_0203e908(param_1, 900);
            return;
        }
        func_0203e908(param_1, 0x385);
        return;
    }
    if (*(u16 *)(param_1 + 0x11c) > 2 && func_0202de28(param_1, param_2) != 0) {
        return;
    }
    if (func_0202f068(param_1, param_2, *(u16 *)(param_1 + 0x11e)) != 0) {
        return;
    }
    func_02029b30(param_1, param_2);
}
