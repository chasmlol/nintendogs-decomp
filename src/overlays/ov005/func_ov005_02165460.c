#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_02020824(u8 *p);
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_02165460(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 45;
    *(s16 *)(param_1 + 256 + 84) = (s16)func_02020824(param_1);
    param_1[151] = 4;
    func_020264f4(param_1);
    return func_020255a4(param_1);
}
