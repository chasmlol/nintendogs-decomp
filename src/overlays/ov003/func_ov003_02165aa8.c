#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025860(u8 *p);
extern void func_02034198(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[2]; u16 s1; } Obj;

void func_ov003_02165aa8(u8 *p)
{
    Obj *o = (Obj *)p;
    o->s0 = 162;
    o->s1 = 4;
    *(u8 *)(p + 147) = 19;
    *(u8 *)(p + 151) = 4;
    func_02026494(p);
    func_02025860(p);
    func_02034198(p);
}
