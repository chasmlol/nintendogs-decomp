#include "ctx.h"

extern u32 *data_0214f464;

void func_02048680(u8 *p, u32 a, u32 b);

void func_020481cc(u8 *param_1)
{
    u32 uVar1;
    u32 t;

    uVar1 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar1;
    t = (u16)uVar1 * 50;
    func_02048680(param_1, 1, (u16)(t >> 16) == 0);
}
