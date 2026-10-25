#include "ctx.h"

void func_02088410(int *param_1)
{
    int v = param_1[0];
    int *n = (int *)param_1[1];
    if (v != 0) {
        *(int **)(v + 4) = n;
    }
    if (n != (int *)0) {
        *n = v;
    }
    param_1[0] = 0;
    param_1[1] = ((vu32 *)param_1)[0];
}
