#include "ctx.h"

extern u32 data_0215919c;
void func_02070938(u32 a, u32 b);

void func_0209e9f8(u32 param_1)
{
    void (*fp)(u32, u32) = func_02070938;
    fp((u32)&data_0215919c, param_1);
}
