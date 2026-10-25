#include "ctx.h"

extern u8 data_021423d4[];
extern u8 data_021423dc[];
extern u8 data_021423e4[];
extern u8 data_021423ec[];
extern u8 data_021423f4[];
extern u8 data_021423fc[];

u32 func_020a69b0(u32 x)
{
    u32 r = 0;
    switch (x) {
    case 0:
        r = (u32)data_021423d4;
        break;
    case 1:
        r = (u32)data_021423dc;
        break;
    case 2:
        r = (u32)data_021423e4;
        break;
    case 3:
        r = (u32)data_021423ec;
        break;
    case 4:
        r = (u32)data_021423f4;
        break;
    case 5:
        r = (u32)data_021423fc;
    }
    return r;
}
