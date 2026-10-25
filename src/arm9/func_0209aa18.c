#include "ctx.h"

extern u8 *data_02159070;

s32 func_0209aa18(void)
{
    u8 *q = *(u8 **)&data_02159070 + 0x4e00;
    return *(s16 *)(q + 0x30);
}
