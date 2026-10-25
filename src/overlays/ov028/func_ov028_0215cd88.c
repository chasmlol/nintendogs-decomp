#include "ctx.h"

extern u8 *data_ov028_0215df14;

void func_ov028_0215cd88(u32 a, u32 b)
{
    u8 *p = *(u8 **)&data_ov028_0215df14;
    *(u32 *)(p + 0x114) = a;
    *(u32 *)(*(u8 **)&data_ov028_0215df14 + 0x118) = b;
}
