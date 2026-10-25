#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02026bac(int);
extern void func_02025548(int);

void func_ov004_0216e024(int param_1)
{
    u32 v;
    *(u16 *)(param_1 + 0x152) = 303;
    func_02026bac(param_1);
    func_02025548(param_1);
    v = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = v;
    *(u32 *)(param_1 + 0x46c) = (u16)(((u32)(u16)v * 101u) >> 16) + 100;
}
