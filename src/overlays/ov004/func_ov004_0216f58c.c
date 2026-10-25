#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

void func_ov004_0216f58c(u8 *param_1)
{
    T12 local;
    local.w[0] = 32768;
    local.w[1] = 20480;
    local.w[2] = 0u - 40960u;
    *(u32 *)(param_1 + 0xe0) = 1;
    param_1[164] = 0;
    *(T12 *)(param_1 + 168) = local;
}
