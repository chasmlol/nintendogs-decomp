#include "ctx.h"

extern u8 *data_02159034;
void func_0206c7d4(u8 *p, u32 a, u32 b);

void func_020940f8(u32 param_1)
{
    u8 *q = *(u8 **)(data_02159034 + 0x141c);
    func_0206c7d4(q + 0x60, param_1, 84);
}
