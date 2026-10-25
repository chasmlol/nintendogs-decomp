#include "ctx.h"
void func_020a7894(u16 *param_1)
{
    param_1[0] = 0;
    param_1[1] = (u16)0xffff;
    *(u32 *)(param_1 + 2) = 0;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 6) = 0;
    param_1[8] = 1;
}
