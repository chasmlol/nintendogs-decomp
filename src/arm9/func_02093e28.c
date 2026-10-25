#include "ctx.h"
extern u8 *data_02159034;
BOOL func_02093e28(void)
{
    BOOL r = 0;
    u8 *p = *(u8 **)(data_02159034 + 0x1000 + 0x41c);
    if (*(u16 *)(p + 0x80) != 0xffff) {
        r = 1;
    }
    return r;
}
