#pragma avoid_byte strb
#include "ctx.h"

void func_02026bac(u8 *p);
void func_02025548(u8 *p);

void func_ov003_0216fb14(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 344;
    *(u16 *)(param_1 + 256 + 84) = 21;
    *(u16 *)(param_1 + 256 + 86) = 1;
    param_1[147] = 10;
    param_1[152] = 1;
    param_1[151] = 1;
    func_02026bac(param_1);
    func_02025548(param_1);
    *(u32 *)(param_1 + 0x948) |= 8;
}
