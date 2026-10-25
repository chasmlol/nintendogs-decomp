#include "ctx.h"

extern u32 *func_020719dc(u32 a);
extern u32 func_02071778(u32 a);
extern u32 func_020726e0(u32 a, int *b, int c);

u32 func_02072a94(u32 param_1, u32 param_2, int *param_3, int param_4, u32 *param_5)
{
    u32 *puVar1;
    u32 uVar2;

    puVar1 = func_020719dc(param_1);
    if (puVar1 == (u32 *)0) {
        return 3;
    }
    if ((param_2 & 8) != 0) {
        uVar2 = func_020726e0(*puVar1, param_3, param_4);
        if (uVar2 == 0) {
            return 7;
        }
    }
    else {
        uVar2 = func_02071778(*puVar1);
    }
    if (param_5 != (u32 *)0) {
        *param_5 = uVar2;
    }
    return 0;
}
