#pragma avoid_byte strb
#include "ctx.h"

extern s32 data_0202a5b8[];

static inline s32 Clamp10k(s32 v)
{
    if (v < 0) {
        v = 0;
    }
    if (v > 10000) {
        v = 10000;
    }
    return v;
}

void func_0202a378(u8 *param_1)
{
    *(u16 *)(param_1 + 0x12a) = 0;
    {
        s32 v = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x22) + 100);
        param_1[210] = 1;
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x22) = (s16)Clamp10k(v);
    }
    {
        s32 v = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1c) - 100);
        param_1[210] = 1;
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1c) = (s16)Clamp10k(v);
    }
    {
        s16 sVar1 = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x50);
        s32 kHi = 5000;
        s32 kLo = -5000;
        s32 v;
        s32 base;
        s32 lo;
        s32 hi;
        param_1[210] = 1;
        v = sVar1 + 1;
        base = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x3c);
        lo = base + kLo;
        hi = base + kHi;
        if (v < lo) {
            v = lo;
        }
        if (v > hi) {
            v = hi;
        }
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x50) = (s16)Clamp10k(v);
    }
    {
        s16 sVar1 = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x52);
        s32 kHi = 5000;
        s32 kLo = -5000;
        s32 v;
        s32 base;
        s32 lo;
        s32 hi;
        param_1[210] = 1;
        v = sVar1 + 1;
        base = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x3e);
        lo = base + kLo;
        hi = base + kHi;
        if (v < lo) {
            v = lo;
        }
        if (v > hi) {
            v = hi;
        }
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x52) = (s16)Clamp10k(v);
    }
    {
        s16 sVar1 = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x54);
        s32 kHi = 5000;
        s32 kLo = -5000;
        s32 v;
        s32 base;
        s32 lo;
        s32 hi;
        param_1[210] = 1;
        v = sVar1 - 1;
        base = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x40);
        lo = base + kLo;
        hi = base + kHi;
        if (v < lo) {
            v = lo;
        }
        if (v > hi) {
            v = hi;
        }
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x54) = (s16)Clamp10k(v);
    }
    {
        s16 sVar1 = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x56);
        s32 kHi = 5000;
        s32 kLo = -5000;
        s32 v;
        s32 base;
        s32 lo;
        s32 hi;
        param_1[210] = 1;
        v = sVar1 - 1;
        base = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x42);
        lo = base + kLo;
        hi = base + kHi;
        if (v < lo) {
            v = lo;
        }
        if (v > hi) {
            v = hi;
        }
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x56) = (s16)Clamp10k(v);
    }
    {
        s16 sVar1 = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x58);
        s32 kHi = 5000;
        s32 kLo = -5000;
        s32 v;
        s32 base;
        s32 lo;
        s32 hi;
        param_1[210] = 1;
        v = sVar1 - 1;
        base = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x44);
        lo = base + kLo;
        hi = base + kHi;
        if (v < lo) {
            v = lo;
        }
        if (v > hi) {
            v = hi;
        }
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x58) = (s16)Clamp10k(v);
    }
    (void)data_0202a5b8;
}
