#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 data_0214f460;

extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(s32 a, u8 *b, s32 c);
extern s32 func_0202dddc(u8 *p);
extern void func_ov003_0218bc08(u8 *p, s32 a);
extern void func_0202f9b4(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_021817e8(u8 *p)
{
    s32 v1, v2, f, r;

    v1 = func_02028130(p);
    v2 = func_02028130(p);
    f = FX_Mul(v2, v1);
    if (func_020aaf38(data_0214f460, p + 888, FX_Mul(f, 4100)) != 0) {
        goto flag1;
    }
    v1 = func_02028130(p);
    v2 = func_02028130(p);
    f = FX_Mul(v2, v1);
    if (func_020aaf38(data_0214f460, p + 900, FX_Mul(f, 5330)) != 0) {
        goto flag1;
    }
    v1 = func_02028130(p);
    v2 = func_02028130(p);
    f = FX_Mul(v2, v1);
    if (func_020aaf38(data_0214f460, p + 840, FX_Mul(f, 5330)) == 0) {
        goto flag0;
    }
flag1:
    *(u16 *)(p + 284) = 0;
    *(u16 *)(p + 286) = 1;
    goto after;
flag0:
    *(u16 *)(p + 284) = 1;
    *(u16 *)(p + 286) = 0;
after:
    if (*(u16 *)(p + 284) == 0) {
        *(u8 *)(p + 185) = 1;
    } else {
        *(u8 *)(p + 185) = 0;
    }
    r = func_0202dddc(p);
    func_ov003_0218bc08(p, r);
    func_0202f9b4(p);
    if (func_0203567c(p) == 0) {
        return;
    }
    func_0203e908(p, 236);
}
