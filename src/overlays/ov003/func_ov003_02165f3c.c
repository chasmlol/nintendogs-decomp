#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern s32 func_02028130(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_02165f3c(u8 *p)
{
    s32 v;
    s32 fx;
    *(s16 *)((u8 *)p + 256 + 82) = 146;
    *(u8 *)(p + 0x93) = 19;
    func_02026494(p);
    v = func_02028130(p);
    fx = (s32)(((s64)v * 4920 + 0x800) >> 12);
    *(s32 *)(p + 0x920) = fx;
    *(u8 *)(p + 175) = 2;
    func_02034198(p);
}
