#include "ctx.h"

extern void func_020c7544(int a, int *b, u32 *c, int d, int e, int f);

void func_020e35d8(int param_1, int *param_2, u32 *param_3)
{
    int *piVar1;

    piVar1 = *(int **)(param_1 + 0x214);
    func_020c7544(param_1, param_2, param_3, *(int *)(*piVar1 + 4), *(int *)(*piVar1 + 0x10), 0);
    if (*(int *)(param_1 + 0xb4) < 0x148) {
        piVar1[4] = 1;
        if (*(int *)(param_1 + 0xd8) >= 0xe6a) {
            piVar1[5] = 1;
        }
        return;
    }
    return;
}
