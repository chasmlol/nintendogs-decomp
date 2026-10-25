#include "ctx.h"

extern u32 data_02159034;
extern void func_0206c7d4(u32 p0, u32 p1, s32 p2);

void func_020931cc(u32 param_1)
{
    u8 *g = *(u8 **)&data_02159034;
    u8 *r4 = *(u8 **)(g + 4096 + 0x4dc);
    func_0206c7d4(param_1, (u32)(r4 + 4), 0x4e38);
    *(u16 *)(r4 + 19968 + 66) = *(u16 *)(r4 + 19968 + 66) | 1;
}
