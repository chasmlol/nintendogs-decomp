#include "ctx.h"

void func_020c79b8(int a, u32 b, u32 c);

void func_020dadb8(int param_1, u32 param_2)
{
    void (*fp)(int, u32, u32) = func_020c79b8;
    fp(param_1, param_2, *(u32 *)(**(u32 **)(param_1 + 0x214) + 0xc));
}
