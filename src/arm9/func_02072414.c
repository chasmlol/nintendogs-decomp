#include "ctx.h"

void func_02072448(u32 a, u32 b, u32 c);
void func_02089720(u32 a, u32 b);

void func_02072414(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    func_02072448(param_1, param_3, param_4);
    func_02089720(param_1, param_1 + param_2);
}
