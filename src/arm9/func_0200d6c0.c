#include "ctx.h"

extern u32 *data_0214f464;
void func_0200da60(u8 *p, u32 a, u32 b);

void func_0200d6c0(u8 *param_1)
{
    u32 v1;
    u32 v2;
    u32 z1;
    u32 z2;

    v1 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = v1;
    v2 = *data_0214f464 * 0x10dcd + 1;
    z1 = (u16)((((u32)(u16)v1) * 200) >> 16) == 0;
    z2 = (u16)((((u32)(u16)v2) * 200) >> 16) == 0;
    *data_0214f464 = v2;
    func_0200da60(param_1, z2, z1);
}
