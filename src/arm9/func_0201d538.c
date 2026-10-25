#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026c24(u8 *);
extern void func_020256fc(u8 *);
extern void func_020ec488(s32);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0201d538(u8 *param_1)
{
    u8 *pbVar2;
    *(u16 *)(param_1 + 0x152) = 0;
    func_02026c24(param_1);
    func_020256fc(param_1);
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 1;
    func_020ec488((s32)*(s8 *)(param_1 + 0x88));
    pbVar2 = param_1 + 0xb5;
    SwapByte(*(u8 *)(param_1 + 0xb5) | 3, pbVar2);
    SwapByte(*(u8 *)(param_1 + 0xb5) & ~4u, pbVar2); return;
}
