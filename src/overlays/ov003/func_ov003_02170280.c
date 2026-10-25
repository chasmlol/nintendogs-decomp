#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202687c(u8 *p);
extern void func_02025b30(u8 *p);
extern void func_020340f4(u8 *p);

void func_ov003_02170280(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 22;
    param_1[147] = 5;
    param_1[152] = 1;
    func_0202687c(param_1);
    func_02025b30(param_1);
    func_020340f4(param_1);
}
