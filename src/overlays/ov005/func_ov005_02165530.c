#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_02165530(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 45;
    *(u16 *)(param_1 + 0x156) = 16;
    param_1[147] = 9;
    param_1[152] = 9;
    param_1[151] = 1;
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
