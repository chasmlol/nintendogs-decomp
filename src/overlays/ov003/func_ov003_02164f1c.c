#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02035164(u8 *p);
extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_02164f1c(u8 *param_1)
{
    u32 uVar1;
    *(u16 *)(param_1 + 256 + 82) = 0x162;
    uVar1 = func_02035164(param_1);
    *(u16 *)(param_1 + 256 + 88) = (u16)uVar1;
    param_1[147] = 5;
    param_1[151] = 2;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
}
