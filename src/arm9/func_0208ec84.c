#include "ctx.h"

extern void func_02067e34(void *a, u8 *b, u32 *c);
extern u32 func_02067df0(u32 *a, u8 *b);

void func_0208ec84(u8 *param_1, void *param_2, u32 *param_3)
{
    u32 loc[3];
    func_02067e34(param_2, param_1 + 48, loc);
    param_3[0] = func_02067df0(loc, param_1 + 96);
    param_3[1] = func_02067df0(loc, param_1 + 84);
    param_3[2] = func_02067df0(loc, param_1 + 72);
}
