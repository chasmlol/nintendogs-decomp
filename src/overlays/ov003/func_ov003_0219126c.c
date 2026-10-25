#include "ctx.h"

typedef struct { s32 a, b, c; } V3;

#define FX(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_02152cd8[];
extern u8 *data_02159444;
extern u32 *data_0214f464;

extern void func_0202f9b4(u8 *p);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067df0(s32 *a, s32 *b);
extern void func_01ff832c(s32 id, s32 *a, s32 *b, s32 *c);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern s32 func_0203579c(u8 *p, s32 n);
extern s32 func_02028124(u8 *p);
extern s32 func_02035770(u8 *p, s32 n);
extern s32 func_02035744(u8 *p, s32 n);
extern void func_0209bf30(u8 *p, s32 n);
extern s32 func_ov003_02197dd8(u8 *p);
extern s32 func_020bc114(void);
extern void func_02029504(u8 *p);
extern void func_020340f4(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_02027e64(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);

void func_ov003_0219126c(u8 *param_1, s32 param_2)
{
    s32 aiStack_a0[3];
    s32 res[9];
    s32 src[9];
    s32 s4c[3];
    s32 v40[3];
    s32 l34[3];
    s32 a28[3];
    s32 bVar1;
    s32 bVar9;
    s32 uVar6;
    u32 seed;

    bVar1 = 0;
    bVar9 = 0;
    func_0202f9b4(param_1);
    *(V3 *)(param_1 + 0x3b4) = *(V3 *)(data_02159444 + 0x9c);
    func_02067e34((s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2c4), aiStack_a0);

    src[0] = *(s32 *)(data_02152cd8 + 0x4c);
    src[1] = *(s32 *)(data_02152cd8 + 0x58);
    src[2] = *(s32 *)(data_02152cd8 + 0x64);
    src[3] = *(s32 *)(data_02152cd8 + 0x50);
    src[4] = *(s32 *)(data_02152cd8 + 0x5c);
    src[5] = *(s32 *)(data_02152cd8 + 0x68);
    src[6] = *(s32 *)(data_02152cd8 + 0x54);
    src[7] = *(s32 *)(data_02152cd8 + 0x60);
    src[8] = *(s32 *)(data_02152cd8 + 0x6c);

    uVar6 = func_02067df0(&src[0], aiStack_a0);
    res[0] = FX(src[0], uVar6);
    res[1] = FX(src[1], uVar6);
    res[2] = FX(src[2], uVar6);
    uVar6 = func_02067df0(&src[3], aiStack_a0);
    res[3] = FX(src[3], uVar6);
    res[4] = FX(src[4], uVar6);
    res[5] = FX(src[5], uVar6);
    uVar6 = func_02067df0(&src[6], aiStack_a0);
    res[6] = FX(src[6], uVar6);
    res[7] = FX(src[7], uVar6);
    res[8] = FX(src[8], uVar6);

    func_01ff832c(0x2008, &res[0], (s32 *)(param_1 + 0x2c4), (s32 *)(param_1 + 0x3b4));
    func_01ff832c(0x300c, &res[3], (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x3b4));
    func_02067e68(&res[6], (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x3b4));

    if (param_2 != 0) {
        if (func_0203579c(param_1, 7) != 0) {
            uVar6 = func_02028124(param_1);
            *(s32 *)(param_1 + 0x25c) = (s32)((((s64)(s32)uVar6 * -15) + 0x800) >> 12);
            *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -9;
        }
        if (func_02035770(param_1, 7) != 0 && func_02035744(param_1, 25) != 0) {
            s4c[0] = *(s32 *)(data_02152cd8 + 0x4c);
            s4c[1] = *(s32 *)(data_02152cd8 + 0x58);
            s4c[2] = *(s32 *)(data_02152cd8 + 0x64);
            func_02067e34((s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2e8), v40);
            uVar6 = func_02067df0(s4c, v40);
            v40[0] = FX(s4c[0], uVar6);
            v40[1] = FX(s4c[1], uVar6);
            v40[2] = FX(s4c[2], uVar6);
            *(s32 *)(param_1 + 0x260) = v40[0] >> 5;
            *(s32 *)(param_1 + 0x268) = v40[2] >> 5;
        }
    } else {
        l34[0] = *(s32 *)(data_02152cd8 + 0x4c);
        l34[1] = *(s32 *)(data_02152cd8 + 0x58);
        l34[2] = *(s32 *)(data_02152cd8 + 0x64);
        func_02067e34((s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2a0), a28);
        uVar6 = func_02067df0(l34, a28);
        if (uVar6 > 0x2000) {
            bVar1 = 1;
        } else if (uVar6 < -0x2000) {
            bVar9 = 1;
        }
    }

    seed = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = seed;
    uVar6 = (u16)((((u32)(u16)seed) * 30u) >> 16);
    if (uVar6 == 0) goto c0;
    if (uVar6 == 1) goto c1;
    if (uVar6 == 2) {
        *(u16 *)(param_1 + 0x12e) = 0xfc00;
    }
    goto join;
c0:
    *(u16 *)(param_1 + 0x12e) = 0;
    goto join;
c1:
    *(u16 *)(param_1 + 0x12e) = 0x400;
join:
    func_0209bf30(param_1 + 0x95c, 39);
    *(s32 *)(param_1 + 0x48c) = *(s32 *)(param_1 + 0x48c) - 1;
    if (func_ov003_02197dd8(param_1) != 0) {
        return;
    }
    if (func_020bc114() == 0) {
        func_02029504(param_1);
        func_020340f4(param_1);
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        return;
    }
    if (*(s32 *)(param_1 + 0x48c) <= 0) {
        func_02027e64(param_1, 5, 25);
        func_0203e908(param_1, 0x415);
        return;
    }
    if (bVar1) {
        func_0203e908(param_1, 0x417);
        return;
    }
    if (bVar9) {
        func_0203e908(param_1, 0x418);
        return;
    }
    if (param_2 == 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 0x416);
    }
}
