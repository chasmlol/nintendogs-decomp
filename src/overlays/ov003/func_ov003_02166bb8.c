#pragma avoid_byte strb
#include "ctx.h"
static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }
extern void func_02026bac(int);
extern void func_02025548(int);
extern void func_02020768(int);

typedef struct { u8 pad[0x93]; u8 lock; u8 pad2[0xbe]; u16 state; } Obj;
void func_ov003_02166bb8(Obj *o)
{
    o->state = 107;
    SwapByte(14, &o->lock);
    func_02026bac((int)o);
    func_02025548((int)o);
    func_02020768((int)o);
}
