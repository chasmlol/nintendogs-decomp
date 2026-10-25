#include "ctx.h"

extern s32 *func_0208a1a4(s32 a);
extern void func_0208a15c(s32 *p);

void func_020895a8(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    s32 *piVar1;

    piVar1 = func_0208a1a4(1);
    if (piVar1 != NULL) {
        piVar1[1] = param_1;
        piVar1[2] = param_2;
        piVar1[3] = param_3;
        piVar1[4] = param_4;
        piVar1[5] = param_5;
        func_0208a15c(piVar1);
        return;
    }
    return;
}
