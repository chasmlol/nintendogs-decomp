#pragma avoid_byte strb
#include "ctx.h"

s32 func_02035584(u8 *p, s32 v);
s32 func_02026e68(u8 *p);
void func_ov003_0218c050(u8 *p, s32 v);
u32 func_0203e908(u8 *p, s32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021864d0(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    u32 one;
    u32 zero;
    u8 r;

    iVar2 = func_02035584(param_1, 1);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    one = 1;
    zero = 0;
    *(u16 *)(param_1 + 284) = one;
    *(u16 *)(param_1 + 286) = zero;
    if (iVar3 != 0) {
        r = SwapByte(one, (vu8 *)(param_1 + 185));
    } else {
        r = SwapByte(zero, (vu8 *)(param_1 + 185));
    }
    if (iVar2 != 0) {
        func_0203e908(param_1, 0xed); return;
    }
    return;
}
