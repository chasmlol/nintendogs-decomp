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

void func_ov003_021861b8(u8 *param_1)
{
    u32 iVar2;
    u32 iVar3;
    u8 bVar1;

    iVar2 = func_0203567c(param_1);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    if (iVar3 != 0) {
        bVar1 = SwapByte(1, (vu8 *)(param_1 + 185));
    } else {
        bVar1 = SwapByte(0, (vu8 *)(param_1 + 185));
    }
    if (iVar2 != 0) {
        func_0203e908(param_1, 0xf4); return;
    }
    return;
}
