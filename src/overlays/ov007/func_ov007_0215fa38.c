#include "ctx.h"
extern u8 *data_ov007_02160e5c;
extern void func_0207df9c(u32 a, u32 b, u32 c, u32 d);
void func_ov007_0215fa38(u32 p0, u32 p1, u32 p2, u32 p3)
{
    func_0207df9c(*(u32 *)(data_ov007_02160e5c + 0x5c), p1, p2, p3);
    data_ov007_02160e5c = 0;
}
