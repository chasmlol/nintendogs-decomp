#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02067e34(u8 *a, u8 *b, s32 *c);
s32 func_02067c30(s32 *v);
s32 func_0206782c(s32 v);
s32 func_02068078(s32 a, s32 b);

void func_020cdb74(u8 *param_1, u8 *param_2, s32 *param_3, s16 *param_4, s16 *param_5)
{
    s32 v[3];
    s32 iVar4;
    s16 sVar3;

    func_02067e34(param_1, param_2, v);
    iVar4 = func_02067c30(v);
    *param_3 = iVar4;
    iVar4 = func_0206782c(FX_Mul(v[0], v[0]) + FX_Mul(v[2], v[2]));
    sVar3 = (s16)func_02068078(v[1], iVar4);
    *param_4 = sVar3;
    sVar3 = (s16)func_02068078(v[0], v[2]);
    *param_5 = sVar3;
}
