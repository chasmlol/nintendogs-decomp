#include "ctx.h"

extern u32 data_021594ec;
extern u32 data_021594e8;

u32 func_020d6420(u8 *p)
{
    u32 ok;
    if (*(u16 *)(p + 2) == 0) {
        data_021594ec = 0;
        data_021594e8 = 3;
        ok = 1;
    } else {
        ok = 0;
        data_021594ec = ok;
    }
    return ok;
}
