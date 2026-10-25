#pragma avoid_byte strb
#include "ctx.h"

void func_02026bac(u8 *p);
u32 func_02025548(u8 *p);
void func_02020768(u8 *p);

void func_ov003_02166f20(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 78;
    *(u16 *)(param_1 + 0x154) = 26;
    *(u8 *)(param_1 + 0x93) = 5;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
