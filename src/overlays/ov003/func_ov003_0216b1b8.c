#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(int a);
extern void func_020255a4(int a);
extern void func_0202db24(int a, int b);
extern u32 func_020207cc(int a);

void func_ov003_0216b1b8(int param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 42;
    *(u8 *)(param_1 + 147) = 14;
    *(u8 *)(param_1 + 144) = func_020207cc(param_1);
    *(u8 *)(param_1 + 151) = 1;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 3);
}
