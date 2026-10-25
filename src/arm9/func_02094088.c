#include "ctx.h"

extern u8 *data_02159034;
extern s32 data_0212fc5c;

BOOL func_02094088(void)
{
    BOOL r = FALSE;
    u8 *q = *(u8 **)(data_02159034 + 0x141c);
    s32 v = *(s32 *)(q + 0x78);
    if (v < data_0212fc5c) {
        r = TRUE;
    }
    return r;
}
