#include "ctx.h"

extern u8 *data_02159034;

u32 func_02094608(u32 i)
{
    u8 *q = data_02159034 + 0x1000;
    u32 v = *(u32 *)(q + 0x41c);
    return v + 0x248 + i * 4;
}
