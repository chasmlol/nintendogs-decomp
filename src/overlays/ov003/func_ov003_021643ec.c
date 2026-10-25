#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020382d8(u8 *p);
extern void func_02026994(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_ov003_02164558(u8 *p);

void func_ov003_021643ec(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = func_020382d8(param_1);
    param_1[147] = 5;
    param_1[152] = 9;
    func_02026994(param_1);
    func_02025bb0(param_1);
    func_ov003_02164558(param_1);
}
