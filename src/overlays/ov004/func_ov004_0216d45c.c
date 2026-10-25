#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026aac(u8 *p);
extern u8 func_02025bb0(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov004_0216d45c(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x13;
    SwapByte(5, p + 147);
    SwapByte(1, p + 152);
    func_02026aac(p);
    func_02025bb0(p);
    *(u32 *)(p + 0x484) = 0;
}
