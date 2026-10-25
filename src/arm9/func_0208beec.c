#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0212eaf4[];
extern u8 data_0213ebf4[];
void func_0205f050(u8 *a, u32 b, u8 *c, u32 d);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0208beec(u8 *param_1, u32 param_2, u32 param_3, u8 param_4)
{
    func_0205f050(param_1, param_2, data_0213ebf4, *(u32 *)(data_0212eaf4 + param_3 * 12));
    SwapByte(param_1[4] + param_4, (vu8 *)(param_1 + 4)); return;
}
