#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025804(u8 *p);
extern void func_02034198(u8 *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02165f00(u8 *p)
{
    *(u16 *)(p + 0x152) = 0x99;
    SwapByte(19, (vu8 *)(p + 0x93));
    func_02026494(p);
    func_02025804(p);
    func_02034198(p);
}
