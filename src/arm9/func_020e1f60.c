#include "ctx.h"

extern u8 *data_0215ae00;

s32 func_020e1f60(void)
{
    return *(s32 *)(*(u8 **)&data_0215ae00 + 0x14) + 100;
}
