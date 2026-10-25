#pragma avoid_byte strb
#include "ctx.h"
extern s32 func_02035584(u8 *p, u32 a);
extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern u32 func_0203e908(u8 *p, u32 a);

static inline u8 SwapOld(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02186544(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    u32 bVar1;
    iVar2 = func_02035584(param_1, 1);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    *(s16 *)(param_1 + 0x11c) = 1;
    *(s16 *)(param_1 + 0x11e) = 0;
    if (iVar3 != 0) {
        bVar1 = SwapOld(1, (vu8 *)(param_1 + 0xb9));
    } else {
        bVar1 = SwapOld(0, (vu8 *)(param_1 + 0xb9));
    }
    if (iVar2 != 0) {
        func_0203e908(param_1, 0xec); return;
    }
    return;
}
