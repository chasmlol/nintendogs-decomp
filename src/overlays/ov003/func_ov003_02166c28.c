#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02020768(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02166c28(u8 *param_1)
{
    *(vu16 *)(param_1 + 256 + 82) = 106;
    SwapByte(14, (vu8 *)(param_1 + 147));
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
