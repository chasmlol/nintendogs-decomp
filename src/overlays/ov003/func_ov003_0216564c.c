#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025d70(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_0216564c(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0;
    *(u16 *)(param_1 + 256 + 86) = 4;
    param_1[147] = 4;
    param_1[152] = 6;
    param_1[151] = 5;
    func_02025d70(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
}
