#include "ctx.h"

extern u32 data_02159468;

BOOL func_020bc5b8(void)
{
    u8 *q = *(u8 **)&data_02159468;
    return *(s16 *)(q + 0x2c) == 0;
}
