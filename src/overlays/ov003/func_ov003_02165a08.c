#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025860(u8 *p);
extern void func_02034198(u8 *p);

typedef struct {
    u8 pad0[0x93];
    u8 b93;
    u8 pad1[0x3];
    u8 b97;
    u8 pad2[0xbe - 0x4];
    s16 h152;
    u8 pad3[0x2];
    s16 h156;
} Obj;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02165a08(u8 *p)
{
    Obj *o = (Obj *)p;
    o->h152 = 145;
    o->h156 = 18;
    SwapByte(19, (vu8 *)&o->b93);
    SwapByte(2, (vu8 *)&o->b97);
    func_02026494(p);
    func_02025860(p);
    func_02034198(p);
}
