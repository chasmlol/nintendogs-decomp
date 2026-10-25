#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[8]; } Tab8;
extern u8 *data_ov004_02170320;
extern s8 data_ov004_0216fd6c[][2][2];
extern Tab8 data_ov004_0216ff2c;

void func_ov004_0215c8a8(s32 idx, s8 *out, u32 *res)
{
    u8 *q = *(u8 **)(data_ov004_02170320 + 0x36c4);
    Tab8 loc;

    *out = data_ov004_0216fd6c[q[0x2305]][q[0x2306]][idx];
    if (*out == -1)
        return;
    loc = data_ov004_0216ff2c;
    *res = loc.w[*out];
}
