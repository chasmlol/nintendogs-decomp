#include "ctx.h"

void func_02026bac(u32 p);
void func_02025548(u32 p);
void func_0202db24(u32 p, u32 b);

void func_ov003_0216ceec(u32 param_1)
{
    *(u16 *)(param_1 + 0x152) = 572;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
