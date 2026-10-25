#pragma avoid_byte strb
#include "ctx.h"
extern s32 func_02035164(u8 *p);
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);

void func_02020014(u8 *p)
{
    s32 r;
    *(u16 *)(p + 256 + 82) = 0x11a;
    r = func_02035164(p);
    *(u16 *)(p + 256 + 88) = (u16)r;
    p[151] = 7;
    func_02026c24(p);
    func_02025548(p);
    func_02023654(p, 51, 1);
}
