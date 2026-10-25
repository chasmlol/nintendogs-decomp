#pragma avoid_byte strb
#include "ctx.h"
typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0x4]; u8 b98; u8 pad3[0xb9]; u16 state; } Obj;
extern void func_0202675c(Obj *p);
extern u8 func_02025bb0(Obj *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
u8 func_ov003_0216ee3c(Obj *o)
{
    o->state = 18;
    SwapByte(5, &o->lock);
    SwapByte(9, &o->b98);
    func_0202675c(o);
    return func_02025bb0(o);
}
