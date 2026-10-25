#include "ctx.h"

extern u8 *data_0215ad40;

BOOL func_020d7d04(void)
{
    u8 *p = data_0215ad40;
    if (p == 0) {
        return 0;
    }
    return *(s16 *)(p + 300) > 0;
}
