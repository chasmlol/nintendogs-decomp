#include "ctx.h"

extern s32 func_02067c30(s32 *p);
extern s32 func_02067898(s32 a, s32 b);

void func_020d90d4(s32 *param_1, s32 param_2)
{
    s32 iVar2;

    iVar2 = func_02067c30(param_1);
    if (param_2 < iVar2) {
        iVar2 = func_02067898(param_2, iVar2);
        param_1[0] = (s32)(((s64)param_1[0] * (s64)iVar2 + 0x800) >> 12);
        param_1[1] = (s32)(((s64)param_1[1] * (s64)iVar2 + 0x800) >> 12);
        param_1[2] = (s32)(((s64)param_1[2] * (s64)iVar2 + 0x800) >> 12);
    }
}
