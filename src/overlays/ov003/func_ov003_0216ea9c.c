#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern void func_02025490(u8 *p);

void func_ov003_0216ea9c(u8 *param_1)
{
    u32 flags;
    *(u16 *)(param_1 + 256 + 82) = 164;
    *(u16 *)(param_1 + 256 + 86) = 1;
    param_1[147] = 12;
    param_1[151] = 1;
    param_1[152] = 6;
    func_02026bac(param_1);
    func_02025490(param_1);
    flags = *(u32 *)(param_1 + 0x948);
    *(u32 *)(param_1 + 0x948) = flags | 0x10;
}
