#pragma avoid_byte strb
#include "ctx.h"

void func_020266f8(void *p);
void func_02025bb0(void *p);
void func_ov003_02164558(void *p);

void func_ov003_02164510(u8 *param_1)
{
    u8 *a;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 0x11;
    a = param_1 + 0x93;
    v = 5;
    *(u8 *)(a) = (u8)(v);
    a = param_1 + 0x98;
    v = 9;
    *(u8 *)(a) = (u8)(v);
    func_020266f8(param_1);
    func_02025bb0(param_1);
    func_ov003_02164558(param_1);
}
