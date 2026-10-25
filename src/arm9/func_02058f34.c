#pragma avoid_byte strb
#include "ctx.h"
typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0x3]; u8 b97; u8 pad3[0xba]; u16 state; } Obj;
extern void func_02026bac(Obj *p);
extern u8 func_020256a0(Obj *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_02058f34(Obj *o)
{
    o->state = 247;
    SwapByte(10, &o->lock);
    SwapByte(1, &o->b97);
    func_02026bac(o);
    return func_020256a0(o);
}
