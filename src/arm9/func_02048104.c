#include "ctx.h"

extern u32 *data_0214f464;
void func_02048680(u8 *a, u32 b, u32 c);

void func_02048104(u8 *param_1)
{
    u32 *q = data_0214f464;
    u32 s = *q * 0x10dcd + 1;
    u16 lo;
    u32 m;
    *q = s;
    lo = (u16)s;
    m = (u32)lo * 50;
    func_02048680(param_1, 1, (u16)(m >> 16) == 0);
}
