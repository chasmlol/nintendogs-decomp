#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 *data_027c0360;
extern s16 data_02126868[];
extern s32 func_ov004_0216e508(s32 a);
extern void func_020d345c(u8 *p, u32 a, s32 *out);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067c30(s32 *a);
extern s32 func_02028130(s32 a);
extern s32 func_0206782c(s32 a);
extern s32 func_02067e9c(s32 a, s32 b);
extern void func_01ff8000(s32 *o, s32 a, s32 b);
extern void func_01ff8020(s32 *o, s32 a, s32 b);
extern void func_01ff803c(s32 *o, s32 a, s32 b);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
extern void func_02066c08(s32 *o, s32 a, s32 b, s32 c);
extern void func_0206c8d4(s32 *a, s32 *b);

void func_ov004_0216f9e4(u32 param_1, s32 *param_2, s32 param_3)
{
    u8 *obj;
    s32 n[3];
    s32 t12[12];
    s32 t60[12];
    s32 c4[3];
    s32 cb8[3];
    s32 t132[12];
    s32 t180[12];
    s32 t228[12];
    s32 iv;
    s32 r7;
    s32 r6;
    u32 q5;
    s32 uv6;
    s32 uv8;
    s32 uv10;
    s32 ta;
    s32 hi;
    s32 idx;

    obj = data_027c0360;
    iv = func_ov004_0216e508(*(s16 *)(obj + 0xdc));
    func_020d345c(obj + 0x88, param_3, c4);
    func_020d345c(obj + 0x88, param_3 + 1, cb8);
    func_02067e34(cb8, c4, n);
    r7 = func_02067c30(n);
    if (iv != 0) {
        s32 fx = func_02028130(iv);
        r6 = FX_Mul(fx, 0xc00);
    } else {
        r6 = 0xc00;
    }
    ta = FX_Mul(n[2], n[2]) + FX_Mul(n[0], n[0]);
    iv = func_0206782c(ta);
    uv6 = func_02067e9c(n[1], iv);
    hi = (s32)(((s64)uv6 * 0x28be60db9391LL + ((s64)0x800 << 32)) >> 32);
    q5 = (u16)(0 - (((u32)hi << 4) >> 16));
    uv8 = func_02067e9c(n[0], n[2]);
    hi = (s32)(((s64)uv8 * 0x28be60db9391LL + ((s64)0x800 << 32)) >> 32);
    uv8 = (s32)(((u32)hi << 4) >> 16);
    if (n[1] > 0) {
        uv10 = -uv8;
    } else {
        uv10 = uv8;
    }
    idx = (s32)q5 >> 4;
    func_01ff8000(t132, data_02126868[idx * 2], data_02126868[idx * 2 + 1]);
    func_01ff8020(t180, data_02126868[(uv8 >> 4) * 2], data_02126868[(uv8 >> 4) * 2 + 1]);
    idx = (s32)((u16)uv10) >> 4;
    func_01ff803c(t228, data_02126868[idx * 2], data_02126868[idx * 2 + 1]);
    func_01ff810c(t132, t180, t12);
    func_01ff810c(t228, t12, t12);
    func_02066c08(t60, r6, r6, FX_Mul(r7, 0x800));
    func_0206c8d4(t12, param_2);
    func_01ff810c(t60, param_2, param_2);
    {
        s32 e2 = c4[2];
        s32 e1 = c4[1];
        s32 e0 = c4[0];
        param_2[9] = e0;
        param_2[10] = e1;
        param_2[11] = e2;
    }
}
