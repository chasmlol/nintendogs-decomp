#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bd0(u8 *p);
extern void func_02025bb0(u8 *p);
extern s32 func_02028130(u8 *p);
extern s32 func_01ff8930(s32 v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216e398(u8 *param_1)
{
    s32 iVar1;
    s32 uVar2;
    s64 v;

    *(u16 *)(param_1 + 0x152) = 0x177;
    SwapByte(4, (vu8 *)(param_1 + 0x97));
    func_02026bd0(param_1);
    func_02025bb0(param_1);
    iVar1 = func_02028130(param_1);
    uVar2 = func_01ff8930(iVar1);
    *(u32 *)(param_1 + 0x25c) = (u32)(((s64)uVar2 * (s64)-192 + 0x800) >> 12);
}
