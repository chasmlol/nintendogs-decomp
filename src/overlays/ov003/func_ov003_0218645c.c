#pragma avoid_byte strb
#include "ctx.h"

static inline u32 SwapOld(u32 v, u8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

s32 func_02035584(u8 *p, u32 v);
u32 func_02026e68(u8 *p);
void func_ov003_0218c050(u8 *p, u32 v);
u32 func_0203e908(u8 *p, u32 v);

void func_ov003_0218645c(u8 *param_1)
{
    u32 iVar3;
    s32 iVar2;
    u32 bVar1;

    iVar2 = func_02035584(param_1, 1);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    if (iVar3 != 0) {
        bVar1 = SwapOld(1, param_1 + 185);
    } else {
        bVar1 = SwapOld(0, param_1 + 185);
    }
    if (iVar2 != 0) {
        func_0203e908(param_1, 238); return;
    }
    return;
}
