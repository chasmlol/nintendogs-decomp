#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern void func_020266f8(int p);
extern void func_02025bb0(int p);
extern u8 func_02029504(int p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

u8 func_0201d684(int param_1)
{
    u32 *pg;
    s32 iVar4;
    s32 iVar5;
    s64 lVar2;

    ((u16 *)(param_1 + 256))[41] = 0x11;
    SwapByte(5, (vu8 *)(param_1 + 147));
    SwapByte(9, (vu8 *)(param_1 + 152));
    func_020266f8(param_1);
    func_02025bb0(param_1);
    pg = data_0214f464;
    iVar4 = *pg * 0x10dcd + 1;
    *pg = iVar4;
    *(s32 *)(param_1 + 0x26c) = (s32)(((s64)(s16)(u16)(iVar4 & 0xfff) * 81920 + 0x800) >> 12) - 0xa000;
    pg = data_0214f464;
    iVar5 = *pg * 0x10dcd + 1;
    *pg = iVar5;
    *(s32 *)(param_1 + 0x274) = (s32)(((s64)(s16)(u16)(iVar5 & 0xfff) * 81920 + 0x800) >> 12) - 0xa000;
    return func_02029504(param_1);
}
