#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern u8 func_02025bb0(u8 *p);

typedef struct {
    u8 pad0[0x93];
    u8 b93;
    u8 pad1[0x3];
    u8 b97;
    u8 pad2[0xbe - 0x4];
    u16 h152;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_0205a3e0(u8 *p)
{
    Obj *o = (Obj *)p;
    o->h152 = 18;
    SwapByte(5, (vu8 *)&o->b93);
    SwapByte(2, (vu8 *)&o->b97);
    func_0202675c(p);
    return func_02025bb0(p);
}
