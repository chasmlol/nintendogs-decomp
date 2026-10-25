#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_02020768(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov003_0216711c(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x4c;
    *(u16 *)(p + 0x154) = 0x1a;
    SwapByte(5, p + 147);
    func_02026bac(p);
    func_02025548(p);
    func_02020768(p);
}
