#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_020207cc(u8 *p);
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 n);

void func_ov003_0216b3d4(u8 *param_1)
{
    u32 uVar1;
    *(u16 *)(param_1 + 256 + 82) = 0x71;
    param_1[147] = 14;
    uVar1 = func_020207cc(param_1);
    param_1[143] = (u8)uVar1;
    param_1[151] = 1;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 6);
}
