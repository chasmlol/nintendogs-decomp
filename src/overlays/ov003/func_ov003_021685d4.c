#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 b);

void func_ov003_021685d4(u8 *p)
{
    *(u16 *)((u32)((u8 *)p + 256) + 82) = 119;
    *(u8 *)(p + 151) = 1;
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 6);
}
