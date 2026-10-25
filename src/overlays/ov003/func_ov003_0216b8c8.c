#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_02020824(u8 *p);
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 v);

void func_ov003_0216b8c8(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 25;
    *(u16 *)(param_1 + 256 + 84) = (u16)func_02020824(param_1);
    param_1[151] = 4;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 1);
}
