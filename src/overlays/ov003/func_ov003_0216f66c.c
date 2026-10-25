#pragma avoid_byte strb
#include "ctx.h"

extern void func_02025df4(u8 *p);
extern void func_02025918(u8 *p);

typedef struct {
    u8 pad0[0x93];
    u8 b93;
    u8 pad1[0xbe];
    s16 h152;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0216f66c(u8 *p)
{
    Obj *o = (Obj *)p;
    u8 old;
    o->h152 = 0x14b;
    SwapByte(14, (vu8 *)&o->b93);
    func_02025df4(p);
    func_02025918(p);
    old = SwapByte(2, (vu8 *)(p + 0xb2));
    return;
}
