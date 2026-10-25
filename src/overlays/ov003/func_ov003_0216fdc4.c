#include "ctx.h"

void func_02026c24(u8 *a);
void func_02025548(u8 *a);

void func_ov003_0216fdc4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x17b;
    *(u16 *)(param_1 + 0x156) = 1;
    func_02026c24(param_1);
    func_02025548(param_1);
    *(u32 *)(param_1 + 0x948) |= 1;
}
