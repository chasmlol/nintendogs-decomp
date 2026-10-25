#pragma avoid_byte strb
#include "ctx.h"

void func_02026aac(void *p);
void func_02025bb0(void *p);
void func_ov004_0216c504(void *p);

void func_ov004_0216d5bc(u8 *param_1)
{
    u8 *a;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 0x13;
    a = param_1 + 0x93;
    v = 5;
    *(u8 *)(a) = (u8)(v);
    func_02026aac(param_1);
    func_02025bb0(param_1);
    func_ov004_0216c504(param_1);
}
