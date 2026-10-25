#include "ctx.h"

extern u32 *data_0214f464;
extern void func_ov006_0215c310(u8 *p, u32 a, u32 b);

void func_ov006_0215c1f0(u8 *param_1)
{
    u32 uVar3;
    u32 uVar4;

    uVar3 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar3;
    uVar4 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar4;
    func_ov006_0215c310(param_1, (u16)(((u32)(u16)uVar4 * 200) >> 16) == 0, (u16)(((u32)(u16)uVar3 * 200) >> 16) == 0);
}
