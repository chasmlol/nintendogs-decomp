#include "ctx.h"

extern void func_020c5b00(u32 a, u32 b, u32 c);

void func_020c5a80(u32 param_1, u32 param_2)
{
    ((void (*)(u32, u32, u32))func_020c5b00)(param_1, param_2, 7);
}
