#include "ctx.h"

extern u8 data_0215b728[];

s32 func_020e1f2c(s32 x)
{
    u32 t = (u32)x * 8000;
    *(u32 *)data_0215b728 = t;
    return (s32)(t + 12);
}
