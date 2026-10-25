#pragma avoid_byte strb
#include "ctx.h"

void func_020264d4(void *p);
void func_020255a4(void *p);
void func_0202db24(void *p, u32 a);

void func_ov003_02169c98(u8 *param_1)
{
    u8 *a;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 0x1dc;
    a = param_1 + 0x92;
    v = 3;
    *(u8 *)(a) = (u8)(v);
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 8);
}
