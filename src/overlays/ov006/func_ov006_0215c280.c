#include "ctx.h"

extern u32 data_0214f464;
extern void func_ov006_0215c310(u8 *p, u32 a, u32 b);

void func_ov006_0215c280(u8 *param_1)
{
    u32 *a1;
    u32 *b1;
    u32 n1;
    u32 n2;

    a1 = (u32 *)data_0214f464;
    n1 = *a1 * 0x10dcd + 1;
    *a1 = n1;
    b1 = (u32 *)data_0214f464;
    n2 = *b1 * 0x10dcd + 1;
    *b1 = n2;
    func_ov006_0215c310(param_1,
                        (u16)((((u32)(u16)n2) * 200) >> 16) == 0,
                        (u16)((((u32)(u16)n1) * 200) >> 16) == 0);
}
