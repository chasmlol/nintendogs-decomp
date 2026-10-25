#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026478(u8 *p);
extern void func_020256a0(u8 *p);
extern int *data_0214f464;
void func_020594a4(u8 *param_1)
{
    int *pp;
    int iVar1;
    u16 bit;
    *(s16 *)(param_1 + 0x152) = 0x11e;
    {
        u8 *q = param_1 + 0x97;
        u32 one = 1;
        *(u8 *)(q) = (u8)(one);
    }
    func_02026478(param_1);
    func_020256a0(param_1);
    pp = data_0214f464;
    iVar1 = *pp * 0x10dcd + 1;
    *pp = iVar1;
    bit = (u32)(iVar1 * 0x10000) >> 31;
    *(u32 *)(param_1 + 0x464) = bit;
}
