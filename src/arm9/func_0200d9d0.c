#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0200da60(int a, int b, int c);

void func_0200d9d0(int param_1)
{
    u32 *p;
    u32 x;
    u32 y;

    p = data_0214f464;
    x = *p * 0x10dcd + 1;
    *p = x;
    p = data_0214f464;
    y = *p * 0x10dcd + 1;
    *p = y;
    func_0200da60(param_1, (u16)((((u32)(u16)y) * 200u) >> 16) == 0, (u16)((((u32)(u16)x) * 200u) >> 16) == 0);
}
