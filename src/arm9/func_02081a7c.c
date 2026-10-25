#include "ctx.h"

extern u32 data_0213e778;

typedef u32 (*Fn3)(u32, u32, u32);

u32 func_02081a7c(u32 param_1, u32 param_2)
{
    u32 r = ((Fn3)(*(u32 *)&data_0213e778))(param_1, param_2, 0);
    return (r & 0xffff) << 3;
}
