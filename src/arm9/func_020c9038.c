#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_01ffdb08(s32 a);
extern s32 func_020341fc(s32 a);
extern void func_02027668(s32 a, s32 *b);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern s32 func_0206787c(s32 a);

s32 func_020c9038(s32 *param_1)
{
    s32 aiStack_28[4];
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;

    iVar4 = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    iVar5 = 0;
    param_1[2] = 0;
    do {
        iVar3 = func_01ffdb08(iVar5);
        if (iVar3 != 0 && func_020341fc(iVar3) == 0) {
            func_02027668(iVar3, aiStack_28);
            func_02067e68(aiStack_28, param_1, param_1);
            iVar4 = iVar4 + 1;
        }
        iVar5 = (s16)(iVar5 + 1);
    } while (iVar5 < 3);
    if (iVar4 > 0) {
        iVar6 = func_0206787c(iVar4 << 12);
        param_1[0] = FX_Mul(param_1[0], iVar6);
        param_1[1] = FX_Mul(param_1[1], iVar6);
        param_1[2] = FX_Mul(param_1[2], iVar6);
    }
    return iVar4;
}
