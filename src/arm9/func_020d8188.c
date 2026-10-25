#include "ctx.h"

extern void func_020d055c(u32 a, u32 b);

void func_020d8188(u32 param_1, u8 param_2)
{
    ((void (*)(u32, u32))func_020d055c)(param_1, (u8)(param_2 + 1));
}
