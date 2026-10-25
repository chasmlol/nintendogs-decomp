#include "ctx.h"

extern u8 data_02159198[];
extern int data_0215919c;
void func_02070ac8(int *p, int a, int b);

u32 func_0209ea10(int param_1, int param_2)
{
    int iVar2;
    s16 *base;

    base = (s16 *)data_02159198;
    base[18] = (s16)param_1;
    if (data_0215919c != 0) {
        iVar2 = base[17] * param_1;
        func_02070ac8(&data_0215919c, iVar2 / 100, param_2);
        return 1;
    }
    return 0;
}
