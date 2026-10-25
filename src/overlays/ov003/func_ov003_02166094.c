#pragma avoid_byte strb
#include "ctx.h"

extern u16 func_0203833c(void);
extern void func_02026bac(u8 *p);
extern u32 func_02025600(u8 *self);

u32 func_ov003_02166094(u8 *param_1)
{
    u16 t;
    t = func_0203833c();
    *(u16 *)(param_1 + 256 + 82) = t;
    param_1[147] = 5;
    func_02026bac(param_1);
    return func_02025600(param_1);
}
