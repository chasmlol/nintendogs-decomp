#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern s32 data_021429d0;
extern s32 data_021429cc;
extern s32 data_021429c8;
extern s32 func_02067898(s32 a, s32 b);

u32 func_020c4500(s32 param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 d;

    iVar3 = data_021429d0;
    if (param_1 > iVar3) {
        return 0x1000;
    }
    iVar2 = data_021429cc;
    if (param_1 > iVar2) {
        iVar3 = func_02067898(0x1000 - data_021429c8, iVar3 - iVar2);
        d = param_1 - data_021429cc;
        return data_021429c8 + FX_Mul(d, iVar3);
    }
    if (param_1 > -iVar2) {
        iVar3 = func_02067898(data_021429c8, iVar2);
        return FX_Mul(param_1, iVar3);
    }
    if (param_1 > -iVar3) {
        iVar3 = func_02067898(0x1000 - data_021429c8, iVar3 - iVar2);
        d = param_1 + data_021429cc;
        return FX_Mul(d, iVar3) - data_021429c8;
    }
    return 0xfffff000;
}
