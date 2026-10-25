#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern u8 func_020255a4(u8 *p);

typedef struct {
    u8 pad0[0x93];
    u8 b93;
    u8 pad1[0x3];
    u8 b97;
    u8 pad2[0xbe - 0x4];
    s16 h152;
    s16 h154;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

u8 func_ov005_0216526c(u8 *p)
{
    Obj *o = (Obj *)p;
    o->h152 = 1;
    o->h154 = 48;
    SwapByte(9, (vu8 *)&o->b93);
    SwapByte(3, (vu8 *)&o->b97);
    func_020264f4(p);
    return func_020255a4(p);
}
