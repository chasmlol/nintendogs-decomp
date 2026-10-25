#pragma avoid_byte strb
#include "ctx.h"

u16 func_02020894(u8 *p);
void func_020264f4(u8 *p);
u32 func_020255a4(u8 *p);

u32 func_ov005_021654a4(u8 *param_1)
{
    u32 iVar2;

    *(u16 *)(param_1 + 0x152) = 45;
    iVar2 = func_02020894(param_1);
    *(u16 *)(param_1 + 0x154) = (u16)iVar2;
    param_1[151] = 4;
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
