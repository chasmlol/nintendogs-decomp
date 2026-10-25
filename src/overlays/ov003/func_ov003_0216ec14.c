#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025490(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; u16 s2; } Obj;

void func_ov003_0216ec14(u8 *p)
{
    Obj *o = (Obj *)p;
    u32 v;
    o->s0 = 164;
    o->s1 = 21;
    o->s2 = 1;
    *(u8 *)(p + 147) = 8;
    *(u8 *)(p + 151) = 1;
    *(u8 *)(p + 152) = 6;
    func_02026bac(p);
    func_02025490(p);
    v = *(u32 *)(p + 0x948);
    *(u32 *)(p + 0x948) = v | 0x10;
}
