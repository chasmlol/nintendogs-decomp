#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov004_02170320;

void func_ov004_0215c258(void)
{
    s32 v;
    s32 w;
    u8 *P;
    u8 *Q;
    u32 idx = 0x319;
    P = data_ov004_02170320 + 0x3000;
    Q = *(u8 **)(P + 0x6c4);
    v = *(s8 *)(Q + 0x2318);
    *(s8 *)(Q + 0x2318) = v - 1;
    P = data_ov004_02170320 + 0x3000;
    Q = *(u8 **)(P + 0x6c4);
    w = *(s8 *)(Q + 0x2319);
    *(s8 *)(Q + 0x2000 + idx) = w - 1;
}
