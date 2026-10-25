#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;

extern s32 func_02027710(u8 *p, u8 *q);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u8 *p);
extern u32 func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_020362ec(u8 *q, s32 a);
extern void func_0202707c(u8 *q, u32 a);
extern void func_0203e908(u8 *p, u32 a);
extern s32 func_02027894(u8 *p, s32 a);

static inline s32 PoolBias(void)
{
    return 0x27d;
}

u32 func_020548f0(u8 *p, u8 *q)
{
    s32 iv5;
    s32 iv2;
    s32 iv;
    u32 c;
    u32 u4;
    s32 b1;
    u32 m;

    s32 xv;



    xv = *(s16 *)(q + 0xea);
    switch (xv) {
    case 0x27d:
        goto R0a;
    case 0x27e:
    case 0x27f:
        goto L248;
    case 0x280:
        goto R0b;
    case 0x281:
        goto L51c;
    default:
        break;
    }

    iv5 = 0;
    if (*(s16 *)(p + 0xea) == 0x279 && *(s32 *)(p + 0x464) != 0) {
        b1 = 1;
    } else {
        b1 = 0;
    }
    if (b1 && xv == 0x27c) {
        iv5 = 5;
    }
    iv2 = func_02027710(p, q);
    if (iv2 == -1) {
        goto L164;
    }
    if (iv2 == 0) {
        goto L164;
    }
    if (iv2 != 1) {
        goto Lz;
    }
    c = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = c;
    u4 = (u16)(((u32)(u16)(iv5 + 2) * (u16)c) >> 16);
    if (u4 == 0) {
        goto R0c;
    }
    if (u4 != 1) {
        goto T_12c;
    }
    goto T_f4;

R0c:
    return 0;

T_f4:
    func_0203e908(p, 0x301);
    func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
    func_0202707c(q, 3);
    return 1;

T_12c:
    func_0203e908(p, 0x301);
    func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
    func_0202707c(q, 0x1b);
    return 1;

L164:
    c = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = c;
    u4 = (u16)(((u32)(u16)(iv5 + 2) * (u16)c) >> 16);
    if (u4 == 0) {
        goto Lz0;
    }
    if (u4 != 1) {
        goto T204;
    }
    goto T1cc;

Lz0:
    func_020362f8(p);
    return func_0202fcc0(p);

T1cc:
    func_0203e908(p, 0x301);
    func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
    func_0202707c(q, 3);
    return 1;

T204:
    func_0203e908(p, 0x301);
    func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
    func_0202707c(q, 0x1b);
    return 1;

R0a:
    return 0;

L248:
    iv2 = func_02027710(p, q);
    if (iv2 == -1) {
        goto L418;
    }
    if (iv2 == 0) {
        goto L400;
    }
    if (iv2 != 1) {
        goto Lz;
    }
    c = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = c;
    switch ((u16)((c << 16) >> 30)) {
    case 0:
        iv = func_02036578(p);
        m = func_020449bc();
        if ((m & 2) == 0) {
            return func_0202fd7c(p);
        }
        if (iv == 0) {
            return 0;
        }
        func_0203e908(p, 0x282);
        return 1;
    case 1:
        iv = func_02036578(p);
        m = func_020449bc();
        if ((m & 4) == 0) {
            return func_0202fd7c(p);
        }
        if (0 == iv) {
            return 0;
        }
        func_0203e908(p, 0x289);
        return 1;
    case 2:
        iv = func_02036578(p);
        m = func_020449bc();
        if ((m & 8) == 0) {
            return func_0202fd7c(p);
        }
        if (iv == 0) {
            return 0;
        }
        func_0203e908(p, 0x28f);
        return 1;
    case 3:
        iv = func_02036578(p);
        m = func_020449bc();
        if ((m & 0x10) == 0) {
            return func_0202fd7c(p);
        }
        if (iv == 0) {
            return 0;
        }

        *(s32 *)(p + 0x484) = func_02027894(p, iv);
        func_0203e908(p, 0x295);

        return 1;
    default:
        goto Lz;
    }

L400:
    func_020362f8(p);
    return func_0202fcc0(p);

L418:
    c = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = c;
    switch ((u16)((c << 16) >> 30)) {
    case 0:
        func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
        func_0202707c(q, 9);
        return 1;
    case 1:
        func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
        func_0202707c(q, 11);
        return 1;
    case 2:
        func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
        func_0202707c(q, 13);
        return 1;
    case 3:
        func_020362ec(q, (s16)(s32)*(s8 *)(p + 136));
        func_0202707c(q, 15);
        return 1;
    default:
        goto Lz;
    }

R0b:
    return 0;

L51c:
    func_020362f8(p);
    return func_0202fcc0(p);

Lz:
    return 0;
}
