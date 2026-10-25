#include "ctx.h"

extern u32 *data_0214f464;
void func_02048680(u8 *p, u32 a, u32 b);

void func_02047e0c(u8 *param_1)
{
    u32 s;
    u16 lo;
    u32 x;
    u32 b;
    s = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = s;
    lo = (u16)s;
    x = (u32)lo * 50;
    b = ((u16)(x >> 16) == 0);
    func_02048680(param_1, 4, b);
}
