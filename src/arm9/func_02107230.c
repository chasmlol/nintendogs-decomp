#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02091e24(void *a, u32 b, u32 c, u32 d);

void func_02107230(s32 p1, s32 p2, s32 p3, u32 p4)
{
    u8 *base = data_0215be48;
    u8 *q = base + p1 * 660 + p2 * 4;
    u32 v = *(u32 *)(q + 0x2074);
    func_02091e24(base + 0x4cc8, v, p3, p4);
}
