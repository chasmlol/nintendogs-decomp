#include "ctx.h"

extern u8 *data_02159034;

BOOL func_02093c54(void)
{
    u8 *q = data_02159034 + 0x1000;
    return *(s8 *)(*(u8 **)(q + 0x41c) + 0x86) != 0;
}
