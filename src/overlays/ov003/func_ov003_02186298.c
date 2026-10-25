#pragma avoid_byte strb
#include "ctx.h"

s32 func_0203567c(u8 *p);
s32 func_02026e68(u8 *p);
void func_ov003_0218c050(u8 *p, s32 v);
u32 func_0203e908(u8 *p, s32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02186298(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    u8 *p;
    u32 one;
    u32 zero;
    u32 r;

    p = param_1;
    iVar2 = func_0203567c(p);
    iVar3 = func_02026e68(p);
    func_ov003_0218c050(p, iVar3);
    one = 1;
    zero = 0;
    *(u16 *)(p + 284) = one;
    *(u16 *)(p + 286) = zero;
    if (iVar3 != 0) {
        r = SwapByte(one, (vu8 *)(p + 185));
    } else {
        r = SwapByte(zero, (vu8 *)(p + 185));
    }
    if (iVar2 != 0) {
        func_0203e908(p, 0xf2); return;
    }
    return;
}
