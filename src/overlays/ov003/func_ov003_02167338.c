#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025a84(u8 *p);
extern void func_02020768(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov003_02167338(u8 *p)
{
    u32 w = 0x28;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(5, p + 147);
    func_02026bac(p);
    func_02025a84(p);
    func_02020768(p);
}
