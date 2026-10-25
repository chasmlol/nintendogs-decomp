#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern void func_02067c98(s16 *a, s16 *b, s16 *c);
extern void func_0206799c(s16 *a, s16 *b);

void func_02084e30(s32 *param_1, s32 *param_2, u8 *param_3)
{
    s16 aLocal[3];

    func_02067c98((s16 *)(param_3 + 0x60), (s16 *)(param_3 + 0x66), aLocal);
    func_0206799c(aLocal, aLocal);
    param_1[0] = FX_Mul(param_2[2], aLocal[0]) + (FX_Mul(param_2[0], *(s16 *)(param_3 + 0x60)) + FX_Mul(param_2[1], *(s16 *)(param_3 + 0x66)));
    param_1[1] = FX_Mul(param_2[2], aLocal[1]) + (FX_Mul(param_2[0], *(s16 *)(param_3 + 0x62)) + FX_Mul(param_2[1], *(s16 *)(param_3 + 0x68)));
    param_1[2] = FX_Mul(param_2[2], aLocal[2]) + (FX_Mul(param_2[0], *(s16 *)(param_3 + 0x64)) + FX_Mul(param_2[1], *(s16 *)(param_3 + 0x6a)));
}
