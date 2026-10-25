#include "ctx.h"

void func_ov019_02160a08(int param_1)
{
    vu32 *p = (vu32 *)param_1;
    **(u32 **)(param_1 + 0xac) = 1;
    *(u32 *)(p[43] + 4) = 1;
}
