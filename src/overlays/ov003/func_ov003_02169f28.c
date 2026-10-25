#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264d4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 a);

void func_ov003_02169f28(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x1db;
    param_1[145] = 3;
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 8);
}
