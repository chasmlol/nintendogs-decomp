#include "ctx.h"

extern u8 *data_02159468;

BOOL func_020bc5d8(void)
{
    return *(volatile s16 *)(data_02159468 + 0x2c) == 2;
}
