#pragma avoid_byte strb
#include "ctx.h"
extern void func_02025df4(u8 *p);
extern void func_02025548(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov003_0216f6b0(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x14a;
    SwapByte(5, p + 147);
    func_02025df4(p);
    func_02025548(p);
    SwapByte(2, p + 178); return;
}
