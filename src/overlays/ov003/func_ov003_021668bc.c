#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02020768(u8 *p);

void func_ov003_021668bc(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x189;
    param_1[147] = 14;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
