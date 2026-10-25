#pragma avoid_byte strb
#include "ctx.h"
typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0xbe]; u16 state; } Obj;
extern void func_02026bac(Obj *p);
extern u8 func_02025a84(Obj *p);
extern void func_02020768(Obj *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov003_021672fc(Obj *o)
{
    o->state = 40;
    SwapByte(5, &o->lock);
    func_02026bac(o);
    func_02025a84(o);
    func_02020768(o);
}
