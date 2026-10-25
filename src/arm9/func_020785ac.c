#include "ctx.h"

u32 func_020785ac(u32 param_1, u32 param_2)
{
    return param_1 + *(u16 *)(param_1 + 8) + (param_2 << 4);
}
