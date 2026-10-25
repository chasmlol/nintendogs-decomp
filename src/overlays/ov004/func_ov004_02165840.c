#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 data_0214f464;

extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_020f5220(void);
extern void func_020f3bdc(u32 a);
extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, s32 a);
extern s32 func_02036b94(u8 *p, s32 *a);
extern void func_02026bac(u8 *p);
extern s32 func_02028124(u8 *p);
extern s32 func_02028130(u8 *p);
extern void func_02026514(u8 *p);
extern void func_02025dd4(u8 *p);
extern void func_02024ff0(u8 *p, s32 a);
extern void func_02039448(u8 *p);
extern void func_0202675c(u8 *p);
extern void func_020266f8(u8 *p);
extern void func_02029504(u8 *p);
extern s32 func_020f523c(void);
extern void func_ov004_0215c2ec(void);
extern void func_ov004_0215c324(s32 a);
extern void func_ov004_0215c2b4(void);
extern void func_0202fd38(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

#define FXM(m, x) ((s32)((((s64)(s32)(m)) * (s32)(x) + 0x800) >> 12))

void func_ov004_02165840(u8 *p)
{
    s32 iVar5;
    s32 iVar7;
    u32 uVar6;
    s16 sVar2;
    s8 cVar1;
    u8 cVar2;

    *(s32 *)(p + 0x484) = 0;
    *(s32 *)(p + 0x2a0) = *(s32 *)(p + 0x2a0) - *(s32 *)(p + 0x484);
    *(s32 *)(p + 0x3f0) = *(s32 *)(p + 0x3f0) - *(s32 *)(p + 0x484);
    *(s32 *)(p + 0x3fc) = *(s32 *)(p + 0x3fc) - *(s32 *)(p + 0x484);
    *(s32 *)(p + 0x488) = *(s32 *)(p + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(u32 *)(p + 0x484));
    }
    *(T3 *)(p + 0x3b4) = *(T3 *)(p + 0x26c);
    switch (*(s32 *)(p + 0x464)) {
    case 0:
        func_0203942c(p);
        iVar7 = func_02037450(p, 0x314);
        iVar5 = func_02036b94(p, (s32 *)(p + 0x3b4));
        if (iVar5 < 0x3000) {
            s32 z;
            *(s32 *)(p + 0x464) = 1;
            z = 0;
            *(s32 *)(p + 0x468) = z;
            func_0203e8cc(p, z, z);
            func_02026bac(p);
        } else {
            s32 k3;
            s32 z;
            iVar5 = func_02028124(p);
            k3 = 3;
            if (iVar7 < k3 * iVar5) {
                *(s32 *)(p + 0x464) = k3;
                z = 0;
                *(s32 *)(p + 0x468) = z;
                *(p + 0x93) = 5; func_0203e8cc(p, z, 0x8e);
                func_02026514(p);
            }
        }
        break;
    case 1:
        uVar6 = func_02028130(p);
        if (*(s32 *)(p + 0x3b8) > FXM(uVar6, 0x300c)) {
            func_0203e8cc(p, 0, 0x85);
        } else {
            uVar6 = func_02028130(p);
            if (*(s32 *)(p + 0x3b8) > FXM(uVar6, 0x2008)) {
                func_0203e8cc(p, 0, 0x86);
            } else {
                func_0203e8cc(p, 0, 0x87);
            }
        }
        uVar6 = func_02028130(p);
        iVar7 = func_02036b94(p, (s32 *)(p + 0x3b4));
        if (iVar7 < FXM(uVar6, 0x300c)) {
            *(p + 0x93) = 16;
        } else {
            *(p + 0x93) = 7;
        }
        *(s32 *)(p + 0x468) = *(s32 *)(p + 0x468) + 1;
        if (*(s32 *)(p + 0x468) > 0x3c) {
            s32 z;
            *(s32 *)(p + 0x464) = 2;
            z = 0;
            *(s32 *)(p + 0x468) = z;
            {
                s32 *ctr = (s32 *)data_0214f464;
                iVar7 = *ctr * 0x10dcd + 1;
                *ctr = iVar7;
            }
            if ((u16)(((u32)iVar7 << 16) >> 31) != 0) {
                uVar6 = func_02028124(p);
                *(s32 *)(p + 0x46c) = FXM(uVar6, 0x120);
            } else {
                uVar6 = func_02028124(p);
                *(s32 *)(p + 0x46c) = -FXM(uVar6, 0x120);
            }
            *(p + 0x93) = 5; func_0203e8cc(p, 0, 0x8e);
            func_02025dd4(p);
        }
        break;
    case 2:
        func_02024ff0(p, *(s32 *)(p + 0x46c));
        *(T3 *)(p + 0x278) = *(T3 *)(p + 0x26c);
        func_02039448(p);
        func_02037450(p, 0x310);
        *(T3 *)(p + 0x26c) = *(T3 *)(p + 0x278);
        *(s32 *)(p + 0x468) = *(s32 *)(p + 0x468) + 1;
        if (*(s32 *)(p + 0x468) > 0xf) {
            s32 z = 0;
            *(s32 *)(p + 0x464) = z;
            *(s32 *)(p + 0x468) = z;
            *(p + 0x93) = 5; func_0203e8cc(p, z, 0x12);
            func_0202675c(p);
        }
        break;
    case 3:
        *(s32 *)(p + 0x468) = *(s32 *)(p + 0x468) + 1;
        if (*(s32 *)(p + 0x468) > 0x1e) {
            s32 z = 0;
            *(s32 *)(p + 0x464) = z;
            *(s32 *)(p + 0x468) = z;
            *(p + 0x93) = 5; func_0203e8cc(p, z, 0x12);
            func_0202675c(p);
        }
        break;
    case 4:
        func_02037450(p, 0x314);
        break;
    }
    if (*(u16 *)(p + 0xfc) == 0x96) {
        s32 z = 0;
        *(s32 *)(p + 0x464) = 4;
        *(s32 *)(p + 0x468) = z;
        *(p + 0x93) = 5; func_0203e8cc(p, z, 0x11);
        func_020266f8(p);
    }
    if (*(u16 *)(p + 0xfc) <= 200) {
        if (*(u16 *)(p + 0xfc) <= 150) {
            return;
        }
        if (*(s8 *)(p + 0xa0) != 0) {
            return;
        }
        if (*(s8 *)(p + 0xa1) != 0) {
            return;
        }
    }
    sVar2 = *(s16 *)(p + 0xf0);
    if (sVar2 == 0x4d) {
        goto L4d;
    }
    if (sVar2 == 0x4e) {
        goto L4e;
    }
    if (sVar2 != 0x4f) {
        goto Ldef;
    }
    goto L4f;

L4e:
    cVar2 = *(u8 *)(p + 0xa5);
    if (cVar2 == 1) {
        goto D0;
    }
    if (cVar2 == 2) {
        goto D1;
    }
    if (cVar2 == 3) {
        goto D2;
    }
D0:
    func_0203e908(p, 0x480);
    return;
D1:
    func_0203e908(p, 0x481);
    return;
D2:
    func_0203e908(p, 0x482);
    return;

L4d:
    func_02029504(p);
    if (func_020f523c() == 0) {
        goto Lend;
    }
    cVar1 = *(s8 *)(p + 0xb7);
    if (cVar1 == 1) {
        goto A1;
    }
    if (cVar1 == 2) {
        goto A2;
    }
    if (cVar1 != 3) {
        goto J;
    }
    goto A3;
A1:
    func_ov004_0215c2ec();
    goto J;
A2:
    func_ov004_0215c324(1);
    goto J;
A3:
    func_ov004_0215c2b4();
J:
    *(p + 0xb7) = 0;
Lend:
    func_0202fd38(p);
    return;

L4f:
    func_0203e908(p, 0x489);
    return;

Ldef:
    func_0202fd38(p);
    return;
}
