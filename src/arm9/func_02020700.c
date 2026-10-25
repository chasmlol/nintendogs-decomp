#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);

u8 func_02020700(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 39;
    param_1[147] = 10;
    func_02026c24(param_1);
    return func_02025a84(param_1);
}
