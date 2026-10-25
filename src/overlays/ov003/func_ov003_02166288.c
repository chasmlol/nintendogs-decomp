#pragma avoid_byte strb
#include "ctx.h"
extern u16 func_02035164(u8 *p);
extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);
void func_ov003_02166288(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x111;
    *(u16 *)(param_1 + 0x158) = func_02035164(param_1);
    param_1[147] = 5;
    param_1[151] = 1;
    param_1[152] = 1;
    func_02026bac(param_1);
    func_02025548(param_1);
    param_1[178] = 1;
}
