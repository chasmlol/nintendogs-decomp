#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern u8 *volatile data_ov005_02167f00;
extern s32 func_02067898(s32 a, s32 b);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))



/* one object block: obj = P->off; if obj: flags (r4 == 0) or swpb byte; halfword from the table */
#define BLOCK(off, K, N) do { \
    u8 *obj = *(u8 **)(data_ov005_02167f00 + (off)); \
    if (obj != 0) { \
        if (param_2 == 0) { \
            *(vu32 *)(obj + 0x1c) = *(vu32 *)(obj + 0x1c) | 2; \
        } else { \
            s32 bb; s32 fl = *(vu32 *)(obj + 0x1c); \
            fl = fl & ~2; \
            *(vu32 *)(obj + 0x1c) = fl; \
            bb = (FX_Mul(param_2, -(K)) >> 12) + (N); \
            *(u8 *)((vu8 *)(obj + 0x5c)) = (u8)(bb); \
        } \
        *(u16 *)(obj + 0x5a) = *(u16 *)(data_ov005_02167f00 + param_1 * 2 + 100); \
    } \
} while (0)

#define FINAL(off, K, N) do { \
    u8 *obj = *(u8 **)(data_ov005_02167f00 + (off)); \
    if (obj == 0) return; \
    if (param_2 == 0) { \
        *(vu32 *)(obj + 0x1c) = *(vu32 *)(obj + 0x1c) | 2; \
    } else { \
        s32 bb; s32 fl = *(vu32 *)(obj + 0x1c); \
        fl = fl & ~2; \
        *(vu32 *)(obj + 0x1c) = fl; \
        bb = (FX_Mul(param_2, -(K)) >> 12) + (N); \
        *(u8 *)((vu8 *)(obj + 0x5c)) = (u8)(bb); \
    } \
    *(u16 *)(obj + 0x5a) = *(u16 *)(data_ov005_02167f00 + param_1 * 2 + 100); \
} while (0)

static inline u16 Colour(s32 x)
{
    s32 t;
    u8 r;
    u8 g;
    u8 b;

    if (x < 205) {
        return 0x3e32;
    }
    if (x < 0x99a) {
        t = func_02067898(x - 205, 0x8cd);
        r = (FX_Mul(t, 0xd000) >> 12) + 18;
        g = (FX_Mul(t, 0xe000) >> 12) + 17;
        b = (FX_Mul(t, 0x10000) >> 12) + 15;
        return (u16)((r << 0) | (g << 5) | (b << 10));
    }
    return 0x7fff;
}

void func_ov005_02160e78(s32 param_1, s32 param_2, s32 param_3)
{
    s32 v;
    s32 r;
    s32 A;
    s32 B;
    s32 C;

    v = Colour(param_3);
    *(u16 *)(data_ov005_02167f00 + param_1 * 2 + 100) = (u16)v;
    switch (param_1) {
    case 0:
        BLOCK(0xc, 24576, 25);
        BLOCK(0x18, 266240, 100);
        FINAL(0x24, 417792, 167);
        return;
    case 1:
        FINAL(0x10, 24576, 25);
        return;
    case 2:
        FINAL(0x14, 32768, 25);
        return;
    case 3:
        BLOCK(0x28, 417792, 167);
        FINAL(0x2c, 376832, 167);
        return;
    case 4:
        BLOCK(0x30, 385024, 167);
        FINAL(0x34, 356352, 167);
        return;
    case 5:
        BLOCK(0x1c, 233472, 167);
        FINAL(0x20, 40960, 255);
        return;
    }
}
