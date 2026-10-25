#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_0214f460;

extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u8 *g, u8 *p, s32 v);
extern s32 func_0202dddc(u8 *p);
extern void func_ov003_0218bc08(u8 *p, u32 a);
extern void func_0202f9b4(u8 *p);
extern s32 func_0203646c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02177624(u8 *p)
{
    s32 v1;
    s32 v2;
    s32 r;

    v1 = func_02028130(p);
    v2 = func_02028130(p);
    r = func_020aaf38(data_0214f460, p + 888, FX_Mul(FX_Mul(v2, v1), 0x1004u));
    if (r != 0)
        goto fail;
    v1 = func_02028130(p);
    v2 = func_02028130(p);
    r = func_020aaf38(data_0214f460, p + 900, FX_Mul(FX_Mul(v2, v1), 0x14d2u));
    if (r != 0)
        goto fail;
    v1 = func_02028130(p);
    v2 = func_02028130(p);
    r = func_020aaf38(data_0214f460, p + 840, FX_Mul(FX_Mul(v2, v1), 0x14d2u));
    if (r == 0)
        goto succ;
fail:
    *(s16 *)((u8 *)p + 256 + 28) = 0;
    *(s16 *)((u8 *)p + 256 + 30) = 1;
    goto flag;
succ:
    *(s16 *)((u8 *)p + 256 + 28) = 1;
    *(s16 *)((u8 *)p + 256 + 30) = 0;
flag:
    if (*(u16 *)((u8 *)p + 256 + 28) == 0) {
        ((u8 *)p)[185] = 1;
    } else {
        ((u8 *)p)[185] = 0;
    }
    r = func_0202dddc(p);
    func_ov003_0218bc08(p, r);
    func_0202f9b4(p);
    if (*(s8 *)(p + 161) == 0) {
        func_0203e908(p, 236);
        return;
    }
    if (func_0203646c(p) != 0)
        return;
    func_0203e908(p, 236);
}
