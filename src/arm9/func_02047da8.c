#include "ctx.h"
extern u32 *data_0214f464;
extern void func_02048680(u32 a, u32 b, u32 c);
void func_02047da8(u32 p0)
{
    u32 *q = data_0214f464;
    u32 nv = *q * 0x10dcd + 1;
    u16 hi;
    *q = nv;
    hi = (u16)(((u16)nv * 50u) >> 16);
    func_02048680(p0, 4, hi == 0);
}
