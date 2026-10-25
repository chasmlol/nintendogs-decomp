#include "ctx.h"

extern u8 *data_02159034;
extern void func_0206c7d4(u32 a, u32 b, u32 c);

void func_020948e0(u32 param_1, s16 param_2, u32 param_3)
{
    u32 v;
    u8 *e;
    e = data_02159034 + 0x1484 + param_2 * 24;
    v = *(u32 *)(e + 4) * (u16)param_3 + *(u32 *)(e + 0x10);
    func_0206c7d4(param_1, v + 0x140, 64);
    *(u16 *)(v + 0x100 + 134) = *(u16 *)(v + 0x100 + 134) | 1;
}
