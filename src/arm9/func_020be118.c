#include "ctx.h"

extern void *data_0215946c;
void func_020cdb74(int *a, int *b, int *c, u16 *d, u16 *e);

void func_020be118(int *param_1)
{
    short *psVar1;
    u16 sStack_24;
    u16 local_22;
    int aiStack_20[5];

    psVar1 = (short *)data_0215946c;
    aiStack_20[1] = 0;
    aiStack_20[2] = 0;
    aiStack_20[3] = 0;
    func_020cdb74(param_1, aiStack_20 + 1, aiStack_20, &sStack_24, &local_22);
    *psVar1 = local_22;
    *(int *)(psVar1 + 2) = param_1[1];
    psVar1[4] = 0;
}
