#include "ctx.h"

extern void func_02026bac(int);
extern void func_02025548(int);
extern u32 *data_0214f464;

void func_ov004_0216dfb0(int param_1)
{
    u32 v;
    *(u16 *)(param_1 + 0x152) = 0x133;
    func_02026bac(param_1);
    func_02025548(param_1);
    v = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = v;
    *(u32 *)(param_1 + 0x46c) = (u16)((((u16)v) * 0x65u) >> 16) + 100;
}
