#include "ctx.h"

u32 func_02035584(u8 *a, u32 b);
void func_02022b7c(u8 *a);
void func_ov003_021894ec(u8 *a, u32 b, u32 c, u32 d);

void func_ov003_02189200(u8 *param_1)
{
    u32 v = func_02035584(param_1, 1);
    func_02022b7c(param_1);
    func_ov003_021894ec(param_1, 7, 127, v);
}
