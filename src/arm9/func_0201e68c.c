#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_02035164(u8 *p);
extern void func_02026c24(u8 *p);
extern void func_02025a84(u8 *p);

void func_0201e68c(u8 *param_1)
{
    u32 uVar1;
    *(u16 *)(param_1 + 256 + 82) = 0x162;
    uVar1 = func_02035164(param_1);
    *(u16 *)(param_1 + 256 + 88) = (u16)uVar1;
    param_1[147] = 5;
    param_1[151] = 2;
    func_02026c24(param_1);
    func_02025a84(param_1);
    *(u32 *)(param_1 + 0x464) = 1;
}
