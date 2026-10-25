#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);

void func_ov003_0216fc3c(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 392;
    *(u16 *)(param_1 + 256 + 86) = 1;
    param_1[147] = 5;
    func_02026c24(param_1);
    func_02025548(param_1);
    *(s32 *)(param_1 + 0x464) = 0x1000;
}
