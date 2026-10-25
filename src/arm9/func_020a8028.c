#include "ctx.h"

extern u16 *data_0215942c;
void func_020a85c4(u16 *p, u32 v);

void func_020a8028(u16 param_1, u16 param_2, u16 param_3)
{
    u16 *p = data_0215942c;
    func_020a85c4(p, 0xc002);
    p[2] = param_1;
    p[3] = param_2;
    p[4] = param_3;
}
