#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213b5e4[];
extern void func_02039a28(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e);

void func_02039920(u8 *param_1)
{
    *(u8 *)(param_1 + 151) = 2;
    func_02039a28(param_1, 2, 3, 8, 4, *(u16 *)(data_0213b5e4 + (s8)param_1[141] * 2));
}
