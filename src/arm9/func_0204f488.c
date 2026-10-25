#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;

extern s32 func_02027710(u8 *p, u8 *q);
extern void func_020362f8(u8 *p);
extern s32 func_02027708(u8 *q);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern s32 func_0202fd7c(u8 *p);
extern void func_020362ec(u8 *p, s32 a);
extern void func_0202707c(u8 *p, s32 a);
extern s32 func_02027894(u8 *p, s32 a);

static inline u8 SwapB(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline u32 Tick(void)
{
    u32 *cp = *(u32 **)&data_0214f464;
    u32 n = *cp * 0x10dcd + 1;
    *cp = n;
    return n;
}

s32 func_0204f488(u8 *param_1, u8 *param_2)
{
    s32 sel;
    s32 v;
    s32 r4;
    u32 fl;
    u32 n;
    u32 t;
    s32 t136;

    sel = *(s16 *)(param_2 + 0xea);
    if (sel == 0x2fe) goto R0a;
    if (sel == 0x2ff) {
        goto L2ff;
    }
    if (sel == 0x300) {
        goto L300;
    }
    v = func_02027710(param_1, param_2);
    if (v != -1 && v != 0 && v != 1) goto Lret0;
    func_020362f8(param_1);
    if (param_2 == 0) {
        return 0;
    }
    v = func_02027708(param_2);
    SwapB((u32)v, (vu8 *)(param_1 + 0x8a));
    func_0203e908(param_1, 0x302);
    return 1;

R0a:
    return 0;

L2ff:
    v = func_02027710(param_1, param_2);
    if (v == -1 || v == 0) {
        goto L430;
    }
    if (v != 1) goto Lret0;
    n = Tick();
    switch ((u16)((((u32)(u16)n) * 6u) >> 16)) {
    case 0:
        r4 = func_02036578(param_1);
        fl = func_020449bc();
        if ((fl & 1) == 0) {
            return func_0202fd7c(param_1);
        }
        if (r4 == 0) {
            return 0;
        }
        n = Tick();
        switch ((u16)((n << 16) >> 31)) {
        case 0:
            func_0203e908(param_1, 0x278);
            return 1;
        case 1:
            func_0203e908(param_1, 0x279);
            return 1;
        }
        return 0;
    case 1:
        r4 = func_02036578(param_1);
        fl = func_020449bc();
        if ((fl & 2) == 0) {
            return func_0202fd7c(param_1);
        }
        if (r4 == 0) {
            return 0;
        }
        func_0203e908(param_1, 0x282);
        return 1;
    case 2:
        r4 = func_02036578(param_1);
        fl = func_020449bc();
        if ((fl & 4) == 0) {
            return func_0202fd7c(param_1);
        }
        if (r4 == 0) {
            return 0;
        }
        func_0203e908(param_1, 0x289);
        return 1;
    case 3:
        r4 = func_02036578(param_1);
        fl = func_020449bc();
        if ((fl & 8) == 0) {
            return func_0202fd7c(param_1);
        }
        if (r4 == 0) {
            return 0;
        }
        func_0203e908(param_1, 0x28f);
        return 1;
    case 4:
        r4 = func_02036578(param_1);
        fl = func_020449bc();
        if ((fl & 0x10) == 0) {
            return func_0202fd7c(param_1);
        }
        if (r4 == 0) {
            return 0;
        }
        *(s32 *)(param_1 + 0x484) = func_02027894(param_1, r4);
        func_0203e908(param_1, 0x295);
        return 1;
    case 5:
        r4 = func_02036578(param_1);
        fl = func_020449bc();
        if ((fl & 0x20) == 0) {
            return func_0202fd7c(param_1);
        }
        if (r4 == 0) {
            return 0;
        }
        n = Tick();
        switch ((u16)((n << 16) >> 31)) {
        case 0:
            func_0203e908(param_1, 0x2cd);
            return 1;
        case 1:
            func_0203e908(param_1, 0x2ce);
            return 1;
        }
        return 0;
    }
    goto Lret0;

L430:
    n = Tick();
    switch ((u16)((((u32)(u16)n) * 6u) >> 16)) {
    case 0:
        t136 = *(s8 *)(param_1 + 136);
        func_020362ec(param_2, (s16)t136);
        func_0202707c(param_2, 7);
        return 1;
    case 1:
        t136 = *(s8 *)(param_1 + 136);
        func_020362ec(param_2, (s16)t136);
        func_0202707c(param_2, 9);
        return 1;
    case 2:
        t136 = *(s8 *)(param_1 + 136);
        func_020362ec(param_2, (s16)t136);
        func_0202707c(param_2, 11);
        return 1;
    case 3:
        t136 = *(s8 *)(param_1 + 136);
        func_020362ec(param_2, (s16)t136);
        func_0202707c(param_2, 13);
        return 1;
    case 4:
        t136 = *(s8 *)(param_1 + 136);
        func_020362ec(param_2, (s16)t136);
        func_0202707c(param_2, 15);
        return 1;
    case 5:
        t136 = *(s8 *)(param_1 + 136);
        func_020362ec(param_2, (s16)t136);
        func_0202707c(param_2, 17);
        return 1;
    }
    goto Lret0;

L300:
    v = func_02027710(param_1, param_2);
    if (v == -1 || v == 0) goto LA300;
    if (v != 1) goto Lret0;
LA300:
    return 0;

Lret0:
    return 0;
}
