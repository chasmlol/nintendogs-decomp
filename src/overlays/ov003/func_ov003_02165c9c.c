#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern s32 func_02028130(u8 *p);
extern void func_02034198(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; } Obj;

void func_ov003_02165c9c(u8 *p)
{
    s32 x;
    ((Obj *)p)->s0 = 146;
    *(u8 *)(p + 147) = 19;
    func_02026494(p);
    x = func_02028130(p);
    *(s32 *)(p + 0x920) = (s32)(((s64)x * 0x1338 + 0x800) >> 12);
    *(u8 *)(p + 175) = 2;
    func_02034198(p);
}
