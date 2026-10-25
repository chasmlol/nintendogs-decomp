#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 pad[0x9e8];
    u8 *inner;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020280c0(Obj *p, u16 param_2)
{
    SwapByte(1, (vu8 *)((u8 *)p + 0xd2));
    *(vu16 *)(p->inner + 6) = param_2;
}
