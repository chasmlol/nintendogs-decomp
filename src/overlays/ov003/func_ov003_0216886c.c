#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 v);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216886c(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x50;
    SwapB(1, (vu8 *)(param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 4);
}
