#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02035584(u8 *p, u32 a);
extern u32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, u32 a);
extern u32 func_0203e908(u8 *p, u32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02186378(u8 *param_1)
{
    u32 r4;
    u32 r6;
    u32 one;
    u32 zero;
    u32 old;
    r4 = func_02035584(param_1, 1);
    r6 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, r6);
    one = 1;
    zero = 0;
    *(u16 *)(param_1 + 256 + 28) = one;
    *(u16 *)(param_1 + 256 + 30) = zero;
    if (r6 != 0) {
        old = SwapByte(one, (vu8 *)(param_1 + 185));
    } else {
        old = SwapByte(zero, (vu8 *)(param_1 + 185));
    }
    if (r4 != 0) {
        func_0203e908(param_1, 0xf0); return;
    }
    return;
}
