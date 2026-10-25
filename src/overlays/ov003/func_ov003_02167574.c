#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025a84(u8 *p);
extern void func_02020768(u8 *p);

void func_ov003_02167574(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0xcd;
    func_02026bac(param_1);
    func_02025a84(param_1);
    func_02020768(param_1);
}
