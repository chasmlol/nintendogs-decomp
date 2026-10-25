#pragma avoid_byte strb
#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

s32 func_0203567c(u8 *p);
u32 func_02026e68(u8 *p);
void func_ov003_0218c050(u8 *p, u32 v);
u32 func_0203e908(u8 *p, u32 v);

void func_ov003_02186228(u8 *param_1)
{
    s32 iVar2;
    u32 iVar3;
    u8 bVar1;

    iVar2 = func_0203567c(param_1);
    iVar3 = func_02026e68(param_1);
    func_ov003_0218c050(param_1, iVar3);
    *(u16 *)((u8 *)param_1 + 256 + 28) = 1;
    *(u16 *)((u8 *)param_1 + 256 + 30) = 0;
    if (iVar3 != 0) {
        bVar1 = SwapByte(1, (vu8 *)((u8 *)param_1 + 185));
    } else {
        bVar1 = SwapByte(0, (vu8 *)((u8 *)param_1 + 185));
    }
    if (iVar2 != 0) {
        func_0203e908(param_1, 243); return;
    }
    return;
}
