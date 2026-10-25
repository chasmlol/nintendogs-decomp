#pragma avoid_byte strb
#include "ctx.h"

/* a24: a23 with the flag blocks as g = 0; if ((x & m) != 0) { store; g = 1; } if (g) call
   (predicated store, movne for g, no moveq when g = 0 is already in r0). */

typedef struct { s32 x; s32 y; s32 z; } Vec3;

#define FXM(a, b) ((s32)((((s64)(a)) * (s64)(b) + 0x800) >> 12))

extern u32 *data_0214f464;

extern s32 func_020c1f34(u8 *p);
extern s32 func_020365c8(u8 *p, u8 *q);
extern s32 func_02034750(u8 *p, u8 *q, s32 a);
extern void func_02027e64(u8 *p, s32 a, s32 b);
extern s32 func_020c1e90(u8 *p);
extern void func_0202a8cc(u8 *p, u8 *q);
extern s32 func_02028124(u8 *p);
extern void func_0203e908(u8 *p, s16 a);
extern s32 func_ov003_02199f9c(u8 *p, s32 a, s32 b, u8 *c);
extern s32 func_02034310(u8 *p);
extern s32 func_020c4624(u8 *p);
extern s32 func_020383b4(u8 *p);
extern s32 func_02027c68(u8 *p, s32 a);
extern s32 func_ov003_0219a190(u8 *p, s32 a);
extern s32 func_020bd640(u8 *p, u8 *q);

s32 func_ov003_02198eac(u8 *p1, s32 p2, s32 p3, u8 *p4)
{
    s32 bVar4;
    s32 iVar5;
    s32 iVar8;
    s32 uVar6;
    s32 uVar7;
    s32 k;
    s32 f;
    s16 uVar1;
    s16 sVar2;
    s32 t;
    s32 s;
    u32 v;
    Vec3 a;
    Vec3 b;
    Vec3 c;

    if (p4 != 0) {
        if (*(s16 *)(p4 + 0x90) == 0 || *(s16 *)(p4 + 0x90) == 2) {
            bVar4 = 1;
        } else if (*(s16 *)(p4 + 0x94) == 0x35 && func_020c1f34(p4) == 0) {
            bVar4 = 1;
        } else {
            bVar4 = 0;
        }
        if (!bVar4) {
            k = func_020365c8(p1, p4);
            iVar5 = func_02034750(p1, p4, 1);
            if (iVar5 != 0) {
                if ((p1[0xb6] & 2) != 0) {
                    p1[0xb6] &= ~2;
                    f = 1;
                } else {
                    f = 0;
                }
                if (f) {
                    func_02027e64(p1, 1, 0x32);
                    func_02027e64(p1, 0, 0x19);
                }
            }
            uVar1 = *(s16 *)(p4 + 0x96);
            if (uVar1 == 14 && *(s16 *)(p4 + 0x90) == 6) {
                func_0203e908(p1, 0x436);
                return 1;
            }
            if ((u16)uVar1 <= 1) {
                uVar6 = func_020c1e90(p4);
                t = FXM(uVar6, 0xc00);
                s = FXM(t, t);
                if (p2 >= s) return 0;
                func_0202a8cc(p1, p4);
                return 1;
            }
            if (uVar1 == 5 && *(s16 *)(p4 + 0x90) != 3) {
                a = *(Vec3 *)(p4 + 0xb0);
                b = *(Vec3 *)(p4 + 0xbc);
                if (a.y <= 0) {
                    uVar7 = func_ov003_02199f9c(p1, b.y, a.y, p4);
                    switch (uVar7) {
                    default:
                        case 0:
                    case 4:
                        return 0;
                    case 1:
                        if (func_02034310(p1) != 0) {
                            iVar5 = func_020c4624(p4);
                            iVar8 = func_02028124(p1);
                            t = FXM(p3 + 0x4000, iVar8);
                            s = FXM(t, t);
                            if (p2 >= s) return 0;
                            f = 0;
                            if ((p1[0xb6] & 4) != 0) {
                                p1[0xb6] &= ~4;
                                f = 1;
                            }
                            if (f) func_02027e64(p1, 2, 0x32);
                            if (iVar5 != 0) {
                                func_0203e908(p1, 0x3e9);
                            } else {
                                func_0203e908(p1, 0x3e4);
                            }
                            return 1;
                        }
                        return 0;
                    case 2:
                        if (func_02034310(p1) != 0) {
                            iVar5 = func_02028124(p1);
                            t = FXM(p3 + 0x9000, iVar5);
                            s = FXM(t, t);
                            if (p2 >= s) return 0;
                            f = 0;
                            if ((p1[0xb6] & 4) != 0) {
                                p1[0xb6] &= ~4;
                                f = 1;
                            }
                            if (f) func_02027e64(p1, 2, 0x32);
                            func_0203e908(p1, 0x3e6);
                            return 1;
                        }
                        return 0;
                    case 3:
                        if (func_02034310(p1) != 0) {
                            iVar5 = func_02028124(p1);
                            t = FXM(p3 + 0x6000, iVar5);
                            s = FXM(t, t);
                            if (p2 >= s) return 0;
                            f = 0;
                            if ((p1[0xb6] & 4) != 0) {
                                p1[0xb6] &= ~4;
                                f = 1;
                            }
                            if (f) func_02027e64(p1, 2, 0x32);
                            func_0203e908(p1, 1000);
                            return 1;
                        }
                        return 0;
                    case 5:
                        iVar5 = func_02028124(p1);
                        t = FXM(p3 + 0x1000, iVar5);
                        s = FXM(t, t);
                        if (p2 > s) {
                            func_0203e908(p1, 0x3e2);
                            return 1;
                        }
                        func_0203e908(p1, 0x3eb);
                        return 1;
                    case 6:
                        iVar5 = func_02028124(p1);
                        t = FXM(p3 + 0x1000, iVar5);
                        s = FXM(t, t);
                        if (p2 > s) {
                            func_0203e908(p1, 0x3ea);
                            return 1;
                        }
                        func_0203e908(p1, 0x3f5);
                        return 1;
                    }
                } else {
                    if (b.y <= 0x400) {
                        iVar5 = func_02028124(p1);
                        t = FXM(p3 + 0x1000, iVar5);
                        s = FXM(t, t);
                        if (p2 > s) {
                            func_0203e908(p1, 0x3ea);
                            return 1;
                        }
                        func_0203e908(p1, 0x3f5);
                        return 1;
                    }
                    return 0;
                }
            }
            if (uVar1 == 3) {
                if (k != 0) {
                    if (k != 1) {
                        if (k == 2) {
                            iVar5 = func_02028124(p1);
                            t = FXM(p3 + 0x168f, iVar5);
                            s = FXM(t, t);
                            if (p2 < s) {
                                switch (func_020bd640(p1, p4)) {
                                case 0:
                                    func_0203e908(p1, 0x3eb);
                                    return 1;
                                case 1:
                                    v = *data_0214f464 * 0x10dcd + 1;
                                    *data_0214f464 = v;
                                    switch ((u16)(((u32)v << 16) >> 31)) {
                                    case 0:
                                        func_0203e908(p1, 0x3ee);
                                        return 1;
                                    case 1:
                                        func_0203e908(p1, 0x3ef);
                                        return 1;
                                    }
                                    break;
                                }
                            }
                            return 0;
                        }
                    } else {
                        v = *data_0214f464 * 0x10dcd + 1;
                        *data_0214f464 = v;
                        switch ((u16)((u16)v * 5u >> 16)) {
                        case 0:
                            func_0203e908(p1, 0x403);
                            return 1;
                        case 1:
                            func_0203e908(p1, 0x404);
                            return 1;
                        case 2:
                            func_0203e908(p1, 0x405);
                            return 1;
                        case 3:
                            func_0203e908(p1, 0x402);
                            return 1;
                        case 4:
                            uVar6 = func_020383b4(p1);
                            func_0203e908(p1, (s16)(uVar6 + 0x406));
                            return 1;
                        }
                        return 0;
                    }
                } else {
                    uVar6 = func_020383b4(p1);
                    func_0203e908(p1, (s16)(uVar6 + 0x3cd));
                    return 1;
                }
            } else {
                sVar2 = *(s16 *)(p4 + 0x90);
                if (sVar2 == 5 || sVar2 == 6 || sVar2 == 8) {
                    v = *data_0214f464 * 0x10dcd + 1;
                    *data_0214f464 = v;
                    switch ((u16)((v << 16) >> 30)) {
                    case 0:
                        func_0203e908(p1, 0x403);
                        return 1;
                    case 1:
                        func_0203e908(p1, 0x404);
                        return 1;
                    case 2:
                        func_0203e908(p1, 0x405);
                        return 1;
                    case 3:
                        func_0203e908(p1, 0x402);
                        return 1;
                    }
                } else {
                    if (k != 0) {
                        if (k != 1) {
                            if (k == 2) {
                                c = *(Vec3 *)(p4 + 0xbc);
                                if (func_02027c68(p1, 0) != 0) {
                                    switch (func_ov003_0219a190(p1, c.y)) {
                                    default:
 case 0:
                                        return 0;
                                    case 1:
                                        iVar5 = func_02028124(p1);
                                        t = FXM(p3 + 0x4000, iVar5);
                                        s = FXM(t, t);
                                        if (p2 >= s) return 0;
                                        f = 0;
                                        if ((p1[0xb6] & 4) != 0) {
                                            p1[0xb6] &= ~4;
                                            f = 1;
                                        }
                                        if (f) func_02027e64(p1, 2, 0x32);
                                        func_0203e908(p1, 0x3e3);
                                        return 1;
                                    case 2:
                                        iVar5 = func_02028124(p1);
                                        t = FXM(p3 + 0x9000, iVar5);
                                        s = FXM(t, t);
                                        if (p2 >= s) return 0;
                                        f = 0;
                                        if ((p1[0xb6] & 4) != 0) {
                                            p1[0xb6] &= ~4;
                                            f = 1;
                                        }
                                        if (f) func_02027e64(p1, 2, 0x32);
                                        func_0203e908(p1, 0x3e5);
                                        return 1;
                                    case 3:
                                        iVar5 = func_02028124(p1);
                                        t = FXM(p3 + 0x6000, iVar5);
                                        s = FXM(t, t);
                                        if (p2 >= s) return 0;
                                        f = 0;
                                        if ((p1[0xb6] & 4) != 0) {
                                            p1[0xb6] &= ~4;
                                            f = 1;
                                        }
                                        if (f) func_02027e64(p1, 2, 0x32);
                                        func_0203e908(p1, 0x3e7);
                                        return 1;
                                    case 4:
                                        if (*(s16 *)(p4 + 0x90) == 3) {
                                            iVar5 = func_02028124(p1);
                                            t = FXM(p3 + 0x4000, iVar5);
                                            s = FXM(t, t);
                                            if (p2 >= s) return 0;
                                            f = 0;
                                            if ((p1[0xb6] & 4) != 0) {
                                                p1[0xb6] &= ~4;
                                                f = 1;
                                            }
                                            if (f) func_02027e64(p1, 2, 0x32);
                                            func_0203e908(p1, 0x3e3);
                                            return 1;
                                        }
                                        return 0;
                                    case 5:
                                        iVar5 = func_02028124(p1);
                                        t = FXM(p3 + 0x1000, iVar5);
                                        s = FXM(t, t);
                                        if (p2 > s) {
                                            func_0203e908(p1, 0x3e2);
                                            return 1;
                                        }
                                        func_0203e908(p1, 0x3eb);
                                        return 1;
                                    case 6:
                                        iVar5 = func_02028124(p1);
                                        t = FXM(p3 + 0x1000, iVar5);
                                        s = FXM(t, t);
                                        if (p2 > s) {
                                            func_0203e908(p1, 0x3ea);
                                            return 1;
                                        }
                                        func_0203e908(p1, 0x3f5);
                                        return 1;
                                    }
                                } else {
                                    switch (func_ov003_0219a190(p1, c.y)) {
default: return 0;
                                    case 4:
                                        func_0203e908(p1, 0x3ec);
                                        return 1;
                                    case 5:
                                        iVar5 = func_02028124(p1);
                                        t = FXM(p3 + 0x168f, iVar5);
                                        s = FXM(t, t);
                                        if (p2 < s) {
                                            switch (func_020bd640(p1, p4)) {
                                            case 0:
                                                func_0203e908(p1, 0x3eb);
                                                return 1;
                                            case 1:
                                                v = *data_0214f464 * 0x10dcd + 1;
                                                *data_0214f464 = v;
                                                switch ((u16)(((u32)v << 16) >> 31)) {
                                                case 0:
                                                    func_0203e908(p1, 0x3ee);
                                                    return 1;
                                                case 1:
                                                    func_0203e908(p1, 0x3ef);
                                                    return 1;
                                                }
                                                break;
                                            }
                                        }
                                        return 0;
                                    case 6:
                                        v = *data_0214f464 * 0x10dcd + 1;
                                        *data_0214f464 = v;
                                        switch ((u16)((u16)v * 20u >> 16)) {
                                        case 0:
                                            func_0203e908(p1, 0x404);
                                            return 1;
                                        case 1:
                                            func_0203e908(p1, 0x405);
                                            return 1;
                                        }
                                        iVar5 = func_02028124(p1);
                                        t = FXM(p3 + 0x168f, iVar5);
                                        s = FXM(t, t);
                                        if (p2 >= s) return 0;
                                        func_0203e908(p1, 0x3ed);
                                        return 1;
                                    }
                                }
                            }
                        } else {
                            v = *data_0214f464 * 0x10dcd + 1;
                            *data_0214f464 = v;
                            switch ((u16)((u16)v * 5u >> 16)) {
                            case 0:
                                func_0203e908(p1, 0x403);
                                return 1;
                            case 1:
                                func_0203e908(p1, 0x404);
                                return 1;
                            case 2:
                                func_0203e908(p1, 0x405);
                                return 1;
                            case 3:
                                func_0203e908(p1, 0x402);
                                return 1;
                            case 4:
                                uVar6 = func_020383b4(p1);
                                func_0203e908(p1, (s16)(uVar6 + 0x406));
                                return 1;
                            }
                            return 0;
                        }
                    } else {
                        uVar6 = func_020383b4(p1);
                        func_0203e908(p1, (s16)(uVar6 + 0x3cd));
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
