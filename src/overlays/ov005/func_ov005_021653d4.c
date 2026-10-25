#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020207cc(u8 *p);
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_021653d4(u8 *param_1)
{
    u32 r;
    *(u16 *)(param_1 + 0x152) = 45;
    param_1[147] = 9;
    r = func_020207cc(param_1);
    param_1[143] = (u8)r;
    param_1[151] = 1;
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
