#include "ctx.h"

extern u32 func_01ffdb08(s32 idx);
extern s32 func_020341f0(u32 p);

u32 func_0211b190(s32 param_1)
{
    u32 uVar5;
    s16 iVar6;
    s16 iVar4;
    u32 iVar3;
    s16 old;

    uVar5 = 0;
    iVar6 = -1;
    iVar4 = 0;
top:
    iVar6 = (s16)(iVar6 + 1);
    goto check;
cont:
    iVar6 = (s16)(iVar6 + 1);
check:
    if (iVar6 < 3) {
        iVar3 = func_01ffdb08(iVar6);
        if (iVar3 == 0 || func_020341f0(iVar3) != 0) {
            goto cont;
        }
    }
    old = iVar4;
    iVar4 = (s16)(iVar4 + 1);
    if (old < param_1) {
        goto top;
    }
    if (iVar6 >= 3) {
        iVar6 = -1;
    }
    if (iVar6 >= 0) {
        uVar5 = func_01ffdb08(iVar6);
    }
    return uVar5;
}
