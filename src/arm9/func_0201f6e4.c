#include "ctx.h"

void func_02026c24(u8 *p);
u8 func_02025a84(u8 *p);
void func_02023654(u8 *p, u32 a, u32 b);

void func_0201f6e4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x40;
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_02023654(param_1, 48, 1);
}
