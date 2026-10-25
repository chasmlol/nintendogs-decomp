#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 data_02142a2c;
extern s16 data_02159478;
extern s32 data_02159488;
extern s32 data_02159484;
extern s32 data_021429f4;
extern s16 data_02126868[];

extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_02006a30(s32 *a, s32 *b);
extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02067288(s32 *a, s32 *b, s32 c, s32 d);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);

void func_020c3064(u8 *param_1)
{
    s32 *puVar8;
    s32 t0[3];
    s32 t1[3];
    s32 t2[3];
    s32 t3[13];
    s32 iv6;
    s32 iv7;
    s32 idx;
    s32 a6;
    s32 a7;
    s32 a8;
    s32 x3;
    s32 x2;
    s32 x1;
    s32 y7;
    s32 y6;
    s32 y3;
    s32 t01;

    puVar8 = *(s32 **)(param_1 + 0x214);
    *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + data_02142a2c;
    if (data_02159478 == 0) {
        puVar8[0] = puVar8[0] + FX_Mul(-data_02159488, puVar8[0]);
        *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) + FX_Mul(-data_02159484, *(s32 *)(param_1 + 0xb0));
        *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) + FX_Mul(-data_02159484, *(s32 *)(param_1 + 0xb8));
    }
    func_02067e68((s32 *)(param_1 + 0xbc), (s32 *)(param_1 + 0xb0), (s32 *)(param_1 + 0xbc));
    a8 = *(s32 *)(param_1 + 0xdc);
    a7 = *(s32 *)(param_1 + 0xd8);
    a6 = *(s32 *)(param_1 + 0xd4);
    t0[0] = a6;
    t0[1] = a7;
    t0[2] = a8;
    func_01ff832c(-data_021429f4, (s32 *)(param_1 + 0xb0), t0, t0);
    func_02006a30(t0, t0);
    iv6 = func_0206782c(FX_Mul(t0[0], t0[0]) + FX_Mul(t0[2], t0[2]));
    t01 = t0[1];
    if (iv6 > 409) {
        iv7 = func_02067898(t01, iv6);
        if (iv7 < puVar8[1]) {
            t0[1] = FX_Mul(iv6, puVar8[1]);
            func_02006a30(t0, t0);
        }
    }
    x3 = *(s32 *)(param_1 + 0xd0);
    x2 = *(s32 *)(param_1 + 0xcc);
    x1 = *(s32 *)(param_1 + 0xc8);
    t1[0] = x1;
    t1[1] = x2;
    t1[2] = x3;
    y7 = *(s32 *)(param_1 + 0xe8);
    y6 = *(s32 *)(param_1 + 0xe4);
    y3 = *(s32 *)(param_1 + 0xe0);
    t2[0] = y3;
    t2[1] = y6;
    t2[2] = y7;
    func_02067d04(t1, t0, t2);
    func_02006a30(t2, t2);
    func_02067d04(t0, t2, t1);
    func_02006a30(t1, t1);
    *(s32 *)(param_1 + 0xc8) = t1[0];
    *(s32 *)(param_1 + 0xcc) = t1[1];
    *(s32 *)(param_1 + 0xd0) = t1[2];
    *(s32 *)(param_1 + 0xd4) = t0[0];
    *(s32 *)(param_1 + 0xd8) = t0[1];
    *(s32 *)(param_1 + 0xdc) = t0[2];
    *(s32 *)(param_1 + 0xe0) = t2[0];
    *(s32 *)(param_1 + 0xe4) = t2[1];
    *(s32 *)(param_1 + 0xe8) = t2[2];
    idx = (s32)(((u32)((s32)(((s64)puVar8[0] * 0x28be60db9391LL + ((s64)0x800 << 32)) >> 32)) << 4) >> 16);
    idx = idx >> 4;
    func_02067288(t3, t0, data_02126868[idx * 2], data_02126868[idx * 2 + 1]);
    func_01ff810c((s32 *)(param_1 + 200), t3, (s32 *)(param_1 + 200));
}
