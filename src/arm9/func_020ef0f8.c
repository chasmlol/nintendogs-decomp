#include "ctx.h"

extern void func_020bdd1c(u32 a, u32 b);
extern void func_020ef128(u32 a, u32 *b);

void func_020ef0f8(u32 param_1, u32 *param_2)
{
    func_020bdd1c(param_1, 0x46);
    func_020ef128(param_1, param_2);
}
