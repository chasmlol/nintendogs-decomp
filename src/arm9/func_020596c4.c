#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02026478(u8 *p);
extern void func_020256a0(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020596c4(u8 *param_1)
{
    u32 *q;
    u32 v;

    *(u16 *)(param_1 + 0x152) = 0xec;
    SwapByte(1, (vu8 *)(param_1 + 0x97));
    func_02026478(param_1);
    func_020256a0(param_1);
    q = data_0214f464;
    v = *q * 0x10dcd + 1;
    *q = v;
    *(u32 *)(param_1 + 0x464) = (u16)((v << 16) >> 31);
    func_02023654(param_1, 0x3b, 1);
}
