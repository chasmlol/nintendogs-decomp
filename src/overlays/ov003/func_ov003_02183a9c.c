#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

static inline void SwapB(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); }

extern u8 *data_0214f460;

extern void func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u8 *g, u8 *p, s32 v);
extern s32 func_0202dddc(u8 *p);
extern void func_ov003_0218bc08(u8 *p, s32 a);
extern void func_0202f9b4(u8 *p);
extern void func_0202f8c8(u8 *p);
extern void func_0202f7d8(u8 *p);
extern void func_0202f6ec(u8 *p);
extern void func_0202f5fc(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_02183a9c(u8 *param_1, s32 param_2, s16 param_3, s32 param_4, s16 param_5, s32 param_6)
{
    s32 r;
    s32 a1;
    s32 a2;

    func_02024d40(param_1, param_4, param_5, param_6);
    a1 = func_02028130(param_1);
    a2 = func_02028130(param_1);
    r = func_020aaf38(data_0214f460, param_1 + 888, FX_Mul(FX_Mul(a2, a1), 4100));
    if (r != 0) {
        goto Z0;
    }
    a1 = func_02028130(param_1);
    a2 = func_02028130(param_1);
    r = func_020aaf38(data_0214f460, param_1 + 900, FX_Mul(FX_Mul(a2, a1), 5330));
    if (r != 0) {
        goto Z0;
    }
    a1 = func_02028130(param_1);
    a2 = func_02028130(param_1);
    r = func_020aaf38(data_0214f460, param_1 + 840, FX_Mul(FX_Mul(a2, a1), 5330));
    if (r == 0) {
        goto F1;
    }
Z0:
    *(s16 *)(param_1 + 0x11c) = 0;
    *(s16 *)(param_1 + 0x11e) = 1;
    goto flag;
F1:
    *(s16 *)(param_1 + 0x11c) = 1;
    *(s16 *)(param_1 + 0x11e) = 0;
flag:
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        SwapB(1, (vu8 *)(param_1 + 185));
    } else {
        SwapB(0, (vu8 *)(param_1 + 185));
    }
    a1 = func_0202dddc(param_1);
    func_ov003_0218bc08(param_1, a1);
    switch (param_2) {
    case 1:
        func_0202f9b4(param_1);
        break;
    case 2:
        func_0202f8c8(param_1);
        break;
    case 3:
        func_0202f7d8(param_1);
        break;
    case 4:
        func_0202f6ec(param_1);
        break;
    case 5:
        func_0202f5fc(param_1);
        break;
    default:
        break;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, param_3);
    }
}
