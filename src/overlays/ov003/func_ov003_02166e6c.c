#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_02020768(u8 *p);

static inline void SwapB(register u32 v, register vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_02166e6c(u8 *param_1)
{
    *(u16 *)(param_1 + 256 + 82) = 0x68;
    SwapB(13, (vu8 *)(param_1 + 147));
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
