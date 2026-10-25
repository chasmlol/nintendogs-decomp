#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159444;
extern u8 data_02152cd8[];
extern s32 data_0214f460;
extern u8 *data_0215942c;
extern s32 func_020364cc(u8 *p);
extern s32 func_020aaeb8(s32 a, s32 b);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02037450(u8 *p, s32 v);
extern void func_020c5a48(s32 a, s32 *b);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02026bac(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern void func_020340f4(u8 *p);
extern s32 func_020c1f34(s32 a);
extern void func_0202aaf4(u8 *p);
extern void func_0202a944(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0202aa80(u8 *p);

typedef struct { s32 a, b, c; } T12;
typedef volatile s32 vs32;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0218f4a8(u8 *p1, s32 p2, s32 p3)
{
    u32 iv6;
    u32 iv;
    int iv5;
    s32 loc[3];
    s8 bV1 = 0;

    iv = func_020364cc(p1);
    if (0 != iv) {
        iv5 = *(s32 *)(data_02159444 + 0x1c);
        *(T12 *)(0x278 + p1) = *(T12 *)(0x30 + iv5);
        loc[0] = *(s32 *)(0x54 + data_02152cd8);
        loc[1] = *(s32 *)(0x60 + data_02152cd8);
        loc[2] = *(s32 *)(data_02152cd8 + 0x6c);
        iv6 = func_020aaeb8(data_0214f460, (s8)p1[0x88]);
        func_01ff832c((-14 - (s16)iv6 * 6) * 0x1000, loc, (s32 *)(0x278 + p1), (s32 *)(p1 + 0x26c));
        func_02037450(p1, 0x392);
        if (p3 != -1 && (s8)p1[0xa0] == 0) {
            func_0203e8cc(p1, 0, p3);
            func_02026bac(p1);
            {
                u8 *q = 152 + p1;
                (void)SwapByte(1, (vu8 *)q);
            }
            *(vs32 *)(p1 + 0x464) = *(vs32 *)(p1 + 0x464) + 1;
            if (*(vs32 *)(p1 + 0x464) > 300) {
                *(vs32 *)(p1 + 0x464) = 0;
            }
            if (*(vs32 *)(p1 + 0x464) > 200) {
                *(T12 *)(p1 + 948) = *(T12 *)(0x278 + p1);
            } else {
                func_020c5a48(iv, (s32 *)(p1 + 948));
            }
        } else {
            func_020c5a48((int)iv, (s32 *)(p1 + 948));
        }
    }
    if (p3 == -1 && *(s16 *)(250 + p1) == 0x20) {
        *(s16 *)(250 + p1) = 0;
    }
    *(s32 *)(p1 + 0x488) = *(s32 *)(p1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bV1 = 0;
        goto after;
    }
    if (*(s16 *)(250 + p1) == 0x23) {
        bV1 = 0;
        goto after;
    }
    if (iv != 0) {
        if (*(s16 *)(iv + 0x90) == 0 || *(s16 *)(0x90 + iv) == 2) {
            bV1 = 1;
        } else if (*(s16 *)(0x94 + iv) == 0x35 && func_020c1f34(iv) == 0) {
            bV1 = 1;
        } else {
            bV1 = 0;
        }
        if (!bV1) {
            goto bz;
        }
    }
    func_0203e908(p1, 0x5d);
    func_020362f8(p1);
    bV1 = 1;
    goto after;
bz:
    bV1 = 0;
after:
    if (bV1) {
        func_020340f4(p1);
        return;
    }
    if (-1 != p3 && *(s16 *)(p1 + 250) == 0x20) {
        func_0202aaf4(p1);
        *(s16 *)(p1 + 250) = 0;
        return;
    }
    if (0 == p2 && *(s16 *)(p1 + 250) == 0x21) {
        func_0202a944(p1);
        *(s16 *)(p1 + 250) = 0;
        func_020340f4(p1);
        return;
    }
    if (p3 != -1 && p2 == 0) {
        return;
    }
    iv6 = func_0203567c(p1);
    if (iv6 != 0) {
        func_0202aa80(p1);
        return;
    }
    return;
}
