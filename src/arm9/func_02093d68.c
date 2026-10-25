#include "ctx.h"

extern u8 *data_02159034;

u8 func_02093d68(void)
{
    u8 *q = *(u8 **)&data_02159034 + 0x1000;
    u8 *r = *(u8 **)(q + 0x41c);
    return r[0x84];
}
