#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov005_021652b4(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x113;
    SwapByte(1, p + 151);
    func_02026bac(p);
    func_02025548(p);
    SwapByte(1, p + 178); return;
}
