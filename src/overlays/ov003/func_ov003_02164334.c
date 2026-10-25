#pragma avoid_byte strb
#include "ctx.h"
typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0x3]; u8 b97; u8 b98; u8 pad3[0xb8]; u16 state; u8 pad4[2]; u16 state2; u8 pad5[0x7f0]; u32 flags; } Obj;
extern void func_02025dd4(Obj *p);
extern void func_02025d14(Obj *p);
static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}
void func_ov003_02164334(Obj *o)
{
    u32 one = 1;
    u8 *q;
    o->state = 0x157;
    o->state2 = 1;
    SwapByte(12, &o->lock);
    q = (__typeof__(q))((u32)(o) + (152));
    SwapByte(one, (vu8 *)q);
    q = (__typeof__(q))((u32)(o) + (151));
    SwapByte(one, (vu8 *)q);
    func_02025dd4(o);
    func_02025d14(o);
    *(vu32 *)((u8 *)o + 0x948) = *(vu32 *)((u8 *)o + 0x948) | 4;
}
