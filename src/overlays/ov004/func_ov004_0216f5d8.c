#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T12;

void func_ov004_0216f5d8(u8 *param_1)
{
    T12 t;
    t.w[0] = 0xffff8000u;
    t.w[1] = 18432;
    t.w[2] = 4096;
    *(u32 *)(param_1 + 0xe0) = 0;
    param_1[164] = 0;
    *(T12 *)(param_1 + 168) = t;
}
