#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_02165110(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 9;
    *(u16 *)(param_1 + 256 + 86) = 4;
    param_1[147] = 3;
    param_1[152] = 1;
    func_02026bac(param_1);
    return func_020255a4(param_1);
}
