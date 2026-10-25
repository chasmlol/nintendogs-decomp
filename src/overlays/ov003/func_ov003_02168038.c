#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov003_02168038(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 252;
    param_1[147] = 10;
    param_1[151] = 1;
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
