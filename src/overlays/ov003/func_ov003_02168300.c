#pragma avoid_byte strb
#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, s32 v);

typedef struct { u8 pad[0x152]; u16 s0; u16 s1; } Obj;

void func_ov003_02168300(u8 *p)
{
    Obj *o = (Obj *)p;
    o->s0 = 0x18c;
    o->s1 = 0x13;
    *(u8 *)(p + 151) = 1;
    func_020264f4(p);
    func_020255a4(p);
    func_0202db24(p, 8);
}
