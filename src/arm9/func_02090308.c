#include "ctx.h"

extern void *func_02090374(int a, u32 b, int *c, int d, void *e, int f);

int func_02090308(int param_1, short *param_2, int param_3, void *param_4)
{
    int iVar1;
    int local_20;

    iVar1 = 0;
    local_20 = 0;
    if (param_2 != (short *)0) {
        do {
            param_2 = (short *)func_02090374(param_1, (u32)param_2, &local_20, param_3, param_4, 0);
            if (iVar1 < local_20) {
                iVar1 = local_20;
            }
        } while (param_2 != (short *)0);
    }
    return iVar1;
}
