#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;

typedef volatile s32 vs32;
typedef struct { u32 w0; u32 w1; u32 w2; } T3;

static inline s32 FXM(s32 x, s32 y)
{
    s64 t = (s64)x * y;
    return (s32)((t + 0x800) >> 12);
}

static inline u8 *GetE(u8 *g, s8 i)
{
    if (i < 0 || i >= 3) {
        return 0;
    }
    return *(u8 **)(g + i * 4 + 0x54);
}

static inline s32 Bit(u8 *p, s8 i, vs32 *a, vs32 *b)
{
    if (i < 0) {
        return 0;
    }
    if (i >= 3) {
        return *a;
    }
    if (*(u32 *)(p + 0x924) & (1u << i)) {
        return 1;
    }
    return *b;
}

s32 func_0203292c(u8 *param_1)
{
    s32 z0 = 0;
    s32 z1 = 0;
    u8 *e;
    s8 i;
    u8 *g;
    s32 skip;

    skip = (s8)param_1[0x88];
    g = data_0214f464;
    i = 0;
    do {
        e = GetE(g, i);
        if (i != skip && e != 0 && Bit(param_1, i, &z0, &z1) != 0 && (s8)e[0xaf] >= (s8)param_1[0xaf]) {
            T3 cp = *(T3 *)(e + 0x2a0);
            s32 d = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8) + *(s32 *)(*(u8 **)(e + 0x9e8) + 8);
            s32 lhs = (s32)(((s64)0x1806 * d + 0x800) >> 12);
            s32 r1 = FXM((s32)cp.w0 - *(s32 *)(param_1 + 0x2a0), *(s32 *)(param_1 + 0x1a4));
            s32 r2 = FXM((s32)cp.w2 - *(s32 *)(param_1 + 0x2a8), *(s32 *)(param_1 + 0x1ac));
            if (r1 + r2 > lhs) {
                return i;
            }
        }
        i = i + 1;
    } while (i < 3);
    return -1;
}
