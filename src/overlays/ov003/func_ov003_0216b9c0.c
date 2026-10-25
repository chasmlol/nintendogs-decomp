#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(s32 p);
extern void func_020255a4(s32 p);
extern void func_0202db24(s32 p, s32 x);

void func_ov003_0216b9c0(s32 p)
{
    *(u16 *)((u8 *)p + 0x152) = 0x18b;
    *(u16 *)((u8 *)p + 0x154) = 17;
    ((u8 *)p)[151] = 4;
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 7);
}
