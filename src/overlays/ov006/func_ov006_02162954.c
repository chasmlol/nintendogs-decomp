#include "ctx.h"

extern u8 *data_ov006_021661c0;
extern void func_0200c498(u32 a, s32 b);

u32 func_ov006_02162954(s32 param_1, s32 param_2)
{
    u8 *e;
    func_0200c498(2, param_1);
    e = *(u8 **)(data_ov006_021661c0 + param_1 * 4 + 0x68);
    return *(u32 *)(*(u8 **)(e + 0x2c) + param_2 * 4 + 0x3c);
}
