#include "ctx.h"

void func_02026bac(u8 *a);
void func_02025548(u8 *a);
void func_0202db24(u8 *a, u32 b);

void func_ov003_0216cf20(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x22a;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
