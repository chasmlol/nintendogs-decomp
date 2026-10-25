#include "ctx.h"

extern u8 *data_0215be48;

BOOL func_02107f10(void)
{
    BOOL r = 0;
    if (*(vu32 *)(data_0215be48 + 0xb8) == 1) {
        r = 1;
    }
    return r;
}
