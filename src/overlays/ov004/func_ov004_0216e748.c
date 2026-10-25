#include "ctx.h"

extern int data_ov004_02170324;

void func_ov004_0216e748(u16 param_1)
{
    *(u16 *)(data_ov004_02170324 + 0x46) = param_1;
    *(u16 *)(*(int *)(data_ov004_02170324 + 8) + 0xdc) = param_1;
    *(u16 *)(*(int *)(data_ov004_02170324 + 0xc) + 0x88) = param_1;
}
