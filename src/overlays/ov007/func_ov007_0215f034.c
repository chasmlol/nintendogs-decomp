#include "ctx.h"

extern u8 *data_ov007_02160d9c;

void func_ov007_0215f034(u32 a, u32 b)
{
    u8 *p = *(u8 **)&data_ov007_02160d9c;
    *(u32 *)(p + 0x118) = a;
    *(u32 *)(*(u8 **)&data_ov007_02160d9c + 0x11c) = b;
}
