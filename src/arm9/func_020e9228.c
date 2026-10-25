#include "ctx.h"

extern u32 data_0215be34;
void func_020038b8(u32 a, u32 b);

void func_020e9228(u32 param_1)
{
    void (*fp)(u32, u32) = func_020038b8;
    fp(*(u32 *)(*(u32 *)&data_0215be34 + 8), param_1);
}
