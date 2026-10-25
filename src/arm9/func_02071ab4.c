#include "ctx.h"

extern u32 data_02152260;

u32 func_02071ab4(u32 param_1)
{
    u32 old = data_02152260;
    data_02152260 = param_1;
    return old;
}
