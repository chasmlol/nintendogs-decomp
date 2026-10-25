#pragma avoid_byte strb
#include "ctx.h"

void func_02025dd4(u8 *p);
void func_02025490(u8 *p);

void func_ov003_02164274(u8 *param_1)
{
    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x15a;
    *(u16 *)((u8 *)param_1 + 256 + 86) = 1;
    param_1[147] = 18;
    param_1[151] = 1;
    param_1[158] = 2;
    func_02025dd4(param_1);
    func_02025490(param_1);
    *(u32 *)(param_1 + 0x948) = *(u32 *)(param_1 + 0x948) | 4;
}
