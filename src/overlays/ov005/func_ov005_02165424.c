#pragma avoid_byte strb
#include "ctx.h"
extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

u8 func_ov005_02165424(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 0x1b4;
    p[147] = 5;
    p[145] = 5;
    func_020264f4(p);
    return func_020255a4(p);
}
