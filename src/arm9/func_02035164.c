#include "ctx.h"

extern s8 data_0213c42d[];

u32 func_02035164(u8 *param_1)
{
    u16 *pp = *(u16 **)(param_1 + 0x9e8);
    s8 c = data_0213c42d[*pp * 100];
    switch (c) {
    case 2:
        return 4;
    case 3:
        return 5;
    default:
        return 0;
    }
}
