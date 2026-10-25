#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(u32 a, u32 b, u32 c);

void func_02094afc(u32 param_1, s16 param_2, u32 param_3)
{
    u8 *base = data_02159034 + 0x1484;
    u8 *e = base + param_2 * 24;
    u32 addr = *(u32 *)(e + 4) * (u16)param_3 + *(u32 *)(e + 0x10) + 4;
    func_0206c7d4(addr, param_1, 316);
}
