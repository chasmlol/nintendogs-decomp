#include "ctx.h"

extern void func_02072448(u32 a, u32 b, u32 c);
extern void func_020896c8(u32 a, u32 b);
extern void func_0208ad98(u32 a);

void func_0207239c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    func_02072448(param_1, param_3, param_4);
    func_020896c8(param_1, param_1 + param_2);
    func_0208ad98(param_1);
}
