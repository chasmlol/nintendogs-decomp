#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u32 func_02035164(u8 *p);
extern void func_02026478(u8 *p);
extern void func_020256a0(u8 *p);

void func_0205941c(u8 *param_1)
{
    u32 uVar1;
    u32 *q;
    u32 v;

    *(u16 *)(param_1 + 256 + 82) = 0xf1;
    uVar1 = func_02035164(param_1);
    *(u16 *)(param_1 + 256 + 88) = (u16)uVar1;
    param_1[147] = 5;
    param_1[151] = 1;
    func_02026478(param_1);
    func_020256a0(param_1);
    q = data_0214f464;
    v = *q * 0x10dcd + 1;
    *q = v;
    *(u32 *)(param_1 + 0x464) = (u16)((v << 16) >> 31);
}
