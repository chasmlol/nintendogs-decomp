#include "ctx.h"

extern u32 data_0213e4dc;
extern void func_0206c360(u32 a, u32 b, u32 c, u32 d);
extern void func_0206c804(u32 a, u32 b, u32 c);

#pragma opt_propagation off
void func_0206b5ec(u32 param_1, u32 param_2, u32 param_3)
{
    u32 k;
    u32 v;
    k = 0x6600000;
    v = *(u32 *)&data_0213e4dc;
    if (v != 0xffffffff && param_3 > 48) {
        func_0206c360(v, param_1, k + param_2, param_3);
        return;
    }
    func_0206c804(param_1, k + param_2, param_3);
}
