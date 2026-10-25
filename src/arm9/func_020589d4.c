#pragma avoid_byte strb
#include "ctx.h"

void func_02026bac(void *p);
void func_02025548(void *p);
void func_02023654(void *p, u32 a, u32 b);

void func_020589d4(u8 *param_1)
{
    u8 *a;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 0;
    a = param_1 + 0x93;
    v = 5;
    *(u8 *)(a) = (u8)(v);
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 60, 1);
}
