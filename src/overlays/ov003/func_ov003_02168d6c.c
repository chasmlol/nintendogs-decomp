#pragma avoid_byte strb
#include "ctx.h"

void func_020264f4(void *p);
void func_020255a4(void *p);
void func_0202db24(void *p, u32 a);

void func_ov003_02168d6c(u8 *param_1)
{
    u8 *a;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 4;
    a = param_1 + 0x97;
    v = 1;
    *(u8 *)(a) = (u8)(v);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 0);
}
