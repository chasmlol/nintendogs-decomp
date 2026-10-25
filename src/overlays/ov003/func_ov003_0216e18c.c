#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216e18c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 333;
    SwapByte(5, param_1 + 0x93);
    SwapByte(1, param_1 + 0x98);
    func_02026bac(param_1);
    func_02025a84(param_1);
    func_02023654(param_1, 79, 1);
    *(u32 *)(param_1 + 0x46c) = 500;
    *(u32 *)(param_1 + 0x470) = 0xffffffff;
}
