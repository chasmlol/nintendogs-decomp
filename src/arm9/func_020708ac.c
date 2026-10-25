#include "ctx.h"

u32 func_020708ac(u32 *param_1)
{
    u8 *q = (u8 *)*param_1;
    u32 r;
    if (q == 0) {
        return 0xffffffff;
    }
    if (*(u16 *)(q + 0x34) != 2) {
        r = 0xffffffff;
    } else {
        r = *(u16 *)(q + 0x38);
    }
    return r;
}
