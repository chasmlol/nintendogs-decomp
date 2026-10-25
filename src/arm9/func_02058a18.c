#pragma avoid_byte strb
#include "ctx.h"
extern void func_02026bac(u8 *p);
extern u8 func_02025bb0(u8 *p);
extern void func_0202c0ec(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_02058a18(u8 *p)
{
    u32 w = 0x10d;
    u8 *b = p + 256;
    *(u16 *)(b + 82) = (u16)w;
    SwapByte(1, p + 151);
    func_02026bac(p);
    func_02025bb0(p);
    func_0202c0ec(p);
}
