#include "ctx.h"

extern int data_02159074;
extern int data_0215907c;
extern void func_02071e34(int *a, int b);

u32 func_0209adc8(int param_1)
{
    int *piVar4;
    int iVar2;
    int iVar3;

    piVar4 = (int *)&data_02159074;
    iVar2 = (int)&data_0215907c;
    if (param_1 < 0) {
        goto zero;
    }
search:
    iVar3 = ((s16 *)iVar2)[param_1];
    if (iVar3 == -1) {
        goto dec;
    }
    func_02071e34((int *)*piVar4, iVar3);
    iVar3 = 0;
    if (0 < param_1) {
        do {
            if (((s16 *)iVar2)[iVar3] > ((s16 *)iVar2)[param_1]) {
                ((s16 *)iVar2)[iVar3] = -1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < param_1);
    }
    iVar3 = param_1 + 1;
    if (iVar3 < 5) {
        do {
            if (((s16 *)iVar2)[iVar3] > ((s16 *)iVar2)[param_1]) {
                ((s16 *)iVar2)[iVar3] = -1;
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
    }
    return 1;
dec:
    param_1 = param_1 - 1;
    if (param_1 >= 0) {
        goto search;
    }
zero:
    return 0;
}
