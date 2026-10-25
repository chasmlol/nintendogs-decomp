#include "ctx.h"
extern u32 (*data_0213e778)(u32, u32, u32);
s32 func_020e91b8(u32 p0, u32 p1)
{
    u32 r = data_0213e778(p0, p1, 0);
    return (s32)((r & 0xffff) << 3);
}
