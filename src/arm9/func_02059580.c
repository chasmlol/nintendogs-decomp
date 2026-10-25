#pragma avoid_byte strb
#include "ctx.h"

extern s32 *data_0214f464;
extern void func_02026478(u8 *p);
extern void func_020256a0(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02059580(u8 *p)
{
    s32 iVar1;
    u16 t;
    *(u16 *)(p + 0x152) = 0xef;
    SwapByte(1, (vu8 *)(p + 0x97));
    func_02026478(p);
    func_020256a0(p);
    iVar1 = *data_0214f464 * 0x10dcd + 1;
    t = (u16)(((u32)iVar1 << 16) >> 31);
    *data_0214f464 = iVar1;
    *(u32 *)(p + 0x464) = t;
}
