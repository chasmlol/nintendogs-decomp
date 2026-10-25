#include "ctx.h"

extern s32 func_01ffdb08(s32 idx);
extern void func_02027ee0(s32 p, s32 a, s32 b);
extern void func_02027f40(s32 p, s32 a, s32 b);

void func_020a38c0(s32 param_1)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;

    iVar1 = 10000;
    iVar3 = 0;
    do {
        iVar2 = func_01ffdb08(iVar3);
        if (iVar2 != 0) {
            if (param_1 == 2) {
                func_02027ee0(iVar2, param_1, 300);
            } else if (param_1 == 5) {
                func_02027f40(iVar2, param_1, iVar1);
            }
        }
        iVar3 = (s16)(iVar3 + 1);
    } while (iVar3 < 3);
}
