#pragma avoid_byte strb
#include "ctx.h"

extern u16 func_02035164(u8 *p);
extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[4]; u16 s1; } Obj;

u8 func_0201ff48(u8 *p)
{
    Obj *o = (Obj *)p;
    u16 r;
    o->s0 = 0x11a;
    r = func_02035164(p);
    o->s1 = r;
    *(u8 *)(p + 151) = 7;
    func_02026c24(p);
    return func_02025548(p);
}
