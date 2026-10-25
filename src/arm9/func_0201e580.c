#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02026638(u8 *p);
extern void func_02025bb0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0201e580(u8 *param_1)
{
    s32 iVar4;
    s32 iVar5;
    u32 *pg;

    *(u16 *)(param_1 + 0x152) = 0x10;
    SwapByte(5, (vu8 *)(param_1 + 0x93));
    SwapByte(2, (vu8 *)(param_1 + 0x97));
    func_02026638(param_1);
    func_02025bb0(param_1);
    pg = data_0214f464;
    iVar4 = *pg * 0x10dcd + 1;
    *pg = iVar4;
    *(s32 *)(param_1 + 0x26c) = (s32)(((s64)(s16)(u16)(iVar4 & 0xfff) * 81920 + 0x800) >> 12) - 0xa000;
    pg = data_0214f464;
    iVar5 = *pg * 0x10dcd + 1;
    *pg = iVar5;
    *(s32 *)(param_1 + 0x274) = (s32)(((s64)(s16)(u16)(iVar5 & 0xfff) * 81920 + 0x800) >> 12) - 0xa000;
}
