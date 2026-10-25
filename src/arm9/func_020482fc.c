#include "ctx.h"

extern u32 *data_0214f464;

void func_02048680(u32 a, u32 b, u32 c);

void func_020482fc(u32 param_1)
{
    u32 *P;
    u32 nv;
    u32 t;

    P = data_0214f464;
    nv = *P * 0x10dcd + 1;
    *P = nv;
    t = (u16)nv * 50;
    func_02048680(param_1, 1, (u16)(t >> 16) == 0);
}
