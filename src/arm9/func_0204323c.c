#include "ctx.h"

extern u32 data_0215942c;
extern u32 data_0214f464;
extern s64 func_02099fc0(void);
extern void func_020411c8(s32 a);

static inline s32 IsA(u8 *o, s32 st)
{
    s32 v;
    if (st >= 4 && st <= 8) {
        return 1;
    }
    if (st == 87) {
        return 1;
    }
    v = *(s16 *)(o + 0xea);
    if (v >= 15 && v <= 75) {
        return 1;
    }
    if (v >= 0x119 && v <= 0x13c) {
        return 1;
    }
    return 0;
}

static inline s32 Chk(u8 *o, s32 st)
{
    s32 v;
    if (IsA(o, st)) {
        return 0;
    }
    v = *(s16 *)(o + 0xea);
    if (v >= 0x478 && v <= 0x47e) {
        return 0;
    }
    if (v >= 0x4c7 && v <= 0x4ca) {
        return 0;
    }
    if (st == 83) {
        return 0;
    }
    if (st == 84) {
        return 0;
    }
    return 1;
}

void func_0204323c(void)
{
    s32 ok;
    s32 i;
    u8 *O;
    s32 st;
    u8 *o;
    s64 d;
    s64 x;

    if (*(u16 *)(*(u8 **)&data_0215942c) != 0) {
        return;
    }
    x = func_02099fc0();
    if (30LL >= x) {
        return;
    }
    O = *(u8 **)&data_0214f464;
    i = 0;
    do {
        if (i < 0 || i >= 3) {
            o = 0;
        } else {
            o = *(u8 **)(O + i * 4 + 0x54);
        }
        if (o != 0) {
            st = *(s16 *)(o + 0xf0);
            if (!Chk(o, st)) {
                ok = 0;
                goto done;
            }
        }
        i = (s8)(i + 1);
    } while (i < 3);
    ok = 1;
done:
    if (!ok) {
        return;
    }
    for (i = 0; i < 3; i = (s8)(i + 1)) {
        if (i < 0 || i >= 3) {
            o = 0;
        } else {
            o = *(u8 **)(*(u8 **)&data_0214f464 + i * 4 + 0x54);
        }
        if (o != 0) {
            func_020411c8((s32)o);
        }
    }
    *(s16 *)(*(u8 **)&data_0214f464 + 0x26) = 0xb4;
}
