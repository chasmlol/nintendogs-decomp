#include "ctx.h"

extern u8 data_02159074[];
extern void func_02071e34(u32 p0, s32 p1);

void func_0209ad94(void)
{
    u8 *g = data_02159074;
    func_02071e34(*(u32 *)(g + 4), (s32)*(s16 *)(g + 20));
    *(s16 *)(g + 22) = -1;
}
