#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02020824(u8 *p);
extern void func_020264f4(u8 *p);
extern u8 func_02025860(u8 *p);

u8 func_ov003_0216cd04(u8 *param_1)
{
    u32 iVar2;

    *(u16 *)(param_1 + 0x152) = 0;
    iVar2 = func_02020824(param_1);
    *(u16 *)(param_1 + 0x154) = (u16)iVar2;
    param_1[151] = 4;
    func_020264f4(param_1);
    return func_02025860(param_1);
}
