#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[3]; u8 b97; u8 pad3[0xba]; u16 state; u8 pad4[2]; u16 state2; u8 pad5[0x7f0]; u32 flags; } Obj;
extern void func_02025e34(Obj *p);
extern void func_02025d14(Obj *p);

void func_ov003_021640a4(Obj *o)
{
    u32 one;
    o->state = 360;
    one = 1;
    o->state2 = (u16)one;
    o->lock = 12;
    o->b97 = (u8)one;
    func_02025e34(o);
    func_02025d14(o);
    o->flags |= 4;
}
