#include "ctx.h"

extern u8 *data_0214f464;
extern void func_02048680(u8 *p, u32 a, u32 b);

void func_02047ac4(u8 *p)
{
    u32 v = *(u32 *)data_0214f464 * 0x10dcd + 1;
    u32 prod;
    *(u32 *)data_0214f464 = v;
    prod = (u32)((u16)v) * 50u;
    func_02048680(p, 7, (u16)(prod >> 16) == 0);
}
