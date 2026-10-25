#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_0214f460;

extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u8 *g, u8 *p, s32 v);
extern s32 func_0202dddc(u8 *p);
extern void func_ov003_0218bc08(u8 *p, s32 a);
extern void func_0202f9b4(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02181e98(u8 *p)
{
    s32 r;
    s32 a1;
    s32 a2;
    s32 v;
    s32 iv;

    a1 = func_02028130(p);
    a2 = func_02028130(p);
    v = FX_Mul(a2, a1);
    r = func_020aaf38(data_0214f460, p + 888, FX_Mul(v, 4100));
    if (r != 0) goto fail;
    a1 = func_02028130(p);
    a2 = func_02028130(p);
    v = FX_Mul(a2, a1);
    r = func_020aaf38(data_0214f460, p + 900, FX_Mul(v, 5330));
    if (r != 0) goto fail;
    a1 = func_02028130(p);
    a2 = func_02028130(p);
    v = FX_Mul(a2, a1);
    r = func_020aaf38(data_0214f460, p + 840, FX_Mul(v, 5330));
    if (r == 0) goto ok;
fail:
    *(s16 *)(p + 0x11c) = 0;
    *(s16 *)(p + 0x11e) = 1;
    goto flag;
ok:
    *(s16 *)(p + 0x11c) = 1;
    *(s16 *)(p + 0x11e) = 0;
flag:
    if (*(u16 *)(p + 0x11c) == 0) {
        *(u8 *)(p + 185) = 1;
    } else {
        *(u8 *)(p + 185) = 0;
    }
    iv = func_0202dddc(p);
    func_ov003_0218bc08(p, iv);
    func_0202f9b4(p);
    if (func_0203567c(p) != 0) {
        func_0203e908(p, 237);
    }
}
