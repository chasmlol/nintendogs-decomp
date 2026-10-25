#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_02020824(u8 *p);
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);
extern void func_0202db24(u8 *p, s32 n);

void func_ov003_0216b6fc(u8 *p)
{
    u32 v;

    *(u16 *)(p + 256 + 82) = 0x71;
    v = func_02020824(p);
    *(u16 *)(p + 256 + 84) = v;
    p[151] = 4;
    func_020264f4(p);
    func_020255a4(p);
    func_02023654(p, 6, 2);
    func_0202db24(p, 6);
}
