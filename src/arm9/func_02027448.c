#include "ctx.h"

extern u8 data_0213c470[];

u32 func_02027448(u8 *p)
{
    u16 idx = **(u16 **)(p + 0x9e8);
    return *(u32 *)(data_0213c470 + idx * 100);
}
