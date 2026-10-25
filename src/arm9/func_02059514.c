#pragma avoid_byte strb
#include "ctx.h"

extern int *data_0214f464;
void func_02026478(int p);
void func_020256a0(int p);

void func_02059514(int param_1)
{
    int iVar1;
    u8 *p;
    u32 one;
    u16 *q;
    int *d;
    u8 *base;
    u32 v;

    base = (u8 *)param_1;
    v = 0xf0;
    q = (u16 *)(base + 0x100);
    q[41] = v;
    p = base + 0x97;
    one = 1;
    *(u8 *)(p) = (u8)(one);
    func_02026478(param_1);
    func_020256a0(param_1);
    d = data_0214f464;
    iVar1 = *d * 0x10dcd + 1;
    *d = iVar1;
    *(u32 *)(base + 0x464) = (u16)((u32)(iVar1 * 0x10000) >> 31);
}
