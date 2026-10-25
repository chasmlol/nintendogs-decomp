#include "ctx.h"

void func_02026c24(u8 *a);
void func_02025a84(u8 *a);
void func_02023654(u8 *a, u32 b, u32 c);

void func_0201f63c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 67;
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_02023654(param_1, 48, 4);
}
