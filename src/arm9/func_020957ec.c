#include "ctx.h"

void func_020959a0(u32 a, u32 b, u32 c);

void func_020957ec(u32 param_1)
{
    u16 i;
    u16 a = (u16)param_1;
    func_020959a0(1, a, 0);
    i = 0;
    do {
        func_020959a0(2, a, i);
        i = (u16)(i + 1);
    } while (i < 20);
}
