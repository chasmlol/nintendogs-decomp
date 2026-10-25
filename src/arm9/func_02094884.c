#include "ctx.h"

extern u32 data_02159034;
extern void func_0206c7d4(u32 p0, u32 p1, s32 p2);

void func_02094884(u32 param_1, s16 param_2, u32 param_3)
{
    u8 *g = *(u8 **)&data_02159034;
    u8 *e = g + 0x155c + param_2 * 24;
    u32 v = *(u32 *)(e + 0x10) + *(u32 *)(e + 4) * (u16)param_3;
    func_0206c7d4(param_1, v + 320, 64);
    *(u16 *)(v + 256 + 134) = *(u16 *)(v + 256 + 134) | 1;
}
