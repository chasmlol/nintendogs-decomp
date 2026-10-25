#include "ctx.h"

extern u32 data_0214f464;

u32 func_02044ccc(u32 i)
{
    return *(u32 *)(data_0214f464 + i * 4 + 0x48);
}
