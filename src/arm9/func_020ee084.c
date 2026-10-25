#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 a);
extern void func_020ee3f8(u8 *p, void *q, u32 a);

void func_020ee084(u8 *param_1, void *param_2)
{
    func_020bdd1c(param_1, 96);
    func_020ee3f8(param_1, param_2, 2);
}
