#pragma avoid_byte strb
#include "ctx.h"

extern u16 func_02035164(u8 *p);
extern void func_02025dd4(u8 *p);
extern u8 func_02025548(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[4]; u16 s1; } Obj;

u8 func_ov003_0216f07c(u8 *p)
{
    Obj *o = (Obj *)p;
    u16 r;
    o->s0 = 0x111;
    r = func_02035164(p);
    o->s1 = r;
    *(u8 *)(p + 147) = 5;
    *(u8 *)(p + 151) = 1;
    func_02025dd4(p);
    return func_02025548(p);
}
