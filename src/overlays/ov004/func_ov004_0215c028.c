#include "ctx.h"

extern int data_ov004_02170320;

int func_ov004_0215c028(void)
{
    int a = *(int *)(data_ov004_02170320 + 0x24) / 2;
    int b = 50;
    if (a < 50) {
        b = a;
    }
    return *(int *)(*(int *)(data_ov004_02170320 + 0x36c4) + 0x2264) >= b;
}
