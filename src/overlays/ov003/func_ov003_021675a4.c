#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_02020768(u8 *p);
void func_ov003_021675a4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xc4;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
