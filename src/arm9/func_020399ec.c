#pragma avoid_byte strb
#include "ctx.h"

void func_02039a28(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_020399ec(u32 param_1)
{
    vu8 *p = (vu8 *)(param_1 + 151);
    u32 old;
    u32 v = 0;

    *(u8 *)(p) = (u8)(v);
    func_02039a28(param_1, 2, v, 20, 4, 100);
}
