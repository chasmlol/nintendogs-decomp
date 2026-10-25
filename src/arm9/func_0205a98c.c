#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020382d8(u8 *p);
extern void func_02026994(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

void func_0205a98c(u8 *param_1)
{
    u32 uVar1;

    uVar1 = func_020382d8(param_1);
    *(u16 *)(param_1 + 0x152) = (u16)uVar1;
    param_1[147] = 5;
    param_1[152] = 9;
    func_02026994(param_1);
    func_02025bb0(param_1);
    func_02023654(param_1, 0x3e, 1);
}
