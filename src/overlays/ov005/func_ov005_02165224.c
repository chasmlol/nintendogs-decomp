#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u32 func_020255a4(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; } Obj;

u32 func_ov005_02165224(u8 *p)
{
    Obj *o = (Obj *)p;
    o->s0 = 1;
    o->s1 = 48;
    *(u8 *)(p + 147) = 9;
    *(u8 *)(p + 151) = 3;
    func_020264f4(p);
    return func_020255a4(p);
}
