#pragma avoid_byte strb
#include "ctx.h"
typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0x4]; u8 b98; u8 pad3[0xb9]; u16 state; u8 pad4[2]; u16 state2; u8 pad5[0x7f0]; u32 flags; } Obj;
extern void func_02026bac(Obj *p);
extern u8 func_02025548(Obj *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov003_0216e648(Obj *o)
{
    u32 one;
    vu8 *q;
    o->state = 39;
    one = 1;
    o->state2 = one;
    SwapByte(5, &o->lock);
    q = (__typeof__(q))((u32)(o) + (152));
    SwapByte(one, q);
    func_02026bac(o);
    func_02025548(o);
    *(vu32 *)((u8 *)o + 0x948) = *(vu32 *)((u8 *)o + 0x948) | 4;
}
