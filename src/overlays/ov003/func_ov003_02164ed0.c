#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);
extern void func_02034198(u8 *p);

typedef struct {
    u8 pad0[0x93];
    u8 b93;
    u8 pad1[0xbe];
    s16 h152;
    s16 h154;
    s16 h156;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02164ed0(u8 *p)
{
    Obj *o = (Obj *)p;
    o->h152 = 0;
    o->h154 = 49;
    o->h156 = 18;
    SwapByte(7, (vu8 *)&o->b93);
    func_02026bac(p);
    func_02025548(p);
    func_02034198(p);
}
