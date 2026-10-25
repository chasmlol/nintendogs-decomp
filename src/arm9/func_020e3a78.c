#include "ctx.h"

extern u8 *data_0214e778;
extern u32 *data_02159468;

extern void func_02044ca0(s32 a);
extern s32 func_020e3e44(s32 *a, s32 b);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_020e4870(u8 *p, s32 a);
extern s32 func_020c8164(u32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, s32 *b, s32 *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_020be298(u8 *p, s32 a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_020e4770(void);
extern void func_020e46c4(void);
extern void func_020e4604(void);
extern void func_020e44c4(void);

#define W(off) (*(s32 *)(p1 + (off)))
#define H(off) (*(s16 *)(p1 + (off)))

void func_020e3a78(u8 *p1)
{
    u8 *iv6p;
    s32 iv5;
    s32 iv6;
    s32 bV4;
    s32 t;
    s32 uv7;
    s32 sp24[3];
    s32 sp36[3];
    s32 sp48[3];
    s32 seed;
    s32 v;
    s32 r8v;
    s32 r3v;
    s32 k;
    u32 *pseed;

    iv6p = *(u8 **)(p1 + 0x214);
    func_02044ca0(H(0x9c));
    iv5 = 0x19a;
    *(u16 *)(iv6p + 0x10) = *(u16 *)(iv6p + 0x10) + 1;
    iv6 = 8;
    bV4 = func_020e3e44((s32 *)(p1 + 0xb0), iv5);
    if (bV4 != 0) {
        iv6 = 4;
    } else {
        bV4 = func_020e3e44((s32 *)(p1 + 0xb0), 41);
        if (bV4 != 0) {
            iv6 = 6;
        }
    }
    W(0xb0) = W(0xb0) - (W(0xb0) >> iv6);
    W(0xb4) = W(0xb4) - (W(0xb4) >> iv6);
    W(0xb8) = W(0xb8) - (W(0xb8) >> iv6);
    W(0xb4) = W(0xb4) - 4;
    func_02067e68((s32 *)(p1 + 0xbc), (s32 *)(p1 + 0xb0), (s32 *)(p1 + 0xbc));

    if ((H(0x88) & 1) == (*(s32 *)(data_0214e778 + 0x28) & 1)) {
        uv7 = (s32)((((s64)W(0x24) * 0x166c) + 0x800) >> 12);
        func_020e4870(p1, uv7);
        W(0xf8) = uv7;
        W(0xfc) = uv7;
        W(0x100) = uv7;
        W(0x104) = uv7;
        iv5 = func_020c8164(*(u16 *)(p1 + 0xa0), W(0xf8));
        func_020c6300(p1, W(0xf8), 0, 0, iv5, (s32)func_020e4770, (s32)func_020e46c4, 0,
                      (s32)func_020e4604, (s32)func_020e44c4);
    }

    if (W(0xb0) > 16) {
        t = 1;
        goto LT;
    }
    if (W(0xb0) < -16) {
        t = 1;
        goto LT;
    }
    if (W(0xb4) > 16) {
        t = 1;
        goto LT;
    }
    if (W(0xb4) < -16) {
        t = 1;
        goto LT;
    }
    if (W(0xb8) > 16) {
        t = 1;
        goto LT;
    }
    t = (W(0xb8) < -16) ? 1 : 0;
LT:
    if (t != 0) {
        if (((H(0x88) & 31) == ((*(s32 *)(data_0214e778 + 0x28) + 1) & 31))) {
            func_020be298(p1, 2048);
            {
                s32 l0 = W(0xd0);
                s32 l1 = W(0xcc);
                s32 l2 = W(0xc8);
                sp24[0] = l2;
                sp24[1] = l1;
                sp24[2] = l0;
            }
            {
                s32 r6v = W(0xdc);
                s32 r5v = W(0xd8);
                s32 r3v2 = W(0xd4);
                sp36[0] = r3v2;
                sp36[1] = r5v;
                sp36[2] = r6v;
            }
            func_02067d04(sp24, sp36, sp48);
            func_02006a30(sp24, sp24);
            func_02006a30(sp48, sp48);
            func_02067d04(sp48, sp24, sp36);
            W(0xc8) = sp24[0];
            W(0xcc) = sp24[1];
            W(0xd0) = sp24[2];
            W(0xd4) = sp36[0];
            W(0xd8) = sp36[1];
            W(0xdc) = sp36[2];
            W(0xe0) = sp48[0];
            W(0xe4) = sp48[1];
            W(0xe8) = sp48[2];
            return;
        }
        func_020be298(p1, 2048);
        return;
    }
    if ((H(0x88) & 31) != ((*(s32 *)(data_0214e778 + 0x28) + 1) & 31)) {
        return;
    }
    pseed = data_02159468;
    seed = (s32)*pseed;
    v = (s16)(u16)((0x10dcd * seed + 1) & 0xfff);
    r8v = (s32)((((s64)v * 0x6000) + 0x800) >> 12);
    *(u32 *)pseed = (u32)(0x10dcd * seed + 1);
    W(0xb0) = (r8v - 0x3000) >> 7;
    {
        u32 *pb2 = data_02159468;
        s32 sb = (s32)*pb2;
        s32 vb = (s16)(u16)((0x10dcd * sb + 1) & 0xfff);
        s32 r3b = (s32)((((s64)vb * 0x6000) + 0x800) >> 12);
        *pb2 = (u32)(0x10dcd * sb + 1);
        W(0xb8) = (r3b - 0x3000) >> 7;
    }
    (void)k;
}
