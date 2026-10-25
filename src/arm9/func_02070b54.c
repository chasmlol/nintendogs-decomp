#include "ctx.h"

void func_020703ec(u32 a);

void func_02070b54(u32 *param_1)
{
    void (*fp)(u32) = func_020703ec;
    fp(*param_1);
}
