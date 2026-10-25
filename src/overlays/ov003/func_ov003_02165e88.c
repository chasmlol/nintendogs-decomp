#pragma avoid_byte strb
#include "ctx.h"
typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0xbe]; u16 state; } Obj;
extern void func_02026494(Obj *p);
extern void func_02025860(Obj *p);
extern void func_02034198(Obj *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov003_02165e88(Obj *o)
{
    o->state = 149;
    SwapByte(19, &o->lock);
    func_02026494(o);
    func_02025860(o);
    func_02034198(o);
}
