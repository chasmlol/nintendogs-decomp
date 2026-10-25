#include "ctx.h"

extern void func_020bdd1c(u32, u32);
extern void func_020ee3f8(u32, u32, u32);

void func_020edfb4(u32 param_1, u32 param_2)
{
    func_020bdd1c(param_1, 100);
    func_020ee3f8(param_1, param_2, 3);
}
