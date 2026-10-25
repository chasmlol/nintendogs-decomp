#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02026478(u8 *p);
extern void func_020256a0(u8 *p);

void func_02059328(u8 *param_1)
{
    u32 iVar1;
    u32 v;
    vu8 *p;
    s16 k;
    u8 *q;
    k = 243;
    q = param_1 + 256;
    *(s16 *)(q + 82) = k;
    p = (vu8 *)(param_1 + 151);
    v = 1;
    *(u8 *)(p) = (u8)(v);
    func_02026478(param_1);
    func_020256a0(param_1);
    iVar1 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar1;
    *(u32 *)(param_1 + 0x464) = (u16)((u32)(iVar1 * 0x10000) >> 0x1f);
}
