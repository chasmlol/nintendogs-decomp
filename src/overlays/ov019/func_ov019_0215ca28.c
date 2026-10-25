#include "ctx.h"

extern void func_0200b644(int *a, int *b, int *c, u32 *d, u32 *e);

void func_ov019_0215ca28(int param_1, int *param_2)
{
    u32 pad;
    u32 arr[6];

    if (param_1 != 0) {
        arr[0] = 0;
        arr[4] = 0x1000;
        arr[1] = 0;
        arr[2] = 0;
        arr[3] = 0;
        arr[5] = 0;
        func_0200b644(param_2, (int *)(param_1 + 0x68), (int *)(param_1 + 0x5c), &arr[0], &arr[3]);
    }
}
