#include "ctx.h"

extern int data_02155c5c;
extern int func_0207ce08(int *p);
extern u32 *func_0207ca60(int *p);
extern void func_0207ca80(int *p);

BOOL func_0207c910(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    int *piVar1;
    u32 *puVar3;

    piVar1 = &data_02155c5c;
    if (!func_0207ce08(piVar1)) {
        puVar3 = func_0207ca60(piVar1);
        puVar3[0] = param_1;
        puVar3[1] = param_3;
        puVar3[2] = param_2;
        puVar3[3] = param_4;
        func_0207ca80(piVar1);
        piVar1[4] = piVar1[4] + puVar3[3];
        return 1;
    }
    return 0;
}
