#include "ctx.h"

extern u8 data_02144f1c[];

u32 func_020f1300(s32 param_1)
{
    return (u32)data_02144f1c + param_1 * 0x6c;
}
