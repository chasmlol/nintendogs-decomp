#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 v);

void func_ov003_02168f88(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x1c6;
    *(u16 *)(param_1 + 256 + 86) = 6;
    param_1[151] = 1;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 4);
}
