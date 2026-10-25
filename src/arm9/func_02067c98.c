#include "ctx.h"

void func_02067c98(s16 *param_1, s16 *param_2, s16 *param_3)
{
    s32 sVar1;
    s32 sVar2;
    s32 sVar3;
    s32 sVar4;
    s32 sVar5;
    s32 sVar6;
    sVar1 = param_2[2];
    sVar3 = param_1[0];
    sVar2 = param_1[1];
    sVar4 = param_2[1];
    sVar5 = param_1[2];
    sVar6 = param_2[0];
    param_3[0] = (s16)((sVar2 * sVar1 - sVar5 * sVar4 + 0x800) >> 12);
    param_3[1] = (s16)((sVar5 * sVar6 - sVar3 * sVar1 + 0x800) >> 12);
    param_3[2] = (s16)((sVar3 * sVar4 - sVar2 * sVar6 + 0x800) >> 12);
}
