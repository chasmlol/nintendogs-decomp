#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026c24(u8 *p);
extern u8 func_02025a84(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0201fb50(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x3d;
    SwapB(2, (vu8 *)(param_1 + 151));
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_02023654(param_1, 45, 2);
}
