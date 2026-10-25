#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025548(u8 *);
extern void func_02020768(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021674c8(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x15e;
    SwapByte(5, param_1 + 147);
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
