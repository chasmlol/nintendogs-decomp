#include "ctx.h"

void func_02026bac(u8 *p);
u32 func_02025548(u8 *p);
void func_0202db24(u8 *p, u32 n);

void func_ov003_0216cfc4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x216;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
