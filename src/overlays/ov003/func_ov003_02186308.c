#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_0203567c(u8 *p);
extern u32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, u32 v);
extern u32 func_0203e908(u8 *p, u32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02186308(u8 *param_1)
{
    u32 r6;
    u32 r4;
    u8 old;
    r4 = func_0203567c(param_1);
    r6 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, r6);
    *(u16 *)(param_1 + 256 + 28) = 1;
    *(u16 *)(param_1 + 256 + 30) = 0;
    if (r6 != 0) {
        old = SwapByte(1, (vu8 *)(param_1 + 185));
    } else {
        old = SwapByte(0, (vu8 *)(param_1 + 185));
    }
    if (r4 != 0) {
        func_0203e908(param_1, 241); return;
    }
    return;
}
