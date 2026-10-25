#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0215ae84;
extern u32 data_0215ae10;
extern u32 data_0215ae2c;
extern u32 data_0215ae28;
extern u32 data_0215ae74;

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_020defd8(void)
{
    u32 val;
    val = data_0215ae84;
    SwapB(2, (vu8 *)&data_0215ae10);
    *(u32 *)&data_0215ae2c = val;
    *(u16 *)&data_0215ae28 = 0;
    *(u32 *)&data_0215ae74 = 0;
}
