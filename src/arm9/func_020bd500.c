#include "ctx.h"

extern u8 *data_02159468;

void func_020bd500(u32 param_1, u32 param_2)
{
    *(vu32 *)(data_02159468 + 0x30) = param_1;
    *(vu32 *)(data_02159468 + 0x34) = param_2;
}
