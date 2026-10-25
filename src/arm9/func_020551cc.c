#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_02036578(u8 *o);
extern s32 func_0202de0c(u8 *o);
extern s32 func_0202e304(u8 *o);
extern s32 func_02027894(u8 *o, s32 a);
extern void func_020362ec(s32 a, s16 b);
extern void func_0202707c(s32 a, s32 b);
extern void func_0203e908(u8 *o, s32 b);
extern s32 func_02027708(s32 a);

s32 func_020551cc(u8 *p)
{
    s32 iVar2;
    s32 iVar3;
    s32 iVar5;
    s32 bVar1;
    s32 f;
    u32 uVar6;
    s32 t;

    iVar2 = func_02036578(p);
    if (iVar2 == 0) {
        return 0;
    }
    iVar3 = func_0202de0c(p);
    if (iVar3 >= 13) {
        return 0;
    }
    bVar1 = func_0202e304(p);
    if (bVar1 != 0) {
        iVar3 = func_02027708(iVar2);
        iVar5 = *(s16 *)(p + 0xea);
        if (iVar5 < 620) goto a_m0;
        if (iVar5 > 623) goto a_m0;
        if (*(s16 *)(p + 0x13e) == iVar3) {
            bVar1 = 1;
            goto a_m1;
        }
a_m0:
        bVar1 = 0;
a_m1:
        if (bVar1 != 0) {
            f = 1;
            goto a_fc;
        }
        if (iVar5 < 601) goto a_n0;
        if (iVar5 > 607) goto a_n0;
        bVar1 = 1;
        goto a_n1;
a_n0:
        bVar1 = 0;
a_n1:
        if (bVar1 == 0) goto a_f8;
        iVar5 = *(s16 *)(p + 0xee);
        if (iVar5 < 620) goto a_e8;
        if (iVar5 > 623) goto a_e8;
        if (*(s16 *)(p + 0x13e) == iVar3) {
            f = 1;
            goto a_ec;
        }
a_e8:
        f = 0;
a_ec:
        if (f != 0) {
            f = 1;
            goto a_fc;
        }
a_f8:
        f = 0;
a_fc:
        if (f == 0) goto a_120;
        func_0203e908(p, 0x27c);
        return 1;
a_120:
        if (*(s16 *)(iVar2 + 0xea) != 0x279) {
            func_0203e908(p, 0x27c);
            return 1;
        }
        uVar6 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar6;
        uVar6 = (u16)((((u16)uVar6) * 3u) >> 16);
        switch (uVar6) {
        case 0:
            func_0203e908(p, 0x27c);
            return 1;
        case 1:
            func_0203e908(p, 0x27d);
            return 1;
        case 2:
            return 0;
        }
        return 0;
    }
    iVar3 = func_02027894(p, iVar2);
    if (iVar3 == 0) goto c0;
    if (iVar3 == 1) goto c1;
    if (iVar3 != 2) goto ret0;
    if (*(s16 *)(iVar2 + 0xea) == 0x279) {
        func_0203e908(p, 0x27f);
        return 1;
    }
    func_0203e908(p, 0x27e);
    return 1;
c1:
    iVar3 = func_02027708(iVar2);
    iVar5 = *(s16 *)(p + 0xea);
    if (iVar5 < 620) goto b_m0;
    if (iVar5 > 623) goto b_m0;
    if (*(s16 *)(p + 0x13e) == iVar3) {
        bVar1 = 1;
        goto b_m1;
    }
b_m0:
    bVar1 = 0;
b_m1:
    if (bVar1 != 0) {
        f = 1;
        goto b_fc;
    }
    if (iVar5 < 601) goto b_n0;
    if (iVar5 > 607) goto b_n0;
    bVar1 = 1;
    goto b_n1;
b_n0:
    bVar1 = 0;
b_n1:
    if (bVar1 == 0) goto b_f8;
    iVar5 = *(s16 *)(p + 0xee);
    if (iVar5 < 620) goto b_e8;
    if (iVar5 > 623) goto b_e8;
    if (*(s16 *)(p + 0x13e) == iVar3) {
        f = 1;
        goto b_ec;
    }
b_e8:
    f = 0;
b_ec:
    if (f != 0) {
        f = 1;
        goto b_fc;
    }
b_f8:
    f = 0;
b_fc:
    if (f == 0) goto b_120;
    func_0203e908(p, 0x27c);
    return 1;
b_120:
    if (*(s16 *)(iVar2 + 0xea) != 0x279) {
        func_0203e908(p, 0x27c);
        return 1;
    }
    uVar6 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar6;
    uVar6 = (u16)((((u16)uVar6) * 3u) >> 16);
    switch (uVar6) {
    case 0:
        func_0203e908(p, 0x27c);
        return 1;
    case 1:
        func_0203e908(p, 0x27d);
        return 1;
    case 2:
        return 0;
    }
    return 0;
c0:
    iVar3 = func_02027894(p, iVar2);
    if (iVar3 == 0) goto B;
    if (iVar3 == 1) goto A;
    if (iVar3 != 2) goto J;
A:
    t = *(s8 *)(p + 0x88);
    func_020362ec(iVar2, (s16)t);
    func_0202707c(iVar2, 0x19);
    goto J;
B:
    t = *(s8 *)(p + 0x88);
    func_020362ec(iVar2, (s16)t);
    func_0202707c(iVar2, 0x1a);
J:
    func_0203e908(p, 0x280);
    return 1;
ret0:
    return 0;
}
