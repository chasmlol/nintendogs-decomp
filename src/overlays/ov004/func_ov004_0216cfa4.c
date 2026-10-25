#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026b88(u8 *p);
extern u8 func_020254ec(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov004_0216cfa4(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x4c;
    SwapByte(5, p + 147);
    SwapByte(1, p + 152);
    func_02026b88(p);
    return func_020254ec(p);
}
