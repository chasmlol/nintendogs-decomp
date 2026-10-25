#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_02020768(u8 *p);

typedef struct {
    u8 pad0[0x93];
    u8 b93;
    u8 pad1[0xbe];
    u16 h152;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02167420(u8 *p)
{
    Obj *o = (Obj *)p;
    o->h152 = 39;
    SwapByte(5, (vu8 *)&o->b93);
    func_02026bac(p);
    func_02025a84(p);
    func_02020768(p);
}
