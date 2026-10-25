#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0x4]; u8 b98; u8 pad3[0xb9]; u16 state; u8 pad4[2]; u16 state2; u8 pad5[0x7f0]; u32 flags; } Obj;
extern void func_02026bac(Obj *p);
extern void func_02025d14(Obj *p);

void func_0201d434(Obj *o)
{
    u32 one;
    o->state = 0x91;
    one = 1;
    o->state2 = (u16)one;
    o->lock = 5;
    o->b98 = (u8)one;
    func_02026bac(o);
    func_02025d14(o);
    o->flags |= 2;
}
