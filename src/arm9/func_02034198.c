#include "ctx.h"

extern u32 data_0214f460;
void func_020aadac(u32 a, s32 b);

void func_02034198(int param_1)
{
    void (*fp)(u32, s32) = func_020aadac;
    fp(data_0214f460, *(s8 *)(param_1 + 0x88));
}
