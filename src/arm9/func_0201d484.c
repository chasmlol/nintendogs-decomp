#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026698(u8 *p);
extern void func_02025d14(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[2]; u16 s1; } Obj;

void func_0201d484(u8 *p)
{
    Obj *o = (Obj *)p;
    o->s0 = 17;
    o->s1 = 1;
    *(u8 *)(p + 147) = 5;
    *(u8 *)(p + 152) = 1;
    func_02026698(p);
    func_02025d14(p);
    *(u32 *)(p + 0x948) = *(u32 *)(p + 0x948) | 1;
}
