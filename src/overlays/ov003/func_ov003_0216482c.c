#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025db0(u8 *p);
extern u8 func_02025490(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[2]; u16 s1; } Obj;

u8 func_ov003_0216482c(u8 *p)
{
    Obj *o = (Obj *)p;
    o->s0 = 347;
    o->s1 = 1;
    *(u8 *)(p + 147) = 12;
    *(u8 *)(p + 151) = 1;
    *(u8 *)(p + 158) = 1;
    func_02025db0(p);
    return func_02025490(p);
}
