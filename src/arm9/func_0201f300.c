#pragma avoid_byte strb
#include "ctx.h"

void func_02026c24(void *p);
void func_02025a84(void *p);
void func_02023654(void *p, u32 a, u32 b);

void func_0201f300(u8 *param_1)
{
    u8 *a;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 0x11c;
    a = param_1 + 0x97;
    v = 4;
    *(u8 *)(a) = (u8)(v);
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_02023654(param_1, 53, 1);
}
