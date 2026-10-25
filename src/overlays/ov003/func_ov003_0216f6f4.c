#pragma avoid_byte strb
#include "ctx.h"
extern void func_02025df4(u8 *p);
extern void func_02025918(u8 *p);
void func_ov003_0216f6f4(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x149;
    param_1[147] = 5;
    func_02025df4(param_1);
    func_02025918(param_1);
    param_1[178] = 2;
}
