#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02090cac(u32 a, u32 b, u32 c);

void func_020fc8f8(s32 p0, s32 p1, u32 p2, u32 p3)
{
    u8 *g = data_0215be48;
    u32 v = *(u32 *)(g + p0 * 660 + p1 * 4 + 0x2074);
    func_02090cac(v, p2, p3);
}
