#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);
extern void func_0202db24(u8 *p, s32 n);

void func_ov003_0216ca78(u8 *p)
{
    *(u16 *)(p + 256 + 82) = 113;
    p[147] = 9;
    p[152] = 9;
    func_020264f4(p);
    func_020255a4(p);
    func_02023654(p, 6, 1);
    func_0202db24(p, 6);
}
