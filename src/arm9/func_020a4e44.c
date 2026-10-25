#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02159424[];

s32 func_020a4e44(void)
{
    u8 **pp = (u8 **)data_02159424;
    s32 r = -1;
    s32 v;
    v = *(s16 *)*pp;
    switch (v) {
    case 0:
        break;
    case 1:
    case 2:
        r = 1;
        break;
    case 3:
    case 4:
        r = 25;
        break;
    case 5:
        r = 24;
        break;
    default:
        break;
    }
    return r;
}
