#include "ctx.h"

extern void func_02067d04(u32 *a, u32 *b, u32 *c);
extern void func_01ff89d0(u32 *a);

static inline u32 Lerp(u32 a, u32 b, s32 t)
{
    s32 d = (s32)(b - a);
    s64 v = (s64)d * t + 0x800;
    return a + (u32)(v >> 12);
}

void func_ov019_0215dfec(u32 *param_1, u32 *param_2, u32 *param_3, s32 param_4)
{
    u32 a[9];

    a[0] = Lerp(param_1[0], param_2[0], param_4);
    a[1] = Lerp(param_1[1], param_2[1], param_4);
    a[2] = Lerp(param_1[2], param_2[2], param_4);
    a[3] = Lerp(param_1[3], param_2[3], param_4);
    a[4] = Lerp(param_1[4], param_2[4], param_4);
    a[5] = Lerp(param_1[5], param_2[5], param_4);
    func_02067d04(a, a + 3, a + 6);
    func_02067d04(a + 6, a, a + 3);
    func_01ff89d0(a);
    func_01ff89d0(a + 3);
    func_01ff89d0(a + 6);
    param_3[0] = a[0];
    param_3[1] = a[1];
    param_3[2] = a[2];
    param_3[3] = a[3];
    param_3[4] = a[4];
    param_3[5] = a[5];
    param_3[6] = a[6];
    param_3[7] = a[7];
    param_3[8] = a[8];
}
