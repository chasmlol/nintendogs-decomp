#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 pad00[0x72];
    u8 b72;
    u8 pad73[0x64e - 0x73];
    u16 h64e;
} Owner;

typedef struct {
    u8 pad00[0x8b];
    s8 b8b;
    u8 pad8c[0xa5 - 0x8c];
    u8 ba5;
    u8 pada6[2];
    u8 ba8;
    u8 pada9[0xea - 0xa9];
    s16 anim;
    u8 padec[4];
    s16 state;
    u8 padf2[0x112 - 0xf2];
    s16 h112;
    u8 pad114[0x9e8 - 0x114];
    Owner *owner;
} Dog;

extern u16 *data_0215942c;
extern u32 *data_0214f464;

static inline BOOL IsMode17(Dog *d)
{
    return *data_0215942c == 17 && d->owner->b72 == 4;
}

static inline BOOL IsBusy(Dog *d)
{
    if (d->state >= 4 && d->state <= 8) return TRUE;
    if (d->state == 87) return TRUE;
    if (d->anim >= 15 && d->anim <= 75) return TRUE;
    if (d->anim >= 0x119 && d->anim <= 316) return TRUE;
    return FALSE;
}

static inline BOOL CanReact(Dog *d)
{
    if (IsBusy(d)) return FALSE;
    if (d->anim >= 0x478 && d->anim <= 0x47e) return FALSE;
    if (d->anim >= 0x4c7 && d->anim <= 0x4ca) return FALSE;
    if (d->state == 83) return FALSE;
    if (d->state == 84) return FALSE;
    return TRUE;
}

static inline void React(Dog *d, u8 kind)
{
    d->anim = 0x224;
    if (CanReact(d)) {
        d->ba8 = 0;
        d->h112 = 0;
        d->state = 11;
        d->ba5 = kind;
    }
}

static inline u16 Rand(u16 max)
{
    u32 s = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = s;
    return (u16)(((u32)(u16)s * max) >> 16);
}

BOOL func_0202e500(Dog *d, u32 cmd, u32 v)
{
    BOOL r;

    switch (cmd) {
    case 0:
        if (v > 0x3000 && v <= 0x5000) {
            if (IsMode17(d)) {
                d->anim = 0x1e1;
                return TRUE;
            }
            if (d->b8b != 5) {
                d->anim = 0x225;
                return TRUE;
            }
            React(d, 5);
            return TRUE;
        }
        if (v > 0x5000 && v <= 0xb000) {
            if (IsMode17(d)) {
                React(d, 3);
                return TRUE;
            }
            if (d->b8b != 5) {
                React(d, 3);
                return TRUE;
            }
            React(d, 4);
            return TRUE;
        }
        if (v > 0xb000 && v <= 0xd000) {
            if (IsMode17(d)) {
                d->anim = 0x1e2;
                return TRUE;
            }
            if (d->b8b != 5) {
                d->anim = 0x226;
                return TRUE;
            }
            React(d, 6);
            return TRUE;
        }
        if (IsMode17(d) || d->owner->h64e < 500) {
            d->anim = 0x1df;
            return TRUE;
        }
        if (d->b8b != 5) {
            if (Rand(5) == 0) {
                React(d, 1);
                return TRUE;
            }
            d->anim = 0x1df;
            return TRUE;
        }
        return FALSE;
    case 1:
        if (v > 0x3000 && v <= 0x7000) {
            d->anim = 0x230;
            return TRUE;
        }
        if (v > 0x7000 && v <= 0x9000) {
            d->anim = 0x22f;
            return TRUE;
        }
        if (v > 0x9000 && v <= 0xd000) {
            d->anim = 0x231;
            return TRUE;
        }
        d->anim = 0x1e4;
        return TRUE;
    case 2:
        d->anim = 0x233;
        return TRUE;
    case 3:
        if (v > 0x3000 && v <= 0x7000) {
            if (IsMode17(d)) {
                d->anim = 0x1f0;
                return TRUE;
            }
            d->anim = 0x237;
            return TRUE;
        }
        if (v > 0x7000 && v <= 0x9000) {
            if (IsMode17(d)) {
                d->anim = 0x1ef;
                return TRUE;
            }
            d->anim = 0x236;
            return TRUE;
        }
        if (v > 0x9000 && v <= 0xd000) {
            if (IsMode17(d)) {
                d->anim = 0x1f1;
                return TRUE;
            }
            d->anim = 0x238;
            return TRUE;
        }
        if (IsMode17(d)) {
            d->anim = 0x1ee;
            return TRUE;
        }
        if (d->b8b != 5) {
            d->anim = 0x235;
            return TRUE;
        }
        return FALSE;
    case 4:
        if (v > 0x3000 && v <= 0x7000) {
            d->anim = 0x23b;
            return TRUE;
        }
        if (v > 0x7000 && v <= 0x9000) {
            return FALSE;
        }
        if (v > 0x9000 && v <= 0xd000) {
            d->anim = 0x23c;
            return TRUE;
        }
        if (d->b8b != 5) {
            d->anim = 0x23a;
            return TRUE;
        }
        return FALSE;
    case 5:
        if (v > 0x3000 && v <= 0x9000) {
            return FALSE;
        }
        if (v > 0x9000 && v <= 0xe000) {
            if (d->b8b != 5) {
                d->anim = 0x241;
                return TRUE;
            }
            return FALSE;
        }
        if (d->b8b != 5) {
            d->anim = 0x243;
            return TRUE;
        }
        return FALSE;
    case 6:
        if (v > 0x2000 && v <= 0x7000) {
            if (d->b8b != 5) {
                d->anim = 0x242;
                return TRUE;
            }
            return FALSE;
        }
        if (v > 0x7000 && v <= 0xd000) {
            return FALSE;
        }
        if (d->b8b != 5) {
            d->anim = 0x244;
            return TRUE;
        }
        return FALSE;
    case 7:
        if (v > 0x2000 && v <= 0x8000) {
            return FALSE;
        }
        if (v > 0x8000 && v <= 0xd000) {
            d->anim = 0x247;
            return TRUE;
        }
        d->anim = 0x251;
        return TRUE;
    case 8:
        if (v > 0x3000 && v <= 0x8000) {
            d->anim = 0x248;
            return TRUE;
        }
        if (v > 0x8000 && v <= 0xe000) {
            return FALSE;
        }
        d->anim = 0x252;
        return TRUE;
    }
    return FALSE;
}
