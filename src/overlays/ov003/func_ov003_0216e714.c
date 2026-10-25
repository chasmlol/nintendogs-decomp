#include "ctx.h"
extern void func_02026c24(u8 *p);
extern void func_02025ae0(u8 *p);
void func_ov003_0216e714(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x84;
    func_02026c24(param_1);
    func_02025ae0(param_1);
}
