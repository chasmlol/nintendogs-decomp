#include "ctx.h"

extern u32 *data_ov006_021661c0;
void func_0207df9c(u32 a, u32 b, u32 c, u32 d);

void func_ov006_02164708(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    func_0207df9c(((u32 *)data_ov006_021661c0)[10], param_2, param_3, param_4);
    ((u32 *)data_ov006_021661c0)[10] = 0;
    data_ov006_021661c0 = 0;
}
