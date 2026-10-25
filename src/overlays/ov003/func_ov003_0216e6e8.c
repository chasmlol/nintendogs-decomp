#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025ae0(u8 *p);

void func_ov003_0216e6e8(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x153;
    func_02026bac(param_1);
    func_02025ae0(param_1);
}
